#!/usr/bin/env python3
"""Build a standalone ChipWhisperer Studio bundle for the current OS.

    python packaging/cwstudio/build.py [--no-venv] [--out dist]

Steps:
1. create an isolated venv (unless --no-venv), install the repo with the
   `studio` extra plus pyinstaller and libusb-package;
2. run PyInstaller with cwstudio.spec;
3. copy launch helpers + udev rule + README next to the executable;
4. zip the result as ChipWhispererStudio-<os>-<arch>.zip
"""
from __future__ import annotations

import argparse
import os
import platform
import shutil
import subprocess
import sys
import zipfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, "..", ".."))
APP = "ChipWhispererStudio"


def run(cmd, **kw):
    print("+", " ".join(cmd), flush=True)
    subprocess.check_call(cmd, **kw)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--no-venv", action="store_true", help="use the current interpreter instead of a fresh venv")
    ap.add_argument("--out", default=os.path.join(ROOT, "dist"))
    ap.add_argument("--skip-zip", action="store_true")
    args = ap.parse_args()

    if args.no_venv:
        py = sys.executable
    else:
        venv = os.path.join(ROOT, "build", "cwstudio-venv")
        if not os.path.isdir(venv):
            run([sys.executable, "-m", "venv", venv])
        py = os.path.join(venv, "Scripts" if os.name == "nt" else "bin", "python" + (".exe" if os.name == "nt" else ""))
        run([py, "-m", "pip", "install", "--upgrade", "pip", "wheel"])
        run([py, "-m", "pip", "install", "-e", ROOT + "[studio]", "pyinstaller>=6.0", "libusb-package"])

    workdir = os.path.join(ROOT, "build", "cwstudio-pyinstaller")
    run([py, "-m", "PyInstaller", "--noconfirm", "--clean", "--distpath", args.out, "--workpath", workdir,
         os.path.join(HERE, "cwstudio.spec")], cwd=ROOT)

    bundle = os.path.join(args.out, APP)
    shutil.copy(os.path.join(ROOT, "50-newae.rules"), bundle)
    shutil.copy(os.path.join(HERE, "README.md"), os.path.join(bundle, "README.md"))
    shutil.copy(os.path.join(ROOT, "LICENSE.txt"), os.path.join(bundle, "LICENSE.txt"))
    if os.name == "nt":
        with open(os.path.join(bundle, "ChipWhispererStudio-simulator.bat"), "w") as f:
            f.write("@echo off\r\n\"%~dp0ChipWhispererStudio.exe\" --simulate %*\r\n")
    else:
        sh = os.path.join(bundle, "chipwhisperer-studio.sh")
        with open(sh, "w") as f:
            f.write("#!/bin/sh\ncd \"$(dirname \"$0\")\" && exec ./ChipWhispererStudio \"$@\"\n")
        os.chmod(sh, 0o755)

    if not args.skip_zip:
        osname = {"Linux": "linux", "Darwin": "macos", "Windows": "windows"}.get(platform.system(), platform.system().lower())
        arch = platform.machine().lower().replace("amd64", "x86_64").replace("aarch64", "arm64")
        zpath = os.path.join(args.out, f"{APP}-{osname}-{arch}.zip")
        print("+ zip", zpath, flush=True)
        with zipfile.ZipFile(zpath, "w", zipfile.ZIP_DEFLATED) as z:
            for dp, _dn, fns in os.walk(bundle):
                for fn in fns:
                    full = os.path.join(dp, fn)
                    info = zipfile.ZipInfo(os.path.relpath(full, args.out))
                    info.external_attr = (os.stat(full).st_mode & 0xFFFF) << 16
                    info.compress_type = zipfile.ZIP_DEFLATED
                    with open(full, "rb") as fh:
                        z.writestr(info, fh.read())
        print("built", zpath)
    print("done:", bundle)


if __name__ == "__main__":
    main()
