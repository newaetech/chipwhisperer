#!/usr/bin/python
# -*- coding: utf-8 -*-
#
# Copyright (c) 2020-2021, NewAE Technology Inc
# All rights reserved.
#
# Find this and more at newae.com - this file is part of the chipwhisperer
# project, http://www.chipwhisperer.com . ChipWhisperer is a registered
# trademark of NewAE Technology Inc in the US & Europe.
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
from collections import deque
import ctypes
from dataclasses import dataclass
from datetime import datetime
from typing import Final, Sequence
from warnings import warn

from chipwhisperer.logging import *


@dataclass(kw_only=True, frozen=True)
class TpiuByte:
    stream: int
    byte: int


class TpiuStreams:
    """ Helper class to queue `TpiuByte` values."""
    streams: dict[int, bytearray]

    def __init__(self, tpiu_bytes: Sequence[TpiuByte] | None = None):
        """
        Args:
            tpiu_bytes: list of `TpiuByte` to enqueue
        """
        self.streams = {}
        if tpiu_bytes:
            self.update(tpiu_bytes)

    def update(self, tpiu_bytes: Sequence[TpiuByte]) -> None:
        """ Update the queues with given TpiuByte ojects."""
        for b in tpiu_bytes:
            if b.stream not in self.streams:
                self.streams[b.stream] = bytearray()
            self.streams[b.stream].append(b.byte)

    def clear(self) -> None:
        """ Removes all the streams"""
        self.streams = {}

    def get_stream(self, stream: int) -> bytes | None:
        """ Get the `bytes` for the given stream ID.
        Args:
            stream: ID of the stream to retrieve. 1 is for ITM packets, 2 for ETM.
        """
        if stream in self.streams:
            return bytes(self.streams[stream])
        return None

    def get_stream_ids(self) -> list[int]:
        return list(self.streams.keys())

    def print(self) -> None:
        for i, v in self.streams.items():
            print(f"Stream 0x{i:02X}: {v.hex()}")


class TpiuDecoder:
    """  TPIU frame decoder object.

    This class takes a stream of bytes and automatically removes the
    synchronization frames, and demultiplexes the bytes in their correct
    stream ID as soon as a complete frame as been received.

    Typical usage with TraceWhisperer for getting PC sampling values:
    >>> raw = trace.read_capture)data()
    >>> decoder = TpiuDecoder()
    >>> for frame in trace.get_raw_trace_packets(raw, removesyncs=True, verbose=False):
    ...     decoder.accumulate(bytes(frame[1]))
    >>> import pyorb
    >>> pc_values = []
    >>> for msg in decoder.get_itm_messages():
    ...     if isinstance(msg, pyorb.pcSampleMsg):
    ...         pc_values.append(msg.pc)
    >>> 
    """
    LONG_SYNC = bytes.fromhex("ffffff7f")
    TPIU_FRAME_LEN: Final[int] = 16

    fifo: deque[int]
    syncwatch: deque[int]
    packets: TpiuStreams
    need_sync: bool
    current_stream: int

    def __init__(self, assume_synced: bool = True):
        """
        Args:
            assume_synced: Indicates wheter the parser should wait for
            a full sync indicator before starting to queue bytes. Defaults to `True`
            meaning we consider a full sync indicator has already been seen.
        """
        self.fifo = deque([], maxlen=self.TPIU_FRAME_LEN)
        self.packets = TpiuStreams()
        self.reset(assume_synced)

    def reset(self, synced: bool) -> None:
        """ Resets the decoder, clearing all queued bytes.
        
        Args:
            synced: indicates if the decoder starts in sync'd on unsync'd mode.
        """
        self.current_stream = 0
        self.packets.clear()
        if synced:
            self.need_sync = False
            self.syncwatch = deque(self.LONG_SYNC, maxlen=4)
        else:
            self.need_sync = True
            self.syncwatch = deque([0, 0, 0, 0], maxlen=4)

    def accumulate(self, block: bytes) -> None:
        """ Add all the bytes in the queue."""
        for b in block:
            self.accumulate_byte(b)

    def accumulate_byte(self, byte: int) -> None:
        """ Add a single byte value in the queue."""
        assert 0 <= byte <= 255

        # Continuously look for long sync packets
        self.syncwatch.append(byte)
        if bytes(self.syncwatch) == self.LONG_SYNC:
            self.need_sync = False
            tracewhisperer_logger.debug("SYNC packet. Clearing fifo")
            self.fifo.clear()
            return

        if self.need_sync:
            tracewhisperer_logger.debug("Dropped byte (out of sync): 0x%02x", byte)
        else:
            tracewhisperer_logger.debug("Queueing byte %02X. Fifo = %r", byte, self.fifo)
            # We take 16 bits at a time, so we always queue odd index bytes
            if len(self.fifo) & 1 == 0:
                self.fifo.append(byte)
                return

            # Check if we have an half-sync packet and discard it
            if self.fifo[-1] == 0xff and byte == 0x7f:
                self.fifo.pop()
                tracewhisperer_logger.debug("Short SYNC. Poping out of the queue")
            else:
                self.fifo.append(byte)

            # Do we have a full packet to decode?
            if len(self.fifo) == self.fifo.maxlen:
                self._decode_frame()

    def _decode_frame(self):
        """ Internal method called as soon as a complete frame has been pushed
        to the queue.
        """
        assert len(self.fifo) == self.fifo.maxlen
        low_bits = self.fifo.pop()
        data: list[TpiuByte] = []
        delayed_change = -1

        for i, b in enumerate(self.fifo):
            if i & 1 == 0:
                # Byte could be an ID or a data byte
                if b & 1 == 1:
                    # ID byte
                    b >>= 1
                    if low_bits & 1 == 1:
                        delayed_change = b
                    else:
                        self.current_stream = b
                else:
                    # data byte
                    data.append(TpiuByte(stream=self.current_stream, byte=b | (low_bits & 1)))
                low_bits >>= 1
            else:
                # Data byte as-is
                assert self.current_stream > 0, f"ERROR: byte not associated with a stream {i=}, 0x{b:02X}"
                data.append(TpiuByte(stream=self.current_stream, byte=b))
                # Handle delayed channel change
                if delayed_change >= 0:
                    self.current_stream = delayed_change
                    delayed_change = -1
        self.fifo.clear()
        self.packets.update(data)

    def get_itm_messages(self) -> list[ctypes.Structure]:
        """ Get all the ITM messages that have been successfully parsed.
        
        This method relies on pyorb (`pip install python-orbuculum`) and liborb
        to parse messages. If not present, it will return an empty list.
        This replaces writing a file on the disk and calling
        orbuculum tools on it to parse the file which since v2.2.0 requires the
        files to be using their OFLOW format."""
        try:
            import pyorb
        except ImportError:
            warn("Can't import pyorb. Try `pip install python-orbuculum`")
            return []

        packets = []
        itm = pyorb.orb.ITMDecoderCreate()
        pyorb.orb.ITMDecoderInit(itm, True)
        data = self.packets.get_stream(1)
        if not data:
            return []
        buffer = deque(data)
        while buffer:
            c = buffer.popleft()
            if pyorb.orb.ITM_EV_PACKET_RXED == pyorb.orb.ITMPump(itm, c):
                p = pyorb.msg()
                pyorb.orb.ITMGetDecodedPacket(itm, pyorb.byref(p))
                try:
                    packets.append(getattr(p.m, p.m._fields_[p.msgtype][0]))
                except IndexError:
                    packets.append(pyorb.Empty)
        return packets


