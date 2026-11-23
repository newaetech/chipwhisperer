import os
import time
import pytest
import serial
import numpy as np
import chipwhisperer as cw

from common import *

LOOPBACK_FW = "nano_test_fw/serial-config-CWNANO.hex"

NANO_MAX_BAUD = int(1E6)

# Default boot baud rate of serial_config-CWNANO.hex (230400 for SS_VER_2_1 HAL, 38400 if unpatched)
DEFAULT_SS2_BAUD = 230400 * 30 // 7.5

PARITY_CMD = {'none': 0, 'even': 1, 'odd': 2}
STOP_BITS_CMD = {1: 0, 2: 1}

NANO_CONNECTED = False
try:
    if isinstance(scope, cw.scopes.CWNano):
        target = cw.target(scope, cw.targets.SimpleSerial2)
        NANO_CONNECTED = True
        scope.io.clkout = 30E6
    else:
        pytestmark = pytest.mark.skip_silent(reason="CWNANO not connected")

except Exception:
    pytestmark = pytest.mark.skip_silent(reason="Could not program nano")
    # raise

# if NANO_CONNECTED is False:
def test_program_firmware():
    cw.program_target(scope, cw.programmers.STM32FProgrammer, LOOPBACK_FW)

def reset_target():
    scope.io.nrst = 'low'
    time.sleep(0.55)
    scope.io.nrst = 'high_z'
    time.sleep(0.55)


def configure_target_loopback(baud, parity, stop_bits):
    """Reset the STM32F0 out of loopback mode, apply serial settings via SS2, and re-enter loopback."""
    scope.io.cdc_enabled = 0
    # reset_target()

    # Re-sync host UART to the STM32F0's boot SimpleSerial2 settings
    target.baud = DEFAULT_SS2_BAUD
    target.parity = 'none'
    target.stop_bits = 1
    target.flush()

    # 1. Set parity ('p')
    target.send_cmd('p', 0, [PARITY_CMD[parity]])
    target.simpleserial_wait_ack()
    target.parity = parity

    # 2. Set stop bits ('s')
    target.send_cmd('s', 0, [STOP_BITS_CMD[stop_bits]])
    target.simpleserial_wait_ack()
    target.stop_bits = stop_bits

    # 3. Set baud rate ('b')
    target.send_cmd('b', 0, bytearray(int(baud).to_bytes(4, 'little')))
    target.baud = baud
    # target.simpleserial_wait_ack()

    # 4. Enter raw UART loopback mode ('l')
    # target.send_cmd('l', 0, bytearray([]))
    # target.simpleserial_wait_ack()
    target.flush()


@pytest.fixture(autouse=True)
def reset_usart_settings():
    yield
    scope.io.cdc_enabled = 0
    if hasattr(target, "xonxoff"):
        target.xonxoff = 0
    target.parity = 'none'
    target.stop_bits = 1
    target.baud = DEFAULT_SS2_BAUD

# RX_MSG_LENS = (64, 128)
# TX_MSG_LENS = (64, 128)
RX_SERIAL_TEST_DATA = list(product(BAUDS,  PARITY.keys(), STOP_BITS.keys(), RX_MSG_LENS))
TX_SERIAL_TEST_DATA = list(product(BAUDS,  PARITY.keys(), STOP_BITS.keys(), TX_MSG_LENS))

TX_CDC_TEST_DATA = list(product(CDC_BAUDS,  PARITY.keys(), STOP_BITS.keys(), TX_MSG_LENS))
RX_CDC_TEST_DATA = list(product(CDC_BAUDS,  PARITY.keys(), STOP_BITS.keys(), RX_MSG_LENS))

@pytest.mark.parametrize(SERIAL_PARAMS, RX_SERIAL_TEST_DATA)
def test_nano(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    # if lowbaud is False and baud < 230400:
    #     pytest.skip("use --lowbaud to run")
    if parity == 'space' or parity == 'mark':
        pytest.skip(f"Parity setting {parity} not available on STM32F0")

    if baud > NANO_MAX_BAUD:
        pytest.skip(f"baud {baud} exceeds CWNANO/STM32F0 limit")

    reset_target()
    configure_target_loopback(baud, parity, stop_bits)

    rng = np.random.default_rng()
    msg = bytes(bytearray(rng.integers(256, size=msg_len, dtype=np.uint8)))

    if len(msg) > SER_RX_BUF_SZ:
        exp_rtn = msg[-SER_RX_BUF_SZ:]
    else:
        exp_rtn = msg[:]

    target.flush()
    target.write(msg)

    while target.in_waiting_tx() > 0:
        pass
    rtn = target.read(len(exp_rtn)).encode('latin1')

    assert rtn == exp_rtn

@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc_rapid(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    if parity == 'space' or parity == 'mark':
        pytest.skip(f"Parity setting {parity} not available on STM32F0")
    msg_len *= 5
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if baud > NANO_MAX_BAUD:
        pytest.skip(f"baud {baud} exceeds CWNANO/STM32F0 limit")

    # Configure STM32F0 over SimpleSerial2 before handing UART control over to USB CDC
    reset_target()
    configure_target_loopback(baud, parity, stop_bits)

    scope.io.cdc_enabled = 1
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()
    # Keep chunk size within CWNano's 200-byte RX buffer so full-duplex echo does not overflow
    # msg_sz = min(128, NANO_RX_BUF_SZ)
    msg_sz = 1024

    with serial.Serial(
        scope_dev,
        baud,
        parity=PARITY[parity],
        stopbits=STOP_BITS[stop_bits],
        timeout=0.5,
    ) as cw_ser:
        while msg_len > 0:
            chunk_len = min(msg_sz, msg_len)
            msg = bytearray(rng.integers(256, size=chunk_len, dtype=np.uint8))
            msg_len -= chunk_len

            cw_ser.write(msg)
            while cw_ser.out_waiting > 0:
                pass

            rtn = cw_ser.read(len(msg))
            assert rtn == msg

