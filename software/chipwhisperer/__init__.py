# -*- coding: utf-8 -*-
"""
.. module:: chipwhisperer
   :platform: Unix, Windows
   :synopsis: Test

.. moduleauthor:: NewAE Technology Inc.

Main module for ChipWhisperer.
"""
__version__ = '6.0.0'

try:
    import usb1 # type: ignore
except Exception as e:
    raise ImportError("Could not import usb1. usb1 is required for ChipWhisperer >= 5.6.1. Try pip install libusb1.") from e
import os, os.path, time
from zipfile import ZipFile

from .capture import scopes, targets
from .capture.api import programmers
from .capture import acq_patterns as key_text_patterns
from .common.api import ProjectFormat as project
from .common.traces import Trace
from .common.utils import util
from .capture.scopes.cwhardware.ChipWhispererSAM3Update import SAMFWLoader, get_at91_ports
import logging
from .logging import *

from .common.results.glitch import GlitchController, load_gc_results
from .common.utils.looper import *
from .common.utils.sad_model import SADModelWrapper
from .common.utils.sad_explorer import SADExplorer
import sys, subprocess


from typing import Optional, Type, Union, List

opstr = Optional[str]

# replace bytearray with inherited class with better repr and str.
bytearray = util.CWByteArray # type: ignore

def list_devices(idProduct : Optional[List[int]]=None, get_sn=True, get_hw_loc=True) -> List[dict]:
    """Get a list of devices by NewAE (Vendor ID 0x2b3e) currently connected.

    Args:
        idProduct (Optional[List[int]], optional): List of Product IDs to restrict devices to. If 
            :code:`None`, do not restrict. Defaults to :code:`None`.
        get_sn (bool, optional): Whether or not to try to retrieve the serial number. Can fail if
            another process is connected or if we don't have permission to access the device. Defaults
            to :code:`True`.
        get_hw_loc (bool, optional): Whether or not to access the hardware location of the device.
            Can fail due to the same reasons as above. Defaults to :code:`True`.

    Returns:
        List[dict]: A list of dicts with fields :code:`{'name': str, 'sn', str, 'hw_loc': (int, int)}`

    If an unknown NewAE device is connected, :code:`'name'` will be :code:`'unknown'`. If :code:`'sn'`
    or :code:`'hw_loc'` are not desired (or cannot be accessed), they will be :code:`None`.

    .. versionadded:: 5.6.2
    """
    from .hardware.naeusb.naeusb import NAEUSB_Backend, NEWAE_PIDS
    be = NAEUSB_Backend()
    dev_list = be.get_possible_devices(idProduct)
    rtn = []
    for dev in dev_list:
        try:
            name = NEWAE_PIDS[dev.getProductID()]['name'] # type: ignore
        except Exception as e:
            other_logger.info("Could not get name of device with pid {}".format(dev.getProductID()))
            name = "Unknown"
        sn = None
        hw_loc = None
        if get_sn:
            try:
                sn = dev.getSerialNumber()
            except Exception as e:
                other_logger.warning("Could not access {} serial number (error {})".format(name, str(e)))
        if get_hw_loc:
            try:
                hw_loc = (dev.getBusNumber(), dev.getDeviceAddress())
            except Exception as e:
                other_logger.warning("Could not access {} hw_loc (error {})".format(name, str(e)))
        rtn.append({'name': name, 'sn': sn, 'hw_loc': hw_loc})

    be.usb_ctx.close()
    return rtn

