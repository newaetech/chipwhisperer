import chipwhisperer as cw
import pytest
from chipwhisperer.hardware.firmware.open_fw import fwver, fwdatetime
import time

scope = None
try:
    scope = cw.scope()
except:
    pass

target = None
try:
    target = cw.target(None, cw.targets.CW310, bsfile=None)
except:
    pass

IS_OPENADC = False
IS_HUSKY_PLUS = False
IS_HUSKY = False
IS_LITE = False
IS_PRO = False
IS_NANO = False
try:
    IS_OPENADC = isinstance(scope, cw.scopes.OpenADC)
    IS_HUSKY_PLUS = IS_OPENADC and getattr(scope, "_is_husky_plus", False)
    IS_HUSKY = IS_OPENADC and getattr(scope, "_is_husky", False) and not IS_HUSKY_PLUS
    IS_LITE = IS_OPENADC and scope._getCWType() == "cwlite"
    IS_PRO = IS_OPENADC and scope._getCWType() == "cw1200"
    IS_NANO = isinstance(scope, cw.scopes.CWNano)
except:
    pass

IS_CW305 = False
IS_CW310 = False
IS_CW340 = False
try:
    IS_CW305 = isinstance(target, cw.targets.CW305) and getattr(target, "platform", "cw305") == "cw305"
    IS_CW310 = isinstance(target, cw.targets.CW310) and getattr(target, "platform", "cw310") == "cw310"
    IS_CW340 = isinstance(target, cw.targets.CW340) or getattr(target, "platform", None) == "cw340"
except:
    pass


def _check_fw(device, hw_name: str, upgrade_fw: bool) -> None:
    global target
    if upgrade_fw:
        device.upgrade_firmware()
        time.sleep(1)
        device.con()
        # device.default_setup(verbose=False)
        # if isinstance(device, cw.scopes.ScopeTypes):
        #     print("Reconnecting target")
        #     target.con(device)
    assert device.fw_version_str == fwver(hw_name)
    assert device.sam_build_date == fwdatetime(hw_name)


@pytest.mark.skipif(not IS_HUSKY, reason="Husky not connected")
def test_husky_version(upgrade_fw):
    _check_fw(scope, "cwhusky", upgrade_fw)


@pytest.mark.skipif(not IS_LITE, reason="CW-Lite not connected")
def test_lite_version(upgrade_fw):
    _check_fw(scope, "cwlite", upgrade_fw)


@pytest.mark.skipif(not IS_NANO, reason="CW-Nano not connected")
def test_nano_version(upgrade_fw):
    _check_fw(scope, "cwnano", upgrade_fw)


@pytest.mark.skipif(not IS_HUSKY_PLUS, reason="Husky Plus not connected")
def test_husky_plus_version(upgrade_fw):
    _check_fw(scope, "cwhuskyplus", upgrade_fw)


@pytest.mark.skipif(not IS_PRO, reason="CW-Pro not connected")
def test_pro_version(upgrade_fw):
    _check_fw(scope, "cw1200", upgrade_fw)


@pytest.mark.skipif(not IS_CW305, reason="CW305 not connected")
def test_cw305_version(upgrade_fw):
    _check_fw(target, "cw305", upgrade_fw)


@pytest.mark.skipif(not IS_CW310, reason="CW310 not connected")
def test_cw310_version(upgrade_fw):
    _check_fw(target, "cwbergen", upgrade_fw)


@pytest.mark.skipif(not IS_CW340, reason="CW340 not connected")
def test_cw340_version(upgrade_fw):
    _check_fw(target, "cwluna", upgrade_fw)