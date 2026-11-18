# import pytest
# def pytest_addoption(parser):
#     parser.addoption("--lowbaud", action="store", default=False, help="Run < 230400bps tests. Slow")
#     parser.addoption("--highbaud", action="store", default=False, help="Run > 1.5Mbps (CDC) and > 4Mbps (target) tests. Likely to fail")

# @pytest.fixture
# def lowbaud(request):
#     return request.config.getoption("--lowbaud")

# @pytest.fixture
# def highbaud(request):
#     return request.config.getoption("--highbaud")

# def pytest_collection_modifyitems(config, items):
#     remaining = []
#     deselected = []
#     for item in items:
#         if item.get_closest_marker("skip_silent"):
#             deselected.append(item)
#         else:
#             remaining.append(item)
#     config.hook.pytest_deselected(items=deselected)
#     items[:] = remaining


import pytest

def pytest_addoption(parser):
    parser.addoption("--lowbaud", action="store", default=False, help="Run < 230400bps tests. Slow")
    parser.addoption("--highbaud", action="store", default=False, help="Run > 1.5Mbps (CDC) and > 4Mbps (target) tests. Likely to fail")

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