def print_itm_messages(packets: list[ctypes.Structure]):
    """Helper function to pretty-print structures returned by pyorb ITM parser."""
    try:
        import pyorb
    except ImportError:
        warn("Can't import pyorb. Try `pip install python-orbuculum`")
        return

    for p in packets:
        print(f"{p.__class__.__name__}")
        match p.__class__:
            case pyorb.Empty:
                pass
            case pyorb.swMsg:
                print(f"\tsrcAddr: 0x{p.srcAddr:02x}")
                print(f"\tlen    : 0x{p.len:02x}")
                print(f"\tvalue  : 0x{p.value:08x}")
            case pyorb.nisyncMsg:
                print(f"\ttype : 0x{p.type:02x}")
                print(f"\taddr : 0x{p.addr:08x}")
            case pyorb.oswMsg:
                print(f"\tcomp   : 0x{p.comp:02x}")
                print(f"\toffset : 0x{p.offset:08x}")
            case pyorb.watchMsg:
                print(f"\tcomp: 0x{p.comp:02x}")
                print(f"\tdata: 0x{p.data:08x}")
            case pyorb.wptMsg:
                print(f"\tcomp : 0x{p.comp:02x}")
                print(f"\tdata : 0x{p.data:08x}")
            case pyorb.pcSampleMsg:
                print(f"\tsleep: {p.sleep}")
                print(f"\tPC   : 0x{p.pc:08x}")
            case pyorb.dwtMsg:
                print(f"\tevent: 0x{p.event:02x}")
            case pyorb.excMsg:
                print(f"\texceptionNumber: 0x{p.exceptionNumber:08x}")
                print(f"\teventType      : 0x{p.eventType:02x}")
            case pyorb.TSMsg:
                print(f"\ttimeStatus: 0x{p.timeStatus:02x}")
                print(f"\ttimeInc   : 0x{p.timeInc:08x}")
            case x:
                print(f"<Unhandled packet {x}>")


