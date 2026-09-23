"""The single hardware thread.

`chipwhisperer` scope/target objects are not thread-safe and the USB
transport keeps state between calls, so every hardware access in Studio is
funnelled through one `HardwareWorker` thread.

Two kinds of work are supported:

* **short jobs** - a callable submitted with `submit()`/`call()`; runs to
  completion and resolves a `Future`.
* **one long job** - an object with a `step()` method (see `LongJob`).  The
  worker calls `step()` repeatedly and services queued short jobs between
  steps, so the UI stays responsive during a long capture or glitch sweep.
"""
from __future__ import annotations

import logging
import queue
import threading
import time
import traceback
from concurrent.futures import Future
from typing import Any, Callable, Dict, List, Optional

log = logging.getLogger("cwstudio.worker")


class LongJob:
    """Base class for interleaved long-running hardware jobs."""

    name = "job"

    def __init__(self):
        self._stop = threading.Event()
        self.error: Optional[str] = None
        self.finished = threading.Event()
        self.started_at: Optional[float] = None
        self.ended_at: Optional[float] = None

    # --- to be implemented by subclasses ---------------------------------
    def start(self) -> None:
        """Called once on the worker thread before the first step."""

    def step(self) -> bool:
        """Do a small unit of work. Return True when the job is complete."""
        raise NotImplementedError

    def finish(self) -> None:
        """Called once on the worker thread after completion, stop or error."""

    def progress(self) -> Dict[str, Any]:
        return {}

    # --- control ----------------------------------------------------------
    def request_stop(self):
        self._stop.set()

    @property
    def stop_requested(self) -> bool:
        return self._stop.is_set()


class PeriodicTask:
    __slots__ = ("name", "fn", "interval", "next_run", "only_idle")

    def __init__(self, name: str, fn: Callable[[], None], interval: float, only_idle: bool):
        self.name = name
        self.fn = fn
        self.interval = interval
        self.next_run = 0.0
        self.only_idle = only_idle


class HardwareWorker:
    def __init__(self):
        self._q: "queue.Queue[tuple]" = queue.Queue()
        self._thread = threading.Thread(target=self._run, name="cw-hardware", daemon=True)
        self._running = False
        self._long: Optional[LongJob] = None
        self._long_lock = threading.Lock()
        self._periodic: List[PeriodicTask] = []
        self._periodic_lock = threading.Lock()
        self.on_long_job_done: Optional[Callable[[LongJob], None]] = None
        self.busy = False

    # --- lifecycle --------------------------------------------------------
    def start(self):
        self._running = True
        self._thread.start()

    def stop(self, timeout: float = 5.0):
        self._running = False
        self.stop_long_job()
        self._q.put((None, None, None, None))
        self._thread.join(timeout=timeout)

    @property
    def is_worker_thread(self) -> bool:
        return threading.current_thread() is self._thread

    # --- short jobs -------------------------------------------------------
    def submit(self, fn: Callable, *args, **kwargs) -> Future:
        fut: Future = Future()
        if self.is_worker_thread:
            # Re-entrant call from a job on the worker thread: run inline.
            try:
                fut.set_result(fn(*args, **kwargs))
            except BaseException as e:  # noqa: BLE001
                fut.set_exception(e)
            return fut
        self._q.put((fn, args, kwargs, fut))
        return fut

    def call(self, fn: Callable, *args, timeout: Optional[float] = 120.0, **kwargs) -> Any:
        """Run `fn` on the hardware thread and wait for its result."""
        return self.submit(fn, *args, **kwargs).result(timeout=timeout)

    # --- long job ---------------------------------------------------------
    def start_long_job(self, job: LongJob) -> bool:
        with self._long_lock:
            if self._long is not None and not self._long.finished.is_set():
                return False
            job.started_at = time.time()
            self._long = job
            self._q.put((self._begin_long, (job,), {}, Future()))
            return True

    def _begin_long(self, job: LongJob):
        try:
            job.start()
        except BaseException as e:  # noqa: BLE001
            job.error = f"{type(e).__name__}: {e}"
            log.error("Long job %s failed to start: %s", job.name, job.error)
            log.debug(traceback.format_exc())
            self._end_long(job)

    def _end_long(self, job: LongJob):
        try:
            job.finish()
        except BaseException as e:  # noqa: BLE001
            log.error("Long job %s finish() failed: %s", job.name, e)
        job.ended_at = time.time()
        job.finished.set()
        with self._long_lock:
            if self._long is job:
                self._long = None
        if self.on_long_job_done:
            try:
                self.on_long_job_done(job)
            except Exception:  # noqa: BLE001
                log.exception("on_long_job_done failed")

    def stop_long_job(self):
        with self._long_lock:
            job = self._long
        if job is not None:
            job.request_stop()

    @property
    def long_job(self) -> Optional[LongJob]:
        with self._long_lock:
            return self._long

    # --- periodic tasks ---------------------------------------------------
    def add_periodic(self, name: str, fn: Callable[[], None], interval: float, only_idle: bool = True):
        with self._periodic_lock:
            self._periodic = [p for p in self._periodic if p.name != name]
            self._periodic.append(PeriodicTask(name, fn, interval, only_idle))

    def remove_periodic(self, name: str):
        with self._periodic_lock:
            self._periodic = [p for p in self._periodic if p.name != name]

    # --- main loop --------------------------------------------------------
    def _run(self):
        while self._running:
            long = self.long_job
            active_long = long is not None and not long.finished.is_set()
            try:
                item = self._q.get(timeout=0.0 if active_long else 0.05)
            except queue.Empty:
                item = None
            if item is not None:
                fn, args, kwargs, fut = item
                if fn is None:
                    break
                self.busy = True
                try:
                    res = fn(*args, **kwargs)
                    fut.set_result(res)
                except BaseException as e:  # noqa: BLE001
                    log.debug("job %s raised: %s", getattr(fn, "__name__", fn), e)
                    fut.set_exception(e)
                finally:
                    self.busy = False
                continue
            if active_long:
                if long.stop_requested:
                    self._end_long(long)
                    continue
                try:
                    done = long.step()
                except BaseException as e:  # noqa: BLE001
                    long.error = f"{type(e).__name__}: {e}"
                    log.error("Long job %s failed: %s", long.name, long.error)
                    log.debug(traceback.format_exc())
                    done = True
                if done:
                    self._end_long(long)
                continue
            # Idle: run periodic tasks.
            now = time.monotonic()
            with self._periodic_lock:
                tasks = list(self._periodic)
            for t in tasks:
                if t.next_run <= now and (not t.only_idle or not active_long):
                    t.next_run = now + t.interval
                    try:
                        t.fn()
                    except Exception as e:  # noqa: BLE001
                        log.debug("periodic %s failed: %s", t.name, e)
