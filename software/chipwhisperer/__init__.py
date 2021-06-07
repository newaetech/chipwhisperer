# -*- coding: utf-8 -*-
"""
.. module:: chipwhisperer
   :platform: Unix, Windows
   :synopsis: Test

.. moduleauthor:: NewAE Technology Inc.

Main module for ChipWhisperer.
"""

__version__ = '5.6.0'
import os, os.path, time
from zipfile import ZipFile

from chipwhisperer.capture import targets
from chipwhisperer.capture.scopes.cwhardware.ChipWhispererSAM3Update import SAMFWLoader
import logging
from chipwhisperer.logging import *

# replace bytearray with inherited class with better repr and str.
import builtins
builtins.bytearray = util.bytearray

# from chipwhisperer.capture.scopes.cwhardware import ChipWhispererSAM3Update as CWFirmwareUpdate

ktp = key_text_patterns #alias

def program_target(scope, prog_type, fw_path, **kwargs):
    """Program the target using the programmer <type>

    Programmers can be found in the programmers submodule

    Args:
       scope (ScopeTemplate): Connected scope object to use for programming
       prog_type (Programmer): Programmer to use. See chipwhisperer.programmers
           for available programmers
       fw_path (str): Path to hex file to program

    .. versionadded:: 5.0.1
        Simplified programming target
    """
    raise NotImplementedError("Install chipwhisperer full for this function")



def open_project(filename):
    """Load an existing project from disk.

    Args:
       filename (str): Path to project file.

    Returns:
       A chipwhisperer project object.

    Raises:
       OSError: filename does not exist.
    """
    raise NotImplementedError("Install chipwhisperer full for this function")


def create_project(filename, overwrite=False):
    """Create a new project with the path <filename>.

    If <overwrite> is False, raise an OSError if this path already exists.

    Args:
       filename (str): File path to create project file at. Must end with .cwp
       overwrite (bool, optional): Whether or not to overwrite an existing
           project with <filename>. Raises an OSError if path already exists
           and this is false. Defaults to false.

    Returns:
       A chipwhisperer project object.

    Raises:
       OSError: filename exists and overwrite is False.
    """
    raise NotImplementedError("Install chipwhisperer full for this function")


def import_project(filename, file_type='zip', overwrite=False):
    """Import and open a project.

    Will import the **filename** by extracting to the current working
    directory.

    Currently support file types:
     * zip

    Args:
        filename (str): The file name to import.
        file_type (str): The type of file that is being imported.
            Default is zip.
        overwrite (bool): Whether or not to overwrite the project given as
            the **import_as** project.

    .. versionadded:: 5.1
        Add **import_project** function.
    """
    raise NotImplementedError("Install chipwhisperer full for this function")


def scope(scope_type=None, **kwargs):
    """Create a scope object and connect to it.

    This function allows any type of scope to be created. By default, the
    object created is based on the attached hardware (OpenADC for
    CWLite/CW1200, CWNano for CWNano).

    Scope Types:
     * :class:`scopes.OpenADC` (Pro and Lite)
     * :class:`scopes.CWNano` (Nano)

    If multiple chipwhisperers are connected, the serial number of the one you
    want to connect to can be specified by passing sn=<SERIAL_NUMBER>

    Args:
       scope_type (ScopeTemplate, optional): Scope type to connect to. Types
           can be found in chipwhisperer.scopes. If None, will try to detect
           the type of ChipWhisperer connected. Defaults to None.
       sn (str, optional): Serial number of ChipWhisperer that you want to
           connect to. Required if more than one ChipWhisperer
           of the same type is connected (i.e. two CWNano's or a CWLite and
           CWPro). Defaults to None.

    Returns:
        Connected scope object.

    Raises:
        OSError: Can be raised for issues connecting to the chipwhisperer, such
            as not having permission to access the USB device or no ChipWhisperer
            being connected.
        Warning: Raised if multiple chipwhisperers are connected, but the type
            and/or the serial numbers are not specified

    .. versionchanged:: 5.1
        Added autodetection of scope_type
    """
    raise NotImplementedError("Install chipwhisperer full for this function")


def target(scope, target_type=targets.SimpleSerial, **kwargs):
    """Create a target object and connect to it.

    Args:
       scope (ScopeTemplate): Scope object that we're connecting to the target
           through.
       target_type (TargetTemplate, optional): Target type to connect to.
           Defaults to targets.SimpleSerial. Types can be found in
           chipwhisperer.targets.
       **kwargs: Additional keyword arguments to pass to target setup. Rarely
           needed.

    Returns:
        Connected target object specified by target_type.
    """
    target = target_type()
    target.con(scope, **kwargs)

    # need to check 
    if scope and (isinstance(target, targets.SimpleSerial) or isinstance(target, targets.SimpleSerial2)):
        if isinstance(scope, scopes.CWNano) and not fw_ver_compare(scope.fw_version, {"major": 0, "minor": 24}):
            target.ser.cwlite_usart._max_read = 128
            target_logger.warning("Old firmware: limiting max serial read")
    return target

def capture_trace(scope, target, plaintext, key=None, ack=True):
    """Capture a trace, sending plaintext and key

    Does all individual steps needed to capture a trace (arming the scope
    sending the key/plaintext, getting the trace data back, etc.). Uses
    target.output_len as the length of the expected target reponse for
    simpleserial.

    Args:
        scope (ScopeTemplate): Scope object to use for capture.
        target (TargetTemplate): Target object to read/write text from.
        plaintext (bytearray): Plaintext to send to the target. Should be
            unencoded bytearray (will be converted to SimpleSerial when it's
            sent). If None, don't send plaintext.
        key (bytearray, optional): Key to send to target. Should be unencoded
            bytearray. If None, don't send key. Defaults to None.
        ack (bool, optional): Check for ack when reading response from target.
            Defaults to True.

    Returns:
        :class:`Trace <chipwhisperer.common.traces.Trace>` or None if capture
        timed out.

    Raises:
        Warning or OSError: Error during capture.

    Example:
        Capturing a trace::

            import chipwhisperer as cw
            scope = cw.scope()
            scope.default_setup()
            target = cw.target()
            ktp = cw.ktp.Basic()
            key, pt = ktp.new_pair()
            trace = cw.capture_trace(scope, target, pt, key)

    .. versionadded:: 5.1
        Added to simplify trace capture.

    .. versionchanged:: 5.2
        Added ack parameter and use of target.output_len
    """
    raise NotImplementedError("Install chipwhisperer full for this function")

def plot(*args, **kwargs):
    """Get a plotting object for use in Jupyter.
    
    Uses a Holoviews/Bokeh plot with a width of 800 and
    a height of 600. You must have Holoviews and Bokeh
    installed, as well as be working in a Jupyter
    environment.

    args and kwargs are the same as a typical Holoviews plot.

    Plotting a trace in a Jupyter environment::

        import chipwhisperer as cw
        scope = cw.scope()
        ...
        trace = cw.capture_trace(scope, target, text, key)
        display(cw.plot(trace.wave))

    Returns:
        A holoviews Curve object
    """
    raise NotImplementedError("Install chipwhisperer full for this function")