def check_for_updates() -> str:
    """Check if current ChipWhisperer version is the latest.

    Checks pypi.

    .. versionadded:: 5.6.1
    """
    # need to check pip version as old ones don't work for our version check
    pv = str(subprocess.run([sys.executable, '-m', 'pip', '--version'], capture_output=True, text=True, check=False))

    pip_version = pv[pv.find("stdout=\'pip")+12:pv.find(" from")]
    if pip_version < '21.1.0':
        other_logger.warning("Old pip version: {}, unable to do CW version check".format(pip_version))
        return ""

    latest_version = str(subprocess.run([sys.executable, '-m', 'pip',  '--timeout=3', 'install', '--retries=1', '{}==random'.format("chipwhisperer")],
                        capture_output=True, text=True, check=False))
    if (not latest_version) or (latest_version == "none"):
        raise IOError("Could not check chipwhisperer version")
    latest_version = latest_version[latest_version.find('(from versions:')+15:]
    latest_version = latest_version[:latest_version.find(')')]
    latest_version = latest_version.replace(' ','').split(',')[-1]
    if (not latest_version) or (latest_version == "none"):
        raise IOError("Could not check chipwhisperer version")

    current_version = __version__

    other_logger.info("CW version: {}. Latest: {}".format(current_version, type(latest_version)))

    if latest_version <= current_version:
        other_logger.info("ChipWhisperer up to date")
        return latest_version
    else:
        other_logger.warning("ChipWhisperer update available! See https://chipwhisperer.readthedocs.io/en/latest/updating.html for updating instructions")
        return latest_version

# try:
#     check_for_updates()
# except Exception as e:
#     other_logger.warning("Could not check ChipWhisperer version, error {}".format(e))
# from chipwhisperer.capture.scopes.cwhardware import ChipWhispererSAM3Update as CWFirmwareUpdate

ktp = key_text_patterns #alias

def program_sam_firmware(serial_port : opstr=None,
    hardware_type : opstr=None, fw_path : opstr=None):
    """Program firmware onto an erased ChipWhisperer scope or target.

    Either :code:`hardware_type` or :code:`fw_path` MUST be specified. You have to specify at least
    one but not both.
    
    See https://chipwhisperer.readthedocs.io/en/latest/firmware.html for more information.

    Args:
        port (str, optional): Serial port that the ChipWhisperer bootloader is on
        fw_path (str, optional): Path to firmware, if specified don't set :code:`hardware_type`.
        hardware_type (str, optional): The type of hardware that you want to program.
            If specified, don't set :code:`fw_path`. Valid types::
            * :code:`'cwlite'`
            * :code:`'cwnano'`
            * :code:`'cw305'`
            * :code:`'cw310'`
            * :code:`'cw340'`
            * :code:`'cw1200'`
            * :code:`'cwbergen'`
            * :code:`'cwhusky'`
            * :code:`'cwhuskyplus'`

    Raises:
        ValueError: If neither :code:`port` or :code:`hardware_type` are specified.
        OSError: If the bootloader serial port cannot be found or if multiple
            bootloader serial ports are found.

    .. versionadded:: 5.6.1
        Improved programming interface
    """
    if (hardware_type, fw_path) == (None, None):
        raise ValueError("Must specify hardware_type or fw_path, see https://chipwhisperer.readthedocs.io/en/latest/firmware.html")

    if serial_port is None:
        at91_ports = get_at91_ports()
        if len(at91_ports) == 0:
            raise OSError("Could not find bootloader serial port, please see https://chipwhisperer.readthedocs.io/en/latest/firmware.html")
        if len(at91_ports) > 1:
            raise OSError("Found multiple bootloaders, please specify COM port. See https://chipwhisperer.readthedocs.io/en/latest/firmware.html")

        serial_port = at91_ports[0]
        print("Found {}".format(serial_port))
    prog = SAMFWLoader(None)
    prog.program(serial_port, hardware_type=hardware_type, fw_path=fw_path)

def program_target(scope : scopes.ScopeTypes, prog_type : programmers.Programmer, fw_path : str, **kwargs):
    """Program the target using a :code:`Programmer` class and the firmware filepath.

    Programmers can be found in the :code:`programmers` submodule.

    Args:
       scope (ScopeTypes): Connected :code:`scope` object to use for programming
       prog_type (Programmer): Programmer to use. See :code:`chipwhisperer.programmers`
           for available programmers
       fw_path (str): Path to hex file to program

    .. versionadded:: 5.0.1
        Simplified programming target
    """
    if prog_type is None: #[makes] automating notebooks much easier
        scope_logger.warning("prog_type is None, target will not be programmed")
        return
    prog : programmers.Programmer = prog_type(**kwargs)

    try:
        prog.scope = scope
        prog.open()
        prog.find()
        prog.erase()
        prog.program(fw_path, memtype="flash", verify=True)
        prog.close()
    except:
        if isinstance(prog, programmers.XMEGAProgrammer) and isinstance(scope, scopes.OpenADC):
            target_logger.info("XMEGA error detected, resetting XMEGA")
            scope.io.pdic = 0
            time.sleep(0.05)
            scope.io.pdic = None
            time.sleep(0.05)
        raise



