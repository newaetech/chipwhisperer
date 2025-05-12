---
title: Overview & Comparison
---

# Overview and Comparison

ChipWhisperer is a platform that makes researching and testing embedded side channel attacks simple, easy, replicable, and convenient. In particular, ChipWhisperer focuses on power analysis and voltage/clock glitching.

This page compares the features of five capture side hardware devices: the ChipWhisperer-Husky, the ChipWhisperer-Husky-Plus, the CW1200 ChipWhisperer-Pro (CW-Pro), the CW1173 ChipWhisperer-Lite (CW-Lite), and the CW1101 ChipWhisperer-Nano (CW-Nano). As a quick overview

* All are capable of power analysis and glitching
    * The ChipWhisperer Nano cannot clock glitch, but can voltage glitch
* The ChipWhisperer Nano is the lowest cost option, but has many limitations compared to the Husky, Lite and Pro. These limit what attacks can be performed using it, especially against non-NewAE targets.
* The ChipWhisperer-Lite and ChipWhisperer-Pro share the same basic specifications, but the Pro has additional features
    * These additional features, such as IO and Analog triggering, are especially useful when researching attacks against non-NewAE targets, such as development boards. It also has SMA connectors for trigger input and output, allowing for easy interfacing with lab equipment.
* All capture devices can perform power analysis synchronous to the target's clock
    * This helps attacks succeed at much lower sampling frequencies than a conventional oscilloscope
* The Husky has better analog capabilities than the Lite or Pro, allowing attacks on more targets, as well
as ones running at higher frequencies
* The Husky's glitch resolution is independent of the target clock, allowing for more accurate and
reliable glitches

