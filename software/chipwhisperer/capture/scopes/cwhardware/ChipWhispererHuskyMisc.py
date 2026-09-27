#!/usr/bin/python
# -*- coding: utf-8 -*-
#
# Copyright (c) 2021-2025, NewAE Technology Inc
# All rights reserved.
#
# Authors: Jean-Pierre Thibault
#
# Find this and more at newae.com - this file is part of the chipwhisperer
# project, https://github.com/newaetech/chipwhisperer
#
#    This file is part of chipwhisperer.
#
#    chipwhisperer is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    chipwhisperer is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU Lesser General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with chipwhisperer.  If not, see <http://www.gnu.org/licenses/>.
#=================================================
from ....common.utils import util
from ...api.cwcommon import ChipWhispererSAMErrors
from .. import _OpenADCInterface as OAI

from ....logging import *
import numpy as np
import time
import datetime

CODE_READ = 0x80
CODE_WRITE = 0xC0

class XilinxDRP(util.DisableNewAttr):
    ''' Read/write methods for DRP port in Xilinx primitives such as MMCM and XADC.
        Husky only.
        Talks to something like reg_mmcm_drp.v.
    '''
    _name = 'Xilinx DRP Access'
    def __init__(self, oaiface : OAI.OpenADCInterface, data_address, address_address, reset_address = None):
        super().__init__()
        self.oa = oaiface
        self.data = data_address
        self.addr = address_address
        self.reset_address = reset_address
        self.disable_newattr()

    def write(self, addr, data):
        """Write DRP register. UG480 for register definitions.

        Args:
            addr (int): 6-bit address
            data (int): 16-bit write data
        """
        self.oa.sendMessage(CODE_WRITE, self.data, [data  & 0xff, data >> 8])
        self.oa.sendMessage(CODE_WRITE, self.addr, [addr + 0x80])

    def read(self, addr):
        """Read DRP register. UG480 for register definitions.

        Args:
            addr (int): 6-bit address

        Returns:
            A 16-bit integer.
        """
        self.oa.sendMessage(CODE_WRITE, self.addr, [addr])
        raw = self.oa.sendMessage(CODE_READ, self.data, maxResp=2)
        return int.from_bytes(raw, byteorder='little')

    def reset(self):
        """Pulse reset to associated IP block (intended for MMCM blocks, which
        need to be reset when their M/D parameters are updated).
        """
        if self.reset_address is None:
            raise ValueError("Reset not defined for this DRP interface")
        self.oa.sendMessage(CODE_WRITE, self.reset_address, [1])
        self.oa.sendMessage(CODE_WRITE, self.reset_address, [0])



class XilinxMMCMDRP(util.DisableNewAttr):
    ''' Methods for dynamically programming Xilinx MMCM/PLL via its DRP.
    Husky only.
    References: XAPP888, UG472.
    Not intended to be directly accessed by user; access should be via the
    parent object instead.
    '''
    _name = 'Xilinx MMCM DRP'

    def __init__(self, drp, max_freq=200e6, vco_min=600e6, vco_max=1200e6, fin_min=10e6, fin_max=800e6, fout_min=4.69e6, fout_max=800e6):
        super().__init__()
        self.drp = drp
        self._warning_frequency = max_freq
        # Note: for Husky's FPGA, VCO range is 600-1200 MHz for MMCMs, 800-1600 MHz for PLLs
        self.vco_min = vco_min
        self.vco_max = vco_max

        # For Husky's Artix7 FPGA, these limits are specified in DS181. They are not the same for MMCMs and PLLs; default values are for MMCMs.
        self.fin_min = fin_min
        self.fin_max = fin_max
        self.fout_min = fout_min
        self.fout_max = fout_max

        self.mul_range = list(range(2, 127))
        self.div_range = list(range(1, 112))
        self.sec_div_range = list(range(1, 127))
        self.sec_div_range.append(1)
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['main_div'] = self.main_div
        rtn['sec_div'] = self.sec_div
        rtn['mul'] = self.mul
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    @property
    def main_div(self):
        """MMMC/PLL main divider value.
        To make changes, it's recommended to use the parent object.
        If you know what you're doing, it's also possible to use :class:`set_freqs`.
        If you *really* know what you're doing and have read Xilinx UG472 and
        XAPP888 you can change this parameter via
        :class:`set_main_div`.
        """
        return self.get_main_div()

    @property
    def sec_div(self):
        """MMMC/PLL secondary divider values.
        To make changes, it's recommended to use the parent object.
        If you know what you're doing, it's also possible to use :class:`set_freqs`.
        If you *really* know what you're doing and have read Xilinx UG472 and
        XAPP888 you can change this parameter via
        :class:`set_sec_div`.
        """
        divs = []
        for c in range(6):
            divs.append(self.get_sec_div(c))
        return divs

    @property
    def mul(self):
        """MMMC/PLL multiplier value.
        To make changes, it's recommended to use the parent object.
        If you know what you're doing, it's also possible to use :class:`set_freqs`.
        If you *really* know what you're doing and have read Xilinx UG472 and
        XAPP888 you can change this parameter via
        :class:`set_mul`.
        """
        return self.get_mul()


    def set_freqs(self, ifreq, ofreqs, threshold=0.01):
        """Calculate Multiply & Divide settings based on input frequency.
        Computing a closest match for multiple arbitrary frequencies is not straightforward, and "closest match"
        may not be what the user wants anyways. So we first pick all the settings that get us closest to the first
        clock frequency. We then move onto the next clock, and so on.
        User can always manually specify PLL settings to get a different outcome.

        Args:
            ifreq (int or float): PLL input clock frequency in Hz
            ofreqs (list): requested output clock frequencies in Hz

        Returns:
            Achieved output clock frequencies in Hz (list).

        """
        using_bests = False
        bests = []
        if ifreq < self.fin_min or ifreq > self.fin_max:
            scope_logger.warning('PLL input clock frequency out of range (%d, %d)' % (self.fin_min, self.fin_max))
        if len(ofreqs) > 6:
            raise ValueError('Too many clocks requested!')
        for c, clock in enumerate(ofreqs):
            if clock is None:
                bests.append([[None, None, None]])
                continue
            if clock > self._warning_frequency:
                scope_logger.warning("""
                    Requested clock frequency exceeds specification (250 MHz). 
                    This may or may not work, depending on temperature, voltage, and luck.
                    It may not work reliably.
                    You can adjust the _warning_frequency property if you don't want
                    to see this message anymore.
                    """)
            if clock < self.fout_min or ifreq > self.fout_max:
                scope_logger.warning('PLL output clock frequency out of range (%d, %d)' % (self.fout_min, self.fout_max))
            lowerror = 1e99
            next_bests = []
            next_best_div_range = []
            next_best_mul_range = []
            if using_bests:
                div_range = best_div_range
            else:
                div_range = self.div_range

            for i,maindiv in enumerate(div_range):
                mmin = int(np.ceil(self.vco_min/ifreq*maindiv))
                mmax = int(np.ceil(self.vco_max/ifreq*maindiv))
                if using_bests:
                    mul_range = [best_mul_range[i]]
                else:
                    mul_range = self.mul_range
                for mul in range(mmin,mmax+1):
                    if mul/maindiv < self.vco_min/ifreq or mul/maindiv > self.vco_max/ifreq or mul not in mul_range:
                        continue
                    for secdiv in self.sec_div_range:
                        calcfreq = ifreq*mul/maindiv/secdiv
                        err = abs(clock - calcfreq)
                        if err < lowerror:
                            lowerror = err
                            next_bests = [[mul, maindiv, secdiv]]
                            next_best_div_range = [maindiv]
                            next_best_mul_range = [mul]
                        elif err == lowerror:
                            next_bests.append([mul, maindiv, secdiv])
                            next_best_div_range.append(maindiv)
                            next_best_mul_range.append(mul)

            if next_bests == []:
                scope_logger.error("Couldn't find a legal div/mul combination")
            else:
                using_bests = True

            best_div_range = next_best_div_range
            best_mul_range = next_best_mul_range
            bests.append(next_bests)
            scope_logger.debug('set_freqs progress for clock %d: best_div_range = %s' % (c, best_div_range))
            scope_logger.debug('set_freqs progress for clock %d: best_mul_range = %s' % (c, best_mul_range))


        # almost done! now we've got mul and maindiv; for each clock we go back to find the corresponding sec_div,
        # then we can report all generated clock frequencies vs requested frequencies
        mul, maindiv, secdiv = next_bests[0]
        self.set_mul(mul)
        self.set_main_div(maindiv)
        actual_freqs = []
        for c, clock in enumerate(ofreqs):
            if clock is None:
                # there doesn't seem to be a way to turn off the clock, 
                # so let's set secondary divider to max value when user specifies "None" for the frequency
                secdiv = max(self.sec_div_range)
                self.set_sec_div(secdiv, c)
                actual_freqs.append(ifreq*mul/maindiv/secdiv)
                continue
            # find secdiv:
            secdiv = None
            for b in bests[c]:
                if b[0] == mul and b[1] == maindiv:
                    secdiv = b[2]
                    break
            if secdiv is None:
                raise ValueError('Internal error, could not find secdiv. There is a bug somewhere in this function.')
            actual_freq = ifreq * mul / maindiv / secdiv
            actual_freqs.append(actual_freq)
            if abs(actual_freq-clock)/clock*100 > threshold:
                warning = '*** outside of tolerance threshold***'
            else:
                warning = ''
            message = 'Clock %d: requested %4.3f MHz, getting %4.3f MHz %s' % (c, clock/1e6, actual_freq/1e6, warning)
            scope_logger.info(message)
            if warning:
                print(message)
            self.set_sec_div(secdiv, c)
        time.sleep(0.1)
        return actual_freqs


    def set_mul(self, mul):
        if mul not in self.mul_range:
            raise ValueError("Multiplier (%d) out of range" % mul)
        muldiv2 = int(mul/2)
        lo = muldiv2
        if mul%2:
            #scope_logger.warning("Odd multiplier means clock duty cycle will not be 50%")
            hi = lo+1
        else:
            hi = lo
        if hi >= 2**6:
            raise ValueError("MMCM internal error: calculated hi/lo value exceeding range")
        raw = lo + (hi<<6) + 0x1000
        self.drp.write(0x14, raw)
        self.drp.reset()


    def set_main_div(self, div):
        if div not in self.div_range:
            raise ValueError("Divider (%d) out of range" % div)
        # Set main divider:
        if div == 1:
            raw = 0x1000
        else:
            div2 = int(div/2)
            lo = div2
            if div % 2:
                #scope_logger.warning("Odd divider means clock duty cycle will not be 50%")
                hi = lo+1
            else:
                hi = lo
            raw = lo + (hi<<6)
        self.drp.write(0x16, raw)
        self.drp.reset()


    def set_sec_div(self, div, clock=0):
        if div not in self.sec_div_range:
            raise ValueError("Divider (%d) out of range" % div)
        # Set main divider:
        if clock > 5:
            raise ValueError("Clock must be in range [0,5]")
        # pay attention to addressing, it's weird!
        if clock == 5:
            addr = 0x06
        elif clock == 6:
            addr = 0x12
        else:
            addr = 0x08 + clock*2
        # Set secondary divider:
        if div == 1:
            self.drp.write(addr+1, 0x0040)
        else:
            div2 = int(div/2)
            lo = div2
            if div % 2:
                #scope_logger.warning("Odd divider means clock duty cycle will not be 50%")
                hi = lo+1
            else:
                hi = lo
            raw = lo + (hi<<6) + 0x1000
            self.drp.write(addr, raw)
        self.drp.reset()
        if self.get_sec_div(clock=clock) != div:
            scope_logger.error("""
                Failed to update the MMCM secondary divider. A hard reboot of
                Husky is likely necessary.  This likely occurred because you
                either:
                (1) programmed invalid MMCM parameters, or
                (2) the MMCM had valid parameters for a particular input clock
                frequency, but then you changed that clock frequency and this
                made the MMCM parameters invalid (this is the likely scenario). 

                To avoid this in the future, once the MMCM is operating (i.e.
                scope.LA.clkgen_enabled = True), if you wish to change
                the input clock frequency, first disable the MMCM, then update
                the clock, then update the MMCM, and then re-enable the MMCM.

                For example:
                # set up initial valid settings:
                scope.clock.clkgen_freq = 5e6
                scope.LA.oversampling_factor = 40
                scope.LA.clkgen_enabled = True
                # update to new settings:
                scope.LA.clkgen_enabled = False
                scope.clock.clkgen_freq = 100e6
                scope.LA.oversampling_factor = 3
                scope.LA.clkgen_enabled = True
                """)


    def get_mul(self):
        # 1. read CLKFBOUT2 to ensure fractional mode is disabled:
        raw = list(int.to_bytes(self.drp.read(0x11), length=2, byteorder='little'))
        if raw[1] & 0x08:
            print('WARNING: fractional mode is enabled. This is unexpected. Reported multiplier value will be incorrect.')
        # 2. check "NO COUNT" bit:
        if raw[0] & 0x04:
            mul = 1
        else:
            # 3. read CLKFBOUT:
            raw = list(int.to_bytes(self.drp.read(0x14), length=2, byteorder='little'))
            # extract high time and low time
            lo = (raw[0] & 0x3f)
            hi = (raw[0]>>6) + ((raw[1] & 0x0f)<<2)
            mul = lo + hi
            #if lo != hi: print('WARNING: high and low times unequal (%d, %d) ! Duty cycle is not 50/50. This is unexpected. % (hi, lo))
        return mul


    def get_main_div(self):
        raw = list(int.to_bytes(self.drp.read(0x16), length=2, byteorder='little'))
        if raw[1] & 0x10:
            maindiv = 1
        else:
            # extract high time and low time
            lo = (raw[0] & 0x3f)
            hi = (raw[0]>>6) + ((raw[1] & 0x0f)<<2)
            maindiv = lo + hi
        return maindiv


    def get_sec_div(self, clock=0):
        if clock > 5:
            raise ValueError("Clock must be in range [0,5]")
        # pay attention to addressing, it's weird!
        if clock == 5:
            addr = 0x06
        elif clock == 6:
            addr = 0x12
        else:
            addr = 0x08 + clock*2
        #  read CLKOUT2 to ensure fractional mode is disabled and check NO_COUNT bit for CLKOUT divider:
        raw = list(int.to_bytes(self.drp.read(addr+1), length=2, byteorder='little'))
        if raw[1] & 0x08:
            logging.error('CLKGEN fractional mode is enabled. This is unexpected.')
        if raw[0] & 0x40:
            secdiv = 1
        else:
            # read CLKOUT divider:
            raw = list(int.to_bytes(self.drp.read(addr), length=2, byteorder='little'))
            # extract high time and low time
            lo = (raw[0] & 0x3f)
            hi = (raw[0]>>6) + ((raw[1] & 0x0f)<<2)
            secdiv = lo + hi
        return secdiv


