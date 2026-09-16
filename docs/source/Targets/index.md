---
title: Overview & Comparison
---

# Targets

ChipWhisperer's various targets take the difficulty out of setting up hardware for side channel attacks!
In addition to interfacing with ChipWhisperer's [20-pin connector](../Capture/20-pin-connector.md) and SMA-connectors, these target boards
already have necessary side channel modifications (shunt resistor, capacitor removal, etc.) integrated
into the board, so there's no need to reach for your soldering iron or utility knife!

(integrated-targets)=
## Integrated Targets

The following targets typically come attached to a capture board:

| Target | Device | Architecture | Hardware Crypto |Programmer | Status | Notes |
|--------|--------|--------------|-----------------|-----------|---------|------|
| CW303 XMEGA | ATXmega128D4-AU | 8-bit Harvard  | No| CW-integrated  | Released | |
| CW303 Arm | STM32F303RCT6 |Arm Cortex-M4 | No | CW-integrated  | Released |
| CW1101 CW-Nano Target Board | STM32F030F4P6 | Arm Cortex-M0 | No | CW-integrated  | Released | 

These boards are integrated into a capture board and therefore can be found
with the associated capture design files: [https://github.com/newaetech/chipwhisperer-capture](https://github.com/newaetech/chipwhisperer-capture)

## Standalone Targets

The following targets don't come attached to a target and must be connected to a capture board
with a 20-pin cable and SMA cables

| Target | Device | Architecture | Hardware Crypto |Programmer | Status | Notes |
|--------|--------|--------------|-----------------|-----------|---------|------|
| CW304 Notduino | ATMega328P | 8-bit Harvard  | No | CW-integrated  | Discontinued | Only available as PCB + components (unsoldered) |
| CW305 Artix FPGA | Xilinx Artix-7 | FPGA | Yes | CW-integrated , external | Released |
| CW310 Kintex FPGA | Xilinx Kintex-7 | FPGA | Yes | CW-integrated, external | Released |
| CW340 Kintex FPGA | Xilinx Kintex-7 | FPGA | Yes | CW-integrated, external | Released |

Hardware design files can be found at [https://github.com/newaetech/chipwhisperer-capture](https://github.com/newaetech/chipwhisperer-capture)

(cw308-targets)=
### CW308 Targets

The CW308 UFO board is a convenient main board for attacking a wide variety of targets. It includes
many niceties for running target boards off of, including various voltage regulators, a crystal drive
circuit, clock selection, and programming headers for standards like JTAG.

Hardware design files for targets can be found on our Github at: [https://github.com/newaetech/chipwhisperer-target-cw308t](https://github.com/newaetech/chipwhisperer-target-cw308t)

These targets can also be used with the [CW313](CW313.md) thanks to our [CW308-to-CW312 adapter board](CW308_CW312_adapter.md).

Many targets are available for the CW308:

#### 32-bit Targets
| Target            | Device        | Architecture   | Hardware Crypto |Programmer                  | Status   | Notes          |
|-------------------|---------------|----------------|-----------------|----------------------------|----------|----------------|
| CW308T-ATSAM4L   | ATSAM4L        | Arm Cortex-M4  | Yes             | External                   | Released | Side channel countermeasures |
| CW308T-ATSAML11  | ATSAML11E16A   | Arm Cortex-M23 | Yes             | External                   | Released |                |
| CW308T-AURIX     | TC233LP        | TriCore        | No              | External                   | Released | Lockstep Core | 
| CW308T-CEC1702   | CEC1702        | Arm Cortex-M4F | Yes             | External                   | Discontinued | Lots of hardware crypto modules | 
| CW308T-D2000     | Quark D2000    | x86            | No              | External                   | Discontinued | Intel x86 microcontroller |
| CW308T-EFR32MG21A| EFR32MG21A     | Arm Cortex-M33 | Yes             | External                   | Released | 'Secure Element' Core |
| CW308T-EFR32MG21-SOCKET | QFN Socket (EFR32MG21x) | Arm Cortex-M33 | Yes | External               | Released | Fits EFR32MG21A/B |
| CW308T-ESP32     | ESP32          | LX6            | Yes             | External                   | Released | Low-cost IoT chip |
| CW308T-FE310     | FE310-G002     | RISC-V         | No              | External                   | Discontinued | Si-Five RISC-V |
| CW308T-K82       | MK82FN256VLL15 | Arm Cortex-M4  | Yes             | External                   | Released | Multiple AES cores |
| CW308T-MPC5748G  | MPC5748G       | PowerPC        | Yes (API under NDA) | External               | Discontinued | Triple-Core, CAN interface |
| CW308T-MPC5676R  | MPC5676R       | PowerPC        | No              | External                   | Released |                |
| CW308T-MPC5777C  | MPC5777C       | PowerPC        | Yes             | External                   | Released | CSE/SHE Core   |
| CW308T-STM32F0   | STM32F071RBT6  | Arm Cortex-M0  | No              | CW-integrated , external   | Released |                |
| CW308T-STM32F1   | STM32F100RBT6B | Arm Cortex-M3  | No              | CW-integrated , external   | Released | Same PCB as F0 |
| CW308T-STM32F2   | STM32F215RET6  | Arm Cortex-M3  | Yes             | CW-integrated , external   | Released | Same PCB as F0 |
| CW308T-STM32F3   | STM32F303RCT6  | Arm Cortex-M4  | No              | CW-integrated , external   | Released | Same PCB as F0 |
| CW308T-STM32F4   | STM32F405RGT6  | Arm Cortex-M4  | No              | CW-integrated , external   | Released | Same PCB as F0 |
| CW308T-STM32F4HWC | STM32F415RGT6 | Arm Cortex-M4  | Yes             | CW-integrated , external   | Released | Same PCB as F0 |
| CW308T-STM32L4   | STM32L443RCT6  | Arm Cortex-M4  | Yes             | CW-integrated , external   | Released | Same PCB as F0 |
| CW308T-STM32L5HWC| STM32L562RET6  | Arm Cortex-M33 | Yes             | CW-integrated , external   | Released | Same PCB as F0 |
 

#### 8/16-bit Targets
| Target       | Device          | Architecture  | Hardware Crypto |Programmer        | Status   | Notes |
|--------------|-----------------|---------------|-----------------|------------------|----------|-------|
| CW308T-XMEGA | ATXmega128D4-AU | 8-bit Harvard | No              | CW-integrated    | Released | 
| CW308T-87C51 | 8xC51           | 8-bit 8051    | No              | One time program | Released | 
| CW308T-AVR   | ATMega328P      | 8-bit Harvard | No              | CW-integrated    | Released | No longer sold |

#### Other Targets

| Target | Device | Architecture | Hardware Crypto |Programmer | Status | Notes |
|--------|--------|--------------|-----------------|-----------|---------|------|
| CW308T-S6LX9 | Spartan 6 LX9 | FPGA | Yes | External | Released | Can hold hardware AES core |
| CW308T-GENERIC | None | N/A | N/A | N/A | Released | Prototyping Board |

#### Beta Targets

Additional targets are also in development. They typically have Gerber files
and Altium source files, but are not guaranteed to be in a working state. Many of them have a working
HAL, but we did not have sufficient interest to perform the production run.

| Target | Device | Architecture | Hardware Crypto |Programmer | Status | Notes |
|--------|--------|--------------|-----------------|-----------|---------|------|
| CW308T-ADUCM3029 | ADuCM3029 | Arm Cortex-M3 | Yes | External | In development |
| CW308T-ATSAMR21 | ATSAMR21 | Arm Cortex-M0+ | No | External | In development | Also contains radio chip |
| CW308T-CC2538 | CC2538 | Arm Cortex-M3 | Yes | External | In development | 802.15.4 SOC |
| CW308T-EFM32GG11 | EFM32GG11 | Arm Cortex-M4 | Yes | External | In development |
| CW308T-EFM32TG11 | EFM32TG11 | Arm Cortex-M0+ | Yes | External | In development |
| CW308T-K24F | MK24FN1M0VLL12 | Arm Cortex-M4 | Yes | External | In development | 
| CW308T-LPC1343 | LPC1343 | Arm Cortex-M3 | No | External | In development | Glitch attack possible on code read protect |
| CW308T-MEGARF | ATMega256RFR2 | 8-bit Harvard | Yes | CW-integrated, external | In development | 802.15.4 SOC |
| CW308T-MSP430FR5 | MSP430FR5(8/9)69 | 16-bit Harvard | Possible | External | In development | 


### CW312/CW313 Targets

Very similar to the CW308, the [CW312/CW313](CW313.md) uses a convenient edge connector.

The CW312 is a yet-to-be-released replacement for the CW308; the
[CW313](CW313.md) is a lower cost version which retains most of the CW308's
features.

As noted above, CW308 targets may be used with the CW313, but going the other
way around is not possible (unless you design your own adapter).

Hardware design files for targets can be found on our Github at: [https://github.com/newaetech/chipwhisperer-target-cw308t](https://github.com/newaetech/chipwhisperer-target-cw308t)

The following targets are available for the CW312/CW313:

#### 32-bit Targets
| Target            | Device        | Architecture   | Hardware Crypto |Programmer                  | Status   | Notes          |
|-------------------|---------------|----------------|-----------------|----------------------------|----------|----------------|
| CW312T-SAM4S      | ATSAM4S2      | Arm Cortex-M4  | No              | CW-integrated, external    | Released |                |
| CW312T-RP2350     | RP2350 | dual Arm Cortex-M33, Hazard3 RISC-V | No | USB Bootloader            | Released | Arm and RISC-V cores |

#### FPGA Targets

| Target            | Device            | Architecture   | Hardware Crypto |Programmer                  | Status   | Notes          |
|-------------------|-------------------|----------------|-----------------|----------------------------|----------|----------------|
| CW312T-iCE40      | Lattice iCE40UP5K | FPGA           | Yes             | CW-integrated, external    | Released | Can hold hardware AES core or RISC-V softcore |
| CW312T-XC7A35     | Xilinx Artix-7    | FPGA           | Yes             | CW-integrated, external    | Released | Can hold hardware AES core, ECC core, Arm softcore, RISC-V softcore |


