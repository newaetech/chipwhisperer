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
from collections import defaultdict
import ctypes
from typing import Final
from warnings import warn


class TpiuStreams:
    """ Helper class to queue `TpiuByte` values."""
    streams: defaultdict[int, bytearray]

    def __init__(self):
        self.streams = defaultdict(bytearray)

    def clear(self) -> None:
        """ Removes all the streams"""
        self.streams.clear()

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
    >>> raw = trace.read_capture_data()
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
    LONG_SYNC = 0xffffff7f
    TPIU_FRAME_LEN: Final[int] = 16

    syncwatch: int
    fifo: list[int]
    packets: TpiuStreams
    need_sync: bool
    current_stream: int
    _cached_itm_messages: list[ctypes.Structure] | None
    _itm_decoder: ctypes.c_void_p | None

    def __init__(self, assume_synced: bool = True):
        """
        Args:
            assume_synced: Indicates wheter the parser should wait for
            a full sync indicator before starting to queue bytes. Defaults to `True`
            meaning we consider a full sync indicator has already been seen.
        """
        self.fifo = []
        self.packets = TpiuStreams()
        self.reset(assume_synced)
        self._itm_decoder = None

    def reset(self, synced: bool) -> None:
        """ Resets the decoder, clearing all queued bytes.

        Args:
            synced: indicates if the decoder starts in sync'd on unsync'd mode.
        """
        self._cached_itm_messages = None
        self.current_stream = 0
        self.fifo.clear()
        self.packets.clear()
        if synced:
            self.need_sync = False
            self.syncwatch = self.LONG_SYNC
        else:
            self.need_sync = True
            self.syncwatch = 0

    def accumulate_byte(self, byte: int) -> None:
        """ Add a single byte value in the queue."""
        assert 0 <= byte <= 255
        self.accumulate(bytes([byte]))

    def accumulate(self, block: bytes) -> None:
        """ Add all the bytes in the queue."""
        self._cached_itm_messages = None
        fifo = self.fifo
        syncwatch = self.syncwatch
        need_sync = self.need_sync
        cur_stream = self.current_stream
        streams = self.packets.streams
        cur_buf = streams[cur_stream] if cur_stream > 0 else None

        n = len(block)
        pos = 0

        # Fast C-level scan if starting unsynced (handling LONG_SYNC split across calls)
        if need_sync:
            while pos < n and pos < 3:
                syncwatch = ((syncwatch << 8) | block[pos]) & 0xffff_ffff
                pos += 1
                if syncwatch == self.LONG_SYNC:
                    need_sync = False
                    fifo.clear()
                    break
            if need_sync:
                idx = block.find(b"\xff\xff\xff\x7f", max(0, pos - 3))
                if idx < 0:
                    for b in block[max(pos, n - 4):]:
                        syncwatch = ((syncwatch << 8) | b) & 0xffff_ffff
                    self.syncwatch = syncwatch
                    return
                need_sync = False
                fifo.clear()
                syncwatch = self.LONG_SYNC
                pos = idx + 4

        # Fast 16-byte frame path when no b"\xff\x7f" syncs exist in the remainder of block
        if not fifo and (syncwatch & 0xff) != 0xff and block.find(b"\xff\x7f", pos) < 0:
            fast_end = pos + ((n - pos) & ~15)
            while pos < fast_end:
                b0 = block[pos]
                b2 = block[pos + 2]
                b4 = block[pos + 4]
                b6 = block[pos + 6]
                b8 = block[pos + 8]
                b10 = block[pos + 10]
                b12 = block[pos + 12]
                b14 = block[pos + 14]
                low_bits = block[pos + 15]
                # Fast path when no stream ID change occurs in this 16-byte frame
                if ((b0 | b2 | b4 | b6 | b8 | b10 | b12 | b14) & 1) == 0:
                    assert cur_stream >= 0, "ERROR: byte not associated with a stream"
                    if cur_buf is not None:
                        cur_buf.extend((
                            b0 | (low_bits & 1), block[pos + 1],
                            b2 | ((low_bits >> 1) & 1), block[pos + 3],
                            b4 | ((low_bits >> 2) & 1), block[pos + 5],
                            b6 | ((low_bits >> 3) & 1), block[pos + 7],
                            b8 | ((low_bits >> 4) & 1), block[pos + 9],
                            b10 | ((low_bits >> 5) & 1), block[pos + 11],
                            b12 | ((low_bits >> 6) & 1), block[pos + 13],
                            b14 | ((low_bits >> 7) & 1),
                        ))
                else:
                    delayed_change = -1
                    for j in range(15):
                        b = block[pos + j]
                        if (j & 1) == 0:
                            if b & 1 == 1:
                                b >>= 1
                                if low_bits & 1 == 1:
                                    delayed_change = b
                                else:
                                    cur_stream = b
                                    cur_buf = streams[cur_stream] if cur_stream > 0 else None
                            else:
                                assert cur_stream >= 0, f"ERROR: byte not associated with a stream {j=}, 0x{b:02X}"
                                if cur_buf is not None:
                                    cur_buf.append(b | (low_bits & 1))
                            low_bits >>= 1
                        else:
                            assert cur_stream >= 0, f"ERROR: byte not associated with a stream {j=}, 0x{b:02X}"
                            if cur_buf is not None:
                                cur_buf.append(b)
                            if delayed_change >= 0:
                                cur_stream = delayed_change
                                delayed_change = -1
                                cur_buf = streams[cur_stream] if cur_stream > 0 else None
                pos += 16
            if pos >= 4:
                syncwatch = int.from_bytes(block[pos - 4:pos], "big")

        for b in block[pos:]:
            syncwatch = ((syncwatch << 8) | b) & 0xffff_ffff
            if syncwatch == self.LONG_SYNC:
                need_sync = False
                # tracewhisperer_logger.debug("SYNC packet. Clearing fifo")
                fifo.clear()
                continue

            if need_sync:
                # tracewhisperer_logger.debug("Dropped byte (out of sync): 0x%02x", b)
                continue

            # tracewhisperer_logger.debug("Queueing byte %02X. Fifo = %r", b, self.fifo)
            # We take 16 bits at a time, so we always queue odd index bytes
            if (len(fifo) & 1) == 0:
                fifo.append(b)
                continue

            # Check if we have an half-sync packet and discard it
            if fifo[-1] == 0xff and b == 0x7f:
                fifo.pop()
                # tracewhisperer_logger.debug("Short SYNC. Poping out of the queue")
                continue

            fifo.append(b)

            # Do we have a full packet to decode?
            if len(fifo) == 16:
                b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, low_bits = fifo
                if ((b0 | b2 | b4 | b6 | b8 | b10 | b12 | b14) & 1) == 0:
                    assert cur_stream >= 0, "ERROR: byte not associated with a stream"
                    if cur_buf is not None:
                        cur_buf.extend((
                            b0 | (low_bits & 1), b1,
                            b2 | ((low_bits >> 1) & 1), b3,
                            b4 | ((low_bits >> 2) & 1), b5,
                            b6 | ((low_bits >> 3) & 1), b7,
                            b8 | ((low_bits >> 4) & 1), b9,
                            b10 | ((low_bits >> 5) & 1), b11,
                            b12 | ((low_bits >> 6) & 1), b13,
                            b14 | ((low_bits >> 7) & 1),
                        ))
                else:
                    delayed_change = -1
                    for i in range(15):
                        fb = fifo[i]
                        if (i & 1) == 0:
                            if fb & 1 == 1:
                                fb >>= 1
                                if low_bits & 1 == 1:
                                    delayed_change = fb
                                else:
                                    cur_stream = fb
                                    cur_buf = streams[cur_stream] if cur_stream > 0 else None
                            else:
                                assert cur_stream >= 0, f"ERROR: byte not associated with a stream {i=}, 0x{fb:02X}"
                                if cur_buf is not None:
                                    cur_buf.append(fb | (low_bits & 1))
                            low_bits >>= 1
                        else:
                            assert cur_stream >= 0, f"ERROR: byte not associated with a stream {i=}, 0x{fb:02X}"
                            if cur_buf is not None:
                                cur_buf.append(fb)
                            if delayed_change >= 0:
                                cur_stream = delayed_change
                                delayed_change = -1
                                cur_buf = streams[cur_stream] if cur_stream > 0 else None
                fifo.clear()

        self.syncwatch = syncwatch
        self.need_sync = need_sync
        self.current_stream = cur_stream

    def _decode_frame(self):
        """ Internal method called as soon as a complete frame has been pushed
        to the queue.
        """
        assert len(self.fifo) == self.TPIU_FRAME_LEN
        low_bits = self.fifo[-1]
        delayed_change = -1

        cur_stream = self.current_stream
        streams = self.packets.streams
        cur_buf = streams[cur_stream] if cur_stream > 0 else None

        for i in range(self.TPIU_FRAME_LEN - 1):
            b = self.fifo[i]
            if i & 1 == 0:
                # Byte could be an ID or a data byte
                if b & 1 == 1:
                    # ID byte
                    b >>= 1
                    if low_bits & 1 == 1:
                        delayed_change = b
                    else:
                        cur_stream = b
                        cur_buf = streams[cur_stream] if cur_stream > 0 else None
                else:
                    # data byte (stream 0 is TPIU null/idle padding)
                    assert cur_stream >= 0, f"ERROR: byte not associated with a stream {i=}, 0x{b:02X}"
                    if cur_buf is not None:
                        cur_buf.append(b | (low_bits & 1))
                low_bits >>= 1
            else:
                # Data byte as-is (stream 0 is TPIU null/idle padding)
                assert cur_stream >= 0, f"ERROR: byte not associated with a stream {i=}, 0x{b:02X}"
                if cur_buf is not None:
                    cur_buf.append(b)
                # Handle delayed channel change
                if delayed_change >= 0:
                    cur_stream = delayed_change
                    delayed_change = -1
                    cur_buf = streams[cur_stream] if cur_stream > 0 else None
        self.fifo.clear()
        self.current_stream = cur_stream

    def get_itm_messages(self) -> list[ctypes.Structure]:
        """ Get all the ITM messages that have been successfully parsed.

        This method relies on pyorb (`pip install python-orbuculum`) and liborb
        to parse messages. If not present, it will return an empty list.
        This replaces writing a file on the disk and calling
        orbuculum tools on it to parse the file which since v2.2.0 requires the
        files to be using their OFLOW format."""
        if self._cached_itm_messages is not None:
            return self._cached_itm_messages

        data = self.packets.streams.get(1)
        if not data:
            self._cached_itm_messages = []
            return self._cached_itm_messages

        try:
            import pyorb # type: ignore
        except ImportError:
            warn("Can't import pyorb. Try `pip install python-orbuculum`")
            return []

        packets: list[ctypes.Structure] = []
        if self._itm_decoder is None:
            self._itm_decoder = pyorb.orb.ITMDecoderCreate()
        itm = self._itm_decoder
        pyorb.orb.ITMDecoderInit(itm, True)
        pump = pyorb.orb.ITMPump
        get_pkt = pyorb.orb.ITMGetDecodedPacket
        ev_rxed = pyorb.orb.ITM_EV_PACKET_RXED
        byref = pyorb.byref
        msg_cls = pyorb.msg
        empty_cls = pyorb.Empty
        field_names = tuple(f[0] for f in pyorb.msgUnion._fields_)
        n_fields = len(field_names)

        for c in data:
            if ev_rxed == pump(itm, c):
                p = msg_cls()
                get_pkt(itm, byref(p))
                mtype = p.msgtype
                if 0 <= mtype < n_fields:
                    packets.append(getattr(p.m, field_names[mtype]))
                else:
                    packets.append(empty_cls())
        self._cached_itm_messages = packets
        return packets


