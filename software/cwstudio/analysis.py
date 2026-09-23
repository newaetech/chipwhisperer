"""Progressive CPA (Correlation Power Analysis) for AES-128.

Implemented with numpy accumulators so results can be reported every
`report_every` traces without recomputation.  For each key byte b and each
of the 256 guesses g we track the sums needed for Pearson correlation between
the hypothetical leakage h(g, textin) and every sample of the trace.
"""
from __future__ import annotations

import logging
import threading
import time
from typing import Any, Callable, Dict, List, Optional

import numpy as np

from cwstudio.aes import HW, INV_SBOX, INV_SHIFT, SBOX

log = logging.getLogger("cwstudio.analysis")

MODELS: Dict[str, Dict[str, Any]] = {
    "sbox_hw": {"label": "HW of SBox output (round 1, software AES)", "uses": "textin"},
    "ptkey_hw": {"label": "HW of plaintext XOR key (round 1)", "uses": "textin"},
    "invsbox_hw": {"label": "HW of inverse SBox output (decryption, round 1)", "uses": "textin"},
    "lastround_hd": {"label": "HD of last round state (hardware AES, uses ciphertext)", "uses": "textout"},
    "lastround_hw": {"label": "HW of last round SBox input (uses ciphertext)", "uses": "textout"},
}

GUESSES = np.arange(256, dtype=np.uint8)


def hypotheses(model: str, tin: np.ndarray, tout: np.ndarray, b: int) -> np.ndarray:
    """Return float32 matrix (n_traces, 256) of hypothetical leakage for byte b."""
    if model == "sbox_hw":
        x = tin[:, b][:, None] ^ GUESSES[None, :]
        return HW[SBOX[x]].astype(np.float32)
    if model == "ptkey_hw":
        x = tin[:, b][:, None] ^ GUESSES[None, :]
        return HW[x].astype(np.float32)
    if model == "invsbox_hw":
        x = tin[:, b][:, None] ^ GUESSES[None, :]
        return HW[INV_SBOX[x]].astype(np.float32)
    if model in ("lastround_hd", "lastround_hw"):
        # ciphertext byte b, state before last SubBytes at position INV_SHIFT[b]
        ct_b = tout[:, b][:, None]
        st = INV_SBOX[ct_b ^ GUESSES[None, :]]
        if model == "lastround_hw":
            return HW[st].astype(np.float32)
        ct_prev = tout[:, INV_SHIFT[b]][:, None]
        return HW[st ^ ct_prev].astype(np.float32)
    raise ValueError(f"unknown model {model}")


def recover_key_from_lastround(rk10: List[int]) -> Optional[bytes]:
    """Invert the AES key schedule from round-10 key bytes."""
    try:
        from cwstudio.aes import RCON
        rk = [list(rk10)]
        k = list(rk10)
        for rnd in range(10, 0, -1):
            prev = [0] * 16
            for i in range(15, 3, -1):
                prev[i] = k[i] ^ k[i - 4]
            t = prev[13:16] + prev[12:13]
            t = [int(SBOX[x]) for x in t]
            t[0] ^= RCON[rnd - 1]
            for i in range(4):
                prev[i] = k[i] ^ t[i]
            k = prev
            rk.append(k)
        return bytes(k)
    except Exception:  # noqa: BLE001
        return None


class CPAResult:
    def __init__(self, model: str, n_bytes: int = 16):
        self.model = model
        self.n_bytes = n_bytes
        self.traces_used = 0
        self.total = 0
        self.corr_max = np.zeros((n_bytes, 256), np.float32)   # max |corr| over samples per guess
        self.corr_argmax = np.zeros((n_bytes, 256), np.int32)
        self.best_corr_trace: List[np.ndarray] = [np.zeros(0, np.float32)] * n_bytes  # corr vs sample, best guess
        self.history: List[Dict[str, Any]] = []   # [{traces, pge:[16], ranks..}]
        self.known_key: Optional[bytes] = None
        self.done = False
        self.error: Optional[str] = None
        self.started = time.time()
        self.elapsed = 0.0

    def best_guesses(self, top: int = 5) -> List[Dict[str, Any]]:
        out = []
        for b in range(self.n_bytes):
            order = np.argsort(-self.corr_max[b])
            guesses = [{"guess": int(g), "corr": float(self.corr_max[b, g]), "sample": int(self.corr_argmax[b, g])}
                       for g in order[:top]]
            row = {"byte": b, "top": guesses, "best": int(order[0])}
            if self.known_key is not None and len(self.known_key) > b:
                kb = int(self.known_key[b])
                row["known"] = kb
                row["pge"] = int(np.where(order == kb)[0][0])
            out.append(row)
        return out

    def to_json(self) -> Dict[str, Any]:
        best = [int(np.argmax(self.corr_max[b])) for b in range(self.n_bytes)]
        payload = {
            "model": self.model,
            "traces_used": self.traces_used,
            "total": self.total,
            "done": self.done,
            "error": self.error,
            "elapsed": round(self.elapsed, 2),
            "best_key": bytes(best).hex(),
            "bytes": self.best_guesses(),
            "history": self.history,
            "known_key": self.known_key.hex() if self.known_key else None,
        }
        if self.model.startswith("lastround"):
            rk = recover_key_from_lastround(best)
            payload["recovered_master_key"] = rk.hex() if rk else None
        return payload