class LEDSettings(util.DisableNewAttr):
    ''' Set source of Husky front-panel LEDs.
    '''
    _name = 'Husky LEDs Setting'

    def __init__(self, oaiface : OAI.OpenADCInterface):
        super().__init__()
        self.oa = oaiface
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['setting'] = self.setting
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    @property
    def setting(self):
        """Front-panel LED sources.

        #. default: green=armed, blue=capture, top red=PLL lock fail, bottom red=glitch
        #. green: USB clock heartbeat, blue=CLKGEN clock heartbeat
        #. green: ADC sampling clock heartbeat, blue=PLL reference clock heartbeat
        #. green: PLL clock heartbeat, blue=external clock change detected

        In all cases, blinking red lights indicate a temperature, voltage, or
        sampling error (see scope.XADC.status and scope.adc.errors for details),
        whlie blinking green and blue lights indicate that a frequency change
        was detected on the external clock input (and that scope.clock should
        be updated to account for this).

        """
        raw = self.oa.sendMessage(CODE_READ, "LED_SELECT", maxResp=1)[0]
        if raw == 0:   return "0 (default, as labelled)"
        elif raw == 1: return "1 (USB and CLKGEN clock heartbeats)"
        elif raw == 2: return "2 (ADC clock heartbeats)"
        elif raw == 3: return "3 (PLL clock heartbeat)"
        elif raw == 4: return "4 (SAM3U R/W debug)"
        elif raw == 5: return "5 (SAM3U R/W debug)"
        else: return ValueError

    @setting.setter
    def setting(self, val):
        if val < 0 or val > 5:
            raise ValueError
        self.oa.sendMessage(CODE_WRITE, "LED_SELECT", [val])


class HuskyErrors(ChipWhispererSAMErrors):
    ''' Gather all the Husky error sources in one place.
        Use scope.errors.clear() to clear them.
    '''
    _name = 'Husky Errors'

    def __init__(self, oaiface : OAI.OpenADCInterface, XADC, adc, clock, trace):
        super().__init__(oaiface.serial) # naeusb comms
        self.enable_newattr()
        self.oa = oaiface
        self.XADC = XADC
        self.adc = adc
        self.clock = clock
        self.trace = trace
        self.disable_newattr()

    def _dict_repr(self):
        rtn = super()._dict_repr()
        rtn['XADC errors'] = self.XADC.errors()
        rtn['ADC errors'] = self.adc.errors
        rtn['extclk error'] = self.clock.extclk_error
        rtn['trace errors'] = self.trace.errors
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    def clear(self):
        super().clear()
        self.XADC.status = 0
        self.adc.errors = 0
        self.clock.extclk_error = 0
        self.trace.errors = 0


class USERIOPin(util.DisableNewAttr):
    ''' Control Husky's USERIO (20-pin front connector) interface, one pin at a time.
    Everything that this class does can also be done by 
    :class:`scope.userio <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings>`,
    but the API of this class makes it easier to change a single USERIO pin's properties.

    Example::

        scope.userio.pin[0].direction = 'output'
        scope.userio.pin[0].drive_data = 1
        scope.userio.pin[0].drive_data = 0
        scope.userio.pin[0].drive_data = 1

    '''
    _name = 'USERIO Pin'

    def __init__(self, userio, pin_number):
        super().__init__()
        self.parent = userio
        self.pin_number = pin_number
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['name'] = self.name
        rtn['function'] = self.function
        rtn['direction'] = self.direction
        rtn['drive_data'] = self.drive_data
        rtn['status'] = self.status
        rtn['clock_enabled'] = self.clock_enabled
        if self.pin_number > 8 - self.parent.num_clocks:
            info = '%s' % self.clock
            if not self.parent.clocks_locked:
                info += ' *** PLL UNLOCKED **'
            rtn['clock'] = info
        else:
            rtn['clock'] = 'not supported'
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    @property
    def name(self):
        """Pin name.
        """
        label = 'USERIO_'
        if self.pin_number < 8:
            label += 'D%d' % self.pin_number
        else:
            label += 'CK'
        return label


    @property
    def function(self):
        """See :class:`scope.userio.pin_functions <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings.pin_functions>`.
        """
        return self.parent.pin_functions[self.pin_number]


    @property
    def direction(self):
        """See :class:`scope.userio.direction <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings.direction>`.
        """
        raw = self.parent._direction_list[self.pin_number]
        if 'bitbanger.data' in self.function:
            return 'I/O'
        elif raw or 'bitbanger.clock' in self.function:
            return 'output'
        else:
            return 'input'

    @direction.setter
    def direction(self, value):
        if value == 'output':
            value = 1
        elif value == 'input':
            value = 0
        elif value not in [0,1]:
            raise ValueError()
        self.parent._direction_list[self.pin_number] = value


    @property
    def drive_data(self):
        """See :class:`scope.userio.drive_data <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings.drive_data>`.
        """
        return self.parent._drive_data_list[self.pin_number]

    @drive_data.setter
    def drive_data(self, value):
        self.parent._drive_data_list[self.pin_number] = value

    @property
    def status(self):
        """See :class:`scope.userio.status <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings.status>`.
        """
        return self.parent._status_list[self.pin_number]

    @property
    def clock_enabled(self):
        """See :class:`scope.userio.clock_enabled <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings.clock_enabled>`.
        """
        return self.parent._clock_enabled_list[self.pin_number]

    @clock_enabled.setter
    def clock_enabled(self, value):
        self.parent._clock_enabled_list[self.pin_number] = value

    @property
    def clock(self):
        """See :class:`scope.userio.clocks <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings.clocks>`.
        """
        return self.parent.clocks[8-self.pin_number]

    @clock.setter
    def clock(self, value):
        self.parent.clocks[8-self.pin_number] = value





