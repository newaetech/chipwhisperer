---
title: Overview & Comparison
---

# Overview and Comparison

ChipWhisperer is a platform that makes researching and testing embedded side channel attacks simple, easy, replicable, and convenient. In particular, ChipWhisperer focuses on power analysis and voltage/clock glitching.

This page compares the features of five capture side hardware devices: the ChipWhisperer-Husky, the ChipWhisperer-Husky-Plus, the CW1200 ChipWhisperer-Pro (CWPro), the CW1173 ChipWhisperer-Lite (CWLite), and the CW1101 ChipWhisperer-Nano (CWNano). As a quick overview:

* All capture devices can perform power analysis synchronous to the target's clock
    * This helps attacks succeed at much lower sampling frequencies than a conventional oscilloscope
* All are capable of power analysis and glitching
    * The ChipWhisperer Nano cannot clock glitch, but can voltage glitch
* The ChipWhisperer Nano is the lowest cost option, but has many limitations compared to all others. These limit what attacks can be performed using it, especially against non-NewAE targets.
* The ChipWhisperer-Pro is discontinued; it is replaced by ChipWhisperer-Husky and Husky Plus. While the Huskies lack the Pro's touchscreen, they are both otherwise superior in most regards. Refer to the [comparison table below](#chipwhisperer-husky-plus-features-over-chipwhisperer-pro) for a breakdown.
* The Husky has better analog capabilities than the others, allowing attacks on more targets, as well
as ones running at higher frequencies
* The Husky's glitch resolution is independent of the target clock, allowing for more accurate and
reliable glitches

---
## Analog Capture and Clock
```{list-table} <!-- optional table title here -->
:header-rows: 1
* - Feature
  - ChipWhisperer-Husky 
  - ChipWhisperer-Husky-Plus <!-- This is a single-line comment -->
  - ChipWhisperer-Lite 
  - ChipWhisperer-Nano

* - ADC Specs
  - 12-bit 200MS/s 
  - **12-bit 250MS/s** 
  - 10-bit 105MS/s 
  - 8-bit 20MS/s

* - ADC Clock Source
  - **PLL Generated (Integer Multiple of Internal/External Clock)** 
  - **PLL Generated (Integer Multiple of Internal/External Clock)** 
  - Internally generated (x1 or x4), external input (x1 or x4) 
  - Internally generated, external input

* - Analog Input
  - AC-Coupled **Differential**, adjustable -6.5dB to 55dB low noise gain 
  - AC-Coupled **Differential**, adjustable -6.5dB to 55dB low noise gain 
  - AC-Coupled, adjustable low-noise gain from -6.5dB to 55dB 
  - AC-Coupled, fixed gain of 20dB

* - Maximum Samples (non-streaming)
  - 12-bit mode: 137 209 <br>
    8-bit mode: 204 796
  - 12-bit mode: **346 246** <br>
    8-bit mode:  **518 344**
  - 24 573
  - 50 000

* - Capture Streaming
  - **Yes (>20MS/s max)**
  - **Yes (>20MS/s max)**
  - No
  - No

* - ADC Decimation
  - Yes 
  - Yes 
  - Yes 
  - No

* - ADC Offset Adjustment
  - Yes [0, 2^32) 
  - Yes, [0, 2^32) 
  - Yes, [0, 2^32) 
  - No

* - ADC Trigger
  - Rising-edge, Falling-edge, High, Low 
  - Rising-edge, Falling-edge, High, Low 
  - Rising-edge, Falling-edge, High, Low 
  - Rising-edge

* - Presampling
  - Yes 
  - Yes 
  - Yes 
  - No

* - Phase Adjustment
  - Yes, picoseconds (clock-dependent)
  - Yes, picoseconds (clock-dependent)
  - Yes, 5ns increments 
  - No

* - Clock Generation Range
  - **10-350MHz** 
  - **10-350MHz** 
  - 5-200MHz 
  - 60MHz, divisible by 2, 4, 8, or 16

* - Clock Output
  - Regular, with glitch inserted, glitch only 
  - Regular, with glitch inserted, glitch only 
  - Regular, with glitch inserted, glitch only 
  - Regular

```

