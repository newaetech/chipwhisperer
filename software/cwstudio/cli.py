"""Command line entry point: ``cw-studio`` / ``python -m cwstudio``."""
from __future__ import annotations

import argparse
import logging
import os
import socket
import sys
import threading
import time
import webbrowser


def _free_port(host: str, preferred: int) -> int:
    for port in [preferred] + list(range(preferred + 1, preferred + 50)):
        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
            try:
                s.bind((host if host != "0.0.0.0" else "127.0.0.1", port))
                return port
            except OSError:
                continue
    return preferred


def _wait_ready(host: str, port: int, timeout: float = 20.0) -> bool:
    end = time.time() + timeout
    while time.time() < end:
        try:
            with socket.create_connection((host, port), timeout=0.5):
                return True
        except OSError:
            time.sleep(0.1)
    return False


def main(argv=None):
    ap = argparse.ArgumentParser(prog="cw-studio", description="ChipWhisperer Studio")
    ap.add_argument("--host", default="127.0.0.1", help="bind address (use 0.0.0.0 for remote access)")
    ap.add_argument("--port", type=int, default=8765)
    ap.add_argument("--no-browser", action="store_true", help="do not open a browser window")
    ap.add_argument("--window", action="store_true", help="open in a native window (needs pywebview)")
    ap.add_argument("--simulate", action="store_true", help="pre-select the simulator on the Connect page")
    ap.add_argument("--data-dir", default=None, help="folder for exports/firmware uploads")
    ap.add_argument("--log-level", default="info", choices=["debug", "info", "warning", "error"])
    args = ap.parse_args(argv)

    logging.basicConfig(level=getattr(logging, args.log_level.upper()),
                        format="%(asctime)s %(levelname)s %(name)s: %(message)s")
    for noisy in ("uvicorn.access",):
        logging.getLogger(noisy).setLevel(logging.WARNING)

    import uvicorn
    from cwstudio.app import create_app
    from cwstudio.session import Session

    session = Session(simulate=args.simulate, data_dir=args.data_dir)
    app = create_app(session)
    port = _free_port(args.host, args.port)
    url_host = "127.0.0.1" if args.host == "0.0.0.0" else args.host
    url = f"http://{url_host}:{port}/"
    if args.simulate:
        url += "?simulate=1"

    def opener():
        if _wait_ready(url_host, port):
            print(f"ChipWhisperer Studio running at {url}", flush=True)
            if args.window:
                try:
                    import webview  # type: ignore
                    webview.create_window("ChipWhisperer Studio", url, width=1500, height=950)
                    webview.start()
                    server.should_exit = True
                    return
                except ImportError:
                    print("pywebview not installed; falling back to the browser", flush=True)
            if not args.no_browser:
                webbrowser.open(url)

    config = uvicorn.Config(app, host=args.host, port=port, log_level=args.log_level, ws_max_size=64 * 1024 * 1024,
                            timeout_graceful_shutdown=3)
    server = uvicorn.Server(config)
    app.state.server = server
    threading.Thread(target=opener, daemon=True).start()
    try:
        server.run()
    except KeyboardInterrupt:
        pass
    return 0


if __name__ == "__main__":
    sys.exit(main())
