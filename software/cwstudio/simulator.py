"""Simulated ChipWhisperer scope and SimpleSerial AES target.

The simulator implements the subset of the `chipwhisperer` API that Studio
uses (`arm/capture/get_last_trace`, `_dict_repr`, settings properties,
`simpleserial_write/read`, `set_key`, ...).  It produces traces that leak the
Hamming weight of the first-round S-box output, so a CPA attack recovers the
key from a few hundred traces, and it models a glitch-vulnerable loop so the
glitch sweep UI can be exercised.
"""
from __future__ import annotations

import logging
import threading
import time
from collections import OrderedDict
from typing import Any, Dict, List, Optional

import numpy as np

from cwstudio.aes import HW, SBOX, encrypt_block

log = logging.getLogger("cwstudio.sim")


class _Settings:
    """Base class: subclasses declare FIELDS = [(name, default, doc), ...]."""

    FIELDS: List[tuple] = []

    def __init__(self):
        for name, default, _doc in self.FIELDS:
            object.__setattr__(self, name, default)

    def _dict_repr(self):
        rtn = OrderedDict()
        for name, _default, _doc in self.FIELDS:
            rtn[name] = getattr(self, name)
        return rtn

    def __repr__(self):
        return f"{type(self).__name__}({dict(self._dict_repr())})"


def _make_props(cls):
    """Turn FIELDS into real properties so settings introspection sees docs/setters."""
    for name, default, doc in cls.FIELDS:
        priv = "_" + name

        def getter(self, priv=priv):
            return getattr(self, priv)

        def setter(self, v, priv=priv, name=name):
            validate = getattr(self, "_validate_" + name, None)
            if validate:
                v = validate(v)
            setattr(self, priv, v)

        setattr(cls, name, property(getter, setter, doc=doc))
    orig_init = cls.__init__

    def __init__(self, *a, **k):
        for name, default, _doc in self.FIELDS:
            setattr(self, "_" + name, default)
        orig_init(self, *a, **k)

    cls.__init__ = __init__
    return cls


@_make_props
class SimGain(_Settings):
    FIELDS = [
        ("mode", "high", "Gain stage: 'low' or 'high'."),
        ("gain", 30, "Raw gain setting 0..78."),
        ("db", 25.0, "Gain in dB (derived)."),
    ]

    def __init__(self):
        pass

    def _validate_gain(self, v):
        v = int(v)
        if not 0 <= v <= 78:
            raise ValueError("gain must be 0..78")
        self._db = round(v * 0.6 + (5 if self._mode == "high" else -10), 1)
        return v


@_make_props
class SimADC(_Settings):
    FIELDS = [
        ("state", False, "Whether the ADC is currently armed (read only)."),
        ("basic_mode", "rising_edge", "Trigger mode: rising_edge, falling_edge, low, high."),
        ("timeout", 2.0, "Capture timeout in seconds."),
        ("offset", 0, "Number of samples to skip after the trigger."),
        ("presamples", 0, "Samples to record before the trigger."),
        ("samples", 5000, "Number of ADC samples to record in a single capture (max 24400)."),
        ("decimate", 1, "Keep one sample out of every `decimate`."),
        ("trig_count", 0, "Number of ADC clock cycles the trigger was active (read only)."),
    ]

    def __init__(self):
        pass

    def _validate_samples(self, v):
        v = int(v)
        if not 1 <= v <= 131070:
            raise ValueError("samples must be 1..131070")
        return v

    def _validate_basic_mode(self, v):
        if v not in ("rising_edge", "falling_edge", "low", "high"):
            raise ValueError("invalid trigger mode")
        return v


@_make_props
class SimClock(_Settings):
    FIELDS = [
        ("adc_src", "clkgen_x4", "ADC clock source."),
        ("adc_freq", 29538459, "ADC sampling frequency (derived)."),
        ("adc_locked", True, "ADC DCM locked (read only)."),
        ("clkgen_src", "system", "CLKGEN source."),
        ("clkgen_freq", 7384615, "Target clock frequency in Hz."),
        ("clkgen_locked", True, "CLKGEN locked (read only)."),
        ("freq_ctr", 7384615, "Frequency counter reading (read only)."),
    ]

    def __init__(self):
        pass

    def _validate_clkgen_freq(self, v):
        v = float(v)
        self._adc_freq = int(v * 4)
        self._freq_ctr = int(v)
        return int(v)


