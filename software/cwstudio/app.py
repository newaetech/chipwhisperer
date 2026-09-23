"""FastAPI application: REST API + WebSocket + static frontend."""
from __future__ import annotations

import asyncio
import logging
import os
from typing import Any, Dict, Optional

from fastapi import FastAPI, File, HTTPException, Request, UploadFile, WebSocket, WebSocketDisconnect
from fastapi.responses import FileResponse, JSONResponse, Response
from fastapi.staticfiles import StaticFiles

from cwstudio import __version__, hardware
from cwstudio.analysis import MODELS
from cwstudio.session import Session

log = logging.getLogger("cwstudio.app")
STATIC_DIR = os.path.join(os.path.dirname(os.path.abspath(__file__)), "static")


def create_app(session: Session) -> FastAPI:
    from contextlib import asynccontextmanager

    @asynccontextmanager
    async def lifespan(_app):
        session.bus.attach_loop(asyncio.get_running_loop())
        yield
        await asyncio.get_running_loop().run_in_executor(None, session.close)

    app = FastAPI(title="ChipWhisperer Studio", version=__version__, docs_url="/api/docs", redoc_url=None,
                  lifespan=lifespan)
    app.state.session = session

    async def run(fn, *args, **kwargs):
        """Run a blocking session method off the event loop."""
        loop = asyncio.get_running_loop()
        return await loop.run_in_executor(None, lambda: fn(*args, **kwargs))

    def err(e: Exception, code: int = 400):
        log.debug("API error", exc_info=True)
        raise HTTPException(status_code=code, detail=f"{type(e).__name__}: {e}")

    async def body(req: Request) -> Dict[str, Any]:
        try:
            data = await req.json()
        except Exception:  # noqa: BLE001
            data = {}
        return data or {}

    # ----- status / meta ------------------------------------------------------
    @app.get("/api/status")
    async def status():
        return session.status()

    @app.get("/api/meta")
    async def meta():
        return {
            "version": __version__,
            "scope_kinds": hardware.SCOPE_KINDS,
            "target_kinds": hardware.TARGET_KINDS,
            "programmers": hardware.PROGRAMMERS,
            "cpa_models": MODELS,
            "platform": hardware.platform_help(),
            "simulate_default": session.simulate_default,
            "data_dir": session.data_dir,
        }

    @app.get("/api/devices")
    async def devices():
        return await run(session.worker.call, hardware.list_devices, timeout=30)

    @app.get("/api/logs")
    async def logs(since: int = 0):
        return session.bus.history_since(since, kinds=["log", "capture", "glitch"])

    @app.post("/api/shutdown")
    async def shutdown():
        server = getattr(app.state, "server", None)
        if server is not None:
            server.should_exit = True
        else:
            import signal
            os.kill(os.getpid(), signal.SIGINT)
        return {"ok": True}

    # ----- scope --------------------------------------------------------------
    @app.post("/api/scope/connect")
    async def scope_connect(req: Request):
        p = await body(req)
        try:
            return await run(session.connect_scope, p.get("kind", "auto"), p.get("sn") or None,
                             bool(p.get("force", False)), bool(p.get("default_setup", True)))
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/scope/disconnect")
    async def scope_disconnect():
        await run(session.disconnect_scope)
        return {"ok": True}

    @app.get("/api/scope/settings")
    async def scope_settings():
        try:
            return await run(session.scope_settings)
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.put("/api/scope/settings")
    async def scope_set(req: Request):
        p = await body(req)
        try:
            v = await run(session.set_scope_setting, p["path"], p.get("value"))
            return {"path": p["path"], "value": v}
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/scope/action/{action}")
    async def scope_action(action: str):
        try:
            return await run(session.scope_action, action)
        except Exception as e:  # noqa: BLE001
            err(e)

    # ----- target -------------------------------------------------------------
    @app.post("/api/target/connect")
    async def target_connect(req: Request):
        p = await body(req)
        kind = p.pop("kind", "SimpleSerial2")
        try:
            return await run(session.connect_target, kind, **{k: v for k, v in p.items() if v not in (None, "")})
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/target/disconnect")
    async def target_disconnect():
        await run(session.disconnect_target)
        return {"ok": True}

    @app.get("/api/target/settings")
    async def target_settings():
        try:
            return await run(session.target_settings)
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.put("/api/target/settings")
    async def target_set(req: Request):
        p = await body(req)
        try:
            v = await run(session.set_target_setting, p["path"], p.get("value"))
            return {"path": p["path"], "value": v}
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/target/program")
    async def target_program(req: Request):
        p = await body(req)
        try:
            return await run(session.program, p.get("programmer", "STM32F"), p["path"])
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/target/program/upload")
    async def target_program_upload(programmer: str = "STM32F", file: UploadFile = File(...)):
        try:
            content = await file.read()
            path = session.save_upload(file.filename or "firmware.hex", content)
            res = await run(session.program, programmer, path)
            res["path"] = path
            return res
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/target/serial/write")
    async def serial_write(req: Request):
        p = await body(req)
        try:
            n = await run(session.serial_write, p.get("data", ""), bool(p.get("hex", False)),
                          bool(p.get("newline", True)))
            return {"written": n}
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.get("/api/target/serial")
    async def serial_log(since: float = 0):
        with session._serial_lock:
            return [r for r in session.serial_buffer if r["t"] > since]

    @app.post("/api/target/simpleserial")
    async def simpleserial(req: Request):
        p = await body(req)
        try:
            return await run(session.simpleserial, p.get("cmd", "p"), p.get("data", ""), p.get("read_cmd", "r"),
                             p.get("read_len"))
        except Exception as e:  # noqa: BLE001
            err(e)

    # ----- capture ------------------------------------------------------------
    @app.post("/api/capture/start")
    async def capture_start(req: Request):
        p = await body(req)
        try:
            return await run(session.start_capture, p)
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/capture/single")
    async def capture_single(req: Request):
        p = await body(req)
        try:
            return await run(session.capture_single, p)
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/capture/stop")
    async def capture_stop():
        return await run(session.stop_job)

    # ----- traces -------------------------------------------------------------
    @app.get("/api/traces")
    async def traces():
        return session.store.summary()

    @app.delete("/api/traces")
    async def traces_clear():
        session.store.clear()
        session.bus.publish("traces", session.store.summary())
        return session.store.summary()

    @app.get("/api/traces/stats")
    async def traces_stats(start: int = 0, end: Optional[int] = None):
        data = await run(session.stats_bytes, start, end)
        return Response(content=data, media_type="application/octet-stream")

    @app.get("/api/traces/block")
    async def traces_block(start: int = 0, end: int = 0, step: int = 1):
        data = await run(session.traces_block, start, end, step)
        return Response(content=data, media_type="application/octet-stream")

    @app.get("/api/traces/{index}")
    async def trace_one(index: int):
        try:
            data = session.trace_bytes(index)
        except IndexError:
            raise HTTPException(status_code=404, detail="no such trace")
        return Response(content=data, media_type="application/octet-stream")

    @app.get("/api/traces/{index}/meta")
    async def trace_meta(index: int):
        try:
            wave, tin, tout, key = session.store.get(index)
        except IndexError:
            raise HTTPException(status_code=404, detail="no such trace")
        return {"index": index, "n": int(len(wave)), "textin": tin.hex(), "textout": tout.hex(), "key": key.hex(),
                "min": float(wave.min()) if len(wave) else 0, "max": float(wave.max()) if len(wave) else 0}

    @app.post("/api/traces/export")
    async def traces_export(req: Request):
        p = await body(req)
        try:
            path = await run(session.export_traces, p.get("path", "traces"), p.get("format", "npz"))
            return {"path": path, "count": len(session.store)}
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/traces/import")
    async def traces_import(req: Request):
        p = await body(req)
        try:
            n = await run(session.import_traces, p["path"], bool(p.get("replace", True)))
            return {"imported": n, **session.store.summary()}
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/traces/import/upload")
    async def traces_import_upload(file: UploadFile = File(...), replace: bool = True):
        try:
            content = await file.read()
            d = os.path.join(session.data_dir, "imports")
            os.makedirs(d, exist_ok=True)
            path = os.path.join(d, os.path.basename(file.filename or "traces.npz"))
            with open(path, "wb") as f:
                f.write(content)
            n = await run(session.import_traces, path, replace)
            return {"imported": n, "path": path, **session.store.summary()}
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.get("/api/traces/download/{fmt}")
    async def traces_download(fmt: str):
        try:
            path = await run(session.export_traces, os.path.join(session.data_dir, "exports", "traces"), fmt)
            return FileResponse(path, filename=os.path.basename(path))
        except Exception as e:  # noqa: BLE001
            err(e)

    # ----- analysis -----------------------------------------------------------
    @app.post("/api/analysis/cpa/start")
    async def cpa_start(req: Request):
        p = await body(req)
        try:
            return await run(session.start_cpa, p)
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.post("/api/analysis/cpa/stop")
    async def cpa_stop():
        session.stop_cpa()
        return {"ok": True}

    @app.get("/api/analysis/cpa")
    async def cpa_result():
        return session.cpa_result() or {}

    @app.get("/api/analysis/cpa/corr/{b}")
    async def cpa_corr(b: int):
        try:
            return Response(content=session.cpa_corr_bytes(b), media_type="application/octet-stream")
        except Exception as e:  # noqa: BLE001
            err(e)

    # ----- glitch -------------------------------------------------------------
    @app.post("/api/glitch/start")
    async def glitch_start(req: Request):
        p = await body(req)
        try:
            return await run(session.start_glitch, p)
        except Exception as e:  # noqa: BLE001
            err(e)

    @app.get("/api/glitch/results")
    async def glitch_results():
        return session.glitch_results()

    @app.post("/api/glitch/export")
    async def glitch_export(req: Request):
        p = await body(req)
        try:
            return {"path": await run(session.export_glitch, p.get("path", "glitch_results.csv"))}
        except Exception as e:  # noqa: BLE001
            err(e)

    # ----- websocket ----------------------------------------------------------
    @app.websocket("/ws")
    async def ws(sock: WebSocket):
        await sock.accept()
        sub = session.bus.subscribe()
        try:
            await sock.send_text(__import__("json").dumps({"type": "hello", "version": __version__,
                                                           "status": session.status()}, default=str))

            async def reader():
                try:
                    while True:
                        await sock.receive_text()  # pings / ignored
                except Exception:  # noqa: BLE001
                    pass

            rtask = asyncio.ensure_future(reader())
            while True:
                if rtask.done():
                    break
                try:
                    ev = await asyncio.wait_for(sub.queue.get(), timeout=1.0)
                except asyncio.TimeoutError:
                    continue
                frame = ev.frame()
                if isinstance(frame, (bytes, bytearray)):
                    await sock.send_bytes(frame)
                else:
                    await sock.send_text(frame)
        except WebSocketDisconnect:
            pass
        except Exception as e:  # noqa: BLE001
            log.debug("ws closed: %s", e)
        finally:
            session.bus.unsubscribe(sub)

    # ----- static -------------------------------------------------------------
    @app.get("/")
    async def index():
        return FileResponse(os.path.join(STATIC_DIR, "index.html"))

    app.mount("/static", StaticFiles(directory=STATIC_DIR), name="static")
    return app
