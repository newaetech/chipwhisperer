
######## HARDWARE ON BOARD

#LEDs
set_property DRIVE 8 [get_ports led1]
set_property PACKAGE_PIN T2 [get_ports led1]

set_property DRIVE 8 [get_ports led2]
set_property PACKAGE_PIN T3 [get_ports led2]

set_property DRIVE 8 [get_ports led3]
set_property PACKAGE_PIN T4 [get_ports led3]

#Switch's
set_property PACKAGE_PIN J16 [get_ports j16_sel]
set_property PACKAGE_PIN K16 [get_ports k16_sel]
set_property PACKAGE_PIN L14 [get_ports l14_sel]
set_property PACKAGE_PIN K15 [get_ports k15_sel]
set_property PACKAGE_PIN R1 [get_ports pushbutton]

#PLL Connections
set_property PACKAGE_PIN N13 [get_ports pll_clk1]
#set_property PACKAGE_PIN E12 [get_ports pll_clk2]

######## 20-Pin Connector

set_property PACKAGE_PIN T14 [get_ports tio_trigger_out]

set_property PACKAGE_PIN M16 [get_ports tio_clkout]

set_property PACKAGE_PIN N14 [get_ports tio_clkin]

####### USB Connector: SAM3U interface

set_property PACKAGE_PIN F5 [get_ports usb_clk]

set_property IOSTANDARD LVCMOS33 [get_ports *]
set_property PACKAGE_PIN A7 [get_ports {sam3u_usb_data[0]}]
set_property PACKAGE_PIN B6 [get_ports {sam3u_usb_data[1]}]
set_property PACKAGE_PIN D3 [get_ports {sam3u_usb_data[2]}]
set_property PACKAGE_PIN E3 [get_ports {sam3u_usb_data[3]}]
set_property PACKAGE_PIN F3 [get_ports {sam3u_usb_data[4]}]
set_property PACKAGE_PIN B5 [get_ports {sam3u_usb_data[5]}]
set_property PACKAGE_PIN K1 [get_ports {sam3u_usb_data[6]}]
set_property PACKAGE_PIN K2 [get_ports {sam3u_usb_data[7]}]

set_property PACKAGE_PIN F4 [get_ports {sam3u_usb_addr[0]}]
set_property PACKAGE_PIN G5 [get_ports {sam3u_usb_addr[1]}]
set_property PACKAGE_PIN J1 [get_ports {sam3u_usb_addr[2]}]
set_property PACKAGE_PIN H1 [get_ports {sam3u_usb_addr[3]}]
set_property PACKAGE_PIN H2 [get_ports {sam3u_usb_addr[4]}]
set_property PACKAGE_PIN G1 [get_ports {sam3u_usb_addr[5]}]
set_property PACKAGE_PIN G2 [get_ports {sam3u_usb_addr[6]}]
set_property PACKAGE_PIN F2 [get_ports {sam3u_usb_addr[7]}]
set_property PACKAGE_PIN E1 [get_ports {sam3u_usb_addr[8]}]
set_property PACKAGE_PIN E2 [get_ports {sam3u_usb_addr[9]}]
set_property PACKAGE_PIN D1 [get_ports {sam3u_usb_addr[10]}]

set_property PACKAGE_PIN A4 [get_ports sam3u_usb_rdn]
set_property PACKAGE_PIN C2 [get_ports sam3u_usb_wrn]
set_property PACKAGE_PIN A3 [get_ports sam3u_usb_cen]

#set_property PACKAGE_PIN A5 [get_ports sam3u_usb_trigger]

####### target USB interface (40-pin header, JP3)
# count | header pin # | PCB name  | FPGA pin
# ------+--------------+-----------+---------
#  0    |          5   |       IO5 | A12
#  1    |          6   |       IO6 | B12
#  2    |          7   |       IO7 | A14
#  3    |          8   |       IO8 | A13
#  4    |          9   |       IO9 | A15
#  5    |         10   |      IO10 | B15
#  6    |         11   |      IO11 | C12
#  7    |         12   |      IO12 | C11
#  8    |         13   |      IO13 | B14
#  9    |         14   |      IO14 | C14
# 10    |         15   |      IO15 | B16
# 11    |         16   |      IO16 | C16
# 12    |         17   |      IO17 | C13
# 13    |         18   |      IO18 | D13
# 14    |         23   |      IO23 | D15
# 15    |         24   |      IO24 | D14
# 16    |         25   |      IO25 | E15
# 17    |         26   |      IO26 | D16
# 18    |         27   |      IO27 | E13
# 19    |         28   |      IO28 | E16
# 20    |         29   |      IO29 | F15
# 21    |         30   |      IO30 | F12
# 22    |         31   |      IO31 | E11
# 23    |         32   |      IO32 | F13
# ------+--------------+-----------+---------
# 24    |         33   |      TIO4 | T14
# 25    |         34   |    EMCCLK | M15
# 26    |         37   |     IOD_P | H16
# 27    |         38   |     IOD_N | G16

