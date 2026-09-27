# -*- coding: utf-8 -*-
#
# Copyright (c) 2025, NewAE Technology Inc
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
from datetime import datetime
import numpy as np
import random
import os

from test_common import *

""" 
Args:
    reps: number of times to run certain tests (default: 1)
        Used by some tests only:
        - test_glitch_output_sweep_width
        - test_glitch_output_sweep_offset
        - test_glitch_output_doubles
        - test_glitch_modes
    fulltest: run all tests. Use to validate a new bitfile. Very slow.
        When not set, a subset of tests, and the reps for other tests are
        reduced, to dramatically reduce the runtime; this is useful when
        validating a new Husky device with a known working bitfile, and is the
        default setting.
    swo_trace: run TraceWhisperer tests. Requires a specific target firmware,
        STM32 target, and jumper cables from USERIO D0/1/2 to to target's
        TMS/TCK/TDO. Disabled by default.

Note: in addition to what's controlled by the --fulltest option, some individual
tests are skipped when their description string ("desc") contains SLOW.

"""

print('\n\n\n\n**************************************************************************************')
print('* IMPORTANT NOTE:                                                                    *')
print('* This script is intended for basic regression testing of Husky during               *')
print('* development. If you are having issues connecting to your Husky or target           *')
print('* device, running this script is unlikely to provide you with useful information.    *')
print('* Instead, seek assistance on forum.newae.com or discord by providing details of     *')
print('* your setup (including the target), and the full error log from your Jupyter        *')
print('* notebook.                                                                          *')
print('*                                                                                    *')
print('* While this test can be run on a stand-alone Husky, some of the tests require a     *')
print('* target with a specific FW (which supports segmenting and trace):                   *')
print('* simpleserial-trace.                                                                *')
print('* The expected .hex file and this script should be updated together.                 *')
print('* If this FW is recompiled, the trace.set_isync_matches() call will have to be       *')
print('* modified with updated instruction addresses.                                       *')
print('* The simplest way to program a SAM4S target is to run test_husky_prod.py.           *')
print('**************************************************************************************\n\n')

test_platform = "sam4s"
logfilename = "test_husky_xadc.log"

if "HUSKY_HW_LOC" in os.environ:
    locboth = os.environ["HUSKY_HW_LOC"].split(',')
    loca = int(locboth[0].replace('(', ''))
    locb = int(locboth[1].replace(')', ''))
    hw_loc = (loca, locb)
    print("hw_loc added {}".format(hw_loc))
else:
    hw_loc = None

# set to sam4s, stm32f3, or cw305:
if "HUSKY_TARGET_PLATFORM" in os.environ:
    test_platform = os.environ["HUSKY_TARGET_PLATFORM"]

if "HUSKY_TYPE" in os.environ:
    NAME = os.environ["HUSKY_TYPE"]
else:
    NAME = None

print("Husky target platform {}".format(test_platform))
if NAME:
    scope = cw.scope(name=NAME, hw_location=hw_loc)
else:
    scope = cw.scope(hw_location=hw_loc)

if test_platform == 'cw305':
    target = cw.target(scope, cw.targets.CW305, fpga_id='100t', force=False)
else:
    target = cw.target(scope)
scope.errors.clear()
verbose = False
cw.scope_logger.setLevel(cw.logging.ERROR) # don't want to see warnings when setting clock past its specifications

# TODO: program FW?
scope.XADC.user_reset() # reset max/min stats
scope.reset_fpga()
scope.adc.clip_errors_disabled = True
scope.adc.lo_gain_errors_disabled = True
scope.clock.clkgen_freq = 10e6
scope.clock.clkgen_src = 'system'
scope.clock.adc_mul = 1
time.sleep(0.1)
assert scope.clock.pll.pll_locked == True
assert scope.clock.adc_freq == 10e6
target.baud = 38400 * 10 / 7.37

if scope._is_husky_plus:
    MAXCLOCK = 250e6
    OVERCLOCK1 = 255e6
    OVERCLOCK2 = 265e6
else:
    MAXCLOCK = 200e6
    OVERCLOCK1 = 210e6
    OVERCLOCK2 = 250e6

# use this at the start of each testcase to remove dependency on order of tests:
reset_setup(scope,target)

time.sleep(0.2)
if test_platform != 'cw305':
    reset_target(scope)
# see if a target is attached:
    target.flush()
    target.write('x\n')
    time.sleep(0.2)
    resp = target.read()
    if resp == '':
        target_attached = False
        print('no target?!?')
    else:
        target_attached = True
else:
    target_attached = False

# next, check for a particular FW:
if target_attached:
    target.simpleserial_write('i', b'')
    time.sleep(0.1)
    resp = target.read().split('\n')[0]
    if resp in ['ChipWhisperer simpleserial-trace, compiled Mar 14 2022, 21:06:34', 'ChipWhisperer simpleserial-trace, compiled Sep  2 2022, 13:55:43']:
        trace_fw = True
        scope.trace.target = target
        trace = scope.trace
    else:
        trace_fw = False
else:
    trace_fw = False


ktp = cw.ktp.Basic()
key, text = ktp.next()


testData = [
    # samples   presamples  testmode    clock       fastreads   adcmul  bit stream  segs    segcycs reps    desc
    (8,         0,          'internal', 20e6,       True,       1,      8,  False,  1,      0,      1,      'smallest_capture'),
    ('max',     0,          'internal', 20e6,       True,       1,      8,  False,  1,      0,      1,      'maxsamples8_SLOW'),
    ('max',     0,          'internal', 20e6,       True,       1,      12, False,  1,      0,      1,      'maxsamples12'),
    (300,       0,          'internal', 20e6,       True,       1,      8,  False,  10,     1000,   1,      'evensegments8_SLOW'),
    (50,        0,          'internal', 20e6,       True,       1,      8,  False,  100,    250,    1,      'oddsegments8_SLOW'),
    (300,       0,          'internal', 20e6,       True,       1,      12, False,  10,     1000,   1,      'evensegments12_SLOW'),
    (50,        0,          'internal', 20e6,       True,       1,      12, False,  100,    250,    1,      'oddsegments12'),
    (300,       30,         'internal', 20e6,       True,       1,      12, False,  20,     600,    1,      'presamplesegments'),
    ('max',     0,          'internal', 10e6,       True,       1,      12, False,  1,      0,      1,      'slow_SLOW'),
    ('max',     0,          'internal', 80e6,       True,       1,      12, False,  1,      0,      1,      'fast_SLOW'),
    ('max',     0,          'internal', 'max',      True,       1,      12, False,  1,      0,      10,     'fastest'),
    ('max',     0,          'internal', 'over2',    True,       1,      12, False,  1,      0,      1,      'overclocked'),
    ('max',     0,          'internal', 5e6,        True,       4,      12, False,  1,      0,      1,      '4xslow_SLOW'),
    ('max',     0,          'internal', 50e6,       True,       4,      12, False,  1,      0,      1,      '4xfast'),
    ('max',     0,          'ADCramp',  20e6,       True,       1,      12, False,  1,      0,      1,      'ADCslow'),
    ('max',     0,          'ADCramp',  'max',      True,       1,      12, False,  1,      0,      10,     'ADCfast_SLOW'),
    ('max',     0,          'ADCramp',  50e6,       True,       4,      12, False,  1,      0,      1,      'ADC4xfast'),
    ('max',     0,          'ADCramp',  'over2',    True,       1,      12, False,  1,      0,      1,      'ADCoverclocked'),
    (8192,      0,          'ADCramp',  10e6,       True,       1,      12, False,  12,     10000,  1,      'ADClongsegments_SLOW'),
    (64,        0,          'ADCramp',  'max',      True,       1,      12, False,  'max',  400,    10,     'ADCfastsegments'),
    (300,       30,         'ADCramp',  'max',      True,       1,      12, False,  'max',  600,    10,     'ADCfastsegmentspresamples'),
    (300,       30,         'ADCramp',  'over2',    True,       1,      12, False,  'max',  600,    1,      'ADCoverclockedsegmentspresamples'),
    ('max',     0,          'ADCalt',   20e6,       True,       1,      12, False,  1,      0,      10,     'ADCaltslow_SLOW'),
    ('max',     0,          'ADCalt',   'max',      True,       1,      12, False,  1,      0,      10,     'ADCaltfast'),
    ('max',     0,          'ADCalt',   'over2',    True,       1,      12, False,  1,      0,      1,      'ADCaltoverclocked_SLOW'),
    (500,       0,          'internal', 20e6,       False,      1,      12, False,  1,      0,      1,      'slowreads'),
    ('max',     0,          'internal', 20e6,       False,      1,      12, False,  1,      0,      1,      'maxslowreads_SLOW'),
]

testMaxSamplesData = [
    # presamples    clock_start clock_step  bit reps    desc
    (0,             150e6,      2e6,        8,  2,      'maxsamples_8b_SLOW'),
    (0,             150e6,      2e6,        12, 2,      'maxsamples_12b'),
    (10000,         150e6,      2e6,        8,  4,      'maxsamples_8b_midpre_SLOW'),
    (10000,         150e6,      2e6,        12, 4,      'maxsamples_12b_midpre_SLOW'),
    ('max',         150e6,      2e6,        8,  4,      'maxsamples_8b_maxpre_SLOW'),
    ('max',         150e6,      2e6,        12, 4,      'maxsamples_12b_maxpre_SLOW'),
    (0,             150e6,      1e6,        8,  4,      'maxsamples_8b_fine_SLOW'),
    (0,             150e6,      1e6,        12, 4,      'maxsamples_12b_fine_SLOW'),
]


testADCresetData = [
    # freq_start    freq_stop   freq_step   adc_mul_start   adc_mul_stop    adc_mul_step    desc
    (7.37e6,        8e6,        1e6,        1,              'max',          1,              'ADCreset'),
    (7.37e6,        20e6,       1e6,        1,              'max',          1,              'ADCreset_SLOW'),
]


testADCsweep = [
    # samples   presamples  freq_start  freq_stop   freq_step   testmode    fastreads   adcmul  bit stream  segs    segcycs reps    desc
    (30,        15,         48e6,       56e6,       1e6,        'internal', True,       1,      12, False,  327,    250,    50,     'int_segmentspresamples_slow'),
    (30,        15,         100e6,      108e6,      1e6,        'internal', True,       1,      12, False,  327,    250,    50,     'int_segmentspresamples_fast'),
    (30,        15,         10e6,       'over1',    5e6,        'internal', True,       1,      12, False,  327,    250,    10,     'int_segmentspresamples_full'),
    (300,       30,         48e6,       56e6,       1e6,        'internal', True,       1,      12, False,  327,    500,    10,     'int_segmentspresamples_long'),
    (8192,      0,          10e6,       'over1',    5e6,        'ADCramp',  True,       1,      12, False,  'max',  100000, 2,      'longsegments'),
    (64,        0,          10e6,       'over1',    5e6,        'ADCramp',  True,       1,      12, False,  'max',  400,    2,      'shortsegments'),
]

