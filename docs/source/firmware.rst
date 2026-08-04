.. _Updating_Firmware:

#################
Updating Firmware
#################

Received a message about a ChipWhisperer firmware update being available? Accidentally
erased the firmware on your ChipWhisperer? If so, this page contains all the information
you need to get your device up and running again!

.. note:: All ChipWhisperer scopes and FPGA targets have a ROM base bootloader,
    meaning it is effectively impossible to "brick" your ChipWhisperer device
    by updating or erasing its firmware.

*************************
Checking Firmware Version
*************************

The firmware version can be accessed as follows:

.. code:: python

    >>> import chipwhisperer as cw
    >>> scope = cw.scope()      # or target = cw.target(...) for targets
    >>> print(scope.fw_version) # or print(target.fw_version) for targets
    {'major': 0, 'minor': 11, 'debug': 0}


The version of the newest firmware can be printed as follows:

.. code:: python

    >>> import chipwhisperer as cw
    >>> scope = cw.scope()     # or target = cw.target(...) for targets
    >>> print(scope.latest_fw) # or print(target.fw_version) for targets
    {'major': 0, 'minor': 11}


If a firmware update is available, the user will be warned when
connecting to the scope (or target):

.. code:: python

    >>> scope = cw.scope()     # or target = cw.target(...) for targets
    WARNING:root:Your firmware is outdated - latest is 0.12. Suggested to update firmware, as you may experience errors
    See https://chipwhisperer.readthedocs.io/en/latest/firmware.html

*********************
Prerequisites
*********************

=====================
Windows Prerequisites
=====================

None required!

=====================
Linux Prerequisites
=====================

If you are running on Linux, you will need to ensure you have access to the serial ports and USB devices.
Instructions on how to install the udev rules can be found in the :ref:`linux install guide <install-linux>`.

=================
Mac Prerequisites
=================

None required!

.. _upgrade-firmware-python:

******************
Upgrading Firmware
******************

If you just need to update the firmware on your ChipWhisperer,
the easiest way is to connect to your ChipWhisperer as usual,
then call the :code:`upgrade_firmware()` method. For example,
upgrading a ChipWhisperer-Lite::

    >>> import chipwhisperer as cw
    >>> scope = cw.scope()
    >>> scope.upgrade_firmware()
    Entering bootloader mode...
    Detected com port COM13
    Loading cwlite firmware...
    Opened!
    Connecting...
    Connected!
    Erasing...
    Erased!
    Programming file SAM3U_CW1173.bin...
    Programmed!
    Verifying...
    Verify OK!
    Resetting...
    Upgrade successful

If you don't see the "Resetting..." line, you'll need to power cycle your ChipWhisperer.

************************
Programming New Firmware
************************

If you've accidentally erased the firmware on your ChipWhisperer,
the best way to flash new firmware is to use ChipWhisperer's
:code:`program_sam_firmware()` function. You will need
to specify the device you are upgrading from the following list:

  * 'cwlite'
  * 'cw1200'
  * 'cwnano'
  * 'cwhusky'
  * 'cwbergen'
  * 'cw305'

For example, to flash new firmware to a CW305::

    >>> import chipwhisperer as cw
    >>> cw.program_sam_firmware(hardware_type='cwhusky')

***************
Troubleshooting
***************

=======================
Firmware upgrade failed
=======================

If :code:`scope.upgrade_firmware()`/:code:`target.upgrade_firmware()` fails
for any reason, use :code:`cw.program_sam_firmware()`.

=====================================
Could not find bootloader serial port
=====================================

Ensure the device is plugged in. If you're using a VM,
ensure you have the USB device passed through.

==================
Permission Error
==================

If running on Linux, ensure you have the new :code:`50-newae.rules` file in
:code:`/etc/udev/rules.d/`, then run :code:`sudo udevadm control --reload-rules`.

Additionally, try unplugging and replugging your ChipWhisperer. If the udev
rules have been applied properly, you should see a :code:`cw_bootloader%n`
device in :code:`/dev/`, where :code:`%n` is some integer.

If you're still unable to program new firmware, try adding your user
to the :code:`dialout` group:

.. code:: bash

    sudo usermod -a -G dialout $USER

then logging out and back in again.

=======================================
Accidentally flashed incorrect firmware
=======================================

If the firmware you've flashed is for another NewAE device,
then, as of ChipWhisperer 5.7.1 or commit 068ec19, you can use
:code:`quick_firmware_erase()` as follows to erase the firmware on your
device:

.. code:: python

    from chipwhisperer.hardware.naeusb.naeusb import quick_firmware_erase
    quick_firmware_erase(<product_id>)

replacing :code:`<product_id>` with the product ID of the firmware that you've
uploaded. For example, if you've uploaded ChipWhisperer-Lite (0xACE2) firmware to
your ChipWhisperer-Nano (0xACE0), you should use 0xACE2 as your product ID. You
may find it helpful to use :code:`cw.list_devices()` to list connected NewAE devices.

Otherwise, short the erase pins on your ChipWhisperer to
enter bootloader mode, then flash the correct firmware onto your device. Go
to your device's page in the :ref:`Hardware / Capture section <capture>` to
learn where its erase pins are located.

Instructions for shorting the erase pins can be found
on the documentation page for your device.

=================================
Linux usbserial module Workaround
=================================

There is an issue in some versions of Linux, where the SAM3U is not
assigned a serial port when it enters bootloader mode. Here are some
steps to resolve this issue (Note. this is not a permanent fix, you must
go through these steps each time you put your ChipWhisperer into
bootloader mode.). These steps assume you've already put ChipWhisperer
into bootloader mode.

1.  Unplug your ChipWhisperer (Leave unplugged until instructed otherwise)
2.  Reboot your computer
3.  Once logged in again, open a terminal session
4.  Run this command: :code:`sudo modprobe usbserial vendor=0x3eb product=0x6124`
5.  Plug your ChipWhisperer back in
6.  Check that a serial port is now open using: :code:`ls -l /dev/ttyUSB*`

.. image:: Capture/Images/ttyUSB_example.png

You should now be able to program the bootloader from ChipWhisperer
Capture through the port you created



If you run into any issues not covered here, or if none of these steps
work for you, let us know over at https://forum.newae.com



