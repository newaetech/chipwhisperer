# -*- coding: utf-8 -*-
#
# Copyright (c) 2025-2026, NewAE Technology Inc
# All rights reserved.
#
# Find this and more at newae.com - this file is part of the chipwhisperer
# project, http://www.chipwhisperer.com . ChipWhisperer is a registered
# trademark of NewAE Technology Inc in the US & Europe.
#
#    This file is part of chipwhisperer.
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
#==========================================================================

# Run with pytest -v -rs

import chipwhisperer as cw
import pytest
import time
import numpy as np
import random
import os
import functools as ft

from test_common import *

""" 
Args:
    stress: run more iterations of the tests that stess temperature and voltage rails

"""

print('\n\n\n\n**************************************************************************************')
print('* NOTE: This script is intended for production testing of Husky.                     *')
print('* A SAM4S target should be attached, otherwise some important tests will be skipped. *')
print('* Runs in about 90 seconds.                                                          *')
print('* Use --stress to run extra iterations of tests which drive the temperature higher;  *')
print('* this increases runtime to about 5 minutes.                                         *')
print('**************************************************************************************\n\n')

# default to sam4s; note that stm32f3 is not supported by this script
test_platform = "sam4s"
logfilename = "test_husky_prod_xadc.log"

if "HUSKY_HW_LOC" in os.environ:
    locboth = os.environ["HUSKY_HW_LOC"].split(',')
    loca = int(locboth[0].replace('(', ''))
    locb = int(locboth[1].replace(')', ''))
    hw_loc = (loca, locb)
    print("hw_loc added {}".format(hw_loc))
else:
    hw_loc = None

if "HUSKY_TARGET_PLATFORM" in os.environ:
    test_platform = os.environ["HUSKY_TARGET_PLATFORM"]
if "HUSKY_TYPE" in os.environ:
    NAME = os.environ["HUSKY_TYPE"]
else:
    NAME = None

print("Husky target platform {}".format(test_platform))
if NAME:
    #scope = cw.scope(name=NAME, hw_location=hw_loc, registers='/home/jpnewae/git/cw_husky_userio/fpga/hdl/registers.v')
    scope = cw.scope(name=NAME, hw_location=hw_loc)
else:
    #scope = cw.scope(hw_location=hw_loc, registers='/home/jpnewae/git/cw_husky_userio/fpga/hdl/registers.v')
    scope = cw.scope(hw_location=hw_loc)

target = cw.target(scope)
scope.errors.clear()
verbose = False
cw.scope_logger.setLevel(cw.logging.ERROR) # don't want to see warnings when setting clock past its specifications

scope.XADC.user_reset() # reset max/min stats
scope.reset_fpga()
scope.adc.clip_errors_disabled = True
scope.adc.lo_gain_errors_disabled = True
scope.clock.clkgen_freq = 10e6
scope.clock.clkgen_src = 'system'
scope.clock.adc_mul = 1
time.sleep(0.1)
assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
assert scope.clock.adc_freq == 10e6, 'Not getting expected ADC clock frequency.'
target.baud = 38400 * 10 / 7.37

if scope._is_husky_plus:
    MAXCLOCK = 250e6
    OVERCLOCK1 = 255e6
    OVERCLOCK2 = 265e6
else:
    MAXCLOCK = 200e6
    OVERCLOCK1 = 210e6
    OVERCLOCK2 = 250e6

reset_setup(scope,target)

def correct_fw():
    reset_target(scope)
    target.flush()
    target.write('x\n')
    time.sleep(0.2)
    resp = target.read()
    target.simpleserial_write('i', b'')
    time.sleep(0.1)
    response = target.read().split('\n')[0]
    if response == 'ChipWhisperer simpleserial-trace, compiled Sep  2 2022, 13:55:43':
        return True
    else:
        return False

# Check firmware and program if needed.
# Here, what we would like to do is something pytest doesn't make easy (or possible?), so this is hacky/not ideal for 
# it would be great to have a command-line switch disable target FW checking (to save time when no target attached), but pytest doesn't make this easy:
target_attached = False
if correct_fw():
    target_attached = True
else:
    try:
        print('Incorrect firmware detected; programming...')
        prog = cw.programmers.SAM4SProgrammer
        cw.program_target(scope, prog, "../firmware/mcu/simpleserial-trace/simpleserial-trace-CW308_SAM4S.hex")
        if correct_fw():
            target_attached = True
    except Exception as e:
        print('***** WARNING: unable to program firmware (is there a SAM4S target attached?): %s' % e)
        print('***** Many tests will not be able to run. Attach a SAM4S target to prevent this.')
        target_attached = False

ktp = cw.ktp.Basic()
key, text = ktp.next()


