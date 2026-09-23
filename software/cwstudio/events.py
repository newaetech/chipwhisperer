"""Thread-safe event bus that fans events out to WebSocket subscribers.

Producers may live on any thread (the hardware worker, the analysis thread,
logging handlers).  Consumers are asyncio coroutines owned by the uvicorn
event loop.  Each subscriber has a bounded queue; if a slow client falls
behind, the oldest *droppable* events are discarded rather than blocking
producers.
"""
from __future__ import annotations

import asyncio
import json
import struct
import threading
import time
from collections import deque
from typing import Any, Deque, Dict, List, Optional

import numpy as np


class Event:
    __slots__ = ("kind", "payload", "binary", "droppable")

    def __init__(self, kind: str, payload: Dict[str, Any], binary: Optional[bytes] = None,
                 droppable: bool = False):
        self.kind = kind
        self.payload = payload
        self.binary = binary
        self.droppable = droppable

    def frame(self) -> Any:
        """Serialise to a WebSocket frame: str (JSON) or bytes (binary)."""
        msg = dict(self.payload)
        msg["type"] = self.kind
        if self.binary is None:
            return json.dumps(msg, default=_json_default)
        header = json.dumps(msg, default=_json_default).encode("utf-8")
        return struct.pack("<I", len(header)) + header + self.binary


def _json_default(o):
    if isinstance(o, (np.integer,)):
        return int(o)
    if isinstance(o, (np.floating,)):
        return float(o)
    if isinstance(o, np.ndarray):
        return o.tolist()
    if isinstance(o, (bytes, bytearray)):
        return bytes(o).hex()
    return str(o)


def trace_event(kind: str, wave: np.ndarray, meta: Dict[str, Any], droppable: bool = True) -> Event:
    """Build a binary trace event: header JSON followed by float32 samples."""
    w = np.ascontiguousarray(wave, dtype="<f4")
    payload = dict(meta)
    payload["n"] = int(w.shape[0])
    payload["dtype"] = "f32"
    return Event(kind, payload, w.tobytes(), droppable=droppable)


class Subscriber:
    def __init__(self, loop: asyncio.AbstractEventLoop, maxsize: int = 512):
        self.loop = loop
        self.queue: asyncio.Queue = asyncio.Queue(maxsize=maxsize)
        self.dropped = 0

    def _put(self, ev: Event):
        # Runs on the event loop thread.
        if self.queue.full():
            if ev.droppable:
                self.dropped += 1
                return
            # Make room by discarding the oldest droppable event, else the oldest.
            try:
                items = []
                victim_removed = False
                while not self.queue.empty():
                    item = self.queue.get_nowait()
                    if not victim_removed and item.droppable:
                        victim_removed = True
                        self.dropped += 1
                        continue
                    items.append(item)
                if not victim_removed and items:
                    items.pop(0)
                    self.dropped += 1
                for it in items:
                    self.queue.put_nowait(it)
            except Exception:
                pass
        try:
            self.queue.put_nowait(ev)
        except asyncio.QueueFull:
            self.dropped += 1


class EventBus:
    def __init__(self):
        self._lock = threading.Lock()
        self._subs: List[Subscriber] = []
        self._loop: Optional[asyncio.AbstractEventLoop] = None
        # Recent JSON events kept for late joiners / REST polling of logs.
        self.history: Deque[Dict[str, Any]] = deque(maxlen=2000)
        self._seq = 0

    def attach_loop(self, loop: asyncio.AbstractEventLoop):
        self._loop = loop

    def subscribe(self) -> Subscriber:
        assert self._loop is not None, "EventBus.attach_loop() must be called first"
        sub = Subscriber(self._loop)
        with self._lock:
            self._subs.append(sub)
        return sub

    def unsubscribe(self, sub: Subscriber):
        with self._lock:
            if sub in self._subs:
                self._subs.remove(sub)

    @property
    def subscriber_count(self) -> int:
        with self._lock:
            return len(self._subs)

    def publish(self, kind: str, payload: Optional[Dict[str, Any]] = None, binary: Optional[bytes] = None,
                droppable: bool = False):
        self.publish_event(Event(kind, payload or {}, binary, droppable))

    def publish_event(self, ev: Event):
        with self._lock:
            self._seq += 1
            ev.payload.setdefault("seq", self._seq)
            ev.payload.setdefault("ts", time.time())
            if ev.binary is None:
                rec = dict(ev.payload)
                rec["type"] = ev.kind
                self.history.append(rec)
            subs = list(self._subs)
            loop = self._loop
        if loop is None or not subs:
            return
        for s in subs:
            try:
                loop.call_soon_threadsafe(s._put, ev)
            except RuntimeError:
                # Loop closed during shutdown.
                pass

    def history_since(self, seq: int, kinds: Optional[List[str]] = None) -> List[Dict[str, Any]]:
        with self._lock:
            items = [e for e in self.history if e.get("seq", 0) > seq]
        if kinds:
            items = [e for e in items if e.get("type") in kinds]
        return items