class USERIOSettings(util.DisableNewAttr):
    ''' Control Husky's USERIO (20-pin front connector) interface.
    Example::

        scope.userio.direction = 0x1ff
        scope.userio.drive_data = 0x155
        scope.userio.drive_data = 0x0aa


    The methods in this class make it easy to change all USERIO pin properties
    simultaneously. If you are modifying the properties of a single pin, you
    may find the 
    :class:`scope.userio.pin[x] <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOPin>`
    methods more appealing, i.e.::

        scope.userio.pin[0].direction = 1  # or scope.userio.pin[0].direction = 'output'
        scope.userio.pin[0].drive_data = 1
        scope.userio.pin[0].drive_data = 0

    '''
    _name = 'USERIO Control'

    fpga_mode_definitions = [None]*20 # type: list

    # fpga_mode = 0:
    fpga_mode_definitions[0] = ['streaming debug',
                                 ['stream_segment_available',
                                  'slow_fifo_wr_slow',
                                  'slow_fifo_rd_slow',
                                  'reg_read_slow',
                                  'fast_fifo_read',
                                  'fifo_error_flag',
                                  'glitchclk',
                                  'glitch_enable',
                                  'unused']]

    # fpga_mode = 1:
    fpga_mode_definitions[1] = ['trigger_unit.v debug', 
                                  ['cmd_arm_usb',
                                   'trigger',
                                   'armed',
                                   'capture_active_o',
                                   'capture_done_i',
                                   'int_reset_capture',
                                   'arm_o',
                                   'armed_and_ready',
                                   'adc_capture_done']]

    # fpga_mode = 2:
    fpga_mode_definitions[2] = ['fifo_top_husky.v debug', 
                                 ['state[0]',
                                  'state[1]',
                                  'state[2]',
                                  'capture_go',
                                  'arming',
                                  'armed_and_ready',
                                  'error_flag',
                                  'adc_capture_stop',
                                  'unused']]

    # fpga_mode = 3:
    fpga_mode_definitions[3] = ['glitch debug', 
                                 ['cmd_arm_usb',
                                  'trigger_capture',
                                  'glitch_enable',
                                  'glitchclk',
                                  'unused',
                                  'glitch_mmcm1_clk_out',
                                  'xadc_error_flag',
                                  'unused',
                                  'unused']]

    # fpga_mode = 4:
    fpga_mode_definitions[4] = ['clockglitch debug1', 
                                 ['exttrigger',
                                  'exttrigger_resync',
                                  'trigger_resync_idle',
                                  'glitch_trigger',
                                  'glitch_done_count[0]',
                                  'glitch_done_count[1]',
                                  'clockglitch_count[0]',
                                  'clockglitch_count[1]',
                                  'unused']]

    # fpga_mode = 5:
    fpga_mode_definitions[5] = ['clockglitch debug2', 
                                 ['unused',
                                  'exttrigger',
                                  'sourceclk',
                                  'unused',
                                  'glitch_trigger',
                                  'glitchclk',
                                  'glitch_enable',
                                  'glitch_done_count[0]',
                                  'glitch_done_count[1]']]


    # fpga_mode = 6:
    fpga_mode_definitions[6] = ['usb debug1', 
                                 ['USB_Data[4]',
                                  'USB_Data[5]',
                                  'USB_Data[6]',
                                  'USB_Data[7]',
                                  'clk_usb_buf',
                                  'USB_CEn',
                                  'USB_WRn',
                                  'USB_RDn',
                                  'unused']]

    # fpga_mode = 7:
    fpga_mode_definitions[7] = ['usb debug2', 
                                 ['USB_Data[0]',
                                  'USB_Data[1]',
                                  'USB_Data[2]',
                                  'USB_Data[3]',
                                  'clk_usb_buf',
                                  'USB_CEn',
                                  'USB_WRn',
                                  'USB_RDn',
                                  'unused']]

    # fpga_mode = 8:
    fpga_mode_definitions[8] = ['usb debug3', 
                                 ['USB_Data[0]',
                                  'USB_Data[1]',
                                  'USB_Data[2]',
                                  'USB_Data[3]',
                                  'USB_Data[4]',
                                  'USB_Data[5]',
                                  'USB_Data[6]',
                                  'reg_write',
                                  'unused']]

    # fpga_mode = 9:
    fpga_mode_definitions[9] = ['edge trigger debug', 
                                 ['trigger_in',
                                  'trigger_in_r[0]',
                                  'trigger_in_r[1]',
                                  'triggered',
                                  'armed_and_ready',
                                  'running',
                                  'edge_counter[0]',
                                  'edge_counter[1]',
                                  'unused']]

    # fpga_mode = 10:
    fpga_mode_definitions[10] = ['clockglitch debug3 (trigger_resync)', 
                                 ['exttrig',
                                  'exttrigger_resync',
                                  'async_trigger',
                                  'state[0]',
                                  'state[1]',
                                  'done',
                                  'oneshot',
                                  'glitch_condition',
                                  'unused']]

    # fpga_mode = 11:
    fpga_mode_definitions[11] = ['triggers',
                                 ['cmd_arm_usb',
                                  'trigger_edge_counter',
                                  'trigger_adc',
                                  'trace_trig_out',
                                  'trigger_sad',
                                  'uart_trigger_line',
                                  'target_io4',
                                  'edge_trigger_line',
                                  'unused']]

    # fpga_mode = 12:
    fpga_mode_definitions[12] = ['trigger_unit.v debug2',
                                 ['triggered',
                                  'armed_and_ready',
                                  'armed',
                                  'trigger_level_match',
                                  'capture_active_o',
                                  'capture_go_start',
                                  'resetarm',
                                  'int_reset_capture',
                                  'unused']]

    # fpga_mode = 13:
    fpga_mode_definitions[13] = ['sequencer debug (2 triggers)',
                                 ['trigger 0',
                                  'trigger 1',
                                  'too early',
                                  'too late',
                                  'sequence trigger output',
                                  'trigger 0 window',
                                  'trigger 1 window',
                                  'armed_and_ready',
                                  'unused']]

    # fpga_mode = 14:
    fpga_mode_definitions[14] = ['sequencer/SAD debug',
                                 ['unused',
                                  'unused',
                                  'unused',
                                  'trigger[0]',
                                  'trigger[1]',
                                  'trigger 0 window',
                                  'trigger 1 window',
                                  'too late',
                                  'unused']]

    # fpga_mode = 15:
    fpga_mode_definitions[15] = ['sequencer/SAD debug (4 triggers)',
                                 ['trigger 0',
                                  'trigger 1',
                                  'trigger 2',
                                  'trigger 3',
                                  'trigger 0 window',
                                  'trigger 1 window',
                                  'trigger 2 window',
                                  'trigger 3 window',
                                  'unused']]

    # fpga_mode = 16:
    fpga_mode_definitions[16] = ['SAD debug',
                                 ['&ready2trigger_all',
                                  '(refsample_shift_count == 0)',
                                  'always_armed',
                                  'shifter_active',
                                  'active',
                                  'armed_and_ready_sad',
                                  'armed_and_ready',
                                  'trigger',
                                  'unused']]

    # fpga_mode = 17:
    fpga_mode_definitions[17] = ['bitbanger debug',
                                 ['matching',
                                  'matched',
                                  'bitrecord',
                                  'trigger',
                                  'pattern_en',
                                  'data_drive',
                                  'active',
                                  'trigger_active',
                                  'unused']]

    # fpga_mode = 18:
    fpga_mode_definitions[18] = ['fifo_top_husky.v debug2', 
                                 ['error_flag',
                                  'presample_fifo_count_full',
                                  'presample_fifo_count_empty',
                                  'presample_fifo_count_wr',
                                  'presample_fifo_count_rd',
                                  'presample_fifo_count_flush',
                                  'flushing',
                                  'arm_pulse_usb',
                                  'unused']]

    # fpga_mode = 19:
    fpga_mode_definitions[19] = ['fifo_top_husky.v debug3', 
                                 ['fast_fifo_empty_wait',
                                  'save_offset_error',
                                  'save_offset_usb',
                                  'raw_empty_flags_adc',
                                  'fast_fifo_empty_adc',
                                  'fast_fifo_rd',
                                  'error_flag',
                                  'done_writing',
                                  'unused']]



    trace_pins = ['TMS', 'TCK', 'TDO/SWO', 'unused', 'TRACEDATA[0]', 'TRACEDATA[1]', 'TRACEDATA[2]', 'TRACEDATA[3]', 'TRACECLOCK']

    def __init__(self, oaiface : OAI.OpenADCInterface, trace, bitbanger):
        super().__init__()
        self._config_cache = None
        self._clock_enabled_cached = None
        self._last_mode = None
        self._drive_data = 0
        self.oa = oaiface
        self._trace = trace
        self._bitbanger = bitbanger
        self.pins = []
        for pin in range(9):
            self.pins.append(USERIOPin(self, pin))
        self.num_clocks = 1 # note: will get overwritten by _check_clocks(); prevents mypy complaint
        self.clocks_supported = self._check_clocks()
        self._drp = XilinxDRP(self.oa, "USERIO_DRP_DATA", "USERIO_DRP_ADDR", "USERIO_DRP_RESET")
        self._pll = XilinxMMCMDRP(self._drp, vco_min=800e6, vco_max=1600e6, fin_min=19e6, fin_max=800e6, fout_min=6.25e6, fout_max=800e6)
        self._clocks = [None]*self.num_clocks
        self._clock_source = 0
        self._clock_source_freq = 96e6
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['mode'] = self.mode
        if self.mode in ['fpga_debug', 'swo_trace_plus_debug']:
            rtn['fpga_mode'] = self.fpga_mode
        rtn['direction'] = self.direction
        rtn['clock_enabled'] = self.clock_enabled
        rtn['clocks'] = self.clocks
        rtn['clock_source'] = self.clock_source
        rtn['clocks_locked'] = self.clocks_locked
        rtn['drive_data'] = self.drive_data
        rtn['status'] = self.status
        pins_rtn = {}
        for i in range(9):
            info = '{0:{width}s}'.format(self.pin_functions[i], width=len(max(self.pin_functions, key=len)))
            if 'bitbanger.data' in self.pin_functions[i]:
                info += ', I/O,    '
            elif self._direction_list[i] or 'bitbanger.clock' in self.pin_functions[i]:
                info += ', output, '
            else:
                info += ', input,  '
            info += 'status = %d' % self._status_list[i]
            info += ', clock_enabled = %d' % self._clock_enabled_list[i]
            info += ', drive = %d' % self._drive_data_list[i]
            if i > 8 - self.num_clocks:
                if self.clocks[8-i] is None:
                    info += ', clock not set'
                else:
                    info += ', clock = %.1f' % self.clocks[8-i]
                    if not self.clocks_locked:
                        info += ' *** PLL UNLOCKED ***'
            else:
                info += ', clock not supported'

            if i < 8:
                pins_rtn['D%d' % i] = info
            else:
                pins_rtn['CK'] = info

        rtn['Individual pins'] = pins_rtn
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    def _get_config(self):
        if self._config_cache is None:
            self._config_cache = self.oa.sendMessage(CODE_READ, "USERIO_CONFIG", maxResp=7)
        return self._config_cache

    def _set_config(self, value):
        self._config_cache = value
        self.oa.sendMessage(CODE_WRITE, "USERIO_CONFIG", value)


    def config_register_write(self, register, value):
        """ Convenience function for setting the registers that got merged into USERIO_CONFIG.
        """
        raw = self.oa.sendMessage(CODE_READ, "USERIO_CONFIG", maxResp=7)
        raw = self._get_config()
        if register == 'USERIO_CLKSEL':
            raw[0] = value
        elif register == 'USERIO_DEBUG_SELECT':
            raw[1] = value
        elif register == 'USERIO_DEBUG_DRIVEN':
            raw[2] = value
        elif register == 'USERIO_CW_DRIVEN':
            raw[3:5] = int.to_bytes(value, length=2, byteorder='little')
        elif register == 'USERIO_CLOCK_OUT':
            raw[5:7] = int.to_bytes(value, length=2, byteorder='little')
        else:
            raise ValueError()
        self.oa.sendMessage(CODE_WRITE, "USERIO_CONFIG", raw)
        self._set_config(raw)


    def config_register_read(self, register, use_cache=True):
        """ Convenience function for reading the registers that got merged into USERIO_CONFIG.
        """
        if use_cache:
            raw = self._get_config()
        else:
            raw = self.oa.sendMessage(CODE_READ, "USERIO_CONFIG", maxResp=7)
        if register == 'USERIO_CLKSEL':
            return raw[0]
        elif register == 'USERIO_DEBUG_SELECT':
            return raw[1]
        elif register == 'USERIO_DEBUG_DRIVEN':
            return raw[2]
        elif register == 'USERIO_CW_DRIVEN':
            # can't use cache here, do a direct fresh read everytime instead
            assert not use_cache, 'should not be using cache with %s!' % register
            return int.from_bytes(raw[3:5], byteorder='little')
        elif register == 'USERIO_CLOCK_OUT':
            # can't use cache here, do a direct fresh read everytime instead
            assert not use_cache, 'should not be using cache with %s!' % register
            return int.from_bytes(raw[5:7], byteorder='little')
        else:
            raise ValueError()


    @property
    def mode(self):
        """Set mode for USERIO pins:

        * "normal": as defined by scope.userio.direction.
        * "trace": for target trace capture.
        * "target_debug_jtag": for target debugging with ChipWhisperer using MPSSE in JTAG mode
        * "target_debug_swd": for target debugging with ChipWhisperer using MPSSE in SWD mode
        * "fpga_debug": for FPGA debug (print the scope.userio object to obtain current signal definition, which is determined by scope.userio.fpga_mode).
        * "swo_trace_plus_debug": pins D0-D2 are used for SWO trace, D3-D7 for fpga_debug.
        """
        if self._last_mode:
            return self._last_mode
        else:
            debug = self.config_register_read('USERIO_DEBUG_DRIVEN')
            if self._trace:
                trace = self._trace.enabled
            else:
                trace = None
            if trace:
                return "trace"
            elif debug == 1:
                return "fpga_debug"
            elif debug == 2:
                return "target_debug_jtag"
            elif debug == 6:
                return "target_debug_swd"
            else:
                return "normal"

    @mode.setter
    def mode(self, setting):
        if setting == 'normal':
            self.config_register_write('USERIO_DEBUG_DRIVEN', 0)
            self._trace._set_enabled(0)
        elif setting == 'trace':
            self.config_register_write('USERIO_DEBUG_DRIVEN', 0)
            self._trace._set_enabled(1)
            self._trace._set_userio_dir(3)  # restore default just in case
        elif setting == 'fpga_debug':
            self.config_register_write('USERIO_DEBUG_DRIVEN', 1)
            self._trace._set_enabled(0)
        elif setting == 'swo_trace_plus_debug':
            self.config_register_write('USERIO_DEBUG_DRIVEN', 1)
            self._trace._set_enabled(1)
            self._trace._set_userio_dir(0xff-4)
        elif setting == 'target_debug_jtag':
            self.config_register_write('USERIO_DEBUG_DRIVEN', 2)
            self._trace._set_enabled(0)
        elif setting == 'target_debug_swd':
            self.config_register_write('USERIO_DEBUG_DRIVEN', 6)
            self._trace._set_enabled(0)
        else:
            raise ValueError("Invalid mode; use normal/trace/fpga_debug/target_debug_jtag/target_debug_swd")
        self._last_mode = setting

    @property
    def fpga_mode_options(self):
        """Lists the category for each :class:`fpga_mode` setting.
        """
        for i,d in enumerate(self.fpga_mode_definitions):
            print('scope.userio.fpga_mode = %2d: %s' % (i, d[0]))

    @property
    def fpga_mode(self):
        """When scope.userio.mode = 'fpga_debug', selects which FPGA signals
        are routed to the USERIO pins. See :class:`fpga_mode_options` to see the
        category of each available setting; print the scope.userio object to
        obtain the full signal definition corresponding to the current fpga_mode
        setting.
        """
        return self.config_register_read('USERIO_DEBUG_SELECT')

    @fpga_mode.setter
    def fpga_mode(self, setting):
        top_mode = len(self.fpga_mode_definitions)
        if not setting in range(top_mode):
            raise ValueError("Must be integer in [0, %d]" % (top_mode-1))
        else:
            self.config_register_write('USERIO_DEBUG_SELECT', setting)


    def _setter_check_and_transform(self, value, num_bits, maxvalue):
        """Common code used by many of this class's properties.
        """
        if type(value) is list:
            # sanity check:
            if any(not i in [0,1] for i in value) or len(value) != num_bits:
                raise ValueError("Can't set value to %s" % value)
            data = 0
            for i,d in enumerate(value):
                if d:
                    data += 2**i
        else:
            data = value
        if not data in range(0, maxvalue+1):
            raise ValueError("Out of range! Must be integer 0-%d; got %d" % (maxvalue, data))
        return data

    def _reader_2list(self, value, num_bits):
        """Common code used by many of this class's properties.
        """
        data = [0]*num_bits
        for i in range(num_bits):
            if value & 2**i:
                data[i] = 1
        return data


    @property
    def direction(self):
        """Set the direction of the USERIO data pins (D0-D7) and clock pin with an
        9-bit integer, where bit <x> determines the direction of D<x> and bit 8
        determines the direction of CK.

        * bit x = 0: D<x> is an input to Husky.
        * bit x = 1: D<x> is driven by Husky.

        When :class:`mode` is not "normal", then this setting is controlled
        by the FPGA and cannot be changed by the user.
        Use with care.
        """
        # Can't use config_register_read() cached value for this because the hardware
        # uses several values (not just was is written to USERIO_CW_DRIVEN) to determine
        # the read value. Caching here would require replicating the hardware logic in
        # Python, which is error-prone.
        return self.config_register_read('USERIO_CW_DRIVEN', use_cache=False)
        #raw = self.oa.sendMessage(CODE_READ, "USERIO_CONFIG", maxResp=5)
        #return int.from_bytes(raw[3:5], byteorder='little')

    @direction.setter
    def direction(self, setting):
        if not setting in range(0, 512):
            raise ValueError("Must be integer 0-511")
        else:
            self.config_register_write('USERIO_CW_DRIVEN', setting)

    @property
    def _direction_list(self):
        """Meant to be called from USERIOPin instance (e.g. scope.userio.pins[0].direction).
        """
        direction = self._read_direction()
        return util.Lister(direction, setter=self._set_direction, getter=self._read_direction)

    @_direction_list.setter
    def _direction_list(self, value):
        self._set_direction(value)

    def _set_direction(self, direction):
        data = self._setter_check_and_transform(direction, 9, 511)
        self.direction = data

    def _read_direction(self):
        return self._reader_2list(self.direction, 9)

    @property
    def clock_enabled(self):
        """Enable clock output.
        9-bit integer, where bit <x> enables the clock on D<x> and bit 8
        enables the clock on CK.
        Clocks are not available on all bits: see scope.userio.clocks_supported
        for a binary representation of which USERIO pins can output a clock.

        """
        # can't use config_register_read() cached value for this!
        # instead use a sub-register-specific cache
        #return self.config_register_read('USERIO_CLOCK_OUT', use_cache=False)
        if self._clock_enabled_cached is None:
            raw = self.oa.sendMessage(CODE_READ, "USERIO_CONFIG", maxResp=7)
            self._clock_enabled_cached = int.from_bytes(raw[5:7], byteorder='little')
        return self._clock_enabled_cached


    @clock_enabled.setter
    def clock_enabled(self, setting):
        if setting & (self.clocks_supported ^ 0xFFFF):
            raise ValueError("Clocks supported only on pins: %s" % bin(self.clocks_supported))
        else:
            self.config_register_write('USERIO_CLOCK_OUT', setting)
        self._clock_enabled_cached = None

    @property
    def _clock_enabled_list(self):
        """Meant to be called from USERIOPin instance (e.g. scope.userio.pins[0].clock_enabled).
        """
        clock_enabled = self._read_clock_enabled()
        return util.Lister(clock_enabled, setter=self._set_clock_enabled, getter=self._read_clock_enabled)

    @_clock_enabled_list.setter
    def _clock_enabled_list(self, value):
        self._set_clock_enabled(value)

    def _set_clock_enabled(self, clock_enabled):
        data = self._setter_check_and_transform(clock_enabled, 9, 511)
        self.clock_enabled = data

    def _read_clock_enabled(self):
        return self._reader_2list(self.clock_enabled, 9)

    def _check_clocks(self):
        """To see which USERIO pins can be configured as a clock, write all ones 
        to USERIO_CLOCK_OUT and read back. Must be called upon initialization.
        """
        self.config_register_write('USERIO_CLOCK_OUT', 0xFFFF)
        readback = self.config_register_read('USERIO_CLOCK_OUT', use_cache=False)
        self.config_register_write('USERIO_CLOCK_OUT', 0x0000)
        self.num_clocks = bin(readback)[2:].count('1')
        return readback


    @property
    def clocks(self):
        """ Clock frequencies for pins that are configured as clocks.
        See scope.userio.num_clocks for the number of clock that can be
        generated. Provide desired clock frequencies as a list; the first
        element is for the CK pin, then D7 pin, then D6, and so on.

        All clocks are generated from a single PLLE2 FPGA macro, which limits
        what is possible when requesting multiple clock frequencies. A warning
        is issued if an actual clock frequency is more than 0.1% off from its
        requested value; you can also see the actual frequencies by querying
        this property after assignment: it will report the actual (not
        requested) frequencies.

        When calculating PLL parameters for multiple clocks, we use an
        algorithm which prioritizes the requested frequencies in the order that
        they are specified (e.g. CK first, then D7, then D6...).

        If you have different needs, you can set the PLL's multiply/divide
        parameters via the methods exposed by the scope.userio._pll object.
        """
        return self._get_clocks()

    @clocks.setter
    def clocks(self, frequencies):
        if len(frequencies) > self.num_clocks:
            raise ValueError('Too many clocks!')
        for i,f in enumerate(frequencies):
            if f:
                self._clocks[i] = f
        if self.clock_source == 'usb':
            ifreq = 96e6
        else:
            ifreq = self.clock_source_freq
        self._clocks = self._pll.set_freqs(ifreq, self._clocks)
        if not self.clocks_locked:
            scope_logger.warning('USERIO PLL is not locked. Generated clocks may not be dependable. (have you set scope.userio.clock_source_freq correctly?)')

    def _read_clocks(self):
        # note: returns *actual set* frequency, not requested frequency
        return self._clocks

    def _get_clocks(self):
        return util.Lister(self._clocks, setter=self._set_clocks, getter=self._read_clocks)

    def _set_clocks(self, clocks):
        self.clocks = clocks


    @property
    def clock_source(self):
        """ Set the clock source for the PLL that generates the USERIO output clocks.

        Args:
            source (str): "target" or "usb". When set to "target", uses the
                target clock as defined by scope.clock (i.e. can be either
                internally or externally generated). The frequency of that
                clock must be explicitely provided to
                :class:`clock_source_freq`. When set to "usb", the internal
                fixed 96 MHz clock is used (:class:`clock_source_freq` does not
                need to be set in that case).

        .. note:: When this property is updated, PLL parameters are
            re-calculated to maintain the clock frequencies that were
            previously *generated*. These may be different from the clock
            frequencies that were previously *requested*!
        """
        if self._clock_source:
            return 'target'
        else:
            return 'usb'

    @clock_source.setter
    def clock_source(self, source):
        if source == self.clock_source:
            change = False
        else:
            change = True
        if source == 'target':
            raw = 1
        elif source == 'usb':
            raw = 0
        else:
            raise ValueError()
        self._clock_source = raw
        self.config_register_write('USERIO_CLKSEL', raw)
        if change and self._clocks != [None]*self.num_clocks:
            # re-set clock frequencies
            self.clocks = [None]*self.num_clocks

    @property
    def clock_source_freq(self):
        """ Specify the target clock frequency.

        Args:
            freq (int or float): target clock frequency. When
                :class:`clock_source` is set to "target", we need to know that
                clock's frequency in order to calculate the PLL settings that
                will generate the requested clock frequencies.

        .. note:: When this property is updated, PLL parameters are
            re-calculated to maintain the clock frequencies that were
            previously *generated*. These may be different from the clock
            frequencies that were previously *requested*!
        """
        return self._clock_source_freq

    @clock_source_freq.setter
    def clock_source_freq(self, freq):
        if freq != self._clock_source_freq:
            self._clock_source_freq = freq
            if self._clocks != [None]*self.num_clocks:
                # re-set clock frequencies
                self.clocks = [None]*self.num_clocks


    @property
    def clocks_locked(self):
        """ Indicates whether the PLL that generates the USERIO output clocks
        is locked. Usually the reason for it to be unlocked is that the PLL
        parameters bring either the output clocks or the internal VCO out of
        range.
        """
        # can't use config_register_read() cached value for this!
        if self.config_register_read('USERIO_CLKSEL', use_cache=False) & 2:
            return True
        else:
            return False


    @property
    def drive_data(self):
        """9-bit data to drive on the USERIO data pins and clock pin (clock pin is msb).
        """
        return self._drive_data

    @drive_data.setter
    def drive_data(self, value):
        if not value in range(0, 512):
            raise ValueError("Must be integer 0-511")
        #self._set_drive_data(value)
        self.oa.sendMessage(CODE_WRITE, "USERIO_DRIVE_DATA", int.to_bytes(value, length=2, byteorder='little'), Validate=False)
        self._drive_data = value

    @property
    def _drive_data_list(self):
        """Meant to be called from USERIOPin instance (e.g. scope.userio.pins[0].drive_data).
        """
        drive_data = self._read_drive_data()
        return util.Lister(drive_data, setter=self._set_drive_data, getter=self._read_drive_data)

    @_drive_data_list.setter
    def _drive_data_list(self, value):
        self._set_drive_data(value)

    def _set_drive_data(self, drive_data):
        data = self._setter_check_and_transform(drive_data, 9, 511)
        self.drive_data = data

    def _read_drive_data(self):
        return self._reader_2list(self.drive_data, 9)

    @property
    def status(self):
        """Returns current value of header pins. LSB=D0, MSB=CK.
        """
        raw = self.oa.sendMessage(CODE_READ, "USERIO_DRIVE_DATA", maxResp=2)
        return int.from_bytes(raw, byteorder='little')

    @property
    def _status_list(self):
        """Meant to be called from USERIOPin instance (e.g. scope.userio.pins[0].status).
        """
        return self._reader_2list(self.status, 9)

    def _bb_trig(self, pin):
        bb_trig = self._bitbanger._bb_trig_select
        if bb_trig & 0x0f == pin:
            return 'scope.bitbanger.data_pin'
        elif bb_trig >> 4 == pin:
            return 'scope.bitbanger.clock_pin'
        else:
            return False


    @property
    def pin_functions(self):
        """Returns informative list of functions for USERIO pins, as currently
        configured by :class:`scope.userio <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings>` properties.
        """
        functions = []
        for i in range(9):
            bb_override = self._bb_trig(i)
            if bb_override:
                function = bb_override

            elif self.mode == 'trace':
                function = self.trace_pins[i]

            elif self.mode == 'swo_trace_plus_debug':
                if i < 3:
                    function = self.trace_pins[i]
                else:
                    function = self.fpga_mode_definitions[self.fpga_mode][1][i]

            elif self.mode == 'fpga_debug':
                function = self.fpga_mode_definitions[self.fpga_mode][1][i]

            elif self.mode == 'normal':
                if self._clock_enabled_list[i] and self._direction_list[i]:
                    function = 'clock output'
                else:
                    function = 'data I/O'
            functions.append(function)
        return functions



