.. _install-windows-exe:

####################
Windows Installation
####################

.. warning:: It is recommended that you enable long paths on Windows
            to prevent any files from not being copied during installation.
            Follow https://learn.microsoft.com/en-us/windows/win32/fileio/maximum-file-path-limitation?tabs=registry#enable-long-paths-in-windows-10-version-1607-and-later
            then reboot to enable long paths

.. _win_prereqs:

************************
Prerequisites
************************

==============
Installing WSL
==============

The only prerequisite for ChipWhisperer on Windows is enabling and installing a distribution
for Windows Subsystem for Linux (WSL). If you don't already have this enabled:

1. Follow `Microsoft's instructions for enabling WSL <https://learn.microsoft.com/en-us/windows/wsl/install>`_.
2. Restart your computer.
3. Open a command prompt or powershell windows and run :code:`wsl --install -d ubuntu`
4. Restart your computer again

.. _win_run_install:

************************
Running the Installer
************************

Our recommended way of installing on Windows is to use our Windows installer, which automates most
of the process.

1. Navigate to the `ChipWhisperer release page <https://github.com/newaetech/chipwhisperer/releases>`_ on Github.

.. image:: _images/win-installer-1.png
  :width: 800

2. Find the SCA101ChipWhisperer Windows install executable (currently :code:`SCA101_wininst.exe`)

3. Run the installer. You can change the name of the install on the second page. A summary of the installation is given on the third page.

.. image:: _images/win-installer-2.png
  :width: 800

4. Run the executable and choose the path you want to install ChipWhisperer at and a name for your installation. You must have read/write permissions for the location you install to, so avoid installing in a location like :code:`C:\\Program Files` or the like. The default install location (the user's home directory) will work for most users.

5. Choose whether or not you want to create a desktop shortcut for running ChipWhisperer.

6. Wait for the installation to finish. Additional windows will pop up during the installation to setup Python and install WSL compilers.

7. Some additional checks are run after the installation has completed. If any issues arise, you will be notified via a message box. Additionally, log files will be created in the install directory and in :code:`%TEMP%`

**********************
Installed Applications
**********************

=====================
ChipWhisperer
=====================

Once you've completed the above, you should have a fully functioning, self-contained installation
with everything you need. 

The easiest way to launch ChipWhisperer and get started with the tutorials is by running the ChipWhisperer
application, available via the Start Menu, the folder where you installed ChipWhisperer, or, if you selected
this, via a desktop shortcut. After running, you should see a terminal pop up, followed by a new window open 
in your browser:

.. image:: _images/Jupyter\ ChipWhisperer.png

Once you see this open, we recommend clicking on :code:`jupyter`, then beginning the first lab. If you run into any issues, please ask on our `forums`_ for help.

=======================
CW Compiler Environment
=======================

In addition to the main ChipWhisperer application and updater, an additional application is installed, :code:`CW Compiler Environment`.
This application launches a WSL instance with ChipWhisperer's compilers setup and available so that you can build
target firmware outside of Jupyter.

Note that Python and ChipWhisperer aren't available from this environment, or WSL in general. While it is simple to install
Python in WSL, USB devices aren't available in WSL. As such, the installer doesn't install Python or ChipWhisperer in WSL.

.. image:: _images/cw-compiler-env.png

*************
Common Issues
*************

=======================================================
Widgets not Working in Jupyter
=======================================================

The most common cause of this error is not having long paths enabled when running the installer. You can either
enable long paths and rerun the installer, or reinstall ipywidgets.

.. code:: bash

    pip uninstall -y ipywidgets
    pip install ipywidgets

.. _releases: https://github.com/newaetech/chipwhisperer/releases

.. _forums: https://forum.newae.com/

.. _arm-none-eabi-gcc: https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads