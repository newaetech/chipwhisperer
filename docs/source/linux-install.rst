.. _install-linux:

####################
Linux Installation
####################

The following instructions were designed for Ubuntu/Debian, but should
be easily adaptable to other Linux distributions.

****************
Installer Script
****************

We now have an automated Linux installer, available on our github page. To use:

.. code:: bash

    ./chipwhisperer_installer.sh -up /path/to/install

There are two steps that require elevated permissions. The first, done if you use the :code:`-p` flag, is to automatically install
required prerequisites. Note that this only works on Ubuntu. On other platforms, you'll need to manually install these. See the manual
install section. The second, the :code:`-u` flag is to setup USB permissions. If you want to do this step manually, see the manual install section.

After running the installer, reboot your computer, and the install should be completed. This script gives you two helper scripts in the
install directory. Running :code:`runcw.sh` will setup your environment and run Jupyter, which will open a tab in your browser:

.. image:: _images/Jupyter\ ChipWhisperer.png

There's also :code:`setup_cw_env.sh`, which sets up your environment, but does not run Jupyter.

Setting USB permissions can sometimes go wrong, so you may want to start Jupyter, open :code:`Jupyter/Test Connection.ipynb`, and run the code blocks to make
sure you can connect to your ChipWhisperer.

*******************
Manual Installation
*******************

.. note:: To avoid conflicts with other packages and to avoid messing up your python environment, we recommend using a virtual environment for ChipWhisperer. 
        Don't forget to activate the virtual environment before trying to run python or jupyter!

=================
Required Packages
=================

Begin by updating all your packages:

.. code:: bash

    sudo apt update && sudo apt upgrade


Next, grab the prerequisites for building firmware for targets, as well as python:

.. code:: bash

    sudo apt install libusb-dev make git \
        gcc-arm-none-eabi libusb-1.0-0-dev usbutils 

.. note:: The installer script downloads a specific version of the arm gcc compiler to minimize the effects of changing compilers on labs. You may want to get version 13.2 of arm-none-eabi-gcc to mimic the installer script.

======
Python
======

The recommended way to use Python with ChipWhisperer is to install everything in a
virtual environment. Luckily, Python makes this easy!

The first step is to grab the python, python-dev, and python-venv packages:

.. code:: bash

	sudo apt install python3 python3-venv python3-dev

Next, we need to create a virtual environment:

.. code:: bash

    python3 -m venv ~/.cwvenv # place this anywhere you like, but don't forget to update path in the next step

You can then activate your virtual environment to get access to Python:

.. code:: bash

    source ~/.cwvenv/bin/activate # or wherever you installed your venv

.. _linux-install-chipwhisperer:

========================
Installing ChipWhisperer
========================

Start by grabbing ChipWhisperer from Github. Install wherever you like,
but the code below will download it to your home directory:

.. code:: bash

    cd ~/
    git clone https://github.com/newaetech/chipwhisperer -b power101
    cd chipwhisperer
    git submodule update --init jupyter # grab Jupyter notebook tutorials

Next, we'll need to make some udev rules so that we have permission
to access USB and serial devices. ChipWhisperer includes a default
set of rules that give you access to NewAE USB devices:

.. code:: bash

    sudo cp 50-newae.rules /etc/udev/rules.d/50-newae.rules
    sudo udevadm control --reload-rules

Those rules actually give permission to the chipwhisperer group, so
you'll need to create that group and add your user to that group:

.. code:: bash

    sudo groupadd -f chipwhisperer
    sudo usermod -aG chipwhisperer $USER
    sudo usermod -aG plugdev $USER # may not be available on your system

With that done, all that's left is to install ChipWhisperer:

.. code:: bash

    python -m pip install -e .
    python -m pip install -r jupyter/requirements.txt

You'll need to reboot now to get access to the ChipWhisperer USB devices.

You can check that the install succeeded by navigating to :code:`chipwhisperer`
and running:

.. code:: bash

    source ~/.cwvenv/bin/activate
    jupyter notebook

Which should open a window like the following in your browser:

.. image:: _images/Jupyter\ ChipWhisperer.png