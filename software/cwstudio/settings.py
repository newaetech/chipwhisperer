"""Generic settings-tree introspection for ChipWhisperer scope/target objects.

Every ChipWhisperer settings object (`scope.adc`, `scope.gain`, `target`, ...)
implements ``_dict_repr()`` returning an (ordered) dict of its user-facing
values.  The keys are Python ``property`` names on the object's class.  We use
that to build a JSON tree with, for each leaf:

* ``path``      dotted path relative to the root (``adc.samples``)
* ``value``     JSON-safe current value
* ``type``      one of bool/int/float/str/list/null/other
* ``writable``  whether the property has a setter (and is not marked read-only)
* ``doc``       first paragraph of the property docstring
* ``choices``   known enumeration values, if any

Assignment (`set_value`) converts the incoming JSON value to the type of the
current value so ``"5000"`` becomes ``5000`` for an int property, etc.
"""
from __future__ import annotations

import inspect
import logging
import re
from collections import OrderedDict
from typing import Any, Dict, List, Optional

import numpy as np

log = logging.getLogger("cwstudio.settings")

# Enumerations that are hard to parse from docstrings.  Keyed by the *last two*
# path components (or one), most specific match wins.
KNOWN_CHOICES: Dict[str, List[Any]] = {
    "gain.mode": ["low", "high"],
    "adc.basic_mode": ["rising_edge", "falling_edge", "low", "high"],
    "adc.fifo_fill_mode": ["normal", "enabled", "segment"],
    "adc.bits_per_sample": [8, 12],
    "clock.adc_src": ["clkgen_x4", "clkgen_x1", "extclk_x4", "extclk_x1", "extclk_dir"],
    "clock.clkgen_src": ["system", "extclk"],
    "clock.freq_ctr_src": ["clkgen", "extclk"],
    "clock.adc_mul": [1, 2, 3, 4],
    "trigger.module": ["basic", "SAD", "DECODEIO", "UART", "edge_counter", "ADC", "trace"],
    "trigger.triggers": ["tio1", "tio2", "tio3", "tio4", "nrst", "sma", "userio_d0", "userio_d1",
                         "userio_d2", "userio_d3", "userio_d4", "userio_d5", "userio_d6", "userio_d7"],
    "io.tio1": ["serial_rx", "serial_tx", "high_z", "gpio_low", "gpio_high", "gpio_disabled", None],
    "io.tio2": ["serial_rx", "serial_tx", "high_z", "gpio_low", "gpio_high", "gpio_disabled", None],
    "io.tio3": ["serial_rx", "serial_tx", "high_z", "gpio_low", "gpio_high", "gpio_disabled", None],
    "io.tio4": ["serial_rx", "serial_tx", "high_z", "gpio_low", "gpio_high", "gpio_disabled", None],
    "io.hs2": ["clkgen", "glitch", "disabled", None],
    "io.pdic": ["high_z", "low", "high", "disabled", None, True, False],
    "io.pdid": ["high_z", "low", "high", "disabled", None, True, False],
    "io.nrst": ["high_z", "low", "high", "disabled", None, True, False],
    "io.target_pwr": [True, False],
    "io.glitch_hp": [True, False],
    "io.glitch_lp": [True, False],
    "glitch.clk_src": ["target", "clkgen", "pll"],
    "glitch.output": ["clock_xor", "clock_or", "glitch_only", "clock_only", "enable_only"],
    "glitch.trigger_src": ["continuous", "manual", "ext_single", "ext_continuous"],
    "glitch.enabled": [True, False],
    "glitch.arm_timing": ["no_glitch", "before_scope", "after_scope"],
    "glitch.mmcm_locked": [],
    "adc.clk_src": ["int", "ext"],
    "adc.test_mode": [True, False],
    "adc.stream_mode": [True, False],
}

# Leaves that are informative only, even if the property has a setter.
FORCE_READ_ONLY = {
    "sn", "fw_version", "fpga_buildtime", "adc.trig_count", "adc.state", "clock.adc_locked",
    "clock.freq_ctr", "clock.clkgen_locked", "glitch.mmcm_locked", "errors",
    "simpleserial_last_read", "simpleserial_last_sent", "currently_xoff",
}


def _json_safe(v: Any) -> Any:
    if v is None or isinstance(v, (bool, int, float, str)):
        if isinstance(v, float) and (v != v):  # NaN
            return None
        return v
    if isinstance(v, (np.integer,)):
        return int(v)
    if isinstance(v, (np.floating,)):
        return float(v)
    if isinstance(v, (bytes, bytearray)):
        return bytes(v).hex()
    if isinstance(v, np.ndarray):
        return v.tolist()
    if isinstance(v, (list, tuple)):
        return [_json_safe(x) for x in v]
    if isinstance(v, dict):
        return {str(k): _json_safe(x) for k, x in v.items()}
    return str(v)


def _type_name(v: Any) -> str:
    if v is None:
        return "null"
    if isinstance(v, bool):
        return "bool"
    if isinstance(v, (int, np.integer)):
        return "int"
    if isinstance(v, (float, np.floating)):
        return "float"
    if isinstance(v, str):
        return "str"
    if isinstance(v, (list, tuple, np.ndarray)):
        return "list"
    if isinstance(v, dict):
        return "dict"
    return "other"


