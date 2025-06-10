.. _install-linux:

####################
Linux Installation
####################

The following instructions were designed for Ubuntu/Debian, but should
be easily adaptable to other Linux distributions.

*******************
Quick Installation
*******************

.. note:: To avoid conflicts with other packages and to avoid messing up your python environment, we recommend using a virtual environment for ChipWhisperer. 
        Don't forget to activate the virtual environment before trying to run python or jupyter!

If you're in a hurry and on Ubuntu, running the following commands and rebooting
should get you up and running:

.. code:: bash

    sudo apt update && sudo apt upgrade

    sudo apt install make git avr-libc gcc-avr \
        gcc-arm-none-eabi libusb-1.0-0-dev usbutils python3 python3-venv python3-dev

    cd ~/
    git clone https://github.com/newaetech/chipwhisperer
    cd chipwhisperer

    python3 -m venv ~/.cwvenv
    source ~/.cwvenv/bin/activate

    sudo cp 50-newae.rules /etc/udev/rules.d/50-newae.rules
    sudo udevadm control --reload-rules
    sudo groupadd -f chipwhisperer
    sudo usermod -aG chipwhisperer $USER
    sudo usermod -aG plugdev $USER
    git submodule update --init jupyter

    python -m pip install -e .
    python -m pip install -r jupyter/requirements.txt

After installing, you can run:

.. code:: bash

    source ~/.cwvenv/bin/activate
    cd ~/chipwhisperer
    jupyter notebook

After running these install instructions, make sure to restart your computer. This is required for the
new udev rules to be applied.

You can check that the install succeeded by navigating to :code:`chipwhisperer`
and running:

.. code:: bash

    source ~/.cwvenv/bin/activate # if you haven't run this already
    jupyter notebook

Which should open a window like the following in your browser:

.. image:: _images/Jupyter\ ChipWhisperer.png

Next, we'll go through those commands

*******************
Manual Installation
*******************

=================
Required Packages
=================

Begin by updating all your packages:

.. code:: bash

    sudo apt update && sudo apt upgrade


Next, grab the prerequisites for building firmware for targets, as well as python:

.. code:: bash

    sudo apt install libusb-dev make git avr-libc gcc-avr \
        gcc-arm-none-eabi libusb-1.0-0-dev usbutils 

======
Python
======

The recommended way to use Python with ChipWhisperer is to install everything in a
virtual environment. Luckily, Python makes this easy!

The first step is to grab the python, python-dev, and python-venv packages:

..

.. code:: bash

	sudo apt install python3 python3-venv python3-dev

Next, we need to create a virtual environment:

.. code:: bash

    python3 -m venv ~/.cwvenv # place this anywhere you like, but don't forget to update path in the next step

With that done, install a version of Python. Anything >= 3.9 should work,
so we'll grab 3.9.5 here and make an env called cw:

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
    git clone https://github.com/newaetech/chipwhisperer
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
    sudo usermod -aG plugdev $USER

.. note:: Older install instructions used the plugdev group, which is created by default on some distros
        and not on others. These install instructions instead use a dedicated chipwhisperer group,
        so if you've installed chipwhisperer before and want to update to a new rules file, make sure
        you create the chipwhisperer group.

With that done, all that's left is to install ChipWhisperer:

.. code:: bash

    python -m pip install -e .
    python -m pip install -r jupyter/requirements.txt

You may also want to grab `nbstripout`_, which will make git and jupyter interact a little nicer:

.. code:: bash

    cd jupyter
    pip install nbstripout
    nbstripout --install # must be run from the jupyter folder

You'll need to reboot now to get access to the ChipWhisperer USB devices.

You can check that the install succeeded by navigating to :code:`chipwhisperer`
and running:

.. code:: bash

    source ~/.cwvenv/bin/activate
    jupyter notebook

Which should open a window like the following in your browser:

.. image:: _images/Jupyter\ ChipWhisperer.png
.. _nbstripout: https://github.com/kynan/nbstripout