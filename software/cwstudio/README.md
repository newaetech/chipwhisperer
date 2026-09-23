# ChipWhisperer Studio

A standalone, cross-platform desktop application for ChipWhisperer hardware.
Connect, configure, program the target, capture traces **and watch the
waveform live**, run a CPA attack and sweep glitch parameters — without
opening a notebook or writing Python.

![layout](../../docs/source/_images/cwstudio.png)

## Install

**No Python required:** download `ChipWhispererStudio-<os>-<arch>.zip` from
the releases page, unzip, run `ChipWhispererStudio` (see
`packaging/cwstudio/README.md` for per-OS notes).

**With Python:**

```
pip install "chipwhisperer[studio]"      # or: pip install -e ".[studio]" from a clone
cw-studio                                # opens http://127.0.0.1:8765/
cw-studio --simulate                     # try it without hardware
```

## Features

| Area | What you get |
|------|--------------|
| Connect | Auto-detect Nano/Lite/Pro/Husky, pick by serial number, USB scan, platform-specific driver/udev help, built-in **simulator**. |
| Scope | Every setting of the connected scope (`gain`, `adc`, `clock`, `trigger`, `io`, `glitch`, Husky extras…) as an editable tree with inline documentation and read-back after each change. `default_setup()`, trigger test, FPGA reset. |
| Target | Program firmware (STM32F, XMEGA, AVR, SAM4S, NEORV32) from a file picked in the browser; serial console (text/hex); SimpleSerial command helper; target settings. |
| Waveform | Live view of every capture, overlay of the last N traces, mean and min/max envelope, browse stored traces, zoom/pan, two cursors with Δsamples/Δt/frequency read-out, time axis from the ADC clock, PNG export, pause. |
| Capture | Single, N traces, or continuous. Fixed/random/counter key & plaintext, trigger-only mode for custom triggers, rate limiting, timeout handling. Export as `.npz`, `.cwp` (ChipWhisperer project), `.csv`; import `.npz`/`.cwp`. |
| Analysis | Progressive CPA with five AES leakage models (S-box HW, pt⊕key HW, inverse S-box, last-round HD/HW). Per-byte ranking, PGE convergence plot when the key is known, correlation-vs-sample plot, overlay on the waveform. |
| Glitch | Cartesian sweep over any `glitch.*` parameters, per-point target reset, response classification (normal/success/reset), live scatter plot, CSV export. |
| Everything is an HTTP API | `/api/docs` — scripts and CI can drive Studio headlessly; the UI can run on another machine (`--host 0.0.0.0`). |

## How it works

Studio is a FastAPI server + a static web UI (vanilla ES modules + uPlot)
served from the same process. A single hardware thread owns the
`chipwhisperer` scope/target objects; all API calls are queued to it, long
operations (captures, glitch sweeps) are interleaved so the UI stays
responsive. Traces stream to the browser as binary WebSocket frames.
See [DESIGN.md](DESIGN.md).

## Development

```
pip install -e ".[studio]" pytest httpx
python -m cwstudio --simulate --log-level debug
python -m pytest software/cwstudio/tests
```

The frontend has no build step: edit `software/cwstudio/static/**` and reload
the browser.

## Packaging

```
python packaging/cwstudio/build.py          # PyInstaller bundle + zip for this OS
```

CI (`.github/workflows/cwstudio.yml`) builds Linux, Windows and macOS bundles
and attaches them to releases.
