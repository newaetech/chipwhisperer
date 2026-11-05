import chipwhisperer as cw
import serial
import numpy as np
import time
import pytest

from common import *

SAM4S_CONNECTED = False
try:
    cw.program_target(scope, cw.programmers.SAM4SProgrammer, "sam4s_test_fw/loopback-CWHUSKY.bin")
    SAM4S_CONNECTED = True
    pass
except:
    pass
pytestmark = pytest.mark.skipif(SAM4S_CONNECTED is False, reason="SAM4S not connected")

@pytest.fixture(autouse=True)
def reset_usart_settings():
    yield
    scope.io.cdc_settings = 0
    target.xonxoff = 0

@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc_rapid(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    msg_len *= 10
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(1.5E6):
        pytest.skip("use --highbaud to run")

    scope.io.cdc_settings = 1
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    msg_sz = 1024

    with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=0.2) as cw_ser:
        while msg_len > 0:
            msg = b""
            rtn = b""
            msg = bytearray(rng.integers(256, size=msg_sz, dtype=np.uint8))
            msg_len -= msg_sz

            cw_ser.write(msg)
            while cw_ser.out_waiting > 0: pass

            rtn = cw_ser.read(len(msg))

            assert rtn == msg

@pytest.mark.parametrize(SERIAL_PARAMS, RX_SERIAL_TEST_DATA)
def test_sam(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(8E6):
        pytest.skip("use --highbaud to run")
    scope.io.cdc_settings = 0
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    rng = np.random.default_rng()

    msg = bytes(bytearray(rng.integers(256, size=msg_len, dtype=np.uint8)))

    if len(msg) > SER_RX_BUF_SZ:
        exp_rtn = msg[-SER_RX_BUF_SZ:]
    else:
        exp_rtn = msg[:]
    target.flush()
    target.write(msg)

    while target.in_waiting_tx() > 0: pass
    # time.sleep(0.1)
    rtn = target.read(len(exp_rtn)).encode('latin1')

    assert rtn == exp_rtn

@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(1.5E6):
        pytest.skip("use --highbaud to run")

    scope.io.cdc_settings = 1
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=0.2) as cw_ser:
        msg = b""
        rtn = b""
        msg = bytearray(rng.integers(256, size=msg_len, dtype=np.uint8))

        cw_ser.write(msg)
        while cw_ser.out_waiting > 0: pass
        time.sleep(0.1)

        rtn = cw_ser.read(len(msg))


        assert rtn == msg

