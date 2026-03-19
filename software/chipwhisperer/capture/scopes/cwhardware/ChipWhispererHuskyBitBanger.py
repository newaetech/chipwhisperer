#!/usr/bin/python
# -*- coding: utf-8 -*-
#
# Copyright (c) 2025, NewAE Technology Inc
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
from .. import _OpenADCInterface as OAI

from ....logging import *
import time
import datetime
import math

CODE_READ = 0x80
CODE_WRITE = 0xC0


class OneWireHelper(util.DisableNewAttr):
    ''' Helper functions for bit-banging a 1-wire interface.
    Basic functions for sending a reset/pulse detect, as well as arbitrary
    reads and writes. Meant to be overloaded for your particular target. For
    example, if the command for reading your target's ROM code is 0x33, and
    its family code is 0x45, you could do::

        class My1wireTarget(cw.capture.scopes.cwhardware.ChipWhispererHuskyBitBanger.OneWireHelper):
            def __init__(self, bitbanger):
                super().__init__(bitbanger)
            def read_rom_code(self, verbose=False):
                return super().read_rom_code(0x33, expected_family_code=0x45, verbose=verbose)
            # ... other useful higher-level functions as needed ...

        target = My1wireTarget(scope.bitbanger)
        target.send_rst_pd()
        target.read_rom_code()
                    
    **The methods in this class should be considered examples; they may or may
    not work on all targets. You may need/want to customize them for your
    particular use case.**
    '''
    _name = '1-wire helper functions'

    def __init__(self, bb):
        super().__init__()
        self.bb = bb
        self.disable_newattr()


    def set_defaults(self):
        """ Sets normally useful defaults for 1-wire bit-banging:

        * :class:`BitBanger.drive_edge` = 'rising'
        * :class:`BitBanger.check_edge` = 'falling'
        * :class:`BitBanger.inactive_data` = 1
        * :class:`BitBanger.inactive_state` = 'high_z'

        """
        self.bb.drive_edge = 'rising'
        self.bb.check_edge = 'falling'
        self.bb.inactive_data = 1
        self.bb.inactive_state = 'high_z'


    @staticmethod
    def get_rst_pd(rst=56, wait=6, check=2):
        total = rst + wait + check
        if total % 8:
            pad = 8 - total%8
        else:
            pad = 0
        cmdbits = [0]*(rst+wait+check+pad)
        hizbits = [0]*rst
        hizbits.extend([1]*(wait+check+pad))
        penbits = [1]*rst
        penbits.extend([0]*wait)
        penbits.extend([1]*check)
        penbits.extend([0]*pad)
        renbits = [0]*(rst+wait+check+pad)
        trgbits = [0]*len(renbits)
        return BitBangerPacket(cmdbits, hizbits, penbits, renbits, trgbits)

    def send_rst_pd(self, rst=56, wait=6, check=2, trigger_en=True, trigger_bit=None):
        """ Sends a reset and checks for the target's pulse detect response.

        Args:
            rst (int): number of timeslots for the low reset pulse.
            wait (int): after the reset pulse, number of timeslots to wait before checking for the target's response.
            check (int): number of timeslots that the target's response is checked.
            trigger_en (bool): whether a trigger should be issued at the end of the command.
            trigger_bit (int): timeslot on which to issue the trigger; if None, the packet's last timeslot is used.

        """
        packet = self.get_rst_pd(rst=rst, wait=wait, check=check)
        if trigger_bit != None:
            packet.trig_bits[trigger_bit] = 1
        self.bb.sendpacket(packet, trigger_en=trigger_en)
        assert self.bb.matched, 'no presence detect'


    @staticmethod
    def crc8(data):
        """ Calculates the 8-bit CRC used in the ROM ID.
        """
        crc = 0
        for byte in data:
            crc ^= byte
            for _ in range(8):
                if crc & 0x01:
                    crc = (crc >> 1) ^ 0x8C
                else:
                    crc >>= 1
                crc &= 0xFF
        return crc

    def read_rom_code(self, read_rom_command, expected_family_code=None, verbose=False):
        """ Read the target's ROM code.

        Args:
            read_rom_command (int): target's "read ROM" command
            expected_family_code (optional, int): if provided, an error will be raised if a different family code is read
            verbose (bool): set verbose mode

        """

        self.send_rst_pd(trigger_en=False)
        self.bb.sendpacket(OneWireHelper._get_read_rom(read_rom_command))
        romcode = OneWireHelper._check_read_rom(self.bb.recorded_data(), expected_family_code, verbose)
        return hex(romcode)


    @staticmethod
    def get_generic_write_read(wbytes, rbytes, w1slot=1, w0slot=6, tslot=7, gap=0):
        """Get parameters for sending a desired generic 1-wire write and/or read transaction.
        Use this to build the read/write commands that you'll commonly use.

        Args:
            wbytes (list of ints): Bytes to write. Can be an empty list for a read-only request.
            rbytes (int): Number of bytes to read. Can be 0 for a write-only request.
            w1slot (int): Number of timeslots that line is driven low when sending a "1" bit.
            w0slot (int): Number of timeslots that line is driven low when sending a "0" bit.
            tslot (int): Total number of timeslots per bit.
            gap (int): number of idle timeslots between each byte

        Returns:
            BitBangerPacket object that can be fed to :class:`BitBanger.sendpacket`.
        """

        cmdbits = []
        hizbits = []
        renbits = []
        # writes:
        for cmd in wbytes:
            for i in range(8):
                if cmd & 2**i:
                    # write 1
                    cmdbits.extend([0]*tslot)
                    hizbits.extend([0]*w1slot)
                    hizbits.extend([1]*(tslot-w1slot))
                    renbits.extend([0]*tslot)
                else:
                    # write 0
                    cmdbits.extend([0]*tslot)
                    hizbits.extend([0]*w0slot)
                    hizbits.extend([1]*(tslot-w0slot))
                    renbits.extend([0]*tslot)
            if gap:
                cmdbits.extend([0]*gap)
                hizbits.extend([1]*gap)
                renbits.extend([0]*gap)

        # reads:
        for i in range(8*rbytes):
            cmdbits.extend([0]*tslot)
            hizbits.extend([0])
            hizbits.extend([1]*(tslot-1))
            renbits.extend([0]*2)
            renbits.extend([1])
            renbits.extend([0]*(tslot-3))
            if gap and (i%8 == 0):
                cmdbits.extend([0]*gap)
                hizbits.extend([1]*gap)
                renbits.extend([0]*gap)

        penbits = [1]*len(cmdbits)
        trigbits = [0]*len(cmdbits)
        return BitBangerPacket(cmdbits, hizbits, penbits, renbits, trigbits)


    @staticmethod
    def _get_read_rom(read_rom_command, w1slot=1, w0slot=6, tslot=7):
        return OneWireHelper.get_generic_write_read([read_rom_command], 8, w1slot, w0slot, tslot)


    @staticmethod
    def _check_read_rom(raw, expected_family_code, verbose=True):
        family_code = raw & 0xff
        if expected_family_code and (family_code != expected_family_code):
            raise ValueError('Expected family code: %x; got %x' % (expected_family_code, family_code))
        else:
            if verbose: print('Correct family code: %x' % family_code)
        romcode = (raw >> 8) & 2**48-1
        if verbose: print('ROM code: 0x%x' % romcode)
        crc = (raw >> 56) & 0xff
        # TODO: self.crc8 instead?
        calc_crc =  OneWireHelper.crc8(list(int.to_bytes(raw & 2**48-1, length=7, byteorder='little')))
        if calc_crc != crc:
            raise ValueError('Incorrect CRC! Expected 0x%x, got 0x%x' % (calc_crc, crc))
        else:
            if verbose: print('Correct CRC: 0x%x' % crc)
        return romcode



