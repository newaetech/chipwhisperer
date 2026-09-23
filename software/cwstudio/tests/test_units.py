import threading
import time

import numpy as np
import pytest

from cwstudio import settings as cws
from cwstudio.simulator import SimScope, SimTarget
from cwstudio.worker import HardwareWorker, LongJob
from cwstudio.traces import TraceStore
from cwstudio.capture import KeyTextGen


def test_describe_and_set_sim_scope():
    s = SimScope()
    nodes = cws.describe(s)
    flat = cws.flatten(nodes)
    assert flat["adc.samples"] == 5000 and flat["gain.mode"] == "high"
    adc = next(n for n in nodes if n["path"] == "adc")
    leaf = next(n for n in adc["children"] if n["name"] == "samples")
    assert leaf["writable"] and leaf["type"] == "int"
    trig = next(n for n in adc["children"] if n["name"] == "trig_count")
    assert not trig["writable"]
    assert cws.set_value(s, "adc.samples", "1234") == 1234
    assert cws.set_value(s, "clock.clkgen_freq", "7.37e6") == 7370000
    assert cws.set_value(s, "io.target_pwr", "false") is False
    assert cws.set_value(s, "gain.mode", "low") == "low"
    with pytest.raises(ValueError):
        cws.set_value(s, "adc.samples", "-1")
    with pytest.raises(ValueError):
        cws.set_value(s, "adc.basic_mode", "bogus")


def test_coerce():
    assert cws.coerce("0x10", 5) == 16
    assert cws.coerce("3.5", 1.0) == 3.5
    assert cws.coerce("None", "high_z", [None, "high_z"]) is None
    assert cws.coerce("true", False) is True
    assert cws.coerce(7, 3) == 7
    assert cws.coerce(2.0, 3) == 2
    assert cws.coerce("[1, 2]", [0]) == [1, 2]


def test_worker_short_and_long_jobs():
    w = HardwareWorker()
    w.start()
    try:
        assert w.call(lambda a, b: a + b, 2, 3) == 5
        with pytest.raises(ZeroDivisionError):
            w.call(lambda: 1 / 0)

        class Counter(LongJob):
            name = "counter"

            def __init__(self):
                super().__init__()
                self.n = 0

            def step(self):
                self.n += 1
                time.sleep(0.001)
                return self.n >= 50

        j = Counter()
        assert w.start_long_job(j)
        assert not w.start_long_job(Counter())  # only one at a time
        # short jobs are serviced while the long job runs
        assert w.call(lambda: "ok", timeout=5) == "ok"
        assert j.finished.wait(5)
        assert j.n == 50 and j.error is None

        j2 = Counter()
        j2.step = lambda: (time.sleep(0.005), False)[1]
        w.start_long_job(j2)
        time.sleep(0.05)
        w.stop_long_job()
        assert j2.finished.wait(5)
    finally:
        w.stop()


def test_trace_store_arrays_and_stats(tmp_path):
    st = TraceStore()
    for i in range(10):
        st.append(np.full(100, i, np.float32), bytes([i] * 16), bytes(16), bytes(range(16)))
    W, tin, tout, key = st.as_arrays()
    assert W.shape == (10, 100) and tin.shape == (10, 16) and key[0].tolist() == list(range(16))
    s = st.stats()
    assert s["mean"][0] == pytest.approx(4.5) and s["max"][0] == 9
    p = st.export(str(tmp_path / "x"), "npz")
    st2 = TraceStore()
    assert st2.import_file(p) == 10
    assert st2.get(3)[1] == bytes([3] * 16)
    p = st.export(str(tmp_path / "y"), "csv")
    assert open(p).read().count("\n") == 11


def test_keytextgen():
    g = KeyTextGen("fixed", "random", key=bytes(16), seed=1)
    k1, t1 = g.next_pair()
    k2, t2 = g.next_pair()
    assert k1 == k2 == bytes(16) and t1 != t2
    g = KeyTextGen("fixed", "counter", text=bytes(16))
    assert g.next_pair()[1][-1] == 1 and g.next_pair()[1][-1] == 2


def test_sim_glitch_outcomes():
    s = SimScope(seed=3)
    t = SimTarget()
    t.con(s)
    s.glitch.trigger_src = "ext_single"
    s.glitch.repeat = 5
    s.glitch.width = 20
    s.glitch.ext_offset = 40
    succ = 0
    for _ in range(40):
        s.arm()
        t.simpleserial_write("g", b"")
        s.capture()
        r = t.simpleserial_read_witherrors("r", 4)
        if r["valid"] and bytes(r["payload"]) != (2500).to_bytes(4, "little"):
            succ += 1
    assert succ > 10
    s.glitch.ext_offset = 500
    normal = 0
    for _ in range(20):
        s.arm()
        t.simpleserial_write("g", b"")
        s.capture()
        r = t.simpleserial_read_witherrors("r", 4)
        normal += bool(r["valid"] and bytes(r["payload"]) == (2500).to_bytes(4, "little"))
    assert normal >= 15
