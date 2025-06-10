# ChipWhisperer-Lite

The ChipWhisperer-Lite represents NewAE Technology Inc.'s most aggressive pursuit of it's mission to bring side-channel power analysis and glitching attacks to every engineer and student. The FULLY open-source (hardware, software, 
firmware, FPGA code) is launching a revolution in hardware security. In particular, the ChipWhisperer-Lite
serves as a good middle ground between the full feature-set of the ChipWhisperer-Pro, and the affordability of
the ChipWhisperer-Nano.

![image](Images/cw-lite-box.jpg "image")

[Datasheet](https://media.newae.com/datasheets/NAE-CW1173_datasheet.pdf)

## Hardware

The ChipWhisperer-Lite, as the name suggests, features the [ChipWhisperer-Lite capture hardware](../Capture/ChipWhisperer-Lite.md). Its datasheet can be found on Mouser: https://www.mouser.ca/datasheet/2/894/NAE-CW1173_datasheet-1859842.pdf

The ChipWhisperer-Lite has a few available hardware options:

| ChipWhisperer-Lite Version | Target | Single Board | Also comes with | Purchase Link |
|---------------------------|-------------|----------|----|----|
| ChipWhisperer-Lite 1-Part | CW303 XMEGA | Yes | Micro-USB cable | [Mouser](https://www.mouser.com/ProductDetail/NewAE/NAE-CW1173?qs=r5DSvlrkXmKKNcTDix800Q%3D%3D) |
| ChipWhisperer-Lite 32-bit 1-Part | CW303 Arm  | Yes | Micro-USB cable | [Mouser](https://www.mouser.com/ProductDetail/NewAE/NAE-CWLITE-ARM?qs=r5DSvlrkXmIUEZprO%2Fombw%3D%3D) |
| ChipWhisperer-Lite 2-Part | CW303 XMEGA | No | Micro-USB cable, 20-pin cable, SMA cables | [Mouser](https://www.mouser.com/ProductDetail/NewAE/NAE-CW1173-2PART?qs=r5DSvlrkXmI%2FI%2FEYu37YCg%3D%3D) |
| ChipWhisperer-Lite Standalone | None | No | Micro-USB cable, 20-pin cable, SMA cables | [Mouser](https://www.mouser.com/ProductDetail/NewAE/NAE-CWLITE-CAPTURE?qs=r5DSvlrkXmKUDG90PYjKIA%3D%3D) |

## Turning a 1-Part into a 2-Part

Want to attack other targets with your 1-part board? Simply break the 
target portion of the board off as described on the ChipWhisperer-Lite capture page, 
solder a 20-pin connector on your capture board, and solder SMA connectors onto the
capture board's.

## Hardware List

Also links to documentation. See table above for which hardware comes with each hardware kit version

* [ChipWhisperer-Lite](../Capture/ChipWhisperer-Lite.md)
* [CW303 XMEGA Target](../Targets/CW303%20XMEGA.md)
* [CW303 Arm Target](../Targets/CW303%20Arm.md)

## Images

### 1-Part

![](Images/cw-lite-1.jpg)

### 2-Part

![](Images/cw-lite-2.jpg)

### 1-Part 32-bit

![](Images/cw-lite-32.jpg)

### Standalone

![](Images/cw-lite-standalone.jpg)