def open_project(filename : str) -> project.Project:
    """Load an existing project from disk.

    Args:
       filename (str): Path to project file.

    Returns:
        project.Project: A ChipWhisperer :code:`Project` object.

    Raises:
       OSError: If :code:`filename` does not exist or can't be opened.
    """
    filename = project.ensure_cwp_extension(filename)

    proj = project.Project()
    proj.load(filename)
    return proj


def create_project(filename : str, overwrite : bool=False) -> project.Project:
    """Create a new project saved at the path :code:`filename`.

    If :code:`overwrite` is :code:`False`, raise an :code:`OSError` if this path
    already exists.

    Args:
       filename (str): File path to create project file at. Must end with :code:`.cwp`
       overwrite (bool, optional): Whether or not to overwrite an existing
           project with :code:`filename`. Raises an :code:`OSError` if path already exists
           and this is :code:`False`. Defaults to :code:`False`.

    Returns:
        project.Project: A ChipWhisperer :code:`Project` object.

    Raises:
       OSError: If :code:`filename` exists and :code:`overwrite` is :code:`False`.
    """
    filename = project.ensure_cwp_extension(filename)

    if os.path.isfile(filename) and (overwrite is False):
        raise OSError("File " + filename + " already exists")

    # If the user gives a relative path including ~, expand to the absolute path
    filename = os.path.abspath(os.path.expanduser(filename))

    proj = project.Project()
    proj.setFilename(filename)

    return proj


def import_project(filename : str, file_type : str='zip', overwrite : bool=False) -> project.Project:
    """Import and open a project.

    Will import :code:`filename` by extracting it to the current working
    directory. If a project with the same name already exists in the current
    working directory, :code:`overwrite` will be used to determine if the project
    should be overwritten.

    Currently supported file types:
     * :code:`zip`

    Args:
        filename (str): The file name to import.
        file_type (str): The type of file that is being imported.
            Default is :code:`zip`.
        overwrite (bool): Whether or not to overwrite the project in the
            current working directory if there's a name collision. Defaults
            to :code:`False`.

    Returns:
        project.Project: A ChipWhisperer :code:`Project` object.

    Raises:
        OSError: If the extract :code:`.cwp` file already exists and
            :code:`overwrite` is :code:`False`.
        ValueError: If the :code:`filename` does not contain a :code:`.cwp` file
            or if the :code:`file_type` is not supported.

    .. versionadded:: 5.1
        Addded the **import_project** function.
    """
    # get the absolute path to the file
    input_abs_path = os.path.abspath(filename)

    # use the appropriate type of import
    if file_type == 'zip':
        with ZipFile(input_abs_path, 'r') as project_zip:
            output_path = None
            for path in project_zip.namelist():
                root, ext = os.path.splitext(path)
                if ext == '.cwp':
                    directory, project_name = os.path.split(root)
                    output_path = ''.join([project_name, '.cwp'])

                    # check if name already exists in projects
                    if os.path.isfile(output_path) and (overwrite == False):
                        raise OSError("File " + output_path + " already exists")

                    # extract the project.cwp file and project_data directory to
                    # the PROJECT_DIR
                    project_zip.extractall(path=os.getcwd())

            if output_path is None:
                raise ValueError('Zip file does not contain a .cwp file, so it cannot be imported')
    else:
        raise ValueError('Import from file type not supported: {}'.format(file_type))

    proj = project.Project()
    proj.load(output_path)

    return proj