testData = [
    # samples   presamples  testmode    clock       fastreads   adcmul  bit stream  segs    segcycs reps    desc
    ('max',     0,          'internal', 20e6,       True,       1,      12, False,  1,      0,      1,      'maxsamples12'),
    ('max',     0,          'internal', 'max',      True,       1,      12, False,  1,      0,      1,      'fastest'),
    ('max',     0,          'internal', 'over1',    True,       1,      12, False,  1,      0,      1,      'overclocked'),
    ('max',     0,          'internal', 50e6,       True,       4,      12, False,  1,      0,      1,      '4xfast'),
    ('max',     0,          'ADCramp',  20e6,       True,       1,      12, False,  1,      0,      1,      'ADCslow'),
    ('max',     0,          'ADCramp',  'max',      True,       1,      12, False,  1,      0,      3,      'ADCfast'),
    ('max',     0,          'ADCramp',  'over1',    True,       1,      12, False,  1,      0,      1,      'ADCover1'),
    ('max',     0,          'ADCramp',  'over2',    True,       1,      12, False,  1,      0,      1,      'ADCover2'),
    ('max',     0,          'ADCramp',  265e6,      True,       1,      12, False,  1,      0,      1,      'ADC_265'),
    ('max',     0,          'ADCramp',  270e6,      True,       1,      12, False,  1,      0,      1,      'ADC_270'),
    ('max',     0,          'ADCramp',  275e6,      True,       1,      12, False,  1,      0,      1,      'ADC_275'),
    ('max',     0,          'ADCalt',   7.37e6,     True,       1,      12, False,  1,      0,      3,      'ADCaltslow'),
    ('max',     0,          'ADCalt',   150e6,      True,       1,      12, False,  1,      0,      3,      'ADCalt150')
    # NB: for ADCalt testing, we stop short of the maximum frequency, because on HuskyPlus, the extreme toggling rate
    # of the ADC data lines often leads to voltage rails exceeding their recommended limits (by a tiny amount, but still).
    # Unsure whether it's the ADS4128 or the FPGA that's responsible, but the violations occur *even if the scope is kept
    # idle* (i.e. no capturing of the ADC data).
    #('max',     0,          'ADCalt',   'max',      True,       1,      12, False,  1,      0,      3,      'ADCaltmax'),
    #('max',     0,          'ADCalt',   'over1',    True,       1,      12, False,  1,      0,      3,      'ADCaltover1'),
    #('max',     0,          'ADCalt',   'over2',    True,       1,      12, False,  1,      0,      3,      'ADCaltover2')
]

testTargetData = [
    # samples   presamples  testmode    clock       fastreads   adcmul  bit stream  threshold   seg_size,   check   segs    segcycs desc
    (200,       0,          'internal', 20e6,       True,       1,      8,  False,  65536,      65536,      True,   1,      0,      'quick'),
    (900000,    0,          'internal', 10e6,       True,       1,      8,  True ,  65536,      65536,      True,   1,      0,      'midstream'),
    ('max',     0,          'internal', 15e6,       True,       1,      12, False,  65536,      65536,      True,   1,      0,      'maxsamples122')
]


testGlitchOutputWidthSweepData = [
    # clock     offset    oversamp    reps  steps_per_point desc
    (200e6,     1200,     2,          8,    40,             ''),
]

testRWData = [
    #address    nbytes  reps    desc
    (16,        4,      500,    'SAMPLES'),
    (4,         8,      500,    'ECHO'),
]

testADCTriggerData = [
    #gain       threshold   bits    reps    desc
    (23,        0.8,        12,     5,      ''),
]


testSADTriggerData = [
    #clock  adc_mul bits   emode,   threshold   interval_threshold   offset  reps    desc
    (10e6,  1,      8,     False,   12,         10,                 0,      100,    '8bits'),
    (10e6,  'max',  8,     False,   12,         11,                 0,      100,    'fastest'),
]

def test_reg_setup_writes():
    # NOTE: this is highly dependent on what Python (and this script) does upon conecting to the scope object.
    # The register we are reading gives us stats of the FPGA writes. For a specific configuration, these are constant.
    stats = scope._write_stats()
    if target_attached:
        count = 1084
    else:
        count = 1116
    exp_stats = {'last_addr':55, 'last_wdata':0, 'count':count}
    assert stats == exp_stats, 'Unexpected write stats: %s; expected %s (note: only works on a freshly-programmed FPGA)' % (stats, exp_stats)

def test_fpga_version():
    common_fpga_version_check(scope)

def test_fw_version():
    common_fw_version_check(scope)

