import chipwhisperer as cw
import serial
from serial.tools import list_ports
from itertools import product
import numpy as np
import time
import pytest

scope = cw.scope()
scope.default_setup()
target = cw.target(scope, cw.targets.SimpleSerial2)
SER_RX_BUF_SZ = target.rx_buf_size #1024*6

RX_MSG_LENS = (SER_RX_BUF_SZ // 2, SER_RX_BUF_SZ, SER_RX_BUF_SZ * 2)
TX_MSG_LENS = (64, 256, 6114)
BAUDS = (38400, 230400, int(1E6), int(2E6), int(4E6))
CDC_BAUDS = (38400, 230400, int(1E6))
# BAUDS = (int(4E6), int(4.5E6), int(5E6))
STOP_BITS = {1: serial.STOPBITS_ONE, 2: serial.STOPBITS_TWO} # NOTE: Tigard doesn't support 1.5 stop bits
PARITY = {"none": serial.PARITY_NONE, "odd": serial.PARITY_ODD, "even": serial.PARITY_EVEN, \
          "mark": serial.PARITY_MARK, "space": serial.PARITY_SPACE}

RX_SERIAL_TEST_DATA = list(product(BAUDS,  PARITY.keys(), STOP_BITS.keys(), RX_MSG_LENS))
TX_SERIAL_TEST_DATA = list(product(BAUDS,  PARITY.keys(), STOP_BITS.keys(), TX_MSG_LENS))

TX_CDC_TEST_DATA = list(product(CDC_BAUDS,  PARITY.keys(), STOP_BITS.keys(), TX_MSG_LENS))
RX_CDC_TEST_DATA = list(product(CDC_BAUDS,  PARITY.keys(), STOP_BITS.keys(), RX_MSG_LENS))

SERIAL_PARAMS="baud,parity,stop_bits,msg_len"

XON = 0x11
XOFF = 0x13

def test_sw_flow_control(baud=230400, parity="none", stop_bits=1, msg_len=64):
    target.xonxoff = 1
    dev = list(list_ports.grep("TG1001D4A"))[0].device

    rng = np.random.default_rng()

    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=0.25) as ser:
        # msg = b""
        # msg = bytes(bytearray(rng.integers(0x20, 0x7F, size=msg_len, dtype=np.uint8)))

        # target.write(msg)

        # rtn = ser.read(len(msg))

        # num_attempt = 0
        # while ser.in_waiting > 0:
        #     rtn += ser.read(ser.in_waiting)
        #     time.sleep(0.1)
        #     assert num_attempt < 10
        #     num_attempt += 1

        # assert rtn == msg

        # # confirm we don't send if we get XOFF
        # ser.write(bytes([XOFF]))
        # target.write(msg)

        # rtn = ser.read(len(msg))
        # assert len(rtn) == 0

        # ser.write(bytes([XON]))
        # rtn = ser.read(len(msg))

        # assert rtn == msg

        # test that we send XOFF when our buffer is full
        msg = bytes(bytearray(rng.integers(0x20, 0x7F, size=SER_RX_BUF_SZ, dtype=np.uint8)))
        ser.write(msg)
        while ser.out_waiting > 0:
            pass
        time.sleep(0.5)

        # buffer should be full, make sure Tigard got XOFF
        rtn = ser.read(1)
        assert rtn == bytes([XOFF])

        # Read our buffer
        rtn = target.read()
        assert rtn == msg

        # Make sure Tigard got our XON message
        rtn = ser.read(1)
        assert rtn == bytes([XON])
        


@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc_rx(baud, parity, stop_bits, msg_len):
    scope.io.cdc_settings = 1
    dev = list(list_ports.grep("TG1001D4A"))[0].device
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as ser:
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

@pytest.mark.parametrize(SERIAL_PARAMS, TX_CDC_TEST_DATA)
def test_cdc_tx(baud, parity, stop_bits, msg_len):
    scope.io.cdc_settings = 1
    dev = list(list_ports.grep("TG1001D4A"))[0].device
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as ser:
        with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as cw_ser:
            msg = b""
            rtn = b""
            msg = bytearray(rng.integers(256, size=msg_len, dtype=np.uint8))

            cw_ser.write(msg)
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

@pytest.mark.parametrize(SERIAL_PARAMS, RX_SERIAL_TEST_DATA)
def test_sam_rx(baud, parity, stop_bits, msg_len):
    scope.io.cdc_settings = 0
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    dev = list(list_ports.grep("TG1001D4A"))[0].device

    rng = np.random.default_rng()
    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits]) as ser:
        msg = b""
        msg = bytes(bytearray(rng.integers(256, size=msg_len, dtype=np.uint8)))

        # account for overrun: TODO account for different rxbuf len
        if len(msg) > SER_RX_BUF_SZ:
            exp_rtn = msg[-SER_RX_BUF_SZ:]
        else:
            exp_rtn = msg[:]
        target.flush()
        ser.write(msg)

        while ser.out_waiting > 0: pass
        # sleep_scale = 0.0005
        # if baud < 30000:
        sleep_scale = 0.002 * (9600 / baud)
        # if baud < 100000:
        #     sleep_scale = 0.0005
        # if baud < 1000000:
        #     sleep_scale = 0.0001
        time.sleep(sleep_scale*len(msg))
        rtn = target.read(len(exp_rtn)).encode('latin1')

        assert rtn == exp_rtn

@pytest.mark.parametrize(SERIAL_PARAMS, TX_SERIAL_TEST_DATA)
def test_sam_tx(baud, parity, stop_bits, msg_len):
    scope.io.cdc_settings = 0
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    dev = list(list_ports.grep("TG1001D4A"))[0].device

    rng = np.random.default_rng()
    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=2) as ser:
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

