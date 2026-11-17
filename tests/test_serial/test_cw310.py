import chipwhisperer as cw
import serial
import numpy as np
import time
import pytest
from serial.tools import list_ports
from itertools import product

CW310_CONNECTED = False
SER_RX_BUF_SZ = 256
try:
    cw310 = cw.target(None, cw.targets.CW310, bsfile="cw310_top_loopback160.bit", force=True)
    targets = [cw.target(cw310, cw.targets.SimpleSerial2, usart_num=0), \
            cw.target(cw310, cw.targets.SimpleSerial2, usart_num=1)]
    SER_RX_BUF_SZ = targets[0].rx_buf_size #1024*6
    CW310_CONNECTED = True
except:
    pass

if CW310_CONNECTED is False:
    print("Could not connect to CW310, skipping tests")
    pytestmark = pytest.mark.skip_silent(reason="CW310 not connected", allow_module_level=True)

RX_MSG_LENS = (SER_RX_BUF_SZ // 2, SER_RX_BUF_SZ, SER_RX_BUF_SZ * 2)
USART_NUMS = (1, 0)
TX_MSG_LENS = (64, 256, 512)
BAUDS = (38400, 230400, int(1E6), int(2E6), int(4E6), int(5E6), int(8E6), int(10E6), int(12E6))
CDC_BAUDS = (38400, 230400, int(1E6), int(1.5E6), int(2E6))
# BAUDS = (int(4E6), int(4.5E6), int(5E6))
STOP_BITS = {1: serial.STOPBITS_ONE, 2: serial.STOPBITS_TWO} # NOTE: Tigard doesn't support 1.5 stop bits
PARITY = {"none": serial.PARITY_NONE, "odd": serial.PARITY_ODD, "even": serial.PARITY_EVEN, \
          "mark": serial.PARITY_MARK, "space": serial.PARITY_SPACE}

RX_SERIAL_TEST_DATA = list(product(USART_NUMS, BAUDS,  PARITY.keys(), STOP_BITS.keys(), RX_MSG_LENS))
TX_SERIAL_TEST_DATA = list(product(USART_NUMS, BAUDS,  PARITY.keys(), STOP_BITS.keys(), TX_MSG_LENS))

TX_CDC_TEST_DATA = list(product(USART_NUMS, CDC_BAUDS,  PARITY.keys(), STOP_BITS.keys(), TX_MSG_LENS))
RX_CDC_TEST_DATA = list(product(USART_NUMS, CDC_BAUDS,  PARITY.keys(), STOP_BITS.keys(), RX_MSG_LENS))

SERIAL_PARAMS="usart_num,baud,parity,stop_bits,msg_len"

XON = 0x11
XOFF = 0x13

@pytest.fixture(autouse=True)
def reset_usart_settings():
    yield
    cw310.cdc_settings = 0
    targets[0].xonxoff = 0
    targets[1].xonxoff = 0

def test_tx_break():
    cw310.cdc_settings = 1

    for i in range(2):
        port = cw310.get_serial_ports()[i]['port']
        print(port)
        with serial.Serial(port, 115200, timeout=0.2) as ser:
            try:
                ser.break_condition = True
                # ser.send_break(10)
                time.sleep(0.1)
                print("Checking usart i {}".format(i))
                assert targets[i].ser.cwlite_usart.is_tx_low() == True
                assert targets[i].ser.cwlite_usart.is_rx_low() == True
            finally:
                ser.break_condition = False
                pass

# NOTE: Needs to be very limited on CW310, as once we send XOFF, we can't send
# XON to restart comms
def test_sw_flow_control(baud=230400, parity="none", stop_bits=1, msg_len=64):
    rng = np.random.default_rng()
    for i in range(2):
        target = targets[i]
        target.baud = baud
        target.parity = parity
        target.stop_bits = stop_bits
        target.xonxoff = 1

        # quick check to make sure normal transmission still works
        msg = bytes(bytearray(rng.integers(0x20, 0x7F, size=msg_len, dtype=np.uint8)))
        target.write(msg)
        rtn = target.read(len(msg)).encode('latin1')

        assert rtn == msg

        target.flush()
        target.write(chr(XOFF))

        # time.sleep(0.5)
        target.write(msg)

        time.sleep(0.2)

        rtn = target.read().encode('latin1')
        assert len(rtn) == 1
        assert rtn[0] == XOFF



@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc_rapid(lowbaud, highbaud, usart_num, baud, parity, stop_bits, msg_len):
    msg_len *= 5
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(1.5E6):
        pytest.skip("use --highbaud to run")

    cw310.cdc_settings = 1
    scope_dev = cw310.get_serial_ports()[usart_num]['port']

    rng = np.random.default_rng()

    msg_sz = int(1024 * 2)

    with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=1) as cw_ser:
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
def test_sam(lowbaud, highbaud, usart_num, baud, parity, stop_bits, msg_len):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(5E6):
        pytest.skip("use --highbaud to run")
    cw310.cdc_settings = 0
    target = targets[usart_num]
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

# @pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
# def test_cdc(lowbaud, highbaud, usart_num, baud, parity, stop_bits, msg_len):
#     if lowbaud is False and baud < 230400:
#         pytest.skip("use --lowbaud to run")

#     if highbaud is False and baud > int(1.5E6):
#         pytest.skip("use --highbaud to run")

#     cw310.cdc_settings = 1
#     scope_dev = cw310.get_serial_ports()[usart_num]['port']

#     rng = np.random.default_rng()

#     with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=0.2) as cw_ser:
#         msg = b""
#         rtn = b""
#         msg = bytearray(rng.integers(256, size=msg_len, dtype=np.uint8))

#         cw_ser.write(msg)
#         while cw_ser.out_waiting > 0: pass
#         time.sleep(0.1)

#         rtn = cw_ser.read(len(msg))


#         assert rtn == msg