def _first_paragraph(doc: Optional[str]) -> str:
    if not doc:
        return ""
    doc = inspect.cleandoc(doc)
    # Keep everything up to the first ':Getter:' / 'Args:' / 'Raises:' style block, max ~1200 chars.
    cut = re.split(r"\n\s*(?::Getter:|:Setter:|Args:|Raises:|Returns:|\.\. version)", doc, maxsplit=1)[0]
    return cut.strip()[:1200]


def _lookup_property(obj: Any, name: str):
    for klass in type(obj).__mro__:
        attr = klass.__dict__.get(name)
        if attr is not None:
            return attr
    return None


def _choices_for(path: str, doc: str) -> Optional[List[Any]]:
    parts = path.split(".")
    for n in (2, 1):
        key = ".".join(parts[-n:])
        if key in KNOWN_CHOICES:
            return KNOWN_CHOICES[key]
    # Try to parse a bullet list of quoted options from the docstring.
    quoted = re.findall(r'^\s*\*\s*["\']([^"\']+)["\']', doc, flags=re.M)
    if len(quoted) >= 2:
        return quoted
    return None


def describe(obj: Any, prefix: str = "", max_depth: int = 6) -> List[Dict[str, Any]]:
    """Return a list of nodes describing `obj`'s settings tree."""
    nodes: List[Dict[str, Any]] = []
    if max_depth <= 0 or obj is None or not hasattr(obj, "_dict_repr"):
        return nodes
    try:
        rep = obj._dict_repr()
    except Exception as e:  # noqa: BLE001
        log.debug("_dict_repr failed for %s: %s", prefix, e)
        return [{"path": prefix or "root", "name": prefix.split(".")[-1], "kind": "error",
                 "value": f"error: {e}", "type": "str", "writable": False, "doc": ""}]
    if not isinstance(rep, dict):
        return nodes
    for key, value in rep.items():
        path = f"{prefix}.{key}" if prefix else key
        child_obj = None
        try:
            child_obj = getattr(obj, key)
        except Exception:  # noqa: BLE001
            child_obj = None
        if isinstance(value, dict) and child_obj is not None and hasattr(child_obj, "_dict_repr"):
            nodes.append({
                "path": path, "name": key, "kind": "group",
                "children": describe(child_obj, path, max_depth - 1),
            })
            continue
        prop = _lookup_property(obj, key)
        doc = ""
        writable = False
        if isinstance(prop, property):
            writable = prop.fset is not None
            doc = _first_paragraph(prop.__doc__)
        elif prop is None and key in getattr(obj, "__dict__", {}):
            writable = True  # plain instance attribute (simulator objects)
        ro_attrs = getattr(obj, "_read_only_attrs", None) or []
        if key in ro_attrs or path in FORCE_READ_ONLY or key in FORCE_READ_ONLY:
            writable = False
        nodes.append({
            "path": path, "name": key, "kind": "leaf",
            "value": _json_safe(value), "type": _type_name(value),
            "writable": writable, "doc": doc,
            "choices": _choices_for(path, doc),
        })
    return nodes


def _resolve(root: Any, path: str):
    parts = path.split(".")
    obj = root
    for p in parts[:-1]:
        obj = getattr(obj, p)
    return obj, parts[-1]


def coerce(value: Any, current: Any, choices: Optional[List[Any]] = None) -> Any:
    """Convert a JSON value to the Python type of `current`."""
    if isinstance(value, str):
        s = value.strip()
        if s.lower() in ("none", "null", ""):
            if current is None or (choices and None in choices) or s == "":
                if current is None or (choices and None in choices):
                    return None
        if isinstance(current, bool) or (choices and all(isinstance(c, bool) for c in choices if c is not None)):
            if s.lower() in ("true", "1", "yes", "on"):
                return True
            if s.lower() in ("false", "0", "no", "off"):
                return False
        if isinstance(current, bool):
            raise ValueError(f"expected true/false, got {value!r}")
        if isinstance(current, (int, np.integer)) and not isinstance(current, bool):
            try:
                return int(s, 0)
            except ValueError:
                f = float(s)
                if f.is_integer():
                    return int(f)
                return f
        if isinstance(current, (float, np.floating)):
            return float(s)
        if isinstance(current, (list, tuple)):
            import json
            return json.loads(s)
        if current is None and choices:
            # Try to map to a typed choice
            for c in choices:
                if c is not None and str(c) == s:
                    return c
        return s
    if isinstance(value, bool):
        return value
    if isinstance(value, (int, float)):
        if isinstance(current, bool):
            return bool(value)
        if isinstance(current, (int, np.integer)) and float(value).is_integer():
            return int(value)
        if isinstance(current, (float, np.floating)):
            return float(value)
        return value
    return value


def get_value(root: Any, path: str) -> Any:
    obj, name = _resolve(root, path)
    return _json_safe(getattr(obj, name))


def set_value(root: Any, path: str, value: Any) -> Any:
    """Assign `value` to `root.<path>` and return the read-back value."""
    obj, name = _resolve(root, path)
    try:
        current = getattr(obj, name)
    except Exception:  # noqa: BLE001
        current = None
    choices = _choices_for(path, "")
    coerced = coerce(value, current, choices)
    setattr(obj, name, coerced)
    try:
        return _json_safe(getattr(obj, name))
    except Exception:  # noqa: BLE001
        return _json_safe(coerced)


def flatten(nodes: List[Dict[str, Any]]) -> "OrderedDict[str, Any]":
    out: "OrderedDict[str, Any]" = OrderedDict()
    for n in nodes:
        if n.get("kind") == "group":
            out.update(flatten(n.get("children", [])))
        else:
            out[n["path"]] = n.get("value")
    return out