def scope(scope_type : Optional[Type[scopes.ScopeTypes]]=None, name : opstr=None, 
    sn : opstr=None, idProduct : Optional[int]=None,
    bitstream : opstr=None, force : bool=False,
    prog_speed : int=int(10E6),
    **kwargs) -> scopes.ScopeTypes:
    """Create a scope object and connect to it.

    This function allows any type of scope to be created. By default, the
    object created is based on the attached hardware (:code:`OpenADC` for
    CWLite/CW1200, :code:`CWNano` for CWNano).

    Scope Types:
     * :class:`scopes.OpenADC` (Pro and Lite)
     * :class:`scopes.CWNano` (Nano)

    If multiple ChipWhisperers are connected, the serial number of the one you
    want to connect to can be specified by passing :code:`sn='<SERIAL_NUMBER>'`.

    Args:
        scope_type (ScopeTypes, optional): Scope type to connect to. Typescan be
            found in :code:`chipwhisperer.scopes`. If :code:`None`, will try to
            detect the type of ChipWhisperer connected. Defaults to :code:`None`.
        name (str, optional): Model name of the ChipWhisperer that you want to
            connect to. Alternative to specifying the serial number when
            multiple ChipWhisperers, all of different type, are connected.
            Defaults to :code:`None`. Valid values::
            * :code:`'Nano'`
            * :code:`'Lite'`
            * :code:`'Pro'`
            * :code:`'Husky'`
            * :code:`'HuskyPlus'`
        idProduct (int, optional): idProduct of the ChipWhisperer that you want to
            connect to. Alternative to specifying the serial number when
            multiple ChipWhisperers, all of different type, are connected.
            Defaults to :code:`None`. Valid values::
            * :code:`0xace0` (CW-Nano)
            * :code:`0xace2` (CW-Lite)
            * :code:`0xace3` (CW-Pro)
            * :code:`0xace5` (CW-Husky)
        sn (str, optional): Serial number of ChipWhisperer that you want to
            connect to. :code:`sn` is required if more than one ChipWhisperer of the
            same type is connected (i.e. two CWNano's or a CWLite and CWPro).
            Defaults to :code:`None`.
        bitstream (str, optional): Path to bitstream to program. If :code:`None`,
            programs default bitstream. Optional, defaults to :code:`None`. Ignored
            on CWNano.
        force (bool): If :code:`True`, always erase and program FPGA. If :code:`False`,
            only erase and program FPGA if it is currently blank. Defaults to :code:`False`.
            Ignored on CWNano.
        prog_speed (int): Sets the FPGA programming speed for CWLite, CWPro, and CWHusky.
            If you get programming errors, try turning this down.

    Returns:
        scopes.ScopeTypes: Connected scope object specified by :code:`scope_type`.

    Raises:
        OSError: Can be raised for issues connecting to the ChipWhisperer, such
            as not having permission to access the USB device or no ChipWhisperer
            being connected.
        Warning: Raised if multiple ChipWhisperers are connected, but the type
            and/or the serial numbers are not specified.

    .. versionchanged:: 5.1
        Added autodetection of :code:`scope_type`

    .. versionchanged:: 5.5
            Added :code:`idProduct`, :code:`name`, :code:`bitstream`, and :code:`force` parameters.
    """
    from chipwhisperer.common.utils.util import get_cw_type
    if isinstance(prog_speed, float):
        prog_speed = int(prog_speed)

    kwargs.update(locals())
    del kwargs["name"]
    if name is not None:
        if name == 'Husky':
            kwargs['idProduct'] = 0xace5
        elif name == 'HuskyPlus':
            kwargs['idProduct'] = 0xace6
        elif name == 'Lite':
            kwargs['idProduct'] = 0xace2
        elif name == 'Pro':
            kwargs['idProduct'] = 0xace3
        elif name == 'Nano':
            kwargs['idProduct'] = 0xace0
        else:
            raise ValueError

    if scope_type is None:
        scope_type = get_cw_type(**kwargs)
    rtn : scopes.ScopeTypes = scope_type()
    try:
        rtn.con(**kwargs)
    except IOError:
        scope_logger.error("ChipWhisperer error state detected. Resetting and retrying connection...")
        rtn._getNAEUSB().reset()
        time.sleep(2)
        rtn = scope_type()
        rtn.con(**kwargs)
    return rtn


