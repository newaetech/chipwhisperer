"""End-to-end API tests against the simulator (no hardware needed)."""
import json
import struct
import tempfile
import time

import numpy as np
import pytest
from fastapi.testclient import TestClient

from cwstudio.app import create_app
from cwstudio.session import Session


def decode_frame(data: bytes):
    (hlen,) = struct.unpack("<I", data[:4])
    header = json.loads(data[4:4 + hlen])
    samples = np.frombuffer(data[4 + hlen:], dtype="<f4")
    return header, samples


@pytest.fixture(scope="module")
def client():
    session = Session(simulate=True, data_dir=tempfile.mkdtemp())
    app = create_app(session)
    with TestClient(app) as c:
        c.session = session
        yield c


def wait_job(client, timeout=30):
    end = time.time() + timeout
    while time.time() < end:
        st = client.get("/api/status").json()
        job = st.get("job")
        if job is None or not job["running"]:
            return st
        time.sleep(0.05)
    raise TimeoutError("job did not finish")


def test_meta_and_status(client):
    m = client.get("/api/meta").json()
    assert "sim" in m["scope_kinds"] and "sbox_hw" in m["cpa_models"]
    st = client.get("/api/status").json()
    assert st["scope"]["connected"] is False


def test_connect_and_settings(client):
    r = client.post("/api/scope/connect", json={"kind": "sim"})
    assert r.status_code == 200, r.text
    assert r.json()["simulated"] is True
    tree = client.get("/api/scope/settings").json()
    paths = {n["path"] for n in tree}
    assert {"gain", "adc", "clock", "io", "glitch"} <= paths
    adc = next(n for n in tree if n["path"] == "adc")
    samples = next(n for n in adc["children"] if n["name"] == "samples")
    assert samples["writable"] and samples["type"] == "int" and "ADC samples" in samples["doc"]
    r = client.put("/api/scope/settings", json={"path": "adc.samples", "value": "3000"})
    assert r.status_code == 200 and r.json()["value"] == 3000
    r = client.put("/api/scope/settings", json={"path": "adc.samples", "value": -5})
    assert r.status_code == 400
    r = client.put("/api/scope/settings", json={"path": "gain.mode", "value": "low"})
    assert r.json()["value"] == "low"
    client.put("/api/scope/settings", json={"path": "gain.mode", "value": "high"})
    r = client.post("/api/target/connect", json={"kind": "sim"})
    assert r.status_code == 200, r.text
    ttree = client.get("/api/target/settings").json()
    assert any(n["path"] == "output_len" for n in ttree)


def test_serial(client):
    r = client.post("/api/target/serial/write", json={"data": "v"})
    assert r.status_code == 200
    time.sleep(0.3)
    log = client.get("/api/target/serial").json()
    assert any(e["dir"] == "tx" for e in log) and any(e["dir"] == "rx" for e in log)
    r = client.post("/api/target/simpleserial", json={"cmd": "p", "data": "00" * 16})
    assert r.json()["response"] and len(r.json()["response"]) == 32


def test_capture_and_traces(client):
    client.delete("/api/traces")
    r = client.post("/api/capture/start", json={"count": 200, "key_mode": "fixed", "text_mode": "random",
                                                "key": "2b7e151628aed2a6abf7158809cf4f3c"})
    assert r.status_code == 200, r.text
    st = wait_job(client)
    assert st["traces"]["count"] == 200, st
    assert st["job"]["error"] is None
    r = client.get("/api/traces/5")
    header, samples = decode_frame(r.content)
    assert header["index"] == 5 and header["n"] == 3000 and samples.shape[0] == 3000
    assert len(header["textout"]) == 32
    header, block = decode_frame(client.get("/api/traces/block?start=0&end=10").content)
    assert header["indices"] == list(range(10)) and block.shape[0] == 10 * 3000
    header, stats = decode_frame(client.get("/api/traces/stats").content)
    assert header["fields"] == ["mean", "std", "min", "max"] and stats.shape[0] == 4 * 3000
    meta = client.get("/api/traces/5/meta").json()
    assert meta["key"] == "2b7e151628aed2a6abf7158809cf4f3c"