@_make_props
class SimTrigger(_Settings):
    FIELDS = [
        ("triggers", "tio4", "Trigger pin(s), e.g. 'tio4' or 'tio1 or tio2'."),
        ("module", "basic", "Trigger module."),
    ]

    def __init__(self):
        pass


@_make_props
class SimIO(_Settings):
    FIELDS = [
        ("tio1", "serial_rx", "Target IO1 function."),
        ("tio2", "serial_tx", "Target IO2 function."),
        ("tio3", "high_z", "Target IO3 function."),
        ("tio4", "high_z", "Target IO4 function."),
        ("pdid", "high_z", "PDID pin state."),
        ("pdic", "high_z", "PDIC pin state."),
        ("nrst", "high_z", "nRST pin state."),
        ("hs2", "clkgen", "HS2 output: clkgen, glitch or disabled."),
        ("target_pwr", True, "Target power switch."),
        ("glitch_hp", False, "High-power crowbar MOSFET."),
        ("glitch_lp", False, "Low-power crowbar MOSFET."),
    ]

    def __init__(self):
        pass


@_make_props
class SimGlitch(_Settings):
    FIELDS = [
        ("enabled", False, "Enable the glitch module (Husky-style)."),
        ("clk_src", "clkgen", "Glitch clock source."),
        ("width", 0.0, "Glitch pulse width, percent of a clock period (-49.8..49.8)."),
        ("width_fine", 0, "Fine width adjust."),
        ("offset", 0.0, "Glitch offset, percent of a clock period."),
        ("offset_fine", 0, "Fine offset adjust."),
        ("trigger_src", "manual", "continuous, manual, ext_single, ext_continuous."),
        ("arm_timing", "after_scope", "no_glitch, before_scope, after_scope."),
        ("ext_offset", 0, "Clock cycles between trigger and glitch."),
        ("repeat", 1, "Number of consecutive glitch pulses."),
        ("output", "clock_xor", "clock_xor, clock_or, glitch_only, clock_only, enable_only."),
    ]

    def __init__(self):
        pass


class SimScope:
    """A scope that behaves like a ChipWhisperer-Lite driving `SimTarget`."""

    _is_husky = False
    _name = "ChipWhisperer-Simulator"

    def __init__(self, seed: Optional[int] = None):
        self.sn = "SIM000001"
        self.fw_version = {"major": 0, "minor": 1, "debug": 0}
        self.gain = SimGain()
        self.adc = SimADC()
        self.clock = SimClock()
        self.trigger = SimTrigger()
        self.io = SimIO()
        self.glitch = SimGlitch()
        self.connectStatus = True
        self._armed = False
        self._last_trace = np.zeros(0, np.float32)
        self._rng = np.random.default_rng(seed)
        self.target: Optional["SimTarget"] = None
        self.noise = 0.02
        self.leak_amplitude = 0.04
        self.leak_start = 60           # sample index of first S-box leak
        self.leak_spacing = 45         # samples between successive S-box bytes
        self.capture_delay = 0.0       # extra latency per capture (seconds) to mimic USB

    # --- API used by Studio ------------------------------------------------
    def _dict_repr(self):
        rtn = OrderedDict()
        rtn["sn"] = self.sn
        rtn["fw_version"] = self.fw_version
        rtn["gain"] = self.gain._dict_repr()
        rtn["adc"] = self.adc._dict_repr()
        rtn["clock"] = self.clock._dict_repr()
        rtn["trigger"] = self.trigger._dict_repr()
        rtn["io"] = self.io._dict_repr()
        rtn["glitch"] = self.glitch._dict_repr()
        return rtn

    def __repr__(self):
        return f"SimScope({dict(self._dict_repr())})"

    def _getCWType(self):
        return "cwsim"

    def get_name(self):
        return self._name

    def default_setup(self, verbose=True):
        self.gain.gain = 30
        self.adc.samples = 5000
        self.adc.offset = 0
        self.adc.basic_mode = "rising_edge"
        self.clock.clkgen_freq = 7.37e6
        self.clock.adc_src = "clkgen_x4"
        self.trigger.triggers = "tio4"
        self.io.tio1 = "serial_rx"
        self.io.tio2 = "serial_tx"
        self.io.hs2 = "clkgen"

    def con(self, **kwargs):
        self.connectStatus = True
        return True

    def dis(self):
        self.connectStatus = False
        return True

    def arm(self):
        if not self.connectStatus:
            raise OSError("scope not connected")
        self._armed = True
        self.adc._state = True

    def capture(self, poll_done: bool = False) -> bool:
        """Return True on timeout (like the real API)."""
        if not self._armed:
            return True
        deadline = time.time() + float(self.adc.timeout)
        while self.target is None or not self.target._triggered:
            if time.time() > deadline:
                self._armed = False
                self.adc._state = False
                return True
            time.sleep(0.0005)
        if self.capture_delay:
            time.sleep(self.capture_delay)
        self._last_trace = self._synth(self.target._last_pt, self.target._key)
        self.target._triggered = False
        self._armed = False
        self.adc._state = False
        self.adc._trig_count = int(self.leak_start + 16 * self.leak_spacing)
        return False

    def get_last_trace(self, as_int: bool = False) -> np.ndarray:
        if as_int:
            return (self._last_trace * 512).astype(np.int16)
        return self._last_trace

    # --- leakage model ------------------------------------------------------
    def _synth(self, pt: bytes, key: bytes) -> np.ndarray:
        n = int(self.adc.samples)
        gain_scale = (0.6 + self.gain.gain / 78.0) * (1.4 if self.gain.mode == "high" else 0.7)
        t = np.arange(n, dtype=np.float32)
        # Background: clock ripple + slow envelope + noise
        clk = 0.03 * np.sin(2 * np.pi * t / 4.0)
        env = 0.02 * np.sin(2 * np.pi * t / 700.0)
        wave = clk + env + self._rng.normal(0, self.noise, n).astype(np.float32)
        # Round 1 S-box leakage: one bump per byte, amplitude ~ HW(sbox(pt^k))
        if pt and key and len(pt) >= 16 and len(key) >= 16:
            offset = int(self.adc.offset)
            for b in range(16):
                center = self.leak_start + b * self.leak_spacing - offset
                if 0 <= center < n:
                    hw = int(HW[SBOX[pt[b] ^ key[b]]])
                    width = 6
                    lo, hi = max(0, center - 3 * width), min(n, center + 3 * width)
                    idx = np.arange(lo, hi)
                    bump = np.exp(-0.5 * ((idx - center) / width) ** 2)
                    wave[lo:hi] -= (self.leak_amplitude * (hw - 4) + 0.15) * bump
        # Rounds 2..10 as generic activity (no key dependence)
        r_start = self.leak_start + 16 * self.leak_spacing - int(self.adc.offset)
        for r in range(9):
            c = r_start + r * 16 * self.leak_spacing
            if 0 <= c < n:
                lo, hi = max(0, c - 40), min(n, c + 40)
                idx = np.arange(lo, hi)
                wave[lo:hi] -= 0.12 * np.exp(-0.5 * ((idx - c) / 15.0) ** 2)
        wave *= gain_scale
        return np.clip(wave, -0.5, 0.5).astype(np.float32)


