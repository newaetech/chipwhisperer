import pytest
import os

def pytest_addoption(parser):
    parser.addoption("--lowbaud", action="store", default=False, help="Run < 230400bps tests. Slow")
    parser.addoption("--highbaud", action="store", default=False, help="Run > 1.5Mbps (CDC) and > 4Mbps (target) tests. Likely to fail")
    parser.addoption(
        "--upgrade-fw",
        action="store_true",
        default=False,
        help="Reprogram device firmware using upgrade_firmware() before checking versions",
    )

@pytest.fixture
def upgrade_fw(request):
    return request.config.getoption("--upgrade-fw")

@pytest.fixture
def lowbaud(request):
    return request.config.getoption("--lowbaud")

@pytest.fixture
def highbaud(request):
    return request.config.getoption("--highbaud")

def pytest_collection_modifyitems(config, items):
    remaining = []
    deselected = []
    silently_skipped = {}
    first_file = "test_fw_version.py"
    first = [item for item in items if os.path.basename(item.location[0]) == first_file]
    rest = [item for item in items if os.path.basename(item.location[0]) != first_file]
    items[:] = first + rest

    for item in items:
        marker = item.get_closest_marker("skip_silent")
        if marker:
            deselected.append(item)
            reason = marker.kwargs.get("reason") or (marker.args[0] if marker.args else "no reason given")
            silently_skipped.setdefault(item.location[0], set()).add(reason)
        else:
            remaining.append(item)

    config._silently_skipped = silently_skipped
    config.hook.pytest_deselected(items=deselected)
    items[:] = remaining

def pytest_terminal_summary(terminalreporter, exitstatus, config):
    silently_skipped = getattr(config, "_silently_skipped", {})
    if silently_skipped:
        terminalreporter.write_sep("=", "silently skipped files", yellow=True)
        for filepath, reasons in silently_skipped.items():
            terminalreporter.write_line(f"{filepath}: {', '.join(sorted(reasons))}")
