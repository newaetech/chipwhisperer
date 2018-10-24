/**
 * \file IfxScu_regdef.h
 * \brief
 * \copyright Copyright (c) 2014 Infineon Technologies AG. All rights reserved.
 *
 * Version: TC23XADAS_UM_V1.0P1.R0
 * Specification: tc23xadas_um_sfrs_MCSFR.xml (Revision: UM_V1.0p1)
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 * \defgroup IfxLld_Scu Scu
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Scu_Bitfields Bitfields
 * \ingroup IfxLld_Scu
 * 
 * \defgroup IfxLld_Scu_union Union
 * \ingroup IfxLld_Scu
 * 
 * \defgroup IfxLld_Scu_struct Struct
 * \ingroup IfxLld_Scu
 * 
 */
#ifndef IFXSCU_REGDEF_H
#define IFXSCU_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Scu_Bitfields
 * \{  */

/** \\brief  Access Enable Register 0 */
typedef struct _Ifx_SCU_ACCEN0_Bits
{
    unsigned int EN0:1;                     /**< \brief [0:0] Access Enable for Master TAG ID 0 (rw) */
    unsigned int EN1:1;                     /**< \brief [1:1] Access Enable for Master TAG ID 1 (rw) */
    unsigned int EN2:1;                     /**< \brief [2:2] Access Enable for Master TAG ID 2 (rw) */
    unsigned int EN3:1;                     /**< \brief [3:3] Access Enable for Master TAG ID 3 (rw) */
    unsigned int EN4:1;                     /**< \brief [4:4] Access Enable for Master TAG ID 4 (rw) */
    unsigned int EN5:1;                     /**< \brief [5:5] Access Enable for Master TAG ID 5 (rw) */
    unsigned int EN6:1;                     /**< \brief [6:6] Access Enable for Master TAG ID 6 (rw) */
    unsigned int EN7:1;                     /**< \brief [7:7] Access Enable for Master TAG ID 7 (rw) */
    unsigned int EN8:1;                     /**< \brief [8:8] Access Enable for Master TAG ID 8 (rw) */
    unsigned int EN9:1;                     /**< \brief [9:9] Access Enable for Master TAG ID 9 (rw) */
    unsigned int EN10:1;                    /**< \brief [10:10] Access Enable for Master TAG ID 10 (rw) */
    unsigned int EN11:1;                    /**< \brief [11:11] Access Enable for Master TAG ID 11 (rw) */
    unsigned int EN12:1;                    /**< \brief [12:12] Access Enable for Master TAG ID 12 (rw) */
    unsigned int EN13:1;                    /**< \brief [13:13] Access Enable for Master TAG ID 13 (rw) */
    unsigned int EN14:1;                    /**< \brief [14:14] Access Enable for Master TAG ID 14 (rw) */
    unsigned int EN15:1;                    /**< \brief [15:15] Access Enable for Master TAG ID 15 (rw) */
    unsigned int EN16:1;                    /**< \brief [16:16] Access Enable for Master TAG ID 16 (rw) */
    unsigned int EN17:1;                    /**< \brief [17:17] Access Enable for Master TAG ID 17 (rw) */
    unsigned int EN18:1;                    /**< \brief [18:18] Access Enable for Master TAG ID 18 (rw) */
    unsigned int EN19:1;                    /**< \brief [19:19] Access Enable for Master TAG ID 19 (rw) */
    unsigned int EN20:1;                    /**< \brief [20:20] Access Enable for Master TAG ID 20 (rw) */
    unsigned int EN21:1;                    /**< \brief [21:21] Access Enable for Master TAG ID 21 (rw) */
    unsigned int EN22:1;                    /**< \brief [22:22] Access Enable for Master TAG ID 22 (rw) */
    unsigned int EN23:1;                    /**< \brief [23:23] Access Enable for Master TAG ID 23 (rw) */
    unsigned int EN24:1;                    /**< \brief [24:24] Access Enable for Master TAG ID 24 (rw) */
    unsigned int EN25:1;                    /**< \brief [25:25] Access Enable for Master TAG ID 25 (rw) */
    unsigned int EN26:1;                    /**< \brief [26:26] Access Enable for Master TAG ID 26 (rw) */
    unsigned int EN27:1;                    /**< \brief [27:27] Access Enable for Master TAG ID 27 (rw) */
    unsigned int EN28:1;                    /**< \brief [28:28] Access Enable for Master TAG ID 28 (rw) */
    unsigned int EN29:1;                    /**< \brief [29:29] Access Enable for Master TAG ID 29 (rw) */
    unsigned int EN30:1;                    /**< \brief [30:30] Access Enable for Master TAG ID 30 (rw) */
    unsigned int EN31:1;                    /**< \brief [31:31] Access Enable for Master TAG ID 31 (rw) */
} Ifx_SCU_ACCEN0_Bits;

/** \\brief  Access Enable Register 1 */
typedef struct _Ifx_SCU_ACCEN1_Bits
{
    unsigned int reserved_0:32;             /**< \brief \internal Reserved */
} Ifx_SCU_ACCEN1_Bits;

/** \\brief  Application Reset Disable Register */
typedef struct _Ifx_SCU_ARSTDIS_Bits
{
    unsigned int STM0DIS:1;                 /**< \brief [0:0] STM0 Disable Reset (rw) */
    unsigned int STM1DIS:1;                 /**< \brief [1:1] STM1 Disable Reset (If Product has STM1) (rw) */
    unsigned int STM2DIS:1;                 /**< \brief [2:2] STM2 Disable Reset (If Product has STM2) (rw) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_SCU_ARSTDIS_Bits;

/** \\brief  CCU Clock Control Register 0 */
typedef struct _Ifx_SCU_CCUCON0_Bits
{
    unsigned int reserved_0:4;              /**< \brief \internal Reserved */
    unsigned int BAUD2DIV:4;                /**< \brief [7:4] Baud2 Divider Reload Value (rw) */
    unsigned int SRIDIV:4;                  /**< \brief [11:8] SRI Divider Reload Value (rw) */
    unsigned int LPDIV:4;                   /**< \brief [15:12] Low Power Divider Reload Value (rw) */
    unsigned int SPBDIV:4;                  /**< \brief [19:16] SPB Divider Reload Value (rw) */
    unsigned int FSI2DIV:2;                 /**< \brief [21:20] FSI2 Divider Reload Value (rw) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int FSIDIV:2;                  /**< \brief [25:24] FSI Divider Reload Value (rw) */
    unsigned int reserved_26:2;             /**< \brief \internal Reserved */
    unsigned int CLKSEL:2;                  /**< \brief [29:28] Clock Selection (rw) */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON0_Bits;

/** \\brief  CCU Clock Control Register 1 */
typedef struct _Ifx_SCU_CCUCON1_Bits
{
    unsigned int CANDIV:4;                  /**< \brief [3:0] MultiCAN Divider Reload Value (rw) */
    unsigned int ERAYDIV:4;                 /**< \brief [7:4] ERAY Divider Reload Value (rw) */
    unsigned int STMDIV:4;                  /**< \brief [11:8] STM Divider Reload Value (rw) */
    unsigned int GTMDIV:4;                  /**< \brief [15:12] GTM Divider Reload Value (rw) */
    unsigned int ETHDIV:4;                  /**< \brief [19:16] Ethernet Divider Reload Value (rw) */
    unsigned int ASCLINFDIV:4;              /**< \brief [23:20] ASCLIN Fast Divider Reload Value (rw) */
    unsigned int ASCLINSDIV:4;              /**< \brief [27:24] ASCLIN Slow Divider Reload Value (rw) */
    unsigned int INSEL:2;                   /**< \brief [29:28] Input Selection (rw) */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON1_Bits;

/** \\brief  CCU Clock Control Register 2 */
typedef struct _Ifx_SCU_CCUCON2_Bits
{
    unsigned int BBBDIV:4;                  /**< \brief [3:0] BBB Divider Reload Value (rw) */
    unsigned int reserved_4:26;             /**< \brief \internal Reserved */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON2_Bits;

/** \\brief  CCU Clock Control Register 3 */
typedef struct _Ifx_SCU_CCUCON3_Bits
{
    unsigned int PLLDIV:6;                  /**< \brief [5:0] PLL Divider Value (rw) */
    unsigned int PLLSEL:2;                  /**< \brief [7:6] PLL Target Monitoring Frequency Selection (rw) */
    unsigned int PLLERAYDIV:6;              /**< \brief [13:8] PLL_ERAY Divider Value (rw) */
    unsigned int PLLERAYSEL:2;              /**< \brief [15:14] PLL_ERAY Target Monitoring Frequency Selection (rw) */
    unsigned int SRIDIV:6;                  /**< \brief [21:16] SRI Divider Value (rw) */
    unsigned int SRISEL:2;                  /**< \brief [23:22] SRI Target Monitoring Frequency Selection (rw) */
    unsigned int reserved_24:6;             /**< \brief \internal Reserved */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON3_Bits;

/** \\brief  CCU Clock Control Register 4 */
typedef struct _Ifx_SCU_CCUCON4_Bits
{
    unsigned int SPBDIV:6;                  /**< \brief [5:0] SPB Divider Value (rw) */
    unsigned int SPBSEL:2;                  /**< \brief [7:6] SPB Target Monitoring Frequency Selection (rw) */
    unsigned int GTMDIV:6;                  /**< \brief [13:8] GTM Divider Value (rw) */
    unsigned int GTMSEL:2;                  /**< \brief [15:14] GTM Target Monitoring Frequency Selection (rw) */
    unsigned int STMDIV:6;                  /**< \brief [21:16] STM Divider Value (rw) */
    unsigned int STMSEL:2;                  /**< \brief [23:22] STM Target Monitoring Frequency Selection (rw) */
    unsigned int reserved_24:6;             /**< \brief \internal Reserved */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON4_Bits;

/** \\brief  CCU Clock Control Register 5 */
typedef struct _Ifx_SCU_CCUCON5_Bits
{
    unsigned int MAXDIV:4;                  /**< \brief [3:0] Max Divider Reload Value (rw) */
    unsigned int reserved_4:26;             /**< \brief \internal Reserved */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON5_Bits;

/** \\brief  CCU Clock Control Register 6 */
typedef struct _Ifx_SCU_CCUCON6_Bits
{
    unsigned int CPU0DIV:6;                 /**< \brief [5:0] CPU0 Divider Reload Value (rw) */
    unsigned int reserved_6:26;             /**< \brief \internal Reserved */
} Ifx_SCU_CCUCON6_Bits;

/** \\brief  CCU Clock Control Register 9 */
typedef struct _Ifx_SCU_CCUCON9_Bits
{
    unsigned int ADCDIV:6;                  /**< \brief [5:0] ADC Divider Value (rw) */
    unsigned int ADCSEL:2;                  /**< \brief [7:6] ADC Target Monitoring Frequency Selection (rw) */
    unsigned int reserved_8:21;             /**< \brief \internal Reserved */
    unsigned int SLCK:1;                    /**< \brief [29:29] Security Lock (rw) */
    unsigned int UP:1;                      /**< \brief [30:30] Update Request (w) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_CCUCON9_Bits;

/** \\brief  Chip Identification Register */
typedef struct _Ifx_SCU_CHIPID_Bits
{
    unsigned int CHREV:6;                   /**< \brief [5:0] Chip Revision Number (r) */
    unsigned int CHTEC:2;                   /**< \brief [7:6] Chip Family (r) */
    unsigned int CHID:8;                    /**< \brief [15:8] Chip Identification Number (rw) */
    unsigned int EEA:1;                     /**< \brief [16:16] Emulation Extension Available (rh) */
    unsigned int UCODE:7;                   /**< \brief [23:17] µCode Version (rw) */
    unsigned int FSIZE:4;                   /**< \brief [27:24] Program Flash Size (rw) */
    unsigned int SP:2;                      /**< \brief [29:28] Speed (rw) */
    unsigned int SEC:1;                     /**< \brief [30:30] Security Device (rw) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_SCU_CHIPID_Bits;

/** \\brief  Die Temperature Sensor Control Register */
typedef struct _Ifx_SCU_DTSCON_Bits
{
    unsigned int PWD:1;                     /**< \brief [0:0] Sensor Power Down (rw) */
    unsigned int START:1;                   /**< \brief [1:1] Sensor Measurement Start (w) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int CAL:20;                    /**< \brief [23:4] Calibration Value (rw) */
    unsigned int reserved_24:7;             /**< \brief \internal Reserved */
    unsigned int SLCK:1;                    /**< \brief [31:31] Security Lock (rw) */
} Ifx_SCU_DTSCON_Bits;

/** \\brief  Die Temperature Sensor Limit Register */
typedef struct _Ifx_SCU_DTSLIM_Bits
{
    unsigned int LOWER:10;                  /**< \brief [9:0] Lower Limit (rw) */
    unsigned int reserved_10:5;             /**< \brief \internal Reserved */
    unsigned int LLU:1;                     /**< \brief [15:15] Lower Limit Underflow (rwh) */
    unsigned int UPPER:10;                  /**< \brief [25:16] Upper Limit (rw) */
    unsigned int reserved_26:4;             /**< \brief \internal Reserved */
    unsigned int SLCK:1;                    /**< \brief [30:30] Security Lock (rw) */
    unsigned int UOF:1;                     /**< \brief [31:31] Upper Limit Overflow (rh) */
} Ifx_SCU_DTSLIM_Bits;

/** \\brief  Die Temperature Sensor Status Register */
typedef struct _Ifx_SCU_DTSSTAT_Bits
{
    unsigned int RESULT:10;                 /**< \brief [9:0] Result of the DTS Measurement (rh) */
    unsigned int reserved_10:4;             /**< \brief \internal Reserved */
    unsigned int RDY:1;                     /**< \brief [14:14] Sensor Ready Status (rh) */
    unsigned int BUSY:1;                    /**< \brief [15:15] Sensor Busy Status (rh) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_DTSSTAT_Bits;

/** \\brief  External Input Channel Register */
typedef struct _Ifx_SCU_EICR_Bits
{
    unsigned int reserved_0:4;              /**< \brief \internal Reserved */
    unsigned int EXIS0:3;                   /**< \brief [6:4] External Input Selection 0 (rw) */
    unsigned int reserved_7:1;              /**< \brief \internal Reserved */
    unsigned int FEN0:1;                    /**< \brief [8:8] Falling Edge Enable 0 (rw) */
    unsigned int REN0:1;                    /**< \brief [9:9] Rising Edge Enable 0 (rw) */
    unsigned int LDEN0:1;                   /**< \brief [10:10] Level Detection Enable 0 (rw) */
    unsigned int EIEN0:1;                   /**< \brief [11:11] External Input Enable 0 (rw) */
    unsigned int INP0:3;                    /**< \brief [14:12] Input Node Pointer (rw) */
    unsigned int reserved_15:5;             /**< \brief \internal Reserved */
    unsigned int EXIS1:3;                   /**< \brief [22:20] External Input Selection 1 (rw) */
    unsigned int reserved_23:1;             /**< \brief \internal Reserved */
    unsigned int FEN1:1;                    /**< \brief [24:24] Falling Edge Enable 1 (rw) */
    unsigned int REN1:1;                    /**< \brief [25:25] Rising Edge Enable 1 (rw) */
    unsigned int LDEN1:1;                   /**< \brief [26:26] Level Detection Enable 1 (rw) */
    unsigned int EIEN1:1;                   /**< \brief [27:27] External Input Enable 1 (rw) */
    unsigned int INP1:3;                    /**< \brief [30:28] Input Node Pointer (rw) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_SCU_EICR_Bits;

/** \\brief  External Input Flag Register */
typedef struct _Ifx_SCU_EIFR_Bits
{
    unsigned int INTF0:1;                   /**< \brief [0:0] External Event Flag of Channel 0 (rh) */
    unsigned int INTF1:1;                   /**< \brief [1:1] External Event Flag of Channel 1 (rh) */
    unsigned int INTF2:1;                   /**< \brief [2:2] External Event Flag of Channel 2 (rh) */
    unsigned int INTF3:1;                   /**< \brief [3:3] External Event Flag of Channel 3 (rh) */
    unsigned int INTF4:1;                   /**< \brief [4:4] External Event Flag of Channel 4 (rh) */
    unsigned int INTF5:1;                   /**< \brief [5:5] External Event Flag of Channel 5 (rh) */
    unsigned int INTF6:1;                   /**< \brief [6:6] External Event Flag of Channel 6 (rh) */
    unsigned int INTF7:1;                   /**< \brief [7:7] External Event Flag of Channel 7 (rh) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_SCU_EIFR_Bits;

/** \\brief  Emergency Stop Register */
typedef struct _Ifx_SCU_EMSR_Bits
{
    unsigned int POL:1;                     /**< \brief [0:0] Input Polarity (rw) */
    unsigned int MODE:1;                    /**< \brief [1:1] Mode Selection (rw) */
    unsigned int ENON:1;                    /**< \brief [2:2] Enable ON (rw) */
    unsigned int PSEL:1;                    /**< \brief [3:3] PORT Select (rw) */
    unsigned int reserved_4:12;             /**< \brief \internal Reserved */
    unsigned int EMSF:1;                    /**< \brief [16:16] Emergency Stop Flag (rh) */
    unsigned int SEMSF:1;                   /**< \brief [17:17] SMU Emergency Stop Flag (rh) */
    unsigned int reserved_18:6;             /**< \brief \internal Reserved */
    unsigned int EMSFM:2;                   /**< \brief [25:24] Emergency Stop Flag Modification (w) */
    unsigned int SEMSFM:2;                  /**< \brief [27:26] SMU Emergency Stop Flag Modification (w) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_SCU_EMSR_Bits;

/** \\brief  ESR Input Configuration Register */
typedef struct _Ifx_SCU_ESRCFG_Bits
{
    unsigned int reserved_0:7;              /**< \brief \internal Reserved */
    unsigned int EDCON:2;                   /**< \brief [8:7] Edge Detection Control (rw) */
    unsigned int reserved_9:23;             /**< \brief \internal Reserved */
} Ifx_SCU_ESRCFG_Bits;

/** \\brief  ESR Output Configuration Register */
typedef struct _Ifx_SCU_ESROCFG_Bits
{
    unsigned int ARI:1;                     /**< \brief [0:0] Application Reset Indicator (rh) */
    unsigned int ARC:1;                     /**< \brief [1:1] Application Reset Indicator Clear (w) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_SCU_ESROCFG_Bits;

/** \\brief  EVR13 Control Register */
typedef struct _Ifx_SCU_EVR13CON_Bits
{
    unsigned int reserved_0:28;             /**< \brief \internal Reserved */
    unsigned int EVR13OFF:1;                /**< \brief [28:28] EVR13 Regulator Enable (rw) */
    unsigned int BPEVR13OFF:1;              /**< \brief [29:29] Bit Protection EVR13OFF (w) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVR13CON_Bits;

/** \\brief  EVR ADC Status Register */
typedef struct _Ifx_SCU_EVRADCSTAT_Bits
{
    unsigned int ADC13V:8;                  /**< \brief [7:0] ADC 1.3 V Conversion Result (rh) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int ADCSWDV:8;                 /**< \brief [23:16] ADC External Supply Conversion Result (rh) */
    unsigned int reserved_24:7;             /**< \brief \internal Reserved */
    unsigned int VAL:1;                     /**< \brief [31:31] Valid Status (rh) */
} Ifx_SCU_EVRADCSTAT_Bits;

/** \\brief  EVR Monitor Control Register */
typedef struct _Ifx_SCU_EVRMONCTRL_Bits
{
    unsigned int EVR13OVMOD:2;              /**< \brief [1:0] 1.3 V Regulator Over-voltage monitoring mode (rw) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int EVR13UVMOD:2;              /**< \brief [5:4] 1.3 V Regulator Under-voltage monitoring mode (rw) */
    unsigned int reserved_6:10;             /**< \brief \internal Reserved */
    unsigned int SWDOVMOD:2;                /**< \brief [17:16] Supply monitor (SWD) Over-voltage monitoring mode (rw) */
    unsigned int reserved_18:2;             /**< \brief \internal Reserved */
    unsigned int SWDUVMOD:2;                /**< \brief [21:20] Supply monitor (SWD) Under-voltage monitoring mode (rw) */
    unsigned int reserved_22:8;             /**< \brief \internal Reserved */
    unsigned int SLCK:1;                    /**< \brief [30:30] HSM Security Lock (rwh) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_SCU_EVRMONCTRL_Bits;

/** \\brief  EVR Over-voltage Configuration Register */
typedef struct _Ifx_SCU_EVROVMON_Bits
{
    unsigned int EVR13OVVAL:8;              /**< \brief [7:0] 1.3 V Regulator Over-voltage threshold (rw) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int SWDOVVAL:8;                /**< \brief [23:16] Supply monitor (SWD) Over-voltage threshold value (rw) */
    unsigned int reserved_24:6;             /**< \brief \internal Reserved */
    unsigned int SLCK:1;                    /**< \brief [30:30] HSM Security Lock (rwh) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVROVMON_Bits;

/** \\brief  EVR Reset Control Register */
typedef struct _Ifx_SCU_EVRRSTCON_Bits
{
    unsigned int reserved_0:28;             /**< \brief \internal Reserved */
    unsigned int RSTSWDOFF:1;               /**< \brief [28:28] EVR SWD Reset Enable (rw) */
    unsigned int BPRSTSWDOFF:1;             /**< \brief [29:29] Bit Protection RSTSWDOFF (w) */
    unsigned int SLCK:1;                    /**< \brief [30:30] HSM Security Lock (rwh) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRRSTCON_Bits;

/** \\brief  EVR13 SD Coefficient Register 2 */
typedef struct _Ifx_SCU_EVRSDCOEFF2_Bits
{
    unsigned int SD33P:4;                   /**< \brief [3:0] P Coefficient (rw) */
    unsigned int reserved_4:4;              /**< \brief \internal Reserved */
    unsigned int SD33I:4;                   /**< \brief [11:8] I Coefficient (rw) */
    unsigned int reserved_12:19;            /**< \brief \internal Reserved */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRSDCOEFF2_Bits;

/** \\brief  EVR13 SD Control Register 1 */
typedef struct _Ifx_SCU_EVRSDCTRL1_Bits
{
    unsigned int SDFREQSPRD:4;              /**< \brief [3:0] Frequency Spread Mode (rw) */
    unsigned int reserved_4:4;              /**< \brief \internal Reserved */
    unsigned int TON:8;                     /**< \brief [15:8] Charge Phase length (rw) */
    unsigned int TOFF:8;                    /**< \brief [23:16] Discharge Phase length (rw) */
    unsigned int SDSTEP:4;                  /**< \brief [27:24] Droop Voltage Step (rw) */
    unsigned int SYNCDIV:3;                 /**< \brief [30:28] Clock Divider Ratio for external DCDC SYNC signal (rw) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRSDCTRL1_Bits;

/** \\brief  EVR13 SD Control Register 2 */
typedef struct _Ifx_SCU_EVRSDCTRL2_Bits
{
    unsigned int reserved_0:8;              /**< \brief \internal Reserved */
    unsigned int STBS:2;                    /**< \brief [9:8] Stabilization strength (rw) */
    unsigned int STSP:2;                    /**< \brief [11:10] Startup Speed (rw) */
    unsigned int NS:2;                      /**< \brief [13:12] Noise shaper setting (rw) */
    unsigned int OL:1;                      /**< \brief [14:14] Open Loop activation (rw) */
    unsigned int PIAD:1;                    /**< \brief [15:15] PI coefficient adaptation (rw) */
    unsigned int ADCMODE:4;                 /**< \brief [19:16] Operating Mode for ADC (rw) */
    unsigned int ADCLPF:2;                  /**< \brief [21:20] Time constant of digital LPF of tracking ADC (rw) */
    unsigned int ADCLSB:1;                  /**< \brief [22:22] PID LSB size (rw) */
    unsigned int reserved_23:1;             /**< \brief \internal Reserved */
    unsigned int SDLUT:6;                   /**< \brief [29:24] Non-linear Starting Point (rw) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRSDCTRL2_Bits;

/** \\brief  EVR13 SD Control Register 3 */
typedef struct _Ifx_SCU_EVRSDCTRL3_Bits
{
    unsigned int SDOLCON:7;                 /**< \brief [6:0] Initial Conductance (rw) */
    unsigned int MODSEL:1;                  /**< \brief [7:7] Operation Mode Selection (rw) */
    unsigned int MODLOW:7;                  /**< \brief [14:8] Low threshold for Mode change (rw) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int SDVOKLVL:6;                /**< \brief [21:16] Configuration of Voltage OK Signal (rw) */
    unsigned int MODMAN:2;                  /**< \brief [23:22] Manual Mode Selection (rw) */
    unsigned int MODHIGH:7;                 /**< \brief [30:24] High threshold for Mode change (rw) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRSDCTRL3_Bits;

/** \\brief  EVR Status Register */
typedef struct _Ifx_SCU_EVRSTAT_Bits
{
    unsigned int EVR13:1;                   /**< \brief [0:0] EVR13 status (rh) */
    unsigned int OV13:1;                    /**< \brief [1:1] EVR13 Regulator Over-voltage event flag (rh) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int OVSWD:1;                   /**< \brief [4:4] Supply Watchdog (SWD) Over-voltage event flag (rh) */
    unsigned int UV13:1;                    /**< \brief [5:5] EVR13 Regulator Under-voltage event flag (rh) */
    unsigned int reserved_6:1;              /**< \brief \internal Reserved */
    unsigned int UVSWD:1;                   /**< \brief [7:7] Supply Watchdog (SWD) Under-voltage event flag (rh) */
    unsigned int reserved_8:2;              /**< \brief \internal Reserved */
    unsigned int BGPROK:1;                  /**< \brief [10:10] Primary Bandgap status (rh) */
    unsigned int reserved_11:1;             /**< \brief \internal Reserved */
    unsigned int SCMOD:2;                   /**< \brief [13:12] Switch Capacitor SMPS Mode (rh) */
    unsigned int reserved_14:18;            /**< \brief \internal Reserved */
} Ifx_SCU_EVRSTAT_Bits;

/** \\brief  EVR Under-voltage Configuration Register */
typedef struct _Ifx_SCU_EVRUVMON_Bits
{
    unsigned int EVR13UVVAL:8;              /**< \brief [7:0] 1.3 V Regulator Under-voltage threshold (rw) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int SWDUVVAL:8;                /**< \brief [23:16] Supply monitor (SWD) Under-voltage threshold value (rw) */
    unsigned int reserved_24:6;             /**< \brief \internal Reserved */
    unsigned int SLCK:1;                    /**< \brief [30:30] HSM Security Lock (rwh) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_EVRUVMON_Bits;

/** \\brief  External Clock Control Register */
typedef struct _Ifx_SCU_EXTCON_Bits
{
    unsigned int EN0:1;                     /**< \brief [0:0] External Clock Enable for EXTCLK0 (rw) */
    unsigned int reserved_1:1;              /**< \brief \internal Reserved */
    unsigned int SEL0:4;                    /**< \brief [5:2] External Clock Select for EXTCLK0 (rw) */
    unsigned int reserved_6:10;             /**< \brief \internal Reserved */
    unsigned int EN1:1;                     /**< \brief [16:16] External Clock Enable for EXTCLK1 (rw) */
    unsigned int NSEL:1;                    /**< \brief [17:17] Negation Selection (rw) */
    unsigned int SEL1:4;                    /**< \brief [21:18] External Clock Select for EXTCLK1 (rw) */
    unsigned int reserved_22:2;             /**< \brief \internal Reserved */
    unsigned int DIV1:8;                    /**< \brief [31:24] External Clock Divider for EXTCLK1 (rw) */
} Ifx_SCU_EXTCON_Bits;

/** \\brief  Fractional Divider Register */
typedef struct _Ifx_SCU_FDR_Bits
{
    unsigned int STEP:10;                   /**< \brief [9:0] Step Value (rw) */
    unsigned int reserved_10:4;             /**< \brief \internal Reserved */
    unsigned int DM:2;                      /**< \brief [15:14] Divider Mode (rw) */
    unsigned int RESULT:10;                 /**< \brief [25:16] Result Value (rh) */
    unsigned int reserved_26:5;             /**< \brief \internal Reserved */
    unsigned int DISCLK:1;                  /**< \brief [31:31] Disable Clock (rwh) */
} Ifx_SCU_FDR_Bits;

/** \\brief  Flag Modification Register */
typedef struct _Ifx_SCU_FMR_Bits
{
    unsigned int FS0:1;                     /**< \brief [0:0] Set Flag INTF0 for Channel 0 (w) */
    unsigned int FS1:1;                     /**< \brief [1:1] Set Flag INTF1 for Channel 1 (w) */
    unsigned int FS2:1;                     /**< \brief [2:2] Set Flag INTF2 for Channel 2 (w) */
    unsigned int FS3:1;                     /**< \brief [3:3] Set Flag INTF3 for Channel 3 (w) */
    unsigned int FS4:1;                     /**< \brief [4:4] Set Flag INTF4 for Channel 4 (w) */
    unsigned int FS5:1;                     /**< \brief [5:5] Set Flag INTF5 for Channel 5 (w) */
    unsigned int FS6:1;                     /**< \brief [6:6] Set Flag INTF6 for Channel 6 (w) */
    unsigned int FS7:1;                     /**< \brief [7:7] Set Flag INTF7 for Channel 7 (w) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int FC0:1;                     /**< \brief [16:16] Clear Flag INTF0 for Channel 0 (w) */
    unsigned int FC1:1;                     /**< \brief [17:17] Clear Flag INTF1 for Channel 1 (w) */
    unsigned int FC2:1;                     /**< \brief [18:18] Clear Flag INTF2 for Channel 2 (w) */
    unsigned int FC3:1;                     /**< \brief [19:19] Clear Flag INTF3 for Channel 3 (w) */
    unsigned int FC4:1;                     /**< \brief [20:20] Clear Flag INTF4 for Channel 4 (w) */
    unsigned int FC5:1;                     /**< \brief [21:21] Clear Flag INTF5 for Channel 5 (w) */
    unsigned int FC6:1;                     /**< \brief [22:22] Clear Flag INTF6 for Channel 6 (w) */
    unsigned int FC7:1;                     /**< \brief [23:23] Clear Flag INTF7 for Channel 7 (w) */
    unsigned int reserved_24:8;             /**< \brief \internal Reserved */
} Ifx_SCU_FMR_Bits;

/** \\brief  Identification Register */
typedef struct _Ifx_SCU_ID_Bits
{
    unsigned int MODREV:8;                  /**< \brief [7:0] Module Revision Number (r) */
    unsigned int MODTYPE:8;                 /**< \brief [15:8] Module Type (r) */
    unsigned int MODNUMBER:16;              /**< \brief [31:16] Module Number Value (r) */
} Ifx_SCU_ID_Bits;

/** \\brief  Flag Gating Register */
typedef struct _Ifx_SCU_IGCR_Bits
{
    unsigned int IPEN00:1;                  /**< \brief [0:0] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN01:1;                  /**< \brief [1:1] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN02:1;                  /**< \brief [2:2] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN03:1;                  /**< \brief [3:3] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN04:1;                  /**< \brief [4:4] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN05:1;                  /**< \brief [5:5] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN06:1;                  /**< \brief [6:6] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int IPEN07:1;                  /**< \brief [7:7] Flag Pattern Enable for Channel 0 (rw) */
    unsigned int reserved_8:5;              /**< \brief \internal Reserved */
    unsigned int GEEN0:1;                   /**< \brief [13:13] Generate Event Enable 0 (rw) */
    unsigned int IGP0:2;                    /**< \brief [15:14] Interrupt Gating Pattern 0 (rw) */
    unsigned int IPEN10:1;                  /**< \brief [16:16] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN11:1;                  /**< \brief [17:17] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN12:1;                  /**< \brief [18:18] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN13:1;                  /**< \brief [19:19] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN14:1;                  /**< \brief [20:20] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN15:1;                  /**< \brief [21:21] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN16:1;                  /**< \brief [22:22] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int IPEN17:1;                  /**< \brief [23:23] Interrupt Pattern Enable for Channel 1 (rw) */
    unsigned int reserved_24:5;             /**< \brief \internal Reserved */
    unsigned int GEEN1:1;                   /**< \brief [29:29] Generate Event Enable 1 (rw) */
    unsigned int IGP1:2;                    /**< \brief [31:30] Interrupt Gating Pattern 1 (rw) */
} Ifx_SCU_IGCR_Bits;

/** \\brief  ESR Input Register */
typedef struct _Ifx_SCU_IN_Bits
{
    unsigned int P0:1;                      /**< \brief [0:0] Input Bit 0 (rh) */
    unsigned int P1:1;                      /**< \brief [1:1] Input Bit 1 (rh) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_SCU_IN_Bits;

/** \\brief  Input/Output Control Register */
typedef struct _Ifx_SCU_IOCR_Bits
{
    unsigned int reserved_0:4;              /**< \brief \internal Reserved */
    unsigned int PC0:4;                     /**< \brief [7:4] Control for ESR Pin x (rw) */
    unsigned int reserved_8:4;              /**< \brief \internal Reserved */
    unsigned int PC1:4;                     /**< \brief [15:12] Control for ESR Pin x (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_IOCR_Bits;

/** \\brief  Logic BIST Control 0 Register */
typedef struct _Ifx_SCU_LBISTCTRL0_Bits
{
    unsigned int LBISTREQ:1;                /**< \brief [0:0] LBIST Request (w) */
    unsigned int LBISTREQP:1;               /**< \brief [1:1] LBIST Request Protection Bit (w) */
    unsigned int PATTERNS:14;               /**< \brief [15:2] LBIST Pattern Number (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_LBISTCTRL0_Bits;

/** \\brief  Logic BIST Control 1 Register */
typedef struct _Ifx_SCU_LBISTCTRL1_Bits
{
    unsigned int SEED:23;                   /**< \brief [22:0] LBIST Seed (rw) */
    unsigned int reserved_23:1;             /**< \brief \internal Reserved */
    unsigned int SPLITSH:3;                 /**< \brief [26:24] LBIST Split-Shift Selection (rw) */
    unsigned int BODY:1;                    /**< \brief [27:27] Body Application Indicator (rw) */
    unsigned int LBISTFREQU:4;              /**< \brief [31:28] LBIST Frequency Selection (rw) */
} Ifx_SCU_LBISTCTRL1_Bits;

/** \\brief  Logic BIST Control 2 Register */
typedef struct _Ifx_SCU_LBISTCTRL2_Bits
{
    unsigned int SIGNATURE:24;              /**< \brief [23:0] LBIST Signature (rh) */
    unsigned int reserved_24:7;             /**< \brief \internal Reserved */
    unsigned int LBISTDONE:1;               /**< \brief [31:31] LBIST Execution Indicator (rh) */
} Ifx_SCU_LBISTCTRL2_Bits;

/** \\brief  LCL CPU0 Control Register */
typedef struct _Ifx_SCU_LCLCON0_Bits
{
    unsigned int reserved_0:16;             /**< \brief \internal Reserved */
    unsigned int LS:1;                      /**< \brief [16:16] Lockstep Mode Status (rh) */
    unsigned int reserved_17:14;            /**< \brief \internal Reserved */
    unsigned int LSEN:1;                    /**< \brief [31:31] Lockstep Enable (rw) */
} Ifx_SCU_LCLCON0_Bits;

/** \\brief  LCL Test Register */
typedef struct _Ifx_SCU_LCLTEST_Bits
{
    unsigned int LCLT0:1;                   /**< \brief [0:0] LCL0 Lockstep Test (rwh) */
    unsigned int LCLT1:1;                   /**< \brief [1:1] Reserved in this product (r) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_SCU_LCLTEST_Bits;

/** \\brief  Manufacturer Identification Register */
typedef struct _Ifx_SCU_MANID_Bits
{
    unsigned int DEPT:5;                    /**< \brief [4:0] Department Identification Number (r) */
    unsigned int MANUF:11;                  /**< \brief [15:5] Manufacturer Identification Number (r) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_MANID_Bits;

/** \\brief  ESR Output Modification Register */
typedef struct _Ifx_SCU_OMR_Bits
{
    unsigned int PS0:1;                     /**< \brief [0:0] ESR0 Pin Set Bit 0 (w) */
    unsigned int PS1:1;                     /**< \brief [1:1] ESR1 Pin Set Bit 1 (w) */
    unsigned int reserved_2:14;             /**< \brief \internal Reserved */
    unsigned int PCL0:1;                    /**< \brief [16:16] ESR0 Pin Clear Bit 0 (w) */
    unsigned int PCL1:1;                    /**< \brief [17:17] ESR1 Pin Clear Bit 1 (w) */
    unsigned int reserved_18:14;            /**< \brief \internal Reserved */
} Ifx_SCU_OMR_Bits;

/** \\brief  OSC Control Register */
typedef struct _Ifx_SCU_OSCCON_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int PLLLV:1;                   /**< \brief [1:1] Oscillator for PLL Valid Low Status Bit (rh) */
    unsigned int OSCRES:1;                  /**< \brief [2:2] Oscillator Watchdog Reset (w) */
    unsigned int GAINSEL:2;                 /**< \brief [4:3] Oscillator Gain Selection (rw) */
    unsigned int MODE:2;                    /**< \brief [6:5] Oscillator Mode (rw) */
    unsigned int SHBY:1;                    /**< \brief [7:7] Shaper Bypass (rw) */
    unsigned int PLLHV:1;                   /**< \brief [8:8] Oscillator for PLL Valid High Status Bit (rh) */
    unsigned int reserved_9:1;              /**< \brief \internal Reserved */
    unsigned int X1D:1;                     /**< \brief [10:10] XTAL1 Data Value (rh) */
    unsigned int X1DEN:1;                   /**< \brief [11:11] XTAL1 Data Enable (rw) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int OSCVAL:5;                  /**< \brief [20:16] OSC Frequency Value (rw) */
    unsigned int reserved_21:2;             /**< \brief \internal Reserved */
    unsigned int APREN:1;                   /**< \brief [23:23] Amplitude Regulation Enable (rw) */
    unsigned int CAP0EN:1;                  /**< \brief [24:24] Capacitance 0 Enable (rw) */
    unsigned int CAP1EN:1;                  /**< \brief [25:25] Capacitance 1 Enable (rw) */
    unsigned int CAP2EN:1;                  /**< \brief [26:26] Capacitance 2 Enable (rw) */
    unsigned int CAP3EN:1;                  /**< \brief [27:27] Capacitance 3 Enable (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_SCU_OSCCON_Bits;

/** \\brief  ESR Output Register */
typedef struct _Ifx_SCU_OUT_Bits
{
    unsigned int P0:1;                      /**< \brief [0:0] Output Bit 0 (rwh) */
    unsigned int P1:1;                      /**< \brief [1:1] Output Bit 1 (rwh) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_SCU_OUT_Bits;

/** \\brief  Overlay Control Register */
typedef struct _Ifx_SCU_OVCCON_Bits
{
    unsigned int CSEL0:1;                   /**< \brief [0:0] CPU Select 0 (w) */
    unsigned int CSEL1:1;                   /**< \brief [1:1] Reserved in this Product (r) */
    unsigned int CSEL2:1;                   /**< \brief [2:2] Reserved in this Product (r) */
    unsigned int reserved_3:13;             /**< \brief \internal Reserved */
    unsigned int OVSTRT:1;                  /**< \brief [16:16] Overlay Start (w) */
    unsigned int OVSTP:1;                   /**< \brief [17:17] Overlay Stop (w) */
    unsigned int DCINVAL:1;                 /**< \brief [18:18] Data Cache Invalidate (w) */
    unsigned int reserved_19:5;             /**< \brief \internal Reserved */
    unsigned int OVCONF:1;                  /**< \brief [24:24] Overlay Configured (rw) */
    unsigned int POVCONF:1;                 /**< \brief [25:25] Write Protection for OVCONF (w) */
    unsigned int reserved_26:6;             /**< \brief \internal Reserved */
} Ifx_SCU_OVCCON_Bits;

/** \\brief  Overlay Enable Register */
typedef struct _Ifx_SCU_OVCENABLE_Bits
{
    unsigned int OVEN0:1;                   /**< \brief [0:0] Overlay Enable 0 (rw) */
    unsigned int OVEN1:1;                   /**< \brief [1:1] Reserved in this Product (rw) */
    unsigned int OVEN2:1;                   /**< \brief [2:2] Reserved in this Product (rw) */
    unsigned int reserved_3:29;             /**< \brief \internal Reserved */
} Ifx_SCU_OVCENABLE_Bits;

/** \\brief  Pad Disable Control Register */
typedef struct _Ifx_SCU_PDISC_Bits
{
    unsigned int PDIS0:1;                   /**< \brief [0:0] Pad Disable for ESR Pin 0 (rw) */
    unsigned int PDIS1:1;                   /**< \brief [1:1] Pad Disable for ESR Pin 1 (rw) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_SCU_PDISC_Bits;

/** \\brief  ESR Pad Driver Mode Register */
typedef struct _Ifx_SCU_PDR_Bits
{
    unsigned int PD0:3;                     /**< \brief [2:0] Pad Driver Mode for ESR Pins 0 and 1 (rw) */
    unsigned int PL0:1;                     /**< \brief [3:3] Reserved in this product (rw) */
    unsigned int PD1:3;                     /**< \brief [6:4] Pad Driver Mode for ESR Pins 0 and 1 (rw) */
    unsigned int PL1:1;                     /**< \brief [7:7] Reserved in this product (rw) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_SCU_PDR_Bits;

/** \\brief  Pattern Detection Result Register */
typedef struct _Ifx_SCU_PDRR_Bits
{
    unsigned int PDR0:1;                    /**< \brief [0:0] Pattern Detection Result of Channel 0 (rh) */
    unsigned int PDR1:1;                    /**< \brief [1:1] Pattern Detection Result of Channel 1 (rh) */
    unsigned int PDR2:1;                    /**< \brief [2:2] Pattern Detection Result of Channel 2 (rh) */
    unsigned int PDR3:1;                    /**< \brief [3:3] Pattern Detection Result of Channel 3 (rh) */
    unsigned int PDR4:1;                    /**< \brief [4:4] Pattern Detection Result of Channel 4 (rh) */
    unsigned int PDR5:1;                    /**< \brief [5:5] Pattern Detection Result of Channel 5 (rh) */
    unsigned int PDR6:1;                    /**< \brief [6:6] Pattern Detection Result of Channel 6 (rh) */
    unsigned int PDR7:1;                    /**< \brief [7:7] Pattern Detection Result of Channel 7 (rh) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_SCU_PDRR_Bits;

/** \\brief  PLL Configuration 0 Register */
typedef struct _Ifx_SCU_PLLCON0_Bits
{
    unsigned int VCOBYP:1;                  /**< \brief [0:0] VCO Bypass (rw) */
    unsigned int VCOPWD:1;                  /**< \brief [1:1] VCO Power Saving Mode (rw) */
    unsigned int MODEN:1;                   /**< \brief [2:2] Modulation Enable (rw) */
    unsigned int reserved_3:1;              /**< \brief \internal Reserved */
    unsigned int SETFINDIS:1;               /**< \brief [4:4] Set Status Bit PLLSTAT.FINDIS (w) */
    unsigned int CLRFINDIS:1;               /**< \brief [5:5] Clear Status Bit PLLSTAT.FINDIS (w) */
    unsigned int OSCDISCDIS:1;              /**< \brief [6:6] Oscillator Disconnect Disable (rw) */
    unsigned int reserved_7:2;              /**< \brief \internal Reserved */
    unsigned int NDIV:7;                    /**< \brief [15:9] N-Divider Value (rw) */
    unsigned int PLLPWD:1;                  /**< \brief [16:16] PLL Power Saving Mode (rw) */
    unsigned int reserved_17:1;             /**< \brief \internal Reserved */
    unsigned int RESLD:1;                   /**< \brief [18:18] Restart VCO Lock Detection (w) */
    unsigned int reserved_19:5;             /**< \brief \internal Reserved */
    unsigned int PDIV:4;                    /**< \brief [27:24] P-Divider Value (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_SCU_PLLCON0_Bits;

/** \\brief  PLL Configuration 1 Register */
typedef struct _Ifx_SCU_PLLCON1_Bits
{
    unsigned int K2DIV:7;                   /**< \brief [6:0] K2-Divider Value (rw) */
    unsigned int reserved_7:1;              /**< \brief \internal Reserved */
    unsigned int K3DIV:7;                   /**< \brief [14:8] K3-Divider Value (rw) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int K1DIV:7;                   /**< \brief [22:16] K1-Divider Value (rw) */
    unsigned int reserved_23:9;             /**< \brief \internal Reserved */
} Ifx_SCU_PLLCON1_Bits;

/** \\brief  PLL Configuration 2 Register */
typedef struct _Ifx_SCU_PLLCON2_Bits
{
    unsigned int MODCFG:16;                 /**< \brief [15:0] Modulation Configuration (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_PLLCON2_Bits;

/** \\brief  PLL_ERAY Configuration 0 Register */
typedef struct _Ifx_SCU_PLLERAYCON0_Bits
{
    unsigned int VCOBYP:1;                  /**< \brief [0:0] VCO Bypass (rw) */
    unsigned int VCOPWD:1;                  /**< \brief [1:1] VCO Power Saving Mode (rw) */
    unsigned int reserved_2:2;              /**< \brief \internal Reserved */
    unsigned int SETFINDIS:1;               /**< \brief [4:4] Set Status Bit PLLERAYSTAT.FINDIS (w) */
    unsigned int CLRFINDIS:1;               /**< \brief [5:5] Clear Status Bit PLLERAYSTAT.FINDIS (w) */
    unsigned int OSCDISCDIS:1;              /**< \brief [6:6] Oscillator Disconnect Disable (rw) */
    unsigned int reserved_7:2;              /**< \brief \internal Reserved */
    unsigned int NDIV:5;                    /**< \brief [13:9] N-Divider Value (rw) */
    unsigned int reserved_14:2;             /**< \brief \internal Reserved */
    unsigned int PLLPWD:1;                  /**< \brief [16:16] PLL Power Saving Mode (rw) */
    unsigned int reserved_17:1;             /**< \brief \internal Reserved */
    unsigned int RESLD:1;                   /**< \brief [18:18] Restart VCO Lock Detection (w) */
    unsigned int reserved_19:5;             /**< \brief \internal Reserved */
    unsigned int PDIV:4;                    /**< \brief [27:24] P-Divider Value (rw) */
    unsigned int reserved_28:4;             /**< \brief \internal Reserved */
} Ifx_SCU_PLLERAYCON0_Bits;

/** \\brief  PLL_ERAY Configuration 1 Register */
typedef struct _Ifx_SCU_PLLERAYCON1_Bits
{
    unsigned int K2DIV:7;                   /**< \brief [6:0] K2-Divider Value (rw) */
    unsigned int reserved_7:1;              /**< \brief \internal Reserved */
    unsigned int K3DIV:4;                   /**< \brief [11:8] K3-Divider Value (rw) */
    unsigned int reserved_12:4;             /**< \brief \internal Reserved */
    unsigned int K1DIV:7;                   /**< \brief [22:16] K1-Divider Value (rw) */
    unsigned int reserved_23:9;             /**< \brief \internal Reserved */
} Ifx_SCU_PLLERAYCON1_Bits;

/** \\brief  PLL_ERAY Status Register */
typedef struct _Ifx_SCU_PLLERAYSTAT_Bits
{
    unsigned int VCOBYST:1;                 /**< \brief [0:0] VCO Bypass Status (rh) */
    unsigned int PWDSTAT:1;                 /**< \brief [1:1] PLL_ERAY Power-saving Mode Status (rh) */
    unsigned int VCOLOCK:1;                 /**< \brief [2:2] PLL VCO Lock Status (rh) */
    unsigned int FINDIS:1;                  /**< \brief [3:3] Input Clock Disconnect Select Status (rh) */
    unsigned int K1RDY:1;                   /**< \brief [4:4] K1 Divider Ready Status (rh) */
    unsigned int K2RDY:1;                   /**< \brief [5:5] K2 Divider Ready Status (rh) */
    unsigned int reserved_6:26;             /**< \brief \internal Reserved */
} Ifx_SCU_PLLERAYSTAT_Bits;

/** \\brief  PLL Status Register */
typedef struct _Ifx_SCU_PLLSTAT_Bits
{
    unsigned int VCOBYST:1;                 /**< \brief [0:0] VCO Bypass Status (rh) */
    unsigned int reserved_1:1;              /**< \brief \internal Reserved */
    unsigned int VCOLOCK:1;                 /**< \brief [2:2] PLL VCO Lock Status (rh) */
    unsigned int FINDIS:1;                  /**< \brief [3:3] Input Clock Disconnect Select Status (rh) */
    unsigned int K1RDY:1;                   /**< \brief [4:4] K1 Divider Ready Status (rh) */
    unsigned int K2RDY:1;                   /**< \brief [5:5] K2 Divider Ready Status (rh) */
    unsigned int reserved_6:1;              /**< \brief \internal Reserved */
    unsigned int MODRUN:1;                  /**< \brief [7:7] Modulation Run (rh) */
    unsigned int reserved_8:24;             /**< \brief \internal Reserved */
} Ifx_SCU_PLLSTAT_Bits;

/** \\brief  Power Management Control and Status Register */
typedef struct _Ifx_SCU_PMCSR_Bits
{
    unsigned int REQSLP:2;                  /**< \brief [1:0] Idle Mode and Sleep Mode Request (rwh) */
    unsigned int SMUSLP:1;                  /**< \brief [2:2] SMU CPU Idle Request (rwh) */
    unsigned int reserved_3:5;              /**< \brief \internal Reserved */
    unsigned int PMST:3;                    /**< \brief [10:8] Power management Status (rh) */
    unsigned int reserved_11:21;            /**< \brief \internal Reserved */
} Ifx_SCU_PMCSR_Bits;

/** \\brief  Standby and Wake-up Control Register 0 */
typedef struct _Ifx_SCU_PMSWCR0_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int ESR1WKEN:1;                /**< \brief [1:1] ESR1 Wake-up enable from Standby (rw) */
    unsigned int PINAWKEN:1;                /**< \brief [2:2] Pin A Wake-up enable from Standby (rw) */
    unsigned int PINBWKEN:1;                /**< \brief [3:3] Pin B Wake-up enable from Standby (rw) */
    unsigned int ESR0DFEN:1;                /**< \brief [4:4] Digital Filter Enable (rw) */
    unsigned int ESR0EDCON:2;               /**< \brief [6:5] Edge Detection Control (rw) */
    unsigned int ESR1DFEN:1;                /**< \brief [7:7] Digital Filter Enable (rw) */
    unsigned int ESR1EDCON:2;               /**< \brief [9:8] Edge Detection Control (rw) */
    unsigned int PINADFEN:1;                /**< \brief [10:10] Digital Filter Enable (rw) */
    unsigned int PINAEDCON:2;               /**< \brief [12:11] Edge Detection Control (rw) */
    unsigned int PINBDFEN:1;                /**< \brief [13:13] Digital Filter Enable (rw) */
    unsigned int PINBEDCON:2;               /**< \brief [15:14] Edge Detection Control (rw) */
    unsigned int reserved_16:1;             /**< \brief \internal Reserved */
    unsigned int STBYRAMSEL:2;              /**< \brief [18:17] Standby RAM supply in Standby Mode (rw) */
    unsigned int reserved_19:1;             /**< \brief \internal Reserved */
    unsigned int WUTWKEN:1;                 /**< \brief [20:20] WUT Wake-up enable from Standby (rw) */
    unsigned int reserved_21:2;             /**< \brief \internal Reserved */
    unsigned int PORSTDF:1;                 /**< \brief [23:23] PORST Digital Filter enable (rw) */
    unsigned int reserved_24:1;             /**< \brief \internal Reserved */
    unsigned int DCDCSYNC:1;                /**< \brief [25:25] DC-DC Synchronisation Enable (rw) */
    unsigned int reserved_26:3;             /**< \brief \internal Reserved */
    unsigned int ESR0TRIST:1;               /**< \brief [29:29] ESR0 Tristate enable (rw) */
    unsigned int reserved_30:1;             /**< \brief \internal Reserved */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_PMSWCR0_Bits;

/** \\brief  Standby and Wake-up Control Register 1 */
typedef struct _Ifx_SCU_PMSWCR1_Bits
{
    unsigned int reserved_0:12;             /**< \brief \internal Reserved */
    unsigned int IRADIS:1;                  /**< \brief [12:12] Idle-Request-Acknowledge Sequence Disable (rw) */
    unsigned int reserved_13:14;            /**< \brief \internal Reserved */
    unsigned int STBYEVEN:1;                /**< \brief [27:27] Standby Entry Event configuration enable (w) */
    unsigned int STBYEV:3;                  /**< \brief [30:28] Standby Entry Event Configuration (rw) */
    unsigned int reserved_31:1;             /**< \brief \internal Reserved */
} Ifx_SCU_PMSWCR1_Bits;

/** \\brief  Standby and Wake-up Control Register 3 */
typedef struct _Ifx_SCU_PMSWCR3_Bits
{
    unsigned int WUTREL:24;                 /**< \brief [23:0] WUT reload value. (rw) */
    unsigned int reserved_24:4;             /**< \brief \internal Reserved */
    unsigned int WUTDIV:1;                  /**< \brief [28:28] WUT clock divider (rw) */
    unsigned int WUTEN:1;                   /**< \brief [29:29] WUT enable (rw) */
    unsigned int WUTMODE:1;                 /**< \brief [30:30] WUT mode selection (rw) */
    unsigned int LCK:1;                     /**< \brief [31:31] Lock Status (rh) */
} Ifx_SCU_PMSWCR3_Bits;

/** \\brief  Standby and Wake-up Status Flag Register */
typedef struct _Ifx_SCU_PMSWSTAT_Bits
{
    unsigned int reserved_0:2;              /**< \brief \internal Reserved */
    unsigned int ESR1WKP:1;                 /**< \brief [2:2] ESR1 Wake-up flag (rh) */
    unsigned int ESR1OVRUN:1;               /**< \brief [3:3] ESR1 Overrun status flag (rh) */
    unsigned int PINAWKP:1;                 /**< \brief [4:4] Pin A (P14.1) Wake-up flag (rh) */
    unsigned int PINAOVRUN:1;               /**< \brief [5:5] Pin A Overrun status flag (rh) */
    unsigned int PINBWKP:1;                 /**< \brief [6:6] Pin B (P15.1) Wake-up flag (rh) */
    unsigned int PINBOVRUN:1;               /**< \brief [7:7] Pin B Overrun status flag (rh) */
    unsigned int reserved_8:1;              /**< \brief \internal Reserved */
    unsigned int PORSTDF:1;                 /**< \brief [9:9] PORST Digital Filter status (rh) */
    unsigned int HWCFGEVR:3;                /**< \brief [12:10] EVR Hardware Configuration (rh) */
    unsigned int STBYRAM:2;                 /**< \brief [14:13] Standby RAM Supply status (rh) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int WUTWKP:1;                  /**< \brief [16:16] WUT Wake-up flag (rh) */
    unsigned int WUTOVRUN:1;                /**< \brief [17:17] WUT Overrun status flag (rh) */
    unsigned int reserved_18:1;             /**< \brief \internal Reserved */
    unsigned int WUTWKEN:1;                 /**< \brief [19:19] WUT Wake-up enable status (rh) */
    unsigned int ESR1WKEN:1;                /**< \brief [20:20] ESR1 Wake-up enable status (rh) */
    unsigned int PINAWKEN:1;                /**< \brief [21:21] Pin A Wake-up enable status (rh) */
    unsigned int PINBWKEN:1;                /**< \brief [22:22] Pin B Wake-up enable status (rh) */
    unsigned int reserved_23:4;             /**< \brief \internal Reserved */
    unsigned int ESR0TRIST:1;               /**< \brief [27:27] ESR0 pin status during Standby (rh) */
    unsigned int reserved_28:1;             /**< \brief \internal Reserved */
    unsigned int WUTEN:1;                   /**< \brief [29:29] WUT Enable status (rh) */
    unsigned int WUTMODE:1;                 /**< \brief [30:30] WUT Mode status (rh) */
    unsigned int WUTRUN:1;                  /**< \brief [31:31] WUT Run status (rh) */
} Ifx_SCU_PMSWSTAT_Bits;

/** \\brief  Standby and Wake-up Status Clear Register */
typedef struct _Ifx_SCU_PMSWSTATCLR_Bits
{
    unsigned int reserved_0:2;              /**< \brief \internal Reserved */
    unsigned int ESR1WKPCLR:1;              /**< \brief [2:2] ESR1 Wake-up indication flag clear (w) */
    unsigned int ESR1OVRUNCLR:1;            /**< \brief [3:3] ESR1 Overrun status indication flag clear (w) */
    unsigned int PINAWKPCLR:1;              /**< \brief [4:4] PINA Wake-up indication flag clear (w) */
    unsigned int PINAOVRUNCLR:1;            /**< \brief [5:5] PINA Overrun status indication flag clear (w) */
    unsigned int PINBWKPCLR:1;              /**< \brief [6:6] PINB Wake-up indication flag clear (w) */
    unsigned int PINBOVRUNCLR:1;            /**< \brief [7:7] PINB Overrun status indication flag clear (w) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int WUTWKPCLR:1;               /**< \brief [16:16] WUT Wake-up indication flag clear (w) */
    unsigned int WUTOVRUNCLR:1;             /**< \brief [17:17] WUT Overrun status indication flag clear (w) */
    unsigned int reserved_18:14;            /**< \brief \internal Reserved */
} Ifx_SCU_PMSWSTATCLR_Bits;

/** \\brief  Standby WUT Counter Register */
typedef struct _Ifx_SCU_PMSWUTCNT_Bits
{
    unsigned int WUTCNT:24;                 /**< \brief [23:0] WUT counter value. (rh) */
    unsigned int reserved_24:7;             /**< \brief \internal Reserved */
    unsigned int VAL:1;                     /**< \brief [31:31] Valid Status (rh) */
} Ifx_SCU_PMSWUTCNT_Bits;

/** \\brief  Additional Reset Control Register */
typedef struct _Ifx_SCU_RSTCON2_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int CLRC:1;                    /**< \brief [1:1] Clear Cold Reset Status (w) */
    unsigned int reserved_2:10;             /**< \brief \internal Reserved */
    unsigned int CSS0:1;                    /**< \brief [12:12] CPU0 Safe State Reached (rh) */
    unsigned int CSS1:1;                    /**< \brief [13:13] Reserved in this product (r) */
    unsigned int CSS2:1;                    /**< \brief [14:14] Reserved in this product (r) */
    unsigned int reserved_15:1;             /**< \brief \internal Reserved */
    unsigned int USRINFO:16;                /**< \brief [31:16] User Information (rw) */
} Ifx_SCU_RSTCON2_Bits;

/** \\brief  Reset Configuration Register */
typedef struct _Ifx_SCU_RSTCON_Bits
{
    unsigned int ESR0:2;                    /**< \brief [1:0] ESR0 Reset Request Trigger Reset Configuration (rw) */
    unsigned int ESR1:2;                    /**< \brief [3:2] ESR1 Reset Request Trigger Reset Configuration (rw) */
    unsigned int reserved_4:2;              /**< \brief \internal Reserved */
    unsigned int SMU:2;                     /**< \brief [7:6] SMU Reset Request Trigger Reset Configuration (rw) */
    unsigned int SW:2;                      /**< \brief [9:8] SW Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM0:2;                    /**< \brief [11:10] STM0 Reset Request Trigger Reset Configuration (rw) */
    unsigned int STM1:2;                    /**< \brief [13:12] STM1 Reset Request Trigger Reset Configuration (If Product has STM1) (rw) */
    unsigned int STM2:2;                    /**< \brief [15:14] STM2 Reset Request Trigger Reset Configuration (If Product has STM2) (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_RSTCON_Bits;

/** \\brief  Reset Status Register */
typedef struct _Ifx_SCU_RSTSTAT_Bits
{
    unsigned int ESR0:1;                    /**< \brief [0:0] Reset Request Trigger Reset Status for ESR0 (rh) */
    unsigned int ESR1:1;                    /**< \brief [1:1] Reset Request Trigger Reset Status for ESR1 (rh) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int SMU:1;                     /**< \brief [3:3] Reset Request Trigger Reset Status for SMU (rh) */
    unsigned int SW:1;                      /**< \brief [4:4] Reset Request Trigger Reset Status for SW (rh) */
    unsigned int STM0:1;                    /**< \brief [5:5] Reset Request Trigger Reset Status for STM0 Compare Match (rh) */
    unsigned int STM1:1;                    /**< \brief [6:6] Reset Request Trigger Reset Status for STM1 Compare Match (If Product has STM1) (rh) */
    unsigned int STM2:1;                    /**< \brief [7:7] Reset Request Trigger Reset Status for STM2 Compare Match (If Product has STM2) (rh) */
    unsigned int reserved_8:8;              /**< \brief \internal Reserved */
    unsigned int PORST:1;                   /**< \brief [16:16] Reset Request Trigger Reset Status for PORST (rh) */
    unsigned int reserved_17:1;             /**< \brief \internal Reserved */
    unsigned int CB0:1;                     /**< \brief [18:18] Reset Request Trigger Reset Status for Cerberus System Reset (rh) */
    unsigned int CB1:1;                     /**< \brief [19:19] Reset Request Trigger Reset Status for Cerberus Debug Reset (rh) */
    unsigned int CB3:1;                     /**< \brief [20:20] Reset Request Trigger Reset Status for Cerberus Application Reset (rh) */
    unsigned int reserved_21:2;             /**< \brief \internal Reserved */
    unsigned int EVR13:1;                   /**< \brief [23:23] Reset Request Trigger Reset Status for EVR13 (rh) */
    unsigned int EVR33:1;                   /**< \brief [24:24] Reserved in this product (rh) */
    unsigned int SWD:1;                     /**< \brief [25:25] Reset Request Trigger Reset Status for Supply Watchdog (SWD) (rh) */
    unsigned int reserved_26:2;             /**< \brief \internal Reserved */
    unsigned int STBYR:1;                   /**< \brief [28:28] Reset Request Trigger Reset Status for Standby Regulator Watchdog (STBYR) (rh) */
    unsigned int reserved_29:3;             /**< \brief \internal Reserved */
} Ifx_SCU_RSTSTAT_Bits;

/** \\brief  Safety Heartbeat Register */
typedef struct _Ifx_SCU_SAFECON_Bits
{
    unsigned int HBT:1;                     /**< \brief [0:0] Heartbeat (rw) */
    unsigned int reserved_1:31;             /**< \brief \internal Reserved */
} Ifx_SCU_SAFECON_Bits;

/** \\brief  Start-up Status Register */
typedef struct _Ifx_SCU_STSTAT_Bits
{
    unsigned int HWCFG:8;                   /**< \brief [7:0] Hardware Configuration Setting (rh) */
    unsigned int FTM:7;                     /**< \brief [14:8] Firmware Test Setting (rh) */
    unsigned int MODE:1;                    /**< \brief [15:15] MODE (rh) */
    unsigned int FCBAE:1;                   /**< \brief [16:16] Flash Config. Sector Access Enable (rh) */
    unsigned int LUDIS:1;                   /**< \brief [17:17] Latch Update Disable (rh) */
    unsigned int reserved_18:1;             /**< \brief \internal Reserved */
    unsigned int TRSTL:1;                   /**< \brief [19:19] TRSTL Status (rh) */
    unsigned int SPDEN:1;                   /**< \brief [20:20] Single Pin DAP Mode Enable (rh) */
    unsigned int reserved_21:3;             /**< \brief \internal Reserved */
    unsigned int RAMINT:1;                  /**< \brief [24:24] RAM Content Security Integrity (rh) */
    unsigned int reserved_25:7;             /**< \brief \internal Reserved */
} Ifx_SCU_STSTAT_Bits;

/** \\brief  Software Reset Configuration Register */
typedef struct _Ifx_SCU_SWRSTCON_Bits
{
    unsigned int reserved_0:1;              /**< \brief \internal Reserved */
    unsigned int SWRSTREQ:1;                /**< \brief [1:1] Software Reset Request (w) */
    unsigned int reserved_2:30;             /**< \brief \internal Reserved */
} Ifx_SCU_SWRSTCON_Bits;

/** \\brief  System Control Register */
typedef struct _Ifx_SCU_SYSCON_Bits
{
    unsigned int CCTRIG0:1;                 /**< \brief [0:0] Capture Compare Trigger 0 (rw) */
    unsigned int reserved_1:1;              /**< \brief \internal Reserved */
    unsigned int RAMINTM:2;                 /**< \brief [3:2] RAM Integrity Modify (w) */
    unsigned int SETLUDIS:1;                /**< \brief [4:4] Set Latch Update Disable (w) */
    unsigned int reserved_5:3;              /**< \brief \internal Reserved */
    unsigned int DATM:1;                    /**< \brief [8:8] Disable Application Test Mode (ATM) (rw) */
    unsigned int reserved_9:23;             /**< \brief \internal Reserved */
} Ifx_SCU_SYSCON_Bits;

/** \\brief  Trap Clear Register */
typedef struct _Ifx_SCU_TRAPCLR_Bits
{
    unsigned int ESR0T:1;                   /**< \brief [0:0] Clear Trap Request Flag ESR0T (w) */
    unsigned int ESR1T:1;                   /**< \brief [1:1] Clear Trap Request Flag ESR1T (w) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int SMUT:1;                    /**< \brief [3:3] Clear Trap Request Flag SMUT (w) */
    unsigned int reserved_4:28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPCLR_Bits;

/** \\brief  Trap Disable Register */
typedef struct _Ifx_SCU_TRAPDIS_Bits
{
    unsigned int ESR0T:1;                   /**< \brief [0:0] Disable Trap Request ESR0T (rw) */
    unsigned int ESR1T:1;                   /**< \brief [1:1] Disable Trap Request ESR1T (rw) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int SMUT:1;                    /**< \brief [3:3] Disable Trap Request SMUT (rw) */
    unsigned int reserved_4:28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPDIS_Bits;

/** \\brief  Trap Set Register */
typedef struct _Ifx_SCU_TRAPSET_Bits
{
    unsigned int ESR0T:1;                   /**< \brief [0:0] Set Trap Request Flag ESR0T (w) */
    unsigned int ESR1T:1;                   /**< \brief [1:1] Set Trap Request Flag ESR1T (w) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int SMUT:1;                    /**< \brief [3:3] Set Trap Request Flag SMUT (w) */
    unsigned int reserved_4:28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPSET_Bits;

/** \\brief  Trap Status Register */
typedef struct _Ifx_SCU_TRAPSTAT_Bits
{
    unsigned int ESR0T:1;                   /**< \brief [0:0] ESR0 Trap Request Flag (rh) */
    unsigned int ESR1T:1;                   /**< \brief [1:1] ESR1 Trap Request Flag (rh) */
    unsigned int reserved_2:1;              /**< \brief \internal Reserved */
    unsigned int SMUT:1;                    /**< \brief [3:3] SMU Alarm Trap Request Flag (rh) */
    unsigned int reserved_4:28;             /**< \brief \internal Reserved */
} Ifx_SCU_TRAPSTAT_Bits;

/** \\brief  CPU WDT Control Register 0 */
typedef struct _Ifx_SCU_WDTCPU_CON0_Bits
{
    unsigned int ENDINIT:1;                 /**< \brief [0:0] End-of-Initialization Control Bit (rwh) */
    unsigned int LCK:1;                     /**< \brief [1:1] Lock Bit to Control Access to WDTxCON0 (rwh) */
    unsigned int PW:14;                     /**< \brief [15:2] User-Definable Password Field for Access to WDTxCON0 (rwh) */
    unsigned int REL:16;                    /**< \brief [31:16] Reload Value for the WDT (also Time Check Value) (rw) */
} Ifx_SCU_WDTCPU_CON0_Bits;

/** \\brief  CPU WDT Control Register 1 */
typedef struct _Ifx_SCU_WDTCPU_CON1_Bits
{
    unsigned int reserved_0:2;              /**< \brief \internal Reserved */
    unsigned int IR0:1;                     /**< \brief [2:2] Input Frequency Request Control (rw) */
    unsigned int DR:1;                      /**< \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4:1;              /**< \brief \internal Reserved */
    unsigned int IR1:1;                     /**< \brief [5:5] Input Frequency Request Control (rw) */
    unsigned int UR:1;                      /**< \brief [6:6] Unlock Restriction Request Control Bit (rw) */
    unsigned int PAR:1;                     /**< \brief [7:7] Password Auto-sequence Request Bit (rw) */
    unsigned int TCR:1;                     /**< \brief [8:8] Counter Check Request Bit (rw) */
    unsigned int TCTR:7;                    /**< \brief [15:9] Timer Check Tolerance Request (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_WDTCPU_CON1_Bits;

/** \\brief  CPU WDT Status Register */
typedef struct _Ifx_SCU_WDTCPU_SR_Bits
{
    unsigned int AE:1;                      /**< \brief [0:0] Watchdog Access Error Status Flag (rh) */
    unsigned int OE:1;                      /**< \brief [1:1] Watchdog Overflow Error Status Flag (rh) */
    unsigned int IS0:1;                     /**< \brief [2:2] Watchdog Input Clock Status (rh) */
    unsigned int DS:1;                      /**< \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO:1;                      /**< \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int IS1:1;                     /**< \brief [5:5] Watchdog Input Clock Status (rh) */
    unsigned int US:1;                      /**< \brief [6:6] SMU Unlock Restriction Status Flag (rh) */
    unsigned int PAS:1;                     /**< \brief [7:7] Password Auto-sequence Status Flag (rh) */
    unsigned int TCS:1;                     /**< \brief [8:8] Timer Check Status Flag (rh) */
    unsigned int TCT:7;                     /**< \brief [15:9] Timer Check Tolerance (rh) */
    unsigned int TIM:16;                    /**< \brief [31:16] Timer Value (rh) */
} Ifx_SCU_WDTCPU_SR_Bits;

/** \\brief  Safety WDT Control Register 0 */
typedef struct _Ifx_SCU_WDTS_CON0_Bits
{
    unsigned int ENDINIT:1;                 /**< \brief [0:0] End-of-Initialization Control Bit (rwh) */
    unsigned int LCK:1;                     /**< \brief [1:1] Lock Bit to Control Access to WDTxCON0 (rwh) */
    unsigned int PW:14;                     /**< \brief [15:2] User-Definable Password Field for Access to WDTxCON0 (rwh) */
    unsigned int REL:16;                    /**< \brief [31:16] Reload Value for the WDT (also Time Check Value) (rw) */
} Ifx_SCU_WDTS_CON0_Bits;

/** \\brief  Safety WDT Control Register 1 */
typedef struct _Ifx_SCU_WDTS_CON1_Bits
{
    unsigned int CLRIRF:1;                  /**< \brief [0:0] Clear Internal Reset Flag (rwh) */
    unsigned int reserved_1:1;              /**< \brief \internal Reserved */
    unsigned int IR0:1;                     /**< \brief [2:2] Input Frequency Request Control (rw) */
    unsigned int DR:1;                      /**< \brief [3:3] Disable Request Control Bit (rw) */
    unsigned int reserved_4:1;              /**< \brief \internal Reserved */
    unsigned int IR1:1;                     /**< \brief [5:5] Input Frequency Request Control (rw) */
    unsigned int UR:1;                      /**< \brief [6:6] Unlock Restriction Request Control Bit (rw) */
    unsigned int PAR:1;                     /**< \brief [7:7] Password Auto-sequence Request Bit (rw) */
    unsigned int TCR:1;                     /**< \brief [8:8] Counter Check Request Bit (rw) */
    unsigned int TCTR:7;                    /**< \brief [15:9] Timer Check Tolerance Request (rw) */
    unsigned int reserved_16:16;            /**< \brief \internal Reserved */
} Ifx_SCU_WDTS_CON1_Bits;

/** \\brief  Safety WDT Status Register */
typedef struct _Ifx_SCU_WDTS_SR_Bits
{
    unsigned int AE:1;                      /**< \brief [0:0] Watchdog Access Error Status Flag (rh) */
    unsigned int OE:1;                      /**< \brief [1:1] Watchdog Overflow Error Status Flag (rh) */
    unsigned int IS0:1;                     /**< \brief [2:2] Watchdog Input Clock Status (rh) */
    unsigned int DS:1;                      /**< \brief [3:3] Watchdog Enable/Disable Status Flag (rh) */
    unsigned int TO:1;                      /**< \brief [4:4] Watchdog Time-Out Mode Flag (rh) */
    unsigned int IS1:1;                     /**< \brief [5:5] Watchdog Input Clock Status (rh) */
    unsigned int US:1;                      /**< \brief [6:6] SMU Unlock Restriction Status Flag (rh) */
    unsigned int PAS:1;                     /**< \brief [7:7] Password Auto-sequence Status Flag (rh) */
    unsigned int TCS:1;                     /**< \brief [8:8] Timer Check Status Flag (rh) */
    unsigned int TCT:7;                     /**< \brief [15:9] Timer Check Tolerance (rh) */
    unsigned int TIM:16;                    /**< \brief [31:16] Timer Value (rh) */
} Ifx_SCU_WDTS_SR_Bits;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_union
 * \{  */

/** \\brief  Access Enable Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_ACCEN0_Bits B;
} Ifx_SCU_ACCEN0;

/** \\brief  Access Enable Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_ACCEN1_Bits B;
} Ifx_SCU_ACCEN1;

/** \\brief  Application Reset Disable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_ARSTDIS_Bits B;
} Ifx_SCU_ARSTDIS;

/** \\brief  CCU Clock Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON0_Bits B;
} Ifx_SCU_CCUCON0;

/** \\brief  CCU Clock Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON1_Bits B;
} Ifx_SCU_CCUCON1;

/** \\brief  CCU Clock Control Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON2_Bits B;
} Ifx_SCU_CCUCON2;

/** \\brief  CCU Clock Control Register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON3_Bits B;
} Ifx_SCU_CCUCON3;

/** \\brief  CCU Clock Control Register 4 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON4_Bits B;
} Ifx_SCU_CCUCON4;

/** \\brief  CCU Clock Control Register 5 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON5_Bits B;
} Ifx_SCU_CCUCON5;

/** \\brief  CCU Clock Control Register 6 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON6_Bits B;
} Ifx_SCU_CCUCON6;

/** \\brief  CCU Clock Control Register 9 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CCUCON9_Bits B;
} Ifx_SCU_CCUCON9;

/** \\brief  Chip Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_CHIPID_Bits B;
} Ifx_SCU_CHIPID;

/** \\brief  Die Temperature Sensor Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_DTSCON_Bits B;
} Ifx_SCU_DTSCON;

/** \\brief  Die Temperature Sensor Limit Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_DTSLIM_Bits B;
} Ifx_SCU_DTSLIM;

/** \\brief  Die Temperature Sensor Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_DTSSTAT_Bits B;
} Ifx_SCU_DTSSTAT;

/** \\brief  External Input Channel Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EICR_Bits B;
} Ifx_SCU_EICR;

/** \\brief  External Input Flag Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EIFR_Bits B;
} Ifx_SCU_EIFR;

/** \\brief  Emergency Stop Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EMSR_Bits B;
} Ifx_SCU_EMSR;

/** \\brief  ESR Input Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_ESRCFG_Bits B;
} Ifx_SCU_ESRCFG;

/** \\brief  ESR Output Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_ESROCFG_Bits B;
} Ifx_SCU_ESROCFG;

/** \\brief  EVR13 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVR13CON_Bits B;
} Ifx_SCU_EVR13CON;

/** \\brief  EVR ADC Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRADCSTAT_Bits B;
} Ifx_SCU_EVRADCSTAT;

/** \\brief  EVR Monitor Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRMONCTRL_Bits B;
} Ifx_SCU_EVRMONCTRL;

/** \\brief  EVR Over-voltage Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVROVMON_Bits B;
} Ifx_SCU_EVROVMON;

/** \\brief  EVR Reset Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRRSTCON_Bits B;
} Ifx_SCU_EVRRSTCON;

/** \\brief  EVR13 SD Coefficient Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRSDCOEFF2_Bits B;
} Ifx_SCU_EVRSDCOEFF2;

/** \\brief  EVR13 SD Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRSDCTRL1_Bits B;
} Ifx_SCU_EVRSDCTRL1;

/** \\brief  EVR13 SD Control Register 2 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRSDCTRL2_Bits B;
} Ifx_SCU_EVRSDCTRL2;

/** \\brief  EVR13 SD Control Register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRSDCTRL3_Bits B;
} Ifx_SCU_EVRSDCTRL3;

/** \\brief  EVR Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRSTAT_Bits B;
} Ifx_SCU_EVRSTAT;

/** \\brief  EVR Under-voltage Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EVRUVMON_Bits B;
} Ifx_SCU_EVRUVMON;

/** \\brief  External Clock Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_EXTCON_Bits B;
} Ifx_SCU_EXTCON;

/** \\brief  Fractional Divider Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_FDR_Bits B;
} Ifx_SCU_FDR;

/** \\brief  Flag Modification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_FMR_Bits B;
} Ifx_SCU_FMR;

/** \\brief  Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_ID_Bits B;
} Ifx_SCU_ID;

/** \\brief  Flag Gating Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_IGCR_Bits B;
} Ifx_SCU_IGCR;

/** \\brief  ESR Input Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_IN_Bits B;
} Ifx_SCU_IN;

/** \\brief  Input/Output Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_IOCR_Bits B;
} Ifx_SCU_IOCR;

/** \\brief  Logic BIST Control 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL0_Bits B;
} Ifx_SCU_LBISTCTRL0;

/** \\brief  Logic BIST Control 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL1_Bits B;
} Ifx_SCU_LBISTCTRL1;

/** \\brief  Logic BIST Control 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_LBISTCTRL2_Bits B;
} Ifx_SCU_LBISTCTRL2;

/** \\brief  LCL CPU0 Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_LCLCON0_Bits B;
} Ifx_SCU_LCLCON0;

/** \\brief  LCL Test Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_LCLTEST_Bits B;
} Ifx_SCU_LCLTEST;

/** \\brief  Manufacturer Identification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_MANID_Bits B;
} Ifx_SCU_MANID;

/** \\brief  ESR Output Modification Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_OMR_Bits B;
} Ifx_SCU_OMR;

/** \\brief  OSC Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_OSCCON_Bits B;
} Ifx_SCU_OSCCON;

/** \\brief  ESR Output Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_OUT_Bits B;
} Ifx_SCU_OUT;

/** \\brief  Overlay Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_OVCCON_Bits B;
} Ifx_SCU_OVCCON;

/** \\brief  Overlay Enable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_OVCENABLE_Bits B;
} Ifx_SCU_OVCENABLE;

/** \\brief  Pad Disable Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PDISC_Bits B;
} Ifx_SCU_PDISC;

/** \\brief  ESR Pad Driver Mode Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PDR_Bits B;
} Ifx_SCU_PDR;

/** \\brief  Pattern Detection Result Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PDRR_Bits B;
} Ifx_SCU_PDRR;

/** \\brief  PLL Configuration 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLCON0_Bits B;
} Ifx_SCU_PLLCON0;

/** \\brief  PLL Configuration 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLCON1_Bits B;
} Ifx_SCU_PLLCON1;

/** \\brief  PLL Configuration 2 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLCON2_Bits B;
} Ifx_SCU_PLLCON2;

/** \\brief  PLL_ERAY Configuration 0 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLERAYCON0_Bits B;
} Ifx_SCU_PLLERAYCON0;

/** \\brief  PLL_ERAY Configuration 1 Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLERAYCON1_Bits B;
} Ifx_SCU_PLLERAYCON1;

/** \\brief  PLL_ERAY Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLERAYSTAT_Bits B;
} Ifx_SCU_PLLERAYSTAT;

/** \\brief  PLL Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PLLSTAT_Bits B;
} Ifx_SCU_PLLSTAT;

/** \\brief  Power Management Control and Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMCSR_Bits B;
} Ifx_SCU_PMCSR;

/** \\brief  Standby and Wake-up Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWCR0_Bits B;
} Ifx_SCU_PMSWCR0;

/** \\brief  Standby and Wake-up Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWCR1_Bits B;
} Ifx_SCU_PMSWCR1;

/** \\brief  Standby and Wake-up Control Register 3 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWCR3_Bits B;
} Ifx_SCU_PMSWCR3;

/** \\brief  Standby and Wake-up Status Flag Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWSTAT_Bits B;
} Ifx_SCU_PMSWSTAT;

/** \\brief  Standby and Wake-up Status Clear Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWSTATCLR_Bits B;
} Ifx_SCU_PMSWSTATCLR;

/** \\brief  Standby WUT Counter Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_PMSWUTCNT_Bits B;
} Ifx_SCU_PMSWUTCNT;

/** \\brief  Reset Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_RSTCON_Bits B;
} Ifx_SCU_RSTCON;

/** \\brief  Additional Reset Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_RSTCON2_Bits B;
} Ifx_SCU_RSTCON2;

/** \\brief  Reset Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_RSTSTAT_Bits B;
} Ifx_SCU_RSTSTAT;

/** \\brief  Safety Heartbeat Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_SAFECON_Bits B;
} Ifx_SCU_SAFECON;

/** \\brief  Start-up Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_STSTAT_Bits B;
} Ifx_SCU_STSTAT;

/** \\brief  Software Reset Configuration Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_SWRSTCON_Bits B;
} Ifx_SCU_SWRSTCON;

/** \\brief  System Control Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_SYSCON_Bits B;
} Ifx_SCU_SYSCON;

/** \\brief  Trap Clear Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPCLR_Bits B;
} Ifx_SCU_TRAPCLR;

/** \\brief  Trap Disable Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPDIS_Bits B;
} Ifx_SCU_TRAPDIS;

/** \\brief  Trap Set Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPSET_Bits B;
} Ifx_SCU_TRAPSET;

/** \\brief  Trap Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_TRAPSTAT_Bits B;
} Ifx_SCU_TRAPSTAT;

/** \\brief  CPU WDT Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTCPU_CON0_Bits B;
} Ifx_SCU_WDTCPU_CON0;

/** \\brief  CPU WDT Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTCPU_CON1_Bits B;
} Ifx_SCU_WDTCPU_CON1;

/** \\brief  CPU WDT Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTCPU_SR_Bits B;
} Ifx_SCU_WDTCPU_SR;

/** \\brief  Safety WDT Control Register 0 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTS_CON0_Bits B;
} Ifx_SCU_WDTS_CON0;

/** \\brief  Safety WDT Control Register 1 */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTS_CON1_Bits B;
} Ifx_SCU_WDTS_CON1;

/** \\brief  Safety WDT Status Register */
typedef union
{
    /** \brief Unsigned access */
    unsigned int U;
    /** \brief Signed access */
    signed int I;
    /** \brief Bitfield access */
    Ifx_SCU_WDTS_SR_Bits B;
} Ifx_SCU_WDTS_SR;
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_struct
 * \{  */
/******************************************************************************/
/** \name Object L1
 * \{  */

/** \\brief  CPU watchdog */
typedef volatile struct _Ifx_SCU_WDTCPU
{
    Ifx_SCU_WDTCPU_CON0 CON0;               /**< \brief 0, CPU WDT Control Register 0 */
    Ifx_SCU_WDTCPU_CON1 CON1;               /**< \brief 4, CPU WDT Control Register 1 */
    Ifx_SCU_WDTCPU_SR SR;                   /**< \brief 8, CPU WDT Status Register */
    unsigned char reserved_C[24];           /**< \brief C, \internal Reserved */
} Ifx_SCU_WDTCPU;

/** \\brief  Safety watchdog */
typedef volatile struct _Ifx_SCU_WDTS
{
    Ifx_SCU_WDTS_CON0 CON0;                 /**< \brief 0, Safety WDT Control Register 0 */
    Ifx_SCU_WDTS_CON1 CON1;                 /**< \brief 4, Safety WDT Control Register 1 */
    Ifx_SCU_WDTS_SR SR;                     /**< \brief 8, Safety WDT Status Register */
} Ifx_SCU_WDTS;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_Scu_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \\brief  SCU object */
typedef volatile struct _Ifx_SCU
{
    unsigned char reserved_0[8];            /**< \brief 0, \internal Reserved */
    Ifx_SCU_ID ID;                          /**< \brief 8, Identification Register */
    unsigned char reserved_C[4];            /**< \brief C, \internal Reserved */
    Ifx_SCU_OSCCON OSCCON;                  /**< \brief 10, OSC Control Register */
    Ifx_SCU_PLLSTAT PLLSTAT;                /**< \brief 14, PLL Status Register */
    Ifx_SCU_PLLCON0 PLLCON0;                /**< \brief 18, PLL Configuration 0 Register */
    Ifx_SCU_PLLCON1 PLLCON1;                /**< \brief 1C, PLL Configuration 1 Register */
    Ifx_SCU_PLLCON2 PLLCON2;                /**< \brief 20, PLL Configuration 2 Register */
    Ifx_SCU_PLLERAYSTAT PLLERAYSTAT;        /**< \brief 24, PLL_ERAY Status Register */
    Ifx_SCU_PLLERAYCON0 PLLERAYCON0;        /**< \brief 28, PLL_ERAY Configuration 0 Register */
    Ifx_SCU_PLLERAYCON1 PLLERAYCON1;        /**< \brief 2C, PLL_ERAY Configuration 1 Register */
    Ifx_SCU_CCUCON0 CCUCON0;                /**< \brief 30, CCU Clock Control Register 0 */
    Ifx_SCU_CCUCON1 CCUCON1;                /**< \brief 34, CCU Clock Control Register 1 */
    Ifx_SCU_FDR FDR;                        /**< \brief 38, Fractional Divider Register */
    Ifx_SCU_EXTCON EXTCON;                  /**< \brief 3C, External Clock Control Register */
    Ifx_SCU_CCUCON2 CCUCON2;                /**< \brief 40, CCU Clock Control Register 2 */
    Ifx_SCU_CCUCON3 CCUCON3;                /**< \brief 44, CCU Clock Control Register 3 */
    Ifx_SCU_CCUCON4 CCUCON4;                /**< \brief 48, CCU Clock Control Register 4 */
    Ifx_SCU_CCUCON5 CCUCON5;                /**< \brief 4C, CCU Clock Control Register 5 */
    Ifx_SCU_RSTSTAT RSTSTAT;                /**< \brief 50, Reset Status Register */
    unsigned char reserved_54[4];           /**< \brief 54, \internal Reserved */
    Ifx_SCU_RSTCON RSTCON;                  /**< \brief 58, Reset Configuration Register */
    Ifx_SCU_ARSTDIS ARSTDIS;                /**< \brief 5C, Application Reset Disable Register */
    Ifx_SCU_SWRSTCON SWRSTCON;              /**< \brief 60, Software Reset Configuration Register */
    Ifx_SCU_RSTCON2 RSTCON2;                /**< \brief 64, Additional Reset Control Register */
    unsigned char reserved_68[4];           /**< \brief 68, \internal Reserved */
    Ifx_SCU_EVRRSTCON EVRRSTCON;            /**< \brief 6C, EVR Reset Control Register */
    Ifx_SCU_ESRCFG ESRCFG[2];               /**< \brief 70, ESR Input Configuration Register */
    Ifx_SCU_ESROCFG ESROCFG;                /**< \brief 78, ESR Output Configuration Register */
    Ifx_SCU_SYSCON SYSCON;                  /**< \brief 7C, System Control Register */
    Ifx_SCU_CCUCON6 CCUCON6;                /**< \brief 80, CCU Clock Control Register 6 */
    unsigned char reserved_84[8];           /**< \brief 84, \internal Reserved */
    Ifx_SCU_CCUCON9 CCUCON9;                /**< \brief 8C, CCU Clock Control Register 9 */
    unsigned char reserved_90[12];          /**< \brief 90, \internal Reserved */
    Ifx_SCU_PDR PDR;                        /**< \brief 9C, ESR Pad Driver Mode Register */
    Ifx_SCU_IOCR IOCR;                      /**< \brief A0, Input/Output Control Register */
    Ifx_SCU_OUT OUT;                        /**< \brief A4, ESR Output Register */
    Ifx_SCU_OMR OMR;                        /**< \brief A8, ESR Output Modification Register */
    Ifx_SCU_IN IN;                          /**< \brief AC, ESR Input Register */
    Ifx_SCU_EVRSTAT EVRSTAT;                /**< \brief B0, EVR Status Register */
    unsigned char reserved_B4[4];           /**< \brief B4, \internal Reserved */
    Ifx_SCU_EVR13CON EVR13CON;              /**< \brief B8, EVR13 Control Register */
    unsigned char reserved_BC[4];           /**< \brief BC, \internal Reserved */
    Ifx_SCU_STSTAT STSTAT;                  /**< \brief C0, Start-up Status Register */
    unsigned char reserved_C4[4];           /**< \brief C4, \internal Reserved */
    Ifx_SCU_PMSWCR0 PMSWCR0;                /**< \brief C8, Standby and Wake-up Control Register 0 */
    Ifx_SCU_PMSWSTAT PMSWSTAT;              /**< \brief CC, Standby and Wake-up Status Flag Register */
    Ifx_SCU_PMSWSTATCLR PMSWSTATCLR;        /**< \brief D0, Standby and Wake-up Status Clear Register */
    Ifx_SCU_PMCSR PMCSR[1];                 /**< \brief D4, Power Management Control and Status Register */
    unsigned char reserved_D8[8];           /**< \brief D8, \internal Reserved */
    Ifx_SCU_DTSSTAT DTSSTAT;                /**< \brief E0, Die Temperature Sensor Status Register */
    Ifx_SCU_DTSCON DTSCON;                  /**< \brief E4, Die Temperature Sensor Control Register */
    Ifx_SCU_PMSWCR1 PMSWCR1;                /**< \brief E8, Standby and Wake-up Control Register 1 */
    unsigned char reserved_EC[4];           /**< \brief EC, \internal Reserved */
    Ifx_SCU_WDTS WDTS;                      /**< \brief F0, Safety watchdog */
    Ifx_SCU_EMSR EMSR;                      /**< \brief FC, Emergency Stop Register */
    Ifx_SCU_WDTCPU WDTCPU[1];               /**< \brief 100, CPU watchdogs */
    Ifx_SCU_TRAPSTAT TRAPSTAT;              /**< \brief 124, Trap Status Register */
    Ifx_SCU_TRAPSET TRAPSET;                /**< \brief 128, Trap Set Register */
    Ifx_SCU_TRAPCLR TRAPCLR;                /**< \brief 12C, Trap Clear Register */
    Ifx_SCU_TRAPDIS TRAPDIS;                /**< \brief 130, Trap Disable Register */
    Ifx_SCU_LCLCON0 LCLCON0;                /**< \brief 134, LCL CPU0 Control Register */
    unsigned char reserved_138[4];          /**< \brief 138, \internal Reserved */
    Ifx_SCU_LCLTEST LCLTEST;                /**< \brief 13C, LCL Test Register */
    Ifx_SCU_CHIPID CHIPID;                  /**< \brief 140, Chip Identification Register */
    Ifx_SCU_MANID MANID;                    /**< \brief 144, Manufacturer Identification Register */
    unsigned char reserved_148[8];          /**< \brief 148, \internal Reserved */
    Ifx_SCU_SAFECON SAFECON;                /**< \brief 150, Safety Heartbeat Register */
    unsigned char reserved_154[16];         /**< \brief 154, \internal Reserved */
    Ifx_SCU_LBISTCTRL0 LBISTCTRL0;          /**< \brief 164, Logic BIST Control 0 Register */
    Ifx_SCU_LBISTCTRL1 LBISTCTRL1;          /**< \brief 168, Logic BIST Control 1 Register */
    Ifx_SCU_LBISTCTRL2 LBISTCTRL2;          /**< \brief 16C, Logic BIST Control 2 Register */
    unsigned char reserved_170[28];         /**< \brief 170, \internal Reserved */
    Ifx_SCU_PDISC PDISC;                    /**< \brief 18C, Pad Disable Control Register */
    unsigned char reserved_190[12];         /**< \brief 190, \internal Reserved */
    Ifx_SCU_EVRADCSTAT EVRADCSTAT;          /**< \brief 19C, EVR ADC Status Register */
    Ifx_SCU_EVRUVMON EVRUVMON;              /**< \brief 1A0, EVR Under-voltage Configuration Register */
    Ifx_SCU_EVROVMON EVROVMON;              /**< \brief 1A4, EVR Over-voltage Configuration Register */
    Ifx_SCU_EVRMONCTRL EVRMONCTRL;          /**< \brief 1A8, EVR Monitor Control Register */
    unsigned char reserved_1AC[4];          /**< \brief 1AC, \internal Reserved */
    Ifx_SCU_EVRSDCTRL1 EVRSDCTRL1;          /**< \brief 1B0, EVR13 SD Control Register 1 */
    Ifx_SCU_EVRSDCTRL2 EVRSDCTRL2;          /**< \brief 1B4, EVR13 SD Control Register 2 */
    Ifx_SCU_EVRSDCTRL3 EVRSDCTRL3;          /**< \brief 1B8, EVR13 SD Control Register 3 */
    unsigned char reserved_1BC[8];          /**< \brief 1BC, \internal Reserved */
    Ifx_SCU_EVRSDCOEFF2 EVRSDCOEFF2;        /**< \brief 1C4, EVR13 SD Coefficient Register 2 */
    unsigned char reserved_1C8[20];         /**< \brief 1C8, \internal Reserved */
    Ifx_SCU_PMSWUTCNT PMSWUTCNT;            /**< \brief 1DC, Standby WUT Counter Register */
    Ifx_SCU_OVCENABLE OVCENABLE;            /**< \brief 1E0, Overlay Enable Register */
    Ifx_SCU_OVCCON OVCCON;                  /**< \brief 1E4, Overlay Control Register */
    unsigned char reserved_1E8[40];         /**< \brief 1E8, \internal Reserved */
    Ifx_SCU_EICR EICR[4];                   /**< \brief 210, External Input Channel Register  */
    Ifx_SCU_EIFR EIFR;                      /**< \brief 220, External Input Flag Register */
    Ifx_SCU_FMR FMR;                        /**< \brief 224, Flag Modification Register */
    Ifx_SCU_PDRR PDRR;                      /**< \brief 228, Pattern Detection Result Register */
    Ifx_SCU_IGCR IGCR[4];                   /**< \brief 22C, Flag Gating Register  */
    unsigned char reserved_23C[4];          /**< \brief 23C, \internal Reserved */
    Ifx_SCU_DTSLIM DTSLIM;                  /**< \brief 240, Die Temperature Sensor Limit Register */
    unsigned char reserved_244[188];        /**< \brief 244, \internal Reserved */
    Ifx_SCU_PMSWCR3 PMSWCR3;                /**< \brief 300, Standby and Wake-up Control Register 3 */
    unsigned char reserved_304[244];        /**< \brief 304, \internal Reserved */
    Ifx_SCU_ACCEN1 ACCEN1;                  /**< \brief 3F8, Access Enable Register 1 */
    Ifx_SCU_ACCEN0 ACCEN0;                  /**< \brief 3FC, Access Enable Register 0 */
} Ifx_SCU;
/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXSCU_REGDEF_H */
