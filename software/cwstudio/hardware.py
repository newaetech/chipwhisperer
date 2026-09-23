"""Real-hardware helpers built on the public `chipwhisperer` API."""
from __future__ import annotations

import logging
import os
import platform
import sys
from typing import Any, Dict, List, Optional

log = logging.getLogger("cwstudio.hardware")

SCOPE_KINDS = {
    "auto": {"label": "Auto-detect", "name": None},
    "lite": {"label": "ChipWhisperer-Lite", "name": "Lite"},
    "pro": {"label": "ChipWhisperer-Pro (CW1200)", "name": "Pro"},
    "nano": {"label": "ChipWhisperer-Nano", "name": "Nano"},
    "husky": {"label": "ChipWhisperer-Husky", "name": "Husky"},
    "huskyplus": {"label": "ChipWhisperer-Husky Plus", "name": "HuskyPlus"},
    "sim": {"label": "Simulator (no hardware)", "name": None},
}

TARGET_KINDS = {
    "SimpleSerial": {"label": "SimpleSerial v1 (legacy firmware)"},
    "SimpleSerial2": {"label": "SimpleSerial v2 (default firmware)"},
    "SimpleSerial2_CDC": {"label": "SimpleSerial v2 over USB-CDC"},
    "CW305": {"label": "CW305 Artix FPGA board"},
    "sim": {"label": "Simulated AES target"},
}

PROGRAMMERS = {
    "STM32F": {"label": "STM32F (CW308_STM32Fx, CWLITEARM, Husky targets)", "cls": "STM32FProgrammer"},
    "XMEGA": {"label": "XMEGA (CWLITEXMEGA, CW303, CW308_XMEGA)", "cls": "XMEGAProgrammer"},
    "AVR": {"label": "AVR (CW308_AVR, Nano ATmega)", "cls": "AVRProgrammer"},
    "SAM4S": {"label": "SAM4S (CW308_SAM4S, Husky)", "cls": "SAM4SProgrammer"},
    "NEORV32": {"label": "NEORV32 (soft-core RISC-V)", "cls": "NEORV32Programmer"},
}


def list_devices() -> List[Dict[str, Any]]:
    try:
        import chipwhisperer as cw
        devs = cw.list_devices()
        out = []
        for d in devs:
            out.append({"name": d.get("name"), "sn": d.get("sn"), "hw_loc": d.get("hw_loc")})
        return out
    except Exception as e:  # noqa: BLE001
        log.warning("USB enumeration failed: %s", e)
        return [{"name": f"enumeration failed: {e}", "sn": None, "hw_loc": None, "error": True}]


def connect_scope(kind: str = "auto", sn: Optional[str] = None, force: bool = False, **kwargs):
    import chipwhisperer as cw
    if kind == "sim":
        from cwstudio.simulator import SimScope
        return SimScope()
    name = SCOPE_KINDS.get(kind, {}).get("name")
    args: Dict[str, Any] = {}
    if name:
        args["name"] = name
    if sn:
        args["sn"] = sn
    if force:
        args["force"] = True
    args.update(kwargs)
    return cw.scope(**args)


def connect_target(scope, kind: str = "SimpleSerial2", **kwargs):
    if kind == "sim":
        from cwstudio.simulator import SimTarget
        t = SimTarget()
        t.con(scope)
        return t
    import chipwhisperer as cw
    from chipwhisperer.capture import targets
    cls = getattr(targets, kind, None)
    if cls is None:
        raise ValueError(f"unknown target type {kind}")
    return cw.target(scope, cls, **kwargs)


def program_target(scope, programmer: str, fw_path: str, **kwargs):
    import chipwhisperer as cw
    entry = PROGRAMMERS.get(programmer)
    if entry is None:
        raise ValueError(f"unknown programmer {programmer}")
    if not os.path.isfile(fw_path):
        raise FileNotFoundError(fw_path)
    if getattr(scope, "_getCWType", lambda: "")() == "cwsim":
        import time
        time.sleep(0.5)
        return {"ok": True, "simulated": True, "bytes": os.path.getsize(fw_path)}
    cls = getattr(cw.programmers, entry["cls"])
    cw.program_target(scope, cls, fw_path, **kwargs)
    return {"ok": True, "bytes": os.path.getsize(fw_path)}


def scope_info(scope) -> Dict[str, Any]:
    if scope is None:
        return {"connected": False}
    info: Dict[str, Any] = {"connected": True}
    try:
        info["type"] = scope._getCWType()
    except Exception:  # noqa: BLE001
        info["type"] = type(scope).__name__
    for attr in ("sn", "fw_version"):
        try:
            v = getattr(scope, attr)
            info[attr] = v if isinstance(v, (str, int, float, dict, list)) else str(v)
        except Exception:  # noqa: BLE001
            pass
    try:
        info["name"] = scope.get_name()
    except Exception:  # noqa: BLE001
        info["name"] = _pretty_type(info.get("type", ""))
    info["is_husky"] = bool(getattr(scope, "_is_husky", False))
    info["simulated"] = info.get("type") == "cwsim"
    return info


def _pretty_type(t: str) -> str:
    return {"cwlite": "ChipWhisperer-Lite", "cw1200": "ChipWhisperer-Pro", "cwnano": "ChipWhisperer-Nano",
            "cwhusky": "ChipWhisperer-Husky", "cwsim": "Simulator"}.get(t, t or "scope")


def target_info(target) -> Dict[str, Any]:
    if target is None:
        return {"connected": False}
    return {"connected": True, "type": type(target).__name__,
            "simulated": type(target).__name__ == "SimTarget"}


def platform_help() -> Dict[str, Any]:
    """OS-specific setup hints shown in the Connect tab."""
    sysname = platform.system()
    rules_path = _bundled_udev_rules()
    info: Dict[str, Any] = {"os": sysname, "python": sys.version.split()[0],
                            "frozen": bool(getattr(sys, "frozen", False))}
    if sysname == "Linux":
        info["udev_rules_path"] = rules_path
        info["udev_install_cmd"] = (
            f"sudo cp \"{rules_path}\" /etc/udev/rules.d/50-newae.rules && "
            "sudo groupadd -f chipwhisperer && sudo usermod -aG chipwhisperer $USER && "
            "sudo udevadm control --reload-rules && sudo udevadm trigger"
        )
        info["note"] = "Install the udev rule once, then log out and back in and re-plug the device."
    elif sysname == "Windows":
        info["driver_url"] = "https://chipwhisperer.readthedocs.io/en/latest/windows-install.html#windows-drivers"
        info["note"] = "ChipWhisperer devices need the WinUSB driver. If the device is not detected, install the NewAE driver package or use Zadig."
    elif sysname == "Darwin":
        info["note"] = "No driver needed on macOS. If the device is not detected, try another cable/port."
    return info


def _bundled_udev_rules() -> str:
    here = os.path.dirname(os.path.abspath(__file__))
    candidates = [
        os.path.join(here, "resources", "50-newae.rules"),
        os.path.join(here, "..", "..", "50-newae.rules"),
    ]
    for c in candidates:
        if os.path.isfile(c):
            return os.path.abspath(c)
    return "50-newae.rules"
