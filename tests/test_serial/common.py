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
TX_MSG_LENS = (64, 256, 512)
BAUDS = (38400, 230400, int(1E6), int(2E6), int(4E6), int(5E6), int(8E6), int(10E6), int(12E6))
CDC_BAUDS = (38400, 230400, int(1E6), int(1.5E6), int(2E6))
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