# ChipWhisperer

[![Discord](https://img.shields.io/discord/747196318044258365?logo=discord)](https://discord.gg/chipwhisperer)

## Important Links

[Documentation](https://chipwhisperer.readthedocs.io/en/sca101/index.html) | [Labs](https://github.com/newaetech/chipwhisperer-jupyter/tree/sca101) | [Forum](http://forum.newae.com) | [Store](https://store.newae.com) | [NewAE](http://newae.com)

## SCA101

Welcome to the branch used for NewAE's new [SCA101 online course](learn.chipwhisperer.io). This is a rework of our previous online course that focuses on Husky, adds new labs, and improves Projects and Analyzer. You can find the related labs on the sca101 branch of ChipWhisperer-Jupyter.

The [SCA101 Online course](learn.chipwhisperer.io/courses/sca101) is available at [learn.chipwhisperer.io](learn.chipwhisperer.io).

**If using one of our installers, be sure to use the sca101 version of that installer**
**If installing manually, be sure to use the sca101 branch of both this repo and jupyter**

## What is ChipWhisperer?

ChipWhisperer is an open source toolchain dedicated to hardware security research. This toolchain consists of several layers of open source components:
* __Hardware__: The ChipWhisperer uses a _capture_ board and a _target_ board. Schematics and PCB layouts for the ChipWhisperer-Husky capture board and a number of target boards are freely available.
* __Firmware__: Three separate pieces of firmware are used on the ChipWhisperer hardware. The capture board has a USB controller (in C) and an FPGA for high-speed captures (in Verilog) with open-source firmware. Also, the target device has its own firmware; this repository includes many firmware examples for different targets.
* __Software__: The ChipWhisperer software includes a Python API for talking to ChipWhisperer hardware (ChipWhisperer Capture) and a Python API 
for processing power traces from ChipWhisperer hardware (ChipWhisperer Analyzer). 

You'll find documentation for all of the above [here](https://chipwhisperer.readthedocs.io/en/sca101/index.html).

## Getting Started
First time using ChipWhisperer? Go to our new [documentation site](https://chipwhisperer.readthedocs.io/en/sca101/index.html) for all you need to know to get started with ChipWhisperer.

## GIT Source
This branch is designed to give a fixed working version compatible with the SCA101 course. As such, it may differ substantially with what is available on the *develop* branch.

## Help!
Stuck? If you need a hand, there are a few places you can ask for help:
* The [NewAE Forum](https://forum.newae.com/) is full of helpful people that can point you in the right direction
* If you find a bug, let us know through the [issue tracker](https://github.com/newaetech/chipwhisperer/issues)

---

ChipWhisperer is a trademark of NewAE Technology Inc., registered in the US, Europe, and China.