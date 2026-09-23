"""The single application state shared by all API handlers."""
from __future__ import annotations

import logging
import os
import tempfile
import threading
import time
from typing import Any, Dict, List, Optional

import numpy as np

from cwstudio import hardware, settings as cwsettings
from cwstudio.analysis import CPAAttack, MODELS
from cwstudio.capture import CaptureJob
from cwstudio.events import EventBus, trace_event
from cwstudio.glitch import GlitchJob
from cwstudio.traces import TraceStore
from cwstudio.worker import HardwareWorker

log = logging.getLogger("cwstudio.session")


class BusLogHandler(logging.Handler):
    """Forward log records (ours and ChipWhisperer's) to the event bus."""

    def __init__(self, bus: EventBus):
        super().__init__(level=logging.INFO)
        self.bus = bus

    def emit(self, record: logging.LogRecord):
        try:
            self.bus.publish("log", {
                "level": record.levelname, "logger": record.name,
                "msg": record.getMessage(),
            }, droppable=record.levelno < logging.WARNING)
        except Exception:  # noqa: BLE001
            pass


class Session:
    def __init__(self, simulate: bool = False, data_dir: Optional[str] = None):
        self.bus = EventBus()
        self.worker = HardwareWorker()
        self.worker.on_long_job_done = self._on_long_job_done
        self.store = TraceStore()
        self.scope = None
        self.target = None
        self.scope_kind: Optional[str] = None
        self.target_kind: Optional[str] = None
        self.simulate_default = simulate
        self.data_dir = data_dir or os.path.join(os.path.expanduser("~"), "ChipWhispererStudio")
        os.makedirs(self.data_dir, exist_ok=True)
        self.cpa: Optional[CPAAttack] = None
        self.last_glitch: Optional[GlitchJob] = None
        self.last_job = None
        self.serial_buffer: List[Dict[str, Any]] = []
        self._serial_lock = threading.Lock()
        self.started = time.time()
        self._log_handler = BusLogHandler(self.bus)
        logging.getLogger().addHandler(self._log_handler)
        self._cw_loggers = []
        try:
            # ChipWhisperer's loggers do not propagate to root; attach directly and raise them to INFO
            from chipwhisperer.logging import chipwhisperer_loggers
            for lg in chipwhisperer_loggers:
                lg.addHandler(self._log_handler)
                if lg.level > logging.INFO:
                    lg.setLevel(logging.INFO)
                self._cw_loggers.append(lg)
        except Exception as e:  # noqa: BLE001
            log.debug("could not attach to chipwhisperer loggers: %s", e)
        self.worker.start()
        self.worker.add_periodic("serial-poll", self._poll_serial, 0.1, only_idle=True)
        self.worker.add_periodic("status", self._push_status, 2.0, only_idle=False)

    # --- lifecycle --------------------------------------------------------
    def close(self):
        try:
            self.worker.stop_long_job()
            if self.cpa:
                self.cpa.stop()
            self.worker.call(self._disconnect_all, timeout=10)
        except Exception as e:  # noqa: BLE001
            log.debug("close: %s", e)
        self.worker.stop()
        logging.getLogger().removeHandler(self._log_handler)
        for lg in self._cw_loggers:
            lg.removeHandler(self._log_handler)

    def _disconnect_all(self):
        if self.target is not None:
            try:
                self.target.dis()
            except Exception:  # noqa: BLE001
                pass
            self.target = None
        if self.scope is not None:
            try:
                self.scope.dis()
            except Exception:  # noqa: BLE001
                pass
            self.scope = None

    # --- status -------------------------------------------------------------
    def status(self) -> Dict[str, Any]:
        job = self.worker.long_job or self.last_job
        busy = job is not None and not job.finished.is_set()
        st = {
            "scope": hardware.scope_info(self.scope),
            "target": hardware.target_info(self.target),
            "scope_kind": self.scope_kind,
            "target_kind": self.target_kind,
            "traces": self.store.summary(),
            "job": {"name": job.name, "running": busy, "error": job.error, **job.progress()} if job else None,
            "cpa": self.cpa.result.to_json() if self.cpa else None,
            "uptime": round(time.time() - self.started, 1),
            "simulate_default": self.simulate_default,
            "data_dir": self.data_dir,
            "clients": self.bus.subscriber_count,
        }
        if st["cpa"]:
            st["cpa"] = {k: v for k, v in st["cpa"].items() if k in ("model", "traces_used", "total", "done", "error")}
        return st

    def _push_status(self):
        self.bus.publish("status", self.status(), droppable=True)

    def _on_long_job_done(self, job):
        if isinstance(job, GlitchJob):
            self.last_glitch = job
        self.last_job = job
        self._push_status()

    # --- scope ---------------------------------------------------------------
    def connect_scope(self, kind: str = "auto", sn: Optional[str] = None, force: bool = False,
                      default_setup: bool = True) -> Dict[str, Any]:
        def _do():
            if self.scope is not None:
                self._disconnect_all()
            self.scope = hardware.connect_scope(kind, sn=sn, force=force)
            self.scope_kind = kind
            if default_setup:
                try:
                    self.scope.default_setup()
                except Exception as e:  # noqa: BLE001
                    log.warning("default_setup failed: %s", e)
            log.info("Connected to %s", hardware.scope_info(self.scope).get("name"))
            return hardware.scope_info(self.scope)
        info = self.worker.call(_do, timeout=180)
        self._push_status()
        return info

    def disconnect_scope(self):
        self.worker.call(self._disconnect_all)
        self.scope_kind = None
        self.target_kind = None
        self._push_status()

    def scope_settings(self) -> List[Dict[str, Any]]:
        if self.scope is None:
            return []
        return self.worker.call(cwsettings.describe, self.scope)

    def set_scope_setting(self, path: str, value: Any) -> Any:
        if self.scope is None:
            raise RuntimeError("scope not connected")
        v = self.worker.call(cwsettings.set_value, self.scope, path, value)
        self.bus.publish("setting", {"target": "scope", "path": path, "value": v})
        return v

    def scope_action(self, action: str) -> Any:
        if self.scope is None:
            raise RuntimeError("scope not connected")
        def _do():
            if action == "default_setup":
                self.scope.default_setup()
            elif action == "reset_fpga" and hasattr(self.scope, "reset_fpga"):
                self.scope.reset_fpga()
            elif action == "glitch_disable" and hasattr(self.scope, "glitch_disable"):
                self.scope.glitch_disable()
            elif action == "arm_capture":
                self.scope.arm()
                to = self.scope.capture()
                return {"timeout": bool(to)}
            else:
                raise ValueError(f"unknown action {action}")
            return {"ok": True}
        return self.worker.call(_do, timeout=60)

    # --- target ---------------------------------------------------------------
    def connect_target(self, kind: str = "SimpleSerial2", **kwargs) -> Dict[str, Any]:
        def _do():
            if self.scope is None:
                raise RuntimeError("connect a scope first")
            if self.target is not None:
                try:
                    self.target.dis()
                except Exception:  # noqa: BLE001
                    pass
                self.target = None
            self.target = hardware.connect_target(self.scope, kind, **kwargs)
            self.target_kind = kind
            log.info("Target connected: %s", kind)
            return hardware.target_info(self.target)
        info = self.worker.call(_do, timeout=60)
        self._push_status()
        return info

    def disconnect_target(self):
        def _do():
            if self.target is not None:
                try:
                    self.target.dis()
                except Exception:  # noqa: BLE001
                    pass
            self.target = None
        self.worker.call(_do)
        self.target_kind = None
        self._push_status()

    def target_settings(self) -> List[Dict[str, Any]]:
        if self.target is None:
            return []
        return self.worker.call(cwsettings.describe, self.target)

    def set_target_setting(self, path: str, value: Any) -> Any:
        if self.target is None:
            raise RuntimeError("target not connected")
        v = self.worker.call(cwsettings.set_value, self.target, path, value)
        self.bus.publish("setting", {"target": "target", "path": path, "value": v})
        return v

    def program(self, programmer: str, fw_path: str, **kwargs) -> Dict[str, Any]:
        if self.scope is None:
            raise RuntimeError("connect a scope first")
        log.info("Programming target with %s using %s", os.path.basename(fw_path), programmer)
        res = self.worker.call(hardware.program_target, self.scope, programmer, fw_path, timeout=600, **kwargs)
        log.info("Programming complete")
        return res

    def save_upload(self, filename: str, content: bytes) -> str:
        d = os.path.join(self.data_dir, "firmware")
        os.makedirs(d, exist_ok=True)
        safe = os.path.basename(filename) or "firmware.hex"
        path = os.path.join(d, safe)
        with open(path, "wb") as f:
            f.write(content)
        return path

    # --- serial console -----------------------------------------------------
    def serial_write(self, data: str, hex_mode: bool = False, newline: bool = True) -> int:
        if self.target is None:
            raise RuntimeError("target not connected")
        payload = bytes.fromhex(data.replace(" ", "")) if hex_mode else data.encode()
        if newline and not hex_mode and not payload.endswith(b"\n"):
            payload += b"\n"

        def _do():
            self.target.write(payload)
            self._record_serial("tx", payload)
            time.sleep(0.05)
            self._poll_serial()
            return len(payload)
        return self.worker.call(_do, timeout=10)

    def simpleserial(self, cmd: str, data_hex: str, read_cmd: str = "r", read_len: Optional[int] = None):
        if self.target is None:
            raise RuntimeError("target not connected")

        def _do():
            data = bytes.fromhex(data_hex.replace(" ", "")) if data_hex else b""
            self.target.simpleserial_write(cmd, bytearray(data))
            self._record_serial("tx", f"{cmd}{data.hex()}".encode())
            n = read_len if read_len is not None else getattr(self.target, "output_len", 16)
            resp = None
            try:
                resp = self.target.simpleserial_read(read_cmd, n, timeout=500)
            except Exception as e:  # noqa: BLE001
                log.warning("simpleserial read: %s", e)
            if resp is not None:
                self._record_serial("rx", f"{read_cmd}{bytes(resp).hex()}".encode())
            return {"response": bytes(resp).hex() if resp is not None else None}
        return self.worker.call(_do, timeout=10)

    def _poll_serial(self):
        t = self.target
        if t is None:
            return
        try:
            n = t.in_waiting()
        except Exception:  # noqa: BLE001
            return
        if n:
            try:
                data = t.read(n, timeout=10)
            except Exception:  # noqa: BLE001
                return
            if data:
                self._record_serial("rx", data.encode(errors="replace") if isinstance(data, str) else bytes(data))

    def _record_serial(self, direction: str, data: bytes):
        rec = {"dir": direction, "data": data.decode("utf-8", errors="replace"), "hex": data.hex(),
               "t": time.time()}
        with self._serial_lock:
            self.serial_buffer.append(rec)
            if len(self.serial_buffer) > 2000:
                del self.serial_buffer[:1000]
        self.bus.publish("serial", rec)

    # --- capture --------------------------------------------------------------
    def start_capture(self, params: Dict[str, Any]) -> Dict[str, Any]:
        if self.scope is None:
            raise RuntimeError("scope not connected")
        if params.get("clear"):
            self.store.clear()
            self.bus.publish("traces", self.store.summary())
        job = CaptureJob(self.scope, self.target, self.store, self.bus, params)
        if not self.worker.start_long_job(job):
            raise RuntimeError("another job is running")
        self.last_job = job
        return {"started": True, **job.progress()}

    def stop_job(self) -> Dict[str, Any]:
        job = self.worker.long_job
        self.worker.stop_long_job()
        return {"stopping": job.name if job else None}

    def capture_single(self, params: Dict[str, Any]) -> Dict[str, Any]:
        params = dict(params)
        params["count"] = 1
        return self.start_capture(params)

    # --- traces ---------------------------------------------------------------
    def trace_bytes(self, i: int) -> bytes:
        wave, tin, tout, key = self.store.get(i)
        ev = trace_event("trace", wave, {"index": i, "textin": tin, "textout": tout, "key": key,
                                          "generation": self.store.generation})
        return ev.frame()

    def traces_block(self, start: int, end: int, step: int = 1) -> bytes:
        """Concatenate traces start..end (exclusive) as one frame: header + f32[n_traces*S]."""
        idx = list(range(start, min(end, len(self.store)), max(1, step)))
        if not idx:
            return trace_event("traces", np.zeros(0, np.float32), {"indices": [], "samples": 0}).frame()
        waves = [self.store.waves[i] for i in idx]
        s = min(len(w) for w in waves)
        block = np.stack([w[:s] for w in waves]).astype(np.float32)
        return trace_event("traces", block.ravel(), {"indices": idx, "samples": s,
                                                     "generation": self.store.generation}).frame()

    def stats_bytes(self, start: int = 0, end: Optional[int] = None) -> bytes:
        st = self.store.stats(start, end)
        if not st:
            return trace_event("stats", np.zeros(0, np.float32), {"fields": [], "samples": 0}).frame()
        fields = ["mean", "std", "min", "max"]
        block = np.stack([st[f] for f in fields]).astype(np.float32)
        return trace_event("stats", block.ravel(), {"fields": fields, "samples": int(block.shape[1]),
                                                    "count": len(self.store)}).frame()

    def export_traces(self, path: str, fmt: str) -> str:
        if not os.path.isabs(os.path.expanduser(path)):
            path = os.path.join(self.data_dir, path)
        os.makedirs(os.path.dirname(os.path.abspath(os.path.expanduser(path))), exist_ok=True)
        out = self.store.export(path, fmt)
        self.bus.publish("traces", self.store.summary())
        return out

    def import_traces(self, path: str, replace: bool = True) -> int:
        n = self.store.import_file(path, replace)
        self.bus.publish("traces", self.store.summary())
        return n

    # --- analysis ---------------------------------------------------------------
    def start_cpa(self, params: Dict[str, Any]) -> Dict[str, Any]:
        if self.cpa and not self.cpa.result.done:
            raise RuntimeError("CPA already running")
        start = int(params.get("trace_start", 0) or 0)
        end = params.get("trace_end")
        end = int(end) if end else None
        W, tin, tout, key = self.store.as_arrays(start, end)
        if W.shape[0] < 2:
            raise RuntimeError("need at least 2 traces")
        model = params.get("model", "sbox_hw")
        if model not in MODELS:
            raise ValueError(f"unknown model {model}")
        known = params.get("known_key")
        known_b = bytes.fromhex(known.replace(" ", "")) if known else None
        if known_b is None and params.get("use_stored_key", True) and key.shape[1] >= 16 and key.shape[0]:
            # Use the stored key if every trace shares it (fixed-key capture)
            if np.all(key == key[0]) and np.any(key[0]):
                known_b = key[0].tobytes()
                if model.startswith("lastround"):
                    from cwstudio.aes import last_round_key
                    known_b = last_round_key(known_b)
        pr = params.get("point_range")
        pr = (int(pr[0]), int(pr[1])) if pr else None

        def cb(res):
            self.bus.publish("cpa", res.to_json(), droppable=not res.done)
        self.cpa = CPAAttack(W, tin, tout, model=model, point_range=pr,
                             report_every=int(params.get("report_every", 50)), known_key=known_b, callback=cb,
                             bytes_to_attack=params.get("bytes"))
        self.cpa.start()
        return {"started": True, "traces": int(W.shape[0]), "samples": int(W.shape[1]), "model": model}

    def stop_cpa(self):
        if self.cpa:
            self.cpa.stop()

    def cpa_result(self) -> Optional[Dict[str, Any]]:
        return self.cpa.result.to_json() if self.cpa else None

    def cpa_corr_bytes(self, b: int) -> bytes:
        if not self.cpa:
            raise RuntimeError("no CPA result")
        r = self.cpa.result
        return trace_event("corr", r.best_corr_trace[b], {"byte": b, "offset": self.cpa.lo,
                                                          "guess": int(np.argmax(r.corr_max[b]))}).frame()

    # --- glitch -------------------------------------------------------------------
    def start_glitch(self, params: Dict[str, Any]) -> Dict[str, Any]:
        if self.scope is None:
            raise RuntimeError("scope not connected")
        job = GlitchJob(self.scope, self.target, self.bus, params)
        if not self.worker.start_long_job(job):
            raise RuntimeError("another job is running")
        self.last_glitch = job
        self.last_job = job
        return {"started": True}

    def glitch_results(self) -> Dict[str, Any]:
        j = self.last_glitch
        if j is None:
            return {"results": [], "parameters": [], "counts": {}}
        return {"results": j.results, "parameters": [p["path"] for p in j.params], "counts": j.counts,
                "running": not j.finished.is_set(), "error": j.error, **j.progress()}

    def export_glitch(self, path: str) -> str:
        if self.last_glitch is None:
            raise RuntimeError("no glitch results")
        if not os.path.isabs(os.path.expanduser(path)):
            path = os.path.join(self.data_dir, path)
        os.makedirs(os.path.dirname(os.path.abspath(os.path.expanduser(path))), exist_ok=True)
        return self.last_glitch.export_csv(path)
