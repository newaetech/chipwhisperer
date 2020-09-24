#!/usr/bin/python
# -*- coding: utf-8 -*-
#
# =================================================

import smartleia_target as LEIA
from ._base import TargetTemplate

class LeiaTarget(TargetTemplate, LEIA.TargetController):
    _name= 'LEIA Java Smartcard Target'
    
    connectStatus = False

    def __init__(self):
        LEIA.TargetController.__init__(self)

    def __del__(self):
        """Close system if needed"""

        self.close()

    def getStatus(self):
        return self.connectStatus

    def dis(self):
        """Disconnect from target"""

        self.close()
        self.connectStatus = False

    def con(self, scope=None, **kwargs):
        """Connect to target"""

        try:
            self.open()
            self.connectStatus = True

        except:
            self.dis()
            raise

    @property
    def output_len(self):
        """The length of the output expected from the crypto algorithm (in bytes)"""

        return len(self.getExpected())

    @output_len.setter
    def output_len(self, length):
        #FIXME
        return 16

    def _con(self, scope=None):
        self.con()

    def reinit(self):
        pass

    def validateSettings(self):
        # FIXME
        # return [("warn", "Target Module", "You can't use module \"" + self.getName() + "\"", "Specify other module", "57a3924d-3794-4ca6-9693-46a7b5243727")]
        return []

    def _dict_repr(self):
        raise NotImplementedError("Must define target-specific properties.")

    def __repr__(self):
        return util.dict_to_str(self._dict_repr())

    def __str__(self):
        return self.__repr__()

