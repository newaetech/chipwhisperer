# Overview

This folder contains tests for ChipWhisperer capture device's serial module (target.read/write), as well
as the same interface for the CW310 and CW340.

Tests are parameterized with a variety of baud rates, message lengths, and serial settings.

Tests will automatically detect what hardware is connected and run appropriate tests. Before firmware
with serial changes it's recommended that you run and pass the full test suite on the SAM4S and CW310.

The Tigard tests work on TX and RX separately and can help narrow down issues, but aren't required for pushing
new code.

## Tests Configurations

### SAM4S

Requires a ChipWhisperer Capture device connected to a CW312 SAM4S target. No other hardware is required.

This test configuration uses the SAM4S in loopback mode, so writes to the SAM4S are mirrored back to the capture device.
As such, TX and RX tests are done in the same test.

#### test_sam_stream

Tests the vendor interface while streaming ADC data.

#### test_cdc_stream

Tests the CDC interface while streaming ADC data. This one may fail

#### test_cdc_rapid

Tests many CDC messages of lower lengths (1024 bytes) being sent.

#### test_sam

Tests TX/RX over the vendor interface. Tests above the RX buffer size (the last test) test the consistency
of overruns

#### test_high_stress

Tests serial communications while capture is ongoing. Uses different firmware, so this test should run last.
There may be some weirdness associated with reprogramming the firmware during tests, so be careful
about making changes to this test.

Aims to catch https://github.com/newaetech/chipwhisperer/issues/565

### CW310

Requires a CW310 Bergen Board. Currently only supports the K160 FPGA.

This test configuration sets the CW310's serial pins as loopback, so writes to the CW310 are mirrored back to the capture device.
As such, TX and RX tests are done in the same test.

Tests both USART0 and USART1.

#### test_tx_break

Tests TX break (settings TX pin low) over CDC.

#### test_sw_flow_control

Tests software flow control (XON XOFF). Limited test, as sending XOFF disables TX, so we can no longer
send XON to turn this off.

#### test_cdc_rapid

Tests many CDC messages of lower lengths (1024 bytes) being sent.

#### test_sam

Tests TX/RX over the vendor interface. Tests above the RX buffer size (the last test) test the consistency
of overruns

### Tigard

Requires a ChipWhisperer Capture device connected to a CW312. A Tigard USB-UART device must be connected as follows:
* GND <-> GND
* TX -> GPIO1
* RX <- GPIO2

Has separate reads and writes (as opposed to loopback)

## Tests

### test_sw_flow_control

Tests software flow control (XON/XOFF). 

### test_cdc_rx

Tests receiving data on the ChipWhisperer's CDC USB interface.

### test_cdc_tx

Tests sending data on the ChipWhisperer's CDC USB interface.

### test_sam_rx

Tests receiving data on the ChipWhisperer's target.read() interface. Also tests consistency of
overrun. 

### test_sam_tx

Tests sending data on the ChipWhisperer's target.send() interface. 

## Future Tests

#### ICE40 Programming Test

Special test to program ICE40 firmware, as this has been broken by serial changes in the past

## Troubleshooting/Notes

* These tests haven't been run on Linux yet, so performance may differ here (esp in regards to CDC, potentially with test_sam_rx delay).
* The tigard<->Husky interface seems to max out around 4Mbps, so tests above this baud rate (--highbaud) can occasionally fail
* Reading the DMA buffer requires disabling DMA reads, so characters sent while this is happening may be lost. This seems to start happening around 2Mbps, so >1.5MBps cdc reads are considered unreliable (--highbaud)
* Long writes (>1024 bytes) to CDC can fail
* Testing overrun consistency requires us to send data and wait until it is fully received. The only way we can do this is is by delaying (at least with Tigard). The currenty delay should be reliable up to 4MBps (max before --highbaud), but you can try changing this if you run into issues.