---
## Triggering
```{list-table} <!-- optional table title here -->
:header-rows: 1
* - Feature
  - ChipWhisperer-Husky 
  - ChipWhisperer-Husky-Plus <!-- This is a single-line comment -->
  - ChipWhisperer-Lite 
  - ChipWhisperer-Nano

* - Modules
  - Basic, **Analog Pattern, Analog Threshold, UART, Edge Count, Arm Trace** 
  - Basic, **Analog Pattern, Analog Threshold, UART, Edge Count, Arm Trace** 
  - Basic 
  - Basic

* - Analog Trigger
  - **Sum of Absolute Difference (512 Samples)**, **Analog Level**
  - **Sum of Absolute Difference (512 Samples)**, **Analog Level**
  - N/A 
  - N/A

* - Basic Trigger Inputs
  - TIO 1-4, nRST, **MCX** 
  - TIO 1-4, nRST, **MCX** 
  - TIO 1-4, nRST 
  - TIO 4

* - Basic Trigger Combination
  - One of OR, AND, NAND   
  - One of OR, AND, NAND 
  - One of OR, AND, NAND 
  - N/A

* - Sequenced Triggers
  - 2
  - **4**
  - N/A 
  - N/A

* - Hardware-Driven Bit-Banging and Triggering
  - 512-bit-deep bit-banging on USERIO pins
  - 512-bit-deep bit-banging on USERIO, **power, reset, and TIO1-4 pins** 
  - N/A 
  - N/A

```

---
## I/O
```{list-table} <!-- optional table title here -->
:header-rows: 1
* - Feature
  - ChipWhisperer-Husky 
  - ChipWhisperer-Husky-Plus <!-- This is a single-line comment -->
  - ChipWhisperer-Lite 
  - ChipWhisperer-Nano

* - GPIO Voltage
  - 3.3V 
  - 3.3V 
  - 3.3V 
  - 3.3V 

* - Logic Outputs
  - TIO 1-4, nRST, PDIC, PDID, **User I/O D0-7, CK** 
  - TIO 1-4, nRST, PDIC, PDID, **User I/O D0-7, CK** 
  - TIO 1-4, nRST, PDIC, PDID 
  - TIO 1-4, nRST, PDIC, PDID

* - Logic Inputs
  - TIO 1-4, **User I/O D0-7, CK** 
  - TIO 1-4, **User I/O D0-7, CK** 
  - TIO 1-4 
  - N/A

* - UART Serial
  - TIO 1-4 assignment 
  - TIO 1-4 assignment 
  - TIO 1-4 assignment 
  - Fixed TIO 1 and TIO 2

* - Clock
  - Fixed, HS2 output, HS1 Input, **AUX I/O MCX**
  - Fixed, HS2 output, HS1 input, **AUX I/O MCX**
  - Fixed, HS2 output, HS1 input 
  - Fixed, HS2 output, HS1 input

* - Basic Trigger Inputs
  - TIO 1-4, nRST, **AUX MCX**, **User I/O D0-7**
  - TIO 1-4, nRST, **AUX MCX**, **User I/O D0-7** 
  - TIO 1-4, nRST 
  - TIO 4

* - Basic Trigger Combination
  - One of OR, AND, NAND 
  - One of OR, AND, NAND 
  - One of OR, AND, NAND 
  - N/A

* - Trigger Out
  - **Yes** 
  - **Yes** 
  - No 
  - No

* - Programmers
  - STM32F UART, XMEGA PDI, AVR ISP, SWD/JTAG (via OpenOCD), SAMBA (AtSAM)
  - STM32F UART, XMEGA PDI, AVR ISP, SWD/JTAG (via OpenOCD), SAMBA (AtSAM) 
  - STM32F UART, XMEGA PDI, AVR ISP, SWD/JTAG (via OpenOCD), SAMBA (AtSAM) 
  - STM32F UART, SWD/JTAG (via OpenOCD), SAMBA (AtSAM)

* - Power rails
  - 3.3V 
  - 3.3V 
  - 3.3V 
  - 3.3V

* - User I/O Pins
  - 8 Data pins, **JTAG, SWD, Arm Trace, Generic, Logic Analyzer, Clocks** 
  - 8 Data pins, **JTAG, SWD, Arm Trace, Generic, Logic Analyzer, Clocks** 
  - N/A 
  - N/A
```