class XADCSettings(util.DisableNewAttr):
    ''' Husky FPGA XADC temperature and voltage monitoring.
    When a temperature or voltage exceeds its set limits, an XADC alarm is issued, and
    the following modules are shut down:

    * :class:`scope.glitch <chipwhisperer.capture.scopes.cwhardware.ChipWhispererGlitch.GlitchSettings>`
    * :class:`scope.SAD <chipwhisperer.capture.scopes.cwhardware.ChipWhispererSAD.HuskySAD>`
    * :class:`scope.UARTTrigger <chipwhisperer.capture.trace.TraceWhisperer.UARTTrigger>`
    * :class:`scope.trace <chipwhisperer.capture.trace.TraceWhisperer.TraceWhisperer>`
    * :class:`scope.LA <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.LASettings>`

    XADC alarms are sticky: they must be manually cleared by setting :class:`status` to
    0. This re-enables modules that were shutdown by the alarm.

    Some of the alarm thresholds can be adjusted, but do so with care. The
    default thresholds are set to keep the Husky FPGA within its recommended operating range.
    If you move the thresholds beyond this range, Husky may not behave as
    intended, which can cause irreversible damage.

    Use :class:`vcc_limits()` for a full report on VCC limits and observed values.

    '''
    _name = 'Husky XADC Setting'

    def __init__(self, oaiface : OAI.OpenADCInterface):
        super().__init__()
        self.oa = oaiface
        self.drp = XilinxDRP(oaiface, "XADC_DRP_DATA", "XADC_DRP_ADDR")
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['status'] = self.status
        rtn['temp'] = '%.1f [C]' % self.temp
        rtn['max_temp'] = '%.1f [C]' % self.max_temp
        rtn['temp_trigger'] = '%.1f [C]' % self.temp_trigger
        rtn['temp_reset'] = '%.1f [C]' % self.temp_reset
        rtn['ot_temp_trigger'] = '%.1f [C]' % self.ot_temp_trigger
        rtn['ot_temp_reset'] = '%.1f [C]' % self.ot_temp_reset
        rtn['vccint'] = '%.3f [V]' % self.vccint
        rtn['vccaux'] = '%.3f [V]' % self.vccaux
        rtn['vccbram'] = '%.3f [V]' % self.vccbram
        return rtn

    def vcc_limits(self):
        """Pretty print of limits and observed values for all FPGA VCC rails.
        'margin' shows how close a rail has come to exceeding either of its limits
        (negative values meaning that a limit was exceeded).
        To get the constituent measurements as floats, use :class:`get_vcc_limit()` and :class:`get_vcc()`.
        Note that min/max values are latched until :class:`user_reset()` is called.
        """
        print('        | lower | upper | minimum  | maximum  |          |        ')
        print('rail    | limit | limit | seen     | seen     | current  | margin ')
        print('--------+-------+-------+----------+----------+----------+--------')
        for rail in ['vccint', 'vccaux', 'vccbram']:
            lower = self.get_vcc_limit(rail, 'lower')
            upper = self.get_vcc_limit(rail, 'upper')
            vmin = self.get_vcc(rail, 'min')
            vcur = self.get_vcc(rail, 'current')
            vmax = self.get_vcc(rail, 'max')
            margin = min(upper-vmax, vmin-lower)
            if vmin < lower:
                minstat = '❌'
            else:
                minstat = '✅'
            if vmax > upper:
                maxstat = '❌'
            else:
                maxstat = '✅'
            if vcur > upper or vcur < lower:
                curstat = '❌'
            else:
                curstat = '✅'
            print('%7s | %.3f | %.3f | %s %.3f | %s %.3f | %s %.3f | %.3f' % (rail, lower, upper, minstat, vmin, maxstat, vmax, curstat, vcur, margin))


    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    @property
    def status(self):
        """Read XADC alarm status bits

        :Getter: Returns status string.

        :Setter: Clear the status error bits (they are sticky).
        """
        raw = self.oa.sendMessage(CODE_READ, "XADC_STAT", maxResp=1)[0]
        stat = ''
        if raw & 1:  stat += 'Over temperature alarm, '
        if raw & 2:  stat += 'User temperature alarm, '
        if raw & 4:  stat += 'VCCint alarm, '
        if raw & 8:  stat += 'VCCaux alarm, '
        if raw & 16: stat += 'VCCbram alarm, '
        if stat == '':
            stat = 'good'
        return stat

    @status.setter
    def status(self, clear):
        self.oa.sendMessage(CODE_WRITE, "XADC_STAT", [0x0])

    def errors(self):
        if self.status == 'good':
            return False
        else:
            return self.status


    @property
    def temp(self):
        """Returns the current FPGA temperature (in celcius).
        """
        return self._get_temp(0)

    @property
    def max_temp(self):
        """Returns the highest observed FPGA temperature (in celcius) since last power-up
        or :class:`user_reset()` call.
        """
        return self._get_temp(32)

    @property
    def temp_trigger(self):
        """FPGA user temperature trigger.
        If the FPGA temperature exceeds this value, an error is flagged, and
        all clock-generating modules are shut down until the temperature
        returns below :class:`temp_reset` (since they are very power hungry).
        """
        return self._get_temp(0x50)

    @temp_trigger.setter
    def temp_trigger(self, temp):
        return self.set_temp(temp, 0x50)

    @property
    def temp_reset(self):
        """FPGA user temperature reset.
        When the FPGA temperature returns below this value, the error condition
        triggered by :class:`temp_trigger` is cleared.
        """
        return self._get_temp(0x54)

    @temp_reset.setter
    def temp_reset(self, temp):
        return self.set_temp(temp, 0x54)

    @property
    def ot_temp_trigger(self):
        """FPGA over-temperature trigger.
        If the FPGA temperature exceeds this value, an error is flagged, and
        all clock-generating modules are shut down until the temperature
        returns below :class:`ot_temp_reset` (since they are very power hungry).
        Read-only.
        """
        return self._get_temp(0x53)

    @property
    def ot_temp_reset(self):
        """FPGA over-temperature reset.
        When the FPGA temperature returns below this value, the error condition
        triggered by :class:`ot_temp_trigger` is cleared.
        Read-only.
        """
        return self._get_temp(0x57)

    def _get_temp(self, addr=0):
        """Read XADC temperature.

        Args:
            addr (int): DRP address (0: current; 32: max; 36: min)

        Returns:
            Temperature in celcius (float).
        """
        raw = self.drp.read(addr)
        return (raw>>4) * 503.975/4096 - 273.15 # ref: UG480

    def set_temp(self, temp, addr=0):
        """Set XADC temperature thresholds.

        Args:
            addr (int): DRP address
            temp (float): temperature threshold [celcius]

        Returns:
            Temperature in celcius (float).
        """
        raw = (int((temp + 273.15)*4096/503.975) << 4) & 0xffff
        self.drp.write(addr, raw)


    @property
    def vccint(self):
        """Returns the current VCCint value.
        Use :class:`get_vcc()` to get max/min values seen.
        """
        return self.get_vcc('vccint')

    @property
    def vccaux(self):
        """Returns the current VCCaux value.
        Use :class:`get_vcc()` to get max/min values seen.
        """
        return self.get_vcc('vccaux')

    @property
    def vccbram(self):
        """Returns the current VCCbram value.
        Use :class:`get_vcc()` to get max/min values seen.
        """
        return self.get_vcc('vccbram')

    def get_vcc(self, rail='vccint', value='current'):
        """Read XADC VCC. 
        Can report current value, or minimum/maximum value seen
        since power-up / last :class:`user_reset()` call.

        Args:
            rail (string): 'vccint', 'vccaux', or 'vccbram'
            value (string): 'current', 'min', or 'max'

        Returns:
            voltage (float).
        """
        if rail == 'vccint':
            addr = 1
        elif rail == 'vccaux':
            addr = 2
        elif rail == 'vccbram':
            if value == 'current':
                addr = 6
            else:
                addr = 3
        else:
            raise ValueError("Invalid rail")
        if value == 'current':
            pass
        elif value == 'min':
            addr += 0x24
        elif value == 'max':
            addr += 0x20
        else:
            raise ValueError("Invalid measurement request")

        raw = self.drp.read(addr)
        return (raw>>4)/4096 * 3 # ref: UG480

    def get_vcc_limit(self, rail='vccint', limit='upper'):
        """Get XADC VCC upper or lower limit (for firing alarm).

        Args:
            rail (string): 'vccint', 'vccaux', or 'vccbram'
            limit (string): 'upper', 'lower'

        Returns:
            voltage (float).
        """
        if rail == 'vccint':
            addr = 0x51
        elif rail == 'vccaux':
            addr = 0x52
        elif rail == 'vccbram':
            addr = 0x58
        else:
            raise ValueError("Invalid rail")
        if limit == 'lower':
            addr += 4
        elif limit == 'upper':
            pass
        else:
            raise ValueError("Invalid limit")
        raw = self.drp.read(addr)
        return (raw>>4)/4096 * 3 # ref: UG480

    def _set_vcc_limit(self, value, rail='vccint', limit='upper'):
        """Set XADC vcc limit.

        Args:
            value (float): voltage limit
            rail (string): 'vccint', 'vccaux', or 'vccbram'
            limit (string): 'upper', 'lower'
        """
        if rail == 'vccint':
            addr = 0x51
        elif rail == 'vccaux':
            addr = 0x52
        elif rail == 'vccbram':
            addr = 0x58
        else:
            raise ValueError("Invalid rail")
        if limit == 'lower':
            addr += 4
        elif limit == 'upper':
            pass
        else:
            raise ValueError("Invalid limit")
        raw = int(value /3*4096) << 4 # ref: UG480
        if raw > 2**16:
            raise ValueError("Out of range")
        self.drp.write(addr, raw)

    def _enable_vcc_alarms(self, enable):
        """Enable or disable XADC VCC alarms. Use with care!

        Disabling VCC alarms removes an important layer of protection.
        Instead of disabling the VCC alarms, consider adjusting the limits
        with _set_vcc_limit(), or, if the target power-up is what is causing
        the alarms, adjusting the soft power-on parameters with
        :meth:`scope.io.husky_soft_poweron  <chipwhisperer.capture.scopes.cwhardware.ChipWhispererExtra.GPIOSettings.husky_soft_poweron>`
        """
        addr = 0x41
        val = self.drp.read(addr)
        # VCC alarms are disabled when bits 2, 3 and 8 are set, enabled when they are clear (ref: UG480 Table 3.5)
        mask_enable = 2**16-1 - 2**2 - 2**3 - 2**8
        mask_disable = 2**2 + 2**3 + 2**8
        if enable:
            val &= mask_enable
        else:
            val |= mask_disable
        self.drp.write(addr, val)

    def user_reset(self):
        """Reset XADC: clears stored min/max temperature and voltage measurements.
        Does not clear active error flags; set :class:`status` to 0 to clear error flags.
        """
        self.drp.write(0x03, 0xeeee) # (ref: UG480, "XADC JTAG Reset")


