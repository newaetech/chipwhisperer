.. _windows-drivers:

###############
Windows Drivers
###############


Drivers for your ChipWhisperer-Husky should be "plug and play", meaning there's no need
to install anything besides ChipWhisperer to run your Husky. If you've run something like Zadig
to install drivers on your Husky, you should delete that driver and unplug/replug your ChipWhisperer.


****************************
Checking for Correct Drivers
****************************

To check if the correct drivers are installed, plug in your ChipWhisperer and open Device Manager. Next,
navigate to :code:`Universal Serial Bus devices` and find your ChipWhisperer device.
Double click on the device, go to :code:`Details`, and change the :code:`Property`
to :code:`Device instance path`. If the path includes :code:`MI_00`, then
you have the correct drivers installed on your device. If you are unable
to find your device, the device isn't under :code:`Universal Serial Bus devices`,
or if the path doesn't include :code:`MI_00`, you have incorrect drivers installed.

A ChipWhisperer with a correctly installed driver is shown below:

  .. image:: _images/Device\ Manager\ Correct.png
    :width: 400

.. _windows-change-drivers:

*********************
How to Change Drivers
*********************

If you're running on incorrect drivers, uninstall these, then unplug and replug your Husky.

 1. Open Device Manager
 2. Go to device manager and find your device (e.g. "ChipWhisperer Husky") under "Universal Serial Bus devices"
 3. Right click your Device and select "Uninstall Device"
 4. Select "Delete the driver software for this device" and click "Uninstall"
 5. Unplug and replug your ChipWhisperer

.. warning:: It is important that the steps to uninstall the Zadig driver are followed,
            as Zadig installation may interfere with some ChipWhisperer features.

A ChipWhisperer with an incorrectly installed driver is shown below (note that some details may differ from your setup as this issue mostly affected older ChipWhisperers):

 .. image:: _images/Device\ Manager.png
    :width: 400

Ensure you have "Delete the driver software for this device" selected when uninstalling the driver:

 .. image:: _images/Uninstall\ Device.png
    :width: 400

A ChipWhisperer with a correctly installed driver is shown below:

  .. image:: _images/Device\ Manager\ Correct.png
    :width: 400