def print_itm_messages(packets: list[ctypes.Structure]):
    """Helper function to pretty-print structures returned by pyorb ITM parser."""
    try:
        import pyorb  # type: ignore
    except ImportError:
        warn("Can't import pyorb. Try `pip install python-orbuculum`")
        return

    for p in packets:
        print(f"{p.__class__.__name__}")
        match p.__class__:
            case pyorb.Empty:
                pass
            case pyorb.swMsg:
                print(f"\tsrcAddr: 0x{p.srcAddr & 0xff:02x}")
                print(f"\tlen    : 0x{p.len & 0xff:02x}")
                print(f"\tvalue  : 0x{p.value & 0xffffffff:08x}")
            case pyorb.nisyncMsg:
                print(f"\ttype : 0x{p.type & 0xff:02x}")
                print(f"\taddr : 0x{p.addr & 0xffffffff:08x}")
            case pyorb.oswMsg:
                print(f"\tcomp   : 0x{p.comp & 0xff:02x}")
                print(f"\toffset : 0x{p.offset & 0xffffffff:08x}")
            case pyorb.watchMsg:
                print(f"\tcomp: 0x{p.comp & 0xff:02x}")
                print(f"\tdata: 0x{p.data & 0xffffffff:08x}")
            case pyorb.wptMsg:
                print(f"\tcomp : 0x{p.comp & 0xff:02x}")
                print(f"\tdata : 0x{p.data & 0xffffffff:08x}")
            case pyorb.pcSampleMsg:
                print(f"\tsleep: {p.sleep}")
                print(f"\tPC   : 0x{p.pc & 0xffffffff:08x}")
            case pyorb.dwtMsg:
                print(f"\tevent: 0x{p.event & 0xff:02x}")
            case pyorb.excMsg:
                print(f"\texceptionNumber: 0x{p.exceptionNumber & 0xffffffff:08x}")
                print(f"\teventType      : 0x{p.eventType & 0xff:02x}")
            case pyorb.TSMsg:
                print(f"\ttimeStatus: 0x{p.timeStatus & 0xff:02x}")
                print(f"\ttimeInc   : 0x{p.timeInc & 0xffffffff:08x}")
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
        import pyorb  # type: ignore

        # We should only have PC sampling packets
        assert all([isinstance(p, pyorb.pcSampleMsg) for p in itm_packets])
        # 32 packets should have been decoded by orbuculum
        assert len(itm_packets) == 32

    # Real hardware trace captured with ChipWhisperer Husky Plus on RP2350 (Cortex-M33)
    # with simultaneous Stream 1 (DWT data/address watchpoints) and Stream 2 (CoreSight
    # ETMv4 instruction trace), mixed with both LONG_SYNC (ff ff ff 7f) and short
    # half-sync (ff 7f) packets.
    rp2350_hw_frame = bytes.fromhex("""
        ff ff ff 7f c2 0d f6 f5  da 10 c6 0d f6 e3 fe 0d
        f4 00 00 06 00 00 00 00  00 00 00 00 00 80 da 01
        08 01 c0 60 ff 7f ff 7f  ff 7f ff 7f 00 f7 82 6b
        14 00 10 00 fa db 0e 11  c6 0d f6 12 c6 0d f6 fc
        ff 7f ff 7f ff 7f ff 7f  c2 0d f6 f5 da 10 c6 0d
        05 f6 e2 98 fe 0d f4 e2  ff 7f ff 7f ff 7f ff 7f
        da 0e 10 c6 0c f6 c6 0d  f6 fc c2 1c 0c f7 f4 db
        ff 7f ff 7f ff 7f ff 7f  10 c6 0c f6 e2 fe 0c f4
        e2 db 0e 3b 10 c6 0c f6  c6 0d f6 fc ff 7f ff 7f
        ff 7f ff 7f c2 0d f6 f5  da 10 c6 63 0c f6 e2 fe
        0c f4 e2 db ff 7f ff 7f  ff 7f ff 7f 0e 11 c6 0d
        f6 c6 0c 87 f6 fc c2 0d  f6 f5 da 10 ff 7f ff 7f
        ff 7f ff 7f c6 0d f6 e3  fe 0d f4 0c e2 db 0e 11
        c6 0d f6 c6 ff 7f ff 7f  ff 7f ff 7f 0c f6 fc c2
        0c f7 f4 d0 da 10 c6 0d  f6 e3 fe 0d f4 e2 da 0e
        ff 7f ff 7f ff 7f ff 7f  10 c6 0c e1 f6 c6 0c f6
        fc c2 0c f7 f4 db 10 c6  ff 7f ff 7f ff 7f ff 7f
        0c f6 e2 da fe 0d f4 e2  da 0e 05 11 c6 0d f6 c6
        0c f6 fc 44 ff 7f ff 7f  ff 7f ff 7f c2 0d f6 f5
        da 10 c6 0d f6 e3 fe 0d  f4 e2 da 86 ff 7f ff 7f
        ff 7f ff 7f 03 0e 00 00  9e 00 00 00 00 af 00 00
        00 00 74 85 00 8f 94 68  ff 7f ff 7f ff 7f ff 7f
        76 8c 8c 00 ae c4 50 c0  2c 9f 00 1b 00 00 00 8d
        20 8f 20 69 05 11 c6 0d  f6 c6 0c 84 f6 f5 96 97
        14 f7 10 d7 ff 7f ff 7f  ff 7f ff 7f fe 11 e6 12
        e4 12 f6 cc 96 1c fa db  90 fb da 90 ff 7f ff 7f
        ff 7f ff 7f f6 0d 03 f8  76 8c 8c ba 1c 8d 18 8d
        14 8d 10 8d 0c 8d 08 8d  05 04 fc c0 f6 90 fa db
        90 fb 12 db 90 fb da 90  fa db 90 63 ff 7f ff 7f
        ff 7f ff 7f f6 0d fa fb  d6 f7 0c f4 e6 12 e4 12
        f6 90 fa ed ff 7f ff 7f  ff 7f ff 7f 03 db 8c 21
        8e 20 6a 76 8c 8d 1c 8d  18 8d 14 07 8c 10 05 8d
        90 fb da 90
    """)
    dec.reset(synced=False)
    dec.current_stream = 2
    dec.accumulate(rp2350_hw_frame)
    assert set(dec.packets.get_stream_ids()) == {1, 2}
    s1_expected = dec.packets.get_stream(1)
    s2_expected = dec.packets.get_stream(2)
    assert s1_expected is not None and len(s1_expected) == 65
    assert s2_expected is not None and len(s2_expected) == 273
    assert len(dec.fifo) == 8
    hw_itm_packets = dec.get_itm_messages()
    if hw_itm_packets:
        import pyorb  # type: ignore

        assert len(hw_itm_packets) == 21
        assert all(isinstance(p, (pyorb.watchMsg, pyorb.wptMsg, pyorb.pcSampleMsg)) for p in hw_itm_packets)

    # Verify chunked accumulate() and byte-by-byte accumulate_byte() equivalence,
    # including unsynced pre-trigger garbage and LONG_SYNC split across chunks
    unsynced_stream = bytes.fromhex("de ad be ef ff ff 00 12 34 ff ff") + rp2350_hw_frame
    for chunk_size in (1, 2, 3, 5, 7, 15, 16, 17, 64):
        dec_chunk = TpiuDecoder(assume_synced=False)
        dec_chunk.current_stream = 2
        if chunk_size == 1:
            for b in unsynced_stream:
                dec_chunk.accumulate_byte(b)
        else:
            for i in range(0, len(unsynced_stream), chunk_size):
                dec_chunk.accumulate(unsynced_stream[i : i + chunk_size])
        assert dec_chunk.packets.get_stream(1) == s1_expected
        assert dec_chunk.packets.get_stream(2) == s2_expected
        assert dec_chunk.fifo == dec.fifo
        assert dec_chunk.syncwatch == dec.syncwatch
        assert dec_chunk.current_stream == dec.current_stream
        assert len(dec_chunk.get_itm_messages()) == len(hw_itm_packets)

    # Verify Stream 0 (null/idle padding) is ignored and 0xFF data bytes not followed
    # by 0x7F at an odd halfword index are preserved intact
    idle_and_ff_frame = bytes.fromhex(
        "01 00 00 00 00 00 00 00  03 ff 00 ff fe ff 80 00"
    )
    dec.reset(synced=True)
    dec.accumulate(idle_and_ff_frame)
    assert set(dec.packets.get_stream_ids()) == {1}
    assert dec.packets.get_stream(1) == bytes.fromhex("ff 00 ff fe ff 80")

if __name__ == "__main__":
    test_decoder()