class SWDHelper(util.DisableNewAttr):
    ''' Helper functions for bit-banging a synchronous SWD interface.
    Meant to be overloaded for your particular target.

    The methods in this class should be considered examples that have been
    verified to work on some of our targets (STM32F3, SAM4S, RP2350); they
    may or may not work on other targets. You may also need/want to
    customize them for your particular use case.

    The purpose of this class is to demonstrate triggering on precisely-timed
    SWD exchanges; **it is not to build a full-fledged debugger.**

    **Going beyond what's shown here requires bit-level SWD expertise!**
    Be sure to consult the ARM Debug Interface specification
    that applies to your specific target (e.g. IHI 0031, IHI 0074...).

    '''
    _name = 'SWD helper functions'

    def __init__(self, bb):
        super().__init__()
        self.bb = bb
        self.idcode = None
        self.disable_newattr()


    def set_defaults(self):
        """ Sets normally useful defaults for SWD bit-banging:

        * :class:`BitBanger.drive_edge` = 'falling'
        * :class:`BitBanger.check_edge` = 'falling'
        * :class:`BitBanger.inactive_data` = 0
        * :class:`BitBanger.inactive_state` = 'driven'

        """
        self.bb.drive_edge = 'falling'
        self.bb.check_edge = 'falling'
        self.bb.inactive_data = 0
        self.bb.inactive_state = 'driven'

    @staticmethod
    def getpacket(port, op, register, data, pauses=1, record_en=True, check_payload=True):
        """Get parameters for sending a desired SWD write and/or read transaction.
        An ACK response of "OK" is expected and can be verified via 
        :class:`BitBanger.matched`.

        Args:
            port (str): 'AP' or 'DP'
            op (str): 'r' (read) or 'w' (write)
            register (int): 2-bit address field (A[2:3]); instead the register can also
                be referenced by name for some registers (see code), however these are
                not guaranteed to be universally correct; they are correct for the RP2350.
            data (int): 32-bit WDATA / RDATA field
            pauses (int): number of trailing bits to add at the end
            record_en (bool): for read commands, whether the payload is recorded or not.
            check_payload (bool): if True, enable verifying that the WDATA/RDATA portion 
                matches the "data" argument; use :class:`BitBanger.matched` to later
                check whether there was a match.

        Returns:
            BitBangerPacket object that can be fed to :class:`BitBanger.sendpacket`.
        """

        CMD = []
        HIZ = []
        PEN = []
        REN = []
        if port == 'AP':
            APnDP = 1
        else:
            APnDP = 0
        if op == 'r':
            RnW = 1
        else:
            RnW = 0
        if type(register) == int:
            A = register
        elif register in ['ABORT', 'CSW', 'IDCODE']:
            A = 0
        elif register in ['SELECT']:
            A = 0b01
        elif register in ['TAR', 'CTRL/STAT', 'SELECT1']:
            A = 0b10
        elif register in ['DRW', 'RDBUFF']:
            A = 0b11

        # first byte: request
        req = (APnDP<<6) + (RnW<<5) + (A<<3)
        p = SWDHelper._parity(req)
        req += (1<<7) + (p << 2) + 1
        CMD.append(SWDHelper._reverse(req))
        HIZ.append(SWDHelper._reverse(0b00000000))
        PEN.append(SWDHelper._reverse(0b11111111))
        # now do ACK + WDATA / RDATA + parity:
        p = SWDHelper._parity(data)
        if RnW: # read case
            # shift RDATA into place:
            REN = [0]*len(CMD)
            if record_en:
                REN.extend([0xF0, 0xFF, 0xFF, 0xFF, 0x0F])
            else:
                REN.extend([0x00]*5)
            CMD.extend(list(int.to_bytes((data << 4) + (p<<36), byteorder='little', length=5)))
            # insert turn + ACK OK bits:
            CMD[1] = CMD[1] + 3 # ACK bits
            HIZ.extend([0xff]*5)
            # drive trailing bits (low)
            HIZ[-1] = SWDHelper._reverse(0b11111000)
            if check_payload:
                PEN.append(SWDHelper._reverse(0b01111111)) # don't check turn
                PEN.extend([0xff]*4) 
                PEN[-1] = SWDHelper._reverse(0b11111000) # don't check turn, trailing bits
            else:
                # still check ACK OK response!
                PEN.append(SWDHelper._reverse(0b01110000))
                PEN.extend([0]*4)
            REN.extend([0]*(len(CMD)-len(REN)))

        else: # write case
            # shift WDATA into place:
            CMD.extend(list(int.to_bytes((data << 5) + (p<<37), byteorder='little', length=5)))
            # insert turn + ACK OK bits:
            CMD[1] = CMD[1] + 0x03 # ACK bits
            HIZ.extend([0x1f, 0, 0, 0, 0])
            PEN.append(SWDHelper._reverse(0b01110111)) # don't check turns
            PEN.extend([0xff]*4)
            PEN[-1] = SWDHelper._reverse(0b11111100) # don't check trailing bits
            REN = [0]*len(CMD)

        # convert to lists of bits:
        CMD = SWDHelper._bits_from_bytes(CMD)
        HIZ = SWDHelper._bits_from_bytes(HIZ)
        PEN = SWDHelper._bits_from_bytes(PEN)
        REN = SWDHelper._bits_from_bytes(REN)
        TRG = [0]*len(CMD) # NOTE: intended to be set at a higher level (because a single BB packet is often composed of several of these packets)
        # don't check turn/trailing bits:
        if pauses:
            for a in [CMD, HIZ, PEN, REN, TRG]:
                a.extend([0]*pauses)
        return BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

    @staticmethod
    def _parity(x):
        res = 0
        while x:
            res ^= x&1
            x >>= 1
        return res

    @staticmethod
    def _reverse(x, width=8):
        b = '{:0{width}b}'.format(x, width=width)
        return int(b[::-1], 2)

    @staticmethod
    def _bits_from_bytes(x):
        bits = []
        for i in x:
            for j in range(8):
                bits.append((i>>j) & 1)
        return bits


    def set_dbgkey_rp2350(self, key, trigger_bit=None, trigger_key_byte=None, preamble_bits=16, check_match=True):
        """Sends RP2350 debug key.
        Key is sent one byte at a time (16 bytes total).

        Args:
            key (int): 256-bit debug key
            trigger_bit (int): which bit *of the SWD transaction* to trigger on.
            trigger_key_byte (int): which key byte to trigger on (0-15). Set to 'all' to trigger
                on each byte, or None to not trigger at all.
            preamble_bits (int): number of preamble bits before the commands.
        """

        # start wiggling clock:
        CMD = [0]*preamble_bits
        HIZ = [0]*preamble_bits
        PEN = [1]*preamble_bits
        REN = [0]*preamble_bits
        TRG = [0]*preamble_bits
        packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

        packet.extend(self.getpacket('DP', 'w', 'ABORT', 0x0000001e))
        packet.extend(self.getpacket('DP', 'w', 'SELECT', 0x00080000))
        packet.extend(self.getpacket('AP', 'w', 0b10, 0x04)) # addresses DBGKEY (offset 0x04)
        self.bb.sendpacket(packet, trigger_en=False)
        if check_match: assert self.bb.matched, 'Problem setting DBGKEY.RESET'

        # Husky SWD BB limits us to sending one byte of the key at a time:
        for b in range(16):
            CMD = [0]*preamble_bits
            HIZ = [0]*preamble_bits
            PEN = [1]*preamble_bits
            REN = [0]*preamble_bits
            TRG = [0]*preamble_bits
            packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

            for i in range(8):
                data = 2 + (key & 1) # send data lsb to msb; set PUSH bit as well
                key = key >> 1
                packet.extend(self.getpacket('AP', 'w', 0b10, data, check_payload=True)) # addresses DBGKEY (offset 0x04)
            if b == trigger_key_byte or trigger_key_byte == 'all':
                trigger_en = True
            else:
                trigger_en = False
            if trigger_bit != None:
                packet.trig_bits[trigger_bit] = 1

            self.bb.sendpacket(packet, trigger_en=trigger_en)
            if check_match: assert self.bb.matched, 'Problem setting DBGKEY byte %d' % b


    def wake_swd_rp2350(self, expected_id_code=0x4c013477):
        """Sends RP2350 alert sequence, SWD activation, line reset, and checks ID code.

        Args:
            expected_id_code (int): expected ID code

        Raises:
           Exception: target did not respond as expected (e.g. does not ACK OK when expected).

        """

        # 1. 8 SWCLK cycles with SWDIO high:
        CMD = [0xff]*2

        # 2. 128b-bit alert sequence:
        CMD.extend([0x92, 0xF3, 0x09, 0x62, 0x95, 0x2D, 0x85, 0x86, 0xE9, 0xAF, 0xDD, 0xE3, 0xA2, 0x0E, 0xBC, 0x19])

        # 3. 4 SWCLK cycles with SWDIO low; 
        # 4a. SWD activation sequence start: 0x1a
        CMD.append(0xa0)

        # 4b. SWD activation sequence start: 0x1a
        # 5. at least 50 SWCLK cycles with SWDIO high
        CMD.append(0xF1)
        CMD.extend([0xff]*6)

        # not in spec but looks like we need this!
        CMD.extend([0x0]*2)

        HIZ = [0]*len(CMD)
        PEN = [0xff]*len(CMD)
        REN = [0]*len(CMD)

        # convert to lists of bits:
        CMD = SWDHelper._bits_from_bytes(CMD)
        HIZ = SWDHelper._bits_from_bytes(HIZ)
        PEN = SWDHelper._bits_from_bytes(PEN)
        REN = SWDHelper._bits_from_bytes(REN)
        TRG = [0]*len(CMD)
        packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

        # read IDCODE
        packet.extend(self.getpacket('DP', 'r', 'IDCODE', expected_id_code, record_en=False))
        packet.extend(self.getpacket('DP', 'r', 'IDCODE', expected_id_code))
        self.bb.sendpacket(packet, trigger_en=False)

        code_read = self.bb.recorded_data(4)
        if not self.bb.matched:
            raise Exception('ID code did not match!\nExpected %x\nGot      %x' % (expected_id_code, code_read))
        self.idcode = code_read


    def wake_swd(self, expected_id_code=None, trigger_bits=[[],[]], lr_bits=56):
        """Sends line resets, sends JTAG-to-SWD command, checks ID code, and
        writes CTRL/STAT. Verified to work on NewAE SAM4S and STM32F3 targets.
        May work on others too -- no promises. 

        If the ID code is successfully read, it is stored in the `idcode` class property.

        Args:
            expected_id_code (int): expected IDCODE. Set to None to read the IDCODE without checking it.
            trigger_bits (list[list[ints]]): bitbanger bits on which triggers are issued (one list for each of the two packets sent)
            lr_bits (int): number of bits for the line reset.

        Returns:
            If expected_id_code is not provided, the read IDCODE.

        Raises:
           Exception: target did not respond as expected (e.g. does not ACK OK when expected).

        """
        # 1. Line resets:
        CMD = [1]*lr_bits                                   # line reset
        CMD.extend(self._bits_from_bytes([0x9e, 0xe7]))     # 0x9ee7
        CMD.extend([1]*lr_bits)                             # line reset
        CMD.extend([0]*16)                                  # 16 cycles with SWDIO low
        HIZ = [0]*len(CMD)
        PEN = [1]*len(CMD)
        REN = [0]*len(CMD)
        TRG = [0]*len(CMD)
        packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

        # 2. Read IDCODE:
        if expected_id_code:
            check_code = True
            record_en = False
        else:
            expected_id_code = 0
            check_code = False
            record_en = True
        packet.extend(self.getpacket('DP', 'r', 'IDCODE', expected_id_code, check_payload=check_code, record_en=record_en))

        # add in the trigger(s):
        for t in trigger_bits[0]:
            packet.trig_bits[t] = 1

        # and now we send so that we can detect errors in different parts of the target response:
        self.bb.sendpacket(packet)

        if record_en:
            code_read = self.bb.recorded_data(4)
            self.idcode = code_read
            if check_code and (code_read != expected_id_code):
                scope_logger.warning('ID code did not match!\nExpected %x\nGot      %x' % (expected_id_code, code_read))
        if not self.bb.matched:
            #raise Exception('Unexpected target behaviour during line reset / read IDCODE.')
            scope_logger.warning('Unexpected target behaviour during line reset / read IDCODE.')

        # 3. ABORT + CTRL/STAT:
        packet = self.getpacket('DP', 'w', 'ABORT', 0x0000001e)
        packet.extend(self.getpacket('DP', 'w', 'CTRL/STAT', 0x50000000))
        # add in the trigger(s):
        for t in trigger_bits[1]:
            packet.trig_bits[t] = 1
        self.bb.sendpacket(packet)
        if not self.bb.matched:
            self.idcode = None
            raise Exception('Unexpected target behaviour during ABORT/CTRL/STAT write.')

        if not check_code:
            return code_read


    def write(self, address, data, trigger_bits=[], preamble_bits=8):
        """Writes a word to target memory.
        Works on NewAE SAM4S and STM32F3 targets. May work on others too -- no
        promises! Consult your target's debug documentation.

        Args:
            address (int): 32-bit address.
            data (int): 32-bit data to write.
            trigger_bits (list[int]): bitbanger bits on which triggers are issued.
            preamble_bits (int): number of preamble bits before the commands.

        Raises:
           Exception: target did not respond as expected (e.g. does not ACK OK when expected).

        """

        CMD = [0]*preamble_bits
        HIZ = [0]*preamble_bits
        PEN = [1]*preamble_bits
        REN = [0]*preamble_bits
        TRG = [0]*preamble_bits
        packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

        packet.extend(self.getpacket('DP', 'w', 'ABORT', 0x0000001e))
        packet.extend(self.getpacket('DP', 'w', 'SELECT', 0x00000000))
        packet.extend(self.getpacket('AP', 'w', 'CSW', 0x23000012))
        packet.extend(self.getpacket('AP', 'w', 'TAR', address))
        packet.extend(self.getpacket('AP', 'w', 'DRW', data))

        # add in the trigger(s):
        for t in trigger_bits:
            packet.trig_bits[t] = 1

        # send it:
        self.bb.sendpacket(packet)

        # check it:
        if not self.bb.matched:
            raise Exception('Unexpected target response.')


    def read(self, address, expected_data=None, trigger_bits=[], preamble_bits=8):
        """Reads a word from target memory.
        Works on NewAE SAM4S and STM32F3 targets. May work on others too -- no
        promises! Consult your target's debug documentation.

        Args:
            address (int): 32-bit address.
            expected_data (int): 32-bit expected read data; leave as None if unknown.
            trigger_bits (list[int]): bitbanger bits on which triggers are issued.
            preamble_bits (int): number of preamble bits before the commands.

        Returns:
            read data, if expected_data was not provided (int)

        Raises:
           Exception: target did not respond as expected (e.g. does not ACK OK when expected).
        """

        CMD = [0]*preamble_bits
        HIZ = [0]*preamble_bits
        PEN = [1]*preamble_bits
        REN = [0]*preamble_bits
        TRG = [0]*preamble_bits
        packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)

        packet.extend(self.getpacket('DP', 'w', 'ABORT', 0x0000001e))
        packet.extend(self.getpacket('DP', 'w', 'SELECT', 0x00000000))
        packet.extend(self.getpacket('AP', 'w', 'CSW', 0x23000012))
        packet.extend(self.getpacket('AP', 'w', 'TAR', address))

        if expected_data is None:
            expected_data = 0
            check_payload = False
            record_en = True
        else:
            check_payload = True
            record_en = False
        packet.extend(self.getpacket('AP', 'r', 'DRW', expected_data, record_en=False, check_payload=False))
        packet.extend(self.getpacket('AP', 'r', 'DRW', expected_data, record_en=record_en, check_payload=check_payload))

        # add in the trigger(s):
        for t in trigger_bits:
            packet.trig_bits[t] = 1

        # send it:
        self.bb.sendpacket(packet)

        # check it:
        if not self.bb.matched:
            raise Exception('Unexpected target response.')
        if not check_payload:
            return self.bb.recorded_data(4)


    def check_debug_enabled_rp2350(self, preamble_bits=16):
        """Checks whether debug is enabled on RP2350.

        Args:
            preamble_bits (int): number of preamble bits before the commands.

        Returns:
            True if debug is enabled, False if not.
        """

        CMD = [0]*preamble_bits
        HIZ = [0]*preamble_bits
        PEN = [1]*preamble_bits
        REN = [0]*preamble_bits
        TRG = [0]*preamble_bits
        packet = BitBangerPacket(CMD, HIZ, PEN, REN, TRG)
        packet.extend(self.getpacket('DP', 'w', 'ABORT', 0x0000001e))
        packet.extend(self.getpacket('DP', 'w', 'SELECT', 0x00002D05))
        packet.extend(self.getpacket('DP', 'w', 'SELECT1', 0x00000000))
        packet.extend(self.getpacket('DP', 'w', 'SELECT', 0x00002D00))
        packet.extend(self.getpacket('AP', 'r', 0b00, 0x43000002, record_en=False, check_payload=False))

        # redundant read so we can see the previous one on Saleae:
        packet.extend(self.getpacket('AP', 'r', 0b00, 0x43000002, check_payload=False))

        self.bb.sendpacket(packet, trigger_en=False)
        rdata = self.bb.recorded_data(nbytes=4)
        if rdata == 0x43800042:
            return True
        elif rdata == 0x43000002:
            return False
        else:
            raise ValueError('Unexpected CSW value: %s' % hex(rdata))



