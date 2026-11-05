import chipwhisperer as cw
import serial
from serial.tools import list_ports
from itertools import product
import numpy as np
import time
import pytest

from common import *

dev = list(list_ports.grep("TG1001D4A"))#[0].device
pytestmark = pytest.mark.skipif(len(dev) < 1, reason="Tigard not detected")


@pytest.fixture(autouse=True)
def reset_usart_settings():
    yield
    scope.io.cdc_settings = 0
    target.xonxoff = 0

def test_sw_flow_control(baud=230400, parity="none", stop_bits=1, msg_len=64):
    scope.io.cdc_settings = 0
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits
    target.xonxoff = 1
    rng = np.random.default_rng()
    tigard_dev = dev[0].device

    with serial.Serial(tigard_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=0.25) as ser:
        msg = b""
        msg = bytes(bytearray(rng.integers(0x20, 0x7F, size=msg_len, dtype=np.uint8)))

        target.write(msg)

        rtn = ser.read(len(msg))

        num_attempt = 0
        while ser.in_waiting > 0:
            rtn += ser.read(ser.in_waiting)
            time.sleep(0.1)
            assert num_attempt < 10
            num_attempt += 1

        assert rtn == msg

        # confirm we don't send if we get XOFF
        ser.write(bytes([XOFF]))
        while ser.out_waiting > 0: pass
        time.sleep(0.5)
        target.write(msg)

        rtn = ser.read(len(msg))
        assert len(rtn) == 0

        ser.write(bytes([XON]))
        rtn = ser.read(len(msg))

        assert rtn == msg

        time.sleep(0.2)
        target.flush()

        # test that we send XOFF when our buffer is full
        msg = bytes(bytearray(rng.integers(0x20, 0x7F, size=SER_RX_BUF_SZ, dtype=np.uint8)))
        ser.write(msg)
        while ser.out_waiting > 0:
            pass
        time.sleep(0.2)

        # buffer should be full, make sure Tigard got XOFF
        rtn = ser.read(1)
        assert rtn == bytes([XOFF])

        # Read our buffer
        rtn = target.read().encode('latin1')
        if len(msg) > SER_RX_BUF_SZ:
            exp_rtn = msg[-SER_RX_BUF_SZ:]
        else:
            exp_rtn = msg[:]
        assert rtn == exp_rtn

        # Make sure Tigard got our XON message
        rtn = ser.read(1)
        assert rtn == bytes([XON])

@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc_rx(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(1.5E6):
        pytest.skip("use --highbaud to run")

    scope.io.cdc_settings = 1
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    tigard_dev = dev[0].device
    with serial.Serial(tigard_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as ser:
        with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as cw_ser:
            time.sleep(0.25)
            msg = b""
            rtn = b""
            msg = bytearray(rng.integers(256, size=msg_len, dtype=np.uint8))

            ser.write(msg)
            # while target.in_waiting_tx() > 0: pass

            rtn = cw_ser.read(len(msg))

            num_attempt = 0
            while ser.in_waiting > 0:
                rtn += cw_ser.read(ser.in_waiting)
                time.sleep(0.1)
                assert num_attempt < 10
                num_attempt += 1

            assert rtn == msg
        pass

@pytest.mark.parametrize(SERIAL_PARAMS, RX_SERIAL_TEST_DATA)
def test_sam_rx(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(4E6):
        pytest.skip("use --highbaud to run")
    scope.io.cdc_settings = 0
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    rng = np.random.default_rng()
    tigard_dev = dev[0].device
    with serial.Serial(tigard_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits]) as ser:
        msg = b""
        msg = bytes(bytearray(rng.integers(256, size=msg_len, dtype=np.uint8)))

        if len(msg) > SER_RX_BUF_SZ:
            exp_rtn = msg[-SER_RX_BUF_SZ:]
        else:
            exp_rtn = msg[:]
        target.flush()
        ser.write(msg)

        while ser.out_waiting > 0: pass
        # sleep_scale = 0.0005
        # if baud < 30000:
        sleep_scale = 0.003 * (9600 / baud)
        # if baud < 100000:
        #     sleep_scale = 0.0005
        # if baud < 1000000:
        #     sleep_scale = 0.0001
        time.sleep(sleep_scale*len(msg))
        rtn = target.read(len(exp_rtn)).encode('latin1')

        assert rtn == exp_rtn

@pytest.mark.parametrize(SERIAL_PARAMS, TX_CDC_TEST_DATA)
def test_cdc_tx(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(1.5E6):
        pytest.skip("use --highbaud to run")
    scope.io.cdc_settings = 1
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    tigard_dev = dev[0].device
    with serial.Serial(tigard_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as ser:
        with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as cw_ser:
            msg = b""
            rtn = b""
            msg = bytearray(rng.integers(256, size=msg_len, dtype=np.uint8))

            cw_ser.write(msg)
            while cw_ser.out_waiting > 0: pass
            # while target.in_waiting_tx() > 0: pass

            rtn = ser.read(len(msg))

            num_attempt = 0
            while ser.in_waiting > 0:
                rtn += ser.read(ser.in_waiting)
                time.sleep(0.1)
                assert num_attempt < 10
                num_attempt += 1

            assert rtn == msg
        pass

@pytest.mark.parametrize(SERIAL_PARAMS, TX_SERIAL_TEST_DATA)
def test_sam_tx(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(4E6):
        pytest.skip("use --highbaud to run")
    scope.io.cdc_settings = 0
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    rng = np.random.default_rng()
    tigard_dev = dev[0].device
    with serial.Serial(tigard_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as ser:
        msg = b""
        rtn = b""
        msg = bytearray(rng.integers(256, size=msg_len, dtype=np.uint8))

        target.write(msg)
        # while target.in_waiting_tx() > 0: pass

        rtn = ser.read(len(msg))

        num_attempt = 0
        while ser.in_waiting > 0:
            rtn += ser.read(ser.in_waiting)
            time.sleep(0.1)
            assert num_attempt < 10
            num_attempt += 1

        assert rtn == msg



