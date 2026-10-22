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

BAUDS = (9600, 38400, 230400, int(1E6), int(3E6), int(4E6))
STOP_BITS = {1: serial.STOPBITS_ONE, 2: serial.STOPBITS_TWO} # NOTE: Tigard doesn't support 1.5 parity
PARITY = {"none": serial.PARITY_NONE, "odd": serial.PARITY_ODD, "even": serial.PARITY_EVEN, \
          "mark": serial.PARITY_MARK, "space": serial.PARITY_SPACE}

SERIAL_TEST_DATA = list(product(BAUDS,  PARITY.keys(), STOP_BITS.keys()))

SERIAL_PARAMS="baud,parity,stop_bits"

@pytest.mark.parametrize(SERIAL_PARAMS, SERIAL_TEST_DATA)
def test_incmsg_sam_to_serial(baud, parity, stop_bits, num_rw=5, msg_len=200):
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    dev = list(list_ports.grep("TG1001D4A"))[0].device

    rng = np.random.default_rng()
    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits]) as ser:
        msg = b""
        rtn = b""
        for j in range(1, num_rw+1):
            msg = bytearray(rng.integers(256, size=msg_len*j*j, dtype=np.uint8))

            target.write(msg)
            while target.in_waiting_tx() > 0: pass

            rtn = ser.read(len(msg))
            while ser.in_waiting > 0:
                rtn += ser.read(ser.in_waiting)
                time.sleep(0.1)

            assert rtn == msg

@pytest.mark.parametrize(SERIAL_PARAMS, SERIAL_TEST_DATA)
def test_incmsg_serial_to_sam(baud, parity, stop_bits, num_rw=3, msg_len=100):
    target.baud = baud
    target.parity = parity
    target.stop_bits = stop_bits

    dev = list(list_ports.grep("TG1001D4A"))[0].device

    rng = np.random.default_rng()
    with serial.Serial(dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits]) as ser:
        msg = b""
        for j in range(1, num_rw+1):
            msg = bytes(bytearray(rng.integers(256, size=msg_len*j*j, dtype=np.uint8)))

            # account for overrun: TODO account for different rxbuf len
            if len(msg) > 256:
                exp_rtn = msg[-256:]
            else:
                exp_rtn = msg[:]
            target.flush()
            ser.write(msg)

            while ser.out_waiting > 0: pass
            sleep_scale = 0.001
            if baud < 30000:
                sleep_scale = 0.002
            time.sleep(sleep_scale*len(msg))
            rtn = target.read(len(exp_rtn)).encode('latin1')

            assert rtn == exp_rtn
