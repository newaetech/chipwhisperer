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