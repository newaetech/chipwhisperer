"""
Package containing all of the target types that the ChipWhisperer API can connect to:

Targets:
* SimpleSerial - Communication via CW Uart Pins
* CW305 - USB communication to CW305
* SAKURAG - Requires FTDI module, old, untested
* SASEBOGII - Requires FTDI module, old, untested
* SmartCard - Currently unavailable (tied to GUI)
"""
from .CW305 import CW305
from .CW310 import CW310