def target(scope : Optional[scopes.ScopeTypes],
    target_type : type = targets.SimpleSerial,
    **kwargs) -> targets.TargetTypes:
    """Create a target object and connect to it.

    Args:
       scope (ScopeTemplate): Scope object that we're connecting to the target
           through.
       target_type (TargetTemplate, optional): Target type to connect to.
           Defaults to targets.SimpleSerial. Types can be found in
           chipwhisperer.targets.
       **kwargs: Additional keyword arguments to pass to target setup. See target.con
            or target._con for your target_type for more information

    Returns:
        Connected target object specified by target_type.
    """
    rtn = target_type()
    rtn.con(scope, **kwargs)

    # need to check
    if type(rtn) in (targets.SimpleSerial, targets.SimpleSerial2) \
        and scope and scope._getNAEUSB().check_feature("SERIAL_200_BUFFER"):
        rtn.ser.cwlite_usart._max_read = 128
    return rtn

def capture_trace(scope : scopes.ScopeTypes, target : targets.TargetTypes, plaintext : bytearray,
    key : Optional[bytearray]=None, ack : bool=True, poll_done : bool=False,
    as_int : bool=False, always_send_key=False) -> Optional[Trace]:

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
        poll_done (bool, optional): poll Husky to find out when it's done
            capturing, instead of calculating the capture time based on the
            capture parameters. Useful for long trigger-based segmented
            captures.  Can also result in slightly faster captures when the
            number of samples is high. Defaults to False. Supported by Husky
            only.
        as_int (bool, optional): If False, return trace as a float. Otherwise,
            return as an int.
        always_send_key (bool, optional): If True, always send key. Otherwise,
            only send if the key is different from the last one sent.

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

    .. versionchanged:: 5.6.1
        Added poll_done parameter for Husky
    """

    import signal

    if key:
        target.set_key(key, ack=ack, always_send=always_send_key)

    scope.arm()

    if plaintext:
        target.simpleserial_write('p', plaintext)

    ret = scope.capture(poll_done=poll_done)

    i = 0
    while not target.is_done():
        i += 1
        time.sleep(0.05)
        if i > 100:
            scope_logger.warning("Target did not finish operation")
            return None

    if ret:
        scope_logger.warning("Timeout happened during capture")
        return None

    response = target.simpleserial_read('r', target.output_len, ack=ack)
    wave = scope.get_last_trace(as_int=as_int)

    if len(wave) >= 1:
        return Trace(wave, plaintext, response, key)
    else:
        return None

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

    .. versionadded:: 5.4
    """
    if (len(args) == 0) and (len(kwargs) == 0):
        args = [[]]
    import holoviews as hv # type: ignore
    _default_opts = {'height': 600, 'width': 800, 'framewise': True, 'tools': ['hover'], 'active_tools': ['box_zoom']}
    hv.extension('bokeh', logo=False) #don't display logo, otherwise it pops up everytime this func is called.
    return hv.Curve(*args, **kwargs).opts(**_default_opts)

class StreamPlot:
    def __init__(self):
        import holoviews as hv # type: ignore
        from holoviews.streams import Pipe # type: ignore
        hv.extension('bokeh', logo=False) #don't display logo, otherwise it pops up everytime this func is called.
        self._default_opts = {'height': 600, 'width': 800, 'framewise': True, 'tools': ['hover'], 'active_tools': ['box_zoom']}
        self._pipe = Pipe(data=[])
        self._dmap = hv.DynamicMap(hv.Curve, streams=[self._pipe]).opts(**self._default_opts)

    def plot(self):
        return self._dmap.opts(**self._default_opts)

    def update(self, data):
        self._pipe.send(data)