@pytest.fixture(autouse=True)
def xadc_check(log):
    # runs before test:
    #...
    yield

    # runs after test:

    # useful to diagnose disappearing voltage margins:
    #rail = 'vccint'
    #lower = scope.XADC.get_vcc_limit(rail, 'lower')
    #upper = scope.XADC.get_vcc_limit(rail, 'upper')
    #vmin = scope.XADC.get_vcc(rail, 'min')
    #vmax = scope.XADC.get_vcc(rail, 'max')
    #margin = min(upper-vmax, vmin-lower)
    #print(' MARGIN: %.3f' % margin, end='')


    #print()
    #print(scope.XADC.status)
    #print(scope.XADC.vcc_limits())
    #print()

    #print(' temp=%4.1f, XADC=%s' % (scope.XADC.temp, scope.XADC.status), end='')
    #print(' temp=%4.1f ' % scope.XADC.temp, end='')
    if scope.XADC.status != 'good':
        print(' ** WARNING: XADC errors: %s' % scope.XADC.status, end='')
        if 'VCCint' in scope.XADC.status: 
            print(' vccint=%1.3f/%1.3f/%1.3f' % (scope.XADC.vccint, scope.XADC.get_vcc('vccint', 'min'),  scope.XADC.get_vcc('vccint', 'max')), end='')
        if 'VCCbram' in scope.XADC.status: 
            print(' vccbram=%1.3f/%1.3f/%1.3f' % (scope.XADC.vccbram, scope.XADC.get_vcc('vccbram', 'min'),  scope.XADC.get_vcc('vccbram', 'max')), end='')
        if 'VCCaux' in scope.XADC.status: 
            print(' vccaux=%1.3f/%1.3f/%1.3f' % (scope.XADC.vccaux, scope.XADC.get_vcc('vccaux', 'min'),  scope.XADC.get_vcc('vccaux', 'max')), end='')

    if log:
        logfile = open(logfilename, 'a')
        logfile.write('%4.1f %1.3f %1.3f %1.3f %1.3f %1.3f %1.3f %1.3f %1.3f %1.3f\n' % 
                (scope.XADC.temp,
                 scope.XADC.vccint, scope.XADC.get_vcc('vccint', 'min'),  scope.XADC.get_vcc('vccint', 'max'),
                 scope.XADC.vccbram, scope.XADC.get_vcc('vccbram', 'min'),  scope.XADC.get_vcc('vccbram', 'max'),
                 scope.XADC.vccaux, scope.XADC.get_vcc('vccaux', 'min'),  scope.XADC.get_vcc('vccaux', 'max')
                ))
        logfile.close()
    scope.XADC.status = 0 # clear any errors after each test

@pytest.fixture(autouse=True)
def cooldown():
    # runs before test:
    #...
    yield
    # runs after test:
    # in case the last testcase leaves scope in a high-power-consuming state that would eventually lead to XADC shutoff:
    scope.clock.clkgen_freq = 7.37e6
    reset_setup(scope,target)

def test_reg_reads(stress):
    # note: must run before test_reg_rw, otherwise ECHO register will have a different value;
    # similarly, reset_setup() must have been run.
    # Because this test only checks reset values of registers, failures indicate read problems.
    if stress:
        reps = 2000
    else:
        reps = 100
    bad = 0
    failing_registers = []
    if target_attached: 
        exp_ioroute = [2,1,0,0,0,0,0,0]
    else:
        exp_ioroute = [2,1,0,0,0,0,32,0]
    for i in range(reps):
        if not correct_fpga_version(scope):
            if 'BUILDTIME' not in failing_registers:
                failing_registers.append('BUILDTIME')
            bad += 1
        if scope._is_husky_plus:
            triggers = 4
        else:
            triggers = 2
        for reg, nbytes, exp in zip(['SOFTPOWER_CONTROL', 'CW_TRIGSRC_ADDR', 'CW_IOROUTE_ADDR', 'SAD_VERSION', 'SAD_COUNTER_WIDTH', 'ECHO_ADDR'],
                                    [8,                    triggers*2,        8,                 2,             1,                  8],
                                    [[35,0,208,7,203,7,0,0], [32,0]*triggers, exp_ioroute,       [202,15],      [7],                [0xf0, 0xde, 0xbc, 0x9a, 0x78, 0x56, 0x34, 0x12]]):
            if scope.fpga_reg_read(reg, nbytes) != exp:
                bad += 1
                if reg not in failing_registers:
                    failing_registers.append(reg)
    assert bad == 0, '%d errors in reads of reset values on these registers: %s' % (bad, failing_registers)

def test_reg_address_bits(deep_reg_test):
    # The LEDs are driven by the address bits that are registered internally on a read or write command.
    # Incorrect LED flashing indicates problems with timing on the address/ALEn pins.
    if not deep_reg_test:
        pytest.skip("use --deep_reg_test to run")
    print('*** must watch for Armed, Capturing, ADC, and Glitch LEDs each turning on and back off one at a time, several times *** ', end='')
    sleep = 0.2
    for operation in ['read', 'write']:
        for _ in range(3):
            for abit in range(8):
                address = 2**abit
                if address < 16:
                    scope.LEDs.setting = 4
                else:
                    scope.LEDs.setting = 5
                if operation == 'read':
                    scope.fpga_reg_read(address, 1)
                else:
                    scope.fpga_reg_write(address, [0])
                time.sleep(sleep)
    scope.LEDs.setting = 0
    scope.reset_fpga()
    reset_setup(scope,target)