class BitBanger (util.DisableNewAttr):
    ''' Husky bit-banger settings. Drives and receives data on a bidirectional
    data line, drives a clock, and triggers at a user-defined time. The data,
    clock, and trigger times are precisely controlled by hardware. This is the
    lowest-level access class, allowing easy control of exactly what you what
    sent on the wire. 

    Example::

        scope.bitbanger.data_pin = 'USERIO_D0'
        scope.bitbanger.clock_pin = 'USERIO_D1'
        scope.bitbanger.continuous_clk = False
        scope.bitbanger.inactive_data = 0
        scope.bitbanger.inactive_state = 'high_z'
        scope.bitbanger.drive_edge = 'rising'
        scope.bitbanger.check_edge = 'falling'
        scope.bitbanger.trigger_en = True
        scope.bitbanger.clk_div = 4
        scope.bitbanger.num_bits = 5

        scope.bitbanger.pattern_data = [0, 1, 0, 1, 0]
        scope.bitbanger.trig_bits    = [0, 0, 0, 1, 0]

        scope.bitbanger.go()

        # this drives the following:

                   ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ ┏─┐ 
        ADC clock: ┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─┛ └─
                   ____╱              ╲╱              ╲╱              ╲╱              ╲╱              ╲____
        bit count:     ╲    bit 0     ╱╲    bit 1     ╱╲    bit 2     ╱╲    bit 3     ╱╲    bit 4     ╱    
                       ┌───────┐       ┌───────┐       ┌───────┐       ┌───────┐       ┌───────┐           
        clock out: ────┘       └───────┘       └───────┘       └───────┘       └───────┘       └───────────
                   ____┐               ┌───────────────┐               ┌───────────────┐               ____
        data out :     └───────────────┘               └───────────────┘               └───────────────    
                                                                               ┌───────────────┐           
        trigger  : ────────────────────────────────────────────────────────────┘               └───────────


    (timing diagram generated by asciiwave: https://github.com/Wren6991/asciiwave)

    Other classes build protocols on top of this class; see for example:

    * :class:`SWDHelper`
    * :class:`OneWireHelper`

    '''
    _name = 'Husky Bit-Banger Settings'

    PINS = {'USERIO_D0':      0,
            'USERIO_D1':      1,
            'USERIO_D2':      2,
            'USERIO_D3':      3,
            'USERIO_D4':      4,
            'USERIO_D5':      5,
            'USERIO_D6':      6,
            'USERIO_D7':      7,
            'USERIO_CK':      8,
            'TIO1':           9,
            'TIO2':           10,
            'TIO3':           11,
            'TIO4':           12,
            'target_pwr':     13,
            'nrst':           14,
            'disabled':       15
           }

    def __init__(self, oaiface : OAI.OpenADCInterface):
        # oaiface = OpenADCInterface
        super().__init__()
        self.oa = oaiface
        self._trigger_en = 0
        self._continuous_clk = 0
        self._inactive_data = 0
        self._inactive_state = 'high_z'
        self._trigger_when_matched = 0
        self._glitch_enabled = 0
        self._glitch_mode_value = 0
        self._glitch_mode_string = 'drive_low'
        self._drive_edge = 'rising'
        self._check_edge = 'falling'
        self._clk_div = 2
        self._num_bits = 0
        self._read_max_pattern()
        self._pattern_data = [0]*self.max_length
        self._pattern_en = [1]*self.max_length
        self._pattern_hiz = [0]*self.max_length
        self._record_en = [0]*self.max_length
        self._trig_bits = [0]*self.max_length
        self.splitting_warning = True
        self.last_packet_sent = None
        self.verbose = False
        self.onewire = OneWireHelper(self)
        self.swd = SWDHelper(self)
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['data_pin'] = self.data_pin
        rtn['clock_pin'] = self.clock_pin
        rtn['max_length'] = self.max_length
        rtn['max_record'] = self.max_record
        rtn['clk_div'] = self.clk_div
        rtn['drive_edge'] = self.drive_edge
        rtn['check_edge'] = self.check_edge
        rtn['inactive_state'] = self.inactive_state
        rtn['inactive_data'] = self.inactive_data
        rtn['continuous_clk'] = self.continuous_clk
        rtn['num_bits'] = self.num_bits
        rtn['glitch_mode'] = self.glitch_mode
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    def _read_max_pattern(self):
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_CTRL_STAT", maxResp=5)
        self._max_length = raw[1] + (raw[2] << 8)
        self._max_record = raw[3] + (raw[4] << 8)

    @property 
    def max_length(self):
        """ Maximum bit-bang pattern length. More formally, the maximum number of elements for:

        * :class:`pattern_data`
        * :class:`pattern_en`
        * :class:`pattern_hiz`
        * :class:`trig_bits`
        * :class:`record_en`
        """
        return self._max_length

    @property 
    def max_record(self):
        """ Maximum number of bits that can be recorded; in other words, the maximum number of ones in :class:`record_en`.
        """
        return self._max_record

    @property 
    def data_pin(self):
        """ Pin to use for data. Cannot be the same as :class:`clock_pin`. Allowed values:

        * USERIO_D[0-7]
        * USERIO_CK
        * disabled

        On Husky Plus, the following pins on the 20-pin target header can also be used:

        * TIO[1-4]
        * target_pwr
        * nrst

        Note that bit-banging behaviour is different when 'target_pwr' or 'nrst' is chosen
        as the data pin:

        * a data value of 1 *inverts* the signal's value while 0 leaves it unchanged
        * there is no bidirectional support (pattern_hiz has no effect)

        The pin chosen via this method overrides assignments to that pin from other modules (i.e.
        :class:`scope.userio <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings>`, 
        :class:`scope.io <chipwhisperer.capture.scopes.cwhardware.ChipWhispererExtra.GPIOSettings>`).
        To prevent this module from clobbering those settings, set this pin to "disabled".

        """
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_SELECT", maxResp=1)[0] & 0x0f
        for key,value in self.PINS.items():
            if value == raw:
                module = key
                break
        if not module:
            raise ValueError('Internal error: unknown pin ID %d' % raw)
        return module

    @data_pin.setter
    def data_pin(self, pin):
        if not self.oa._is_husky_plus and not (('USERIO' in pin) or (pin == 'disabled')):
            raise ValueError('The use of this pin for bitbanger data is only supported on Husky Plus.')
        if pin in self.PINS.keys():
            value = self.PINS[pin]
        else:
            msg = 'Invalid pin %s. Must be one of: ' % pin
            for key in self.PINS.keys():
                msg = msg + key + ', '
            raise ValueError(msg)
        if pin == self.clock_pin and pin != 'disabled':
            raise ValueError('Pin %s is already used as a clock; it cannot also be used as data.' % pin)
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_SELECT", maxResp=1)[0]
        raw = (raw & 0xf0) | value
        self.oa.sendMessage(CODE_WRITE, "BB_TRIG_SELECT", [raw])

    @property 
    def clock_pin(self):
        """ Pin to use for clock. Cannot be the same as :class:`data_pin`. Allowed values:

        * USERIO_D[0-7]
        * USERIO_CK
        * disabled

        On Husky Plus, the following pins on the 20-pin target header can also be used:

        * TIO[1-4]

        The pin chosen via this method overrides assignments to that pin from other modules (i.e.
        :class:`scope.userio <chipwhisperer.capture.scopes.cwhardware.ChipWhispererHuskyMisc.USERIOSettings>`, 
        :class:`scope.io <chipwhisperer.capture.scopes.cwhardware.ChipWhispererExtra.GPIOSettings>`).
        To prevent this module from clobbering those settings, set this pin to "disabled".

        """

        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_SELECT", maxResp=1)[0] >> 4
        for key,value in self.PINS.items():
            if value == raw:
                module = key
                break
        if not module:
            raise ValueError('Internal error: unknown pin ID %d' % raw)
        return module

    @clock_pin.setter
    def clock_pin(self, pin):
        if not self.oa._is_husky_plus and not (('USERIO' in pin) or (pin == 'disabled')):
            raise ValueError('The use of this pin for bitbanger clock is only supported on Husky Plus.')
        if pin in self.PINS.keys():
            value = self.PINS[pin]
        else:
            msg = 'Invalid pin %s. Must be one of: ' % pin
            for key in self.PINS.keys():
                msg = msg + key + ', '
            raise ValueError(msg)
        if pin == self.data_pin and pin != 'disabled':
            raise ValueError('Pin %s is already used for data; it cannot also be used as a clock.' % pin)
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_SELECT", maxResp=1)[0]
        raw = (raw & 0x0f) | (value << 4)
        self.oa.sendMessage(CODE_WRITE, "BB_TRIG_SELECT", [raw])



    @property 
    def matched(self):
        """ Whether the pattern specified by :class:`pattern_data`, along with :class:`pattern_en`,
        was seen to "match". Useful when the data line is bidirectional.
        """
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_CTRL_STAT", maxResp=1)[0]
        if raw & 0x01:
            return True
        else:
            return False

    @property 
    def active(self):
        """ Whether the bitbanger module is still currently active (i.e. still bit-banging).
        """
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_CTRL_STAT", maxResp=1)[0]
        if raw & 0x02:
            return True
        else:
            return False

    def go(self):
        """ Make the bitbanger go.
        """
        self._maybe_go(True)


    def _maybe_go(self, really_go=True):
        """ Make the bitbanger go.

        Args:
            really_go (bool): when False, updates bit-banger settings but does not send the bit-bang pattern.

        """
        # Most properties of this module are only written out to the hardware when this
        # method is called; by setting the "go" argument to False, the properties get
        # pushed out without making it "go".
        # Additionally, due to the FIFO-based storage of pattern_data/_en/_hiz/etc...,
        # it's easiest to write those out only when we "really go".
        if really_go:
            writes = 7
            self._push_pattern_data()
        else:
            writes = 6
        raw = [0]*writes
        if self.drive_edge == 'rising':
            drive = 1
        else:
            drive = 0
        if self.check_edge == 'rising':
            check = 1
        else:
            check = 0
        if self.inactive_state == 'driven':
            inactive_state = 1
        else:
            inactive_state = 0

        raw[0] = (self.trigger_en << 7) + \
                 (self._glitch_mode_value)
        raw[1] = (self.continuous_clk << 7) + \
                 (self.inactive_data << 6) + \
                 (inactive_state << 5) + \
                 (self.trigger_when_matched << 3) + \
                 (self._glitch_enabled << 2) + \
                 (drive << 1) + \
                 check
        raw[2] = self.clk_div & 0xFF
        raw[3] = self.clk_div >> 8
        raw[4] = self.num_bits & 0xFF
        raw[5] = self.num_bits >> 8
        self.oa.sendMessage(CODE_WRITE, "BB_TRIG_CTRL_STAT", raw)



    def _push_pattern_data(self):
        bb_data = []
        if not (len(self.pattern_data) == len(self.pattern_hiz) == len(self.pattern_en) == len(self.record_en) == len(self.trig_bits)):
            scope_logger.warning('Unequal lengths.')

        for a,b,c,d,e in zip(self.pattern_data, self.pattern_hiz, self.pattern_en, self.trig_bits, self.record_en):
            bb_data.append(a + (b<<1) + (c<<2) + (d<<3) + (e<<4))
        #self.oa.sendMessage(CODE_WRITE, "BB_TRIG_DATA", bb_data)
        # Note: writing a 512-element bb_data fails! So break it up into 256-element chunks:
        chunk_size = 256
        for start in range(0, len(bb_data), chunk_size):
            if start+chunk_size > len(bb_data):
                stop = len(bb_data)
            else:
                stop = start+chunk_size
            self.oa.sendMessage(CODE_WRITE, "BB_TRIG_DATA", bb_data[start:stop])
        self.check_fifo_errors()


    def check_fifo_errors(self):
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_CTRL_STAT", maxResp=1)[0]
        if raw & 2**5:
            scope_logger.error('Internal BB FIFO error (likely underflow)')
            self.harness.inc_error()
        if raw & 2**6:
            scope_logger.error('Internal BB FIFO underflow error')
            self.harness.inc_error()
        if raw & 2**7:
            scope_logger.error('Internal BB FIFO overflow error')
            self.harness.inc_error()


    def sendpacket(self, packet, trigger_en=True, timeout=1):
        """ Sends a generic "packet"; waits for it to be sent.

        Args:
            packet (BitBangerPacket): packet to send.
            trigger_en (bool): whether a trigger *can be* issued by the bit-banging module. Affected by :class:`BitBanger.trigger_when_matched`
            timeout (int): if the packet is not done being sent after this many seconds, times out.

        """
        if len(packet.pattern_data) > self.max_length:
            raise ValueError('Packet too long! Break up the data you are transmitting via sendpacket() into smaller chunks (max: %d; this: %d).' % (self.max_length, len(CMD)))
        else:
            self.pattern_data = packet.pattern_data
            self.pattern_hiz = packet.pattern_hiz
            self.pattern_en = packet.pattern_en
            self.record_en = packet.record_en
            self.trig_bits = packet.trig_bits
            self.num_bits = len(self.pattern_data)
            self.trigger_en = trigger_en

            if self.verbose:
                print('sending %d-bit packet:' % packet.num_bits)
                print(packet)
            self.go()
            self.wait_for_done(timeout)
            self.last_packet_sent = packet


    def wait_for_matched(self, timeout=1):
        """ Polls :class:`matched` until timeout.

        Args:
            timeout (int): number of seconds for timeout.

        """
        starttime = datetime.datetime.now()
        while (datetime.datetime.now() - starttime).total_seconds() < timeout:
            matched = self.matched
            running = self.active
            if matched:
                return True
            elif not running and not matched:
                return False
        raise ValueError('Timed out!')

    def wait_for_done(self, timeout=1):
        """ Polls :class:`active` until timeout.

        Args:
            timeout (int): number of seconds for timeout.

        """
        starttime = datetime.datetime.now()
        while (datetime.datetime.now() - starttime).total_seconds() < timeout:
            if not self.active:
                return
        raise ValueError('Timed out!')
        self.check_fifo_errors()


    @property 
    def trigger_en(self):
        """ Specify whether a trigger can be generated.
        Note that other properties determine whether (and when) a trigger is issued:
        :class:`trig_bits` and :class:`trigger_when_matched`.
        """
        return self._trigger_en
    @trigger_en.setter
    def trigger_en(self, val):
        if val not in [0, 1]:
            raise ValueError()
        self._trigger_en = val

    @property 
    def continuous_clk(self):
        """ Specify whether the clock should run continuously.
        If False, the clock is generated only while the bitbanger is active.
        """
        return self._continuous_clk
    @continuous_clk.setter
    def continuous_clk(self, val):
        if val not in [0,1]:
            raise ValueError
        self._continuous_clk = val
        self._maybe_go(False)

    @property 
    def inactive_data(self):
        """ Specify the state of the data line when this module is inactive.

        Args:
            val (int): 0 or 1.

        """
        return self._inactive_data
    @inactive_data.setter
    def inactive_data(self, val):
        if val not in [0,1]:
            raise ValueError
        self._inactive_data = val
        self._maybe_go(False)

    @property 
    def inactive_state(self):
        """ Specify whether the data line is driven when this module is inactive.

        Args:
            val (str): 'driven' or 'high_z'.

        """
        return self._inactive_state
    @inactive_state.setter
    def inactive_state(self, val):
        if val not in ['driven', 'high_z']:
            raise ValueError
        self._inactive_state = val
        self._maybe_go(False)

    @property 
    def trigger_when_matched(self):
        """ Specify whether the observed data needs to match :class:`pattern_data`
        (and :class:`pattern_en`) in order for a trigger to be generated.
        """
        return self._trigger_when_matched
    @trigger_when_matched.setter
    def trigger_when_matched(self, val):
        if val not in [0,1]:
            raise ValueError
        self._trigger_when_matched = val

    @property 
    def glitch_mode(self):
        """ Set the glitch mode of the BitBanger module. Possible settings:

        * 'disabled': no glitching.
        * 'drive_low': drive data pin low upon glitch.
        * 'drive_high': drive data pin upon glitch.
        * 'invert': invert data pin upon glitch.

        When not set to 'disabled', the data pin will be "glitched" low/high/inverted as specified by
        this setting whenever the output of the 
        :class:`scope.glitch <chipwhisperer.capture.scopes.cwhardware.ChipWhispererGlitch.GlitchSettings>`
        module is active. The timing of the glitch(es) is entirely specified by 
        :class:`scope.glitch <chipwhisperer.capture.scopes.cwhardware.ChipWhispererGlitch.GlitchSettings>`.

        """
        return self._glitch_mode_string
    @glitch_mode.setter
    def glitch_mode(self, val):
        if val == 'disabled':
            self._glitch_enabled = 0
        elif val == 'drive_low':
            self._glitch_enabled = 1
            self._glitch_mode_value = 0
        elif val == 'drive_high':
            self._glitch_enabled = 1
            self._glitch_mode_value = 1
        elif val == 'invert':
            self._glitch_enabled = 1
            self._glitch_mode_value = 2
        else:
            raise ValueError
        self._glitch_mode_string = val


    @property 
    def drive_edge(self):
        """ Selects which clock edge of the generated clock is used to drive out data.

        Args:
            edge (str): 'rising' or 'falling'.

        """
        return self._drive_edge
    @drive_edge.setter
    def drive_edge(self, edge):
        if edge not in ['rising', 'falling']:
            raise ValueError
        self._drive_edge = edge

    @property 
    def check_edge(self):
        """ Selects which clock edge of the generated clock is used to trigger, record data, and check
        expected pattern data.
        When set to the same value as :class:`drive_edge`, data is driven and sampled on the same edge.
        When set to the alternate value, checking is always done half a clock period *after* driving.

        Args:
            edge (str): 'rising' or 'falling'.

        """

        return self._check_edge
    @check_edge.setter
    def check_edge(self, edge):
        if edge not in ['rising', 'falling']:
            raise ValueError
        self._check_edge = edge


    @property 
    def clk_div(self):
        """ Specify the clock divider for the generated clock and for defining the length of
        the time slots for :class:`pattern_data` and its associated properties. Must be even.
        The source clock is the ADC sampling clock.

        Args:
            val (int): clock divider. Must be even and < 2**16.

        """
        return self._clk_div
    @clk_div.setter
    def clk_div(self, val):
        if val not in range(2, 2**16, 2):
            raise ValueError
        self._clk_div = val
        self._maybe_go(False)

    @property 
    def num_bits(self):
        """ Specify the number of bits to send when :class:`go()` is issued.
        """
        return self._num_bits
    @num_bits.setter
    def num_bits(self, val):
        if val not in range(1, self.max_length+1):
            raise ValueError
        self._num_bits = val

    @property
    def pattern_data(self):
        """ Bit-bang data. 
        In the case of a bi-directional data line, this can serve a second purpose: when
        the corresponding bit in :class:`pattern_en` is True, data on the line is compared
        against the `pattern_data` value. This can be used to control whether a trigger is
        generated or not (via :class:`trigger_when_matched`), or simply to know whether the
        expected data was seen (via :class:`matched`).

        When :class:`data_pin` is set to 'target_pwr' or 'nrst', pattern_data is *not* output
        onto the data line: instead, the data line is inverted when pattern_data is high.

        Maximum length: :class:`max_length`.

        Args:
            val (list): list of binary values.

        """
        return self._pattern_data
    @pattern_data.setter
    def pattern_data(self, val):
        self._check_length(val)
        self._pattern_data = val

    @property
    def pattern_en(self):
        """ Bit-bang pattern enable.
        See :class:`pattern_data` for its application.
        Maximum length: :class:`max_length`.

        Args:
            val (list): list of binary values.

        """
        return self._pattern_en
    @pattern_en.setter
    def pattern_en(self, val):
        self._check_length(val)
        self._pattern_en = val

    @property
    def pattern_hiz(self):
        """ Bit-bang pattern high-z.
        Intended for a bi-directional data line: control when the line is driven and when it is not.
        Has no effect when :class:`data_pin` is set to 'target_pwr' or 'nrst'.
        Maximum length: :class:`max_length`.

        Args:
            val (list): list of binary values.

        """
        return self._pattern_hiz
    @pattern_hiz.setter
    def pattern_hiz(self, val):
        self._check_length(val)
        self._pattern_hiz = val

    @property
    def record_en(self):
        """ Record enable.
        Controls which bits bi-directional data line are recorded. The maximum number of bits that can
        be recorded is :class:`max_record`.

        Args:
            val (list): list of binary values.

        """
        return self._record_en
    @record_en.setter
    def record_en(self, val):
        self._check_length(val)
        # there is also a maximum number of bits that can be recorded, usually less than the pattern length:
        ones = 0
        for b in val:
            if b: ones += 1
        if ones > self.max_record:
            scope_logger.error('Number of bits to record (%d) exceeds maximum supported (%d).' % (ones, self.max_record))

        self._record_en = val

    @property
    def trig_bits(self):
        """ Pattern bits on which to (potentially) issue a trigger.
        Whether or not triggers are issued depends on :class:`trigger_when_matched`.
        Maximum length: :class:`max_length`.

        Args:
            val (list): list of binary values.

        """
        return self._trig_bits
    @trig_bits.setter
    def trig_bits(self, val):
        self._check_length(val)
        self._trig_bits = val


    def _check_length(self, val):
        if len(val) > self.max_length:
            scope_logger.error('Pattern exceeds maximum supported (%d).' % self.max_length)



    def recorded_data(self, nbytes=8, return_word=True):
        """ Returns the data recorded by the last :class:`go()` event. The most significant bit is the last bit recorded.

        Args:
            nbytes (int): number of bytes to return
            return_word (bool): whether to return the result as a list of 8-bit values or a single larger integer.

        """
        if nbytes > self.max_record*8:
            scope_logger.error('Max number of recorded bytes is %d' % self.max_record*8)
        raw = self.oa.sendMessage(CODE_READ, "BB_TRIG_DATA", maxResp=nbytes)
        final = []
        for b in raw:
            # swap nibbles *and* bit order:
            fixed = 0
            for bit in range(8):
                if b & 2**bit:
                    fixed += 2**(7-bit)
            lo = fixed & 0x0F
            hi = fixed & 0xF0
            bswap = (hi >> 4) + (lo << 4)
            final.append(fixed)
        if return_word:
            return int.from_bytes(final, byteorder='big')
        else:
            return final[::-1]