On this page, "Husky" refers to both the "regular" Husky and to Husky Plus.
All differences between Husky and Husky Plus are summarized
[here](#chipwhisperer-husky-plus-features-over-chipwhisperer-husky).

---
## Analog Capture and Clock

| **Feature**                   | ChipWhisperer-Husky | ChipWhisperer-Pro | ChipWhisperer-Lite | ChipWhisperer-Nano |
| -------                       | -------------------- | ----------- |------------ | ------- |
| **ADC Specs**                 | **12-bit 200MS/s (Husky Plus: 250MS/s)** | 10-bit 105MS/s | 10-bit 105MS/s | 8-bit 20MS/s |
| **ADC Clock Source**          | **PLL Generated (Integer Multiple of Int/Ext Clock)** | Internally generated (x1 or x4), external input (x1 or x4) | Internally generated (x1 or x4), external input (x1 or x4) | Internally generated, external input |
| **Analog Input**              |  AC-Coupled Differential, adjustable -6.5dB to 55dB low noise gain | AC-Coupled, adjustable low-noise gain from -6.5dB to 55dB | AC-Coupled, adjustable low-noise gain from -6.5dB to 55dB | AC-Coupled, fixed gain of 20dB |
| **Sample Buffer Size**        | **131124 samples (Husky Plus: 327828 samples)**| **98 119 samples** | 24 573 samples | 50 000 samples |
| **ADC Decimation**            | Yes | Yes | Yes | No |
| **ADC Offset Adjustment**     | Yes [0, 2^32) | Yes, [0, 2^32) | Yes, [0, 2^32) | No |
| **ADC Trigger**               | Rising-edge, Falling-edge, High, Low | Rising-edge, Falling-edge, High, Low | Rising-edge, Falling-edge, High, Low | Rising-edge |
| **Presampling**               | Yes | Yes | Yes | No |
| **Phase Adjustment**          | Yes | Yes, 5ns increments | Yes, 5ns increments | No |
| **Capture Streaming**         | **Yes (>20MS/s max)** | **Yes (10MS/s max)** | No | No |
| **Clock Generation Range**    | **10-350MHz** | 5-200MHz | 5-200MHz | 60MHz, divisible by 2, 4, 8, or 16 |
| **Clock Output**              | Regular, with glitch inserted, glitch only | Regular, with glitch inserted, glitch only | Regular, with glitch inserted, glitch only | Regular |

---
## Triggering

| **Feature**  | ChipWhisperer-Husky | ChipWhisperer-Pro | ChipWhisperer-Lite | ChipWhisperer-Nano |
| -------   | -------------------- | ----------- |------------ | ------- |
| Modules   | Basic, **Analog Pattern, Analog Threshold, UART, Edge Count, Arm Trace** | Basic, **Analog, SPI, UART** | Basic | Basic | 
| Analog Trigger | **Sum of Absolute Difference (512 Samples)**, **Analog Level** | **Sum of Absolute Difference (128 samples)** | N/A | N/A |
| Basic Trigger Inputs | TIO 1-4, nRST, **SMB** | TIO 1-4, nRST, **SMA** | TIO 1-4, nRST | TIO 4 |
| Basic Trigger Combination | One of OR, AND, NAND | One of OR, AND, NAND | One of OR, AND, NAND | N/A |
| Sequenced Triggers | **2 (Husky Plus: up to 4)** | N/A | N/A | N/A | N/A |

---
## IO
| **Feature**  | ChipWhisperer-Husky | ChipWhisperer-Pro | ChipWhisperer-Lite | ChipWhisperer-Nano |
| -------   | -------------------- | ----------- |------------ | ------- |
| GPIO Voltage | 3.3V | 3.3V | 3.3V | 3.3V | 
| Logic Outputs | TIO 1-4, nRST, PDIC, PDID, **User IO D0-7** | TIO 1-4, nRST, PDIC, PDID | TIO 1-4, nRST, PDIC, PDID | TIO 1-4, nRST, PDIC, PDID |
| Logic Inputs | TIO 1-4, **User IO D0-7** | TIO 1-4 | TIO 1-4 | N/A |
| UART Serial | TIO 1-4 assignment | TIO 1-4 assignment | TIO 1-4 assignment | Fixed TIO 1 and TIO 2 |
| Clock | Fixed, HS2 output, HS1 Input | Fixed, HS2 output, HS1 input | Fixed, HS2 output, HS1 input | Fixed, HS2 output, HS1 input |
| Basic Trigger Inputs | TIO 1-4, nRST, **SMB**, **User IO D0-7** | TIO 1-4, nRST, **SMA** | TIO 1-4, nRST | TIO 4 |
| Basic Trigger Combination | One of OR, AND, NAND | One of OR, AND, NAND | One of OR, AND, NAND | N/A |
| Trigger Out | **Yes** | **Yes** | No | No |
| Programmers | STM32F UART, XMEGA PDI, AVR ISP, SWD/JTAG (via OpenOCD), SAMBA (AtSAM) | STM32F UART, XMEGA PDI, AVR ISP, SWD/JTAG (via OpenOCD), SAMBA (AtSAM) | STM32F UART, XMEGA PDI , AVR ISP, SWD/JTAG (via OpenOCD), SAMBA (AtSAM) | STM32F UART, SWD/JTAG (via OpenOCD), SAMBA (AtSAM) |
| Power rails | 3.3V | 5V, 3.3V | 3.3V | 3.3V |
| User IO Pins | 8 Data pins, **JTAG, SWD, Arm Trace, Generic, Logic Analyzer** | N/A | N/A | N/A |

---
## Glitch

| **Feature**  | ChipWhisperer-Husky | ChipWhisperer-Pro | ChipWhisperer-Lite | ChipWhisperer-Nano |
| -------   | -------------------- | ----------- |------------ | ------- |
| Voltage Glitching | YES | Yes | Yes | Yes |
| Clock Glitching | YES | Yes | Yes | No |
| Glitch Outputs | Clock-XOR, Clock-OR, Glitch-Only, Enable-Only | Clock-XOR, Clock-OR, Glitch-Only, Enable-Only | Clock-XOR, Clock-OR, Glitch-Only, Enable-Only | Glitch-Only |
| Glitch Width | **Based on Internal PLL (600-1200MHz)**, 100% (enable-only) | 0-49.8% of a clock cycle, 100% (enable-only) | 0-49.8% of a clock cycle, 100% | Time increments between [0, 2^32) |
| Glitch Width Increments | **Based on Internal PLL (600-1200MHz)** | 0.4% of a clock cycle | 0.4% of a clock cycle | ~8.3ns |
| Glitch Offset | **Based on Internal PLL (600-1200MHz)** | 0-49.8% of a clock cycle, 100% (enable-only) | 0-49.8% of a clock cycle, 100% | Time increments between [0, 2^32), high jitter |
| Glitch Offset Increments | **Based on Internal PLL (600-1200MHz)** | 0.4% of a clock cycle | 0.4% of a clock cycle | ~8.3ns, high jitter |
| Glitch Cycle Offset | [0, 2^32) | [0, 2^32) | [0, 2^32) | N/A |
| Glitch Cycle Repeat | [0, 8192] | [0, 8192] | [0, 8192] | N/A |
| Voltage Glitch Type | High-power, low-power crowbar | High-power, low-power crowbar | High-power, low-power crowbar | Low-power crowbar |
| Voltage Glitch Pulse Current | 20A | 20A | 20A | 4A |

---
## ChipWhisperer-Pro features over ChipWhisperer-Lite

* Additional trigger modules - Analog waveform and UART/SPI
* 10MS/s streaming mode, allowing almost unlimited sample size
* SMA connectors for trigger input/output
* Much larger sample buffer (98k samples on Pro vs. 24k samples on Lite )
* Waterproof case
* LCD Screen
* Labeled status LEDs
* 5V available on 20pin connector

## ChipWhisperer-Husky features over ChipWhisperer-Lite

* Faster ADC (200MS/s on Husky vs. 105MS/s on Lite) with greater bit depth (12-bits on Husky vs. 10-bits on Lite)
* \>20MS/s streaming mode allowing almost unlimited sample size
* Much larger sample buffer (131124 samples on Husky vs. 24k samples on Lite)
* Differential ADC input
* Additional trigger modules - Analog waveform, Analog Level, UART, Edge count, Arm Trace
* SMB connectors for trigger/glitch output, clock input/output
* Multiple programmable glitches
* TraceWhisperer Support
* Glitch resolution independent of target clock
* 20-pin User IO header with 8 data pins
    * Data pins can be used as GPIOs, for JTAG/SWD, Arm Trace, or as Logic Analyzer inputs


## ChipWhisperer-Husky-Plus features over ChipWhisperer-Husky

* Faster ADC (250MS/s vs 200MS/s)
* Larger ADC sample buffer (327828 samples vs 131124 samples)
* Larger logic analyzer sample buffer (65552 samples vs 16376 samples)
* Larger TraceWhisperer sample buffer (32776 samples vs 8188 samples)
* Longer trigger sequences (up to 4 sequenced triggers vs 2)