def test_decoder():
    dec = TpiuDecoder()

    # Frame from the ARM documentation example
    # It covers a single frame with delayed ID
    frame = bytes.fromhex("07 AA A6 A7 2B A8 54 52 52 54 07 CA C6 C7 C8 1C")
    dec.accumulate(frame)
    decoded = dec.packets
    assert set(decoded.get_stream_ids()) == {0x03, 0x15}
    assert decoded.get_stream(0x03) == bytes.fromhex("aa a6 a7 a8 ca c6 c7 c8")
    assert decoded.get_stream(0x15) == bytes.fromhex("55 52 53 54")

    # Frames collected with Husky Plus on pc_sample_annotate.ipynb
    # Then exported without removing the sync. Good test case as it
    # has a mix of long and short sync packets
    # File has been truncated to the first 0x200 bytes 
    frame = bytes.fromhex("""
        03 17 28 22 00 00 ff 7f  ff 7f ff 7f ff 7f 03 17
        80 21 00 00 ff 7f ff 7f  ff 7f ff 7f 03 17 e0 00
        20 00 01 00 ff 7f ff 7f  ff 7f ff 7f 03 17 e8 20
        00 00 ff 7f ff 7f ff 7f  ff 7f 03 17 fa 20 00 02
        01 00 ff 7f ff 7f ff 7f  ff 7f 03 17 14 21 00 00
        ff 7f ff 7f ff 7f ff 7f  03 17 10 21 00 00 01 01
        ff 7f ff ff ff 7f ff ff  ff 7f 03 17 22 21 00 00
        ff 7f ff 7f ff 7f ff 7f  03 17 6c 21 00 00 ff 7f
        ff 7f ff 7f ff 7f 03 17  6c 00 20 00 01 00 ff 7f
        ff 7f ff 7f ff 7f 03 17  6c 21 00 00 ff 7f ff 7f
        ff 7f ff 7f 03 17 6c 21  00 03 01 00 ff 7f ff 7f
        ff 7f ff 7f 03 17 d4 20  00 00 ff 7f ff 7f ff 7f
        ff 7f 03 17 e8 20 00 00  01 01 ff 7f ff ff ff 7f
        ff ff ff 7f 03 17 f4 20  00 00 ff 7f ff 7f ff 7f
        ff 7f 03 17 0a 21 00 00  ff 7f ff 7f ff 7f ff 7f
        03 17 16 00 20 00 01 00  ff 7f ff 7f ff 7f ff 7f
        03 17 16 21 00 00 ff 7f  ff 7f ff 7f ff 7f 03 17
        32 21 00 03 01 00 ff 7f  ff 7f ff 7f ff 7f 03 17
        6c 21 00 00 ff 7f ff 7f  ff 7f ff 7f 03 17 6c 21
        00 00 01 01 ff 7f ff ff  ff 7f ff ff ff 7f 03 17
        6c 21 00 00 ff 7f ff 7f  ff 7f ff 7f 03 17 6c 21
        00 00 ff 7f ff 7f ff 7f  ff 7f 03 17 e4 00 20 00
        01 00 ff 7f ff 7f ff 7f  ff 7f 03 17 f0 20 00 00
        ff 7f ff 7f ff 7f ff 7f  03 17 f0 20 00 02 01 00
        ff 7f ff 7f ff 7f ff 7f  03 17 1e 21 00 00 ff 7f
        ff 7f ff 7f ff 7f 03 17  1e 21 00 00 01 01 ff 7f
        ff ff ff 7f ff ff ff 7f  03 17 14 21 00 00 ff 7f
        ff 7f ff 7f ff 7f 03 17  44 21 00 00 ff 7f ff 7f
        ff 7f ff 7f 03 17 6c 00  20 00 01 00 ff 7f ff 7f
        ff 7f ff 7f 03 17 6c 21  00 00 ff 7f ff 7f ff 7f
        ff 7f 03 17 6c 21 00 03  01 00 ff 7f ff 7f ff 7f
        ff 7f 03 17 6c 21 00 00  ff 7f ff 7f ff 7f ff 7f
    """)
    # make sure we clear the fifo before re-using the decoder
    # and don't ask for a sync packet to begin decoding
    dec.reset(synced=True)
    dec.accumulate(frame)
    decoded = dec.packets
    # We should only get ITM packets, i.e. stream 1
    assert set(decoded.get_stream_ids()) == {1}
    # decoding FIFO should still contain 8 bytes (half a frame)
    assert len(dec.fifo) == 8
    itm_stream = decoded.get_stream(1)
    # Decoded stream should have 
    assert len(itm_stream) == 164
    itm_packets = dec.get_itm_messages()
    if itm_packets:
        # If we're here, it means that pyorb is installed as well as liborb
        # But it's only imported in the scope of functions so we need to import it
        # here again.
        import pyorb

        # We should only have PC sampling packets
        assert all([isinstance(p, pyorb.pcSampleMsg) for p in itm_packets])
        # 32 packets should have been decoded by orbuculum
        assert len(itm_packets) == 32

if __name__ == "__main__":
    test_decoder()

