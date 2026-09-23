# ChipWhisperer Studio — Design

ChipWhisperer Studio (`cwstudio`) is a standalone, cross-platform desktop
application for ChipWhisperer capture hardware. It replaces the "open a
Jupyter notebook and type Python" workflow with a point-and-click tool whose
centre-piece is a live waveform viewer, while still driving the hardware
through the unmodified `chipwhisperer` Python package.

## Goals

1. **Zero-setup install.** A user downloads one archive for their OS, unzips
   it and double-clicks. No Python, no pip, no Jupyter. The bundle carries its
   own Python runtime, the `chipwhisperer` package and `libusb`.
2. **See the waveform.** Every captured trace is streamed to the screen as it
   arrives. Overlay, average, persist, zoom, cursors, and per-trace inspection
   of plaintext/ciphertext/key.
3. **Do the whole job.** Connect → configure scope → program the target →
   talk to it over serial → capture thousands of traces → run a CPA attack →
   run a glitch sweep → export. All from one window.
4. **Do not fork the library.** All hardware access goes through the public
   `chipwhisperer` API (`cw.scope()`, `cw.target()`, `cw.capture_trace()`,
   `cw.program_target()`, settings properties). Studio is a thin, well-behaved
   client, so it keeps working as the library evolves.
5. **Hardware optional.** A built-in simulator (`--simulate`) provides a
   scope+target pair that leaks like a real unprotected AES implementation.
   Every feature can be demonstrated and tested with no hardware.

## Architecture

```
┌────────────────────────────── one process ──────────────────────────────┐
│                                                                          │
│  Browser / native window            FastAPI (uvicorn, asyncio thread)    │
│  ┌──────────────────────┐  HTTP    ┌──────────────────────────────────┐  │
│  │ static/  (no build)  │ ◄──────► │ app.py  REST routes + /ws        │  │
│  │  app.js  waveform.js │  WS      │ session.py  application state    │  │
│  │  settings.js  ...    │ ◄──────► │ events.py   pub/sub to sockets   │  │
│  │  vendor/uPlot        │  binary  └───────┬──────────────────────────┘  │
│  └──────────────────────┘  traces          │ futures                     │
│                                            ▼                             │
│                                   worker.py  ONE hardware thread          │
│                                   ┌────────────────────────────────┐     │
│                                   │ short jobs: get/set setting,   │     │
│                                   │   serial write, program, ...   │     │
│                                   │ long job (interleaved):        │     │
│                                   │   CaptureJob | GlitchJob       │     │
│                                   └────────────┬───────────────────┘     │
│                                                ▼                          │
│                        chipwhisperer API  (scope, target, programmers)    │
│                        or simulator.py     (SimScope, SimTarget)          │
│                                                                          │
│  analysis.py (CPA) runs on its own thread — it never touches hardware.   │
└──────────────────────────────────────────────────────────────────────────┘
```

### Why a local web UI instead of Qt

* One code path for Windows/macOS/Linux with no GUI-toolkit system
  dependencies (no WebKitGTK, no Qt platform plugins).
* The bundle stays small (~60 MB) and the build needs only Python + PyInstaller,
  no Node toolchain: the frontend is plain ES modules and is served as-is.
* Remote use for free: run Studio on the lab machine or a Raspberry Pi next to
  the target and open it from a laptop (`--host 0.0.0.0`).
* uPlot renders 100k+ sample traces at 60 fps on a canvas.

### Concurrency model

`chipwhisperer` objects are not thread-safe and the USB transport is
stateful, so **exactly one thread** (`HardwareWorker`) touches the scope and
target. The asyncio server hands every hardware request to that thread and
awaits a future. Long-running operations (a 10 000-trace capture, a glitch
sweep) are *long jobs*: objects with a `step()` method that the worker calls
repeatedly, servicing queued short jobs between steps. That keeps the UI
responsive (you can read settings, poll the serial console, and stop the
capture) without ever running two hardware calls concurrently.

CPA analysis is pure numpy over an in-memory trace array and runs on a
separate thread with progressive reporting.

### Event streaming

A single WebSocket (`/ws`) carries server → client events. JSON text frames
carry status, log lines, capture progress, serial data and analysis updates.
Trace waveforms are sent as **binary** frames:

```
u32 little-endian: JSON header length
JSON header      : {"type":"trace","index":123,"n":5000,"dtype":"f32", ...}
f32[n]           : samples
```

Trace publication is rate-limited (default 25 frames/s) so a fast capture does
not flood the socket; the in-memory `TraceStore` keeps every trace regardless.

### Settings introspection

Every scope/target sub-object in `chipwhisperer` implements `_dict_repr()`.
`settings.py` walks that tree, looks up the matching `property` on the class
to learn whether it is writable and to pull the docstring, and emits a JSON
tree the UI renders generically. This works for Nano, Lite, Pro and Husky
without per-device UI code, and picks up new settings automatically. A small
table of known enumerations (e.g. `gain.mode ∈ {low, high}`) improves the
widgets where the docstring cannot be parsed.

### Modules

| File            | Responsibility |
|-----------------|----------------|
| `cli.py`        | Entry point. Arg parsing, start uvicorn, open browser/native window. |
| `app.py`        | FastAPI app: REST endpoints, WebSocket, static files. |
| `session.py`    | The single application state: scope, target, jobs, trace store. |
| `worker.py`     | The hardware thread, futures and long-job scheduling. |
| `hardware.py`   | Connect / disconnect / detect / program on real hardware. |
| `simulator.py`  | `SimScope`/`SimTarget`: AES leakage + glitch behaviour, no hardware. |
| `settings.py`   | Generic settings tree introspection and typed assignment. |
| `capture.py`    | `CaptureJob`: key/text generation, capture loop, publication. |
| `glitch.py`     | `GlitchJob`: parameter sweep, target reset, result classification. |
| `traces.py`     | `TraceStore`: in-memory traces, stats, import/export (npz, cwp, csv). |
| `analysis.py`   | Progressive CPA with several AES leakage models. |
| `events.py`     | Thread-safe event bus fanning out to WebSocket clients. |
| `static/`       | Frontend (vanilla ES modules + uPlot). |

### Packaging

`packaging/cwstudio/` holds a PyInstaller spec and a `build.py` driver that
creates an isolated venv, installs the repo, runs PyInstaller and zips a
`ChipWhispererStudio-<os>-<arch>` folder. `.github/workflows/cwstudio.yml`
builds all three OSes on every push/tag and uploads the archives.

USB access on a machine without Python:

* **Windows**: the `libusb1` wheel ships `libusb-1.0.dll`; the WinUSB driver is
  installed by the NewAE driver package (link shown in the Connect tab).
* **macOS**: `libusb-1.0.dylib` from `libusb-package` is copied next to `usb1`.
* **Linux**: same `.so` copy plus the bundled `50-newae.rules`; the Connect
  tab offers a one-click "write udev rule" command to copy.

## Non-goals (for now)

* Replacing the analyzer/notebook ecosystem for research: Studio exports
  ChipWhisperer projects so advanced analysis can continue in Python.
* FPGA targets (CW305/CW310) — supported by the generic settings tree, but no
  dedicated UI yet.
