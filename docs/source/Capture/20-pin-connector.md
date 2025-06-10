# 20-Pin Connector

All ChipWhisperer capture hardware and most ChipWhisperer targets use a
standard 20-pin connector for connecting capture devices to targets. This
connector carries power and I/O pins between the ChipWhisperer capture
device and the target board. 

There are some minor variations on pin functions depending on the hardware;
these are noted below.


## Pinout
```{tip}
Each ChipWhisperer capture hardware unit comes with a handy sticker to make
locating these pins easier.
```

|             |           |
| ----------- | --------- |
| 1: 5V       | 2: GND    |
| 3: 3.3V     | 4: HS1    |
| 5: nRST     | 6: HS2    |
| 7: MISO     | 8: VREF   |
| 9: MOSI     | 10: TIO1  |
| 11: SCK     | 12: TIO2  |
| 13: PDIC/CS | 14: TIO3  |
| 15: PDID    | 16: TIO4  |
| 17: GND     | 18: 3.3V  |
| 19: GND     | 20: 5V    |

## Pin Descriptions

```{note}
Note: directions are relative to the **capture** device. \
I: input to ChipWhisperer capture device / output from target \
O: output from ChipWhisperer capture device / input to target

```

| Number | Name        | Dir | Description                                                  |
| ------ | ----------- | --- | ------------------------------------------------------------ |
| 1      | +5V (VUSB)  | O   | \+5V to Target Device [^1]                                   |
| 2      | GND         | O   | System ground.                                               |
| 3      | +3.3V       | O   | \+3.3V to Target Device [^2]                                 |
| 4      | HS1         | I/O | High Speed Input (normally clock input).                     |
| 5      | nRST        | I/O | Target reset Pin (active low).                               |
| 6      | HS2         | I/O | High Speed Output (normally clock output).                   |
| 7      | MISO        | I/O | SPI input: MISO (for SPI + AVR Programmer). [^5]             |
| 8      | VREF        | I   | CWLite [^3] and CWNano [^4] only; not connected on others. |
| 9      | MOSI        | I/O | SPI output: MOSI (for SPI + AVR Programmer). [^5]            |
| 10     | TIO1        | I/O | TargetIO Pin 1 - usually UART Rx.                            |
| 11     | SCK         | I/O | SPI output: SCK (for SPI + AVR Programmer). [^5]             |
| 12     | TIO2        | I/O | TargetIO Pin 2 - usually UART Tx.                            |
| 13     | PDIC/CS     | I/O | PDI Programming Clock (XMEGA Programmer), or CS pin (SPI). Also used for STM32 bootloader. |
| 14     | TIO3        | I/O | TargetIO Pin 3 - usually bidirectional IO for smartcard.     |
| 15     | PDID        | I/O | PDI Programming Data (XMEGA Programmer). [^6]                |
| 16     | TIO4        | I/O | TargetIO Pin 4 - usually trigger input.                      |
| 17     | GND         | O   | System ground.                                               |
| 18     | +3.3V       | O   | \+3.3V to Target Device [^2]                                 |
| 19     | GND         | O   | System ground.                                               |
| 20     | +5V (VUSB)  | O   | \+5V to Target Device [^1]                                   |


[^1]: Only connected on CWPro; not connected on other capture hardware.
[^2]: 200 mA available; can be turned off via `scope.io.target_pwr` (except on Nano).
[^3]: See [CWLite VTarget Usage](#vtarget-usage) for more information.
[^4]: On CWNano, drive this pin with desired I/O voltage in range 1.5V - 5V.
[^5]: Unused on CWNano.
[^6]: User output on CWNano.