# physical arrangement:
# header pin # | PCB name  | FPGA pin | header pin # | PCB name  | FPGA pin | 
# -------------+-----------+----------+--------------+-----------+----------+-
#          5   |       IO5 | A12      |          6   |       IO6 | B12      |
#          7   |       IO7 | A14      |          8   |       IO8 | A13      |
#          9   |       IO9 | A15      |         10   |      IO10 | B15      |
#         11   |      IO11 | C12      |         12   |      IO12 | C11      |
#         13   |      IO13 | B14      |         14   |      IO14 | C14      |
#         15   |      IO15 | B16      |         16   |      IO16 | C16      |
#         17   |      IO17 | C13      |         18   |      IO18 | D13      |
# -------------+-----------+----------+--------------+-----------+----------+-
#         NC   |        NC | NC       |         NC   |        NC | NC       | 
#         NC   |        NC | NC       |         NC   |        NC | NC       | 
# -------------+-----------+----------+--------------+-----------+----------+-
#         23   |      IO23 | D15      |         24   |      IO24 | D14      |
#         25   |      IO25 | E15      |         26   |      IO26 | D16      |
#         27   |      IO27 | E13      |         28   |      IO28 | E16      |
#         29   |      IO29 | F15      |         30   |      IO30 | F12      |
#         31   |      IO31 | E11      |         32   |      IO32 | F13      |
# -------------+-----------+----------+--------------+-----------+----------+-


# to Genesys2 JB:
set_property PACKAGE_PIN A12 [get_ports {ext_usb_data[3]}]
set_property PACKAGE_PIN A14 [get_ports {ext_usb_data[2]}]
set_property PACKAGE_PIN A15 [get_ports {ext_usb_data[1]}]
set_property PACKAGE_PIN C12 [get_ports {ext_usb_data[0]}]

set_property PACKAGE_PIN B12 [get_ports {ext_usb_data[7]}]
set_property PACKAGE_PIN A13 [get_ports {ext_usb_data[6]}]
set_property PACKAGE_PIN B15 [get_ports {ext_usb_data[5]}]
set_property PACKAGE_PIN C11 [get_ports {ext_usb_data[4]}]

# to Genesys2 JA:
set_property PACKAGE_PIN D15 [get_ports {ext_usb_wrn }]
set_property PACKAGE_PIN E15 [get_ports {ext_usb_rdn }]
set_property PACKAGE_PIN E13 [get_ports {ext_usb_cen }]
set_property PACKAGE_PIN F15 [get_ports {ext_usb_clk }]

set_property PACKAGE_PIN D14 [get_ports {ext_usb_addr[10]}]
set_property PACKAGE_PIN D16 [get_ports {ext_usb_addr[9]}]
set_property PACKAGE_PIN E16 [get_ports {ext_usb_addr[8]}]
set_property PACKAGE_PIN F12 [get_ports {ext_usb_addr[7]}]

# between JA/JB, to Genesys2 JC:
set_property PACKAGE_PIN B14 [get_ports {ext_usb_addr[0]}]; # white
set_property PACKAGE_PIN B16 [get_ports {ext_usb_addr[1]}]; # red
set_property PACKAGE_PIN C13 [get_ports {ext_usb_addr[2]}]; # yellow

set_property PACKAGE_PIN C14 [get_ports {ext_usb_addr[3]}]; # black
set_property PACKAGE_PIN C16 [get_ports {ext_usb_addr[4]}]; # green
set_property PACKAGE_PIN D13 [get_ports {ext_usb_addr[5]}]; # blue

set_property PACKAGE_PIN E11 [get_ports {ext_usb_addr[6]}];      # white
set_property PACKAGE_PIN F13 [get_ports {ext_tio_trigger_in}];   # yellow


create_clock -period 10.000 -name usb_clk -waveform {0.000 5.000} [get_nets usb_clk]
create_clock -period 10.000 -name tio_clkin -waveform {0.000 5.000} [get_nets tio_clkin]
create_clock -period 10.000 -name pll_clk1 -waveform {0.000 5.000} [get_nets pll_clk1]

# both input clocks have same properties so there is no point in doing timing analysis for both:
set_case_analysis 1 [get_pins U_clocks/CCLK_MUX/S]

# No spec for these, seems sensible:
set_input_delay -clock usb_clk -add_delay 2.000 [get_ports sam3u_usb_addr]
set_input_delay -clock usb_clk -add_delay 2.000 [get_ports sam3u_usb_data]
#set_input_delay -clock usb_clk -add_delay 2.000 [get_ports sam3u_usb_trigger]
set_input_delay -clock usb_clk -add_delay 2.000 [get_ports sam3u_usb_cen]
set_input_delay -clock usb_clk -add_delay 2.000 [get_ports sam3u_usb_rdn]
set_input_delay -clock usb_clk -add_delay 2.000 [get_ports sam3u_usb_wrn]

set_input_delay -clock usb_clk -add_delay 0.000 [get_ports j16_sel]
set_input_delay -clock usb_clk -add_delay 0.000 [get_ports k16_sel]
set_input_delay -clock [get_clocks usb_clk] -add_delay 0.500 [get_ports pushbutton]

set_output_delay -clock usb_clk 0.000 [get_ports led1]
set_output_delay -clock usb_clk 0.000 [get_ports led2]
set_output_delay -clock usb_clk 0.000 [get_ports led3]
set_output_delay -clock usb_clk 0.000 [get_ports sam3u_usb_data]
set_output_delay -clock usb_clk 0.000 [get_ports tio_trigger_out]
set_output_delay -clock usb_clk 0.000 [get_ports tio_clkout]
set_false_path -to [get_ports led1]
set_false_path -to [get_ports led2]
set_false_path -to [get_ports led3]
set_false_path -to [get_ports sam3u_usb_data]
set_false_path -to [get_ports tio_trigger_out]
set_false_path -to [get_ports tio_clkout]

set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