testTargetData = [
    # samples   presamples  testmode    clock       fastreads   adcmul  bit stream  threshold   seg_size,   check   segs    segcycs desc
    (900000,    0,          'internal', 10e6,       True,       1,      8,  True ,  65536,      65536,      True,   1,      0,      'midstream'),
    (900000,    0,          'internal', 8e6,        True,       1,      8,  True ,  65536,      65536,      True,   1,      0,      'slowstream'),
    (900000,    0,          'internal', 5e6,        True,       1,      12, True ,  65536,      65536,      True,   1,      0,      'slowerstream12'),
    (900000,    0,          'internal', 5e6,        True,       1,      8,  True ,  65536,      65536,      True,   1,      0,      'slowerstream'),
    (4000000,   0,          'internal', 5e6,        True,       1,      8,  True ,  65536,      65536,      True,   1,      0,      'slowerstream_SLOW'),
    # N.B.: much more slow stream tests over at test_husky_stream.py
    (200,       0,          'internal', 20e6,       True,       1,      8,  False,  65536,      65536,      True,   1,      0,      'quick'),
    ('max',     0,          'internal', 15e6,       True,       1,      12, False,  65536,      65536,      True,   1,      0,      'maxsamples12'),
    (400000,    0,          'internal', 20e6,       True,       1,      8,  True ,  65536,      65536,      True,   1,      0,      'quickstream8'),
    (2000000,   0,          'internal', 16e6,       True,       1,      12, True ,  65536,      65536,      True,   1,      0,      'longstream12_SLOW'),
    (6000000,   0,          'internal', 16e6,       True,       1,      12, True ,  65536,      65536,      False,  1,      0,      'vlongstream12_SLOW'),
    (500000,    0,          'internal', 20e6,       True,       1,      12, True ,  16384,      65536,      True,   1,      0,      'over_stream_SLOW'),
    (3000000,   0,          'internal', 24e6,       True,       1,      12, True ,  65536,      65536,      False,  1,      0,      'overflow_stream_SLOW'),
    (200000,    0,          'internal', 15e6,       True,       1,      12, True ,  65536,      65536,      True,   1,      0,      'postfail_stream_SLOW'),
    (2000,      0,          'internal', 10e6,       True,       1,      8,  False,  65536,      65536,      True,   1,      0,      'back2nostream_SLOW'),
    (500000,    0,          'internal', 12e6,       False,      1,      12, True ,  65536,      65536,      True,   1,      0,      'slowreads1_stream_SLOW'),
    (2000000,   0,          'internal', 10e6,       False,      1,      12, True ,  65536,      65536,      True,   1,      0,      'slowreads2__streamSLOW'),
]


