"""PyInstaller entry point for ChipWhisperer Studio.

Kept separate from cwstudio.cli so the frozen executable can apply
bundle-specific fix-ups (libusb location, multiprocessing guard) before the
application imports anything.
"""
import multiprocessing
import os
import sys


def _fix_libusb_path():
    """Make python-libusb1 find the bundled libusb on every platform."""
    if not getattr(sys, "frozen", False):
        return
    base = getattr(sys, "_MEIPASS", os.path.dirname(sys.executable))
    for d in (os.path.join(base, "usb1"), base):
        if os.path.isdir(d):
            os.environ["PATH"] = d + os.pathsep + os.environ.get("PATH", "")
            if sys.platform.startswith("linux"):
                os.environ["LD_LIBRARY_PATH"] = d + os.pathsep + os.environ.get("LD_LIBRARY_PATH", "")
            elif sys.platform == "darwin":
                os.environ["DYLD_LIBRARY_PATH"] = d + os.pathsep + os.environ.get("DYLD_LIBRARY_PATH", "")


if __name__ == "__main__":
    multiprocessing.freeze_support()
    _fix_libusb_path()
    from cwstudio.cli import main
    sys.exit(main())
