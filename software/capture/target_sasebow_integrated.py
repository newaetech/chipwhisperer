# -*- coding: cp1252 -*-
# This file is part of AESExplorer
# Copyright (C) Colin O'Flynn 2012
# See www.newae.com for details
#
# Released under LGPL License

import sys
import os
import threading
import time
import logging
import math
import serial

CODE_READ       = 0x80
CODE_WRITE      = 0xC0

ADDR_STATUS     = 30
ADDR_HDRADDR     = 31
ADDR_PLDADDR     = 32

FLAG_ACKOK      = 0x10
FLAG_BUSY       = 0x08
FLAG_PASSTHRU   = 0x04
FLAG_PRESENT    = 0x02
FLAG_RESET      = 0x01

class SASEBOW_Integrated():
    
    def __init__(self):
        self.oa = None

    def __del__(self):
        self.close()

#Following Extensions for SASEBO-W Only
    def scGetStatus(self):
        sets = self.oa.sendMessage(CODE_READ, ADDR_STATUS, Validate=False)
        if sets:
            return sets[0]
        else:
            return 0
    
    def connect(self, oa):
        self.oa = oa
        self.reset()

    def reset(self):

        #Flush
        #self.readAll()

        #Toggle Reset
        cmd = bytearray(1)
        #Reset active, pass-through on
        cmd[0] = FLAG_PASSTHRU | FLAG_RESET;        
        self.oa.sendMessage(CODE_WRITE, ADDR_STATUS, cmd, Validate=False)
        time.sleep(0.2)

        self.oa.flushInput()
        
        #Reset inactive, pass-through on
        cmd[0] = FLAG_PASSTHRU;
        self.oa.sendMessage(CODE_WRITE, ADDR_STATUS, cmd, Validate=False)

        #Wait for card to settle
        time.sleep(0.5)            

        #Get ATR
        data = self.readAll()
        stratr = "ATR = "
        for p in data:
            stratr = stratr + "%2X "%p

        #Disable pass-through
        cmd[0] = 0x00;
        self.oa.sendMessage(CODE_WRITE, ADDR_STATUS, cmd, Validate=False)            

        print stratr
        self.stratr = stratr
        return stratr
        
    def readAll(self):
        resp = bytearray(self.oa.serial.read(50))
        return resp

    def readPayload(self):
        resp = self.oa.sendMessage(CODE_READ, ADDR_PLDADDR, Validate=False, maxResp=18)
        return bytearray(resp)

    def waitDone(self):
        resp = bytearray(1)
        resp[0] = FLAG_BUSY
        timeout = 0
        while((resp[0] & FLAG_BUSY) == FLAG_BUSY):
            resp = self.oa.sendMessage(CODE_READ, ADDR_STATUS, Validate=False)

            timeout = timeout + 1
            #time.sleep(0.01)
            
            if timeout > 100:
                return False

        if (resp[0] & FLAG_ACKOK):            
            return True
        else:
            print "No ACK from SCard?"
            return False

    def disconnect(self):
        self.oa = None
            
    def close(self):
        self.oa = None
        
    def init(self):
        self.reset()

    def getATR(self):
        return self.stratr

    def APDUHeader(self, cla, ins, p1, p2, cmd_datalen, rsp_datalen):
        header = bytearray()
        header.append(cla)
        header.append(ins)
        header.append(p1)
        header.append(p2)
        header.append(cmd_datalen)
        header.append(rsp_datalen)   
        self.oa.sendMessage(CODE_WRITE, ADDR_HDRADDR, header, Validate=False)       
        return True

    def APDUPayloadGo(self, payload=None):
        if payload:
            if len(payload) > 16:
                print "WARNING: APDU Payload must be < 16 bytes"
            payload = bytearray(payload)
            payload = payload + bytearray(range(16-len(payload)))
        else:
            payload = bytearray(range(16));

        self.oa.sendMessage(CODE_WRITE, ADDR_PLDADDR, payload, Validate=False)

    def APDUSend(self, cla, ins, p1, p2, data):
        self.APDUHeader(cla, ins, p1, p2, len(data), 0)
        self.APDUPayloadGo(data)
        
        self.waitDone()
        resp = self.readPayload()

        if len(resp) != 18:
            print "SASEBOW: USB Data Error, wrong Response Size"
            return 0

        resp = resp[16:18]
        resp = (resp[0] << 8) | resp[1]
        print resp
        return resp

    def APDURecv(self, cla, ins, p1, p2, datalen):
        self.APDUHeader(cla, ins, p1, p2, 0, datalen)
        self.APDUPayloadGo(None)

        self.waitDone()
        resp = self.readPayload()

        if len(resp) != 18:
            print "SASEBOW: USB Data Error, wrong Response Size"
            return 0

        resp = bytearray(resp)
        print "%02x %02x"%(resp[16], resp[17])
        return resp[0:datalen]        
                    
      
    def setModeEncrypt(self):
        return

    def setModeDecrypt(self):
        return

    def loadEncryptionKey(self, key):
        if key != None:
            self.APDUSend(0x80, 0x12, 0x00, 0x00, key)
      
    def loadInput(self, inputtext):
        self.input = inputtext

    def isDone(self):
        return True

    def readOutput(self):
        return self.APDURecv(0x80, 0xC0, 0x00, 0x00, 16)

    def go(self):
        self.APDUSend(0x80, 0x04, 0x04, 0x00, self.input)
   