if test_platform == "sam4s":
    testSegmentData = [
        # offset    presamples  samples stream  clock       adcmul  seg_count   segs    segcycs bits    desc
        (0,         0,          8,      False,  7.37e6,     4,      False,      20,     0,      12,     'segments_tiny'),
        (0,         0,          90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_no_offset'),
        (0,         10,         90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_no_offset_presamp'),
        (10,        0,          90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_offset10_SLOW'),
        (50,        0,          90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_offset50_SLOW'),
        (50,        20,         90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_offset50_presamp'),
        (0,         10,         33,     False,  7.37e6,     4,      False,      'max',  0,      8,      'segments_trigger_max8_SLOW'),
        (0,         10,         33,     False,  7.37e6,     4,      False,      'max',  0,      12,     'segments_trigger_max12_SLOW'),
        (0,         0,          100,    True,   7.37e6,     4,      False,      2000,   0,      12,     'segments_trigger_stream_SLOW'),
        (0,         0,          90,     False,  7.37e6,     4,      True,       20,     32500,  12,     'segments_counter_no_offset'),
        (0,         30,         90,     False,  7.37e6,     4,      True,       20,     32500,  12,     'segments_counter_no_offset_presamp_SLOW'),
        (10,        0,          90,     False,  7.37e6,     4,      True,       20,     32500,  12,     'segments_counter_offset10_SLOW'),
        (50,        0,          90,     False,  7.37e6,     4,      True,       20,     32500,  12,     'segments_counter_offset50_SLOW'),
        (50,        40,         90,     False,  7.37e6,     4,      True,       20,     32500,  12,     'segments_counter_offset50_presamp'),
    ]
else:
    testSegmentData = [
        # offset    presamples  samples stream  clock       adcmul  seg_count   segs    segcycs bits    desc
        (0,         0,          8,      False,  7.37e6,     4,      False,      20,     0,      12,     'segments_tiny'),
        (0,         0,          90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_no_offset'),
        (0,         10,         90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_no_offset_presamp'),
        (10,        0,          90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_offset10_SLOW'),
        (50,        0,          90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_offset50_SLOW'),
        (50,        20,         90,     False,  7.37e6,     4,      False,      20,     0,      12,     'segments_trigger_offset50_presamp'),
        (0,         10,         33,     False,  7.37e6,     4,      False,      'max',  0,      12,     'segments_trigger_max_SLOW'),
        (0,         0,          100,    True,   7.37e6,     4,      False,      2000,   0,      12,     'segments_trigger_stream_SLOW'),
        (0,         0,          90,     False,  7.37e6,     4,      True,       20,     29472,  12,     'segments_counter_no_offset'),
        (0,         30,         90,     False,  7.37e6,     4,      True,       20,     29472,  12,     'segments_counter_no_offset_presamp_SLOW'),
        (10,        0,          90,     False,  7.37e6,     4,      True,       20,     29472,  12,     'segments_counter_offset10_SLOW'),
        (50,        0,          90,     False,  7.37e6,     4,      True,       20,     29472,  12,     'segments_counter_offset50_SLOW'),
        (50,        40,         90,     False,  7.37e6,     4,      True,       20,     29472,  12,     'segments_counter_offset50_presamp'),
    ]


testGlitchOffsetData = [
    # clock     margin  offset    oversamp    desc
    (10e6,      0.1,    0,         40,         ''),
    (10e6,      0.1,    400,       40,         'SLOW'),
    (10e6,      0.1,    800,       40,         'SLOW'),
    (10e6,      0.1,    1600,      40,         ''),
    (20e6,      0.2,    200,       20,         ''),
    (20e6,      0.2,    500,       20,         'SLOW'),
    (100e6,     0.6,    0,         5,          ''),
    (100e6,     0.6,    50,        5,          'SLOW'),
    (100e6,     0.6,    100,       5,          ''),
]

testGlitchWidthData = [
    # offset    oversamp    desc
    (0,         40,         ''),
    (400,       40,         ''),
    (800,       40,         ''),
    (1600,      40,         ''),
]

testGlitchOutputWidthSweepData = [
    # clock     offset    oversamp    steps_per_point desc
    (10e6,      0,         40,         2,              ''),
    (10e6,      600,       40,         2,              'SLOW'),
    (10e6,      1200,      40,         2,              ''),
    (10e6,      -1200,     40,         2,              ''),
    (10e6,      0,         20,         4,              'SLOW'),
    (50e6,      200,       8,          10,             ''),
    (100e6,     400,       4,          20,             ''),
    (200e6,     600,       2,          40,             'SLOW'),
]

testMissingGlitchData = [
    # clock     vco     span    width   num_glitches    reps    oversamp    stepsize    desc
    (10e6,      600e6,  100,    1000,   1,              5,      20,         1,          ''),
    (10e6,      600e6,  100,    1000,   10,             5,      20,         1,          ''),
    (15e6,      600e6,  100,    1000,   10,             5,      20,         1,          ''),
    (25e6,      600e6,  100,    1000,   10,             5,      10,         1,          ''),
    #(10e6,      600e6,  100,    1000,   10,             100,    20,         1,          ''), #slow! keep commented out
    #(10e6,      1200e6, 200,    2000,   10,             100,    20,         1,          ''), #slow! keep commented out
    #(10e6,      600e6,  3360,   1000,   10,             20,     20,         1,          ''), #slow! keep commented out
]

testGlitchOutputOffsetSweepData = [
    # TODO: these used to pass at oversamp=40, but that may be too aggressive?
    # clock     width     oversamp    steps_per_point desc
    (10e6,      200,       35,         2,              ''),
    (10e6,      -200,      35,         2,              ''),
    (10e6,      1000,      35,         2,              ''),
    (10e6,      -1000,     35,         2,              ''),
    (10e6,      3000,      35,         2,              ''),
    (10e6,      -3000,     35,         2,              ''),
    (10e6,      500,       30,         2,              ''),
    (10e6,      500,       20,         2,              ''),
    (50e6,      100,       8,          10,             'may_fail'), # these may fail because we're pushing the clock
    (50e6,      200,       8,          10,             'may_fail'),
    (100e6,     100,       4,          20,             'may_fail'),
    (100e6,     150,       4,          20,             'may_fail'),
    (125e6,     50,        4,          30,             'may_fail'),
    (125e6,     70,        4,          30,             'may_fail'),
    # note: finding glitches at 200 MHz doesn't work reliably because oversampling isn't high enough
]

testGlitchOutputDoublesData = [
    #clock      vco        glitches    oversamp    stepsize    desc
    (10e6,      600e6,     1,          20,         1,          ''),
    (10e6,      1200e6,    1,          20,         1,          ''),
    (10e6,      600e6,     2,          20,         1,          ''),
    (50e6,      600e6,     1,          8,          1,          ''),
    (100e6,     600e6,     1,          4,          1,          ''),
    (100e6,     600e6,     2,          4,          1,          ''),
]

testRWData = [
    #address    nbytes  reps    desc
    (16,        4,      1000,   'SAMPLES'),
    (4,         8,      1000,   'ECHO'),
]

testTraceData = [
    #raw_capture    interface  trigger_source       desc
    (False,         'swo',     'firmware trigger',  'pattern-matched SWO trace, target-triggered'),
    (True,          'swo',     'firmware trigger',  'raw SWO trace, target-triggered'),
    (False,         'swo',     0,                   'pattern-matched SWO trace, trace-triggered'),
]

testTraceSegmentData = [
    #interface  triggers    desc
    ('swo',     1,          '1triggers'),
    ('swo',     10,         '10triggers'),
    ('swo',     21,         '21triggers'),
]


testPresamplesData = [
    #clock  adc_mul bits    presamp_range   presamples_step offset  reps    threshold   desc):
    (10e6,  1,      8,      [1000, 1050],   1,              0,      2,      3000,       'stage1_boundary'),
    (10e6,  1,      8,      [2030, 2060],   1,              0,      2,      6000,       'stage1_boundary_plus'),
    (10e6,  1,      8,      'max',          1,              0,      2,      300000,     'max_presamp8'),
    (10e6,  1,      12,     'max',          1,              0,      2,      3000000,    'max_presamp12'),
    (10e6,  1,      8,      'max',          1,              0,      50,     300000,     'max_presamp8_SLOW'),
    (10e6,  'max',  8,      'max',          1,              0,      50,     300000,     'max_presamp8_fast_SLOW'),
    (10e6,  1,      12,     'max',          1,              0,      50,     3000000,    'max_presamp12_SLOW'),
    (10e6,  'max',  12,     'max',          1,              0,      50,     3000000,    'max_presamp12_fast_SLOW'),
]


testPresamplesCaptureData = [
    #clock  adc_mul bits    presamp_range   presamples_step offset  reps    threshold   desc):
    (10e6,  1,      8,      'max',          1,              0,      50,     300000,     'max_presamp8_SLOW'),
    (10e6,  'max',  8,      'max',          1,              0,      50,     300000,     'max_presamp8_fast_SLOW'),
    (10e6,  1,      12,     'max',          1,              0,      50,     3000000,    'max_presamp12_SLOW'),
    (10e6,  'max',  12,     'max',          1,              0,      50,     3000000,    'max_presamp12_fast_SLOW'),
]


testSADTriggerData = [
    #clock  adc_mul bits   emode,   threshold   interval_threshold   offset  reps    desc
    (10e6,  1,      8,     False,   12,         10,                  0,      60,     '8bits'),
    (10e6,  1,      8,     True,    25,         12,                  0,      60,     '8bits_emode'),
    (10e6,  1,      12,    False,   12,         10,                  0,      60,     '12bits'),
    (10e6,  1,      8,     False,   12,         10,                  0,      80,     '8bits_SLOW'),
    (10e6,  10,     8,     False,   12,         10,                  0,      80,     'fast_SLOW'),
    (10e6,  18,     8,     False,   12,         10,                  0,      80,     'faster_SLOW'),
    (10e6,  'max',  8,     False,   12,         12,                  0,      60,     'fastest'),
    (10e6,  'max',  8,     True,    20,         12,                  0,      60,     'fastest_emode'),
    (10e6,  1,      8,     False,   12,         10,                  0,      200,    'recover_SLOW'), # allow for temp to come down before we overclock it
    (10e6,  'over', 8,     False,   12,         12,                  0,      80,     'overclocked_SLOW'),
    (10e6,  'over', 8,     True,    20,         12,                  0,      80,     'overclocked_emode_SLOW'),
]

testMultipleSADTriggerData = [
    #clock  adc_mul bits   emode    threshold   interval_threshold   segments    offset  reps    desc
    (10e6,  4,      8,     False,   15,         15,                  10,         2035,   60,     'regular'),
    (10e6,  4,      8,     True,    25,         15,                  10,         2035,   60,     'regular_emode'),
    (10e6,  'max',  8,     False,   20,         10,                  10,         2035,   60,     'fast'),
    (10e6,  'max',  8,     True,    40,         15,                  10,         2035,   60,     'fast_emode'),
]

testUARTTriggerData = [
    #clock      pin     pattern     mask                            bytes_compared  reps    desc
    (10e6,      'tio1', 'r7DF7',    None,                           8,              10,     'tio1_10M'),
    (10e6,      'tio1', 'r7DF7xxx', [255,255,255,255,0,0,0,0],      5,              10,     'tio1_10M'),
    (10e6,      'tio1', 'r7Dxxxxx', [255,255,0,0,0,0,0,0],          3,              10,     'tio1_10M'),
    (10e6,      'tio2', 'p000000',  None,                           8,              10,     'tio2_10M'),
    (20e6,      'tio1', 'r7DF7',    None,                           8,              10,     'tio1_20M'),
    (20e6,      'tio2', 'p000000',  None,                           8,              10,     'tio2_20M'),
]

testADCTriggerData = [
    #gain       threshold   bits    reps    desc
    (1,         0.9,        12,     3,     ''),
    (10,        0.9,        12,     3,     ''),
    (5,         0.9,        8,      3,     'SLOW'),
    (5,         0.5,        8,      3,     ''),
    (1,         0.5,        12,     3,     'SLOW'),
    (10,        0.5,        12,     3,     'SLOW'),
]

testEdgeTriggerData = [
    #pin        edges       oversamp,   check,  reps,   desc
    ('tio1',    2,          4,          True,   3,      ''),
    ('tio1',    4,          4,          True,   3,      'SLOW'),
    ('tio1',    100,        4,          False,  50,     ''),
    ('tio2',    3,          4,          True,   10,     'SLOW'),
    ('tio2',    5,          4,          True,   10,     ''),
    ('tio2',    50,         4,          False,  50,     'SLOW'),
]

testUserioEdgeTriggerData = [
    #pins           max_edges   reps    desc
    ([3,4,5,6,7],   260,        3,      ''),    # exclude pins 0-2 since they are used for trace and could be target-driven
]

testGlitchTriggerData = [
    #module             pattern         reps,   desc
    ('basic',           [0,1],          100,    'basic_glitch_arm_active'),
    ('basic',           [0,1,0],        100,    'basic_glitch_arm_inactive'),
    ('edge_counter',    [1,0,1,0],      100,    'edge_glitch_arm_inactive'),
    ('edge_counter',    [0,1,0,1,0,1],  100,    'edge_glitch_arm_active'),
]

testPLLData = [
    #freq   adc_mul xtal    oversample  tolerance   reps    desc
    (5e6 ,  1,      False,  40,         1,          1,      'CW305_ref'),
    (10e6,  1,      False,  20,         1,          1,      'CW305_ref_SLOW'),
    (15e6,  1,      False,  16,         1,          1,      'CW305_ref'),
    (50e6,  1,      False,  6,          0,          1,      'CW305_ref_SLOW'),
    (75e6,  1,      False,  4,          0,          1,      'CW305_ref_SLOW'),
    (5e6 ,  4,      False,  20,         1,          1,      'CW305_ref_mul4'),
    (15e6,  3,      False,  16,         1,          1,      'CW305_ref_mul3'),
    (20e6,  2,      False,  15,         1,          1,      'CW305_ref_mul2_SLOW'),
    (25e6,  2,      False,  12,         0,          1,      'CW305_ref_mul2_SLOW'),

    (5e6 ,  1,      True,   20,         1,          1,      'xtal_ref'),
    (10e6,  1,      True,   20,         1,          1,      'xtal_ref_SLOW'),
    (15e6,  1,      True,   16,         1,          1,      'xtal_ref'),
    (50e6,  1,      True,   6,          1,          1,      'xtal_ref_SLOW'),
    (75e6,  1,      True,   4,          1,          1,      'xtal_ref_SLOW'),
    (5e6 ,  4,      True,   40,         1,          1,      'xtal_ref_mul4'),
    (15e6,  3,      True,   16,         1,          1,      'xtal_ref_mul3'),
    (20e6,  2,      True,   15,         1,          1,      'xtal_ref_mul2_SLOW'),
    (25e6,  2,      True,   12,         1,          1,      'xtal_ref_mul2_SLOW'),
]


testManualGlitchCountData = [
    #clock  glitches    desc
    (10e6,  10,         '10_glitches_slow'),
    (50e6,  10,         '10_glitches_mid_SLOW'),
    #('max', 10,         '10_glitches_max'), # seems that manual_trigger() is not reliable with a fast clock rate?
]

testTriggeredGlitchCountData = [
    #clock  glitches    desc
    (10e6,  10,         '10_glitches_slow'),
    (100e6, 10,         '10_glitches_mid_SLOW'),
    ('max', 10,         '10_glitches_max'),
    ('max', 200,        '200_glitches_max_SLOW'),
]

testGlitchCountPhasesData = [
    #clock  reps    step_size   desc
    (10e6,  3,      50,         'sweep_phase_slow_quick'),
    ('max', 3,      5,          'sweep_phase_max_quick'),

    (10e6,  10,     1,          'sweep_phase_slow_SLOW'),
    (100e6, 10,     1,          'sweep_phase_slow_SLOW'),
    ('max', 10,     1,          'sweep_phase_max_SLOW'),
]

testAsyncTriggerData = [
    #clock_stop     clock_step  steps   captures    desc
    ('max',         10e6,       1,      300,        'async_trigger'),
    ('max',         10e6,       5,      1000,       'async_trigger_SLOW'),
]


def test_fpga_version():
    common_fpga_version_check(scope)

def test_fw_version():
    common_fw_version_check(scope)

@pytest.fixture(autouse=True)
def xadc_check(xadc, log, timeout=120):
    # runs before test:
    #...
    yield
    # runs after test:
    if xadc:
        #print(' temp=%4.1f, XADC=%s' % (scope.XADC.temp, scope.XADC.status), end='')
        print(' temp=%4.1f ' % scope.XADC.temp, end='')
        if scope.XADC.status != 'good':
            print(scope.XADC.status, end='')
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

    # if an error occured, cool down until it can actually be cleared
    if scope.XADC.status != 'good':
        if verbose: print('XADC errors, pausing to cool down...', end='')
        oldclock = scope.clock.clkgen_freq
        oldmul = scope.clock.adc_mul
        scope.clock.clkgen_freq = 5e6
        scope.clock.adc_mul = 1

        scope.glitch.enabled = False
        start = datetime.now()
        while scope.XADC.status != 'good':
            scope.errors.clear()
            time.sleep(5)
            if verbose: print('.', end='')
            if (datetime.now() - start).total_seconds() > timeout:
                print(' XADC cool-down timed out! aborting... subsequent tests may fail as a result')
                break
        if verbose: print(' ok!')
        scope.clock.clkgen_freq = oldclock
        scope.clock.adc_mul = oldmul
        scope.glitch.enabled = True

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

@pytest.mark.parametrize("address, nbytes, reps, desc", testRWData)
def test_reg_rw(address, nbytes, reps, desc):
    reset_setup(scope,target)
    for i in range(reps):
        data = int.to_bytes(random.randrange(2**(8*nbytes)), length=nbytes, byteorder='little')
        scope.sc.sendMessage(0xc0, address, bytearray(data), Validate=False)
        temp = scope.fpga_buildtime # just a dummy read
        read_data = scope.sc.sendMessage(0x80, address, maxResp=nbytes)
        assert read_data == data, "rep %d: expected %0x, got %0x" % (i, int.from_bytes(data, byteorder='little'), int.from_bytes(read_data, byteorder='little'))

@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_target_power():
    #scope.io.cwe.setTargetPowerSlew(fastmode=True) # will fail if this is commented out
    for i in range(4):
        scope.io.target_pwr = 0
        time.sleep(0.2)
        scope.io.target_pwr = 1
        time.sleep(0.2)
    assert scope.XADC.status == 'good'

@pytest.mark.parametrize("samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, segments, segment_cycles, reps, desc", testData)
def test_internal_ramp(fulltest, samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, segments, segment_cycles, reps, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if not fulltest:
        reps = 1 # reduce number of reps to speed up
    reset_setup(scope,target)
    if clock == 'max':
        clock = MAXCLOCK
    elif clock == 'over2':
        clock = OVERCLOCK2
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = adcmul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock*adcmul)/scope.clock.adc_freq < 0.01

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
    scope.adc.bits_per_sample = bits
    if samples == 'max':
        scope.adc.samples = scope.adc.max_samples
    else:
        scope.adc.samples = samples
    scope.adc.presamples = presamples
    if segments == 'max':
        scope.adc.segments = scope.adc.max_segments
    else:
        scope.adc.segments = segments
    scope.adc.segment_cycles = segment_cycles
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.segment_cycle_counter_en = True
    for i in range(reps):
        scope.arm()
        scope.sc.triggerNow()
        assert scope.capture() == False
        raw = np.int64(scope.get_last_trace(True))
        errors, first_error = check_ramp(raw, testmode, bits, scope.adc.samples, segment_cycles)
        assert errors == 0, "rep %d: %d errors; First error: %d; scope.adc.errors: %s" % (i, errors, first_error, scope.adc.errors)
        assert scope.adc.errors == False, "rep %d: %s" % (i, scope.adc.errors)
    scope.sc._fast_fifo_read_enable = True # return to default



@pytest.mark.parametrize("presamples, clock_start, clock_step, bits, reps, desc", testMaxSamplesData)
def test_max_samples(fulltest, presamples, clock_start, clock_step, bits, reps, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.adc_mul = 1
    scope.adc.bits_per_sample = bits
    scope.adc.samples = scope.adc.max_samples
    if presamples == 'max':
        presamples = scope.adc.max_presamples
    scope.adc.presamples = presamples
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True

    for clock in range(int(clock_start), int(MAXCLOCK+clock_step), int(clock_step)):
        scope.clock.clkgen_freq = clock
        time.sleep(0.1)
        assert scope.clock.pll.pll_locked == True
        #print(scope.clock.clkgen_freq)
        for i in range(reps):
            scope.arm()
            scope.sc.triggerNow()
            assert scope.capture() == False
            raw = np.int64(scope.get_last_trace(True))
            assert scope.adc.errors == False, "clock = %d, rep %d: %s" % (clock, i, scope.adc.errors)



@pytest.mark.parametrize("freq_start, freq_stop, freq_step, adc_mul_start, adc_mul_stop, adc_mul_step, desc", testADCresetData)
def test_adc_reset(fulltest, reps, freq_start, freq_stop, freq_step, adc_mul_start, adc_mul_stop, adc_mul_step, desc):
    # The goal of this test is to ensure that when the FPGA is reset, which scope.con() does, everything works properly.
    # We test this with a wide range of ADC clock frequencies.
    # This is in response to this bug: https://github.com/newaetech/chipwhisperer/issues/559
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if not fulltest:
        reps = 1 # reduce number of reps to speed up
    fhits = []
    if freq_stop == 'max':
        freq_stop = MAXCLOCK
    if adc_mul_stop == 'max':
        use_max_adc_mul_stop = True
    else:
        use_max_adc_mul_stop = False
    for clock in range(int(freq_start), int(freq_stop), int(freq_step)):
        if use_max_adc_mul_stop:
            adc_mul_stop = int(MAXCLOCK//clock)
        if adc_mul_stop == 0:
            adc_mul_stop = 1
        for adcmul in range(adc_mul_start, adc_mul_stop+1, adc_mul_step):
            if adcmul * clock > MAXCLOCK:
                if verbose: print('skipping mul=%d, clock=%d' % (adcmul, clock))
                continue
            if adcmul*clock in fhits:
                if verbose: print('skipping (already done)')
                continue
            fhits.append(adcmul*clock)
            samples = scope.adc.max_samples
            adc_reset_test_setup()
            scope.clock.clkgen_freq = clock
            scope.clock.adc_mul = adcmul
            time.sleep(0.1)
            assert scope.clock.pll.pll_locked == True
            #assert abs(scope.clock.adc_freq - clock * adcmul) <= 10e6
            if verbose: print('Running clock=%d, mul=%d, adc=%d' % (clock/1e6, adcmul, scope.clock.adc_freq/1e6))
            for i in range(reps):
                scope.arm()
                scope.sc.triggerNow()
                assert scope.capture() == False
                raw = np.int64(scope.get_last_trace(True))
                errors, first_error = check_ramp(raw, 'internal', 12, samples, 0)
                assert errors == 0, "at ADC clock=%d MHz: %d errors; First error: %d; scope.adc.errors: %s" % (scope.clock.adc_freq/1e6, errors, first_error, scope.adc.errors)
                assert scope.adc.errors == False, 'ADC errors at clock=%d MHz: %s' % (scope.clock.adc_freq/1e6, scope.adc.errors)

    scope.adc.test_mode = False

def adc_reset_test_setup():
    # reconnecting to the scope WITHOUT reprogramming the FPGA bitfile is an important part of this test:
    # NOTE: manually reset -- not ideal since it's not what we want to test
    #scope.sc._setReset(True)
    #scope.sc._setReset(False)
    # NOTE: for some reason, calling scope.dis()/con() here leads to strange errors elsewhere
    #scope.dis()
    #scope.con(hw_location=hw_loc)
    if NAME:
        scope = cw.scope(name=NAME, hw_location=hw_loc)
    else:
        scope = cw.scope(hw_location=hw_loc)

    reset_setup(scope,target)
    scope.adc.test_mode = True
    scope.ADS4128.mode = 'normal'
    scope.adc.presamples = 0
    scope.adc.segments = 1
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.bits_per_sample = 12
    scope.adc.samples = scope.adc.max_samples



@pytest.mark.parametrize("samples, presamples, freq_start, freq_stop, freq_step, testmode, fastreads, adcmul, bits, stream, segments, segment_cycles, reps, desc", testADCsweep)
def test_adc_freq_sweep(fulltest, samples, presamples, freq_start, freq_stop, freq_step, testmode, fastreads, adcmul, bits, stream, segments, segment_cycles, reps, desc):
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    outfilename = 'test_adc_freq_sweep_%s.out' % desc
    outfile = open(outfilename, 'w')
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
    scope.adc.samples = samples
    scope.adc.presamples = presamples
    if segments == 'max':
        segments = scope.adc.max_segments
    scope.adc.segments = segments
    scope.adc.segment_cycles = segment_cycles
    scope.adc.segment_cycle_counter_en = True
    scope.adc.bits_per_sample = bits
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True

    all_passed = True

    if freq_stop == 'over1':
        freq_stop = OVERCLOCK1

    for clock in range(int(freq_start), int(freq_stop), int(freq_step)):
        scope.clock.clkgen_freq = clock
        scope.clock.adc_mul = adcmul
        time.sleep(0.1)
        assert scope.clock.pll.pll_locked == True, 'clock failed to lock'
        assert abs(scope.clock.adc_freq - clock * adcmul) <= 10e6, 'clock out of range'
        for i in range(reps):
            scope.arm()
            scope.sc.triggerNow()
            assert scope.capture(poll_done=True) == False, 'capture failed'
            raw = np.int64(scope.get_last_trace(True))
            errors, first_error = check_ramp(raw, testmode, bits, samples, segment_cycles)

            if errors or scope.adc.errors != False:
                all_passed = False
                #zero_start, zero_stop = last_zero_run(raw)
                #zero_length = zero_stop - zero_start
                #outfile.write('{} MHz: FAIL on iteration {}! {} ramp errors; scope.adc.errors:{}; first error:{}; state:{}, last zero run: {} zeros starting at sample {}; first error: {}\n'.format(scope.clock.adc_freq/1e6, i, errors, scope.adc.errors, scope.adc.first_error, scope.adc.first_error_state, zero_length, zero_start, first_error))
                outfile.write('{} MHz: FAIL on iteration {}! {} ramp errors; scope.adc.errors:{}; first error:{}; state:{}, first error: {}, rep: {}\n'.format(scope.clock.adc_freq/1e6, i, errors, scope.adc.errors, scope.adc.first_error, scope.adc.first_error_state, first_error, i))
                break # no point running more reps once it fails
            else:
                outfile.write('{} MHz: pass\n'.format(scope.clock.adc_freq/1e6))
                outfile.flush()

    outfile.close()
    assert all_passed, "see %s for details" % outfilename
    scope.sc._fast_fifo_read_enable = True # return to default


def setup_trace(interface):
    errors = 0
    scope.adc.segments = 1
    scope.adc.samples = 30
    scope.clock.clkgen_freq = 7.37e6
    scope.clock.adc_mul = 4
    target.baud = 38400
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    reset_target(scope)
    time.sleep(0.5)
    target.baud = 38400
    trace.enabled = True
    if interface == 'parallel':
        trace.clock.fe_clock_src = 'target_clock'
        assert trace.clock.fe_clock_alive
        trace.trace_mode = 'parallel'
        time.sleep(0.1)
        trace.resync()
    elif interface == 'swo':
        trace.clock.fe_clock_src = 'target_clock'
        assert trace.clock.fe_clock_alive
        trace.trace_mode = 'SWO'
        trace.jtag_to_swd()
        acpr = 0
        trigger_freq_mul = 8
        trace.clock.swo_clock_freq = scope.clock.clkgen_freq * trigger_freq_mul
        trace.target_registers.TPI_ACPR = acpr
        trace.swo_div = trigger_freq_mul * (acpr + 1)
        assert trace.clock.swo_clock_locked
        assert scope.userio.status & 0x4, "Are D0/1/2 connected to the target TMS/TCK/TDO?"
    assert trace.uart_state == 'ERX_IDLE', 'Maybe need to do a trace._uart_reset() here?'
    trace.target_registers.DWT_CTRL = 0x40000021
    trace.capture.trigger_source = 'firmware trigger'
    trace.capture.mode = 'while_trig'
    trace.set_isync_matches(addr0=0x080018c4, addr1=0x0800188c, match='both')
    trace.set_periodic_pc_sampling(enable=0)
    trace.capture.use_husky_arm = False


@pytest.mark.parametrize("clock, margin, offset, oversamp, desc", testGlitchOffsetData)
@pytest.mark.skipif(not scope.LA.present, reason='Cannot test glitch without internal logic analyzer. Rebuild FPGA to test.')
def test_glitch_offset(fulltest, clock, margin, offset, oversamp, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock)/scope.clock.adc_freq < 0.01

    setup_glitch(scope, offset, 0, oversamp)

    # glitch and measure:
    scope.LA.arm()
    scope.glitch.manual_trigger()
    raw = scope.LA.read_capture_data()
    source    = scope.LA.extract(raw, 1)
    mmcm1out  = scope.LA.extract(raw, 2)

    # check offset:
    offset_percent = offset / scope.glitch.phase_shift_steps * 2 # (100% = fully offset)
    assert offset_percent < 1, "Internal error: offset too big."
    mmcm1_not_equal = len(np.where(abs(source-mmcm1out) > 0)[0])
    points = len(source)
    ratio = mmcm1_not_equal / points
    assert (ratio > offset_percent - margin) and (ratio < offset_percent + margin), "Ratio out of bounds (%f)" % ratio
    scope.glitch.enabled = False
    scope.LA.enabled = False

@pytest.mark.parametrize("width, oversamp, desc", testGlitchWidthData)
@pytest.mark.skipif(not scope.LA.present, reason='Cannot test glitch without internal logic analyzer. Rebuild FPGA to test.')
def test_glitch_width(width, oversamp, desc):
    reset_setup(scope,target)

    scope.clock.clkgen_freq = 10e6
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert scope.clock.adc_freq == 10e6

    setup_glitch(scope, 0, width, oversamp)
    margin = 0.05

    # glitch and measure:
    scope.LA.arm()
    scope.glitch.manual_trigger()
    raw = scope.LA.read_capture_data()
    mmcm1out  = scope.LA.extract(raw, 2)
    mmcm2out  = scope.LA.extract(raw, 3)

    # check width:
    offset_percent = 1 - width / scope.glitch.phase_shift_steps * 2 # (100% = fully offset)
    mmcm2_not_equal = len(np.where(abs(mmcm2out-mmcm1out) > 0)[0])
    points = len(mmcm1out)
    ratio = mmcm2_not_equal / points
    assert (ratio > offset_percent - margin) and (ratio < offset_percent + margin), "Ratio out of bounds (%f)" % ratio
    scope.glitch.enabled = False
    scope.LA.enabled = False

@pytest.mark.parametrize("clock, offset, oversamp, steps_per_point, desc", testGlitchOutputWidthSweepData)
@pytest.mark.skipif(not scope.LA.present, reason='Cannot test glitch without internal logic analyzer. Rebuild FPGA to test.')
def test_glitch_output_sweep_width(fulltest, reps, clock, offset, oversamp, steps_per_point, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock)/scope.clock.adc_freq < 0.01

    margin = 5
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



@pytest.mark.parametrize("clock, vco, span, width, num_glitches, reps, oversamp, stepsize, desc", testMissingGlitchData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_missing_glitch_sweep_offset(fulltest, clock, vco, span, width, num_glitches, reps, oversamp, stepsize, desc):
    # Checks for missing glitches (https://github.com/newaetech/chipwhisperer-husky-fpga/issues/4)
    # Similar to test_glitch_output_sweep_offset() but doesn't use LA and only sweeps around sensitive spots
    # and uses more repetitions.
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock)/scope.clock.adc_freq < 0.01
    target.baud = 38400 * clock / 1e6 / 7.37
    reset_target(scope)

    scope.clock.fpga_vco_freq = vco
    setup_glitch(scope, 0, width, oversamp)
    scope.glitch.num_glitches = num_glitches
    scope.glitch.trigger_src = 'ext_single'
    scope.adc.samples = 16
    errors = []
    for offset in range(scope.glitch.phase_shift_steps//2-span, scope.glitch.phase_shift_steps//2+span, stepsize):
        scope.glitch.offset = offset
        for i in range(reps):
            ext_offsets = []
            for j in range(num_glitches):
                ext_offsets.append(random.randrange(2,5))
            scope.glitch.ext_offset = ext_offsets
            scope.glitch.repeat = [1]*num_glitches
            trace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
            assert trace is not None, 'capture failed (offset=%d, rep=%d)' % (offset, i)
            if scope.glitch.state != 'idle':
                errors.append(offset)
                #print("Not in idle! offset = %d, rep = %d" % (offset, i))
                scope.glitch.state = None
    assert errors == []


@pytest.mark.parametrize("clock, width, oversamp, steps_per_point, desc", testGlitchOutputOffsetSweepData)
@pytest.mark.skipif(not scope.LA.present, reason='Cannot test glitch without internal logic analyzer. Rebuild FPGA to test.')
def test_glitch_output_sweep_offset(fulltest, reps, clock, width, oversamp, steps_per_point, desc):
    # This doesn't verify the offset itself -- that's covered by test_glitch_offset().
    # What it does verify is:
    # 1. that the offset change as the offset setting is swept;
    # 2. that there are no "double glitches" - by looking at the glitches themselves, but also by looking
    #    at the width of the glitch "go" signal
    # 3. that there are no missing glitches
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock)/scope.clock.adc_freq < 0.01

    margin = 3
    setup_glitch(scope, 0, width, oversamp)
    stepsize = int(scope.glitch.phase_shift_steps / scope.LA.oversampling_factor / steps_per_point)

    for r in range(reps):
        prev_offset = 0
        # sweep offset and check that glitch offset increases by expected amount each time:
        for i, offset in enumerate(range(-scope.glitch.phase_shift_steps, scope.glitch.phase_shift_steps - stepsize, stepsize)):
            scope.glitch.offset = offset
            scope.LA.arm()
            scope.glitch.manual_trigger()
            assert not scope.LA.fifo_empty()
            raw = scope.LA.read_capture_data()
            glitch = scope.LA.extract(raw, 0)
            source = scope.LA.extract(raw, 1)
            go = scope.LA.extract(raw, 4)

            # measure observed offset
            glitchtrans = find0to1trans(glitch)
            sourcetrans = find0to1trans(source)
            assert len(glitchtrans) == 1, "Offset=%d: Expected to find a single glitch but found %d" % (offset, len(glitchtrans))
            g = glitchtrans[0]
            measured_offset = None
            for s in sourcetrans:
                if s > g:
                    measured_offset = s - g
                    break
            assert measured_offset, "Offset=%d: Could not measure offset between source clock and glitch clock" % offset

            golen = len(np.where(go > 0)[0])
            assert abs(golen - oversamp) < oversamp *1.2, "Go width exceeds margin, could lead to extra glitches: %d at offset=%d" % (golen, offset)

            if i > 0:
                # account for full period jump:
                if measured_offset - prev_offset > oversamp/2:
                    prev_offset += oversamp
                # sampling jitter can make us go back and forth a bit:
                elif prev_offset - measured_offset > oversamp/2:
                    prev_offset -= oversamp
                assert prev_offset - measured_offset < margin, "Offset change out of bounds: new offset=%d, previous offset=%d" % (measured_offset, prev_offset)
            prev_offset = measured_offset

    scope.glitch.enabled = False
    scope.LA.enabled = False


@pytest.mark.parametrize("clock, vco, glitches, oversamp, stepsize, desc", testGlitchOutputDoublesData)
@pytest.mark.skipif(not scope.LA.present, reason='Cannot test glitch without internal logic analyzer. Rebuild FPGA to test.')
def test_glitch_output_doubles(fulltest, reps, clock, vco, glitches, oversamp, stepsize, desc):
    # Similar to test_glitch_output_sweep_offset() but only look at the width of glitch "go".
    # Intended to be a more exhaustive test for double glitches, by sweeping with a finer increment.
    # Since double glitches are an MMCM1/offset problem (width has no effect), we save having to check for different widths.
    # Use a higher VCO frequency for finer grain, and reduce LA oversampling since that doesn't matter as much here.
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert scope.clock.adc_freq == clock

    setup_glitch(scope, 0, 0, oversamp)
    scope.clock.fpga_vco_freq = vco
    scope.glitch.repeat = glitches
    failing_offsets = []
    maxwidth = 0

    for r in range(reps):
        # sweep offset and check that glitch offset increases by expected amount each time:
        for i, offset in enumerate(range(-scope.glitch.phase_shift_steps, scope.glitch.phase_shift_steps - stepsize, stepsize)):
            scope.glitch.offset = offset
            scope.LA.arm()
            scope.glitch.manual_trigger()
            assert scope.LA.fifo_empty() == False, "scope.LA didn't capture on iteration %d, offset=%d" % (i, offset)
            raw = scope.LA.read_capture_data()
            go = scope.LA.extract(raw, 4)

            # check width of glitch "go" signal
            golen = len(np.where(go > 0)[0])
            if golen and (abs(golen/glitches - oversamp) > oversamp/4):
                failing_offsets.append(offset)
                if golen > maxwidth:
                    maxwidth = golen

    assert failing_offsets == [], "Max width seen: %d; failing offsets: %s" % (maxwidth, failing_offsets)
    scope.clock.fpga_vco_freq = 600e6
    scope.glitch.enabled = False
    scope.LA.enabled = False



@pytest.mark.parametrize("samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, threshold, seg_size, check, segments, segment_cycles, desc", testTargetData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_target_internal_ramp (fulltest, samples, presamples, testmode, clock, fastreads, adcmul, bits, stream, threshold, seg_size, check, segments, segment_cycles, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = adcmul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock*adcmul)/scope.clock.adc_freq < 0.01
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
    assert target.read() != ''

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
    if scope.adc.samples > 10000000:
        scope.adc.timeout = 5
    if scope.adc.samples > 20000000:
        scope.adc.timeout = 10
    target.flush()
    ret = cw.capture_trace(scope, target, text, key)
    if verbose: print('Words read before error: %d ' % int.from_bytes(scope.sc.sendMessage(0x80, 47, maxResp=4), byteorder='little'))
    if 'overflow' in desc:
        assert 'overflow' in scope.adc.errors
        scope.errors.clear()
        time.sleep(2)
    else:
        raw = np.int64(scope.get_last_trace(True))
        assert scope.adc.errors == False
    if check: 
        errors, first_error = check_ramp(raw, testmode, bits, scope.adc.samples, segment_cycles)
        assert errors == 0, "%d errors; First error: %d" % (errors, first_error)
    scope.sc._fast_fifo_read_enable = True # return to default


@pytest.mark.parametrize("offset, presamples, samples, stream, clock, adcmul, seg_count, segs, segcycs, bits, desc", testSegmentData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_segments (fulltest, offset, presamples, samples, stream, clock, adcmul, seg_count, segs, segcycs, bits, desc):
    # This requires a specific target firmware to work properly:
    # simpleserial-aes where the number of triggers can be set via 'n' commmand.
    # The segcycs value for seg_count=True requires a very specific firmware, otherwise the test is likely to fail.
    # If the firmware changes, you'll need to run this capture in a notebook with segmenting disabled and manually
    # measure the distance between each AES iteration (which should be fairly easy to do visually, and which shouldn't
    # change much from what's here), then update the segcycs input that's provided here.
    funcparams = str(locals())
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    errors = 0
    scope.clock.clkgen_freq =clock
    scope.clock.adc_mul = adcmul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    #assert scope.clock.adc_freq == clock * adcmul
    #target.baud = 38400 * clock / 1e6 / 7.37
    target.baud = 38400

    scope.adc.test_mode = False
    scope.ADS4128.mode = 'normal'

    scope.io.nrst = 0
    time.sleep(0.1)
    scope.io.nrst = 'high_z'
    time.sleep(0.1)

    target.flush()
    target.write('x\n')
    time.sleep(0.2)
    assert target.read() != ''

    scope.trigger.module = 'basic'
    scope.adc.basic_mode = "rising_edge"
    scope.trigger.triggers = "tio4"
    scope.io.tio1 = "serial_rx"
    scope.io.tio2 = "serial_tx"
    scope.io.hs2 = "clkgen"

    scope.adc.bits_per_sample = bits
    scope.adc.samples = samples
    scope.adc.presamples = presamples
    if segs == 'max':
        scope.adc.timeout = 15
        segs = scope.adc.max_segments
    scope.adc.segments = segs
    scope.adc.segment_cycles = segcycs
    scope.adc.segment_cycle_counter_en = seg_count
    scope.adc.offset = offset
    scope.adc.stream_mode = stream
    scope.adc.clip_errors_disabled = False
    scope.adc.lo_gain_errors_disabled = True

    scope.gain.db = 10

    target.set_key(bytearray(16))
    target.simpleserial_write('n', list(int.to_bytes(segs, length=2, byteorder='big')))
    scope.arm()
    target.simpleserial_write('f', bytearray(16))
    ret = scope.capture()
    assert scope.adc.errors == False, scope.adc.errors
    if ret:
        if verbose: print("Timeout.")
        errors += 1
    time.sleep(0.1)
    if not target.is_done():
        if verbose: print("Target did not finish.")
        errors += 1
    wave = scope.get_last_trace()
    assert wave is not None
    r = target.simpleserial_read('r', target.output_len)

    rounds = []
    rounds_off_by_one = []
    for i in range(segs):
        rounds.append(wave[i*samples:(i+1)*samples-1])
        rounds_off_by_one.append(wave[i*samples+1:(i+1)*samples])

    # check for errors two ways: point-by-point difference, and sum of SAD
    for i in range(2, segs):
        if max(abs(rounds[1] - rounds[i])) > max(abs(wave))/1.2:
            #print('Max violation: %f, %f' % (max(abs(rounds[0] - rounds[i])), max(abs(wave))/1.5))
            errors += 1

    # Strategy: SAD between two rounds should be a "small" number. Instead of
    # defining "small", we take the ratio of SAD and SAD with an artificially
    # shifted trace. If this is not a big number, something is wrong.
    ratios = []
    for i in range(1, segs):
        if np.array_equal(rounds[i], rounds[0]) and not np.array_equal(rounds_off_by_one[i], rounds[0]):
            continue
        ratio = np.sum(abs(rounds[i] - rounds[0])) / np.sum(abs(rounds_off_by_one[i] - rounds[0]))
        if ratio < 1:
            ratio = 1/ratio
        ratios.append(ratio)
        if ratio < 3:
            errors += 1
            bad_ratio = ratio

    assert errors == 0, "Ratios = %.40s; errors: %s, params = %s, XADC: %s" % (ratios, scope.adc.errors, funcparams, scope.XADC)
    scope.adc.clip_errors_disabled = True


@pytest.mark.parametrize("raw_capture, interface, trigger_source, desc", testTraceData)
@pytest.mark.skipif(not trace_fw, reason='No target detected or incorrect FW.')
def test_trace (swo_trace, raw_capture, interface, trigger_source, desc):
    # This requires a specific target firmware to work properly:
    # simpleserial-aes where the number of triggers can be set via 's' commmand.
    if not swo_trace:
        pytest.skip("use --swo_trace to run")
        return None
    if test_platform != 'stm32f3':
        pytest.skip("requires stm32 test platform")
        return None
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    setup_trace(interface)
    assert trace.uart_state == 'ERX_IDLE', 'UART is still stuck!'
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.segment_cycle_counter_en = False
    scope.adc.segments = 1
    scope.adc.samples = 300
    trace.capture.max_triggers = 1
    if trigger_source == 'firmware trigger':
        scope.trigger.module = 'basic'
        scope.trigger.triggers = 'tio4'
        scope.trace.capture.mode = 'while_trig'
    else:
        scope.trigger.module = 'trace'
        scope.trace.capture.mode = 'count_cycles'
        scope.trace.capture.count = 30000
    trace.capture.trigger_source = trigger_source
    if raw_capture:
        trace.capture.raw = True
        trace.capture.rules_enabled = []
    else:
        trace.capture.raw = False
        trace.set_pattern_match(0, [3, 8, 32, 0, 0, 0, 0, 0], [255, 255, 255, 0, 0, 0, 0, 0])
    trace.arm_trace()
    powertrace = cw.capture_trace(scope, target, text, key)
    raw = trace.read_capture_data()
    if raw_capture:
        if interface == 'parallel':
            frames = trace.get_raw_trace_packets(raw, removesyncs=True, verbose=False)
            assert False # TODO!
        else:
            frames = trace.get_raw_trace_packets(raw, removesyncs=False, verbose=False)
            assert frames[0][1][:3]  == [3,8,32], "Got unexpected raw data: %s" % frames[0][1][:3]
    else:
        times = trace.get_rule_match_times(raw, rawtimes=False, verbose=False)
        assert len(times) == 21, "Expected 21 events, got %d" % len(times)
        if trigger_source == 0:
            check_times = times[1:]
            lasttime = times[0][0]
        else:
            check_times = times
            lasttime = 0
        for t in check_times:
            delta = t[0] - lasttime
            assert 200 < delta < 600, "Time delta out of range: %d" % delta
            lasttime= t[0]
    trace.enabled = False


@pytest.mark.parametrize("interface, triggers, desc", testTraceSegmentData)
@pytest.mark.skipif(not trace_fw, reason='No target detected or incorrect FW.')
def test_segment_trace (swo_trace, interface, triggers, desc):
    if not swo_trace:
        pytest.skip("use --swo_trace to run")
        return None
    if test_platform != 'stm32f3':
        pytest.skip("requires stm32 test platform")
        return None
    reset_setup(scope,target)
    errors = 0
    scope.default_setup(verbose=False)
    setup_trace(interface)
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.segment_cycle_counter_en = False
    scope.trigger.module = 'trace'
    scope.trace.capture.mode = 'off'
    trace.capture.trigger_source = 0
    trace.capture.raw = False
    trace.capture.max_triggers = triggers
    trace.set_pattern_match(0, [3, 8, 32, 0, 0, 0, 0, 0], [255, 255, 255, 0, 0, 0, 0, 0])
    scope.adc.presamples = 0
    scope.adc.samples = 30
    scope.adc.segments = triggers
    match_count = trace.capture.matched_pattern_counts[0]
    trace.arm_trace()
    powertrace = cw.capture_trace(scope, target, text, key)
    assert len(powertrace.wave) == scope.adc.samples * triggers
    assert trace.capture.triggers_generated == triggers
    assert trace.capture.matched_pattern_data[:6] == '030820'
    trace.enabled = False

@pytest.mark.parametrize("clock, adc_mul, bits, emode, threshold, interval_threshold, offset, reps, desc", testSADTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_sad_trigger (fulltest, clock, adc_mul, bits, emode, threshold, interval_threshold, offset, reps, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if test_platform != 'sam4s':
        pytest.skip("requires sam4s test platform (got tired of tuning SAD parameters for multiple targets)")
        return None
    if not fulltest:
        reps = 3 # go faster
    #reps*=10 # TODO- TEMP! ******************************************************************************************************************
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    if adc_mul == 'max':
        adc_mul = int(MAXCLOCK/clock)
    elif adc_mul == 'over':
        adc_mul = int(OVERCLOCK2/clock)
    scope.clock.adc_mul = adc_mul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock*adc_mul)/scope.clock.adc_freq < 0.01
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
    scope.SAD.multiple_triggers = False

    scope.trigger.module = 'basic'
    # scope.gain.db = 23.7
    scope.gain.db = 22
    reftrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
    assert scope.adc.errors == False, (scope.adc.errors, scope.gain)

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
        assert scope.adc.errors == False, scope.adc.fifo_debug_summary()
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
        #assert sad <= threshold, 'SAD=%d, threshold=%d (iteration: %d)' %(sad, threshold, rep)
        if sad > threshold:
            bad +=1
        else:
            good +=1

    # SAD is probabilistic; trying to reliably get 100% isn't the goal here:
    #print(' %d/%d/%d ' % (good, bad, reps), end='')
    assert bad/reps <= 0.05, 'too many failures! (%d/%d)' % (bad, reps)


@pytest.mark.parametrize("clock, adc_mul, bits, emode, threshold, interval_threshold, segments, offset, reps, desc", testMultipleSADTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_multiple_sad_trigger (fulltest, clock, adc_mul, bits, emode, threshold, interval_threshold, segments, offset, reps, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if test_platform != 'sam4s':
        pytest.skip("requires sam4s test platform (got tired of tuning SAD parameters for multiple targets)")
        return None
    if not fulltest:
        reps = 3 # go faster
    #reps*=10 # TODO- TEMP! ******************************************************************************************************************
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    if adc_mul == 'max':
        adc_mul = int(MAXCLOCK/clock)
    elif adc_mul == 'over':
        adc_mul = int(OVERCLOCK2/clock)
    scope.clock.adc_mul = adc_mul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock*adc_mul)/scope.clock.adc_freq < 0.01
    target.baud = 38400 * clock / 1e6 / 7.37
    reset_target(scope)

    scope.errors.clear()
    scope.trace.enabled = False
    scope.trace.target = None

    scope.SAD.always_armed = False
    scope.SAD.emode = emode
    scope.SAD.multiple_triggers = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.clip_errors_disabled = False
    scope.adc.segment_cycle_counter_en = False
    scope.adc.segments = 1
    scope.adc.samples = scope.SAD.sad_reference_length * 2
    scope.adc.presamples = 0
    scope.adc.bits_per_sample = bits
    scope.adc.offset = offset*adc_mul

    scope.trigger.module = 'basic'
    # scope.gain.db = 23.7
    scope.gain.db = 22
    reftrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
    assert scope.adc.errors == False, (scope.adc.errors, scope.gain)

    scope.SAD.reference = reftrace.wave
    scope.SAD.threshold = threshold
    scope.SAD.interval_threshold = interval_threshold
    scope.trigger.module = 'SAD'
    scope.adc.offset = 0

    # set presamples so that the waveforms line up;
    # + sad_reference_length because trigger happens at the end of the SAD pattern;
    # + latency for the latency of the SAD triggering logic.
    scope.adc.presamples = scope.SAD.sad_reference_length + scope.SAD.latency
    scope.adc.segments = segments
    scope.adc.samples -= scope.adc.samples %3
    bad = 0
    for r in range(reps):
        sadtrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
        #assert sadtrace is not None, 'SAD-triggered capture failed on rep {}'.format(r)
        #assert abs(scope.SAD.num_triggers_seen - scope.adc.segments) <= 2
        if sadtrace is None or scope.SAD.num_triggers_seen != scope.adc.segments:
            bad += 1
            continue
        assert scope.adc.errors == False
        for s in range(scope.adc.segments):
            sad = 0
            samples = 0
            for ref,strace,e in zip(reftrace.wave.astype(int), sadtrace.wave.astype(int), scope.SAD.enabled_samples):
                samples += 1
                if bits == 12:
                    strace = strace >> 4
                    ref = ref >> 4
                if e:
                    if abs(ref-strace) > interval_threshold:
                        sad += 1
            #assert sad <= threshold, 'SAD=%d, threshold=%d (iteration: %d)' %(sad, threshold, rep)
            if sad > threshold:
                bad +=1
                break

    # SAD is probabilistic; trying to reliably get 100% isn't the goal here:
    #print(' %d/%d ' % (bad, reps), end='')
    assert bad/reps <= 0.05, 'too many failures! (%d/%d) note- these SAD parameters are tuned to pre-production CW313!' % (bad, reps)


@pytest.mark.parametrize("clock, adc_mul, bits, presamp_range, presamples_step, offset, reps, threshold, desc", testPresamplesData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_presamples (fulltest, clock, adc_mul, bits, presamp_range, presamples_step, offset, reps, threshold, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    if adc_mul == 'max':
        adc_mul = int(MAXCLOCK/clock)
    elif adc_mul == 'over':
        adc_mul = int(OVERCLOCK2/clock)
    scope.clock.adc_mul = adc_mul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock*adc_mul)/scope.clock.adc_freq < 0.01
    target.baud = 38400 * clock / 1e6 / 7.37
    reset_target(scope)

    scope.adc.stream_mode = False
    scope.errors.clear()
    scope.trace.enabled = False
    scope.trace.target = None

    scope.adc.lo_gain_errors_disabled = True
    scope.adc.clip_errors_disabled = True
    scope.adc.segment_cycle_counter_en = False

    scope.adc.bits_per_sample = bits
    if presamp_range == 'max':
        presamples_max = scope.adc.max_presamples
        presamples_min = presamples_max - 20
    else:
        presamples_max = presamp_range[1]
        presamples_min = presamp_range[0]
    scope.adc.segments = 1
    scope.adc.samples = presamples_max*2
    scope.adc.offset = offset

    scope.trigger.module = 'basic'
    scope.gain.db = 22
    scope.adc.presamples = 0

    # We make the target operation longer than our capture to avoid capturing
    # jittery UART traffic noise that could throw off our SAD scores.
    target.set_key(bytearray(16))
    target.simpleserial_write('n', list(int.to_bytes(20, length=2, byteorder='big')))
    reftrace = capture_trace(lambda: target_go(), as_int=True)
    # verify our target operation length requirement:
    assert scope.adc.trig_count >= scope.adc.samples
    # We only care about over/underlow and presample errors.
    # There *will* be segmenting errors because the target fires multiple triggers
    # during our capture.
    assert 'overflow' not in scope.adc.errors, scope.adc.errors
    assert 'underflow' not in scope.adc.errors, scope.adc.errors
    assert 'presample' not in scope.adc.errors, scope.adc.errors

    max_sad = 0
    for presamples in range(presamples_min, presamples_max+1, presamples_step):
        scope.adc.presamples = presamples
        scope.adc.samples = presamples + presamples_max
        for i in range(reps):
            target.set_key(bytearray(16))
            target.simpleserial_write('n', list(int.to_bytes(20, length=2, byteorder='big')))
            trace = capture_trace(lambda: target_go(), as_int=True)
            assert trace is not None, 'Capture failed (presamples=%d)' % presamples
            # see scope.adc.errors notes above
            assert 'overflow' not in scope.adc.errors, scope.adc.errors
            assert 'underflow' not in scope.adc.errors, scope.adc.errors
            assert 'presample' not in scope.adc.errors, scope.adc.errors
            # compute SW SAD:
            sad = 0
            for r,s in zip(reftrace[:presamples_max].astype(int), trace[presamples:].astype(int)):
                sad += abs(r-s)
            assert sad <= threshold, 'SAD=%d, threshold=%d, presamples=%d, rep %d' % (sad, threshold, presamples, i)
            if sad > max_sad:
                max_sad = sad
            #print('SAD: %d' % sad)
    #print('max SAD: %d' % max_sad)


def target_go():
    target.simpleserial_write('f', bytearray(16))
    target.simpleserial_read('r', 16)


@pytest.mark.parametrize("clock, adc_mul, bits, presamp_range, presamples_step, offset, reps, threshold, desc", testPresamplesCaptureData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_presamples_capture (fulltest, clock, adc_mul, bits, presamp_range, presamples_step, offset, reps, threshold, desc):
    # while test_presamples() above uses SW SAD to check whether the captured trace shifts as expected along with
    # the presamples setting, here we simply check whether the capture is successful; meant to validate the presamples limit,
    # all that we care about here is that there be no FIFO errors
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.clock.clkgen_freq = clock
    if adc_mul == 'max':
        adc_mul = int(MAXCLOCK/clock)
    elif adc_mul == 'over':
        adc_mul = int(OVERCLOCK2/clock)
    scope.clock.adc_mul = adc_mul
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock*adc_mul)/scope.clock.adc_freq < 0.01
    target.baud = 38400 * clock / 1e6 / 7.37
    reset_target(scope)

    scope.adc.stream_mode = False
    scope.errors.clear()
    scope.trace.enabled = False
    scope.trace.target = None

    scope.adc.lo_gain_errors_disabled = True
    scope.adc.clip_errors_disabled = True
    scope.adc.segment_cycle_counter_en = False

    scope.adc.bits_per_sample = bits
    if presamp_range == 'max':
        presamples_max = scope.adc.max_presamples
        presamples_min = presamples_max - 20
    else:
        presamples_max = presamp_range[1]
        presamples_min = presamp_range[0]
    scope.adc.segments = 1

    scope.trigger.module = 'basic'
    scope.gain.db = 22
    scope.adc.presamples = 0
    for presamples in range(presamples_min, presamples_max+1, presamples_step):
        scope.adc.samples = presamples*2 # to prevent inadvertent out-of-order error
        scope.adc.presamples = presamples
        for i in range(reps):
            scope.adc.samples = random.randrange(presamples, presamples + 20)
            scope.adc.offset = random.randrange(0, 10)
            trace = cw.capture_trace(scope, target, bytearray(16), bytearray(16), as_int=True)
            assert trace is not None, 'Capture failed (presamples=%d, samples=%d, offset=%d)' % (presamples, scope.adc.samples, offset)
            assert scope.adc.errors == False


@pytest.mark.parametrize("clock, pin, pattern, mask, bytes_compared, reps, desc", testUARTTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_uart_trigger (fulltest, clock, pin, pattern, mask, bytes_compared, reps, desc):
    if not fulltest:
        reps = 2 # reduce number of reps to speed up
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    scope.clock.clkgen_freq = clock
    scope.clock.adc_mul = 1
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    assert abs(scope.clock.adc_freq - clock)/scope.clock.adc_freq < 0.01
    reset_target(scope)
    time.sleep(0.1)
    target.baud = 38400 * clock / 1e6 / 7.37

    scope.gain.db = 10
    scope.adc.clip_errors_disabled = False
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.segment_cycle_counter_en = False
    scope.adc.segments = 1
    scope.adc.samples = 128
    scope.adc.presamples = 0

    scope.trigger.module = 'UART'
    scope.trigger.triggers = pin
    scope.UARTTrigger._uart_reset()
    assert scope.UARTTrigger.uart_state == 'ERX_IDLE', 'UART is still stuck!'
    scope.UARTTrigger.enabled = True
    scope.UARTTrigger.baud = target.baud
    scope.UARTTrigger.set_pattern_match(0, pattern, mask)
    scope.UARTTrigger.trigger_source = 0

    for i in range(reps):
        start_count = scope.UARTTrigger.matched_pattern_counts[0]
        powertrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
        assert powertrace is not None, 'UART-triggered capture failed'
        if pin == 'tio1':
            ss_comm = target.simpleserial_last_read
        elif pin == 'tio2':
            ss_comm = target.simpleserial_last_sent
        else:
            raise ValueError('Not supported: please trigger from tio1 or tio2')
        # we don't check the power trace itself (e.g. measure SAD against a tio4-triggered capture with the correct offset), but we check
        # several other things which indirectly tell us that the UART-triggered capture worked:
        assert pattern[:bytes_compared] in ss_comm, "Target last read (%s) doesn't contain pattern (%s)" % (ss_comm, pattern)
        pattern_start = scope.UARTTrigger.pattern_size - len(pattern)
        #pattern_stop = max(pattern_start + bytes_compared, 8)
        pattern_stop = min(pattern_start + bytes_compared, 8)
        assert scope.UARTTrigger.matched_pattern_data()[pattern_start:pattern_stop] == pattern[:bytes_compared], "matched_pattern_data (%s) doesn't match pattern (%s)" % (scope.UARTTrigger.matched_pattern_data(), pattern)
        assert scope.UARTTrigger.matched_pattern_counts[0] == (start_count + 1) % 256, "Match count didn't increase by 1"


@pytest.mark.parametrize("gain, threshold, bits, reps, desc", testADCTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_adc_trigger (fulltest, gain, threshold, bits, reps, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
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
        scope.trigger.level = threshold * max(reftrace.wave)
        #print(scope.trigger.level)
        powertrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
        assert powertrace is not None, 'ADC-triggered capture (max) failed'
        # 1. trigger on positive swing:
        scope.trigger.level = threshold * min(reftrace.wave)
        #print(scope.trigger.level)
        powertrace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
        assert powertrace is not None, 'ADC-triggered capture (min) failed'


@pytest.mark.parametrize("pin, edges, oversamp, check, reps, desc", testEdgeTriggerData)
@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_edge_trigger (fulltest, pin, edges, oversamp, check, reps, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    reset_target(scope)
    time.sleep(0.1)
    target.baud = 38400
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.trigger.module = 'edge_counter'
    scope.trigger.triggers = pin
    scope.trigger.edges = edges

    for i in range(reps):
        if check:
            # Use scope.LA to check that the trigger occurs when it should.
            # We can only do this when # edges is small (when it's too big,
            # scope.LA's storage isn't deep enough to capture everything)
            scope.LA.enabled = True
            scope.LA.clk_source = 'pll'
            scope.LA.oversampling_factor = oversamp
            scope.LA.downsample = 1
            scope.LA.capture_group = 'CW 20-pin'
            scope.LA.trigger_source = 'falling_' + pin
            scope.LA.capture_depth = 16000
            scope.io.glitch_trig_mcx = 'trigger'
            scope.LA.arm()
            trace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
            #print(scope)
            assert not scope.LA.fifo_empty()
            raw = scope.LA.read_capture_data()
            tio1 = scope.LA.extract(raw, 0)
            tio2 = scope.LA.extract(raw, 1)
            trig = scope.LA.extract(raw, 7)
            if pin == 'tio1':
                input_edges = find_edges(tio1)
            elif pin == 'tio2':
                input_edges = find_edges(tio2)
            else:
                raise ValueError('unsupported pin')
            trig_edges = find_edges(trig)
            assert len(input_edges)+1 >= edges, "Couldn't observe enough edges!"
            assert abs(trig_edges[0] - oversamp - input_edges[edges-2]) < oversamp, "Rep %d: Trigger not where expected! input_edges=%s, trig_edges=%s" % (i, input_edges, trig_edges)

        else:
            # otherwise, we just check for a successful capture
            trace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
            assert trace is not None, 'Capture failed. Observed %d edges' % scope.trigger.edges_seen

@pytest.mark.parametrize("pins, max_edges, reps, desc", testUserioEdgeTriggerData)
def test_userio_edge_triggers(fulltest, pins, max_edges, reps, desc):
    # This tests triggering from USERIO pins and also further tests edge triggering.
    # Note that there would be nothing to gain from also testing with scope.trigger.mode = 'normal'
    # since the logic controlling the input to the trigger module doesn't care about the mode.
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    time.sleep(0.1)
    scope.trigger.module = 'edge_counter'
    scope.userio.mode = 'normal'
    scope.userio.direction = 0
    # only drive the pins that we'll be using:
    for pin in pins:
        scope.userio.direction += 2**pin
    for rep in range(reps):
        for userio_pin in (pins):
            scope.trigger.triggers = 'userio_d' + str(userio_pin)
            edges = random.randrange(1, max_edges+1)
            scope.trigger.edges = edges
            scope.userio.drive_data = random.randrange(0, 0x100)
            edges_applied = 0
            assert not armed(scope)
            scope.arm()
            while (edges_applied < edges):
                new_value = random.randrange(0, 0x100)
                if (new_value & 2**userio_pin) != (scope.userio.status & 2**userio_pin):
                    edges_applied += 1
                scope.userio.drive_data = new_value
                if edges_applied < edges:
                    assert armed(scope), "Pin %d, rep %d: scope disarmed after only %d edges! This should not have happened until %d edges." % (userio_pin, rep, edges_applied, edges)
            assert not armed(scope), "Pin %d, rep %d: scope is still armed after all edges have been applied." % (userio_pin, rep)


@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_glitch_modes (fulltest, reps):
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    scope.reset_fpga()
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    reset_target(scope)
    time.sleep(0.1)
    target.baud = 38400
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.glitch.enabled = True
    scope.glitch.clk_src = 'pll'
    scope.glitch.state = None
    scope.glitch.output = 'clock_xor'
    scope.glitch.repeat = 1
    scope.LA.enabled = True
    scope.LA.oversampling_factor = 4
    scope.LA.downsample = 1
    scope.LA.capture_group = 'glitch'
    scope.LA.trigger_source = "glitch"
    for i in range(reps):
        capture_depth = 1000000
        while capture_depth > scope.LA.max_capture_depth:
            randomize_glitches()
            capture_depth = scope.glitch.num_glitches * scope.LA.oversampling_factor * max(scope.glitch.ext_offset) * 2
        scope.LA.capture_depth = capture_depth
        scope.glitch.trigger_src = 'ext_single'
        glitch_single(trigger=True, expected=True)
        glitch_single(trigger=False, expected=False)

        scope.glitch.trigger_src = 'ext_continuous'
        glitch_single(trigger=False, expected=True)
        glitch_single(trigger=True, expected=True)
        glitch_single(trigger=False, expected=True)

        scope.glitch.trigger_src = 'ext_single'
        glitch_single(trigger=True, expected=True)

        glitch_manual()

        scope.glitch.trigger_src = 'ext_single'
        glitch_single(trigger=True, expected=True)

        glitch_continuous()


def randomize_glitches():
    scope.glitch.num_glitches = random.randrange(2, 32)
    offsets = []
    repeats = []
    repeat = 0
    for i in range(scope.glitch.num_glitches):
        offset = random.randrange(repeat, 100)
        repeat = random.randrange(1, 90)
        offsets.append(offset)
        repeats.append(repeat)
        scope.glitch.ext_offset = offsets
        scope.glitch.repeat = repeats
        scope.glitch.output = 'enable_only'

def glitch_single(trigger=True, expected=True):
    assert scope.glitch.state == 'idle'
    scope.LA.trigger_source = "glitch"
    scope.LA.arm()
    if trigger:
        trace = cw.capture_trace(scope, target, bytearray(16), bytearray(16))
    else:
        target.simpleserial_write('p', bytearray(16))
    time.sleep(0.1)
    if expected:
        assert not scope.LA.fifo_empty()
        raw = scope.LA.read_capture_data()
        glitchenable = scope.LA.extract(raw, 6)
        slack = scope.glitch.num_glitches * scope.LA.oversampling_factor * 2
        expected = scope.LA.oversampling_factor * (sum(scope.glitch.repeat) + scope.glitch.num_glitches)
        actual = len(np.where(glitchenable != 0)[0])
        assert (expected-slack) < actual < (expected+slack), "actual=%d, expected=%d, slack=%d" % (actual, expected, slack)
    else:
        assert scope.LA.fifo_empty()
        scope.LA.trigger_now()
        raw = scope.LA.read_capture_data()
        glitchenable = scope.LA.extract(raw, 6)
        assert len(np.where(glitchenable != 0)[0]) == 0

def glitch_manual():
    assert scope.glitch.state == 'idle'
    scope.glitch.trigger_src = 'manual'
    scope.LA.trigger_source = "glitch"
    scope.LA.arm()
    scope.glitch.manual_trigger()
    time.sleep(0.1)
    assert not scope.LA.fifo_empty()
    raw = scope.LA.read_capture_data()
    glitchenable = scope.LA.extract(raw, 6)
    slack = scope.LA.oversampling_factor * 2
    expected = scope.LA.oversampling_factor * scope.glitch.repeat[0]
    actual = len(np.where(glitchenable != 0)[0])
    assert (expected-slack) < actual < (expected+slack), "actual=%d, expected=%d, slack=%d" % (actual, expected, slack)

def glitch_continuous():
    # let's be sure we don't fry a live target!
    # to be extra safe, don't run any assertions until continuous mode is turned off
    scope.io.glitch_lp = False
    scope.io.glitch_hp = False
    assert scope.glitch.state == 'idle'
    errors = 0
    scope.LA.trigger_source = "capture" # not sure why this is needed...
    scope.glitch.trigger_src = 'continuous'
    scope.LA.arm()
    scope.LA.trigger_now()
    time.sleep(0.1)
    if scope.LA.fifo_empty():
        errors += 1
    raw = scope.LA.read_capture_data()
    glitchenable = scope.LA.extract(raw, 6)
    if len(np.where(glitchenable != 1)[0]):
        errors += 1

    scope.glitch.trigger_src = 'manual'
    scope.LA.arm()
    scope.LA.trigger_now()
    time.sleep(0.1)
    if scope.LA.fifo_empty():
        errors += 1
    raw = scope.LA.read_capture_data()
    glitchenable = scope.LA.extract(raw, 6)
    if len(np.where(glitchenable != 0)[0]):
        errors += 1
        print("WARNING: crowbar still active, make sure target is ok")
    assert errors == 0

@pytest.mark.parametrize("module, pattern, reps, desc", testGlitchTriggerData)
#@pytest.mark.skipif(not target_attached, reason='No target detected')
def test_glitch_trigger(fulltest, module, pattern, reps, desc):
    if not fulltest:
        pytest.skip("use --fulltest to run")
        return None
    scope.reset_fpga()
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    time.sleep(0.1)
    assert scope.clock.pll.pll_locked == True
    scope.glitch.enabled = True
    scope.glitch.clk_src = 'pll'
    scope.glitch.output = "enable_only"
    scope.glitch.trigger_src = 'ext_single'
    scope.glitch.repeat = 10
    scope.glitch.ext_offset = 0

    scope.io.glitch_lp = False
    scope.io.glitch_hp = False
    scope.io.hs2 = 'glitch'

    scope.LA.enabled = True
    scope.LA.oversampling_factor = 20
    scope.LA.downsample = 1
    scope.LA.capture_group = 'glitch debug'
    scope.LA.trigger_source = "trigger_glitch"
    scope.LA.capture_depth = 500

    scope.trigger.module = module
    scope.trigger.triggers = 'nrst'
    scope.trigger.edges = 4
    scope.adc.basic_mode = 'rising_edge'
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True

    scope.io.nrst = False
    slack = scope.LA.oversampling_factor
    expected_edges = [104, 304]

    for i in range(reps):
        scope.LA.arm()
        scope.arm()
        for j in pattern:
            scope.io.nrst = j
        scope.capture()

        assert not scope.LA.fifo_empty(), "LA capture failed"
        raw = scope.LA.read_capture_data()
        hs2 = scope.LA.extract(raw, 8)
        edges = find_edges(hs2)
        assert len(edges) == 2, 'Expected 2 glitch edges, got %d' % len(edges)
        assert not (1 in hs2[:edges[0]+1]), 'unexpected early glitch edge'
        for i in range(2):
            assert abs(edges[i] - expected_edges[i]) < slack, 'edge #%d expected near %d, found at %d' % (i+1, expected_edges[i], edges[i])


@pytest.mark.parametrize("freq, adc_mul, xtal, oversample, tolerance, reps, desc", testPLLData)
def test_pll(fulltest, freq, adc_mul, xtal, oversample, tolerance, reps, desc):
    # This test is meant to check that the relative phase between the target clock and the
    # ADC sampling clock is deterministic, i.e. for the same clock settings, the relative
    # phase will always come up the same. This test was added when it was discovered that
    # when the CDCI6214 reference divider is set to 0.5, the phase is *not* deterministic!
    # There are a bunch of asserts that can lead to the test failing (nostly around LA capture)
    # but all we're really concered about here is that for a given set of test parameters,
    # the relative phase between the ADC and target clocks is constant.
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if not fulltest:
        reps = 10 # reduce number of reps to speed up
    if not xtal and test_platform != 'cw305':
        pytest.skip("requires cw305 test platform")
        return None
    scope.reset_fpga()
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    if xtal:
        scope.io.hs2 = 'clkgen'
    else:
        scope.io.hs2 = 'disabled'
    # initial clock setup so that LA can lock:
    if xtal:
        scope.clock.clkgen_src = 'system'
        scope.clock.adc_mul = 1
        scope.clock.clkgen_freq = freq
        scope.clock.adc_mul = adc_mul
    else:
        target.pll.pll_enable_set(True)
        target.pll.pll_outenable_set(False, 0)
        target.pll.pll_outenable_set(True, 1)
        target.pll.pll_outenable_set(False, 2)
        target.pll.pll_outfreq_set(freq, 1)
        scope.clock.adc_mul = 1
        scope.clock.clkgen_freq = freq
        scope.clock.adc_mul = adc_mul
        scope.clock.clkgen_src = 'extclk'
    # LA setup:
    scope.LA.enabled = True
    if xtal:
        scope.LA.clk_source = 'pll'
    else:
        scope.LA.clk_source = 'target'
    scope.LA.oversampling_factor = oversample
    scope.LA.capture_group = 'CW 20-pin'
    scope.LA.capture_depth = 100
    assert scope.LA.locked
    # measure phase; due to propagation delays it tends to depend with the test parameters,
    # so we measure it once and take that as the golden measurement against which we'll test:
    scope.clock.reset_adc()
    assert scope.clock.pll.pll_locked
    if xtal:
        refclk = 'hs2'
    else:
        refclk = 'target'
    exp_phase = get_adc_clock_phase(refclk)
    half_period = oversample//adc_mul//2
    if exp_phase > half_period:
        exp_phase -= half_period*2
    for i in range(reps):
        for op in ['recal', 'reset']:
            if op == 'recal':
                scope.clock.recal_pll()
            else:
                scope.clock.reset_adc()
            time.sleep(0.5)
            assert scope.clock.pll.pll_locked, 'failed on rep %d' % i
            assert scope.LA.locked, 'failed on rep %d' % i
            delta = get_adc_clock_phase(refclk)
            half_period = oversample//adc_mul//2
            if delta > half_period:
                delta -= 2*half_period
            if abs(delta - exp_phase) >= oversample//adc_mul//2 + tolerance:
                # this is the real error that we're testing for:
                assert False, 'Uh-oh, looks like a 180 degree phase shift! exp_phase=%d, delta=%d, op=%s, iteration=%d' % (exp_phase, delta, op, i)
            assert abs(delta - exp_phase) <= tolerance, 'Got unexpected delta %d with %s on iteration %d' % (delta, op, i)


def get_adc_clock_phase(refclk='target'):
    done = False
    count = 0
    while not done and count < 30:
        scope.LA.arm()
        scope.LA.trigger_now()
        raw = scope.LA.read_capture_data()
        adcclock = scope.LA.extract(raw, 8)
        if refclk == 'target':
            refclock = scope.LA.extract(raw, 4)
        elif refclk == 'hs2':
            refclock = scope.LA.extract(raw, 5)
        ref_edge = find0to1trans(refclock)[0]
        assert ref_edge < scope.LA.capture_depth - 30, 'got late ref_edge: %d' % ref_edge
        try:
            adc_ref_delta = find0to1trans(adcclock[ref_edge:])[0]
            done = True
        except:
            # not sure why but sometimes the ADC clock comes back all zeros; could be an issue with the PLL or with the LA?
            # what's very strange is that this doesn't happen often, but when it does, adcclock is always all zeros, and 
            # the capture is re-attempted exactly 19 times before it's successful!
            if all(c == 0 for c in adcclock):
                adcclock = 'all zeros'
            print('could not find delta; ref_edge=%3d, lock status=%s; adcclock=%s; trying again' % (ref_edge, scope.clock.pll.pll_locked, adcclock))
            assert scope.LA.locked
            assert scope.clock.pll.pll_locked
            time.sleep(0.5)
            count += 1
    return adc_ref_delta


@pytest.mark.parametrize("clock, glitches, desc", testManualGlitchCountData)
def test_manual_glitch_counter(fulltest, clock, glitches, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if clock == 'max':
        clock = MAXCLOCK
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    glitch_count_setup(clock)

    scope.glitch.num_glitches = 1
    scope.glitch.trigger_src = 'manual'
    assert scope.glitch.mmcm_locked

    for _ in range(glitches):
        check_xadc() # practice has shown that this is the good place to do this check
        scope.glitch.manual_trigger()
    assert scope.glitch.actual_num_glitches == glitches

    scope.glitch.reset_glitch_counter()
    assert scope.glitch.actual_num_glitches == 0


@pytest.mark.parametrize("clock, glitches, desc", testTriggeredGlitchCountData)
def test_triggered_glitch_counter(fulltest, clock, glitches, desc):
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if clock == 'max':
        clock = MAXCLOCK
    reset_setup(scope,target)
    scope.default_setup(verbose=False)
    glitch_count_setup(clock)

    scope.glitch.num_glitches = 1
    assert scope.glitch.mmcm_locked

    glitch_counter_setup_useriod7()
    for r in range(glitches):
        check_xadc() # practice has shown that this is the good place to do this check
        t = capture_trace(lambda: toggle_userio_d7())
        assert t is not None, 'capture failed (rep %d)' % r
    assert scope.glitch.actual_num_glitches == glitches
    scope.glitch.reset_glitch_counter()


@pytest.mark.parametrize("clock, reps, step_size, desc", testGlitchCountPhasesData)
def test_glitch_counter_phases(fulltest, clock, reps, step_size, desc):
    scope.userio.mode = 'normal'
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if clock == 'max':
        clock = MAXCLOCK
    glitch_count_setup(clock)
    scope.glitch.reset_glitch_counter()
    glitch_counter_setup_useriod7()
    for i,offset in enumerate(range(0, scope.glitch.phase_shift_steps, step_size)):
        scope.glitch.reset_glitch_counter()
        for r in range(reps):
            check_xadc() # practice has shown that this is the good place to do this check
            scope.glitch.offset = offset
            t = capture_trace(lambda: toggle_userio_d7())
            if scope.glitch.actual_num_glitches != r+1:
                print('uh-oh, bad count!')
            assert t is not None, 'capture failed (rep %d)' % r
        assert scope.glitch.actual_num_glitches == reps, 'ERROR on rep=%d, offset=%d: got %d glitches (expected %d)' % (r, offset, scope.glitch.actual_num_glitches, reps)

def glitch_counter_setup_useriod7():
    # using USERIO D7 because nothing should be connected to it (no contention from target), but let's test that:
    scope.userio.pins[7].direction = 'output'
    drive = 0
    for _ in range(10):
        scope.userio.pins[7].drive_data = drive
        assert scope.userio.pins[7].status == drive, 'Not reading back what we drive on USERIO D7, is there contention? This test needs USERIO D7 to not be externally driven.'
        drive = not drive
    scope.userio.pins[7].drive_data = 0
    scope.trigger.triggers = 'userio_d7'


def toggle_userio_d7():
    scope.userio.pins[7].drive_data = 1
    scope.userio.pins[7].drive_data = 0


@pytest.mark.parametrize("clock_stop, clock_step, steps, captures, desc", testAsyncTriggerData)
def test_async_trigger(fulltest, clock_stop, clock_step, steps, captures, desc):
    # covers https://github.com/newaetech/chipwhisperer/issues/584
    if not fulltest and 'SLOW' in desc:
        pytest.skip("use --fulltest to run")
        return None
    if clock_stop == 'max':
        clock_stop = MAXCLOCK
    steps -= 1
    clock_start = clock_stop - clock_step * steps
    scope.adc.disable_clip_and_lo_gain_errors(True)
    scope.trigger.module = 'basic'
    scope.trigger.triggers = 'userio_d7'
    scope.adc.timeout = 0.1
    scope.clock.adc_mul = 1
    scope.userio.mode = 'normal'
    scope.userio.pins[7].direction = 'output'
    for clock in range(int(clock_start), int(clock_stop+clock_step), int(clock_step)):
        hits = 0
        misses = 0
        scope.clock.clkgen_freq = clock
        time.sleep(0.1)
        #print('Running %d...' % clock)
        for c in range(captures):
            trace = capture_trace(lambda: toggle_userio_d7())
            if trace is None:
                #print('.', end='')
                misses += 1
                assert False
            else:
                hits += 1
        assert misses == 0, '%d hits, %d misses' % (hits, misses)


def capture_trace(sendcommand, as_int=False):
    scope.arm()
    sendcommand()
    ret = scope.capture()
    if ret:
        print("WARNING: Timeout happened during capture")
        return None
    wave = scope.get_last_trace(as_int=as_int)
    return wave

def glitch_count_setup(clock):
    scope.clock.adc_mul = 1
    scope.clock.clkgen_src = 'system'
    scope.clock.clkgen_freq = clock
    scope.glitch.enabled = True
    scope.glitch.num_glitches = 1
    scope.glitch.clk_src = 'pll'
    scope.glitch.trigger_src = 'ext_single'
    scope.glitch.ext_offset = 0
    scope.glitch.repeat = 1
    scope.glitch.output = 'enable_only'
    scope.io.glitch_hp = False
    scope.io.glitch_lp = False
    scope.io.glitch_trig_mcx = 'glitch'
    scope.trigger.module = 'basic'
    scope.adc.clip_errors_disabled = True
    scope.adc.lo_gain_errors_disabled = True
    scope.adc.samples = 100
    scope.adc.timeout = 0.1

def check_xadc():
    if scope.XADC.status != 'good':
        print(' XADC errors, pausing to cool down...', end='')
        oldclock = scope.clock.clkgen_freq
        scope.clock.clkgen_freq = 5e6
        scope.glitch.enabled = False
        while scope.XADC.status != 'good':
            scope.errors.clear()
            time.sleep(5)
            print('.', end='')
        print(' ok!')
        scope.clock.clkgen_freq = oldclock
        scope.glitch.enabled = True


def test_xadc():
    common_xadc_check(scope)

def test_finish():
    # just restore some defaults:
    scope.default_setup(verbose=False)