class BitBangerPacket (util.DisableNewAttr):
    ''' Very simple class to make building bit-bang patterns easier.
    See :class:`SWDHelper`, :class:`OneWireHelper` for usage examples.

    '''
    _name = 'Husky Bit-Banger Packet'

    def __init__(self, pattern_data=[], pattern_hiz=[], pattern_en=[], record_en=[], trig_bits=[]):
        self.pattern_data = pattern_data
        self.pattern_hiz = pattern_hiz
        self.pattern_en = pattern_en
        self.record_en = record_en
        self.trig_bits = trig_bits
        if not (len(pattern_data) == len(pattern_hiz) == len(pattern_en) == len(record_en) == len(trig_bits)):
            scope_logger.warning('Unequal lengths.')
        self.disable_newattr()

    def _dict_repr(self):
        rtn = {}
        rtn['num_bits'] = self.num_bits
        rtn['pattern_data'] = self.pattern_data
        rtn['pattern_hiz'] = self.pattern_hiz
        rtn['pattern_en'] = self.pattern_en
        rtn['record_en'] = self.record_en
        rtn['trig_bits'] = self.trig_bits
        return rtn

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

    @property 
    def num_bits(self):
        """ Length of packet, in bits (or, more accurately, bit-banger time slots).
        """
        return len(self.pattern_data)

    def extend(self, packet):
        """ Extend a packet with another packet.
        """
        self.pattern_data.extend(packet.pattern_data)
        self.pattern_hiz.extend(packet.pattern_hiz)
        self.pattern_en.extend(packet.pattern_en)
        self.record_en.extend(packet.record_en)
        self.trig_bits.extend(packet.trig_bits)


