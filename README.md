# ChipWhisperer

[![Discord](https://img.shields.io/discord/747196318044258365?logo=discord)](https://discord.gg/chipwhisperer)

## Important Links

[Documentation](https://chipwhisperer.readthedocs.io/en/sca101/index.html) | [Labs](https://github.com/newaetech/chipwhisperer-jupyter/tree/sca101) | [Forum](http://forum.newae.com) | [Store](https://store.newae.com) | [NewAE](http://newae.com)

## ChipWhisperer 7.0: Revamped Analyzer, Project, SCA101

ChipWhisperer 7.0 is bringing major improvements to projects, analyzer, as well as a new online course, SCA101. These changes include:

* New Zarr based projects with improved functionality over previous projects
* New CPA attack class with major performance improvements
* Better results API for CPA attacks
* Simplification for project/analyzer API
* Use of integer math throughout the project
* Removal of unmaintained parts of Analyzer
* Porting of MixColumns attack to Analyzer
* Iterators for KTP classes

We also have a more thorough [document of changes](https://docs.google.com/document/d/1KBrlV3X3fyg3PniKdv6pZg0s0MAX2dzbSdZiwbm_nh4/edit?usp=sharing).

The [SCA101 Online course](learn.chipwhisperer.io/courses/sca101) is available at [learn.chipwhisperer.io](learn.chipwhisperer.io).

**If you need to use ChipWhisperer with the previous API, the final commit with that is available as tag v6.1.0**

## What is ChipWhisperer?

ChipWhisperer is an open source toolchain dedicated to hardware security research. This toolchain consists of several layers of open source components:
* __Hardware__: The ChipWhisperer uses a _capture_ board and a _target_ board. Schematics and PCB layouts for the ChipWhisperer-Husky capture board and a number of target boards are freely available.
* __Firmware__: Three separate pieces of firmware are used on the ChipWhisperer hardware. The capture board has a USB controller (in C) and an FPGA for high-speed captures (in Verilog) with open-source firmware. Also, the target device has its own firmware; this repository includes many firmware examples for different targets.
* __Software__: The ChipWhisperer software includes a Python API for talking to ChipWhisperer hardware (ChipWhisperer Capture) and a Python API 
for processing power traces from ChipWhisperer hardware (ChipWhisperer Analyzer). 

You'll find documentation for all of the above [here](https://chipwhisperer.readthedocs.io/en/develop/index.html).

## Getting Started
First time using ChipWhisperer? Go to our new [documentation site](https://chipwhisperer.readthedocs.io/en/develop/index.html) for all you need to know to get started with ChipWhisperer.

## GIT Source
This branch is designed to give a fixed working version compatible with the SCA101 course. As such, it may differ substantially with what is available on the *develop* branch.

## Help!
Stuck? If you need a hand, there are a few places you can ask for help:
* The [NewAE Forum](https://forum.newae.com/) is full of helpful people that can point you in the right direction
* If you find a bug, let us know through the [issue tracker](https://github.com/newaetech/chipwhisperer/issues)

---

ChipWhisperer is a trademark of NewAE Technology Inc., registered in the US, Europe, and China.