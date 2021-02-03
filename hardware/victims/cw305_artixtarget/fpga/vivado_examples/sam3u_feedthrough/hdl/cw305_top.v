/* 
ChipWhisperer Artix Target - Example of connections between example registers
and rest of system.

Copyright (c) 2016-2020, NewAE Technology Inc.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted without restriction. Note that modules within
the project may have additional restrictions, please carefully inspect
additional licenses.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of NewAE Technology Inc.
*/

`timescale 1ns / 1ps
`default_nettype none 

module cw305_top #(
    parameter pBYTECNT_SIZE = 7,
    parameter pADDR_WIDTH = pBYTECNT_SIZE+4
)(
    // USB Interface: from SAM3U
    input  wire                         usb_clk,              // Clock
    inout  wire [7:0]                   sam3u_usb_data,       // Data for write/read
    input  wire [pADDR_WIDTH-1:0]       sam3u_usb_addr,       // Address
    input  wire                         sam3u_usb_rdn,        // !RD, low when addr valid for read
    input  wire                         sam3u_usb_wrn,        // !WR, low when data+addr valid for write
    input  wire                         sam3u_usb_cen,        // !CE, active low chip enable
    //input  wire                         sam3u_usb_trigger,    // High when trigger requested

    // USB Interface: to external target board
    output wire                         ext_usb_clk,        // Clock
    inout  wire [7:0]                   ext_usb_data,       // Data for write/read
    output wire [pADDR_WIDTH-1:0]       ext_usb_addr,       // Address
    output wire                         ext_usb_rdn,        // !RD, low when addr valid for read
    output wire                         ext_usb_wrn,        // !WR, low when data+addr valid for write
    output wire                         ext_usb_cen,        // !CE, active low chip enable
    //output wire                         ext_usb_trigger,    // High when trigger requested

    // Buttons/LEDs on Board
    input wire                          j16_sel,        // DIP switch J16
    input wire                          k16_sel,        // DIP switch K16
    input wire                          k15_sel,        // DIP switch K15
    input wire                          l14_sel,        // DIP Switch L14
    input wire                          pushbutton,     // Pushbutton SW4, connected to R1, used here as reset
    output wire                         led1,           // red LED
    output wire                         led2,           // green LED
    output wire                         led3,           // blue LED

    // PLL
    input wire                          pll_clk1,       //PLL Clock Channel #1
    //input wire                        pll_clk2,       //PLL Clock Channel #2 (unused in this example)

    // 20-Pin Connector Stuff
    input  wire                         ext_tio_trigger_in,
    output wire                         tio_trigger_out,
    output wire                         tio_clkout,
    input  wire                         tio_clkin
);

    wire usb_clk_buf;
    wire crypt_clk;    

    wire resetn = pushbutton;
    wire reset = !resetn;

    // Can't route the inout data bus directly through!
    // write data from host to FPGA:
    assign ext_usb_data = sam3u_usb_wrn? 8'bz : sam3u_usb_data;

    // read data from FPGA to host:
    assign sam3u_usb_data = sam3u_usb_rdn? 8'bz: ext_usb_data;


    assign ext_usb_clk = usb_clk_buf;
    assign ext_usb_addr = sam3u_usb_addr;
    assign ext_usb_rdn = sam3u_usb_rdn;
    assign ext_usb_wrn = sam3u_usb_wrn;
    assign ext_usb_cen = sam3u_usb_cen;
    //assign ext_usb_trigger = sam3u_usb_trigger;

    assign tio_trigger_out = ext_tio_trigger_in;

    // USB CLK Heartbeat
    reg [24:0] usb_timer_heartbeat;
    always @(posedge usb_clk_buf) usb_timer_heartbeat <= usb_timer_heartbeat +  25'd1;
    assign led1 = usb_timer_heartbeat[24];

    // CRYPT CLK Heartbeat
    reg [22:0] crypt_clk_heartbeat;
    always @(posedge crypt_clk) crypt_clk_heartbeat <= crypt_clk_heartbeat +  23'd1;
    assign led2 = crypt_clk_heartbeat[22];


    clocks U_clocks (
       .usb_clk                 (usb_clk),
       .usb_clk_buf             (usb_clk_buf),
       .I_j16_sel               (j16_sel),
       .I_k16_sel               (k16_sel),
       .I_clock_reg             (5'b0),                 // unused
       .I_cw_clkin              (tio_clkin),
       .I_pll_clk1              (pll_clk1),
       .O_cw_clkout             (tio_clkout),
       .O_cryptoclk             (crypt_clk)
    );


   `ifndef __ICARUS__
       ila_0 U_ila (
	.clk            (usb_clk_buf),                  // input wire clk
	.probe0         (sam3u_usb_data),               // input wire [7:0]  probe0  
	.probe1         (ext_usb_data),                 // input wire [7:0]  probe1 
	.probe2         (sam3u_usb_cen),                // input wire [0:0]  probe2 
	.probe3         (sam3u_usb_rdn),                // input wire [0:0]  probe3 
	.probe4         (sam3u_usb_wrn),                // input wire [0:0]  probe4 
	.probe5         (1'b0),                         // input wire [0:0]  probe5 
	.probe6         (1'b0),                         // input wire [0:0]  probe6 
	.probe7         (1'b0)                          // input wire [0:0]  probe7 
       );
   `endif


endmodule

`default_nettype wire

