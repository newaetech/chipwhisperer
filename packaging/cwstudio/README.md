# ChipWhisperer Studio — standalone bundle

This folder is a self-contained build of **ChipWhisperer Studio**, a desktop
application for ChipWhisperer capture hardware (Nano, Lite, Pro, Husky).
It bundles its own Python runtime and the `chipwhisperer` library, so nothing
needs to be installed.

## Run

* **Windows**: double-click `ChipWhispererStudio.exe`.
  Devices need the WinUSB driver — install the NewAE driver package if the
  scope is not detected (https://chipwhisperer.readthedocs.io/en/latest/windows-install.html).
* **macOS**: double-click `ChipWhispererStudio` (or run `./chipwhisperer-studio.sh`).
  Gatekeeper: right-click → Open the first time.
* **Linux**: run `./chipwhisperer-studio.sh`. Install the udev rule once so you
  can use the device without root — the Connect tab shows the exact command,
  which uses the bundled `50-newae.rules`.

A console window shows the URL (default http://127.0.0.1:8765/) and your
browser opens automatically.

## Options

```
ChipWhispererStudio [--port 8765] [--host 127.0.0.1] [--no-browser] [--simulate] [--data-dir DIR]
```

* `--simulate` preselects the built-in simulator so you can explore the app
  without hardware.
* `--host 0.0.0.0` lets other machines on the network open the UI.
* `--data-dir` is where exports and uploaded firmware are stored
  (default: `~/ChipWhispererStudio`).

## Building

From a clone of the ChipWhisperer repository:

```
python packaging/cwstudio/build.py
```

produces `dist/ChipWhispererStudio-<os>-<arch>.zip`. The GitHub Actions
workflow `.github/workflows/cwstudio.yml` builds all three platforms.
