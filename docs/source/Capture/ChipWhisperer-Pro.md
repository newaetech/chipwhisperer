# CW1200 ChipWhisperer-Pro

The CW1200 (ChipWhisperer Pro) is an upgraded version of the
ChipWhisperer Lite capture hardware. The Pro includes an FPGA with much
more space than the Lite, allowing many new features to be added,
including a larger sample buffer, streaming-mode captures, additional
trigger methods, and a touchscreen interface. These features make it a
high-end device suitable for laboratory use.

**The CW1200 is discontinued**; consider the [ChipWhisperer-Husky](ChipWhisperer-Husky.md) instead.
Read about the differences between Husky and the CW1200 [here](overview.md#chipwhisperer-husky-plus-features-over-chipwhisperer-pro).

![CWP.png](Images/CWP.png "ChipWhisperer-Pro")

[Datasheet](https://media.newae.com/datasheets/NAE-CW1200_datasheet.pdf)

---

## Quick-Start Guide

To quickly setup the ChipWhisperer-Pro, connect it to a computer via a USB-A to USB-B
cable and plug in its 5V power supply. Connect a 20-pin cable between it and a target board,
as well as a coax cable between the measure SMA connector (if you're doing power analysis)
or the glitch SMA connector (if you're doing voltage glitching) and the SMA connector on the 
target. Be sure to check the relevant hardware documentation for your target before proceeding as
well. 

Once that's done, follow our {doc}`installation guide <../installation>`, which
will take the rest of the way towards learning about side channel attacks!


---

## Product Highlights

* Synchronous (capture board and target board both use the same clock) capture and glitch architecture, 
offering vastly improved performance over a typical asynchronous oscilloscope setup
* 10-bit 105MS/s ADC for capturing power traces
  * Can be clocked at both the same clock speed as the target and 4 times faster
* +55dB adjustable low noise gain, allowing the Pro to easily measure small signals
* Clock and voltage fault generation via FPGA-based pulse generation
* XMEGA (PDI), AVR (ISP), and STM32F (UART Serial) bootloader built in
* Advanced hardware trigger modules: IO (UART and SPI) and Analog Waveform (SAD)
* Large sample buffer (98k samples) and stream mode allow for long captures - perfect for SPA attacks
* LCD Screen
* Trigger In and Trigger Out SMA connectors
* Waterproof carrying case

## Specifications

### Analog Capture and Clock

| **Feature**  | Notes/Range |
| -------   |------ |
| **ADC Specs** | 10-bit 105MS/s |
| **ADC Clock Source** | Internally generated (x1 or x4 from output clock), external input (x1 or x4 from input clock) | 
| **Analog Input** |  AC-Coupled, adjustable low-noise gain from -6.5dB to 55dB 
| **Sample Buffer Size** | 98 119 samples |
| **ADC Decimation**   | Yes |
| **ADC Offset Adjustment** | Yes, [0, 2^32) clock cycles |
| **ADC Trigger** | Rising-edge, Falling-edge, High, Low | 
| **Presampling** | Yes |
| **Phase Adjustment** | Yes, 5ns increments | 
| **Capture Streaming** |  Yes (10Ms/s max) |
| **Clock Generation Range** | 5-200MHz | 
| **Clock Output** | Regular, with glitch inserted, glitch only | 

---
### Triggering

| **Feature**  | Notes/Range | 
| -------   | ----------- |
| Modules   | Basic, Analog, SPI, UART |
| Analog Trigger | Sum of Absolute Difference (128 samples) |
| Basic Trigger Inputs | TIO 1-4, nRST, SMA|
| Basic Trigger Combination | One of OR, AND, NAND | 

---
### IO
| **Feature**  | Notes/Range | 
| -------   | ----------- |
| GPIO Voltage | 3.3V | 
| Logic Outputs | TIO 1-4, nRST, PDIC, PDID | 
| Logic Inputs | TIO 1-4 | 
| UART Serial | TIO 1-4 assignment | 
| Clock | Fixed, HS2 output, HS1 Input | 
| Trigger Out | Yes | 
| Programmers | STM32F UART, Atmel PDI (for XMEGA), Atmel ISP (for AVR) | 
| Power rails | 5V, 3.3V | 

---
### Glitch

| **Feature**  | Notes/Range |
| -------   | ----------- |
| Voltage Glitching | Yes | 
| Clock Glitching | Yes | 
| Glitch Outputs | Clock-XOR, Clock-OR, Glitch-Only, Enable-Only | 
| Glitch Width\* | 0-49.8% of a clock cycle, 100% (enable-only) | 
| Glitch Width Increments | 0.4% of a clock cycle | 
| Glitch Offset | 0-49.8% of a clock cycle, 100% (enable-only) | 
| Glitch Offset Increments | 0.4% of a clock cycle | 
| Glitch Cycle Offset | [0, 2^32) | [0, 2^32) | N/A |
| Glitch Cycle Repeat | [0, 8192] | [0, 8192] | N/A |
| Voltage Glitch Type | High-power, low-power crowbar | 
| Voltage Glitch Pulse Current | 20A | 
| Glitch Trigger | Rising-Edge |

\* Actual glitch width will be affected by cabling used for glitch output

---
### USB

| **Feature**  | Notes/Range |
| -------   | ----------- |
| USB | USB 2.0 High Speed | 
| VendorID | 0x2B3E | 
| ProductID | 0xACE3 | 
| Interfaces | Vendor + CDC (CDC available on firmware >= 1.30) |
| WCID (Windows 10 automatic driver installation) | ✅ (firmware >= 1.22) | 

---

## Using the ChipWhisperer-Pro

All communication with the ChipWhisperer-Pro is done through ChipWhisperer's Python
API, which is documented on our {ref}`Scope API <api-scope>` page.

ChipWhisperer also has many Jupyter Notebook tutorials/labs, which serve as learning material for side-channel
attacks, as well as examples on how to use the ChipWhisperer API. If you followed the
{doc}`installation instructions <../installation>`,
this will be in the `jupyter/` folder in the place you installed ChipWhisperer.

We also have full courses available at https://learn.chipwhisperer.io/ that supplement
the Jupyter Notebook tutorials.

---
### Using from Other Languages

While the ChipWhisperer API is written in Python, any language that can talk to libusb should be
compatible. This will require you to write your own backend and is officially unsupported
by NewAE.

---
### Power Supply

The ChipWhisperer Pro can be powered either via the USB port,
or via the 5V jack. If both are plugged in, the 5V jack will be used
exclusively for power. This configuration (5V jack for power,
USB for comms) is preferred. This is because of the high current draw 
of the Pro: while powering the touchscreen running and an external target, 
it would be easy to exceed the USB current limit, causing all sorts of issues.
If too much current is drawn, any damage in general is extremely unlikely:
the computer will disable the USB port until the computer is restarted
if too much current is drawn.

To make this setup more flexible, the Pro ships with two power sources:

  * A 5 V, 2.1 A power supply. This supply is suitable for a permanent
    bench setup.
  * A USB-to-barrel jack cable. This solution is more portable: if
    you're travelling with a laptop, you can use a second USB port for
    power. A USB charger will also work here.

NOTE: Older versions of the Pro have the 5V on the USB input
disconnected from power, meaning it cannot be powered from the USB
input.

---
### Connectors

#### **Glitch Port**

  The "Glitch" port is used for voltage glitching. It's connected to two
  MOSFET elements, as the following figure shows:

  ![image](Images/Glitch.png "image")

  The 1200 glitch output can be commanded to turn on either of those
  MOSFETs via `scope.io.glitch_hp` and `scope.io.glitch_lp` fields:

```python

  scope.io.glitch_hp = True #enable high power glitch
  scope.io.glitch_hp = False #disable high power glitch

  scope.io.glitch_lp = True #enable low power glitch
  scope.io.glitch_lp = False #disable low power glitch
```

  Be careful using this feature, as you don't want to short the MOSFETs
  for too long. It's also possible to damage the ChipWhisperer-Pro by
  burning these MOSFETs up if used incorrectly. See [Fault101 Voltage Glitch Labs](https://github.com/newaetech/chipwhisperer-jupyter/blob/main/courses/fault101/SOLN_Fault%202_1%20-%20Introduction%20to%20Voltage%20Glitching.ipynb)
  for more information.

---

#### **Measure Port**

  The "Measure" port is the input to the low-noise amplifier and ADC.

--- 
#### **20-Pin Connector**

The 20-pin connector is documented [here](20-pin-connector.md).

---
### **Upgrading SAM3U Firmware**

When talking about the ChipWhisperer's firmware, there is really two
parts to this:

1.  The FPGA Bitstream file.
2.  The SAM3U USB interface chip firmware.

The FPGA bitstream alone is what is normally configured by the
ChipWhisperer-Capture software. This bitstream is always the most
up-to-date, since it's automatically reloaded by the computer every time
you power cycle the ChipWhisperer-Capture. The SAM3U firmware is
not updated automatically, but it tends to change less frequently.

To learn how to check your SAM3U firmware version and how to upgrade, go to {doc}`../firmware`.

---

#### **Erase Pins**

If you are unable to connect to the ChipWhisperer-Pro to erase its firmware, the SAM3U firmware
can also be erased by shorting JP3 while the Pro is on. JP3 is located
on the Pro's PCB, meaning you must open the Pro to short these pins. With the USB connector
on the left, JP3 is located to the right of the SAM3U, and has the text `ERASE` below it.

After shorting the pins, unplug and replug the USB connector.

Then, see {ref}`programming-new-firmware` for the next step to re-program ChipWhisperer-Pro firmware.

---

## Advanced Features

### **Streaming Mode**

The ChipWhisperer Pro has a streaming mode that allows extremely long
captures as long as relatively low sampling rates are used. For example,
this plot shows an excerpt from two traces with nearly 1 million samples:

![Cwpro-stream-example.png](Images/Cwpro-stream-example.png "Cwpro-stream-example.png")

This capture mode is useful for many types of attacks, including:

  - Full captures of slow software AES libraries
  - Power analysis on ECC
  - Context switches on embedded operating systems

While streaming, the ChipWhisperer hardware sends ADC data back to the
capture software while recording more samples (instead of waiting until
the end of the capture). During this process, the ADC samples are sent
back to the computer in packets of approximately 3000 samples at a time.
As a block diagram, this looks like:

![Cwpro-stream.PNG](Images/Cwpro-stream.png "Cwpro-stream.PNG")

The main danger in streaming mode is that the FPGA's sample buffer can
overflow if the PC doesn't request these packets quickly enough. In
practice, the maximum transfer rate is around 10 Msamples/s, so the
maximum ADC frequency is approximately 10 MHz in streaming mode. Trying
to stream above this rate will usually cause data to be lost: the FPGA
overwrites samples after the buffer is full, so it's impossible to
recover these samples after overrunning the buffer.

On the software end, there are two things to watch for:

  - Long captures from streaming mode (millions of points) may take
    several seconds to record. When working with these long captures,
    make sure the software's timeouts are long enough.

  - Extremely long captures take a lot of memory. 64-bit Python is
    recommended if you plan on capturing many traces with millions of
    samples - you can hit the memory limit on 32-bit Python pretty
    quickly.

---
### **Trigger Module**

Unlike the ChipWhisperer-Lite, the Pro has three different trigger modes
to help capture traces when it's difficult to get a concrete trigger
signal. A block diagram of the trigger module is:

![Cwpro-trigger.PNG](Images/Cwpro-trigger.png "Cwpro-trigger.PNG")

The first two trigger modes use a combination of the trigger inputs -
the four GPIO inputs and the auxiliary SMA input. In the Capture
software, these five inputs can be enabled independently and combined in
three methods (AND, OR, and NAND). This combined trigger signal is the
input for the edge/level and I/O decode detectors. The last trigger mode
looks directly at the power trace and does not use these trigger inputs.

---

#### **Edge/Level**

The edge/level detector can trigger on four different events:

  - Trigger input is low (0)

  - Trigger input is high (1)
  - Trigger input had a rising edge (0 -\> 1)
  - Trigger input had a falling edge (1 -\> 0)

This mode is suitable when the target is using one of the GPIO pins as a
trigger signal - if you have control over the target's source code, let
it output a rising edge when the encryption or other operation begins.

---
#### **I/O Decoder**

The I/O decoder examines the trigger signal, assumes that it is either
UART or SPI traffic, and outputs a trigger signal when it detects a
certain pattern on the line. In the capture software, the settings for
this decoder are:

![Cwpro-iodecoder.PNG](Images/Cwpro-iodecoder.png "Cwpro-iodecoder.PNG")

  - **Decode Type**: Which type of traffic is being captured in the
    trigger signal? Might be USART or SPI data.

  - **Trigger Data**: Which data are we searching for? This setting
    should be a list of bytes to be detected in order. For example,
    `['r', '0']` would detect the string "r0", and `[0x07]` would detect
    a bell character.
  - **Baud**: What baud rate does this line use? This needs to be set
    manually.

When using this trigger mode, target IO1/IO2 are probably the best
inputs to use: these are normally the serial TX and RX lines. It's
possible to enable either one of these to trigger on sending or
receiving data, respectively.

---

#### **Sum of Absolute Differences (SAD)**

Some targets don't have nice trigger signals to detect. Sad\!

The Sum of Absolute Differences module has two 128 sample buffers. The
FPGA stores the ADC's 128 most recent samples in one buffer and a fixed
reference pattern in the other. Then, after every sample, it calculates

$$\sum_{i}^{128}|x_i-y_i|$$

where $x_i$ is the $i^\mbox{th}$ sample of the previous 128 input ADC samples,
and $y_i$ is the $i^\mbox{th}$ sample of the fixed reference pattern.

If this sum is below a fixed threshold, the output trigger signal will
be set. This trigger module allows the ChipWhisperer to detect a
specific pattern (for instance, an encryption operation) in a power
trace without any other data.

The settings for the SAD module are:

![Cwpro-sad.PNG](Images/Cwpro-sad.png "Cwpro-sad.PNG")

  - **Point Range**: The samples in the current trace to be used for the
    SAD module's fixed values. This range is forced to have a width of
    128.
  - **Set SAD Reference from Current Trace**: Sets the fixed 128 samples
    to the current selection.

  - **SAD Reference vs. Cursor**: Shows the current output of the SAD
    calculation. Useful for setting the threshold - it's easy to capture
    a number of traces and check what typical values are for this SAD
    output.
  - **SAD Threshold**: The trigger point for the SAD module. A value of
    0 indicates a perfect match. If this threshold is too low, noise
    will stop the trigger from appearing; if it's too high, the scope
    will trigger at random offsets.

Note that this SAD module does not play well with downsampling: the
inputs to the SAD buffer are not downsampled. This means that
downsampled traces cannot be used as a reference. If you want to use
this trigger type, set up your SAD trigger with downsampling turned off
first.

---

### **SMA I/O**

The Pro has an extra SMA connector intended to be used for additional
trigger logic. It can be used either as a trigger input or output.

**Input**: The Aux SMA trigger input can be used in the exact same
manner as the other trigger inputs: the digital level is combined with
the other active triggers (through an AND or OR gate) and this is used
as the trigger signal. This is helpful for using other creative trigger
signals. For example, if you have a custom target board, you could
connect an FPGA output as an additional trigger signal. Alternatively,
you could use a high-end oscilloscope's pattern detection as a trigger
input.

**Output**: When the trigger module produces a trigger signal, the
ChipWhisperer can reproduce this signal on the Aux SMA. This allows an
external oscilloscope to be used to capture traces alongside the
ChipWhisperer.

---

### **Touchscreen**

The touchscreen on the ChipWhisperer Pro shows various details about its
status and current settings.

---

#### **Screen 1: Clock**

The clock screen shows the status of the CLKGEN and ADC clocks along
with the frequency counter.

**TODO: picture**

  - **CLKGEN**: Current frequency of CLKGEN clock in kHz

      - **Source**: Input to CLKGEN DCM. Could be system clock or EXTCLK

      - **DCM**: Lock status of CLKGEN DCM
      - **Reset DCM**: Reset the CLKGEN output. Useful if clock has
        locked at the wrong frequency
  - **ADC Clock**: Current ADC sampling rate in kHz
      - **Source**: Input to ADC DCM. Could be related to CLKGEN or
        EXTCLK

      - **DCM**: Lock status of ADC DCM
      - **Reset DCM**: Reset the ADC clock output
  - **Frequency Counter**: Current frequency measured by the frequency
    counter
      - **Source**: Input to frequency counter. Could be either EXTCLK
        or CLKGEN

---

#### **Screen 2: Routing**

The routing screen shows the status of the various I/O pins.

**TODO: picture**

  - **Aux Output**: Status of the aux SMA connections. Could be used as
    trigger input/output, glitch output, and/or clock output

  - **IO Pins**: Status of each of the IO pins on the 20 pin connector.
    Possible values depend on pin
  - **Target Power State**: Status of the 3.3 V output. Can be toggled
    here to reset target
  - **Target HS IO-Out**: Signal connected to high-speed output (HS2).
    Could be CLKGEN, glitch module, or disabled

---

#### **Screen 3: Trigger**

The trigger screen shows the current settings for the trigger module and
the ADC capture settings.

**TODO: picture**

  - **Trigger Pins**: Whether each trigger input is enabled. Active
    inputs are highlighted

      - **Mode**: Trigger combination method. Could be AND, OR, or NAND


  - **Trigger Source**: The trigger type in use. Active trigger module
    is highlighted

      - **State**: The current output level of the trigger module


  - **Trigger Mode**: The ADC trigger type. Active mode is highlighted

  - **Samples**:
      - **Delay**: Current ADC offset. This is the number of samples to
        wait after trigger before recording begins

      - **Pre**: Number of pre-trigger samples to be saved
      - **Time**: Delay, but converted into a time
      - **Total**: Number of samples to be recorded in total
  - **ADC gain**:
      - **Mode**: Amplification type. Either low or high

      - **Setting**: Low noise amplifier gain level

---

#### **Screen 4: Glitch**

The glitch screen shows the current settings for the glitch module.

**TODO: picture**

  - **Clock Src**: Input to the glitch module's clock. Active clock is
    highlighted

      - **DCM**: Lock status of the glitch module's DCM


  - **Glitch Setup**:

      - **Width**: Duty cycle of glitch pulse, as a fraction of one
        period

      - **Fine**: Adjustment on width
      - **Offset**: Distance between clock rising edge and glitch pulse
        rising edge, as a fraction of one period
      - **Fine**: Adjustment on offset
  - **View**: Schematic of glitch clock. Shows regular clock above
    (blue) and glitch module output below (black)
  - **Trigger Src**: Input for glitch module. Active source is
    highlighted
  - **Trigger Setup**:
      - **Trigger**: Cause a manual trigger. Has no effect unless
        trigger source is set to Manual

      - **Offset**: Number of cycles to wait before starting glitch
        pulses
      - **Repeat**: Number of consecutive pulses to generate
  - **Output Status**
      - **VCC**: Status of glitching MOSFETs. Shows warning sign if VCC
        glitching is enabled

      - **Cnt**: Total number of glitch pulses generated

## Errata

### VCC Transistors Get Stuck on During Glitching

When voltage glitching, the glitch transistor in use can get stuck on. This keeps the
target's VCC rail pulled low until the transistor is deactivated via `scope.io.glitch_lp` or `scope.io.glitch_hp`.

#### Workaround

Toggle `scope.io.glitch_lp`/`scope.io.glitch_hp` after each glitch attempt. `scope.io.vglitch_reset()` can be called
to do this.

### offset_fine and width_fine are write-only

`scope.glitch.offset_fine` and `scope.glitch.width_fine` are write-only and reads will always return 0.

#### Workaround

Store values written to these properties separately.
