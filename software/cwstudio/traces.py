"""In-memory trace storage with import/export.

Traces are appended as they are captured.  Waves are kept as individual
float32 arrays (so a settings change mid-session does not break anything) and
consolidated into a 2-D array on demand for analysis.
"""
from __future__ import annotations

import csv
import json
import logging
import os
import threading
import time
from typing import Any, Dict, List, Optional, Tuple

import numpy as np

log = logging.getLogger("cwstudio.traces")


class TraceStore:
    def __init__(self, max_traces: int = 200_000):
        self._lock = threading.RLock()
        self.max_traces = max_traces
        self.waves: List[np.ndarray] = []
        self.textins: List[bytes] = []
        self.textouts: List[bytes] = []
        self.keys: List[bytes] = []
        self.meta: Dict[str, Any] = {}
        self.created = time.time()
        self.generation = 0  # bumped on clear/import so clients can resync

    # --- basic ------------------------------------------------------------
    def __len__(self) -> int:
        return len(self.waves)

    def clear(self):
        with self._lock:
            self.waves.clear()
            self.textins.clear()
            self.textouts.clear()
            self.keys.clear()
            self.meta = {}
            self.generation += 1

    def append(self, wave: np.ndarray, textin: Optional[bytes], textout: Optional[bytes],
               key: Optional[bytes]) -> int:
        with self._lock:
            if len(self.waves) >= self.max_traces:
                raise RuntimeError(f"trace store full ({self.max_traces} traces)")
            self.waves.append(np.asarray(wave, dtype=np.float32))
            self.textins.append(bytes(textin) if textin is not None else b"")
            self.textouts.append(bytes(textout) if textout is not None else b"")
            self.keys.append(bytes(key) if key is not None else b"")
            return len(self.waves) - 1

    def get(self, i: int) -> Tuple[np.ndarray, bytes, bytes, bytes]:
        with self._lock:
            return self.waves[i], self.textins[i], self.textouts[i], self.keys[i]

    def summary(self) -> Dict[str, Any]:
        with self._lock:
            n = len(self.waves)
            lens = {len(w) for w in self.waves} if n else set()
            return {
                "count": n,
                "samples": (min(lens) if lens else 0),
                "uniform": len(lens) <= 1,
                "generation": self.generation,
                "memory_bytes": int(sum(w.nbytes for w in self.waves)),
                "meta": self.meta,
            }

    # --- array views ------------------------------------------------------
    def as_arrays(self, start: int = 0, end: Optional[int] = None):
        """Return (waves[N,S], textins[N,16], textouts[N,16], keys[N,16]) as arrays.

        Waves are truncated to the shortest trace in the range; text fields are
        zero-padded/truncated to the most common length.
        """
        with self._lock:
            end = len(self.waves) if end is None else min(end, len(self.waves))
            waves = self.waves[start:end]
            tins = self.textins[start:end]
            touts = self.textouts[start:end]
            keys = self.keys[start:end]
        if not waves:
            return (np.zeros((0, 0), np.float32), np.zeros((0, 16), np.uint8),
                    np.zeros((0, 16), np.uint8), np.zeros((0, 16), np.uint8))
        s = min(len(w) for w in waves)
        W = np.stack([w[:s] for w in waves]).astype(np.float32, copy=False)
        return W, _bytes_matrix(tins), _bytes_matrix(touts), _bytes_matrix(keys)

    def stats(self, start: int = 0, end: Optional[int] = None) -> Dict[str, np.ndarray]:
        W, _, _, _ = self.as_arrays(start, end)
        if W.shape[0] == 0:
            return {}
        return {
            "mean": W.mean(axis=0),
            "std": W.std(axis=0),
            "min": W.min(axis=0),
            "max": W.max(axis=0),
        }

    # --- export / import --------------------------------------------------
    def export(self, path: str, fmt: str = "npz") -> str:
        fmt = fmt.lower()
        W, tin, tout, key = self.as_arrays()
        path = os.path.expanduser(path)
        if fmt == "npz":
            if not path.endswith(".npz"):
                path += ".npz"
            np.savez_compressed(path, waves=W, textins=tin, textouts=tout, keys=key,
                                meta=json.dumps(self.meta))
        elif fmt == "npy":
            base = path[:-4] if path.endswith(".npy") else path
            np.save(base + "_waves.npy", W)
            np.save(base + "_textins.npy", tin)
            np.save(base + "_textouts.npy", tout)
            np.save(base + "_keys.npy", key)
            path = base + "_*.npy"
        elif fmt == "csv":
            if not path.endswith(".csv"):
                path += ".csv"
            with open(path, "w", newline="") as f:
                w = csv.writer(f)
                w.writerow(["index", "textin", "textout", "key", "samples..."])
                for i in range(W.shape[0]):
                    w.writerow([i, tin[i].tobytes().hex(), tout[i].tobytes().hex(), key[i].tobytes().hex()]
                               + [f"{x:.6g}" for x in W[i]])
        elif fmt in ("cwp", "project"):
            import chipwhisperer as cw  # local import: heavy
            from chipwhisperer.common.traces import Trace
            if path.endswith(".cwp"):
                path = path[:-4]
            proj = cw.create_project(path, overwrite=True)
            for i in range(W.shape[0]):
                proj.traces.append(Trace(W[i], bytearray(tin[i].tobytes()), bytearray(tout[i].tobytes()),
                                         bytearray(key[i].tobytes())))
            proj.save()
            proj.close(save=True)
            path = path + ".cwp"
        else:
            raise ValueError(f"unknown export format {fmt}")
        log.info("Exported %d traces to %s", W.shape[0], path)
        return path

    def import_file(self, path: str, replace: bool = True) -> int:
        path = os.path.expanduser(path)
        if path.endswith(".npz"):
            d = np.load(path, allow_pickle=False)
            W = d["waves"]
            tin = d["textins"] if "textins" in d else np.zeros((W.shape[0], 0), np.uint8)
            tout = d["textouts"] if "textouts" in d else np.zeros((W.shape[0], 0), np.uint8)
            key = d["keys"] if "keys" in d else np.zeros((W.shape[0], 0), np.uint8)
            rows = [(W[i], tin[i].tobytes(), tout[i].tobytes(), key[i].tobytes()) for i in range(W.shape[0])]
        elif path.endswith(".cwp"):
            import chipwhisperer as cw
            proj = cw.open_project(path)
            rows = []
            for t in proj.traces:
                rows.append((np.asarray(t.wave, np.float32), _to_bytes(t.textin), _to_bytes(t.textout),
                             _to_bytes(t.key)))
            proj.close(save=False)
        elif path.endswith(".npy"):
            W = np.load(path)
            rows = [(W[i], b"", b"", b"") for i in range(W.shape[0])]
        else:
            raise ValueError("supported: .npz, .cwp, .npy")
        with self._lock:
            if replace:
                self.clear()
            for r in rows:
                self.append(*r)
            self.generation += 1
        log.info("Imported %d traces from %s", len(rows), path)
        return len(rows)


def _to_bytes(v) -> bytes:
    if v is None:
        return b""
    if isinstance(v, np.ndarray):
        return v.astype(np.uint8).tobytes()
    return bytes(v)


def _bytes_matrix(items: List[bytes]) -> np.ndarray:
    if not items:
        return np.zeros((0, 16), np.uint8)
    lens = [len(b) for b in items]
    L = max(set(lens), key=lens.count)
    out = np.zeros((len(items), L), np.uint8)
    for i, b in enumerate(items):
        n = min(L, len(b))
        if n:
            out[i, :n] = np.frombuffer(b[:n], dtype=np.uint8)
    return out