class CPAAttack:
    """Runs on its own thread; call `start()` then poll `result` / listen to callback."""

    def __init__(self, waves: np.ndarray, tin: np.ndarray, tout: np.ndarray, model: str = "sbox_hw",
                 point_range: Optional[tuple] = None, report_every: int = 50,
                 known_key: Optional[bytes] = None, callback: Optional[Callable[[CPAResult], None]] = None,
                 bytes_to_attack: Optional[List[int]] = None):
        self.waves = waves
        self.tin = tin
        self.tout = tout
        self.model = model
        if point_range:
            lo, hi = int(point_range[0]), int(point_range[1])
            self.lo, self.hi = max(0, lo), min(waves.shape[1], hi if hi > 0 else waves.shape[1])
        else:
            self.lo, self.hi = 0, waves.shape[1]
        self.report_every = max(1, int(report_every))
        self.callback = callback
        self.bytes_to_attack = bytes_to_attack or list(range(16))
        self.result = CPAResult(model)
        self.result.total = int(waves.shape[0])
        self.result.known_key = known_key
        self._stop = threading.Event()
        self._thread = threading.Thread(target=self._run, name="cw-cpa", daemon=True)

    def start(self):
        self._thread.start()

    def stop(self):
        self._stop.set()

    def join(self, timeout=None):
        self._thread.join(timeout)

    def _run(self):
        r = self.result
        try:
            uses = MODELS[self.model]["uses"]
            src = self.tin if uses == "textin" else self.tout
            if src.shape[1] < 16:
                raise ValueError(f"model needs 16 bytes of {uses}, traces have {src.shape[1]}")
            N, S = self.waves.shape[0], self.hi - self.lo
            if N < 2 or S < 1:
                raise ValueError("need at least 2 traces and 1 sample")
            nb = len(self.bytes_to_attack)
            sum_h = np.zeros((nb, 256), np.float64)
            sum_h2 = np.zeros((nb, 256), np.float64)
            sum_t = np.zeros(S, np.float64)
            sum_t2 = np.zeros(S, np.float64)
            sum_ht = np.zeros((nb, 256, S), np.float64)
            n = 0
            chunk = max(self.report_every, 1)
            for start in range(0, N, chunk):
                if self._stop.is_set():
                    break
                end = min(N, start + chunk)
                W = self.waves[start:end, self.lo:self.hi].astype(np.float64)
                sum_t += W.sum(axis=0)
                sum_t2 += (W * W).sum(axis=0)
                for i, b in enumerate(self.bytes_to_attack):
                    H = hypotheses(self.model, self.tin[start:end], self.tout[start:end], b).astype(np.float64)
                    sum_h[i] += H.sum(axis=0)
                    sum_h2[i] += (H * H).sum(axis=0)
                    sum_ht[i] += H.T @ W
                n = end
                self._report(n, sum_h, sum_h2, sum_t, sum_t2, sum_ht)
            r.done = True
        except Exception as e:  # noqa: BLE001
            log.exception("CPA failed")
            r.error = f"{type(e).__name__}: {e}"
            r.done = True
        r.elapsed = time.time() - r.started
        if self.callback:
            self.callback(r)

    def _report(self, n, sum_h, sum_h2, sum_t, sum_t2, sum_ht):
        r = self.result
        with np.errstate(divide="ignore", invalid="ignore"):
            var_h = n * sum_h2 - sum_h ** 2                     # (nb,256)
            var_t = n * sum_t2 - sum_t ** 2                     # (S,)
            num = n * sum_ht - sum_h[:, :, None] * sum_t[None, None, :]
            den = np.sqrt(var_h[:, :, None] * var_t[None, None, :])
            corr = np.abs(num / den)
            corr[~np.isfinite(corr)] = 0.0
        pge = []
        for i, b in enumerate(self.bytes_to_attack):
            r.corr_max[b] = corr[i].max(axis=1)
            r.corr_argmax[b] = corr[i].argmax(axis=1) + self.lo
            best = int(np.argmax(r.corr_max[b]))
            r.best_corr_trace[b] = (num[i, best] / den[i, best]).astype(np.float32)
            if r.known_key is not None and len(r.known_key) > b:
                order = np.argsort(-r.corr_max[b])
                pge.append(int(np.where(order == int(r.known_key[b]))[0][0]))
        r.traces_used = int(n)
        r.elapsed = time.time() - r.started
        entry = {"traces": int(n), "best_key": bytes(int(np.argmax(r.corr_max[b])) for b in range(16)).hex(),
                 "max_corr": [float(r.corr_max[b].max()) for b in range(16)]}
        if pge:
            entry["pge"] = pge
        r.history.append(entry)
        if self.callback:
            self.callback(r)
