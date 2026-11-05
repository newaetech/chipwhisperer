# Overview

This folder contains tests for ChipWhisperer capture device's serial module (target.read/write), as well
as the same interface for the CW310 and CW340.

Currently, capture tests rely on having a USB-UART device hooked up to the TX/RX pins of a CW313:
* GND <-> GND
* TX -> GPIO1
* RX <- GPIO2

FTDI VCP drivers need to be installed on Windows prior to these tests.

Tests are parameterized with a variety of baud rates, message lengths, and serial settings.

## Tests

### test_sw_flow_control

Tests software flow control (XON/XOFF). Can rarely fail.

### test_cdc_rx

Tests receiving data on the ChipWhisperer's CDC USB interface. Shouldn't fail.

### test_cdc_tx

Tests sending data on the ChipWhisperer's CDC USB interface. Shouldn't fail.

### test_sam_rx

Tests receiving data on the ChipWhisperer's target.read() interface. Also tests consistency of
overrun. Shouldn't fail.

### test_sam_tx

Tests sending data on the ChipWhisperer's target.send() interface. Shouldn't fail

## Future Tests

### CW310 tests

#### Multi interface TXRX tests

Replicate above tests on multiple interfaces of CW310

#### Serial Break Test

Test CDC serial break works

### target tests

#### SAM4S Loopback Tests

TX and RX tests using SAM4S in loopback mode

#### ICE40 Programming Test

Special test to program ICE40 firmware, as this has been broken by serial changes in the past

#### test_high_load

Tests communication when large messages are sent when transferring large amounts of capture data. Aims
to test https://github.com/newaetech/chipwhisperer/issues/565

### test_stream_txrx

Tests communication when streaming on Husky

### test_cdc_stream_txrx

Tests communication when streaming on Husky and using CDC mode. Aims to catch issues with CDC mode being in main()

### test_cdc_swflow_txrx

Tests communication when using software flow control and CDC mode.

### test_swflow_stream_txrx

Tests communication when using software flow control and stream mode.

## Troubleshooting/Notes

* These tests haven't been run on Linux yet, so performance may differ here (esp in regards to CDC, potentially with test_sam_rx delay).
* The tigard<->Husky interface seems to max out around 4Mbps, so tests above this baud rate (--highbaud) can occasionally fail
* Reading the DMA buffer requires disabling DMA reads, so characters sent while this is happening may be lost. This seems to start happening around 2Mbps, so >1.5MBps cdc reads are considered unreliable (--highbaud)
* Testing overrun consistency requires us to send data and wait until it is fully received. The only way we can do this is is by delaying (at least with Tigard). The currenty delay should be reliable up to 4MBps (max before --highbaud), but you can try changing this if you run into issues.