class SimTarget:
    """A SimpleSerial-2 style AES target with a glitchable password loop."""

    def __init__(self, scope: Optional[SimScope] = None):
        self.scope = scope
        self._key = bytes(range(16))
        self._last_pt = b""
        self._last_ct = b""
        self._triggered = False
        self._rx = bytearray()   # data the *host* can read (target -> host)
        self._lock = threading.Lock()
        self.output_len = 16
        self.baud = 38400
        self.simpleserial_last_read = ""
        self.simpleserial_last_sent = ""
        self.protver = "2.1"
        self.connectStatus = True
        self._pending_response: Optional[bytes] = None
        self._pending_cmd: Optional[str] = None
        self._reset_count = 0
        self.glitch_window = (20, 60)   # ext_offset window where glitches succeed
        self.glitch_width_ok = (5.0, 40.0)

    def _dict_repr(self):
        rtn = OrderedDict()
        rtn["output_len"] = self.output_len
        rtn["baud"] = self.baud
        rtn["simpleserial_last_read"] = self.simpleserial_last_read
        rtn["simpleserial_last_sent"] = self.simpleserial_last_sent
        rtn["protver"] = self.protver
        return rtn

    def __repr__(self):
        return f"SimTarget({dict(self._dict_repr())})"

    def con(self, scope=None, **kwargs):
        self.scope = scope or self.scope
        if self.scope is not None:
            self.scope.target = self
        self.connectStatus = True

    def dis(self):
        self.connectStatus = False
        if self.scope is not None and self.scope.target is self:
            self.scope.target = None

    def close(self):
        self.dis()

    def flush(self):
        with self._lock:
            self._rx.clear()

    def is_done(self):
        return True

    # --- SimpleSerial ------------------------------------------------------
    def set_key(self, key, ack=True, timeout=250, always_send=False):
        self._key = bytes(key)
        self.simpleserial_last_sent = "k" + self._key.hex()

    def _glitch_active(self) -> bool:
        g = self.scope.glitch if self.scope else None
        if g is None:
            return False
        if not (g.enabled or g.repeat > 0):
            return False
        return g.trigger_src in ("ext_single", "ext_continuous") and g.repeat > 0

    def _glitch_outcome(self) -> str:
        """'normal', 'success' or 'reset' for the current glitch settings."""
        g = self.scope.glitch
        lo, hi = self.glitch_window
        w = abs(float(g.width))
        if w < 1.0:
            return "normal"
        if w > self.glitch_width_ok[1] + 5 or int(g.repeat) > 20:
            return "reset"
        in_window = lo <= int(g.ext_offset) <= hi
        if in_window and self.glitch_width_ok[0] <= w <= self.glitch_width_ok[1]:
            r = self.scope._rng.random()
            return "success" if r < 0.75 else ("reset" if r < 0.9 else "normal")
        if w > self.glitch_width_ok[1] - 5:
            return "reset" if self.scope._rng.random() < 0.3 else "normal"
        return "normal"

    def simpleserial_write(self, cmd, num, end="\n", var_len=False):
        data = bytes(num)
        self.simpleserial_last_sent = f"{cmd}{data.hex()}"
        if cmd == "p":
            self._last_pt = data
            self._last_ct = encrypt_block(self._key, data) if len(data) == 16 else b""
            self._triggered = True
            resp = self._last_ct
            if self._glitch_active() and self._glitch_outcome() == "success":
                resp = bytes(b ^ 0xFF for b in resp)
            self._pending_response = resp
            self._pending_cmd = "r"
        elif cmd == "g":
            # simpleserial-glitch style: loop counter, expect 0x09C4 (2500) normally
            self._triggered = True
            outcome = self._glitch_outcome() if self._glitch_active() else "normal"
            if outcome == "reset":
                self._pending_response = None
                self._reset_count += 1
            elif outcome == "success":
                self._pending_response = (2500 - int(self.scope._rng.integers(1, 40))).to_bytes(4, "little")
            else:
                self._pending_response = (2500).to_bytes(4, "little")
            self._pending_cmd = "r"
        elif cmd == "k":
            self.set_key(data)
        elif cmd == "x":
            self._reset_count += 1
        else:
            self._pending_response = b""
            self._pending_cmd = "r"
        # Also mirror into the raw rx buffer as a SimpleSerial-formatted line
        if self._pending_response is not None and cmd in ("p", "g"):
            with self._lock:
                self._rx += (f"r{self._pending_response.hex()}\n").encode()

    def simpleserial_read(self, cmd, pay_len, end="\n", timeout=250, ack=True):
        if self._pending_response is None:
            return None
        resp = self._pending_response
        self._pending_response = None
        with self._lock:
            self._rx.clear()
        self.simpleserial_last_read = f"{cmd}{resp.hex()}"
        return bytearray(resp[:pay_len]) if pay_len else bytearray(resp)

    def simpleserial_read_witherrors(self, cmd, pay_len, end="\n", timeout=250, glitch_timeout=8000, ack=True):
        if self._pending_response is None:
            return {"valid": False, "payload": None, "full_response": "", "rv": None}
        resp = self._pending_response
        self._pending_response = None
        with self._lock:
            self._rx.clear()
        self.simpleserial_last_read = f"{cmd}{resp.hex()}"
        return {"valid": True, "payload": bytearray(resp), "full_response": f"{cmd}{resp.hex()}\n", "rv": 0}

    # --- raw serial -------------------------------------------------------
    def write(self, data, timeout=0):
        if isinstance(data, str):
            data = data.encode()
        line = bytes(data)
        text = line.decode(errors="replace").strip()
        if text.startswith("p") and len(text) == 33:
            self.simpleserial_write("p", bytes.fromhex(text[1:]))
        elif text.startswith("k") and len(text) == 33:
            self.simpleserial_write("k", bytes.fromhex(text[1:]))
        elif text == "g":
            self.simpleserial_write("g", b"")
        elif text.startswith("v"):
            with self._lock:
                self._rx += b"z01\n"
        else:
            with self._lock:
                self._rx += b"z00\n"

    def read(self, num_char=0, timeout=250):
        with self._lock:
            if num_char <= 0:
                num_char = len(self._rx)
            out = bytes(self._rx[:num_char])
            del self._rx[:num_char]
        return out.decode(errors="replace")

    def in_waiting(self):
        with self._lock:
            return len(self._rx)

    def in_waiting_tx(self):
        return 0
