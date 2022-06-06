// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.1 (win64) Build 2552052 Fri May 24 14:49:42 MDT 2019
// Date        : Fri Mar 19 13:37:01 2021
// Host        : qed running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ dbg_hub_sim_netlist.v
// Design      : dbg_hub
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a100tftg256-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "dbg_hub,xsdbm_v3_0_0_xsdbm,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* X_CORE_INFO = "xsdbm_v3_0_0_xsdbm,Vivado 2019.1" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (sl_iport0_o,
    sl_iport1_o,
    sl_oport0_i,
    sl_oport1_i,
    clk);
  output [36:0]sl_iport0_o;
  output [36:0]sl_iport1_o;
  input [16:0]sl_oport0_i;
  input [16:0]sl_oport1_i;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 signal_clock CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME signal_clock, FREQ_HZ 100000000, PHASE 0.000, INSERT_VIP 0" *) input clk;

  wire clk;
  wire [36:0]sl_iport0_o;
  wire [36:0]sl_iport1_o;
  wire [16:0]sl_oport0_i;
  wire [16:0]sl_oport1_i;
  wire NLW_inst_bscanid_en_0_UNCONNECTED;
  wire NLW_inst_bscanid_en_1_UNCONNECTED;
  wire NLW_inst_bscanid_en_10_UNCONNECTED;
  wire NLW_inst_bscanid_en_11_UNCONNECTED;
  wire NLW_inst_bscanid_en_12_UNCONNECTED;
  wire NLW_inst_bscanid_en_13_UNCONNECTED;
  wire NLW_inst_bscanid_en_14_UNCONNECTED;
  wire NLW_inst_bscanid_en_15_UNCONNECTED;
  wire NLW_inst_bscanid_en_2_UNCONNECTED;
  wire NLW_inst_bscanid_en_3_UNCONNECTED;
  wire NLW_inst_bscanid_en_4_UNCONNECTED;
  wire NLW_inst_bscanid_en_5_UNCONNECTED;
  wire NLW_inst_bscanid_en_6_UNCONNECTED;
  wire NLW_inst_bscanid_en_7_UNCONNECTED;
  wire NLW_inst_bscanid_en_8_UNCONNECTED;
  wire NLW_inst_bscanid_en_9_UNCONNECTED;
  wire NLW_inst_capture_0_UNCONNECTED;
  wire NLW_inst_capture_1_UNCONNECTED;
  wire NLW_inst_capture_10_UNCONNECTED;
  wire NLW_inst_capture_11_UNCONNECTED;
  wire NLW_inst_capture_12_UNCONNECTED;
  wire NLW_inst_capture_13_UNCONNECTED;
  wire NLW_inst_capture_14_UNCONNECTED;
  wire NLW_inst_capture_15_UNCONNECTED;
  wire NLW_inst_capture_2_UNCONNECTED;
  wire NLW_inst_capture_3_UNCONNECTED;
  wire NLW_inst_capture_4_UNCONNECTED;
  wire NLW_inst_capture_5_UNCONNECTED;
  wire NLW_inst_capture_6_UNCONNECTED;
  wire NLW_inst_capture_7_UNCONNECTED;
  wire NLW_inst_capture_8_UNCONNECTED;
  wire NLW_inst_capture_9_UNCONNECTED;
  wire NLW_inst_drck_0_UNCONNECTED;
  wire NLW_inst_drck_1_UNCONNECTED;
  wire NLW_inst_drck_10_UNCONNECTED;
  wire NLW_inst_drck_11_UNCONNECTED;
  wire NLW_inst_drck_12_UNCONNECTED;
  wire NLW_inst_drck_13_UNCONNECTED;
  wire NLW_inst_drck_14_UNCONNECTED;
  wire NLW_inst_drck_15_UNCONNECTED;
  wire NLW_inst_drck_2_UNCONNECTED;
  wire NLW_inst_drck_3_UNCONNECTED;
  wire NLW_inst_drck_4_UNCONNECTED;
  wire NLW_inst_drck_5_UNCONNECTED;
  wire NLW_inst_drck_6_UNCONNECTED;
  wire NLW_inst_drck_7_UNCONNECTED;
  wire NLW_inst_drck_8_UNCONNECTED;
  wire NLW_inst_drck_9_UNCONNECTED;
  wire NLW_inst_reset_0_UNCONNECTED;
  wire NLW_inst_reset_1_UNCONNECTED;
  wire NLW_inst_reset_10_UNCONNECTED;
  wire NLW_inst_reset_11_UNCONNECTED;
  wire NLW_inst_reset_12_UNCONNECTED;
  wire NLW_inst_reset_13_UNCONNECTED;
  wire NLW_inst_reset_14_UNCONNECTED;
  wire NLW_inst_reset_15_UNCONNECTED;
  wire NLW_inst_reset_2_UNCONNECTED;
  wire NLW_inst_reset_3_UNCONNECTED;
  wire NLW_inst_reset_4_UNCONNECTED;
  wire NLW_inst_reset_5_UNCONNECTED;
  wire NLW_inst_reset_6_UNCONNECTED;
  wire NLW_inst_reset_7_UNCONNECTED;
  wire NLW_inst_reset_8_UNCONNECTED;
  wire NLW_inst_reset_9_UNCONNECTED;
  wire NLW_inst_runtest_0_UNCONNECTED;
  wire NLW_inst_runtest_1_UNCONNECTED;
  wire NLW_inst_runtest_10_UNCONNECTED;
  wire NLW_inst_runtest_11_UNCONNECTED;
  wire NLW_inst_runtest_12_UNCONNECTED;
  wire NLW_inst_runtest_13_UNCONNECTED;
  wire NLW_inst_runtest_14_UNCONNECTED;
  wire NLW_inst_runtest_15_UNCONNECTED;
  wire NLW_inst_runtest_2_UNCONNECTED;
  wire NLW_inst_runtest_3_UNCONNECTED;
  wire NLW_inst_runtest_4_UNCONNECTED;
  wire NLW_inst_runtest_5_UNCONNECTED;
  wire NLW_inst_runtest_6_UNCONNECTED;
  wire NLW_inst_runtest_7_UNCONNECTED;
  wire NLW_inst_runtest_8_UNCONNECTED;
  wire NLW_inst_runtest_9_UNCONNECTED;
  wire NLW_inst_sel_0_UNCONNECTED;
  wire NLW_inst_sel_1_UNCONNECTED;
  wire NLW_inst_sel_10_UNCONNECTED;
  wire NLW_inst_sel_11_UNCONNECTED;
  wire NLW_inst_sel_12_UNCONNECTED;
  wire NLW_inst_sel_13_UNCONNECTED;
  wire NLW_inst_sel_14_UNCONNECTED;
  wire NLW_inst_sel_15_UNCONNECTED;
  wire NLW_inst_sel_2_UNCONNECTED;
  wire NLW_inst_sel_3_UNCONNECTED;
  wire NLW_inst_sel_4_UNCONNECTED;
  wire NLW_inst_sel_5_UNCONNECTED;
  wire NLW_inst_sel_6_UNCONNECTED;
  wire NLW_inst_sel_7_UNCONNECTED;
  wire NLW_inst_sel_8_UNCONNECTED;
  wire NLW_inst_sel_9_UNCONNECTED;
  wire NLW_inst_shift_0_UNCONNECTED;
  wire NLW_inst_shift_1_UNCONNECTED;
  wire NLW_inst_shift_10_UNCONNECTED;
  wire NLW_inst_shift_11_UNCONNECTED;
  wire NLW_inst_shift_12_UNCONNECTED;
  wire NLW_inst_shift_13_UNCONNECTED;
  wire NLW_inst_shift_14_UNCONNECTED;
  wire NLW_inst_shift_15_UNCONNECTED;
  wire NLW_inst_shift_2_UNCONNECTED;
  wire NLW_inst_shift_3_UNCONNECTED;
  wire NLW_inst_shift_4_UNCONNECTED;
  wire NLW_inst_shift_5_UNCONNECTED;
  wire NLW_inst_shift_6_UNCONNECTED;
  wire NLW_inst_shift_7_UNCONNECTED;
  wire NLW_inst_shift_8_UNCONNECTED;
  wire NLW_inst_shift_9_UNCONNECTED;
  wire NLW_inst_tck_0_UNCONNECTED;
  wire NLW_inst_tck_1_UNCONNECTED;
  wire NLW_inst_tck_10_UNCONNECTED;
  wire NLW_inst_tck_11_UNCONNECTED;
  wire NLW_inst_tck_12_UNCONNECTED;
  wire NLW_inst_tck_13_UNCONNECTED;
  wire NLW_inst_tck_14_UNCONNECTED;
  wire NLW_inst_tck_15_UNCONNECTED;
  wire NLW_inst_tck_2_UNCONNECTED;
  wire NLW_inst_tck_3_UNCONNECTED;
  wire NLW_inst_tck_4_UNCONNECTED;
  wire NLW_inst_tck_5_UNCONNECTED;
  wire NLW_inst_tck_6_UNCONNECTED;
  wire NLW_inst_tck_7_UNCONNECTED;
  wire NLW_inst_tck_8_UNCONNECTED;
  wire NLW_inst_tck_9_UNCONNECTED;
  wire NLW_inst_tdi_0_UNCONNECTED;
  wire NLW_inst_tdi_1_UNCONNECTED;
  wire NLW_inst_tdi_10_UNCONNECTED;
  wire NLW_inst_tdi_11_UNCONNECTED;
  wire NLW_inst_tdi_12_UNCONNECTED;
  wire NLW_inst_tdi_13_UNCONNECTED;
  wire NLW_inst_tdi_14_UNCONNECTED;
  wire NLW_inst_tdi_15_UNCONNECTED;
  wire NLW_inst_tdi_2_UNCONNECTED;
  wire NLW_inst_tdi_3_UNCONNECTED;
  wire NLW_inst_tdi_4_UNCONNECTED;
  wire NLW_inst_tdi_5_UNCONNECTED;
  wire NLW_inst_tdi_6_UNCONNECTED;
  wire NLW_inst_tdi_7_UNCONNECTED;
  wire NLW_inst_tdi_8_UNCONNECTED;
  wire NLW_inst_tdi_9_UNCONNECTED;
  wire NLW_inst_tdo_UNCONNECTED;
  wire NLW_inst_tms_0_UNCONNECTED;
  wire NLW_inst_tms_1_UNCONNECTED;
  wire NLW_inst_tms_10_UNCONNECTED;
  wire NLW_inst_tms_11_UNCONNECTED;
  wire NLW_inst_tms_12_UNCONNECTED;
  wire NLW_inst_tms_13_UNCONNECTED;
  wire NLW_inst_tms_14_UNCONNECTED;
  wire NLW_inst_tms_15_UNCONNECTED;
  wire NLW_inst_tms_2_UNCONNECTED;
  wire NLW_inst_tms_3_UNCONNECTED;
  wire NLW_inst_tms_4_UNCONNECTED;
  wire NLW_inst_tms_5_UNCONNECTED;
  wire NLW_inst_tms_6_UNCONNECTED;
  wire NLW_inst_tms_7_UNCONNECTED;
  wire NLW_inst_tms_8_UNCONNECTED;
  wire NLW_inst_tms_9_UNCONNECTED;
  wire NLW_inst_update_0_UNCONNECTED;
  wire NLW_inst_update_1_UNCONNECTED;
  wire NLW_inst_update_10_UNCONNECTED;
  wire NLW_inst_update_11_UNCONNECTED;
  wire NLW_inst_update_12_UNCONNECTED;
  wire NLW_inst_update_13_UNCONNECTED;
  wire NLW_inst_update_14_UNCONNECTED;
  wire NLW_inst_update_15_UNCONNECTED;
  wire NLW_inst_update_2_UNCONNECTED;
  wire NLW_inst_update_3_UNCONNECTED;
  wire NLW_inst_update_4_UNCONNECTED;
  wire NLW_inst_update_5_UNCONNECTED;
  wire NLW_inst_update_6_UNCONNECTED;
  wire NLW_inst_update_7_UNCONNECTED;
  wire NLW_inst_update_8_UNCONNECTED;
  wire NLW_inst_update_9_UNCONNECTED;
  wire [31:0]NLW_inst_bscanid_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport100_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport101_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport102_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport103_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport104_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport105_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport106_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport107_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport108_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport109_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport10_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport110_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport111_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport112_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport113_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport114_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport115_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport116_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport117_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport118_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport119_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport11_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport120_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport121_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport122_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport123_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport124_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport125_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport126_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport127_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport128_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport129_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport12_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport130_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport131_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport132_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport133_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport134_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport135_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport136_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport137_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport138_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport139_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport13_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport140_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport141_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport142_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport143_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport144_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport145_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport146_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport147_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport148_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport149_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport14_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport150_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport151_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport152_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport153_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport154_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport155_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport156_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport157_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport158_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport159_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport15_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport160_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport161_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport162_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport163_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport164_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport165_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport166_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport167_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport168_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport169_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport16_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport170_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport171_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport172_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport173_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport174_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport175_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport176_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport177_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport178_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport179_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport17_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport180_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport181_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport182_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport183_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport184_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport185_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport186_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport187_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport188_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport189_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport18_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport190_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport191_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport192_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport193_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport194_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport195_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport196_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport197_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport198_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport199_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport19_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport200_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport201_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport202_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport203_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport204_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport205_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport206_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport207_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport208_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport209_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport20_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport210_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport211_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport212_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport213_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport214_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport215_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport216_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport217_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport218_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport219_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport21_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport220_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport221_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport222_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport223_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport224_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport225_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport226_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport227_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport228_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport229_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport22_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport230_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport231_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport232_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport233_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport234_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport235_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport236_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport237_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport238_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport239_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport23_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport240_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport241_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport242_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport243_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport244_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport245_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport246_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport247_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport248_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport249_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport24_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport250_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport251_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport252_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport253_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport254_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport255_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport25_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport26_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport27_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport28_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport29_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport2_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport30_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport31_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport32_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport33_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport34_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport35_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport36_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport37_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport38_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport39_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport3_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport40_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport41_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport42_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport43_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport44_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport45_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport46_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport47_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport48_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport49_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport4_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport50_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport51_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport52_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport53_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport54_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport55_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport56_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport57_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport58_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport59_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport5_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport60_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport61_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport62_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport63_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport64_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport65_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport66_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport67_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport68_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport69_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport6_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport70_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport71_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport72_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport73_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport74_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport75_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport76_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport77_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport78_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport79_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport7_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport80_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport81_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport82_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport83_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport84_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport85_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport86_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport87_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport88_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport89_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport8_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport90_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport91_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport92_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport93_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport94_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport95_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport96_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport97_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport98_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport99_o_UNCONNECTED;
  wire [0:0]NLW_inst_sl_iport9_o_UNCONNECTED;

  (* C_BSCANID = "32'b00000100100100000000001000100000" *) 
  (* C_BSCAN_MODE = "0" *) 
  (* C_BSCAN_MODE_WITH_CORE = "0" *) 
  (* C_BUILD_REVISION = "0" *) 
  (* C_CLKFBOUT_MULT_F = "10.000000" *) 
  (* C_CLKOUT0_DIVIDE_F = "10.000000" *) 
  (* C_CLK_INPUT_FREQ_HZ = "32'b00010001111000011010001100000000" *) 
  (* C_CORE_MAJOR_VER = "1" *) 
  (* C_CORE_MINOR_ALPHA_VER = "97" *) 
  (* C_CORE_MINOR_VER = "0" *) 
  (* C_CORE_TYPE = "1" *) 
  (* C_DCLK_HAS_RESET = "0" *) 
  (* C_DIVCLK_DIVIDE = "3" *) 
  (* C_ENABLE_CLK_DIVIDER = "0" *) 
  (* C_EN_BSCANID_VEC = "0" *) 
  (* C_EN_INT_SIM = "1" *) 
  (* C_FIFO_STYLE = "SUBCORE" *) 
  (* C_MAJOR_VERSION = "14" *) 
  (* C_MINOR_VERSION = "1" *) 
  (* C_NUM_BSCAN_MASTER_PORTS = "0" *) 
  (* C_TWO_PRIM_MODE = "0" *) 
  (* C_USER_SCAN_CHAIN = "1" *) 
  (* C_USER_SCAN_CHAIN1 = "1" *) 
  (* C_USE_BUFR = "0" *) 
  (* C_USE_EXT_BSCAN = "0" *) 
  (* C_USE_STARTUP_CLK = "0" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* C_XSDB_NUM_SLAVES = "2" *) 
  (* C_XSDB_PERIOD_FRC = "0" *) 
  (* C_XSDB_PERIOD_INT = "10" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_xsdbm inst
       (.bscanid(NLW_inst_bscanid_UNCONNECTED[31:0]),
        .bscanid_0({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_1({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_10({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_11({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_12({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_13({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_14({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_15({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_2({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_3({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_4({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_5({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_6({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_7({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_8({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_9({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .bscanid_en(1'b0),
        .bscanid_en_0(NLW_inst_bscanid_en_0_UNCONNECTED),
        .bscanid_en_1(NLW_inst_bscanid_en_1_UNCONNECTED),
        .bscanid_en_10(NLW_inst_bscanid_en_10_UNCONNECTED),
        .bscanid_en_11(NLW_inst_bscanid_en_11_UNCONNECTED),
        .bscanid_en_12(NLW_inst_bscanid_en_12_UNCONNECTED),
        .bscanid_en_13(NLW_inst_bscanid_en_13_UNCONNECTED),
        .bscanid_en_14(NLW_inst_bscanid_en_14_UNCONNECTED),
        .bscanid_en_15(NLW_inst_bscanid_en_15_UNCONNECTED),
        .bscanid_en_2(NLW_inst_bscanid_en_2_UNCONNECTED),
        .bscanid_en_3(NLW_inst_bscanid_en_3_UNCONNECTED),
        .bscanid_en_4(NLW_inst_bscanid_en_4_UNCONNECTED),
        .bscanid_en_5(NLW_inst_bscanid_en_5_UNCONNECTED),
        .bscanid_en_6(NLW_inst_bscanid_en_6_UNCONNECTED),
        .bscanid_en_7(NLW_inst_bscanid_en_7_UNCONNECTED),
        .bscanid_en_8(NLW_inst_bscanid_en_8_UNCONNECTED),
        .bscanid_en_9(NLW_inst_bscanid_en_9_UNCONNECTED),
        .capture(1'b0),
        .capture_0(NLW_inst_capture_0_UNCONNECTED),
        .capture_1(NLW_inst_capture_1_UNCONNECTED),
        .capture_10(NLW_inst_capture_10_UNCONNECTED),
        .capture_11(NLW_inst_capture_11_UNCONNECTED),
        .capture_12(NLW_inst_capture_12_UNCONNECTED),
        .capture_13(NLW_inst_capture_13_UNCONNECTED),
        .capture_14(NLW_inst_capture_14_UNCONNECTED),
        .capture_15(NLW_inst_capture_15_UNCONNECTED),
        .capture_2(NLW_inst_capture_2_UNCONNECTED),
        .capture_3(NLW_inst_capture_3_UNCONNECTED),
        .capture_4(NLW_inst_capture_4_UNCONNECTED),
        .capture_5(NLW_inst_capture_5_UNCONNECTED),
        .capture_6(NLW_inst_capture_6_UNCONNECTED),
        .capture_7(NLW_inst_capture_7_UNCONNECTED),
        .capture_8(NLW_inst_capture_8_UNCONNECTED),
        .capture_9(NLW_inst_capture_9_UNCONNECTED),
        .clk(clk),
        .drck(1'b0),
        .drck_0(NLW_inst_drck_0_UNCONNECTED),
        .drck_1(NLW_inst_drck_1_UNCONNECTED),
        .drck_10(NLW_inst_drck_10_UNCONNECTED),
        .drck_11(NLW_inst_drck_11_UNCONNECTED),
        .drck_12(NLW_inst_drck_12_UNCONNECTED),
        .drck_13(NLW_inst_drck_13_UNCONNECTED),
        .drck_14(NLW_inst_drck_14_UNCONNECTED),
        .drck_15(NLW_inst_drck_15_UNCONNECTED),
        .drck_2(NLW_inst_drck_2_UNCONNECTED),
        .drck_3(NLW_inst_drck_3_UNCONNECTED),
        .drck_4(NLW_inst_drck_4_UNCONNECTED),
        .drck_5(NLW_inst_drck_5_UNCONNECTED),
        .drck_6(NLW_inst_drck_6_UNCONNECTED),
        .drck_7(NLW_inst_drck_7_UNCONNECTED),
        .drck_8(NLW_inst_drck_8_UNCONNECTED),
        .drck_9(NLW_inst_drck_9_UNCONNECTED),
        .reset(1'b0),
        .reset_0(NLW_inst_reset_0_UNCONNECTED),
        .reset_1(NLW_inst_reset_1_UNCONNECTED),
        .reset_10(NLW_inst_reset_10_UNCONNECTED),
        .reset_11(NLW_inst_reset_11_UNCONNECTED),
        .reset_12(NLW_inst_reset_12_UNCONNECTED),
        .reset_13(NLW_inst_reset_13_UNCONNECTED),
        .reset_14(NLW_inst_reset_14_UNCONNECTED),
        .reset_15(NLW_inst_reset_15_UNCONNECTED),
        .reset_2(NLW_inst_reset_2_UNCONNECTED),
        .reset_3(NLW_inst_reset_3_UNCONNECTED),
        .reset_4(NLW_inst_reset_4_UNCONNECTED),
        .reset_5(NLW_inst_reset_5_UNCONNECTED),
        .reset_6(NLW_inst_reset_6_UNCONNECTED),
        .reset_7(NLW_inst_reset_7_UNCONNECTED),
        .reset_8(NLW_inst_reset_8_UNCONNECTED),
        .reset_9(NLW_inst_reset_9_UNCONNECTED),
        .runtest(1'b0),
        .runtest_0(NLW_inst_runtest_0_UNCONNECTED),
        .runtest_1(NLW_inst_runtest_1_UNCONNECTED),
        .runtest_10(NLW_inst_runtest_10_UNCONNECTED),
        .runtest_11(NLW_inst_runtest_11_UNCONNECTED),
        .runtest_12(NLW_inst_runtest_12_UNCONNECTED),
        .runtest_13(NLW_inst_runtest_13_UNCONNECTED),
        .runtest_14(NLW_inst_runtest_14_UNCONNECTED),
        .runtest_15(NLW_inst_runtest_15_UNCONNECTED),
        .runtest_2(NLW_inst_runtest_2_UNCONNECTED),
        .runtest_3(NLW_inst_runtest_3_UNCONNECTED),
        .runtest_4(NLW_inst_runtest_4_UNCONNECTED),
        .runtest_5(NLW_inst_runtest_5_UNCONNECTED),
        .runtest_6(NLW_inst_runtest_6_UNCONNECTED),
        .runtest_7(NLW_inst_runtest_7_UNCONNECTED),
        .runtest_8(NLW_inst_runtest_8_UNCONNECTED),
        .runtest_9(NLW_inst_runtest_9_UNCONNECTED),
        .sel(1'b0),
        .sel_0(NLW_inst_sel_0_UNCONNECTED),
        .sel_1(NLW_inst_sel_1_UNCONNECTED),
        .sel_10(NLW_inst_sel_10_UNCONNECTED),
        .sel_11(NLW_inst_sel_11_UNCONNECTED),
        .sel_12(NLW_inst_sel_12_UNCONNECTED),
        .sel_13(NLW_inst_sel_13_UNCONNECTED),
        .sel_14(NLW_inst_sel_14_UNCONNECTED),
        .sel_15(NLW_inst_sel_15_UNCONNECTED),
        .sel_2(NLW_inst_sel_2_UNCONNECTED),
        .sel_3(NLW_inst_sel_3_UNCONNECTED),
        .sel_4(NLW_inst_sel_4_UNCONNECTED),
        .sel_5(NLW_inst_sel_5_UNCONNECTED),
        .sel_6(NLW_inst_sel_6_UNCONNECTED),
        .sel_7(NLW_inst_sel_7_UNCONNECTED),
        .sel_8(NLW_inst_sel_8_UNCONNECTED),
        .sel_9(NLW_inst_sel_9_UNCONNECTED),
        .shift(1'b0),
        .shift_0(NLW_inst_shift_0_UNCONNECTED),
        .shift_1(NLW_inst_shift_1_UNCONNECTED),
        .shift_10(NLW_inst_shift_10_UNCONNECTED),
        .shift_11(NLW_inst_shift_11_UNCONNECTED),
        .shift_12(NLW_inst_shift_12_UNCONNECTED),
        .shift_13(NLW_inst_shift_13_UNCONNECTED),
        .shift_14(NLW_inst_shift_14_UNCONNECTED),
        .shift_15(NLW_inst_shift_15_UNCONNECTED),
        .shift_2(NLW_inst_shift_2_UNCONNECTED),
        .shift_3(NLW_inst_shift_3_UNCONNECTED),
        .shift_4(NLW_inst_shift_4_UNCONNECTED),
        .shift_5(NLW_inst_shift_5_UNCONNECTED),
        .shift_6(NLW_inst_shift_6_UNCONNECTED),
        .shift_7(NLW_inst_shift_7_UNCONNECTED),
        .shift_8(NLW_inst_shift_8_UNCONNECTED),
        .shift_9(NLW_inst_shift_9_UNCONNECTED),
        .sl_iport0_o(sl_iport0_o),
        .sl_iport100_o(NLW_inst_sl_iport100_o_UNCONNECTED[0]),
        .sl_iport101_o(NLW_inst_sl_iport101_o_UNCONNECTED[0]),
        .sl_iport102_o(NLW_inst_sl_iport102_o_UNCONNECTED[0]),
        .sl_iport103_o(NLW_inst_sl_iport103_o_UNCONNECTED[0]),
        .sl_iport104_o(NLW_inst_sl_iport104_o_UNCONNECTED[0]),
        .sl_iport105_o(NLW_inst_sl_iport105_o_UNCONNECTED[0]),
        .sl_iport106_o(NLW_inst_sl_iport106_o_UNCONNECTED[0]),
        .sl_iport107_o(NLW_inst_sl_iport107_o_UNCONNECTED[0]),
        .sl_iport108_o(NLW_inst_sl_iport108_o_UNCONNECTED[0]),
        .sl_iport109_o(NLW_inst_sl_iport109_o_UNCONNECTED[0]),
        .sl_iport10_o(NLW_inst_sl_iport10_o_UNCONNECTED[0]),
        .sl_iport110_o(NLW_inst_sl_iport110_o_UNCONNECTED[0]),
        .sl_iport111_o(NLW_inst_sl_iport111_o_UNCONNECTED[0]),
        .sl_iport112_o(NLW_inst_sl_iport112_o_UNCONNECTED[0]),
        .sl_iport113_o(NLW_inst_sl_iport113_o_UNCONNECTED[0]),
        .sl_iport114_o(NLW_inst_sl_iport114_o_UNCONNECTED[0]),
        .sl_iport115_o(NLW_inst_sl_iport115_o_UNCONNECTED[0]),
        .sl_iport116_o(NLW_inst_sl_iport116_o_UNCONNECTED[0]),
        .sl_iport117_o(NLW_inst_sl_iport117_o_UNCONNECTED[0]),
        .sl_iport118_o(NLW_inst_sl_iport118_o_UNCONNECTED[0]),
        .sl_iport119_o(NLW_inst_sl_iport119_o_UNCONNECTED[0]),
        .sl_iport11_o(NLW_inst_sl_iport11_o_UNCONNECTED[0]),
        .sl_iport120_o(NLW_inst_sl_iport120_o_UNCONNECTED[0]),
        .sl_iport121_o(NLW_inst_sl_iport121_o_UNCONNECTED[0]),
        .sl_iport122_o(NLW_inst_sl_iport122_o_UNCONNECTED[0]),
        .sl_iport123_o(NLW_inst_sl_iport123_o_UNCONNECTED[0]),
        .sl_iport124_o(NLW_inst_sl_iport124_o_UNCONNECTED[0]),
        .sl_iport125_o(NLW_inst_sl_iport125_o_UNCONNECTED[0]),
        .sl_iport126_o(NLW_inst_sl_iport126_o_UNCONNECTED[0]),
        .sl_iport127_o(NLW_inst_sl_iport127_o_UNCONNECTED[0]),
        .sl_iport128_o(NLW_inst_sl_iport128_o_UNCONNECTED[0]),
        .sl_iport129_o(NLW_inst_sl_iport129_o_UNCONNECTED[0]),
        .sl_iport12_o(NLW_inst_sl_iport12_o_UNCONNECTED[0]),
        .sl_iport130_o(NLW_inst_sl_iport130_o_UNCONNECTED[0]),
        .sl_iport131_o(NLW_inst_sl_iport131_o_UNCONNECTED[0]),
        .sl_iport132_o(NLW_inst_sl_iport132_o_UNCONNECTED[0]),
        .sl_iport133_o(NLW_inst_sl_iport133_o_UNCONNECTED[0]),
        .sl_iport134_o(NLW_inst_sl_iport134_o_UNCONNECTED[0]),
        .sl_iport135_o(NLW_inst_sl_iport135_o_UNCONNECTED[0]),
        .sl_iport136_o(NLW_inst_sl_iport136_o_UNCONNECTED[0]),
        .sl_iport137_o(NLW_inst_sl_iport137_o_UNCONNECTED[0]),
        .sl_iport138_o(NLW_inst_sl_iport138_o_UNCONNECTED[0]),
        .sl_iport139_o(NLW_inst_sl_iport139_o_UNCONNECTED[0]),
        .sl_iport13_o(NLW_inst_sl_iport13_o_UNCONNECTED[0]),
        .sl_iport140_o(NLW_inst_sl_iport140_o_UNCONNECTED[0]),
        .sl_iport141_o(NLW_inst_sl_iport141_o_UNCONNECTED[0]),
        .sl_iport142_o(NLW_inst_sl_iport142_o_UNCONNECTED[0]),
        .sl_iport143_o(NLW_inst_sl_iport143_o_UNCONNECTED[0]),
        .sl_iport144_o(NLW_inst_sl_iport144_o_UNCONNECTED[0]),
        .sl_iport145_o(NLW_inst_sl_iport145_o_UNCONNECTED[0]),
        .sl_iport146_o(NLW_inst_sl_iport146_o_UNCONNECTED[0]),
        .sl_iport147_o(NLW_inst_sl_iport147_o_UNCONNECTED[0]),
        .sl_iport148_o(NLW_inst_sl_iport148_o_UNCONNECTED[0]),
        .sl_iport149_o(NLW_inst_sl_iport149_o_UNCONNECTED[0]),
        .sl_iport14_o(NLW_inst_sl_iport14_o_UNCONNECTED[0]),
        .sl_iport150_o(NLW_inst_sl_iport150_o_UNCONNECTED[0]),
        .sl_iport151_o(NLW_inst_sl_iport151_o_UNCONNECTED[0]),
        .sl_iport152_o(NLW_inst_sl_iport152_o_UNCONNECTED[0]),
        .sl_iport153_o(NLW_inst_sl_iport153_o_UNCONNECTED[0]),
        .sl_iport154_o(NLW_inst_sl_iport154_o_UNCONNECTED[0]),
        .sl_iport155_o(NLW_inst_sl_iport155_o_UNCONNECTED[0]),
        .sl_iport156_o(NLW_inst_sl_iport156_o_UNCONNECTED[0]),
        .sl_iport157_o(NLW_inst_sl_iport157_o_UNCONNECTED[0]),
        .sl_iport158_o(NLW_inst_sl_iport158_o_UNCONNECTED[0]),
        .sl_iport159_o(NLW_inst_sl_iport159_o_UNCONNECTED[0]),
        .sl_iport15_o(NLW_inst_sl_iport15_o_UNCONNECTED[0]),
        .sl_iport160_o(NLW_inst_sl_iport160_o_UNCONNECTED[0]),
        .sl_iport161_o(NLW_inst_sl_iport161_o_UNCONNECTED[0]),
        .sl_iport162_o(NLW_inst_sl_iport162_o_UNCONNECTED[0]),
        .sl_iport163_o(NLW_inst_sl_iport163_o_UNCONNECTED[0]),
        .sl_iport164_o(NLW_inst_sl_iport164_o_UNCONNECTED[0]),
        .sl_iport165_o(NLW_inst_sl_iport165_o_UNCONNECTED[0]),
        .sl_iport166_o(NLW_inst_sl_iport166_o_UNCONNECTED[0]),
        .sl_iport167_o(NLW_inst_sl_iport167_o_UNCONNECTED[0]),
        .sl_iport168_o(NLW_inst_sl_iport168_o_UNCONNECTED[0]),
        .sl_iport169_o(NLW_inst_sl_iport169_o_UNCONNECTED[0]),
        .sl_iport16_o(NLW_inst_sl_iport16_o_UNCONNECTED[0]),
        .sl_iport170_o(NLW_inst_sl_iport170_o_UNCONNECTED[0]),
        .sl_iport171_o(NLW_inst_sl_iport171_o_UNCONNECTED[0]),
        .sl_iport172_o(NLW_inst_sl_iport172_o_UNCONNECTED[0]),
        .sl_iport173_o(NLW_inst_sl_iport173_o_UNCONNECTED[0]),
        .sl_iport174_o(NLW_inst_sl_iport174_o_UNCONNECTED[0]),
        .sl_iport175_o(NLW_inst_sl_iport175_o_UNCONNECTED[0]),
        .sl_iport176_o(NLW_inst_sl_iport176_o_UNCONNECTED[0]),
        .sl_iport177_o(NLW_inst_sl_iport177_o_UNCONNECTED[0]),
        .sl_iport178_o(NLW_inst_sl_iport178_o_UNCONNECTED[0]),
        .sl_iport179_o(NLW_inst_sl_iport179_o_UNCONNECTED[0]),
        .sl_iport17_o(NLW_inst_sl_iport17_o_UNCONNECTED[0]),
        .sl_iport180_o(NLW_inst_sl_iport180_o_UNCONNECTED[0]),
        .sl_iport181_o(NLW_inst_sl_iport181_o_UNCONNECTED[0]),
        .sl_iport182_o(NLW_inst_sl_iport182_o_UNCONNECTED[0]),
        .sl_iport183_o(NLW_inst_sl_iport183_o_UNCONNECTED[0]),
        .sl_iport184_o(NLW_inst_sl_iport184_o_UNCONNECTED[0]),
        .sl_iport185_o(NLW_inst_sl_iport185_o_UNCONNECTED[0]),
        .sl_iport186_o(NLW_inst_sl_iport186_o_UNCONNECTED[0]),
        .sl_iport187_o(NLW_inst_sl_iport187_o_UNCONNECTED[0]),
        .sl_iport188_o(NLW_inst_sl_iport188_o_UNCONNECTED[0]),
        .sl_iport189_o(NLW_inst_sl_iport189_o_UNCONNECTED[0]),
        .sl_iport18_o(NLW_inst_sl_iport18_o_UNCONNECTED[0]),
        .sl_iport190_o(NLW_inst_sl_iport190_o_UNCONNECTED[0]),
        .sl_iport191_o(NLW_inst_sl_iport191_o_UNCONNECTED[0]),
        .sl_iport192_o(NLW_inst_sl_iport192_o_UNCONNECTED[0]),
        .sl_iport193_o(NLW_inst_sl_iport193_o_UNCONNECTED[0]),
        .sl_iport194_o(NLW_inst_sl_iport194_o_UNCONNECTED[0]),
        .sl_iport195_o(NLW_inst_sl_iport195_o_UNCONNECTED[0]),
        .sl_iport196_o(NLW_inst_sl_iport196_o_UNCONNECTED[0]),
        .sl_iport197_o(NLW_inst_sl_iport197_o_UNCONNECTED[0]),
        .sl_iport198_o(NLW_inst_sl_iport198_o_UNCONNECTED[0]),
        .sl_iport199_o(NLW_inst_sl_iport199_o_UNCONNECTED[0]),
        .sl_iport19_o(NLW_inst_sl_iport19_o_UNCONNECTED[0]),
        .sl_iport1_o(sl_iport1_o),
        .sl_iport200_o(NLW_inst_sl_iport200_o_UNCONNECTED[0]),
        .sl_iport201_o(NLW_inst_sl_iport201_o_UNCONNECTED[0]),
        .sl_iport202_o(NLW_inst_sl_iport202_o_UNCONNECTED[0]),
        .sl_iport203_o(NLW_inst_sl_iport203_o_UNCONNECTED[0]),
        .sl_iport204_o(NLW_inst_sl_iport204_o_UNCONNECTED[0]),
        .sl_iport205_o(NLW_inst_sl_iport205_o_UNCONNECTED[0]),
        .sl_iport206_o(NLW_inst_sl_iport206_o_UNCONNECTED[0]),
        .sl_iport207_o(NLW_inst_sl_iport207_o_UNCONNECTED[0]),
        .sl_iport208_o(NLW_inst_sl_iport208_o_UNCONNECTED[0]),
        .sl_iport209_o(NLW_inst_sl_iport209_o_UNCONNECTED[0]),
        .sl_iport20_o(NLW_inst_sl_iport20_o_UNCONNECTED[0]),
        .sl_iport210_o(NLW_inst_sl_iport210_o_UNCONNECTED[0]),
        .sl_iport211_o(NLW_inst_sl_iport211_o_UNCONNECTED[0]),
        .sl_iport212_o(NLW_inst_sl_iport212_o_UNCONNECTED[0]),
        .sl_iport213_o(NLW_inst_sl_iport213_o_UNCONNECTED[0]),
        .sl_iport214_o(NLW_inst_sl_iport214_o_UNCONNECTED[0]),
        .sl_iport215_o(NLW_inst_sl_iport215_o_UNCONNECTED[0]),
        .sl_iport216_o(NLW_inst_sl_iport216_o_UNCONNECTED[0]),
        .sl_iport217_o(NLW_inst_sl_iport217_o_UNCONNECTED[0]),
        .sl_iport218_o(NLW_inst_sl_iport218_o_UNCONNECTED[0]),
        .sl_iport219_o(NLW_inst_sl_iport219_o_UNCONNECTED[0]),
        .sl_iport21_o(NLW_inst_sl_iport21_o_UNCONNECTED[0]),
        .sl_iport220_o(NLW_inst_sl_iport220_o_UNCONNECTED[0]),
        .sl_iport221_o(NLW_inst_sl_iport221_o_UNCONNECTED[0]),
        .sl_iport222_o(NLW_inst_sl_iport222_o_UNCONNECTED[0]),
        .sl_iport223_o(NLW_inst_sl_iport223_o_UNCONNECTED[0]),
        .sl_iport224_o(NLW_inst_sl_iport224_o_UNCONNECTED[0]),
        .sl_iport225_o(NLW_inst_sl_iport225_o_UNCONNECTED[0]),
        .sl_iport226_o(NLW_inst_sl_iport226_o_UNCONNECTED[0]),
        .sl_iport227_o(NLW_inst_sl_iport227_o_UNCONNECTED[0]),
        .sl_iport228_o(NLW_inst_sl_iport228_o_UNCONNECTED[0]),
        .sl_iport229_o(NLW_inst_sl_iport229_o_UNCONNECTED[0]),
        .sl_iport22_o(NLW_inst_sl_iport22_o_UNCONNECTED[0]),
        .sl_iport230_o(NLW_inst_sl_iport230_o_UNCONNECTED[0]),
        .sl_iport231_o(NLW_inst_sl_iport231_o_UNCONNECTED[0]),
        .sl_iport232_o(NLW_inst_sl_iport232_o_UNCONNECTED[0]),
        .sl_iport233_o(NLW_inst_sl_iport233_o_UNCONNECTED[0]),
        .sl_iport234_o(NLW_inst_sl_iport234_o_UNCONNECTED[0]),
        .sl_iport235_o(NLW_inst_sl_iport235_o_UNCONNECTED[0]),
        .sl_iport236_o(NLW_inst_sl_iport236_o_UNCONNECTED[0]),
        .sl_iport237_o(NLW_inst_sl_iport237_o_UNCONNECTED[0]),
        .sl_iport238_o(NLW_inst_sl_iport238_o_UNCONNECTED[0]),
        .sl_iport239_o(NLW_inst_sl_iport239_o_UNCONNECTED[0]),
        .sl_iport23_o(NLW_inst_sl_iport23_o_UNCONNECTED[0]),
        .sl_iport240_o(NLW_inst_sl_iport240_o_UNCONNECTED[0]),
        .sl_iport241_o(NLW_inst_sl_iport241_o_UNCONNECTED[0]),
        .sl_iport242_o(NLW_inst_sl_iport242_o_UNCONNECTED[0]),
        .sl_iport243_o(NLW_inst_sl_iport243_o_UNCONNECTED[0]),
        .sl_iport244_o(NLW_inst_sl_iport244_o_UNCONNECTED[0]),
        .sl_iport245_o(NLW_inst_sl_iport245_o_UNCONNECTED[0]),
        .sl_iport246_o(NLW_inst_sl_iport246_o_UNCONNECTED[0]),
        .sl_iport247_o(NLW_inst_sl_iport247_o_UNCONNECTED[0]),
        .sl_iport248_o(NLW_inst_sl_iport248_o_UNCONNECTED[0]),
        .sl_iport249_o(NLW_inst_sl_iport249_o_UNCONNECTED[0]),
        .sl_iport24_o(NLW_inst_sl_iport24_o_UNCONNECTED[0]),
        .sl_iport250_o(NLW_inst_sl_iport250_o_UNCONNECTED[0]),
        .sl_iport251_o(NLW_inst_sl_iport251_o_UNCONNECTED[0]),
        .sl_iport252_o(NLW_inst_sl_iport252_o_UNCONNECTED[0]),
        .sl_iport253_o(NLW_inst_sl_iport253_o_UNCONNECTED[0]),
        .sl_iport254_o(NLW_inst_sl_iport254_o_UNCONNECTED[0]),
        .sl_iport255_o(NLW_inst_sl_iport255_o_UNCONNECTED[0]),
        .sl_iport25_o(NLW_inst_sl_iport25_o_UNCONNECTED[0]),
        .sl_iport26_o(NLW_inst_sl_iport26_o_UNCONNECTED[0]),
        .sl_iport27_o(NLW_inst_sl_iport27_o_UNCONNECTED[0]),
        .sl_iport28_o(NLW_inst_sl_iport28_o_UNCONNECTED[0]),
        .sl_iport29_o(NLW_inst_sl_iport29_o_UNCONNECTED[0]),
        .sl_iport2_o(NLW_inst_sl_iport2_o_UNCONNECTED[0]),
        .sl_iport30_o(NLW_inst_sl_iport30_o_UNCONNECTED[0]),
        .sl_iport31_o(NLW_inst_sl_iport31_o_UNCONNECTED[0]),
        .sl_iport32_o(NLW_inst_sl_iport32_o_UNCONNECTED[0]),
        .sl_iport33_o(NLW_inst_sl_iport33_o_UNCONNECTED[0]),
        .sl_iport34_o(NLW_inst_sl_iport34_o_UNCONNECTED[0]),
        .sl_iport35_o(NLW_inst_sl_iport35_o_UNCONNECTED[0]),
        .sl_iport36_o(NLW_inst_sl_iport36_o_UNCONNECTED[0]),
        .sl_iport37_o(NLW_inst_sl_iport37_o_UNCONNECTED[0]),
        .sl_iport38_o(NLW_inst_sl_iport38_o_UNCONNECTED[0]),
        .sl_iport39_o(NLW_inst_sl_iport39_o_UNCONNECTED[0]),
        .sl_iport3_o(NLW_inst_sl_iport3_o_UNCONNECTED[0]),
        .sl_iport40_o(NLW_inst_sl_iport40_o_UNCONNECTED[0]),
        .sl_iport41_o(NLW_inst_sl_iport41_o_UNCONNECTED[0]),
        .sl_iport42_o(NLW_inst_sl_iport42_o_UNCONNECTED[0]),
        .sl_iport43_o(NLW_inst_sl_iport43_o_UNCONNECTED[0]),
        .sl_iport44_o(NLW_inst_sl_iport44_o_UNCONNECTED[0]),
        .sl_iport45_o(NLW_inst_sl_iport45_o_UNCONNECTED[0]),
        .sl_iport46_o(NLW_inst_sl_iport46_o_UNCONNECTED[0]),
        .sl_iport47_o(NLW_inst_sl_iport47_o_UNCONNECTED[0]),
        .sl_iport48_o(NLW_inst_sl_iport48_o_UNCONNECTED[0]),
        .sl_iport49_o(NLW_inst_sl_iport49_o_UNCONNECTED[0]),
        .sl_iport4_o(NLW_inst_sl_iport4_o_UNCONNECTED[0]),
        .sl_iport50_o(NLW_inst_sl_iport50_o_UNCONNECTED[0]),
        .sl_iport51_o(NLW_inst_sl_iport51_o_UNCONNECTED[0]),
        .sl_iport52_o(NLW_inst_sl_iport52_o_UNCONNECTED[0]),
        .sl_iport53_o(NLW_inst_sl_iport53_o_UNCONNECTED[0]),
        .sl_iport54_o(NLW_inst_sl_iport54_o_UNCONNECTED[0]),
        .sl_iport55_o(NLW_inst_sl_iport55_o_UNCONNECTED[0]),
        .sl_iport56_o(NLW_inst_sl_iport56_o_UNCONNECTED[0]),
        .sl_iport57_o(NLW_inst_sl_iport57_o_UNCONNECTED[0]),
        .sl_iport58_o(NLW_inst_sl_iport58_o_UNCONNECTED[0]),
        .sl_iport59_o(NLW_inst_sl_iport59_o_UNCONNECTED[0]),
        .sl_iport5_o(NLW_inst_sl_iport5_o_UNCONNECTED[0]),
        .sl_iport60_o(NLW_inst_sl_iport60_o_UNCONNECTED[0]),
        .sl_iport61_o(NLW_inst_sl_iport61_o_UNCONNECTED[0]),
        .sl_iport62_o(NLW_inst_sl_iport62_o_UNCONNECTED[0]),
        .sl_iport63_o(NLW_inst_sl_iport63_o_UNCONNECTED[0]),
        .sl_iport64_o(NLW_inst_sl_iport64_o_UNCONNECTED[0]),
        .sl_iport65_o(NLW_inst_sl_iport65_o_UNCONNECTED[0]),
        .sl_iport66_o(NLW_inst_sl_iport66_o_UNCONNECTED[0]),
        .sl_iport67_o(NLW_inst_sl_iport67_o_UNCONNECTED[0]),
        .sl_iport68_o(NLW_inst_sl_iport68_o_UNCONNECTED[0]),
        .sl_iport69_o(NLW_inst_sl_iport69_o_UNCONNECTED[0]),
        .sl_iport6_o(NLW_inst_sl_iport6_o_UNCONNECTED[0]),
        .sl_iport70_o(NLW_inst_sl_iport70_o_UNCONNECTED[0]),
        .sl_iport71_o(NLW_inst_sl_iport71_o_UNCONNECTED[0]),
        .sl_iport72_o(NLW_inst_sl_iport72_o_UNCONNECTED[0]),
        .sl_iport73_o(NLW_inst_sl_iport73_o_UNCONNECTED[0]),
        .sl_iport74_o(NLW_inst_sl_iport74_o_UNCONNECTED[0]),
        .sl_iport75_o(NLW_inst_sl_iport75_o_UNCONNECTED[0]),
        .sl_iport76_o(NLW_inst_sl_iport76_o_UNCONNECTED[0]),
        .sl_iport77_o(NLW_inst_sl_iport77_o_UNCONNECTED[0]),
        .sl_iport78_o(NLW_inst_sl_iport78_o_UNCONNECTED[0]),
        .sl_iport79_o(NLW_inst_sl_iport79_o_UNCONNECTED[0]),
        .sl_iport7_o(NLW_inst_sl_iport7_o_UNCONNECTED[0]),
        .sl_iport80_o(NLW_inst_sl_iport80_o_UNCONNECTED[0]),
        .sl_iport81_o(NLW_inst_sl_iport81_o_UNCONNECTED[0]),
        .sl_iport82_o(NLW_inst_sl_iport82_o_UNCONNECTED[0]),
        .sl_iport83_o(NLW_inst_sl_iport83_o_UNCONNECTED[0]),
        .sl_iport84_o(NLW_inst_sl_iport84_o_UNCONNECTED[0]),
        .sl_iport85_o(NLW_inst_sl_iport85_o_UNCONNECTED[0]),
        .sl_iport86_o(NLW_inst_sl_iport86_o_UNCONNECTED[0]),
        .sl_iport87_o(NLW_inst_sl_iport87_o_UNCONNECTED[0]),
        .sl_iport88_o(NLW_inst_sl_iport88_o_UNCONNECTED[0]),
        .sl_iport89_o(NLW_inst_sl_iport89_o_UNCONNECTED[0]),
        .sl_iport8_o(NLW_inst_sl_iport8_o_UNCONNECTED[0]),
        .sl_iport90_o(NLW_inst_sl_iport90_o_UNCONNECTED[0]),
        .sl_iport91_o(NLW_inst_sl_iport91_o_UNCONNECTED[0]),
        .sl_iport92_o(NLW_inst_sl_iport92_o_UNCONNECTED[0]),
        .sl_iport93_o(NLW_inst_sl_iport93_o_UNCONNECTED[0]),
        .sl_iport94_o(NLW_inst_sl_iport94_o_UNCONNECTED[0]),
        .sl_iport95_o(NLW_inst_sl_iport95_o_UNCONNECTED[0]),
        .sl_iport96_o(NLW_inst_sl_iport96_o_UNCONNECTED[0]),
        .sl_iport97_o(NLW_inst_sl_iport97_o_UNCONNECTED[0]),
        .sl_iport98_o(NLW_inst_sl_iport98_o_UNCONNECTED[0]),
        .sl_iport99_o(NLW_inst_sl_iport99_o_UNCONNECTED[0]),
        .sl_iport9_o(NLW_inst_sl_iport9_o_UNCONNECTED[0]),
        .sl_oport0_i(sl_oport0_i),
        .sl_oport100_i(1'b0),
        .sl_oport101_i(1'b0),
        .sl_oport102_i(1'b0),
        .sl_oport103_i(1'b0),
        .sl_oport104_i(1'b0),
        .sl_oport105_i(1'b0),
        .sl_oport106_i(1'b0),
        .sl_oport107_i(1'b0),
        .sl_oport108_i(1'b0),
        .sl_oport109_i(1'b0),
        .sl_oport10_i(1'b0),
        .sl_oport110_i(1'b0),
        .sl_oport111_i(1'b0),
        .sl_oport112_i(1'b0),
        .sl_oport113_i(1'b0),
        .sl_oport114_i(1'b0),
        .sl_oport115_i(1'b0),
        .sl_oport116_i(1'b0),
        .sl_oport117_i(1'b0),
        .sl_oport118_i(1'b0),
        .sl_oport119_i(1'b0),
        .sl_oport11_i(1'b0),
        .sl_oport120_i(1'b0),
        .sl_oport121_i(1'b0),
        .sl_oport122_i(1'b0),
        .sl_oport123_i(1'b0),
        .sl_oport124_i(1'b0),
        .sl_oport125_i(1'b0),
        .sl_oport126_i(1'b0),
        .sl_oport127_i(1'b0),
        .sl_oport128_i(1'b0),
        .sl_oport129_i(1'b0),
        .sl_oport12_i(1'b0),
        .sl_oport130_i(1'b0),
        .sl_oport131_i(1'b0),
        .sl_oport132_i(1'b0),
        .sl_oport133_i(1'b0),
        .sl_oport134_i(1'b0),
        .sl_oport135_i(1'b0),
        .sl_oport136_i(1'b0),
        .sl_oport137_i(1'b0),
        .sl_oport138_i(1'b0),
        .sl_oport139_i(1'b0),
        .sl_oport13_i(1'b0),
        .sl_oport140_i(1'b0),
        .sl_oport141_i(1'b0),
        .sl_oport142_i(1'b0),
        .sl_oport143_i(1'b0),
        .sl_oport144_i(1'b0),
        .sl_oport145_i(1'b0),
        .sl_oport146_i(1'b0),
        .sl_oport147_i(1'b0),
        .sl_oport148_i(1'b0),
        .sl_oport149_i(1'b0),
        .sl_oport14_i(1'b0),
        .sl_oport150_i(1'b0),
        .sl_oport151_i(1'b0),
        .sl_oport152_i(1'b0),
        .sl_oport153_i(1'b0),
        .sl_oport154_i(1'b0),
        .sl_oport155_i(1'b0),
        .sl_oport156_i(1'b0),
        .sl_oport157_i(1'b0),
        .sl_oport158_i(1'b0),
        .sl_oport159_i(1'b0),
        .sl_oport15_i(1'b0),
        .sl_oport160_i(1'b0),
        .sl_oport161_i(1'b0),
        .sl_oport162_i(1'b0),
        .sl_oport163_i(1'b0),
        .sl_oport164_i(1'b0),
        .sl_oport165_i(1'b0),
        .sl_oport166_i(1'b0),
        .sl_oport167_i(1'b0),
        .sl_oport168_i(1'b0),
        .sl_oport169_i(1'b0),
        .sl_oport16_i(1'b0),
        .sl_oport170_i(1'b0),
        .sl_oport171_i(1'b0),
        .sl_oport172_i(1'b0),
        .sl_oport173_i(1'b0),
        .sl_oport174_i(1'b0),
        .sl_oport175_i(1'b0),
        .sl_oport176_i(1'b0),
        .sl_oport177_i(1'b0),
        .sl_oport178_i(1'b0),
        .sl_oport179_i(1'b0),
        .sl_oport17_i(1'b0),
        .sl_oport180_i(1'b0),
        .sl_oport181_i(1'b0),
        .sl_oport182_i(1'b0),
        .sl_oport183_i(1'b0),
        .sl_oport184_i(1'b0),
        .sl_oport185_i(1'b0),
        .sl_oport186_i(1'b0),
        .sl_oport187_i(1'b0),
        .sl_oport188_i(1'b0),
        .sl_oport189_i(1'b0),
        .sl_oport18_i(1'b0),
        .sl_oport190_i(1'b0),
        .sl_oport191_i(1'b0),
        .sl_oport192_i(1'b0),
        .sl_oport193_i(1'b0),
        .sl_oport194_i(1'b0),
        .sl_oport195_i(1'b0),
        .sl_oport196_i(1'b0),
        .sl_oport197_i(1'b0),
        .sl_oport198_i(1'b0),
        .sl_oport199_i(1'b0),
        .sl_oport19_i(1'b0),
        .sl_oport1_i(sl_oport1_i),
        .sl_oport200_i(1'b0),
        .sl_oport201_i(1'b0),
        .sl_oport202_i(1'b0),
        .sl_oport203_i(1'b0),
        .sl_oport204_i(1'b0),
        .sl_oport205_i(1'b0),
        .sl_oport206_i(1'b0),
        .sl_oport207_i(1'b0),
        .sl_oport208_i(1'b0),
        .sl_oport209_i(1'b0),
        .sl_oport20_i(1'b0),
        .sl_oport210_i(1'b0),
        .sl_oport211_i(1'b0),
        .sl_oport212_i(1'b0),
        .sl_oport213_i(1'b0),
        .sl_oport214_i(1'b0),
        .sl_oport215_i(1'b0),
        .sl_oport216_i(1'b0),
        .sl_oport217_i(1'b0),
        .sl_oport218_i(1'b0),
        .sl_oport219_i(1'b0),
        .sl_oport21_i(1'b0),
        .sl_oport220_i(1'b0),
        .sl_oport221_i(1'b0),
        .sl_oport222_i(1'b0),
        .sl_oport223_i(1'b0),
        .sl_oport224_i(1'b0),
        .sl_oport225_i(1'b0),
        .sl_oport226_i(1'b0),
        .sl_oport227_i(1'b0),
        .sl_oport228_i(1'b0),
        .sl_oport229_i(1'b0),
        .sl_oport22_i(1'b0),
        .sl_oport230_i(1'b0),
        .sl_oport231_i(1'b0),
        .sl_oport232_i(1'b0),
        .sl_oport233_i(1'b0),
        .sl_oport234_i(1'b0),
        .sl_oport235_i(1'b0),
        .sl_oport236_i(1'b0),
        .sl_oport237_i(1'b0),
        .sl_oport238_i(1'b0),
        .sl_oport239_i(1'b0),
        .sl_oport23_i(1'b0),
        .sl_oport240_i(1'b0),
        .sl_oport241_i(1'b0),
        .sl_oport242_i(1'b0),
        .sl_oport243_i(1'b0),
        .sl_oport244_i(1'b0),
        .sl_oport245_i(1'b0),
        .sl_oport246_i(1'b0),
        .sl_oport247_i(1'b0),
        .sl_oport248_i(1'b0),
        .sl_oport249_i(1'b0),
        .sl_oport24_i(1'b0),
        .sl_oport250_i(1'b0),
        .sl_oport251_i(1'b0),
        .sl_oport252_i(1'b0),
        .sl_oport253_i(1'b0),
        .sl_oport254_i(1'b0),
        .sl_oport255_i(1'b0),
        .sl_oport25_i(1'b0),
        .sl_oport26_i(1'b0),
        .sl_oport27_i(1'b0),
        .sl_oport28_i(1'b0),
        .sl_oport29_i(1'b0),
        .sl_oport2_i(1'b0),
        .sl_oport30_i(1'b0),
        .sl_oport31_i(1'b0),
        .sl_oport32_i(1'b0),
        .sl_oport33_i(1'b0),
        .sl_oport34_i(1'b0),
        .sl_oport35_i(1'b0),
        .sl_oport36_i(1'b0),
        .sl_oport37_i(1'b0),
        .sl_oport38_i(1'b0),
        .sl_oport39_i(1'b0),
        .sl_oport3_i(1'b0),
        .sl_oport40_i(1'b0),
        .sl_oport41_i(1'b0),
        .sl_oport42_i(1'b0),
        .sl_oport43_i(1'b0),
        .sl_oport44_i(1'b0),
        .sl_oport45_i(1'b0),
        .sl_oport46_i(1'b0),
        .sl_oport47_i(1'b0),
        .sl_oport48_i(1'b0),
        .sl_oport49_i(1'b0),
        .sl_oport4_i(1'b0),
        .sl_oport50_i(1'b0),
        .sl_oport51_i(1'b0),
        .sl_oport52_i(1'b0),
        .sl_oport53_i(1'b0),
        .sl_oport54_i(1'b0),
        .sl_oport55_i(1'b0),
        .sl_oport56_i(1'b0),
        .sl_oport57_i(1'b0),
        .sl_oport58_i(1'b0),
        .sl_oport59_i(1'b0),
        .sl_oport5_i(1'b0),
        .sl_oport60_i(1'b0),
        .sl_oport61_i(1'b0),
        .sl_oport62_i(1'b0),
        .sl_oport63_i(1'b0),
        .sl_oport64_i(1'b0),
        .sl_oport65_i(1'b0),
        .sl_oport66_i(1'b0),
        .sl_oport67_i(1'b0),
        .sl_oport68_i(1'b0),
        .sl_oport69_i(1'b0),
        .sl_oport6_i(1'b0),
        .sl_oport70_i(1'b0),
        .sl_oport71_i(1'b0),
        .sl_oport72_i(1'b0),
        .sl_oport73_i(1'b0),
        .sl_oport74_i(1'b0),
        .sl_oport75_i(1'b0),
        .sl_oport76_i(1'b0),
        .sl_oport77_i(1'b0),
        .sl_oport78_i(1'b0),
        .sl_oport79_i(1'b0),
        .sl_oport7_i(1'b0),
        .sl_oport80_i(1'b0),
        .sl_oport81_i(1'b0),
        .sl_oport82_i(1'b0),
        .sl_oport83_i(1'b0),
        .sl_oport84_i(1'b0),
        .sl_oport85_i(1'b0),
        .sl_oport86_i(1'b0),
        .sl_oport87_i(1'b0),
        .sl_oport88_i(1'b0),
        .sl_oport89_i(1'b0),
        .sl_oport8_i(1'b0),
        .sl_oport90_i(1'b0),
        .sl_oport91_i(1'b0),
        .sl_oport92_i(1'b0),
        .sl_oport93_i(1'b0),
        .sl_oport94_i(1'b0),
        .sl_oport95_i(1'b0),
        .sl_oport96_i(1'b0),
        .sl_oport97_i(1'b0),
        .sl_oport98_i(1'b0),
        .sl_oport99_i(1'b0),
        .sl_oport9_i(1'b0),
        .tck(1'b0),
        .tck_0(NLW_inst_tck_0_UNCONNECTED),
        .tck_1(NLW_inst_tck_1_UNCONNECTED),
        .tck_10(NLW_inst_tck_10_UNCONNECTED),
        .tck_11(NLW_inst_tck_11_UNCONNECTED),
        .tck_12(NLW_inst_tck_12_UNCONNECTED),
        .tck_13(NLW_inst_tck_13_UNCONNECTED),
        .tck_14(NLW_inst_tck_14_UNCONNECTED),
        .tck_15(NLW_inst_tck_15_UNCONNECTED),
        .tck_2(NLW_inst_tck_2_UNCONNECTED),
        .tck_3(NLW_inst_tck_3_UNCONNECTED),
        .tck_4(NLW_inst_tck_4_UNCONNECTED),
        .tck_5(NLW_inst_tck_5_UNCONNECTED),
        .tck_6(NLW_inst_tck_6_UNCONNECTED),
        .tck_7(NLW_inst_tck_7_UNCONNECTED),
        .tck_8(NLW_inst_tck_8_UNCONNECTED),
        .tck_9(NLW_inst_tck_9_UNCONNECTED),
        .tdi(1'b0),
        .tdi_0(NLW_inst_tdi_0_UNCONNECTED),
        .tdi_1(NLW_inst_tdi_1_UNCONNECTED),
        .tdi_10(NLW_inst_tdi_10_UNCONNECTED),
        .tdi_11(NLW_inst_tdi_11_UNCONNECTED),
        .tdi_12(NLW_inst_tdi_12_UNCONNECTED),
        .tdi_13(NLW_inst_tdi_13_UNCONNECTED),
        .tdi_14(NLW_inst_tdi_14_UNCONNECTED),
        .tdi_15(NLW_inst_tdi_15_UNCONNECTED),
        .tdi_2(NLW_inst_tdi_2_UNCONNECTED),
        .tdi_3(NLW_inst_tdi_3_UNCONNECTED),
        .tdi_4(NLW_inst_tdi_4_UNCONNECTED),
        .tdi_5(NLW_inst_tdi_5_UNCONNECTED),
        .tdi_6(NLW_inst_tdi_6_UNCONNECTED),
        .tdi_7(NLW_inst_tdi_7_UNCONNECTED),
        .tdi_8(NLW_inst_tdi_8_UNCONNECTED),
        .tdi_9(NLW_inst_tdi_9_UNCONNECTED),
        .tdo(NLW_inst_tdo_UNCONNECTED),
        .tdo_0(1'b0),
        .tdo_1(1'b0),
        .tdo_10(1'b0),
        .tdo_11(1'b0),
        .tdo_12(1'b0),
        .tdo_13(1'b0),
        .tdo_14(1'b0),
        .tdo_15(1'b0),
        .tdo_2(1'b0),
        .tdo_3(1'b0),
        .tdo_4(1'b0),
        .tdo_5(1'b0),
        .tdo_6(1'b0),
        .tdo_7(1'b0),
        .tdo_8(1'b0),
        .tdo_9(1'b0),
        .tms(1'b0),
        .tms_0(NLW_inst_tms_0_UNCONNECTED),
        .tms_1(NLW_inst_tms_1_UNCONNECTED),
        .tms_10(NLW_inst_tms_10_UNCONNECTED),
        .tms_11(NLW_inst_tms_11_UNCONNECTED),
        .tms_12(NLW_inst_tms_12_UNCONNECTED),
        .tms_13(NLW_inst_tms_13_UNCONNECTED),
        .tms_14(NLW_inst_tms_14_UNCONNECTED),
        .tms_15(NLW_inst_tms_15_UNCONNECTED),
        .tms_2(NLW_inst_tms_2_UNCONNECTED),
        .tms_3(NLW_inst_tms_3_UNCONNECTED),
        .tms_4(NLW_inst_tms_4_UNCONNECTED),
        .tms_5(NLW_inst_tms_5_UNCONNECTED),
        .tms_6(NLW_inst_tms_6_UNCONNECTED),
        .tms_7(NLW_inst_tms_7_UNCONNECTED),
        .tms_8(NLW_inst_tms_8_UNCONNECTED),
        .tms_9(NLW_inst_tms_9_UNCONNECTED),
        .update(1'b0),
        .update_0(NLW_inst_update_0_UNCONNECTED),
        .update_1(NLW_inst_update_1_UNCONNECTED),
        .update_10(NLW_inst_update_10_UNCONNECTED),
        .update_11(NLW_inst_update_11_UNCONNECTED),
        .update_12(NLW_inst_update_12_UNCONNECTED),
        .update_13(NLW_inst_update_13_UNCONNECTED),
        .update_14(NLW_inst_update_14_UNCONNECTED),
        .update_15(NLW_inst_update_15_UNCONNECTED),
        .update_2(NLW_inst_update_2_UNCONNECTED),
        .update_3(NLW_inst_update_3_UNCONNECTED),
        .update_4(NLW_inst_update_4_UNCONNECTED),
        .update_5(NLW_inst_update_5_UNCONNECTED),
        .update_6(NLW_inst_update_6_UNCONNECTED),
        .update_7(NLW_inst_update_7_UNCONNECTED),
        .update_8(NLW_inst_update_8_UNCONNECTED),
        .update_9(NLW_inst_update_9_UNCONNECTED));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_clk_x_pntrs
   (out,
    ram_full_fb_i_reg,
    \gnxpm_cdc.wr_pntr_bin_reg[3]_0 ,
    wr_en,
    ram_full_fb_i_reg_0,
    Q,
    ram_full_fb_i_reg_1,
    \gnxpm_cdc.wr_pntr_gc_reg[3]_0 ,
    wr_clk,
    AR,
    rd_clk,
    \Q_reg_reg[0] ,
    \gnxpm_cdc.rd_pntr_gc_reg[3]_0 ,
    D,
    \gnxpm_cdc.wr_pntr_bin_reg[0]_0 );
  output [3:0]out;
  output ram_full_fb_i_reg;
  output [3:0]\gnxpm_cdc.wr_pntr_bin_reg[3]_0 ;
  input wr_en;
  input ram_full_fb_i_reg_0;
  input [3:0]Q;
  input [3:0]ram_full_fb_i_reg_1;
  input [3:0]\gnxpm_cdc.wr_pntr_gc_reg[3]_0 ;
  input wr_clk;
  input [0:0]AR;
  input rd_clk;
  input [0:0]\Q_reg_reg[0] ;
  input [0:0]\gnxpm_cdc.rd_pntr_gc_reg[3]_0 ;
  input [2:0]D;
  input [0:0]\gnxpm_cdc.wr_pntr_bin_reg[0]_0 ;

  wire [0:0]AR;
  wire [2:0]D;
  wire [3:0]Q;
  wire [0:0]\Q_reg_reg[0] ;
  wire \_inferred__0/i__n_0 ;
  wire \_inferred__2/i__n_0 ;
  wire \_inferred__3/i__n_0 ;
  wire [2:0]bin2gray;
  wire \gnxpm_cdc.gsync_stage[2].wr_stg_inst_n_4 ;
  wire [0:0]\gnxpm_cdc.rd_pntr_gc_reg[3]_0 ;
  wire [0:0]\gnxpm_cdc.wr_pntr_bin_reg[0]_0 ;
  wire [3:0]\gnxpm_cdc.wr_pntr_bin_reg[3]_0 ;
  wire [3:0]\gnxpm_cdc.wr_pntr_gc_reg[3]_0 ;
  wire [3:0]out;
  wire p_0_out;
  wire [3:0]p_24_out;
  wire [3:0]p_3_out;
  wire [3:0]p_4_out;
  wire [3:0]p_6_out;
  wire ram_full_fb_i_reg;
  wire ram_full_fb_i_reg_0;
  wire [3:0]ram_full_fb_i_reg_1;
  wire ram_full_i_i_2_n_0;
  wire ram_full_i_i_3_n_0;
  wire ram_full_i_i_4_n_0;
  wire ram_full_i_i_5_n_0;
  wire rd_clk;
  wire [3:0]rd_pntr_gc;
  wire wr_clk;
  wire wr_en;
  wire [3:0]wr_pntr_gc;

  LUT3 #(
    .INIT(8'h96)) 
    \_inferred__0/i_ 
       (.I0(out[3]),
        .I1(out[1]),
        .I2(out[2]),
        .O(\_inferred__0/i__n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \_inferred__2/i_ 
       (.I0(p_6_out[2]),
        .I1(p_6_out[3]),
        .I2(p_6_out[0]),
        .I3(p_6_out[1]),
        .O(\_inferred__2/i__n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \_inferred__3/i_ 
       (.I0(p_6_out[3]),
        .I1(p_6_out[1]),
        .I2(p_6_out[2]),
        .O(\_inferred__3/i__n_0 ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0 \gnxpm_cdc.gsync_stage[1].rd_stg_inst 
       (.D(p_3_out),
        .Q(wr_pntr_gc),
        .\Q_reg_reg[0]_0 (\Q_reg_reg[0] ),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_5 \gnxpm_cdc.gsync_stage[1].wr_stg_inst 
       (.AR(AR),
        .D(p_4_out),
        .Q(rd_pntr_gc),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_6 \gnxpm_cdc.gsync_stage[2].rd_stg_inst 
       (.D(p_0_out),
        .\Q_reg_reg[0]_0 (\Q_reg_reg[0] ),
        .\Q_reg_reg[3]_0 (p_3_out),
        .out(out),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_7 \gnxpm_cdc.gsync_stage[2].wr_stg_inst 
       (.AR(AR),
        .D(\gnxpm_cdc.gsync_stage[2].wr_stg_inst_n_4 ),
        .\Q_reg_reg[3]_0 (p_4_out),
        .out(p_6_out),
        .wr_clk(wr_clk));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\_inferred__2/i__n_0 ),
        .Q(p_24_out[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\_inferred__3/i__n_0 ),
        .Q(p_24_out[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\gnxpm_cdc.gsync_stage[2].wr_stg_inst_n_4 ),
        .Q(p_24_out[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(p_6_out[3]),
        .Q(p_24_out[3]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(D[0]),
        .Q(rd_pntr_gc[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(D[1]),
        .Q(rd_pntr_gc[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(D[2]),
        .Q(rd_pntr_gc[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(\gnxpm_cdc.rd_pntr_gc_reg[3]_0 ),
        .Q(rd_pntr_gc[3]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(\gnxpm_cdc.wr_pntr_bin_reg[0]_0 ),
        .Q(\gnxpm_cdc.wr_pntr_bin_reg[3]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(\_inferred__0/i__n_0 ),
        .Q(\gnxpm_cdc.wr_pntr_bin_reg[3]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(p_0_out),
        .Q(\gnxpm_cdc.wr_pntr_bin_reg[3]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(out[3]),
        .Q(\gnxpm_cdc.wr_pntr_bin_reg[3]_0 [3]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_gc[0]_i_1 
       (.I0(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [1]),
        .I1(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [0]),
        .O(bin2gray[0]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_gc[1]_i_1 
       (.I0(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [2]),
        .I1(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [1]),
        .O(bin2gray[1]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_gc[2]_i_1 
       (.I0(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [3]),
        .I1(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [2]),
        .O(bin2gray[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(bin2gray[0]),
        .Q(wr_pntr_gc[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(bin2gray[1]),
        .Q(wr_pntr_gc[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(bin2gray[2]),
        .Q(wr_pntr_gc[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [3]),
        .Q(wr_pntr_gc[3]));
  LUT6 #(
    .INIT(64'h88F8888888888888)) 
    ram_full_i_i_1
       (.I0(ram_full_i_i_2_n_0),
        .I1(ram_full_i_i_3_n_0),
        .I2(wr_en),
        .I3(ram_full_fb_i_reg_0),
        .I4(ram_full_i_i_4_n_0),
        .I5(ram_full_i_i_5_n_0),
        .O(ram_full_fb_i_reg));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_2
       (.I0(p_24_out[2]),
        .I1(Q[2]),
        .I2(p_24_out[3]),
        .I3(Q[3]),
        .O(ram_full_i_i_2_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_3
       (.I0(p_24_out[0]),
        .I1(Q[0]),
        .I2(p_24_out[1]),
        .I3(Q[1]),
        .O(ram_full_i_i_3_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_4
       (.I0(p_24_out[0]),
        .I1(ram_full_fb_i_reg_1[0]),
        .I2(p_24_out[1]),
        .I3(ram_full_fb_i_reg_1[1]),
        .O(ram_full_i_i_4_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_5
       (.I0(p_24_out[2]),
        .I1(ram_full_fb_i_reg_1[2]),
        .I2(p_24_out[3]),
        .I3(ram_full_fb_i_reg_1[3]),
        .O(ram_full_i_i_5_n_0));
endmodule

(* ORIG_REF_NAME = "clk_x_pntrs" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_clk_x_pntrs_8
   (out,
    \gnxpm_cdc.wr_pntr_bin_reg[2]_0 ,
    Q,
    ram_full_fb_i_reg,
    ram_empty_i_reg,
    wr_en,
    ram_full_fb_i_reg_0,
    ram_full_fb_i_reg_1,
    ram_full_fb_i_reg_2,
    \gnxpm_cdc.wr_pntr_gc_reg[3]_0 ,
    wr_clk,
    AR,
    rd_clk,
    \Q_reg_reg[0] ,
    \gnxpm_cdc.rd_pntr_gc_reg[3]_0 ,
    D,
    \gnxpm_cdc.wr_pntr_bin_reg[0]_0 );
  output [3:0]out;
  output \gnxpm_cdc.wr_pntr_bin_reg[2]_0 ;
  output [3:0]Q;
  output ram_full_fb_i_reg;
  input [2:0]ram_empty_i_reg;
  input wr_en;
  input ram_full_fb_i_reg_0;
  input [3:0]ram_full_fb_i_reg_1;
  input [3:0]ram_full_fb_i_reg_2;
  input [3:0]\gnxpm_cdc.wr_pntr_gc_reg[3]_0 ;
  input wr_clk;
  input [0:0]AR;
  input rd_clk;
  input [0:0]\Q_reg_reg[0] ;
  input [0:0]\gnxpm_cdc.rd_pntr_gc_reg[3]_0 ;
  input [2:0]D;
  input [0:0]\gnxpm_cdc.wr_pntr_bin_reg[0]_0 ;

  wire [0:0]AR;
  wire [2:0]D;
  wire [3:0]Q;
  wire [0:0]\Q_reg_reg[0] ;
  wire \_inferred__0/i__n_0 ;
  wire \_inferred__2/i__n_0 ;
  wire \_inferred__3/i__n_0 ;
  wire [2:0]bin2gray;
  wire \gnxpm_cdc.gsync_stage[2].wr_stg_inst_n_4 ;
  wire [0:0]\gnxpm_cdc.rd_pntr_gc_reg[3]_0 ;
  wire [0:0]\gnxpm_cdc.wr_pntr_bin_reg[0]_0 ;
  wire \gnxpm_cdc.wr_pntr_bin_reg[2]_0 ;
  wire [3:0]\gnxpm_cdc.wr_pntr_gc_reg[3]_0 ;
  wire [3:0]out;
  wire p_0_out;
  wire [3:0]p_24_out;
  wire [3:0]p_3_out;
  wire [3:0]p_4_out;
  wire [3:0]p_6_out;
  wire [2:0]ram_empty_i_reg;
  wire ram_full_fb_i_reg;
  wire ram_full_fb_i_reg_0;
  wire [3:0]ram_full_fb_i_reg_1;
  wire [3:0]ram_full_fb_i_reg_2;
  wire ram_full_i_i_2_n_0;
  wire ram_full_i_i_3_n_0;
  wire ram_full_i_i_4_n_0;
  wire ram_full_i_i_5_n_0;
  wire rd_clk;
  wire [3:0]rd_pntr_gc;
  wire wr_clk;
  wire wr_en;
  wire [3:0]wr_pntr_gc;

  LUT3 #(
    .INIT(8'h96)) 
    \_inferred__0/i_ 
       (.I0(out[3]),
        .I1(out[1]),
        .I2(out[2]),
        .O(\_inferred__0/i__n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    \_inferred__2/i_ 
       (.I0(p_6_out[2]),
        .I1(p_6_out[3]),
        .I2(p_6_out[0]),
        .I3(p_6_out[1]),
        .O(\_inferred__2/i__n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \_inferred__3/i_ 
       (.I0(p_6_out[3]),
        .I1(p_6_out[1]),
        .I2(p_6_out[2]),
        .O(\_inferred__3/i__n_0 ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_20 \gnxpm_cdc.gsync_stage[1].rd_stg_inst 
       (.D(p_3_out),
        .Q(wr_pntr_gc),
        .\Q_reg_reg[0]_0 (\Q_reg_reg[0] ),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_21 \gnxpm_cdc.gsync_stage[1].wr_stg_inst 
       (.AR(AR),
        .D(p_4_out),
        .Q(rd_pntr_gc),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_22 \gnxpm_cdc.gsync_stage[2].rd_stg_inst 
       (.D(p_0_out),
        .\Q_reg_reg[0]_0 (\Q_reg_reg[0] ),
        .\Q_reg_reg[3]_0 (p_3_out),
        .out(out),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_23 \gnxpm_cdc.gsync_stage[2].wr_stg_inst 
       (.AR(AR),
        .D(\gnxpm_cdc.gsync_stage[2].wr_stg_inst_n_4 ),
        .\Q_reg_reg[3]_0 (p_4_out),
        .out(p_6_out),
        .wr_clk(wr_clk));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\_inferred__2/i__n_0 ),
        .Q(p_24_out[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\_inferred__3/i__n_0 ),
        .Q(p_24_out[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\gnxpm_cdc.gsync_stage[2].wr_stg_inst_n_4 ),
        .Q(p_24_out[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_bin_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(p_6_out[3]),
        .Q(p_24_out[3]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(D[0]),
        .Q(rd_pntr_gc[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(D[1]),
        .Q(rd_pntr_gc[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(D[2]),
        .Q(rd_pntr_gc[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.rd_pntr_gc_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(\gnxpm_cdc.rd_pntr_gc_reg[3]_0 ),
        .Q(rd_pntr_gc[3]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(\gnxpm_cdc.wr_pntr_bin_reg[0]_0 ),
        .Q(Q[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(\_inferred__0/i__n_0 ),
        .Q(Q[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(p_0_out),
        .Q(Q[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_bin_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0] ),
        .D(out[3]),
        .Q(Q[3]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_gc[0]_i_1 
       (.I0(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [1]),
        .I1(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [0]),
        .O(bin2gray[0]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_gc[1]_i_1 
       (.I0(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [2]),
        .I1(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [1]),
        .O(bin2gray[1]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_gc[2]_i_1 
       (.I0(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [3]),
        .I1(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [2]),
        .O(bin2gray[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(bin2gray[0]),
        .Q(wr_pntr_gc[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(bin2gray[1]),
        .Q(wr_pntr_gc[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(bin2gray[2]),
        .Q(wr_pntr_gc[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gnxpm_cdc.wr_pntr_gc_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\gnxpm_cdc.wr_pntr_gc_reg[3]_0 [3]),
        .Q(wr_pntr_gc[3]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    ram_empty_i_i_4
       (.I0(Q[2]),
        .I1(ram_empty_i_reg[2]),
        .I2(Q[1]),
        .I3(ram_empty_i_reg[1]),
        .I4(ram_empty_i_reg[0]),
        .I5(Q[0]),
        .O(\gnxpm_cdc.wr_pntr_bin_reg[2]_0 ));
  LUT6 #(
    .INIT(64'h88F8888888888888)) 
    ram_full_i_i_1
       (.I0(ram_full_i_i_2_n_0),
        .I1(ram_full_i_i_3_n_0),
        .I2(wr_en),
        .I3(ram_full_fb_i_reg_0),
        .I4(ram_full_i_i_4_n_0),
        .I5(ram_full_i_i_5_n_0),
        .O(ram_full_fb_i_reg));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_2
       (.I0(p_24_out[2]),
        .I1(ram_full_fb_i_reg_1[2]),
        .I2(p_24_out[3]),
        .I3(ram_full_fb_i_reg_1[3]),
        .O(ram_full_i_i_2_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_3
       (.I0(p_24_out[0]),
        .I1(ram_full_fb_i_reg_1[0]),
        .I2(p_24_out[1]),
        .I3(ram_full_fb_i_reg_1[1]),
        .O(ram_full_i_i_3_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_4
       (.I0(p_24_out[0]),
        .I1(ram_full_fb_i_reg_2[0]),
        .I2(p_24_out[1]),
        .I3(ram_full_fb_i_reg_2[1]),
        .O(ram_full_i_i_4_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_full_i_i_5
       (.I0(p_24_out[2]),
        .I1(ram_full_fb_i_reg_2[2]),
        .I2(p_24_out[3]),
        .I3(ram_full_fb_i_reg_2[3]),
        .O(ram_full_i_i_5_n_0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dmem
   (dout,
    wr_clk,
    EN,
    din,
    Q,
    \gpr1.dout_i_reg[1]_0 ,
    E,
    rd_clk);
  output [15:0]dout;
  input wr_clk;
  input EN;
  input [15:0]din;
  input [3:0]Q;
  input [3:0]\gpr1.dout_i_reg[1]_0 ;
  input [0:0]E;
  input rd_clk;

  wire [0:0]E;
  wire EN;
  wire [3:0]Q;
  wire RAM_reg_0_15_0_5_n_0;
  wire RAM_reg_0_15_0_5_n_1;
  wire RAM_reg_0_15_0_5_n_2;
  wire RAM_reg_0_15_0_5_n_3;
  wire RAM_reg_0_15_0_5_n_4;
  wire RAM_reg_0_15_0_5_n_5;
  wire RAM_reg_0_15_12_15_n_0;
  wire RAM_reg_0_15_12_15_n_1;
  wire RAM_reg_0_15_12_15_n_2;
  wire RAM_reg_0_15_12_15_n_3;
  wire RAM_reg_0_15_6_11_n_0;
  wire RAM_reg_0_15_6_11_n_1;
  wire RAM_reg_0_15_6_11_n_2;
  wire RAM_reg_0_15_6_11_n_3;
  wire RAM_reg_0_15_6_11_n_4;
  wire RAM_reg_0_15_6_11_n_5;
  wire [15:0]din;
  wire [15:0]dout;
  wire [3:0]\gpr1.dout_i_reg[1]_0 ;
  wire rd_clk;
  wire wr_clk;
  wire [1:0]NLW_RAM_reg_0_15_0_5_DOD_UNCONNECTED;
  wire [1:0]NLW_RAM_reg_0_15_12_15_DOC_UNCONNECTED;
  wire [1:0]NLW_RAM_reg_0_15_12_15_DOD_UNCONNECTED;
  wire [1:0]NLW_RAM_reg_0_15_6_11_DOD_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "256" *) 
  (* RTL_RAM_NAME = "inst_fifo_gen/gconvfifo.rf/grf.rf/gntv_or_sync_fifo.mem/gdm.dm_gen.dm/RAM" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "15" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "0" *) 
  (* ram_slice_end = "5" *) 
  RAM32M RAM_reg_0_15_0_5
       (.ADDRA({1'b0,Q}),
        .ADDRB({1'b0,Q}),
        .ADDRC({1'b0,Q}),
        .ADDRD({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .DIA(din[1:0]),
        .DIB(din[3:2]),
        .DIC(din[5:4]),
        .DID({1'b0,1'b0}),
        .DOA({RAM_reg_0_15_0_5_n_0,RAM_reg_0_15_0_5_n_1}),
        .DOB({RAM_reg_0_15_0_5_n_2,RAM_reg_0_15_0_5_n_3}),
        .DOC({RAM_reg_0_15_0_5_n_4,RAM_reg_0_15_0_5_n_5}),
        .DOD(NLW_RAM_reg_0_15_0_5_DOD_UNCONNECTED[1:0]),
        .WCLK(wr_clk),
        .WE(EN));
  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "256" *) 
  (* RTL_RAM_NAME = "inst_fifo_gen/gconvfifo.rf/grf.rf/gntv_or_sync_fifo.mem/gdm.dm_gen.dm/RAM" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "15" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "12" *) 
  (* ram_slice_end = "15" *) 
  RAM32M RAM_reg_0_15_12_15
       (.ADDRA({1'b0,Q}),
        .ADDRB({1'b0,Q}),
        .ADDRC({1'b0,Q}),
        .ADDRD({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .DIA(din[13:12]),
        .DIB(din[15:14]),
        .DIC({1'b0,1'b0}),
        .DID({1'b0,1'b0}),
        .DOA({RAM_reg_0_15_12_15_n_0,RAM_reg_0_15_12_15_n_1}),
        .DOB({RAM_reg_0_15_12_15_n_2,RAM_reg_0_15_12_15_n_3}),
        .DOC(NLW_RAM_reg_0_15_12_15_DOC_UNCONNECTED[1:0]),
        .DOD(NLW_RAM_reg_0_15_12_15_DOD_UNCONNECTED[1:0]),
        .WCLK(wr_clk),
        .WE(EN));
  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "256" *) 
  (* RTL_RAM_NAME = "inst_fifo_gen/gconvfifo.rf/grf.rf/gntv_or_sync_fifo.mem/gdm.dm_gen.dm/RAM" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "15" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "6" *) 
  (* ram_slice_end = "11" *) 
  RAM32M RAM_reg_0_15_6_11
       (.ADDRA({1'b0,Q}),
        .ADDRB({1'b0,Q}),
        .ADDRC({1'b0,Q}),
        .ADDRD({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .DIA(din[7:6]),
        .DIB(din[9:8]),
        .DIC(din[11:10]),
        .DID({1'b0,1'b0}),
        .DOA({RAM_reg_0_15_6_11_n_0,RAM_reg_0_15_6_11_n_1}),
        .DOB({RAM_reg_0_15_6_11_n_2,RAM_reg_0_15_6_11_n_3}),
        .DOC({RAM_reg_0_15_6_11_n_4,RAM_reg_0_15_6_11_n_5}),
        .DOD(NLW_RAM_reg_0_15_6_11_DOD_UNCONNECTED[1:0]),
        .WCLK(wr_clk),
        .WE(EN));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[0] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_0_5_n_1),
        .Q(dout[0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[10] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_6_11_n_5),
        .Q(dout[10]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[11] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_6_11_n_4),
        .Q(dout[11]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[12] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_12_15_n_1),
        .Q(dout[12]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[13] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_12_15_n_0),
        .Q(dout[13]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[14] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_12_15_n_3),
        .Q(dout[14]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[15] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_12_15_n_2),
        .Q(dout[15]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[1] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_0_5_n_0),
        .Q(dout[1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[2] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_0_5_n_3),
        .Q(dout[2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[3] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_0_5_n_2),
        .Q(dout[3]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[4] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_0_5_n_5),
        .Q(dout[4]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[5] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_0_5_n_4),
        .Q(dout[5]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[6] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_6_11_n_1),
        .Q(dout[6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[7] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_6_11_n_0),
        .Q(dout[7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[8] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_6_11_n_3),
        .Q(dout[8]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[9] 
       (.C(rd_clk),
        .CE(E),
        .D(RAM_reg_0_15_6_11_n_2),
        .Q(dout[9]),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "dmem" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dmem_14
   (dout_i,
    wr_clk,
    EN,
    din,
    \gpr1.dout_i_reg[1]_0 ,
    \gpr1.dout_i_reg[1]_1 ,
    \gpr1.dout_i_reg[0]_0 ,
    rd_clk);
  output [15:0]dout_i;
  input wr_clk;
  input EN;
  input [15:0]din;
  input [3:0]\gpr1.dout_i_reg[1]_0 ;
  input [3:0]\gpr1.dout_i_reg[1]_1 ;
  input [0:0]\gpr1.dout_i_reg[0]_0 ;
  input rd_clk;

  wire EN;
  wire RAM_reg_0_15_0_5_n_0;
  wire RAM_reg_0_15_0_5_n_1;
  wire RAM_reg_0_15_0_5_n_2;
  wire RAM_reg_0_15_0_5_n_3;
  wire RAM_reg_0_15_0_5_n_4;
  wire RAM_reg_0_15_0_5_n_5;
  wire RAM_reg_0_15_12_15_n_0;
  wire RAM_reg_0_15_12_15_n_1;
  wire RAM_reg_0_15_12_15_n_2;
  wire RAM_reg_0_15_12_15_n_3;
  wire RAM_reg_0_15_6_11_n_0;
  wire RAM_reg_0_15_6_11_n_1;
  wire RAM_reg_0_15_6_11_n_2;
  wire RAM_reg_0_15_6_11_n_3;
  wire RAM_reg_0_15_6_11_n_4;
  wire RAM_reg_0_15_6_11_n_5;
  wire [15:0]din;
  wire [15:0]dout_i;
  wire [0:0]\gpr1.dout_i_reg[0]_0 ;
  wire [3:0]\gpr1.dout_i_reg[1]_0 ;
  wire [3:0]\gpr1.dout_i_reg[1]_1 ;
  wire rd_clk;
  wire wr_clk;
  wire [1:0]NLW_RAM_reg_0_15_0_5_DOD_UNCONNECTED;
  wire [1:0]NLW_RAM_reg_0_15_12_15_DOC_UNCONNECTED;
  wire [1:0]NLW_RAM_reg_0_15_12_15_DOD_UNCONNECTED;
  wire [1:0]NLW_RAM_reg_0_15_6_11_DOD_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "256" *) 
  (* RTL_RAM_NAME = "inst_fifo_gen/gconvfifo.rf/grf.rf/gntv_or_sync_fifo.mem/gdm.dm_gen.dm/RAM" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "15" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "0" *) 
  (* ram_slice_end = "5" *) 
  RAM32M RAM_reg_0_15_0_5
       (.ADDRA({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRB({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRC({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRD({1'b0,\gpr1.dout_i_reg[1]_1 }),
        .DIA(din[1:0]),
        .DIB(din[3:2]),
        .DIC(din[5:4]),
        .DID({1'b0,1'b0}),
        .DOA({RAM_reg_0_15_0_5_n_0,RAM_reg_0_15_0_5_n_1}),
        .DOB({RAM_reg_0_15_0_5_n_2,RAM_reg_0_15_0_5_n_3}),
        .DOC({RAM_reg_0_15_0_5_n_4,RAM_reg_0_15_0_5_n_5}),
        .DOD(NLW_RAM_reg_0_15_0_5_DOD_UNCONNECTED[1:0]),
        .WCLK(wr_clk),
        .WE(EN));
  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "256" *) 
  (* RTL_RAM_NAME = "inst_fifo_gen/gconvfifo.rf/grf.rf/gntv_or_sync_fifo.mem/gdm.dm_gen.dm/RAM" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "15" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "12" *) 
  (* ram_slice_end = "15" *) 
  RAM32M RAM_reg_0_15_12_15
       (.ADDRA({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRB({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRC({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRD({1'b0,\gpr1.dout_i_reg[1]_1 }),
        .DIA(din[13:12]),
        .DIB(din[15:14]),
        .DIC({1'b0,1'b0}),
        .DID({1'b0,1'b0}),
        .DOA({RAM_reg_0_15_12_15_n_0,RAM_reg_0_15_12_15_n_1}),
        .DOB({RAM_reg_0_15_12_15_n_2,RAM_reg_0_15_12_15_n_3}),
        .DOC(NLW_RAM_reg_0_15_12_15_DOC_UNCONNECTED[1:0]),
        .DOD(NLW_RAM_reg_0_15_12_15_DOD_UNCONNECTED[1:0]),
        .WCLK(wr_clk),
        .WE(EN));
  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "256" *) 
  (* RTL_RAM_NAME = "inst_fifo_gen/gconvfifo.rf/grf.rf/gntv_or_sync_fifo.mem/gdm.dm_gen.dm/RAM" *) 
  (* ram_addr_begin = "0" *) 
  (* ram_addr_end = "15" *) 
  (* ram_offset = "0" *) 
  (* ram_slice_begin = "6" *) 
  (* ram_slice_end = "11" *) 
  RAM32M RAM_reg_0_15_6_11
       (.ADDRA({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRB({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRC({1'b0,\gpr1.dout_i_reg[1]_0 }),
        .ADDRD({1'b0,\gpr1.dout_i_reg[1]_1 }),
        .DIA(din[7:6]),
        .DIB(din[9:8]),
        .DIC(din[11:10]),
        .DID({1'b0,1'b0}),
        .DOA({RAM_reg_0_15_6_11_n_0,RAM_reg_0_15_6_11_n_1}),
        .DOB({RAM_reg_0_15_6_11_n_2,RAM_reg_0_15_6_11_n_3}),
        .DOC({RAM_reg_0_15_6_11_n_4,RAM_reg_0_15_6_11_n_5}),
        .DOD(NLW_RAM_reg_0_15_6_11_DOD_UNCONNECTED[1:0]),
        .WCLK(wr_clk),
        .WE(EN));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[0] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_0_5_n_1),
        .Q(dout_i[0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[10] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_6_11_n_5),
        .Q(dout_i[10]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[11] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_6_11_n_4),
        .Q(dout_i[11]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[12] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_12_15_n_1),
        .Q(dout_i[12]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[13] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_12_15_n_0),
        .Q(dout_i[13]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[14] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_12_15_n_3),
        .Q(dout_i[14]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[15] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_12_15_n_2),
        .Q(dout_i[15]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[1] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_0_5_n_0),
        .Q(dout_i[1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[2] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_0_5_n_3),
        .Q(dout_i[2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[3] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_0_5_n_2),
        .Q(dout_i[3]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[4] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_0_5_n_5),
        .Q(dout_i[4]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[5] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_0_5_n_4),
        .Q(dout_i[5]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[6] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_6_11_n_1),
        .Q(dout_i[6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[7] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_6_11_n_0),
        .Q(dout_i[7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[8] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_6_11_n_3),
        .Q(dout_i[8]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \gpr1.dout_i_reg[9] 
       (.C(rd_clk),
        .CE(\gpr1.dout_i_reg[0]_0 ),
        .D(RAM_reg_0_15_6_11_n_2),
        .Q(dout_i[9]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_ramfifo
   (empty,
    full,
    underflow,
    overflow,
    dout,
    rd_clk,
    wr_clk,
    rst,
    din,
    rd_en,
    wr_en);
  output empty;
  output full;
  output underflow;
  output overflow;
  output [15:0]dout;
  input rd_clk;
  input wr_clk;
  input rst;
  input [15:0]din;
  input rd_en;
  input wr_en;

  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire \gntv_or_sync_fifo.gcx.clkx/_n_0 ;
  wire \gntv_or_sync_fifo.gcx.clkx_n_4 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_7 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_8 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_9 ;
  wire \gntv_or_sync_fifo.gl0.wr_n_1 ;
  wire overflow;
  wire [3:0]p_0_out_0;
  wire [3:0]p_12_out;
  wire [3:0]p_13_out;
  wire p_18_out;
  wire [3:0]p_23_out;
  wire [3:0]p_5_out;
  wire ram_rd_en_i;
  wire rd_clk;
  wire rd_en;
  wire [2:1]rd_rst_i;
  wire rst;
  wire rst_full_ff_i;
  wire underflow;
  wire wr_clk;
  wire wr_en;
  wire [3:0]wr_pntr_plus2;
  wire [1:1]wr_rst_i;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_clk_x_pntrs \gntv_or_sync_fifo.gcx.clkx 
       (.AR(rst_full_ff_i),
        .D({\gntv_or_sync_fifo.gl0.rd_n_7 ,\gntv_or_sync_fifo.gl0.rd_n_8 ,\gntv_or_sync_fifo.gl0.rd_n_9 }),
        .Q(p_13_out),
        .\Q_reg_reg[0] (rd_rst_i[1]),
        .\gnxpm_cdc.rd_pntr_gc_reg[3]_0 (p_0_out_0[3]),
        .\gnxpm_cdc.wr_pntr_bin_reg[0]_0 (\gntv_or_sync_fifo.gcx.clkx/_n_0 ),
        .\gnxpm_cdc.wr_pntr_bin_reg[3]_0 (p_23_out),
        .\gnxpm_cdc.wr_pntr_gc_reg[3]_0 (p_12_out),
        .out(p_5_out),
        .ram_full_fb_i_reg(\gntv_or_sync_fifo.gcx.clkx_n_4 ),
        .ram_full_fb_i_reg_0(\gntv_or_sync_fifo.gl0.wr_n_1 ),
        .ram_full_fb_i_reg_1(wr_pntr_plus2),
        .rd_clk(rd_clk),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
  LUT4 #(
    .INIT(16'h6996)) 
    \gntv_or_sync_fifo.gcx.clkx/ 
       (.I0(p_5_out[2]),
        .I1(p_5_out[3]),
        .I2(p_5_out[0]),
        .I3(p_5_out[1]),
        .O(\gntv_or_sync_fifo.gcx.clkx/_n_0 ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_logic \gntv_or_sync_fifo.gl0.rd 
       (.AR(rd_rst_i[2]),
        .D({\gntv_or_sync_fifo.gl0.rd_n_7 ,\gntv_or_sync_fifo.gl0.rd_n_8 ,\gntv_or_sync_fifo.gl0.rd_n_9 }),
        .E(ram_rd_en_i),
        .Q(p_0_out_0),
        .empty(empty),
        .ram_empty_i_reg(p_23_out),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .underflow(underflow));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_logic \gntv_or_sync_fifo.gl0.wr 
       (.E(p_18_out),
        .Q(wr_pntr_plus2),
        .full(full),
        .\gic0.gc0.count_d1_reg[3] (p_13_out),
        .\gic0.gc0.count_d2_reg[3] (p_12_out),
        .\gic0.gc0.count_reg[0] ({wr_rst_i,rst_full_ff_i}),
        .out(\gntv_or_sync_fifo.gl0.wr_n_1 ),
        .overflow(overflow),
        .ram_full_fb_i_reg(\gntv_or_sync_fifo.gcx.clkx_n_4 ),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_memory \gntv_or_sync_fifo.mem 
       (.E(ram_rd_en_i),
        .EN(p_18_out),
        .Q(p_0_out_0),
        .din(din),
        .dout(dout),
        .\gpr1.dout_i_reg[1] (p_12_out),
        .rd_clk(rd_clk),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_reset_blk_ramfifo rstblk
       (.\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 (rd_rst_i),
        .out({wr_rst_i,rst_full_ff_i}),
        .rd_clk(rd_clk),
        .rst(rst),
        .wr_clk(wr_clk));
endmodule

(* ORIG_REF_NAME = "fifo_generator_ramfifo" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_ramfifo__parameterized0
   (empty,
    valid,
    full,
    dout,
    underflow,
    overflow,
    rd_clk,
    wr_clk,
    rst,
    din,
    rd_en,
    wr_en);
  output empty;
  output valid;
  output full;
  output [15:0]dout;
  output underflow;
  output overflow;
  input rd_clk;
  input wr_clk;
  input rst;
  input [15:0]din;
  input rd_en;
  input wr_en;

  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire \gntv_or_sync_fifo.gcx.clkx/_n_0 ;
  wire \gntv_or_sync_fifo.gcx.clkx_n_4 ;
  wire \gntv_or_sync_fifo.gcx.clkx_n_9 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_10 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_7 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_8 ;
  wire \gntv_or_sync_fifo.gl0.rd_n_9 ;
  wire \gntv_or_sync_fifo.gl0.wr_n_1 ;
  wire overflow;
  wire [3:0]p_0_out_0;
  wire [3:0]p_12_out;
  wire [3:0]p_13_out;
  wire p_18_out;
  wire [3:0]p_23_out;
  wire [3:0]p_5_out;
  wire ram_rd_en_i;
  wire rd_clk;
  wire rd_en;
  wire [2:0]rd_pntr_plus1;
  wire [2:0]rd_rst_i;
  wire rst;
  wire rst_full_ff_i;
  wire underflow;
  wire valid;
  wire wr_clk;
  wire wr_en;
  wire [3:0]wr_pntr_plus2;
  wire [1:1]wr_rst_i;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_clk_x_pntrs_8 \gntv_or_sync_fifo.gcx.clkx 
       (.AR(rst_full_ff_i),
        .D({\gntv_or_sync_fifo.gl0.rd_n_8 ,\gntv_or_sync_fifo.gl0.rd_n_9 ,\gntv_or_sync_fifo.gl0.rd_n_10 }),
        .Q(p_23_out),
        .\Q_reg_reg[0] (rd_rst_i[1]),
        .\gnxpm_cdc.rd_pntr_gc_reg[3]_0 (p_0_out_0[3]),
        .\gnxpm_cdc.wr_pntr_bin_reg[0]_0 (\gntv_or_sync_fifo.gcx.clkx/_n_0 ),
        .\gnxpm_cdc.wr_pntr_bin_reg[2]_0 (\gntv_or_sync_fifo.gcx.clkx_n_4 ),
        .\gnxpm_cdc.wr_pntr_gc_reg[3]_0 (p_12_out),
        .out(p_5_out),
        .ram_empty_i_reg(rd_pntr_plus1),
        .ram_full_fb_i_reg(\gntv_or_sync_fifo.gcx.clkx_n_9 ),
        .ram_full_fb_i_reg_0(\gntv_or_sync_fifo.gl0.wr_n_1 ),
        .ram_full_fb_i_reg_1(p_13_out),
        .ram_full_fb_i_reg_2(wr_pntr_plus2),
        .rd_clk(rd_clk),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
  LUT4 #(
    .INIT(16'h6996)) 
    \gntv_or_sync_fifo.gcx.clkx/ 
       (.I0(p_5_out[2]),
        .I1(p_5_out[3]),
        .I2(p_5_out[0]),
        .I3(p_5_out[1]),
        .O(\gntv_or_sync_fifo.gcx.clkx/_n_0 ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_logic__parameterized0 \gntv_or_sync_fifo.gl0.rd 
       (.D({\gntv_or_sync_fifo.gl0.rd_n_8 ,\gntv_or_sync_fifo.gl0.rd_n_9 ,\gntv_or_sync_fifo.gl0.rd_n_10 }),
        .E(ram_rd_en_i),
        .Q(p_23_out),
        .empty(empty),
        .\gc0.count_d1_reg[3] (p_0_out_0),
        .\gc0.count_reg[2] (rd_pntr_plus1),
        .\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] (\gntv_or_sync_fifo.gl0.rd_n_7 ),
        .out({rd_rst_i[2],rd_rst_i[0]}),
        .ram_empty_i_reg(\gntv_or_sync_fifo.gcx.clkx_n_4 ),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .underflow(underflow),
        .valid(valid));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_logic__parameterized0 \gntv_or_sync_fifo.gl0.wr 
       (.E(p_18_out),
        .Q(wr_pntr_plus2),
        .full(full),
        .\gic0.gc0.count_d1_reg[3] (p_13_out),
        .\gic0.gc0.count_d2_reg[3] (p_12_out),
        .\gic0.gc0.count_reg[0] ({wr_rst_i,rst_full_ff_i}),
        .out(\gntv_or_sync_fifo.gl0.wr_n_1 ),
        .overflow(overflow),
        .ram_full_fb_i_reg(\gntv_or_sync_fifo.gcx.clkx_n_9 ),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_memory__parameterized0 \gntv_or_sync_fifo.mem 
       (.E(\gntv_or_sync_fifo.gl0.rd_n_7 ),
        .EN(p_18_out),
        .din(din),
        .dout(dout),
        .\gpr1.dout_i_reg[0] (ram_rd_en_i),
        .\gpr1.dout_i_reg[1] (p_0_out_0),
        .\gpr1.dout_i_reg[1]_0 (p_12_out),
        .rd_clk(rd_clk),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_reset_blk_ramfifo_9 rstblk
       (.\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 (rd_rst_i),
        .out({wr_rst_i,rst_full_ff_i}),
        .rd_clk(rd_clk),
        .rst(rst),
        .wr_clk(wr_clk));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_top
   (empty,
    full,
    underflow,
    overflow,
    dout,
    rd_clk,
    wr_clk,
    rst,
    din,
    rd_en,
    wr_en);
  output empty;
  output full;
  output underflow;
  output overflow;
  output [15:0]dout;
  input rd_clk;
  input wr_clk;
  input rst;
  input [15:0]din;
  input rd_en;
  input wr_en;

  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire overflow;
  wire rd_clk;
  wire rd_en;
  wire rst;
  wire underflow;
  wire wr_clk;
  wire wr_en;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_ramfifo \grf.rf 
       (.din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .overflow(overflow),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rst(rst),
        .underflow(underflow),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
endmodule

(* ORIG_REF_NAME = "fifo_generator_top" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_top__parameterized0
   (empty,
    valid,
    full,
    dout,
    underflow,
    overflow,
    rd_clk,
    wr_clk,
    rst,
    din,
    rd_en,
    wr_en);
  output empty;
  output valid;
  output full;
  output [15:0]dout;
  output underflow;
  output overflow;
  input rd_clk;
  input wr_clk;
  input rst;
  input [15:0]din;
  input rd_en;
  input wr_en;

  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire overflow;
  wire rd_clk;
  wire rd_en;
  wire rst;
  wire underflow;
  wire valid;
  wire wr_clk;
  wire wr_en;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_ramfifo__parameterized0 \grf.rf 
       (.din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .overflow(overflow),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rst(rst),
        .underflow(underflow),
        .valid(valid),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
endmodule

(* C_ADD_NGC_CONSTRAINT = "0" *) (* C_APPLICATION_TYPE_AXIS = "0" *) (* C_APPLICATION_TYPE_RACH = "0" *) 
(* C_APPLICATION_TYPE_RDCH = "0" *) (* C_APPLICATION_TYPE_WACH = "0" *) (* C_APPLICATION_TYPE_WDCH = "0" *) 
(* C_APPLICATION_TYPE_WRCH = "0" *) (* C_AXIS_TDATA_WIDTH = "64" *) (* C_AXIS_TDEST_WIDTH = "4" *) 
(* C_AXIS_TID_WIDTH = "8" *) (* C_AXIS_TKEEP_WIDTH = "4" *) (* C_AXIS_TSTRB_WIDTH = "4" *) 
(* C_AXIS_TUSER_WIDTH = "4" *) (* C_AXIS_TYPE = "0" *) (* C_AXI_ADDR_WIDTH = "32" *) 
(* C_AXI_ARUSER_WIDTH = "1" *) (* C_AXI_AWUSER_WIDTH = "1" *) (* C_AXI_BUSER_WIDTH = "1" *) 
(* C_AXI_DATA_WIDTH = "64" *) (* C_AXI_ID_WIDTH = "4" *) (* C_AXI_LEN_WIDTH = "8" *) 
(* C_AXI_LOCK_WIDTH = "2" *) (* C_AXI_RUSER_WIDTH = "1" *) (* C_AXI_TYPE = "0" *) 
(* C_AXI_WUSER_WIDTH = "1" *) (* C_COMMON_CLOCK = "0" *) (* C_COUNT_TYPE = "0" *) 
(* C_DATA_COUNT_WIDTH = "4" *) (* C_DEFAULT_VALUE = "BlankString" *) (* C_DIN_WIDTH = "16" *) 
(* C_DIN_WIDTH_AXIS = "1" *) (* C_DIN_WIDTH_RACH = "32" *) (* C_DIN_WIDTH_RDCH = "64" *) 
(* C_DIN_WIDTH_WACH = "32" *) (* C_DIN_WIDTH_WDCH = "64" *) (* C_DIN_WIDTH_WRCH = "2" *) 
(* C_DOUT_RST_VAL = "0" *) (* C_DOUT_WIDTH = "16" *) (* C_ENABLE_RLOCS = "0" *) 
(* C_ENABLE_RST_SYNC = "1" *) (* C_EN_SAFETY_CKT = "0" *) (* C_ERROR_INJECTION_TYPE = "0" *) 
(* C_ERROR_INJECTION_TYPE_AXIS = "0" *) (* C_ERROR_INJECTION_TYPE_RACH = "0" *) (* C_ERROR_INJECTION_TYPE_RDCH = "0" *) 
(* C_ERROR_INJECTION_TYPE_WACH = "0" *) (* C_ERROR_INJECTION_TYPE_WDCH = "0" *) (* C_ERROR_INJECTION_TYPE_WRCH = "0" *) 
(* C_FAMILY = "artix7" *) (* C_FULL_FLAGS_RST_VAL = "0" *) (* C_HAS_ALMOST_EMPTY = "0" *) 
(* C_HAS_ALMOST_FULL = "0" *) (* C_HAS_AXIS_TDATA = "0" *) (* C_HAS_AXIS_TDEST = "0" *) 
(* C_HAS_AXIS_TID = "0" *) (* C_HAS_AXIS_TKEEP = "0" *) (* C_HAS_AXIS_TLAST = "0" *) 
(* C_HAS_AXIS_TREADY = "1" *) (* C_HAS_AXIS_TSTRB = "0" *) (* C_HAS_AXIS_TUSER = "0" *) 
(* C_HAS_AXI_ARUSER = "0" *) (* C_HAS_AXI_AWUSER = "0" *) (* C_HAS_AXI_BUSER = "0" *) 
(* C_HAS_AXI_ID = "0" *) (* C_HAS_AXI_RD_CHANNEL = "0" *) (* C_HAS_AXI_RUSER = "0" *) 
(* C_HAS_AXI_WR_CHANNEL = "0" *) (* C_HAS_AXI_WUSER = "0" *) (* C_HAS_BACKUP = "0" *) 
(* C_HAS_DATA_COUNT = "0" *) (* C_HAS_DATA_COUNTS_AXIS = "0" *) (* C_HAS_DATA_COUNTS_RACH = "0" *) 
(* C_HAS_DATA_COUNTS_RDCH = "0" *) (* C_HAS_DATA_COUNTS_WACH = "0" *) (* C_HAS_DATA_COUNTS_WDCH = "0" *) 
(* C_HAS_DATA_COUNTS_WRCH = "0" *) (* C_HAS_INT_CLK = "0" *) (* C_HAS_MASTER_CE = "0" *) 
(* C_HAS_MEMINIT_FILE = "0" *) (* C_HAS_OVERFLOW = "1" *) (* C_HAS_PROG_FLAGS_AXIS = "0" *) 
(* C_HAS_PROG_FLAGS_RACH = "0" *) (* C_HAS_PROG_FLAGS_RDCH = "0" *) (* C_HAS_PROG_FLAGS_WACH = "0" *) 
(* C_HAS_PROG_FLAGS_WDCH = "0" *) (* C_HAS_PROG_FLAGS_WRCH = "0" *) (* C_HAS_RD_DATA_COUNT = "0" *) 
(* C_HAS_RD_RST = "0" *) (* C_HAS_RST = "1" *) (* C_HAS_SLAVE_CE = "0" *) 
(* C_HAS_SRST = "0" *) (* C_HAS_UNDERFLOW = "1" *) (* C_HAS_VALID = "0" *) 
(* C_HAS_WR_ACK = "0" *) (* C_HAS_WR_DATA_COUNT = "0" *) (* C_HAS_WR_RST = "0" *) 
(* C_IMPLEMENTATION_TYPE = "2" *) (* C_IMPLEMENTATION_TYPE_AXIS = "1" *) (* C_IMPLEMENTATION_TYPE_RACH = "1" *) 
(* C_IMPLEMENTATION_TYPE_RDCH = "1" *) (* C_IMPLEMENTATION_TYPE_WACH = "1" *) (* C_IMPLEMENTATION_TYPE_WDCH = "1" *) 
(* C_IMPLEMENTATION_TYPE_WRCH = "1" *) (* C_INIT_WR_PNTR_VAL = "0" *) (* C_INTERFACE_TYPE = "0" *) 
(* C_MEMORY_TYPE = "2" *) (* C_MIF_FILE_NAME = "BlankString" *) (* C_MSGON_VAL = "0" *) 
(* C_OPTIMIZATION_MODE = "0" *) (* C_OVERFLOW_LOW = "0" *) (* C_POWER_SAVING_MODE = "0" *) 
(* C_PRELOAD_LATENCY = "1" *) (* C_PRELOAD_REGS = "0" *) (* C_PRIM_FIFO_TYPE = "512x36" *) 
(* C_PRIM_FIFO_TYPE_AXIS = "512x36" *) (* C_PRIM_FIFO_TYPE_RACH = "512x36" *) (* C_PRIM_FIFO_TYPE_RDCH = "512x36" *) 
(* C_PRIM_FIFO_TYPE_WACH = "512x36" *) (* C_PRIM_FIFO_TYPE_WDCH = "512x36" *) (* C_PRIM_FIFO_TYPE_WRCH = "512x36" *) 
(* C_PROG_EMPTY_THRESH_ASSERT_VAL = "2" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_AXIS = "1022" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RACH = "1022" *) 
(* C_PROG_EMPTY_THRESH_ASSERT_VAL_RDCH = "1022" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WACH = "1022" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WDCH = "1022" *) 
(* C_PROG_EMPTY_THRESH_ASSERT_VAL_WRCH = "1022" *) (* C_PROG_EMPTY_THRESH_NEGATE_VAL = "3" *) (* C_PROG_EMPTY_TYPE = "0" *) 
(* C_PROG_EMPTY_TYPE_AXIS = "0" *) (* C_PROG_EMPTY_TYPE_RACH = "0" *) (* C_PROG_EMPTY_TYPE_RDCH = "0" *) 
(* C_PROG_EMPTY_TYPE_WACH = "0" *) (* C_PROG_EMPTY_TYPE_WDCH = "0" *) (* C_PROG_EMPTY_TYPE_WRCH = "0" *) 
(* C_PROG_FULL_THRESH_ASSERT_VAL = "13" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_AXIS = "1023" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_RACH = "1023" *) 
(* C_PROG_FULL_THRESH_ASSERT_VAL_RDCH = "1023" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_WACH = "1023" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_WDCH = "1023" *) 
(* C_PROG_FULL_THRESH_ASSERT_VAL_WRCH = "1023" *) (* C_PROG_FULL_THRESH_NEGATE_VAL = "12" *) (* C_PROG_FULL_TYPE = "0" *) 
(* C_PROG_FULL_TYPE_AXIS = "0" *) (* C_PROG_FULL_TYPE_RACH = "0" *) (* C_PROG_FULL_TYPE_RDCH = "0" *) 
(* C_PROG_FULL_TYPE_WACH = "0" *) (* C_PROG_FULL_TYPE_WDCH = "0" *) (* C_PROG_FULL_TYPE_WRCH = "0" *) 
(* C_RACH_TYPE = "0" *) (* C_RDCH_TYPE = "0" *) (* C_RD_DATA_COUNT_WIDTH = "4" *) 
(* C_RD_DEPTH = "16" *) (* C_RD_FREQ = "1" *) (* C_RD_PNTR_WIDTH = "4" *) 
(* C_REG_SLICE_MODE_AXIS = "0" *) (* C_REG_SLICE_MODE_RACH = "0" *) (* C_REG_SLICE_MODE_RDCH = "0" *) 
(* C_REG_SLICE_MODE_WACH = "0" *) (* C_REG_SLICE_MODE_WDCH = "0" *) (* C_REG_SLICE_MODE_WRCH = "0" *) 
(* C_SELECT_XPM = "0" *) (* C_SYNCHRONIZER_STAGE = "2" *) (* C_UNDERFLOW_LOW = "0" *) 
(* C_USE_COMMON_OVERFLOW = "0" *) (* C_USE_COMMON_UNDERFLOW = "0" *) (* C_USE_DEFAULT_SETTINGS = "0" *) 
(* C_USE_DOUT_RST = "0" *) (* C_USE_ECC = "0" *) (* C_USE_ECC_AXIS = "0" *) 
(* C_USE_ECC_RACH = "0" *) (* C_USE_ECC_RDCH = "0" *) (* C_USE_ECC_WACH = "0" *) 
(* C_USE_ECC_WDCH = "0" *) (* C_USE_ECC_WRCH = "0" *) (* C_USE_EMBEDDED_REG = "0" *) 
(* C_USE_FIFO16_FLAGS = "0" *) (* C_USE_FWFT_DATA_COUNT = "0" *) (* C_USE_PIPELINE_REG = "0" *) 
(* C_VALID_LOW = "0" *) (* C_WACH_TYPE = "0" *) (* C_WDCH_TYPE = "0" *) 
(* C_WRCH_TYPE = "0" *) (* C_WR_ACK_LOW = "0" *) (* C_WR_DATA_COUNT_WIDTH = "4" *) 
(* C_WR_DEPTH = "16" *) (* C_WR_DEPTH_AXIS = "1024" *) (* C_WR_DEPTH_RACH = "16" *) 
(* C_WR_DEPTH_RDCH = "1024" *) (* C_WR_DEPTH_WACH = "16" *) (* C_WR_DEPTH_WDCH = "1024" *) 
(* C_WR_DEPTH_WRCH = "16" *) (* C_WR_FREQ = "1" *) (* C_WR_PNTR_WIDTH = "4" *) 
(* C_WR_PNTR_WIDTH_AXIS = "10" *) (* C_WR_PNTR_WIDTH_RACH = "4" *) (* C_WR_PNTR_WIDTH_RDCH = "10" *) 
(* C_WR_PNTR_WIDTH_WACH = "4" *) (* C_WR_PNTR_WIDTH_WDCH = "10" *) (* C_WR_PNTR_WIDTH_WRCH = "4" *) 
(* C_WR_RESPONSE_LATENCY = "1" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4
   (backup,
    backup_marker,
    clk,
    rst,
    srst,
    wr_clk,
    wr_rst,
    rd_clk,
    rd_rst,
    din,
    wr_en,
    rd_en,
    prog_empty_thresh,
    prog_empty_thresh_assert,
    prog_empty_thresh_negate,
    prog_full_thresh,
    prog_full_thresh_assert,
    prog_full_thresh_negate,
    int_clk,
    injectdbiterr,
    injectsbiterr,
    sleep,
    dout,
    full,
    almost_full,
    wr_ack,
    overflow,
    empty,
    almost_empty,
    valid,
    underflow,
    data_count,
    rd_data_count,
    wr_data_count,
    prog_full,
    prog_empty,
    sbiterr,
    dbiterr,
    wr_rst_busy,
    rd_rst_busy,
    m_aclk,
    s_aclk,
    s_aresetn,
    m_aclk_en,
    s_aclk_en,
    s_axi_awid,
    s_axi_awaddr,
    s_axi_awlen,
    s_axi_awsize,
    s_axi_awburst,
    s_axi_awlock,
    s_axi_awcache,
    s_axi_awprot,
    s_axi_awqos,
    s_axi_awregion,
    s_axi_awuser,
    s_axi_awvalid,
    s_axi_awready,
    s_axi_wid,
    s_axi_wdata,
    s_axi_wstrb,
    s_axi_wlast,
    s_axi_wuser,
    s_axi_wvalid,
    s_axi_wready,
    s_axi_bid,
    s_axi_bresp,
    s_axi_buser,
    s_axi_bvalid,
    s_axi_bready,
    m_axi_awid,
    m_axi_awaddr,
    m_axi_awlen,
    m_axi_awsize,
    m_axi_awburst,
    m_axi_awlock,
    m_axi_awcache,
    m_axi_awprot,
    m_axi_awqos,
    m_axi_awregion,
    m_axi_awuser,
    m_axi_awvalid,
    m_axi_awready,
    m_axi_wid,
    m_axi_wdata,
    m_axi_wstrb,
    m_axi_wlast,
    m_axi_wuser,
    m_axi_wvalid,
    m_axi_wready,
    m_axi_bid,
    m_axi_bresp,
    m_axi_buser,
    m_axi_bvalid,
    m_axi_bready,
    s_axi_arid,
    s_axi_araddr,
    s_axi_arlen,
    s_axi_arsize,
    s_axi_arburst,
    s_axi_arlock,
    s_axi_arcache,
    s_axi_arprot,
    s_axi_arqos,
    s_axi_arregion,
    s_axi_aruser,
    s_axi_arvalid,
    s_axi_arready,
    s_axi_rid,
    s_axi_rdata,
    s_axi_rresp,
    s_axi_rlast,
    s_axi_ruser,
    s_axi_rvalid,
    s_axi_rready,
    m_axi_arid,
    m_axi_araddr,
    m_axi_arlen,
    m_axi_arsize,
    m_axi_arburst,
    m_axi_arlock,
    m_axi_arcache,
    m_axi_arprot,
    m_axi_arqos,
    m_axi_arregion,
    m_axi_aruser,
    m_axi_arvalid,
    m_axi_arready,
    m_axi_rid,
    m_axi_rdata,
    m_axi_rresp,
    m_axi_rlast,
    m_axi_ruser,
    m_axi_rvalid,
    m_axi_rready,
    s_axis_tvalid,
    s_axis_tready,
    s_axis_tdata,
    s_axis_tstrb,
    s_axis_tkeep,
    s_axis_tlast,
    s_axis_tid,
    s_axis_tdest,
    s_axis_tuser,
    m_axis_tvalid,
    m_axis_tready,
    m_axis_tdata,
    m_axis_tstrb,
    m_axis_tkeep,
    m_axis_tlast,
    m_axis_tid,
    m_axis_tdest,
    m_axis_tuser,
    axi_aw_injectsbiterr,
    axi_aw_injectdbiterr,
    axi_aw_prog_full_thresh,
    axi_aw_prog_empty_thresh,
    axi_aw_data_count,
    axi_aw_wr_data_count,
    axi_aw_rd_data_count,
    axi_aw_sbiterr,
    axi_aw_dbiterr,
    axi_aw_overflow,
    axi_aw_underflow,
    axi_aw_prog_full,
    axi_aw_prog_empty,
    axi_w_injectsbiterr,
    axi_w_injectdbiterr,
    axi_w_prog_full_thresh,
    axi_w_prog_empty_thresh,
    axi_w_data_count,
    axi_w_wr_data_count,
    axi_w_rd_data_count,
    axi_w_sbiterr,
    axi_w_dbiterr,
    axi_w_overflow,
    axi_w_underflow,
    axi_w_prog_full,
    axi_w_prog_empty,
    axi_b_injectsbiterr,
    axi_b_injectdbiterr,
    axi_b_prog_full_thresh,
    axi_b_prog_empty_thresh,
    axi_b_data_count,
    axi_b_wr_data_count,
    axi_b_rd_data_count,
    axi_b_sbiterr,
    axi_b_dbiterr,
    axi_b_overflow,
    axi_b_underflow,
    axi_b_prog_full,
    axi_b_prog_empty,
    axi_ar_injectsbiterr,
    axi_ar_injectdbiterr,
    axi_ar_prog_full_thresh,
    axi_ar_prog_empty_thresh,
    axi_ar_data_count,
    axi_ar_wr_data_count,
    axi_ar_rd_data_count,
    axi_ar_sbiterr,
    axi_ar_dbiterr,
    axi_ar_overflow,
    axi_ar_underflow,
    axi_ar_prog_full,
    axi_ar_prog_empty,
    axi_r_injectsbiterr,
    axi_r_injectdbiterr,
    axi_r_prog_full_thresh,
    axi_r_prog_empty_thresh,
    axi_r_data_count,
    axi_r_wr_data_count,
    axi_r_rd_data_count,
    axi_r_sbiterr,
    axi_r_dbiterr,
    axi_r_overflow,
    axi_r_underflow,
    axi_r_prog_full,
    axi_r_prog_empty,
    axis_injectsbiterr,
    axis_injectdbiterr,
    axis_prog_full_thresh,
    axis_prog_empty_thresh,
    axis_data_count,
    axis_wr_data_count,
    axis_rd_data_count,
    axis_sbiterr,
    axis_dbiterr,
    axis_overflow,
    axis_underflow,
    axis_prog_full,
    axis_prog_empty);
  input backup;
  input backup_marker;
  input clk;
  input rst;
  input srst;
  input wr_clk;
  input wr_rst;
  input rd_clk;
  input rd_rst;
  input [15:0]din;
  input wr_en;
  input rd_en;
  input [3:0]prog_empty_thresh;
  input [3:0]prog_empty_thresh_assert;
  input [3:0]prog_empty_thresh_negate;
  input [3:0]prog_full_thresh;
  input [3:0]prog_full_thresh_assert;
  input [3:0]prog_full_thresh_negate;
  input int_clk;
  input injectdbiterr;
  input injectsbiterr;
  input sleep;
  output [15:0]dout;
  output full;
  output almost_full;
  output wr_ack;
  output overflow;
  output empty;
  output almost_empty;
  output valid;
  output underflow;
  output [3:0]data_count;
  output [3:0]rd_data_count;
  output [3:0]wr_data_count;
  output prog_full;
  output prog_empty;
  output sbiterr;
  output dbiterr;
  output wr_rst_busy;
  output rd_rst_busy;
  input m_aclk;
  input s_aclk;
  input s_aresetn;
  input m_aclk_en;
  input s_aclk_en;
  input [3:0]s_axi_awid;
  input [31:0]s_axi_awaddr;
  input [7:0]s_axi_awlen;
  input [2:0]s_axi_awsize;
  input [1:0]s_axi_awburst;
  input [1:0]s_axi_awlock;
  input [3:0]s_axi_awcache;
  input [2:0]s_axi_awprot;
  input [3:0]s_axi_awqos;
  input [3:0]s_axi_awregion;
  input [0:0]s_axi_awuser;
  input s_axi_awvalid;
  output s_axi_awready;
  input [3:0]s_axi_wid;
  input [63:0]s_axi_wdata;
  input [7:0]s_axi_wstrb;
  input s_axi_wlast;
  input [0:0]s_axi_wuser;
  input s_axi_wvalid;
  output s_axi_wready;
  output [3:0]s_axi_bid;
  output [1:0]s_axi_bresp;
  output [0:0]s_axi_buser;
  output s_axi_bvalid;
  input s_axi_bready;
  output [3:0]m_axi_awid;
  output [31:0]m_axi_awaddr;
  output [7:0]m_axi_awlen;
  output [2:0]m_axi_awsize;
  output [1:0]m_axi_awburst;
  output [1:0]m_axi_awlock;
  output [3:0]m_axi_awcache;
  output [2:0]m_axi_awprot;
  output [3:0]m_axi_awqos;
  output [3:0]m_axi_awregion;
  output [0:0]m_axi_awuser;
  output m_axi_awvalid;
  input m_axi_awready;
  output [3:0]m_axi_wid;
  output [63:0]m_axi_wdata;
  output [7:0]m_axi_wstrb;
  output m_axi_wlast;
  output [0:0]m_axi_wuser;
  output m_axi_wvalid;
  input m_axi_wready;
  input [3:0]m_axi_bid;
  input [1:0]m_axi_bresp;
  input [0:0]m_axi_buser;
  input m_axi_bvalid;
  output m_axi_bready;
  input [3:0]s_axi_arid;
  input [31:0]s_axi_araddr;
  input [7:0]s_axi_arlen;
  input [2:0]s_axi_arsize;
  input [1:0]s_axi_arburst;
  input [1:0]s_axi_arlock;
  input [3:0]s_axi_arcache;
  input [2:0]s_axi_arprot;
  input [3:0]s_axi_arqos;
  input [3:0]s_axi_arregion;
  input [0:0]s_axi_aruser;
  input s_axi_arvalid;
  output s_axi_arready;
  output [3:0]s_axi_rid;
  output [63:0]s_axi_rdata;
  output [1:0]s_axi_rresp;
  output s_axi_rlast;
  output [0:0]s_axi_ruser;
  output s_axi_rvalid;
  input s_axi_rready;
  output [3:0]m_axi_arid;
  output [31:0]m_axi_araddr;
  output [7:0]m_axi_arlen;
  output [2:0]m_axi_arsize;
  output [1:0]m_axi_arburst;
  output [1:0]m_axi_arlock;
  output [3:0]m_axi_arcache;
  output [2:0]m_axi_arprot;
  output [3:0]m_axi_arqos;
  output [3:0]m_axi_arregion;
  output [0:0]m_axi_aruser;
  output m_axi_arvalid;
  input m_axi_arready;
  input [3:0]m_axi_rid;
  input [63:0]m_axi_rdata;
  input [1:0]m_axi_rresp;
  input m_axi_rlast;
  input [0:0]m_axi_ruser;
  input m_axi_rvalid;
  output m_axi_rready;
  input s_axis_tvalid;
  output s_axis_tready;
  input [63:0]s_axis_tdata;
  input [3:0]s_axis_tstrb;
  input [3:0]s_axis_tkeep;
  input s_axis_tlast;
  input [7:0]s_axis_tid;
  input [3:0]s_axis_tdest;
  input [3:0]s_axis_tuser;
  output m_axis_tvalid;
  input m_axis_tready;
  output [63:0]m_axis_tdata;
  output [3:0]m_axis_tstrb;
  output [3:0]m_axis_tkeep;
  output m_axis_tlast;
  output [7:0]m_axis_tid;
  output [3:0]m_axis_tdest;
  output [3:0]m_axis_tuser;
  input axi_aw_injectsbiterr;
  input axi_aw_injectdbiterr;
  input [3:0]axi_aw_prog_full_thresh;
  input [3:0]axi_aw_prog_empty_thresh;
  output [4:0]axi_aw_data_count;
  output [4:0]axi_aw_wr_data_count;
  output [4:0]axi_aw_rd_data_count;
  output axi_aw_sbiterr;
  output axi_aw_dbiterr;
  output axi_aw_overflow;
  output axi_aw_underflow;
  output axi_aw_prog_full;
  output axi_aw_prog_empty;
  input axi_w_injectsbiterr;
  input axi_w_injectdbiterr;
  input [9:0]axi_w_prog_full_thresh;
  input [9:0]axi_w_prog_empty_thresh;
  output [10:0]axi_w_data_count;
  output [10:0]axi_w_wr_data_count;
  output [10:0]axi_w_rd_data_count;
  output axi_w_sbiterr;
  output axi_w_dbiterr;
  output axi_w_overflow;
  output axi_w_underflow;
  output axi_w_prog_full;
  output axi_w_prog_empty;
  input axi_b_injectsbiterr;
  input axi_b_injectdbiterr;
  input [3:0]axi_b_prog_full_thresh;
  input [3:0]axi_b_prog_empty_thresh;
  output [4:0]axi_b_data_count;
  output [4:0]axi_b_wr_data_count;
  output [4:0]axi_b_rd_data_count;
  output axi_b_sbiterr;
  output axi_b_dbiterr;
  output axi_b_overflow;
  output axi_b_underflow;
  output axi_b_prog_full;
  output axi_b_prog_empty;
  input axi_ar_injectsbiterr;
  input axi_ar_injectdbiterr;
  input [3:0]axi_ar_prog_full_thresh;
  input [3:0]axi_ar_prog_empty_thresh;
  output [4:0]axi_ar_data_count;
  output [4:0]axi_ar_wr_data_count;
  output [4:0]axi_ar_rd_data_count;
  output axi_ar_sbiterr;
  output axi_ar_dbiterr;
  output axi_ar_overflow;
  output axi_ar_underflow;
  output axi_ar_prog_full;
  output axi_ar_prog_empty;
  input axi_r_injectsbiterr;
  input axi_r_injectdbiterr;
  input [9:0]axi_r_prog_full_thresh;
  input [9:0]axi_r_prog_empty_thresh;
  output [10:0]axi_r_data_count;
  output [10:0]axi_r_wr_data_count;
  output [10:0]axi_r_rd_data_count;
  output axi_r_sbiterr;
  output axi_r_dbiterr;
  output axi_r_overflow;
  output axi_r_underflow;
  output axi_r_prog_full;
  output axi_r_prog_empty;
  input axis_injectsbiterr;
  input axis_injectdbiterr;
  input [9:0]axis_prog_full_thresh;
  input [9:0]axis_prog_empty_thresh;
  output [10:0]axis_data_count;
  output [10:0]axis_wr_data_count;
  output [10:0]axis_rd_data_count;
  output axis_sbiterr;
  output axis_dbiterr;
  output axis_overflow;
  output axis_underflow;
  output axis_prog_full;
  output axis_prog_empty;

  wire \<const0> ;
  wire \<const1> ;
  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire overflow;
  wire rd_clk;
  wire rd_en;
  wire rst;
  wire underflow;
  wire wr_clk;
  wire wr_en;

  assign almost_empty = \<const0> ;
  assign almost_full = \<const0> ;
  assign axi_ar_data_count[4] = \<const0> ;
  assign axi_ar_data_count[3] = \<const0> ;
  assign axi_ar_data_count[2] = \<const0> ;
  assign axi_ar_data_count[1] = \<const0> ;
  assign axi_ar_data_count[0] = \<const0> ;
  assign axi_ar_dbiterr = \<const0> ;
  assign axi_ar_overflow = \<const0> ;
  assign axi_ar_prog_empty = \<const1> ;
  assign axi_ar_prog_full = \<const0> ;
  assign axi_ar_rd_data_count[4] = \<const0> ;
  assign axi_ar_rd_data_count[3] = \<const0> ;
  assign axi_ar_rd_data_count[2] = \<const0> ;
  assign axi_ar_rd_data_count[1] = \<const0> ;
  assign axi_ar_rd_data_count[0] = \<const0> ;
  assign axi_ar_sbiterr = \<const0> ;
  assign axi_ar_underflow = \<const0> ;
  assign axi_ar_wr_data_count[4] = \<const0> ;
  assign axi_ar_wr_data_count[3] = \<const0> ;
  assign axi_ar_wr_data_count[2] = \<const0> ;
  assign axi_ar_wr_data_count[1] = \<const0> ;
  assign axi_ar_wr_data_count[0] = \<const0> ;
  assign axi_aw_data_count[4] = \<const0> ;
  assign axi_aw_data_count[3] = \<const0> ;
  assign axi_aw_data_count[2] = \<const0> ;
  assign axi_aw_data_count[1] = \<const0> ;
  assign axi_aw_data_count[0] = \<const0> ;
  assign axi_aw_dbiterr = \<const0> ;
  assign axi_aw_overflow = \<const0> ;
  assign axi_aw_prog_empty = \<const1> ;
  assign axi_aw_prog_full = \<const0> ;
  assign axi_aw_rd_data_count[4] = \<const0> ;
  assign axi_aw_rd_data_count[3] = \<const0> ;
  assign axi_aw_rd_data_count[2] = \<const0> ;
  assign axi_aw_rd_data_count[1] = \<const0> ;
  assign axi_aw_rd_data_count[0] = \<const0> ;
  assign axi_aw_sbiterr = \<const0> ;
  assign axi_aw_underflow = \<const0> ;
  assign axi_aw_wr_data_count[4] = \<const0> ;
  assign axi_aw_wr_data_count[3] = \<const0> ;
  assign axi_aw_wr_data_count[2] = \<const0> ;
  assign axi_aw_wr_data_count[1] = \<const0> ;
  assign axi_aw_wr_data_count[0] = \<const0> ;
  assign axi_b_data_count[4] = \<const0> ;
  assign axi_b_data_count[3] = \<const0> ;
  assign axi_b_data_count[2] = \<const0> ;
  assign axi_b_data_count[1] = \<const0> ;
  assign axi_b_data_count[0] = \<const0> ;
  assign axi_b_dbiterr = \<const0> ;
  assign axi_b_overflow = \<const0> ;
  assign axi_b_prog_empty = \<const1> ;
  assign axi_b_prog_full = \<const0> ;
  assign axi_b_rd_data_count[4] = \<const0> ;
  assign axi_b_rd_data_count[3] = \<const0> ;
  assign axi_b_rd_data_count[2] = \<const0> ;
  assign axi_b_rd_data_count[1] = \<const0> ;
  assign axi_b_rd_data_count[0] = \<const0> ;
  assign axi_b_sbiterr = \<const0> ;
  assign axi_b_underflow = \<const0> ;
  assign axi_b_wr_data_count[4] = \<const0> ;
  assign axi_b_wr_data_count[3] = \<const0> ;
  assign axi_b_wr_data_count[2] = \<const0> ;
  assign axi_b_wr_data_count[1] = \<const0> ;
  assign axi_b_wr_data_count[0] = \<const0> ;
  assign axi_r_data_count[10] = \<const0> ;
  assign axi_r_data_count[9] = \<const0> ;
  assign axi_r_data_count[8] = \<const0> ;
  assign axi_r_data_count[7] = \<const0> ;
  assign axi_r_data_count[6] = \<const0> ;
  assign axi_r_data_count[5] = \<const0> ;
  assign axi_r_data_count[4] = \<const0> ;
  assign axi_r_data_count[3] = \<const0> ;
  assign axi_r_data_count[2] = \<const0> ;
  assign axi_r_data_count[1] = \<const0> ;
  assign axi_r_data_count[0] = \<const0> ;
  assign axi_r_dbiterr = \<const0> ;
  assign axi_r_overflow = \<const0> ;
  assign axi_r_prog_empty = \<const1> ;
  assign axi_r_prog_full = \<const0> ;
  assign axi_r_rd_data_count[10] = \<const0> ;
  assign axi_r_rd_data_count[9] = \<const0> ;
  assign axi_r_rd_data_count[8] = \<const0> ;
  assign axi_r_rd_data_count[7] = \<const0> ;
  assign axi_r_rd_data_count[6] = \<const0> ;
  assign axi_r_rd_data_count[5] = \<const0> ;
  assign axi_r_rd_data_count[4] = \<const0> ;
  assign axi_r_rd_data_count[3] = \<const0> ;
  assign axi_r_rd_data_count[2] = \<const0> ;
  assign axi_r_rd_data_count[1] = \<const0> ;
  assign axi_r_rd_data_count[0] = \<const0> ;
  assign axi_r_sbiterr = \<const0> ;
  assign axi_r_underflow = \<const0> ;
  assign axi_r_wr_data_count[10] = \<const0> ;
  assign axi_r_wr_data_count[9] = \<const0> ;
  assign axi_r_wr_data_count[8] = \<const0> ;
  assign axi_r_wr_data_count[7] = \<const0> ;
  assign axi_r_wr_data_count[6] = \<const0> ;
  assign axi_r_wr_data_count[5] = \<const0> ;
  assign axi_r_wr_data_count[4] = \<const0> ;
  assign axi_r_wr_data_count[3] = \<const0> ;
  assign axi_r_wr_data_count[2] = \<const0> ;
  assign axi_r_wr_data_count[1] = \<const0> ;
  assign axi_r_wr_data_count[0] = \<const0> ;
  assign axi_w_data_count[10] = \<const0> ;
  assign axi_w_data_count[9] = \<const0> ;
  assign axi_w_data_count[8] = \<const0> ;
  assign axi_w_data_count[7] = \<const0> ;
  assign axi_w_data_count[6] = \<const0> ;
  assign axi_w_data_count[5] = \<const0> ;
  assign axi_w_data_count[4] = \<const0> ;
  assign axi_w_data_count[3] = \<const0> ;
  assign axi_w_data_count[2] = \<const0> ;
  assign axi_w_data_count[1] = \<const0> ;
  assign axi_w_data_count[0] = \<const0> ;
  assign axi_w_dbiterr = \<const0> ;
  assign axi_w_overflow = \<const0> ;
  assign axi_w_prog_empty = \<const1> ;
  assign axi_w_prog_full = \<const0> ;
  assign axi_w_rd_data_count[10] = \<const0> ;
  assign axi_w_rd_data_count[9] = \<const0> ;
  assign axi_w_rd_data_count[8] = \<const0> ;
  assign axi_w_rd_data_count[7] = \<const0> ;
  assign axi_w_rd_data_count[6] = \<const0> ;
  assign axi_w_rd_data_count[5] = \<const0> ;
  assign axi_w_rd_data_count[4] = \<const0> ;
  assign axi_w_rd_data_count[3] = \<const0> ;
  assign axi_w_rd_data_count[2] = \<const0> ;
  assign axi_w_rd_data_count[1] = \<const0> ;
  assign axi_w_rd_data_count[0] = \<const0> ;
  assign axi_w_sbiterr = \<const0> ;
  assign axi_w_underflow = \<const0> ;
  assign axi_w_wr_data_count[10] = \<const0> ;
  assign axi_w_wr_data_count[9] = \<const0> ;
  assign axi_w_wr_data_count[8] = \<const0> ;
  assign axi_w_wr_data_count[7] = \<const0> ;
  assign axi_w_wr_data_count[6] = \<const0> ;
  assign axi_w_wr_data_count[5] = \<const0> ;
  assign axi_w_wr_data_count[4] = \<const0> ;
  assign axi_w_wr_data_count[3] = \<const0> ;
  assign axi_w_wr_data_count[2] = \<const0> ;
  assign axi_w_wr_data_count[1] = \<const0> ;
  assign axi_w_wr_data_count[0] = \<const0> ;
  assign axis_data_count[10] = \<const0> ;
  assign axis_data_count[9] = \<const0> ;
  assign axis_data_count[8] = \<const0> ;
  assign axis_data_count[7] = \<const0> ;
  assign axis_data_count[6] = \<const0> ;
  assign axis_data_count[5] = \<const0> ;
  assign axis_data_count[4] = \<const0> ;
  assign axis_data_count[3] = \<const0> ;
  assign axis_data_count[2] = \<const0> ;
  assign axis_data_count[1] = \<const0> ;
  assign axis_data_count[0] = \<const0> ;
  assign axis_dbiterr = \<const0> ;
  assign axis_overflow = \<const0> ;
  assign axis_prog_empty = \<const1> ;
  assign axis_prog_full = \<const0> ;
  assign axis_rd_data_count[10] = \<const0> ;
  assign axis_rd_data_count[9] = \<const0> ;
  assign axis_rd_data_count[8] = \<const0> ;
  assign axis_rd_data_count[7] = \<const0> ;
  assign axis_rd_data_count[6] = \<const0> ;
  assign axis_rd_data_count[5] = \<const0> ;
  assign axis_rd_data_count[4] = \<const0> ;
  assign axis_rd_data_count[3] = \<const0> ;
  assign axis_rd_data_count[2] = \<const0> ;
  assign axis_rd_data_count[1] = \<const0> ;
  assign axis_rd_data_count[0] = \<const0> ;
  assign axis_sbiterr = \<const0> ;
  assign axis_underflow = \<const0> ;
  assign axis_wr_data_count[10] = \<const0> ;
  assign axis_wr_data_count[9] = \<const0> ;
  assign axis_wr_data_count[8] = \<const0> ;
  assign axis_wr_data_count[7] = \<const0> ;
  assign axis_wr_data_count[6] = \<const0> ;
  assign axis_wr_data_count[5] = \<const0> ;
  assign axis_wr_data_count[4] = \<const0> ;
  assign axis_wr_data_count[3] = \<const0> ;
  assign axis_wr_data_count[2] = \<const0> ;
  assign axis_wr_data_count[1] = \<const0> ;
  assign axis_wr_data_count[0] = \<const0> ;
  assign data_count[3] = \<const0> ;
  assign data_count[2] = \<const0> ;
  assign data_count[1] = \<const0> ;
  assign data_count[0] = \<const0> ;
  assign dbiterr = \<const0> ;
  assign m_axi_araddr[31] = \<const0> ;
  assign m_axi_araddr[30] = \<const0> ;
  assign m_axi_araddr[29] = \<const0> ;
  assign m_axi_araddr[28] = \<const0> ;
  assign m_axi_araddr[27] = \<const0> ;
  assign m_axi_araddr[26] = \<const0> ;
  assign m_axi_araddr[25] = \<const0> ;
  assign m_axi_araddr[24] = \<const0> ;
  assign m_axi_araddr[23] = \<const0> ;
  assign m_axi_araddr[22] = \<const0> ;
  assign m_axi_araddr[21] = \<const0> ;
  assign m_axi_araddr[20] = \<const0> ;
  assign m_axi_araddr[19] = \<const0> ;
  assign m_axi_araddr[18] = \<const0> ;
  assign m_axi_araddr[17] = \<const0> ;
  assign m_axi_araddr[16] = \<const0> ;
  assign m_axi_araddr[15] = \<const0> ;
  assign m_axi_araddr[14] = \<const0> ;
  assign m_axi_araddr[13] = \<const0> ;
  assign m_axi_araddr[12] = \<const0> ;
  assign m_axi_araddr[11] = \<const0> ;
  assign m_axi_araddr[10] = \<const0> ;
  assign m_axi_araddr[9] = \<const0> ;
  assign m_axi_araddr[8] = \<const0> ;
  assign m_axi_araddr[7] = \<const0> ;
  assign m_axi_araddr[6] = \<const0> ;
  assign m_axi_araddr[5] = \<const0> ;
  assign m_axi_araddr[4] = \<const0> ;
  assign m_axi_araddr[3] = \<const0> ;
  assign m_axi_araddr[2] = \<const0> ;
  assign m_axi_araddr[1] = \<const0> ;
  assign m_axi_araddr[0] = \<const0> ;
  assign m_axi_arburst[1] = \<const0> ;
  assign m_axi_arburst[0] = \<const0> ;
  assign m_axi_arcache[3] = \<const0> ;
  assign m_axi_arcache[2] = \<const0> ;
  assign m_axi_arcache[1] = \<const0> ;
  assign m_axi_arcache[0] = \<const0> ;
  assign m_axi_arid[3] = \<const0> ;
  assign m_axi_arid[2] = \<const0> ;
  assign m_axi_arid[1] = \<const0> ;
  assign m_axi_arid[0] = \<const0> ;
  assign m_axi_arlen[7] = \<const0> ;
  assign m_axi_arlen[6] = \<const0> ;
  assign m_axi_arlen[5] = \<const0> ;
  assign m_axi_arlen[4] = \<const0> ;
  assign m_axi_arlen[3] = \<const0> ;
  assign m_axi_arlen[2] = \<const0> ;
  assign m_axi_arlen[1] = \<const0> ;
  assign m_axi_arlen[0] = \<const0> ;
  assign m_axi_arlock[1] = \<const0> ;
  assign m_axi_arlock[0] = \<const0> ;
  assign m_axi_arprot[2] = \<const0> ;
  assign m_axi_arprot[1] = \<const0> ;
  assign m_axi_arprot[0] = \<const0> ;
  assign m_axi_arqos[3] = \<const0> ;
  assign m_axi_arqos[2] = \<const0> ;
  assign m_axi_arqos[1] = \<const0> ;
  assign m_axi_arqos[0] = \<const0> ;
  assign m_axi_arregion[3] = \<const0> ;
  assign m_axi_arregion[2] = \<const0> ;
  assign m_axi_arregion[1] = \<const0> ;
  assign m_axi_arregion[0] = \<const0> ;
  assign m_axi_arsize[2] = \<const0> ;
  assign m_axi_arsize[1] = \<const0> ;
  assign m_axi_arsize[0] = \<const0> ;
  assign m_axi_aruser[0] = \<const0> ;
  assign m_axi_arvalid = \<const0> ;
  assign m_axi_awaddr[31] = \<const0> ;
  assign m_axi_awaddr[30] = \<const0> ;
  assign m_axi_awaddr[29] = \<const0> ;
  assign m_axi_awaddr[28] = \<const0> ;
  assign m_axi_awaddr[27] = \<const0> ;
  assign m_axi_awaddr[26] = \<const0> ;
  assign m_axi_awaddr[25] = \<const0> ;
  assign m_axi_awaddr[24] = \<const0> ;
  assign m_axi_awaddr[23] = \<const0> ;
  assign m_axi_awaddr[22] = \<const0> ;
  assign m_axi_awaddr[21] = \<const0> ;
  assign m_axi_awaddr[20] = \<const0> ;
  assign m_axi_awaddr[19] = \<const0> ;
  assign m_axi_awaddr[18] = \<const0> ;
  assign m_axi_awaddr[17] = \<const0> ;
  assign m_axi_awaddr[16] = \<const0> ;
  assign m_axi_awaddr[15] = \<const0> ;
  assign m_axi_awaddr[14] = \<const0> ;
  assign m_axi_awaddr[13] = \<const0> ;
  assign m_axi_awaddr[12] = \<const0> ;
  assign m_axi_awaddr[11] = \<const0> ;
  assign m_axi_awaddr[10] = \<const0> ;
  assign m_axi_awaddr[9] = \<const0> ;
  assign m_axi_awaddr[8] = \<const0> ;
  assign m_axi_awaddr[7] = \<const0> ;
  assign m_axi_awaddr[6] = \<const0> ;
  assign m_axi_awaddr[5] = \<const0> ;
  assign m_axi_awaddr[4] = \<const0> ;
  assign m_axi_awaddr[3] = \<const0> ;
  assign m_axi_awaddr[2] = \<const0> ;
  assign m_axi_awaddr[1] = \<const0> ;
  assign m_axi_awaddr[0] = \<const0> ;
  assign m_axi_awburst[1] = \<const0> ;
  assign m_axi_awburst[0] = \<const0> ;
  assign m_axi_awcache[3] = \<const0> ;
  assign m_axi_awcache[2] = \<const0> ;
  assign m_axi_awcache[1] = \<const0> ;
  assign m_axi_awcache[0] = \<const0> ;
  assign m_axi_awid[3] = \<const0> ;
  assign m_axi_awid[2] = \<const0> ;
  assign m_axi_awid[1] = \<const0> ;
  assign m_axi_awid[0] = \<const0> ;
  assign m_axi_awlen[7] = \<const0> ;
  assign m_axi_awlen[6] = \<const0> ;
  assign m_axi_awlen[5] = \<const0> ;
  assign m_axi_awlen[4] = \<const0> ;
  assign m_axi_awlen[3] = \<const0> ;
  assign m_axi_awlen[2] = \<const0> ;
  assign m_axi_awlen[1] = \<const0> ;
  assign m_axi_awlen[0] = \<const0> ;
  assign m_axi_awlock[1] = \<const0> ;
  assign m_axi_awlock[0] = \<const0> ;
  assign m_axi_awprot[2] = \<const0> ;
  assign m_axi_awprot[1] = \<const0> ;
  assign m_axi_awprot[0] = \<const0> ;
  assign m_axi_awqos[3] = \<const0> ;
  assign m_axi_awqos[2] = \<const0> ;
  assign m_axi_awqos[1] = \<const0> ;
  assign m_axi_awqos[0] = \<const0> ;
  assign m_axi_awregion[3] = \<const0> ;
  assign m_axi_awregion[2] = \<const0> ;
  assign m_axi_awregion[1] = \<const0> ;
  assign m_axi_awregion[0] = \<const0> ;
  assign m_axi_awsize[2] = \<const0> ;
  assign m_axi_awsize[1] = \<const0> ;
  assign m_axi_awsize[0] = \<const0> ;
  assign m_axi_awuser[0] = \<const0> ;
  assign m_axi_awvalid = \<const0> ;
  assign m_axi_bready = \<const0> ;
  assign m_axi_rready = \<const0> ;
  assign m_axi_wdata[63] = \<const0> ;
  assign m_axi_wdata[62] = \<const0> ;
  assign m_axi_wdata[61] = \<const0> ;
  assign m_axi_wdata[60] = \<const0> ;
  assign m_axi_wdata[59] = \<const0> ;
  assign m_axi_wdata[58] = \<const0> ;
  assign m_axi_wdata[57] = \<const0> ;
  assign m_axi_wdata[56] = \<const0> ;
  assign m_axi_wdata[55] = \<const0> ;
  assign m_axi_wdata[54] = \<const0> ;
  assign m_axi_wdata[53] = \<const0> ;
  assign m_axi_wdata[52] = \<const0> ;
  assign m_axi_wdata[51] = \<const0> ;
  assign m_axi_wdata[50] = \<const0> ;
  assign m_axi_wdata[49] = \<const0> ;
  assign m_axi_wdata[48] = \<const0> ;
  assign m_axi_wdata[47] = \<const0> ;
  assign m_axi_wdata[46] = \<const0> ;
  assign m_axi_wdata[45] = \<const0> ;
  assign m_axi_wdata[44] = \<const0> ;
  assign m_axi_wdata[43] = \<const0> ;
  assign m_axi_wdata[42] = \<const0> ;
  assign m_axi_wdata[41] = \<const0> ;
  assign m_axi_wdata[40] = \<const0> ;
  assign m_axi_wdata[39] = \<const0> ;
  assign m_axi_wdata[38] = \<const0> ;
  assign m_axi_wdata[37] = \<const0> ;
  assign m_axi_wdata[36] = \<const0> ;
  assign m_axi_wdata[35] = \<const0> ;
  assign m_axi_wdata[34] = \<const0> ;
  assign m_axi_wdata[33] = \<const0> ;
  assign m_axi_wdata[32] = \<const0> ;
  assign m_axi_wdata[31] = \<const0> ;
  assign m_axi_wdata[30] = \<const0> ;
  assign m_axi_wdata[29] = \<const0> ;
  assign m_axi_wdata[28] = \<const0> ;
  assign m_axi_wdata[27] = \<const0> ;
  assign m_axi_wdata[26] = \<const0> ;
  assign m_axi_wdata[25] = \<const0> ;
  assign m_axi_wdata[24] = \<const0> ;
  assign m_axi_wdata[23] = \<const0> ;
  assign m_axi_wdata[22] = \<const0> ;
  assign m_axi_wdata[21] = \<const0> ;
  assign m_axi_wdata[20] = \<const0> ;
  assign m_axi_wdata[19] = \<const0> ;
  assign m_axi_wdata[18] = \<const0> ;
  assign m_axi_wdata[17] = \<const0> ;
  assign m_axi_wdata[16] = \<const0> ;
  assign m_axi_wdata[15] = \<const0> ;
  assign m_axi_wdata[14] = \<const0> ;
  assign m_axi_wdata[13] = \<const0> ;
  assign m_axi_wdata[12] = \<const0> ;
  assign m_axi_wdata[11] = \<const0> ;
  assign m_axi_wdata[10] = \<const0> ;
  assign m_axi_wdata[9] = \<const0> ;
  assign m_axi_wdata[8] = \<const0> ;
  assign m_axi_wdata[7] = \<const0> ;
  assign m_axi_wdata[6] = \<const0> ;
  assign m_axi_wdata[5] = \<const0> ;
  assign m_axi_wdata[4] = \<const0> ;
  assign m_axi_wdata[3] = \<const0> ;
  assign m_axi_wdata[2] = \<const0> ;
  assign m_axi_wdata[1] = \<const0> ;
  assign m_axi_wdata[0] = \<const0> ;
  assign m_axi_wid[3] = \<const0> ;
  assign m_axi_wid[2] = \<const0> ;
  assign m_axi_wid[1] = \<const0> ;
  assign m_axi_wid[0] = \<const0> ;
  assign m_axi_wlast = \<const0> ;
  assign m_axi_wstrb[7] = \<const0> ;
  assign m_axi_wstrb[6] = \<const0> ;
  assign m_axi_wstrb[5] = \<const0> ;
  assign m_axi_wstrb[4] = \<const0> ;
  assign m_axi_wstrb[3] = \<const0> ;
  assign m_axi_wstrb[2] = \<const0> ;
  assign m_axi_wstrb[1] = \<const0> ;
  assign m_axi_wstrb[0] = \<const0> ;
  assign m_axi_wuser[0] = \<const0> ;
  assign m_axi_wvalid = \<const0> ;
  assign m_axis_tdata[63] = \<const0> ;
  assign m_axis_tdata[62] = \<const0> ;
  assign m_axis_tdata[61] = \<const0> ;
  assign m_axis_tdata[60] = \<const0> ;
  assign m_axis_tdata[59] = \<const0> ;
  assign m_axis_tdata[58] = \<const0> ;
  assign m_axis_tdata[57] = \<const0> ;
  assign m_axis_tdata[56] = \<const0> ;
  assign m_axis_tdata[55] = \<const0> ;
  assign m_axis_tdata[54] = \<const0> ;
  assign m_axis_tdata[53] = \<const0> ;
  assign m_axis_tdata[52] = \<const0> ;
  assign m_axis_tdata[51] = \<const0> ;
  assign m_axis_tdata[50] = \<const0> ;
  assign m_axis_tdata[49] = \<const0> ;
  assign m_axis_tdata[48] = \<const0> ;
  assign m_axis_tdata[47] = \<const0> ;
  assign m_axis_tdata[46] = \<const0> ;
  assign m_axis_tdata[45] = \<const0> ;
  assign m_axis_tdata[44] = \<const0> ;
  assign m_axis_tdata[43] = \<const0> ;
  assign m_axis_tdata[42] = \<const0> ;
  assign m_axis_tdata[41] = \<const0> ;
  assign m_axis_tdata[40] = \<const0> ;
  assign m_axis_tdata[39] = \<const0> ;
  assign m_axis_tdata[38] = \<const0> ;
  assign m_axis_tdata[37] = \<const0> ;
  assign m_axis_tdata[36] = \<const0> ;
  assign m_axis_tdata[35] = \<const0> ;
  assign m_axis_tdata[34] = \<const0> ;
  assign m_axis_tdata[33] = \<const0> ;
  assign m_axis_tdata[32] = \<const0> ;
  assign m_axis_tdata[31] = \<const0> ;
  assign m_axis_tdata[30] = \<const0> ;
  assign m_axis_tdata[29] = \<const0> ;
  assign m_axis_tdata[28] = \<const0> ;
  assign m_axis_tdata[27] = \<const0> ;
  assign m_axis_tdata[26] = \<const0> ;
  assign m_axis_tdata[25] = \<const0> ;
  assign m_axis_tdata[24] = \<const0> ;
  assign m_axis_tdata[23] = \<const0> ;
  assign m_axis_tdata[22] = \<const0> ;
  assign m_axis_tdata[21] = \<const0> ;
  assign m_axis_tdata[20] = \<const0> ;
  assign m_axis_tdata[19] = \<const0> ;
  assign m_axis_tdata[18] = \<const0> ;
  assign m_axis_tdata[17] = \<const0> ;
  assign m_axis_tdata[16] = \<const0> ;
  assign m_axis_tdata[15] = \<const0> ;
  assign m_axis_tdata[14] = \<const0> ;
  assign m_axis_tdata[13] = \<const0> ;
  assign m_axis_tdata[12] = \<const0> ;
  assign m_axis_tdata[11] = \<const0> ;
  assign m_axis_tdata[10] = \<const0> ;
  assign m_axis_tdata[9] = \<const0> ;
  assign m_axis_tdata[8] = \<const0> ;
  assign m_axis_tdata[7] = \<const0> ;
  assign m_axis_tdata[6] = \<const0> ;
  assign m_axis_tdata[5] = \<const0> ;
  assign m_axis_tdata[4] = \<const0> ;
  assign m_axis_tdata[3] = \<const0> ;
  assign m_axis_tdata[2] = \<const0> ;
  assign m_axis_tdata[1] = \<const0> ;
  assign m_axis_tdata[0] = \<const0> ;
  assign m_axis_tdest[3] = \<const0> ;
  assign m_axis_tdest[2] = \<const0> ;
  assign m_axis_tdest[1] = \<const0> ;
  assign m_axis_tdest[0] = \<const0> ;
  assign m_axis_tid[7] = \<const0> ;
  assign m_axis_tid[6] = \<const0> ;
  assign m_axis_tid[5] = \<const0> ;
  assign m_axis_tid[4] = \<const0> ;
  assign m_axis_tid[3] = \<const0> ;
  assign m_axis_tid[2] = \<const0> ;
  assign m_axis_tid[1] = \<const0> ;
  assign m_axis_tid[0] = \<const0> ;
  assign m_axis_tkeep[3] = \<const0> ;
  assign m_axis_tkeep[2] = \<const0> ;
  assign m_axis_tkeep[1] = \<const0> ;
  assign m_axis_tkeep[0] = \<const0> ;
  assign m_axis_tlast = \<const0> ;
  assign m_axis_tstrb[3] = \<const0> ;
  assign m_axis_tstrb[2] = \<const0> ;
  assign m_axis_tstrb[1] = \<const0> ;
  assign m_axis_tstrb[0] = \<const0> ;
  assign m_axis_tuser[3] = \<const0> ;
  assign m_axis_tuser[2] = \<const0> ;
  assign m_axis_tuser[1] = \<const0> ;
  assign m_axis_tuser[0] = \<const0> ;
  assign m_axis_tvalid = \<const0> ;
  assign prog_empty = \<const0> ;
  assign prog_full = \<const0> ;
  assign rd_data_count[3] = \<const0> ;
  assign rd_data_count[2] = \<const0> ;
  assign rd_data_count[1] = \<const0> ;
  assign rd_data_count[0] = \<const0> ;
  assign rd_rst_busy = \<const0> ;
  assign s_axi_arready = \<const0> ;
  assign s_axi_awready = \<const0> ;
  assign s_axi_bid[3] = \<const0> ;
  assign s_axi_bid[2] = \<const0> ;
  assign s_axi_bid[1] = \<const0> ;
  assign s_axi_bid[0] = \<const0> ;
  assign s_axi_bresp[1] = \<const0> ;
  assign s_axi_bresp[0] = \<const0> ;
  assign s_axi_buser[0] = \<const0> ;
  assign s_axi_bvalid = \<const0> ;
  assign s_axi_rdata[63] = \<const0> ;
  assign s_axi_rdata[62] = \<const0> ;
  assign s_axi_rdata[61] = \<const0> ;
  assign s_axi_rdata[60] = \<const0> ;
  assign s_axi_rdata[59] = \<const0> ;
  assign s_axi_rdata[58] = \<const0> ;
  assign s_axi_rdata[57] = \<const0> ;
  assign s_axi_rdata[56] = \<const0> ;
  assign s_axi_rdata[55] = \<const0> ;
  assign s_axi_rdata[54] = \<const0> ;
  assign s_axi_rdata[53] = \<const0> ;
  assign s_axi_rdata[52] = \<const0> ;
  assign s_axi_rdata[51] = \<const0> ;
  assign s_axi_rdata[50] = \<const0> ;
  assign s_axi_rdata[49] = \<const0> ;
  assign s_axi_rdata[48] = \<const0> ;
  assign s_axi_rdata[47] = \<const0> ;
  assign s_axi_rdata[46] = \<const0> ;
  assign s_axi_rdata[45] = \<const0> ;
  assign s_axi_rdata[44] = \<const0> ;
  assign s_axi_rdata[43] = \<const0> ;
  assign s_axi_rdata[42] = \<const0> ;
  assign s_axi_rdata[41] = \<const0> ;
  assign s_axi_rdata[40] = \<const0> ;
  assign s_axi_rdata[39] = \<const0> ;
  assign s_axi_rdata[38] = \<const0> ;
  assign s_axi_rdata[37] = \<const0> ;
  assign s_axi_rdata[36] = \<const0> ;
  assign s_axi_rdata[35] = \<const0> ;
  assign s_axi_rdata[34] = \<const0> ;
  assign s_axi_rdata[33] = \<const0> ;
  assign s_axi_rdata[32] = \<const0> ;
  assign s_axi_rdata[31] = \<const0> ;
  assign s_axi_rdata[30] = \<const0> ;
  assign s_axi_rdata[29] = \<const0> ;
  assign s_axi_rdata[28] = \<const0> ;
  assign s_axi_rdata[27] = \<const0> ;
  assign s_axi_rdata[26] = \<const0> ;
  assign s_axi_rdata[25] = \<const0> ;
  assign s_axi_rdata[24] = \<const0> ;
  assign s_axi_rdata[23] = \<const0> ;
  assign s_axi_rdata[22] = \<const0> ;
  assign s_axi_rdata[21] = \<const0> ;
  assign s_axi_rdata[20] = \<const0> ;
  assign s_axi_rdata[19] = \<const0> ;
  assign s_axi_rdata[18] = \<const0> ;
  assign s_axi_rdata[17] = \<const0> ;
  assign s_axi_rdata[16] = \<const0> ;
  assign s_axi_rdata[15] = \<const0> ;
  assign s_axi_rdata[14] = \<const0> ;
  assign s_axi_rdata[13] = \<const0> ;
  assign s_axi_rdata[12] = \<const0> ;
  assign s_axi_rdata[11] = \<const0> ;
  assign s_axi_rdata[10] = \<const0> ;
  assign s_axi_rdata[9] = \<const0> ;
  assign s_axi_rdata[8] = \<const0> ;
  assign s_axi_rdata[7] = \<const0> ;
  assign s_axi_rdata[6] = \<const0> ;
  assign s_axi_rdata[5] = \<const0> ;
  assign s_axi_rdata[4] = \<const0> ;
  assign s_axi_rdata[3] = \<const0> ;
  assign s_axi_rdata[2] = \<const0> ;
  assign s_axi_rdata[1] = \<const0> ;
  assign s_axi_rdata[0] = \<const0> ;
  assign s_axi_rid[3] = \<const0> ;
  assign s_axi_rid[2] = \<const0> ;
  assign s_axi_rid[1] = \<const0> ;
  assign s_axi_rid[0] = \<const0> ;
  assign s_axi_rlast = \<const0> ;
  assign s_axi_rresp[1] = \<const0> ;
  assign s_axi_rresp[0] = \<const0> ;
  assign s_axi_ruser[0] = \<const0> ;
  assign s_axi_rvalid = \<const0> ;
  assign s_axi_wready = \<const0> ;
  assign s_axis_tready = \<const0> ;
  assign sbiterr = \<const0> ;
  assign valid = \<const0> ;
  assign wr_ack = \<const0> ;
  assign wr_data_count[3] = \<const0> ;
  assign wr_data_count[2] = \<const0> ;
  assign wr_data_count[1] = \<const0> ;
  assign wr_data_count[0] = \<const0> ;
  assign wr_rst_busy = \<const0> ;
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4_synth inst_fifo_gen
       (.din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .overflow(overflow),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rst(rst),
        .underflow(underflow),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
endmodule

(* C_ADD_NGC_CONSTRAINT = "0" *) (* C_APPLICATION_TYPE_AXIS = "0" *) (* C_APPLICATION_TYPE_RACH = "0" *) 
(* C_APPLICATION_TYPE_RDCH = "0" *) (* C_APPLICATION_TYPE_WACH = "0" *) (* C_APPLICATION_TYPE_WDCH = "0" *) 
(* C_APPLICATION_TYPE_WRCH = "0" *) (* C_AXIS_TDATA_WIDTH = "64" *) (* C_AXIS_TDEST_WIDTH = "4" *) 
(* C_AXIS_TID_WIDTH = "8" *) (* C_AXIS_TKEEP_WIDTH = "4" *) (* C_AXIS_TSTRB_WIDTH = "4" *) 
(* C_AXIS_TUSER_WIDTH = "4" *) (* C_AXIS_TYPE = "0" *) (* C_AXI_ADDR_WIDTH = "32" *) 
(* C_AXI_ARUSER_WIDTH = "1" *) (* C_AXI_AWUSER_WIDTH = "1" *) (* C_AXI_BUSER_WIDTH = "1" *) 
(* C_AXI_DATA_WIDTH = "64" *) (* C_AXI_ID_WIDTH = "4" *) (* C_AXI_LEN_WIDTH = "8" *) 
(* C_AXI_LOCK_WIDTH = "2" *) (* C_AXI_RUSER_WIDTH = "1" *) (* C_AXI_TYPE = "0" *) 
(* C_AXI_WUSER_WIDTH = "1" *) (* C_COMMON_CLOCK = "0" *) (* C_COUNT_TYPE = "0" *) 
(* C_DATA_COUNT_WIDTH = "4" *) (* C_DEFAULT_VALUE = "BlankString" *) (* C_DIN_WIDTH = "16" *) 
(* C_DIN_WIDTH_AXIS = "1" *) (* C_DIN_WIDTH_RACH = "32" *) (* C_DIN_WIDTH_RDCH = "64" *) 
(* C_DIN_WIDTH_WACH = "32" *) (* C_DIN_WIDTH_WDCH = "64" *) (* C_DIN_WIDTH_WRCH = "2" *) 
(* C_DOUT_RST_VAL = "0" *) (* C_DOUT_WIDTH = "16" *) (* C_ENABLE_RLOCS = "0" *) 
(* C_ENABLE_RST_SYNC = "1" *) (* C_EN_SAFETY_CKT = "0" *) (* C_ERROR_INJECTION_TYPE = "0" *) 
(* C_ERROR_INJECTION_TYPE_AXIS = "0" *) (* C_ERROR_INJECTION_TYPE_RACH = "0" *) (* C_ERROR_INJECTION_TYPE_RDCH = "0" *) 
(* C_ERROR_INJECTION_TYPE_WACH = "0" *) (* C_ERROR_INJECTION_TYPE_WDCH = "0" *) (* C_ERROR_INJECTION_TYPE_WRCH = "0" *) 
(* C_FAMILY = "artix7" *) (* C_FULL_FLAGS_RST_VAL = "0" *) (* C_HAS_ALMOST_EMPTY = "0" *) 
(* C_HAS_ALMOST_FULL = "0" *) (* C_HAS_AXIS_TDATA = "0" *) (* C_HAS_AXIS_TDEST = "0" *) 
(* C_HAS_AXIS_TID = "0" *) (* C_HAS_AXIS_TKEEP = "0" *) (* C_HAS_AXIS_TLAST = "0" *) 
(* C_HAS_AXIS_TREADY = "1" *) (* C_HAS_AXIS_TSTRB = "0" *) (* C_HAS_AXIS_TUSER = "0" *) 
(* C_HAS_AXI_ARUSER = "0" *) (* C_HAS_AXI_AWUSER = "0" *) (* C_HAS_AXI_BUSER = "0" *) 
(* C_HAS_AXI_ID = "0" *) (* C_HAS_AXI_RD_CHANNEL = "0" *) (* C_HAS_AXI_RUSER = "0" *) 
(* C_HAS_AXI_WR_CHANNEL = "0" *) (* C_HAS_AXI_WUSER = "0" *) (* C_HAS_BACKUP = "0" *) 
(* C_HAS_DATA_COUNT = "0" *) (* C_HAS_DATA_COUNTS_AXIS = "0" *) (* C_HAS_DATA_COUNTS_RACH = "0" *) 
(* C_HAS_DATA_COUNTS_RDCH = "0" *) (* C_HAS_DATA_COUNTS_WACH = "0" *) (* C_HAS_DATA_COUNTS_WDCH = "0" *) 
(* C_HAS_DATA_COUNTS_WRCH = "0" *) (* C_HAS_INT_CLK = "0" *) (* C_HAS_MASTER_CE = "0" *) 
(* C_HAS_MEMINIT_FILE = "0" *) (* C_HAS_OVERFLOW = "1" *) (* C_HAS_PROG_FLAGS_AXIS = "0" *) 
(* C_HAS_PROG_FLAGS_RACH = "0" *) (* C_HAS_PROG_FLAGS_RDCH = "0" *) (* C_HAS_PROG_FLAGS_WACH = "0" *) 
(* C_HAS_PROG_FLAGS_WDCH = "0" *) (* C_HAS_PROG_FLAGS_WRCH = "0" *) (* C_HAS_RD_DATA_COUNT = "0" *) 
(* C_HAS_RD_RST = "0" *) (* C_HAS_RST = "1" *) (* C_HAS_SLAVE_CE = "0" *) 
(* C_HAS_SRST = "0" *) (* C_HAS_UNDERFLOW = "1" *) (* C_HAS_VALID = "1" *) 
(* C_HAS_WR_ACK = "0" *) (* C_HAS_WR_DATA_COUNT = "0" *) (* C_HAS_WR_RST = "0" *) 
(* C_IMPLEMENTATION_TYPE = "2" *) (* C_IMPLEMENTATION_TYPE_AXIS = "1" *) (* C_IMPLEMENTATION_TYPE_RACH = "1" *) 
(* C_IMPLEMENTATION_TYPE_RDCH = "1" *) (* C_IMPLEMENTATION_TYPE_WACH = "1" *) (* C_IMPLEMENTATION_TYPE_WDCH = "1" *) 
(* C_IMPLEMENTATION_TYPE_WRCH = "1" *) (* C_INIT_WR_PNTR_VAL = "0" *) (* C_INTERFACE_TYPE = "0" *) 
(* C_MEMORY_TYPE = "2" *) (* C_MIF_FILE_NAME = "BlankString" *) (* C_MSGON_VAL = "0" *) 
(* C_OPTIMIZATION_MODE = "0" *) (* C_OVERFLOW_LOW = "0" *) (* C_POWER_SAVING_MODE = "0" *) 
(* C_PRELOAD_LATENCY = "0" *) (* C_PRELOAD_REGS = "1" *) (* C_PRIM_FIFO_TYPE = "512x36" *) 
(* C_PRIM_FIFO_TYPE_AXIS = "512x36" *) (* C_PRIM_FIFO_TYPE_RACH = "512x36" *) (* C_PRIM_FIFO_TYPE_RDCH = "512x36" *) 
(* C_PRIM_FIFO_TYPE_WACH = "512x36" *) (* C_PRIM_FIFO_TYPE_WDCH = "512x36" *) (* C_PRIM_FIFO_TYPE_WRCH = "512x36" *) 
(* C_PROG_EMPTY_THRESH_ASSERT_VAL = "4" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_AXIS = "1022" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RACH = "1022" *) 
(* C_PROG_EMPTY_THRESH_ASSERT_VAL_RDCH = "1022" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WACH = "1022" *) (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WDCH = "1022" *) 
(* C_PROG_EMPTY_THRESH_ASSERT_VAL_WRCH = "1022" *) (* C_PROG_EMPTY_THRESH_NEGATE_VAL = "5" *) (* C_PROG_EMPTY_TYPE = "0" *) 
(* C_PROG_EMPTY_TYPE_AXIS = "0" *) (* C_PROG_EMPTY_TYPE_RACH = "0" *) (* C_PROG_EMPTY_TYPE_RDCH = "0" *) 
(* C_PROG_EMPTY_TYPE_WACH = "0" *) (* C_PROG_EMPTY_TYPE_WDCH = "0" *) (* C_PROG_EMPTY_TYPE_WRCH = "0" *) 
(* C_PROG_FULL_THRESH_ASSERT_VAL = "15" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_AXIS = "1023" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_RACH = "1023" *) 
(* C_PROG_FULL_THRESH_ASSERT_VAL_RDCH = "1023" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_WACH = "1023" *) (* C_PROG_FULL_THRESH_ASSERT_VAL_WDCH = "1023" *) 
(* C_PROG_FULL_THRESH_ASSERT_VAL_WRCH = "1023" *) (* C_PROG_FULL_THRESH_NEGATE_VAL = "14" *) (* C_PROG_FULL_TYPE = "0" *) 
(* C_PROG_FULL_TYPE_AXIS = "0" *) (* C_PROG_FULL_TYPE_RACH = "0" *) (* C_PROG_FULL_TYPE_RDCH = "0" *) 
(* C_PROG_FULL_TYPE_WACH = "0" *) (* C_PROG_FULL_TYPE_WDCH = "0" *) (* C_PROG_FULL_TYPE_WRCH = "0" *) 
(* C_RACH_TYPE = "0" *) (* C_RDCH_TYPE = "0" *) (* C_RD_DATA_COUNT_WIDTH = "4" *) 
(* C_RD_DEPTH = "16" *) (* C_RD_FREQ = "1" *) (* C_RD_PNTR_WIDTH = "4" *) 
(* C_REG_SLICE_MODE_AXIS = "0" *) (* C_REG_SLICE_MODE_RACH = "0" *) (* C_REG_SLICE_MODE_RDCH = "0" *) 
(* C_REG_SLICE_MODE_WACH = "0" *) (* C_REG_SLICE_MODE_WDCH = "0" *) (* C_REG_SLICE_MODE_WRCH = "0" *) 
(* C_SELECT_XPM = "0" *) (* C_SYNCHRONIZER_STAGE = "2" *) (* C_UNDERFLOW_LOW = "0" *) 
(* C_USE_COMMON_OVERFLOW = "0" *) (* C_USE_COMMON_UNDERFLOW = "0" *) (* C_USE_DEFAULT_SETTINGS = "0" *) 
(* C_USE_DOUT_RST = "0" *) (* C_USE_ECC = "0" *) (* C_USE_ECC_AXIS = "0" *) 
(* C_USE_ECC_RACH = "0" *) (* C_USE_ECC_RDCH = "0" *) (* C_USE_ECC_WACH = "0" *) 
(* C_USE_ECC_WDCH = "0" *) (* C_USE_ECC_WRCH = "0" *) (* C_USE_EMBEDDED_REG = "0" *) 
(* C_USE_FIFO16_FLAGS = "0" *) (* C_USE_FWFT_DATA_COUNT = "0" *) (* C_USE_PIPELINE_REG = "0" *) 
(* C_VALID_LOW = "0" *) (* C_WACH_TYPE = "0" *) (* C_WDCH_TYPE = "0" *) 
(* C_WRCH_TYPE = "0" *) (* C_WR_ACK_LOW = "0" *) (* C_WR_DATA_COUNT_WIDTH = "4" *) 
(* C_WR_DEPTH = "16" *) (* C_WR_DEPTH_AXIS = "1024" *) (* C_WR_DEPTH_RACH = "16" *) 
(* C_WR_DEPTH_RDCH = "1024" *) (* C_WR_DEPTH_WACH = "16" *) (* C_WR_DEPTH_WDCH = "1024" *) 
(* C_WR_DEPTH_WRCH = "16" *) (* C_WR_FREQ = "1" *) (* C_WR_PNTR_WIDTH = "4" *) 
(* C_WR_PNTR_WIDTH_AXIS = "10" *) (* C_WR_PNTR_WIDTH_RACH = "4" *) (* C_WR_PNTR_WIDTH_RDCH = "10" *) 
(* C_WR_PNTR_WIDTH_WACH = "4" *) (* C_WR_PNTR_WIDTH_WDCH = "10" *) (* C_WR_PNTR_WIDTH_WRCH = "4" *) 
(* C_WR_RESPONSE_LATENCY = "1" *) (* ORIG_REF_NAME = "fifo_generator_v13_1_4" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4__parameterized0
   (backup,
    backup_marker,
    clk,
    rst,
    srst,
    wr_clk,
    wr_rst,
    rd_clk,
    rd_rst,
    din,
    wr_en,
    rd_en,
    prog_empty_thresh,
    prog_empty_thresh_assert,
    prog_empty_thresh_negate,
    prog_full_thresh,
    prog_full_thresh_assert,
    prog_full_thresh_negate,
    int_clk,
    injectdbiterr,
    injectsbiterr,
    sleep,
    dout,
    full,
    almost_full,
    wr_ack,
    overflow,
    empty,
    almost_empty,
    valid,
    underflow,
    data_count,
    rd_data_count,
    wr_data_count,
    prog_full,
    prog_empty,
    sbiterr,
    dbiterr,
    wr_rst_busy,
    rd_rst_busy,
    m_aclk,
    s_aclk,
    s_aresetn,
    m_aclk_en,
    s_aclk_en,
    s_axi_awid,
    s_axi_awaddr,
    s_axi_awlen,
    s_axi_awsize,
    s_axi_awburst,
    s_axi_awlock,
    s_axi_awcache,
    s_axi_awprot,
    s_axi_awqos,
    s_axi_awregion,
    s_axi_awuser,
    s_axi_awvalid,
    s_axi_awready,
    s_axi_wid,
    s_axi_wdata,
    s_axi_wstrb,
    s_axi_wlast,
    s_axi_wuser,
    s_axi_wvalid,
    s_axi_wready,
    s_axi_bid,
    s_axi_bresp,
    s_axi_buser,
    s_axi_bvalid,
    s_axi_bready,
    m_axi_awid,
    m_axi_awaddr,
    m_axi_awlen,
    m_axi_awsize,
    m_axi_awburst,
    m_axi_awlock,
    m_axi_awcache,
    m_axi_awprot,
    m_axi_awqos,
    m_axi_awregion,
    m_axi_awuser,
    m_axi_awvalid,
    m_axi_awready,
    m_axi_wid,
    m_axi_wdata,
    m_axi_wstrb,
    m_axi_wlast,
    m_axi_wuser,
    m_axi_wvalid,
    m_axi_wready,
    m_axi_bid,
    m_axi_bresp,
    m_axi_buser,
    m_axi_bvalid,
    m_axi_bready,
    s_axi_arid,
    s_axi_araddr,
    s_axi_arlen,
    s_axi_arsize,
    s_axi_arburst,
    s_axi_arlock,
    s_axi_arcache,
    s_axi_arprot,
    s_axi_arqos,
    s_axi_arregion,
    s_axi_aruser,
    s_axi_arvalid,
    s_axi_arready,
    s_axi_rid,
    s_axi_rdata,
    s_axi_rresp,
    s_axi_rlast,
    s_axi_ruser,
    s_axi_rvalid,
    s_axi_rready,
    m_axi_arid,
    m_axi_araddr,
    m_axi_arlen,
    m_axi_arsize,
    m_axi_arburst,
    m_axi_arlock,
    m_axi_arcache,
    m_axi_arprot,
    m_axi_arqos,
    m_axi_arregion,
    m_axi_aruser,
    m_axi_arvalid,
    m_axi_arready,
    m_axi_rid,
    m_axi_rdata,
    m_axi_rresp,
    m_axi_rlast,
    m_axi_ruser,
    m_axi_rvalid,
    m_axi_rready,
    s_axis_tvalid,
    s_axis_tready,
    s_axis_tdata,
    s_axis_tstrb,
    s_axis_tkeep,
    s_axis_tlast,
    s_axis_tid,
    s_axis_tdest,
    s_axis_tuser,
    m_axis_tvalid,
    m_axis_tready,
    m_axis_tdata,
    m_axis_tstrb,
    m_axis_tkeep,
    m_axis_tlast,
    m_axis_tid,
    m_axis_tdest,
    m_axis_tuser,
    axi_aw_injectsbiterr,
    axi_aw_injectdbiterr,
    axi_aw_prog_full_thresh,
    axi_aw_prog_empty_thresh,
    axi_aw_data_count,
    axi_aw_wr_data_count,
    axi_aw_rd_data_count,
    axi_aw_sbiterr,
    axi_aw_dbiterr,
    axi_aw_overflow,
    axi_aw_underflow,
    axi_aw_prog_full,
    axi_aw_prog_empty,
    axi_w_injectsbiterr,
    axi_w_injectdbiterr,
    axi_w_prog_full_thresh,
    axi_w_prog_empty_thresh,
    axi_w_data_count,
    axi_w_wr_data_count,
    axi_w_rd_data_count,
    axi_w_sbiterr,
    axi_w_dbiterr,
    axi_w_overflow,
    axi_w_underflow,
    axi_w_prog_full,
    axi_w_prog_empty,
    axi_b_injectsbiterr,
    axi_b_injectdbiterr,
    axi_b_prog_full_thresh,
    axi_b_prog_empty_thresh,
    axi_b_data_count,
    axi_b_wr_data_count,
    axi_b_rd_data_count,
    axi_b_sbiterr,
    axi_b_dbiterr,
    axi_b_overflow,
    axi_b_underflow,
    axi_b_prog_full,
    axi_b_prog_empty,
    axi_ar_injectsbiterr,
    axi_ar_injectdbiterr,
    axi_ar_prog_full_thresh,
    axi_ar_prog_empty_thresh,
    axi_ar_data_count,
    axi_ar_wr_data_count,
    axi_ar_rd_data_count,
    axi_ar_sbiterr,
    axi_ar_dbiterr,
    axi_ar_overflow,
    axi_ar_underflow,
    axi_ar_prog_full,
    axi_ar_prog_empty,
    axi_r_injectsbiterr,
    axi_r_injectdbiterr,
    axi_r_prog_full_thresh,
    axi_r_prog_empty_thresh,
    axi_r_data_count,
    axi_r_wr_data_count,
    axi_r_rd_data_count,
    axi_r_sbiterr,
    axi_r_dbiterr,
    axi_r_overflow,
    axi_r_underflow,
    axi_r_prog_full,
    axi_r_prog_empty,
    axis_injectsbiterr,
    axis_injectdbiterr,
    axis_prog_full_thresh,
    axis_prog_empty_thresh,
    axis_data_count,
    axis_wr_data_count,
    axis_rd_data_count,
    axis_sbiterr,
    axis_dbiterr,
    axis_overflow,
    axis_underflow,
    axis_prog_full,
    axis_prog_empty);
  input backup;
  input backup_marker;
  input clk;
  input rst;
  input srst;
  input wr_clk;
  input wr_rst;
  input rd_clk;
  input rd_rst;
  input [15:0]din;
  input wr_en;
  input rd_en;
  input [3:0]prog_empty_thresh;
  input [3:0]prog_empty_thresh_assert;
  input [3:0]prog_empty_thresh_negate;
  input [3:0]prog_full_thresh;
  input [3:0]prog_full_thresh_assert;
  input [3:0]prog_full_thresh_negate;
  input int_clk;
  input injectdbiterr;
  input injectsbiterr;
  input sleep;
  output [15:0]dout;
  output full;
  output almost_full;
  output wr_ack;
  output overflow;
  output empty;
  output almost_empty;
  output valid;
  output underflow;
  output [3:0]data_count;
  output [3:0]rd_data_count;
  output [3:0]wr_data_count;
  output prog_full;
  output prog_empty;
  output sbiterr;
  output dbiterr;
  output wr_rst_busy;
  output rd_rst_busy;
  input m_aclk;
  input s_aclk;
  input s_aresetn;
  input m_aclk_en;
  input s_aclk_en;
  input [3:0]s_axi_awid;
  input [31:0]s_axi_awaddr;
  input [7:0]s_axi_awlen;
  input [2:0]s_axi_awsize;
  input [1:0]s_axi_awburst;
  input [1:0]s_axi_awlock;
  input [3:0]s_axi_awcache;
  input [2:0]s_axi_awprot;
  input [3:0]s_axi_awqos;
  input [3:0]s_axi_awregion;
  input [0:0]s_axi_awuser;
  input s_axi_awvalid;
  output s_axi_awready;
  input [3:0]s_axi_wid;
  input [63:0]s_axi_wdata;
  input [7:0]s_axi_wstrb;
  input s_axi_wlast;
  input [0:0]s_axi_wuser;
  input s_axi_wvalid;
  output s_axi_wready;
  output [3:0]s_axi_bid;
  output [1:0]s_axi_bresp;
  output [0:0]s_axi_buser;
  output s_axi_bvalid;
  input s_axi_bready;
  output [3:0]m_axi_awid;
  output [31:0]m_axi_awaddr;
  output [7:0]m_axi_awlen;
  output [2:0]m_axi_awsize;
  output [1:0]m_axi_awburst;
  output [1:0]m_axi_awlock;
  output [3:0]m_axi_awcache;
  output [2:0]m_axi_awprot;
  output [3:0]m_axi_awqos;
  output [3:0]m_axi_awregion;
  output [0:0]m_axi_awuser;
  output m_axi_awvalid;
  input m_axi_awready;
  output [3:0]m_axi_wid;
  output [63:0]m_axi_wdata;
  output [7:0]m_axi_wstrb;
  output m_axi_wlast;
  output [0:0]m_axi_wuser;
  output m_axi_wvalid;
  input m_axi_wready;
  input [3:0]m_axi_bid;
  input [1:0]m_axi_bresp;
  input [0:0]m_axi_buser;
  input m_axi_bvalid;
  output m_axi_bready;
  input [3:0]s_axi_arid;
  input [31:0]s_axi_araddr;
  input [7:0]s_axi_arlen;
  input [2:0]s_axi_arsize;
  input [1:0]s_axi_arburst;
  input [1:0]s_axi_arlock;
  input [3:0]s_axi_arcache;
  input [2:0]s_axi_arprot;
  input [3:0]s_axi_arqos;
  input [3:0]s_axi_arregion;
  input [0:0]s_axi_aruser;
  input s_axi_arvalid;
  output s_axi_arready;
  output [3:0]s_axi_rid;
  output [63:0]s_axi_rdata;
  output [1:0]s_axi_rresp;
  output s_axi_rlast;
  output [0:0]s_axi_ruser;
  output s_axi_rvalid;
  input s_axi_rready;
  output [3:0]m_axi_arid;
  output [31:0]m_axi_araddr;
  output [7:0]m_axi_arlen;
  output [2:0]m_axi_arsize;
  output [1:0]m_axi_arburst;
  output [1:0]m_axi_arlock;
  output [3:0]m_axi_arcache;
  output [2:0]m_axi_arprot;
  output [3:0]m_axi_arqos;
  output [3:0]m_axi_arregion;
  output [0:0]m_axi_aruser;
  output m_axi_arvalid;
  input m_axi_arready;
  input [3:0]m_axi_rid;
  input [63:0]m_axi_rdata;
  input [1:0]m_axi_rresp;
  input m_axi_rlast;
  input [0:0]m_axi_ruser;
  input m_axi_rvalid;
  output m_axi_rready;
  input s_axis_tvalid;
  output s_axis_tready;
  input [63:0]s_axis_tdata;
  input [3:0]s_axis_tstrb;
  input [3:0]s_axis_tkeep;
  input s_axis_tlast;
  input [7:0]s_axis_tid;
  input [3:0]s_axis_tdest;
  input [3:0]s_axis_tuser;
  output m_axis_tvalid;
  input m_axis_tready;
  output [63:0]m_axis_tdata;
  output [3:0]m_axis_tstrb;
  output [3:0]m_axis_tkeep;
  output m_axis_tlast;
  output [7:0]m_axis_tid;
  output [3:0]m_axis_tdest;
  output [3:0]m_axis_tuser;
  input axi_aw_injectsbiterr;
  input axi_aw_injectdbiterr;
  input [3:0]axi_aw_prog_full_thresh;
  input [3:0]axi_aw_prog_empty_thresh;
  output [4:0]axi_aw_data_count;
  output [4:0]axi_aw_wr_data_count;
  output [4:0]axi_aw_rd_data_count;
  output axi_aw_sbiterr;
  output axi_aw_dbiterr;
  output axi_aw_overflow;
  output axi_aw_underflow;
  output axi_aw_prog_full;
  output axi_aw_prog_empty;
  input axi_w_injectsbiterr;
  input axi_w_injectdbiterr;
  input [9:0]axi_w_prog_full_thresh;
  input [9:0]axi_w_prog_empty_thresh;
  output [10:0]axi_w_data_count;
  output [10:0]axi_w_wr_data_count;
  output [10:0]axi_w_rd_data_count;
  output axi_w_sbiterr;
  output axi_w_dbiterr;
  output axi_w_overflow;
  output axi_w_underflow;
  output axi_w_prog_full;
  output axi_w_prog_empty;
  input axi_b_injectsbiterr;
  input axi_b_injectdbiterr;
  input [3:0]axi_b_prog_full_thresh;
  input [3:0]axi_b_prog_empty_thresh;
  output [4:0]axi_b_data_count;
  output [4:0]axi_b_wr_data_count;
  output [4:0]axi_b_rd_data_count;
  output axi_b_sbiterr;
  output axi_b_dbiterr;
  output axi_b_overflow;
  output axi_b_underflow;
  output axi_b_prog_full;
  output axi_b_prog_empty;
  input axi_ar_injectsbiterr;
  input axi_ar_injectdbiterr;
  input [3:0]axi_ar_prog_full_thresh;
  input [3:0]axi_ar_prog_empty_thresh;
  output [4:0]axi_ar_data_count;
  output [4:0]axi_ar_wr_data_count;
  output [4:0]axi_ar_rd_data_count;
  output axi_ar_sbiterr;
  output axi_ar_dbiterr;
  output axi_ar_overflow;
  output axi_ar_underflow;
  output axi_ar_prog_full;
  output axi_ar_prog_empty;
  input axi_r_injectsbiterr;
  input axi_r_injectdbiterr;
  input [9:0]axi_r_prog_full_thresh;
  input [9:0]axi_r_prog_empty_thresh;
  output [10:0]axi_r_data_count;
  output [10:0]axi_r_wr_data_count;
  output [10:0]axi_r_rd_data_count;
  output axi_r_sbiterr;
  output axi_r_dbiterr;
  output axi_r_overflow;
  output axi_r_underflow;
  output axi_r_prog_full;
  output axi_r_prog_empty;
  input axis_injectsbiterr;
  input axis_injectdbiterr;
  input [9:0]axis_prog_full_thresh;
  input [9:0]axis_prog_empty_thresh;
  output [10:0]axis_data_count;
  output [10:0]axis_wr_data_count;
  output [10:0]axis_rd_data_count;
  output axis_sbiterr;
  output axis_dbiterr;
  output axis_overflow;
  output axis_underflow;
  output axis_prog_full;
  output axis_prog_empty;

  wire \<const0> ;
  wire \<const1> ;
  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire overflow;
  wire rd_clk;
  wire rd_en;
  wire rst;
  wire underflow;
  wire valid;
  wire wr_clk;
  wire wr_en;

  assign almost_empty = \<const0> ;
  assign almost_full = \<const0> ;
  assign axi_ar_data_count[4] = \<const0> ;
  assign axi_ar_data_count[3] = \<const0> ;
  assign axi_ar_data_count[2] = \<const0> ;
  assign axi_ar_data_count[1] = \<const0> ;
  assign axi_ar_data_count[0] = \<const0> ;
  assign axi_ar_dbiterr = \<const0> ;
  assign axi_ar_overflow = \<const0> ;
  assign axi_ar_prog_empty = \<const1> ;
  assign axi_ar_prog_full = \<const0> ;
  assign axi_ar_rd_data_count[4] = \<const0> ;
  assign axi_ar_rd_data_count[3] = \<const0> ;
  assign axi_ar_rd_data_count[2] = \<const0> ;
  assign axi_ar_rd_data_count[1] = \<const0> ;
  assign axi_ar_rd_data_count[0] = \<const0> ;
  assign axi_ar_sbiterr = \<const0> ;
  assign axi_ar_underflow = \<const0> ;
  assign axi_ar_wr_data_count[4] = \<const0> ;
  assign axi_ar_wr_data_count[3] = \<const0> ;
  assign axi_ar_wr_data_count[2] = \<const0> ;
  assign axi_ar_wr_data_count[1] = \<const0> ;
  assign axi_ar_wr_data_count[0] = \<const0> ;
  assign axi_aw_data_count[4] = \<const0> ;
  assign axi_aw_data_count[3] = \<const0> ;
  assign axi_aw_data_count[2] = \<const0> ;
  assign axi_aw_data_count[1] = \<const0> ;
  assign axi_aw_data_count[0] = \<const0> ;
  assign axi_aw_dbiterr = \<const0> ;
  assign axi_aw_overflow = \<const0> ;
  assign axi_aw_prog_empty = \<const1> ;
  assign axi_aw_prog_full = \<const0> ;
  assign axi_aw_rd_data_count[4] = \<const0> ;
  assign axi_aw_rd_data_count[3] = \<const0> ;
  assign axi_aw_rd_data_count[2] = \<const0> ;
  assign axi_aw_rd_data_count[1] = \<const0> ;
  assign axi_aw_rd_data_count[0] = \<const0> ;
  assign axi_aw_sbiterr = \<const0> ;
  assign axi_aw_underflow = \<const0> ;
  assign axi_aw_wr_data_count[4] = \<const0> ;
  assign axi_aw_wr_data_count[3] = \<const0> ;
  assign axi_aw_wr_data_count[2] = \<const0> ;
  assign axi_aw_wr_data_count[1] = \<const0> ;
  assign axi_aw_wr_data_count[0] = \<const0> ;
  assign axi_b_data_count[4] = \<const0> ;
  assign axi_b_data_count[3] = \<const0> ;
  assign axi_b_data_count[2] = \<const0> ;
  assign axi_b_data_count[1] = \<const0> ;
  assign axi_b_data_count[0] = \<const0> ;
  assign axi_b_dbiterr = \<const0> ;
  assign axi_b_overflow = \<const0> ;
  assign axi_b_prog_empty = \<const1> ;
  assign axi_b_prog_full = \<const0> ;
  assign axi_b_rd_data_count[4] = \<const0> ;
  assign axi_b_rd_data_count[3] = \<const0> ;
  assign axi_b_rd_data_count[2] = \<const0> ;
  assign axi_b_rd_data_count[1] = \<const0> ;
  assign axi_b_rd_data_count[0] = \<const0> ;
  assign axi_b_sbiterr = \<const0> ;
  assign axi_b_underflow = \<const0> ;
  assign axi_b_wr_data_count[4] = \<const0> ;
  assign axi_b_wr_data_count[3] = \<const0> ;
  assign axi_b_wr_data_count[2] = \<const0> ;
  assign axi_b_wr_data_count[1] = \<const0> ;
  assign axi_b_wr_data_count[0] = \<const0> ;
  assign axi_r_data_count[10] = \<const0> ;
  assign axi_r_data_count[9] = \<const0> ;
  assign axi_r_data_count[8] = \<const0> ;
  assign axi_r_data_count[7] = \<const0> ;
  assign axi_r_data_count[6] = \<const0> ;
  assign axi_r_data_count[5] = \<const0> ;
  assign axi_r_data_count[4] = \<const0> ;
  assign axi_r_data_count[3] = \<const0> ;
  assign axi_r_data_count[2] = \<const0> ;
  assign axi_r_data_count[1] = \<const0> ;
  assign axi_r_data_count[0] = \<const0> ;
  assign axi_r_dbiterr = \<const0> ;
  assign axi_r_overflow = \<const0> ;
  assign axi_r_prog_empty = \<const1> ;
  assign axi_r_prog_full = \<const0> ;
  assign axi_r_rd_data_count[10] = \<const0> ;
  assign axi_r_rd_data_count[9] = \<const0> ;
  assign axi_r_rd_data_count[8] = \<const0> ;
  assign axi_r_rd_data_count[7] = \<const0> ;
  assign axi_r_rd_data_count[6] = \<const0> ;
  assign axi_r_rd_data_count[5] = \<const0> ;
  assign axi_r_rd_data_count[4] = \<const0> ;
  assign axi_r_rd_data_count[3] = \<const0> ;
  assign axi_r_rd_data_count[2] = \<const0> ;
  assign axi_r_rd_data_count[1] = \<const0> ;
  assign axi_r_rd_data_count[0] = \<const0> ;
  assign axi_r_sbiterr = \<const0> ;
  assign axi_r_underflow = \<const0> ;
  assign axi_r_wr_data_count[10] = \<const0> ;
  assign axi_r_wr_data_count[9] = \<const0> ;
  assign axi_r_wr_data_count[8] = \<const0> ;
  assign axi_r_wr_data_count[7] = \<const0> ;
  assign axi_r_wr_data_count[6] = \<const0> ;
  assign axi_r_wr_data_count[5] = \<const0> ;
  assign axi_r_wr_data_count[4] = \<const0> ;
  assign axi_r_wr_data_count[3] = \<const0> ;
  assign axi_r_wr_data_count[2] = \<const0> ;
  assign axi_r_wr_data_count[1] = \<const0> ;
  assign axi_r_wr_data_count[0] = \<const0> ;
  assign axi_w_data_count[10] = \<const0> ;
  assign axi_w_data_count[9] = \<const0> ;
  assign axi_w_data_count[8] = \<const0> ;
  assign axi_w_data_count[7] = \<const0> ;
  assign axi_w_data_count[6] = \<const0> ;
  assign axi_w_data_count[5] = \<const0> ;
  assign axi_w_data_count[4] = \<const0> ;
  assign axi_w_data_count[3] = \<const0> ;
  assign axi_w_data_count[2] = \<const0> ;
  assign axi_w_data_count[1] = \<const0> ;
  assign axi_w_data_count[0] = \<const0> ;
  assign axi_w_dbiterr = \<const0> ;
  assign axi_w_overflow = \<const0> ;
  assign axi_w_prog_empty = \<const1> ;
  assign axi_w_prog_full = \<const0> ;
  assign axi_w_rd_data_count[10] = \<const0> ;
  assign axi_w_rd_data_count[9] = \<const0> ;
  assign axi_w_rd_data_count[8] = \<const0> ;
  assign axi_w_rd_data_count[7] = \<const0> ;
  assign axi_w_rd_data_count[6] = \<const0> ;
  assign axi_w_rd_data_count[5] = \<const0> ;
  assign axi_w_rd_data_count[4] = \<const0> ;
  assign axi_w_rd_data_count[3] = \<const0> ;
  assign axi_w_rd_data_count[2] = \<const0> ;
  assign axi_w_rd_data_count[1] = \<const0> ;
  assign axi_w_rd_data_count[0] = \<const0> ;
  assign axi_w_sbiterr = \<const0> ;
  assign axi_w_underflow = \<const0> ;
  assign axi_w_wr_data_count[10] = \<const0> ;
  assign axi_w_wr_data_count[9] = \<const0> ;
  assign axi_w_wr_data_count[8] = \<const0> ;
  assign axi_w_wr_data_count[7] = \<const0> ;
  assign axi_w_wr_data_count[6] = \<const0> ;
  assign axi_w_wr_data_count[5] = \<const0> ;
  assign axi_w_wr_data_count[4] = \<const0> ;
  assign axi_w_wr_data_count[3] = \<const0> ;
  assign axi_w_wr_data_count[2] = \<const0> ;
  assign axi_w_wr_data_count[1] = \<const0> ;
  assign axi_w_wr_data_count[0] = \<const0> ;
  assign axis_data_count[10] = \<const0> ;
  assign axis_data_count[9] = \<const0> ;
  assign axis_data_count[8] = \<const0> ;
  assign axis_data_count[7] = \<const0> ;
  assign axis_data_count[6] = \<const0> ;
  assign axis_data_count[5] = \<const0> ;
  assign axis_data_count[4] = \<const0> ;
  assign axis_data_count[3] = \<const0> ;
  assign axis_data_count[2] = \<const0> ;
  assign axis_data_count[1] = \<const0> ;
  assign axis_data_count[0] = \<const0> ;
  assign axis_dbiterr = \<const0> ;
  assign axis_overflow = \<const0> ;
  assign axis_prog_empty = \<const1> ;
  assign axis_prog_full = \<const0> ;
  assign axis_rd_data_count[10] = \<const0> ;
  assign axis_rd_data_count[9] = \<const0> ;
  assign axis_rd_data_count[8] = \<const0> ;
  assign axis_rd_data_count[7] = \<const0> ;
  assign axis_rd_data_count[6] = \<const0> ;
  assign axis_rd_data_count[5] = \<const0> ;
  assign axis_rd_data_count[4] = \<const0> ;
  assign axis_rd_data_count[3] = \<const0> ;
  assign axis_rd_data_count[2] = \<const0> ;
  assign axis_rd_data_count[1] = \<const0> ;
  assign axis_rd_data_count[0] = \<const0> ;
  assign axis_sbiterr = \<const0> ;
  assign axis_underflow = \<const0> ;
  assign axis_wr_data_count[10] = \<const0> ;
  assign axis_wr_data_count[9] = \<const0> ;
  assign axis_wr_data_count[8] = \<const0> ;
  assign axis_wr_data_count[7] = \<const0> ;
  assign axis_wr_data_count[6] = \<const0> ;
  assign axis_wr_data_count[5] = \<const0> ;
  assign axis_wr_data_count[4] = \<const0> ;
  assign axis_wr_data_count[3] = \<const0> ;
  assign axis_wr_data_count[2] = \<const0> ;
  assign axis_wr_data_count[1] = \<const0> ;
  assign axis_wr_data_count[0] = \<const0> ;
  assign data_count[3] = \<const0> ;
  assign data_count[2] = \<const0> ;
  assign data_count[1] = \<const0> ;
  assign data_count[0] = \<const0> ;
  assign dbiterr = \<const0> ;
  assign m_axi_araddr[31] = \<const0> ;
  assign m_axi_araddr[30] = \<const0> ;
  assign m_axi_araddr[29] = \<const0> ;
  assign m_axi_araddr[28] = \<const0> ;
  assign m_axi_araddr[27] = \<const0> ;
  assign m_axi_araddr[26] = \<const0> ;
  assign m_axi_araddr[25] = \<const0> ;
  assign m_axi_araddr[24] = \<const0> ;
  assign m_axi_araddr[23] = \<const0> ;
  assign m_axi_araddr[22] = \<const0> ;
  assign m_axi_araddr[21] = \<const0> ;
  assign m_axi_araddr[20] = \<const0> ;
  assign m_axi_araddr[19] = \<const0> ;
  assign m_axi_araddr[18] = \<const0> ;
  assign m_axi_araddr[17] = \<const0> ;
  assign m_axi_araddr[16] = \<const0> ;
  assign m_axi_araddr[15] = \<const0> ;
  assign m_axi_araddr[14] = \<const0> ;
  assign m_axi_araddr[13] = \<const0> ;
  assign m_axi_araddr[12] = \<const0> ;
  assign m_axi_araddr[11] = \<const0> ;
  assign m_axi_araddr[10] = \<const0> ;
  assign m_axi_araddr[9] = \<const0> ;
  assign m_axi_araddr[8] = \<const0> ;
  assign m_axi_araddr[7] = \<const0> ;
  assign m_axi_araddr[6] = \<const0> ;
  assign m_axi_araddr[5] = \<const0> ;
  assign m_axi_araddr[4] = \<const0> ;
  assign m_axi_araddr[3] = \<const0> ;
  assign m_axi_araddr[2] = \<const0> ;
  assign m_axi_araddr[1] = \<const0> ;
  assign m_axi_araddr[0] = \<const0> ;
  assign m_axi_arburst[1] = \<const0> ;
  assign m_axi_arburst[0] = \<const0> ;
  assign m_axi_arcache[3] = \<const0> ;
  assign m_axi_arcache[2] = \<const0> ;
  assign m_axi_arcache[1] = \<const0> ;
  assign m_axi_arcache[0] = \<const0> ;
  assign m_axi_arid[3] = \<const0> ;
  assign m_axi_arid[2] = \<const0> ;
  assign m_axi_arid[1] = \<const0> ;
  assign m_axi_arid[0] = \<const0> ;
  assign m_axi_arlen[7] = \<const0> ;
  assign m_axi_arlen[6] = \<const0> ;
  assign m_axi_arlen[5] = \<const0> ;
  assign m_axi_arlen[4] = \<const0> ;
  assign m_axi_arlen[3] = \<const0> ;
  assign m_axi_arlen[2] = \<const0> ;
  assign m_axi_arlen[1] = \<const0> ;
  assign m_axi_arlen[0] = \<const0> ;
  assign m_axi_arlock[1] = \<const0> ;
  assign m_axi_arlock[0] = \<const0> ;
  assign m_axi_arprot[2] = \<const0> ;
  assign m_axi_arprot[1] = \<const0> ;
  assign m_axi_arprot[0] = \<const0> ;
  assign m_axi_arqos[3] = \<const0> ;
  assign m_axi_arqos[2] = \<const0> ;
  assign m_axi_arqos[1] = \<const0> ;
  assign m_axi_arqos[0] = \<const0> ;
  assign m_axi_arregion[3] = \<const0> ;
  assign m_axi_arregion[2] = \<const0> ;
  assign m_axi_arregion[1] = \<const0> ;
  assign m_axi_arregion[0] = \<const0> ;
  assign m_axi_arsize[2] = \<const0> ;
  assign m_axi_arsize[1] = \<const0> ;
  assign m_axi_arsize[0] = \<const0> ;
  assign m_axi_aruser[0] = \<const0> ;
  assign m_axi_arvalid = \<const0> ;
  assign m_axi_awaddr[31] = \<const0> ;
  assign m_axi_awaddr[30] = \<const0> ;
  assign m_axi_awaddr[29] = \<const0> ;
  assign m_axi_awaddr[28] = \<const0> ;
  assign m_axi_awaddr[27] = \<const0> ;
  assign m_axi_awaddr[26] = \<const0> ;
  assign m_axi_awaddr[25] = \<const0> ;
  assign m_axi_awaddr[24] = \<const0> ;
  assign m_axi_awaddr[23] = \<const0> ;
  assign m_axi_awaddr[22] = \<const0> ;
  assign m_axi_awaddr[21] = \<const0> ;
  assign m_axi_awaddr[20] = \<const0> ;
  assign m_axi_awaddr[19] = \<const0> ;
  assign m_axi_awaddr[18] = \<const0> ;
  assign m_axi_awaddr[17] = \<const0> ;
  assign m_axi_awaddr[16] = \<const0> ;
  assign m_axi_awaddr[15] = \<const0> ;
  assign m_axi_awaddr[14] = \<const0> ;
  assign m_axi_awaddr[13] = \<const0> ;
  assign m_axi_awaddr[12] = \<const0> ;
  assign m_axi_awaddr[11] = \<const0> ;
  assign m_axi_awaddr[10] = \<const0> ;
  assign m_axi_awaddr[9] = \<const0> ;
  assign m_axi_awaddr[8] = \<const0> ;
  assign m_axi_awaddr[7] = \<const0> ;
  assign m_axi_awaddr[6] = \<const0> ;
  assign m_axi_awaddr[5] = \<const0> ;
  assign m_axi_awaddr[4] = \<const0> ;
  assign m_axi_awaddr[3] = \<const0> ;
  assign m_axi_awaddr[2] = \<const0> ;
  assign m_axi_awaddr[1] = \<const0> ;
  assign m_axi_awaddr[0] = \<const0> ;
  assign m_axi_awburst[1] = \<const0> ;
  assign m_axi_awburst[0] = \<const0> ;
  assign m_axi_awcache[3] = \<const0> ;
  assign m_axi_awcache[2] = \<const0> ;
  assign m_axi_awcache[1] = \<const0> ;
  assign m_axi_awcache[0] = \<const0> ;
  assign m_axi_awid[3] = \<const0> ;
  assign m_axi_awid[2] = \<const0> ;
  assign m_axi_awid[1] = \<const0> ;
  assign m_axi_awid[0] = \<const0> ;
  assign m_axi_awlen[7] = \<const0> ;
  assign m_axi_awlen[6] = \<const0> ;
  assign m_axi_awlen[5] = \<const0> ;
  assign m_axi_awlen[4] = \<const0> ;
  assign m_axi_awlen[3] = \<const0> ;
  assign m_axi_awlen[2] = \<const0> ;
  assign m_axi_awlen[1] = \<const0> ;
  assign m_axi_awlen[0] = \<const0> ;
  assign m_axi_awlock[1] = \<const0> ;
  assign m_axi_awlock[0] = \<const0> ;
  assign m_axi_awprot[2] = \<const0> ;
  assign m_axi_awprot[1] = \<const0> ;
  assign m_axi_awprot[0] = \<const0> ;
  assign m_axi_awqos[3] = \<const0> ;
  assign m_axi_awqos[2] = \<const0> ;
  assign m_axi_awqos[1] = \<const0> ;
  assign m_axi_awqos[0] = \<const0> ;
  assign m_axi_awregion[3] = \<const0> ;
  assign m_axi_awregion[2] = \<const0> ;
  assign m_axi_awregion[1] = \<const0> ;
  assign m_axi_awregion[0] = \<const0> ;
  assign m_axi_awsize[2] = \<const0> ;
  assign m_axi_awsize[1] = \<const0> ;
  assign m_axi_awsize[0] = \<const0> ;
  assign m_axi_awuser[0] = \<const0> ;
  assign m_axi_awvalid = \<const0> ;
  assign m_axi_bready = \<const0> ;
  assign m_axi_rready = \<const0> ;
  assign m_axi_wdata[63] = \<const0> ;
  assign m_axi_wdata[62] = \<const0> ;
  assign m_axi_wdata[61] = \<const0> ;
  assign m_axi_wdata[60] = \<const0> ;
  assign m_axi_wdata[59] = \<const0> ;
  assign m_axi_wdata[58] = \<const0> ;
  assign m_axi_wdata[57] = \<const0> ;
  assign m_axi_wdata[56] = \<const0> ;
  assign m_axi_wdata[55] = \<const0> ;
  assign m_axi_wdata[54] = \<const0> ;
  assign m_axi_wdata[53] = \<const0> ;
  assign m_axi_wdata[52] = \<const0> ;
  assign m_axi_wdata[51] = \<const0> ;
  assign m_axi_wdata[50] = \<const0> ;
  assign m_axi_wdata[49] = \<const0> ;
  assign m_axi_wdata[48] = \<const0> ;
  assign m_axi_wdata[47] = \<const0> ;
  assign m_axi_wdata[46] = \<const0> ;
  assign m_axi_wdata[45] = \<const0> ;
  assign m_axi_wdata[44] = \<const0> ;
  assign m_axi_wdata[43] = \<const0> ;
  assign m_axi_wdata[42] = \<const0> ;
  assign m_axi_wdata[41] = \<const0> ;
  assign m_axi_wdata[40] = \<const0> ;
  assign m_axi_wdata[39] = \<const0> ;
  assign m_axi_wdata[38] = \<const0> ;
  assign m_axi_wdata[37] = \<const0> ;
  assign m_axi_wdata[36] = \<const0> ;
  assign m_axi_wdata[35] = \<const0> ;
  assign m_axi_wdata[34] = \<const0> ;
  assign m_axi_wdata[33] = \<const0> ;
  assign m_axi_wdata[32] = \<const0> ;
  assign m_axi_wdata[31] = \<const0> ;
  assign m_axi_wdata[30] = \<const0> ;
  assign m_axi_wdata[29] = \<const0> ;
  assign m_axi_wdata[28] = \<const0> ;
  assign m_axi_wdata[27] = \<const0> ;
  assign m_axi_wdata[26] = \<const0> ;
  assign m_axi_wdata[25] = \<const0> ;
  assign m_axi_wdata[24] = \<const0> ;
  assign m_axi_wdata[23] = \<const0> ;
  assign m_axi_wdata[22] = \<const0> ;
  assign m_axi_wdata[21] = \<const0> ;
  assign m_axi_wdata[20] = \<const0> ;
  assign m_axi_wdata[19] = \<const0> ;
  assign m_axi_wdata[18] = \<const0> ;
  assign m_axi_wdata[17] = \<const0> ;
  assign m_axi_wdata[16] = \<const0> ;
  assign m_axi_wdata[15] = \<const0> ;
  assign m_axi_wdata[14] = \<const0> ;
  assign m_axi_wdata[13] = \<const0> ;
  assign m_axi_wdata[12] = \<const0> ;
  assign m_axi_wdata[11] = \<const0> ;
  assign m_axi_wdata[10] = \<const0> ;
  assign m_axi_wdata[9] = \<const0> ;
  assign m_axi_wdata[8] = \<const0> ;
  assign m_axi_wdata[7] = \<const0> ;
  assign m_axi_wdata[6] = \<const0> ;
  assign m_axi_wdata[5] = \<const0> ;
  assign m_axi_wdata[4] = \<const0> ;
  assign m_axi_wdata[3] = \<const0> ;
  assign m_axi_wdata[2] = \<const0> ;
  assign m_axi_wdata[1] = \<const0> ;
  assign m_axi_wdata[0] = \<const0> ;
  assign m_axi_wid[3] = \<const0> ;
  assign m_axi_wid[2] = \<const0> ;
  assign m_axi_wid[1] = \<const0> ;
  assign m_axi_wid[0] = \<const0> ;
  assign m_axi_wlast = \<const0> ;
  assign m_axi_wstrb[7] = \<const0> ;
  assign m_axi_wstrb[6] = \<const0> ;
  assign m_axi_wstrb[5] = \<const0> ;
  assign m_axi_wstrb[4] = \<const0> ;
  assign m_axi_wstrb[3] = \<const0> ;
  assign m_axi_wstrb[2] = \<const0> ;
  assign m_axi_wstrb[1] = \<const0> ;
  assign m_axi_wstrb[0] = \<const0> ;
  assign m_axi_wuser[0] = \<const0> ;
  assign m_axi_wvalid = \<const0> ;
  assign m_axis_tdata[63] = \<const0> ;
  assign m_axis_tdata[62] = \<const0> ;
  assign m_axis_tdata[61] = \<const0> ;
  assign m_axis_tdata[60] = \<const0> ;
  assign m_axis_tdata[59] = \<const0> ;
  assign m_axis_tdata[58] = \<const0> ;
  assign m_axis_tdata[57] = \<const0> ;
  assign m_axis_tdata[56] = \<const0> ;
  assign m_axis_tdata[55] = \<const0> ;
  assign m_axis_tdata[54] = \<const0> ;
  assign m_axis_tdata[53] = \<const0> ;
  assign m_axis_tdata[52] = \<const0> ;
  assign m_axis_tdata[51] = \<const0> ;
  assign m_axis_tdata[50] = \<const0> ;
  assign m_axis_tdata[49] = \<const0> ;
  assign m_axis_tdata[48] = \<const0> ;
  assign m_axis_tdata[47] = \<const0> ;
  assign m_axis_tdata[46] = \<const0> ;
  assign m_axis_tdata[45] = \<const0> ;
  assign m_axis_tdata[44] = \<const0> ;
  assign m_axis_tdata[43] = \<const0> ;
  assign m_axis_tdata[42] = \<const0> ;
  assign m_axis_tdata[41] = \<const0> ;
  assign m_axis_tdata[40] = \<const0> ;
  assign m_axis_tdata[39] = \<const0> ;
  assign m_axis_tdata[38] = \<const0> ;
  assign m_axis_tdata[37] = \<const0> ;
  assign m_axis_tdata[36] = \<const0> ;
  assign m_axis_tdata[35] = \<const0> ;
  assign m_axis_tdata[34] = \<const0> ;
  assign m_axis_tdata[33] = \<const0> ;
  assign m_axis_tdata[32] = \<const0> ;
  assign m_axis_tdata[31] = \<const0> ;
  assign m_axis_tdata[30] = \<const0> ;
  assign m_axis_tdata[29] = \<const0> ;
  assign m_axis_tdata[28] = \<const0> ;
  assign m_axis_tdata[27] = \<const0> ;
  assign m_axis_tdata[26] = \<const0> ;
  assign m_axis_tdata[25] = \<const0> ;
  assign m_axis_tdata[24] = \<const0> ;
  assign m_axis_tdata[23] = \<const0> ;
  assign m_axis_tdata[22] = \<const0> ;
  assign m_axis_tdata[21] = \<const0> ;
  assign m_axis_tdata[20] = \<const0> ;
  assign m_axis_tdata[19] = \<const0> ;
  assign m_axis_tdata[18] = \<const0> ;
  assign m_axis_tdata[17] = \<const0> ;
  assign m_axis_tdata[16] = \<const0> ;
  assign m_axis_tdata[15] = \<const0> ;
  assign m_axis_tdata[14] = \<const0> ;
  assign m_axis_tdata[13] = \<const0> ;
  assign m_axis_tdata[12] = \<const0> ;
  assign m_axis_tdata[11] = \<const0> ;
  assign m_axis_tdata[10] = \<const0> ;
  assign m_axis_tdata[9] = \<const0> ;
  assign m_axis_tdata[8] = \<const0> ;
  assign m_axis_tdata[7] = \<const0> ;
  assign m_axis_tdata[6] = \<const0> ;
  assign m_axis_tdata[5] = \<const0> ;
  assign m_axis_tdata[4] = \<const0> ;
  assign m_axis_tdata[3] = \<const0> ;
  assign m_axis_tdata[2] = \<const0> ;
  assign m_axis_tdata[1] = \<const0> ;
  assign m_axis_tdata[0] = \<const0> ;
  assign m_axis_tdest[3] = \<const0> ;
  assign m_axis_tdest[2] = \<const0> ;
  assign m_axis_tdest[1] = \<const0> ;
  assign m_axis_tdest[0] = \<const0> ;
  assign m_axis_tid[7] = \<const0> ;
  assign m_axis_tid[6] = \<const0> ;
  assign m_axis_tid[5] = \<const0> ;
  assign m_axis_tid[4] = \<const0> ;
  assign m_axis_tid[3] = \<const0> ;
  assign m_axis_tid[2] = \<const0> ;
  assign m_axis_tid[1] = \<const0> ;
  assign m_axis_tid[0] = \<const0> ;
  assign m_axis_tkeep[3] = \<const0> ;
  assign m_axis_tkeep[2] = \<const0> ;
  assign m_axis_tkeep[1] = \<const0> ;
  assign m_axis_tkeep[0] = \<const0> ;
  assign m_axis_tlast = \<const0> ;
  assign m_axis_tstrb[3] = \<const0> ;
  assign m_axis_tstrb[2] = \<const0> ;
  assign m_axis_tstrb[1] = \<const0> ;
  assign m_axis_tstrb[0] = \<const0> ;
  assign m_axis_tuser[3] = \<const0> ;
  assign m_axis_tuser[2] = \<const0> ;
  assign m_axis_tuser[1] = \<const0> ;
  assign m_axis_tuser[0] = \<const0> ;
  assign m_axis_tvalid = \<const0> ;
  assign prog_empty = \<const0> ;
  assign prog_full = \<const0> ;
  assign rd_data_count[3] = \<const0> ;
  assign rd_data_count[2] = \<const0> ;
  assign rd_data_count[1] = \<const0> ;
  assign rd_data_count[0] = \<const0> ;
  assign rd_rst_busy = \<const0> ;
  assign s_axi_arready = \<const0> ;
  assign s_axi_awready = \<const0> ;
  assign s_axi_bid[3] = \<const0> ;
  assign s_axi_bid[2] = \<const0> ;
  assign s_axi_bid[1] = \<const0> ;
  assign s_axi_bid[0] = \<const0> ;
  assign s_axi_bresp[1] = \<const0> ;
  assign s_axi_bresp[0] = \<const0> ;
  assign s_axi_buser[0] = \<const0> ;
  assign s_axi_bvalid = \<const0> ;
  assign s_axi_rdata[63] = \<const0> ;
  assign s_axi_rdata[62] = \<const0> ;
  assign s_axi_rdata[61] = \<const0> ;
  assign s_axi_rdata[60] = \<const0> ;
  assign s_axi_rdata[59] = \<const0> ;
  assign s_axi_rdata[58] = \<const0> ;
  assign s_axi_rdata[57] = \<const0> ;
  assign s_axi_rdata[56] = \<const0> ;
  assign s_axi_rdata[55] = \<const0> ;
  assign s_axi_rdata[54] = \<const0> ;
  assign s_axi_rdata[53] = \<const0> ;
  assign s_axi_rdata[52] = \<const0> ;
  assign s_axi_rdata[51] = \<const0> ;
  assign s_axi_rdata[50] = \<const0> ;
  assign s_axi_rdata[49] = \<const0> ;
  assign s_axi_rdata[48] = \<const0> ;
  assign s_axi_rdata[47] = \<const0> ;
  assign s_axi_rdata[46] = \<const0> ;
  assign s_axi_rdata[45] = \<const0> ;
  assign s_axi_rdata[44] = \<const0> ;
  assign s_axi_rdata[43] = \<const0> ;
  assign s_axi_rdata[42] = \<const0> ;
  assign s_axi_rdata[41] = \<const0> ;
  assign s_axi_rdata[40] = \<const0> ;
  assign s_axi_rdata[39] = \<const0> ;
  assign s_axi_rdata[38] = \<const0> ;
  assign s_axi_rdata[37] = \<const0> ;
  assign s_axi_rdata[36] = \<const0> ;
  assign s_axi_rdata[35] = \<const0> ;
  assign s_axi_rdata[34] = \<const0> ;
  assign s_axi_rdata[33] = \<const0> ;
  assign s_axi_rdata[32] = \<const0> ;
  assign s_axi_rdata[31] = \<const0> ;
  assign s_axi_rdata[30] = \<const0> ;
  assign s_axi_rdata[29] = \<const0> ;
  assign s_axi_rdata[28] = \<const0> ;
  assign s_axi_rdata[27] = \<const0> ;
  assign s_axi_rdata[26] = \<const0> ;
  assign s_axi_rdata[25] = \<const0> ;
  assign s_axi_rdata[24] = \<const0> ;
  assign s_axi_rdata[23] = \<const0> ;
  assign s_axi_rdata[22] = \<const0> ;
  assign s_axi_rdata[21] = \<const0> ;
  assign s_axi_rdata[20] = \<const0> ;
  assign s_axi_rdata[19] = \<const0> ;
  assign s_axi_rdata[18] = \<const0> ;
  assign s_axi_rdata[17] = \<const0> ;
  assign s_axi_rdata[16] = \<const0> ;
  assign s_axi_rdata[15] = \<const0> ;
  assign s_axi_rdata[14] = \<const0> ;
  assign s_axi_rdata[13] = \<const0> ;
  assign s_axi_rdata[12] = \<const0> ;
  assign s_axi_rdata[11] = \<const0> ;
  assign s_axi_rdata[10] = \<const0> ;
  assign s_axi_rdata[9] = \<const0> ;
  assign s_axi_rdata[8] = \<const0> ;
  assign s_axi_rdata[7] = \<const0> ;
  assign s_axi_rdata[6] = \<const0> ;
  assign s_axi_rdata[5] = \<const0> ;
  assign s_axi_rdata[4] = \<const0> ;
  assign s_axi_rdata[3] = \<const0> ;
  assign s_axi_rdata[2] = \<const0> ;
  assign s_axi_rdata[1] = \<const0> ;
  assign s_axi_rdata[0] = \<const0> ;
  assign s_axi_rid[3] = \<const0> ;
  assign s_axi_rid[2] = \<const0> ;
  assign s_axi_rid[1] = \<const0> ;
  assign s_axi_rid[0] = \<const0> ;
  assign s_axi_rlast = \<const0> ;
  assign s_axi_rresp[1] = \<const0> ;
  assign s_axi_rresp[0] = \<const0> ;
  assign s_axi_ruser[0] = \<const0> ;
  assign s_axi_rvalid = \<const0> ;
  assign s_axi_wready = \<const0> ;
  assign s_axis_tready = \<const0> ;
  assign sbiterr = \<const0> ;
  assign wr_ack = \<const0> ;
  assign wr_data_count[3] = \<const0> ;
  assign wr_data_count[2] = \<const0> ;
  assign wr_data_count[1] = \<const0> ;
  assign wr_data_count[0] = \<const0> ;
  assign wr_rst_busy = \<const0> ;
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4_synth__parameterized0 inst_fifo_gen
       (.din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .overflow(overflow),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rst(rst),
        .underflow(underflow),
        .valid(valid),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4_synth
   (empty,
    full,
    underflow,
    overflow,
    dout,
    rd_clk,
    wr_clk,
    rst,
    din,
    rd_en,
    wr_en);
  output empty;
  output full;
  output underflow;
  output overflow;
  output [15:0]dout;
  input rd_clk;
  input wr_clk;
  input rst;
  input [15:0]din;
  input rd_en;
  input wr_en;

  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire overflow;
  wire rd_clk;
  wire rd_en;
  wire rst;
  wire underflow;
  wire wr_clk;
  wire wr_en;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_top \gconvfifo.rf 
       (.din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .overflow(overflow),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rst(rst),
        .underflow(underflow),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
endmodule

(* ORIG_REF_NAME = "fifo_generator_v13_1_4_synth" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4_synth__parameterized0
   (empty,
    valid,
    full,
    dout,
    underflow,
    overflow,
    rd_clk,
    wr_clk,
    rst,
    din,
    rd_en,
    wr_en);
  output empty;
  output valid;
  output full;
  output [15:0]dout;
  output underflow;
  output overflow;
  input rd_clk;
  input wr_clk;
  input rst;
  input [15:0]din;
  input rd_en;
  input wr_en;

  wire [15:0]din;
  wire [15:0]dout;
  wire empty;
  wire full;
  wire overflow;
  wire rd_clk;
  wire rd_en;
  wire rst;
  wire underflow;
  wire valid;
  wire wr_clk;
  wire wr_en;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_top__parameterized0 \gconvfifo.rf 
       (.din(din),
        .dout(dout),
        .empty(empty),
        .full(full),
        .overflow(overflow),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .rst(rst),
        .underflow(underflow),
        .valid(valid),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ltlib_v1_0_0_bscan
   (s_bscan_capture,
    in0,
    s_bscan_reset,
    s_bscan_runtest,
    s_bscan_sel,
    s_bscan_shift,
    tck_bs,
    s_bscan_tdi,
    s_bscan_tms,
    UPDATE,
    s_bscan_tdo);
  output s_bscan_capture;
  output in0;
  output s_bscan_reset;
  output s_bscan_runtest;
  output s_bscan_sel;
  output s_bscan_shift;
  output tck_bs;
  output s_bscan_tdi;
  output s_bscan_tms;
  output UPDATE;
  input s_bscan_tdo;

  wire UPDATE;
  wire in0;
  wire s_bscan_capture;
  wire s_bscan_reset;
  wire s_bscan_runtest;
  wire s_bscan_sel;
  wire s_bscan_shift;
  wire s_bscan_tdi;
  wire s_bscan_tdo;
  wire s_bscan_tms;
  wire tck_bs;

  (* BOX_TYPE = "PRIMITIVE" *) 
  BSCANE2 #(
    .DISABLE_JTAG("FALSE"),
    .JTAG_CHAIN(1)) 
    \SERIES7_BSCAN.bscan_inst 
       (.CAPTURE(s_bscan_capture),
        .DRCK(in0),
        .RESET(s_bscan_reset),
        .RUNTEST(s_bscan_runtest),
        .SEL(s_bscan_sel),
        .SHIFT(s_bscan_shift),
        .TCK(tck_bs),
        .TDI(s_bscan_tdi),
        .TDO(s_bscan_tdo),
        .TMS(s_bscan_tms),
        .UPDATE(UPDATE));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ltlib_v1_0_0_generic_mux
   (D,
    sl_oport1_i,
    sl_rdmux_sel_r,
    sl_oport0_i);
  output [15:0]D;
  input [15:0]sl_oport1_i;
  input sl_rdmux_sel_r;
  input [15:0]sl_oport0_i;

  wire [15:0]D;
  wire [15:0]sl_oport0_i;
  wire [15:0]sl_oport1_i;
  wire sl_rdmux_sel_r;

  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[0]_i_1 
       (.I0(sl_oport1_i[0]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[0]),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[10]_i_1 
       (.I0(sl_oport1_i[10]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[10]),
        .O(D[10]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[11]_i_1 
       (.I0(sl_oport1_i[11]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[11]),
        .O(D[11]));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[12]_i_1 
       (.I0(sl_oport1_i[12]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[12]),
        .O(D[12]));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[13]_i_1 
       (.I0(sl_oport1_i[13]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[13]),
        .O(D[13]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[14]_i_1 
       (.I0(sl_oport1_i[14]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[14]),
        .O(D[14]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[15]_i_1 
       (.I0(sl_oport1_i[15]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[15]),
        .O(D[15]));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[1]_i_1 
       (.I0(sl_oport1_i[1]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[1]),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[2]_i_1 
       (.I0(sl_oport1_i[2]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[2]),
        .O(D[2]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[3]_i_1 
       (.I0(sl_oport1_i[3]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[3]),
        .O(D[3]));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[4]_i_1 
       (.I0(sl_oport1_i[4]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[4]),
        .O(D[4]));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[5]_i_1 
       (.I0(sl_oport1_i[5]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[5]),
        .O(D[5]));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[6]_i_1 
       (.I0(sl_oport1_i[6]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[6]),
        .O(D[6]));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[7]_i_1 
       (.I0(sl_oport1_i[7]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[7]),
        .O(D[7]));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[8]_i_1 
       (.I0(sl_oport1_i[8]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[8]),
        .O(D[8]));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \MA_RD_DIN_O[9]_i_1 
       (.I0(sl_oport1_i[9]),
        .I1(sl_rdmux_sel_r),
        .I2(sl_oport0_i[9]),
        .O(D[9]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_memory
   (dout,
    wr_clk,
    EN,
    din,
    Q,
    \gpr1.dout_i_reg[1] ,
    E,
    rd_clk);
  output [15:0]dout;
  input wr_clk;
  input EN;
  input [15:0]din;
  input [3:0]Q;
  input [3:0]\gpr1.dout_i_reg[1] ;
  input [0:0]E;
  input rd_clk;

  wire [0:0]E;
  wire EN;
  wire [3:0]Q;
  wire [15:0]din;
  wire [15:0]dout;
  wire [3:0]\gpr1.dout_i_reg[1] ;
  wire rd_clk;
  wire wr_clk;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dmem \gdm.dm_gen.dm 
       (.E(E),
        .EN(EN),
        .Q(Q),
        .din(din),
        .dout(dout),
        .\gpr1.dout_i_reg[1]_0 (\gpr1.dout_i_reg[1] ),
        .rd_clk(rd_clk),
        .wr_clk(wr_clk));
endmodule

(* ORIG_REF_NAME = "memory" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_memory__parameterized0
   (dout,
    E,
    rd_clk,
    wr_clk,
    EN,
    din,
    \gpr1.dout_i_reg[1] ,
    \gpr1.dout_i_reg[1]_0 ,
    \gpr1.dout_i_reg[0] );
  output [15:0]dout;
  input [0:0]E;
  input rd_clk;
  input wr_clk;
  input EN;
  input [15:0]din;
  input [3:0]\gpr1.dout_i_reg[1] ;
  input [3:0]\gpr1.dout_i_reg[1]_0 ;
  input [0:0]\gpr1.dout_i_reg[0] ;

  wire [0:0]E;
  wire EN;
  wire [15:0]din;
  wire [15:0]dout;
  wire [15:0]dout_i;
  wire [0:0]\gpr1.dout_i_reg[0] ;
  wire [3:0]\gpr1.dout_i_reg[1] ;
  wire [3:0]\gpr1.dout_i_reg[1]_0 ;
  wire rd_clk;
  wire wr_clk;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dmem_14 \gdm.dm_gen.dm 
       (.EN(EN),
        .din(din),
        .dout_i(dout_i),
        .\gpr1.dout_i_reg[0]_0 (\gpr1.dout_i_reg[0] ),
        .\gpr1.dout_i_reg[1]_0 (\gpr1.dout_i_reg[1] ),
        .\gpr1.dout_i_reg[1]_1 (\gpr1.dout_i_reg[1]_0 ),
        .rd_clk(rd_clk),
        .wr_clk(wr_clk));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[0] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[0]),
        .Q(dout[0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[10] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[10]),
        .Q(dout[10]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[11] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[11]),
        .Q(dout[11]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[12] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[12]),
        .Q(dout[12]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[13] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[13]),
        .Q(dout[13]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[14] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[14]),
        .Q(dout[14]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[15] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[15]),
        .Q(dout[15]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[1] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[1]),
        .Q(dout[1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[2] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[2]),
        .Q(dout[2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[3] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[3]),
        .Q(dout[3]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[4] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[4]),
        .Q(dout[4]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[5] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[5]),
        .Q(dout[5]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[6] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[6]),
        .Q(dout[6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[7] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[7]),
        .Q(dout[7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[8] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[8]),
        .Q(dout[8]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \goreg_dm.dout_i_reg[9] 
       (.C(rd_clk),
        .CE(E),
        .D(dout_i[9]),
        .Q(dout[9]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_bin_cntr
   (ma_wr_pop_r_reg,
    D,
    Q,
    rd_en,
    out,
    ram_empty_i_reg,
    E,
    rd_clk,
    AR);
  output ma_wr_pop_r_reg;
  output [2:0]D;
  output [3:0]Q;
  input rd_en;
  input out;
  input [3:0]ram_empty_i_reg;
  input [0:0]E;
  input rd_clk;
  input [0:0]AR;

  wire [0:0]AR;
  wire [2:0]D;
  wire [0:0]E;
  wire [3:0]Q;
  wire ma_wr_pop_r_reg;
  wire out;
  wire [3:0]plusOp;
  wire ram_empty_i_i_2_n_0;
  wire ram_empty_i_i_3_n_0;
  wire ram_empty_i_i_4_n_0;
  wire ram_empty_i_i_5_n_0;
  wire [3:0]ram_empty_i_reg;
  wire rd_clk;
  wire rd_en;
  wire [3:0]rd_pntr_plus1;

  LUT1 #(
    .INIT(2'h1)) 
    \gc0.count[0]_i_1 
       (.I0(rd_pntr_plus1[0]),
        .O(plusOp[0]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gc0.count[1]_i_1 
       (.I0(rd_pntr_plus1[0]),
        .I1(rd_pntr_plus1[1]),
        .O(plusOp[1]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \gc0.count[2]_i_1 
       (.I0(rd_pntr_plus1[0]),
        .I1(rd_pntr_plus1[1]),
        .I2(rd_pntr_plus1[2]),
        .O(plusOp[2]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \gc0.count[3]_i_1 
       (.I0(rd_pntr_plus1[1]),
        .I1(rd_pntr_plus1[0]),
        .I2(rd_pntr_plus1[2]),
        .I3(rd_pntr_plus1[3]),
        .O(plusOp[3]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[0] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(rd_pntr_plus1[0]),
        .Q(Q[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[1] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(rd_pntr_plus1[1]),
        .Q(Q[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[2] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(rd_pntr_plus1[2]),
        .Q(Q[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[3] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(rd_pntr_plus1[3]),
        .Q(Q[3]));
  FDPE #(
    .INIT(1'b1)) 
    \gc0.count_reg[0] 
       (.C(rd_clk),
        .CE(E),
        .D(plusOp[0]),
        .PRE(AR),
        .Q(rd_pntr_plus1[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_reg[1] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(plusOp[1]),
        .Q(rd_pntr_plus1[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_reg[2] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(plusOp[2]),
        .Q(rd_pntr_plus1[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_reg[3] 
       (.C(rd_clk),
        .CE(E),
        .CLR(AR),
        .D(plusOp[3]),
        .Q(rd_pntr_plus1[3]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_gc[0]_i_1 
       (.I0(Q[1]),
        .I1(Q[0]),
        .O(D[0]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_gc[1]_i_1 
       (.I0(Q[2]),
        .I1(Q[1]),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_gc[2]_i_1 
       (.I0(Q[3]),
        .I1(Q[2]),
        .O(D[2]));
  LUT6 #(
    .INIT(64'h88F8888888888888)) 
    ram_empty_i_i_1
       (.I0(ram_empty_i_i_2_n_0),
        .I1(ram_empty_i_i_3_n_0),
        .I2(rd_en),
        .I3(out),
        .I4(ram_empty_i_i_4_n_0),
        .I5(ram_empty_i_i_5_n_0),
        .O(ma_wr_pop_r_reg));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT4 #(
    .INIT(16'h9009)) 
    ram_empty_i_i_2
       (.I0(Q[2]),
        .I1(ram_empty_i_reg[2]),
        .I2(Q[3]),
        .I3(ram_empty_i_reg[3]),
        .O(ram_empty_i_i_2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT4 #(
    .INIT(16'h9009)) 
    ram_empty_i_i_3
       (.I0(Q[0]),
        .I1(ram_empty_i_reg[0]),
        .I2(Q[1]),
        .I3(ram_empty_i_reg[1]),
        .O(ram_empty_i_i_3_n_0));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'h9009)) 
    ram_empty_i_i_4
       (.I0(rd_pntr_plus1[0]),
        .I1(ram_empty_i_reg[0]),
        .I2(rd_pntr_plus1[1]),
        .I3(ram_empty_i_reg[1]),
        .O(ram_empty_i_i_4_n_0));
  LUT4 #(
    .INIT(16'h9009)) 
    ram_empty_i_i_5
       (.I0(rd_pntr_plus1[2]),
        .I1(ram_empty_i_reg[2]),
        .I2(rd_pntr_plus1[3]),
        .I3(ram_empty_i_reg[3]),
        .O(ram_empty_i_i_5_n_0));
endmodule

(* ORIG_REF_NAME = "rd_bin_cntr" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_bin_cntr_19
   (\gc0.count_d1_reg[2]_0 ,
    Q,
    D,
    \gc0.count_d1_reg[3]_0 ,
    ram_empty_i_reg,
    ram_empty_i_reg_0,
    ram_empty_i_reg_1,
    E,
    rd_clk,
    out);
  output \gc0.count_d1_reg[2]_0 ;
  output [3:0]Q;
  output [2:0]D;
  output [3:0]\gc0.count_d1_reg[3]_0 ;
  input ram_empty_i_reg;
  input ram_empty_i_reg_0;
  input [3:0]ram_empty_i_reg_1;
  input [0:0]E;
  input rd_clk;
  input [0:0]out;

  wire [2:0]D;
  wire [0:0]E;
  wire [3:0]Q;
  wire \gc0.count_d1_reg[2]_0 ;
  wire [3:0]\gc0.count_d1_reg[3]_0 ;
  wire [0:0]out;
  wire [3:0]plusOp;
  wire ram_empty_i_i_2_n_0;
  wire ram_empty_i_i_3_n_0;
  wire ram_empty_i_reg;
  wire ram_empty_i_reg_0;
  wire [3:0]ram_empty_i_reg_1;
  wire rd_clk;

  LUT1 #(
    .INIT(2'h1)) 
    \gc0.count[0]_i_1 
       (.I0(Q[0]),
        .O(plusOp[0]));
  LUT2 #(
    .INIT(4'h6)) 
    \gc0.count[1]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(plusOp[1]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \gc0.count[2]_i_1 
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(Q[2]),
        .O(plusOp[2]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \gc0.count[3]_i_1 
       (.I0(Q[2]),
        .I1(Q[0]),
        .I2(Q[1]),
        .I3(Q[3]),
        .O(plusOp[3]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[0] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(Q[0]),
        .Q(\gc0.count_d1_reg[3]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[1] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(Q[1]),
        .Q(\gc0.count_d1_reg[3]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[2] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(Q[2]),
        .Q(\gc0.count_d1_reg[3]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_d1_reg[3] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(Q[3]),
        .Q(\gc0.count_d1_reg[3]_0 [3]));
  FDPE #(
    .INIT(1'b1)) 
    \gc0.count_reg[0] 
       (.C(rd_clk),
        .CE(E),
        .D(plusOp[0]),
        .PRE(out),
        .Q(Q[0]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_reg[1] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(plusOp[1]),
        .Q(Q[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_reg[2] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(plusOp[2]),
        .Q(Q[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gc0.count_reg[3] 
       (.C(rd_clk),
        .CE(E),
        .CLR(out),
        .D(plusOp[3]),
        .Q(Q[3]));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_gc[0]_i_1 
       (.I0(\gc0.count_d1_reg[3]_0 [1]),
        .I1(\gc0.count_d1_reg[3]_0 [0]),
        .O(D[0]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_gc[1]_i_1 
       (.I0(\gc0.count_d1_reg[3]_0 [2]),
        .I1(\gc0.count_d1_reg[3]_0 [1]),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_gc[2]_i_1 
       (.I0(\gc0.count_d1_reg[3]_0 [3]),
        .I1(\gc0.count_d1_reg[3]_0 [2]),
        .O(D[2]));
  LUT4 #(
    .INIT(16'hF888)) 
    ram_empty_i_i_1
       (.I0(ram_empty_i_i_2_n_0),
        .I1(ram_empty_i_i_3_n_0),
        .I2(ram_empty_i_reg),
        .I3(ram_empty_i_reg_0),
        .O(\gc0.count_d1_reg[2]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h9009)) 
    ram_empty_i_i_2
       (.I0(\gc0.count_d1_reg[3]_0 [2]),
        .I1(ram_empty_i_reg_1[2]),
        .I2(\gc0.count_d1_reg[3]_0 [3]),
        .I3(ram_empty_i_reg_1[3]),
        .O(ram_empty_i_i_2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h9009)) 
    ram_empty_i_i_3
       (.I0(\gc0.count_d1_reg[3]_0 [0]),
        .I1(ram_empty_i_reg_1[0]),
        .I2(\gc0.count_d1_reg[3]_0 [1]),
        .I3(ram_empty_i_reg_1[1]),
        .O(ram_empty_i_i_3_n_0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_fwft
   (empty,
    valid,
    \gpregsm1.curr_fwft_state_reg[1]_0 ,
    E,
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ,
    p_1_out,
    rd_clk,
    out,
    rd_en,
    \gpregsm1.curr_fwft_state_reg[1]_1 ,
    Q,
    ram_empty_i_reg);
  output empty;
  output valid;
  output \gpregsm1.curr_fwft_state_reg[1]_0 ;
  output [0:0]E;
  output [0:0]\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ;
  output p_1_out;
  input rd_clk;
  input [1:0]out;
  input rd_en;
  input \gpregsm1.curr_fwft_state_reg[1]_1 ;
  input [0:0]Q;
  input [0:0]ram_empty_i_reg;

  wire [0:0]E;
  wire [0:0]Q;
  (* DONT_TOUCH *) wire aempty_fwft_fb_i;
  (* DONT_TOUCH *) wire aempty_fwft_i;
  wire aempty_fwft_i0;
  (* DONT_TOUCH *) wire [1:0]curr_fwft_state;
  (* DONT_TOUCH *) wire empty_fwft_fb_i;
  (* DONT_TOUCH *) wire empty_fwft_fb_o_i;
  wire empty_fwft_fb_o_i0;
  (* DONT_TOUCH *) wire empty_fwft_i;
  wire empty_fwft_i0;
  wire \gpregsm1.curr_fwft_state_reg[1]_0 ;
  wire \gpregsm1.curr_fwft_state_reg[1]_1 ;
  wire [1:0]next_fwft_state;
  wire [0:0]\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ;
  wire [1:0]out;
  wire p_1_out;
  wire [0:0]ram_empty_i_reg;
  wire rd_clk;
  wire rd_en;
  (* DONT_TOUCH *) wire user_valid;

  assign empty = empty_fwft_i;
  assign valid = user_valid;
  LUT5 #(
    .INIT(32'hEF80EB00)) 
    aempty_fwft_fb_i_i_1
       (.I0(\gpregsm1.curr_fwft_state_reg[1]_1 ),
        .I1(curr_fwft_state[0]),
        .I2(curr_fwft_state[1]),
        .I3(aempty_fwft_fb_i),
        .I4(rd_en),
        .O(aempty_fwft_i0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    aempty_fwft_fb_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(aempty_fwft_i0),
        .PRE(out[1]),
        .Q(aempty_fwft_fb_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    aempty_fwft_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(aempty_fwft_i0),
        .PRE(out[1]),
        .Q(aempty_fwft_i));
  LUT4 #(
    .INIT(16'hBA22)) 
    empty_fwft_fb_i_i_1
       (.I0(empty_fwft_fb_i),
        .I1(curr_fwft_state[1]),
        .I2(rd_en),
        .I3(curr_fwft_state[0]),
        .O(empty_fwft_i0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    empty_fwft_fb_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(empty_fwft_i0),
        .PRE(out[1]),
        .Q(empty_fwft_fb_i));
  LUT4 #(
    .INIT(16'hBA22)) 
    empty_fwft_fb_o_i_i_1
       (.I0(empty_fwft_fb_o_i),
        .I1(curr_fwft_state[1]),
        .I2(rd_en),
        .I3(curr_fwft_state[0]),
        .O(empty_fwft_fb_o_i0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    empty_fwft_fb_o_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(empty_fwft_fb_o_i0),
        .PRE(out[1]),
        .Q(empty_fwft_fb_o_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    empty_fwft_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(empty_fwft_i0),
        .PRE(out[1]),
        .Q(empty_fwft_i));
  LUT4 #(
    .INIT(16'h00DF)) 
    \gc0.count_d1[3]_i_1 
       (.I0(curr_fwft_state[1]),
        .I1(rd_en),
        .I2(curr_fwft_state[0]),
        .I3(\gpregsm1.curr_fwft_state_reg[1]_1 ),
        .O(E));
  LUT4 #(
    .INIT(16'h4404)) 
    \goreg_dm.dout_i[15]_i_1 
       (.I0(out[0]),
        .I1(curr_fwft_state[1]),
        .I2(curr_fwft_state[0]),
        .I3(rd_en),
        .O(\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ));
  LUT3 #(
    .INIT(8'hAE)) 
    \gpregsm1.curr_fwft_state[0]_i_1 
       (.I0(curr_fwft_state[1]),
        .I1(curr_fwft_state[0]),
        .I2(rd_en),
        .O(next_fwft_state[0]));
  LUT4 #(
    .INIT(16'h20FF)) 
    \gpregsm1.curr_fwft_state[1]_i_1 
       (.I0(curr_fwft_state[1]),
        .I1(rd_en),
        .I2(curr_fwft_state[0]),
        .I3(\gpregsm1.curr_fwft_state_reg[1]_1 ),
        .O(next_fwft_state[1]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    \gpregsm1.curr_fwft_state_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(out[1]),
        .D(next_fwft_state[0]),
        .Q(curr_fwft_state[0]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    \gpregsm1.curr_fwft_state_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(out[1]),
        .D(next_fwft_state[1]),
        .Q(curr_fwft_state[1]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    \gpregsm1.user_valid_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(out[1]),
        .D(next_fwft_state[0]),
        .Q(user_valid));
  LUT2 #(
    .INIT(4'h8)) 
    \guf.guf1.underflow_i_i_1 
       (.I0(empty_fwft_i),
        .I1(rd_en),
        .O(p_1_out));
  LUT6 #(
    .INIT(64'h00DF0000000000DF)) 
    ram_empty_i_i_5
       (.I0(curr_fwft_state[1]),
        .I1(rd_en),
        .I2(curr_fwft_state[0]),
        .I3(\gpregsm1.curr_fwft_state_reg[1]_1 ),
        .I4(Q),
        .I5(ram_empty_i_reg),
        .O(\gpregsm1.curr_fwft_state_reg[1]_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_handshaking_flags
   (underflow,
    \guf.guf1.underflow_i_reg_0 ,
    rd_clk);
  output underflow;
  input \guf.guf1.underflow_i_reg_0 ;
  input rd_clk;

  wire \guf.guf1.underflow_i_reg_0 ;
  wire rd_clk;
  wire underflow;

  FDRE #(
    .INIT(1'b0)) 
    \guf.guf1.underflow_i_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(\guf.guf1.underflow_i_reg_0 ),
        .Q(underflow),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "rd_handshaking_flags" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_handshaking_flags__parameterized0
   (underflow,
    p_1_out,
    rd_clk);
  output underflow;
  input p_1_out;
  input rd_clk;

  wire p_1_out;
  wire rd_clk;
  wire underflow;

  FDRE #(
    .INIT(1'b0)) 
    \guf.guf1.underflow_i_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(p_1_out),
        .Q(underflow),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_logic
   (empty,
    underflow,
    Q,
    E,
    D,
    rd_clk,
    AR,
    rd_en,
    ram_empty_i_reg);
  output empty;
  output underflow;
  output [3:0]Q;
  output [0:0]E;
  output [2:0]D;
  input rd_clk;
  input [0:0]AR;
  input rd_en;
  input [3:0]ram_empty_i_reg;

  wire [0:0]AR;
  wire [2:0]D;
  wire [0:0]E;
  wire [3:0]Q;
  wire empty;
  wire \gras.rsts_n_3 ;
  wire p_2_out;
  wire [3:0]ram_empty_i_reg;
  wire rd_clk;
  wire rd_en;
  wire rpntr_n_0;
  wire underflow;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_status_flags_as \gras.rsts 
       (.AR(AR),
        .E(E),
        .empty(empty),
        .out(p_2_out),
        .ram_empty_i_reg_0(\gras.rsts_n_3 ),
        .ram_empty_i_reg_1(rpntr_n_0),
        .rd_clk(rd_clk),
        .rd_en(rd_en));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_handshaking_flags \grhf.rhf 
       (.\guf.guf1.underflow_i_reg_0 (\gras.rsts_n_3 ),
        .rd_clk(rd_clk),
        .underflow(underflow));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_bin_cntr rpntr
       (.AR(AR),
        .D(D),
        .E(E),
        .Q(Q),
        .ma_wr_pop_r_reg(rpntr_n_0),
        .out(p_2_out),
        .ram_empty_i_reg(ram_empty_i_reg),
        .rd_clk(rd_clk),
        .rd_en(rd_en));
endmodule

(* ORIG_REF_NAME = "rd_logic" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_logic__parameterized0
   (empty,
    valid,
    underflow,
    \gc0.count_reg[2] ,
    E,
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ,
    D,
    \gc0.count_d1_reg[3] ,
    rd_clk,
    out,
    rd_en,
    ram_empty_i_reg,
    Q);
  output empty;
  output valid;
  output underflow;
  output [2:0]\gc0.count_reg[2] ;
  output [0:0]E;
  output [0:0]\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ;
  output [2:0]D;
  output [3:0]\gc0.count_d1_reg[3] ;
  input rd_clk;
  input [1:0]out;
  input rd_en;
  input ram_empty_i_reg;
  input [3:0]Q;

  wire [2:0]D;
  wire [0:0]E;
  wire [3:0]Q;
  wire empty;
  wire [3:0]\gc0.count_d1_reg[3] ;
  wire [2:0]\gc0.count_reg[2] ;
  wire \gr1.gr1_int.rfwft_n_2 ;
  wire [0:0]\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ;
  wire [1:0]out;
  wire p_1_out;
  wire p_2_out;
  wire ram_empty_i_reg;
  wire rd_clk;
  wire rd_en;
  wire [3:3]rd_pntr_plus1;
  wire rpntr_n_0;
  wire underflow;
  wire valid;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_fwft \gr1.gr1_int.rfwft 
       (.E(E),
        .Q(Q[3]),
        .empty(empty),
        .\gpregsm1.curr_fwft_state_reg[1]_0 (\gr1.gr1_int.rfwft_n_2 ),
        .\gpregsm1.curr_fwft_state_reg[1]_1 (p_2_out),
        .\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] (\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] ),
        .out(out),
        .p_1_out(p_1_out),
        .ram_empty_i_reg(rd_pntr_plus1),
        .rd_clk(rd_clk),
        .rd_en(rd_en),
        .valid(valid));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_status_flags_as_18 \gras.rsts 
       (.out(p_2_out),
        .ram_empty_fb_i_reg_0(out[1]),
        .ram_empty_i_reg_0(rpntr_n_0),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_handshaking_flags__parameterized0 \grhf.rhf 
       (.p_1_out(p_1_out),
        .rd_clk(rd_clk),
        .underflow(underflow));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_bin_cntr_19 rpntr
       (.D(D),
        .E(E),
        .Q({rd_pntr_plus1,\gc0.count_reg[2] }),
        .\gc0.count_d1_reg[2]_0 (rpntr_n_0),
        .\gc0.count_d1_reg[3]_0 (\gc0.count_d1_reg[3] ),
        .out(out[1]),
        .ram_empty_i_reg(ram_empty_i_reg),
        .ram_empty_i_reg_0(\gr1.gr1_int.rfwft_n_2 ),
        .ram_empty_i_reg_1(Q),
        .rd_clk(rd_clk));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_status_flags_as
   (empty,
    out,
    E,
    ram_empty_i_reg_0,
    ram_empty_i_reg_1,
    rd_clk,
    AR,
    rd_en);
  output empty;
  output out;
  output [0:0]E;
  output ram_empty_i_reg_0;
  input ram_empty_i_reg_1;
  input rd_clk;
  input [0:0]AR;
  input rd_en;

  wire [0:0]AR;
  wire [0:0]E;
  (* DONT_TOUCH *) wire ram_empty_fb_i;
  (* DONT_TOUCH *) wire ram_empty_i;
  wire ram_empty_i_reg_0;
  wire ram_empty_i_reg_1;
  wire rd_clk;
  wire rd_en;

  assign empty = ram_empty_i;
  assign out = ram_empty_fb_i;
  LUT2 #(
    .INIT(4'h2)) 
    \gpr1.dout_i[15]_i_1 
       (.I0(rd_en),
        .I1(ram_empty_fb_i),
        .O(E));
  LUT2 #(
    .INIT(4'h8)) 
    \guf.guf1.underflow_i_i_1 
       (.I0(ram_empty_i),
        .I1(rd_en),
        .O(ram_empty_i_reg_0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    ram_empty_fb_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(ram_empty_i_reg_1),
        .PRE(AR),
        .Q(ram_empty_fb_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    ram_empty_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(ram_empty_i_reg_1),
        .PRE(AR),
        .Q(ram_empty_i));
endmodule

(* ORIG_REF_NAME = "rd_status_flags_as" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rd_status_flags_as_18
   (out,
    ram_empty_i_reg_0,
    rd_clk,
    ram_empty_fb_i_reg_0);
  output out;
  input ram_empty_i_reg_0;
  input rd_clk;
  input [0:0]ram_empty_fb_i_reg_0;

  (* DONT_TOUCH *) wire ram_empty_fb_i;
  wire [0:0]ram_empty_fb_i_reg_0;
  (* DONT_TOUCH *) wire ram_empty_i;
  wire ram_empty_i_reg_0;
  wire rd_clk;

  assign out = ram_empty_fb_i;
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    ram_empty_fb_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(ram_empty_i_reg_0),
        .PRE(ram_empty_fb_i_reg_0),
        .Q(ram_empty_fb_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    ram_empty_i_reg
       (.C(rd_clk),
        .CE(1'b1),
        .D(ram_empty_i_reg_0),
        .PRE(ram_empty_fb_i_reg_0),
        .Q(ram_empty_i));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_reset_blk_ramfifo
   (out,
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 ,
    rd_clk,
    wr_clk,
    rst);
  output [1:0]out;
  output [1:0]\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 ;
  input rd_clk;
  input wr_clk;
  input rst;

  wire \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst_n_1 ;
  wire \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst_n_1 ;
  wire p_5_out;
  wire p_6_out;
  wire rd_clk;
  wire rd_rst_asreg;
  wire rd_rst_comb;
  (* DONT_TOUCH *) wire [2:0]rd_rst_reg;
  wire rst;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_rd_reg1;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_rd_reg2;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_wr_reg1;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_wr_reg2;
  wire wr_clk;
  wire wr_rst_asreg;
  wire wr_rst_comb;
  (* DONT_TOUCH *) wire [2:0]wr_rst_reg;

  assign \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 [1:0] = rd_rst_reg[2:1];
  assign out[1:0] = wr_rst_reg[1:0];
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst 
       (.in0(rd_rst_asreg),
        .\ngwrdrst.grst.g7serrst.rd_rst_asreg_reg (\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst_n_1 ),
        .out(p_5_out),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_2 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst 
       (.in0(wr_rst_asreg),
        .\ngwrdrst.grst.g7serrst.wr_rst_asreg_reg (\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst_n_1 ),
        .out(p_6_out),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_3 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[2].rrst_inst 
       (.AS(rd_rst_comb),
        .in0(rd_rst_asreg),
        .out(p_5_out),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_4 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[2].wrst_inst 
       (.AS(wr_rst_comb),
        .in0(wr_rst_asreg),
        .out(p_6_out),
        .wr_clk(wr_clk));
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst_n_1 ),
        .PRE(rst_rd_reg2),
        .Q(rd_rst_asreg));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rd_rst_comb),
        .Q(rd_rst_reg[0]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rd_rst_comb),
        .Q(rd_rst_reg[1]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rd_rst_comb),
        .Q(rd_rst_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_rd_reg1_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rst),
        .Q(rst_rd_reg1));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_rd_reg2_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(rst_rd_reg1),
        .PRE(rst),
        .Q(rst_rd_reg2));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_wr_reg1_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rst),
        .Q(rst_wr_reg1));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_wr_reg2_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(rst_wr_reg1),
        .PRE(rst),
        .Q(rst_wr_reg2));
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst_n_1 ),
        .PRE(rst_wr_reg2),
        .Q(wr_rst_asreg));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(wr_rst_comb),
        .Q(wr_rst_reg[0]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(wr_rst_comb),
        .Q(wr_rst_reg[1]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(wr_rst_comb),
        .Q(wr_rst_reg[2]));
endmodule

(* ORIG_REF_NAME = "reset_blk_ramfifo" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_reset_blk_ramfifo_9
   (out,
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 ,
    rd_clk,
    wr_clk,
    rst);
  output [1:0]out;
  output [2:0]\ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 ;
  input rd_clk;
  input wr_clk;
  input rst;

  wire \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst_n_1 ;
  wire \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst_n_1 ;
  wire p_5_out;
  wire p_6_out;
  wire rd_clk;
  wire rd_rst_asreg;
  wire rd_rst_comb;
  (* DONT_TOUCH *) wire [2:0]rd_rst_reg;
  wire rst;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_rd_reg1;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_rd_reg2;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_wr_reg1;
  (* async_reg = "true" *) (* msgon = "false" *) wire rst_wr_reg2;
  wire wr_clk;
  wire wr_rst_asreg;
  wire wr_rst_comb;
  (* DONT_TOUCH *) wire [2:0]wr_rst_reg;

  assign \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2]_0 [2:0] = rd_rst_reg;
  assign out[1:0] = wr_rst_reg[1:0];
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_10 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst 
       (.in0(rd_rst_asreg),
        .\ngwrdrst.grst.g7serrst.rd_rst_asreg_reg (\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst_n_1 ),
        .out(p_5_out),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_11 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst 
       (.in0(wr_rst_asreg),
        .\ngwrdrst.grst.g7serrst.wr_rst_asreg_reg (\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst_n_1 ),
        .out(p_6_out),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_12 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[2].rrst_inst 
       (.AS(rd_rst_comb),
        .in0(rd_rst_asreg),
        .out(p_5_out),
        .rd_clk(rd_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_13 \ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[2].wrst_inst 
       (.AS(wr_rst_comb),
        .in0(wr_rst_asreg),
        .out(p_6_out),
        .wr_clk(wr_clk));
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].rrst_inst_n_1 ),
        .PRE(rst_rd_reg2),
        .Q(rd_rst_asreg));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rd_rst_comb),
        .Q(rd_rst_reg[0]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rd_rst_comb),
        .Q(rd_rst_reg[1]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rd_rst_comb),
        .Q(rd_rst_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_rd_reg1_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rst),
        .Q(rst_rd_reg1));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_rd_reg2_reg 
       (.C(rd_clk),
        .CE(1'b1),
        .D(rst_rd_reg1),
        .PRE(rst),
        .Q(rst_rd_reg2));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_wr_reg1_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(rst),
        .Q(rst_wr_reg1));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "false" *) 
  FDPE #(
    .INIT(1'b0)) 
    \ngwrdrst.grst.g7serrst.rst_wr_reg2_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(rst_wr_reg1),
        .PRE(rst),
        .Q(rst_wr_reg2));
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(\ngwrdrst.grst.g7serrst.gwrrd_rst_sync_stage[1].wrst_inst_n_1 ),
        .PRE(rst_wr_reg2),
        .Q(wr_rst_asreg));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(wr_rst_comb),
        .Q(wr_rst_reg[0]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(wr_rst_comb),
        .Q(wr_rst_reg[1]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDPE #(
    .INIT(1'b1)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(1'b0),
        .PRE(wr_rst_comb),
        .Q(wr_rst_reg[2]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff
   (out,
    \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ,
    in0,
    rd_clk);
  output out;
  output \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ;
  input [0:0]in0;
  input rd_clk;

  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ;
  wire rd_clk;

  assign out = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(in0),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.rd_rst_asreg_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(\ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_10
   (out,
    \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ,
    in0,
    rd_clk);
  output out;
  output \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ;
  input [0:0]in0;
  input rd_clk;

  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire \ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ;
  wire rd_clk;

  assign out = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(in0),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.rd_rst_asreg_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(\ngwrdrst.grst.g7serrst.rd_rst_asreg_reg ));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_11
   (out,
    \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ,
    in0,
    wr_clk);
  output out;
  output \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ;
  input [0:0]in0;
  input wr_clk;

  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ;
  wire wr_clk;

  assign out = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(in0),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.wr_rst_asreg_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(\ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_12
   (AS,
    out,
    rd_clk,
    in0);
  output [0:0]AS;
  input out;
  input rd_clk;
  input [0:0]in0;

  wire [0:0]AS;
  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire out;
  wire rd_clk;

  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(out),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg[2]_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(AS));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_13
   (AS,
    out,
    wr_clk,
    in0);
  output [0:0]AS;
  input out;
  input wr_clk;
  input [0:0]in0;

  wire [0:0]AS;
  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire out;
  wire wr_clk;

  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(out),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg[2]_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(AS));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_2
   (out,
    \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ,
    in0,
    wr_clk);
  output out;
  output \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ;
  input [0:0]in0;
  input wr_clk;

  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire \ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ;
  wire wr_clk;

  assign out = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(in0),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.wr_rst_asreg_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(\ngwrdrst.grst.g7serrst.wr_rst_asreg_reg ));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_3
   (AS,
    out,
    rd_clk,
    in0);
  output [0:0]AS;
  input out;
  input rd_clk;
  input [0:0]in0;

  wire [0:0]AS;
  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire out;
  wire rd_clk;

  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .D(out),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.rd_rst_reg[2]_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(AS));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff_4
   (AS,
    out,
    wr_clk,
    in0);
  output [0:0]AS;
  input out;
  input wr_clk;
  input [0:0]in0;

  wire [0:0]AS;
  (* async_reg = "true" *) (* msgon = "true" *) wire Q_reg;
  wire [0:0]in0;
  wire out;
  wire wr_clk;

  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDRE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .D(out),
        .Q(Q_reg),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \ngwrdrst.grst.g7serrst.wr_rst_reg[2]_i_1 
       (.I0(in0),
        .I1(Q_reg),
        .O(AS));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0
   (D,
    Q,
    rd_clk,
    \Q_reg_reg[0]_0 );
  output [3:0]D;
  input [3:0]Q;
  input rd_clk;
  input [0:0]\Q_reg_reg[0]_0 ;

  wire [3:0]Q;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire [0:0]\Q_reg_reg[0]_0 ;
  wire rd_clk;

  assign D[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[3]),
        .Q(Q_reg[3]));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_20
   (D,
    Q,
    rd_clk,
    \Q_reg_reg[0]_0 );
  output [3:0]D;
  input [3:0]Q;
  input rd_clk;
  input [0:0]\Q_reg_reg[0]_0 ;

  wire [3:0]Q;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire [0:0]\Q_reg_reg[0]_0 ;
  wire rd_clk;

  assign D[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(Q[3]),
        .Q(Q_reg[3]));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_21
   (D,
    Q,
    wr_clk,
    AR);
  output [3:0]D;
  input [3:0]Q;
  input wr_clk;
  input [0:0]AR;

  wire [0:0]AR;
  wire [3:0]Q;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire wr_clk;

  assign D[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[3]),
        .Q(Q_reg[3]));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_22
   (out,
    D,
    \Q_reg_reg[3]_0 ,
    rd_clk,
    \Q_reg_reg[0]_0 );
  output [3:0]out;
  output [0:0]D;
  input [3:0]\Q_reg_reg[3]_0 ;
  input rd_clk;
  input [0:0]\Q_reg_reg[0]_0 ;

  wire [0:0]D;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire [0:0]\Q_reg_reg[0]_0 ;
  wire [3:0]\Q_reg_reg[3]_0 ;
  wire rd_clk;

  assign out[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [3]),
        .Q(Q_reg[3]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_bin[2]_i_1 
       (.I0(Q_reg[3]),
        .I1(Q_reg[2]),
        .O(D));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_23
   (out,
    D,
    \Q_reg_reg[3]_0 ,
    wr_clk,
    AR);
  output [3:0]out;
  output [0:0]D;
  input [3:0]\Q_reg_reg[3]_0 ;
  input wr_clk;
  input [0:0]AR;

  wire [0:0]AR;
  wire [0:0]D;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire [3:0]\Q_reg_reg[3]_0 ;
  wire wr_clk;

  assign out[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [3]),
        .Q(Q_reg[3]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_bin[2]_i_1 
       (.I0(Q_reg[3]),
        .I1(Q_reg[2]),
        .O(D));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_5
   (D,
    Q,
    wr_clk,
    AR);
  output [3:0]D;
  input [3:0]Q;
  input wr_clk;
  input [0:0]AR;

  wire [0:0]AR;
  wire [3:0]Q;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire wr_clk;

  assign D[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(Q[3]),
        .Q(Q_reg[3]));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_6
   (out,
    D,
    \Q_reg_reg[3]_0 ,
    rd_clk,
    \Q_reg_reg[0]_0 );
  output [3:0]out;
  output [0:0]D;
  input [3:0]\Q_reg_reg[3]_0 ;
  input rd_clk;
  input [0:0]\Q_reg_reg[0]_0 ;

  wire [0:0]D;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire [0:0]\Q_reg_reg[0]_0 ;
  wire [3:0]\Q_reg_reg[3]_0 ;
  wire rd_clk;

  assign out[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(rd_clk),
        .CE(1'b1),
        .CLR(\Q_reg_reg[0]_0 ),
        .D(\Q_reg_reg[3]_0 [3]),
        .Q(Q_reg[3]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.wr_pntr_bin[2]_i_1 
       (.I0(Q_reg[3]),
        .I1(Q_reg[2]),
        .O(D));
endmodule

(* ORIG_REF_NAME = "synchronizer_ff" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_synchronizer_ff__parameterized0_7
   (out,
    D,
    \Q_reg_reg[3]_0 ,
    wr_clk,
    AR);
  output [3:0]out;
  output [0:0]D;
  input [3:0]\Q_reg_reg[3]_0 ;
  input wr_clk;
  input [0:0]AR;

  wire [0:0]AR;
  wire [0:0]D;
  (* async_reg = "true" *) (* msgon = "true" *) wire [3:0]Q_reg;
  wire [3:0]\Q_reg_reg[3]_0 ;
  wire wr_clk;

  assign out[3:0] = Q_reg;
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[0] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [0]),
        .Q(Q_reg[0]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[1] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [1]),
        .Q(Q_reg[1]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[2] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [2]),
        .Q(Q_reg[2]));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  (* msgon = "true" *) 
  FDCE #(
    .INIT(1'b0)) 
    \Q_reg_reg[3] 
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(AR),
        .D(\Q_reg_reg[3]_0 [3]),
        .Q(Q_reg[3]));
  LUT2 #(
    .INIT(4'h6)) 
    \gnxpm_cdc.rd_pntr_bin[2]_i_1 
       (.I0(Q_reg[3]),
        .I1(Q_reg[2]),
        .O(D));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_bin_cntr
   (Q,
    \gic0.gc0.count_d1_reg[3]_0 ,
    \gic0.gc0.count_d2_reg[3]_0 ,
    E,
    wr_clk,
    \gic0.gc0.count_reg[0]_0 );
  output [3:0]Q;
  output [3:0]\gic0.gc0.count_d1_reg[3]_0 ;
  output [3:0]\gic0.gc0.count_d2_reg[3]_0 ;
  input [0:0]E;
  input wr_clk;
  input [0:0]\gic0.gc0.count_reg[0]_0 ;

  wire [0:0]E;
  wire [3:0]Q;
  wire [3:0]\gic0.gc0.count_d1_reg[3]_0 ;
  wire [3:0]\gic0.gc0.count_d2_reg[3]_0 ;
  wire [0:0]\gic0.gc0.count_reg[0]_0 ;
  wire [3:0]plusOp__0;
  wire wr_clk;

  LUT1 #(
    .INIT(2'h1)) 
    \gic0.gc0.count[0]_i_1 
       (.I0(Q[0]),
        .O(plusOp__0[0]));
  LUT2 #(
    .INIT(4'h6)) 
    \gic0.gc0.count[1]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(plusOp__0[1]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \gic0.gc0.count[2]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(Q[2]),
        .O(plusOp__0[2]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \gic0.gc0.count[3]_i_1 
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(Q[2]),
        .I3(Q[3]),
        .O(plusOp__0[3]));
  FDPE #(
    .INIT(1'b1)) 
    \gic0.gc0.count_d1_reg[0] 
       (.C(wr_clk),
        .CE(E),
        .D(Q[0]),
        .PRE(\gic0.gc0.count_reg[0]_0 ),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d1_reg[1] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(Q[1]),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d1_reg[2] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(Q[2]),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d1_reg[3] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(Q[3]),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [3]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[0] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [0]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[1] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [1]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[2] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [2]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[3] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [3]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [3]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_reg[0] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(plusOp__0[0]),
        .Q(Q[0]));
  FDPE #(
    .INIT(1'b1)) 
    \gic0.gc0.count_reg[1] 
       (.C(wr_clk),
        .CE(E),
        .D(plusOp__0[1]),
        .PRE(\gic0.gc0.count_reg[0]_0 ),
        .Q(Q[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_reg[2] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(plusOp__0[2]),
        .Q(Q[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_reg[3] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(plusOp__0[3]),
        .Q(Q[3]));
endmodule

(* ORIG_REF_NAME = "wr_bin_cntr" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_bin_cntr_17
   (Q,
    \gic0.gc0.count_d1_reg[3]_0 ,
    \gic0.gc0.count_d2_reg[3]_0 ,
    E,
    wr_clk,
    \gic0.gc0.count_reg[0]_0 );
  output [3:0]Q;
  output [3:0]\gic0.gc0.count_d1_reg[3]_0 ;
  output [3:0]\gic0.gc0.count_d2_reg[3]_0 ;
  input [0:0]E;
  input wr_clk;
  input [0:0]\gic0.gc0.count_reg[0]_0 ;

  wire [0:0]E;
  wire [3:0]Q;
  wire [3:0]\gic0.gc0.count_d1_reg[3]_0 ;
  wire [3:0]\gic0.gc0.count_d2_reg[3]_0 ;
  wire [0:0]\gic0.gc0.count_reg[0]_0 ;
  wire [3:0]plusOp__0;
  wire wr_clk;

  LUT1 #(
    .INIT(2'h1)) 
    \gic0.gc0.count[0]_i_1 
       (.I0(Q[0]),
        .O(plusOp__0[0]));
  LUT2 #(
    .INIT(4'h6)) 
    \gic0.gc0.count[1]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .O(plusOp__0[1]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \gic0.gc0.count[2]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(Q[2]),
        .O(plusOp__0[2]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \gic0.gc0.count[3]_i_1 
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(Q[2]),
        .I3(Q[3]),
        .O(plusOp__0[3]));
  FDPE #(
    .INIT(1'b1)) 
    \gic0.gc0.count_d1_reg[0] 
       (.C(wr_clk),
        .CE(E),
        .D(Q[0]),
        .PRE(\gic0.gc0.count_reg[0]_0 ),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d1_reg[1] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(Q[1]),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d1_reg[2] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(Q[2]),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d1_reg[3] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(Q[3]),
        .Q(\gic0.gc0.count_d1_reg[3]_0 [3]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[0] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [0]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[1] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [1]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[2] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [2]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_d2_reg[3] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(\gic0.gc0.count_d1_reg[3]_0 [3]),
        .Q(\gic0.gc0.count_d2_reg[3]_0 [3]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_reg[0] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(plusOp__0[0]),
        .Q(Q[0]));
  FDPE #(
    .INIT(1'b1)) 
    \gic0.gc0.count_reg[1] 
       (.C(wr_clk),
        .CE(E),
        .D(plusOp__0[1]),
        .PRE(\gic0.gc0.count_reg[0]_0 ),
        .Q(Q[1]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_reg[2] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(plusOp__0[2]),
        .Q(Q[2]));
  FDCE #(
    .INIT(1'b0)) 
    \gic0.gc0.count_reg[3] 
       (.C(wr_clk),
        .CE(E),
        .CLR(\gic0.gc0.count_reg[0]_0 ),
        .D(plusOp__0[3]),
        .Q(Q[3]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_handshaking_flags
   (overflow,
    \gof.gof1.overflow_i_reg_0 ,
    wr_clk);
  output overflow;
  input \gof.gof1.overflow_i_reg_0 ;
  input wr_clk;

  wire \gof.gof1.overflow_i_reg_0 ;
  wire overflow;
  wire wr_clk;

  FDRE #(
    .INIT(1'b0)) 
    \gof.gof1.overflow_i_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(\gof.gof1.overflow_i_reg_0 ),
        .Q(overflow),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "wr_handshaking_flags" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_handshaking_flags_16
   (overflow,
    \gof.gof1.overflow_i_reg_0 ,
    wr_clk);
  output overflow;
  input \gof.gof1.overflow_i_reg_0 ;
  input wr_clk;

  wire \gof.gof1.overflow_i_reg_0 ;
  wire overflow;
  wire wr_clk;

  FDRE #(
    .INIT(1'b0)) 
    \gof.gof1.overflow_i_reg 
       (.C(wr_clk),
        .CE(1'b1),
        .D(\gof.gof1.overflow_i_reg_0 ),
        .Q(overflow),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_logic
   (full,
    out,
    overflow,
    E,
    Q,
    \gic0.gc0.count_d1_reg[3] ,
    \gic0.gc0.count_d2_reg[3] ,
    ram_full_fb_i_reg,
    wr_clk,
    \gic0.gc0.count_reg[0] ,
    wr_en);
  output full;
  output out;
  output overflow;
  output [0:0]E;
  output [3:0]Q;
  output [3:0]\gic0.gc0.count_d1_reg[3] ;
  output [3:0]\gic0.gc0.count_d2_reg[3] ;
  input ram_full_fb_i_reg;
  input wr_clk;
  input [1:0]\gic0.gc0.count_reg[0] ;
  input wr_en;

  wire [0:0]E;
  wire [3:0]Q;
  wire full;
  wire [3:0]\gic0.gc0.count_d1_reg[3] ;
  wire [3:0]\gic0.gc0.count_d2_reg[3] ;
  wire [1:0]\gic0.gc0.count_reg[0] ;
  wire \gwas.wsts_n_2 ;
  wire out;
  wire overflow;
  wire ram_full_fb_i_reg;
  wire wr_clk;
  wire wr_en;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_status_flags_as \gwas.wsts 
       (.E(E),
        .full(full),
        .out(out),
        .ram_full_fb_i_reg_0(\gwas.wsts_n_2 ),
        .ram_full_fb_i_reg_1(ram_full_fb_i_reg),
        .ram_full_fb_i_reg_2(\gic0.gc0.count_reg[0] [0]),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_handshaking_flags \gwhf.whf 
       (.\gof.gof1.overflow_i_reg_0 (\gwas.wsts_n_2 ),
        .overflow(overflow),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_bin_cntr wpntr
       (.E(E),
        .Q(Q),
        .\gic0.gc0.count_d1_reg[3]_0 (\gic0.gc0.count_d1_reg[3] ),
        .\gic0.gc0.count_d2_reg[3]_0 (\gic0.gc0.count_d2_reg[3] ),
        .\gic0.gc0.count_reg[0]_0 (\gic0.gc0.count_reg[0] [1]),
        .wr_clk(wr_clk));
endmodule

(* ORIG_REF_NAME = "wr_logic" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_logic__parameterized0
   (full,
    out,
    overflow,
    E,
    Q,
    \gic0.gc0.count_d1_reg[3] ,
    \gic0.gc0.count_d2_reg[3] ,
    ram_full_fb_i_reg,
    wr_clk,
    \gic0.gc0.count_reg[0] ,
    wr_en);
  output full;
  output out;
  output overflow;
  output [0:0]E;
  output [3:0]Q;
  output [3:0]\gic0.gc0.count_d1_reg[3] ;
  output [3:0]\gic0.gc0.count_d2_reg[3] ;
  input ram_full_fb_i_reg;
  input wr_clk;
  input [1:0]\gic0.gc0.count_reg[0] ;
  input wr_en;

  wire [0:0]E;
  wire [3:0]Q;
  wire full;
  wire [3:0]\gic0.gc0.count_d1_reg[3] ;
  wire [3:0]\gic0.gc0.count_d2_reg[3] ;
  wire [1:0]\gic0.gc0.count_reg[0] ;
  wire \gwas.wsts_n_2 ;
  wire out;
  wire overflow;
  wire ram_full_fb_i_reg;
  wire wr_clk;
  wire wr_en;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_status_flags_as_15 \gwas.wsts 
       (.E(E),
        .full(full),
        .out(out),
        .ram_full_fb_i_reg_0(\gwas.wsts_n_2 ),
        .ram_full_fb_i_reg_1(ram_full_fb_i_reg),
        .ram_full_fb_i_reg_2(\gic0.gc0.count_reg[0] [0]),
        .wr_clk(wr_clk),
        .wr_en(wr_en));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_handshaking_flags_16 \gwhf.whf 
       (.\gof.gof1.overflow_i_reg_0 (\gwas.wsts_n_2 ),
        .overflow(overflow),
        .wr_clk(wr_clk));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_bin_cntr_17 wpntr
       (.E(E),
        .Q(Q),
        .\gic0.gc0.count_d1_reg[3]_0 (\gic0.gc0.count_d1_reg[3] ),
        .\gic0.gc0.count_d2_reg[3]_0 (\gic0.gc0.count_d2_reg[3] ),
        .\gic0.gc0.count_reg[0]_0 (\gic0.gc0.count_reg[0] [1]),
        .wr_clk(wr_clk));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_status_flags_as
   (full,
    out,
    ram_full_fb_i_reg_0,
    E,
    ram_full_fb_i_reg_1,
    wr_clk,
    ram_full_fb_i_reg_2,
    wr_en);
  output full;
  output out;
  output ram_full_fb_i_reg_0;
  output [0:0]E;
  input ram_full_fb_i_reg_1;
  input wr_clk;
  input [0:0]ram_full_fb_i_reg_2;
  input wr_en;

  wire [0:0]E;
  (* DONT_TOUCH *) wire ram_full_fb_i;
  wire ram_full_fb_i_reg_0;
  wire ram_full_fb_i_reg_1;
  wire [0:0]ram_full_fb_i_reg_2;
  (* DONT_TOUCH *) wire ram_full_i;
  wire wr_clk;
  wire wr_en;

  assign full = ram_full_i;
  assign out = ram_full_fb_i;
  LUT2 #(
    .INIT(4'h2)) 
    \gic0.gc0.count_d1[3]_i_1 
       (.I0(wr_en),
        .I1(ram_full_fb_i),
        .O(E));
  LUT2 #(
    .INIT(4'h8)) 
    \gof.gof1.overflow_i_i_1 
       (.I0(ram_full_fb_i),
        .I1(wr_en),
        .O(ram_full_fb_i_reg_0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    ram_full_fb_i_reg
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(ram_full_fb_i_reg_2),
        .D(ram_full_fb_i_reg_1),
        .Q(ram_full_fb_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    ram_full_i_reg
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(ram_full_fb_i_reg_2),
        .D(ram_full_fb_i_reg_1),
        .Q(ram_full_i));
endmodule

(* ORIG_REF_NAME = "wr_status_flags_as" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_wr_status_flags_as_15
   (full,
    out,
    ram_full_fb_i_reg_0,
    E,
    ram_full_fb_i_reg_1,
    wr_clk,
    ram_full_fb_i_reg_2,
    wr_en);
  output full;
  output out;
  output ram_full_fb_i_reg_0;
  output [0:0]E;
  input ram_full_fb_i_reg_1;
  input wr_clk;
  input [0:0]ram_full_fb_i_reg_2;
  input wr_en;

  wire [0:0]E;
  (* DONT_TOUCH *) wire ram_full_fb_i;
  wire ram_full_fb_i_reg_0;
  wire ram_full_fb_i_reg_1;
  wire [0:0]ram_full_fb_i_reg_2;
  (* DONT_TOUCH *) wire ram_full_i;
  wire wr_clk;
  wire wr_en;

  assign full = ram_full_i;
  assign out = ram_full_fb_i;
  LUT2 #(
    .INIT(4'h2)) 
    \gic0.gc0.count_d1[3]_i_1 
       (.I0(wr_en),
        .I1(ram_full_fb_i),
        .O(E));
  LUT2 #(
    .INIT(4'h8)) 
    \gof.gof1.overflow_i_i_1 
       (.I0(ram_full_fb_i),
        .I1(wr_en),
        .O(ram_full_fb_i_reg_0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    ram_full_fb_i_reg
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(ram_full_fb_i_reg_2),
        .D(ram_full_fb_i_reg_1),
        .Q(ram_full_fb_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  (* equivalent_register_removal = "no" *) 
  FDCE #(
    .INIT(1'b0)) 
    ram_full_i_reg
       (.C(wr_clk),
        .CE(1'b1),
        .CLR(ram_full_fb_i_reg_2),
        .D(ram_full_fb_i_reg_1),
        .Q(ram_full_i));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_addr_ctl
   (addr_in_rdy_rise_edge,
    addr_in_rdy_last,
    sl_iport0_o,
    out,
    addr_in_rdy_rise_edge0,
    clk,
    addr_in_rdy_last_reg_0,
    \addr_reg[16]_0 ,
    \addr_reg[16]_1 );
  output addr_in_rdy_rise_edge;
  output addr_in_rdy_last;
  output [16:0]sl_iport0_o;
  input [0:0]out;
  input addr_in_rdy_rise_edge0;
  input clk;
  input [0:0]addr_in_rdy_last_reg_0;
  input \addr_reg[16]_0 ;
  input [16:0]\addr_reg[16]_1 ;

  wire \addr[11]_i_2_n_0 ;
  wire \addr[11]_i_3_n_0 ;
  wire \addr[11]_i_4_n_0 ;
  wire \addr[11]_i_5_n_0 ;
  wire \addr[15]_i_2_n_0 ;
  wire \addr[15]_i_3_n_0 ;
  wire \addr[15]_i_4_n_0 ;
  wire \addr[15]_i_5_n_0 ;
  wire \addr[16]_i_3_n_0 ;
  wire \addr[3]_i_2_n_0 ;
  wire \addr[3]_i_3_n_0 ;
  wire \addr[3]_i_4_n_0 ;
  wire \addr[3]_i_5_n_0 ;
  wire \addr[3]_i_6_n_0 ;
  wire \addr[7]_i_2_n_0 ;
  wire \addr[7]_i_3_n_0 ;
  wire \addr[7]_i_4_n_0 ;
  wire \addr[7]_i_5_n_0 ;
  wire addr_in_rdy_last;
  wire [0:0]addr_in_rdy_last_reg_0;
  wire addr_in_rdy_rise_edge;
  wire addr_in_rdy_rise_edge0;
  wire \addr_reg[11]_i_1_n_0 ;
  wire \addr_reg[11]_i_1_n_1 ;
  wire \addr_reg[11]_i_1_n_2 ;
  wire \addr_reg[11]_i_1_n_3 ;
  wire \addr_reg[11]_i_1_n_4 ;
  wire \addr_reg[11]_i_1_n_5 ;
  wire \addr_reg[11]_i_1_n_6 ;
  wire \addr_reg[11]_i_1_n_7 ;
  wire \addr_reg[15]_i_1_n_0 ;
  wire \addr_reg[15]_i_1_n_1 ;
  wire \addr_reg[15]_i_1_n_2 ;
  wire \addr_reg[15]_i_1_n_3 ;
  wire \addr_reg[15]_i_1_n_4 ;
  wire \addr_reg[15]_i_1_n_5 ;
  wire \addr_reg[15]_i_1_n_6 ;
  wire \addr_reg[15]_i_1_n_7 ;
  wire \addr_reg[16]_0 ;
  wire [16:0]\addr_reg[16]_1 ;
  wire \addr_reg[16]_i_2_n_7 ;
  wire \addr_reg[3]_i_1_n_0 ;
  wire \addr_reg[3]_i_1_n_1 ;
  wire \addr_reg[3]_i_1_n_2 ;
  wire \addr_reg[3]_i_1_n_3 ;
  wire \addr_reg[3]_i_1_n_4 ;
  wire \addr_reg[3]_i_1_n_5 ;
  wire \addr_reg[3]_i_1_n_6 ;
  wire \addr_reg[3]_i_1_n_7 ;
  wire \addr_reg[7]_i_1_n_0 ;
  wire \addr_reg[7]_i_1_n_1 ;
  wire \addr_reg[7]_i_1_n_2 ;
  wire \addr_reg[7]_i_1_n_3 ;
  wire \addr_reg[7]_i_1_n_4 ;
  wire \addr_reg[7]_i_1_n_5 ;
  wire \addr_reg[7]_i_1_n_6 ;
  wire \addr_reg[7]_i_1_n_7 ;
  wire clk;
  wire [0:0]out;
  wire [16:0]sl_iport0_o;
  wire [3:0]\NLW_addr_reg[16]_i_2_CO_UNCONNECTED ;
  wire [3:1]\NLW_addr_reg[16]_i_2_O_UNCONNECTED ;

  LUT3 #(
    .INIT(8'hB8)) 
    \addr[11]_i_2 
       (.I0(\addr_reg[16]_1 [11]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[11]),
        .O(\addr[11]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[11]_i_3 
       (.I0(\addr_reg[16]_1 [10]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[10]),
        .O(\addr[11]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[11]_i_4 
       (.I0(\addr_reg[16]_1 [9]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[9]),
        .O(\addr[11]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[11]_i_5 
       (.I0(\addr_reg[16]_1 [8]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[8]),
        .O(\addr[11]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[15]_i_2 
       (.I0(\addr_reg[16]_1 [15]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[15]),
        .O(\addr[15]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[15]_i_3 
       (.I0(\addr_reg[16]_1 [14]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[14]),
        .O(\addr[15]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[15]_i_4 
       (.I0(\addr_reg[16]_1 [13]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[13]),
        .O(\addr[15]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[15]_i_5 
       (.I0(\addr_reg[16]_1 [12]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[12]),
        .O(\addr[15]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[16]_i_3 
       (.I0(\addr_reg[16]_1 [16]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[16]),
        .O(\addr[16]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[3]_i_2 
       (.I0(\addr_reg[16]_1 [0]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[0]),
        .O(\addr[3]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[3]_i_3 
       (.I0(\addr_reg[16]_1 [3]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[3]),
        .O(\addr[3]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[3]_i_4 
       (.I0(\addr_reg[16]_1 [2]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[2]),
        .O(\addr[3]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[3]_i_5 
       (.I0(\addr_reg[16]_1 [1]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[1]),
        .O(\addr[3]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \addr[3]_i_6 
       (.I0(sl_iport0_o[0]),
        .I1(\addr_reg[16]_1 [0]),
        .I2(addr_in_rdy_rise_edge),
        .O(\addr[3]_i_6_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[7]_i_2 
       (.I0(\addr_reg[16]_1 [7]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[7]),
        .O(\addr[7]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[7]_i_3 
       (.I0(\addr_reg[16]_1 [6]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[6]),
        .O(\addr[7]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[7]_i_4 
       (.I0(\addr_reg[16]_1 [5]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[5]),
        .O(\addr[7]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \addr[7]_i_5 
       (.I0(\addr_reg[16]_1 [4]),
        .I1(addr_in_rdy_rise_edge),
        .I2(sl_iport0_o[4]),
        .O(\addr[7]_i_5_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    addr_in_rdy_last_reg
       (.C(clk),
        .CE(1'b1),
        .D(addr_in_rdy_last_reg_0),
        .Q(addr_in_rdy_last),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    addr_in_rdy_rise_edge_reg
       (.C(clk),
        .CE(1'b1),
        .D(addr_in_rdy_rise_edge0),
        .Q(addr_in_rdy_rise_edge),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[0] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[3]_i_1_n_7 ),
        .Q(sl_iport0_o[0]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[10] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[11]_i_1_n_5 ),
        .Q(sl_iport0_o[10]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[11] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[11]_i_1_n_4 ),
        .Q(sl_iport0_o[11]),
        .R(out));
  CARRY4 \addr_reg[11]_i_1 
       (.CI(\addr_reg[7]_i_1_n_0 ),
        .CO({\addr_reg[11]_i_1_n_0 ,\addr_reg[11]_i_1_n_1 ,\addr_reg[11]_i_1_n_2 ,\addr_reg[11]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\addr_reg[11]_i_1_n_4 ,\addr_reg[11]_i_1_n_5 ,\addr_reg[11]_i_1_n_6 ,\addr_reg[11]_i_1_n_7 }),
        .S({\addr[11]_i_2_n_0 ,\addr[11]_i_3_n_0 ,\addr[11]_i_4_n_0 ,\addr[11]_i_5_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[12] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[15]_i_1_n_7 ),
        .Q(sl_iport0_o[12]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[13] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[15]_i_1_n_6 ),
        .Q(sl_iport0_o[13]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[14] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[15]_i_1_n_5 ),
        .Q(sl_iport0_o[14]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[15] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[15]_i_1_n_4 ),
        .Q(sl_iport0_o[15]),
        .R(out));
  CARRY4 \addr_reg[15]_i_1 
       (.CI(\addr_reg[11]_i_1_n_0 ),
        .CO({\addr_reg[15]_i_1_n_0 ,\addr_reg[15]_i_1_n_1 ,\addr_reg[15]_i_1_n_2 ,\addr_reg[15]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\addr_reg[15]_i_1_n_4 ,\addr_reg[15]_i_1_n_5 ,\addr_reg[15]_i_1_n_6 ,\addr_reg[15]_i_1_n_7 }),
        .S({\addr[15]_i_2_n_0 ,\addr[15]_i_3_n_0 ,\addr[15]_i_4_n_0 ,\addr[15]_i_5_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[16] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[16]_i_2_n_7 ),
        .Q(sl_iport0_o[16]),
        .R(out));
  CARRY4 \addr_reg[16]_i_2 
       (.CI(\addr_reg[15]_i_1_n_0 ),
        .CO(\NLW_addr_reg[16]_i_2_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_addr_reg[16]_i_2_O_UNCONNECTED [3:1],\addr_reg[16]_i_2_n_7 }),
        .S({1'b0,1'b0,1'b0,\addr[16]_i_3_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[1] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[3]_i_1_n_6 ),
        .Q(sl_iport0_o[1]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[2] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[3]_i_1_n_5 ),
        .Q(sl_iport0_o[2]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[3] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[3]_i_1_n_4 ),
        .Q(sl_iport0_o[3]),
        .R(out));
  CARRY4 \addr_reg[3]_i_1 
       (.CI(1'b0),
        .CO({\addr_reg[3]_i_1_n_0 ,\addr_reg[3]_i_1_n_1 ,\addr_reg[3]_i_1_n_2 ,\addr_reg[3]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\addr[3]_i_2_n_0 }),
        .O({\addr_reg[3]_i_1_n_4 ,\addr_reg[3]_i_1_n_5 ,\addr_reg[3]_i_1_n_6 ,\addr_reg[3]_i_1_n_7 }),
        .S({\addr[3]_i_3_n_0 ,\addr[3]_i_4_n_0 ,\addr[3]_i_5_n_0 ,\addr[3]_i_6_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[4] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[7]_i_1_n_7 ),
        .Q(sl_iport0_o[4]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[5] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[7]_i_1_n_6 ),
        .Q(sl_iport0_o[5]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[6] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[7]_i_1_n_5 ),
        .Q(sl_iport0_o[6]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[7] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[7]_i_1_n_4 ),
        .Q(sl_iport0_o[7]),
        .R(out));
  CARRY4 \addr_reg[7]_i_1 
       (.CI(\addr_reg[3]_i_1_n_0 ),
        .CO({\addr_reg[7]_i_1_n_0 ,\addr_reg[7]_i_1_n_1 ,\addr_reg[7]_i_1_n_2 ,\addr_reg[7]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\addr_reg[7]_i_1_n_4 ,\addr_reg[7]_i_1_n_5 ,\addr_reg[7]_i_1_n_6 ,\addr_reg[7]_i_1_n_7 }),
        .S({\addr[7]_i_2_n_0 ,\addr[7]_i_3_n_0 ,\addr[7]_i_4_n_0 ,\addr[7]_i_5_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[8] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[11]_i_1_n_7 ),
        .Q(sl_iport0_o[8]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \addr_reg[9] 
       (.C(clk),
        .CE(\addr_reg[16]_0 ),
        .D(\addr_reg[11]_i_1_n_6 ),
        .Q(sl_iport0_o[9]),
        .R(out));
endmodule

(* ERROR = "7" *) (* FORWARD = "4" *) (* IDLE = "0" *) 
(* PORTS = "1" *) (* PORT_SELECT = "3" *) (* SWITCH_SELECT = "2" *) 
(* XILINX_JEP106_ID = "12'b000001001001" *) (* dont_touch = "true" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bscan_switch
   (s_bscan_drck,
    s_bscan_reset,
    s_bscan_sel,
    s_bscan_capture,
    s_bscan_shift,
    s_bscan_update,
    s_bscan_tdi,
    s_bscan_runtest,
    s_bscan_tck,
    s_bscan_tms,
    s_bscanid_en,
    s_bscan_tdo,
    m_bscan_drck,
    m_bscan_reset,
    m_bscan_sel,
    m_bscan_capture,
    m_bscan_shift,
    m_bscan_update,
    m_bscan_tdi,
    m_bscan_tdo,
    m_bscan_bscanid_en,
    m_bscan_runtest,
    m_bscan_tck,
    m_bscan_tms);
  input s_bscan_drck;
  input s_bscan_reset;
  input s_bscan_sel;
  input s_bscan_capture;
  input s_bscan_shift;
  input s_bscan_update;
  input s_bscan_tdi;
  input s_bscan_runtest;
  input s_bscan_tck;
  input s_bscan_tms;
  input s_bscanid_en;
  output s_bscan_tdo;
  output [0:0]m_bscan_drck;
  output [0:0]m_bscan_reset;
  output [0:0]m_bscan_sel;
  output [0:0]m_bscan_capture;
  output [0:0]m_bscan_shift;
  output [0:0]m_bscan_update;
  output [0:0]m_bscan_tdi;
  input [0:0]m_bscan_tdo;
  output m_bscan_bscanid_en;
  output [0:0]m_bscan_runtest;
  output [0:0]m_bscan_tck;
  output [0:0]m_bscan_tms;

  wire [0:0]bscanid;
  wire \bscanid[0]_i_1_n_0 ;
  wire \bscanid[10]_i_1_n_0 ;
  wire \bscanid[11]_i_1_n_0 ;
  wire \bscanid[12]_i_1_n_0 ;
  wire \bscanid[13]_i_1_n_0 ;
  wire \bscanid[14]_i_1_n_0 ;
  wire \bscanid[15]_i_1_n_0 ;
  wire \bscanid[16]_i_1_n_0 ;
  wire \bscanid[17]_i_1_n_0 ;
  wire \bscanid[18]_i_1_n_0 ;
  wire \bscanid[19]_i_1_n_0 ;
  wire \bscanid[1]_i_1_n_0 ;
  wire \bscanid[20]_i_1_n_0 ;
  wire \bscanid[21]_i_1_n_0 ;
  wire \bscanid[22]_i_1_n_0 ;
  wire \bscanid[23]_i_1_n_0 ;
  wire \bscanid[24]_i_1_n_0 ;
  wire \bscanid[25]_i_1_n_0 ;
  wire \bscanid[26]_i_1_n_0 ;
  wire \bscanid[27]_i_1_n_0 ;
  wire \bscanid[28]_i_1_n_0 ;
  wire \bscanid[29]_i_1_n_0 ;
  wire \bscanid[2]_i_1_n_0 ;
  wire \bscanid[30]_i_1_n_0 ;
  wire \bscanid[31]_i_1_n_0 ;
  wire \bscanid[31]_i_2_n_0 ;
  wire \bscanid[3]_i_1_n_0 ;
  wire \bscanid[4]_i_1_n_0 ;
  wire \bscanid[5]_i_1_n_0 ;
  wire \bscanid[6]_i_1_n_0 ;
  wire \bscanid[7]_i_1_n_0 ;
  wire \bscanid[8]_i_1_n_0 ;
  wire \bscanid[9]_i_1_n_0 ;
  wire [31:1]bscanid__0;
  (* DONT_TOUCH *) wire count_flag;
  wire count_flag_i_1_n_0;
  wire count_flag_i_2_n_0;
  (* DONT_TOUCH *) wire [7:0]counter;
  wire \counter[0]_i_2_n_0 ;
  wire \counter[5]_i_2_n_0 ;
  wire \counter[7]_i_1_n_0 ;
  wire [5:0]counter__0;
  (* DONT_TOUCH *) wire [31:0]curid;
  (* DONT_TOUCH *) wire [1:0]id_state;
  wire \id_state[1]_i_1_n_0 ;
  wire m_bscan_bscanid_en;
  wire [0:0]m_bscan_capture;
  wire [0:0]m_bscan_drck;
  wire \m_bscan_drck[0]_INST_0_i_1_n_0 ;
  wire [0:0]m_bscan_runtest;
  wire [0:0]m_bscan_sel;
  wire [0:0]m_bscan_shift;
  wire [0:0]m_bscan_tdo;
  wire [1:1]p_0_in__0;
  wire [28:28]p_1_in__0;
  (* DONT_TOUCH *) wire [5:0]portno;
  (* DONT_TOUCH *) wire [5:0]portno_temp;
  wire \portno_temp[0]_i_1_n_0 ;
  wire \portno_temp[1]_i_1_n_0 ;
  wire \portno_temp[2]_i_1_n_0 ;
  wire \portno_temp[3]_i_1_n_0 ;
  wire \portno_temp[4]_i_1_n_0 ;
  wire \portno_temp[5]_i_1_n_0 ;
  wire \portno_temp[5]_i_2_n_0 ;
  wire s_bscan_capture;
  wire s_bscan_drck;
  wire s_bscan_reset;
  wire s_bscan_runtest;
  wire s_bscan_sel;
  wire s_bscan_shift;
  wire s_bscan_tck;
  wire s_bscan_tdi;
  wire s_bscan_tdo;
  wire s_bscan_tdo_INST_0_i_1_n_0;
  wire s_bscan_tdo_INST_0_i_2_n_0;
  wire s_bscan_tms;
  wire s_bscan_update;
  wire s_bscanid_en;
  (* DONT_TOUCH *) wire [31:0]shiftreg;
  wire \shiftreg[0]_i_1_n_0 ;
  wire \shiftreg[10]_i_1_n_0 ;
  wire \shiftreg[11]_i_1_n_0 ;
  wire \shiftreg[12]_i_1_n_0 ;
  wire \shiftreg[13]_i_1_n_0 ;
  wire \shiftreg[14]_i_1_n_0 ;
  wire \shiftreg[15]_i_1_n_0 ;
  wire \shiftreg[16]_i_1_n_0 ;
  wire \shiftreg[17]_i_1_n_0 ;
  wire \shiftreg[18]_i_1_n_0 ;
  wire \shiftreg[19]_i_1_n_0 ;
  wire \shiftreg[1]_i_1_n_0 ;
  wire \shiftreg[20]_i_1_n_0 ;
  wire \shiftreg[21]_i_1_n_0 ;
  wire \shiftreg[22]_i_1_n_0 ;
  wire \shiftreg[23]_i_1_n_0 ;
  wire \shiftreg[24]_i_1_n_0 ;
  wire \shiftreg[25]_i_1_n_0 ;
  wire \shiftreg[26]_i_1_n_0 ;
  wire \shiftreg[27]_i_1_n_0 ;
  wire \shiftreg[28]_i_1_n_0 ;
  wire \shiftreg[29]_i_1_n_0 ;
  wire \shiftreg[2]_i_1_n_0 ;
  wire \shiftreg[30]_i_1_n_0 ;
  wire \shiftreg[31]_i_1_n_0 ;
  wire \shiftreg[31]_i_2_n_0 ;
  wire \shiftreg[3]_i_1_n_0 ;
  wire \shiftreg[4]_i_1_n_0 ;
  wire \shiftreg[5]_i_1_n_0 ;
  wire \shiftreg[6]_i_1_n_0 ;
  wire \shiftreg[7]_i_1_n_0 ;
  wire \shiftreg[8]_i_1_n_0 ;
  wire \shiftreg[9]_i_1_n_0 ;
  (* DONT_TOUCH *) wire [2:0]state;
  (* DONT_TOUCH *) wire [2:0]state_temp;
  wire \state_temp[0]_i_10_n_0 ;
  wire \state_temp[0]_i_11_n_0 ;
  wire \state_temp[0]_i_12_n_0 ;
  wire \state_temp[0]_i_1_n_0 ;
  wire \state_temp[0]_i_2_n_0 ;
  wire \state_temp[0]_i_5_n_0 ;
  wire \state_temp[0]_i_6_n_0 ;
  wire \state_temp[0]_i_7_n_0 ;
  wire \state_temp[0]_i_8_n_0 ;
  wire \state_temp[0]_i_9_n_0 ;
  wire \state_temp[1]_i_1_n_0 ;
  wire \state_temp[1]_i_2_n_0 ;
  wire \state_temp[2]_i_1_n_0 ;
  wire \state_temp[2]_i_2_n_0 ;
  wire \state_temp[2]_i_3_n_0 ;
  wire \state_temp[2]_i_4_n_0 ;
  wire \state_temp_reg[0]_i_3_n_0 ;
  wire \state_temp_reg[0]_i_3_n_1 ;
  wire \state_temp_reg[0]_i_3_n_2 ;
  wire \state_temp_reg[0]_i_3_n_3 ;
  wire \state_temp_reg[0]_i_4_n_0 ;
  wire \state_temp_reg[0]_i_4_n_1 ;
  wire \state_temp_reg[0]_i_4_n_2 ;
  wire \state_temp_reg[0]_i_4_n_3 ;
  (* DONT_TOUCH *) wire [31:0]temp_curid;
  wire \temp_curid[28]_i_1_n_0 ;
  wire \temp_curid[31]_i_1_n_0 ;
  wire [3:0]\NLW_state_temp_reg[0]_i_3_O_UNCONNECTED ;
  wire [3:0]\NLW_state_temp_reg[0]_i_4_O_UNCONNECTED ;

  assign m_bscan_reset[0] = s_bscan_reset;
  assign m_bscan_tck[0] = s_bscan_tck;
  assign m_bscan_tdi[0] = s_bscan_tdi;
  assign m_bscan_tms[0] = s_bscan_tms;
  assign m_bscan_update[0] = s_bscan_update;
  LUT2 #(
    .INIT(4'hB)) 
    \bscanid[0]_i_1 
       (.I0(bscanid__0[1]),
        .I1(id_state[0]),
        .O(\bscanid[0]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[10]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[11]),
        .O(\bscanid[10]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[11]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[12]),
        .O(\bscanid[11]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[12]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[13]),
        .O(\bscanid[12]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[13]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[14]),
        .O(\bscanid[13]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[14]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[15]),
        .O(\bscanid[14]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[15]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[16]),
        .O(\bscanid[15]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[16]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[17]),
        .O(\bscanid[16]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[17]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[18]),
        .O(\bscanid[17]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[18]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[19]),
        .O(\bscanid[18]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[19]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[20]),
        .O(\bscanid[19]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[1]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[2]),
        .O(\bscanid[1]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \bscanid[20]_i_1 
       (.I0(bscanid__0[21]),
        .I1(id_state[0]),
        .O(\bscanid[20]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[21]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[22]),
        .O(\bscanid[21]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[22]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[23]),
        .O(\bscanid[22]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \bscanid[23]_i_1 
       (.I0(bscanid__0[24]),
        .I1(id_state[0]),
        .O(\bscanid[23]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[24]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[25]),
        .O(\bscanid[24]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[25]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[26]),
        .O(\bscanid[25]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \bscanid[26]_i_1 
       (.I0(bscanid__0[27]),
        .I1(id_state[0]),
        .O(\bscanid[26]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[27]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[28]),
        .O(\bscanid[27]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[28]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[29]),
        .O(\bscanid[28]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[29]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[30]),
        .O(\bscanid[29]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[2]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[3]),
        .O(\bscanid[2]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[30]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[31]),
        .O(\bscanid[30]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h45)) 
    \bscanid[31]_i_1 
       (.I0(id_state[1]),
        .I1(s_bscanid_en),
        .I2(id_state[0]),
        .O(\bscanid[31]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[31]_i_2 
       (.I0(id_state[0]),
        .I1(s_bscan_tdi),
        .O(\bscanid[31]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[3]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[4]),
        .O(\bscanid[3]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[4]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[5]),
        .O(\bscanid[4]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[5]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[6]),
        .O(\bscanid[5]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[6]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[7]),
        .O(\bscanid[6]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[7]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[8]),
        .O(\bscanid[7]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \bscanid[8]_i_1 
       (.I0(bscanid__0[9]),
        .I1(id_state[0]),
        .O(\bscanid[8]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \bscanid[9]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid__0[10]),
        .O(\bscanid[9]_i_1_n_0 ));
  FDSE \bscanid_reg[0] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[0]_i_1_n_0 ),
        .Q(bscanid),
        .S(s_bscan_reset));
  FDRE \bscanid_reg[10] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[10]_i_1_n_0 ),
        .Q(bscanid__0[10]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[11] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[11]_i_1_n_0 ),
        .Q(bscanid__0[11]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[12] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[12]_i_1_n_0 ),
        .Q(bscanid__0[12]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[13] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[13]_i_1_n_0 ),
        .Q(bscanid__0[13]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[14] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[14]_i_1_n_0 ),
        .Q(bscanid__0[14]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[15] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[15]_i_1_n_0 ),
        .Q(bscanid__0[15]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[16] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[16]_i_1_n_0 ),
        .Q(bscanid__0[16]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[17] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[17]_i_1_n_0 ),
        .Q(bscanid__0[17]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[18] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[18]_i_1_n_0 ),
        .Q(bscanid__0[18]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[19] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[19]_i_1_n_0 ),
        .Q(bscanid__0[19]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[1] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[1]_i_1_n_0 ),
        .Q(bscanid__0[1]),
        .R(s_bscan_reset));
  FDSE \bscanid_reg[20] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[20]_i_1_n_0 ),
        .Q(bscanid__0[20]),
        .S(s_bscan_reset));
  FDRE \bscanid_reg[21] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[21]_i_1_n_0 ),
        .Q(bscanid__0[21]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[22] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[22]_i_1_n_0 ),
        .Q(bscanid__0[22]),
        .R(s_bscan_reset));
  FDSE \bscanid_reg[23] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[23]_i_1_n_0 ),
        .Q(bscanid__0[23]),
        .S(s_bscan_reset));
  FDRE \bscanid_reg[24] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[24]_i_1_n_0 ),
        .Q(bscanid__0[24]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[25] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[25]_i_1_n_0 ),
        .Q(bscanid__0[25]),
        .R(s_bscan_reset));
  FDSE \bscanid_reg[26] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[26]_i_1_n_0 ),
        .Q(bscanid__0[26]),
        .S(s_bscan_reset));
  FDRE \bscanid_reg[27] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[27]_i_1_n_0 ),
        .Q(bscanid__0[27]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[28] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[28]_i_1_n_0 ),
        .Q(bscanid__0[28]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[29] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[29]_i_1_n_0 ),
        .Q(bscanid__0[29]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[2] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[2]_i_1_n_0 ),
        .Q(bscanid__0[2]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[30] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[30]_i_1_n_0 ),
        .Q(bscanid__0[30]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[31] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[31]_i_2_n_0 ),
        .Q(bscanid__0[31]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[3] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[3]_i_1_n_0 ),
        .Q(bscanid__0[3]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[4] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[4]_i_1_n_0 ),
        .Q(bscanid__0[4]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[5] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[5]_i_1_n_0 ),
        .Q(bscanid__0[5]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[6] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[6]_i_1_n_0 ),
        .Q(bscanid__0[6]),
        .R(s_bscan_reset));
  FDRE \bscanid_reg[7] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[7]_i_1_n_0 ),
        .Q(bscanid__0[7]),
        .R(s_bscan_reset));
  FDSE \bscanid_reg[8] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[8]_i_1_n_0 ),
        .Q(bscanid__0[8]),
        .S(s_bscan_reset));
  FDRE \bscanid_reg[9] 
       (.C(s_bscan_tck),
        .CE(\bscanid[31]_i_1_n_0 ),
        .D(\bscanid[9]_i_1_n_0 ),
        .Q(bscanid__0[9]),
        .R(s_bscan_reset));
  LUT6 #(
    .INIT(64'h00000000FFFF4000)) 
    count_flag_i_1
       (.I0(count_flag_i_2_n_0),
        .I1(counter[5]),
        .I2(counter[0]),
        .I3(\counter[0]_i_2_n_0 ),
        .I4(count_flag),
        .I5(s_bscan_tdo_INST_0_i_1_n_0),
        .O(count_flag_i_1_n_0));
  LUT2 #(
    .INIT(4'hE)) 
    count_flag_i_2
       (.I0(counter[7]),
        .I1(counter[6]),
        .O(count_flag_i_2_n_0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE count_flag_reg
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(count_flag_i_1_n_0),
        .Q(count_flag),
        .R(s_bscan_reset));
  LUT6 #(
    .INIT(64'hFFFFFFF40000000B)) 
    \counter[0]_i_1 
       (.I0(\counter[0]_i_2_n_0 ),
        .I1(counter[5]),
        .I2(counter[7]),
        .I3(counter[6]),
        .I4(s_bscan_tdo_INST_0_i_1_n_0),
        .I5(counter[0]),
        .O(counter__0[0]));
  LUT4 #(
    .INIT(16'h0001)) 
    \counter[0]_i_2 
       (.I0(counter[3]),
        .I1(counter[4]),
        .I2(counter[1]),
        .I3(counter[2]),
        .O(\counter[0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \counter[1]_i_1 
       (.I0(counter[1]),
        .I1(\counter[5]_i_2_n_0 ),
        .O(counter__0[1]));
  LUT3 #(
    .INIT(8'h6A)) 
    \counter[2]_i_1 
       (.I0(counter[2]),
        .I1(\counter[5]_i_2_n_0 ),
        .I2(counter[1]),
        .O(counter__0[2]));
  LUT4 #(
    .INIT(16'h6AAA)) 
    \counter[3]_i_1 
       (.I0(counter[3]),
        .I1(counter[1]),
        .I2(\counter[5]_i_2_n_0 ),
        .I3(counter[2]),
        .O(counter__0[3]));
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \counter[4]_i_1 
       (.I0(counter[4]),
        .I1(counter[2]),
        .I2(\counter[5]_i_2_n_0 ),
        .I3(counter[1]),
        .I4(counter[3]),
        .O(counter__0[4]));
  LUT6 #(
    .INIT(64'hEAAAAAAAAAAAAAAA)) 
    \counter[5]_i_1 
       (.I0(counter[5]),
        .I1(counter[3]),
        .I2(counter[1]),
        .I3(\counter[5]_i_2_n_0 ),
        .I4(counter[2]),
        .I5(counter[4]),
        .O(counter__0[5]));
  LUT6 #(
    .INIT(64'h0002000200000002)) 
    \counter[5]_i_2 
       (.I0(counter[0]),
        .I1(s_bscan_tdo_INST_0_i_1_n_0),
        .I2(counter[6]),
        .I3(counter[7]),
        .I4(counter[5]),
        .I5(\counter[0]_i_2_n_0 ),
        .O(\counter[5]_i_2_n_0 ));
  LUT4 #(
    .INIT(16'hFBFF)) 
    \counter[7]_i_1 
       (.I0(s_bscan_reset),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[0] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter__0[0]),
        .Q(counter[0]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[1] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter__0[1]),
        .Q(counter[1]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[2] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter__0[2]),
        .Q(counter[2]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[3] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter__0[3]),
        .Q(counter[3]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[4] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter__0[4]),
        .Q(counter[4]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[5] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter__0[5]),
        .Q(counter[5]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[6] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter[6]),
        .Q(counter[6]),
        .R(\counter[7]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \counter_reg[7] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(counter[7]),
        .Q(counter[7]),
        .R(\counter[7]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_1
       (.I0(temp_curid[31]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[31]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_10
       (.I0(temp_curid[22]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[22]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_11
       (.I0(temp_curid[21]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[21]));
  LUT4 #(
    .INIT(16'hFBFF)) 
    curid_inferred_i_12
       (.I0(temp_curid[20]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[20]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_13
       (.I0(temp_curid[19]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[19]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_14
       (.I0(temp_curid[18]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[18]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_15
       (.I0(temp_curid[17]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[17]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_16
       (.I0(temp_curid[16]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[16]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_17
       (.I0(temp_curid[15]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[15]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_18
       (.I0(temp_curid[14]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[14]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_19
       (.I0(temp_curid[13]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[13]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_2
       (.I0(temp_curid[30]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[30]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_20
       (.I0(temp_curid[12]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[12]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_21
       (.I0(temp_curid[11]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[11]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_22
       (.I0(temp_curid[10]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[10]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_23
       (.I0(temp_curid[9]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[9]));
  LUT4 #(
    .INIT(16'hFBFF)) 
    curid_inferred_i_24
       (.I0(temp_curid[8]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[8]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_25
       (.I0(temp_curid[7]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[7]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_26
       (.I0(temp_curid[6]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[6]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_27
       (.I0(temp_curid[5]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[5]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_28
       (.I0(temp_curid[4]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[4]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_29
       (.I0(temp_curid[3]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[3]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_3
       (.I0(temp_curid[29]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[29]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_30
       (.I0(temp_curid[2]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[2]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_31
       (.I0(temp_curid[1]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[1]));
  LUT4 #(
    .INIT(16'hFBFF)) 
    curid_inferred_i_32
       (.I0(temp_curid[0]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[0]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_4
       (.I0(temp_curid[28]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[28]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_5
       (.I0(temp_curid[27]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[27]));
  LUT4 #(
    .INIT(16'hFBFF)) 
    curid_inferred_i_6
       (.I0(temp_curid[26]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[26]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_7
       (.I0(temp_curid[25]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[25]));
  LUT4 #(
    .INIT(16'h0800)) 
    curid_inferred_i_8
       (.I0(temp_curid[24]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[24]));
  LUT4 #(
    .INIT(16'hFBFF)) 
    curid_inferred_i_9
       (.I0(temp_curid[23]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(state[1]),
        .O(curid[23]));
  LUT1 #(
    .INIT(2'h1)) 
    \id_state[1]_i_1 
       (.I0(id_state[1]),
        .O(\id_state[1]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h84)) 
    \id_state[1]_i_2 
       (.I0(id_state[0]),
        .I1(id_state[1]),
        .I2(s_bscanid_en),
        .O(p_0_in__0));
  (* DONT_TOUCH *) 
  (* FSM_ENCODED_STATES = "iSTATE:00,iSTATE0:01" *) 
  (* KEEP = "yes" *) 
  FDRE \id_state_reg[0] 
       (.C(s_bscan_tck),
        .CE(\id_state[1]_i_1_n_0 ),
        .D(s_bscanid_en),
        .Q(id_state[0]),
        .R(s_bscan_reset));
  (* DONT_TOUCH *) 
  (* FSM_ENCODED_STATES = "iSTATE:00,iSTATE0:01" *) 
  (* KEEP = "yes" *) 
  FDRE \id_state_reg[1] 
       (.C(s_bscan_tck),
        .CE(\id_state[1]_i_1_n_0 ),
        .D(p_0_in__0),
        .Q(id_state[1]),
        .R(s_bscan_reset));
  LUT5 #(
    .INIT(32'h00E00000)) 
    m_bscan_bscanid_en_INST_0
       (.I0(s_bscan_shift),
        .I1(s_bscan_capture),
        .I2(state[0]),
        .I3(state[2]),
        .I4(state[1]),
        .O(m_bscan_bscanid_en));
  LUT5 #(
    .INIT(32'h00100000)) 
    \m_bscan_capture[0]_INST_0 
       (.I0(state[1]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(\m_bscan_drck[0]_INST_0_i_1_n_0 ),
        .I4(s_bscan_capture),
        .O(m_bscan_capture));
  LUT5 #(
    .INIT(32'hFFFFFFEF)) 
    \m_bscan_drck[0]_INST_0 
       (.I0(state[1]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(\m_bscan_drck[0]_INST_0_i_1_n_0 ),
        .I4(s_bscan_drck),
        .O(m_bscan_drck));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \m_bscan_drck[0]_INST_0_i_1 
       (.I0(portno[3]),
        .I1(portno[2]),
        .I2(portno[0]),
        .I3(portno[1]),
        .I4(portno[4]),
        .I5(portno[5]),
        .O(\m_bscan_drck[0]_INST_0_i_1_n_0 ));
  LUT5 #(
    .INIT(32'h00100000)) 
    \m_bscan_runtest[0]_INST_0 
       (.I0(state[1]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(\m_bscan_drck[0]_INST_0_i_1_n_0 ),
        .I4(s_bscan_runtest),
        .O(m_bscan_runtest));
  LUT4 #(
    .INIT(16'h0010)) 
    \m_bscan_sel[0]_INST_0 
       (.I0(state[1]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(\m_bscan_drck[0]_INST_0_i_1_n_0 ),
        .O(m_bscan_sel));
  LUT5 #(
    .INIT(32'h00100000)) 
    \m_bscan_shift[0]_INST_0 
       (.I0(state[1]),
        .I1(state[0]),
        .I2(state[2]),
        .I3(\m_bscan_drck[0]_INST_0_i_1_n_0 ),
        .I4(s_bscan_shift),
        .O(m_bscan_shift));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_reg[0] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(portno_temp[0]),
        .Q(portno[0]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_reg[1] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(portno_temp[1]),
        .Q(portno[1]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_reg[2] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(portno_temp[2]),
        .Q(portno[2]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_reg[3] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(portno_temp[3]),
        .Q(portno[3]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_reg[4] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(portno_temp[4]),
        .Q(portno[4]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_reg[5] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(portno_temp[5]),
        .Q(portno[5]),
        .R(1'b0));
  LUT3 #(
    .INIT(8'hB8)) 
    \portno_temp[0]_i_1 
       (.I0(portno_temp[0]),
        .I1(\portno_temp[5]_i_2_n_0 ),
        .I2(shiftreg[0]),
        .O(\portno_temp[0]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \portno_temp[1]_i_1 
       (.I0(portno_temp[1]),
        .I1(\portno_temp[5]_i_2_n_0 ),
        .I2(shiftreg[1]),
        .O(\portno_temp[1]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \portno_temp[2]_i_1 
       (.I0(portno_temp[2]),
        .I1(\portno_temp[5]_i_2_n_0 ),
        .I2(shiftreg[2]),
        .O(\portno_temp[2]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \portno_temp[3]_i_1 
       (.I0(portno_temp[3]),
        .I1(\portno_temp[5]_i_2_n_0 ),
        .I2(shiftreg[3]),
        .O(\portno_temp[3]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \portno_temp[4]_i_1 
       (.I0(portno_temp[4]),
        .I1(\portno_temp[5]_i_2_n_0 ),
        .I2(shiftreg[4]),
        .O(\portno_temp[4]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \portno_temp[5]_i_1 
       (.I0(portno_temp[5]),
        .I1(\portno_temp[5]_i_2_n_0 ),
        .I2(shiftreg[5]),
        .O(\portno_temp[5]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hFFBFFFFF)) 
    \portno_temp[5]_i_2 
       (.I0(state[0]),
        .I1(\state_temp_reg[0]_i_3_n_0 ),
        .I2(state[1]),
        .I3(state[2]),
        .I4(s_bscan_update),
        .O(\portno_temp[5]_i_2_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_temp_reg[0] 
       (.C(s_bscan_tck),
        .CE(s_bscan_sel),
        .D(\portno_temp[0]_i_1_n_0 ),
        .Q(portno_temp[0]),
        .R(s_bscan_reset));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_temp_reg[1] 
       (.C(s_bscan_tck),
        .CE(s_bscan_sel),
        .D(\portno_temp[1]_i_1_n_0 ),
        .Q(portno_temp[1]),
        .R(s_bscan_reset));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_temp_reg[2] 
       (.C(s_bscan_tck),
        .CE(s_bscan_sel),
        .D(\portno_temp[2]_i_1_n_0 ),
        .Q(portno_temp[2]),
        .R(s_bscan_reset));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_temp_reg[3] 
       (.C(s_bscan_tck),
        .CE(s_bscan_sel),
        .D(\portno_temp[3]_i_1_n_0 ),
        .Q(portno_temp[3]),
        .R(s_bscan_reset));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_temp_reg[4] 
       (.C(s_bscan_tck),
        .CE(s_bscan_sel),
        .D(\portno_temp[4]_i_1_n_0 ),
        .Q(portno_temp[4]),
        .R(s_bscan_reset));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \portno_temp_reg[5] 
       (.C(s_bscan_tck),
        .CE(s_bscan_sel),
        .D(\portno_temp[5]_i_1_n_0 ),
        .Q(portno_temp[5]),
        .R(s_bscan_reset));
  LUT6 #(
    .INIT(64'hBBBBB8BB8888B888)) 
    s_bscan_tdo_INST_0
       (.I0(bscanid),
        .I1(s_bscanid_en),
        .I2(shiftreg[0]),
        .I3(s_bscan_tdo_INST_0_i_1_n_0),
        .I4(s_bscan_tdo_INST_0_i_2_n_0),
        .I5(m_bscan_tdo),
        .O(s_bscan_tdo));
  LUT3 #(
    .INIT(8'hDF)) 
    s_bscan_tdo_INST_0_i_1
       (.I0(state[1]),
        .I1(state[2]),
        .I2(state[0]),
        .O(s_bscan_tdo_INST_0_i_1_n_0));
  LUT3 #(
    .INIT(8'h02)) 
    s_bscan_tdo_INST_0_i_2
       (.I0(state[2]),
        .I1(state[0]),
        .I2(state[1]),
        .O(s_bscan_tdo_INST_0_i_2_n_0));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[0]_i_1 
       (.I0(curid[0]),
        .I1(s_bscan_capture),
        .I2(shiftreg[1]),
        .I3(s_bscan_shift),
        .I4(shiftreg[0]),
        .O(\shiftreg[0]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[10]_i_1 
       (.I0(curid[10]),
        .I1(s_bscan_capture),
        .I2(shiftreg[11]),
        .I3(s_bscan_shift),
        .I4(shiftreg[10]),
        .O(\shiftreg[10]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[11]_i_1 
       (.I0(curid[11]),
        .I1(s_bscan_capture),
        .I2(shiftreg[12]),
        .I3(s_bscan_shift),
        .I4(shiftreg[11]),
        .O(\shiftreg[11]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[12]_i_1 
       (.I0(curid[12]),
        .I1(s_bscan_capture),
        .I2(shiftreg[13]),
        .I3(s_bscan_shift),
        .I4(shiftreg[12]),
        .O(\shiftreg[12]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[13]_i_1 
       (.I0(curid[13]),
        .I1(s_bscan_capture),
        .I2(shiftreg[14]),
        .I3(s_bscan_shift),
        .I4(shiftreg[13]),
        .O(\shiftreg[13]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[14]_i_1 
       (.I0(curid[14]),
        .I1(s_bscan_capture),
        .I2(shiftreg[15]),
        .I3(s_bscan_shift),
        .I4(shiftreg[14]),
        .O(\shiftreg[14]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[15]_i_1 
       (.I0(curid[15]),
        .I1(s_bscan_capture),
        .I2(shiftreg[16]),
        .I3(s_bscan_shift),
        .I4(shiftreg[15]),
        .O(\shiftreg[15]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[16]_i_1 
       (.I0(curid[16]),
        .I1(s_bscan_capture),
        .I2(shiftreg[17]),
        .I3(s_bscan_shift),
        .I4(shiftreg[16]),
        .O(\shiftreg[16]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[17]_i_1 
       (.I0(curid[17]),
        .I1(s_bscan_capture),
        .I2(shiftreg[18]),
        .I3(s_bscan_shift),
        .I4(shiftreg[17]),
        .O(\shiftreg[17]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[18]_i_1 
       (.I0(curid[18]),
        .I1(s_bscan_capture),
        .I2(shiftreg[19]),
        .I3(s_bscan_shift),
        .I4(shiftreg[18]),
        .O(\shiftreg[18]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[19]_i_1 
       (.I0(curid[19]),
        .I1(s_bscan_capture),
        .I2(shiftreg[20]),
        .I3(s_bscan_shift),
        .I4(shiftreg[19]),
        .O(\shiftreg[19]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[1]_i_1 
       (.I0(curid[1]),
        .I1(s_bscan_capture),
        .I2(shiftreg[2]),
        .I3(s_bscan_shift),
        .I4(shiftreg[1]),
        .O(\shiftreg[1]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[20]_i_1 
       (.I0(curid[20]),
        .I1(s_bscan_capture),
        .I2(shiftreg[21]),
        .I3(s_bscan_shift),
        .I4(shiftreg[20]),
        .O(\shiftreg[20]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[21]_i_1 
       (.I0(curid[21]),
        .I1(s_bscan_capture),
        .I2(shiftreg[22]),
        .I3(s_bscan_shift),
        .I4(shiftreg[21]),
        .O(\shiftreg[21]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[22]_i_1 
       (.I0(curid[22]),
        .I1(s_bscan_capture),
        .I2(shiftreg[23]),
        .I3(s_bscan_shift),
        .I4(shiftreg[22]),
        .O(\shiftreg[22]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[23]_i_1 
       (.I0(curid[23]),
        .I1(s_bscan_capture),
        .I2(shiftreg[24]),
        .I3(s_bscan_shift),
        .I4(shiftreg[23]),
        .O(\shiftreg[23]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[24]_i_1 
       (.I0(curid[24]),
        .I1(s_bscan_capture),
        .I2(shiftreg[25]),
        .I3(s_bscan_shift),
        .I4(shiftreg[24]),
        .O(\shiftreg[24]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[25]_i_1 
       (.I0(curid[25]),
        .I1(s_bscan_capture),
        .I2(shiftreg[26]),
        .I3(s_bscan_shift),
        .I4(shiftreg[25]),
        .O(\shiftreg[25]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[26]_i_1 
       (.I0(curid[26]),
        .I1(s_bscan_capture),
        .I2(shiftreg[27]),
        .I3(s_bscan_shift),
        .I4(shiftreg[26]),
        .O(\shiftreg[26]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[27]_i_1 
       (.I0(curid[27]),
        .I1(s_bscan_capture),
        .I2(shiftreg[28]),
        .I3(s_bscan_shift),
        .I4(shiftreg[27]),
        .O(\shiftreg[27]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[28]_i_1 
       (.I0(curid[28]),
        .I1(s_bscan_capture),
        .I2(shiftreg[29]),
        .I3(s_bscan_shift),
        .I4(shiftreg[28]),
        .O(\shiftreg[28]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[29]_i_1 
       (.I0(curid[29]),
        .I1(s_bscan_capture),
        .I2(shiftreg[30]),
        .I3(s_bscan_shift),
        .I4(shiftreg[29]),
        .O(\shiftreg[29]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[2]_i_1 
       (.I0(curid[2]),
        .I1(s_bscan_capture),
        .I2(shiftreg[3]),
        .I3(s_bscan_shift),
        .I4(shiftreg[2]),
        .O(\shiftreg[2]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[30]_i_1 
       (.I0(curid[30]),
        .I1(s_bscan_capture),
        .I2(shiftreg[31]),
        .I3(s_bscan_shift),
        .I4(shiftreg[30]),
        .O(\shiftreg[30]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hEAAAAAAA)) 
    \shiftreg[31]_i_1 
       (.I0(s_bscan_reset),
        .I1(s_bscan_capture),
        .I2(state[1]),
        .I3(state[0]),
        .I4(state[2]),
        .O(\shiftreg[31]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[31]_i_2 
       (.I0(curid[31]),
        .I1(s_bscan_capture),
        .I2(s_bscan_tdi),
        .I3(s_bscan_shift),
        .I4(shiftreg[31]),
        .O(\shiftreg[31]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[3]_i_1 
       (.I0(curid[3]),
        .I1(s_bscan_capture),
        .I2(shiftreg[4]),
        .I3(s_bscan_shift),
        .I4(shiftreg[3]),
        .O(\shiftreg[3]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[4]_i_1 
       (.I0(curid[4]),
        .I1(s_bscan_capture),
        .I2(shiftreg[5]),
        .I3(s_bscan_shift),
        .I4(shiftreg[4]),
        .O(\shiftreg[4]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[5]_i_1 
       (.I0(curid[5]),
        .I1(s_bscan_capture),
        .I2(shiftreg[6]),
        .I3(s_bscan_shift),
        .I4(shiftreg[5]),
        .O(\shiftreg[5]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[6]_i_1 
       (.I0(curid[6]),
        .I1(s_bscan_capture),
        .I2(shiftreg[7]),
        .I3(s_bscan_shift),
        .I4(shiftreg[6]),
        .O(\shiftreg[6]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[7]_i_1 
       (.I0(curid[7]),
        .I1(s_bscan_capture),
        .I2(shiftreg[8]),
        .I3(s_bscan_shift),
        .I4(shiftreg[7]),
        .O(\shiftreg[7]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[8]_i_1 
       (.I0(curid[8]),
        .I1(s_bscan_capture),
        .I2(shiftreg[9]),
        .I3(s_bscan_shift),
        .I4(shiftreg[8]),
        .O(\shiftreg[8]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hB8BBB888)) 
    \shiftreg[9]_i_1 
       (.I0(curid[9]),
        .I1(s_bscan_capture),
        .I2(shiftreg[10]),
        .I3(s_bscan_shift),
        .I4(shiftreg[9]),
        .O(\shiftreg[9]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[0] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[0]_i_1_n_0 ),
        .Q(shiftreg[0]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[10] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[10]_i_1_n_0 ),
        .Q(shiftreg[10]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[11] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[11]_i_1_n_0 ),
        .Q(shiftreg[11]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[12] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[12]_i_1_n_0 ),
        .Q(shiftreg[12]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[13] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[13]_i_1_n_0 ),
        .Q(shiftreg[13]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[14] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[14]_i_1_n_0 ),
        .Q(shiftreg[14]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[15] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[15]_i_1_n_0 ),
        .Q(shiftreg[15]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[16] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[16]_i_1_n_0 ),
        .Q(shiftreg[16]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[17] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[17]_i_1_n_0 ),
        .Q(shiftreg[17]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[18] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[18]_i_1_n_0 ),
        .Q(shiftreg[18]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[19] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[19]_i_1_n_0 ),
        .Q(shiftreg[19]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[1] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[1]_i_1_n_0 ),
        .Q(shiftreg[1]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[20] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[20]_i_1_n_0 ),
        .Q(shiftreg[20]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[21] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[21]_i_1_n_0 ),
        .Q(shiftreg[21]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[22] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[22]_i_1_n_0 ),
        .Q(shiftreg[22]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[23] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[23]_i_1_n_0 ),
        .Q(shiftreg[23]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[24] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[24]_i_1_n_0 ),
        .Q(shiftreg[24]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[25] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[25]_i_1_n_0 ),
        .Q(shiftreg[25]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[26] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[26]_i_1_n_0 ),
        .Q(shiftreg[26]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[27] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[27]_i_1_n_0 ),
        .Q(shiftreg[27]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[28] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[28]_i_1_n_0 ),
        .Q(shiftreg[28]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[29] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[29]_i_1_n_0 ),
        .Q(shiftreg[29]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[2] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[2]_i_1_n_0 ),
        .Q(shiftreg[2]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[30] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[30]_i_1_n_0 ),
        .Q(shiftreg[30]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[31] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[31]_i_2_n_0 ),
        .Q(shiftreg[31]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[3] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[3]_i_1_n_0 ),
        .Q(shiftreg[3]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[4] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[4]_i_1_n_0 ),
        .Q(shiftreg[4]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[5] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[5]_i_1_n_0 ),
        .Q(shiftreg[5]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[6] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[6]_i_1_n_0 ),
        .Q(shiftreg[6]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[7] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[7]_i_1_n_0 ),
        .Q(shiftreg[7]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[8] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[8]_i_1_n_0 ),
        .Q(shiftreg[8]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \shiftreg_reg[9] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\shiftreg[9]_i_1_n_0 ),
        .Q(shiftreg[9]),
        .R(\shiftreg[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \state_reg[0] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(state_temp[0]),
        .Q(state[0]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \state_reg[1] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(state_temp[1]),
        .Q(state[1]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \state_reg[2] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(state_temp[2]),
        .Q(state[2]),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h00000000AA2A002A)) 
    \state_temp[0]_i_1 
       (.I0(\state_temp[0]_i_2_n_0 ),
        .I1(state[0]),
        .I2(\state_temp_reg[0]_i_3_n_0 ),
        .I3(\state_temp[2]_i_3_n_0 ),
        .I4(state_temp[0]),
        .I5(\state_temp[2]_i_4_n_0 ),
        .O(\state_temp[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_10 
       (.I0(shiftreg[14]),
        .I1(curid[14]),
        .I2(shiftreg[15]),
        .I3(curid[15]),
        .I4(curid[16]),
        .I5(shiftreg[16]),
        .O(\state_temp[0]_i_10_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_11 
       (.I0(shiftreg[13]),
        .I1(curid[13]),
        .I2(shiftreg[11]),
        .I3(curid[11]),
        .I4(curid[12]),
        .I5(shiftreg[12]),
        .O(\state_temp[0]_i_11_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_12 
       (.I0(shiftreg[10]),
        .I1(curid[10]),
        .I2(shiftreg[8]),
        .I3(curid[8]),
        .I4(curid[9]),
        .I5(shiftreg[9]),
        .O(\state_temp[0]_i_12_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFF7FFFFFF)) 
    \state_temp[0]_i_2 
       (.I0(\state_temp_reg[0]_i_3_n_0 ),
        .I1(state[1]),
        .I2(state[2]),
        .I3(s_bscan_update),
        .I4(shiftreg[7]),
        .I5(\state_temp[2]_i_2_n_0 ),
        .O(\state_temp[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_5 
       (.I0(shiftreg[29]),
        .I1(curid[29]),
        .I2(shiftreg[30]),
        .I3(curid[30]),
        .I4(curid[31]),
        .I5(shiftreg[31]),
        .O(\state_temp[0]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_6 
       (.I0(shiftreg[28]),
        .I1(curid[28]),
        .I2(shiftreg[26]),
        .I3(curid[26]),
        .I4(curid[27]),
        .I5(shiftreg[27]),
        .O(\state_temp[0]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_7 
       (.I0(shiftreg[23]),
        .I1(curid[23]),
        .I2(shiftreg[24]),
        .I3(curid[24]),
        .I4(curid[25]),
        .I5(shiftreg[25]),
        .O(\state_temp[0]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_8 
       (.I0(shiftreg[20]),
        .I1(curid[20]),
        .I2(shiftreg[21]),
        .I3(curid[21]),
        .I4(curid[22]),
        .I5(shiftreg[22]),
        .O(\state_temp[0]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    \state_temp[0]_i_9 
       (.I0(shiftreg[17]),
        .I1(curid[17]),
        .I2(shiftreg[18]),
        .I3(curid[18]),
        .I4(curid[19]),
        .I5(shiftreg[19]),
        .O(\state_temp[0]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'h0000000444444444)) 
    \state_temp[1]_i_1 
       (.I0(s_bscan_reset),
        .I1(s_bscan_sel),
        .I2(state[1]),
        .I3(state[2]),
        .I4(state[0]),
        .I5(\state_temp[1]_i_2_n_0 ),
        .O(\state_temp[1]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h3333AFAA33330000)) 
    \state_temp[1]_i_2 
       (.I0(state[0]),
        .I1(state_temp[1]),
        .I2(\state_temp[2]_i_2_n_0 ),
        .I3(shiftreg[7]),
        .I4(\state_temp[2]_i_3_n_0 ),
        .I5(\state_temp_reg[0]_i_3_n_0 ),
        .O(\state_temp[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000FEFE00FE)) 
    \state_temp[2]_i_1 
       (.I0(shiftreg[7]),
        .I1(\state_temp[2]_i_2_n_0 ),
        .I2(\portno_temp[5]_i_2_n_0 ),
        .I3(\state_temp[2]_i_3_n_0 ),
        .I4(state_temp[2]),
        .I5(\state_temp[2]_i_4_n_0 ),
        .O(\state_temp[2]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \state_temp[2]_i_2 
       (.I0(shiftreg[5]),
        .I1(shiftreg[4]),
        .I2(shiftreg[0]),
        .I3(shiftreg[2]),
        .I4(shiftreg[1]),
        .I5(shiftreg[3]),
        .O(\state_temp[2]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hDF)) 
    \state_temp[2]_i_3 
       (.I0(state[1]),
        .I1(state[2]),
        .I2(s_bscan_update),
        .O(\state_temp[2]_i_3_n_0 ));
  LUT5 #(
    .INIT(32'hFF01FFFF)) 
    \state_temp[2]_i_4 
       (.I0(state[0]),
        .I1(state[2]),
        .I2(state[1]),
        .I3(s_bscan_reset),
        .I4(s_bscan_sel),
        .O(\state_temp[2]_i_4_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \state_temp_reg[0] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\state_temp[0]_i_1_n_0 ),
        .Q(state_temp[0]),
        .R(1'b0));
  CARRY4 \state_temp_reg[0]_i_3 
       (.CI(\state_temp_reg[0]_i_4_n_0 ),
        .CO({\state_temp_reg[0]_i_3_n_0 ,\state_temp_reg[0]_i_3_n_1 ,\state_temp_reg[0]_i_3_n_2 ,\state_temp_reg[0]_i_3_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\NLW_state_temp_reg[0]_i_3_O_UNCONNECTED [3:0]),
        .S({\state_temp[0]_i_5_n_0 ,\state_temp[0]_i_6_n_0 ,\state_temp[0]_i_7_n_0 ,\state_temp[0]_i_8_n_0 }));
  CARRY4 \state_temp_reg[0]_i_4 
       (.CI(1'b0),
        .CO({\state_temp_reg[0]_i_4_n_0 ,\state_temp_reg[0]_i_4_n_1 ,\state_temp_reg[0]_i_4_n_2 ,\state_temp_reg[0]_i_4_n_3 }),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\NLW_state_temp_reg[0]_i_4_O_UNCONNECTED [3:0]),
        .S({\state_temp[0]_i_9_n_0 ,\state_temp[0]_i_10_n_0 ,\state_temp[0]_i_11_n_0 ,\state_temp[0]_i_12_n_0 }));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \state_temp_reg[1] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\state_temp[1]_i_1_n_0 ),
        .Q(state_temp[1]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \state_temp_reg[2] 
       (.C(s_bscan_tck),
        .CE(1'b1),
        .D(\state_temp[2]_i_1_n_0 ),
        .Q(state_temp[2]),
        .R(1'b0));
  LUT5 #(
    .INIT(32'hDFFFDFDF)) 
    \temp_curid[28]_i_1 
       (.I0(state[0]),
        .I1(state[2]),
        .I2(state[1]),
        .I3(count_flag),
        .I4(s_bscan_shift),
        .O(\temp_curid[28]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \temp_curid[28]_i_2 
       (.I0(count_flag),
        .I1(s_bscan_shift),
        .I2(state[1]),
        .I3(state[2]),
        .I4(state[0]),
        .I5(temp_curid[29]),
        .O(p_1_in__0));
  LUT3 #(
    .INIT(8'hDF)) 
    \temp_curid[31]_i_1 
       (.I0(state[1]),
        .I1(state[2]),
        .I2(state[0]),
        .O(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[0] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[1]),
        .Q(temp_curid[0]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[10] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[11]),
        .Q(temp_curid[10]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[11] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[12]),
        .Q(temp_curid[11]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[12] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[13]),
        .Q(temp_curid[12]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[13] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[14]),
        .Q(temp_curid[13]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[14] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[15]),
        .Q(temp_curid[14]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[15] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[16]),
        .Q(temp_curid[15]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[16] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[17]),
        .Q(temp_curid[16]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[17] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[18]),
        .Q(temp_curid[17]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[18] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[19]),
        .Q(temp_curid[18]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[19] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[20]),
        .Q(temp_curid[19]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[1] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[2]),
        .Q(temp_curid[1]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[20] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[21]),
        .Q(temp_curid[20]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[21] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[22]),
        .Q(temp_curid[21]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[22] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[23]),
        .Q(temp_curid[22]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[23] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[24]),
        .Q(temp_curid[23]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[24] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[25]),
        .Q(temp_curid[24]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[25] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[26]),
        .Q(temp_curid[25]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[26] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[27]),
        .Q(temp_curid[26]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[27] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[28]),
        .Q(temp_curid[27]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[28] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(p_1_in__0),
        .Q(temp_curid[28]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[29] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[30]),
        .Q(temp_curid[29]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[2] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[3]),
        .Q(temp_curid[2]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[30] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[31]),
        .Q(temp_curid[30]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[31] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(m_bscan_tdo),
        .Q(temp_curid[31]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[3] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[4]),
        .Q(temp_curid[3]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[4] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[5]),
        .Q(temp_curid[4]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[5] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[6]),
        .Q(temp_curid[5]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[6] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[7]),
        .Q(temp_curid[6]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[7] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[8]),
        .Q(temp_curid[7]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[8] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[9]),
        .Q(temp_curid[8]),
        .R(\temp_curid[31]_i_1_n_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \temp_curid_reg[9] 
       (.C(s_bscan_tck),
        .CE(\temp_curid[28]_i_1_n_0 ),
        .D(temp_curid[10]),
        .Q(temp_curid[9]),
        .R(\temp_curid[31]_i_1_n_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_burst_wdlen_ctl
   (burst_wd_in_rdy_last,
    burst_wd_in_rdy_rise_edge,
    wdc_eq_zero,
    dec_wdc_r_reg,
    out,
    burst_wd_in_rdy_last_reg_0,
    clk,
    burst_wd_in_rdy_rise_edge0,
    wdc_eq_zero_reg_0,
    \burst_wd_reg[0]_0 ,
    dec_wdc,
    wdc_eq_zero_reg_1);
  output burst_wd_in_rdy_last;
  output burst_wd_in_rdy_rise_edge;
  output wdc_eq_zero;
  output dec_wdc_r_reg;
  input [0:0]out;
  input [0:0]burst_wd_in_rdy_last_reg_0;
  input clk;
  input burst_wd_in_rdy_rise_edge0;
  input wdc_eq_zero_reg_0;
  input \burst_wd_reg[0]_0 ;
  input dec_wdc;
  input [17:0]wdc_eq_zero_reg_1;

  wire \burst_wd[0]_i_10_n_0 ;
  wire \burst_wd[0]_i_3_n_0 ;
  wire \burst_wd[0]_i_4_n_0 ;
  wire \burst_wd[0]_i_5_n_0 ;
  wire \burst_wd[0]_i_6_n_0 ;
  wire \burst_wd[0]_i_7_n_0 ;
  wire \burst_wd[0]_i_8_n_0 ;
  wire \burst_wd[0]_i_9_n_0 ;
  wire \burst_wd[12]_i_2_n_0 ;
  wire \burst_wd[12]_i_3_n_0 ;
  wire \burst_wd[12]_i_4_n_0 ;
  wire \burst_wd[12]_i_5_n_0 ;
  wire \burst_wd[12]_i_6_n_0 ;
  wire \burst_wd[12]_i_7_n_0 ;
  wire \burst_wd[12]_i_8_n_0 ;
  wire \burst_wd[12]_i_9_n_0 ;
  wire \burst_wd[16]_i_2_n_0 ;
  wire \burst_wd[4]_i_2_n_0 ;
  wire \burst_wd[4]_i_3_n_0 ;
  wire \burst_wd[4]_i_4_n_0 ;
  wire \burst_wd[4]_i_5_n_0 ;
  wire \burst_wd[4]_i_6_n_0 ;
  wire \burst_wd[4]_i_7_n_0 ;
  wire \burst_wd[4]_i_8_n_0 ;
  wire \burst_wd[4]_i_9_n_0 ;
  wire \burst_wd[8]_i_2_n_0 ;
  wire \burst_wd[8]_i_3_n_0 ;
  wire \burst_wd[8]_i_4_n_0 ;
  wire \burst_wd[8]_i_5_n_0 ;
  wire \burst_wd[8]_i_6_n_0 ;
  wire \burst_wd[8]_i_7_n_0 ;
  wire \burst_wd[8]_i_8_n_0 ;
  wire \burst_wd[8]_i_9_n_0 ;
  wire burst_wd_in_rdy_last;
  wire [0:0]burst_wd_in_rdy_last_reg_0;
  wire burst_wd_in_rdy_rise_edge;
  wire burst_wd_in_rdy_rise_edge0;
  wire [16:0]burst_wd_reg;
  wire \burst_wd_reg[0]_0 ;
  wire \burst_wd_reg[0]_i_2_n_0 ;
  wire \burst_wd_reg[0]_i_2_n_1 ;
  wire \burst_wd_reg[0]_i_2_n_2 ;
  wire \burst_wd_reg[0]_i_2_n_3 ;
  wire \burst_wd_reg[0]_i_2_n_4 ;
  wire \burst_wd_reg[0]_i_2_n_5 ;
  wire \burst_wd_reg[0]_i_2_n_6 ;
  wire \burst_wd_reg[0]_i_2_n_7 ;
  wire \burst_wd_reg[12]_i_1_n_0 ;
  wire \burst_wd_reg[12]_i_1_n_1 ;
  wire \burst_wd_reg[12]_i_1_n_2 ;
  wire \burst_wd_reg[12]_i_1_n_3 ;
  wire \burst_wd_reg[12]_i_1_n_4 ;
  wire \burst_wd_reg[12]_i_1_n_5 ;
  wire \burst_wd_reg[12]_i_1_n_6 ;
  wire \burst_wd_reg[12]_i_1_n_7 ;
  wire \burst_wd_reg[16]_i_1_n_7 ;
  wire \burst_wd_reg[4]_i_1_n_0 ;
  wire \burst_wd_reg[4]_i_1_n_1 ;
  wire \burst_wd_reg[4]_i_1_n_2 ;
  wire \burst_wd_reg[4]_i_1_n_3 ;
  wire \burst_wd_reg[4]_i_1_n_4 ;
  wire \burst_wd_reg[4]_i_1_n_5 ;
  wire \burst_wd_reg[4]_i_1_n_6 ;
  wire \burst_wd_reg[4]_i_1_n_7 ;
  wire \burst_wd_reg[8]_i_1_n_0 ;
  wire \burst_wd_reg[8]_i_1_n_1 ;
  wire \burst_wd_reg[8]_i_1_n_2 ;
  wire \burst_wd_reg[8]_i_1_n_3 ;
  wire \burst_wd_reg[8]_i_1_n_4 ;
  wire \burst_wd_reg[8]_i_1_n_5 ;
  wire \burst_wd_reg[8]_i_1_n_6 ;
  wire \burst_wd_reg[8]_i_1_n_7 ;
  wire clk;
  wire dec_wdc;
  wire dec_wdc_r_reg;
  wire [0:0]out;
  wire wdc_eq_zero;
  wire wdc_eq_zero_i_10_n_0;
  wire wdc_eq_zero_i_11_n_0;
  wire wdc_eq_zero_i_6_n_0;
  wire wdc_eq_zero_i_7_n_0;
  wire wdc_eq_zero_reg_0;
  wire [17:0]wdc_eq_zero_reg_1;
  wire [3:0]\NLW_burst_wd_reg[16]_i_1_CO_UNCONNECTED ;
  wire [3:1]\NLW_burst_wd_reg[16]_i_1_O_UNCONNECTED ;

  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[0]_i_10 
       (.I0(burst_wd_reg[0]),
        .I1(wdc_eq_zero_reg_1[0]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[0]_i_10_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[0]_i_3 
       (.I0(wdc_eq_zero_reg_1[3]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[3]),
        .O(\burst_wd[0]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[0]_i_4 
       (.I0(wdc_eq_zero_reg_1[2]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[2]),
        .O(\burst_wd[0]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[0]_i_5 
       (.I0(wdc_eq_zero_reg_1[1]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[1]),
        .O(\burst_wd[0]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[0]_i_6 
       (.I0(wdc_eq_zero_reg_1[0]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[0]),
        .O(\burst_wd[0]_i_6_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[0]_i_7 
       (.I0(burst_wd_reg[3]),
        .I1(wdc_eq_zero_reg_1[3]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[0]_i_7_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[0]_i_8 
       (.I0(burst_wd_reg[2]),
        .I1(wdc_eq_zero_reg_1[2]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[0]_i_8_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[0]_i_9 
       (.I0(burst_wd_reg[1]),
        .I1(wdc_eq_zero_reg_1[1]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[0]_i_9_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[12]_i_2 
       (.I0(wdc_eq_zero_reg_1[15]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[15]),
        .O(\burst_wd[12]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[12]_i_3 
       (.I0(wdc_eq_zero_reg_1[14]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[14]),
        .O(\burst_wd[12]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[12]_i_4 
       (.I0(wdc_eq_zero_reg_1[13]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[13]),
        .O(\burst_wd[12]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[12]_i_5 
       (.I0(wdc_eq_zero_reg_1[12]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[12]),
        .O(\burst_wd[12]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[12]_i_6 
       (.I0(burst_wd_reg[15]),
        .I1(wdc_eq_zero_reg_1[15]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[12]_i_6_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[12]_i_7 
       (.I0(burst_wd_reg[14]),
        .I1(wdc_eq_zero_reg_1[14]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[12]_i_7_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[12]_i_8 
       (.I0(burst_wd_reg[13]),
        .I1(wdc_eq_zero_reg_1[13]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[12]_i_8_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[12]_i_9 
       (.I0(burst_wd_reg[12]),
        .I1(wdc_eq_zero_reg_1[12]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[12]_i_9_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[16]_i_2 
       (.I0(burst_wd_reg[16]),
        .I1(wdc_eq_zero_reg_1[16]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[16]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[4]_i_2 
       (.I0(wdc_eq_zero_reg_1[7]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[7]),
        .O(\burst_wd[4]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[4]_i_3 
       (.I0(wdc_eq_zero_reg_1[6]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[6]),
        .O(\burst_wd[4]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[4]_i_4 
       (.I0(wdc_eq_zero_reg_1[5]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[5]),
        .O(\burst_wd[4]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[4]_i_5 
       (.I0(wdc_eq_zero_reg_1[4]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[4]),
        .O(\burst_wd[4]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[4]_i_6 
       (.I0(burst_wd_reg[7]),
        .I1(wdc_eq_zero_reg_1[7]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[4]_i_6_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[4]_i_7 
       (.I0(burst_wd_reg[6]),
        .I1(wdc_eq_zero_reg_1[6]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[4]_i_7_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[4]_i_8 
       (.I0(burst_wd_reg[5]),
        .I1(wdc_eq_zero_reg_1[5]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[4]_i_8_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[4]_i_9 
       (.I0(burst_wd_reg[4]),
        .I1(wdc_eq_zero_reg_1[4]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[4]_i_9_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[8]_i_2 
       (.I0(wdc_eq_zero_reg_1[11]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[11]),
        .O(\burst_wd[8]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[8]_i_3 
       (.I0(wdc_eq_zero_reg_1[10]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[10]),
        .O(\burst_wd[8]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[8]_i_4 
       (.I0(wdc_eq_zero_reg_1[9]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[9]),
        .O(\burst_wd[8]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \burst_wd[8]_i_5 
       (.I0(wdc_eq_zero_reg_1[8]),
        .I1(burst_wd_in_rdy_rise_edge),
        .I2(burst_wd_reg[8]),
        .O(\burst_wd[8]_i_5_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[8]_i_6 
       (.I0(burst_wd_reg[11]),
        .I1(wdc_eq_zero_reg_1[11]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[8]_i_6_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[8]_i_7 
       (.I0(burst_wd_reg[10]),
        .I1(wdc_eq_zero_reg_1[10]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[8]_i_7_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[8]_i_8 
       (.I0(burst_wd_reg[9]),
        .I1(wdc_eq_zero_reg_1[9]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[8]_i_8_n_0 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \burst_wd[8]_i_9 
       (.I0(burst_wd_reg[8]),
        .I1(wdc_eq_zero_reg_1[8]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(\burst_wd[8]_i_9_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    burst_wd_in_rdy_last_reg
       (.C(clk),
        .CE(1'b1),
        .D(burst_wd_in_rdy_last_reg_0),
        .Q(burst_wd_in_rdy_last),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    burst_wd_in_rdy_rise_edge_reg
       (.C(clk),
        .CE(1'b1),
        .D(burst_wd_in_rdy_rise_edge0),
        .Q(burst_wd_in_rdy_rise_edge),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[0] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[0]_i_2_n_7 ),
        .Q(burst_wd_reg[0]),
        .R(out));
  CARRY4 \burst_wd_reg[0]_i_2 
       (.CI(1'b0),
        .CO({\burst_wd_reg[0]_i_2_n_0 ,\burst_wd_reg[0]_i_2_n_1 ,\burst_wd_reg[0]_i_2_n_2 ,\burst_wd_reg[0]_i_2_n_3 }),
        .CYINIT(1'b0),
        .DI({\burst_wd[0]_i_3_n_0 ,\burst_wd[0]_i_4_n_0 ,\burst_wd[0]_i_5_n_0 ,\burst_wd[0]_i_6_n_0 }),
        .O({\burst_wd_reg[0]_i_2_n_4 ,\burst_wd_reg[0]_i_2_n_5 ,\burst_wd_reg[0]_i_2_n_6 ,\burst_wd_reg[0]_i_2_n_7 }),
        .S({\burst_wd[0]_i_7_n_0 ,\burst_wd[0]_i_8_n_0 ,\burst_wd[0]_i_9_n_0 ,\burst_wd[0]_i_10_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[10] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[8]_i_1_n_5 ),
        .Q(burst_wd_reg[10]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[11] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[8]_i_1_n_4 ),
        .Q(burst_wd_reg[11]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[12] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[12]_i_1_n_7 ),
        .Q(burst_wd_reg[12]),
        .R(out));
  CARRY4 \burst_wd_reg[12]_i_1 
       (.CI(\burst_wd_reg[8]_i_1_n_0 ),
        .CO({\burst_wd_reg[12]_i_1_n_0 ,\burst_wd_reg[12]_i_1_n_1 ,\burst_wd_reg[12]_i_1_n_2 ,\burst_wd_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\burst_wd[12]_i_2_n_0 ,\burst_wd[12]_i_3_n_0 ,\burst_wd[12]_i_4_n_0 ,\burst_wd[12]_i_5_n_0 }),
        .O({\burst_wd_reg[12]_i_1_n_4 ,\burst_wd_reg[12]_i_1_n_5 ,\burst_wd_reg[12]_i_1_n_6 ,\burst_wd_reg[12]_i_1_n_7 }),
        .S({\burst_wd[12]_i_6_n_0 ,\burst_wd[12]_i_7_n_0 ,\burst_wd[12]_i_8_n_0 ,\burst_wd[12]_i_9_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[13] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[12]_i_1_n_6 ),
        .Q(burst_wd_reg[13]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[14] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[12]_i_1_n_5 ),
        .Q(burst_wd_reg[14]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[15] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[12]_i_1_n_4 ),
        .Q(burst_wd_reg[15]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[16] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[16]_i_1_n_7 ),
        .Q(burst_wd_reg[16]),
        .R(out));
  CARRY4 \burst_wd_reg[16]_i_1 
       (.CI(\burst_wd_reg[12]_i_1_n_0 ),
        .CO(\NLW_burst_wd_reg[16]_i_1_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_burst_wd_reg[16]_i_1_O_UNCONNECTED [3:1],\burst_wd_reg[16]_i_1_n_7 }),
        .S({1'b0,1'b0,1'b0,\burst_wd[16]_i_2_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[1] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[0]_i_2_n_6 ),
        .Q(burst_wd_reg[1]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[2] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[0]_i_2_n_5 ),
        .Q(burst_wd_reg[2]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[3] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[0]_i_2_n_4 ),
        .Q(burst_wd_reg[3]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[4] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[4]_i_1_n_7 ),
        .Q(burst_wd_reg[4]),
        .R(out));
  CARRY4 \burst_wd_reg[4]_i_1 
       (.CI(\burst_wd_reg[0]_i_2_n_0 ),
        .CO({\burst_wd_reg[4]_i_1_n_0 ,\burst_wd_reg[4]_i_1_n_1 ,\burst_wd_reg[4]_i_1_n_2 ,\burst_wd_reg[4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\burst_wd[4]_i_2_n_0 ,\burst_wd[4]_i_3_n_0 ,\burst_wd[4]_i_4_n_0 ,\burst_wd[4]_i_5_n_0 }),
        .O({\burst_wd_reg[4]_i_1_n_4 ,\burst_wd_reg[4]_i_1_n_5 ,\burst_wd_reg[4]_i_1_n_6 ,\burst_wd_reg[4]_i_1_n_7 }),
        .S({\burst_wd[4]_i_6_n_0 ,\burst_wd[4]_i_7_n_0 ,\burst_wd[4]_i_8_n_0 ,\burst_wd[4]_i_9_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[5] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[4]_i_1_n_6 ),
        .Q(burst_wd_reg[5]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[6] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[4]_i_1_n_5 ),
        .Q(burst_wd_reg[6]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[7] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[4]_i_1_n_4 ),
        .Q(burst_wd_reg[7]),
        .R(out));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[8] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[8]_i_1_n_7 ),
        .Q(burst_wd_reg[8]),
        .R(out));
  CARRY4 \burst_wd_reg[8]_i_1 
       (.CI(\burst_wd_reg[4]_i_1_n_0 ),
        .CO({\burst_wd_reg[8]_i_1_n_0 ,\burst_wd_reg[8]_i_1_n_1 ,\burst_wd_reg[8]_i_1_n_2 ,\burst_wd_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({\burst_wd[8]_i_2_n_0 ,\burst_wd[8]_i_3_n_0 ,\burst_wd[8]_i_4_n_0 ,\burst_wd[8]_i_5_n_0 }),
        .O({\burst_wd_reg[8]_i_1_n_4 ,\burst_wd_reg[8]_i_1_n_5 ,\burst_wd_reg[8]_i_1_n_6 ,\burst_wd_reg[8]_i_1_n_7 }),
        .S({\burst_wd[8]_i_6_n_0 ,\burst_wd[8]_i_7_n_0 ,\burst_wd[8]_i_8_n_0 ,\burst_wd[8]_i_9_n_0 }));
  FDRE #(
    .INIT(1'b0)) 
    \burst_wd_reg[9] 
       (.C(clk),
        .CE(\burst_wd_reg[0]_0 ),
        .D(\burst_wd_reg[8]_i_1_n_6 ),
        .Q(burst_wd_reg[9]),
        .R(out));
  LUT4 #(
    .INIT(16'h0001)) 
    wdc_eq_zero_i_10
       (.I0(burst_wd_reg[11]),
        .I1(burst_wd_reg[10]),
        .I2(burst_wd_reg[9]),
        .I3(burst_wd_reg[8]),
        .O(wdc_eq_zero_i_10_n_0));
  LUT4 #(
    .INIT(16'h0004)) 
    wdc_eq_zero_i_11
       (.I0(burst_wd_reg[1]),
        .I1(burst_wd_reg[0]),
        .I2(burst_wd_reg[3]),
        .I3(burst_wd_reg[2]),
        .O(wdc_eq_zero_i_11_n_0));
  LUT6 #(
    .INIT(64'h88888FFF88888000)) 
    wdc_eq_zero_i_2
       (.I0(wdc_eq_zero_i_6_n_0),
        .I1(wdc_eq_zero_i_7_n_0),
        .I2(dec_wdc),
        .I3(wdc_eq_zero_reg_1[17]),
        .I4(burst_wd_in_rdy_rise_edge),
        .I5(wdc_eq_zero),
        .O(dec_wdc_r_reg));
  LUT6 #(
    .INIT(64'h0000000200000000)) 
    wdc_eq_zero_i_6
       (.I0(wdc_eq_zero_i_10_n_0),
        .I1(burst_wd_reg[7]),
        .I2(burst_wd_reg[6]),
        .I3(burst_wd_reg[5]),
        .I4(burst_wd_reg[4]),
        .I5(wdc_eq_zero_i_11_n_0),
        .O(wdc_eq_zero_i_6_n_0));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    wdc_eq_zero_i_7
       (.I0(burst_wd_reg[12]),
        .I1(burst_wd_reg[13]),
        .I2(burst_wd_reg[14]),
        .I3(burst_wd_reg[15]),
        .I4(burst_wd_in_rdy_rise_edge),
        .I5(burst_wd_reg[16]),
        .O(wdc_eq_zero_i_7_n_0));
  FDRE #(
    .INIT(1'b0)) 
    wdc_eq_zero_reg
       (.C(clk),
        .CE(1'b1),
        .D(wdc_eq_zero_reg_0),
        .Q(wdc_eq_zero),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl
   (in_write_mode_reg_0,
    abort_rd_edge,
    dec_wdc,
    RD_EN_I,
    sl_rdmux_sel_r,
    \sl_berr_r_reg[1]_0 ,
    WR_EN_I,
    inc_addr_r_reg_0,
    dec_wdc_r_reg_0,
    sl_iport1_o,
    sl_iport0_o,
    ma_rd_req,
    clk,
    out,
    \G_NEG_EDGE.flag_reg ,
    \G_NEG_EDGE.flag_reg_0 ,
    \sl_rdmux_sel_r_reg[0]_0 ,
    \active_sl_den_mask_reg[0]_0 ,
    \active_sl_den_mask_reg[1]_0 ,
    EMPTY_O,
    sl_drdy,
    FULL_O,
    \current_state_reg[1]_0 ,
    wdc_eq_zero,
    addr_in_rdy_rise_edge,
    burst_wd_in_rdy_rise_edge);
  output [3:0]in_write_mode_reg_0;
  output abort_rd_edge;
  output dec_wdc;
  output RD_EN_I;
  output sl_rdmux_sel_r;
  output [3:0]\sl_berr_r_reg[1]_0 ;
  output WR_EN_I;
  output inc_addr_r_reg_0;
  output dec_wdc_r_reg_0;
  output [2:0]sl_iport1_o;
  output [2:0]sl_iport0_o;
  input ma_rd_req;
  input clk;
  input [2:0]out;
  input [0:0]\G_NEG_EDGE.flag_reg ;
  input [0:0]\G_NEG_EDGE.flag_reg_0 ;
  input [2:0]\sl_rdmux_sel_r_reg[0]_0 ;
  input \active_sl_den_mask_reg[0]_0 ;
  input \active_sl_den_mask_reg[1]_0 ;
  input EMPTY_O;
  input sl_drdy;
  input FULL_O;
  input \current_state_reg[1]_0 ;
  input wdc_eq_zero;
  input addr_in_rdy_rise_edge;
  input burst_wd_in_rdy_rise_edge;

  wire EMPTY_O;
  wire FULL_O;
  wire [0:0]\G_NEG_EDGE.flag_reg ;
  wire [0:0]\G_NEG_EDGE.flag_reg_0 ;
  wire RD_EN_I;
  wire U_RD_ABORT_FLAG_n_1;
  wire U_RD_ABORT_FLAG_n_2;
  wire U_RD_REQ_FLAG_n_0;
  wire U_RD_REQ_FLAG_n_2;
  wire U_TIMER_n_1;
  wire U_TIMER_n_10;
  wire U_TIMER_n_11;
  wire U_TIMER_n_12;
  wire U_TIMER_n_13;
  wire U_TIMER_n_14;
  wire U_TIMER_n_15;
  wire U_TIMER_n_16;
  wire U_TIMER_n_17;
  wire U_TIMER_n_18;
  wire U_TIMER_n_19;
  wire U_TIMER_n_20;
  wire U_TIMER_n_24;
  wire U_TIMER_n_25;
  wire U_TIMER_n_26;
  wire U_TIMER_n_5;
  wire U_TIMER_n_6;
  wire U_TIMER_n_7;
  wire U_TIMER_n_8;
  wire U_TIMER_n_9;
  wire WR_EN_I;
  wire abort_rd_edge;
  wire ack_timeout;
  wire [1:0]active_sl_den_mask;
  wire \active_sl_den_mask[0]_i_1_n_0 ;
  wire \active_sl_den_mask[1]_i_1_n_0 ;
  wire \active_sl_den_mask_reg[0]_0 ;
  wire \active_sl_den_mask_reg[1]_0 ;
  wire addr_in_rdy_rise_edge;
  wire auto_sl_drdy;
  wire burst_wd_in_rdy_rise_edge;
  wire clk;
  wire clr_abort_rd;
  wire clr_rd_req;
  wire [4:0]current_state;
  wire \current_state[0]_i_3_n_0 ;
  wire \current_state[1]_i_3_n_0 ;
  wire \current_state[1]_i_4_n_0 ;
  wire \current_state[1]_i_5_n_0 ;
  wire \current_state[3]_i_2_n_0 ;
  wire \current_state_reg[1]_0 ;
  wire dec_wdc;
  wire dec_wdc_r_reg_0;
  wire in_normal_mode;
  wire [3:0]in_write_mode_reg_0;
  wire inc_addr;
  wire inc_addr_r_reg_0;
  wire ma_rd_req;
  wire [4:0]next_state;
  wire [2:0]out;
  wire \sl_berr_r[0]_i_1_n_0 ;
  wire \sl_berr_r[1]_i_1_n_0 ;
  wire [3:0]\sl_berr_r_reg[1]_0 ;
  wire [1:0]sl_den_r;
  wire \sl_den_r[0]_i_1_n_0 ;
  wire \sl_den_r[1]_i_1_n_0 ;
  wire sl_drdy;
  wire \sl_dwe_r[0]_i_1_n_0 ;
  wire \sl_dwe_r[1]_i_1_n_0 ;
  wire [2:0]sl_iport0_o;
  wire [2:0]sl_iport1_o;
  wire sl_rdmux_sel_r;
  wire [2:0]\sl_rdmux_sel_r_reg[0]_0 ;
  wire \sl_rst_r[0]_i_1_n_0 ;
  wire \sl_rst_r[1]_i_1_n_0 ;
  wire timer_rst;
  wire wdc_eq_zero;

  LUT3 #(
    .INIT(8'hE0)) 
    \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_1 
       (.I0(auto_sl_drdy),
        .I1(sl_drdy),
        .I2(in_write_mode_reg_0[0]),
        .O(WR_EN_I));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl_flg__parameterized0 U_RD_ABORT_FLAG
       (.FULL_O(FULL_O),
        .\G_NEG_EDGE.flag_reg_0 (abort_rd_edge),
        .\G_NEG_EDGE.flag_reg_1 (U_RD_REQ_FLAG_n_0),
        .Q(current_state),
        .ack_timeout(ack_timeout),
        .clk(clk),
        .clr_abort_rd(clr_abort_rd),
        .\current_state[2]_i_3_0 (\sl_rdmux_sel_r_reg[0]_0 [0]),
        .\current_state_reg[0] (U_RD_ABORT_FLAG_n_1),
        .\current_state_reg[0]_0 (U_RD_ABORT_FLAG_n_2),
        .\current_state_reg[0]_1 (U_TIMER_n_26),
        .\current_state_reg[2] (\current_state_reg[1]_0 ),
        .wdc_eq_zero(wdc_eq_zero));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl_flg U_RD_REQ_FLAG
       (.EMPTY_O(EMPTY_O),
        .\G_NEG_EDGE.flag_reg (\G_NEG_EDGE.flag_reg ),
        .\G_NEG_EDGE.flag_reg_0 (\G_NEG_EDGE.flag_reg_0 ),
        .\G_NEG_EDGE.flag_reg_1 (in_write_mode_reg_0[2:1]),
        .\G_POS_EDGE.flag_reg_0 (U_RD_REQ_FLAG_n_2),
        .Q(current_state),
        .abort_rd_edge(abort_rd_edge),
        .ack_timeout(ack_timeout),
        .clk(clk),
        .clr_rd_req(clr_rd_req),
        .\current_state_reg[2] (U_RD_ABORT_FLAG_n_1),
        .\current_state_reg[2]_0 (U_TIMER_n_24),
        .last_flag_reg_0(U_RD_REQ_FLAG_n_0),
        .ma_rd_req(ma_rd_req),
        .next_state(next_state[2]));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl_cnt U_TIMER
       (.EMPTY_O(EMPTY_O),
        .FULL_O(FULL_O),
        .Q(current_state),
        .RD_EN_I(RD_EN_I),
        .SR(timer_rst),
        .ack_timeout(ack_timeout),
        .active_sl_den_mask(active_sl_den_mask),
        .auto_sl_drdy(auto_sl_drdy),
        .auto_sl_drdy_reg(U_TIMER_n_12),
        .auto_sl_drdy_reg_0(U_TIMER_n_24),
        .clk(clk),
        .clr_abort_rd(clr_abort_rd),
        .clr_abort_rd_reg(U_TIMER_n_11),
        .clr_rd_req(clr_rd_req),
        .clr_rd_req_reg(U_TIMER_n_10),
        .\ctl_reg_reg[20] (U_TIMER_n_16),
        .\current_state_reg[0] (U_TIMER_n_25),
        .\current_state_reg[0]_0 (\current_state[0]_i_3_n_0 ),
        .\current_state_reg[0]_1 (U_RD_ABORT_FLAG_n_2),
        .\current_state_reg[1] (U_TIMER_n_1),
        .\current_state_reg[1]_0 (U_TIMER_n_5),
        .\current_state_reg[1]_1 (U_TIMER_n_6),
        .\current_state_reg[1]_2 (\current_state[1]_i_3_n_0 ),
        .\current_state_reg[1]_3 (\current_state[1]_i_4_n_0 ),
        .\current_state_reg[1]_4 (\current_state[1]_i_5_n_0 ),
        .\current_state_reg[1]_5 (U_RD_REQ_FLAG_n_2),
        .\current_state_reg[1]_6 (\current_state_reg[1]_0 ),
        .\current_state_reg[3] (\current_state[3]_i_2_n_0 ),
        .dec_wdc(dec_wdc),
        .dec_wdc_r_reg(U_TIMER_n_14),
        .in_idle_mode_reg(U_TIMER_n_7),
        .in_idle_mode_reg_0({next_state[4],next_state[2]}),
        .in_normal_mode(in_normal_mode),
        .in_normal_mode_reg(U_TIMER_n_17),
        .in_read_mode_reg(U_TIMER_n_8),
        .in_write_mode_reg(U_TIMER_n_9),
        .in_write_mode_reg_0(in_write_mode_reg_0),
        .inc_addr(inc_addr),
        .inc_addr_r_reg(U_TIMER_n_13),
        .\ma_err_r_reg[0] (U_TIMER_n_18),
        .\ma_err_r_reg[1] (U_TIMER_n_19),
        .\ma_err_r_reg[1]_0 (\sl_berr_r_reg[1]_0 [1:0]),
        .ma_wr_pop_r_reg(U_TIMER_n_15),
        .next_state({next_state[3],next_state[1:0]}),
        .ram_empty_i_reg(U_TIMER_n_26),
        .sl_den_r(sl_den_r),
        .\sl_den_r_reg[0] (\active_sl_den_mask_reg[0]_0 ),
        .\sl_den_r_reg[1] (\active_sl_den_mask_reg[1]_0 ),
        .sl_drdy(sl_drdy),
        .sl_rdmux_sel_r(sl_rdmux_sel_r),
        .\sl_rdmux_sel_r_reg[0] ({\sl_rdmux_sel_r_reg[0]_0 [2],\sl_rdmux_sel_r_reg[0]_0 [0]}),
        .timer_rst_reg(U_TIMER_n_20),
        .wdc_eq_zero(wdc_eq_zero));
  LUT6 #(
    .INIT(64'hFFFBFB3F00080800)) 
    \active_sl_den_mask[0]_i_1 
       (.I0(\active_sl_den_mask_reg[0]_0 ),
        .I1(U_TIMER_n_25),
        .I2(next_state[1]),
        .I3(next_state[4]),
        .I4(next_state[2]),
        .I5(active_sl_den_mask[0]),
        .O(\active_sl_den_mask[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFBFB3F00080800)) 
    \active_sl_den_mask[1]_i_1 
       (.I0(\active_sl_den_mask_reg[1]_0 ),
        .I1(U_TIMER_n_25),
        .I2(next_state[1]),
        .I3(next_state[4]),
        .I4(next_state[2]),
        .I5(active_sl_den_mask[1]),
        .O(\active_sl_den_mask[1]_i_1_n_0 ));
  FDCE #(
    .INIT(1'b0)) 
    \active_sl_den_mask_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\active_sl_den_mask[0]_i_1_n_0 ),
        .Q(active_sl_den_mask[0]));
  FDCE #(
    .INIT(1'b0)) 
    \active_sl_den_mask_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\active_sl_den_mask[1]_i_1_n_0 ),
        .Q(active_sl_den_mask[1]));
  LUT3 #(
    .INIT(8'hF8)) 
    \addr[16]_i_1 
       (.I0(inc_addr),
        .I1(\sl_rdmux_sel_r_reg[0]_0 [1]),
        .I2(addr_in_rdy_rise_edge),
        .O(inc_addr_r_reg_0));
  FDCE #(
    .INIT(1'b0)) 
    auto_sl_drdy_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_12),
        .Q(auto_sl_drdy));
  LUT3 #(
    .INIT(8'hF8)) 
    \burst_wd[0]_i_1 
       (.I0(dec_wdc),
        .I1(\sl_rdmux_sel_r_reg[0]_0 [0]),
        .I2(burst_wd_in_rdy_rise_edge),
        .O(dec_wdc_r_reg_0));
  FDCE #(
    .INIT(1'b0)) 
    clr_abort_rd_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_11),
        .Q(clr_abort_rd));
  FDCE #(
    .INIT(1'b0)) 
    clr_rd_req_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_10),
        .Q(clr_rd_req));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'h4F)) 
    \current_state[0]_i_3 
       (.I0(current_state[3]),
        .I1(current_state[2]),
        .I2(current_state[4]),
        .O(\current_state[0]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \current_state[1]_i_3 
       (.I0(current_state[3]),
        .I1(current_state[4]),
        .O(\current_state[1]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT4 #(
    .INIT(16'h8808)) 
    \current_state[1]_i_4 
       (.I0(current_state[1]),
        .I1(current_state[4]),
        .I2(current_state[2]),
        .I3(current_state[3]),
        .O(\current_state[1]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT2 #(
    .INIT(4'h4)) 
    \current_state[1]_i_5 
       (.I0(current_state[4]),
        .I1(current_state[3]),
        .O(\current_state[1]_i_5_n_0 ));
  LUT4 #(
    .INIT(16'h0004)) 
    \current_state[3]_i_2 
       (.I0(current_state[2]),
        .I1(current_state[1]),
        .I2(current_state[0]),
        .I3(EMPTY_O),
        .O(\current_state[3]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hFCCCCCC4CCCCCCCC)) 
    \current_state[4]_i_1 
       (.I0(EMPTY_O),
        .I1(current_state[4]),
        .I2(current_state[2]),
        .I3(current_state[3]),
        .I4(current_state[0]),
        .I5(current_state[1]),
        .O(next_state[4]));
  FDCE #(
    .INIT(1'b0)) 
    \current_state_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(next_state[0]),
        .Q(current_state[0]));
  FDCE #(
    .INIT(1'b0)) 
    \current_state_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(next_state[1]),
        .Q(current_state[1]));
  FDCE #(
    .INIT(1'b0)) 
    \current_state_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(next_state[2]),
        .Q(current_state[2]));
  FDCE #(
    .INIT(1'b0)) 
    \current_state_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(next_state[3]),
        .Q(current_state[3]));
  FDCE #(
    .INIT(1'b0)) 
    \current_state_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(next_state[4]),
        .Q(current_state[4]));
  FDCE #(
    .INIT(1'b0)) 
    dec_wdc_r_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_14),
        .Q(dec_wdc));
  FDCE #(
    .INIT(1'b0)) 
    in_idle_mode_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_7),
        .Q(in_write_mode_reg_0[1]));
  FDCE #(
    .INIT(1'b0)) 
    in_normal_mode_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_17),
        .Q(in_write_mode_reg_0[0]));
  FDCE #(
    .INIT(1'b0)) 
    in_read_mode_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_8),
        .Q(in_write_mode_reg_0[2]));
  FDCE #(
    .INIT(1'b0)) 
    in_write_mode_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_9),
        .Q(in_write_mode_reg_0[3]));
  FDCE #(
    .INIT(1'b0)) 
    inc_addr_r_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_13),
        .Q(inc_addr));
  FDCE #(
    .INIT(1'b0)) 
    \ma_err_r_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_18),
        .Q(\sl_berr_r_reg[1]_0 [0]));
  FDCE #(
    .INIT(1'b0)) 
    \ma_err_r_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_19),
        .Q(\sl_berr_r_reg[1]_0 [1]));
  FDCE #(
    .INIT(1'b0)) 
    ma_wr_pop_r_reg
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_15),
        .Q(RD_EN_I));
  LUT6 #(
    .INIT(64'hE200FFFFE2000000)) 
    \sl_berr_r[0]_i_1 
       (.I0(next_state[3]),
        .I1(next_state[0]),
        .I2(next_state[4]),
        .I3(active_sl_den_mask[0]),
        .I4(U_TIMER_n_1),
        .I5(\sl_berr_r_reg[1]_0 [2]),
        .O(\sl_berr_r[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hE200FFFFE2000000)) 
    \sl_berr_r[1]_i_1 
       (.I0(next_state[3]),
        .I1(next_state[0]),
        .I2(next_state[4]),
        .I3(active_sl_den_mask[1]),
        .I4(U_TIMER_n_1),
        .I5(\sl_berr_r_reg[1]_0 [3]),
        .O(\sl_berr_r[1]_i_1_n_0 ));
  FDCE #(
    .INIT(1'b0)) 
    \sl_berr_r_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_berr_r[0]_i_1_n_0 ),
        .Q(\sl_berr_r_reg[1]_0 [2]));
  FDCE #(
    .INIT(1'b0)) 
    \sl_berr_r_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_berr_r[1]_i_1_n_0 ),
        .Q(\sl_berr_r_reg[1]_0 [3]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sl_den_r[0]_i_1 
       (.I0(sl_den_r[0]),
        .I1(U_TIMER_n_5),
        .I2(sl_iport0_o[1]),
        .O(\sl_den_r[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sl_den_r[1]_i_1 
       (.I0(sl_den_r[1]),
        .I1(U_TIMER_n_5),
        .I2(sl_iport1_o[1]),
        .O(\sl_den_r[1]_i_1_n_0 ));
  FDCE #(
    .INIT(1'b0)) 
    \sl_den_r_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_den_r[0]_i_1_n_0 ),
        .Q(sl_iport0_o[1]));
  FDCE #(
    .INIT(1'b0)) 
    \sl_den_r_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_den_r[1]_i_1_n_0 ),
        .Q(sl_iport1_o[1]));
  LUT6 #(
    .INIT(64'h0040FFFF00400000)) 
    \sl_dwe_r[0]_i_1 
       (.I0(next_state[0]),
        .I1(next_state[4]),
        .I2(\active_sl_den_mask_reg[0]_0 ),
        .I3(next_state[1]),
        .I4(U_TIMER_n_6),
        .I5(sl_iport0_o[2]),
        .O(\sl_dwe_r[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0040FFFF00400000)) 
    \sl_dwe_r[1]_i_1 
       (.I0(next_state[0]),
        .I1(next_state[4]),
        .I2(\active_sl_den_mask_reg[1]_0 ),
        .I3(next_state[1]),
        .I4(U_TIMER_n_6),
        .I5(sl_iport1_o[2]),
        .O(\sl_dwe_r[1]_i_1_n_0 ));
  FDCE #(
    .INIT(1'b0)) 
    \sl_dwe_r_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_dwe_r[0]_i_1_n_0 ),
        .Q(sl_iport0_o[2]));
  FDCE #(
    .INIT(1'b0)) 
    \sl_dwe_r_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_dwe_r[1]_i_1_n_0 ),
        .Q(sl_iport1_o[2]));
  FDCE #(
    .INIT(1'b0)) 
    \sl_rdmux_sel_r_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(U_TIMER_n_16),
        .Q(sl_rdmux_sel_r));
  LUT4 #(
    .INIT(16'h2F20)) 
    \sl_rst_r[0]_i_1 
       (.I0(out[1]),
        .I1(next_state[1]),
        .I2(in_normal_mode),
        .I3(sl_iport0_o[0]),
        .O(\sl_rst_r[0]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h2F20)) 
    \sl_rst_r[1]_i_1 
       (.I0(out[2]),
        .I1(next_state[1]),
        .I2(in_normal_mode),
        .I3(sl_iport1_o[0]),
        .O(\sl_rst_r[1]_i_1_n_0 ));
  FDCE #(
    .INIT(1'b0)) 
    \sl_rst_r_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_rst_r[0]_i_1_n_0 ),
        .Q(sl_iport0_o[0]));
  FDCE #(
    .INIT(1'b0)) 
    \sl_rst_r_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .CLR(out[0]),
        .D(\sl_rst_r[1]_i_1_n_0 ),
        .Q(sl_iport1_o[0]));
  FDPE #(
    .INIT(1'b1)) 
    timer_rst_reg
       (.C(clk),
        .CE(1'b1),
        .D(U_TIMER_n_20),
        .PRE(out[0]),
        .Q(timer_rst));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl_cnt
   (ack_timeout,
    \current_state_reg[1] ,
    next_state,
    \current_state_reg[1]_0 ,
    \current_state_reg[1]_1 ,
    in_idle_mode_reg,
    in_read_mode_reg,
    in_write_mode_reg,
    clr_rd_req_reg,
    clr_abort_rd_reg,
    auto_sl_drdy_reg,
    inc_addr_r_reg,
    dec_wdc_r_reg,
    ma_wr_pop_r_reg,
    \ctl_reg_reg[20] ,
    in_normal_mode_reg,
    \ma_err_r_reg[0] ,
    \ma_err_r_reg[1] ,
    timer_rst_reg,
    in_normal_mode,
    sl_den_r,
    auto_sl_drdy_reg_0,
    \current_state_reg[0] ,
    ram_empty_i_reg,
    SR,
    clk,
    in_idle_mode_reg_0,
    in_write_mode_reg_0,
    clr_rd_req,
    clr_abort_rd,
    auto_sl_drdy,
    inc_addr,
    dec_wdc,
    RD_EN_I,
    \sl_rdmux_sel_r_reg[0] ,
    sl_rdmux_sel_r,
    \ma_err_r_reg[1]_0 ,
    active_sl_den_mask,
    \sl_den_r_reg[0] ,
    \sl_den_r_reg[1] ,
    sl_drdy,
    Q,
    \current_state_reg[3] ,
    \current_state_reg[1]_2 ,
    \current_state_reg[1]_3 ,
    \current_state_reg[1]_4 ,
    EMPTY_O,
    \current_state_reg[0]_0 ,
    \current_state_reg[1]_5 ,
    FULL_O,
    \current_state_reg[1]_6 ,
    wdc_eq_zero,
    \current_state_reg[0]_1 );
  output ack_timeout;
  output \current_state_reg[1] ;
  output [2:0]next_state;
  output \current_state_reg[1]_0 ;
  output \current_state_reg[1]_1 ;
  output in_idle_mode_reg;
  output in_read_mode_reg;
  output in_write_mode_reg;
  output clr_rd_req_reg;
  output clr_abort_rd_reg;
  output auto_sl_drdy_reg;
  output inc_addr_r_reg;
  output dec_wdc_r_reg;
  output ma_wr_pop_r_reg;
  output \ctl_reg_reg[20] ;
  output in_normal_mode_reg;
  output \ma_err_r_reg[0] ;
  output \ma_err_r_reg[1] ;
  output timer_rst_reg;
  output in_normal_mode;
  output [1:0]sl_den_r;
  output auto_sl_drdy_reg_0;
  output \current_state_reg[0] ;
  output ram_empty_i_reg;
  input [0:0]SR;
  input clk;
  input [1:0]in_idle_mode_reg_0;
  input [3:0]in_write_mode_reg_0;
  input clr_rd_req;
  input clr_abort_rd;
  input auto_sl_drdy;
  input inc_addr;
  input dec_wdc;
  input RD_EN_I;
  input [1:0]\sl_rdmux_sel_r_reg[0] ;
  input sl_rdmux_sel_r;
  input [1:0]\ma_err_r_reg[1]_0 ;
  input [1:0]active_sl_den_mask;
  input \sl_den_r_reg[0] ;
  input \sl_den_r_reg[1] ;
  input sl_drdy;
  input [4:0]Q;
  input \current_state_reg[3] ;
  input \current_state_reg[1]_2 ;
  input \current_state_reg[1]_3 ;
  input \current_state_reg[1]_4 ;
  input EMPTY_O;
  input \current_state_reg[0]_0 ;
  input \current_state_reg[1]_5 ;
  input FULL_O;
  input \current_state_reg[1]_6 ;
  input wdc_eq_zero;
  input \current_state_reg[0]_1 ;

  wire EMPTY_O;
  wire FULL_O;
  wire [4:0]Q;
  wire RD_EN_I;
  wire [0:0]SR;
  wire ack_timeout;
  wire [1:0]active_sl_den_mask;
  wire auto_sl_drdy;
  wire auto_sl_drdy_reg;
  wire auto_sl_drdy_reg_0;
  wire clk;
  wire clr_abort_rd;
  wire clr_abort_rd_reg;
  wire clr_rd_req;
  wire clr_rd_req_reg;
  wire \count[6]_i_2_n_0 ;
  wire [6:0]count_reg;
  wire \ctl_reg_reg[20] ;
  wire \current_state[0]_i_2_n_0 ;
  wire \current_state[1]_i_2_n_0 ;
  wire \current_state[1]_i_6_n_0 ;
  wire \current_state[1]_i_7_n_0 ;
  wire \current_state[1]_i_8_n_0 ;
  wire \current_state[1]_i_9_n_0 ;
  wire \current_state[3]_i_3_n_0 ;
  wire \current_state[3]_i_4_n_0 ;
  wire \current_state_reg[0] ;
  wire \current_state_reg[0]_0 ;
  wire \current_state_reg[0]_1 ;
  wire \current_state_reg[1] ;
  wire \current_state_reg[1]_0 ;
  wire \current_state_reg[1]_1 ;
  wire \current_state_reg[1]_2 ;
  wire \current_state_reg[1]_3 ;
  wire \current_state_reg[1]_4 ;
  wire \current_state_reg[1]_5 ;
  wire \current_state_reg[1]_6 ;
  wire \current_state_reg[3] ;
  wire dec_wdc;
  wire dec_wdc_r_reg;
  wire g0_b0__0_n_0;
  wire g0_b0__1_n_0;
  wire g0_b0__2_n_0;
  wire g0_b0__3_n_0;
  wire g0_b0__4_n_0;
  wire g0_b0__5_n_0;
  wire g0_b0__8_n_0;
  wire in_idle_mode_reg;
  wire [1:0]in_idle_mode_reg_0;
  wire in_normal_mode;
  wire in_normal_mode_reg;
  wire in_read_mode_reg;
  wire in_write_mode_reg;
  wire [3:0]in_write_mode_reg_0;
  wire inc_addr;
  wire inc_addr_r_reg;
  wire \ma_err_r_reg[0] ;
  wire \ma_err_r_reg[1] ;
  wire [1:0]\ma_err_r_reg[1]_0 ;
  wire ma_wr_pop_r_reg;
  wire [2:0]next_state;
  wire [6:0]p_0_in;
  wire ram_empty_i_reg;
  wire [1:0]sl_den_r;
  wire \sl_den_r_reg[0] ;
  wire \sl_den_r_reg[1] ;
  wire sl_drdy;
  wire sl_rdmux_sel_r;
  wire [1:0]\sl_rdmux_sel_r_reg[0] ;
  wire timeout_i_1_n_0;
  wire timeout_i_2_n_0;
  wire timer_rst_reg;
  wire wdc_eq_zero;

  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \active_sl_den_mask[1]_i_2 
       (.I0(next_state[2]),
        .I1(next_state[0]),
        .O(\current_state_reg[0] ));
  LUT3 #(
    .INIT(8'hB8)) 
    auto_sl_drdy_i_1
       (.I0(g0_b0__1_n_0),
        .I1(g0_b0__0_n_0),
        .I2(auto_sl_drdy),
        .O(auto_sl_drdy_reg));
  LUT6 #(
    .INIT(64'hFFFFFFEF04000000)) 
    clr_abort_rd_i_1
       (.I0(in_idle_mode_reg_0[1]),
        .I1(next_state[2]),
        .I2(next_state[1]),
        .I3(next_state[0]),
        .I4(in_idle_mode_reg_0[0]),
        .I5(clr_abort_rd),
        .O(clr_abort_rd_reg));
  LUT6 #(
    .INIT(64'hFFFFFEFF00400010)) 
    clr_rd_req_i_1
       (.I0(in_idle_mode_reg_0[1]),
        .I1(next_state[2]),
        .I2(next_state[0]),
        .I3(next_state[1]),
        .I4(in_idle_mode_reg_0[0]),
        .I5(clr_rd_req),
        .O(clr_rd_req_reg));
  LUT1 #(
    .INIT(2'h1)) 
    \count[0]_i_1 
       (.I0(count_reg[0]),
        .O(p_0_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \count[1]_i_1 
       (.I0(count_reg[0]),
        .I1(count_reg[1]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \count[2]_i_1 
       (.I0(count_reg[0]),
        .I1(count_reg[1]),
        .I2(count_reg[2]),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \count[3]_i_1 
       (.I0(count_reg[1]),
        .I1(count_reg[0]),
        .I2(count_reg[2]),
        .I3(count_reg[3]),
        .O(p_0_in[3]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT5 #(
    .INIT(32'h7FFF8000)) 
    \count[4]_i_1 
       (.I0(count_reg[2]),
        .I1(count_reg[0]),
        .I2(count_reg[1]),
        .I3(count_reg[3]),
        .I4(count_reg[4]),
        .O(p_0_in[4]));
  LUT6 #(
    .INIT(64'h7FFFFFFF80000000)) 
    \count[5]_i_1 
       (.I0(count_reg[3]),
        .I1(count_reg[1]),
        .I2(count_reg[0]),
        .I3(count_reg[2]),
        .I4(count_reg[4]),
        .I5(count_reg[5]),
        .O(p_0_in[5]));
  LUT6 #(
    .INIT(64'h7FFFFFFF80000000)) 
    \count[6]_i_1 
       (.I0(count_reg[4]),
        .I1(count_reg[2]),
        .I2(\count[6]_i_2_n_0 ),
        .I3(count_reg[3]),
        .I4(count_reg[5]),
        .I5(count_reg[6]),
        .O(p_0_in[6]));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \count[6]_i_2 
       (.I0(count_reg[1]),
        .I1(count_reg[0]),
        .O(\count[6]_i_2_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[0]),
        .Q(count_reg[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[1]),
        .Q(count_reg[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[2]),
        .Q(count_reg[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[3]),
        .Q(count_reg[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[4]),
        .Q(count_reg[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[5] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[5]),
        .Q(count_reg[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \count_reg[6] 
       (.C(clk),
        .CE(1'b1),
        .D(p_0_in[6]),
        .Q(count_reg[6]),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFFFFF33020002)) 
    \current_state[0]_i_1 
       (.I0(\current_state[0]_i_2_n_0 ),
        .I1(\current_state_reg[1]_2 ),
        .I2(Q[1]),
        .I3(\current_state_reg[0]_0 ),
        .I4(Q[0]),
        .I5(\current_state_reg[0]_1 ),
        .O(next_state[0]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT4 #(
    .INIT(16'h888F)) 
    \current_state[0]_i_2 
       (.I0(ack_timeout),
        .I1(Q[0]),
        .I2(auto_sl_drdy),
        .I3(sl_drdy),
        .O(\current_state[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h00C3DFDF00C3D3D3)) 
    \current_state[0]_i_6 
       (.I0(EMPTY_O),
        .I1(Q[2]),
        .I2(Q[1]),
        .I3(ack_timeout),
        .I4(Q[0]),
        .I5(FULL_O),
        .O(ram_empty_i_reg));
  LUT6 #(
    .INIT(64'hEEEEEEEEEEEAEAEA)) 
    \current_state[1]_i_1 
       (.I0(\current_state[1]_i_2_n_0 ),
        .I1(\current_state_reg[1]_2 ),
        .I2(\current_state_reg[1]_3 ),
        .I3(\current_state_reg[1]_4 ),
        .I4(\current_state[1]_i_6_n_0 ),
        .I5(\current_state[1]_i_7_n_0 ),
        .O(next_state[1]));
  LUT6 #(
    .INIT(64'h00000000F0F0EFE0)) 
    \current_state[1]_i_2 
       (.I0(EMPTY_O),
        .I1(Q[0]),
        .I2(Q[1]),
        .I3(\current_state[1]_i_8_n_0 ),
        .I4(\current_state_reg[0]_0 ),
        .I5(\current_state_reg[1]_2 ),
        .O(\current_state[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h5454AAEA54540040)) 
    \current_state[1]_i_6 
       (.I0(Q[1]),
        .I1(Q[0]),
        .I2(\current_state_reg[1]_6 ),
        .I3(wdc_eq_zero),
        .I4(Q[2]),
        .I5(\current_state[0]_i_2_n_0 ),
        .O(\current_state[1]_i_6_n_0 ));
  LUT5 #(
    .INIT(32'h55115000)) 
    \current_state[1]_i_7 
       (.I0(Q[3]),
        .I1(Q[4]),
        .I2(\current_state[1]_i_9_n_0 ),
        .I3(Q[2]),
        .I4(\current_state_reg[1]_5 ),
        .O(\current_state[1]_i_7_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT4 #(
    .INIT(16'hFEEE)) 
    \current_state[1]_i_8 
       (.I0(auto_sl_drdy),
        .I1(sl_drdy),
        .I2(ack_timeout),
        .I3(Q[0]),
        .O(\current_state[1]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h00DD00DD00DD3FDD)) 
    \current_state[1]_i_9 
       (.I0(FULL_O),
        .I1(Q[0]),
        .I2(ack_timeout),
        .I3(Q[1]),
        .I4(auto_sl_drdy),
        .I5(sl_drdy),
        .O(\current_state[1]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'h001F1F1FFFFFFFFF)) 
    \current_state[2]_i_4 
       (.I0(auto_sl_drdy),
        .I1(sl_drdy),
        .I2(\sl_rdmux_sel_r_reg[0] [0]),
        .I3(Q[0]),
        .I4(ack_timeout),
        .I5(Q[1]),
        .O(auto_sl_drdy_reg_0));
  LUT6 #(
    .INIT(64'hFF00FBFAFF00FFFA)) 
    \current_state[3]_i_1 
       (.I0(\current_state_reg[3] ),
        .I1(Q[0]),
        .I2(\current_state[3]_i_3_n_0 ),
        .I3(Q[3]),
        .I4(Q[4]),
        .I5(Q[2]),
        .O(next_state[2]));
  LUT6 #(
    .INIT(64'h4040404040400040)) 
    \current_state[3]_i_3 
       (.I0(Q[3]),
        .I1(Q[1]),
        .I2(Q[2]),
        .I3(\current_state[3]_i_4_n_0 ),
        .I4(sl_drdy),
        .I5(auto_sl_drdy),
        .O(\current_state[3]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h7)) 
    \current_state[3]_i_4 
       (.I0(Q[0]),
        .I1(ack_timeout),
        .O(\current_state[3]_i_4_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    dec_wdc_r_i_1
       (.I0(g0_b0__5_n_0),
        .I1(g0_b0__4_n_0),
        .I2(dec_wdc),
        .O(dec_wdc_r_reg));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT5 #(
    .INIT(32'h000C6308)) 
    g0_b0
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(\current_state_reg[1] ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT5 #(
    .INIT(32'h000C6314)) 
    g0_b0__0
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT5 #(
    .INIT(32'h00084100)) 
    g0_b0__1
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__1_n_0));
  LUT6 #(
    .INIT(64'hFFFDF77D00010444)) 
    g0_b0__10
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .I5(SR),
        .O(timer_rst_reg));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT5 #(
    .INIT(32'h00073EC4)) 
    g0_b0__2
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT5 #(
    .INIT(32'h00040200)) 
    g0_b0__3
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__3_n_0));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT5 #(
    .INIT(32'h00070EC4)) 
    g0_b0__4
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__4_n_0));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT5 #(
    .INIT(32'h00010440)) 
    g0_b0__5
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__5_n_0));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT5 #(
    .INIT(32'h00076FC4)) 
    g0_b0__6
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(\current_state_reg[1]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT5 #(
    .INIT(32'h00070014)) 
    g0_b0__7
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(\current_state_reg[1]_1 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT5 #(
    .INIT(32'h00006740)) 
    g0_b0__8
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .O(g0_b0__8_n_0));
  LUT6 #(
    .INIT(64'hFFFBDDF700004100)) 
    g0_b0__9
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .I5(\ma_err_r_reg[1]_0 [0]),
        .O(\ma_err_r_reg[0] ));
  LUT6 #(
    .INIT(64'hFFFBDDF700080000)) 
    g0_b1
       (.I0(next_state[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[2]),
        .I4(in_idle_mode_reg_0[1]),
        .I5(\ma_err_r_reg[1]_0 [1]),
        .O(\ma_err_r_reg[1] ));
  LUT6 #(
    .INIT(64'hFFFEFFF900000010)) 
    in_idle_mode_i_1
       (.I0(in_idle_mode_reg_0[0]),
        .I1(in_idle_mode_reg_0[1]),
        .I2(next_state[1]),
        .I3(next_state[2]),
        .I4(next_state[0]),
        .I5(in_write_mode_reg_0[1]),
        .O(in_idle_mode_reg));
  LUT6 #(
    .INIT(64'hFFFFFEFF00010000)) 
    in_normal_mode_i_1
       (.I0(next_state[2]),
        .I1(in_idle_mode_reg_0[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[0]),
        .I4(next_state[1]),
        .I5(in_write_mode_reg_0[0]),
        .O(in_normal_mode_reg));
  LUT6 #(
    .INIT(64'hFFFFFEFF00010000)) 
    in_read_mode_i_1
       (.I0(next_state[2]),
        .I1(in_idle_mode_reg_0[1]),
        .I2(next_state[0]),
        .I3(next_state[1]),
        .I4(in_idle_mode_reg_0[0]),
        .I5(in_write_mode_reg_0[2]),
        .O(in_read_mode_reg));
  LUT6 #(
    .INIT(64'hFFFFFEFF00000010)) 
    in_write_mode_i_1
       (.I0(next_state[2]),
        .I1(next_state[0]),
        .I2(in_idle_mode_reg_0[1]),
        .I3(next_state[1]),
        .I4(in_idle_mode_reg_0[0]),
        .I5(in_write_mode_reg_0[3]),
        .O(in_write_mode_reg));
  LUT3 #(
    .INIT(8'hB8)) 
    inc_addr_r_i_1
       (.I0(g0_b0__3_n_0),
        .I1(g0_b0__2_n_0),
        .I2(inc_addr),
        .O(inc_addr_r_reg));
  LUT6 #(
    .INIT(64'hFFFFFFEB08000000)) 
    ma_wr_pop_r_i_1
       (.I0(in_idle_mode_reg_0[0]),
        .I1(next_state[1]),
        .I2(in_idle_mode_reg_0[1]),
        .I3(next_state[0]),
        .I4(next_state[2]),
        .I5(RD_EN_I),
        .O(ma_wr_pop_r_reg));
  LUT6 #(
    .INIT(64'h0040008F00400080)) 
    \sl_den_r[0]_i_2 
       (.I0(in_idle_mode_reg_0[0]),
        .I1(active_sl_den_mask[0]),
        .I2(next_state[1]),
        .I3(next_state[0]),
        .I4(next_state[2]),
        .I5(\sl_den_r_reg[0] ),
        .O(sl_den_r[0]));
  LUT6 #(
    .INIT(64'h0040008F00400080)) 
    \sl_den_r[1]_i_2 
       (.I0(in_idle_mode_reg_0[0]),
        .I1(active_sl_den_mask[1]),
        .I2(next_state[1]),
        .I3(next_state[0]),
        .I4(next_state[2]),
        .I5(\sl_den_r_reg[1] ),
        .O(sl_den_r[1]));
  LUT6 #(
    .INIT(64'h2A00FFFF2A000000)) 
    \sl_rdmux_sel_r[0]_i_1 
       (.I0(\sl_rdmux_sel_r_reg[0] [1]),
        .I1(in_idle_mode_reg_0[0]),
        .I2(next_state[2]),
        .I3(next_state[1]),
        .I4(g0_b0__8_n_0),
        .I5(sl_rdmux_sel_r),
        .O(\ctl_reg_reg[20] ));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT5 #(
    .INIT(32'h00010100)) 
    \sl_rst_r[0]_i_2 
       (.I0(next_state[2]),
        .I1(in_idle_mode_reg_0[1]),
        .I2(in_idle_mode_reg_0[0]),
        .I3(next_state[0]),
        .I4(next_state[1]),
        .O(in_normal_mode));
  LUT4 #(
    .INIT(16'h8000)) 
    timeout_i_1
       (.I0(timeout_i_2_n_0),
        .I1(count_reg[2]),
        .I2(count_reg[3]),
        .I3(count_reg[4]),
        .O(timeout_i_1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    timeout_i_2
       (.I0(count_reg[0]),
        .I1(count_reg[1]),
        .I2(count_reg[6]),
        .I3(count_reg[5]),
        .O(timeout_i_2_n_0));
  FDRE #(
    .INIT(1'b0)) 
    timeout_reg
       (.C(clk),
        .CE(1'b1),
        .D(timeout_i_1_n_0),
        .Q(ack_timeout),
        .R(SR));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl_flg
   (last_flag_reg_0,
    next_state,
    \G_POS_EDGE.flag_reg_0 ,
    ma_rd_req,
    clk,
    clr_rd_req,
    \G_NEG_EDGE.flag_reg ,
    \G_NEG_EDGE.flag_reg_0 ,
    \G_NEG_EDGE.flag_reg_1 ,
    abort_rd_edge,
    \current_state_reg[2] ,
    Q,
    EMPTY_O,
    \current_state_reg[2]_0 ,
    ack_timeout);
  output last_flag_reg_0;
  output [0:0]next_state;
  output \G_POS_EDGE.flag_reg_0 ;
  input ma_rd_req;
  input clk;
  input clr_rd_req;
  input [0:0]\G_NEG_EDGE.flag_reg ;
  input [0:0]\G_NEG_EDGE.flag_reg_0 ;
  input [1:0]\G_NEG_EDGE.flag_reg_1 ;
  input abort_rd_edge;
  input \current_state_reg[2] ;
  input [4:0]Q;
  input EMPTY_O;
  input \current_state_reg[2]_0 ;
  input ack_timeout;

  wire EMPTY_O;
  wire [0:0]\G_NEG_EDGE.flag_reg ;
  wire [0:0]\G_NEG_EDGE.flag_reg_0 ;
  wire [1:0]\G_NEG_EDGE.flag_reg_1 ;
  wire \G_POS_EDGE.flag_i_1_n_0 ;
  wire \G_POS_EDGE.flag_reg_0 ;
  wire [4:0]Q;
  wire \U_RD_ABORT_FLAG/last_flag ;
  wire abort_rd_edge;
  wire ack_timeout;
  wire clk;
  wire clr_rd_req;
  wire \current_state[2]_i_2_n_0 ;
  wire \current_state_reg[2] ;
  wire \current_state_reg[2]_0 ;
  wire last_flag_reg_0;
  wire ma_rd_req;
  wire [0:0]next_state;
  wire rd_req_edge;

  LUT5 #(
    .INIT(32'hFFFF8A00)) 
    \G_NEG_EDGE.flag_i_1 
       (.I0(\U_RD_ABORT_FLAG/last_flag ),
        .I1(\G_NEG_EDGE.flag_reg ),
        .I2(\G_NEG_EDGE.flag_reg_0 ),
        .I3(\G_NEG_EDGE.flag_reg_1 [1]),
        .I4(abort_rd_edge),
        .O(last_flag_reg_0));
  LUT5 #(
    .INIT(32'hFFFF0400)) 
    \G_POS_EDGE.flag_i_1 
       (.I0(\G_NEG_EDGE.flag_reg ),
        .I1(\G_NEG_EDGE.flag_reg_0 ),
        .I2(\U_RD_ABORT_FLAG/last_flag ),
        .I3(\G_NEG_EDGE.flag_reg_1 [0]),
        .I4(rd_req_edge),
        .O(\G_POS_EDGE.flag_i_1_n_0 ));
  FDCE #(
    .INIT(1'b0)) 
    \G_POS_EDGE.flag_reg 
       (.C(clk),
        .CE(1'b1),
        .CLR(clr_rd_req),
        .D(\G_POS_EDGE.flag_i_1_n_0 ),
        .Q(rd_req_edge));
  LUT6 #(
    .INIT(64'h00000000F7F7F000)) 
    \current_state[1]_i_10 
       (.I0(rd_req_edge),
        .I1(EMPTY_O),
        .I2(Q[0]),
        .I3(ack_timeout),
        .I4(Q[1]),
        .I5(Q[2]),
        .O(\G_POS_EDGE.flag_reg_0 ));
  LUT5 #(
    .INIT(32'hFF00CACA)) 
    \current_state[2]_i_1 
       (.I0(\current_state[2]_i_2_n_0 ),
        .I1(\current_state_reg[2] ),
        .I2(Q[3]),
        .I3(Q[2]),
        .I4(Q[4]),
        .O(next_state));
  LUT6 #(
    .INIT(64'hFFFF405000004050)) 
    \current_state[2]_i_2 
       (.I0(Q[0]),
        .I1(rd_req_edge),
        .I2(Q[1]),
        .I3(EMPTY_O),
        .I4(Q[2]),
        .I5(\current_state_reg[2]_0 ),
        .O(\current_state[2]_i_2_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    last_flag_reg
       (.C(clk),
        .CE(1'b1),
        .D(ma_rd_req),
        .Q(\U_RD_ABORT_FLAG/last_flag ),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "xsdbm_v3_0_0_bus_ctl_flg" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl_flg__parameterized0
   (\G_NEG_EDGE.flag_reg_0 ,
    \current_state_reg[0] ,
    \current_state_reg[0]_0 ,
    \G_NEG_EDGE.flag_reg_1 ,
    clk,
    clr_abort_rd,
    Q,
    wdc_eq_zero,
    ack_timeout,
    \current_state_reg[2] ,
    FULL_O,
    \current_state[2]_i_3_0 ,
    \current_state_reg[0]_1 );
  output \G_NEG_EDGE.flag_reg_0 ;
  output \current_state_reg[0] ;
  output \current_state_reg[0]_0 ;
  input \G_NEG_EDGE.flag_reg_1 ;
  input clk;
  input clr_abort_rd;
  input [4:0]Q;
  input wdc_eq_zero;
  input ack_timeout;
  input \current_state_reg[2] ;
  input FULL_O;
  input [0:0]\current_state[2]_i_3_0 ;
  input \current_state_reg[0]_1 ;

  wire FULL_O;
  wire \G_NEG_EDGE.flag_reg_0 ;
  wire \G_NEG_EDGE.flag_reg_1 ;
  wire [4:0]Q;
  wire ack_timeout;
  wire clk;
  wire clr_abort_rd;
  wire \current_state[0]_i_5_n_0 ;
  wire [0:0]\current_state[2]_i_3_0 ;
  wire \current_state[2]_i_5_n_0 ;
  wire \current_state_reg[0] ;
  wire \current_state_reg[0]_0 ;
  wire \current_state_reg[0]_1 ;
  wire \current_state_reg[2] ;
  wire wdc_eq_zero;

  FDCE #(
    .INIT(1'b0)) 
    \G_NEG_EDGE.flag_reg 
       (.C(clk),
        .CE(1'b1),
        .CLR(clr_abort_rd),
        .D(\G_NEG_EDGE.flag_reg_1 ),
        .Q(\G_NEG_EDGE.flag_reg_0 ));
  LUT5 #(
    .INIT(32'hF0AA00CC)) 
    \current_state[0]_i_4 
       (.I0(\current_state[0]_i_5_n_0 ),
        .I1(\current_state_reg[0]_1 ),
        .I2(Q[0]),
        .I3(Q[4]),
        .I4(Q[3]),
        .O(\current_state_reg[0]_0 ));
  LUT6 #(
    .INIT(64'h1F1F1D0D5F5F5D4D)) 
    \current_state[0]_i_5 
       (.I0(Q[2]),
        .I1(Q[1]),
        .I2(Q[0]),
        .I3(wdc_eq_zero),
        .I4(\G_NEG_EDGE.flag_reg_0 ),
        .I5(ack_timeout),
        .O(\current_state[0]_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h00000303F000AAAA)) 
    \current_state[2]_i_3 
       (.I0(\current_state[2]_i_5_n_0 ),
        .I1(\current_state_reg[2] ),
        .I2(Q[0]),
        .I3(ack_timeout),
        .I4(Q[1]),
        .I5(Q[2]),
        .O(\current_state_reg[0] ));
  LUT5 #(
    .INIT(32'hFE00FEFF)) 
    \current_state[2]_i_5 
       (.I0(wdc_eq_zero),
        .I1(\G_NEG_EDGE.flag_reg_0 ),
        .I2(FULL_O),
        .I3(Q[0]),
        .I4(\current_state[2]_i_3_0 ),
        .O(\current_state[2]_i_5_n_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_mstr2sl_if
   (sl_drdy,
    Q,
    clk,
    sl_oport0_i,
    sl_oport1_i,
    sl_rdmux_sel_r);
  output sl_drdy;
  output [15:0]Q;
  input clk;
  input [16:0]sl_oport0_i;
  input [16:0]sl_oport1_i;
  input sl_rdmux_sel_r;

  wire [15:0]Q;
  wire SL_DRDY_O_i_1_n_0;
  wire clk;
  wire [15:0]rd_din_mux;
  wire sl_drdy;
  wire [16:0]sl_oport0_i;
  wire [16:0]sl_oport1_i;
  wire sl_rdmux_sel_r;

  FDRE \MA_RD_DIN_O_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[0]),
        .Q(Q[0]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[10] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[10]),
        .Q(Q[10]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[11] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[11]),
        .Q(Q[11]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[12] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[12]),
        .Q(Q[12]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[13] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[13]),
        .Q(Q[13]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[14] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[14]),
        .Q(Q[14]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[15] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[15]),
        .Q(Q[15]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[1]),
        .Q(Q[1]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[2] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[2]),
        .Q(Q[2]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[3] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[3]),
        .Q(Q[3]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[4] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[4]),
        .Q(Q[4]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[5] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[5]),
        .Q(Q[5]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[6] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[6]),
        .Q(Q[6]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[7] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[7]),
        .Q(Q[7]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[8] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[8]),
        .Q(Q[8]),
        .R(1'b0));
  FDRE \MA_RD_DIN_O_reg[9] 
       (.C(clk),
        .CE(1'b1),
        .D(rd_din_mux[9]),
        .Q(Q[9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'hE)) 
    SL_DRDY_O_i_1
       (.I0(sl_oport0_i[0]),
        .I1(sl_oport1_i[0]),
        .O(SL_DRDY_O_i_1_n_0));
  FDRE SL_DRDY_O_reg
       (.C(clk),
        .CE(1'b1),
        .D(SL_DRDY_O_i_1_n_0),
        .Q(sl_drdy),
        .R(1'b0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ltlib_v1_0_0_generic_mux U_RD_DIN_BUS_MUX
       (.D(rd_din_mux),
        .sl_oport0_i(sl_oport0_i[16:1]),
        .sl_oport1_i(sl_oport1_i[16:1]),
        .sl_rdmux_sel_r(sl_rdmux_sel_r));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_cmd_decode
   (iTDO_next,
    Q,
    SR,
    SYNC_reg,
    \iTARGET_reg[9]_0 ,
    \iTARGET_reg[9]_1 ,
    \iTARGET_reg[9]_2 ,
    \iTARGET_reg[9]_3 ,
    \icn_cmd_en_reg[7] ,
    iDATA_CMD,
    iTDO_reg,
    \icn_cmd_en_reg[7]_0 ,
    \iTARGET_reg[6]_0 ,
    D,
    m_bscan_tck);
  output iTDO_next;
  output [3:0]Q;
  output [0:0]SR;
  output SYNC_reg;
  output \iTARGET_reg[9]_0 ;
  output \iTARGET_reg[9]_1 ;
  output \iTARGET_reg[9]_2 ;
  output \iTARGET_reg[9]_3 ;
  input \icn_cmd_en_reg[7] ;
  input iDATA_CMD;
  input iTDO_reg;
  input \icn_cmd_en_reg[7]_0 ;
  input \iTARGET_reg[6]_0 ;
  input [0:0]D;
  input [0:0]m_bscan_tck;

  wire [0:0]D;
  wire [3:0]Q;
  wire [0:0]SR;
  wire SYNC_reg;
  wire [1:0]iCOMMAND_GRP;
  wire [1:0]iCORE_ID;
  wire iDATA_CMD;
  wire iSEL_n;
  wire \iSTAT_CNT[5]_i_3_n_0 ;
  wire \iSTAT_CNT[5]_i_4_n_0 ;
  wire iTARGET_CE;
  wire \iTARGET_reg[6]_0 ;
  wire \iTARGET_reg[9]_0 ;
  wire \iTARGET_reg[9]_1 ;
  wire \iTARGET_reg[9]_2 ;
  wire \iTARGET_reg[9]_3 ;
  wire iTDO_next;
  wire iTDO_reg;
  wire \icn_cmd_en[7]_i_3_n_0 ;
  wire \icn_cmd_en_reg[7] ;
  wire \icn_cmd_en_reg[7]_0 ;
  wire [0:0]m_bscan_tck;
  wire [1:0]sel0;

  LUT5 #(
    .INIT(32'h7FFFFFFF)) 
    \iSTAT_CNT[5]_i_1 
       (.I0(\iSTAT_CNT[5]_i_3_n_0 ),
        .I1(iCORE_ID[0]),
        .I2(iCORE_ID[1]),
        .I3(Q[2]),
        .I4(\iSTAT_CNT[5]_i_4_n_0 ),
        .O(SR));
  LUT5 #(
    .INIT(32'h00000010)) 
    \iSTAT_CNT[5]_i_3 
       (.I0(iCOMMAND_GRP[1]),
        .I1(iCOMMAND_GRP[0]),
        .I2(Q[3]),
        .I3(sel0[0]),
        .I4(sel0[1]),
        .O(\iSTAT_CNT[5]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT4 #(
    .INIT(16'h0040)) 
    \iSTAT_CNT[5]_i_4 
       (.I0(Q[0]),
        .I1(\icn_cmd_en_reg[7] ),
        .I2(\icn_cmd_en_reg[7]_0 ),
        .I3(Q[1]),
        .O(\iSTAT_CNT[5]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \iTARGET[15]_i_1 
       (.I0(\icn_cmd_en_reg[7] ),
        .I1(iDATA_CMD),
        .O(iTARGET_CE));
  LUT1 #(
    .INIT(2'h1)) 
    \iTARGET[15]_i_2 
       (.I0(\iTARGET_reg[6]_0 ),
        .O(iSEL_n));
  FDCE \iTARGET_reg[10] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(Q[1]),
        .Q(Q[0]));
  FDCE \iTARGET_reg[11] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(iCORE_ID[0]),
        .Q(Q[1]));
  FDCE \iTARGET_reg[12] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(iCORE_ID[1]),
        .Q(iCORE_ID[0]));
  FDCE \iTARGET_reg[13] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(Q[2]),
        .Q(iCORE_ID[1]));
  FDCE \iTARGET_reg[14] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(Q[3]),
        .Q(Q[2]));
  FDCE \iTARGET_reg[15] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(D),
        .Q(Q[3]));
  FDCE \iTARGET_reg[6] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(iCOMMAND_GRP[1]),
        .Q(iCOMMAND_GRP[0]));
  FDCE \iTARGET_reg[7] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(sel0[0]),
        .Q(iCOMMAND_GRP[1]));
  FDCE \iTARGET_reg[8] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(sel0[1]),
        .Q(sel0[0]));
  FDCE \iTARGET_reg[9] 
       (.C(m_bscan_tck),
        .CE(iTARGET_CE),
        .CLR(iSEL_n),
        .D(Q[0]),
        .Q(sel0[1]));
  LUT4 #(
    .INIT(16'h0081)) 
    iTDO_i_1
       (.I0(iCORE_ID[0]),
        .I1(iCORE_ID[1]),
        .I2(Q[2]),
        .I3(iTDO_reg),
        .O(iTDO_next));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'h01)) 
    \icn_cmd_en[4]_i_1 
       (.I0(sel0[1]),
        .I1(sel0[0]),
        .I2(\icn_cmd_en[7]_i_3_n_0 ),
        .O(\iTARGET_reg[9]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \icn_cmd_en[5]_i_1 
       (.I0(sel0[1]),
        .I1(sel0[0]),
        .I2(\icn_cmd_en[7]_i_3_n_0 ),
        .O(\iTARGET_reg[9]_2 ));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \icn_cmd_en[6]_i_1 
       (.I0(\icn_cmd_en[7]_i_3_n_0 ),
        .I1(sel0[1]),
        .I2(sel0[0]),
        .O(\iTARGET_reg[9]_1 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT4 #(
    .INIT(16'hF7FF)) 
    \icn_cmd_en[7]_i_1 
       (.I0(\icn_cmd_en_reg[7] ),
        .I1(\icn_cmd_en_reg[7]_0 ),
        .I2(Q[1]),
        .I3(Q[0]),
        .O(SYNC_reg));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'h08)) 
    \icn_cmd_en[7]_i_2 
       (.I0(sel0[1]),
        .I1(sel0[0]),
        .I2(\icn_cmd_en[7]_i_3_n_0 ),
        .O(\iTARGET_reg[9]_3 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \icn_cmd_en[7]_i_3 
       (.I0(Q[2]),
        .I1(iCORE_ID[1]),
        .I2(iCORE_ID[0]),
        .I3(iCOMMAND_GRP[0]),
        .I4(iCOMMAND_GRP[1]),
        .I5(Q[3]),
        .O(\icn_cmd_en[7]_i_3_n_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg
   (out,
    \ctl_reg_reg[2]_0 ,
    ICN_CMD_EN_I,
    m_bscan_tck,
    D,
    clk);
  output [0:0]out;
  output [2:0]\ctl_reg_reg[2]_0 ;
  input ICN_CMD_EN_I;
  input [0:0]m_bscan_tck;
  input [0:0]D;
  input clk;

  wire [0:0]D;
  wire ICN_CMD_EN_I;
  wire clk;
  (* DONT_TOUCH *) wire [2:0]ctl_reg;
  wire \ctl_reg[2]_i_1_n_0 ;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_1;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_2;
  (* DONT_TOUCH *) wire ctl_reg_en_temp;
  (* DONT_TOUCH *) wire icn_cmd_din_temp;
  (* DONT_TOUCH *) wire icn_cmd_en_temp;
  wire [0:0]m_bscan_tck;
  (* async_reg = "true" *) wire [2:0]shift_reg_in;

  assign \ctl_reg_reg[2]_0 [2:0] = ctl_reg;
  assign out[0] = shift_reg_in[0];
  LUT2 #(
    .INIT(4'h8)) 
    \ctl_reg[2]_i_1 
       (.I0(ctl_reg_en_temp),
        .I1(ctl_reg_en_2[0]),
        .O(\ctl_reg[2]_i_1_n_0 ));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(ctl_reg_en_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_1[0]),
        .Q(ctl_reg_en_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_temp),
        .Q(ctl_reg_en_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_2[0]),
        .Q(ctl_reg_en_2[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    ctl_reg_en_temp_inferred_i_1
       (.I0(ctl_reg_en_1[1]),
        .O(ctl_reg_en_temp));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[0] 
       (.C(clk),
        .CE(\ctl_reg[2]_i_1_n_0 ),
        .D(shift_reg_in[0]),
        .Q(ctl_reg[0]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[1] 
       (.C(clk),
        .CE(\ctl_reg[2]_i_1_n_0 ),
        .D(shift_reg_in[1]),
        .Q(ctl_reg[1]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[2] 
       (.C(clk),
        .CE(\ctl_reg[2]_i_1_n_0 ),
        .D(shift_reg_in[2]),
        .Q(ctl_reg[2]),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(D),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(ICN_CMD_EN_I),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[1]),
        .Q(shift_reg_in[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[2]),
        .Q(shift_reg_in[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[2]),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "xsdbm_v3_0_0_ctl_reg" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg_1
   (D,
    icn_cmd_en_temp_reg_0,
    m_bscan_tck,
    icn_cmd_din_temp_reg_0,
    clk,
    out);
  output [0:0]D;
  input icn_cmd_en_temp_reg_0;
  input [0:0]m_bscan_tck;
  input [0:0]icn_cmd_din_temp_reg_0;
  input clk;
  input out;

  wire clk;
  (* DONT_TOUCH *) wire [2:0]ctl_reg;
  wire \ctl_reg[2]_i_1__0_n_0 ;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_1;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_2;
  (* DONT_TOUCH *) wire ctl_reg_en_temp;
  (* DONT_TOUCH *) wire icn_cmd_din_temp;
  wire [0:0]icn_cmd_din_temp_reg_0;
  (* DONT_TOUCH *) wire icn_cmd_en_temp;
  wire icn_cmd_en_temp_reg_0;
  wire [0:0]m_bscan_tck;
  wire out;
  (* async_reg = "true" *) wire [2:0]shift_reg_in;

  assign D[0] = shift_reg_in[0];
  LUT2 #(
    .INIT(4'h8)) 
    \ctl_reg[2]_i_1__0 
       (.I0(ctl_reg_en_temp),
        .I1(ctl_reg_en_2[0]),
        .O(\ctl_reg[2]_i_1__0_n_0 ));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(ctl_reg_en_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_1[0]),
        .Q(ctl_reg_en_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_temp),
        .Q(ctl_reg_en_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_2[0]),
        .Q(ctl_reg_en_2[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    ctl_reg_en_temp_inferred_i_1__2
       (.I0(ctl_reg_en_1[1]),
        .O(ctl_reg_en_temp));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[0] 
       (.C(clk),
        .CE(\ctl_reg[2]_i_1__0_n_0 ),
        .D(shift_reg_in[0]),
        .Q(ctl_reg[0]),
        .R(out));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[1] 
       (.C(clk),
        .CE(\ctl_reg[2]_i_1__0_n_0 ),
        .D(shift_reg_in[1]),
        .Q(ctl_reg[1]),
        .R(out));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[2] 
       (.C(clk),
        .CE(\ctl_reg[2]_i_1__0_n_0 ),
        .D(shift_reg_in[2]),
        .Q(ctl_reg[2]),
        .R(out));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_din_temp_reg_0),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp_reg_0),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[1]),
        .Q(shift_reg_in[0]),
        .R(out));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[2]),
        .Q(shift_reg_in[1]),
        .R(out));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[2]),
        .R(out));
endmodule

(* ORIG_REF_NAME = "xsdbm_v3_0_0_ctl_reg" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg__parameterized0
   (\ctl_reg_en_2_reg[1]_0 ,
    \ctl_reg_reg[20]_0 ,
    \icn_cmd_en_reg[4] ,
    burst_wd_in_rdy_rise_edge0,
    \ctl_reg_reg[0]_0 ,
    \ctl_reg_reg[21]_0 ,
    \ctl_reg_reg[21]_1 ,
    icn_cmd_en_temp_reg_0,
    m_bscan_tck,
    D,
    out,
    ICN_CMD_EN_I,
    p_1_in1_in,
    iTDO_i_4,
    burst_wd_in_rdy_last,
    wdc_eq_zero_reg,
    wdc_eq_zero_reg_0,
    burst_wd_in_rdy_rise_edge,
    clk,
    SR);
  output [0:0]\ctl_reg_en_2_reg[1]_0 ;
  output [19:0]\ctl_reg_reg[20]_0 ;
  output \icn_cmd_en_reg[4] ;
  output burst_wd_in_rdy_rise_edge0;
  output \ctl_reg_reg[0]_0 ;
  output \ctl_reg_reg[21]_0 ;
  output \ctl_reg_reg[21]_1 ;
  input icn_cmd_en_temp_reg_0;
  input [0:0]m_bscan_tck;
  input [0:0]D;
  input [0:0]out;
  input ICN_CMD_EN_I;
  input p_1_in1_in;
  input [0:0]iTDO_i_4;
  input burst_wd_in_rdy_last;
  input wdc_eq_zero_reg;
  input [0:0]wdc_eq_zero_reg_0;
  input burst_wd_in_rdy_rise_edge;
  input clk;
  input [0:0]SR;

  wire [0:0]D;
  wire ICN_CMD_EN_I;
  wire [0:0]SR;
  wire burst_wd_in_rdy_last;
  wire burst_wd_in_rdy_rise_edge;
  wire burst_wd_in_rdy_rise_edge0;
  wire clk;
  (* DONT_TOUCH *) wire [27:0]ctl_reg;
  wire \ctl_reg[27]_i_1_n_0 ;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_1;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_2;
  (* DONT_TOUCH *) wire ctl_reg_en_temp;
  wire \ctl_reg_reg[0]_0 ;
  wire \ctl_reg_reg[21]_0 ;
  wire \ctl_reg_reg[21]_1 ;
  wire [0:0]iTDO_i_4;
  (* DONT_TOUCH *) wire icn_cmd_din_temp;
  wire \icn_cmd_en_reg[4] ;
  (* DONT_TOUCH *) wire icn_cmd_en_temp;
  wire icn_cmd_en_temp_reg_0;
  wire [0:0]m_bscan_tck;
  wire [0:0]out;
  wire p_1_in1_in;
  (* async_reg = "true" *) wire [27:0]shift_reg_in;
  wire \sl_dwe_r[0]_i_3_n_0 ;
  wire wdc_eq_zero_i_3_n_0;
  wire wdc_eq_zero_i_4_n_0;
  wire wdc_eq_zero_i_5_n_0;
  wire wdc_eq_zero_i_8_n_0;
  wire wdc_eq_zero_i_9_n_0;
  wire wdc_eq_zero_reg;
  wire [0:0]wdc_eq_zero_reg_0;

  assign \ctl_reg_en_2_reg[1]_0 [0] = ctl_reg_en_2[1];
  assign \ctl_reg_reg[20]_0 [19] = ctl_reg[20];
  assign \ctl_reg_reg[20]_0 [18:0] = ctl_reg[18:0];
  LUT2 #(
    .INIT(4'h2)) 
    burst_wd_in_rdy_rise_edge_i_1
       (.I0(ctl_reg_en_2[1]),
        .I1(burst_wd_in_rdy_last),
        .O(burst_wd_in_rdy_rise_edge0));
  LUT2 #(
    .INIT(4'h8)) 
    \ctl_reg[27]_i_1 
       (.I0(ctl_reg_en_temp),
        .I1(ctl_reg_en_2[0]),
        .O(\ctl_reg[27]_i_1_n_0 ));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(ctl_reg_en_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_1[0]),
        .Q(ctl_reg_en_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_temp),
        .Q(ctl_reg_en_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_2[0]),
        .Q(ctl_reg_en_2[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    ctl_reg_en_temp_inferred_i_1__0
       (.I0(ctl_reg_en_1[1]),
        .O(ctl_reg_en_temp));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[0] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[0]),
        .Q(ctl_reg[0]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[10] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[10]),
        .Q(ctl_reg[10]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[11] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[11]),
        .Q(ctl_reg[11]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[12] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[12]),
        .Q(ctl_reg[12]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[13] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[13]),
        .Q(ctl_reg[13]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[14] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[14]),
        .Q(ctl_reg[14]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[15] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[15]),
        .Q(ctl_reg[15]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[16] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[16]),
        .Q(ctl_reg[16]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[17] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[17]),
        .Q(ctl_reg[17]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[18] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[18]),
        .Q(ctl_reg[18]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[19] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[19]),
        .Q(ctl_reg[19]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[1] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[1]),
        .Q(ctl_reg[1]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[20] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[20]),
        .Q(ctl_reg[20]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[21] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[21]),
        .Q(ctl_reg[21]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[22] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[22]),
        .Q(ctl_reg[22]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[23] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[23]),
        .Q(ctl_reg[23]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[24] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[24]),
        .Q(ctl_reg[24]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[25] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[25]),
        .Q(ctl_reg[25]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[26] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[26]),
        .Q(ctl_reg[26]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[27] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[27]),
        .Q(ctl_reg[27]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[2] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[2]),
        .Q(ctl_reg[2]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[3] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[3]),
        .Q(ctl_reg[3]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[4] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[4]),
        .Q(ctl_reg[4]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[5] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[5]),
        .Q(ctl_reg[5]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[6] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[6]),
        .Q(ctl_reg[6]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[7] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[7]),
        .Q(ctl_reg[7]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[8] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[8]),
        .Q(ctl_reg[8]),
        .R(SR));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[9] 
       (.C(clk),
        .CE(\ctl_reg[27]_i_1_n_0 ),
        .D(shift_reg_in[9]),
        .Q(ctl_reg[9]),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFF888F888F888)) 
    iTDO_i_10
       (.I0(icn_cmd_en_temp_reg_0),
        .I1(shift_reg_in[0]),
        .I2(out),
        .I3(ICN_CMD_EN_I),
        .I4(p_1_in1_in),
        .I5(iTDO_i_4),
        .O(\icn_cmd_en_reg[4] ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(D),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp_reg_0),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[1]),
        .Q(shift_reg_in[0]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[10] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[11]),
        .Q(shift_reg_in[10]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[11] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[12]),
        .Q(shift_reg_in[11]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[12] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[13]),
        .Q(shift_reg_in[12]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[13] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[14]),
        .Q(shift_reg_in[13]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[14] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[15]),
        .Q(shift_reg_in[14]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[15] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[16]),
        .Q(shift_reg_in[15]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[16] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[17]),
        .Q(shift_reg_in[16]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[17] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[18]),
        .Q(shift_reg_in[17]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[18] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[19]),
        .Q(shift_reg_in[18]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[19] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[20]),
        .Q(shift_reg_in[19]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[2]),
        .Q(shift_reg_in[1]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[20] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[21]),
        .Q(shift_reg_in[20]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[21] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[22]),
        .Q(shift_reg_in[21]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[22] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[23]),
        .Q(shift_reg_in[22]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[23] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[24]),
        .Q(shift_reg_in[23]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[24] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[25]),
        .Q(shift_reg_in[24]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[25] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[26]),
        .Q(shift_reg_in[25]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[26] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[27]),
        .Q(shift_reg_in[26]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[27] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[27]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[3]),
        .Q(shift_reg_in[2]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[3] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[4]),
        .Q(shift_reg_in[3]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[4] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[5]),
        .Q(shift_reg_in[4]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[5] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[6]),
        .Q(shift_reg_in[5]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[6] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[7]),
        .Q(shift_reg_in[6]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[7] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[8]),
        .Q(shift_reg_in[7]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[8] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[9]),
        .Q(shift_reg_in[8]),
        .R(SR));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[9] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[10]),
        .Q(shift_reg_in[9]),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFFFFF00000001)) 
    \sl_dwe_r[0]_i_2 
       (.I0(\sl_dwe_r[0]_i_3_n_0 ),
        .I1(ctl_reg[21]),
        .I2(ctl_reg[20]),
        .I3(ctl_reg[23]),
        .I4(ctl_reg[22]),
        .I5(ctl_reg[19]),
        .O(\ctl_reg_reg[21]_0 ));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \sl_dwe_r[0]_i_3 
       (.I0(ctl_reg[24]),
        .I1(ctl_reg[25]),
        .I2(ctl_reg[27]),
        .I3(ctl_reg[26]),
        .O(\sl_dwe_r[0]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF00000010)) 
    \sl_dwe_r[1]_i_2 
       (.I0(\sl_dwe_r[0]_i_3_n_0 ),
        .I1(ctl_reg[21]),
        .I2(ctl_reg[20]),
        .I3(ctl_reg[23]),
        .I4(ctl_reg[22]),
        .I5(ctl_reg[19]),
        .O(\ctl_reg_reg[21]_1 ));
  LUT5 #(
    .INIT(32'hFEEEEEEE)) 
    wdc_eq_zero_i_1
       (.I0(wdc_eq_zero_reg),
        .I1(wdc_eq_zero_reg_0),
        .I2(wdc_eq_zero_i_3_n_0),
        .I3(wdc_eq_zero_i_4_n_0),
        .I4(wdc_eq_zero_i_5_n_0),
        .O(\ctl_reg_reg[0]_0 ));
  LUT6 #(
    .INIT(64'h0000000000000800)) 
    wdc_eq_zero_i_3
       (.I0(wdc_eq_zero_i_8_n_0),
        .I1(wdc_eq_zero_i_9_n_0),
        .I2(ctl_reg[0]),
        .I3(burst_wd_in_rdy_rise_edge),
        .I4(ctl_reg[2]),
        .I5(ctl_reg[1]),
        .O(wdc_eq_zero_i_3_n_0));
  LUT6 #(
    .INIT(64'h0000230000002323)) 
    wdc_eq_zero_i_4
       (.I0(ctl_reg[7]),
        .I1(ctl_reg[8]),
        .I2(ctl_reg[6]),
        .I3(ctl_reg[4]),
        .I4(ctl_reg[5]),
        .I5(ctl_reg[3]),
        .O(wdc_eq_zero_i_4_n_0));
  LUT6 #(
    .INIT(64'h0000230000002323)) 
    wdc_eq_zero_i_5
       (.I0(ctl_reg[13]),
        .I1(ctl_reg[14]),
        .I2(ctl_reg[12]),
        .I3(ctl_reg[10]),
        .I4(ctl_reg[11]),
        .I5(ctl_reg[9]),
        .O(wdc_eq_zero_i_5_n_0));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    wdc_eq_zero_i_8
       (.I0(ctl_reg[10]),
        .I1(ctl_reg[11]),
        .I2(ctl_reg[13]),
        .I3(ctl_reg[14]),
        .I4(ctl_reg[16]),
        .I5(ctl_reg[15]),
        .O(wdc_eq_zero_i_8_n_0));
  LUT4 #(
    .INIT(16'h0001)) 
    wdc_eq_zero_i_9
       (.I0(ctl_reg[8]),
        .I1(ctl_reg[7]),
        .I2(ctl_reg[5]),
        .I3(ctl_reg[4]),
        .O(wdc_eq_zero_i_9_n_0));
endmodule

(* ORIG_REF_NAME = "xsdbm_v3_0_0_ctl_reg" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg__parameterized1
   (\ctl_reg_en_2_reg[1]_0 ,
    out,
    \ctl_reg_reg[17]_0 ,
    E,
    SR,
    \icn_cmd_en_reg[6] ,
    \shift_reg_in_reg[17]_0 ,
    ma_rd_req,
    addr_in_rdy_rise_edge0,
    p_1_in1_in,
    m_bscan_tck,
    D,
    p_0_in,
    clk,
    \ctl_reg_reg[0]_0 ,
    addr_in_rdy_last);
  output [0:0]\ctl_reg_en_2_reg[1]_0 ;
  output [1:0]out;
  output [17:0]\ctl_reg_reg[17]_0 ;
  output [0:0]E;
  output [0:0]SR;
  output [0:0]\icn_cmd_en_reg[6] ;
  output [0:0]\shift_reg_in_reg[17]_0 ;
  output ma_rd_req;
  output addr_in_rdy_rise_edge0;
  input p_1_in1_in;
  input [0:0]m_bscan_tck;
  input [0:0]D;
  input p_0_in;
  input clk;
  input \ctl_reg_reg[0]_0 ;
  input addr_in_rdy_last;

  wire [0:0]D;
  wire [0:0]E;
  wire [0:0]SR;
  wire addr_in_rdy_last;
  wire addr_in_rdy_rise_edge0;
  wire clk;
  (* DONT_TOUCH *) wire [17:0]ctl_reg;
  wire \ctl_reg[17]_i_1_n_0 ;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_1;
  (* DONT_TOUCH *) (* RTL_KEEP = "yes" *) (* async_reg = "true" *) wire [1:0]ctl_reg_en_2;
  (* DONT_TOUCH *) wire ctl_reg_en_temp;
  wire \ctl_reg_reg[0]_0 ;
  (* DONT_TOUCH *) wire icn_cmd_din_temp;
  wire [0:0]\icn_cmd_en_reg[6] ;
  (* DONT_TOUCH *) wire icn_cmd_en_temp;
  wire [0:0]m_bscan_tck;
  wire ma_rd_req;
  wire p_0_in;
  wire p_1_in1_in;
  (* async_reg = "true" *) wire [17:0]shift_reg_in;
  wire [0:0]\shift_reg_in_reg[17]_0 ;

  assign \ctl_reg_en_2_reg[1]_0 [0] = ctl_reg_en_2[1];
  assign \ctl_reg_reg[17]_0 [17:0] = ctl_reg;
  assign out[1] = shift_reg_in[17];
  assign out[0] = shift_reg_in[0];
  LUT2 #(
    .INIT(4'h2)) 
    addr_in_rdy_rise_edge_i_1
       (.I0(ctl_reg_en_2[1]),
        .I1(addr_in_rdy_last),
        .O(addr_in_rdy_rise_edge0));
  LUT2 #(
    .INIT(4'h8)) 
    \ctl_reg[17]_i_1 
       (.I0(ctl_reg_en_temp),
        .I1(ctl_reg_en_2[0]),
        .O(\ctl_reg[17]_i_1_n_0 ));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(ctl_reg_en_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_1_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_1[0]),
        .Q(ctl_reg_en_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_temp),
        .Q(ctl_reg_en_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \ctl_reg_en_2_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(ctl_reg_en_2[0]),
        .Q(ctl_reg_en_2[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    ctl_reg_en_temp_inferred_i_1__1
       (.I0(ctl_reg_en_1[1]),
        .O(ctl_reg_en_temp));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[0] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[0]),
        .Q(ctl_reg[0]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[10] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[10]),
        .Q(ctl_reg[10]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[11] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[11]),
        .Q(ctl_reg[11]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[12] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[12]),
        .Q(ctl_reg[12]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[13] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[13]),
        .Q(ctl_reg[13]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[14] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[14]),
        .Q(ctl_reg[14]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[15] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[15]),
        .Q(ctl_reg[15]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[16] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[16]),
        .Q(ctl_reg[16]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[17] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[17]),
        .Q(ctl_reg[17]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[1] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[1]),
        .Q(ctl_reg[1]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[2] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[2]),
        .Q(ctl_reg[2]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[3] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[3]),
        .Q(ctl_reg[3]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[4] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[4]),
        .Q(ctl_reg[4]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[5] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[5]),
        .Q(ctl_reg[5]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[6] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[6]),
        .Q(ctl_reg[6]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[7] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[7]),
        .Q(ctl_reg[7]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[8] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[8]),
        .Q(ctl_reg[8]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ctl_reg_reg[9] 
       (.C(clk),
        .CE(\ctl_reg[17]_i_1_n_0 ),
        .D(shift_reg_in[9]),
        .Q(ctl_reg[9]),
        .R(\ctl_reg_reg[0]_0 ));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(D),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_1_in1_in),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    last_flag_i_1
       (.I0(ctl_reg_en_2[1]),
        .I1(ctl_reg[17]),
        .O(ma_rd_req));
  LUT2 #(
    .INIT(4'hB)) 
    \shift_bit_count[3]_i_1 
       (.I0(shift_reg_in[17]),
        .I1(p_0_in),
        .O(SR));
  LUT2 #(
    .INIT(4'h7)) 
    \shift_bit_count[3]_i_1__0 
       (.I0(shift_reg_in[17]),
        .I1(p_0_in),
        .O(\shift_reg_in_reg[17]_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \shift_reg_in[15]_i_1 
       (.I0(p_0_in),
        .I1(shift_reg_in[17]),
        .O(E));
  LUT2 #(
    .INIT(4'h8)) 
    \shift_reg_in[15]_i_1__0 
       (.I0(p_0_in),
        .I1(shift_reg_in[17]),
        .O(\icn_cmd_en_reg[6] ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[1]),
        .Q(shift_reg_in[0]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[10] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[11]),
        .Q(shift_reg_in[10]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[11] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[12]),
        .Q(shift_reg_in[11]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[12] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[13]),
        .Q(shift_reg_in[12]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[13] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[14]),
        .Q(shift_reg_in[13]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[14] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[15]),
        .Q(shift_reg_in[14]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[15] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[16]),
        .Q(shift_reg_in[15]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[16] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[17]),
        .Q(shift_reg_in[16]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[17] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[17]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[2]),
        .Q(shift_reg_in[1]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[3]),
        .Q(shift_reg_in[2]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[3] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[4]),
        .Q(shift_reg_in[3]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[4] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[5]),
        .Q(shift_reg_in[4]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[5] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[6]),
        .Q(shift_reg_in[5]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[6] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[7]),
        .Q(shift_reg_in[6]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[7] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[8]),
        .Q(shift_reg_in[7]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[8] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[9]),
        .Q(shift_reg_in[8]),
        .R(\ctl_reg_reg[0]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[9] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(shift_reg_in[10]),
        .Q(shift_reg_in[9]),
        .R(\ctl_reg_reg[0]_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_icon
   (D,
    iTDO_VEC_15,
    in0,
    iSYNC,
    Q,
    SYNC_reg,
    \iTARGET_reg[9] ,
    \iTARGET_reg[9]_0 ,
    \iTARGET_reg[9]_1 ,
    \iTARGET_reg[9]_2 ,
    out,
    m_bscan_tck,
    \icn_cmd_en_reg[7] ,
    iTDO_reg_0,
    iDATA_CMD_reg_0,
    \iTARGET_reg[6] );
  output [0:0]D;
  output iTDO_VEC_15;
  output in0;
  output iSYNC;
  output [3:0]Q;
  output SYNC_reg;
  output \iTARGET_reg[9] ;
  output \iTARGET_reg[9]_0 ;
  output \iTARGET_reg[9]_1 ;
  output \iTARGET_reg[9]_2 ;
  input out;
  input [0:0]m_bscan_tck;
  input \icn_cmd_en_reg[7] ;
  input iTDO_reg_0;
  input iDATA_CMD_reg_0;
  input \iTARGET_reg[6] ;

  wire [0:0]D;
  wire [3:0]Q;
  wire SYNC_reg;
  wire U_CMD_n_5;
  wire iDATA_CMD;
  wire iDATA_CMD_i_1_n_0;
  wire iDATA_CMD_reg_0;
  wire iSYNC;
  wire \iTARGET_reg[6] ;
  wire \iTARGET_reg[9] ;
  wire \iTARGET_reg[9]_0 ;
  wire \iTARGET_reg[9]_1 ;
  wire \iTARGET_reg[9]_2 ;
  wire iTDO_VEC_15;
  wire iTDO_next;
  wire iTDO_reg_0;
  wire \icn_cmd_en_reg[7] ;
  wire in0;
  wire [0:0]m_bscan_tck;
  wire out;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_cmd_decode U_CMD
       (.D(D),
        .Q(Q),
        .SR(U_CMD_n_5),
        .SYNC_reg(SYNC_reg),
        .iDATA_CMD(iDATA_CMD),
        .\iTARGET_reg[6]_0 (\iTARGET_reg[6] ),
        .\iTARGET_reg[9]_0 (\iTARGET_reg[9] ),
        .\iTARGET_reg[9]_1 (\iTARGET_reg[9]_0 ),
        .\iTARGET_reg[9]_2 (\iTARGET_reg[9]_1 ),
        .\iTARGET_reg[9]_3 (\iTARGET_reg[9]_2 ),
        .iTDO_next(iTDO_next),
        .iTDO_reg(iTDO_reg_0),
        .\icn_cmd_en_reg[7] (\icn_cmd_en_reg[7] ),
        .\icn_cmd_en_reg[7]_0 (iSYNC),
        .m_bscan_tck(m_bscan_tck));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat U_STAT
       (.SR(U_CMD_n_5),
        .iTDO_VEC_15(iTDO_VEC_15),
        .m_bscan_tck(m_bscan_tck));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_sync U_SYNC
       (.D(D),
        .iDATA_CMD(iDATA_CMD),
        .iSYNC(iSYNC),
        .m_bscan_tck(m_bscan_tck));
  LUT3 #(
    .INIT(8'h60)) 
    iDATA_CMD_i_1
       (.I0(iDATA_CMD),
        .I1(iDATA_CMD_reg_0),
        .I2(\iTARGET_reg[6] ),
        .O(iDATA_CMD_i_1_n_0));
  FDRE iDATA_CMD_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iDATA_CMD_i_1_n_0),
        .Q(iDATA_CMD),
        .R(1'b0));
  FDRE iTDI_reg_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(out),
        .Q(D),
        .R(1'b0));
  FDRE iTDO_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iTDO_next),
        .Q(in0),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_icon2xsdb
   (D,
    \iTARGET_reg[14] ,
    sl_iport0_o,
    sl_iport1_o,
    m_bscan_tck,
    icn_cmd_din_reg,
    clk,
    Q,
    iTDO_VEC_15,
    sl_oport0_i,
    sl_oport1_i,
    \icn_cmd_en_reg[7] ,
    \icn_cmd_en_reg[7]_0 ,
    \icn_cmd_en_reg[6] ,
    \icn_cmd_en_reg[5] ,
    \icn_cmd_en_reg[4] ,
    iSYNC,
    out,
    \stat_reg_reg[2] );
  output [0:0]D;
  output \iTARGET_reg[14] ;
  output [35:0]sl_iport0_o;
  output [2:0]sl_iport1_o;
  input [0:0]m_bscan_tck;
  input [0:0]icn_cmd_din_reg;
  input clk;
  input [3:0]Q;
  input iTDO_VEC_15;
  input [16:0]sl_oport0_i;
  input [16:0]sl_oport1_i;
  input \icn_cmd_en_reg[7] ;
  input \icn_cmd_en_reg[7]_0 ;
  input \icn_cmd_en_reg[6] ;
  input \icn_cmd_en_reg[5] ;
  input \icn_cmd_en_reg[4] ;
  input iSYNC;
  input out;
  input [2:0]\stat_reg_reg[2] ;

  wire [0:0]D;
  wire [3:0]Q;
  wire U_ICON_INTERFACE_n_46;
  wire U_ICON_INTERFACE_n_47;
  wire U_ICON_INTERFACE_n_49;
  wire U_ICON_INTERFACE_n_50;
  wire U_XSDB_BURST_WD_LEN_CONTROLLER_n_3;
  wire U_XSDB_BUS_CONTROLLER_n_10;
  wire U_XSDB_BUS_CONTROLLER_n_11;
  wire U_XSDB_BUS_CONTROLLER_n_13;
  wire U_XSDB_BUS_CONTROLLER_n_14;
  wire U_XSDB_BUS_CONTROLLER_n_8;
  wire U_XSDB_BUS_CONTROLLER_n_9;
  wire abort_rd_edge;
  wire [16:0]addr_in;
  wire addr_in_rdy;
  wire addr_in_rdy_last;
  wire addr_in_rdy_rise_edge;
  wire addr_in_rdy_rise_edge0;
  wire addr_inc_en;
  wire burst_en;
  wire burst_wd_in_rdy_last;
  wire burst_wd_in_rdy_rise_edge;
  wire burst_wd_in_rdy_rise_edge0;
  wire [16:0]burst_wd_len_in;
  wire burst_wd_len_in_rdy;
  wire clk;
  wire [17:17]cmd5_reg_dout;
  wire dec_wdc;
  wire iSYNC;
  wire \iTARGET_reg[14] ;
  wire iTDO_VEC_15;
  wire [0:0]icn_cmd_din_reg;
  wire \icn_cmd_en_reg[4] ;
  wire \icn_cmd_en_reg[5] ;
  wire \icn_cmd_en_reg[6] ;
  wire \icn_cmd_en_reg[7] ;
  wire \icn_cmd_en_reg[7]_0 ;
  wire in_write_mode;
  wire [0:0]m_bscan_tck;
  wire ma_idle_mode;
  wire ma_normal_mode;
  wire [15:0]ma_rd_din;
  wire ma_rd_full;
  wire ma_rd_push;
  wire ma_rd_req;
  wire ma_read_mode;
  wire ma_rst;
  wire ma_wr_empty;
  wire ma_wr_pop;
  wire out;
  wire sl_drdy;
  wire [35:0]sl_iport0_o;
  wire [2:0]sl_iport1_o;
  wire [16:0]sl_oport0_i;
  wire [16:0]sl_oport1_i;
  wire sl_rdmux_sel_r;
  wire [1:0]sl_rst_mask;
  wire [0:0]sl_sel;
  wire [2:0]\stat_reg_reg[2] ;
  wire wdc_eq_zero;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_if U_ICON_INTERFACE
       (.D(D),
        .EMPTY_O(ma_wr_empty),
        .FULL_O(ma_rd_full),
        .Q(Q),
        .RD_EN_I(ma_wr_pop),
        .WR_EN_I(ma_rd_push),
        .abort_rd_edge(abort_rd_edge),
        .addr_in_rdy_last(addr_in_rdy_last),
        .addr_in_rdy_rise_edge0(addr_in_rdy_rise_edge0),
        .burst_wd_in_rdy_last(burst_wd_in_rdy_last),
        .burst_wd_in_rdy_rise_edge(burst_wd_in_rdy_rise_edge),
        .burst_wd_in_rdy_rise_edge0(burst_wd_in_rdy_rise_edge0),
        .clk(clk),
        .\ctl_reg_en_2_reg[1] (burst_wd_len_in_rdy),
        .\ctl_reg_en_2_reg[1]_0 (addr_in_rdy),
        .\ctl_reg_reg[0] (U_ICON_INTERFACE_n_46),
        .\ctl_reg_reg[17] ({cmd5_reg_dout,addr_in}),
        .\ctl_reg_reg[20] ({sl_sel,addr_inc_en,burst_en,burst_wd_len_in}),
        .\ctl_reg_reg[21] (U_ICON_INTERFACE_n_49),
        .\ctl_reg_reg[21]_0 (U_ICON_INTERFACE_n_50),
        .\gpr1.dout_i_reg[13] (ma_rd_din),
        .iSYNC(iSYNC),
        .\iTARGET_reg[14] (\iTARGET_reg[14] ),
        .iTDO_VEC_15(iTDO_VEC_15),
        .icn_cmd_din_reg_0(icn_cmd_din_reg),
        .\icn_cmd_en_reg[0]_0 (out),
        .\icn_cmd_en_reg[4]_0 (\icn_cmd_en_reg[4] ),
        .\icn_cmd_en_reg[5]_0 (\icn_cmd_en_reg[5] ),
        .\icn_cmd_en_reg[6]_0 (\icn_cmd_en_reg[6] ),
        .\icn_cmd_en_reg[7]_0 (\icn_cmd_en_reg[7] ),
        .\icn_cmd_en_reg[7]_1 (\icn_cmd_en_reg[7]_0 ),
        .m_bscan_tck(m_bscan_tck),
        .ma_rd_req(ma_rd_req),
        .out({sl_rst_mask,ma_rst}),
        .ram_full_i_reg(U_ICON_INTERFACE_n_47),
        .sl_iport0_o(sl_iport0_o[35:20]),
        .\stat_reg_reg[2] (\stat_reg_reg[2] ),
        .\stat_reg_reg[3] ({in_write_mode,ma_read_mode,ma_idle_mode,ma_normal_mode}),
        .\stat_reg_reg[3]_0 ({U_XSDB_BUS_CONTROLLER_n_8,U_XSDB_BUS_CONTROLLER_n_9,U_XSDB_BUS_CONTROLLER_n_10,U_XSDB_BUS_CONTROLLER_n_11}),
        .wdc_eq_zero_reg(U_XSDB_BURST_WD_LEN_CONTROLLER_n_3));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_addr_ctl U_XSDB_ADDRESS_CONTROLLER
       (.addr_in_rdy_last(addr_in_rdy_last),
        .addr_in_rdy_last_reg_0(addr_in_rdy),
        .addr_in_rdy_rise_edge(addr_in_rdy_rise_edge),
        .addr_in_rdy_rise_edge0(addr_in_rdy_rise_edge0),
        .\addr_reg[16]_0 (U_XSDB_BUS_CONTROLLER_n_13),
        .\addr_reg[16]_1 (addr_in),
        .clk(clk),
        .out(ma_rst),
        .sl_iport0_o(sl_iport0_o[19:3]));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_burst_wdlen_ctl U_XSDB_BURST_WD_LEN_CONTROLLER
       (.burst_wd_in_rdy_last(burst_wd_in_rdy_last),
        .burst_wd_in_rdy_last_reg_0(burst_wd_len_in_rdy),
        .burst_wd_in_rdy_rise_edge(burst_wd_in_rdy_rise_edge),
        .burst_wd_in_rdy_rise_edge0(burst_wd_in_rdy_rise_edge0),
        .\burst_wd_reg[0]_0 (U_XSDB_BUS_CONTROLLER_n_14),
        .clk(clk),
        .dec_wdc(dec_wdc),
        .dec_wdc_r_reg(U_XSDB_BURST_WD_LEN_CONTROLLER_n_3),
        .out(ma_rst),
        .wdc_eq_zero(wdc_eq_zero),
        .wdc_eq_zero_reg_0(U_ICON_INTERFACE_n_46),
        .wdc_eq_zero_reg_1({burst_en,burst_wd_len_in}));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_ctl U_XSDB_BUS_CONTROLLER
       (.EMPTY_O(ma_wr_empty),
        .FULL_O(ma_rd_full),
        .\G_NEG_EDGE.flag_reg (cmd5_reg_dout),
        .\G_NEG_EDGE.flag_reg_0 (addr_in_rdy),
        .RD_EN_I(ma_wr_pop),
        .WR_EN_I(ma_rd_push),
        .abort_rd_edge(abort_rd_edge),
        .\active_sl_den_mask_reg[0]_0 (U_ICON_INTERFACE_n_49),
        .\active_sl_den_mask_reg[1]_0 (U_ICON_INTERFACE_n_50),
        .addr_in_rdy_rise_edge(addr_in_rdy_rise_edge),
        .burst_wd_in_rdy_rise_edge(burst_wd_in_rdy_rise_edge),
        .clk(clk),
        .\current_state_reg[1]_0 (U_ICON_INTERFACE_n_47),
        .dec_wdc(dec_wdc),
        .dec_wdc_r_reg_0(U_XSDB_BUS_CONTROLLER_n_14),
        .in_write_mode_reg_0({in_write_mode,ma_read_mode,ma_idle_mode,ma_normal_mode}),
        .inc_addr_r_reg_0(U_XSDB_BUS_CONTROLLER_n_13),
        .ma_rd_req(ma_rd_req),
        .out({sl_rst_mask,ma_rst}),
        .\sl_berr_r_reg[1]_0 ({U_XSDB_BUS_CONTROLLER_n_8,U_XSDB_BUS_CONTROLLER_n_9,U_XSDB_BUS_CONTROLLER_n_10,U_XSDB_BUS_CONTROLLER_n_11}),
        .sl_drdy(sl_drdy),
        .sl_iport0_o(sl_iport0_o[2:0]),
        .sl_iport1_o(sl_iport1_o),
        .sl_rdmux_sel_r(sl_rdmux_sel_r),
        .\sl_rdmux_sel_r_reg[0]_0 ({sl_sel,addr_inc_en,burst_en}),
        .wdc_eq_zero(wdc_eq_zero));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bus_mstr2sl_if U_XSDB_BUS_MSTR2SL_PORT_IFACE
       (.Q(ma_rd_din),
        .clk(clk),
        .sl_drdy(sl_drdy),
        .sl_oport0_i(sl_oport0_i),
        .sl_oport1_i(sl_oport1_i),
        .sl_rdmux_sel_r(sl_rdmux_sel_r));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_if
   (out,
    \ctl_reg_en_2_reg[1] ,
    \ctl_reg_reg[20] ,
    \ctl_reg_en_2_reg[1]_0 ,
    \ctl_reg_reg[17] ,
    D,
    \iTARGET_reg[14] ,
    burst_wd_in_rdy_rise_edge0,
    \ctl_reg_reg[0] ,
    ram_full_i_reg,
    FULL_O,
    \ctl_reg_reg[21] ,
    \ctl_reg_reg[21]_0 ,
    sl_iport0_o,
    EMPTY_O,
    ma_rd_req,
    addr_in_rdy_rise_edge0,
    m_bscan_tck,
    icn_cmd_din_reg_0,
    clk,
    Q,
    iTDO_VEC_15,
    burst_wd_in_rdy_last,
    wdc_eq_zero_reg,
    burst_wd_in_rdy_rise_edge,
    abort_rd_edge,
    RD_EN_I,
    \gpr1.dout_i_reg[13] ,
    WR_EN_I,
    \icn_cmd_en_reg[7]_0 ,
    \icn_cmd_en_reg[7]_1 ,
    \icn_cmd_en_reg[6]_0 ,
    \icn_cmd_en_reg[5]_0 ,
    \icn_cmd_en_reg[4]_0 ,
    iSYNC,
    \icn_cmd_en_reg[0]_0 ,
    \stat_reg_reg[3] ,
    \stat_reg_reg[3]_0 ,
    \stat_reg_reg[2] ,
    addr_in_rdy_last);
  output [2:0]out;
  output [0:0]\ctl_reg_en_2_reg[1] ;
  output [19:0]\ctl_reg_reg[20] ;
  output [0:0]\ctl_reg_en_2_reg[1]_0 ;
  output [17:0]\ctl_reg_reg[17] ;
  output [0:0]D;
  output \iTARGET_reg[14] ;
  output burst_wd_in_rdy_rise_edge0;
  output \ctl_reg_reg[0] ;
  output ram_full_i_reg;
  output FULL_O;
  output \ctl_reg_reg[21] ;
  output \ctl_reg_reg[21]_0 ;
  output [15:0]sl_iport0_o;
  output EMPTY_O;
  output ma_rd_req;
  output addr_in_rdy_rise_edge0;
  input [0:0]m_bscan_tck;
  input [0:0]icn_cmd_din_reg_0;
  input clk;
  input [3:0]Q;
  input iTDO_VEC_15;
  input burst_wd_in_rdy_last;
  input wdc_eq_zero_reg;
  input burst_wd_in_rdy_rise_edge;
  input abort_rd_edge;
  input RD_EN_I;
  input [15:0]\gpr1.dout_i_reg[13] ;
  input WR_EN_I;
  input \icn_cmd_en_reg[7]_0 ;
  input \icn_cmd_en_reg[7]_1 ;
  input \icn_cmd_en_reg[6]_0 ;
  input \icn_cmd_en_reg[5]_0 ;
  input \icn_cmd_en_reg[4]_0 ;
  input iSYNC;
  input \icn_cmd_en_reg[0]_0 ;
  input [3:0]\stat_reg_reg[3] ;
  input [3:0]\stat_reg_reg[3]_0 ;
  input [2:0]\stat_reg_reg[2] ;
  input addr_in_rdy_last;

  wire [0:0]D;
  wire EMPTY_O;
  wire FULL_O;
  wire ICN_CMD_EN_I;
  wire [3:0]Q;
  wire RD_EN_I;
  wire U_CMD2_n_0;
  wire U_CMD3_n_0;
  wire U_CMD4_n_21;
  wire U_CMD5_n_21;
  wire U_CMD5_n_22;
  wire U_CMD5_n_24;
  wire U_CMD6_RD_n_0;
  wire U_CMD7_STAT_n_0;
  wire WR_EN_I;
  wire abort_rd_edge;
  wire addr_in_rdy_last;
  wire addr_in_rdy_rise_edge0;
  wire burst_wd_in_rdy_last;
  wire burst_wd_in_rdy_rise_edge;
  wire burst_wd_in_rdy_rise_edge0;
  wire clk;
  wire [17:17]cmd5_shreg;
  wire [0:0]\ctl_reg_en_2_reg[1] ;
  wire [0:0]\ctl_reg_en_2_reg[1]_0 ;
  wire \ctl_reg_reg[0] ;
  wire [17:0]\ctl_reg_reg[17] ;
  wire [19:0]\ctl_reg_reg[20] ;
  wire \ctl_reg_reg[21] ;
  wire \ctl_reg_reg[21]_0 ;
  wire datawr_cmd_en;
  wire [15:0]\gpr1.dout_i_reg[13] ;
  wire iSYNC;
  wire \iTARGET_reg[14] ;
  wire iTDO_VEC_15;
  wire icn_cmd_din;
  wire [0:0]icn_cmd_din_reg_0;
  wire icn_cmd_dout_bus_1;
  wire icn_cmd_dout_bus_5;
  wire icn_cmd_dout_dwr;
  wire icn_cmd_dout_next__0_n_0;
  wire icn_cmd_dout_next__1_n_0;
  wire icn_cmd_dout_next__2_n_0;
  wire icn_cmd_dout_next__3_n_0;
  wire icn_cmd_dout_next_n_0;
  wire \icn_cmd_en[3]_i_1_n_0 ;
  (* async_reg = "true" *) wire icn_cmd_en_5;
  (* async_reg = "true" *) wire icn_cmd_en_5_temp;
  wire \icn_cmd_en_reg[0]_0 ;
  wire \icn_cmd_en_reg[4]_0 ;
  wire \icn_cmd_en_reg[5]_0 ;
  wire \icn_cmd_en_reg[6]_0 ;
  wire \icn_cmd_en_reg[7]_0 ;
  wire \icn_cmd_en_reg[7]_1 ;
  wire \icn_cmd_en_reg_n_0_[0] ;
  wire \icn_cmd_en_reg_n_0_[2] ;
  wire \icn_cmd_en_reg_n_0_[3] ;
  wire \icn_cmd_en_reg_n_0_[4] ;
  wire \icn_cmd_en_reg_n_0_[7] ;
  wire [0:0]m_bscan_tck;
  wire ma_rd_req;
  wire ma_rst;
  (* async_reg = "true" *) wire ma_rst_1;
  (* async_reg = "true" *) wire ma_rst_2;
  wire [2:1]\^out ;
  wire p_0_in;
  wire p_1_in1_in;
  wire ram_full_i_reg;
  (* DONT_TOUCH *) wire rddata_rst;
  wire rddata_rst_i;
  wire [15:0]sl_iport0_o;
  wire [2:0]\stat_reg_reg[2] ;
  wire [3:0]\stat_reg_reg[3] ;
  wire [3:0]\stat_reg_reg[3]_0 ;
  wire wdc_eq_zero_reg;
  (* DONT_TOUCH *) wire wrdata_rst;
  wire wrdata_rst_i;

  assign out[2:1] = \^out [2:1];
  assign out[0] = ma_rst;
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg U_CMD1
       (.D(icn_cmd_din),
        .ICN_CMD_EN_I(ICN_CMD_EN_I),
        .clk(clk),
        .\ctl_reg_reg[2]_0 ({\^out ,ma_rst}),
        .m_bscan_tck(m_bscan_tck),
        .out(icn_cmd_dout_bus_1));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat_reg U_CMD2
       (.D(icn_cmd_din),
        .clk(clk),
        .\icn_cmd_en_reg[2] (U_CMD2_n_0),
        .icn_cmd_en_temp_reg_0(\icn_cmd_en_reg_n_0_[2] ),
        .m_bscan_tck(m_bscan_tck),
        .\stat_reg_reg[3]_0 (\stat_reg_reg[3] ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat_reg_0 U_CMD3
       (.D(icn_cmd_din),
        .clk(clk),
        .\icn_cmd_en_reg[3] (U_CMD3_n_0),
        .icn_cmd_en_temp_reg_0(\icn_cmd_en_reg_n_0_[3] ),
        .m_bscan_tck(m_bscan_tck),
        .\stat_reg_reg[3]_0 (\stat_reg_reg[3]_0 ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg__parameterized0 U_CMD4
       (.D(icn_cmd_din),
        .ICN_CMD_EN_I(ICN_CMD_EN_I),
        .SR(ma_rst),
        .burst_wd_in_rdy_last(burst_wd_in_rdy_last),
        .burst_wd_in_rdy_rise_edge(burst_wd_in_rdy_rise_edge),
        .burst_wd_in_rdy_rise_edge0(burst_wd_in_rdy_rise_edge0),
        .clk(clk),
        .\ctl_reg_en_2_reg[1]_0 (\ctl_reg_en_2_reg[1] ),
        .\ctl_reg_reg[0]_0 (\ctl_reg_reg[0] ),
        .\ctl_reg_reg[20]_0 (\ctl_reg_reg[20] ),
        .\ctl_reg_reg[21]_0 (\ctl_reg_reg[21] ),
        .\ctl_reg_reg[21]_1 (\ctl_reg_reg[21]_0 ),
        .iTDO_i_4(icn_cmd_dout_bus_5),
        .\icn_cmd_en_reg[4] (U_CMD4_n_21),
        .icn_cmd_en_temp_reg_0(\icn_cmd_en_reg_n_0_[4] ),
        .m_bscan_tck(m_bscan_tck),
        .out(icn_cmd_dout_bus_1),
        .p_1_in1_in(p_1_in1_in),
        .wdc_eq_zero_reg(wdc_eq_zero_reg),
        .wdc_eq_zero_reg_0(ma_rst));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg__parameterized1 U_CMD5
       (.D(icn_cmd_din),
        .E(U_CMD5_n_21),
        .SR(U_CMD5_n_22),
        .addr_in_rdy_last(addr_in_rdy_last),
        .addr_in_rdy_rise_edge0(addr_in_rdy_rise_edge0),
        .clk(clk),
        .\ctl_reg_en_2_reg[1]_0 (\ctl_reg_en_2_reg[1]_0 ),
        .\ctl_reg_reg[0]_0 (ma_rst),
        .\ctl_reg_reg[17]_0 (\ctl_reg_reg[17] ),
        .\icn_cmd_en_reg[6] (datawr_cmd_en),
        .m_bscan_tck(m_bscan_tck),
        .ma_rd_req(ma_rd_req),
        .out({cmd5_shreg,icn_cmd_dout_bus_5}),
        .p_0_in(p_0_in),
        .p_1_in1_in(p_1_in1_in),
        .\shift_reg_in_reg[17]_0 (U_CMD5_n_24));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_rdreg U_CMD6_RD
       (.D(icn_cmd_din),
        .E(U_CMD5_n_21),
        .FULL_O(FULL_O),
        .Q(icn_cmd_dout_dwr),
        .RST_I(rddata_rst),
        .SR(U_CMD5_n_22),
        .WR_EN_I(WR_EN_I),
        .abort_rd_edge(abort_rd_edge),
        .clk(clk),
        .\gpr1.dout_i_reg[13] (\gpr1.dout_i_reg[13] ),
        .iTDO_i_2(U_CMD7_STAT_n_0),
        .iTDO_i_2_0(U_CMD4_n_21),
        .m_bscan_tck(m_bscan_tck),
        .out(cmd5_shreg),
        .p_0_in(p_0_in),
        .ram_full_i_reg(ram_full_i_reg),
        .\shift_reg_in_reg[17] (U_CMD6_RD_n_0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_wrreg U_CMD6_WR
       (.D(icn_cmd_din),
        .E(datawr_cmd_en),
        .EMPTY_O(EMPTY_O),
        .Q(icn_cmd_dout_dwr),
        .RD_EN_I(RD_EN_I),
        .RST_I(wrdata_rst),
        .SR(U_CMD5_n_24),
        .clk(clk),
        .m_bscan_tck(m_bscan_tck),
        .out(cmd5_shreg),
        .p_0_in(p_0_in),
        .sl_iport0_o(sl_iport0_o));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_ctl_reg_1 U_CMD7_CTL
       (.D(D),
        .clk(clk),
        .icn_cmd_din_temp_reg_0(icn_cmd_din),
        .icn_cmd_en_temp_reg_0(\icn_cmd_en_reg_n_0_[7] ),
        .m_bscan_tck(m_bscan_tck),
        .out(ma_rst));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat_reg__parameterized0 U_CMD7_STAT
       (.clk(clk),
        .iTDO_i_4(U_CMD2_n_0),
        .iTDO_i_4_0(U_CMD3_n_0),
        .icn_cmd_din_temp_reg_0(icn_cmd_din),
        .icn_cmd_en_temp_reg_0(\icn_cmd_en_reg_n_0_[7] ),
        .m_bscan_tck(m_bscan_tck),
        .\shift_reg_in_reg[0]_0 (U_CMD7_STAT_n_0),
        .\stat_reg_reg[2]_0 (\stat_reg_reg[2] ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_if_static_status U_STATIC_STATUS
       (.Q(Q[3:2]),
        .\iTARGET_reg[14] (\iTARGET_reg[14] ),
        .iTDO_VEC_15(iTDO_VEC_15),
        .iTDO_reg(icn_cmd_dout_next__3_n_0),
        .iTDO_reg_0(U_CMD6_RD_n_0),
        .m_bscan_tck(m_bscan_tck),
        .\stat_addr_bit_cnt_reg[0]_0 (\icn_cmd_en_reg_n_0_[0] ));
  FDRE icn_cmd_din_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_din_reg_0),
        .Q(icn_cmd_din),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT4 #(
    .INIT(16'h0116)) 
    icn_cmd_dout_next
       (.I0(\icn_cmd_en_reg_n_0_[0] ),
        .I1(ICN_CMD_EN_I),
        .I2(\icn_cmd_en_reg_n_0_[2] ),
        .I3(\icn_cmd_en_reg_n_0_[3] ),
        .O(icn_cmd_dout_next_n_0));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT4 #(
    .INIT(16'hFEE8)) 
    icn_cmd_dout_next__0
       (.I0(\icn_cmd_en_reg_n_0_[0] ),
        .I1(ICN_CMD_EN_I),
        .I2(\icn_cmd_en_reg_n_0_[2] ),
        .I3(\icn_cmd_en_reg_n_0_[3] ),
        .O(icn_cmd_dout_next__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT4 #(
    .INIT(16'h0116)) 
    icn_cmd_dout_next__1
       (.I0(\icn_cmd_en_reg_n_0_[4] ),
        .I1(p_1_in1_in),
        .I2(p_0_in),
        .I3(\icn_cmd_en_reg_n_0_[7] ),
        .O(icn_cmd_dout_next__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT4 #(
    .INIT(16'hFEE8)) 
    icn_cmd_dout_next__2
       (.I0(\icn_cmd_en_reg_n_0_[4] ),
        .I1(p_1_in1_in),
        .I2(p_0_in),
        .I3(\icn_cmd_en_reg_n_0_[7] ),
        .O(icn_cmd_dout_next__2_n_0));
  LUT4 #(
    .INIT(16'h0012)) 
    icn_cmd_dout_next__3
       (.I0(icn_cmd_dout_next_n_0),
        .I1(icn_cmd_dout_next__0_n_0),
        .I2(icn_cmd_dout_next__1_n_0),
        .I3(icn_cmd_dout_next__2_n_0),
        .O(icn_cmd_dout_next__3_n_0));
  LUT4 #(
    .INIT(16'hFFBF)) 
    \icn_cmd_en[3]_i_1 
       (.I0(Q[1]),
        .I1(iSYNC),
        .I2(\icn_cmd_en_reg[0]_0 ),
        .I3(Q[0]),
        .O(\icn_cmd_en[3]_i_1_n_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_en_5_reg
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_5_temp),
        .Q(icn_cmd_en_5),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE icn_cmd_en_5_temp_reg
       (.C(clk),
        .CE(1'b1),
        .D(p_1_in1_in),
        .Q(icn_cmd_en_5_temp),
        .R(1'b0));
  FDRE \icn_cmd_en_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[4]_0 ),
        .Q(\icn_cmd_en_reg_n_0_[0] ),
        .R(\icn_cmd_en[3]_i_1_n_0 ));
  FDRE \icn_cmd_en_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[5]_0 ),
        .Q(ICN_CMD_EN_I),
        .R(\icn_cmd_en[3]_i_1_n_0 ));
  FDRE \icn_cmd_en_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[6]_0 ),
        .Q(\icn_cmd_en_reg_n_0_[2] ),
        .R(\icn_cmd_en[3]_i_1_n_0 ));
  FDRE \icn_cmd_en_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[7]_1 ),
        .Q(\icn_cmd_en_reg_n_0_[3] ),
        .R(\icn_cmd_en[3]_i_1_n_0 ));
  FDRE \icn_cmd_en_reg[4] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[4]_0 ),
        .Q(\icn_cmd_en_reg_n_0_[4] ),
        .R(\icn_cmd_en_reg[7]_0 ));
  FDRE \icn_cmd_en_reg[5] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[5]_0 ),
        .Q(p_1_in1_in),
        .R(\icn_cmd_en_reg[7]_0 ));
  FDRE \icn_cmd_en_reg[6] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[6]_0 ),
        .Q(p_0_in),
        .R(\icn_cmd_en_reg[7]_0 ));
  FDRE \icn_cmd_en_reg[7] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\icn_cmd_en_reg[7]_1 ),
        .Q(\icn_cmd_en_reg_n_0_[7] ),
        .R(\icn_cmd_en_reg[7]_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE ma_rst_1_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(ma_rst),
        .Q(ma_rst_1),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE ma_rst_2_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(ma_rst_1),
        .Q(ma_rst_2),
        .R(1'b0));
  LUT2 #(
    .INIT(4'hE)) 
    rddata_rst_i_1
       (.I0(icn_cmd_en_5),
        .I1(ma_rst),
        .O(rddata_rst_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE rddata_rst_reg
       (.C(clk),
        .CE(1'b1),
        .D(rddata_rst_i),
        .Q(rddata_rst),
        .R(1'b0));
  LUT2 #(
    .INIT(4'hE)) 
    wrdata_rst_i_1
       (.I0(ma_rst_2),
        .I1(p_1_in1_in),
        .O(wrdata_rst_i));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE wrdata_rst_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(wrdata_rst_i),
        .Q(wrdata_rst),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_if_static_status
   (\iTARGET_reg[14] ,
    iTDO_reg,
    iTDO_reg_0,
    Q,
    iTDO_VEC_15,
    \stat_addr_bit_cnt_reg[0]_0 ,
    m_bscan_tck);
  output \iTARGET_reg[14] ;
  input iTDO_reg;
  input iTDO_reg_0;
  input [1:0]Q;
  input iTDO_VEC_15;
  input \stat_addr_bit_cnt_reg[0]_0 ;
  input [0:0]m_bscan_tck;

  wire [1:0]Q;
  wire clear;
  wire \iTARGET_reg[14] ;
  wire iTDO_VEC_15;
  wire iTDO_i_3_n_0;
  wire iTDO_i_5_n_0;
  wire iTDO_i_6_n_0;
  wire iTDO_i_7_n_0;
  wire iTDO_reg;
  wire iTDO_reg_0;
  wire [0:0]m_bscan_tck;
  wire [6:1]p_0_in__0;
  wire \stat_addr_bit_cnt[0]_i_1_n_0 ;
  wire \stat_addr_bit_cnt[6]_i_3_n_0 ;
  wire [6:0]stat_addr_bit_cnt_reg;
  wire \stat_addr_bit_cnt_reg[0]_0 ;

  LUT6 #(
    .INIT(64'h00FFFFFFFF5DFF5D)) 
    iTDO_i_2
       (.I0(iTDO_reg),
        .I1(iTDO_i_3_n_0),
        .I2(iTDO_reg_0),
        .I3(Q[0]),
        .I4(iTDO_VEC_15),
        .I5(Q[1]),
        .O(\iTARGET_reg[14] ));
  LUT5 #(
    .INIT(32'hFFFF10FF)) 
    iTDO_i_3
       (.I0(stat_addr_bit_cnt_reg[6]),
        .I1(iTDO_i_5_n_0),
        .I2(iTDO_i_6_n_0),
        .I3(\stat_addr_bit_cnt_reg[0]_0 ),
        .I4(iTDO_i_7_n_0),
        .O(iTDO_i_3_n_0));
  LUT6 #(
    .INIT(64'h5400000001015401)) 
    iTDO_i_5
       (.I0(stat_addr_bit_cnt_reg[5]),
        .I1(stat_addr_bit_cnt_reg[1]),
        .I2(stat_addr_bit_cnt_reg[0]),
        .I3(stat_addr_bit_cnt_reg[4]),
        .I4(stat_addr_bit_cnt_reg[3]),
        .I5(stat_addr_bit_cnt_reg[2]),
        .O(iTDO_i_5_n_0));
  LUT6 #(
    .INIT(64'hF7FFFFF7F77DFFFF)) 
    iTDO_i_6
       (.I0(stat_addr_bit_cnt_reg[5]),
        .I1(stat_addr_bit_cnt_reg[4]),
        .I2(stat_addr_bit_cnt_reg[1]),
        .I3(stat_addr_bit_cnt_reg[0]),
        .I4(stat_addr_bit_cnt_reg[3]),
        .I5(stat_addr_bit_cnt_reg[2]),
        .O(iTDO_i_6_n_0));
  LUT6 #(
    .INIT(64'hAAAAAAAAA8AAAAAA)) 
    iTDO_i_7
       (.I0(stat_addr_bit_cnt_reg[6]),
        .I1(stat_addr_bit_cnt_reg[5]),
        .I2(stat_addr_bit_cnt_reg[4]),
        .I3(stat_addr_bit_cnt_reg[0]),
        .I4(stat_addr_bit_cnt_reg[2]),
        .I5(stat_addr_bit_cnt_reg[3]),
        .O(iTDO_i_7_n_0));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \stat_addr_bit_cnt[0]_i_1 
       (.I0(stat_addr_bit_cnt_reg[0]),
        .O(\stat_addr_bit_cnt[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \stat_addr_bit_cnt[1]_i_1 
       (.I0(stat_addr_bit_cnt_reg[0]),
        .I1(stat_addr_bit_cnt_reg[1]),
        .O(p_0_in__0[1]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \stat_addr_bit_cnt[2]_i_1 
       (.I0(stat_addr_bit_cnt_reg[2]),
        .I1(stat_addr_bit_cnt_reg[0]),
        .I2(stat_addr_bit_cnt_reg[1]),
        .O(p_0_in__0[2]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \stat_addr_bit_cnt[3]_i_1 
       (.I0(stat_addr_bit_cnt_reg[3]),
        .I1(stat_addr_bit_cnt_reg[1]),
        .I2(stat_addr_bit_cnt_reg[0]),
        .I3(stat_addr_bit_cnt_reg[2]),
        .O(p_0_in__0[3]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \stat_addr_bit_cnt[4]_i_1 
       (.I0(stat_addr_bit_cnt_reg[4]),
        .I1(stat_addr_bit_cnt_reg[3]),
        .I2(stat_addr_bit_cnt_reg[2]),
        .I3(stat_addr_bit_cnt_reg[0]),
        .I4(stat_addr_bit_cnt_reg[1]),
        .O(p_0_in__0[4]));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \stat_addr_bit_cnt[5]_i_1 
       (.I0(stat_addr_bit_cnt_reg[5]),
        .I1(stat_addr_bit_cnt_reg[4]),
        .I2(stat_addr_bit_cnt_reg[1]),
        .I3(stat_addr_bit_cnt_reg[0]),
        .I4(stat_addr_bit_cnt_reg[2]),
        .I5(stat_addr_bit_cnt_reg[3]),
        .O(p_0_in__0[5]));
  LUT1 #(
    .INIT(2'h1)) 
    \stat_addr_bit_cnt[6]_i_1 
       (.I0(\stat_addr_bit_cnt_reg[0]_0 ),
        .O(clear));
  LUT3 #(
    .INIT(8'h6A)) 
    \stat_addr_bit_cnt[6]_i_2 
       (.I0(stat_addr_bit_cnt_reg[6]),
        .I1(stat_addr_bit_cnt_reg[5]),
        .I2(\stat_addr_bit_cnt[6]_i_3_n_0 ),
        .O(p_0_in__0[6]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT5 #(
    .INIT(32'h80000000)) 
    \stat_addr_bit_cnt[6]_i_3 
       (.I0(stat_addr_bit_cnt_reg[3]),
        .I1(stat_addr_bit_cnt_reg[2]),
        .I2(stat_addr_bit_cnt_reg[0]),
        .I3(stat_addr_bit_cnt_reg[1]),
        .I4(stat_addr_bit_cnt_reg[4]),
        .O(\stat_addr_bit_cnt[6]_i_3_n_0 ));
  FDRE \stat_addr_bit_cnt_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\stat_addr_bit_cnt[0]_i_1_n_0 ),
        .Q(stat_addr_bit_cnt_reg[0]),
        .R(clear));
  FDRE \stat_addr_bit_cnt_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__0[1]),
        .Q(stat_addr_bit_cnt_reg[1]),
        .R(clear));
  FDRE \stat_addr_bit_cnt_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__0[2]),
        .Q(stat_addr_bit_cnt_reg[2]),
        .R(clear));
  FDRE \stat_addr_bit_cnt_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__0[3]),
        .Q(stat_addr_bit_cnt_reg[3]),
        .R(clear));
  FDRE \stat_addr_bit_cnt_reg[4] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__0[4]),
        .Q(stat_addr_bit_cnt_reg[4]),
        .R(clear));
  FDRE \stat_addr_bit_cnt_reg[5] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__0[5]),
        .Q(stat_addr_bit_cnt_reg[5]),
        .R(clear));
  FDRE \stat_addr_bit_cnt_reg[6] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__0[6]),
        .Q(stat_addr_bit_cnt_reg[6]),
        .R(clear));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_rdfifo
   (\shift_reg_in_reg[17] ,
    D,
    ram_full_i_reg,
    FULL_O,
    p_0_in,
    out,
    iTDO_i_2,
    Q,
    iTDO_i_2_0,
    \shift_reg_in_reg[14] ,
    \shift_reg_in_reg[14]_0 ,
    abort_rd_edge,
    RST_I,
    \gpr1.dout_i_reg[13] ,
    WR_EN_I,
    clk,
    m_bscan_tck);
  output \shift_reg_in_reg[17] ;
  output [14:0]D;
  output ram_full_i_reg;
  output FULL_O;
  input p_0_in;
  input [0:0]out;
  input iTDO_i_2;
  input [0:0]Q;
  input iTDO_i_2_0;
  input [15:0]\shift_reg_in_reg[14] ;
  input [3:0]\shift_reg_in_reg[14]_0 ;
  input abort_rd_edge;
  input RST_I;
  input [15:0]\gpr1.dout_i_reg[13] ;
  input WR_EN_I;
  input clk;
  input [0:0]m_bscan_tck;

  wire [14:0]D;
  wire FULL_O;
  wire [0:0]Q;
  wire RST_I;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_19 ;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_20 ;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_23 ;
  wire WR_EN_I;
  wire abort_rd_edge;
  (* DONT_TOUCH *) wire clk;
  wire [15:0]fifo_dout;
  wire fifo_rd_en;
  wire fifo_rd_valid;
  wire [15:0]\gpr1.dout_i_reg[13] ;
  wire iTDO_i_2;
  wire iTDO_i_2_0;
  wire iTDO_i_8_n_0;
  (* DONT_TOUCH *) wire [0:0]m_bscan_tck;
  wire [0:0]out;
  wire p_0_in;
  wire ram_full_i_reg;
  wire [15:0]\shift_reg_in_reg[14] ;
  wire [3:0]\shift_reg_in_reg[14]_0 ;
  wire \shift_reg_in_reg[17] ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_almost_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_almost_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_bready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_rready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wlast_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tlast_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_rd_rst_busy_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_arready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_awready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_bvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rlast_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_wready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axis_tready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_wr_ack_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_wr_rst_busy_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_rd_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_wr_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_rd_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_wr_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_rd_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_wr_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_rd_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_wr_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_rd_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_wr_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_rd_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_wr_data_count_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_data_count_UNCONNECTED ;
  wire [31:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_araddr_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arburst_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arcache_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arid_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arlen_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arlock_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arprot_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arqos_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arregion_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arsize_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_aruser_UNCONNECTED ;
  wire [31:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awaddr_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awburst_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awcache_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awid_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awlen_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awlock_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awprot_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awqos_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awregion_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awsize_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awuser_UNCONNECTED ;
  wire [63:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wdata_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wid_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wstrb_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wuser_UNCONNECTED ;
  wire [63:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tdata_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tdest_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tid_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tkeep_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tstrb_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tuser_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_rd_data_count_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_bid_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_bresp_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_buser_UNCONNECTED ;
  wire [63:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rdata_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rid_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rresp_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_ruser_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_wr_data_count_UNCONNECTED ;

  (* C_ADD_NGC_CONSTRAINT = "0" *) 
  (* C_APPLICATION_TYPE_AXIS = "0" *) 
  (* C_APPLICATION_TYPE_RACH = "0" *) 
  (* C_APPLICATION_TYPE_RDCH = "0" *) 
  (* C_APPLICATION_TYPE_WACH = "0" *) 
  (* C_APPLICATION_TYPE_WDCH = "0" *) 
  (* C_APPLICATION_TYPE_WRCH = "0" *) 
  (* C_AXIS_TDATA_WIDTH = "64" *) 
  (* C_AXIS_TDEST_WIDTH = "4" *) 
  (* C_AXIS_TID_WIDTH = "8" *) 
  (* C_AXIS_TKEEP_WIDTH = "4" *) 
  (* C_AXIS_TSTRB_WIDTH = "4" *) 
  (* C_AXIS_TUSER_WIDTH = "4" *) 
  (* C_AXIS_TYPE = "0" *) 
  (* C_AXI_ADDR_WIDTH = "32" *) 
  (* C_AXI_ARUSER_WIDTH = "1" *) 
  (* C_AXI_AWUSER_WIDTH = "1" *) 
  (* C_AXI_BUSER_WIDTH = "1" *) 
  (* C_AXI_DATA_WIDTH = "64" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_LEN_WIDTH = "8" *) 
  (* C_AXI_LOCK_WIDTH = "2" *) 
  (* C_AXI_RUSER_WIDTH = "1" *) 
  (* C_AXI_TYPE = "0" *) 
  (* C_AXI_WUSER_WIDTH = "1" *) 
  (* C_COMMON_CLOCK = "0" *) 
  (* C_COUNT_TYPE = "0" *) 
  (* C_DATA_COUNT_WIDTH = "4" *) 
  (* C_DEFAULT_VALUE = "BlankString" *) 
  (* C_DIN_WIDTH = "16" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "32" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "16" *) 
  (* C_ENABLE_RLOCS = "0" *) 
  (* C_ENABLE_RST_SYNC = "1" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_ERROR_INJECTION_TYPE = "0" *) 
  (* C_ERROR_INJECTION_TYPE_AXIS = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WRCH = "0" *) 
  (* C_FAMILY = "artix7" *) 
  (* C_FULL_FLAGS_RST_VAL = "0" *) 
  (* C_HAS_ALMOST_EMPTY = "0" *) 
  (* C_HAS_ALMOST_FULL = "0" *) 
  (* C_HAS_AXIS_TDATA = "0" *) 
  (* C_HAS_AXIS_TDEST = "0" *) 
  (* C_HAS_AXIS_TID = "0" *) 
  (* C_HAS_AXIS_TKEEP = "0" *) 
  (* C_HAS_AXIS_TLAST = "0" *) 
  (* C_HAS_AXIS_TREADY = "1" *) 
  (* C_HAS_AXIS_TSTRB = "0" *) 
  (* C_HAS_AXIS_TUSER = "0" *) 
  (* C_HAS_AXI_ARUSER = "0" *) 
  (* C_HAS_AXI_AWUSER = "0" *) 
  (* C_HAS_AXI_BUSER = "0" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_AXI_RD_CHANNEL = "0" *) 
  (* C_HAS_AXI_RUSER = "0" *) 
  (* C_HAS_AXI_WR_CHANNEL = "0" *) 
  (* C_HAS_AXI_WUSER = "0" *) 
  (* C_HAS_BACKUP = "0" *) 
  (* C_HAS_DATA_COUNT = "0" *) 
  (* C_HAS_DATA_COUNTS_AXIS = "0" *) 
  (* C_HAS_DATA_COUNTS_RACH = "0" *) 
  (* C_HAS_DATA_COUNTS_RDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WACH = "0" *) 
  (* C_HAS_DATA_COUNTS_WDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WRCH = "0" *) 
  (* C_HAS_INT_CLK = "0" *) 
  (* C_HAS_MASTER_CE = "0" *) 
  (* C_HAS_MEMINIT_FILE = "0" *) 
  (* C_HAS_OVERFLOW = "1" *) 
  (* C_HAS_PROG_FLAGS_AXIS = "0" *) 
  (* C_HAS_PROG_FLAGS_RACH = "0" *) 
  (* C_HAS_PROG_FLAGS_RDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WACH = "0" *) 
  (* C_HAS_PROG_FLAGS_WDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WRCH = "0" *) 
  (* C_HAS_RD_DATA_COUNT = "0" *) 
  (* C_HAS_RD_RST = "0" *) 
  (* C_HAS_RST = "1" *) 
  (* C_HAS_SLAVE_CE = "0" *) 
  (* C_HAS_SRST = "0" *) 
  (* C_HAS_UNDERFLOW = "1" *) 
  (* C_HAS_VALID = "1" *) 
  (* C_HAS_WR_ACK = "0" *) 
  (* C_HAS_WR_DATA_COUNT = "0" *) 
  (* C_HAS_WR_RST = "0" *) 
  (* C_IMPLEMENTATION_TYPE = "2" *) 
  (* C_IMPLEMENTATION_TYPE_AXIS = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WRCH = "1" *) 
  (* C_INIT_WR_PNTR_VAL = "0" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_MEMORY_TYPE = "2" *) 
  (* C_MIF_FILE_NAME = "BlankString" *) 
  (* C_MSGON_VAL = "0" *) 
  (* C_OPTIMIZATION_MODE = "0" *) 
  (* C_OVERFLOW_LOW = "0" *) 
  (* C_POWER_SAVING_MODE = "0" *) 
  (* C_PRELOAD_LATENCY = "0" *) 
  (* C_PRELOAD_REGS = "1" *) 
  (* C_PRIM_FIFO_TYPE = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_AXIS = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_RACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_RDCH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WDCH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WRCH = "512x36" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL = "4" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_AXIS = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WRCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_NEGATE_VAL = "5" *) 
  (* C_PROG_EMPTY_TYPE = "0" *) 
  (* C_PROG_EMPTY_TYPE_AXIS = "0" *) 
  (* C_PROG_EMPTY_TYPE_RACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_RDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WRCH = "0" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL = "15" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_AXIS = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WRCH = "1023" *) 
  (* C_PROG_FULL_THRESH_NEGATE_VAL = "14" *) 
  (* C_PROG_FULL_TYPE = "0" *) 
  (* C_PROG_FULL_TYPE_AXIS = "0" *) 
  (* C_PROG_FULL_TYPE_RACH = "0" *) 
  (* C_PROG_FULL_TYPE_RDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WACH = "0" *) 
  (* C_PROG_FULL_TYPE_WDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WRCH = "0" *) 
  (* C_RACH_TYPE = "0" *) 
  (* C_RDCH_TYPE = "0" *) 
  (* C_RD_DATA_COUNT_WIDTH = "4" *) 
  (* C_RD_DEPTH = "16" *) 
  (* C_RD_FREQ = "1" *) 
  (* C_RD_PNTR_WIDTH = "4" *) 
  (* C_REG_SLICE_MODE_AXIS = "0" *) 
  (* C_REG_SLICE_MODE_RACH = "0" *) 
  (* C_REG_SLICE_MODE_RDCH = "0" *) 
  (* C_REG_SLICE_MODE_WACH = "0" *) 
  (* C_REG_SLICE_MODE_WDCH = "0" *) 
  (* C_REG_SLICE_MODE_WRCH = "0" *) 
  (* C_SELECT_XPM = "0" *) 
  (* C_SYNCHRONIZER_STAGE = "2" *) 
  (* C_UNDERFLOW_LOW = "0" *) 
  (* C_USE_COMMON_OVERFLOW = "0" *) 
  (* C_USE_COMMON_UNDERFLOW = "0" *) 
  (* C_USE_DEFAULT_SETTINGS = "0" *) 
  (* C_USE_DOUT_RST = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_ECC_AXIS = "0" *) 
  (* C_USE_ECC_RACH = "0" *) 
  (* C_USE_ECC_RDCH = "0" *) 
  (* C_USE_ECC_WACH = "0" *) 
  (* C_USE_ECC_WDCH = "0" *) 
  (* C_USE_ECC_WRCH = "0" *) 
  (* C_USE_EMBEDDED_REG = "0" *) 
  (* C_USE_FIFO16_FLAGS = "0" *) 
  (* C_USE_FWFT_DATA_COUNT = "0" *) 
  (* C_USE_PIPELINE_REG = "0" *) 
  (* C_VALID_LOW = "0" *) 
  (* C_WACH_TYPE = "0" *) 
  (* C_WDCH_TYPE = "0" *) 
  (* C_WRCH_TYPE = "0" *) 
  (* C_WR_ACK_LOW = "0" *) 
  (* C_WR_DATA_COUNT_WIDTH = "4" *) 
  (* C_WR_DEPTH = "16" *) 
  (* C_WR_DEPTH_AXIS = "1024" *) 
  (* C_WR_DEPTH_RACH = "16" *) 
  (* C_WR_DEPTH_RDCH = "1024" *) 
  (* C_WR_DEPTH_WACH = "16" *) 
  (* C_WR_DEPTH_WDCH = "1024" *) 
  (* C_WR_DEPTH_WRCH = "16" *) 
  (* C_WR_FREQ = "1" *) 
  (* C_WR_PNTR_WIDTH = "4" *) 
  (* C_WR_PNTR_WIDTH_AXIS = "10" *) 
  (* C_WR_PNTR_WIDTH_RACH = "4" *) 
  (* C_WR_PNTR_WIDTH_RDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WACH = "4" *) 
  (* C_WR_PNTR_WIDTH_WDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WRCH = "4" *) 
  (* C_WR_RESPONSE_LATENCY = "1" *) 
  (* DONT_TOUCH *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4__parameterized0 \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst 
       (.almost_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_almost_empty_UNCONNECTED ),
        .almost_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_almost_full_UNCONNECTED ),
        .axi_ar_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_data_count_UNCONNECTED [4:0]),
        .axi_ar_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_dbiterr_UNCONNECTED ),
        .axi_ar_injectdbiterr(1'b0),
        .axi_ar_injectsbiterr(1'b0),
        .axi_ar_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_overflow_UNCONNECTED ),
        .axi_ar_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_prog_empty_UNCONNECTED ),
        .axi_ar_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_prog_full_UNCONNECTED ),
        .axi_ar_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_rd_data_count_UNCONNECTED [4:0]),
        .axi_ar_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_sbiterr_UNCONNECTED ),
        .axi_ar_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_underflow_UNCONNECTED ),
        .axi_ar_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_ar_wr_data_count_UNCONNECTED [4:0]),
        .axi_aw_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_data_count_UNCONNECTED [4:0]),
        .axi_aw_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_dbiterr_UNCONNECTED ),
        .axi_aw_injectdbiterr(1'b0),
        .axi_aw_injectsbiterr(1'b0),
        .axi_aw_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_overflow_UNCONNECTED ),
        .axi_aw_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_prog_empty_UNCONNECTED ),
        .axi_aw_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_prog_full_UNCONNECTED ),
        .axi_aw_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_rd_data_count_UNCONNECTED [4:0]),
        .axi_aw_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_sbiterr_UNCONNECTED ),
        .axi_aw_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_underflow_UNCONNECTED ),
        .axi_aw_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_aw_wr_data_count_UNCONNECTED [4:0]),
        .axi_b_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_data_count_UNCONNECTED [4:0]),
        .axi_b_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_dbiterr_UNCONNECTED ),
        .axi_b_injectdbiterr(1'b0),
        .axi_b_injectsbiterr(1'b0),
        .axi_b_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_overflow_UNCONNECTED ),
        .axi_b_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_prog_empty_UNCONNECTED ),
        .axi_b_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_prog_full_UNCONNECTED ),
        .axi_b_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_rd_data_count_UNCONNECTED [4:0]),
        .axi_b_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_sbiterr_UNCONNECTED ),
        .axi_b_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_underflow_UNCONNECTED ),
        .axi_b_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_b_wr_data_count_UNCONNECTED [4:0]),
        .axi_r_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_data_count_UNCONNECTED [10:0]),
        .axi_r_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_dbiterr_UNCONNECTED ),
        .axi_r_injectdbiterr(1'b0),
        .axi_r_injectsbiterr(1'b0),
        .axi_r_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_overflow_UNCONNECTED ),
        .axi_r_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_prog_empty_UNCONNECTED ),
        .axi_r_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_prog_full_UNCONNECTED ),
        .axi_r_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_rd_data_count_UNCONNECTED [10:0]),
        .axi_r_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_sbiterr_UNCONNECTED ),
        .axi_r_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_underflow_UNCONNECTED ),
        .axi_r_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_r_wr_data_count_UNCONNECTED [10:0]),
        .axi_w_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_data_count_UNCONNECTED [10:0]),
        .axi_w_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_dbiterr_UNCONNECTED ),
        .axi_w_injectdbiterr(1'b0),
        .axi_w_injectsbiterr(1'b0),
        .axi_w_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_overflow_UNCONNECTED ),
        .axi_w_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_prog_empty_UNCONNECTED ),
        .axi_w_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_prog_full_UNCONNECTED ),
        .axi_w_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_rd_data_count_UNCONNECTED [10:0]),
        .axi_w_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_sbiterr_UNCONNECTED ),
        .axi_w_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_underflow_UNCONNECTED ),
        .axi_w_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axi_w_wr_data_count_UNCONNECTED [10:0]),
        .axis_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_data_count_UNCONNECTED [10:0]),
        .axis_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_dbiterr_UNCONNECTED ),
        .axis_injectdbiterr(1'b0),
        .axis_injectsbiterr(1'b0),
        .axis_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_overflow_UNCONNECTED ),
        .axis_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_prog_empty_UNCONNECTED ),
        .axis_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_prog_full_UNCONNECTED ),
        .axis_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_rd_data_count_UNCONNECTED [10:0]),
        .axis_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_sbiterr_UNCONNECTED ),
        .axis_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_underflow_UNCONNECTED ),
        .axis_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_axis_wr_data_count_UNCONNECTED [10:0]),
        .backup(1'b0),
        .backup_marker(1'b0),
        .clk(1'b0),
        .data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_data_count_UNCONNECTED [3:0]),
        .dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_dbiterr_UNCONNECTED ),
        .din(\gpr1.dout_i_reg[13] ),
        .dout(fifo_dout),
        .empty(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_20 ),
        .full(FULL_O),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .int_clk(1'b0),
        .m_aclk(1'b0),
        .m_aclk_en(1'b0),
        .m_axi_araddr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_araddr_UNCONNECTED [31:0]),
        .m_axi_arburst(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arburst_UNCONNECTED [1:0]),
        .m_axi_arcache(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arcache_UNCONNECTED [3:0]),
        .m_axi_arid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arid_UNCONNECTED [3:0]),
        .m_axi_arlen(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arlen_UNCONNECTED [7:0]),
        .m_axi_arlock(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arlock_UNCONNECTED [1:0]),
        .m_axi_arprot(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arprot_UNCONNECTED [2:0]),
        .m_axi_arqos(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arqos_UNCONNECTED [3:0]),
        .m_axi_arready(1'b0),
        .m_axi_arregion(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arregion_UNCONNECTED [3:0]),
        .m_axi_arsize(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arsize_UNCONNECTED [2:0]),
        .m_axi_aruser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_aruser_UNCONNECTED [0]),
        .m_axi_arvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_arvalid_UNCONNECTED ),
        .m_axi_awaddr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awaddr_UNCONNECTED [31:0]),
        .m_axi_awburst(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awburst_UNCONNECTED [1:0]),
        .m_axi_awcache(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awcache_UNCONNECTED [3:0]),
        .m_axi_awid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awid_UNCONNECTED [3:0]),
        .m_axi_awlen(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awlen_UNCONNECTED [7:0]),
        .m_axi_awlock(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awlock_UNCONNECTED [1:0]),
        .m_axi_awprot(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awprot_UNCONNECTED [2:0]),
        .m_axi_awqos(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awqos_UNCONNECTED [3:0]),
        .m_axi_awready(1'b0),
        .m_axi_awregion(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awregion_UNCONNECTED [3:0]),
        .m_axi_awsize(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awsize_UNCONNECTED [2:0]),
        .m_axi_awuser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awuser_UNCONNECTED [0]),
        .m_axi_awvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_awvalid_UNCONNECTED ),
        .m_axi_bid({1'b0,1'b0,1'b0,1'b0}),
        .m_axi_bready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_bready_UNCONNECTED ),
        .m_axi_bresp({1'b0,1'b0}),
        .m_axi_buser(1'b0),
        .m_axi_bvalid(1'b0),
        .m_axi_rdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rid({1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rlast(1'b0),
        .m_axi_rready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_rready_UNCONNECTED ),
        .m_axi_rresp({1'b0,1'b0}),
        .m_axi_ruser(1'b0),
        .m_axi_rvalid(1'b0),
        .m_axi_wdata(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wdata_UNCONNECTED [63:0]),
        .m_axi_wid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wid_UNCONNECTED [3:0]),
        .m_axi_wlast(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wlast_UNCONNECTED ),
        .m_axi_wready(1'b0),
        .m_axi_wstrb(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wstrb_UNCONNECTED [7:0]),
        .m_axi_wuser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wuser_UNCONNECTED [0]),
        .m_axi_wvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axi_wvalid_UNCONNECTED ),
        .m_axis_tdata(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tdata_UNCONNECTED [63:0]),
        .m_axis_tdest(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tdest_UNCONNECTED [3:0]),
        .m_axis_tid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tid_UNCONNECTED [7:0]),
        .m_axis_tkeep(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tkeep_UNCONNECTED [3:0]),
        .m_axis_tlast(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tlast_UNCONNECTED ),
        .m_axis_tready(1'b0),
        .m_axis_tstrb(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tstrb_UNCONNECTED [3:0]),
        .m_axis_tuser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tuser_UNCONNECTED [3:0]),
        .m_axis_tvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_m_axis_tvalid_UNCONNECTED ),
        .overflow(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_19 ),
        .prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_prog_empty_UNCONNECTED ),
        .prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_prog_full_UNCONNECTED ),
        .prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .rd_clk(m_bscan_tck),
        .rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_rd_data_count_UNCONNECTED [3:0]),
        .rd_en(fifo_rd_en),
        .rd_rst(1'b0),
        .rd_rst_busy(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_rd_rst_busy_UNCONNECTED ),
        .rst(RST_I),
        .s_aclk(1'b0),
        .s_aclk_en(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlock({1'b0,1'b0}),
        .s_axi_arprot({1'b0,1'b0,1'b0}),
        .s_axi_arqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_arready_UNCONNECTED ),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_aruser(1'b0),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlock({1'b0,1'b0}),
        .s_axi_awprot({1'b0,1'b0,1'b0}),
        .s_axi_awqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_awready_UNCONNECTED ),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awuser(1'b0),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_bid_UNCONNECTED [3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_bresp_UNCONNECTED [1:0]),
        .s_axi_buser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_buser_UNCONNECTED [0]),
        .s_axi_bvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_bvalid_UNCONNECTED ),
        .s_axi_rdata(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rdata_UNCONNECTED [63:0]),
        .s_axi_rid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rid_UNCONNECTED [3:0]),
        .s_axi_rlast(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rlast_UNCONNECTED ),
        .s_axi_rready(1'b0),
        .s_axi_rresp(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rresp_UNCONNECTED [1:0]),
        .s_axi_ruser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_ruser_UNCONNECTED [0]),
        .s_axi_rvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_rvalid_UNCONNECTED ),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axi_wready_UNCONNECTED ),
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wuser(1'b0),
        .s_axi_wvalid(1'b0),
        .s_axis_tdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tdest({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tkeep({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tlast(1'b0),
        .s_axis_tready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_s_axis_tready_UNCONNECTED ),
        .s_axis_tstrb({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tuser({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tvalid(1'b0),
        .sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_sbiterr_UNCONNECTED ),
        .sleep(1'b0),
        .srst(1'b0),
        .underflow(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_23 ),
        .valid(fifo_rd_valid),
        .wr_ack(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_wr_ack_UNCONNECTED ),
        .wr_clk(clk),
        .wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_wr_data_count_UNCONNECTED [3:0]),
        .wr_en(WR_EN_I),
        .wr_rst(1'b0),
        .wr_rst_busy(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_wr_rst_busy_UNCONNECTED ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h08)) 
    \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_2 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .O(fifo_rd_en));
  LUT6 #(
    .INIT(64'h0000000100000000)) 
    \SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3 
       (.I0(\shift_reg_in_reg[14]_0 [1]),
        .I1(\shift_reg_in_reg[14]_0 [0]),
        .I2(\shift_reg_in_reg[14]_0 [2]),
        .I3(\shift_reg_in_reg[14]_0 [3]),
        .I4(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_n_20 ),
        .I5(fifo_rd_valid),
        .O(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h1)) 
    \current_state[2]_i_6 
       (.I0(FULL_O),
        .I1(abort_rd_edge),
        .O(ram_full_i_reg));
  LUT6 #(
    .INIT(64'hFFFFFFFFFEEEEEEE)) 
    iTDO_i_4
       (.I0(iTDO_i_8_n_0),
        .I1(iTDO_i_2),
        .I2(out),
        .I3(p_0_in),
        .I4(Q),
        .I5(iTDO_i_2_0),
        .O(\shift_reg_in_reg[17] ));
  LUT5 #(
    .INIT(32'h00E20000)) 
    iTDO_i_8
       (.I0(\shift_reg_in_reg[14] [0]),
        .I1(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I2(fifo_dout[0]),
        .I3(out),
        .I4(p_0_in),
        .O(iTDO_i_8_n_0));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[0]_i_1__2 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[1]),
        .I4(\shift_reg_in_reg[14] [1]),
        .O(D[0]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[10]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[11]),
        .I4(\shift_reg_in_reg[14] [11]),
        .O(D[10]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[11]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[12]),
        .I4(\shift_reg_in_reg[14] [12]),
        .O(D[11]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[12]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[13]),
        .I4(\shift_reg_in_reg[14] [13]),
        .O(D[12]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[13]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[14]),
        .I4(\shift_reg_in_reg[14] [14]),
        .O(D[13]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[14]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[15]),
        .I4(\shift_reg_in_reg[14] [15]),
        .O(D[14]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[1]_i_1__2 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[2]),
        .I4(\shift_reg_in_reg[14] [2]),
        .O(D[1]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[2]_i_1__1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[3]),
        .I4(\shift_reg_in_reg[14] [3]),
        .O(D[2]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[3]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[4]),
        .I4(\shift_reg_in_reg[14] [4]),
        .O(D[3]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[4]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[5]),
        .I4(\shift_reg_in_reg[14] [5]),
        .O(D[4]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[5]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[6]),
        .I4(\shift_reg_in_reg[14] [6]),
        .O(D[5]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[6]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[7]),
        .I4(\shift_reg_in_reg[14] [7]),
        .O(D[6]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[7]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[8]),
        .I4(\shift_reg_in_reg[14] [8]),
        .O(D[7]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[8]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[9]),
        .I4(\shift_reg_in_reg[14] [9]),
        .O(D[8]));
  LUT5 #(
    .INIT(32'hFFF70800)) 
    \shift_reg_in[9]_i_1 
       (.I0(\SUBCORE_FIFO.xsdbm_v3_0_0_rdfifo_inst_i_3_n_0 ),
        .I1(p_0_in),
        .I2(out),
        .I3(fifo_dout[10]),
        .I4(\shift_reg_in_reg[14] [10]),
        .O(D[9]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_rdreg
   (\shift_reg_in_reg[17] ,
    ram_full_i_reg,
    FULL_O,
    p_0_in,
    out,
    iTDO_i_2,
    Q,
    iTDO_i_2_0,
    abort_rd_edge,
    RST_I,
    \gpr1.dout_i_reg[13] ,
    WR_EN_I,
    clk,
    m_bscan_tck,
    E,
    D,
    SR);
  output \shift_reg_in_reg[17] ;
  output ram_full_i_reg;
  output FULL_O;
  input p_0_in;
  input [0:0]out;
  input iTDO_i_2;
  input [0:0]Q;
  input iTDO_i_2_0;
  input abort_rd_edge;
  input RST_I;
  input [15:0]\gpr1.dout_i_reg[13] ;
  input WR_EN_I;
  input clk;
  input [0:0]m_bscan_tck;
  input [0:0]E;
  input [0:0]D;
  input [0:0]SR;

  wire [0:0]D;
  wire [0:0]E;
  wire FULL_O;
  wire [0:0]Q;
  wire RST_I;
  wire [0:0]SR;
  wire U_RD_FIFO_n_1;
  wire U_RD_FIFO_n_10;
  wire U_RD_FIFO_n_11;
  wire U_RD_FIFO_n_12;
  wire U_RD_FIFO_n_13;
  wire U_RD_FIFO_n_14;
  wire U_RD_FIFO_n_15;
  wire U_RD_FIFO_n_2;
  wire U_RD_FIFO_n_3;
  wire U_RD_FIFO_n_4;
  wire U_RD_FIFO_n_5;
  wire U_RD_FIFO_n_6;
  wire U_RD_FIFO_n_7;
  wire U_RD_FIFO_n_8;
  wire U_RD_FIFO_n_9;
  wire WR_EN_I;
  wire abort_rd_edge;
  wire clk;
  wire [15:0]\gpr1.dout_i_reg[13] ;
  wire iTDO_i_2;
  wire iTDO_i_2_0;
  wire [0:0]m_bscan_tck;
  wire [0:0]out;
  wire p_0_in;
  wire [3:0]p_0_in__2;
  wire ram_full_i_reg;
  wire [3:0]shift_bit_count_reg;
  wire \shift_reg_in_reg[17] ;
  wire \shift_reg_in_reg_n_0_[0] ;
  wire \shift_reg_in_reg_n_0_[10] ;
  wire \shift_reg_in_reg_n_0_[11] ;
  wire \shift_reg_in_reg_n_0_[12] ;
  wire \shift_reg_in_reg_n_0_[13] ;
  wire \shift_reg_in_reg_n_0_[14] ;
  wire \shift_reg_in_reg_n_0_[15] ;
  wire \shift_reg_in_reg_n_0_[1] ;
  wire \shift_reg_in_reg_n_0_[2] ;
  wire \shift_reg_in_reg_n_0_[3] ;
  wire \shift_reg_in_reg_n_0_[4] ;
  wire \shift_reg_in_reg_n_0_[5] ;
  wire \shift_reg_in_reg_n_0_[6] ;
  wire \shift_reg_in_reg_n_0_[7] ;
  wire \shift_reg_in_reg_n_0_[8] ;
  wire \shift_reg_in_reg_n_0_[9] ;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_rdfifo U_RD_FIFO
       (.D({U_RD_FIFO_n_1,U_RD_FIFO_n_2,U_RD_FIFO_n_3,U_RD_FIFO_n_4,U_RD_FIFO_n_5,U_RD_FIFO_n_6,U_RD_FIFO_n_7,U_RD_FIFO_n_8,U_RD_FIFO_n_9,U_RD_FIFO_n_10,U_RD_FIFO_n_11,U_RD_FIFO_n_12,U_RD_FIFO_n_13,U_RD_FIFO_n_14,U_RD_FIFO_n_15}),
        .FULL_O(FULL_O),
        .Q(Q),
        .RST_I(RST_I),
        .WR_EN_I(WR_EN_I),
        .abort_rd_edge(abort_rd_edge),
        .clk(clk),
        .\gpr1.dout_i_reg[13] (\gpr1.dout_i_reg[13] ),
        .iTDO_i_2(iTDO_i_2),
        .iTDO_i_2_0(iTDO_i_2_0),
        .m_bscan_tck(m_bscan_tck),
        .out(out),
        .p_0_in(p_0_in),
        .ram_full_i_reg(ram_full_i_reg),
        .\shift_reg_in_reg[14] ({\shift_reg_in_reg_n_0_[15] ,\shift_reg_in_reg_n_0_[14] ,\shift_reg_in_reg_n_0_[13] ,\shift_reg_in_reg_n_0_[12] ,\shift_reg_in_reg_n_0_[11] ,\shift_reg_in_reg_n_0_[10] ,\shift_reg_in_reg_n_0_[9] ,\shift_reg_in_reg_n_0_[8] ,\shift_reg_in_reg_n_0_[7] ,\shift_reg_in_reg_n_0_[6] ,\shift_reg_in_reg_n_0_[5] ,\shift_reg_in_reg_n_0_[4] ,\shift_reg_in_reg_n_0_[3] ,\shift_reg_in_reg_n_0_[2] ,\shift_reg_in_reg_n_0_[1] ,\shift_reg_in_reg_n_0_[0] }),
        .\shift_reg_in_reg[14]_0 (shift_bit_count_reg),
        .\shift_reg_in_reg[17] (\shift_reg_in_reg[17] ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \shift_bit_count[0]_i_1__0 
       (.I0(shift_bit_count_reg[0]),
        .O(p_0_in__2[0]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \shift_bit_count[1]_i_1__0 
       (.I0(shift_bit_count_reg[0]),
        .I1(shift_bit_count_reg[1]),
        .O(p_0_in__2[1]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \shift_bit_count[2]_i_1__0 
       (.I0(shift_bit_count_reg[2]),
        .I1(shift_bit_count_reg[1]),
        .I2(shift_bit_count_reg[0]),
        .O(p_0_in__2[2]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \shift_bit_count[3]_i_2__0 
       (.I0(shift_bit_count_reg[3]),
        .I1(shift_bit_count_reg[0]),
        .I2(shift_bit_count_reg[1]),
        .I3(shift_bit_count_reg[2]),
        .O(p_0_in__2[3]));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__2[0]),
        .Q(shift_bit_count_reg[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__2[1]),
        .Q(shift_bit_count_reg[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__2[2]),
        .Q(shift_bit_count_reg[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__2[3]),
        .Q(shift_bit_count_reg[3]),
        .R(SR));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_15),
        .Q(\shift_reg_in_reg_n_0_[0] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[10] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_5),
        .Q(\shift_reg_in_reg_n_0_[10] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[11] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_4),
        .Q(\shift_reg_in_reg_n_0_[11] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[12] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_3),
        .Q(\shift_reg_in_reg_n_0_[12] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[13] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_2),
        .Q(\shift_reg_in_reg_n_0_[13] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[14] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_1),
        .Q(\shift_reg_in_reg_n_0_[14] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[15] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(D),
        .Q(\shift_reg_in_reg_n_0_[15] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_14),
        .Q(\shift_reg_in_reg_n_0_[1] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_13),
        .Q(\shift_reg_in_reg_n_0_[2] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[3] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_12),
        .Q(\shift_reg_in_reg_n_0_[3] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[4] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_11),
        .Q(\shift_reg_in_reg_n_0_[4] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[5] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_10),
        .Q(\shift_reg_in_reg_n_0_[5] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[6] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_9),
        .Q(\shift_reg_in_reg_n_0_[6] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[7] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_8),
        .Q(\shift_reg_in_reg_n_0_[7] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[8] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_7),
        .Q(\shift_reg_in_reg_n_0_[8] ));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[9] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(U_RD_FIFO_n_6),
        .Q(\shift_reg_in_reg_n_0_[9] ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat
   (iTDO_VEC_15,
    m_bscan_tck,
    SR);
  output iTDO_VEC_15;
  input [0:0]m_bscan_tck;
  input [0:0]SR;

  wire [0:0]SR;
  wire \iSTAT_CNT[0]_i_1_n_0 ;
  wire [5:0]iSTAT_CNT_reg;
  wire iTDO_VEC_15;
  wire iTDO_next;
  wire [0:0]m_bscan_tck;
  wire [5:1]p_0_in;

  LUT6 #(
    .INIT(64'h2000600060009591)) 
    TDO_i_1
       (.I0(iSTAT_CNT_reg[2]),
        .I1(iSTAT_CNT_reg[5]),
        .I2(iSTAT_CNT_reg[4]),
        .I3(iSTAT_CNT_reg[3]),
        .I4(iSTAT_CNT_reg[0]),
        .I5(iSTAT_CNT_reg[1]),
        .O(iTDO_next));
  FDRE TDO_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iTDO_next),
        .Q(iTDO_VEC_15),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \iSTAT_CNT[0]_i_1 
       (.I0(iSTAT_CNT_reg[0]),
        .O(\iSTAT_CNT[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \iSTAT_CNT[1]_i_1 
       (.I0(iSTAT_CNT_reg[1]),
        .I1(iSTAT_CNT_reg[0]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \iSTAT_CNT[2]_i_1 
       (.I0(iSTAT_CNT_reg[2]),
        .I1(iSTAT_CNT_reg[0]),
        .I2(iSTAT_CNT_reg[1]),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \iSTAT_CNT[3]_i_1 
       (.I0(iSTAT_CNT_reg[3]),
        .I1(iSTAT_CNT_reg[1]),
        .I2(iSTAT_CNT_reg[0]),
        .I3(iSTAT_CNT_reg[2]),
        .O(p_0_in[3]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \iSTAT_CNT[4]_i_1 
       (.I0(iSTAT_CNT_reg[4]),
        .I1(iSTAT_CNT_reg[3]),
        .I2(iSTAT_CNT_reg[2]),
        .I3(iSTAT_CNT_reg[0]),
        .I4(iSTAT_CNT_reg[1]),
        .O(p_0_in[4]));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \iSTAT_CNT[5]_i_2 
       (.I0(iSTAT_CNT_reg[5]),
        .I1(iSTAT_CNT_reg[4]),
        .I2(iSTAT_CNT_reg[1]),
        .I3(iSTAT_CNT_reg[0]),
        .I4(iSTAT_CNT_reg[2]),
        .I5(iSTAT_CNT_reg[3]),
        .O(p_0_in[5]));
  FDRE #(
    .INIT(1'b0)) 
    \iSTAT_CNT_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(\iSTAT_CNT[0]_i_1_n_0 ),
        .Q(iSTAT_CNT_reg[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \iSTAT_CNT_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in[1]),
        .Q(iSTAT_CNT_reg[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \iSTAT_CNT_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in[2]),
        .Q(iSTAT_CNT_reg[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \iSTAT_CNT_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in[3]),
        .Q(iSTAT_CNT_reg[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \iSTAT_CNT_reg[4] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in[4]),
        .Q(iSTAT_CNT_reg[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \iSTAT_CNT_reg[5] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in[5]),
        .Q(iSTAT_CNT_reg[5]),
        .R(SR));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat_reg
   (\icn_cmd_en_reg[2] ,
    icn_cmd_en_temp_reg_0,
    m_bscan_tck,
    D,
    clk,
    \stat_reg_reg[3]_0 );
  output \icn_cmd_en_reg[2] ;
  input icn_cmd_en_temp_reg_0;
  input [0:0]m_bscan_tck;
  input [0:0]D;
  input clk;
  input [3:0]\stat_reg_reg[3]_0 ;

  wire [0:0]D;
  wire clk;
  wire icn_cmd_din_temp;
  wire \icn_cmd_en_reg[2] ;
  wire icn_cmd_en_temp;
  wire icn_cmd_en_temp_reg_0;
  wire [0:0]m_bscan_tck;
  wire shift_en;
  (* async_reg = "true" *) wire [3:0]shift_reg_in;
  wire \shift_reg_in[0]_i_1_n_0 ;
  wire \shift_reg_in[1]_i_1_n_0 ;
  wire \shift_reg_in[2]_i_1_n_0 ;
  (* async_reg = "true" *) wire [3:0]stat_reg;
  (* async_reg = "true" *) wire [3:0]stat_reg_1;
  (* async_reg = "true" *) wire [3:0]stat_reg_2;
  (* async_reg = "true" *) wire [1:0]stat_reg_ld;
  wire stat_reg_ld_temp;
  wire stat_reg_ld_temp_1;
  wire [3:0]\stat_reg_reg[3]_0 ;

  LUT4 #(
    .INIT(16'hA808)) 
    iTDO_i_11
       (.I0(icn_cmd_en_temp_reg_0),
        .I1(stat_reg_2[0]),
        .I2(shift_en),
        .I3(shift_reg_in[0]),
        .O(\icn_cmd_en_reg[2] ));
  (* equivalent_register_removal = "no" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(D),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp_reg_0),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    shift_en_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(shift_en),
        .R(1'b0));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[0]_i_1 
       (.I0(shift_reg_in[1]),
        .I1(shift_en),
        .I2(stat_reg_2[1]),
        .O(\shift_reg_in[0]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[1]_i_1 
       (.I0(shift_reg_in[2]),
        .I1(shift_en),
        .I2(stat_reg_2[2]),
        .O(\shift_reg_in[1]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[2]_i_1 
       (.I0(shift_reg_in[3]),
        .I1(shift_en),
        .I2(stat_reg_2[3]),
        .O(\shift_reg_in[2]_i_1_n_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[0]_i_1_n_0 ),
        .Q(shift_reg_in[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[1]_i_1_n_0 ),
        .Q(shift_reg_in[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[2]_i_1_n_0 ),
        .Q(shift_reg_in[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[3] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[0]),
        .Q(stat_reg_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[1]),
        .Q(stat_reg_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[2]),
        .Q(stat_reg_1[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[3]),
        .Q(stat_reg_1[3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[0]),
        .Q(stat_reg_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[1]),
        .Q(stat_reg_2[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[2]),
        .Q(stat_reg_2[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[3]),
        .Q(stat_reg_2[3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_ld_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(stat_reg_ld[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_ld_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(stat_reg_ld[0]),
        .Q(stat_reg_ld[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    stat_reg_ld_temp_1_i_1
       (.I0(stat_reg_ld[1]),
        .O(stat_reg_ld_temp));
  FDRE stat_reg_ld_temp_1_reg
       (.C(clk),
        .CE(1'b1),
        .D(stat_reg_ld_temp),
        .Q(stat_reg_ld_temp_1),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[0] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1),
        .D(\stat_reg_reg[3]_0 [0]),
        .Q(stat_reg[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[1] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1),
        .D(\stat_reg_reg[3]_0 [1]),
        .Q(stat_reg[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[2] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1),
        .D(\stat_reg_reg[3]_0 [2]),
        .Q(stat_reg[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[3] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1),
        .D(\stat_reg_reg[3]_0 [3]),
        .Q(stat_reg[3]),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "xsdbm_v3_0_0_stat_reg" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat_reg_0
   (\icn_cmd_en_reg[3] ,
    icn_cmd_en_temp_reg_0,
    m_bscan_tck,
    D,
    clk,
    \stat_reg_reg[3]_0 );
  output \icn_cmd_en_reg[3] ;
  input icn_cmd_en_temp_reg_0;
  input [0:0]m_bscan_tck;
  input [0:0]D;
  input clk;
  input [3:0]\stat_reg_reg[3]_0 ;

  wire [0:0]D;
  wire clk;
  wire icn_cmd_din_temp;
  wire \icn_cmd_en_reg[3] ;
  wire icn_cmd_en_temp;
  wire icn_cmd_en_temp_reg_0;
  wire [0:0]m_bscan_tck;
  wire shift_en;
  (* async_reg = "true" *) wire [3:0]shift_reg_in;
  wire \shift_reg_in[0]_i_1__0_n_0 ;
  wire \shift_reg_in[1]_i_1__0_n_0 ;
  wire \shift_reg_in[2]_i_1__0_n_0 ;
  (* async_reg = "true" *) wire [3:0]stat_reg;
  (* async_reg = "true" *) wire [3:0]stat_reg_1;
  (* async_reg = "true" *) wire [3:0]stat_reg_2;
  (* async_reg = "true" *) wire [1:0]stat_reg_ld;
  wire stat_reg_ld_temp_1_i_1__0_n_0;
  wire stat_reg_ld_temp_1_reg_n_0;
  wire [3:0]\stat_reg_reg[3]_0 ;

  LUT4 #(
    .INIT(16'hA808)) 
    iTDO_i_12
       (.I0(icn_cmd_en_temp_reg_0),
        .I1(stat_reg_2[0]),
        .I2(shift_en),
        .I3(shift_reg_in[0]),
        .O(\icn_cmd_en_reg[3] ));
  (* equivalent_register_removal = "no" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(D),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp_reg_0),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    shift_en_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(shift_en),
        .R(1'b0));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[0]_i_1__0 
       (.I0(shift_reg_in[1]),
        .I1(shift_en),
        .I2(stat_reg_2[1]),
        .O(\shift_reg_in[0]_i_1__0_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[1]_i_1__0 
       (.I0(shift_reg_in[2]),
        .I1(shift_en),
        .I2(stat_reg_2[2]),
        .O(\shift_reg_in[1]_i_1__0_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[2]_i_1__0 
       (.I0(shift_reg_in[3]),
        .I1(shift_en),
        .I2(stat_reg_2[3]),
        .O(\shift_reg_in[2]_i_1__0_n_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[0]_i_1__0_n_0 ),
        .Q(shift_reg_in[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[1]_i_1__0_n_0 ),
        .Q(shift_reg_in[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[2]_i_1__0_n_0 ),
        .Q(shift_reg_in[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[3] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[0]),
        .Q(stat_reg_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[1]),
        .Q(stat_reg_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[2]),
        .Q(stat_reg_1[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[3]),
        .Q(stat_reg_1[3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[0]),
        .Q(stat_reg_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[1]),
        .Q(stat_reg_2[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[2]),
        .Q(stat_reg_2[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[3]),
        .Q(stat_reg_2[3]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_ld_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(stat_reg_ld[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_ld_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(stat_reg_ld[0]),
        .Q(stat_reg_ld[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    stat_reg_ld_temp_1_i_1__0
       (.I0(stat_reg_ld[1]),
        .O(stat_reg_ld_temp_1_i_1__0_n_0));
  FDRE stat_reg_ld_temp_1_reg
       (.C(clk),
        .CE(1'b1),
        .D(stat_reg_ld_temp_1_i_1__0_n_0),
        .Q(stat_reg_ld_temp_1_reg_n_0),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[0] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[3]_0 [0]),
        .Q(stat_reg[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[1] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[3]_0 [1]),
        .Q(stat_reg[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[2] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[3]_0 [2]),
        .Q(stat_reg[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[3] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[3]_0 [3]),
        .Q(stat_reg[3]),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "xsdbm_v3_0_0_stat_reg" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_stat_reg__parameterized0
   (\shift_reg_in_reg[0]_0 ,
    icn_cmd_en_temp_reg_0,
    m_bscan_tck,
    icn_cmd_din_temp_reg_0,
    clk,
    iTDO_i_4,
    iTDO_i_4_0,
    \stat_reg_reg[2]_0 );
  output \shift_reg_in_reg[0]_0 ;
  input icn_cmd_en_temp_reg_0;
  input [0:0]m_bscan_tck;
  input [0:0]icn_cmd_din_temp_reg_0;
  input clk;
  input iTDO_i_4;
  input iTDO_i_4_0;
  input [2:0]\stat_reg_reg[2]_0 ;

  wire clk;
  wire iTDO_i_4;
  wire iTDO_i_4_0;
  wire icn_cmd_din_temp;
  wire [0:0]icn_cmd_din_temp_reg_0;
  wire icn_cmd_en_temp;
  wire icn_cmd_en_temp_reg_0;
  wire [0:0]m_bscan_tck;
  wire shift_en;
  (* async_reg = "true" *) wire [2:0]shift_reg_in;
  wire \shift_reg_in[0]_i_1__1_n_0 ;
  wire \shift_reg_in[1]_i_1__1_n_0 ;
  wire \shift_reg_in_reg[0]_0 ;
  (* async_reg = "true" *) wire [2:0]stat_reg;
  (* async_reg = "true" *) wire [2:0]stat_reg_1;
  (* async_reg = "true" *) wire [2:0]stat_reg_2;
  (* async_reg = "true" *) wire [1:0]stat_reg_ld;
  wire stat_reg_ld_temp_1_i_1__1_n_0;
  wire stat_reg_ld_temp_1_reg_n_0;
  wire [2:0]\stat_reg_reg[2]_0 ;

  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFB800)) 
    iTDO_i_9
       (.I0(shift_reg_in[0]),
        .I1(shift_en),
        .I2(stat_reg_2[0]),
        .I3(icn_cmd_en_temp_reg_0),
        .I4(iTDO_i_4),
        .I5(iTDO_i_4_0),
        .O(\shift_reg_in_reg[0]_0 ));
  (* equivalent_register_removal = "no" *) 
  FDRE icn_cmd_din_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_din_temp_reg_0),
        .Q(icn_cmd_din_temp),
        .R(1'b0));
  FDRE icn_cmd_en_temp_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp_reg_0),
        .Q(icn_cmd_en_temp),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    shift_en_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(shift_en),
        .R(1'b0));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[0]_i_1__1 
       (.I0(shift_reg_in[1]),
        .I1(shift_en),
        .I2(stat_reg_2[1]),
        .O(\shift_reg_in[0]_i_1__1_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \shift_reg_in[1]_i_1__1 
       (.I0(shift_reg_in[2]),
        .I1(shift_en),
        .I2(stat_reg_2[2]),
        .O(\shift_reg_in[1]_i_1__1_n_0 ));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[0]_i_1__1_n_0 ),
        .Q(shift_reg_in[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(\shift_reg_in[1]_i_1__1_n_0 ),
        .Q(shift_reg_in[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(icn_cmd_en_temp),
        .D(icn_cmd_din_temp),
        .Q(shift_reg_in[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[0]),
        .Q(stat_reg_1[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[1]),
        .Q(stat_reg_1[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_1_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg[2]),
        .Q(stat_reg_1[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[0]),
        .Q(stat_reg_2[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[1]),
        .Q(stat_reg_2[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE \stat_reg_2_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(stat_reg_1[2]),
        .Q(stat_reg_2[2]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_ld_reg[0] 
       (.C(clk),
        .CE(1'b1),
        .D(icn_cmd_en_temp),
        .Q(stat_reg_ld[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_ld_reg[1] 
       (.C(clk),
        .CE(1'b1),
        .D(stat_reg_ld[0]),
        .Q(stat_reg_ld[1]),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    stat_reg_ld_temp_1_i_1__1
       (.I0(stat_reg_ld[1]),
        .O(stat_reg_ld_temp_1_i_1__1_n_0));
  FDRE stat_reg_ld_temp_1_reg
       (.C(clk),
        .CE(1'b1),
        .D(stat_reg_ld_temp_1_i_1__1_n_0),
        .Q(stat_reg_ld_temp_1_reg_n_0),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[0] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[2]_0 [0]),
        .Q(stat_reg[0]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[1] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[2]_0 [1]),
        .Q(stat_reg[1]),
        .R(1'b0));
  (* ASYNC_REG *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \stat_reg_reg[2] 
       (.C(clk),
        .CE(stat_reg_ld_temp_1_reg_n_0),
        .D(\stat_reg_reg[2]_0 [2]),
        .Q(stat_reg[2]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_sync
   (iSYNC,
    D,
    m_bscan_tck,
    iDATA_CMD);
  output iSYNC;
  input [0:0]D;
  input [0:0]m_bscan_tck;
  input iDATA_CMD;

  wire [0:0]D;
  wire SYNC_i_1_n_0;
  wire iDATA_CMD;
  wire \iGOT_SYNC/i__n_0 ;
  wire iSYNC;
  wire [6:0]iSYNC_WORD;
  wire \iSYNC_WORD[6]_i_1_n_0 ;
  wire [0:0]m_bscan_tck;

  LUT6 #(
    .INIT(64'hFFFFFFFF00000001)) 
    SYNC_i_1
       (.I0(\iGOT_SYNC/i__n_0 ),
        .I1(iSYNC_WORD[2]),
        .I2(iSYNC_WORD[6]),
        .I3(iSYNC_WORD[4]),
        .I4(iSYNC_WORD[1]),
        .I5(iSYNC),
        .O(SYNC_i_1_n_0));
  FDRE SYNC_reg
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(SYNC_i_1_n_0),
        .Q(iSYNC),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h7FFF)) 
    \iGOT_SYNC/i_ 
       (.I0(iSYNC_WORD[3]),
        .I1(D),
        .I2(iSYNC_WORD[0]),
        .I3(iSYNC_WORD[5]),
        .O(\iGOT_SYNC/i__n_0 ));
  LUT1 #(
    .INIT(2'h1)) 
    \iSYNC_WORD[6]_i_1 
       (.I0(iDATA_CMD),
        .O(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iSYNC_WORD[1]),
        .Q(iSYNC_WORD[0]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iSYNC_WORD[2]),
        .Q(iSYNC_WORD[1]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iSYNC_WORD[3]),
        .Q(iSYNC_WORD[2]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iSYNC_WORD[4]),
        .Q(iSYNC_WORD[3]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[4] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iSYNC_WORD[5]),
        .Q(iSYNC_WORD[4]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[5] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(iSYNC_WORD[6]),
        .Q(iSYNC_WORD[5]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
  FDRE \iSYNC_WORD_reg[6] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(D),
        .Q(iSYNC_WORD[6]),
        .R(\iSYNC_WORD[6]_i_1_n_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_wrfifo
   (sl_iport0_o,
    EMPTY_O,
    p_0_in,
    out,
    Q,
    RST_I,
    DIN_I,
    RD_EN_I,
    m_bscan_tck,
    clk);
  output [15:0]sl_iport0_o;
  output EMPTY_O;
  input p_0_in;
  input [0:0]out;
  input [3:0]Q;
  input RST_I;
  input [15:0]DIN_I;
  input RD_EN_I;
  input [0:0]m_bscan_tck;
  input clk;

  wire [15:0]DIN_I;
  wire EMPTY_O;
  wire [3:0]Q;
  wire RD_EN_I;
  wire RST_I;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_i_1_n_0 ;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_n_16 ;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_n_19 ;
  wire \SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_n_23 ;
  (* DONT_TOUCH *) wire clk;
  (* DONT_TOUCH *) wire [0:0]m_bscan_tck;
  wire [0:0]out;
  wire p_0_in;
  wire [15:0]sl_iport0_o;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_almost_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_almost_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_overflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_underflow_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_dbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_bready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_rready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wlast_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tlast_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_prog_empty_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_prog_full_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_rd_rst_busy_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_arready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_awready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_bvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rlast_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rvalid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_wready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axis_tready_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_sbiterr_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_valid_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_wr_ack_UNCONNECTED ;
  wire \NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_wr_rst_busy_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_rd_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_wr_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_rd_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_wr_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_rd_data_count_UNCONNECTED ;
  wire [4:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_wr_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_rd_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_wr_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_rd_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_wr_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_rd_data_count_UNCONNECTED ;
  wire [10:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_wr_data_count_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_data_count_UNCONNECTED ;
  wire [31:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_araddr_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arburst_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arcache_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arid_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arlen_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arlock_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arprot_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arqos_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arregion_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arsize_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_aruser_UNCONNECTED ;
  wire [31:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awaddr_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awburst_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awcache_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awid_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awlen_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awlock_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awprot_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awqos_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awregion_UNCONNECTED ;
  wire [2:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awsize_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awuser_UNCONNECTED ;
  wire [63:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wdata_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wid_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wstrb_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wuser_UNCONNECTED ;
  wire [63:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tdata_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tdest_UNCONNECTED ;
  wire [7:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tid_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tkeep_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tstrb_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tuser_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_rd_data_count_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_bid_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_bresp_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_buser_UNCONNECTED ;
  wire [63:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rdata_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rid_UNCONNECTED ;
  wire [1:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rresp_UNCONNECTED ;
  wire [0:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_ruser_UNCONNECTED ;
  wire [3:0]\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_wr_data_count_UNCONNECTED ;

  (* C_ADD_NGC_CONSTRAINT = "0" *) 
  (* C_APPLICATION_TYPE_AXIS = "0" *) 
  (* C_APPLICATION_TYPE_RACH = "0" *) 
  (* C_APPLICATION_TYPE_RDCH = "0" *) 
  (* C_APPLICATION_TYPE_WACH = "0" *) 
  (* C_APPLICATION_TYPE_WDCH = "0" *) 
  (* C_APPLICATION_TYPE_WRCH = "0" *) 
  (* C_AXIS_TDATA_WIDTH = "64" *) 
  (* C_AXIS_TDEST_WIDTH = "4" *) 
  (* C_AXIS_TID_WIDTH = "8" *) 
  (* C_AXIS_TKEEP_WIDTH = "4" *) 
  (* C_AXIS_TSTRB_WIDTH = "4" *) 
  (* C_AXIS_TUSER_WIDTH = "4" *) 
  (* C_AXIS_TYPE = "0" *) 
  (* C_AXI_ADDR_WIDTH = "32" *) 
  (* C_AXI_ARUSER_WIDTH = "1" *) 
  (* C_AXI_AWUSER_WIDTH = "1" *) 
  (* C_AXI_BUSER_WIDTH = "1" *) 
  (* C_AXI_DATA_WIDTH = "64" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_LEN_WIDTH = "8" *) 
  (* C_AXI_LOCK_WIDTH = "2" *) 
  (* C_AXI_RUSER_WIDTH = "1" *) 
  (* C_AXI_TYPE = "0" *) 
  (* C_AXI_WUSER_WIDTH = "1" *) 
  (* C_COMMON_CLOCK = "0" *) 
  (* C_COUNT_TYPE = "0" *) 
  (* C_DATA_COUNT_WIDTH = "4" *) 
  (* C_DEFAULT_VALUE = "BlankString" *) 
  (* C_DIN_WIDTH = "16" *) 
  (* C_DIN_WIDTH_AXIS = "1" *) 
  (* C_DIN_WIDTH_RACH = "32" *) 
  (* C_DIN_WIDTH_RDCH = "64" *) 
  (* C_DIN_WIDTH_WACH = "32" *) 
  (* C_DIN_WIDTH_WDCH = "64" *) 
  (* C_DIN_WIDTH_WRCH = "2" *) 
  (* C_DOUT_RST_VAL = "0" *) 
  (* C_DOUT_WIDTH = "16" *) 
  (* C_ENABLE_RLOCS = "0" *) 
  (* C_ENABLE_RST_SYNC = "1" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_ERROR_INJECTION_TYPE = "0" *) 
  (* C_ERROR_INJECTION_TYPE_AXIS = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_RDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WACH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WDCH = "0" *) 
  (* C_ERROR_INJECTION_TYPE_WRCH = "0" *) 
  (* C_FAMILY = "artix7" *) 
  (* C_FULL_FLAGS_RST_VAL = "0" *) 
  (* C_HAS_ALMOST_EMPTY = "0" *) 
  (* C_HAS_ALMOST_FULL = "0" *) 
  (* C_HAS_AXIS_TDATA = "0" *) 
  (* C_HAS_AXIS_TDEST = "0" *) 
  (* C_HAS_AXIS_TID = "0" *) 
  (* C_HAS_AXIS_TKEEP = "0" *) 
  (* C_HAS_AXIS_TLAST = "0" *) 
  (* C_HAS_AXIS_TREADY = "1" *) 
  (* C_HAS_AXIS_TSTRB = "0" *) 
  (* C_HAS_AXIS_TUSER = "0" *) 
  (* C_HAS_AXI_ARUSER = "0" *) 
  (* C_HAS_AXI_AWUSER = "0" *) 
  (* C_HAS_AXI_BUSER = "0" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_AXI_RD_CHANNEL = "0" *) 
  (* C_HAS_AXI_RUSER = "0" *) 
  (* C_HAS_AXI_WR_CHANNEL = "0" *) 
  (* C_HAS_AXI_WUSER = "0" *) 
  (* C_HAS_BACKUP = "0" *) 
  (* C_HAS_DATA_COUNT = "0" *) 
  (* C_HAS_DATA_COUNTS_AXIS = "0" *) 
  (* C_HAS_DATA_COUNTS_RACH = "0" *) 
  (* C_HAS_DATA_COUNTS_RDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WACH = "0" *) 
  (* C_HAS_DATA_COUNTS_WDCH = "0" *) 
  (* C_HAS_DATA_COUNTS_WRCH = "0" *) 
  (* C_HAS_INT_CLK = "0" *) 
  (* C_HAS_MASTER_CE = "0" *) 
  (* C_HAS_MEMINIT_FILE = "0" *) 
  (* C_HAS_OVERFLOW = "1" *) 
  (* C_HAS_PROG_FLAGS_AXIS = "0" *) 
  (* C_HAS_PROG_FLAGS_RACH = "0" *) 
  (* C_HAS_PROG_FLAGS_RDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WACH = "0" *) 
  (* C_HAS_PROG_FLAGS_WDCH = "0" *) 
  (* C_HAS_PROG_FLAGS_WRCH = "0" *) 
  (* C_HAS_RD_DATA_COUNT = "0" *) 
  (* C_HAS_RD_RST = "0" *) 
  (* C_HAS_RST = "1" *) 
  (* C_HAS_SLAVE_CE = "0" *) 
  (* C_HAS_SRST = "0" *) 
  (* C_HAS_UNDERFLOW = "1" *) 
  (* C_HAS_VALID = "0" *) 
  (* C_HAS_WR_ACK = "0" *) 
  (* C_HAS_WR_DATA_COUNT = "0" *) 
  (* C_HAS_WR_RST = "0" *) 
  (* C_IMPLEMENTATION_TYPE = "2" *) 
  (* C_IMPLEMENTATION_TYPE_AXIS = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_RDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WACH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WDCH = "1" *) 
  (* C_IMPLEMENTATION_TYPE_WRCH = "1" *) 
  (* C_INIT_WR_PNTR_VAL = "0" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_MEMORY_TYPE = "2" *) 
  (* C_MIF_FILE_NAME = "BlankString" *) 
  (* C_MSGON_VAL = "0" *) 
  (* C_OPTIMIZATION_MODE = "0" *) 
  (* C_OVERFLOW_LOW = "0" *) 
  (* C_POWER_SAVING_MODE = "0" *) 
  (* C_PRELOAD_LATENCY = "1" *) 
  (* C_PRELOAD_REGS = "0" *) 
  (* C_PRIM_FIFO_TYPE = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_AXIS = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_RACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_RDCH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WACH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WDCH = "512x36" *) 
  (* C_PRIM_FIFO_TYPE_WRCH = "512x36" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL = "2" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_AXIS = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_RDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WACH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WDCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_ASSERT_VAL_WRCH = "1022" *) 
  (* C_PROG_EMPTY_THRESH_NEGATE_VAL = "3" *) 
  (* C_PROG_EMPTY_TYPE = "0" *) 
  (* C_PROG_EMPTY_TYPE_AXIS = "0" *) 
  (* C_PROG_EMPTY_TYPE_RACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_RDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WACH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WDCH = "0" *) 
  (* C_PROG_EMPTY_TYPE_WRCH = "0" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL = "13" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_AXIS = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_RDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WACH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WDCH = "1023" *) 
  (* C_PROG_FULL_THRESH_ASSERT_VAL_WRCH = "1023" *) 
  (* C_PROG_FULL_THRESH_NEGATE_VAL = "12" *) 
  (* C_PROG_FULL_TYPE = "0" *) 
  (* C_PROG_FULL_TYPE_AXIS = "0" *) 
  (* C_PROG_FULL_TYPE_RACH = "0" *) 
  (* C_PROG_FULL_TYPE_RDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WACH = "0" *) 
  (* C_PROG_FULL_TYPE_WDCH = "0" *) 
  (* C_PROG_FULL_TYPE_WRCH = "0" *) 
  (* C_RACH_TYPE = "0" *) 
  (* C_RDCH_TYPE = "0" *) 
  (* C_RD_DATA_COUNT_WIDTH = "4" *) 
  (* C_RD_DEPTH = "16" *) 
  (* C_RD_FREQ = "1" *) 
  (* C_RD_PNTR_WIDTH = "4" *) 
  (* C_REG_SLICE_MODE_AXIS = "0" *) 
  (* C_REG_SLICE_MODE_RACH = "0" *) 
  (* C_REG_SLICE_MODE_RDCH = "0" *) 
  (* C_REG_SLICE_MODE_WACH = "0" *) 
  (* C_REG_SLICE_MODE_WDCH = "0" *) 
  (* C_REG_SLICE_MODE_WRCH = "0" *) 
  (* C_SELECT_XPM = "0" *) 
  (* C_SYNCHRONIZER_STAGE = "2" *) 
  (* C_UNDERFLOW_LOW = "0" *) 
  (* C_USE_COMMON_OVERFLOW = "0" *) 
  (* C_USE_COMMON_UNDERFLOW = "0" *) 
  (* C_USE_DEFAULT_SETTINGS = "0" *) 
  (* C_USE_DOUT_RST = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_ECC_AXIS = "0" *) 
  (* C_USE_ECC_RACH = "0" *) 
  (* C_USE_ECC_RDCH = "0" *) 
  (* C_USE_ECC_WACH = "0" *) 
  (* C_USE_ECC_WDCH = "0" *) 
  (* C_USE_ECC_WRCH = "0" *) 
  (* C_USE_EMBEDDED_REG = "0" *) 
  (* C_USE_FIFO16_FLAGS = "0" *) 
  (* C_USE_FWFT_DATA_COUNT = "0" *) 
  (* C_USE_PIPELINE_REG = "0" *) 
  (* C_VALID_LOW = "0" *) 
  (* C_WACH_TYPE = "0" *) 
  (* C_WDCH_TYPE = "0" *) 
  (* C_WRCH_TYPE = "0" *) 
  (* C_WR_ACK_LOW = "0" *) 
  (* C_WR_DATA_COUNT_WIDTH = "4" *) 
  (* C_WR_DEPTH = "16" *) 
  (* C_WR_DEPTH_AXIS = "1024" *) 
  (* C_WR_DEPTH_RACH = "16" *) 
  (* C_WR_DEPTH_RDCH = "1024" *) 
  (* C_WR_DEPTH_WACH = "16" *) 
  (* C_WR_DEPTH_WDCH = "1024" *) 
  (* C_WR_DEPTH_WRCH = "16" *) 
  (* C_WR_FREQ = "1" *) 
  (* C_WR_PNTR_WIDTH = "4" *) 
  (* C_WR_PNTR_WIDTH_AXIS = "10" *) 
  (* C_WR_PNTR_WIDTH_RACH = "4" *) 
  (* C_WR_PNTR_WIDTH_RDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WACH = "4" *) 
  (* C_WR_PNTR_WIDTH_WDCH = "10" *) 
  (* C_WR_PNTR_WIDTH_WRCH = "4" *) 
  (* C_WR_RESPONSE_LATENCY = "1" *) 
  (* DONT_TOUCH *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_fifo_generator_v13_1_4 \SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst 
       (.almost_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_almost_empty_UNCONNECTED ),
        .almost_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_almost_full_UNCONNECTED ),
        .axi_ar_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_data_count_UNCONNECTED [4:0]),
        .axi_ar_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_dbiterr_UNCONNECTED ),
        .axi_ar_injectdbiterr(1'b0),
        .axi_ar_injectsbiterr(1'b0),
        .axi_ar_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_overflow_UNCONNECTED ),
        .axi_ar_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_prog_empty_UNCONNECTED ),
        .axi_ar_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_prog_full_UNCONNECTED ),
        .axi_ar_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_ar_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_rd_data_count_UNCONNECTED [4:0]),
        .axi_ar_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_sbiterr_UNCONNECTED ),
        .axi_ar_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_underflow_UNCONNECTED ),
        .axi_ar_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_ar_wr_data_count_UNCONNECTED [4:0]),
        .axi_aw_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_data_count_UNCONNECTED [4:0]),
        .axi_aw_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_dbiterr_UNCONNECTED ),
        .axi_aw_injectdbiterr(1'b0),
        .axi_aw_injectsbiterr(1'b0),
        .axi_aw_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_overflow_UNCONNECTED ),
        .axi_aw_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_prog_empty_UNCONNECTED ),
        .axi_aw_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_prog_full_UNCONNECTED ),
        .axi_aw_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_aw_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_rd_data_count_UNCONNECTED [4:0]),
        .axi_aw_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_sbiterr_UNCONNECTED ),
        .axi_aw_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_underflow_UNCONNECTED ),
        .axi_aw_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_aw_wr_data_count_UNCONNECTED [4:0]),
        .axi_b_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_data_count_UNCONNECTED [4:0]),
        .axi_b_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_dbiterr_UNCONNECTED ),
        .axi_b_injectdbiterr(1'b0),
        .axi_b_injectsbiterr(1'b0),
        .axi_b_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_overflow_UNCONNECTED ),
        .axi_b_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_prog_empty_UNCONNECTED ),
        .axi_b_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_prog_full_UNCONNECTED ),
        .axi_b_prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .axi_b_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_rd_data_count_UNCONNECTED [4:0]),
        .axi_b_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_sbiterr_UNCONNECTED ),
        .axi_b_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_underflow_UNCONNECTED ),
        .axi_b_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_b_wr_data_count_UNCONNECTED [4:0]),
        .axi_r_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_data_count_UNCONNECTED [10:0]),
        .axi_r_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_dbiterr_UNCONNECTED ),
        .axi_r_injectdbiterr(1'b0),
        .axi_r_injectsbiterr(1'b0),
        .axi_r_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_overflow_UNCONNECTED ),
        .axi_r_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_prog_empty_UNCONNECTED ),
        .axi_r_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_prog_full_UNCONNECTED ),
        .axi_r_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_r_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_rd_data_count_UNCONNECTED [10:0]),
        .axi_r_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_sbiterr_UNCONNECTED ),
        .axi_r_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_underflow_UNCONNECTED ),
        .axi_r_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_r_wr_data_count_UNCONNECTED [10:0]),
        .axi_w_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_data_count_UNCONNECTED [10:0]),
        .axi_w_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_dbiterr_UNCONNECTED ),
        .axi_w_injectdbiterr(1'b0),
        .axi_w_injectsbiterr(1'b0),
        .axi_w_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_overflow_UNCONNECTED ),
        .axi_w_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_prog_empty_UNCONNECTED ),
        .axi_w_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_prog_full_UNCONNECTED ),
        .axi_w_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axi_w_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_rd_data_count_UNCONNECTED [10:0]),
        .axi_w_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_sbiterr_UNCONNECTED ),
        .axi_w_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_underflow_UNCONNECTED ),
        .axi_w_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axi_w_wr_data_count_UNCONNECTED [10:0]),
        .axis_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_data_count_UNCONNECTED [10:0]),
        .axis_dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_dbiterr_UNCONNECTED ),
        .axis_injectdbiterr(1'b0),
        .axis_injectsbiterr(1'b0),
        .axis_overflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_overflow_UNCONNECTED ),
        .axis_prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_prog_empty_UNCONNECTED ),
        .axis_prog_empty_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_prog_full_UNCONNECTED ),
        .axis_prog_full_thresh({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .axis_rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_rd_data_count_UNCONNECTED [10:0]),
        .axis_sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_sbiterr_UNCONNECTED ),
        .axis_underflow(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_underflow_UNCONNECTED ),
        .axis_wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_axis_wr_data_count_UNCONNECTED [10:0]),
        .backup(1'b0),
        .backup_marker(1'b0),
        .clk(1'b0),
        .data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_data_count_UNCONNECTED [3:0]),
        .dbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_dbiterr_UNCONNECTED ),
        .din(DIN_I),
        .dout(sl_iport0_o),
        .empty(EMPTY_O),
        .full(\SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_n_16 ),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .int_clk(1'b0),
        .m_aclk(1'b0),
        .m_aclk_en(1'b0),
        .m_axi_araddr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_araddr_UNCONNECTED [31:0]),
        .m_axi_arburst(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arburst_UNCONNECTED [1:0]),
        .m_axi_arcache(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arcache_UNCONNECTED [3:0]),
        .m_axi_arid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arid_UNCONNECTED [3:0]),
        .m_axi_arlen(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arlen_UNCONNECTED [7:0]),
        .m_axi_arlock(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arlock_UNCONNECTED [1:0]),
        .m_axi_arprot(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arprot_UNCONNECTED [2:0]),
        .m_axi_arqos(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arqos_UNCONNECTED [3:0]),
        .m_axi_arready(1'b0),
        .m_axi_arregion(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arregion_UNCONNECTED [3:0]),
        .m_axi_arsize(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arsize_UNCONNECTED [2:0]),
        .m_axi_aruser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_aruser_UNCONNECTED [0]),
        .m_axi_arvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_arvalid_UNCONNECTED ),
        .m_axi_awaddr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awaddr_UNCONNECTED [31:0]),
        .m_axi_awburst(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awburst_UNCONNECTED [1:0]),
        .m_axi_awcache(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awcache_UNCONNECTED [3:0]),
        .m_axi_awid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awid_UNCONNECTED [3:0]),
        .m_axi_awlen(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awlen_UNCONNECTED [7:0]),
        .m_axi_awlock(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awlock_UNCONNECTED [1:0]),
        .m_axi_awprot(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awprot_UNCONNECTED [2:0]),
        .m_axi_awqos(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awqos_UNCONNECTED [3:0]),
        .m_axi_awready(1'b0),
        .m_axi_awregion(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awregion_UNCONNECTED [3:0]),
        .m_axi_awsize(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awsize_UNCONNECTED [2:0]),
        .m_axi_awuser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awuser_UNCONNECTED [0]),
        .m_axi_awvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_awvalid_UNCONNECTED ),
        .m_axi_bid({1'b0,1'b0,1'b0,1'b0}),
        .m_axi_bready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_bready_UNCONNECTED ),
        .m_axi_bresp({1'b0,1'b0}),
        .m_axi_buser(1'b0),
        .m_axi_bvalid(1'b0),
        .m_axi_rdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rid({1'b0,1'b0,1'b0,1'b0}),
        .m_axi_rlast(1'b0),
        .m_axi_rready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_rready_UNCONNECTED ),
        .m_axi_rresp({1'b0,1'b0}),
        .m_axi_ruser(1'b0),
        .m_axi_rvalid(1'b0),
        .m_axi_wdata(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wdata_UNCONNECTED [63:0]),
        .m_axi_wid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wid_UNCONNECTED [3:0]),
        .m_axi_wlast(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wlast_UNCONNECTED ),
        .m_axi_wready(1'b0),
        .m_axi_wstrb(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wstrb_UNCONNECTED [7:0]),
        .m_axi_wuser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wuser_UNCONNECTED [0]),
        .m_axi_wvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axi_wvalid_UNCONNECTED ),
        .m_axis_tdata(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tdata_UNCONNECTED [63:0]),
        .m_axis_tdest(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tdest_UNCONNECTED [3:0]),
        .m_axis_tid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tid_UNCONNECTED [7:0]),
        .m_axis_tkeep(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tkeep_UNCONNECTED [3:0]),
        .m_axis_tlast(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tlast_UNCONNECTED ),
        .m_axis_tready(1'b0),
        .m_axis_tstrb(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tstrb_UNCONNECTED [3:0]),
        .m_axis_tuser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tuser_UNCONNECTED [3:0]),
        .m_axis_tvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_m_axis_tvalid_UNCONNECTED ),
        .overflow(\SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_n_19 ),
        .prog_empty(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_prog_empty_UNCONNECTED ),
        .prog_empty_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_empty_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .prog_full(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_prog_full_UNCONNECTED ),
        .prog_full_thresh({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_assert({1'b0,1'b0,1'b0,1'b0}),
        .prog_full_thresh_negate({1'b0,1'b0,1'b0,1'b0}),
        .rd_clk(clk),
        .rd_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_rd_data_count_UNCONNECTED [3:0]),
        .rd_en(RD_EN_I),
        .rd_rst(1'b0),
        .rd_rst_busy(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_rd_rst_busy_UNCONNECTED ),
        .rst(RST_I),
        .s_aclk(1'b0),
        .s_aclk_en(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlock({1'b0,1'b0}),
        .s_axi_arprot({1'b0,1'b0,1'b0}),
        .s_axi_arqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_arready_UNCONNECTED ),
        .s_axi_arregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_aruser(1'b0),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awcache({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlock({1'b0,1'b0}),
        .s_axi_awprot({1'b0,1'b0,1'b0}),
        .s_axi_awqos({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_awready_UNCONNECTED ),
        .s_axi_awregion({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awuser(1'b0),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_bid_UNCONNECTED [3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_bresp_UNCONNECTED [1:0]),
        .s_axi_buser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_buser_UNCONNECTED [0]),
        .s_axi_bvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_bvalid_UNCONNECTED ),
        .s_axi_rdata(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rdata_UNCONNECTED [63:0]),
        .s_axi_rid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rid_UNCONNECTED [3:0]),
        .s_axi_rlast(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rlast_UNCONNECTED ),
        .s_axi_rready(1'b0),
        .s_axi_rresp(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rresp_UNCONNECTED [1:0]),
        .s_axi_ruser(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_ruser_UNCONNECTED [0]),
        .s_axi_rvalid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_rvalid_UNCONNECTED ),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axi_wready_UNCONNECTED ),
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wuser(1'b0),
        .s_axi_wvalid(1'b0),
        .s_axis_tdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tdest({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tid({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tkeep({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tlast(1'b0),
        .s_axis_tready(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_s_axis_tready_UNCONNECTED ),
        .s_axis_tstrb({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tuser({1'b0,1'b0,1'b0,1'b0}),
        .s_axis_tvalid(1'b0),
        .sbiterr(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_sbiterr_UNCONNECTED ),
        .sleep(1'b0),
        .srst(1'b0),
        .underflow(\SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_n_23 ),
        .valid(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_valid_UNCONNECTED ),
        .wr_ack(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_wr_ack_UNCONNECTED ),
        .wr_clk(m_bscan_tck),
        .wr_data_count(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_wr_data_count_UNCONNECTED [3:0]),
        .wr_en(\SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_i_1_n_0 ),
        .wr_rst(1'b0),
        .wr_rst_busy(\NLW_SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_wr_rst_busy_UNCONNECTED ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_i_1 
       (.I0(p_0_in),
        .I1(out),
        .I2(Q[2]),
        .I3(Q[1]),
        .I4(Q[0]),
        .I5(Q[3]),
        .O(\SUBCORE_FIFO.xsdbm_v3_0_0_wrfifo_inst_i_1_n_0 ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_wrreg
   (sl_iport0_o,
    EMPTY_O,
    Q,
    p_0_in,
    out,
    RST_I,
    D,
    RD_EN_I,
    m_bscan_tck,
    clk,
    E,
    SR);
  output [15:0]sl_iport0_o;
  output EMPTY_O;
  output [0:0]Q;
  input p_0_in;
  input [0:0]out;
  input RST_I;
  input [0:0]D;
  input RD_EN_I;
  input [0:0]m_bscan_tck;
  input clk;
  input [0:0]E;
  input [0:0]SR;

  wire [0:0]D;
  wire [0:0]E;
  wire EMPTY_O;
  wire [0:0]Q;
  wire RD_EN_I;
  wire RST_I;
  wire [0:0]SR;
  wire clk;
  wire [14:0]fifo_din;
  wire [0:0]m_bscan_tck;
  wire [0:0]out;
  wire p_0_in;
  wire [3:0]p_0_in__1;
  wire [3:0]shift_bit_count_reg;
  wire [15:0]sl_iport0_o;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_wrfifo U_WR_FIFO
       (.DIN_I({D,fifo_din}),
        .EMPTY_O(EMPTY_O),
        .Q(shift_bit_count_reg),
        .RD_EN_I(RD_EN_I),
        .RST_I(RST_I),
        .clk(clk),
        .m_bscan_tck(m_bscan_tck),
        .out(out),
        .p_0_in(p_0_in),
        .sl_iport0_o(sl_iport0_o));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \shift_bit_count[0]_i_1 
       (.I0(shift_bit_count_reg[0]),
        .O(p_0_in__1[0]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \shift_bit_count[1]_i_1 
       (.I0(shift_bit_count_reg[0]),
        .I1(shift_bit_count_reg[1]),
        .O(p_0_in__1[1]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \shift_bit_count[2]_i_1 
       (.I0(shift_bit_count_reg[2]),
        .I1(shift_bit_count_reg[1]),
        .I2(shift_bit_count_reg[0]),
        .O(p_0_in__1[2]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \shift_bit_count[3]_i_2 
       (.I0(shift_bit_count_reg[3]),
        .I1(shift_bit_count_reg[0]),
        .I2(shift_bit_count_reg[1]),
        .I3(shift_bit_count_reg[2]),
        .O(p_0_in__1[3]));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[0] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__1[0]),
        .Q(shift_bit_count_reg[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[1] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__1[1]),
        .Q(shift_bit_count_reg[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[2] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__1[2]),
        .Q(shift_bit_count_reg[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \shift_bit_count_reg[3] 
       (.C(m_bscan_tck),
        .CE(1'b1),
        .D(p_0_in__1[3]),
        .Q(shift_bit_count_reg[3]),
        .R(SR));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[0] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[0]),
        .Q(Q));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[10] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[10]),
        .Q(fifo_din[9]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[11] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[11]),
        .Q(fifo_din[10]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[12] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[12]),
        .Q(fifo_din[11]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[13] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[13]),
        .Q(fifo_din[12]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[14] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[14]),
        .Q(fifo_din[13]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[15] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(D),
        .Q(fifo_din[14]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[1] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[1]),
        .Q(fifo_din[0]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[2] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[2]),
        .Q(fifo_din[1]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[3] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[3]),
        .Q(fifo_din[2]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[4] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[4]),
        .Q(fifo_din[3]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[5] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[5]),
        .Q(fifo_din[4]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[6] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[6]),
        .Q(fifo_din[5]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[7] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[7]),
        .Q(fifo_din[6]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[8] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[8]),
        .Q(fifo_din[7]));
  FDCE #(
    .INIT(1'b0)) 
    \shift_reg_in_reg[9] 
       (.C(m_bscan_tck),
        .CE(E),
        .CLR(RST_I),
        .D(fifo_din[9]),
        .Q(fifo_din[8]));
endmodule

(* C_BSCANID = "32'b00000100100100000000001000100000" *) (* C_BSCAN_MODE = "0" *) (* C_BSCAN_MODE_WITH_CORE = "0" *) 
(* C_BUILD_REVISION = "0" *) (* C_CLKFBOUT_MULT_F = "10.000000" *) (* C_CLKOUT0_DIVIDE_F = "10.000000" *) 
(* C_CLK_INPUT_FREQ_HZ = "32'b00010001111000011010001100000000" *) (* C_CORE_MAJOR_VER = "1" *) (* C_CORE_MINOR_ALPHA_VER = "97" *) 
(* C_CORE_MINOR_VER = "0" *) (* C_CORE_TYPE = "1" *) (* C_DCLK_HAS_RESET = "0" *) 
(* C_DIVCLK_DIVIDE = "3" *) (* C_ENABLE_CLK_DIVIDER = "0" *) (* C_EN_BSCANID_VEC = "0" *) 
(* C_EN_INT_SIM = "1" *) (* C_FIFO_STYLE = "SUBCORE" *) (* C_MAJOR_VERSION = "14" *) 
(* C_MINOR_VERSION = "1" *) (* C_NUM_BSCAN_MASTER_PORTS = "0" *) (* C_TWO_PRIM_MODE = "0" *) 
(* C_USER_SCAN_CHAIN = "1" *) (* C_USER_SCAN_CHAIN1 = "1" *) (* C_USE_BUFR = "0" *) 
(* C_USE_EXT_BSCAN = "0" *) (* C_USE_STARTUP_CLK = "0" *) (* C_XDEVICEFAMILY = "artix7" *) 
(* C_XSDB_NUM_SLAVES = "2" *) (* C_XSDB_PERIOD_FRC = "0" *) (* C_XSDB_PERIOD_INT = "10" *) 
(* dont_touch = "true" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_xsdbm
   (sl_iport0_o,
    sl_iport1_o,
    sl_iport2_o,
    sl_iport3_o,
    sl_iport4_o,
    sl_iport5_o,
    sl_iport6_o,
    sl_iport7_o,
    sl_iport8_o,
    sl_iport9_o,
    sl_iport10_o,
    sl_iport11_o,
    sl_iport12_o,
    sl_iport13_o,
    sl_iport14_o,
    sl_iport15_o,
    sl_iport16_o,
    sl_iport17_o,
    sl_iport18_o,
    sl_iport19_o,
    sl_iport20_o,
    sl_iport21_o,
    sl_iport22_o,
    sl_iport23_o,
    sl_iport24_o,
    sl_iport25_o,
    sl_iport26_o,
    sl_iport27_o,
    sl_iport28_o,
    sl_iport29_o,
    sl_iport30_o,
    sl_iport31_o,
    sl_iport32_o,
    sl_iport33_o,
    sl_iport34_o,
    sl_iport35_o,
    sl_iport36_o,
    sl_iport37_o,
    sl_iport38_o,
    sl_iport39_o,
    sl_iport40_o,
    sl_iport41_o,
    sl_iport42_o,
    sl_iport43_o,
    sl_iport44_o,
    sl_iport45_o,
    sl_iport46_o,
    sl_iport47_o,
    sl_iport48_o,
    sl_iport49_o,
    sl_iport50_o,
    sl_iport51_o,
    sl_iport52_o,
    sl_iport53_o,
    sl_iport54_o,
    sl_iport55_o,
    sl_iport56_o,
    sl_iport57_o,
    sl_iport58_o,
    sl_iport59_o,
    sl_iport60_o,
    sl_iport61_o,
    sl_iport62_o,
    sl_iport63_o,
    sl_iport64_o,
    sl_iport65_o,
    sl_iport66_o,
    sl_iport67_o,
    sl_iport68_o,
    sl_iport69_o,
    sl_iport70_o,
    sl_iport71_o,
    sl_iport72_o,
    sl_iport73_o,
    sl_iport74_o,
    sl_iport75_o,
    sl_iport76_o,
    sl_iport77_o,
    sl_iport78_o,
    sl_iport79_o,
    sl_iport80_o,
    sl_iport81_o,
    sl_iport82_o,
    sl_iport83_o,
    sl_iport84_o,
    sl_iport85_o,
    sl_iport86_o,
    sl_iport87_o,
    sl_iport88_o,
    sl_iport89_o,
    sl_iport90_o,
    sl_iport91_o,
    sl_iport92_o,
    sl_iport93_o,
    sl_iport94_o,
    sl_iport95_o,
    sl_iport96_o,
    sl_iport97_o,
    sl_iport98_o,
    sl_iport99_o,
    sl_iport100_o,
    sl_iport101_o,
    sl_iport102_o,
    sl_iport103_o,
    sl_iport104_o,
    sl_iport105_o,
    sl_iport106_o,
    sl_iport107_o,
    sl_iport108_o,
    sl_iport109_o,
    sl_iport110_o,
    sl_iport111_o,
    sl_iport112_o,
    sl_iport113_o,
    sl_iport114_o,
    sl_iport115_o,
    sl_iport116_o,
    sl_iport117_o,
    sl_iport118_o,
    sl_iport119_o,
    sl_iport120_o,
    sl_iport121_o,
    sl_iport122_o,
    sl_iport123_o,
    sl_iport124_o,
    sl_iport125_o,
    sl_iport126_o,
    sl_iport127_o,
    sl_iport128_o,
    sl_iport129_o,
    sl_iport130_o,
    sl_iport131_o,
    sl_iport132_o,
    sl_iport133_o,
    sl_iport134_o,
    sl_iport135_o,
    sl_iport136_o,
    sl_iport137_o,
    sl_iport138_o,
    sl_iport139_o,
    sl_iport140_o,
    sl_iport141_o,
    sl_iport142_o,
    sl_iport143_o,
    sl_iport144_o,
    sl_iport145_o,
    sl_iport146_o,
    sl_iport147_o,
    sl_iport148_o,
    sl_iport149_o,
    sl_iport150_o,
    sl_iport151_o,
    sl_iport152_o,
    sl_iport153_o,
    sl_iport154_o,
    sl_iport155_o,
    sl_iport156_o,
    sl_iport157_o,
    sl_iport158_o,
    sl_iport159_o,
    sl_iport160_o,
    sl_iport161_o,
    sl_iport162_o,
    sl_iport163_o,
    sl_iport164_o,
    sl_iport165_o,
    sl_iport166_o,
    sl_iport167_o,
    sl_iport168_o,
    sl_iport169_o,
    sl_iport170_o,
    sl_iport171_o,
    sl_iport172_o,
    sl_iport173_o,
    sl_iport174_o,
    sl_iport175_o,
    sl_iport176_o,
    sl_iport177_o,
    sl_iport178_o,
    sl_iport179_o,
    sl_iport180_o,
    sl_iport181_o,
    sl_iport182_o,
    sl_iport183_o,
    sl_iport184_o,
    sl_iport185_o,
    sl_iport186_o,
    sl_iport187_o,
    sl_iport188_o,
    sl_iport189_o,
    sl_iport190_o,
    sl_iport191_o,
    sl_iport192_o,
    sl_iport193_o,
    sl_iport194_o,
    sl_iport195_o,
    sl_iport196_o,
    sl_iport197_o,
    sl_iport198_o,
    sl_iport199_o,
    sl_iport200_o,
    sl_iport201_o,
    sl_iport202_o,
    sl_iport203_o,
    sl_iport204_o,
    sl_iport205_o,
    sl_iport206_o,
    sl_iport207_o,
    sl_iport208_o,
    sl_iport209_o,
    sl_iport210_o,
    sl_iport211_o,
    sl_iport212_o,
    sl_iport213_o,
    sl_iport214_o,
    sl_iport215_o,
    sl_iport216_o,
    sl_iport217_o,
    sl_iport218_o,
    sl_iport219_o,
    sl_iport220_o,
    sl_iport221_o,
    sl_iport222_o,
    sl_iport223_o,
    sl_iport224_o,
    sl_iport225_o,
    sl_iport226_o,
    sl_iport227_o,
    sl_iport228_o,
    sl_iport229_o,
    sl_iport230_o,
    sl_iport231_o,
    sl_iport232_o,
    sl_iport233_o,
    sl_iport234_o,
    sl_iport235_o,
    sl_iport236_o,
    sl_iport237_o,
    sl_iport238_o,
    sl_iport239_o,
    sl_iport240_o,
    sl_iport241_o,
    sl_iport242_o,
    sl_iport243_o,
    sl_iport244_o,
    sl_iport245_o,
    sl_iport246_o,
    sl_iport247_o,
    sl_iport248_o,
    sl_iport249_o,
    sl_iport250_o,
    sl_iport251_o,
    sl_iport252_o,
    sl_iport253_o,
    sl_iport254_o,
    sl_iport255_o,
    sl_oport0_i,
    sl_oport1_i,
    sl_oport2_i,
    sl_oport3_i,
    sl_oport4_i,
    sl_oport5_i,
    sl_oport6_i,
    sl_oport7_i,
    sl_oport8_i,
    sl_oport9_i,
    sl_oport10_i,
    sl_oport11_i,
    sl_oport12_i,
    sl_oport13_i,
    sl_oport14_i,
    sl_oport15_i,
    sl_oport16_i,
    sl_oport17_i,
    sl_oport18_i,
    sl_oport19_i,
    sl_oport20_i,
    sl_oport21_i,
    sl_oport22_i,
    sl_oport23_i,
    sl_oport24_i,
    sl_oport25_i,
    sl_oport26_i,
    sl_oport27_i,
    sl_oport28_i,
    sl_oport29_i,
    sl_oport30_i,
    sl_oport31_i,
    sl_oport32_i,
    sl_oport33_i,
    sl_oport34_i,
    sl_oport35_i,
    sl_oport36_i,
    sl_oport37_i,
    sl_oport38_i,
    sl_oport39_i,
    sl_oport40_i,
    sl_oport41_i,
    sl_oport42_i,
    sl_oport43_i,
    sl_oport44_i,
    sl_oport45_i,
    sl_oport46_i,
    sl_oport47_i,
    sl_oport48_i,
    sl_oport49_i,
    sl_oport50_i,
    sl_oport51_i,
    sl_oport52_i,
    sl_oport53_i,
    sl_oport54_i,
    sl_oport55_i,
    sl_oport56_i,
    sl_oport57_i,
    sl_oport58_i,
    sl_oport59_i,
    sl_oport60_i,
    sl_oport61_i,
    sl_oport62_i,
    sl_oport63_i,
    sl_oport64_i,
    sl_oport65_i,
    sl_oport66_i,
    sl_oport67_i,
    sl_oport68_i,
    sl_oport69_i,
    sl_oport70_i,
    sl_oport71_i,
    sl_oport72_i,
    sl_oport73_i,
    sl_oport74_i,
    sl_oport75_i,
    sl_oport76_i,
    sl_oport77_i,
    sl_oport78_i,
    sl_oport79_i,
    sl_oport80_i,
    sl_oport81_i,
    sl_oport82_i,
    sl_oport83_i,
    sl_oport84_i,
    sl_oport85_i,
    sl_oport86_i,
    sl_oport87_i,
    sl_oport88_i,
    sl_oport89_i,
    sl_oport90_i,
    sl_oport91_i,
    sl_oport92_i,
    sl_oport93_i,
    sl_oport94_i,
    sl_oport95_i,
    sl_oport96_i,
    sl_oport97_i,
    sl_oport98_i,
    sl_oport99_i,
    sl_oport100_i,
    sl_oport101_i,
    sl_oport102_i,
    sl_oport103_i,
    sl_oport104_i,
    sl_oport105_i,
    sl_oport106_i,
    sl_oport107_i,
    sl_oport108_i,
    sl_oport109_i,
    sl_oport110_i,
    sl_oport111_i,
    sl_oport112_i,
    sl_oport113_i,
    sl_oport114_i,
    sl_oport115_i,
    sl_oport116_i,
    sl_oport117_i,
    sl_oport118_i,
    sl_oport119_i,
    sl_oport120_i,
    sl_oport121_i,
    sl_oport122_i,
    sl_oport123_i,
    sl_oport124_i,
    sl_oport125_i,
    sl_oport126_i,
    sl_oport127_i,
    sl_oport128_i,
    sl_oport129_i,
    sl_oport130_i,
    sl_oport131_i,
    sl_oport132_i,
    sl_oport133_i,
    sl_oport134_i,
    sl_oport135_i,
    sl_oport136_i,
    sl_oport137_i,
    sl_oport138_i,
    sl_oport139_i,
    sl_oport140_i,
    sl_oport141_i,
    sl_oport142_i,
    sl_oport143_i,
    sl_oport144_i,
    sl_oport145_i,
    sl_oport146_i,
    sl_oport147_i,
    sl_oport148_i,
    sl_oport149_i,
    sl_oport150_i,
    sl_oport151_i,
    sl_oport152_i,
    sl_oport153_i,
    sl_oport154_i,
    sl_oport155_i,
    sl_oport156_i,
    sl_oport157_i,
    sl_oport158_i,
    sl_oport159_i,
    sl_oport160_i,
    sl_oport161_i,
    sl_oport162_i,
    sl_oport163_i,
    sl_oport164_i,
    sl_oport165_i,
    sl_oport166_i,
    sl_oport167_i,
    sl_oport168_i,
    sl_oport169_i,
    sl_oport170_i,
    sl_oport171_i,
    sl_oport172_i,
    sl_oport173_i,
    sl_oport174_i,
    sl_oport175_i,
    sl_oport176_i,
    sl_oport177_i,
    sl_oport178_i,
    sl_oport179_i,
    sl_oport180_i,
    sl_oport181_i,
    sl_oport182_i,
    sl_oport183_i,
    sl_oport184_i,
    sl_oport185_i,
    sl_oport186_i,
    sl_oport187_i,
    sl_oport188_i,
    sl_oport189_i,
    sl_oport190_i,
    sl_oport191_i,
    sl_oport192_i,
    sl_oport193_i,
    sl_oport194_i,
    sl_oport195_i,
    sl_oport196_i,
    sl_oport197_i,
    sl_oport198_i,
    sl_oport199_i,
    sl_oport200_i,
    sl_oport201_i,
    sl_oport202_i,
    sl_oport203_i,
    sl_oport204_i,
    sl_oport205_i,
    sl_oport206_i,
    sl_oport207_i,
    sl_oport208_i,
    sl_oport209_i,
    sl_oport210_i,
    sl_oport211_i,
    sl_oport212_i,
    sl_oport213_i,
    sl_oport214_i,
    sl_oport215_i,
    sl_oport216_i,
    sl_oport217_i,
    sl_oport218_i,
    sl_oport219_i,
    sl_oport220_i,
    sl_oport221_i,
    sl_oport222_i,
    sl_oport223_i,
    sl_oport224_i,
    sl_oport225_i,
    sl_oport226_i,
    sl_oport227_i,
    sl_oport228_i,
    sl_oport229_i,
    sl_oport230_i,
    sl_oport231_i,
    sl_oport232_i,
    sl_oport233_i,
    sl_oport234_i,
    sl_oport235_i,
    sl_oport236_i,
    sl_oport237_i,
    sl_oport238_i,
    sl_oport239_i,
    sl_oport240_i,
    sl_oport241_i,
    sl_oport242_i,
    sl_oport243_i,
    sl_oport244_i,
    sl_oport245_i,
    sl_oport246_i,
    sl_oport247_i,
    sl_oport248_i,
    sl_oport249_i,
    sl_oport250_i,
    sl_oport251_i,
    sl_oport252_i,
    sl_oport253_i,
    sl_oport254_i,
    sl_oport255_i,
    update_0,
    capture_0,
    reset_0,
    runtest_0,
    tms_0,
    tck_0,
    tdi_0,
    sel_0,
    shift_0,
    drck_0,
    tdo_0,
    update_1,
    capture_1,
    reset_1,
    runtest_1,
    tms_1,
    tck_1,
    tdi_1,
    sel_1,
    shift_1,
    drck_1,
    tdo_1,
    update_2,
    capture_2,
    reset_2,
    runtest_2,
    tms_2,
    tck_2,
    tdi_2,
    sel_2,
    shift_2,
    drck_2,
    tdo_2,
    update_3,
    capture_3,
    reset_3,
    runtest_3,
    tms_3,
    tck_3,
    tdi_3,
    sel_3,
    shift_3,
    drck_3,
    tdo_3,
    update_4,
    capture_4,
    reset_4,
    runtest_4,
    tms_4,
    tck_4,
    tdi_4,
    sel_4,
    shift_4,
    drck_4,
    tdo_4,
    update_5,
    capture_5,
    reset_5,
    runtest_5,
    tms_5,
    tck_5,
    tdi_5,
    sel_5,
    shift_5,
    drck_5,
    tdo_5,
    update_6,
    capture_6,
    reset_6,
    runtest_6,
    tms_6,
    tck_6,
    tdi_6,
    sel_6,
    shift_6,
    drck_6,
    tdo_6,
    update_7,
    capture_7,
    reset_7,
    runtest_7,
    tms_7,
    tck_7,
    tdi_7,
    sel_7,
    shift_7,
    drck_7,
    tdo_7,
    update_8,
    capture_8,
    reset_8,
    runtest_8,
    tms_8,
    tck_8,
    tdi_8,
    sel_8,
    shift_8,
    drck_8,
    tdo_8,
    update_9,
    capture_9,
    reset_9,
    runtest_9,
    tms_9,
    tck_9,
    tdi_9,
    sel_9,
    shift_9,
    drck_9,
    tdo_9,
    update_10,
    capture_10,
    reset_10,
    runtest_10,
    tms_10,
    tck_10,
    tdi_10,
    sel_10,
    shift_10,
    drck_10,
    tdo_10,
    update_11,
    capture_11,
    reset_11,
    runtest_11,
    tms_11,
    tck_11,
    tdi_11,
    sel_11,
    shift_11,
    drck_11,
    tdo_11,
    update_12,
    capture_12,
    reset_12,
    runtest_12,
    tms_12,
    tck_12,
    tdi_12,
    sel_12,
    shift_12,
    drck_12,
    tdo_12,
    update_13,
    capture_13,
    reset_13,
    runtest_13,
    tms_13,
    tck_13,
    tdi_13,
    sel_13,
    shift_13,
    drck_13,
    tdo_13,
    update_14,
    capture_14,
    reset_14,
    runtest_14,
    tms_14,
    tck_14,
    tdi_14,
    sel_14,
    shift_14,
    drck_14,
    tdo_14,
    update_15,
    capture_15,
    reset_15,
    runtest_15,
    tms_15,
    tck_15,
    tdi_15,
    sel_15,
    shift_15,
    drck_15,
    tdo_15,
    bscanid_en_0,
    bscanid_en_1,
    bscanid_en_2,
    bscanid_en_3,
    bscanid_en_4,
    bscanid_en_5,
    bscanid_en_6,
    bscanid_en_7,
    bscanid_en_8,
    bscanid_en_9,
    bscanid_en_10,
    bscanid_en_11,
    bscanid_en_12,
    bscanid_en_13,
    bscanid_en_14,
    bscanid_en_15,
    bscanid_0,
    bscanid_1,
    bscanid_2,
    bscanid_3,
    bscanid_4,
    bscanid_5,
    bscanid_6,
    bscanid_7,
    bscanid_8,
    bscanid_9,
    bscanid_10,
    bscanid_11,
    bscanid_12,
    bscanid_13,
    bscanid_14,
    bscanid_15,
    update,
    capture,
    reset,
    runtest,
    tck,
    tms,
    tdi,
    sel,
    shift,
    drck,
    tdo,
    bscanid_en,
    bscanid,
    clk);
  output [36:0]sl_iport0_o;
  output [36:0]sl_iport1_o;
  output [0:0]sl_iport2_o;
  output [0:0]sl_iport3_o;
  output [0:0]sl_iport4_o;
  output [0:0]sl_iport5_o;
  output [0:0]sl_iport6_o;
  output [0:0]sl_iport7_o;
  output [0:0]sl_iport8_o;
  output [0:0]sl_iport9_o;
  output [0:0]sl_iport10_o;
  output [0:0]sl_iport11_o;
  output [0:0]sl_iport12_o;
  output [0:0]sl_iport13_o;
  output [0:0]sl_iport14_o;
  output [0:0]sl_iport15_o;
  output [0:0]sl_iport16_o;
  output [0:0]sl_iport17_o;
  output [0:0]sl_iport18_o;
  output [0:0]sl_iport19_o;
  output [0:0]sl_iport20_o;
  output [0:0]sl_iport21_o;
  output [0:0]sl_iport22_o;
  output [0:0]sl_iport23_o;
  output [0:0]sl_iport24_o;
  output [0:0]sl_iport25_o;
  output [0:0]sl_iport26_o;
  output [0:0]sl_iport27_o;
  output [0:0]sl_iport28_o;
  output [0:0]sl_iport29_o;
  output [0:0]sl_iport30_o;
  output [0:0]sl_iport31_o;
  output [0:0]sl_iport32_o;
  output [0:0]sl_iport33_o;
  output [0:0]sl_iport34_o;
  output [0:0]sl_iport35_o;
  output [0:0]sl_iport36_o;
  output [0:0]sl_iport37_o;
  output [0:0]sl_iport38_o;
  output [0:0]sl_iport39_o;
  output [0:0]sl_iport40_o;
  output [0:0]sl_iport41_o;
  output [0:0]sl_iport42_o;
  output [0:0]sl_iport43_o;
  output [0:0]sl_iport44_o;
  output [0:0]sl_iport45_o;
  output [0:0]sl_iport46_o;
  output [0:0]sl_iport47_o;
  output [0:0]sl_iport48_o;
  output [0:0]sl_iport49_o;
  output [0:0]sl_iport50_o;
  output [0:0]sl_iport51_o;
  output [0:0]sl_iport52_o;
  output [0:0]sl_iport53_o;
  output [0:0]sl_iport54_o;
  output [0:0]sl_iport55_o;
  output [0:0]sl_iport56_o;
  output [0:0]sl_iport57_o;
  output [0:0]sl_iport58_o;
  output [0:0]sl_iport59_o;
  output [0:0]sl_iport60_o;
  output [0:0]sl_iport61_o;
  output [0:0]sl_iport62_o;
  output [0:0]sl_iport63_o;
  output [0:0]sl_iport64_o;
  output [0:0]sl_iport65_o;
  output [0:0]sl_iport66_o;
  output [0:0]sl_iport67_o;
  output [0:0]sl_iport68_o;
  output [0:0]sl_iport69_o;
  output [0:0]sl_iport70_o;
  output [0:0]sl_iport71_o;
  output [0:0]sl_iport72_o;
  output [0:0]sl_iport73_o;
  output [0:0]sl_iport74_o;
  output [0:0]sl_iport75_o;
  output [0:0]sl_iport76_o;
  output [0:0]sl_iport77_o;
  output [0:0]sl_iport78_o;
  output [0:0]sl_iport79_o;
  output [0:0]sl_iport80_o;
  output [0:0]sl_iport81_o;
  output [0:0]sl_iport82_o;
  output [0:0]sl_iport83_o;
  output [0:0]sl_iport84_o;
  output [0:0]sl_iport85_o;
  output [0:0]sl_iport86_o;
  output [0:0]sl_iport87_o;
  output [0:0]sl_iport88_o;
  output [0:0]sl_iport89_o;
  output [0:0]sl_iport90_o;
  output [0:0]sl_iport91_o;
  output [0:0]sl_iport92_o;
  output [0:0]sl_iport93_o;
  output [0:0]sl_iport94_o;
  output [0:0]sl_iport95_o;
  output [0:0]sl_iport96_o;
  output [0:0]sl_iport97_o;
  output [0:0]sl_iport98_o;
  output [0:0]sl_iport99_o;
  output [0:0]sl_iport100_o;
  output [0:0]sl_iport101_o;
  output [0:0]sl_iport102_o;
  output [0:0]sl_iport103_o;
  output [0:0]sl_iport104_o;
  output [0:0]sl_iport105_o;
  output [0:0]sl_iport106_o;
  output [0:0]sl_iport107_o;
  output [0:0]sl_iport108_o;
  output [0:0]sl_iport109_o;
  output [0:0]sl_iport110_o;
  output [0:0]sl_iport111_o;
  output [0:0]sl_iport112_o;
  output [0:0]sl_iport113_o;
  output [0:0]sl_iport114_o;
  output [0:0]sl_iport115_o;
  output [0:0]sl_iport116_o;
  output [0:0]sl_iport117_o;
  output [0:0]sl_iport118_o;
  output [0:0]sl_iport119_o;
  output [0:0]sl_iport120_o;
  output [0:0]sl_iport121_o;
  output [0:0]sl_iport122_o;
  output [0:0]sl_iport123_o;
  output [0:0]sl_iport124_o;
  output [0:0]sl_iport125_o;
  output [0:0]sl_iport126_o;
  output [0:0]sl_iport127_o;
  output [0:0]sl_iport128_o;
  output [0:0]sl_iport129_o;
  output [0:0]sl_iport130_o;
  output [0:0]sl_iport131_o;
  output [0:0]sl_iport132_o;
  output [0:0]sl_iport133_o;
  output [0:0]sl_iport134_o;
  output [0:0]sl_iport135_o;
  output [0:0]sl_iport136_o;
  output [0:0]sl_iport137_o;
  output [0:0]sl_iport138_o;
  output [0:0]sl_iport139_o;
  output [0:0]sl_iport140_o;
  output [0:0]sl_iport141_o;
  output [0:0]sl_iport142_o;
  output [0:0]sl_iport143_o;
  output [0:0]sl_iport144_o;
  output [0:0]sl_iport145_o;
  output [0:0]sl_iport146_o;
  output [0:0]sl_iport147_o;
  output [0:0]sl_iport148_o;
  output [0:0]sl_iport149_o;
  output [0:0]sl_iport150_o;
  output [0:0]sl_iport151_o;
  output [0:0]sl_iport152_o;
  output [0:0]sl_iport153_o;
  output [0:0]sl_iport154_o;
  output [0:0]sl_iport155_o;
  output [0:0]sl_iport156_o;
  output [0:0]sl_iport157_o;
  output [0:0]sl_iport158_o;
  output [0:0]sl_iport159_o;
  output [0:0]sl_iport160_o;
  output [0:0]sl_iport161_o;
  output [0:0]sl_iport162_o;
  output [0:0]sl_iport163_o;
  output [0:0]sl_iport164_o;
  output [0:0]sl_iport165_o;
  output [0:0]sl_iport166_o;
  output [0:0]sl_iport167_o;
  output [0:0]sl_iport168_o;
  output [0:0]sl_iport169_o;
  output [0:0]sl_iport170_o;
  output [0:0]sl_iport171_o;
  output [0:0]sl_iport172_o;
  output [0:0]sl_iport173_o;
  output [0:0]sl_iport174_o;
  output [0:0]sl_iport175_o;
  output [0:0]sl_iport176_o;
  output [0:0]sl_iport177_o;
  output [0:0]sl_iport178_o;
  output [0:0]sl_iport179_o;
  output [0:0]sl_iport180_o;
  output [0:0]sl_iport181_o;
  output [0:0]sl_iport182_o;
  output [0:0]sl_iport183_o;
  output [0:0]sl_iport184_o;
  output [0:0]sl_iport185_o;
  output [0:0]sl_iport186_o;
  output [0:0]sl_iport187_o;
  output [0:0]sl_iport188_o;
  output [0:0]sl_iport189_o;
  output [0:0]sl_iport190_o;
  output [0:0]sl_iport191_o;
  output [0:0]sl_iport192_o;
  output [0:0]sl_iport193_o;
  output [0:0]sl_iport194_o;
  output [0:0]sl_iport195_o;
  output [0:0]sl_iport196_o;
  output [0:0]sl_iport197_o;
  output [0:0]sl_iport198_o;
  output [0:0]sl_iport199_o;
  output [0:0]sl_iport200_o;
  output [0:0]sl_iport201_o;
  output [0:0]sl_iport202_o;
  output [0:0]sl_iport203_o;
  output [0:0]sl_iport204_o;
  output [0:0]sl_iport205_o;
  output [0:0]sl_iport206_o;
  output [0:0]sl_iport207_o;
  output [0:0]sl_iport208_o;
  output [0:0]sl_iport209_o;
  output [0:0]sl_iport210_o;
  output [0:0]sl_iport211_o;
  output [0:0]sl_iport212_o;
  output [0:0]sl_iport213_o;
  output [0:0]sl_iport214_o;
  output [0:0]sl_iport215_o;
  output [0:0]sl_iport216_o;
  output [0:0]sl_iport217_o;
  output [0:0]sl_iport218_o;
  output [0:0]sl_iport219_o;
  output [0:0]sl_iport220_o;
  output [0:0]sl_iport221_o;
  output [0:0]sl_iport222_o;
  output [0:0]sl_iport223_o;
  output [0:0]sl_iport224_o;
  output [0:0]sl_iport225_o;
  output [0:0]sl_iport226_o;
  output [0:0]sl_iport227_o;
  output [0:0]sl_iport228_o;
  output [0:0]sl_iport229_o;
  output [0:0]sl_iport230_o;
  output [0:0]sl_iport231_o;
  output [0:0]sl_iport232_o;
  output [0:0]sl_iport233_o;
  output [0:0]sl_iport234_o;
  output [0:0]sl_iport235_o;
  output [0:0]sl_iport236_o;
  output [0:0]sl_iport237_o;
  output [0:0]sl_iport238_o;
  output [0:0]sl_iport239_o;
  output [0:0]sl_iport240_o;
  output [0:0]sl_iport241_o;
  output [0:0]sl_iport242_o;
  output [0:0]sl_iport243_o;
  output [0:0]sl_iport244_o;
  output [0:0]sl_iport245_o;
  output [0:0]sl_iport246_o;
  output [0:0]sl_iport247_o;
  output [0:0]sl_iport248_o;
  output [0:0]sl_iport249_o;
  output [0:0]sl_iport250_o;
  output [0:0]sl_iport251_o;
  output [0:0]sl_iport252_o;
  output [0:0]sl_iport253_o;
  output [0:0]sl_iport254_o;
  output [0:0]sl_iport255_o;
  input [16:0]sl_oport0_i;
  input [16:0]sl_oport1_i;
  input [0:0]sl_oport2_i;
  input [0:0]sl_oport3_i;
  input [0:0]sl_oport4_i;
  input [0:0]sl_oport5_i;
  input [0:0]sl_oport6_i;
  input [0:0]sl_oport7_i;
  input [0:0]sl_oport8_i;
  input [0:0]sl_oport9_i;
  input [0:0]sl_oport10_i;
  input [0:0]sl_oport11_i;
  input [0:0]sl_oport12_i;
  input [0:0]sl_oport13_i;
  input [0:0]sl_oport14_i;
  input [0:0]sl_oport15_i;
  input [0:0]sl_oport16_i;
  input [0:0]sl_oport17_i;
  input [0:0]sl_oport18_i;
  input [0:0]sl_oport19_i;
  input [0:0]sl_oport20_i;
  input [0:0]sl_oport21_i;
  input [0:0]sl_oport22_i;
  input [0:0]sl_oport23_i;
  input [0:0]sl_oport24_i;
  input [0:0]sl_oport25_i;
  input [0:0]sl_oport26_i;
  input [0:0]sl_oport27_i;
  input [0:0]sl_oport28_i;
  input [0:0]sl_oport29_i;
  input [0:0]sl_oport30_i;
  input [0:0]sl_oport31_i;
  input [0:0]sl_oport32_i;
  input [0:0]sl_oport33_i;
  input [0:0]sl_oport34_i;
  input [0:0]sl_oport35_i;
  input [0:0]sl_oport36_i;
  input [0:0]sl_oport37_i;
  input [0:0]sl_oport38_i;
  input [0:0]sl_oport39_i;
  input [0:0]sl_oport40_i;
  input [0:0]sl_oport41_i;
  input [0:0]sl_oport42_i;
  input [0:0]sl_oport43_i;
  input [0:0]sl_oport44_i;
  input [0:0]sl_oport45_i;
  input [0:0]sl_oport46_i;
  input [0:0]sl_oport47_i;
  input [0:0]sl_oport48_i;
  input [0:0]sl_oport49_i;
  input [0:0]sl_oport50_i;
  input [0:0]sl_oport51_i;
  input [0:0]sl_oport52_i;
  input [0:0]sl_oport53_i;
  input [0:0]sl_oport54_i;
  input [0:0]sl_oport55_i;
  input [0:0]sl_oport56_i;
  input [0:0]sl_oport57_i;
  input [0:0]sl_oport58_i;
  input [0:0]sl_oport59_i;
  input [0:0]sl_oport60_i;
  input [0:0]sl_oport61_i;
  input [0:0]sl_oport62_i;
  input [0:0]sl_oport63_i;
  input [0:0]sl_oport64_i;
  input [0:0]sl_oport65_i;
  input [0:0]sl_oport66_i;
  input [0:0]sl_oport67_i;
  input [0:0]sl_oport68_i;
  input [0:0]sl_oport69_i;
  input [0:0]sl_oport70_i;
  input [0:0]sl_oport71_i;
  input [0:0]sl_oport72_i;
  input [0:0]sl_oport73_i;
  input [0:0]sl_oport74_i;
  input [0:0]sl_oport75_i;
  input [0:0]sl_oport76_i;
  input [0:0]sl_oport77_i;
  input [0:0]sl_oport78_i;
  input [0:0]sl_oport79_i;
  input [0:0]sl_oport80_i;
  input [0:0]sl_oport81_i;
  input [0:0]sl_oport82_i;
  input [0:0]sl_oport83_i;
  input [0:0]sl_oport84_i;
  input [0:0]sl_oport85_i;
  input [0:0]sl_oport86_i;
  input [0:0]sl_oport87_i;
  input [0:0]sl_oport88_i;
  input [0:0]sl_oport89_i;
  input [0:0]sl_oport90_i;
  input [0:0]sl_oport91_i;
  input [0:0]sl_oport92_i;
  input [0:0]sl_oport93_i;
  input [0:0]sl_oport94_i;
  input [0:0]sl_oport95_i;
  input [0:0]sl_oport96_i;
  input [0:0]sl_oport97_i;
  input [0:0]sl_oport98_i;
  input [0:0]sl_oport99_i;
  input [0:0]sl_oport100_i;
  input [0:0]sl_oport101_i;
  input [0:0]sl_oport102_i;
  input [0:0]sl_oport103_i;
  input [0:0]sl_oport104_i;
  input [0:0]sl_oport105_i;
  input [0:0]sl_oport106_i;
  input [0:0]sl_oport107_i;
  input [0:0]sl_oport108_i;
  input [0:0]sl_oport109_i;
  input [0:0]sl_oport110_i;
  input [0:0]sl_oport111_i;
  input [0:0]sl_oport112_i;
  input [0:0]sl_oport113_i;
  input [0:0]sl_oport114_i;
  input [0:0]sl_oport115_i;
  input [0:0]sl_oport116_i;
  input [0:0]sl_oport117_i;
  input [0:0]sl_oport118_i;
  input [0:0]sl_oport119_i;
  input [0:0]sl_oport120_i;
  input [0:0]sl_oport121_i;
  input [0:0]sl_oport122_i;
  input [0:0]sl_oport123_i;
  input [0:0]sl_oport124_i;
  input [0:0]sl_oport125_i;
  input [0:0]sl_oport126_i;
  input [0:0]sl_oport127_i;
  input [0:0]sl_oport128_i;
  input [0:0]sl_oport129_i;
  input [0:0]sl_oport130_i;
  input [0:0]sl_oport131_i;
  input [0:0]sl_oport132_i;
  input [0:0]sl_oport133_i;
  input [0:0]sl_oport134_i;
  input [0:0]sl_oport135_i;
  input [0:0]sl_oport136_i;
  input [0:0]sl_oport137_i;
  input [0:0]sl_oport138_i;
  input [0:0]sl_oport139_i;
  input [0:0]sl_oport140_i;
  input [0:0]sl_oport141_i;
  input [0:0]sl_oport142_i;
  input [0:0]sl_oport143_i;
  input [0:0]sl_oport144_i;
  input [0:0]sl_oport145_i;
  input [0:0]sl_oport146_i;
  input [0:0]sl_oport147_i;
  input [0:0]sl_oport148_i;
  input [0:0]sl_oport149_i;
  input [0:0]sl_oport150_i;
  input [0:0]sl_oport151_i;
  input [0:0]sl_oport152_i;
  input [0:0]sl_oport153_i;
  input [0:0]sl_oport154_i;
  input [0:0]sl_oport155_i;
  input [0:0]sl_oport156_i;
  input [0:0]sl_oport157_i;
  input [0:0]sl_oport158_i;
  input [0:0]sl_oport159_i;
  input [0:0]sl_oport160_i;
  input [0:0]sl_oport161_i;
  input [0:0]sl_oport162_i;
  input [0:0]sl_oport163_i;
  input [0:0]sl_oport164_i;
  input [0:0]sl_oport165_i;
  input [0:0]sl_oport166_i;
  input [0:0]sl_oport167_i;
  input [0:0]sl_oport168_i;
  input [0:0]sl_oport169_i;
  input [0:0]sl_oport170_i;
  input [0:0]sl_oport171_i;
  input [0:0]sl_oport172_i;
  input [0:0]sl_oport173_i;
  input [0:0]sl_oport174_i;
  input [0:0]sl_oport175_i;
  input [0:0]sl_oport176_i;
  input [0:0]sl_oport177_i;
  input [0:0]sl_oport178_i;
  input [0:0]sl_oport179_i;
  input [0:0]sl_oport180_i;
  input [0:0]sl_oport181_i;
  input [0:0]sl_oport182_i;
  input [0:0]sl_oport183_i;
  input [0:0]sl_oport184_i;
  input [0:0]sl_oport185_i;
  input [0:0]sl_oport186_i;
  input [0:0]sl_oport187_i;
  input [0:0]sl_oport188_i;
  input [0:0]sl_oport189_i;
  input [0:0]sl_oport190_i;
  input [0:0]sl_oport191_i;
  input [0:0]sl_oport192_i;
  input [0:0]sl_oport193_i;
  input [0:0]sl_oport194_i;
  input [0:0]sl_oport195_i;
  input [0:0]sl_oport196_i;
  input [0:0]sl_oport197_i;
  input [0:0]sl_oport198_i;
  input [0:0]sl_oport199_i;
  input [0:0]sl_oport200_i;
  input [0:0]sl_oport201_i;
  input [0:0]sl_oport202_i;
  input [0:0]sl_oport203_i;
  input [0:0]sl_oport204_i;
  input [0:0]sl_oport205_i;
  input [0:0]sl_oport206_i;
  input [0:0]sl_oport207_i;
  input [0:0]sl_oport208_i;
  input [0:0]sl_oport209_i;
  input [0:0]sl_oport210_i;
  input [0:0]sl_oport211_i;
  input [0:0]sl_oport212_i;
  input [0:0]sl_oport213_i;
  input [0:0]sl_oport214_i;
  input [0:0]sl_oport215_i;
  input [0:0]sl_oport216_i;
  input [0:0]sl_oport217_i;
  input [0:0]sl_oport218_i;
  input [0:0]sl_oport219_i;
  input [0:0]sl_oport220_i;
  input [0:0]sl_oport221_i;
  input [0:0]sl_oport222_i;
  input [0:0]sl_oport223_i;
  input [0:0]sl_oport224_i;
  input [0:0]sl_oport225_i;
  input [0:0]sl_oport226_i;
  input [0:0]sl_oport227_i;
  input [0:0]sl_oport228_i;
  input [0:0]sl_oport229_i;
  input [0:0]sl_oport230_i;
  input [0:0]sl_oport231_i;
  input [0:0]sl_oport232_i;
  input [0:0]sl_oport233_i;
  input [0:0]sl_oport234_i;
  input [0:0]sl_oport235_i;
  input [0:0]sl_oport236_i;
  input [0:0]sl_oport237_i;
  input [0:0]sl_oport238_i;
  input [0:0]sl_oport239_i;
  input [0:0]sl_oport240_i;
  input [0:0]sl_oport241_i;
  input [0:0]sl_oport242_i;
  input [0:0]sl_oport243_i;
  input [0:0]sl_oport244_i;
  input [0:0]sl_oport245_i;
  input [0:0]sl_oport246_i;
  input [0:0]sl_oport247_i;
  input [0:0]sl_oport248_i;
  input [0:0]sl_oport249_i;
  input [0:0]sl_oport250_i;
  input [0:0]sl_oport251_i;
  input [0:0]sl_oport252_i;
  input [0:0]sl_oport253_i;
  input [0:0]sl_oport254_i;
  input [0:0]sl_oport255_i;
  (* BSCAN_SLAVE_INDEX = "0" *) output update_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output capture_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output reset_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output runtest_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output tms_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output tck_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output tdi_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output sel_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output shift_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output drck_0;
  (* BSCAN_SLAVE_INDEX = "0" *) input tdo_0;
  (* BSCAN_SLAVE_INDEX = "1" *) output update_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output capture_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output reset_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output runtest_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output tms_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output tck_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output tdi_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output sel_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output shift_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output drck_1;
  (* BSCAN_SLAVE_INDEX = "1" *) input tdo_1;
  (* BSCAN_SLAVE_INDEX = "2" *) output update_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output capture_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output reset_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output runtest_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output tms_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output tck_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output tdi_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output sel_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output shift_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output drck_2;
  (* BSCAN_SLAVE_INDEX = "2" *) input tdo_2;
  (* BSCAN_SLAVE_INDEX = "3" *) output update_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output capture_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output reset_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output runtest_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output tms_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output tck_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output tdi_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output sel_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output shift_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output drck_3;
  (* BSCAN_SLAVE_INDEX = "3" *) input tdo_3;
  (* BSCAN_SLAVE_INDEX = "4" *) output update_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output capture_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output reset_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output runtest_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output tms_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output tck_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output tdi_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output sel_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output shift_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output drck_4;
  (* BSCAN_SLAVE_INDEX = "4" *) input tdo_4;
  (* BSCAN_SLAVE_INDEX = "5" *) output update_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output capture_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output reset_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output runtest_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output tms_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output tck_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output tdi_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output sel_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output shift_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output drck_5;
  (* BSCAN_SLAVE_INDEX = "5" *) input tdo_5;
  (* BSCAN_SLAVE_INDEX = "6" *) output update_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output capture_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output reset_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output runtest_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output tms_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output tck_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output tdi_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output sel_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output shift_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output drck_6;
  (* BSCAN_SLAVE_INDEX = "6" *) input tdo_6;
  (* BSCAN_SLAVE_INDEX = "7" *) output update_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output capture_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output reset_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output runtest_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output tms_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output tck_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output tdi_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output sel_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output shift_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output drck_7;
  (* BSCAN_SLAVE_INDEX = "7" *) input tdo_7;
  (* BSCAN_SLAVE_INDEX = "8" *) output update_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output capture_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output reset_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output runtest_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output tms_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output tck_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output tdi_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output sel_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output shift_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output drck_8;
  (* BSCAN_SLAVE_INDEX = "8" *) input tdo_8;
  (* BSCAN_SLAVE_INDEX = "9" *) output update_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output capture_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output reset_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output runtest_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output tms_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output tck_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output tdi_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output sel_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output shift_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output drck_9;
  (* BSCAN_SLAVE_INDEX = "9" *) input tdo_9;
  (* BSCAN_SLAVE_INDEX = "10" *) output update_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output capture_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output reset_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output runtest_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output tms_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output tck_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output tdi_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output sel_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output shift_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output drck_10;
  (* BSCAN_SLAVE_INDEX = "10" *) input tdo_10;
  (* BSCAN_SLAVE_INDEX = "11" *) output update_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output capture_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output reset_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output runtest_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output tms_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output tck_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output tdi_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output sel_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output shift_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output drck_11;
  (* BSCAN_SLAVE_INDEX = "11" *) input tdo_11;
  (* BSCAN_SLAVE_INDEX = "12" *) output update_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output capture_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output reset_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output runtest_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output tms_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output tck_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output tdi_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output sel_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output shift_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output drck_12;
  (* BSCAN_SLAVE_INDEX = "12" *) input tdo_12;
  (* BSCAN_SLAVE_INDEX = "13" *) output update_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output capture_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output reset_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output runtest_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output tms_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output tck_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output tdi_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output sel_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output shift_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output drck_13;
  (* BSCAN_SLAVE_INDEX = "13" *) input tdo_13;
  (* BSCAN_SLAVE_INDEX = "14" *) output update_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output capture_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output reset_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output runtest_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output tms_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output tck_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output tdi_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output sel_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output shift_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output drck_14;
  (* BSCAN_SLAVE_INDEX = "14" *) input tdo_14;
  (* BSCAN_SLAVE_INDEX = "15" *) output update_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output capture_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output reset_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output runtest_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output tms_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output tck_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output tdi_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output sel_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output shift_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output drck_15;
  (* BSCAN_SLAVE_INDEX = "15" *) input tdo_15;
  (* BSCAN_SLAVE_INDEX = "0" *) output bscanid_en_0;
  (* BSCAN_SLAVE_INDEX = "1" *) output bscanid_en_1;
  (* BSCAN_SLAVE_INDEX = "2" *) output bscanid_en_2;
  (* BSCAN_SLAVE_INDEX = "3" *) output bscanid_en_3;
  (* BSCAN_SLAVE_INDEX = "4" *) output bscanid_en_4;
  (* BSCAN_SLAVE_INDEX = "5" *) output bscanid_en_5;
  (* BSCAN_SLAVE_INDEX = "6" *) output bscanid_en_6;
  (* BSCAN_SLAVE_INDEX = "7" *) output bscanid_en_7;
  (* BSCAN_SLAVE_INDEX = "8" *) output bscanid_en_8;
  (* BSCAN_SLAVE_INDEX = "9" *) output bscanid_en_9;
  (* BSCAN_SLAVE_INDEX = "10" *) output bscanid_en_10;
  (* BSCAN_SLAVE_INDEX = "11" *) output bscanid_en_11;
  (* BSCAN_SLAVE_INDEX = "12" *) output bscanid_en_12;
  (* BSCAN_SLAVE_INDEX = "13" *) output bscanid_en_13;
  (* BSCAN_SLAVE_INDEX = "14" *) output bscanid_en_14;
  (* BSCAN_SLAVE_INDEX = "15" *) output bscanid_en_15;
  (* BSCAN_SLAVE_INDEX = "0" *) input [31:0]bscanid_0;
  (* BSCAN_SLAVE_INDEX = "1" *) input [31:0]bscanid_1;
  (* BSCAN_SLAVE_INDEX = "2" *) input [31:0]bscanid_2;
  (* BSCAN_SLAVE_INDEX = "3" *) input [31:0]bscanid_3;
  (* BSCAN_SLAVE_INDEX = "4" *) input [31:0]bscanid_4;
  (* BSCAN_SLAVE_INDEX = "5" *) input [31:0]bscanid_5;
  (* BSCAN_SLAVE_INDEX = "6" *) input [31:0]bscanid_6;
  (* BSCAN_SLAVE_INDEX = "7" *) input [31:0]bscanid_7;
  (* BSCAN_SLAVE_INDEX = "8" *) input [31:0]bscanid_8;
  (* BSCAN_SLAVE_INDEX = "9" *) input [31:0]bscanid_9;
  (* BSCAN_SLAVE_INDEX = "10" *) input [31:0]bscanid_10;
  (* BSCAN_SLAVE_INDEX = "11" *) input [31:0]bscanid_11;
  (* BSCAN_SLAVE_INDEX = "12" *) input [31:0]bscanid_12;
  (* BSCAN_SLAVE_INDEX = "13" *) input [31:0]bscanid_13;
  (* BSCAN_SLAVE_INDEX = "14" *) input [31:0]bscanid_14;
  (* BSCAN_SLAVE_INDEX = "15" *) input [31:0]bscanid_15;
  input update;
  input capture;
  input reset;
  input runtest;
  input tck;
  input tms;
  input tdi;
  input sel;
  input shift;
  input drck;
  output tdo;
  input bscanid_en;
  output [31:0]bscanid;
  input clk;

  wire \<const0> ;
  wire bscanid_en;
  wire bscanid_en_0;
  wire bscanid_en_1;
  wire bscanid_en_10;
  wire bscanid_en_11;
  wire bscanid_en_12;
  wire bscanid_en_13;
  wire bscanid_en_14;
  wire bscanid_en_15;
  wire bscanid_en_2;
  wire bscanid_en_3;
  wire bscanid_en_4;
  wire bscanid_en_5;
  wire bscanid_en_6;
  wire bscanid_en_7;
  wire bscanid_en_8;
  wire bscanid_en_9;
  wire capture;
  wire capture_0;
  wire capture_1;
  wire capture_10;
  wire capture_11;
  wire capture_12;
  wire capture_13;
  wire capture_14;
  wire capture_15;
  wire capture_2;
  wire capture_3;
  wire capture_4;
  wire capture_5;
  wire capture_6;
  wire capture_7;
  wire capture_8;
  wire capture_9;
  wire clk;
  wire drck;
  wire drck_0;
  wire drck_1;
  wire drck_10;
  wire drck_11;
  wire drck_12;
  wire drck_13;
  wire drck_14;
  wire drck_15;
  wire drck_2;
  wire drck_3;
  wire drck_4;
  wire drck_5;
  wire drck_6;
  wire drck_7;
  wire drck_8;
  wire drck_9;
  wire reset;
  wire reset_0;
  wire reset_1;
  wire reset_10;
  wire reset_11;
  wire reset_12;
  wire reset_13;
  wire reset_14;
  wire reset_15;
  wire reset_2;
  wire reset_3;
  wire reset_4;
  wire reset_5;
  wire reset_6;
  wire reset_7;
  wire reset_8;
  wire reset_9;
  wire runtest;
  wire runtest_0;
  wire runtest_1;
  wire runtest_10;
  wire runtest_11;
  wire runtest_12;
  wire runtest_13;
  wire runtest_14;
  wire runtest_15;
  wire runtest_2;
  wire runtest_3;
  wire runtest_4;
  wire runtest_5;
  wire runtest_6;
  wire runtest_7;
  wire runtest_8;
  wire runtest_9;
  wire sel;
  wire sel_0;
  wire sel_1;
  wire sel_10;
  wire sel_11;
  wire sel_12;
  wire sel_13;
  wire sel_14;
  wire sel_15;
  wire sel_2;
  wire sel_3;
  wire sel_4;
  wire sel_5;
  wire sel_6;
  wire sel_7;
  wire sel_8;
  wire sel_9;
  wire shift;
  wire shift_0;
  wire shift_1;
  wire shift_10;
  wire shift_11;
  wire shift_12;
  wire shift_13;
  wire shift_14;
  wire shift_15;
  wire shift_2;
  wire shift_3;
  wire shift_4;
  wire shift_5;
  wire shift_6;
  wire shift_7;
  wire shift_8;
  wire shift_9;
  wire [36:0]sl_iport0_o;
  wire [0:0]sl_iport100_o;
  wire [0:0]sl_iport101_o;
  wire [0:0]sl_iport102_o;
  wire [0:0]sl_iport103_o;
  wire [0:0]sl_iport104_o;
  wire [0:0]sl_iport105_o;
  wire [0:0]sl_iport106_o;
  wire [0:0]sl_iport107_o;
  wire [0:0]sl_iport108_o;
  wire [0:0]sl_iport109_o;
  wire [0:0]sl_iport10_o;
  wire [0:0]sl_iport110_o;
  wire [0:0]sl_iport111_o;
  wire [0:0]sl_iport112_o;
  wire [0:0]sl_iport113_o;
  wire [0:0]sl_iport114_o;
  wire [0:0]sl_iport115_o;
  wire [0:0]sl_iport116_o;
  wire [0:0]sl_iport117_o;
  wire [0:0]sl_iport118_o;
  wire [0:0]sl_iport119_o;
  wire [0:0]sl_iport11_o;
  wire [0:0]sl_iport120_o;
  wire [0:0]sl_iport121_o;
  wire [0:0]sl_iport122_o;
  wire [0:0]sl_iport123_o;
  wire [0:0]sl_iport124_o;
  wire [0:0]sl_iport125_o;
  wire [0:0]sl_iport126_o;
  wire [0:0]sl_iport127_o;
  wire [0:0]sl_iport128_o;
  wire [0:0]sl_iport129_o;
  wire [0:0]sl_iport12_o;
  wire [0:0]sl_iport130_o;
  wire [0:0]sl_iport131_o;
  wire [0:0]sl_iport132_o;
  wire [0:0]sl_iport133_o;
  wire [0:0]sl_iport134_o;
  wire [0:0]sl_iport135_o;
  wire [0:0]sl_iport136_o;
  wire [0:0]sl_iport137_o;
  wire [0:0]sl_iport138_o;
  wire [0:0]sl_iport139_o;
  wire [0:0]sl_iport13_o;
  wire [0:0]sl_iport140_o;
  wire [0:0]sl_iport141_o;
  wire [0:0]sl_iport142_o;
  wire [0:0]sl_iport143_o;
  wire [0:0]sl_iport144_o;
  wire [0:0]sl_iport145_o;
  wire [0:0]sl_iport146_o;
  wire [0:0]sl_iport147_o;
  wire [0:0]sl_iport148_o;
  wire [0:0]sl_iport149_o;
  wire [0:0]sl_iport14_o;
  wire [0:0]sl_iport150_o;
  wire [0:0]sl_iport151_o;
  wire [0:0]sl_iport152_o;
  wire [0:0]sl_iport153_o;
  wire [0:0]sl_iport154_o;
  wire [0:0]sl_iport155_o;
  wire [0:0]sl_iport156_o;
  wire [0:0]sl_iport157_o;
  wire [0:0]sl_iport158_o;
  wire [0:0]sl_iport159_o;
  wire [0:0]sl_iport15_o;
  wire [0:0]sl_iport160_o;
  wire [0:0]sl_iport161_o;
  wire [0:0]sl_iport162_o;
  wire [0:0]sl_iport163_o;
  wire [0:0]sl_iport164_o;
  wire [0:0]sl_iport165_o;
  wire [0:0]sl_iport166_o;
  wire [0:0]sl_iport167_o;
  wire [0:0]sl_iport168_o;
  wire [0:0]sl_iport169_o;
  wire [0:0]sl_iport16_o;
  wire [0:0]sl_iport170_o;
  wire [0:0]sl_iport171_o;
  wire [0:0]sl_iport172_o;
  wire [0:0]sl_iport173_o;
  wire [0:0]sl_iport174_o;
  wire [0:0]sl_iport175_o;
  wire [0:0]sl_iport176_o;
  wire [0:0]sl_iport177_o;
  wire [0:0]sl_iport178_o;
  wire [0:0]sl_iport179_o;
  wire [0:0]sl_iport17_o;
  wire [0:0]sl_iport180_o;
  wire [0:0]sl_iport181_o;
  wire [0:0]sl_iport182_o;
  wire [0:0]sl_iport183_o;
  wire [0:0]sl_iport184_o;
  wire [0:0]sl_iport185_o;
  wire [0:0]sl_iport186_o;
  wire [0:0]sl_iport187_o;
  wire [0:0]sl_iport188_o;
  wire [0:0]sl_iport189_o;
  wire [0:0]sl_iport18_o;
  wire [0:0]sl_iport190_o;
  wire [0:0]sl_iport191_o;
  wire [0:0]sl_iport192_o;
  wire [0:0]sl_iport193_o;
  wire [0:0]sl_iport194_o;
  wire [0:0]sl_iport195_o;
  wire [0:0]sl_iport196_o;
  wire [0:0]sl_iport197_o;
  wire [0:0]sl_iport198_o;
  wire [0:0]sl_iport199_o;
  wire [0:0]sl_iport19_o;
  wire [36:0]sl_iport1_o;
  wire [0:0]sl_iport200_o;
  wire [0:0]sl_iport201_o;
  wire [0:0]sl_iport202_o;
  wire [0:0]sl_iport203_o;
  wire [0:0]sl_iport204_o;
  wire [0:0]sl_iport205_o;
  wire [0:0]sl_iport206_o;
  wire [0:0]sl_iport207_o;
  wire [0:0]sl_iport208_o;
  wire [0:0]sl_iport209_o;
  wire [0:0]sl_iport20_o;
  wire [0:0]sl_iport210_o;
  wire [0:0]sl_iport211_o;
  wire [0:0]sl_iport212_o;
  wire [0:0]sl_iport213_o;
  wire [0:0]sl_iport214_o;
  wire [0:0]sl_iport215_o;
  wire [0:0]sl_iport216_o;
  wire [0:0]sl_iport217_o;
  wire [0:0]sl_iport218_o;
  wire [0:0]sl_iport219_o;
  wire [0:0]sl_iport21_o;
  wire [0:0]sl_iport220_o;
  wire [0:0]sl_iport221_o;
  wire [0:0]sl_iport222_o;
  wire [0:0]sl_iport223_o;
  wire [0:0]sl_iport224_o;
  wire [0:0]sl_iport225_o;
  wire [0:0]sl_iport226_o;
  wire [0:0]sl_iport227_o;
  wire [0:0]sl_iport228_o;
  wire [0:0]sl_iport229_o;
  wire [0:0]sl_iport22_o;
  wire [0:0]sl_iport230_o;
  wire [0:0]sl_iport231_o;
  wire [0:0]sl_iport232_o;
  wire [0:0]sl_iport233_o;
  wire [0:0]sl_iport234_o;
  wire [0:0]sl_iport235_o;
  wire [0:0]sl_iport236_o;
  wire [0:0]sl_iport237_o;
  wire [0:0]sl_iport238_o;
  wire [0:0]sl_iport239_o;
  wire [0:0]sl_iport23_o;
  wire [0:0]sl_iport240_o;
  wire [0:0]sl_iport241_o;
  wire [0:0]sl_iport242_o;
  wire [0:0]sl_iport243_o;
  wire [0:0]sl_iport244_o;
  wire [0:0]sl_iport245_o;
  wire [0:0]sl_iport246_o;
  wire [0:0]sl_iport247_o;
  wire [0:0]sl_iport248_o;
  wire [0:0]sl_iport249_o;
  wire [0:0]sl_iport24_o;
  wire [0:0]sl_iport250_o;
  wire [0:0]sl_iport251_o;
  wire [0:0]sl_iport252_o;
  wire [0:0]sl_iport253_o;
  wire [0:0]sl_iport254_o;
  wire [0:0]sl_iport255_o;
  wire [0:0]sl_iport25_o;
  wire [0:0]sl_iport26_o;
  wire [0:0]sl_iport27_o;
  wire [0:0]sl_iport28_o;
  wire [0:0]sl_iport29_o;
  wire [0:0]sl_iport2_o;
  wire [0:0]sl_iport30_o;
  wire [0:0]sl_iport31_o;
  wire [0:0]sl_iport32_o;
  wire [0:0]sl_iport33_o;
  wire [0:0]sl_iport34_o;
  wire [0:0]sl_iport35_o;
  wire [0:0]sl_iport36_o;
  wire [0:0]sl_iport37_o;
  wire [0:0]sl_iport38_o;
  wire [0:0]sl_iport39_o;
  wire [0:0]sl_iport3_o;
  wire [0:0]sl_iport40_o;
  wire [0:0]sl_iport41_o;
  wire [0:0]sl_iport42_o;
  wire [0:0]sl_iport43_o;
  wire [0:0]sl_iport44_o;
  wire [0:0]sl_iport45_o;
  wire [0:0]sl_iport46_o;
  wire [0:0]sl_iport47_o;
  wire [0:0]sl_iport48_o;
  wire [0:0]sl_iport49_o;
  wire [0:0]sl_iport4_o;
  wire [0:0]sl_iport50_o;
  wire [0:0]sl_iport51_o;
  wire [0:0]sl_iport52_o;
  wire [0:0]sl_iport53_o;
  wire [0:0]sl_iport54_o;
  wire [0:0]sl_iport55_o;
  wire [0:0]sl_iport56_o;
  wire [0:0]sl_iport57_o;
  wire [0:0]sl_iport58_o;
  wire [0:0]sl_iport59_o;
  wire [0:0]sl_iport5_o;
  wire [0:0]sl_iport60_o;
  wire [0:0]sl_iport61_o;
  wire [0:0]sl_iport62_o;
  wire [0:0]sl_iport63_o;
  wire [0:0]sl_iport64_o;
  wire [0:0]sl_iport65_o;
  wire [0:0]sl_iport66_o;
  wire [0:0]sl_iport67_o;
  wire [0:0]sl_iport68_o;
  wire [0:0]sl_iport69_o;
  wire [0:0]sl_iport6_o;
  wire [0:0]sl_iport70_o;
  wire [0:0]sl_iport71_o;
  wire [0:0]sl_iport72_o;
  wire [0:0]sl_iport73_o;
  wire [0:0]sl_iport74_o;
  wire [0:0]sl_iport75_o;
  wire [0:0]sl_iport76_o;
  wire [0:0]sl_iport77_o;
  wire [0:0]sl_iport78_o;
  wire [0:0]sl_iport79_o;
  wire [0:0]sl_iport7_o;
  wire [0:0]sl_iport80_o;
  wire [0:0]sl_iport81_o;
  wire [0:0]sl_iport82_o;
  wire [0:0]sl_iport83_o;
  wire [0:0]sl_iport84_o;
  wire [0:0]sl_iport85_o;
  wire [0:0]sl_iport86_o;
  wire [0:0]sl_iport87_o;
  wire [0:0]sl_iport88_o;
  wire [0:0]sl_iport89_o;
  wire [0:0]sl_iport8_o;
  wire [0:0]sl_iport90_o;
  wire [0:0]sl_iport91_o;
  wire [0:0]sl_iport92_o;
  wire [0:0]sl_iport93_o;
  wire [0:0]sl_iport94_o;
  wire [0:0]sl_iport95_o;
  wire [0:0]sl_iport96_o;
  wire [0:0]sl_iport97_o;
  wire [0:0]sl_iport98_o;
  wire [0:0]sl_iport99_o;
  wire [0:0]sl_iport9_o;
  wire [16:0]sl_oport0_i;
  wire [0:0]sl_oport100_i;
  wire [0:0]sl_oport101_i;
  wire [0:0]sl_oport102_i;
  wire [0:0]sl_oport103_i;
  wire [0:0]sl_oport104_i;
  wire [0:0]sl_oport105_i;
  wire [0:0]sl_oport106_i;
  wire [0:0]sl_oport107_i;
  wire [0:0]sl_oport108_i;
  wire [0:0]sl_oport109_i;
  wire [0:0]sl_oport10_i;
  wire [0:0]sl_oport110_i;
  wire [0:0]sl_oport111_i;
  wire [0:0]sl_oport112_i;
  wire [0:0]sl_oport113_i;
  wire [0:0]sl_oport114_i;
  wire [0:0]sl_oport115_i;
  wire [0:0]sl_oport116_i;
  wire [0:0]sl_oport117_i;
  wire [0:0]sl_oport118_i;
  wire [0:0]sl_oport119_i;
  wire [0:0]sl_oport11_i;
  wire [0:0]sl_oport120_i;
  wire [0:0]sl_oport121_i;
  wire [0:0]sl_oport122_i;
  wire [0:0]sl_oport123_i;
  wire [0:0]sl_oport124_i;
  wire [0:0]sl_oport125_i;
  wire [0:0]sl_oport126_i;
  wire [0:0]sl_oport127_i;
  wire [0:0]sl_oport128_i;
  wire [0:0]sl_oport129_i;
  wire [0:0]sl_oport12_i;
  wire [0:0]sl_oport130_i;
  wire [0:0]sl_oport131_i;
  wire [0:0]sl_oport132_i;
  wire [0:0]sl_oport133_i;
  wire [0:0]sl_oport134_i;
  wire [0:0]sl_oport135_i;
  wire [0:0]sl_oport136_i;
  wire [0:0]sl_oport137_i;
  wire [0:0]sl_oport138_i;
  wire [0:0]sl_oport139_i;
  wire [0:0]sl_oport13_i;
  wire [0:0]sl_oport140_i;
  wire [0:0]sl_oport141_i;
  wire [0:0]sl_oport142_i;
  wire [0:0]sl_oport143_i;
  wire [0:0]sl_oport144_i;
  wire [0:0]sl_oport145_i;
  wire [0:0]sl_oport146_i;
  wire [0:0]sl_oport147_i;
  wire [0:0]sl_oport148_i;
  wire [0:0]sl_oport149_i;
  wire [0:0]sl_oport14_i;
  wire [0:0]sl_oport150_i;
  wire [0:0]sl_oport151_i;
  wire [0:0]sl_oport152_i;
  wire [0:0]sl_oport153_i;
  wire [0:0]sl_oport154_i;
  wire [0:0]sl_oport155_i;
  wire [0:0]sl_oport156_i;
  wire [0:0]sl_oport157_i;
  wire [0:0]sl_oport158_i;
  wire [0:0]sl_oport159_i;
  wire [0:0]sl_oport15_i;
  wire [0:0]sl_oport160_i;
  wire [0:0]sl_oport161_i;
  wire [0:0]sl_oport162_i;
  wire [0:0]sl_oport163_i;
  wire [0:0]sl_oport164_i;
  wire [0:0]sl_oport165_i;
  wire [0:0]sl_oport166_i;
  wire [0:0]sl_oport167_i;
  wire [0:0]sl_oport168_i;
  wire [0:0]sl_oport169_i;
  wire [0:0]sl_oport16_i;
  wire [0:0]sl_oport170_i;
  wire [0:0]sl_oport171_i;
  wire [0:0]sl_oport172_i;
  wire [0:0]sl_oport173_i;
  wire [0:0]sl_oport174_i;
  wire [0:0]sl_oport175_i;
  wire [0:0]sl_oport176_i;
  wire [0:0]sl_oport177_i;
  wire [0:0]sl_oport178_i;
  wire [0:0]sl_oport179_i;
  wire [0:0]sl_oport17_i;
  wire [0:0]sl_oport180_i;
  wire [0:0]sl_oport181_i;
  wire [0:0]sl_oport182_i;
  wire [0:0]sl_oport183_i;
  wire [0:0]sl_oport184_i;
  wire [0:0]sl_oport185_i;
  wire [0:0]sl_oport186_i;
  wire [0:0]sl_oport187_i;
  wire [0:0]sl_oport188_i;
  wire [0:0]sl_oport189_i;
  wire [0:0]sl_oport18_i;
  wire [0:0]sl_oport190_i;
  wire [0:0]sl_oport191_i;
  wire [0:0]sl_oport192_i;
  wire [0:0]sl_oport193_i;
  wire [0:0]sl_oport194_i;
  wire [0:0]sl_oport195_i;
  wire [0:0]sl_oport196_i;
  wire [0:0]sl_oport197_i;
  wire [0:0]sl_oport198_i;
  wire [0:0]sl_oport199_i;
  wire [0:0]sl_oport19_i;
  wire [16:0]sl_oport1_i;
  wire [0:0]sl_oport200_i;
  wire [0:0]sl_oport201_i;
  wire [0:0]sl_oport202_i;
  wire [0:0]sl_oport203_i;
  wire [0:0]sl_oport204_i;
  wire [0:0]sl_oport205_i;
  wire [0:0]sl_oport206_i;
  wire [0:0]sl_oport207_i;
  wire [0:0]sl_oport208_i;
  wire [0:0]sl_oport209_i;
  wire [0:0]sl_oport20_i;
  wire [0:0]sl_oport210_i;
  wire [0:0]sl_oport211_i;
  wire [0:0]sl_oport212_i;
  wire [0:0]sl_oport213_i;
  wire [0:0]sl_oport214_i;
  wire [0:0]sl_oport215_i;
  wire [0:0]sl_oport216_i;
  wire [0:0]sl_oport217_i;
  wire [0:0]sl_oport218_i;
  wire [0:0]sl_oport219_i;
  wire [0:0]sl_oport21_i;
  wire [0:0]sl_oport220_i;
  wire [0:0]sl_oport221_i;
  wire [0:0]sl_oport222_i;
  wire [0:0]sl_oport223_i;
  wire [0:0]sl_oport224_i;
  wire [0:0]sl_oport225_i;
  wire [0:0]sl_oport226_i;
  wire [0:0]sl_oport227_i;
  wire [0:0]sl_oport228_i;
  wire [0:0]sl_oport229_i;
  wire [0:0]sl_oport22_i;
  wire [0:0]sl_oport230_i;
  wire [0:0]sl_oport231_i;
  wire [0:0]sl_oport232_i;
  wire [0:0]sl_oport233_i;
  wire [0:0]sl_oport234_i;
  wire [0:0]sl_oport235_i;
  wire [0:0]sl_oport236_i;
  wire [0:0]sl_oport237_i;
  wire [0:0]sl_oport238_i;
  wire [0:0]sl_oport239_i;
  wire [0:0]sl_oport23_i;
  wire [0:0]sl_oport240_i;
  wire [0:0]sl_oport241_i;
  wire [0:0]sl_oport242_i;
  wire [0:0]sl_oport243_i;
  wire [0:0]sl_oport244_i;
  wire [0:0]sl_oport245_i;
  wire [0:0]sl_oport246_i;
  wire [0:0]sl_oport247_i;
  wire [0:0]sl_oport248_i;
  wire [0:0]sl_oport249_i;
  wire [0:0]sl_oport24_i;
  wire [0:0]sl_oport250_i;
  wire [0:0]sl_oport251_i;
  wire [0:0]sl_oport252_i;
  wire [0:0]sl_oport253_i;
  wire [0:0]sl_oport254_i;
  wire [0:0]sl_oport255_i;
  wire [0:0]sl_oport25_i;
  wire [0:0]sl_oport26_i;
  wire [0:0]sl_oport27_i;
  wire [0:0]sl_oport28_i;
  wire [0:0]sl_oport29_i;
  wire [0:0]sl_oport2_i;
  wire [0:0]sl_oport30_i;
  wire [0:0]sl_oport31_i;
  wire [0:0]sl_oport32_i;
  wire [0:0]sl_oport33_i;
  wire [0:0]sl_oport34_i;
  wire [0:0]sl_oport35_i;
  wire [0:0]sl_oport36_i;
  wire [0:0]sl_oport37_i;
  wire [0:0]sl_oport38_i;
  wire [0:0]sl_oport39_i;
  wire [0:0]sl_oport3_i;
  wire [0:0]sl_oport40_i;
  wire [0:0]sl_oport41_i;
  wire [0:0]sl_oport42_i;
  wire [0:0]sl_oport43_i;
  wire [0:0]sl_oport44_i;
  wire [0:0]sl_oport45_i;
  wire [0:0]sl_oport46_i;
  wire [0:0]sl_oport47_i;
  wire [0:0]sl_oport48_i;
  wire [0:0]sl_oport49_i;
  wire [0:0]sl_oport4_i;
  wire [0:0]sl_oport50_i;
  wire [0:0]sl_oport51_i;
  wire [0:0]sl_oport52_i;
  wire [0:0]sl_oport53_i;
  wire [0:0]sl_oport54_i;
  wire [0:0]sl_oport55_i;
  wire [0:0]sl_oport56_i;
  wire [0:0]sl_oport57_i;
  wire [0:0]sl_oport58_i;
  wire [0:0]sl_oport59_i;
  wire [0:0]sl_oport5_i;
  wire [0:0]sl_oport60_i;
  wire [0:0]sl_oport61_i;
  wire [0:0]sl_oport62_i;
  wire [0:0]sl_oport63_i;
  wire [0:0]sl_oport64_i;
  wire [0:0]sl_oport65_i;
  wire [0:0]sl_oport66_i;
  wire [0:0]sl_oport67_i;
  wire [0:0]sl_oport68_i;
  wire [0:0]sl_oport69_i;
  wire [0:0]sl_oport6_i;
  wire [0:0]sl_oport70_i;
  wire [0:0]sl_oport71_i;
  wire [0:0]sl_oport72_i;
  wire [0:0]sl_oport73_i;
  wire [0:0]sl_oport74_i;
  wire [0:0]sl_oport75_i;
  wire [0:0]sl_oport76_i;
  wire [0:0]sl_oport77_i;
  wire [0:0]sl_oport78_i;
  wire [0:0]sl_oport79_i;
  wire [0:0]sl_oport7_i;
  wire [0:0]sl_oport80_i;
  wire [0:0]sl_oport81_i;
  wire [0:0]sl_oport82_i;
  wire [0:0]sl_oport83_i;
  wire [0:0]sl_oport84_i;
  wire [0:0]sl_oport85_i;
  wire [0:0]sl_oport86_i;
  wire [0:0]sl_oport87_i;
  wire [0:0]sl_oport88_i;
  wire [0:0]sl_oport89_i;
  wire [0:0]sl_oport8_i;
  wire [0:0]sl_oport90_i;
  wire [0:0]sl_oport91_i;
  wire [0:0]sl_oport92_i;
  wire [0:0]sl_oport93_i;
  wire [0:0]sl_oport94_i;
  wire [0:0]sl_oport95_i;
  wire [0:0]sl_oport96_i;
  wire [0:0]sl_oport97_i;
  wire [0:0]sl_oport98_i;
  wire [0:0]sl_oport99_i;
  wire [0:0]sl_oport9_i;
  wire tck;
  wire tck_0;
  wire tck_1;
  wire tck_10;
  wire tck_11;
  wire tck_12;
  wire tck_13;
  wire tck_14;
  wire tck_15;
  wire tck_2;
  wire tck_3;
  wire tck_4;
  wire tck_5;
  wire tck_6;
  wire tck_7;
  wire tck_8;
  wire tck_9;
  wire tdi;
  wire tdi_0;
  wire tdi_1;
  wire tdi_10;
  wire tdi_11;
  wire tdi_12;
  wire tdi_13;
  wire tdi_14;
  wire tdi_15;
  wire tdi_2;
  wire tdi_3;
  wire tdi_4;
  wire tdi_5;
  wire tdi_6;
  wire tdi_7;
  wire tdi_8;
  wire tdi_9;
  wire tdo;
  wire tdo_0;
  wire tdo_1;
  wire tdo_10;
  wire tdo_11;
  wire tdo_12;
  wire tdo_13;
  wire tdo_14;
  wire tdo_15;
  wire tdo_2;
  wire tdo_3;
  wire tdo_4;
  wire tdo_5;
  wire tdo_6;
  wire tdo_7;
  wire tdo_8;
  wire tdo_9;
  wire tms;
  wire tms_0;
  wire tms_1;
  wire tms_10;
  wire tms_11;
  wire tms_12;
  wire tms_13;
  wire tms_14;
  wire tms_15;
  wire tms_2;
  wire tms_3;
  wire tms_4;
  wire tms_5;
  wire tms_6;
  wire tms_7;
  wire tms_8;
  wire tms_9;
  wire update;
  wire update_0;
  wire update_1;
  wire update_10;
  wire update_11;
  wire update_12;
  wire update_13;
  wire update_14;
  wire update_15;
  wire update_2;
  wire update_3;
  wire update_4;
  wire update_5;
  wire update_6;
  wire update_7;
  wire update_8;
  wire update_9;

  assign bscanid[31] = \<const0> ;
  assign bscanid[30] = \<const0> ;
  assign bscanid[29] = \<const0> ;
  assign bscanid[28] = \<const0> ;
  assign bscanid[27] = \<const0> ;
  assign bscanid[26] = \<const0> ;
  assign bscanid[25] = \<const0> ;
  assign bscanid[24] = \<const0> ;
  assign bscanid[23] = \<const0> ;
  assign bscanid[22] = \<const0> ;
  assign bscanid[21] = \<const0> ;
  assign bscanid[20] = \<const0> ;
  assign bscanid[19] = \<const0> ;
  assign bscanid[18] = \<const0> ;
  assign bscanid[17] = \<const0> ;
  assign bscanid[16] = \<const0> ;
  assign bscanid[15] = \<const0> ;
  assign bscanid[14] = \<const0> ;
  assign bscanid[13] = \<const0> ;
  assign bscanid[12] = \<const0> ;
  assign bscanid[11] = \<const0> ;
  assign bscanid[10] = \<const0> ;
  assign bscanid[9] = \<const0> ;
  assign bscanid[8] = \<const0> ;
  assign bscanid[7] = \<const0> ;
  assign bscanid[6] = \<const0> ;
  assign bscanid[5] = \<const0> ;
  assign bscanid[4] = \<const0> ;
  assign bscanid[3] = \<const0> ;
  assign bscanid[2] = \<const0> ;
  assign bscanid[1] = \<const0> ;
  assign bscanid[0] = \<const0> ;
  (* C_BSCANID = "32'b00000100100100000000001000100000" *) 
  (* C_BSCAN_MODE = "0" *) 
  (* C_BSCAN_MODE_WITH_CORE = "0" *) 
  (* C_BUILD_REVISION = "0" *) 
  (* C_CLKFBOUT_MULT_F = "10.000000" *) 
  (* C_CLKOUT0_DIVIDE_F = "10.000000" *) 
  (* C_CLK_INPUT_FREQ_HZ = "32'b00010001111000011010001100000000" *) 
  (* C_CORE_MAJOR_VER = "1" *) 
  (* C_CORE_MINOR_ALPHA_VER = "97" *) 
  (* C_CORE_MINOR_VER = "0" *) 
  (* C_CORE_TYPE = "1" *) 
  (* C_DCLK_HAS_RESET = "0" *) 
  (* C_DIVCLK_DIVIDE = "3" *) 
  (* C_ENABLE_CLK_DIVIDER = "0" *) 
  (* C_EN_BSCANID_VEC = "0" *) 
  (* C_EN_INT_SIM = "1" *) 
  (* C_FIFO_STYLE = "SUBCORE" *) 
  (* C_MAJOR_VERSION = "14" *) 
  (* C_MINOR_VERSION = "1" *) 
  (* C_NUM_BSCAN_MASTER_PORTS = "0" *) 
  (* C_TWO_PRIM_MODE = "0" *) 
  (* C_USER_SCAN_CHAIN = "1" *) 
  (* C_USER_SCAN_CHAIN1 = "1" *) 
  (* C_USE_BUFR = "0" *) 
  (* C_USE_EXT_BSCAN = "0" *) 
  (* C_USE_STARTUP_CLK = "0" *) 
  (* C_XDEVICEFAMILY = "artix7" *) 
  (* C_XSDB_NUM_SLAVES = "2" *) 
  (* C_XSDB_PERIOD_FRC = "0" *) 
  (* C_XSDB_PERIOD_INT = "10" *) 
  (* DONT_TOUCH *) 
  (* LC_CLKIN1_PERIOD = "3.333333" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_xsdbm_id \BSCANID.u_xsdbm_id 
       (.bscanid_en(bscanid_en),
        .bscanid_en_0(bscanid_en_0),
        .bscanid_en_1(bscanid_en_1),
        .bscanid_en_10(bscanid_en_10),
        .bscanid_en_11(bscanid_en_11),
        .bscanid_en_12(bscanid_en_12),
        .bscanid_en_13(bscanid_en_13),
        .bscanid_en_14(bscanid_en_14),
        .bscanid_en_15(bscanid_en_15),
        .bscanid_en_2(bscanid_en_2),
        .bscanid_en_3(bscanid_en_3),
        .bscanid_en_4(bscanid_en_4),
        .bscanid_en_5(bscanid_en_5),
        .bscanid_en_6(bscanid_en_6),
        .bscanid_en_7(bscanid_en_7),
        .bscanid_en_8(bscanid_en_8),
        .bscanid_en_9(bscanid_en_9),
        .capture(capture),
        .capture_0(capture_0),
        .capture_1(capture_1),
        .capture_10(capture_10),
        .capture_11(capture_11),
        .capture_12(capture_12),
        .capture_13(capture_13),
        .capture_14(capture_14),
        .capture_15(capture_15),
        .capture_2(capture_2),
        .capture_3(capture_3),
        .capture_4(capture_4),
        .capture_5(capture_5),
        .capture_6(capture_6),
        .capture_7(capture_7),
        .capture_8(capture_8),
        .capture_9(capture_9),
        .clk(clk),
        .drck(drck),
        .drck_0(drck_0),
        .drck_1(drck_1),
        .drck_10(drck_10),
        .drck_11(drck_11),
        .drck_12(drck_12),
        .drck_13(drck_13),
        .drck_14(drck_14),
        .drck_15(drck_15),
        .drck_2(drck_2),
        .drck_3(drck_3),
        .drck_4(drck_4),
        .drck_5(drck_5),
        .drck_6(drck_6),
        .drck_7(drck_7),
        .drck_8(drck_8),
        .drck_9(drck_9),
        .reset(reset),
        .reset_0(reset_0),
        .reset_1(reset_1),
        .reset_10(reset_10),
        .reset_11(reset_11),
        .reset_12(reset_12),
        .reset_13(reset_13),
        .reset_14(reset_14),
        .reset_15(reset_15),
        .reset_2(reset_2),
        .reset_3(reset_3),
        .reset_4(reset_4),
        .reset_5(reset_5),
        .reset_6(reset_6),
        .reset_7(reset_7),
        .reset_8(reset_8),
        .reset_9(reset_9),
        .runtest(runtest),
        .runtest_0(runtest_0),
        .runtest_1(runtest_1),
        .runtest_10(runtest_10),
        .runtest_11(runtest_11),
        .runtest_12(runtest_12),
        .runtest_13(runtest_13),
        .runtest_14(runtest_14),
        .runtest_15(runtest_15),
        .runtest_2(runtest_2),
        .runtest_3(runtest_3),
        .runtest_4(runtest_4),
        .runtest_5(runtest_5),
        .runtest_6(runtest_6),
        .runtest_7(runtest_7),
        .runtest_8(runtest_8),
        .runtest_9(runtest_9),
        .sel(sel),
        .sel_0(sel_0),
        .sel_1(sel_1),
        .sel_10(sel_10),
        .sel_11(sel_11),
        .sel_12(sel_12),
        .sel_13(sel_13),
        .sel_14(sel_14),
        .sel_15(sel_15),
        .sel_2(sel_2),
        .sel_3(sel_3),
        .sel_4(sel_4),
        .sel_5(sel_5),
        .sel_6(sel_6),
        .sel_7(sel_7),
        .sel_8(sel_8),
        .sel_9(sel_9),
        .shift(shift),
        .shift_0(shift_0),
        .shift_1(shift_1),
        .shift_10(shift_10),
        .shift_11(shift_11),
        .shift_12(shift_12),
        .shift_13(shift_13),
        .shift_14(shift_14),
        .shift_15(shift_15),
        .shift_2(shift_2),
        .shift_3(shift_3),
        .shift_4(shift_4),
        .shift_5(shift_5),
        .shift_6(shift_6),
        .shift_7(shift_7),
        .shift_8(shift_8),
        .shift_9(shift_9),
        .sl_iport0_o(sl_iport0_o),
        .sl_iport100_o(sl_iport100_o),
        .sl_iport101_o(sl_iport101_o),
        .sl_iport102_o(sl_iport102_o),
        .sl_iport103_o(sl_iport103_o),
        .sl_iport104_o(sl_iport104_o),
        .sl_iport105_o(sl_iport105_o),
        .sl_iport106_o(sl_iport106_o),
        .sl_iport107_o(sl_iport107_o),
        .sl_iport108_o(sl_iport108_o),
        .sl_iport109_o(sl_iport109_o),
        .sl_iport10_o(sl_iport10_o),
        .sl_iport110_o(sl_iport110_o),
        .sl_iport111_o(sl_iport111_o),
        .sl_iport112_o(sl_iport112_o),
        .sl_iport113_o(sl_iport113_o),
        .sl_iport114_o(sl_iport114_o),
        .sl_iport115_o(sl_iport115_o),
        .sl_iport116_o(sl_iport116_o),
        .sl_iport117_o(sl_iport117_o),
        .sl_iport118_o(sl_iport118_o),
        .sl_iport119_o(sl_iport119_o),
        .sl_iport11_o(sl_iport11_o),
        .sl_iport120_o(sl_iport120_o),
        .sl_iport121_o(sl_iport121_o),
        .sl_iport122_o(sl_iport122_o),
        .sl_iport123_o(sl_iport123_o),
        .sl_iport124_o(sl_iport124_o),
        .sl_iport125_o(sl_iport125_o),
        .sl_iport126_o(sl_iport126_o),
        .sl_iport127_o(sl_iport127_o),
        .sl_iport128_o(sl_iport128_o),
        .sl_iport129_o(sl_iport129_o),
        .sl_iport12_o(sl_iport12_o),
        .sl_iport130_o(sl_iport130_o),
        .sl_iport131_o(sl_iport131_o),
        .sl_iport132_o(sl_iport132_o),
        .sl_iport133_o(sl_iport133_o),
        .sl_iport134_o(sl_iport134_o),
        .sl_iport135_o(sl_iport135_o),
        .sl_iport136_o(sl_iport136_o),
        .sl_iport137_o(sl_iport137_o),
        .sl_iport138_o(sl_iport138_o),
        .sl_iport139_o(sl_iport139_o),
        .sl_iport13_o(sl_iport13_o),
        .sl_iport140_o(sl_iport140_o),
        .sl_iport141_o(sl_iport141_o),
        .sl_iport142_o(sl_iport142_o),
        .sl_iport143_o(sl_iport143_o),
        .sl_iport144_o(sl_iport144_o),
        .sl_iport145_o(sl_iport145_o),
        .sl_iport146_o(sl_iport146_o),
        .sl_iport147_o(sl_iport147_o),
        .sl_iport148_o(sl_iport148_o),
        .sl_iport149_o(sl_iport149_o),
        .sl_iport14_o(sl_iport14_o),
        .sl_iport150_o(sl_iport150_o),
        .sl_iport151_o(sl_iport151_o),
        .sl_iport152_o(sl_iport152_o),
        .sl_iport153_o(sl_iport153_o),
        .sl_iport154_o(sl_iport154_o),
        .sl_iport155_o(sl_iport155_o),
        .sl_iport156_o(sl_iport156_o),
        .sl_iport157_o(sl_iport157_o),
        .sl_iport158_o(sl_iport158_o),
        .sl_iport159_o(sl_iport159_o),
        .sl_iport15_o(sl_iport15_o),
        .sl_iport160_o(sl_iport160_o),
        .sl_iport161_o(sl_iport161_o),
        .sl_iport162_o(sl_iport162_o),
        .sl_iport163_o(sl_iport163_o),
        .sl_iport164_o(sl_iport164_o),
        .sl_iport165_o(sl_iport165_o),
        .sl_iport166_o(sl_iport166_o),
        .sl_iport167_o(sl_iport167_o),
        .sl_iport168_o(sl_iport168_o),
        .sl_iport169_o(sl_iport169_o),
        .sl_iport16_o(sl_iport16_o),
        .sl_iport170_o(sl_iport170_o),
        .sl_iport171_o(sl_iport171_o),
        .sl_iport172_o(sl_iport172_o),
        .sl_iport173_o(sl_iport173_o),
        .sl_iport174_o(sl_iport174_o),
        .sl_iport175_o(sl_iport175_o),
        .sl_iport176_o(sl_iport176_o),
        .sl_iport177_o(sl_iport177_o),
        .sl_iport178_o(sl_iport178_o),
        .sl_iport179_o(sl_iport179_o),
        .sl_iport17_o(sl_iport17_o),
        .sl_iport180_o(sl_iport180_o),
        .sl_iport181_o(sl_iport181_o),
        .sl_iport182_o(sl_iport182_o),
        .sl_iport183_o(sl_iport183_o),
        .sl_iport184_o(sl_iport184_o),
        .sl_iport185_o(sl_iport185_o),
        .sl_iport186_o(sl_iport186_o),
        .sl_iport187_o(sl_iport187_o),
        .sl_iport188_o(sl_iport188_o),
        .sl_iport189_o(sl_iport189_o),
        .sl_iport18_o(sl_iport18_o),
        .sl_iport190_o(sl_iport190_o),
        .sl_iport191_o(sl_iport191_o),
        .sl_iport192_o(sl_iport192_o),
        .sl_iport193_o(sl_iport193_o),
        .sl_iport194_o(sl_iport194_o),
        .sl_iport195_o(sl_iport195_o),
        .sl_iport196_o(sl_iport196_o),
        .sl_iport197_o(sl_iport197_o),
        .sl_iport198_o(sl_iport198_o),
        .sl_iport199_o(sl_iport199_o),
        .sl_iport19_o(sl_iport19_o),
        .sl_iport1_o(sl_iport1_o),
        .sl_iport200_o(sl_iport200_o),
        .sl_iport201_o(sl_iport201_o),
        .sl_iport202_o(sl_iport202_o),
        .sl_iport203_o(sl_iport203_o),
        .sl_iport204_o(sl_iport204_o),
        .sl_iport205_o(sl_iport205_o),
        .sl_iport206_o(sl_iport206_o),
        .sl_iport207_o(sl_iport207_o),
        .sl_iport208_o(sl_iport208_o),
        .sl_iport209_o(sl_iport209_o),
        .sl_iport20_o(sl_iport20_o),
        .sl_iport210_o(sl_iport210_o),
        .sl_iport211_o(sl_iport211_o),
        .sl_iport212_o(sl_iport212_o),
        .sl_iport213_o(sl_iport213_o),
        .sl_iport214_o(sl_iport214_o),
        .sl_iport215_o(sl_iport215_o),
        .sl_iport216_o(sl_iport216_o),
        .sl_iport217_o(sl_iport217_o),
        .sl_iport218_o(sl_iport218_o),
        .sl_iport219_o(sl_iport219_o),
        .sl_iport21_o(sl_iport21_o),
        .sl_iport220_o(sl_iport220_o),
        .sl_iport221_o(sl_iport221_o),
        .sl_iport222_o(sl_iport222_o),
        .sl_iport223_o(sl_iport223_o),
        .sl_iport224_o(sl_iport224_o),
        .sl_iport225_o(sl_iport225_o),
        .sl_iport226_o(sl_iport226_o),
        .sl_iport227_o(sl_iport227_o),
        .sl_iport228_o(sl_iport228_o),
        .sl_iport229_o(sl_iport229_o),
        .sl_iport22_o(sl_iport22_o),
        .sl_iport230_o(sl_iport230_o),
        .sl_iport231_o(sl_iport231_o),
        .sl_iport232_o(sl_iport232_o),
        .sl_iport233_o(sl_iport233_o),
        .sl_iport234_o(sl_iport234_o),
        .sl_iport235_o(sl_iport235_o),
        .sl_iport236_o(sl_iport236_o),
        .sl_iport237_o(sl_iport237_o),
        .sl_iport238_o(sl_iport238_o),
        .sl_iport239_o(sl_iport239_o),
        .sl_iport23_o(sl_iport23_o),
        .sl_iport240_o(sl_iport240_o),
        .sl_iport241_o(sl_iport241_o),
        .sl_iport242_o(sl_iport242_o),
        .sl_iport243_o(sl_iport243_o),
        .sl_iport244_o(sl_iport244_o),
        .sl_iport245_o(sl_iport245_o),
        .sl_iport246_o(sl_iport246_o),
        .sl_iport247_o(sl_iport247_o),
        .sl_iport248_o(sl_iport248_o),
        .sl_iport249_o(sl_iport249_o),
        .sl_iport24_o(sl_iport24_o),
        .sl_iport250_o(sl_iport250_o),
        .sl_iport251_o(sl_iport251_o),
        .sl_iport252_o(sl_iport252_o),
        .sl_iport253_o(sl_iport253_o),
        .sl_iport254_o(sl_iport254_o),
        .sl_iport255_o(sl_iport255_o),
        .sl_iport25_o(sl_iport25_o),
        .sl_iport26_o(sl_iport26_o),
        .sl_iport27_o(sl_iport27_o),
        .sl_iport28_o(sl_iport28_o),
        .sl_iport29_o(sl_iport29_o),
        .sl_iport2_o(sl_iport2_o),
        .sl_iport30_o(sl_iport30_o),
        .sl_iport31_o(sl_iport31_o),
        .sl_iport32_o(sl_iport32_o),
        .sl_iport33_o(sl_iport33_o),
        .sl_iport34_o(sl_iport34_o),
        .sl_iport35_o(sl_iport35_o),
        .sl_iport36_o(sl_iport36_o),
        .sl_iport37_o(sl_iport37_o),
        .sl_iport38_o(sl_iport38_o),
        .sl_iport39_o(sl_iport39_o),
        .sl_iport3_o(sl_iport3_o),
        .sl_iport40_o(sl_iport40_o),
        .sl_iport41_o(sl_iport41_o),
        .sl_iport42_o(sl_iport42_o),
        .sl_iport43_o(sl_iport43_o),
        .sl_iport44_o(sl_iport44_o),
        .sl_iport45_o(sl_iport45_o),
        .sl_iport46_o(sl_iport46_o),
        .sl_iport47_o(sl_iport47_o),
        .sl_iport48_o(sl_iport48_o),
        .sl_iport49_o(sl_iport49_o),
        .sl_iport4_o(sl_iport4_o),
        .sl_iport50_o(sl_iport50_o),
        .sl_iport51_o(sl_iport51_o),
        .sl_iport52_o(sl_iport52_o),
        .sl_iport53_o(sl_iport53_o),
        .sl_iport54_o(sl_iport54_o),
        .sl_iport55_o(sl_iport55_o),
        .sl_iport56_o(sl_iport56_o),
        .sl_iport57_o(sl_iport57_o),
        .sl_iport58_o(sl_iport58_o),
        .sl_iport59_o(sl_iport59_o),
        .sl_iport5_o(sl_iport5_o),
        .sl_iport60_o(sl_iport60_o),
        .sl_iport61_o(sl_iport61_o),
        .sl_iport62_o(sl_iport62_o),
        .sl_iport63_o(sl_iport63_o),
        .sl_iport64_o(sl_iport64_o),
        .sl_iport65_o(sl_iport65_o),
        .sl_iport66_o(sl_iport66_o),
        .sl_iport67_o(sl_iport67_o),
        .sl_iport68_o(sl_iport68_o),
        .sl_iport69_o(sl_iport69_o),
        .sl_iport6_o(sl_iport6_o),
        .sl_iport70_o(sl_iport70_o),
        .sl_iport71_o(sl_iport71_o),
        .sl_iport72_o(sl_iport72_o),
        .sl_iport73_o(sl_iport73_o),
        .sl_iport74_o(sl_iport74_o),
        .sl_iport75_o(sl_iport75_o),
        .sl_iport76_o(sl_iport76_o),
        .sl_iport77_o(sl_iport77_o),
        .sl_iport78_o(sl_iport78_o),
        .sl_iport79_o(sl_iport79_o),
        .sl_iport7_o(sl_iport7_o),
        .sl_iport80_o(sl_iport80_o),
        .sl_iport81_o(sl_iport81_o),
        .sl_iport82_o(sl_iport82_o),
        .sl_iport83_o(sl_iport83_o),
        .sl_iport84_o(sl_iport84_o),
        .sl_iport85_o(sl_iport85_o),
        .sl_iport86_o(sl_iport86_o),
        .sl_iport87_o(sl_iport87_o),
        .sl_iport88_o(sl_iport88_o),
        .sl_iport89_o(sl_iport89_o),
        .sl_iport8_o(sl_iport8_o),
        .sl_iport90_o(sl_iport90_o),
        .sl_iport91_o(sl_iport91_o),
        .sl_iport92_o(sl_iport92_o),
        .sl_iport93_o(sl_iport93_o),
        .sl_iport94_o(sl_iport94_o),
        .sl_iport95_o(sl_iport95_o),
        .sl_iport96_o(sl_iport96_o),
        .sl_iport97_o(sl_iport97_o),
        .sl_iport98_o(sl_iport98_o),
        .sl_iport99_o(sl_iport99_o),
        .sl_iport9_o(sl_iport9_o),
        .sl_oport0_i(sl_oport0_i),
        .sl_oport100_i(sl_oport100_i),
        .sl_oport101_i(sl_oport101_i),
        .sl_oport102_i(sl_oport102_i),
        .sl_oport103_i(sl_oport103_i),
        .sl_oport104_i(sl_oport104_i),
        .sl_oport105_i(sl_oport105_i),
        .sl_oport106_i(sl_oport106_i),
        .sl_oport107_i(sl_oport107_i),
        .sl_oport108_i(sl_oport108_i),
        .sl_oport109_i(sl_oport109_i),
        .sl_oport10_i(sl_oport10_i),
        .sl_oport110_i(sl_oport110_i),
        .sl_oport111_i(sl_oport111_i),
        .sl_oport112_i(sl_oport112_i),
        .sl_oport113_i(sl_oport113_i),
        .sl_oport114_i(sl_oport114_i),
        .sl_oport115_i(sl_oport115_i),
        .sl_oport116_i(sl_oport116_i),
        .sl_oport117_i(sl_oport117_i),
        .sl_oport118_i(sl_oport118_i),
        .sl_oport119_i(sl_oport119_i),
        .sl_oport11_i(sl_oport11_i),
        .sl_oport120_i(sl_oport120_i),
        .sl_oport121_i(sl_oport121_i),
        .sl_oport122_i(sl_oport122_i),
        .sl_oport123_i(sl_oport123_i),
        .sl_oport124_i(sl_oport124_i),
        .sl_oport125_i(sl_oport125_i),
        .sl_oport126_i(sl_oport126_i),
        .sl_oport127_i(sl_oport127_i),
        .sl_oport128_i(sl_oport128_i),
        .sl_oport129_i(sl_oport129_i),
        .sl_oport12_i(sl_oport12_i),
        .sl_oport130_i(sl_oport130_i),
        .sl_oport131_i(sl_oport131_i),
        .sl_oport132_i(sl_oport132_i),
        .sl_oport133_i(sl_oport133_i),
        .sl_oport134_i(sl_oport134_i),
        .sl_oport135_i(sl_oport135_i),
        .sl_oport136_i(sl_oport136_i),
        .sl_oport137_i(sl_oport137_i),
        .sl_oport138_i(sl_oport138_i),
        .sl_oport139_i(sl_oport139_i),
        .sl_oport13_i(sl_oport13_i),
        .sl_oport140_i(sl_oport140_i),
        .sl_oport141_i(sl_oport141_i),
        .sl_oport142_i(sl_oport142_i),
        .sl_oport143_i(sl_oport143_i),
        .sl_oport144_i(sl_oport144_i),
        .sl_oport145_i(sl_oport145_i),
        .sl_oport146_i(sl_oport146_i),
        .sl_oport147_i(sl_oport147_i),
        .sl_oport148_i(sl_oport148_i),
        .sl_oport149_i(sl_oport149_i),
        .sl_oport14_i(sl_oport14_i),
        .sl_oport150_i(sl_oport150_i),
        .sl_oport151_i(sl_oport151_i),
        .sl_oport152_i(sl_oport152_i),
        .sl_oport153_i(sl_oport153_i),
        .sl_oport154_i(sl_oport154_i),
        .sl_oport155_i(sl_oport155_i),
        .sl_oport156_i(sl_oport156_i),
        .sl_oport157_i(sl_oport157_i),
        .sl_oport158_i(sl_oport158_i),
        .sl_oport159_i(sl_oport159_i),
        .sl_oport15_i(sl_oport15_i),
        .sl_oport160_i(sl_oport160_i),
        .sl_oport161_i(sl_oport161_i),
        .sl_oport162_i(sl_oport162_i),
        .sl_oport163_i(sl_oport163_i),
        .sl_oport164_i(sl_oport164_i),
        .sl_oport165_i(sl_oport165_i),
        .sl_oport166_i(sl_oport166_i),
        .sl_oport167_i(sl_oport167_i),
        .sl_oport168_i(sl_oport168_i),
        .sl_oport169_i(sl_oport169_i),
        .sl_oport16_i(sl_oport16_i),
        .sl_oport170_i(sl_oport170_i),
        .sl_oport171_i(sl_oport171_i),
        .sl_oport172_i(sl_oport172_i),
        .sl_oport173_i(sl_oport173_i),
        .sl_oport174_i(sl_oport174_i),
        .sl_oport175_i(sl_oport175_i),
        .sl_oport176_i(sl_oport176_i),
        .sl_oport177_i(sl_oport177_i),
        .sl_oport178_i(sl_oport178_i),
        .sl_oport179_i(sl_oport179_i),
        .sl_oport17_i(sl_oport17_i),
        .sl_oport180_i(sl_oport180_i),
        .sl_oport181_i(sl_oport181_i),
        .sl_oport182_i(sl_oport182_i),
        .sl_oport183_i(sl_oport183_i),
        .sl_oport184_i(sl_oport184_i),
        .sl_oport185_i(sl_oport185_i),
        .sl_oport186_i(sl_oport186_i),
        .sl_oport187_i(sl_oport187_i),
        .sl_oport188_i(sl_oport188_i),
        .sl_oport189_i(sl_oport189_i),
        .sl_oport18_i(sl_oport18_i),
        .sl_oport190_i(sl_oport190_i),
        .sl_oport191_i(sl_oport191_i),
        .sl_oport192_i(sl_oport192_i),
        .sl_oport193_i(sl_oport193_i),
        .sl_oport194_i(sl_oport194_i),
        .sl_oport195_i(sl_oport195_i),
        .sl_oport196_i(sl_oport196_i),
        .sl_oport197_i(sl_oport197_i),
        .sl_oport198_i(sl_oport198_i),
        .sl_oport199_i(sl_oport199_i),
        .sl_oport19_i(sl_oport19_i),
        .sl_oport1_i(sl_oport1_i),
        .sl_oport200_i(sl_oport200_i),
        .sl_oport201_i(sl_oport201_i),
        .sl_oport202_i(sl_oport202_i),
        .sl_oport203_i(sl_oport203_i),
        .sl_oport204_i(sl_oport204_i),
        .sl_oport205_i(sl_oport205_i),
        .sl_oport206_i(sl_oport206_i),
        .sl_oport207_i(sl_oport207_i),
        .sl_oport208_i(sl_oport208_i),
        .sl_oport209_i(sl_oport209_i),
        .sl_oport20_i(sl_oport20_i),
        .sl_oport210_i(sl_oport210_i),
        .sl_oport211_i(sl_oport211_i),
        .sl_oport212_i(sl_oport212_i),
        .sl_oport213_i(sl_oport213_i),
        .sl_oport214_i(sl_oport214_i),
        .sl_oport215_i(sl_oport215_i),
        .sl_oport216_i(sl_oport216_i),
        .sl_oport217_i(sl_oport217_i),
        .sl_oport218_i(sl_oport218_i),
        .sl_oport219_i(sl_oport219_i),
        .sl_oport21_i(sl_oport21_i),
        .sl_oport220_i(sl_oport220_i),
        .sl_oport221_i(sl_oport221_i),
        .sl_oport222_i(sl_oport222_i),
        .sl_oport223_i(sl_oport223_i),
        .sl_oport224_i(sl_oport224_i),
        .sl_oport225_i(sl_oport225_i),
        .sl_oport226_i(sl_oport226_i),
        .sl_oport227_i(sl_oport227_i),
        .sl_oport228_i(sl_oport228_i),
        .sl_oport229_i(sl_oport229_i),
        .sl_oport22_i(sl_oport22_i),
        .sl_oport230_i(sl_oport230_i),
        .sl_oport231_i(sl_oport231_i),
        .sl_oport232_i(sl_oport232_i),
        .sl_oport233_i(sl_oport233_i),
        .sl_oport234_i(sl_oport234_i),
        .sl_oport235_i(sl_oport235_i),
        .sl_oport236_i(sl_oport236_i),
        .sl_oport237_i(sl_oport237_i),
        .sl_oport238_i(sl_oport238_i),
        .sl_oport239_i(sl_oport239_i),
        .sl_oport23_i(sl_oport23_i),
        .sl_oport240_i(sl_oport240_i),
        .sl_oport241_i(sl_oport241_i),
        .sl_oport242_i(sl_oport242_i),
        .sl_oport243_i(sl_oport243_i),
        .sl_oport244_i(sl_oport244_i),
        .sl_oport245_i(sl_oport245_i),
        .sl_oport246_i(sl_oport246_i),
        .sl_oport247_i(sl_oport247_i),
        .sl_oport248_i(sl_oport248_i),
        .sl_oport249_i(sl_oport249_i),
        .sl_oport24_i(sl_oport24_i),
        .sl_oport250_i(sl_oport250_i),
        .sl_oport251_i(sl_oport251_i),
        .sl_oport252_i(sl_oport252_i),
        .sl_oport253_i(sl_oport253_i),
        .sl_oport254_i(sl_oport254_i),
        .sl_oport255_i(sl_oport255_i),
        .sl_oport25_i(sl_oport25_i),
        .sl_oport26_i(sl_oport26_i),
        .sl_oport27_i(sl_oport27_i),
        .sl_oport28_i(sl_oport28_i),
        .sl_oport29_i(sl_oport29_i),
        .sl_oport2_i(sl_oport2_i),
        .sl_oport30_i(sl_oport30_i),
        .sl_oport31_i(sl_oport31_i),
        .sl_oport32_i(sl_oport32_i),
        .sl_oport33_i(sl_oport33_i),
        .sl_oport34_i(sl_oport34_i),
        .sl_oport35_i(sl_oport35_i),
        .sl_oport36_i(sl_oport36_i),
        .sl_oport37_i(sl_oport37_i),
        .sl_oport38_i(sl_oport38_i),
        .sl_oport39_i(sl_oport39_i),
        .sl_oport3_i(sl_oport3_i),
        .sl_oport40_i(sl_oport40_i),
        .sl_oport41_i(sl_oport41_i),
        .sl_oport42_i(sl_oport42_i),
        .sl_oport43_i(sl_oport43_i),
        .sl_oport44_i(sl_oport44_i),
        .sl_oport45_i(sl_oport45_i),
        .sl_oport46_i(sl_oport46_i),
        .sl_oport47_i(sl_oport47_i),
        .sl_oport48_i(sl_oport48_i),
        .sl_oport49_i(sl_oport49_i),
        .sl_oport4_i(sl_oport4_i),
        .sl_oport50_i(sl_oport50_i),
        .sl_oport51_i(sl_oport51_i),
        .sl_oport52_i(sl_oport52_i),
        .sl_oport53_i(sl_oport53_i),
        .sl_oport54_i(sl_oport54_i),
        .sl_oport55_i(sl_oport55_i),
        .sl_oport56_i(sl_oport56_i),
        .sl_oport57_i(sl_oport57_i),
        .sl_oport58_i(sl_oport58_i),
        .sl_oport59_i(sl_oport59_i),
        .sl_oport5_i(sl_oport5_i),
        .sl_oport60_i(sl_oport60_i),
        .sl_oport61_i(sl_oport61_i),
        .sl_oport62_i(sl_oport62_i),
        .sl_oport63_i(sl_oport63_i),
        .sl_oport64_i(sl_oport64_i),
        .sl_oport65_i(sl_oport65_i),
        .sl_oport66_i(sl_oport66_i),
        .sl_oport67_i(sl_oport67_i),
        .sl_oport68_i(sl_oport68_i),
        .sl_oport69_i(sl_oport69_i),
        .sl_oport6_i(sl_oport6_i),
        .sl_oport70_i(sl_oport70_i),
        .sl_oport71_i(sl_oport71_i),
        .sl_oport72_i(sl_oport72_i),
        .sl_oport73_i(sl_oport73_i),
        .sl_oport74_i(sl_oport74_i),
        .sl_oport75_i(sl_oport75_i),
        .sl_oport76_i(sl_oport76_i),
        .sl_oport77_i(sl_oport77_i),
        .sl_oport78_i(sl_oport78_i),
        .sl_oport79_i(sl_oport79_i),
        .sl_oport7_i(sl_oport7_i),
        .sl_oport80_i(sl_oport80_i),
        .sl_oport81_i(sl_oport81_i),
        .sl_oport82_i(sl_oport82_i),
        .sl_oport83_i(sl_oport83_i),
        .sl_oport84_i(sl_oport84_i),
        .sl_oport85_i(sl_oport85_i),
        .sl_oport86_i(sl_oport86_i),
        .sl_oport87_i(sl_oport87_i),
        .sl_oport88_i(sl_oport88_i),
        .sl_oport89_i(sl_oport89_i),
        .sl_oport8_i(sl_oport8_i),
        .sl_oport90_i(sl_oport90_i),
        .sl_oport91_i(sl_oport91_i),
        .sl_oport92_i(sl_oport92_i),
        .sl_oport93_i(sl_oport93_i),
        .sl_oport94_i(sl_oport94_i),
        .sl_oport95_i(sl_oport95_i),
        .sl_oport96_i(sl_oport96_i),
        .sl_oport97_i(sl_oport97_i),
        .sl_oport98_i(sl_oport98_i),
        .sl_oport99_i(sl_oport99_i),
        .sl_oport9_i(sl_oport9_i),
        .tck(tck),
        .tck_0(tck_0),
        .tck_1(tck_1),
        .tck_10(tck_10),
        .tck_11(tck_11),
        .tck_12(tck_12),
        .tck_13(tck_13),
        .tck_14(tck_14),
        .tck_15(tck_15),
        .tck_2(tck_2),
        .tck_3(tck_3),
        .tck_4(tck_4),
        .tck_5(tck_5),
        .tck_6(tck_6),
        .tck_7(tck_7),
        .tck_8(tck_8),
        .tck_9(tck_9),
        .tdi(tdi),
        .tdi_0(tdi_0),
        .tdi_1(tdi_1),
        .tdi_10(tdi_10),
        .tdi_11(tdi_11),
        .tdi_12(tdi_12),
        .tdi_13(tdi_13),
        .tdi_14(tdi_14),
        .tdi_15(tdi_15),
        .tdi_2(tdi_2),
        .tdi_3(tdi_3),
        .tdi_4(tdi_4),
        .tdi_5(tdi_5),
        .tdi_6(tdi_6),
        .tdi_7(tdi_7),
        .tdi_8(tdi_8),
        .tdi_9(tdi_9),
        .tdo(tdo),
        .tdo_0(tdo_0),
        .tdo_1(tdo_1),
        .tdo_10(tdo_10),
        .tdo_11(tdo_11),
        .tdo_12(tdo_12),
        .tdo_13(tdo_13),
        .tdo_14(tdo_14),
        .tdo_15(tdo_15),
        .tdo_2(tdo_2),
        .tdo_3(tdo_3),
        .tdo_4(tdo_4),
        .tdo_5(tdo_5),
        .tdo_6(tdo_6),
        .tdo_7(tdo_7),
        .tdo_8(tdo_8),
        .tdo_9(tdo_9),
        .tms(tms),
        .tms_0(tms_0),
        .tms_1(tms_1),
        .tms_10(tms_10),
        .tms_11(tms_11),
        .tms_12(tms_12),
        .tms_13(tms_13),
        .tms_14(tms_14),
        .tms_15(tms_15),
        .tms_2(tms_2),
        .tms_3(tms_3),
        .tms_4(tms_4),
        .tms_5(tms_5),
        .tms_6(tms_6),
        .tms_7(tms_7),
        .tms_8(tms_8),
        .tms_9(tms_9),
        .update(update),
        .update_0(update_0),
        .update_1(update_1),
        .update_10(update_10),
        .update_11(update_11),
        .update_12(update_12),
        .update_13(update_13),
        .update_14(update_14),
        .update_15(update_15),
        .update_2(update_2),
        .update_3(update_3),
        .update_4(update_4),
        .update_5(update_5),
        .update_6(update_6),
        .update_7(update_7),
        .update_8(update_8),
        .update_9(update_9));
  GND GND
       (.G(\<const0> ));
endmodule

(* C_BSCANID = "32'b00000100100100000000001000100000" *) (* C_BSCAN_MODE = "0" *) (* C_BSCAN_MODE_WITH_CORE = "0" *) 
(* C_BUILD_REVISION = "0" *) (* C_CLKFBOUT_MULT_F = "10.000000" *) (* C_CLKOUT0_DIVIDE_F = "10.000000" *) 
(* C_CLK_INPUT_FREQ_HZ = "32'b00010001111000011010001100000000" *) (* C_CORE_MAJOR_VER = "1" *) (* C_CORE_MINOR_ALPHA_VER = "97" *) 
(* C_CORE_MINOR_VER = "0" *) (* C_CORE_TYPE = "1" *) (* C_DCLK_HAS_RESET = "0" *) 
(* C_DIVCLK_DIVIDE = "3" *) (* C_ENABLE_CLK_DIVIDER = "0" *) (* C_EN_BSCANID_VEC = "0" *) 
(* C_EN_INT_SIM = "1" *) (* C_FIFO_STYLE = "SUBCORE" *) (* C_MAJOR_VERSION = "14" *) 
(* C_MINOR_VERSION = "1" *) (* C_NUM_BSCAN_MASTER_PORTS = "0" *) (* C_TWO_PRIM_MODE = "0" *) 
(* C_USER_SCAN_CHAIN = "1" *) (* C_USER_SCAN_CHAIN1 = "1" *) (* C_USE_BUFR = "0" *) 
(* C_USE_EXT_BSCAN = "0" *) (* C_USE_STARTUP_CLK = "0" *) (* C_XDEVICEFAMILY = "artix7" *) 
(* C_XSDB_NUM_SLAVES = "2" *) (* C_XSDB_PERIOD_FRC = "0" *) (* C_XSDB_PERIOD_INT = "10" *) 
(* LC_CLKIN1_PERIOD = "3.333333" *) (* dont_touch = "true" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_xsdbm_id
   (sl_iport0_o,
    sl_iport1_o,
    sl_iport2_o,
    sl_iport3_o,
    sl_iport4_o,
    sl_iport5_o,
    sl_iport6_o,
    sl_iport7_o,
    sl_iport8_o,
    sl_iport9_o,
    sl_iport10_o,
    sl_iport11_o,
    sl_iport12_o,
    sl_iport13_o,
    sl_iport14_o,
    sl_iport15_o,
    sl_iport16_o,
    sl_iport17_o,
    sl_iport18_o,
    sl_iport19_o,
    sl_iport20_o,
    sl_iport21_o,
    sl_iport22_o,
    sl_iport23_o,
    sl_iport24_o,
    sl_iport25_o,
    sl_iport26_o,
    sl_iport27_o,
    sl_iport28_o,
    sl_iport29_o,
    sl_iport30_o,
    sl_iport31_o,
    sl_iport32_o,
    sl_iport33_o,
    sl_iport34_o,
    sl_iport35_o,
    sl_iport36_o,
    sl_iport37_o,
    sl_iport38_o,
    sl_iport39_o,
    sl_iport40_o,
    sl_iport41_o,
    sl_iport42_o,
    sl_iport43_o,
    sl_iport44_o,
    sl_iport45_o,
    sl_iport46_o,
    sl_iport47_o,
    sl_iport48_o,
    sl_iport49_o,
    sl_iport50_o,
    sl_iport51_o,
    sl_iport52_o,
    sl_iport53_o,
    sl_iport54_o,
    sl_iport55_o,
    sl_iport56_o,
    sl_iport57_o,
    sl_iport58_o,
    sl_iport59_o,
    sl_iport60_o,
    sl_iport61_o,
    sl_iport62_o,
    sl_iport63_o,
    sl_iport64_o,
    sl_iport65_o,
    sl_iport66_o,
    sl_iport67_o,
    sl_iport68_o,
    sl_iport69_o,
    sl_iport70_o,
    sl_iport71_o,
    sl_iport72_o,
    sl_iport73_o,
    sl_iport74_o,
    sl_iport75_o,
    sl_iport76_o,
    sl_iport77_o,
    sl_iport78_o,
    sl_iport79_o,
    sl_iport80_o,
    sl_iport81_o,
    sl_iport82_o,
    sl_iport83_o,
    sl_iport84_o,
    sl_iport85_o,
    sl_iport86_o,
    sl_iport87_o,
    sl_iport88_o,
    sl_iport89_o,
    sl_iport90_o,
    sl_iport91_o,
    sl_iport92_o,
    sl_iport93_o,
    sl_iport94_o,
    sl_iport95_o,
    sl_iport96_o,
    sl_iport97_o,
    sl_iport98_o,
    sl_iport99_o,
    sl_iport100_o,
    sl_iport101_o,
    sl_iport102_o,
    sl_iport103_o,
    sl_iport104_o,
    sl_iport105_o,
    sl_iport106_o,
    sl_iport107_o,
    sl_iport108_o,
    sl_iport109_o,
    sl_iport110_o,
    sl_iport111_o,
    sl_iport112_o,
    sl_iport113_o,
    sl_iport114_o,
    sl_iport115_o,
    sl_iport116_o,
    sl_iport117_o,
    sl_iport118_o,
    sl_iport119_o,
    sl_iport120_o,
    sl_iport121_o,
    sl_iport122_o,
    sl_iport123_o,
    sl_iport124_o,
    sl_iport125_o,
    sl_iport126_o,
    sl_iport127_o,
    sl_iport128_o,
    sl_iport129_o,
    sl_iport130_o,
    sl_iport131_o,
    sl_iport132_o,
    sl_iport133_o,
    sl_iport134_o,
    sl_iport135_o,
    sl_iport136_o,
    sl_iport137_o,
    sl_iport138_o,
    sl_iport139_o,
    sl_iport140_o,
    sl_iport141_o,
    sl_iport142_o,
    sl_iport143_o,
    sl_iport144_o,
    sl_iport145_o,
    sl_iport146_o,
    sl_iport147_o,
    sl_iport148_o,
    sl_iport149_o,
    sl_iport150_o,
    sl_iport151_o,
    sl_iport152_o,
    sl_iport153_o,
    sl_iport154_o,
    sl_iport155_o,
    sl_iport156_o,
    sl_iport157_o,
    sl_iport158_o,
    sl_iport159_o,
    sl_iport160_o,
    sl_iport161_o,
    sl_iport162_o,
    sl_iport163_o,
    sl_iport164_o,
    sl_iport165_o,
    sl_iport166_o,
    sl_iport167_o,
    sl_iport168_o,
    sl_iport169_o,
    sl_iport170_o,
    sl_iport171_o,
    sl_iport172_o,
    sl_iport173_o,
    sl_iport174_o,
    sl_iport175_o,
    sl_iport176_o,
    sl_iport177_o,
    sl_iport178_o,
    sl_iport179_o,
    sl_iport180_o,
    sl_iport181_o,
    sl_iport182_o,
    sl_iport183_o,
    sl_iport184_o,
    sl_iport185_o,
    sl_iport186_o,
    sl_iport187_o,
    sl_iport188_o,
    sl_iport189_o,
    sl_iport190_o,
    sl_iport191_o,
    sl_iport192_o,
    sl_iport193_o,
    sl_iport194_o,
    sl_iport195_o,
    sl_iport196_o,
    sl_iport197_o,
    sl_iport198_o,
    sl_iport199_o,
    sl_iport200_o,
    sl_iport201_o,
    sl_iport202_o,
    sl_iport203_o,
    sl_iport204_o,
    sl_iport205_o,
    sl_iport206_o,
    sl_iport207_o,
    sl_iport208_o,
    sl_iport209_o,
    sl_iport210_o,
    sl_iport211_o,
    sl_iport212_o,
    sl_iport213_o,
    sl_iport214_o,
    sl_iport215_o,
    sl_iport216_o,
    sl_iport217_o,
    sl_iport218_o,
    sl_iport219_o,
    sl_iport220_o,
    sl_iport221_o,
    sl_iport222_o,
    sl_iport223_o,
    sl_iport224_o,
    sl_iport225_o,
    sl_iport226_o,
    sl_iport227_o,
    sl_iport228_o,
    sl_iport229_o,
    sl_iport230_o,
    sl_iport231_o,
    sl_iport232_o,
    sl_iport233_o,
    sl_iport234_o,
    sl_iport235_o,
    sl_iport236_o,
    sl_iport237_o,
    sl_iport238_o,
    sl_iport239_o,
    sl_iport240_o,
    sl_iport241_o,
    sl_iport242_o,
    sl_iport243_o,
    sl_iport244_o,
    sl_iport245_o,
    sl_iport246_o,
    sl_iport247_o,
    sl_iport248_o,
    sl_iport249_o,
    sl_iport250_o,
    sl_iport251_o,
    sl_iport252_o,
    sl_iport253_o,
    sl_iport254_o,
    sl_iport255_o,
    sl_oport0_i,
    sl_oport1_i,
    sl_oport2_i,
    sl_oport3_i,
    sl_oport4_i,
    sl_oport5_i,
    sl_oport6_i,
    sl_oport7_i,
    sl_oport8_i,
    sl_oport9_i,
    sl_oport10_i,
    sl_oport11_i,
    sl_oport12_i,
    sl_oport13_i,
    sl_oport14_i,
    sl_oport15_i,
    sl_oport16_i,
    sl_oport17_i,
    sl_oport18_i,
    sl_oport19_i,
    sl_oport20_i,
    sl_oport21_i,
    sl_oport22_i,
    sl_oport23_i,
    sl_oport24_i,
    sl_oport25_i,
    sl_oport26_i,
    sl_oport27_i,
    sl_oport28_i,
    sl_oport29_i,
    sl_oport30_i,
    sl_oport31_i,
    sl_oport32_i,
    sl_oport33_i,
    sl_oport34_i,
    sl_oport35_i,
    sl_oport36_i,
    sl_oport37_i,
    sl_oport38_i,
    sl_oport39_i,
    sl_oport40_i,
    sl_oport41_i,
    sl_oport42_i,
    sl_oport43_i,
    sl_oport44_i,
    sl_oport45_i,
    sl_oport46_i,
    sl_oport47_i,
    sl_oport48_i,
    sl_oport49_i,
    sl_oport50_i,
    sl_oport51_i,
    sl_oport52_i,
    sl_oport53_i,
    sl_oport54_i,
    sl_oport55_i,
    sl_oport56_i,
    sl_oport57_i,
    sl_oport58_i,
    sl_oport59_i,
    sl_oport60_i,
    sl_oport61_i,
    sl_oport62_i,
    sl_oport63_i,
    sl_oport64_i,
    sl_oport65_i,
    sl_oport66_i,
    sl_oport67_i,
    sl_oport68_i,
    sl_oport69_i,
    sl_oport70_i,
    sl_oport71_i,
    sl_oport72_i,
    sl_oport73_i,
    sl_oport74_i,
    sl_oport75_i,
    sl_oport76_i,
    sl_oport77_i,
    sl_oport78_i,
    sl_oport79_i,
    sl_oport80_i,
    sl_oport81_i,
    sl_oport82_i,
    sl_oport83_i,
    sl_oport84_i,
    sl_oport85_i,
    sl_oport86_i,
    sl_oport87_i,
    sl_oport88_i,
    sl_oport89_i,
    sl_oport90_i,
    sl_oport91_i,
    sl_oport92_i,
    sl_oport93_i,
    sl_oport94_i,
    sl_oport95_i,
    sl_oport96_i,
    sl_oport97_i,
    sl_oport98_i,
    sl_oport99_i,
    sl_oport100_i,
    sl_oport101_i,
    sl_oport102_i,
    sl_oport103_i,
    sl_oport104_i,
    sl_oport105_i,
    sl_oport106_i,
    sl_oport107_i,
    sl_oport108_i,
    sl_oport109_i,
    sl_oport110_i,
    sl_oport111_i,
    sl_oport112_i,
    sl_oport113_i,
    sl_oport114_i,
    sl_oport115_i,
    sl_oport116_i,
    sl_oport117_i,
    sl_oport118_i,
    sl_oport119_i,
    sl_oport120_i,
    sl_oport121_i,
    sl_oport122_i,
    sl_oport123_i,
    sl_oport124_i,
    sl_oport125_i,
    sl_oport126_i,
    sl_oport127_i,
    sl_oport128_i,
    sl_oport129_i,
    sl_oport130_i,
    sl_oport131_i,
    sl_oport132_i,
    sl_oport133_i,
    sl_oport134_i,
    sl_oport135_i,
    sl_oport136_i,
    sl_oport137_i,
    sl_oport138_i,
    sl_oport139_i,
    sl_oport140_i,
    sl_oport141_i,
    sl_oport142_i,
    sl_oport143_i,
    sl_oport144_i,
    sl_oport145_i,
    sl_oport146_i,
    sl_oport147_i,
    sl_oport148_i,
    sl_oport149_i,
    sl_oport150_i,
    sl_oport151_i,
    sl_oport152_i,
    sl_oport153_i,
    sl_oport154_i,
    sl_oport155_i,
    sl_oport156_i,
    sl_oport157_i,
    sl_oport158_i,
    sl_oport159_i,
    sl_oport160_i,
    sl_oport161_i,
    sl_oport162_i,
    sl_oport163_i,
    sl_oport164_i,
    sl_oport165_i,
    sl_oport166_i,
    sl_oport167_i,
    sl_oport168_i,
    sl_oport169_i,
    sl_oport170_i,
    sl_oport171_i,
    sl_oport172_i,
    sl_oport173_i,
    sl_oport174_i,
    sl_oport175_i,
    sl_oport176_i,
    sl_oport177_i,
    sl_oport178_i,
    sl_oport179_i,
    sl_oport180_i,
    sl_oport181_i,
    sl_oport182_i,
    sl_oport183_i,
    sl_oport184_i,
    sl_oport185_i,
    sl_oport186_i,
    sl_oport187_i,
    sl_oport188_i,
    sl_oport189_i,
    sl_oport190_i,
    sl_oport191_i,
    sl_oport192_i,
    sl_oport193_i,
    sl_oport194_i,
    sl_oport195_i,
    sl_oport196_i,
    sl_oport197_i,
    sl_oport198_i,
    sl_oport199_i,
    sl_oport200_i,
    sl_oport201_i,
    sl_oport202_i,
    sl_oport203_i,
    sl_oport204_i,
    sl_oport205_i,
    sl_oport206_i,
    sl_oport207_i,
    sl_oport208_i,
    sl_oport209_i,
    sl_oport210_i,
    sl_oport211_i,
    sl_oport212_i,
    sl_oport213_i,
    sl_oport214_i,
    sl_oport215_i,
    sl_oport216_i,
    sl_oport217_i,
    sl_oport218_i,
    sl_oport219_i,
    sl_oport220_i,
    sl_oport221_i,
    sl_oport222_i,
    sl_oport223_i,
    sl_oport224_i,
    sl_oport225_i,
    sl_oport226_i,
    sl_oport227_i,
    sl_oport228_i,
    sl_oport229_i,
    sl_oport230_i,
    sl_oport231_i,
    sl_oport232_i,
    sl_oport233_i,
    sl_oport234_i,
    sl_oport235_i,
    sl_oport236_i,
    sl_oport237_i,
    sl_oport238_i,
    sl_oport239_i,
    sl_oport240_i,
    sl_oport241_i,
    sl_oport242_i,
    sl_oport243_i,
    sl_oport244_i,
    sl_oport245_i,
    sl_oport246_i,
    sl_oport247_i,
    sl_oport248_i,
    sl_oport249_i,
    sl_oport250_i,
    sl_oport251_i,
    sl_oport252_i,
    sl_oport253_i,
    sl_oport254_i,
    sl_oport255_i,
    update_0,
    capture_0,
    reset_0,
    runtest_0,
    tms_0,
    tck_0,
    tdi_0,
    sel_0,
    shift_0,
    drck_0,
    tdo_0,
    update_1,
    capture_1,
    reset_1,
    runtest_1,
    tms_1,
    tck_1,
    tdi_1,
    sel_1,
    shift_1,
    drck_1,
    tdo_1,
    update_2,
    capture_2,
    reset_2,
    runtest_2,
    tms_2,
    tck_2,
    tdi_2,
    sel_2,
    shift_2,
    drck_2,
    tdo_2,
    update_3,
    capture_3,
    reset_3,
    runtest_3,
    tms_3,
    tck_3,
    tdi_3,
    sel_3,
    shift_3,
    drck_3,
    tdo_3,
    update_4,
    capture_4,
    reset_4,
    runtest_4,
    tms_4,
    tck_4,
    tdi_4,
    sel_4,
    shift_4,
    drck_4,
    tdo_4,
    update_5,
    capture_5,
    reset_5,
    runtest_5,
    tms_5,
    tck_5,
    tdi_5,
    sel_5,
    shift_5,
    drck_5,
    tdo_5,
    update_6,
    capture_6,
    reset_6,
    runtest_6,
    tms_6,
    tck_6,
    tdi_6,
    sel_6,
    shift_6,
    drck_6,
    tdo_6,
    update_7,
    capture_7,
    reset_7,
    runtest_7,
    tms_7,
    tck_7,
    tdi_7,
    sel_7,
    shift_7,
    drck_7,
    tdo_7,
    update_8,
    capture_8,
    reset_8,
    runtest_8,
    tms_8,
    tck_8,
    tdi_8,
    sel_8,
    shift_8,
    drck_8,
    tdo_8,
    update_9,
    capture_9,
    reset_9,
    runtest_9,
    tms_9,
    tck_9,
    tdi_9,
    sel_9,
    shift_9,
    drck_9,
    tdo_9,
    update_10,
    capture_10,
    reset_10,
    runtest_10,
    tms_10,
    tck_10,
    tdi_10,
    sel_10,
    shift_10,
    drck_10,
    tdo_10,
    update_11,
    capture_11,
    reset_11,
    runtest_11,
    tms_11,
    tck_11,
    tdi_11,
    sel_11,
    shift_11,
    drck_11,
    tdo_11,
    update_12,
    capture_12,
    reset_12,
    runtest_12,
    tms_12,
    tck_12,
    tdi_12,
    sel_12,
    shift_12,
    drck_12,
    tdo_12,
    update_13,
    capture_13,
    reset_13,
    runtest_13,
    tms_13,
    tck_13,
    tdi_13,
    sel_13,
    shift_13,
    drck_13,
    tdo_13,
    update_14,
    capture_14,
    reset_14,
    runtest_14,
    tms_14,
    tck_14,
    tdi_14,
    sel_14,
    shift_14,
    drck_14,
    tdo_14,
    update_15,
    capture_15,
    reset_15,
    runtest_15,
    tms_15,
    tck_15,
    tdi_15,
    sel_15,
    shift_15,
    drck_15,
    tdo_15,
    bscanid_en_0,
    bscanid_en_1,
    bscanid_en_2,
    bscanid_en_3,
    bscanid_en_4,
    bscanid_en_5,
    bscanid_en_6,
    bscanid_en_7,
    bscanid_en_8,
    bscanid_en_9,
    bscanid_en_10,
    bscanid_en_11,
    bscanid_en_12,
    bscanid_en_13,
    bscanid_en_14,
    bscanid_en_15,
    update,
    capture,
    reset,
    runtest,
    tck,
    tms,
    tdi,
    sel,
    shift,
    drck,
    tdo,
    bscanid_en,
    clk);
  output [36:0]sl_iport0_o;
  output [36:0]sl_iport1_o;
  output [0:0]sl_iport2_o;
  output [0:0]sl_iport3_o;
  output [0:0]sl_iport4_o;
  output [0:0]sl_iport5_o;
  output [0:0]sl_iport6_o;
  output [0:0]sl_iport7_o;
  output [0:0]sl_iport8_o;
  output [0:0]sl_iport9_o;
  output [0:0]sl_iport10_o;
  output [0:0]sl_iport11_o;
  output [0:0]sl_iport12_o;
  output [0:0]sl_iport13_o;
  output [0:0]sl_iport14_o;
  output [0:0]sl_iport15_o;
  output [0:0]sl_iport16_o;
  output [0:0]sl_iport17_o;
  output [0:0]sl_iport18_o;
  output [0:0]sl_iport19_o;
  output [0:0]sl_iport20_o;
  output [0:0]sl_iport21_o;
  output [0:0]sl_iport22_o;
  output [0:0]sl_iport23_o;
  output [0:0]sl_iport24_o;
  output [0:0]sl_iport25_o;
  output [0:0]sl_iport26_o;
  output [0:0]sl_iport27_o;
  output [0:0]sl_iport28_o;
  output [0:0]sl_iport29_o;
  output [0:0]sl_iport30_o;
  output [0:0]sl_iport31_o;
  output [0:0]sl_iport32_o;
  output [0:0]sl_iport33_o;
  output [0:0]sl_iport34_o;
  output [0:0]sl_iport35_o;
  output [0:0]sl_iport36_o;
  output [0:0]sl_iport37_o;
  output [0:0]sl_iport38_o;
  output [0:0]sl_iport39_o;
  output [0:0]sl_iport40_o;
  output [0:0]sl_iport41_o;
  output [0:0]sl_iport42_o;
  output [0:0]sl_iport43_o;
  output [0:0]sl_iport44_o;
  output [0:0]sl_iport45_o;
  output [0:0]sl_iport46_o;
  output [0:0]sl_iport47_o;
  output [0:0]sl_iport48_o;
  output [0:0]sl_iport49_o;
  output [0:0]sl_iport50_o;
  output [0:0]sl_iport51_o;
  output [0:0]sl_iport52_o;
  output [0:0]sl_iport53_o;
  output [0:0]sl_iport54_o;
  output [0:0]sl_iport55_o;
  output [0:0]sl_iport56_o;
  output [0:0]sl_iport57_o;
  output [0:0]sl_iport58_o;
  output [0:0]sl_iport59_o;
  output [0:0]sl_iport60_o;
  output [0:0]sl_iport61_o;
  output [0:0]sl_iport62_o;
  output [0:0]sl_iport63_o;
  output [0:0]sl_iport64_o;
  output [0:0]sl_iport65_o;
  output [0:0]sl_iport66_o;
  output [0:0]sl_iport67_o;
  output [0:0]sl_iport68_o;
  output [0:0]sl_iport69_o;
  output [0:0]sl_iport70_o;
  output [0:0]sl_iport71_o;
  output [0:0]sl_iport72_o;
  output [0:0]sl_iport73_o;
  output [0:0]sl_iport74_o;
  output [0:0]sl_iport75_o;
  output [0:0]sl_iport76_o;
  output [0:0]sl_iport77_o;
  output [0:0]sl_iport78_o;
  output [0:0]sl_iport79_o;
  output [0:0]sl_iport80_o;
  output [0:0]sl_iport81_o;
  output [0:0]sl_iport82_o;
  output [0:0]sl_iport83_o;
  output [0:0]sl_iport84_o;
  output [0:0]sl_iport85_o;
  output [0:0]sl_iport86_o;
  output [0:0]sl_iport87_o;
  output [0:0]sl_iport88_o;
  output [0:0]sl_iport89_o;
  output [0:0]sl_iport90_o;
  output [0:0]sl_iport91_o;
  output [0:0]sl_iport92_o;
  output [0:0]sl_iport93_o;
  output [0:0]sl_iport94_o;
  output [0:0]sl_iport95_o;
  output [0:0]sl_iport96_o;
  output [0:0]sl_iport97_o;
  output [0:0]sl_iport98_o;
  output [0:0]sl_iport99_o;
  output [0:0]sl_iport100_o;
  output [0:0]sl_iport101_o;
  output [0:0]sl_iport102_o;
  output [0:0]sl_iport103_o;
  output [0:0]sl_iport104_o;
  output [0:0]sl_iport105_o;
  output [0:0]sl_iport106_o;
  output [0:0]sl_iport107_o;
  output [0:0]sl_iport108_o;
  output [0:0]sl_iport109_o;
  output [0:0]sl_iport110_o;
  output [0:0]sl_iport111_o;
  output [0:0]sl_iport112_o;
  output [0:0]sl_iport113_o;
  output [0:0]sl_iport114_o;
  output [0:0]sl_iport115_o;
  output [0:0]sl_iport116_o;
  output [0:0]sl_iport117_o;
  output [0:0]sl_iport118_o;
  output [0:0]sl_iport119_o;
  output [0:0]sl_iport120_o;
  output [0:0]sl_iport121_o;
  output [0:0]sl_iport122_o;
  output [0:0]sl_iport123_o;
  output [0:0]sl_iport124_o;
  output [0:0]sl_iport125_o;
  output [0:0]sl_iport126_o;
  output [0:0]sl_iport127_o;
  output [0:0]sl_iport128_o;
  output [0:0]sl_iport129_o;
  output [0:0]sl_iport130_o;
  output [0:0]sl_iport131_o;
  output [0:0]sl_iport132_o;
  output [0:0]sl_iport133_o;
  output [0:0]sl_iport134_o;
  output [0:0]sl_iport135_o;
  output [0:0]sl_iport136_o;
  output [0:0]sl_iport137_o;
  output [0:0]sl_iport138_o;
  output [0:0]sl_iport139_o;
  output [0:0]sl_iport140_o;
  output [0:0]sl_iport141_o;
  output [0:0]sl_iport142_o;
  output [0:0]sl_iport143_o;
  output [0:0]sl_iport144_o;
  output [0:0]sl_iport145_o;
  output [0:0]sl_iport146_o;
  output [0:0]sl_iport147_o;
  output [0:0]sl_iport148_o;
  output [0:0]sl_iport149_o;
  output [0:0]sl_iport150_o;
  output [0:0]sl_iport151_o;
  output [0:0]sl_iport152_o;
  output [0:0]sl_iport153_o;
  output [0:0]sl_iport154_o;
  output [0:0]sl_iport155_o;
  output [0:0]sl_iport156_o;
  output [0:0]sl_iport157_o;
  output [0:0]sl_iport158_o;
  output [0:0]sl_iport159_o;
  output [0:0]sl_iport160_o;
  output [0:0]sl_iport161_o;
  output [0:0]sl_iport162_o;
  output [0:0]sl_iport163_o;
  output [0:0]sl_iport164_o;
  output [0:0]sl_iport165_o;
  output [0:0]sl_iport166_o;
  output [0:0]sl_iport167_o;
  output [0:0]sl_iport168_o;
  output [0:0]sl_iport169_o;
  output [0:0]sl_iport170_o;
  output [0:0]sl_iport171_o;
  output [0:0]sl_iport172_o;
  output [0:0]sl_iport173_o;
  output [0:0]sl_iport174_o;
  output [0:0]sl_iport175_o;
  output [0:0]sl_iport176_o;
  output [0:0]sl_iport177_o;
  output [0:0]sl_iport178_o;
  output [0:0]sl_iport179_o;
  output [0:0]sl_iport180_o;
  output [0:0]sl_iport181_o;
  output [0:0]sl_iport182_o;
  output [0:0]sl_iport183_o;
  output [0:0]sl_iport184_o;
  output [0:0]sl_iport185_o;
  output [0:0]sl_iport186_o;
  output [0:0]sl_iport187_o;
  output [0:0]sl_iport188_o;
  output [0:0]sl_iport189_o;
  output [0:0]sl_iport190_o;
  output [0:0]sl_iport191_o;
  output [0:0]sl_iport192_o;
  output [0:0]sl_iport193_o;
  output [0:0]sl_iport194_o;
  output [0:0]sl_iport195_o;
  output [0:0]sl_iport196_o;
  output [0:0]sl_iport197_o;
  output [0:0]sl_iport198_o;
  output [0:0]sl_iport199_o;
  output [0:0]sl_iport200_o;
  output [0:0]sl_iport201_o;
  output [0:0]sl_iport202_o;
  output [0:0]sl_iport203_o;
  output [0:0]sl_iport204_o;
  output [0:0]sl_iport205_o;
  output [0:0]sl_iport206_o;
  output [0:0]sl_iport207_o;
  output [0:0]sl_iport208_o;
  output [0:0]sl_iport209_o;
  output [0:0]sl_iport210_o;
  output [0:0]sl_iport211_o;
  output [0:0]sl_iport212_o;
  output [0:0]sl_iport213_o;
  output [0:0]sl_iport214_o;
  output [0:0]sl_iport215_o;
  output [0:0]sl_iport216_o;
  output [0:0]sl_iport217_o;
  output [0:0]sl_iport218_o;
  output [0:0]sl_iport219_o;
  output [0:0]sl_iport220_o;
  output [0:0]sl_iport221_o;
  output [0:0]sl_iport222_o;
  output [0:0]sl_iport223_o;
  output [0:0]sl_iport224_o;
  output [0:0]sl_iport225_o;
  output [0:0]sl_iport226_o;
  output [0:0]sl_iport227_o;
  output [0:0]sl_iport228_o;
  output [0:0]sl_iport229_o;
  output [0:0]sl_iport230_o;
  output [0:0]sl_iport231_o;
  output [0:0]sl_iport232_o;
  output [0:0]sl_iport233_o;
  output [0:0]sl_iport234_o;
  output [0:0]sl_iport235_o;
  output [0:0]sl_iport236_o;
  output [0:0]sl_iport237_o;
  output [0:0]sl_iport238_o;
  output [0:0]sl_iport239_o;
  output [0:0]sl_iport240_o;
  output [0:0]sl_iport241_o;
  output [0:0]sl_iport242_o;
  output [0:0]sl_iport243_o;
  output [0:0]sl_iport244_o;
  output [0:0]sl_iport245_o;
  output [0:0]sl_iport246_o;
  output [0:0]sl_iport247_o;
  output [0:0]sl_iport248_o;
  output [0:0]sl_iport249_o;
  output [0:0]sl_iport250_o;
  output [0:0]sl_iport251_o;
  output [0:0]sl_iport252_o;
  output [0:0]sl_iport253_o;
  output [0:0]sl_iport254_o;
  output [0:0]sl_iport255_o;
  input [16:0]sl_oport0_i;
  input [16:0]sl_oport1_i;
  input [0:0]sl_oport2_i;
  input [0:0]sl_oport3_i;
  input [0:0]sl_oport4_i;
  input [0:0]sl_oport5_i;
  input [0:0]sl_oport6_i;
  input [0:0]sl_oport7_i;
  input [0:0]sl_oport8_i;
  input [0:0]sl_oport9_i;
  input [0:0]sl_oport10_i;
  input [0:0]sl_oport11_i;
  input [0:0]sl_oport12_i;
  input [0:0]sl_oport13_i;
  input [0:0]sl_oport14_i;
  input [0:0]sl_oport15_i;
  input [0:0]sl_oport16_i;
  input [0:0]sl_oport17_i;
  input [0:0]sl_oport18_i;
  input [0:0]sl_oport19_i;
  input [0:0]sl_oport20_i;
  input [0:0]sl_oport21_i;
  input [0:0]sl_oport22_i;
  input [0:0]sl_oport23_i;
  input [0:0]sl_oport24_i;
  input [0:0]sl_oport25_i;
  input [0:0]sl_oport26_i;
  input [0:0]sl_oport27_i;
  input [0:0]sl_oport28_i;
  input [0:0]sl_oport29_i;
  input [0:0]sl_oport30_i;
  input [0:0]sl_oport31_i;
  input [0:0]sl_oport32_i;
  input [0:0]sl_oport33_i;
  input [0:0]sl_oport34_i;
  input [0:0]sl_oport35_i;
  input [0:0]sl_oport36_i;
  input [0:0]sl_oport37_i;
  input [0:0]sl_oport38_i;
  input [0:0]sl_oport39_i;
  input [0:0]sl_oport40_i;
  input [0:0]sl_oport41_i;
  input [0:0]sl_oport42_i;
  input [0:0]sl_oport43_i;
  input [0:0]sl_oport44_i;
  input [0:0]sl_oport45_i;
  input [0:0]sl_oport46_i;
  input [0:0]sl_oport47_i;
  input [0:0]sl_oport48_i;
  input [0:0]sl_oport49_i;
  input [0:0]sl_oport50_i;
  input [0:0]sl_oport51_i;
  input [0:0]sl_oport52_i;
  input [0:0]sl_oport53_i;
  input [0:0]sl_oport54_i;
  input [0:0]sl_oport55_i;
  input [0:0]sl_oport56_i;
  input [0:0]sl_oport57_i;
  input [0:0]sl_oport58_i;
  input [0:0]sl_oport59_i;
  input [0:0]sl_oport60_i;
  input [0:0]sl_oport61_i;
  input [0:0]sl_oport62_i;
  input [0:0]sl_oport63_i;
  input [0:0]sl_oport64_i;
  input [0:0]sl_oport65_i;
  input [0:0]sl_oport66_i;
  input [0:0]sl_oport67_i;
  input [0:0]sl_oport68_i;
  input [0:0]sl_oport69_i;
  input [0:0]sl_oport70_i;
  input [0:0]sl_oport71_i;
  input [0:0]sl_oport72_i;
  input [0:0]sl_oport73_i;
  input [0:0]sl_oport74_i;
  input [0:0]sl_oport75_i;
  input [0:0]sl_oport76_i;
  input [0:0]sl_oport77_i;
  input [0:0]sl_oport78_i;
  input [0:0]sl_oport79_i;
  input [0:0]sl_oport80_i;
  input [0:0]sl_oport81_i;
  input [0:0]sl_oport82_i;
  input [0:0]sl_oport83_i;
  input [0:0]sl_oport84_i;
  input [0:0]sl_oport85_i;
  input [0:0]sl_oport86_i;
  input [0:0]sl_oport87_i;
  input [0:0]sl_oport88_i;
  input [0:0]sl_oport89_i;
  input [0:0]sl_oport90_i;
  input [0:0]sl_oport91_i;
  input [0:0]sl_oport92_i;
  input [0:0]sl_oport93_i;
  input [0:0]sl_oport94_i;
  input [0:0]sl_oport95_i;
  input [0:0]sl_oport96_i;
  input [0:0]sl_oport97_i;
  input [0:0]sl_oport98_i;
  input [0:0]sl_oport99_i;
  input [0:0]sl_oport100_i;
  input [0:0]sl_oport101_i;
  input [0:0]sl_oport102_i;
  input [0:0]sl_oport103_i;
  input [0:0]sl_oport104_i;
  input [0:0]sl_oport105_i;
  input [0:0]sl_oport106_i;
  input [0:0]sl_oport107_i;
  input [0:0]sl_oport108_i;
  input [0:0]sl_oport109_i;
  input [0:0]sl_oport110_i;
  input [0:0]sl_oport111_i;
  input [0:0]sl_oport112_i;
  input [0:0]sl_oport113_i;
  input [0:0]sl_oport114_i;
  input [0:0]sl_oport115_i;
  input [0:0]sl_oport116_i;
  input [0:0]sl_oport117_i;
  input [0:0]sl_oport118_i;
  input [0:0]sl_oport119_i;
  input [0:0]sl_oport120_i;
  input [0:0]sl_oport121_i;
  input [0:0]sl_oport122_i;
  input [0:0]sl_oport123_i;
  input [0:0]sl_oport124_i;
  input [0:0]sl_oport125_i;
  input [0:0]sl_oport126_i;
  input [0:0]sl_oport127_i;
  input [0:0]sl_oport128_i;
  input [0:0]sl_oport129_i;
  input [0:0]sl_oport130_i;
  input [0:0]sl_oport131_i;
  input [0:0]sl_oport132_i;
  input [0:0]sl_oport133_i;
  input [0:0]sl_oport134_i;
  input [0:0]sl_oport135_i;
  input [0:0]sl_oport136_i;
  input [0:0]sl_oport137_i;
  input [0:0]sl_oport138_i;
  input [0:0]sl_oport139_i;
  input [0:0]sl_oport140_i;
  input [0:0]sl_oport141_i;
  input [0:0]sl_oport142_i;
  input [0:0]sl_oport143_i;
  input [0:0]sl_oport144_i;
  input [0:0]sl_oport145_i;
  input [0:0]sl_oport146_i;
  input [0:0]sl_oport147_i;
  input [0:0]sl_oport148_i;
  input [0:0]sl_oport149_i;
  input [0:0]sl_oport150_i;
  input [0:0]sl_oport151_i;
  input [0:0]sl_oport152_i;
  input [0:0]sl_oport153_i;
  input [0:0]sl_oport154_i;
  input [0:0]sl_oport155_i;
  input [0:0]sl_oport156_i;
  input [0:0]sl_oport157_i;
  input [0:0]sl_oport158_i;
  input [0:0]sl_oport159_i;
  input [0:0]sl_oport160_i;
  input [0:0]sl_oport161_i;
  input [0:0]sl_oport162_i;
  input [0:0]sl_oport163_i;
  input [0:0]sl_oport164_i;
  input [0:0]sl_oport165_i;
  input [0:0]sl_oport166_i;
  input [0:0]sl_oport167_i;
  input [0:0]sl_oport168_i;
  input [0:0]sl_oport169_i;
  input [0:0]sl_oport170_i;
  input [0:0]sl_oport171_i;
  input [0:0]sl_oport172_i;
  input [0:0]sl_oport173_i;
  input [0:0]sl_oport174_i;
  input [0:0]sl_oport175_i;
  input [0:0]sl_oport176_i;
  input [0:0]sl_oport177_i;
  input [0:0]sl_oport178_i;
  input [0:0]sl_oport179_i;
  input [0:0]sl_oport180_i;
  input [0:0]sl_oport181_i;
  input [0:0]sl_oport182_i;
  input [0:0]sl_oport183_i;
  input [0:0]sl_oport184_i;
  input [0:0]sl_oport185_i;
  input [0:0]sl_oport186_i;
  input [0:0]sl_oport187_i;
  input [0:0]sl_oport188_i;
  input [0:0]sl_oport189_i;
  input [0:0]sl_oport190_i;
  input [0:0]sl_oport191_i;
  input [0:0]sl_oport192_i;
  input [0:0]sl_oport193_i;
  input [0:0]sl_oport194_i;
  input [0:0]sl_oport195_i;
  input [0:0]sl_oport196_i;
  input [0:0]sl_oport197_i;
  input [0:0]sl_oport198_i;
  input [0:0]sl_oport199_i;
  input [0:0]sl_oport200_i;
  input [0:0]sl_oport201_i;
  input [0:0]sl_oport202_i;
  input [0:0]sl_oport203_i;
  input [0:0]sl_oport204_i;
  input [0:0]sl_oport205_i;
  input [0:0]sl_oport206_i;
  input [0:0]sl_oport207_i;
  input [0:0]sl_oport208_i;
  input [0:0]sl_oport209_i;
  input [0:0]sl_oport210_i;
  input [0:0]sl_oport211_i;
  input [0:0]sl_oport212_i;
  input [0:0]sl_oport213_i;
  input [0:0]sl_oport214_i;
  input [0:0]sl_oport215_i;
  input [0:0]sl_oport216_i;
  input [0:0]sl_oport217_i;
  input [0:0]sl_oport218_i;
  input [0:0]sl_oport219_i;
  input [0:0]sl_oport220_i;
  input [0:0]sl_oport221_i;
  input [0:0]sl_oport222_i;
  input [0:0]sl_oport223_i;
  input [0:0]sl_oport224_i;
  input [0:0]sl_oport225_i;
  input [0:0]sl_oport226_i;
  input [0:0]sl_oport227_i;
  input [0:0]sl_oport228_i;
  input [0:0]sl_oport229_i;
  input [0:0]sl_oport230_i;
  input [0:0]sl_oport231_i;
  input [0:0]sl_oport232_i;
  input [0:0]sl_oport233_i;
  input [0:0]sl_oport234_i;
  input [0:0]sl_oport235_i;
  input [0:0]sl_oport236_i;
  input [0:0]sl_oport237_i;
  input [0:0]sl_oport238_i;
  input [0:0]sl_oport239_i;
  input [0:0]sl_oport240_i;
  input [0:0]sl_oport241_i;
  input [0:0]sl_oport242_i;
  input [0:0]sl_oport243_i;
  input [0:0]sl_oport244_i;
  input [0:0]sl_oport245_i;
  input [0:0]sl_oport246_i;
  input [0:0]sl_oport247_i;
  input [0:0]sl_oport248_i;
  input [0:0]sl_oport249_i;
  input [0:0]sl_oport250_i;
  input [0:0]sl_oport251_i;
  input [0:0]sl_oport252_i;
  input [0:0]sl_oport253_i;
  input [0:0]sl_oport254_i;
  input [0:0]sl_oport255_i;
  (* BSCAN_SLAVE_INDEX = "0" *) output update_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output capture_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output reset_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output runtest_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output tms_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output tck_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output tdi_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output sel_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output shift_0;
  (* BSCAN_SLAVE_INDEX = "0" *) output drck_0;
  (* BSCAN_SLAVE_INDEX = "0" *) input tdo_0;
  (* BSCAN_SLAVE_INDEX = "1" *) output update_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output capture_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output reset_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output runtest_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output tms_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output tck_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output tdi_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output sel_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output shift_1;
  (* BSCAN_SLAVE_INDEX = "1" *) output drck_1;
  (* BSCAN_SLAVE_INDEX = "1" *) input tdo_1;
  (* BSCAN_SLAVE_INDEX = "2" *) output update_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output capture_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output reset_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output runtest_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output tms_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output tck_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output tdi_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output sel_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output shift_2;
  (* BSCAN_SLAVE_INDEX = "2" *) output drck_2;
  (* BSCAN_SLAVE_INDEX = "2" *) input tdo_2;
  (* BSCAN_SLAVE_INDEX = "3" *) output update_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output capture_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output reset_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output runtest_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output tms_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output tck_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output tdi_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output sel_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output shift_3;
  (* BSCAN_SLAVE_INDEX = "3" *) output drck_3;
  (* BSCAN_SLAVE_INDEX = "3" *) input tdo_3;
  (* BSCAN_SLAVE_INDEX = "4" *) output update_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output capture_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output reset_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output runtest_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output tms_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output tck_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output tdi_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output sel_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output shift_4;
  (* BSCAN_SLAVE_INDEX = "4" *) output drck_4;
  (* BSCAN_SLAVE_INDEX = "4" *) input tdo_4;
  (* BSCAN_SLAVE_INDEX = "5" *) output update_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output capture_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output reset_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output runtest_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output tms_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output tck_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output tdi_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output sel_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output shift_5;
  (* BSCAN_SLAVE_INDEX = "5" *) output drck_5;
  (* BSCAN_SLAVE_INDEX = "5" *) input tdo_5;
  (* BSCAN_SLAVE_INDEX = "6" *) output update_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output capture_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output reset_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output runtest_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output tms_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output tck_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output tdi_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output sel_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output shift_6;
  (* BSCAN_SLAVE_INDEX = "6" *) output drck_6;
  (* BSCAN_SLAVE_INDEX = "6" *) input tdo_6;
  (* BSCAN_SLAVE_INDEX = "7" *) output update_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output capture_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output reset_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output runtest_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output tms_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output tck_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output tdi_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output sel_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output shift_7;
  (* BSCAN_SLAVE_INDEX = "7" *) output drck_7;
  (* BSCAN_SLAVE_INDEX = "7" *) input tdo_7;
  (* BSCAN_SLAVE_INDEX = "8" *) output update_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output capture_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output reset_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output runtest_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output tms_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output tck_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output tdi_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output sel_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output shift_8;
  (* BSCAN_SLAVE_INDEX = "8" *) output drck_8;
  (* BSCAN_SLAVE_INDEX = "8" *) input tdo_8;
  (* BSCAN_SLAVE_INDEX = "9" *) output update_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output capture_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output reset_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output runtest_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output tms_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output tck_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output tdi_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output sel_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output shift_9;
  (* BSCAN_SLAVE_INDEX = "9" *) output drck_9;
  (* BSCAN_SLAVE_INDEX = "9" *) input tdo_9;
  (* BSCAN_SLAVE_INDEX = "10" *) output update_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output capture_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output reset_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output runtest_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output tms_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output tck_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output tdi_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output sel_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output shift_10;
  (* BSCAN_SLAVE_INDEX = "10" *) output drck_10;
  (* BSCAN_SLAVE_INDEX = "10" *) input tdo_10;
  (* BSCAN_SLAVE_INDEX = "11" *) output update_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output capture_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output reset_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output runtest_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output tms_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output tck_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output tdi_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output sel_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output shift_11;
  (* BSCAN_SLAVE_INDEX = "11" *) output drck_11;
  (* BSCAN_SLAVE_INDEX = "11" *) input tdo_11;
  (* BSCAN_SLAVE_INDEX = "12" *) output update_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output capture_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output reset_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output runtest_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output tms_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output tck_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output tdi_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output sel_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output shift_12;
  (* BSCAN_SLAVE_INDEX = "12" *) output drck_12;
  (* BSCAN_SLAVE_INDEX = "12" *) input tdo_12;
  (* BSCAN_SLAVE_INDEX = "13" *) output update_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output capture_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output reset_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output runtest_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output tms_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output tck_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output tdi_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output sel_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output shift_13;
  (* BSCAN_SLAVE_INDEX = "13" *) output drck_13;
  (* BSCAN_SLAVE_INDEX = "13" *) input tdo_13;
  (* BSCAN_SLAVE_INDEX = "14" *) output update_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output capture_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output reset_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output runtest_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output tms_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output tck_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output tdi_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output sel_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output shift_14;
  (* BSCAN_SLAVE_INDEX = "14" *) output drck_14;
  (* BSCAN_SLAVE_INDEX = "14" *) input tdo_14;
  (* BSCAN_SLAVE_INDEX = "15" *) output update_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output capture_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output reset_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output runtest_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output tms_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output tck_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output tdi_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output sel_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output shift_15;
  (* BSCAN_SLAVE_INDEX = "15" *) output drck_15;
  (* BSCAN_SLAVE_INDEX = "15" *) input tdo_15;
  (* BSCAN_SLAVE_INDEX = "0" *) output bscanid_en_0;
  (* BSCAN_SLAVE_INDEX = "1" *) output bscanid_en_1;
  (* BSCAN_SLAVE_INDEX = "2" *) output bscanid_en_2;
  (* BSCAN_SLAVE_INDEX = "3" *) output bscanid_en_3;
  (* BSCAN_SLAVE_INDEX = "4" *) output bscanid_en_4;
  (* BSCAN_SLAVE_INDEX = "5" *) output bscanid_en_5;
  (* BSCAN_SLAVE_INDEX = "6" *) output bscanid_en_6;
  (* BSCAN_SLAVE_INDEX = "7" *) output bscanid_en_7;
  (* BSCAN_SLAVE_INDEX = "8" *) output bscanid_en_8;
  (* BSCAN_SLAVE_INDEX = "9" *) output bscanid_en_9;
  (* BSCAN_SLAVE_INDEX = "10" *) output bscanid_en_10;
  (* BSCAN_SLAVE_INDEX = "11" *) output bscanid_en_11;
  (* BSCAN_SLAVE_INDEX = "12" *) output bscanid_en_12;
  (* BSCAN_SLAVE_INDEX = "13" *) output bscanid_en_13;
  (* BSCAN_SLAVE_INDEX = "14" *) output bscanid_en_14;
  (* BSCAN_SLAVE_INDEX = "15" *) output bscanid_en_15;
  input update;
  input capture;
  input reset;
  input runtest;
  input tck;
  input tms;
  input tdi;
  input sel;
  input shift;
  input drck;
  output tdo;
  input bscanid_en;
  (* dont_touch = "true" *) input clk;

  wire \<const0> ;
  (* RTL_KEEP = "true" *) wire CAPTURE;
  wire \CORE_XSDB.UUT_MASTER_n_1 ;
  wire \CORE_XSDB.U_ICON_n_10 ;
  wire \CORE_XSDB.U_ICON_n_11 ;
  wire \CORE_XSDB.U_ICON_n_12 ;
  wire \CORE_XSDB.U_ICON_n_8 ;
  wire \CORE_XSDB.U_ICON_n_9 ;
  (* RTL_KEEP = "true" *) wire DRCK;
  (* RTL_KEEP = "true" *) wire RESET;
  (* RTL_KEEP = "true" *) wire RUNTEST;
  (* RTL_KEEP = "true" *) wire SEL;
  (* RTL_KEEP = "true" *) wire SHIFT;
  wire \SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ;
  (* RTL_KEEP = "true" *) wire TCK;
  (* RTL_KEEP = "true" *) wire TDI;
  (* RTL_KEEP = "true" *) wire TDO;
  (* RTL_KEEP = "true" *) wire TMS;
  (* RTL_KEEP = "true" *) wire UPDATE;
  (* RTL_KEEP = "true" *) wire UPDATE_temp;
  (* RTL_KEEP = "true" *) wire UPDATE_temp_i;
  (* DONT_TOUCH *) wire [31:0]bscanid;
  wire bscanid_en_int;
  wire capture_bs;
  wire clk;
  wire [3:2]iCORE_ID;
  wire iSYNC;
  wire iTDI_reg;
  wire iTDO_VEC_15;
  (* DONT_TOUCH *) wire [1:0]id_state;
  wire itck;
  wire itck_i;
  wire n_0_4;
  wire n_0_5;
  wire [1:1]p_0_in__0;
  wire [31:0]p_2_in;
  wire reset_bs;
  wire runtest_bs;
  wire [3:2]sel0;
  wire sel_bs;
  wire shift_bs;
  wire [36:0]\^sl_iport0_o ;
  wire [3:0]\^sl_iport1_o ;
  wire [16:0]sl_oport0_i;
  wire [16:0]sl_oport1_i;
  wire stat_reg_reg0;
  wire tck_bs;
  wire tdi_bs;
  wire tdo_bs;
  wire tdo_int;
  wire tms_bs;
  wire [0:0]\NLW_SWITCH_N_EXT_BSCAN.bscan_switch_m_bscan_drck_UNCONNECTED ;
  wire [0:0]\NLW_SWITCH_N_EXT_BSCAN.bscan_switch_m_bscan_runtest_UNCONNECTED ;
  wire [0:0]\NLW_SWITCH_N_EXT_BSCAN.bscan_switch_m_bscan_tms_UNCONNECTED ;

  assign bscanid_en_0 = \<const0> ;
  assign bscanid_en_1 = \<const0> ;
  assign bscanid_en_10 = \<const0> ;
  assign bscanid_en_11 = \<const0> ;
  assign bscanid_en_12 = \<const0> ;
  assign bscanid_en_13 = \<const0> ;
  assign bscanid_en_14 = \<const0> ;
  assign bscanid_en_15 = \<const0> ;
  assign bscanid_en_2 = \<const0> ;
  assign bscanid_en_3 = \<const0> ;
  assign bscanid_en_4 = \<const0> ;
  assign bscanid_en_5 = \<const0> ;
  assign bscanid_en_6 = \<const0> ;
  assign bscanid_en_7 = \<const0> ;
  assign bscanid_en_8 = \<const0> ;
  assign bscanid_en_9 = \<const0> ;
  assign capture_0 = \<const0> ;
  assign capture_1 = \<const0> ;
  assign capture_10 = \<const0> ;
  assign capture_11 = \<const0> ;
  assign capture_12 = \<const0> ;
  assign capture_13 = \<const0> ;
  assign capture_14 = \<const0> ;
  assign capture_15 = \<const0> ;
  assign capture_2 = \<const0> ;
  assign capture_3 = \<const0> ;
  assign capture_4 = \<const0> ;
  assign capture_5 = \<const0> ;
  assign capture_6 = \<const0> ;
  assign capture_7 = \<const0> ;
  assign capture_8 = \<const0> ;
  assign capture_9 = \<const0> ;
  assign drck_0 = \<const0> ;
  assign drck_1 = \<const0> ;
  assign drck_10 = \<const0> ;
  assign drck_11 = \<const0> ;
  assign drck_12 = \<const0> ;
  assign drck_13 = \<const0> ;
  assign drck_14 = \<const0> ;
  assign drck_15 = \<const0> ;
  assign drck_2 = \<const0> ;
  assign drck_3 = \<const0> ;
  assign drck_4 = \<const0> ;
  assign drck_5 = \<const0> ;
  assign drck_6 = \<const0> ;
  assign drck_7 = \<const0> ;
  assign drck_8 = \<const0> ;
  assign drck_9 = \<const0> ;
  assign reset_0 = \<const0> ;
  assign reset_1 = \<const0> ;
  assign reset_10 = \<const0> ;
  assign reset_11 = \<const0> ;
  assign reset_12 = \<const0> ;
  assign reset_13 = \<const0> ;
  assign reset_14 = \<const0> ;
  assign reset_15 = \<const0> ;
  assign reset_2 = \<const0> ;
  assign reset_3 = \<const0> ;
  assign reset_4 = \<const0> ;
  assign reset_5 = \<const0> ;
  assign reset_6 = \<const0> ;
  assign reset_7 = \<const0> ;
  assign reset_8 = \<const0> ;
  assign reset_9 = \<const0> ;
  assign runtest_0 = \<const0> ;
  assign runtest_1 = \<const0> ;
  assign runtest_10 = \<const0> ;
  assign runtest_11 = \<const0> ;
  assign runtest_12 = \<const0> ;
  assign runtest_13 = \<const0> ;
  assign runtest_14 = \<const0> ;
  assign runtest_15 = \<const0> ;
  assign runtest_2 = \<const0> ;
  assign runtest_3 = \<const0> ;
  assign runtest_4 = \<const0> ;
  assign runtest_5 = \<const0> ;
  assign runtest_6 = \<const0> ;
  assign runtest_7 = \<const0> ;
  assign runtest_8 = \<const0> ;
  assign runtest_9 = \<const0> ;
  assign sel_0 = \<const0> ;
  assign sel_1 = \<const0> ;
  assign sel_10 = \<const0> ;
  assign sel_11 = \<const0> ;
  assign sel_12 = \<const0> ;
  assign sel_13 = \<const0> ;
  assign sel_14 = \<const0> ;
  assign sel_15 = \<const0> ;
  assign sel_2 = \<const0> ;
  assign sel_3 = \<const0> ;
  assign sel_4 = \<const0> ;
  assign sel_5 = \<const0> ;
  assign sel_6 = \<const0> ;
  assign sel_7 = \<const0> ;
  assign sel_8 = \<const0> ;
  assign sel_9 = \<const0> ;
  assign shift_0 = \<const0> ;
  assign shift_1 = \<const0> ;
  assign shift_10 = \<const0> ;
  assign shift_11 = \<const0> ;
  assign shift_12 = \<const0> ;
  assign shift_13 = \<const0> ;
  assign shift_14 = \<const0> ;
  assign shift_15 = \<const0> ;
  assign shift_2 = \<const0> ;
  assign shift_3 = \<const0> ;
  assign shift_4 = \<const0> ;
  assign shift_5 = \<const0> ;
  assign shift_6 = \<const0> ;
  assign shift_7 = \<const0> ;
  assign shift_8 = \<const0> ;
  assign shift_9 = \<const0> ;
  assign sl_iport0_o[36:2] = \^sl_iport0_o [36:2];
  assign sl_iport0_o[1] = clk;
  assign sl_iport0_o[0] = \^sl_iport0_o [0];
  assign sl_iport100_o[0] = \<const0> ;
  assign sl_iport101_o[0] = \<const0> ;
  assign sl_iport102_o[0] = \<const0> ;
  assign sl_iport103_o[0] = \<const0> ;
  assign sl_iport104_o[0] = \<const0> ;
  assign sl_iport105_o[0] = \<const0> ;
  assign sl_iport106_o[0] = \<const0> ;
  assign sl_iport107_o[0] = \<const0> ;
  assign sl_iport108_o[0] = \<const0> ;
  assign sl_iport109_o[0] = \<const0> ;
  assign sl_iport10_o[0] = \<const0> ;
  assign sl_iport110_o[0] = \<const0> ;
  assign sl_iport111_o[0] = \<const0> ;
  assign sl_iport112_o[0] = \<const0> ;
  assign sl_iport113_o[0] = \<const0> ;
  assign sl_iport114_o[0] = \<const0> ;
  assign sl_iport115_o[0] = \<const0> ;
  assign sl_iport116_o[0] = \<const0> ;
  assign sl_iport117_o[0] = \<const0> ;
  assign sl_iport118_o[0] = \<const0> ;
  assign sl_iport119_o[0] = \<const0> ;
  assign sl_iport11_o[0] = \<const0> ;
  assign sl_iport120_o[0] = \<const0> ;
  assign sl_iport121_o[0] = \<const0> ;
  assign sl_iport122_o[0] = \<const0> ;
  assign sl_iport123_o[0] = \<const0> ;
  assign sl_iport124_o[0] = \<const0> ;
  assign sl_iport125_o[0] = \<const0> ;
  assign sl_iport126_o[0] = \<const0> ;
  assign sl_iport127_o[0] = \<const0> ;
  assign sl_iport128_o[0] = \<const0> ;
  assign sl_iport129_o[0] = \<const0> ;
  assign sl_iport12_o[0] = \<const0> ;
  assign sl_iport130_o[0] = \<const0> ;
  assign sl_iport131_o[0] = \<const0> ;
  assign sl_iport132_o[0] = \<const0> ;
  assign sl_iport133_o[0] = \<const0> ;
  assign sl_iport134_o[0] = \<const0> ;
  assign sl_iport135_o[0] = \<const0> ;
  assign sl_iport136_o[0] = \<const0> ;
  assign sl_iport137_o[0] = \<const0> ;
  assign sl_iport138_o[0] = \<const0> ;
  assign sl_iport139_o[0] = \<const0> ;
  assign sl_iport13_o[0] = \<const0> ;
  assign sl_iport140_o[0] = \<const0> ;
  assign sl_iport141_o[0] = \<const0> ;
  assign sl_iport142_o[0] = \<const0> ;
  assign sl_iport143_o[0] = \<const0> ;
  assign sl_iport144_o[0] = \<const0> ;
  assign sl_iport145_o[0] = \<const0> ;
  assign sl_iport146_o[0] = \<const0> ;
  assign sl_iport147_o[0] = \<const0> ;
  assign sl_iport148_o[0] = \<const0> ;
  assign sl_iport149_o[0] = \<const0> ;
  assign sl_iport14_o[0] = \<const0> ;
  assign sl_iport150_o[0] = \<const0> ;
  assign sl_iport151_o[0] = \<const0> ;
  assign sl_iport152_o[0] = \<const0> ;
  assign sl_iport153_o[0] = \<const0> ;
  assign sl_iport154_o[0] = \<const0> ;
  assign sl_iport155_o[0] = \<const0> ;
  assign sl_iport156_o[0] = \<const0> ;
  assign sl_iport157_o[0] = \<const0> ;
  assign sl_iport158_o[0] = \<const0> ;
  assign sl_iport159_o[0] = \<const0> ;
  assign sl_iport15_o[0] = \<const0> ;
  assign sl_iport160_o[0] = \<const0> ;
  assign sl_iport161_o[0] = \<const0> ;
  assign sl_iport162_o[0] = \<const0> ;
  assign sl_iport163_o[0] = \<const0> ;
  assign sl_iport164_o[0] = \<const0> ;
  assign sl_iport165_o[0] = \<const0> ;
  assign sl_iport166_o[0] = \<const0> ;
  assign sl_iport167_o[0] = \<const0> ;
  assign sl_iport168_o[0] = \<const0> ;
  assign sl_iport169_o[0] = \<const0> ;
  assign sl_iport16_o[0] = \<const0> ;
  assign sl_iport170_o[0] = \<const0> ;
  assign sl_iport171_o[0] = \<const0> ;
  assign sl_iport172_o[0] = \<const0> ;
  assign sl_iport173_o[0] = \<const0> ;
  assign sl_iport174_o[0] = \<const0> ;
  assign sl_iport175_o[0] = \<const0> ;
  assign sl_iport176_o[0] = \<const0> ;
  assign sl_iport177_o[0] = \<const0> ;
  assign sl_iport178_o[0] = \<const0> ;
  assign sl_iport179_o[0] = \<const0> ;
  assign sl_iport17_o[0] = \<const0> ;
  assign sl_iport180_o[0] = \<const0> ;
  assign sl_iport181_o[0] = \<const0> ;
  assign sl_iport182_o[0] = \<const0> ;
  assign sl_iport183_o[0] = \<const0> ;
  assign sl_iport184_o[0] = \<const0> ;
  assign sl_iport185_o[0] = \<const0> ;
  assign sl_iport186_o[0] = \<const0> ;
  assign sl_iport187_o[0] = \<const0> ;
  assign sl_iport188_o[0] = \<const0> ;
  assign sl_iport189_o[0] = \<const0> ;
  assign sl_iport18_o[0] = \<const0> ;
  assign sl_iport190_o[0] = \<const0> ;
  assign sl_iport191_o[0] = \<const0> ;
  assign sl_iport192_o[0] = \<const0> ;
  assign sl_iport193_o[0] = \<const0> ;
  assign sl_iport194_o[0] = \<const0> ;
  assign sl_iport195_o[0] = \<const0> ;
  assign sl_iport196_o[0] = \<const0> ;
  assign sl_iport197_o[0] = \<const0> ;
  assign sl_iport198_o[0] = \<const0> ;
  assign sl_iport199_o[0] = \<const0> ;
  assign sl_iport19_o[0] = \<const0> ;
  assign sl_iport1_o[36:4] = \^sl_iport0_o [36:4];
  assign sl_iport1_o[3:2] = \^sl_iport1_o [3:2];
  assign sl_iport1_o[1] = clk;
  assign sl_iport1_o[0] = \^sl_iport1_o [0];
  assign sl_iport200_o[0] = \<const0> ;
  assign sl_iport201_o[0] = \<const0> ;
  assign sl_iport202_o[0] = \<const0> ;
  assign sl_iport203_o[0] = \<const0> ;
  assign sl_iport204_o[0] = \<const0> ;
  assign sl_iport205_o[0] = \<const0> ;
  assign sl_iport206_o[0] = \<const0> ;
  assign sl_iport207_o[0] = \<const0> ;
  assign sl_iport208_o[0] = \<const0> ;
  assign sl_iport209_o[0] = \<const0> ;
  assign sl_iport20_o[0] = \<const0> ;
  assign sl_iport210_o[0] = \<const0> ;
  assign sl_iport211_o[0] = \<const0> ;
  assign sl_iport212_o[0] = \<const0> ;
  assign sl_iport213_o[0] = \<const0> ;
  assign sl_iport214_o[0] = \<const0> ;
  assign sl_iport215_o[0] = \<const0> ;
  assign sl_iport216_o[0] = \<const0> ;
  assign sl_iport217_o[0] = \<const0> ;
  assign sl_iport218_o[0] = \<const0> ;
  assign sl_iport219_o[0] = \<const0> ;
  assign sl_iport21_o[0] = \<const0> ;
  assign sl_iport220_o[0] = \<const0> ;
  assign sl_iport221_o[0] = \<const0> ;
  assign sl_iport222_o[0] = \<const0> ;
  assign sl_iport223_o[0] = \<const0> ;
  assign sl_iport224_o[0] = \<const0> ;
  assign sl_iport225_o[0] = \<const0> ;
  assign sl_iport226_o[0] = \<const0> ;
  assign sl_iport227_o[0] = \<const0> ;
  assign sl_iport228_o[0] = \<const0> ;
  assign sl_iport229_o[0] = \<const0> ;
  assign sl_iport22_o[0] = \<const0> ;
  assign sl_iport230_o[0] = \<const0> ;
  assign sl_iport231_o[0] = \<const0> ;
  assign sl_iport232_o[0] = \<const0> ;
  assign sl_iport233_o[0] = \<const0> ;
  assign sl_iport234_o[0] = \<const0> ;
  assign sl_iport235_o[0] = \<const0> ;
  assign sl_iport236_o[0] = \<const0> ;
  assign sl_iport237_o[0] = \<const0> ;
  assign sl_iport238_o[0] = \<const0> ;
  assign sl_iport239_o[0] = \<const0> ;
  assign sl_iport23_o[0] = \<const0> ;
  assign sl_iport240_o[0] = \<const0> ;
  assign sl_iport241_o[0] = \<const0> ;
  assign sl_iport242_o[0] = \<const0> ;
  assign sl_iport243_o[0] = \<const0> ;
  assign sl_iport244_o[0] = \<const0> ;
  assign sl_iport245_o[0] = \<const0> ;
  assign sl_iport246_o[0] = \<const0> ;
  assign sl_iport247_o[0] = \<const0> ;
  assign sl_iport248_o[0] = \<const0> ;
  assign sl_iport249_o[0] = \<const0> ;
  assign sl_iport24_o[0] = \<const0> ;
  assign sl_iport250_o[0] = \<const0> ;
  assign sl_iport251_o[0] = \<const0> ;
  assign sl_iport252_o[0] = \<const0> ;
  assign sl_iport253_o[0] = \<const0> ;
  assign sl_iport254_o[0] = \<const0> ;
  assign sl_iport255_o[0] = \<const0> ;
  assign sl_iport25_o[0] = \<const0> ;
  assign sl_iport26_o[0] = \<const0> ;
  assign sl_iport27_o[0] = \<const0> ;
  assign sl_iport28_o[0] = \<const0> ;
  assign sl_iport29_o[0] = \<const0> ;
  assign sl_iport2_o[0] = \<const0> ;
  assign sl_iport30_o[0] = \<const0> ;
  assign sl_iport31_o[0] = \<const0> ;
  assign sl_iport32_o[0] = \<const0> ;
  assign sl_iport33_o[0] = \<const0> ;
  assign sl_iport34_o[0] = \<const0> ;
  assign sl_iport35_o[0] = \<const0> ;
  assign sl_iport36_o[0] = \<const0> ;
  assign sl_iport37_o[0] = \<const0> ;
  assign sl_iport38_o[0] = \<const0> ;
  assign sl_iport39_o[0] = \<const0> ;
  assign sl_iport3_o[0] = \<const0> ;
  assign sl_iport40_o[0] = \<const0> ;
  assign sl_iport41_o[0] = \<const0> ;
  assign sl_iport42_o[0] = \<const0> ;
  assign sl_iport43_o[0] = \<const0> ;
  assign sl_iport44_o[0] = \<const0> ;
  assign sl_iport45_o[0] = \<const0> ;
  assign sl_iport46_o[0] = \<const0> ;
  assign sl_iport47_o[0] = \<const0> ;
  assign sl_iport48_o[0] = \<const0> ;
  assign sl_iport49_o[0] = \<const0> ;
  assign sl_iport4_o[0] = \<const0> ;
  assign sl_iport50_o[0] = \<const0> ;
  assign sl_iport51_o[0] = \<const0> ;
  assign sl_iport52_o[0] = \<const0> ;
  assign sl_iport53_o[0] = \<const0> ;
  assign sl_iport54_o[0] = \<const0> ;
  assign sl_iport55_o[0] = \<const0> ;
  assign sl_iport56_o[0] = \<const0> ;
  assign sl_iport57_o[0] = \<const0> ;
  assign sl_iport58_o[0] = \<const0> ;
  assign sl_iport59_o[0] = \<const0> ;
  assign sl_iport5_o[0] = \<const0> ;
  assign sl_iport60_o[0] = \<const0> ;
  assign sl_iport61_o[0] = \<const0> ;
  assign sl_iport62_o[0] = \<const0> ;
  assign sl_iport63_o[0] = \<const0> ;
  assign sl_iport64_o[0] = \<const0> ;
  assign sl_iport65_o[0] = \<const0> ;
  assign sl_iport66_o[0] = \<const0> ;
  assign sl_iport67_o[0] = \<const0> ;
  assign sl_iport68_o[0] = \<const0> ;
  assign sl_iport69_o[0] = \<const0> ;
  assign sl_iport6_o[0] = \<const0> ;
  assign sl_iport70_o[0] = \<const0> ;
  assign sl_iport71_o[0] = \<const0> ;
  assign sl_iport72_o[0] = \<const0> ;
  assign sl_iport73_o[0] = \<const0> ;
  assign sl_iport74_o[0] = \<const0> ;
  assign sl_iport75_o[0] = \<const0> ;
  assign sl_iport76_o[0] = \<const0> ;
  assign sl_iport77_o[0] = \<const0> ;
  assign sl_iport78_o[0] = \<const0> ;
  assign sl_iport79_o[0] = \<const0> ;
  assign sl_iport7_o[0] = \<const0> ;
  assign sl_iport80_o[0] = \<const0> ;
  assign sl_iport81_o[0] = \<const0> ;
  assign sl_iport82_o[0] = \<const0> ;
  assign sl_iport83_o[0] = \<const0> ;
  assign sl_iport84_o[0] = \<const0> ;
  assign sl_iport85_o[0] = \<const0> ;
  assign sl_iport86_o[0] = \<const0> ;
  assign sl_iport87_o[0] = \<const0> ;
  assign sl_iport88_o[0] = \<const0> ;
  assign sl_iport89_o[0] = \<const0> ;
  assign sl_iport8_o[0] = \<const0> ;
  assign sl_iport90_o[0] = \<const0> ;
  assign sl_iport91_o[0] = \<const0> ;
  assign sl_iport92_o[0] = \<const0> ;
  assign sl_iport93_o[0] = \<const0> ;
  assign sl_iport94_o[0] = \<const0> ;
  assign sl_iport95_o[0] = \<const0> ;
  assign sl_iport96_o[0] = \<const0> ;
  assign sl_iport97_o[0] = \<const0> ;
  assign sl_iport98_o[0] = \<const0> ;
  assign sl_iport99_o[0] = \<const0> ;
  assign sl_iport9_o[0] = \<const0> ;
  assign tck_0 = \<const0> ;
  assign tck_1 = \<const0> ;
  assign tck_10 = \<const0> ;
  assign tck_11 = \<const0> ;
  assign tck_12 = \<const0> ;
  assign tck_13 = \<const0> ;
  assign tck_14 = \<const0> ;
  assign tck_15 = \<const0> ;
  assign tck_2 = \<const0> ;
  assign tck_3 = \<const0> ;
  assign tck_4 = \<const0> ;
  assign tck_5 = \<const0> ;
  assign tck_6 = \<const0> ;
  assign tck_7 = \<const0> ;
  assign tck_8 = \<const0> ;
  assign tck_9 = \<const0> ;
  assign tdi_0 = \<const0> ;
  assign tdi_1 = \<const0> ;
  assign tdi_10 = \<const0> ;
  assign tdi_11 = \<const0> ;
  assign tdi_12 = \<const0> ;
  assign tdi_13 = \<const0> ;
  assign tdi_14 = \<const0> ;
  assign tdi_15 = \<const0> ;
  assign tdi_2 = \<const0> ;
  assign tdi_3 = \<const0> ;
  assign tdi_4 = \<const0> ;
  assign tdi_5 = \<const0> ;
  assign tdi_6 = \<const0> ;
  assign tdi_7 = \<const0> ;
  assign tdi_8 = \<const0> ;
  assign tdi_9 = \<const0> ;
  assign tdo = \<const0> ;
  assign tms_0 = \<const0> ;
  assign tms_1 = \<const0> ;
  assign tms_10 = \<const0> ;
  assign tms_11 = \<const0> ;
  assign tms_12 = \<const0> ;
  assign tms_13 = \<const0> ;
  assign tms_14 = \<const0> ;
  assign tms_15 = \<const0> ;
  assign tms_2 = \<const0> ;
  assign tms_3 = \<const0> ;
  assign tms_4 = \<const0> ;
  assign tms_5 = \<const0> ;
  assign tms_6 = \<const0> ;
  assign tms_7 = \<const0> ;
  assign tms_8 = \<const0> ;
  assign tms_9 = \<const0> ;
  assign update_0 = \<const0> ;
  assign update_1 = \<const0> ;
  assign update_10 = \<const0> ;
  assign update_11 = \<const0> ;
  assign update_12 = \<const0> ;
  assign update_13 = \<const0> ;
  assign update_14 = \<const0> ;
  assign update_15 = \<const0> ;
  assign update_2 = \<const0> ;
  assign update_3 = \<const0> ;
  assign update_4 = \<const0> ;
  assign update_5 = \<const0> ;
  assign update_6 = \<const0> ;
  assign update_7 = \<const0> ;
  assign update_8 = \<const0> ;
  assign update_9 = \<const0> ;
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_icon2xsdb \CORE_XSDB.UUT_MASTER 
       (.D(stat_reg_reg0),
        .Q({iCORE_ID,sel0}),
        .clk(clk),
        .iSYNC(iSYNC),
        .\iTARGET_reg[14] (\CORE_XSDB.UUT_MASTER_n_1 ),
        .iTDO_VEC_15(iTDO_VEC_15),
        .icn_cmd_din_reg(iTDI_reg),
        .\icn_cmd_en_reg[4] (\CORE_XSDB.U_ICON_n_9 ),
        .\icn_cmd_en_reg[5] (\CORE_XSDB.U_ICON_n_11 ),
        .\icn_cmd_en_reg[6] (\CORE_XSDB.U_ICON_n_10 ),
        .\icn_cmd_en_reg[7] (\CORE_XSDB.U_ICON_n_8 ),
        .\icn_cmd_en_reg[7]_0 (\CORE_XSDB.U_ICON_n_12 ),
        .m_bscan_tck(itck),
        .out(SHIFT),
        .sl_iport0_o({\^sl_iport0_o [36:2],\^sl_iport0_o [0]}),
        .sl_iport1_o({\^sl_iport1_o [3:2],\^sl_iport1_o [0]}),
        .sl_oport0_i(sl_oport0_i),
        .sl_oport1_i(sl_oport1_i),
        .\stat_reg_reg[2] ({n_0_4,n_0_5,stat_reg_reg0}));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_icon \CORE_XSDB.U_ICON 
       (.D(iTDI_reg),
        .Q({iCORE_ID,sel0}),
        .SYNC_reg(\CORE_XSDB.U_ICON_n_8 ),
        .iDATA_CMD_reg_0(UPDATE_temp),
        .iSYNC(iSYNC),
        .\iTARGET_reg[6] (SEL),
        .\iTARGET_reg[9] (\CORE_XSDB.U_ICON_n_9 ),
        .\iTARGET_reg[9]_0 (\CORE_XSDB.U_ICON_n_10 ),
        .\iTARGET_reg[9]_1 (\CORE_XSDB.U_ICON_n_11 ),
        .\iTARGET_reg[9]_2 (\CORE_XSDB.U_ICON_n_12 ),
        .iTDO_VEC_15(iTDO_VEC_15),
        .iTDO_reg_0(\CORE_XSDB.UUT_MASTER_n_1 ),
        .\icn_cmd_en_reg[7] (SHIFT),
        .in0(TDO),
        .m_bscan_tck(itck),
        .out(TDI));
  GND GND
       (.G(\<const0> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ltlib_v1_0_0_bscan \SWITCH_N_EXT_BSCAN.bscan_inst 
       (.UPDATE(UPDATE),
        .in0(DRCK),
        .s_bscan_capture(capture_bs),
        .s_bscan_reset(reset_bs),
        .s_bscan_runtest(runtest_bs),
        .s_bscan_sel(sel_bs),
        .s_bscan_shift(shift_bs),
        .s_bscan_tdi(tdi_bs),
        .s_bscan_tdo(tdo_bs),
        .s_bscan_tms(tms_bs),
        .tck_bs(tck_bs));
  (* DONT_TOUCH *) 
  (* ERROR = "7" *) 
  (* FORWARD = "4" *) 
  (* IDLE = "0" *) 
  (* PORTS = "1" *) 
  (* PORT_SELECT = "3" *) 
  (* SWITCH_SELECT = "2" *) 
  (* XILINX_JEP106_ID = "12'b000001001001" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_xsdbm_v3_0_0_bscan_switch \SWITCH_N_EXT_BSCAN.bscan_switch 
       (.m_bscan_bscanid_en(bscanid_en_int),
        .m_bscan_capture(CAPTURE),
        .m_bscan_drck(\NLW_SWITCH_N_EXT_BSCAN.bscan_switch_m_bscan_drck_UNCONNECTED [0]),
        .m_bscan_reset(RESET),
        .m_bscan_runtest(\NLW_SWITCH_N_EXT_BSCAN.bscan_switch_m_bscan_runtest_UNCONNECTED [0]),
        .m_bscan_sel(SEL),
        .m_bscan_shift(SHIFT),
        .m_bscan_tck(itck),
        .m_bscan_tdi(TDI),
        .m_bscan_tdo(tdo_int),
        .m_bscan_tms(\NLW_SWITCH_N_EXT_BSCAN.bscan_switch_m_bscan_tms_UNCONNECTED [0]),
        .m_bscan_update(UPDATE_temp),
        .s_bscan_capture(capture_bs),
        .s_bscan_drck(DRCK),
        .s_bscan_reset(reset_bs),
        .s_bscan_runtest(runtest_bs),
        .s_bscan_sel(sel_bs),
        .s_bscan_shift(shift_bs),
        .s_bscan_tck(itck_i),
        .s_bscan_tdi(tdi_bs),
        .s_bscan_tdo(tdo_bs),
        .s_bscan_tms(tms_bs),
        .s_bscan_update(UPDATE),
        .s_bscanid_en(1'b0));
  LUT3 #(
    .INIT(8'hB8)) 
    \SWITCH_N_EXT_BSCAN.bscan_switch_i_1 
       (.I0(bscanid[0]),
        .I1(bscanid_en_int),
        .I2(TDO),
        .O(tdo_int));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[0]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[0]),
        .I2(bscanid_en_int),
        .I3(bscanid[1]),
        .O(p_2_in[0]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[10]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[10]),
        .I2(bscanid_en_int),
        .I3(bscanid[11]),
        .O(p_2_in[10]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[11]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[11]),
        .I2(bscanid_en_int),
        .I3(bscanid[12]),
        .O(p_2_in[11]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[12]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[12]),
        .I2(bscanid_en_int),
        .I3(bscanid[13]),
        .O(p_2_in[12]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[13]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[13]),
        .I2(bscanid_en_int),
        .I3(bscanid[14]),
        .O(p_2_in[13]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[14]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[14]),
        .I2(bscanid_en_int),
        .I3(bscanid[15]),
        .O(p_2_in[14]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[15]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[15]),
        .I2(bscanid_en_int),
        .I3(bscanid[16]),
        .O(p_2_in[15]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[16]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[16]),
        .I2(bscanid_en_int),
        .I3(bscanid[17]),
        .O(p_2_in[16]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[17]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[17]),
        .I2(bscanid_en_int),
        .I3(bscanid[18]),
        .O(p_2_in[17]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[18]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[18]),
        .I2(bscanid_en_int),
        .I3(bscanid[19]),
        .O(p_2_in[18]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[19]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[19]),
        .I2(bscanid_en_int),
        .I3(bscanid[20]),
        .O(p_2_in[19]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[1]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[1]),
        .I2(bscanid_en_int),
        .I3(bscanid[2]),
        .O(p_2_in[1]));
  LUT4 #(
    .INIT(16'hE2FF)) 
    \SWITCH_N_EXT_BSCAN.bscanid[20]_i_1 
       (.I0(bscanid[20]),
        .I1(bscanid_en_int),
        .I2(bscanid[21]),
        .I3(id_state[0]),
        .O(p_2_in[20]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[21]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[21]),
        .I2(bscanid_en_int),
        .I3(bscanid[22]),
        .O(p_2_in[21]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[22]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[22]),
        .I2(bscanid_en_int),
        .I3(bscanid[23]),
        .O(p_2_in[22]));
  LUT4 #(
    .INIT(16'hE2FF)) 
    \SWITCH_N_EXT_BSCAN.bscanid[23]_i_1 
       (.I0(bscanid[23]),
        .I1(bscanid_en_int),
        .I2(bscanid[24]),
        .I3(id_state[0]),
        .O(p_2_in[23]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[24]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[24]),
        .I2(bscanid_en_int),
        .I3(bscanid[25]),
        .O(p_2_in[24]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[25]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[25]),
        .I2(bscanid_en_int),
        .I3(bscanid[26]),
        .O(p_2_in[25]));
  LUT4 #(
    .INIT(16'hE2FF)) 
    \SWITCH_N_EXT_BSCAN.bscanid[26]_i_1 
       (.I0(bscanid[26]),
        .I1(bscanid_en_int),
        .I2(bscanid[27]),
        .I3(id_state[0]),
        .O(p_2_in[26]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[27]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[27]),
        .I2(bscanid_en_int),
        .I3(bscanid[28]),
        .O(p_2_in[27]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[28]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[28]),
        .I2(bscanid_en_int),
        .I3(bscanid[29]),
        .O(p_2_in[28]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[29]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[29]),
        .I2(bscanid_en_int),
        .I3(bscanid[30]),
        .O(p_2_in[29]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[2]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[2]),
        .I2(bscanid_en_int),
        .I3(bscanid[3]),
        .O(p_2_in[2]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[30]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[30]),
        .I2(bscanid_en_int),
        .I3(bscanid[31]),
        .O(p_2_in[30]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[31]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[31]),
        .I2(bscanid_en_int),
        .I3(TDI),
        .O(p_2_in[31]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[3]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[3]),
        .I2(bscanid_en_int),
        .I3(bscanid[4]),
        .O(p_2_in[3]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[4]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[4]),
        .I2(bscanid_en_int),
        .I3(bscanid[5]),
        .O(p_2_in[4]));
  LUT4 #(
    .INIT(16'hE2FF)) 
    \SWITCH_N_EXT_BSCAN.bscanid[5]_i_1 
       (.I0(bscanid[5]),
        .I1(bscanid_en_int),
        .I2(bscanid[6]),
        .I3(id_state[0]),
        .O(p_2_in[5]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[6]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[6]),
        .I2(bscanid_en_int),
        .I3(bscanid[7]),
        .O(p_2_in[6]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[7]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[7]),
        .I2(bscanid_en_int),
        .I3(bscanid[8]),
        .O(p_2_in[7]));
  LUT4 #(
    .INIT(16'hA808)) 
    \SWITCH_N_EXT_BSCAN.bscanid[8]_i_1 
       (.I0(id_state[0]),
        .I1(bscanid[8]),
        .I2(bscanid_en_int),
        .I3(bscanid[9]),
        .O(p_2_in[8]));
  LUT4 #(
    .INIT(16'hE2FF)) 
    \SWITCH_N_EXT_BSCAN.bscanid[9]_i_1 
       (.I0(bscanid[9]),
        .I1(bscanid_en_int),
        .I2(bscanid[10]),
        .I3(id_state[0]),
        .O(p_2_in[9]));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[0] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[0]),
        .Q(bscanid[0]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[10] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[10]),
        .Q(bscanid[10]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[11] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[11]),
        .Q(bscanid[11]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[12] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[12]),
        .Q(bscanid[12]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[13] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[13]),
        .Q(bscanid[13]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[14] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[14]),
        .Q(bscanid[14]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[15] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[15]),
        .Q(bscanid[15]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[16] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[16]),
        .Q(bscanid[16]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[17] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[17]),
        .Q(bscanid[17]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[18] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[18]),
        .Q(bscanid[18]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[19] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[19]),
        .Q(bscanid[19]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[1] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[1]),
        .Q(bscanid[1]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDSE \SWITCH_N_EXT_BSCAN.bscanid_reg[20] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[20]),
        .Q(bscanid[20]),
        .S(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[21] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[21]),
        .Q(bscanid[21]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[22] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[22]),
        .Q(bscanid[22]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDSE \SWITCH_N_EXT_BSCAN.bscanid_reg[23] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[23]),
        .Q(bscanid[23]),
        .S(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[24] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[24]),
        .Q(bscanid[24]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[25] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[25]),
        .Q(bscanid[25]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDSE \SWITCH_N_EXT_BSCAN.bscanid_reg[26] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[26]),
        .Q(bscanid[26]),
        .S(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[27] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[27]),
        .Q(bscanid[27]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[28] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[28]),
        .Q(bscanid[28]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[29] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[29]),
        .Q(bscanid[29]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[2] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[2]),
        .Q(bscanid[2]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[30] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[30]),
        .Q(bscanid[30]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[31] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[31]),
        .Q(bscanid[31]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[3] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[3]),
        .Q(bscanid[3]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[4] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[4]),
        .Q(bscanid[4]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDSE \SWITCH_N_EXT_BSCAN.bscanid_reg[5] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[5]),
        .Q(bscanid[5]),
        .S(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[6] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[6]),
        .Q(bscanid[6]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[7] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[7]),
        .Q(bscanid[7]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.bscanid_reg[8] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[8]),
        .Q(bscanid[8]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* KEEP = "yes" *) 
  FDSE \SWITCH_N_EXT_BSCAN.bscanid_reg[9] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_2_in[9]),
        .Q(bscanid[9]),
        .S(RESET));
  LUT1 #(
    .INIT(2'h1)) 
    \SWITCH_N_EXT_BSCAN.id_state[1]_i_1 
       (.I0(id_state[1]),
        .O(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h84)) 
    \SWITCH_N_EXT_BSCAN.id_state[1]_i_2 
       (.I0(id_state[0]),
        .I1(id_state[1]),
        .I2(bscanid_en_int),
        .O(p_0_in__0));
  (* DONT_TOUCH *) 
  (* FSM_ENCODED_STATES = "iSTATE:00,iSTATE0:01" *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.id_state_reg[0] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(bscanid_en_int),
        .Q(id_state[0]),
        .R(RESET));
  (* DONT_TOUCH *) 
  (* FSM_ENCODED_STATES = "iSTATE:00,iSTATE0:01" *) 
  (* KEEP = "yes" *) 
  FDRE \SWITCH_N_EXT_BSCAN.id_state_reg[1] 
       (.C(itck_i),
        .CE(\SWITCH_N_EXT_BSCAN.id_state[1]_i_1_n_0 ),
        .D(p_0_in__0),
        .Q(id_state[1]),
        .R(RESET));
  (* BOX_TYPE = "PRIMITIVE" *) 
  BUFG \SWITCH_N_EXT_BSCAN.u_bufg_icon_tck 
       (.I(tck_bs),
        .O(itck_i));
  LUT1 #(
    .INIT(2'h2)) 
    i_0
       (.I0(1'b0),
        .O(UPDATE_temp_i));
  LUT1 #(
    .INIT(2'h2)) 
    i_1
       (.I0(1'b0),
        .O(RUNTEST));
  LUT1 #(
    .INIT(2'h2)) 
    i_2
       (.I0(1'b0),
        .O(TCK));
  LUT1 #(
    .INIT(2'h2)) 
    i_3
       (.I0(1'b0),
        .O(TMS));
  LUT1 #(
    .INIT(2'h2)) 
    i_4
       (.I0(1'b0),
        .O(n_0_4));
  LUT1 #(
    .INIT(2'h2)) 
    i_5
       (.I0(1'b0),
        .O(n_0_5));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