class LASettings(util.DisableNewAttr):
    ''' Husky logic analyzer settings. For accessing recorded glitch generation, IO, and USERIO signals.
    Example::

        scope.LA.enabled = True
        scope.LA.clk_source = 'usb'
        scope.LA.oversampling_factor = 2
        scope.LA.capture_group = 'USERIO 20-pin'
        scope.LA.capture_depth = 128

        scope.LA.armed()
        scope.LA.trigger_now()
        raw_data = scope.LA.read_capture_data()
        userio_d0 = scope.LA.extract(raw_data, 0)
        userio_d1 = scope.LA.extract(raw_data, 1)
        userio_ck = scope.LA.extract(raw_data, 8)

    '''
    _name = 'Husky Logic Analyzer Setting'

    def __init__(self, oaiface : OAI.OpenADCInterface, mmcm, scope):
        # oaiface = OpenADCInterface
        super().__init__()
        self.oa = oaiface
        self._mmcm = mmcm
        self._scope = scope
        self._is_husky_plus = False
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['present'] = self.present
        rtn['enabled'] = self.enabled
        rtn['clkgen_enabled'] = self.clkgen_enabled
        rtn['locked'] = self.locked
        rtn['clk_source'] = self.clk_source
        rtn['trigger_source'] = self.trigger_source
        rtn['oversampling_factor'] = self.oversampling_factor
        rtn['sampling_clock_frequency'] = self.sampling_clock_frequency
        rtn['downsample'] = self.downsample
        rtn['capture_group'] = self.capture_group
        rtn['capture_depth'] = self.capture_depth
        if self.enabled:
            rtn['errors'] = self.errors
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    def read_capture(self, source, length=None):
        """Returns captured data for specified signal source.
        What you get depends on the capture group; see the capture_group documentation.

        Args:
           source (int): signal to read
           length (int): number of byte to read. If unspecified, returns the full capture size
                         (which is implementation-dependent and can be learned from capture_depth)

        Returns:
            Numpy array of binary values.

        Raises:
           ValueError: invalid source
        """
        scope_logger.error("Obsolete. Use read_capture_data() and extract() instead.")

    def reset_MMCM(self):
        """Reset the sampling clock's MMCM.
        """
        self._mmcm.drp.reset()


    def trigger_now(self):
        """Trigger the capture manually.
        """
        self.oa.sendMessage(CODE_WRITE, "LA_MANUAL_CAPTURE", [1], Validate=False)
        self.oa.sendMessage(CODE_WRITE, "LA_MANUAL_CAPTURE", [0], Validate=False)


    @staticmethod
    def _bytes_to_bits(bytelist):
        bitlist = []
        for x in bytelist:
            for bit in range(8):
                bitlist.append(x & 0x01)
                x = x >> 1
        return np.asarray(bitlist)

    @property
    def present(self):
        """ Return whether the logic analyzer functionality is present in this build (True or False).
        If it is not present, none of the functionality of this class is available.
        """
        raw = self.oa.sendMessage(CODE_READ, "COMPONENTS_EXIST", Validate=False, maxResp=1)[0]
        if raw & 1:
            return True
        else:
            return False

    @property
    def locked(self):
        """ Return whether the sampling clock MMCM is locked (True or False).
        """
        raw = self.oa.sendMessage(CODE_READ, "LA_ENABLED", Validate=False, maxResp=1)[0]
        if raw & 2:
            return True
        else:
            return False

    @property
    def max_capture_depth(self):
        """Maximum capture depth.
        """
        if self._is_husky_plus:
            return 65535
        else:
            return 16376

    @property
    def capture_depth(self):
        """Number of bits captured for each signal.

        Args:
            depth (int): capture <depth> samples of each signal. 16-bit value, in range [1, scope.LA.max_capture_depth]
        """
        raw = self.oa.sendMessage(CODE_READ, "LA_CAPTURE_DEPTH", Validate=False, maxResp=2)
        return int.from_bytes(raw, byteorder='little')

    @capture_depth.setter
    def capture_depth(self, depth):
        if depth > self.max_capture_depth:
            raise ValueError("Maximum capture depth is %s" % self.max_capture_depth)
        if depth % 2:
            depth -= 1
        self.oa.sendMessage(CODE_WRITE, "LA_CAPTURE_DEPTH", int.to_bytes(depth, length=2, byteorder='little'), Validate=False)


    @property
    def enabled(self):
        """Controls whether this block is active for recording data. The LA
        and trace components share the same FPGA storage, so they cannot be
        simultaneously enabled.
        """
        raw = self.oa.sendMessage(CODE_READ, "LA_ENABLED", Validate=False, maxResp=1)[0] & 0x01
        if raw:
            return True
        else:
            return False

    @enabled.setter
    def enabled(self, enable):
        raw = self.oa.sendMessage(CODE_READ, "LA_ENABLED", Validate=False, maxResp=1)[0]
        if enable:
            val = raw | 0x01
            # only one of Trace/LA can be enabled at once:
            if self._scope.trace.enabled and self._scope.trace.capture.mode != 'off':
                scope_logger.warning("Can't enable scope.LA and scope.trace simultaneously; turning off scope.trace.")
                self._scope.trace.enabled = False
            self.clkgen_enabled = True
        else:
            val = raw & 0xfe
        self.oa.sendMessage(CODE_WRITE, "LA_ENABLED", [val], Validate=False)
        self.reset_MMCM()

    @property
    def clkgen_enabled(self):
        """Controls whether the Xilinx MMCM used to generate the sampling clock
        is powered on or not.  7-series MMCMs are power hungry. In the Husky
        FPGA, MMCMs are estimated to consume close to half of the FPGA's power.
        If you run into temperature issues and don't require the logic analyzer
        or debug trace functionality, power down this MMCM.
        """
        raw = self.oa.sendMessage(CODE_READ, "LA_POWERDOWN", Validate=False, maxResp=1)[0]
        if raw == 1:
            return False
        elif raw == 0:
            return True
        else:
            raise ValueError("Unexpected: read %d" % raw)

    @clkgen_enabled.setter
    def clkgen_enabled(self, enable):
        if enable:
            val = [0]
        else:
            val = [1]
        self.oa.sendMessage(CODE_WRITE, "LA_POWERDOWN", val, Validate=False)
        self.reset_MMCM()


    @property
    def clk_source(self):
        """The clock signal that the logic analyzer is using to generate its sampling clock.

        There are three different sources:
         * "target": The clock from the target device (from HS1 or AUX, as per scope.clock.clkgen_src)
         * "usb": The 96 MHz internal USB clock.
         * "pll": Husky's on-board PLL clock.

        :Getter:
           Return the clock signal currently in use

        :Setter:
           Change the clock source

        Raises:
           ValueError: New value not one of "target", "usb" or "pll"
        """

        return self._getClkSource()

    @clk_source.setter
    def clk_source(self, enable):
        self._setClkSource(enable)
        self.reset_MMCM()
        # Wait a bit before exiting: without this, setting clk_source() and
        # then oversampling_factor() immediately after can result in an
        # unlocked PLL because the new clock frequency won't be reflected in
        # source_clock_frequency yet, which will lead to incorrect PLL
        # parameters. At worse, the PLL will be locked but not at the requested
        # frequency!
        time.sleep(0.25)

    def arm(self):
        """Arm the logic analyzer.

        Raises:
           Exception: LA clock is not locked.
        """
        if not self.locked:
            raise Exception("LA clock is not locked! Review your settings. If everything looks good, you may need to re-specify scope.LA.oversampling_factor.")
        self.oa.sendMessage(CODE_WRITE, "LA_ARM", [1], Validate=False)

    @property
    def errors(self):
        """Indicate whether internal FPGA errors have occurred.
           Write to clear.
        """
        # note this does (almost) the exact same thing as scope.trace.errors
        stat = ""
        fifo_stat = self.oa.sendMessage(CODE_READ, self._scope.trace.REG_SNIFF_FIFO_STAT, Validate=False, maxResp=1)[0]
        if (fifo_stat & 2) >> 1:
            stat += "FIFO underflow, "
        if (fifo_stat & 16) >> 4:
            stat += "FIFO overflow, "
        if stat:
            return stat
        else:
            return None

    @errors.setter
    def errors(self, val):
        self.oa.sendMessage(CODE_WRITE, self._scope.trace.REG_CLEAR_ERRORS, [1], Validate=False)

    def read_capture_data(self, check_empty=False):
        """Read captured data.

        Returns: List of captured entries. Each list element is itself a 3-element list,
        containing the 3 bytes that make up a capture entry. Use extract() to parse.

        """
        # note this does the exact same thing as scope.trace.read_capture_data()
        data = []
        # first check for FIFO to not be empty:
        assert self.fifo_empty() == False, 'FIFO is empty'

        # then check that no underflows or overflows occurred during capture:
        if  self.errors:
            scope_logger.warning("FIFO errors occured: %s" % self.errors)

        if check_empty:
            # check if FIFO is empty before reading every word... much slower! for development
            while not self.fifo_empty():
                data.append(self.oa.sendMessage(CODE_READ, self._scope.trace.REG_SNIFF_FIFO_RD, Validate=False, maxResp=4)[1:4])
        else:
            # 4 bytes of REG_SNIFF_FIFO_RD carries 2 samples of each signal, hence we read capture_depth*2 bytes:
            raw = self.oa.sendMessage(CODE_READ, self._scope.trace.REG_SNIFF_FIFO_RD, Validate=False, maxResp=self.capture_depth*2)
            for i in range(self.capture_depth//2):
                data.append(raw[i*4+1: i*4+4])

        if len(data): # maybe we only got empty reads
            if data[-1][2] & 2**self._scope.trace.FE_FIFO_STAT_UNDERFLOW:
                scope_logger.warning("Capture FIFO underflowed!")

        return data

    @staticmethod
    def extract(raw, index):
        """
        """
        bitlist = []
        if index == 0:
            byte_index = 0
            bit0_index = 0
            bit1_index = 1
        elif index == 1:
            byte_index = 0
            bit0_index = 2
            bit1_index = 3
        elif index == 2:
            byte_index = 0
            bit0_index = 4
            bit1_index = 5
        elif index == 3:
            byte_index = 0
            bit0_index = 6
            bit1_index = 7
        elif index == 4:
            byte_index = 1
            bit0_index = 0
            bit1_index = 1
        elif index == 5:
            byte_index = 1
            bit0_index = 2
            bit1_index = 3
        elif index == 6:
            byte_index = 1
            bit0_index = 4
            bit1_index = 5
        elif index == 7:
            byte_index = 1
            bit0_index = 6
            bit1_index = 7
        elif index == 8:
            byte_index = 2
            bit0_index = 0
            bit1_index = 1
        else:
            raise ValueError
        for i, x in enumerate(raw):
            bitlist.append((x[byte_index] >> bit1_index) & 0x01)
            bitlist.append((x[byte_index] >> bit0_index) & 0x01)
        return np.asarray(bitlist)

    def fifo_empty(self):
        """Returns True if the capture FIFO is empty, False otherwise.
        """
        # note this does the exact same thing as scope.trace.fifo_empty()
        if self.oa.sendMessage(CODE_READ, self._scope.trace.REG_SNIFF_FIFO_STAT, Validate=False, maxResp=1)[0] & 1:
            return True
        else:
            return False


    @property
    def trigger_source(self):
        """The trigger used by the logic analyzer to capture.

        There are several different sources:

        * "glitch": The internal glitch enable trigger, one cycle earlier than the
          glitch output seen when scope.glitch.output = 'enable_only'. This
          signal is in the MMCM1 clock glitch domain.
        * "capture": The internal ADC capture trigger.
        * "glitch_source": The internal manual glitch trigger in the source or target clock
          domain (as per scope.glitch.clk_src), which accounts for 
          scope.glitch.ext_offset but not scope.glitch.offset. Should
          only be used with scope.glitch.trigger_src = 'manual'; may
          not fire reliably with other settings.
        * "glitch_trigger": The internal glitch trigger in the MMCM1 clock domain.
        * "trigger_glitch": The trigger *for* the glitch module (aka scope.trigger.triggers).
        * "HS1": The HS1 input clock.
        * "rising_userio_d[0-7]": a rising edge (0->1) on a USERIO pin
        * "falling_userio_d[0-7]": a falling edge (1->0) on a USERIO pin
        * "rising_tio[0-3]": a rising edge (0->1) on a tio pin
        * "failling_tio[0-3]": a falling edge (0->1) on a tio pin

        In addition, capture can be triggered manually, irrespective of the trigger_source
        setting, by calling :class:`trigger_now`.

        :Getter:
           Return the trigger source currently in use

        :Setter:
           Change the trigger source

        Raises:
           ValueError: New value not one of the options listed above.
        """

        return self._getTriggerSource()

    @trigger_source.setter
    def trigger_source(self, enable):
        self._setTriggerSource(enable)

    @property
    def oversampling_factor(self):
        """Multiplier for the sampling clock.
        Can be fractional, but an integer is probably what you want.
        Whether the desired oversampling factor can be achieved depends on the
        source clock frequency; a warning is issued if it can't.

        :Getter:
           Return the actual oversampling factor.

        :Setter:
           Set the desired oversampling factor.
        """
        return self._getOversamplingFactor()

    @oversampling_factor.setter
    def oversampling_factor(self, factor):
        self._setOversamplingFactor(factor)

    @property
    def _warning_frequency(self):
        """Convenience function to access scope.trace.clock._warning_frequency
        """
        return self._scope.trace.clock._warning_frequency

    @_warning_frequency.setter
    def _warning_frequency(self, freq):
        self._scope.trace.clock._warning_frequency = freq

    @property
    def sampling_clock_frequency(self):
        """Report the actual sampling clock frequency.
        """
        return self._scope.trace.clock.swo_clock_freq

    @property
    def source_clock_frequency(self):
        """Report the actual clock frequency of the input clock to the shared LA/trace MMCM.
        """
        raw = int.from_bytes(self.oa.sendMessage(CODE_READ, "LA_SOURCE_FREQ", Validate=False, maxResp=4), byteorder='little')
        freq = raw * 96e6 / float(pow(2,23))
        return freq

    @property
    def downsample(self):
        """Downsample setting.

        Args:
            downsample (int): capture every <downsample> samples. 16-bit value, in range [1, 2**16].
        """
        return self._getDownsample()

    @downsample.setter
    def downsample(self, factor):
        self._setDownsample(factor)


    @property
    def capture_group(self):
        """Sets which group of signals are captured.

        There are three groups. The signals captured for each group are as follows:

        * 'glitch' (group 0):

          #. glitch output
          #. source clock of glitch module
          #. glitch internal MMCM1 (offset) output
          #. glitch internal MMCM2 (width) output
          #. glitch go internal signal
          #. capture trigger
          #. glitch enable
          #. manual glitch trigger in source clock domain (e.g. signal 1 of this group)
          #. glitch trigger in MMCM1 clock domain

        * 'CW 20-pin' (group 1):

          #. IO1
          #. IO2
          #. IO3
          #. IO4
          #. HS1
          #. HS2
          #. AUX MCX
          #. TRIG MCX
          #. ADC sampling clock

        * 'USERIO 20-pin' (group 2):

          #. D0
          #. D1
          #. D2
          #. D3
          #. D4
          #. D5
          #. D6
          #. D7
          #. CK

        * 'trigger debug' (group 3) - for development only, definitions in Verilog source
        * 'internal trace 1' (group 4) - for development only, definitions in Verilog source
        * 'internal trace 2' (group 5) - for development only, definitions in Verilog source
        * 'glitch debug' (group 6) - for development only, definitions in Verilog source

        :Getter:
           Return the capture group currently in use.

        :Setter:
           Change the capture group.

        Raises:
           ValueError: invalid capture group.
        """
        return self._getCaptureGroup()

    @capture_group.setter
    def capture_group(self, group):
        self._setCaptureGroup(group)


    def _setClkSource(self, source):
        if source == 'target':
            val = [0]
        elif source == 'usb':
            val = [1]
        elif source == 'pll':
            val = [2]
        else:
            raise ValueError("Must be one of 'target', 'usb', or 'pll'")
        self.oa.sendMessage(CODE_WRITE, "LA_CLOCK_SOURCE", val, Validate=False)

    def _getClkSource(self):
        raw = self.oa.sendMessage(CODE_READ, "LA_CLOCK_SOURCE", Validate=False, maxResp=1)[0]
        if raw == 0:
            return 'target'
        elif raw == 1:
            return 'usb'
        elif raw == 2:
            return 'pll'
        else:
            raise ValueError("Unexpected: read %d" % raw)

    def _setTriggerSource(self, source):
        if source == 'glitch':
            val = [0]
        elif source == 'capture':
            val = [1]
        elif source == 'glitch_source':
            val = [2]
        elif source == 'HS1':
            val = [3]
        elif source == 'glitch_trigger':
            val = [4]
        elif source == 'trigger signal 0':
            val = [5]
        elif source == 'trigger signal 1':
            val = [6]
        elif source == 'trigger_glitch':
            val = [7]
        elif 'rising_userio_d' in source:
            val = [0x08 + int(source[-1])]
        elif 'falling_userio_d' in source:
            val = [0x18 + int(source[-1])]
        elif 'rising_tio' in source:
            val = [0x20 + int(source[-1]) - 1]
        elif 'falling_tio' in source:
            val = [0x28 + int(source[-1]) - 1]
        else:
            raise ValueError("Must be one of 'glitch', 'capture', 'glitch_source', 'HS1', '[rising|falling]_userio_d[0-7]', or [rising|falling]_tio[0-3]")
        self.oa.sendMessage(CODE_WRITE, "LA_TRIGGER_SOURCE", val, Validate=False)

    def _getTriggerSource(self):
        raw = self.oa.sendMessage(CODE_READ, "LA_TRIGGER_SOURCE", Validate=False, maxResp=1)[0]
        if raw == 0:
            return 'glitch'
        elif raw == 1:
            return 'capture'
        elif raw == 2:
            return 'glitch_source'
        elif raw == 3:
            return 'HS1'
        elif raw == 4:
            return 'glitch_trigger'
        elif raw == 5:
            return 'trigger signal 0'
        elif raw == 6:
            return 'trigger signal 1'
        elif raw == 7:
            return 'trigger_glitch'
        elif raw in range(0x8, 0x10):
            return 'rising_userio_d' + str(raw & 0x07)
        elif raw in range(0x10, 0x20):
            return 'falling_userio_d' + str(raw & 0x07)
        elif raw in range(0x20, 0x24):
            return 'rising_tio' + str((raw & 0x03) + 1)
        elif raw in range(0x28, 0x2c):
            return 'falling_tio' + str((raw & 0x03) + 1)
        else:
            raise ValueError("Unexpected: read %d" % raw)

    def _setOversamplingFactor(self, factor):
        self._scope.trace.clock.swo_clock_freq = self.source_clock_frequency * factor

    def _getOversamplingFactor(self):
        return self._mmcm.get_mul() // (self._mmcm.get_main_div() * self._mmcm.get_sec_div())

    def _setDownsample(self, factor):
        if factor < 1 or factor > 2**16:
            raise ValueError("Error: downsample value out of range.")
        factor -= 1
        self.oa.sendMessage(CODE_WRITE, "LA_DOWNSAMPLE", int.to_bytes(factor, length=2, byteorder='little'), Validate=False)

    def _getDownsample(self):
        return int.from_bytes(self.oa.sendMessage(CODE_READ, "LA_DOWNSAMPLE", Validate=False, maxResp=2), byteorder='little') + 1


    def _setCaptureGroup(self, group):
        if group == 'glitch':
            num = 0
        elif group == 'CW 20-pin':
            num = 1
        elif group == 'USERIO 20-pin':
            num = 2
        elif group == 'trigger debug':
            num = 3
        elif group == 'internal trace 1':
            num = 4
        elif group == 'internal trace 2':
            num = 5
        elif group == 'glitch debug':
            num = 6
        else:
            raise ValueError("invalid group name")
        self.oa.sendMessage(CODE_WRITE, "LA_CAPTURE_GROUP", [num], Validate=False)

    def _getCaptureGroup(self):
        num = self.oa.sendMessage(CODE_READ, "LA_CAPTURE_GROUP", Validate=False, maxResp=1)[0]
        if num == 0:
            group = 'glitch'
        elif num == 1:
            group = 'CW 20-pin'
        elif num == 2:
            group = 'USERIO 20-pin'
        elif num == 3:
            group = 'trigger debug'
        elif num == 4:
            group = 'internal trace 1'
        elif num == 5:
            group = 'internal trace 2'
        elif num == 6:
            group = 'glitch debug'
        else:
            raise ValueError("invalid group name")
        return group


class ADS4128Settings(util.DisableNewAttr):
    ''' Husky ADS4128 ADC settings. Mostly for testing, not needed in normal use.
    '''
    _name = 'Husky ADS4128 ADC Setting'

    def __init__(self, oaiface : OAI.OpenADCInterface):
        super().__init__()
        # oaiface = OpenADCInterface
        self.oa = oaiface
        self.adc_reset()
        self.set_defaults()
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['mode'] = self.mode
        rtn['low_speed'] = self.low_speed
        rtn['hi_perf'] = self.hi_perf
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    def adc_reset(self):
        """Resets the ADC.
        Note this is done by the FPGA - see reg_husky_adc.v
        """
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x41])
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0xc1])
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x41])

    def _adc_write(self, address, data):
        """Write ADC configuration register.
        Note this is done by the FPGA - see reg_husky_adc.v
        """
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x41])
        for i in range(8):
            bit = (address >> (7-i)) & 1
            val = (bit << 4) + 1
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [val])
            val = (bit << 4) + 0
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [val])

        for i in range(8):
            bit = (data >> (7-i)) & 1
            val = (bit << 4) + 1
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [val])
            val = (bit << 4) + 0
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [val])
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [val])

    def _adc_read(self, address):
        """Read ADC configuration register.
        Note this is done by the FPGA - see reg_husky_adc.v
        """
        # first, enable readout:
        self._adc_write(0x0, 0x1)
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x41])
        for i in range(8):
            bit = (address >> (7-i)) & 1
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [(bit<<4) + 1])
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [(bit<<4) + 0])
        for i in range(8):
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x01])
            self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x02])
        self.oa.sendMessage(CODE_WRITE, "CW_ADC_CTRL", [0x41])
        data =  self.oa.sendMessage(CODE_READ, "CW_ADC_CTRL", maxResp=1)[0]
        # finished, disable readout:
        self._adc_write(0x0, 0x0)
        return data

    def set_defaults(self):
        self.set_normal_settings()
        self.set_low_speed(True)
        self.set_hi_perf(2)
        self._adc_write(0x3d, 0xc0) # set offset binary output
        self._adc_write(address=0x41, data=0b0000_1_01_1) # clock rise: setup +500ps, hold -500ps
        self._adc_write(address=0x42, data=0b00_00_1_000) # clock fall: default

    def set_normal_settings(self):
        self._adc_write(0x42, 0x00) # enable low-latency mode
        self._adc_write(0x25, 0x00) # disable test patterns
        self._adc_write(0x3d, 0xc0) # set offset binary output
        self._mode_cached = "normal"

    def set_test_settings(self, mode):
        self._adc_write(0x42, 0x08) # disable low-latency mode
        self._adc_write(0x3d, 0xc0) # set offset binary output
        if mode == 'test ramp':
            self._adc_write(0x25, 0x04) # set test pattern to ramp
        elif mode == 'test alternating':
            self._adc_write(0x25, 0x03) # set test pattern to alternating 0x555 / 0xaaa
        else:
            raise ValueError
        self._mode_cached = mode

    def set_low_speed(self, val):
        if val:
            self._adc_write(0xdf, 0x30)
            self._low_speed_cached = True
        else:
            self._adc_write(0xdf, 0x00)
            self._low_speed_cached = False

    def set_hi_perf(self, val):
        if val == 0:
            self._adc_write(0x03, 0x00)
            self._adc_write(0x4a, 0x00)
        elif val == 1:
            self._adc_write(0x03, 0x03)
            self._adc_write(0x4a, 0x00)
        elif val == 2:
            self._adc_write(0x03, 0x03)
            self._adc_write(0x4a, 0x01)
        else:
            raise ValueError("Must be 0, 1 or 2")
        self._hi_perf_cached = val


    @property
    def mode(self):
        """The current mode of the ADC.

        :Getter: Return the current ADC operating mode ("normal" or "test ramp")

        :Setter: Set the operating mode.

        Raises:
            ValueError: if mode not one of "normal" or "test ramp"
        """
        return self._mode_cached

    @mode.setter
    def mode(self, val):
        return self.setMode(val)

    def setMode(self, mode):
        if mode == "normal":
            self.set_normal_settings()
            self.oa.sendMessage(CODE_WRITE, "NO_CLIP_ERRORS", [0])
        elif mode in ("test ramp", "test alternating"):
            self.set_test_settings(mode)
            self.oa.sendMessage(CODE_WRITE, "NO_CLIP_ERRORS", [1])
        else:
            raise ValueError("Invalid mode, only 'normal', 'test ramp' or 'test alternating' allowed")


    @property
    def low_speed(self):
        """Whether the ADC is set to "low speed" operation; recommended for sampling rates below 80 MS/s.

        :Getter: Return whether the ADC is set to low speed mode.

        :Setter: Set the low speed mode.
        """
        return self._low_speed_cached

    @low_speed.setter
    def low_speed(self, val):
        return self.set_low_speed(val)

    @property
    def hi_perf(self):
        """High performance mode setting.
        Valid values are 0 (high performance off), 1, and 2. See ADS4128 datasheet for more information.

        :Getter: Return the high performance mode setting.

        :Setter: Set the high performance mode setting.
        """
        return self._hi_perf_cached

    @hi_perf.setter
    def hi_perf(self, val):
        return self.set_hi_perf(val)