---
## Glitch
```{list-table} <!-- optional table title here -->
:header-rows: 1
* - Feature
  - ChipWhisperer-Husky 
  - ChipWhisperer-Husky-Plus <!-- This is a single-line comment -->
  - ChipWhisperer-Lite 
  - ChipWhisperer-Nano

* - Voltage Glitching
  - Yes
  - Yes
  - Yes
  - Yes

* - Clock Glitching
  - Yes
  - Yes
  - Yes
  - No

* - Glitch Outputs
  - Clock-XOR, Clock-OR, Glitch-Only, Enable-Only 
  - Clock-XOR, Clock-OR, Glitch-Only, Enable-Only 
  - Clock-XOR, Clock-OR, Glitch-Only, Enable-Only 
  - Glitch-Only

* - Glitch Width
  - 0-50% of clock cycle, 100% (enable-only)
  - 0-50% of clock cycle, 100% (enable-only)
  - 0-49.8% of clock cycle, 100% (enable-only) 
  - Time increments between [0, 2^32), high jitter

* - Glitch Width Increments
  - **depends on clocks (typically picoseconds)**
  - **depends on clocks (typically picoseconds)**
  - 0.4% of a clock cycle 
  - ~8.3ns, high jitter

* - Glitch Offset
  - **0-100% of clock cycle**
  - **0-100% of clock cycle**
  - 0-49.8% of clock cycle, 100% (enable-only) 
  - Time increments between [0, 2^32), high jitter

* - Glitch Offset Increments 
  - **depends on clocks (typically picoseconds)** 
  - **depends on clocks (typically picoseconds)** 
  - 0.4% of a clock cycle 
  - ~8.3ns, high jitter

* - Glitch Cycle Offset
  - [0, 2^32)
  - [0, 2^32)
  - [0, 2^32)
  - N/A

* - Glitch Cycle Repeat
  - [0, 8192]
  - [0, 8192] 
  - [0, 8192] 
  - N/A

* - Voltage Glitch Type
  - High-power, low-power crowbar 
  - High-power, low-power crowbar 
  - High-power, low-power crowbar 
  - Low-power crowbar

* - Voltage Glitch Pulse Current
  - 20A 
  - 20A 
  - 20A 
  - 4A

```

---
## ChipWhisperer-Husky features over ChipWhisperer-Lite

* Faster ADC (200 vs 105 MS/s) with greater bit depth (12 vs 10 bits)
* \>20MS/s streaming mode allowing almost unlimited sample size
* Much larger sample buffer (up to 204K vs 24k samples)
* Differential ADC input
* Additional trigger modules - Analog waveform, Analog Level, UART, Edge count, Arm Trace, Bit-banging
* MCX connectors for trigger/glitch output, clock input/output
* Multiple programmable glitches
* TraceWhisperer Support
* Glitch resolution independent of target clock
* 20-pin User IO header with 8 data pins
    * Data pins can be used as GPIOs, for JTAG/SWD, Arm Trace, Logic Analyzer inputs, or user-defined clocks
* Sequenced triggering
* Hardware-driven bit-banging and triggering

## ChipWhisperer-Husky-Plus features over ChipWhisperer-Pro

* Faster ADC (250 vs 105 MS/s) with greater bit depth (12 vs 10 bits)
* Higher maximum sampling rate in streaming mode (\>20 vs 10 MS/s)
* Over 5x larger sample buffer (518K vs 98K samples)
* Differential ADC input
* Additional trigger modules - Edge count, Arm Trace, Bit-banging
* Deeper SAD triggering (512 vs 128 samples)
* 2 MCX connectors for trigger/glitch output, clock input/output (vs single AUX I/O SMA)
* Multiple programmable glitches
* TraceWhisperer support
* Glitch resolution independent of target clock
* 20-pin User IO header with 8 data pins
    * Data pins can be used as GPIOs, for JTAG/SWD, Arm Trace, Logic Analyzer inputs, or user-defined clocks
* Sequenced triggering
* Hardware-driven bit-banging and triggering


## ChipWhisperer-Husky-Plus features over ChipWhisperer-Husky

* Faster ADC (250 vs 200 MS/s)
* Larger ADC sample buffer (518K vs 204K samples)
* Larger logic analyzer sample buffer (64K vs 16K samples)
* Larger TraceWhisperer sample buffer (32K vs 8K samples)
* Longer trigger sequences (up to 4 sequenced triggers vs 2)
* More User IO clocks (4 vs 1)
* More pins can be used by bit-banger module (TIO1-4, nRST, target power, vs only User I/O)
* More TraceWhisperer pattern matches (8 vs 2)[^1]

## ChipWhisperer-Pro features over ChipWhisperer-Lite

* Additional trigger modules - Analog waveform and UART/SPI
* 10MS/s streaming mode, allowing almost unlimited sample size
* SMA connectors for trigger input/output
* Much larger sample buffer (98k vs 24k samples)
* Waterproof case
* LCD Screen
* Labeled status LEDs
* 5V available on 20-pin connector


[^1]: Up to ChipWhisperer release 6.0, Husky supported 8 TraceWhisperer pattern matches. This was reduced to 2 after the 6.0 release to make space for new USERIO and bit-banging features. If this is a problem for you, contact us and we'll discuss options.

