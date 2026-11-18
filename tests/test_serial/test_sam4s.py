import chipwhisperer as cw
import serial
import numpy as np
import time
import pytest

from common import *

SAM4S_CONNECTED = False
if not isinstance(scope, cw.scopes.OpenADC):
    # print("Could not program SAM4S, assuming not connected")
    pytestmark = pytest.mark.skip_silent(reason="OpenADC Capture device not connected")
else:
    try:
        cw.program_target(scope, cw.programmers.SAM4SProgrammer, "sam4s_test_fw/loopback-CWHUSKY.bin")
        SAM4S_CONNECTED = True
        pass
    except:
        pass
    if SAM4S_CONNECTED is False:
        print("Could not program SAM4S, assuming not connected")
        pytestmark = pytest.mark.skip_silent(reason="SAM4S not connected")


@pytest.fixture(autouse=True)
def reset_usart_settings():
    yield
    scope.io.cdc_settings = 0
    target.xonxoff = 0
    if scope._is_husky or scope._is_husky_plus:
        scope.adc.stream_mode = False

@pytest.fixture(scope="module")
def program_bw_hex():
    print("Programming new fw")
    scope.default_setup()
    cw.program_target(scope, cw.programmers.SAM4SProgrammer, "test_bw_stress.hex")
    yield
    print("Programming old fw")
    scope.default_setup()
    cw.program_target(scope, cw.programmers.SAM4SProgrammer, "sam4s_test_fw/loopback-CWHUSKY.bin")


WASTE_CYCLES = (10000, 20000, 30000, 40000, 50000)
RETURN_LENGTHS = (180, 200, 220, 240, 249)

@pytest.mark.parametrize(SERIAL_PARAMS, RX_SERIAL_TEST_DATA)
@pytest.mark.skipif(not (scope._is_husky or scope._is_husky_plus), reason="Not Husky")
def test_sam_stream(lowbaud, highbaud, baud, parity, stop_bits, msg_len, clock=20E6, samples=1E6):
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(8E6):
        pytest.skip("use --highbaud to run")

    if not (scope._is_husky or scope._is_husky_plus):
        pytest.skip("Skipping stream tests")
    scope.io.cdc_settings = 0

    target.baud = baud
    scope.adc.bits_per_sample = 8
    target.parity = parity
    target.stop_bits = stop_bits

    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    scope.adc.stream_mode = True
    scope.trigger.triggers = 'tio1'
    scope.adc.basic_mode = "rising_edge"
    scope.adc.samples = int(samples)

    rng = np.random.default_rng()

    msg = bytes(bytearray(rng.integers(256, size=msg_len, dtype=np.uint8)))

    if len(msg) > SER_RX_BUF_SZ:
        exp_rtn = msg[-SER_RX_BUF_SZ:]
    else:
        exp_rtn = msg[:]

    scope.arm()
    target.flush()
    target.write(msg)


    while target.in_waiting_tx() > 0: pass
    time.sleep(0.1)
    rtn = target.read(len(exp_rtn)).encode('latin1')


    assert not scope.capture()
    assert len(scope.get_last_trace()) == scope.adc.samples

    assert rtn == exp_rtn


# @pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
# def test_cdc_stream(lowbaud, highbaud, baud, parity, stop_bits, msg_len, clock=20E6, samples=1E6):
#     scope.io.cdc_settings = 1
#     scope.adc.bits_per_sample = 8
#     scope_dev = scope.get_serial_ports()[0]['port']

#     rng = np.random.default_rng()

#     msg_sz = 256
#     scope.clock.clkgen_freq = clock
#     scope.clock.adc_mul = 1
#     scope.adc.stream_mode = True
#     scope.trigger.triggers = 'tio1'
#     scope.adc.basic_mode = "rising_edge"
#     scope.adc.samples = int(samples)

#     with serial.Serial(scope_dev, baud, parity=PARITY[parity], stopbits=STOP_BITS[stop_bits], timeout=0.2) as cw_ser:
#         msg = b""
#         rtn = b""
#         msg = bytearray(rng.integers(256, size=msg_sz, dtype=np.uint8))
#         msg_len -= msg_sz

#         scope.arm()
#         cw_ser.write(msg)
#         while cw_ser.out_waiting > 0: pass

#         rtn = cw_ser.read(len(msg))

#         assert scope.capture() is False
#         assert len(scope.get_last_trace()) == scope.adc.samples

#         assert rtn == msg

@pytest.mark.parametrize(SERIAL_PARAMS, RX_CDC_TEST_DATA)
def test_cdc_rapid(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
    msg_len *= 5
    if lowbaud is False and baud < 230400:
        pytest.skip("use --lowbaud to run")

    if highbaud is False and baud > int(1.5E6):
        pytest.skip("use --highbaud to run")

    scope.io.cdc_settings = 1
    scope_dev = scope.get_serial_ports()[0]['port']

    rng = np.random.default_rng()

    msg_sz = 256#1024

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

# @pytest.mark.parametrize(SERIAL_PARAMS, TX_CDC_TEST_DATA)
# def test_cdc(lowbaud, highbaud, baud, parity, stop_bits, msg_len):
#     if lowbaud is False and baud < 230400:
#         pytest.skip("use --lowbaud to run")

#     if highbaud is False and baud > int(1.5E6):
#         pytest.skip("use --highbaud to run")

#     scope.io.cdc_settings = 1
#     scope_dev = scope.get_serial_ports()[0]['port']

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

PREVIOUS_FIRMWARE = 'loopback'
@pytest.mark.parametrize("waste_cycles, return_length", list(product(WASTE_CYCLES, RETURN_LENGTHS)))
def test_high_stress(program_bw_hex, waste_cycles, return_length):
    global PREVIOUS_FIRMWARE, scope, target
    if not (scope._is_husky or scope._is_husky_plus):
        pytest.skip("Skipping stress test")

    if PREVIOUS_FIRMWARE != 'bw_stress':
        scope.dis()
        time.sleep(0.25)
        scope = cw.scope()
        target = cw.target(scope, cw.targets.SimpleSerial2)
        scope.default_setup()
        cw.program_target(scope, cw.programmers.SAM4SProgrammer, "test_bw_stress.hex")
        print("Programming")
        scope.clock.adc_mul = 1
        PREVIOUS_FIRMWARE = 'bw_stress'
    try:
        # scope.io.nrst = 0
        # time.sleep(0.25)
        # scope.io.nrst = None
        # time.sleep(0.25)
        if scope._is_husky_plus:
            scope.adc.samples = 270000
            waste_cycles = 40000
            return_length = 249

        scope.arm()
        msg = waste_cycles.to_bytes(4, 'little') + return_length.to_bytes(4, 'little')
        target.send_cmd(0x01, 1, msg)
        scope.capture(poll_done=True)
        data = target.read_cmd('r', return_length)
        assert data is not None
        data = data[3:-2]
        target.simpleserial_wait_ack()
        for i in range(0, return_length):
            expected = (i*(i*7)) & 0xFF
            assert data[i] == expected, "Data mismatch at index {}: expected {}, got {}".format(i, expected, data[i])
    finally:
        scope.clock.adc_mul = 4
        scope.adc.samples = 5000 
        # cw.program_target(scope, cw.programmers.SAM4SProgrammer, "sam4s_test_fw/loopback-CWHUSKY.bin")
    pass