@pytest.mark.parametrize("address, nbytes, reps, desc", testRWData)
def test_reg_rw(address, nbytes, reps, desc):
    reset_setup(scope,target)
    for i in range(reps):
        data = int.to_bytes(random.randrange(2**(8*nbytes)), length=nbytes, byteorder='little')
        scope.sc.sendMessage(0xc0, address, bytearray(data), Validate=False)
        temp = scope.fpga_buildtime # just a dummy read
        read_data = scope.sc.sendMessage(0x80, address, maxResp=nbytes)
        assert read_data == data, "rep %d: expected %0x, got %0x; indicates inability to communicate with the FPGA (either reading and/or writing)" % (i, int.from_bytes(data, byteorder='little'), int.from_bytes(read_data, byteorder='little'))


def test_reg_write_counter():
    initcount = scope._write_stats()['count']
    for i in range(100):
        wdata = random.randint(0,255)
        scope.fpga_reg_write('ECHO_ADDR', [wdata])
        stats = scope._write_stats()
        exp_stats = {'last_addr':4, 'last_wdata':wdata, 'count':initcount+i+1}
        assert stats == exp_stats, 'Unexpected write stats on rep %d: %s; expected %s. *If* test_reg_reads passed, indicates write problems.' % (i, stats, exp_stats)