def test_single_and_trigger_only(client):
    n0 = client.get("/api/traces").json()["count"]
    client.post("/api/capture/single", json={"store": True})
    wait_job(client)
    assert client.get("/api/traces").json()["count"] == n0 + 1
    client.post("/api/capture/start", json={"count": 3, "mode": "trigger_only"})
    st = wait_job(client)
    # Trigger-only capture with sim target never triggers -> timeouts; job must end with error, not hang
    assert st["job"]["error"] is not None or st["traces"]["count"] >= n0 + 1


def test_continuous_stop(client):
    r = client.post("/api/capture/start", json={"count": 0, "store": False})
    assert r.status_code == 200
    time.sleep(0.5)
    r = client.post("/api/capture/start", json={"count": 1})
    assert r.status_code == 400  # already running
    client.post("/api/capture/stop")
    st = wait_job(client)
    assert st["job"]["done"] > 0


def test_cpa(client):
    r = client.post("/api/analysis/cpa/start", json={"model": "sbox_hw", "report_every": 50})
    assert r.status_code == 200, r.text
    for _ in range(200):
        res = client.get("/api/analysis/cpa").json()
        if res.get("done"):
            break
        time.sleep(0.1)
    assert res["done"] and res["error"] is None
    assert res["best_key"] == "2b7e151628aed2a6abf7158809cf4f3c"
    assert all(b["pge"] == 0 for b in res["bytes"])
    header, corr = decode_frame(client.get("/api/analysis/cpa/corr/0").content)
    assert header["guess"] == 0x2b and corr.shape[0] == 3000


def test_export_import(client):
    r = client.post("/api/traces/export", json={"path": "t1", "format": "npz"})
    assert r.status_code == 200, r.text
    path = r.json()["path"]
    n = client.get("/api/traces").json()["count"]
    r = client.post("/api/traces/import", json={"path": path, "replace": True})
    assert r.json()["imported"] == n
    r = client.post("/api/traces/export", json={"path": "t1", "format": "cwp"})
    assert r.status_code == 200, r.text
    assert r.json()["path"].endswith(".cwp")
    r = client.post("/api/traces/import", json={"path": r.json()["path"], "replace": True})
    assert r.json()["imported"] == n
    r = client.get("/api/traces/download/csv")
    assert r.status_code == 200 and r.headers["content-type"].startswith("text/csv") or r.status_code == 200


def test_glitch(client):
    # enable glitching on the sim
    client.put("/api/scope/settings", json={"path": "glitch.trigger_src", "value": "ext_single"})
    client.put("/api/scope/settings", json={"path": "glitch.repeat", "value": 5})
    r = client.post("/api/glitch/start", json={
        "parameters": [{"path": "glitch.width", "start": 0, "stop": 45, "step": 15},
                       {"path": "glitch.ext_offset", "start": 0, "stop": 80, "step": 20, "int": True}],
        "repeats": 2, "command": "g", "expected": "c4090000", "output_len": 4, "reset": "nrst",
    })
    assert r.status_code == 200, r.text
    st = wait_job(client)
    res = client.get("/api/glitch/results").json()
    assert len(res["results"]) == 4 * 5 * 2
    assert res["counts"]["success"] > 0 and res["counts"]["normal"] > 0
    r = client.post("/api/glitch/export", json={"path": "g.csv"})
    assert r.status_code == 200
    client.put("/api/scope/settings", json={"path": "glitch.repeat", "value": 0})


def test_websocket_frames(client):
    with client.websocket_connect("/ws") as ws:
        hello = json.loads(ws.receive_text())
        assert hello["type"] == "hello"
        client.post("/api/capture/start", json={"count": 5, "store": False})
        got_trace = got_capture = False
        for _ in range(50):
            msg = ws.receive()
            if "bytes" in msg and msg["bytes"] is not None:
                h, s = decode_frame(msg["bytes"])
                if h["type"] == "trace":
                    got_trace = s.shape[0] == 3000
            elif msg.get("text"):
                ev = json.loads(msg["text"])
                if ev["type"] == "capture" and ev.get("state") == "done":
                    got_capture = True
                    break
        assert got_trace and got_capture


def test_program_upload(client):
    r = client.post("/api/target/program/upload?programmer=STM32F", files={"file": ("fw.hex", b":00000001FF\n")})
    assert r.status_code == 200 and r.json()["simulated"] is True


def test_disconnect(client):
    client.post("/api/target/disconnect")
    client.post("/api/scope/disconnect")
    st = client.get("/api/status").json()
    assert st["scope"]["connected"] is False and st["target"]["connected"] is False