@pytest.mark.parametrize("address, nbytes, reps, desc", testRWData)
def test_reg_repeat_reads(deep_reg_test, address, nbytes, reps, desc):
    # Writes random data and checks whether we repeated reads return the same.
    # If we always read back "bad" read data, then possibly it's only the writes that aren't working.
    if not deep_reg_test:
        pytest.skip("use --deep_reg_test to run")
    repreads = 10
    goodbytes = 0
    badbytes = 0
    goodwords = 0
    badwords = 0
    worst_corrects = nbytes*repreads
    best_corrects = 0
    changing_reads = 0
    reads = []
    for i in range(2*reps//repreads//nbytes):
        data = int.to_bytes(random.randrange(2**(8*nbytes)), length=nbytes, byteorder='little')
        scope.sc.sendMessage(0xc0, address, bytearray(data), Validate=False)
        good = 0
        bad = 0
        for rr in range(repreads):
            temp = scope.fpga_buildtime # just a dummy read
            read_data = scope.sc.sendMessage(0x80, address, maxResp=nbytes)
            if rr == 0:
                first_read = read_data
            else:
                if list(read_data) != list(first_read):
                    changing_reads += 1 
            if list(read_data) == list(data):
                goodwords += 1
            else:
                badwords += 1
            for rb, wb in zip(read_data, data):
                if rb == wb:
                    goodbytes += 1
                    good += 1
                else:
                    badbytes += 1
                    bad += 1
        reads.append(good)
        if bad < worst_corrects:
            worst_corrects = bad
        if good > best_corrects:
            best_corrects = good
    if changing_reads != 0 or badbytes != 0:
        print('test failed! some statistics:')
        print('Changing reads: %d' % changing_reads)
        print('Good bytes: %d ' % goodbytes)
        print('Bad  bytes: %d ' % badbytes)
        print('Good words: %d ' % goodwords)
        print('Bad  words: %d ' % badwords)
        print('Most  correctly read bytes: %d out of %d' % (best_corrects, nbytes*repreads))
        print('Least correctly read bytes: %d out of %d' % (worst_corrects, nbytes*repreads))
        print('\nHistogram of good read bytes: %s' % display_hist(np.asarray(reads), num_bins=repreads*nbytes, zeros_as_blank=True))
        assert False, 'If changing_reads is 0, suggests that reads do work reliably but writes do not.'


@pytest.mark.parametrize("address, nbytes, reps, desc", testRWData)
def test_reg_deep_rw(deep_reg_test, address, nbytes, reps, desc):
    # Like test_reg_rw but looks at which bits tend to be in error.
    # Cannot distinguish between read and/or write issues.
    if not deep_reg_test:
        pytest.skip("use --deep_reg_test to run")
    rxbits = []
    ebits0 = []
    ebits1 = []
    gbits0 = []
    gbits1 = []
    errors0 = 0
    errors1 = 0
    goodbits0 = 0
    goodbits1 = 0
    if desc == 'ones_vs_zeros':
        randdata = False
    else:
        randdata = True
    for i in range(reps):
        if randdata:
            data = int.to_bytes(random.randrange(2**(8*nbytes)), length=nbytes, byteorder='little')
        else:
            data = [0xFF, 0x00, 0xFF, 0x00]
        scope.sc.sendMessage(0xc0, address, bytearray(data), Validate=False)
        temp = scope.fpga_buildtime # just a dummy read
        read_data = scope.sc.sendMessage(0x80, address, maxResp=nbytes)
        for rb, wb in zip(read_data, data):
            for i in range(8):
                if 2**i & rb:
                    rxbits.append(i)
                if ((2**i & rb) != (2**i & wb)):
                    if (2**i & rb):
                        ebits1.append(i)
                        errors1 += 1
                    else:
                        ebits0.append(i)
                        errors0 += 1
                else:
                    if (2**i & rb):
                        gbits1.append(i)
                        goodbits1 += 1
                    else:
                        gbits0.append(i)
                        goodbits0 += 1

    if errors0 + errors1 != 0:
        print('test failed! some statistics:')
        print('\nHistogram of bits received:  %s' % display_hist(np.asarray(rxbits), num_bins=8, zeros_as_blank=True))
        if errors0:
            print('\nHistogram of bit errors (0): %s' % display_hist(np.asarray(ebits0), num_bins=8, zeros_as_blank=True))
        if errors1:
            print('\nHistogram of bit errors (1): %s' % display_hist(np.asarray(ebits1), num_bins=8, zeros_as_blank=True))
        if goodbits0:
            print('\nHistogram of good bits  (0): %s' % display_hist(np.asarray(gbits0), num_bins=8, zeros_as_blank=True))
        if goodbits1:
            print('\nHistogram of good bits  (1): %s' % display_hist(np.asarray(gbits1), num_bins=8, zeros_as_blank=True))
        print('Errored bits (0/1): %d / %d' % (errors0, errors1))
        print('Good bits    (0/1): %d / %d' % (goodbits0, goodbits1))
        assert False, 'read and/or write problems (cannot distinguish)'


@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_target_power():
    #scope.io.cwe.setTargetPowerSlew(fastmode=True) # will fail if this is commented out
    for i in range(4):
        scope.io.target_pwr = 0
        time.sleep(0.2)
        scope.io.target_pwr = 1
        time.sleep(0.2)
    common_xadc_check(scope, False, "failure indicates that the target soft-power-up logic needs adjustment, this needs follow-up")


@pytest.mark.parametrize("samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, segments, segment_cycles, reps, desc", testData)
def test_internal_ramp(stress, samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, segments, segment_cycles, reps, desc):
    if stress:
        reps *= 3
    reset_setup(scope,target)
    if clock == 'max':
        clock = MAXCLOCK
    elif clock == 'over1':
        clock = OVERCLOCK1
    elif clock == 'over2':
        clock = OVERCLOCK2
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = adcmul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
    assert abs(scope.clock.adc_freq - clock*adcmul)/scope.clock.adc_freq < 0.01, 'Not getting expected ADC clock frequency.'

    if testmode == 'internal':
        scope.adc.test_mode = True
        scope.ADS4128.mode = 'normal'
    elif testmode == 'ADCramp':
        scope.ADS4128.mode = 'test ramp'
        scope.adc.test_mode = False
    elif testmode == 'ADCalt':
        scope.ADS4128.mode = 'test alternating'
        scope.adc.test_mode = False
    else:
        raise ValueError

    scope.sc._fast_fifo_read_enable = fastreads
    scope.adc.stream_mode = stream
    if samples == 'max':
        scope.adc.samples = scope.adc.max_samples
    else:
        scope.adc.samples = samples
    scope.adc.presamples = presamples
    scope.adc.segments = segments
    scope.adc.segment_cycles = segment_cycles
    scope.adc.bits_per_sample = bits
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.segment_cycle_counter_en = True
    for i in range(reps):
        scope.arm()
        scope.sc.triggerNow()
        assert scope.capture() == False, 'unable to capture (rep %d), highly unusual error' % i
        raw = np.int64(scope.get_last_trace(True))
        errors, first_error = check_ramp(raw, testmode, bits, scope.adc.samples, segment_cycles)
        assert errors == 0, "%d errors (rep %d); First error: %d; scope.adc.errors: %s" % (errors, i, first_error, scope.adc.errors)
        assert scope.adc.errors == False
    scope.sc._fast_fifo_read_enable = True # return to default


@pytest.mark.parametrize("samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, threshold, seg_size, check, segments, segment_cycles, desc", testTargetData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_target_internal_ramp (samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, threshold, seg_size, check, segments, segment_cycles, desc):
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = adcmul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
    assert abs(scope.clock.adc_freq - clock*adcmul)/scope.clock.adc_freq < 0.01, 'Not getting expected ADC clock frequency.'
    target.baud = 38400 * clock / 1e6 / 7.37

    if testmode == 'internal':
        scope.adc.test_mode = True
        scope.ADS4128.mode = 'normal'
    elif testmode == 'ADC':
        scope.ADS4128.mode = 'test ramp'
        scope.adc.test_mode = False
    else:
        raise ValueError

    scope.io.nrst = 0
    time.sleep(0.1)
    scope.io.nrst = 'high_z'
    time.sleep(0.1)

    target.flush()
    target.write('x\n')
    time.sleep(0.2)
    assert target.read() != '', 'unable to communicate with target'

    scope.trigger.module = 'basic'
    scope.adc.basic_mode = "rising_edge"
    scope.trigger.triggers = "tio4"
    scope.io.tio1 = "serial_rx"
    scope.io.tio2 = "serial_tx"
    scope.io.hs2 = "clkgen"

    scope.sc._fast_fifo_read_enable = fastreads
    scope.adc.bits_per_sample = bits
    if samples == 'max':
        scope.adc.samples = scope.adc.max_samples
    else:
        scope.adc.samples = samples
    scope.adc.presamples = presamples
    scope.adc.segments = segments
    scope.adc.segment_cycles = segment_cycles
    scope.adc.stream_mode = stream
    scope.adc.stream_segment_threshold = threshold
    scope.adc.stream_segment_size = seg_size
    scope.adc.segment_cycle_counter_en = True
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.userio.mode = 'fpga_debug'
    scope.userio.fpga_mode = 0
    if scope.adc.samples > 10000000:
        scope.adc.timeout = 5
    if scope.adc.samples > 20000000:
        scope.adc.timeout = 10
    target.flush()
    ret = cw.capture_trace(scope, target, text, key)
    raw = np.int64(scope.get_last_trace(True))
    if verbose: print('Words read before error: %d ' % int.from_bytes(scope.sc.sendMessage(0x80, 47, maxResp=4), byteorder='little'))
    if 'overflow' in desc:
        assert 'overflow' in scope.adc.errors
        scope.errors.clear()
        time.sleep(2)
    else:
        assert scope.adc.errors == False, 'unexpected ADC errors: %s' % scope.adc.errors
    if check: 
        errors, first_error = check_ramp(raw, testmode, bits, scope.adc.samples, segment_cycles)
        assert errors == 0, "%d errors in ramp pattern; First error: %d" % (errors, first_error)
    scope.sc._fast_fifo_read_enable = True # return to default


@pytest.mark.parametrize("clock, offset, oversamp, steps_per_point, reps, desc", testGlitchOutputWidthSweepData)
@pytest.mark.skipif(not scope.LA.present, reason='Cannot test glitch without internal logic analyzer. Rebuild FPGA to test.')
def test_glitch_stress_test(stress, clock, offset, oversamp, reps, steps_per_point, desc):
    if stress:
        reps *= 3
    # sweep glitch width
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
    assert abs(scope.clock.adc_freq - clock*1)/scope.clock.adc_freq < 0.01, 'Not getting expected ADC clock frequency.'

    margin = 2
    setup_glitch(scope, offset, 0, oversamp)
    stepsize = int(scope.glitch.phase_shift_steps / scope.LA.oversampling_factor / steps_per_point)

    for r in range(reps):
        prev_width = 0
        # sweep width and check that width of glitch increases by expected amount each time:
        for i, width in enumerate(range(-scope.glitch.phase_shift_steps, scope.glitch.phase_shift_steps - stepsize, stepsize)):
            scope.glitch.width = width
            scope.LA.arm()
            scope.glitch.manual_trigger()
            raw = scope.LA.read_capture_data()
            glitch = scope.LA.extract(raw, 0)
            measured_width = len(np.where(glitch > 0)[0])

            # determine expected width
            if width < -scope.glitch.phase_shift_steps // 2:
                expected_width = i // steps_per_point
                increasing = True
            elif width < 0:
                expected_width = oversamp - i // steps_per_point
                increasing = False
            elif width < scope.glitch.phase_shift_steps // 2:
                expected_width = i // steps_per_point - oversamp
                increasing = True
            else:
                expected_width = oversamp*2 - i // steps_per_point
                increasing = False

            if increasing:
                assert measured_width + margin >= prev_width, "Glitch width did not increase"
            else:
                assert measured_width - margin <= prev_width, "Glitch width did not decrease"
            assert abs(measured_width - expected_width) <= margin, "Glitch width not within margin (expected %d, measured %d)" % (expected_width, measured_width)
            prev_width = measured_width

    scope.glitch.enabled = False
    scope.LA.enabled = False
    common_xadc_check(scope, False, 'Glitch stress test pushing things too far? If temperature is just above 65C, could be ok.')



@pytest.mark.parametrize("gain, threshold, bits, reps, desc", testADCTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_adc_trigger (gain, threshold, bits, reps, desc):
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
    reset_target(scope)
    time.sleep(0.1)
    target.baud = 38400
    scope.gain.db = gain
    scope.adc.clip_errors_disabled = False
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.segment_cycle_counter_en = False
    scope.adc.segments = 1
    scope.adc.samples = 500
    scope.adc.presamples = 0
    scope.adc.bits_per_sample = bits
    for i in range(reps):
        scope.trigger.module = 'basic'
        scope.trigger.triggers = 'tio4'
        reftrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
        #print("Gain:%d, max:%f, min:%f" % (gain, max(reftrace.wave), min(reftrace.wave)))
        # 1. trigger on positive swing:
        scope.trigger.module = 'ADC'
        #print('Min/Max: %3.2f / %3.2f' % (min(reftrace.wave), max(reftrace.wave)))
        scope.trigger.level = threshold * max(reftrace.wave)
        #print(scope.trigger.level)
        powertrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
        assert powertrace is not None, 'ADC-triggered capture (max) failed on iteration %d' % i
        # 2. trigger on negative swing:
        scope.trigger.level = threshold * min(reftrace.wave)
        #print(scope.trigger.level)
        powertrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
        assert powertrace is not None, 'ADC-triggered capture (min) failed on iteration %d' % i



@pytest.mark.parametrize("clock, adc_mul, bits, emode, threshold, interval_threshold, offset, reps, desc", testSADTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_sad_trigger (stress, clock, adc_mul, bits, emode, threshold, interval_threshold, offset, reps, desc):
    if stress:
        reps *= 3
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    if adc_mul == 'max':
        adc_mul = int(MAXCLOCK/clock)
    elif adc_mul == 'over':
        adc_mul = int(OVERCLOCK1/clock)
    scope.clock.adc_mul = adc_mul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
    assert abs(scope.clock.adc_freq - clock*adc_mul)/scope.clock.adc_freq < 0.01, 'Not getting expected ADC clock frequency.'
    target.baud = 38400 * clock / 1e6 / 7.37
    reset_target(scope)

    scope.adc.stream_mode = False
    scope.errors.clear()
    scope.trace.enabled = False
    scope.trace.target = None

    scope.SAD.always_armed = False
    scope.SAD.emode = emode
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.clip_errors_disabled = False
    scope.adc.segment_cycle_counter_en = False
    scope.adc.segments = 1
    scope.adc.samples = scope.SAD.sad_reference_length * 2
    scope.adc.presamples = 0
    scope.adc.bits_per_sample = bits
    scope.adc.offset = offset
    scope.adc.timeout = 0.1
    scope.SAD.multiple_triggers = False

    scope.trigger.module = 'basic'
    # scope.gain.db = 23.7
    scope.gain.db = 18
    reftrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
    assert scope.adc.errors == False, 'Unexpected capture error on reference trace: %s' % scope.adc.errors

    scope.SAD.reference = reftrace.wave
    if scope._is_husky_plus:
        pass # TODO: adjust as needed? e.g. threshold = int(threshold*1.5)
    scope.SAD.threshold = threshold
    scope.SAD.interval_threshold = interval_threshold
    scope.trigger.module = 'SAD'
    scope.adc.offset = 0

    # set presamples so that the waveforms line up;
    # + sad_reference_length because trigger happens at the end of the SAD pattern;
    # + latency for the latency of the SAD triggering logic.
    scope.adc.presamples = scope.SAD.sad_reference_length + scope.SAD.latency
    bad = 0
    good = 0
    for rep in range(reps):
        sadtrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
        #assert sadtrace is not None, 'SAD-triggered capture failed on rep {}'.format(rep)
        if sadtrace is None:
            bad += 1
            continue
        assert scope.adc.errors == False, 'Unexpected capture error: %s on rep %d' % (scope.adc.errors, rep)
        sad = 0
        samples = 0
        for r,s,e in zip(reftrace.wave.astype(int), sadtrace.wave.astype(int), scope.SAD.enabled_samples):
            samples += 1
            if bits == 12:
                s = s >> 4
                r = r >> 4
            if e:
                if abs(r-s) > interval_threshold:
                    sad += 1
        #assert sad <= threshold, 'FPGA or Python bug? SAD=%d, threshold=%d (iteration %d)' %(sad, threshold, rep)
        if sad > threshold:
            bad +=1
        else:
            good +=1

    # SAD is probabilistic; trying to reliably get 100% isn't the goal here:
    #print(' %d/%d/%d ' % (good, bad, reps), end='')
    assert bad/reps <= 0.05, 'too many failures! (%d/%d) FPGA or Python bug, or SAD parameters need adjustment?' % (bad, reps)


    common_xadc_check(scope, False, 'SAD stress test pushing things too far? If temperature is just above 65C, could be ok.')


def test_sad_timeouts(stress):
    # have SAD timeout while always_armed on purpose, to get things hot (lighter version of what we do in HuskySADStressTest.ipynb)
    if stress:
        reps = 10
        timeout = 20
    else:
        reps = 3
        timeout = 10
    reset_setup(scope,target)
    clock = 10e6
    adcmul = int(MAXCLOCK / clock)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = adcmul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True, 'Unexpected clock-setting problem.'
    assert abs(scope.clock.adc_freq - clock*adcmul)/scope.clock.adc_freq < 0.01, 'Not getting expected ADC clock frequency.'
    target.baud = 38400 * clock / 1e6 / 7.37
    #print('set adc_mul: %d / %d' % (adcmul, scope.clock.adc_mul))
    
    scope.adc.samples = 20000
    scope.adc.presamples = 0
    scope.adc.offset = 0
    scope.adc.bits_per_sample = 8
    scope.gain.db = 10

    scope.SAD.reference = np.asarray([128]*1024, dtype=np.uint8)
    scope.SAD.threshold = 1 # so low that captures will timeout
    scope.SAD.interval_threshold = 2 # so low that captures will timeout
    scope.adc.timeout = timeout
    scope.SAD.multiple_triggers = False
    scope.SAD.emode = False
    scope.SAD.always_armed = True
    scope.trigger.module = 'SAD'

    for i in range(reps):
        sadtrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
        common_xadc_check(scope, False, 'SAD stress test pushing things too far? If temperature is just above 65C, could be ok.')

    scope.SAD.always_armed = False

def test_xadc():
    common_xadc_check(scope, True, 'Final XADC check, it would be odd for this to trip now (unless XADC errors were noted during earlier tests which passed).')

def test_finish():
    # just restore some defaults:
    scope.default_setup(verbose=False)


# this function copied from https://gist.github.com/mattmills49/44a50b23d3c7a8f71dfadadd0f876ac2
def display_hist(x, num_bins = 8, zeros_as_blank = False):
    '''Returns a histogram as a unicode text string, e.g. '▁▂▄█▆▃▁▁'
    
    Inspired by the `precis` function from the Statistical Rethinking R package
    by Richard McElreath. This function will calculate a histogram and then
    returns a string displaying the histogram in unicode characters. It uses the
    LOWER BLOCK group like "2584 ▄ LOWER HALF BLOCK". 
    
    After I published this I was alerted to the correct term for this type of text
    plot: spark lines. There is a python package by @RedKrieg that is much more 
    robust for turning a sequence into a spark line called pysparklines. And the
    original(?) terminal package form @holman called spark:
    * pysparklines: https://github.com/RedKrieg/pysparklines
    * spark: https://github.com/holman/spark
    
    Parameters
    ----------
    x : numpy.array 
        The vector of values to compute the histogram for
    num_bins : int or list of float
        The number of characters to print out. Can pass custom bin edges to 
        `np.histogram` as well.
    zeros_as_blank : bool
        Should buckets with 0 observations be a blank space, False would still
        show a one eight block if there are no observations.
        
    Returns
    -------
    unicode_str : str
        The histogram str to be displayed
        
    Examples
    --------
    >>> display_hist(np.random.uniform(size = 1000))
    '▇▇▇▇▇▆▇█'
    >>> display_hist(np.random.normal(size = 1000))
    '▁▂▄█▆▃▁▁'
    >>> display_hist(np.abs(np.random.normal(size = 1000)))
    '█▇▅▃▂▁▁▁'
    >>> display_hist(np.power(np.random.normal(size = 1000), 2))
    '█▂▁▁▁▁▁▁'
    >>> display_hist(np.hstack([np.repeat(0, 900), np.repeat(10, 100)]), zeros_as_blank = True)
    '█      ▁'
    >>> display_hist(np.hstack([np.repeat(0, 900), np.repeat(10, 100)]))
    '█▁▁▁▁▁▁▁'
    >>> display_hist(np.hstack([np.random.normal(size = 1000), 
                                np.random.normal(loc = 3, scale = 0.5, size = 1000)]), 
                     num_bins = 16)
    '▁▁▂▂▃▅▄▄▂▁▃▆█▄▁▁'
    
    References
    ----------
    The unicode code charts: https://www.unicode.org/Public/UCD/latest/charts/CodeCharts.pdf
    '''
    
    ## Get bin counts as a pct of total obs
    hist_counts, bin_edges = np.histogram(x, bins = num_bins)
    x_total = x.shape[0]
    pct_counts = hist_counts / x_total
    ## scale the percentages by the max pct and 0, then convert to the index
    ## of the appropriate unicode string in unicode_list
    max_pct = np.max(pct_counts)
    bin_labels = np.floor(pct_counts * (8 - 1) / max_pct).astype('int')
    ## adjust zeros to blank space index
    if zeros_as_blank:
        zero_ind = pct_counts == 0.0
        bin_labels[zero_ind] = 8
        
    unicode_list = ['\u2581', '\u2582', '\u2583', '\u2584',
                    '\u2585', '\u2586', '\u2587', '\u2588', ' ']
    unicode_labels = [unicode_list[l] for l in bin_labels]
    unicode_str = ft.reduce(lambda x, y: x + y, unicode_labels)
    return unicode_str

