/**************************************************************************//**
 * @file
 * @brief EFR32MG21 SYNTH register and bit field definitions
 ******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories, Inc. www.silabs.com</b>
 ******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 *****************************************************************************/
#ifndef EFR32MG21_SYNTH_H
#define EFR32MG21_SYNTH_H
#define SYNTH_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG21_SYNTH SYNTH
 * @{
 * @brief EFR32MG21 SYNTH Register Declaration.
 *****************************************************************************/

/** SYNTH Register Declaration. */
typedef struct {
  __IM uint32_t  IPVERSION;                     /**< IP Version                                         */
  __IOM uint32_t EN;                            /**< Enable peripheral clock to this module             */
  __IM uint32_t  STATUS;                        /**< Frequency Synthesizer Status                       */
  __IOM uint32_t CMD;                           /**< Command Register                                   */
  __IOM uint32_t CTRL;                          /**< Frequency Synthesizer Control register             */
  uint32_t       RESERVED0[6U];                 /**< Reserved for future use                            */
  __IOM uint32_t VCDACCTRL;                     /**< VCDAC Control register                             */
  uint32_t       RESERVED1[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t FREQ;                          /**< Frequency Word                                     */
  __IOM uint32_t IFFREQ;                        /**< IF frequency                                       */
  __IOM uint32_t DIVCTRL;                       /**< Frequency division control                         */
  __IOM uint32_t CHCTRL;                        /**< Frequency Synthesizer Channel Control              */
  __IOM uint32_t CHSP;                          /**< Channel spacing                                    */
  __IOM uint32_t CALOFFSET;                     /**< Calibration offset                                 */
  __IOM uint32_t VCOTUNING;                     /**< VCO Frequency tuning                               */
  uint32_t       RESERVED2[2U];                 /**< Reserved for future use                            */
  __IOM uint32_t VCOGAIN;                       /**< Calibration values for VCO gain                    */
  uint32_t       RESERVED3[7U];                 /**< Reserved for future use                            */
  __IOM uint32_t IF;                            /**< Interrupt Flag Register                            */
  uint32_t       RESERVED4[2U];                 /**< Reserved for future use                            */
  __IOM uint32_t IEN;                           /**< Interrupt Enable Register                          */
  __IOM uint32_t LOCNTCTRL;                     /**< LO Counter Control Register                        */
  __IM uint32_t  LOCNTSTATUS;                   /**< LO Counter Status Register                         */
  __IM uint32_t  LOCNTTARGET;                   /**< LO Counter Target Value                            */
  __IOM uint32_t MMDDENOMINIT;                  /**< Initial Values for MMD Denom                       */
  __IOM uint32_t CHPDACINIT;                    /**< Initial Value for CHP DAC                          */
  __IOM uint32_t LPFCTRL1CAL;                   /**< LPF control register 1 for CAL mode                */
  __IOM uint32_t LPFCTRL1RX;                    /**< LPF control register 1 for RX mode                 */
  __IOM uint32_t LPFCTRL1TX;                    /**< LPF control register 1 for TX mode                 */
  __IOM uint32_t LPFCTRL2RX;                    /**< LPF control register 2 for RX mode                 */
  __IOM uint32_t LPFCTRL2TX;                    /**< LPF control register 2 for TX mode                 */
  __IOM uint32_t DSMCTRLRX;                     /**< DSM Control register for RX mode                   */
  __IOM uint32_t DSMCTRLTX;                     /**< DSM Control register for TX mode                   */
  uint32_t       RESERVED5[978U];               /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_SET;                 /**< IP Version                                         */
  __IOM uint32_t EN_SET;                        /**< Enable peripheral clock to this module             */
  __IM uint32_t  STATUS_SET;                    /**< Frequency Synthesizer Status                       */
  __IOM uint32_t CMD_SET;                       /**< Command Register                                   */
  __IOM uint32_t CTRL_SET;                      /**< Frequency Synthesizer Control register             */
  uint32_t       RESERVED6[6U];                 /**< Reserved for future use                            */
  __IOM uint32_t VCDACCTRL_SET;                 /**< VCDAC Control register                             */
  uint32_t       RESERVED7[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t FREQ_SET;                      /**< Frequency Word                                     */
  __IOM uint32_t IFFREQ_SET;                    /**< IF frequency                                       */
  __IOM uint32_t DIVCTRL_SET;                   /**< Frequency division control                         */
  __IOM uint32_t CHCTRL_SET;                    /**< Frequency Synthesizer Channel Control              */
  __IOM uint32_t CHSP_SET;                      /**< Channel spacing                                    */
  __IOM uint32_t CALOFFSET_SET;                 /**< Calibration offset                                 */
  __IOM uint32_t VCOTUNING_SET;                 /**< VCO Frequency tuning                               */
  uint32_t       RESERVED8[2U];                 /**< Reserved for future use                            */
  __IOM uint32_t VCOGAIN_SET;                   /**< Calibration values for VCO gain                    */
  uint32_t       RESERVED9[7U];                 /**< Reserved for future use                            */
  __IOM uint32_t IF_SET;                        /**< Interrupt Flag Register                            */
  uint32_t       RESERVED10[2U];                /**< Reserved for future use                            */
  __IOM uint32_t IEN_SET;                       /**< Interrupt Enable Register                          */
  __IOM uint32_t LOCNTCTRL_SET;                 /**< LO Counter Control Register                        */
  __IM uint32_t  LOCNTSTATUS_SET;               /**< LO Counter Status Register                         */
  __IM uint32_t  LOCNTTARGET_SET;               /**< LO Counter Target Value                            */
  __IOM uint32_t MMDDENOMINIT_SET;              /**< Initial Values for MMD Denom                       */
  __IOM uint32_t CHPDACINIT_SET;                /**< Initial Value for CHP DAC                          */
  __IOM uint32_t LPFCTRL1CAL_SET;               /**< LPF control register 1 for CAL mode                */
  __IOM uint32_t LPFCTRL1RX_SET;                /**< LPF control register 1 for RX mode                 */
  __IOM uint32_t LPFCTRL1TX_SET;                /**< LPF control register 1 for TX mode                 */
  __IOM uint32_t LPFCTRL2RX_SET;                /**< LPF control register 2 for RX mode                 */
  __IOM uint32_t LPFCTRL2TX_SET;                /**< LPF control register 2 for TX mode                 */
  __IOM uint32_t DSMCTRLRX_SET;                 /**< DSM Control register for RX mode                   */
  __IOM uint32_t DSMCTRLTX_SET;                 /**< DSM Control register for TX mode                   */
  uint32_t       RESERVED11[978U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_CLR;                 /**< IP Version                                         */
  __IOM uint32_t EN_CLR;                        /**< Enable peripheral clock to this module             */
  __IM uint32_t  STATUS_CLR;                    /**< Frequency Synthesizer Status                       */
  __IOM uint32_t CMD_CLR;                       /**< Command Register                                   */
  __IOM uint32_t CTRL_CLR;                      /**< Frequency Synthesizer Control register             */
  uint32_t       RESERVED12[6U];                /**< Reserved for future use                            */
  __IOM uint32_t VCDACCTRL_CLR;                 /**< VCDAC Control register                             */
  uint32_t       RESERVED13[1U];                /**< Reserved for future use                            */
  __IOM uint32_t FREQ_CLR;                      /**< Frequency Word                                     */
  __IOM uint32_t IFFREQ_CLR;                    /**< IF frequency                                       */
  __IOM uint32_t DIVCTRL_CLR;                   /**< Frequency division control                         */
  __IOM uint32_t CHCTRL_CLR;                    /**< Frequency Synthesizer Channel Control              */
  __IOM uint32_t CHSP_CLR;                      /**< Channel spacing                                    */
  __IOM uint32_t CALOFFSET_CLR;                 /**< Calibration offset                                 */
  __IOM uint32_t VCOTUNING_CLR;                 /**< VCO Frequency tuning                               */
  uint32_t       RESERVED14[2U];                /**< Reserved for future use                            */
  __IOM uint32_t VCOGAIN_CLR;                   /**< Calibration values for VCO gain                    */
  uint32_t       RESERVED15[7U];                /**< Reserved for future use                            */
  __IOM uint32_t IF_CLR;                        /**< Interrupt Flag Register                            */
  uint32_t       RESERVED16[2U];                /**< Reserved for future use                            */
  __IOM uint32_t IEN_CLR;                       /**< Interrupt Enable Register                          */
  __IOM uint32_t LOCNTCTRL_CLR;                 /**< LO Counter Control Register                        */
  __IM uint32_t  LOCNTSTATUS_CLR;               /**< LO Counter Status Register                         */
  __IM uint32_t  LOCNTTARGET_CLR;               /**< LO Counter Target Value                            */
  __IOM uint32_t MMDDENOMINIT_CLR;              /**< Initial Values for MMD Denom                       */
  __IOM uint32_t CHPDACINIT_CLR;                /**< Initial Value for CHP DAC                          */
  __IOM uint32_t LPFCTRL1CAL_CLR;               /**< LPF control register 1 for CAL mode                */
  __IOM uint32_t LPFCTRL1RX_CLR;                /**< LPF control register 1 for RX mode                 */
  __IOM uint32_t LPFCTRL1TX_CLR;                /**< LPF control register 1 for TX mode                 */
  __IOM uint32_t LPFCTRL2RX_CLR;                /**< LPF control register 2 for RX mode                 */
  __IOM uint32_t LPFCTRL2TX_CLR;                /**< LPF control register 2 for TX mode                 */
  __IOM uint32_t DSMCTRLRX_CLR;                 /**< DSM Control register for RX mode                   */
  __IOM uint32_t DSMCTRLTX_CLR;                 /**< DSM Control register for TX mode                   */
  uint32_t       RESERVED17[978U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_TGL;                 /**< IP Version                                         */
  __IOM uint32_t EN_TGL;                        /**< Enable peripheral clock to this module             */
  __IM uint32_t  STATUS_TGL;                    /**< Frequency Synthesizer Status                       */
  __IOM uint32_t CMD_TGL;                       /**< Command Register                                   */
  __IOM uint32_t CTRL_TGL;                      /**< Frequency Synthesizer Control register             */
  uint32_t       RESERVED18[6U];                /**< Reserved for future use                            */
  __IOM uint32_t VCDACCTRL_TGL;                 /**< VCDAC Control register                             */
  uint32_t       RESERVED19[1U];                /**< Reserved for future use                            */
  __IOM uint32_t FREQ_TGL;                      /**< Frequency Word                                     */
  __IOM uint32_t IFFREQ_TGL;                    /**< IF frequency                                       */
  __IOM uint32_t DIVCTRL_TGL;                   /**< Frequency division control                         */
  __IOM uint32_t CHCTRL_TGL;                    /**< Frequency Synthesizer Channel Control              */
  __IOM uint32_t CHSP_TGL;                      /**< Channel spacing                                    */
  __IOM uint32_t CALOFFSET_TGL;                 /**< Calibration offset                                 */
  __IOM uint32_t VCOTUNING_TGL;                 /**< VCO Frequency tuning                               */
  uint32_t       RESERVED20[2U];                /**< Reserved for future use                            */
  __IOM uint32_t VCOGAIN_TGL;                   /**< Calibration values for VCO gain                    */
  uint32_t       RESERVED21[7U];                /**< Reserved for future use                            */
  __IOM uint32_t IF_TGL;                        /**< Interrupt Flag Register                            */
  uint32_t       RESERVED22[2U];                /**< Reserved for future use                            */
  __IOM uint32_t IEN_TGL;                       /**< Interrupt Enable Register                          */
  __IOM uint32_t LOCNTCTRL_TGL;                 /**< LO Counter Control Register                        */
  __IM uint32_t  LOCNTSTATUS_TGL;               /**< LO Counter Status Register                         */
  __IM uint32_t  LOCNTTARGET_TGL;               /**< LO Counter Target Value                            */
  __IOM uint32_t MMDDENOMINIT_TGL;              /**< Initial Values for MMD Denom                       */
  __IOM uint32_t CHPDACINIT_TGL;                /**< Initial Value for CHP DAC                          */
  __IOM uint32_t LPFCTRL1CAL_TGL;               /**< LPF control register 1 for CAL mode                */
  __IOM uint32_t LPFCTRL1RX_TGL;                /**< LPF control register 1 for RX mode                 */
  __IOM uint32_t LPFCTRL1TX_TGL;                /**< LPF control register 1 for TX mode                 */
  __IOM uint32_t LPFCTRL2RX_TGL;                /**< LPF control register 2 for RX mode                 */
  __IOM uint32_t LPFCTRL2TX_TGL;                /**< LPF control register 2 for TX mode                 */
  __IOM uint32_t DSMCTRLRX_TGL;                 /**< DSM Control register for RX mode                   */
  __IOM uint32_t DSMCTRLTX_TGL;                 /**< DSM Control register for TX mode                   */
} SYNTH_TypeDef;
/** @} End of group EFR32MG21_SYNTH */

/**************************************************************************//**
 * @addtogroup EFR32MG21_SYNTH
 * @{
 * @defgroup EFR32MG21_SYNTH_BitFields SYNTH Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for SYNTH IPVERSION */
#define _SYNTH_IPVERSION_RESETVALUE                   0x00000000UL                              /**< Default value for SYNTH_IPVERSION           */
#define _SYNTH_IPVERSION_MASK                         0xFFFFFFFFUL                              /**< Mask for SYNTH_IPVERSION                    */
#define _SYNTH_IPVERSION_IPVERSION_SHIFT              0                                         /**< Shift value for SYNTH_IPVERSION             */
#define _SYNTH_IPVERSION_IPVERSION_MASK               0xFFFFFFFFUL                              /**< Bit mask for SYNTH_IPVERSION                */
#define _SYNTH_IPVERSION_IPVERSION_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for SYNTH_IPVERSION            */
#define SYNTH_IPVERSION_IPVERSION_DEFAULT             (_SYNTH_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_IPVERSION    */

/* Bit fields for SYNTH EN */
#define _SYNTH_EN_RESETVALUE                          0x00000000UL                      /**< Default value for SYNTH_EN                  */
#define _SYNTH_EN_MASK                                0x00000001UL                      /**< Mask for SYNTH_EN                           */
#define SYNTH_EN_EN                                   (0x1UL << 0)                      /**< Enable peripheral clock to this module      */
#define _SYNTH_EN_EN_SHIFT                            0                                 /**< Shift value for SYNTH_EN                    */
#define _SYNTH_EN_EN_MASK                             0x1UL                             /**< Bit mask for SYNTH_EN                       */
#define _SYNTH_EN_EN_DEFAULT                          0x00000000UL                      /**< Mode DEFAULT for SYNTH_EN                   */
#define SYNTH_EN_EN_DEFAULT                           (_SYNTH_EN_EN_DEFAULT << 0)       /**< Shifted mode DEFAULT for SYNTH_EN           */

/* Bit fields for SYNTH STATUS */
#define _SYNTH_STATUS_RESETVALUE                      0x00000000UL                          /**< Default value for SYNTH_STATUS              */
#define _SYNTH_STATUS_MASK                            0x04014707UL                          /**< Mask for SYNTH_STATUS                       */
#define SYNTH_STATUS_INLOCK                           (0x1UL << 0)                          /**< RF Synthesizer in Lock                      */
#define _SYNTH_STATUS_INLOCK_SHIFT                    0                                     /**< Shift value for SYNTH_INLOCK                */
#define _SYNTH_STATUS_INLOCK_MASK                     0x1UL                                 /**< Bit mask for SYNTH_INLOCK                   */
#define _SYNTH_STATUS_INLOCK_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for SYNTH_STATUS               */
#define SYNTH_STATUS_INLOCK_DEFAULT                   (_SYNTH_STATUS_INLOCK_DEFAULT << 0)   /**< Shifted mode DEFAULT for SYNTH_STATUS       */
#define SYNTH_STATUS_IFFREQEN                         (0x1UL << 1)                          /**< Synthesizer IF frequency enable status      */
#define _SYNTH_STATUS_IFFREQEN_SHIFT                  1                                     /**< Shift value for SYNTH_IFFREQEN              */
#define _SYNTH_STATUS_IFFREQEN_MASK                   0x2UL                                 /**< Bit mask for SYNTH_IFFREQEN                 */
#define _SYNTH_STATUS_IFFREQEN_DEFAULT                0x00000000UL                          /**< Mode DEFAULT for SYNTH_STATUS               */
#define SYNTH_STATUS_IFFREQEN_DEFAULT                 (_SYNTH_STATUS_IFFREQEN_DEFAULT << 1) /**< Shifted mode DEFAULT for SYNTH_STATUS       */

/* Bit fields for SYNTH CMD */
#define _SYNTH_CMD_RESETVALUE                         0x00000000UL                          /**< Default value for SYNTH_CMD                 */
#define _SYNTH_CMD_MASK                               0x0000061FUL                          /**< Mask for SYNTH_CMD                          */
#define SYNTH_CMD_SYNTHSTART                          (0x1UL << 0)                          /**< Starts the RF synthesizer                   */
#define _SYNTH_CMD_SYNTHSTART_SHIFT                   0                                     /**< Shift value for SYNTH_SYNTHSTART            */
#define _SYNTH_CMD_SYNTHSTART_MASK                    0x1UL                                 /**< Bit mask for SYNTH_SYNTHSTART               */
#define _SYNTH_CMD_SYNTHSTART_DEFAULT                 0x00000000UL                          /**< Mode DEFAULT for SYNTH_CMD                  */
#define SYNTH_CMD_SYNTHSTART_DEFAULT                  (_SYNTH_CMD_SYNTHSTART_DEFAULT << 0)  /**< Shifted mode DEFAULT for SYNTH_CMD          */
#define SYNTH_CMD_SYNTHSTOP                           (0x1UL << 1)                          /**< Stops the RF synthesizer                    */
#define _SYNTH_CMD_SYNTHSTOP_SHIFT                    1                                     /**< Shift value for SYNTH_SYNTHSTOP             */
#define _SYNTH_CMD_SYNTHSTOP_MASK                     0x2UL                                 /**< Bit mask for SYNTH_SYNTHSTOP                */
#define _SYNTH_CMD_SYNTHSTOP_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for SYNTH_CMD                  */
#define SYNTH_CMD_SYNTHSTOP_DEFAULT                   (_SYNTH_CMD_SYNTHSTOP_DEFAULT << 1)   /**< Shifted mode DEFAULT for SYNTH_CMD          */
#define SYNTH_CMD_ENABLEIF                            (0x1UL << 2)                          /**< Enable the synthesizer IF frequency         */
#define _SYNTH_CMD_ENABLEIF_SHIFT                     2                                     /**< Shift value for SYNTH_ENABLEIF              */
#define _SYNTH_CMD_ENABLEIF_MASK                      0x4UL                                 /**< Bit mask for SYNTH_ENABLEIF                 */
#define _SYNTH_CMD_ENABLEIF_DEFAULT                   0x00000000UL                          /**< Mode DEFAULT for SYNTH_CMD                  */
#define SYNTH_CMD_ENABLEIF_DEFAULT                    (_SYNTH_CMD_ENABLEIF_DEFAULT << 2)    /**< Shifted mode DEFAULT for SYNTH_CMD          */
#define SYNTH_CMD_DISABLEIF                           (0x1UL << 3)                          /**< Disable the synthesizer IF frequency        */
#define _SYNTH_CMD_DISABLEIF_SHIFT                    3                                     /**< Shift value for SYNTH_DISABLEIF             */
#define _SYNTH_CMD_DISABLEIF_MASK                     0x8UL                                 /**< Bit mask for SYNTH_DISABLEIF                */
#define _SYNTH_CMD_DISABLEIF_DEFAULT                  0x00000000UL                          /**< Mode DEFAULT for SYNTH_CMD                  */
#define SYNTH_CMD_DISABLEIF_DEFAULT                   (_SYNTH_CMD_DISABLEIF_DEFAULT << 3)   /**< Shifted mode DEFAULT for SYNTH_CMD          */
#define SYNTH_CMD_CAPCALSTART                         (0x1UL << 4)                          /**< Start VCO capacitor array calibration       */
#define _SYNTH_CMD_CAPCALSTART_SHIFT                  4                                     /**< Shift value for SYNTH_CAPCALSTART           */
#define _SYNTH_CMD_CAPCALSTART_MASK                   0x10UL                                /**< Bit mask for SYNTH_CAPCALSTART              */
#define _SYNTH_CMD_CAPCALSTART_DEFAULT                0x00000000UL                          /**< Mode DEFAULT for SYNTH_CMD                  */
#define SYNTH_CMD_CAPCALSTART_DEFAULT                 (_SYNTH_CMD_CAPCALSTART_DEFAULT << 4) /**< Shifted mode DEFAULT for SYNTH_CMD          */

/* Bit fields for SYNTH CTRL */
#define _SYNTH_CTRL_RESETVALUE                        0x00000003UL                                      /**< Default value for SYNTH_CTRL                */
#define _SYNTH_CTRL_MASK                              0xD8770007UL                                      /**< Mask for SYNTH_CTRL                         */
#define _SYNTH_CTRL_LOCKTHRESHOLD_SHIFT               0                                                 /**< Shift value for SYNTH_LOCKTHRESHOLD         */
#define _SYNTH_CTRL_LOCKTHRESHOLD_MASK                0x7UL                                             /**< Bit mask for SYNTH_LOCKTHRESHOLD            */
#define _SYNTH_CTRL_LOCKTHRESHOLD_DEFAULT             0x00000003UL                                      /**< Mode DEFAULT for SYNTH_CTRL                 */
#define SYNTH_CTRL_LOCKTHRESHOLD_DEFAULT              (_SYNTH_CTRL_LOCKTHRESHOLD_DEFAULT << 0)          /**< Shifted mode DEFAULT for SYNTH_CTRL         */
#define _SYNTH_CTRL_PRSMUX0_SHIFT                     16                                                /**< Shift value for SYNTH_PRSMUX0               */
#define _SYNTH_CTRL_PRSMUX0_MASK                      0x70000UL                                         /**< Bit mask for SYNTH_PRSMUX0                  */
#define _SYNTH_CTRL_PRSMUX0_DEFAULT                   0x00000000UL                                      /**< Mode DEFAULT for SYNTH_CTRL                 */
#define _SYNTH_CTRL_PRSMUX0_DISABLED                  0x00000000UL                                      /**< Mode DISABLED for SYNTH_CTRL                */
#define _SYNTH_CTRL_PRSMUX0_INLOCK                    0x00000001UL                                      /**< Mode INLOCK for SYNTH_CTRL                  */
#define _SYNTH_CTRL_PRSMUX0_LOCK_WINDOW               0x00000002UL                                      /**< Mode LOCK_WINDOW for SYNTH_CTRL             */
#define _SYNTH_CTRL_PRSMUX0_FPLL                      0x00000003UL                                      /**< Mode FPLL for SYNTH_CTRL                    */
#define _SYNTH_CTRL_PRSMUX0_VCCMP_HI                  0x00000004UL                                      /**< Mode VCCMP_HI for SYNTH_CTRL                */
#define _SYNTH_CTRL_PRSMUX0_VCO_AMPLITUDE_OK          0x00000005UL                                      /**< Mode VCO_AMPLITUDE_OK for SYNTH_CTRL        */
#define _SYNTH_CTRL_PRSMUX0_VCO_DET_OUT_D             0x00000006UL                                      /**< Mode VCO_DET_OUT_D for SYNTH_CTRL           */
#define SYNTH_CTRL_PRSMUX0_DEFAULT                    (_SYNTH_CTRL_PRSMUX0_DEFAULT << 16)               /**< Shifted mode DEFAULT for SYNTH_CTRL         */
#define SYNTH_CTRL_PRSMUX0_DISABLED                   (_SYNTH_CTRL_PRSMUX0_DISABLED << 16)              /**< Shifted mode DISABLED for SYNTH_CTRL        */
#define SYNTH_CTRL_PRSMUX0_INLOCK                     (_SYNTH_CTRL_PRSMUX0_INLOCK << 16)                /**< Shifted mode INLOCK for SYNTH_CTRL          */
#define SYNTH_CTRL_PRSMUX0_LOCK_WINDOW                (_SYNTH_CTRL_PRSMUX0_LOCK_WINDOW << 16)           /**< Shifted mode LOCK_WINDOW for SYNTH_CTRL     */
#define SYNTH_CTRL_PRSMUX0_FPLL                       (_SYNTH_CTRL_PRSMUX0_FPLL << 16)                  /**< Shifted mode FPLL for SYNTH_CTRL            */
#define SYNTH_CTRL_PRSMUX0_VCCMP_HI                   (_SYNTH_CTRL_PRSMUX0_VCCMP_HI << 16)              /**< Shifted mode VCCMP_HI for SYNTH_CTRL        */
#define SYNTH_CTRL_PRSMUX0_VCO_AMPLITUDE_OK           (_SYNTH_CTRL_PRSMUX0_VCO_AMPLITUDE_OK << 16)      /**< Shifted mode VCO_AMPLITUDE_OK for SYNTH_CTRL*/
#define SYNTH_CTRL_PRSMUX0_VCO_DET_OUT_D              (_SYNTH_CTRL_PRSMUX0_VCO_DET_OUT_D << 16)         /**< Shifted mode VCO_DET_OUT_D for SYNTH_CTRL   */
#define _SYNTH_CTRL_PRSMUX1_SHIFT                     20                                                /**< Shift value for SYNTH_PRSMUX1               */
#define _SYNTH_CTRL_PRSMUX1_MASK                      0x700000UL                                        /**< Bit mask for SYNTH_PRSMUX1                  */
#define _SYNTH_CTRL_PRSMUX1_DEFAULT                   0x00000000UL                                      /**< Mode DEFAULT for SYNTH_CTRL                 */
#define _SYNTH_CTRL_PRSMUX1_DISABLED                  0x00000000UL                                      /**< Mode DISABLED for SYNTH_CTRL                */
#define _SYNTH_CTRL_PRSMUX1_AUXINLOCK                 0x00000001UL                                      /**< Mode AUXINLOCK for SYNTH_CTRL               */
#define _SYNTH_CTRL_PRSMUX1_REF_IS_LEADING            0x00000002UL                                      /**< Mode REF_IS_LEADING for SYNTH_CTRL          */
#define _SYNTH_CTRL_PRSMUX1_FPLL                      0x00000003UL                                      /**< Mode FPLL for SYNTH_CTRL                    */
#define _SYNTH_CTRL_PRSMUX1_VCCMP_LOW                 0x00000004UL                                      /**< Mode VCCMP_LOW for SYNTH_CTRL               */
#define _SYNTH_CTRL_PRSMUX1_MMD_PRESCALER_RESET_N     0x00000005UL                                      /**< Mode MMD_PRESCALER_RESET_N for SYNTH_CTRL   */
#define _SYNTH_CTRL_PRSMUX1_CLK_SYNTH_DIV2            0x00000006UL                                      /**< Mode CLK_SYNTH_DIV2 for SYNTH_CTRL          */
#define SYNTH_CTRL_PRSMUX1_DEFAULT                    (_SYNTH_CTRL_PRSMUX1_DEFAULT << 20)               /**< Shifted mode DEFAULT for SYNTH_CTRL         */
#define SYNTH_CTRL_PRSMUX1_DISABLED                   (_SYNTH_CTRL_PRSMUX1_DISABLED << 20)              /**< Shifted mode DISABLED for SYNTH_CTRL        */
#define SYNTH_CTRL_PRSMUX1_AUXINLOCK                  (_SYNTH_CTRL_PRSMUX1_AUXINLOCK << 20)             /**< Shifted mode AUXINLOCK for SYNTH_CTRL       */
#define SYNTH_CTRL_PRSMUX1_REF_IS_LEADING             (_SYNTH_CTRL_PRSMUX1_REF_IS_LEADING << 20)        /**< Shifted mode REF_IS_LEADING for SYNTH_CTRL  */
#define SYNTH_CTRL_PRSMUX1_FPLL                       (_SYNTH_CTRL_PRSMUX1_FPLL << 20)                  /**< Shifted mode FPLL for SYNTH_CTRL            */
#define SYNTH_CTRL_PRSMUX1_VCCMP_LOW                  (_SYNTH_CTRL_PRSMUX1_VCCMP_LOW << 20)             /**< Shifted mode VCCMP_LOW for SYNTH_CTRL       */
#define SYNTH_CTRL_PRSMUX1_MMD_PRESCALER_RESET_N      (_SYNTH_CTRL_PRSMUX1_MMD_PRESCALER_RESET_N << 20) /**< Shifted mode MMD_PRESCALER_RESET_N for SYNTH_CTRL*/
#define SYNTH_CTRL_PRSMUX1_CLK_SYNTH_DIV2             (_SYNTH_CTRL_PRSMUX1_CLK_SYNTH_DIV2 << 20)        /**< Shifted mode CLK_SYNTH_DIV2 for SYNTH_CTRL  */
#define SYNTH_CTRL_MMDRSTNOVERRIDEEN                  (0x1UL << 30)                                     /**< Enable MMD reset override                   */
#define _SYNTH_CTRL_MMDRSTNOVERRIDEEN_SHIFT           30                                                /**< Shift value for SYNTH_MMDRSTNOVERRIDEEN     */
#define _SYNTH_CTRL_MMDRSTNOVERRIDEEN_MASK            0x40000000UL                                      /**< Bit mask for SYNTH_MMDRSTNOVERRIDEEN        */
#define _SYNTH_CTRL_MMDRSTNOVERRIDEEN_DEFAULT         0x00000000UL                                      /**< Mode DEFAULT for SYNTH_CTRL                 */
#define _SYNTH_CTRL_MMDRSTNOVERRIDEEN_DISABLE         0x00000000UL                                      /**< Mode DISABLE for SYNTH_CTRL                 */
#define _SYNTH_CTRL_MMDRSTNOVERRIDEEN_ENABLE          0x00000001UL                                      /**< Mode ENABLE for SYNTH_CTRL                  */
#define SYNTH_CTRL_MMDRSTNOVERRIDEEN_DEFAULT          (_SYNTH_CTRL_MMDRSTNOVERRIDEEN_DEFAULT << 30)     /**< Shifted mode DEFAULT for SYNTH_CTRL         */
#define SYNTH_CTRL_MMDRSTNOVERRIDEEN_DISABLE          (_SYNTH_CTRL_MMDRSTNOVERRIDEEN_DISABLE << 30)     /**< Shifted mode DISABLE for SYNTH_CTRL         */
#define SYNTH_CTRL_MMDRSTNOVERRIDEEN_ENABLE           (_SYNTH_CTRL_MMDRSTNOVERRIDEEN_ENABLE << 30)      /**< Shifted mode ENABLE for SYNTH_CTRL          */
#define SYNTH_CTRL_MMDMANRSTN                         (0x1UL << 31)                                     /**< Manual MMD reset                            */
#define _SYNTH_CTRL_MMDMANRSTN_SHIFT                  31                                                /**< Shift value for SYNTH_MMDMANRSTN            */
#define _SYNTH_CTRL_MMDMANRSTN_MASK                   0x80000000UL                                      /**< Bit mask for SYNTH_MMDMANRSTN               */
#define _SYNTH_CTRL_MMDMANRSTN_DEFAULT                0x00000000UL                                      /**< Mode DEFAULT for SYNTH_CTRL                 */
#define _SYNTH_CTRL_MMDMANRSTN_RESET                  0x00000000UL                                      /**< Mode RESET for SYNTH_CTRL                   */
#define _SYNTH_CTRL_MMDMANRSTN_NORESET                0x00000001UL                                      /**< Mode NORESET for SYNTH_CTRL                 */
#define SYNTH_CTRL_MMDMANRSTN_DEFAULT                 (_SYNTH_CTRL_MMDMANRSTN_DEFAULT << 31)            /**< Shifted mode DEFAULT for SYNTH_CTRL         */
#define SYNTH_CTRL_MMDMANRSTN_RESET                   (_SYNTH_CTRL_MMDMANRSTN_RESET << 31)              /**< Shifted mode RESET for SYNTH_CTRL           */
#define SYNTH_CTRL_MMDMANRSTN_NORESET                 (_SYNTH_CTRL_MMDMANRSTN_NORESET << 31)            /**< Shifted mode NORESET for SYNTH_CTRL         */

/* Bit fields for SYNTH VCDACCTRL */
#define _SYNTH_VCDACCTRL_RESETVALUE                   0x00000020UL                             /**< Default value for SYNTH_VCDACCTRL           */
#define _SYNTH_VCDACCTRL_MASK                         0x000001FFUL                             /**< Mask for SYNTH_VCDACCTRL                    */
#define _SYNTH_VCDACCTRL_VCDACVAL_SHIFT               0                                        /**< Shift value for SYNTH_VCDACVAL              */
#define _SYNTH_VCDACCTRL_VCDACVAL_MASK                0x3FUL                                   /**< Bit mask for SYNTH_VCDACVAL                 */
#define _SYNTH_VCDACCTRL_VCDACVAL_DEFAULT             0x00000020UL                             /**< Mode DEFAULT for SYNTH_VCDACCTRL            */
#define SYNTH_VCDACCTRL_VCDACVAL_DEFAULT              (_SYNTH_VCDACCTRL_VCDACVAL_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_VCDACEN                       (0x1UL << 6)                             /**< Enable VCDAC                                */
#define _SYNTH_VCDACCTRL_VCDACEN_SHIFT                6                                        /**< Shift value for SYNTH_VCDACEN               */
#define _SYNTH_VCDACCTRL_VCDACEN_MASK                 0x40UL                                   /**< Bit mask for SYNTH_VCDACEN                  */
#define _SYNTH_VCDACCTRL_VCDACEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for SYNTH_VCDACCTRL            */
#define _SYNTH_VCDACCTRL_VCDACEN_DISABLE              0x00000000UL                             /**< Mode DISABLE for SYNTH_VCDACCTRL            */
#define _SYNTH_VCDACCTRL_VCDACEN_ENABLE               0x00000001UL                             /**< Mode ENABLE for SYNTH_VCDACCTRL             */
#define SYNTH_VCDACCTRL_VCDACEN_DEFAULT               (_SYNTH_VCDACCTRL_VCDACEN_DEFAULT << 6)  /**< Shifted mode DEFAULT for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_VCDACEN_DISABLE               (_SYNTH_VCDACCTRL_VCDACEN_DISABLE << 6)  /**< Shifted mode DISABLE for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_VCDACEN_ENABLE                (_SYNTH_VCDACCTRL_VCDACEN_ENABLE << 6)   /**< Shifted mode ENABLE for SYNTH_VCDACCTRL     */
#define SYNTH_VCDACCTRL_LPFEN                         (0x1UL << 7)                             /**< LPF Enable Control                          */
#define _SYNTH_VCDACCTRL_LPFEN_SHIFT                  7                                        /**< Shift value for SYNTH_LPFEN                 */
#define _SYNTH_VCDACCTRL_LPFEN_MASK                   0x80UL                                   /**< Bit mask for SYNTH_LPFEN                    */
#define _SYNTH_VCDACCTRL_LPFEN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for SYNTH_VCDACCTRL            */
#define _SYNTH_VCDACCTRL_LPFEN_DISABLE                0x00000000UL                             /**< Mode DISABLE for SYNTH_VCDACCTRL            */
#define _SYNTH_VCDACCTRL_LPFEN_ENABLE                 0x00000001UL                             /**< Mode ENABLE for SYNTH_VCDACCTRL             */
#define SYNTH_VCDACCTRL_LPFEN_DEFAULT                 (_SYNTH_VCDACCTRL_LPFEN_DEFAULT << 7)    /**< Shifted mode DEFAULT for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_LPFEN_DISABLE                 (_SYNTH_VCDACCTRL_LPFEN_DISABLE << 7)    /**< Shifted mode DISABLE for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_LPFEN_ENABLE                  (_SYNTH_VCDACCTRL_LPFEN_ENABLE << 7)     /**< Shifted mode ENABLE for SYNTH_VCDACCTRL     */
#define SYNTH_VCDACCTRL_LPFQSEN                       (0x1UL << 8)                             /**< LPF Quickstart Control                      */
#define _SYNTH_VCDACCTRL_LPFQSEN_SHIFT                8                                        /**< Shift value for SYNTH_LPFQSEN               */
#define _SYNTH_VCDACCTRL_LPFQSEN_MASK                 0x100UL                                  /**< Bit mask for SYNTH_LPFQSEN                  */
#define _SYNTH_VCDACCTRL_LPFQSEN_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for SYNTH_VCDACCTRL            */
#define _SYNTH_VCDACCTRL_LPFQSEN_DISABLE              0x00000000UL                             /**< Mode DISABLE for SYNTH_VCDACCTRL            */
#define _SYNTH_VCDACCTRL_LPFQSEN_ENABLE               0x00000001UL                             /**< Mode ENABLE for SYNTH_VCDACCTRL             */
#define SYNTH_VCDACCTRL_LPFQSEN_DEFAULT               (_SYNTH_VCDACCTRL_LPFQSEN_DEFAULT << 8)  /**< Shifted mode DEFAULT for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_LPFQSEN_DISABLE               (_SYNTH_VCDACCTRL_LPFQSEN_DISABLE << 8)  /**< Shifted mode DISABLE for SYNTH_VCDACCTRL    */
#define SYNTH_VCDACCTRL_LPFQSEN_ENABLE                (_SYNTH_VCDACCTRL_LPFQSEN_ENABLE << 8)   /**< Shifted mode ENABLE for SYNTH_VCDACCTRL     */

/* Bit fields for SYNTH FREQ */
#define _SYNTH_FREQ_RESETVALUE                        0x00000000UL                      /**< Default value for SYNTH_FREQ                */
#define _SYNTH_FREQ_MASK                              0x0FFFFFFFUL                      /**< Mask for SYNTH_FREQ                         */
#define _SYNTH_FREQ_FREQ_SHIFT                        0                                 /**< Shift value for SYNTH_FREQ                  */
#define _SYNTH_FREQ_FREQ_MASK                         0xFFFFFFFUL                       /**< Bit mask for SYNTH_FREQ                     */
#define _SYNTH_FREQ_FREQ_DEFAULT                      0x00000000UL                      /**< Mode DEFAULT for SYNTH_FREQ                 */
#define SYNTH_FREQ_FREQ_DEFAULT                       (_SYNTH_FREQ_FREQ_DEFAULT << 0)   /**< Shifted mode DEFAULT for SYNTH_FREQ         */

/* Bit fields for SYNTH IFFREQ */
#define _SYNTH_IFFREQ_RESETVALUE                      0x00000000UL                         /**< Default value for SYNTH_IFFREQ              */
#define _SYNTH_IFFREQ_MASK                            0x001FFFFFUL                         /**< Mask for SYNTH_IFFREQ                       */
#define _SYNTH_IFFREQ_IFFREQ_SHIFT                    0                                    /**< Shift value for SYNTH_IFFREQ                */
#define _SYNTH_IFFREQ_IFFREQ_MASK                     0xFFFFFUL                            /**< Bit mask for SYNTH_IFFREQ                   */
#define _SYNTH_IFFREQ_IFFREQ_DEFAULT                  0x00000000UL                         /**< Mode DEFAULT for SYNTH_IFFREQ               */
#define SYNTH_IFFREQ_IFFREQ_DEFAULT                   (_SYNTH_IFFREQ_IFFREQ_DEFAULT << 0)  /**< Shifted mode DEFAULT for SYNTH_IFFREQ       */
#define SYNTH_IFFREQ_LOSIDE                           (0x1UL << 20)                        /**< Configure LO in receive                     */
#define _SYNTH_IFFREQ_LOSIDE_SHIFT                    20                                   /**< Shift value for SYNTH_LOSIDE                */
#define _SYNTH_IFFREQ_LOSIDE_MASK                     0x100000UL                           /**< Bit mask for SYNTH_LOSIDE                   */
#define _SYNTH_IFFREQ_LOSIDE_DEFAULT                  0x00000000UL                         /**< Mode DEFAULT for SYNTH_IFFREQ               */
#define _SYNTH_IFFREQ_LOSIDE_LOW                      0x00000000UL                         /**< Mode LOW for SYNTH_IFFREQ                   */
#define _SYNTH_IFFREQ_LOSIDE_HIGH                     0x00000001UL                         /**< Mode HIGH for SYNTH_IFFREQ                  */
#define SYNTH_IFFREQ_LOSIDE_DEFAULT                   (_SYNTH_IFFREQ_LOSIDE_DEFAULT << 20) /**< Shifted mode DEFAULT for SYNTH_IFFREQ       */
#define SYNTH_IFFREQ_LOSIDE_LOW                       (_SYNTH_IFFREQ_LOSIDE_LOW << 20)     /**< Shifted mode LOW for SYNTH_IFFREQ           */
#define SYNTH_IFFREQ_LOSIDE_HIGH                      (_SYNTH_IFFREQ_LOSIDE_HIGH << 20)    /**< Shifted mode HIGH for SYNTH_IFFREQ          */

/* Bit fields for SYNTH DIVCTRL */
#define _SYNTH_DIVCTRL_RESETVALUE                     0x00000001UL                                /**< Default value for SYNTH_DIVCTRL             */
#define _SYNTH_DIVCTRL_MASK                           0x000001FFUL                                /**< Mask for SYNTH_DIVCTRL                      */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_SHIFT            0                                           /**< Shift value for SYNTH_LODIVFREQCTRL         */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_MASK             0x1FFUL                                     /**< Bit mask for SYNTH_LODIVFREQCTRL            */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_DEFAULT          0x00000001UL                                /**< Mode DEFAULT for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV1           0x00000001UL                                /**< Mode LODIV1 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV2           0x00000002UL                                /**< Mode LODIV2 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV3           0x00000003UL                                /**< Mode LODIV3 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV4           0x00000004UL                                /**< Mode LODIV4 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV5           0x00000005UL                                /**< Mode LODIV5 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV7           0x00000007UL                                /**< Mode LODIV7 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV6           0x00000013UL                                /**< Mode LODIV6 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV8           0x00000014UL                                /**< Mode LODIV8 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV10          0x00000015UL                                /**< Mode LODIV10 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV14          0x00000017UL                                /**< Mode LODIV14 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV9           0x0000001BUL                                /**< Mode LODIV9 for SYNTH_DIVCTRL               */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV12          0x0000001CUL                                /**< Mode LODIV12 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV15          0x0000001DUL                                /**< Mode LODIV15 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV16          0x00000024UL                                /**< Mode LODIV16 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV20          0x00000025UL                                /**< Mode LODIV20 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV18          0x0000009BUL                                /**< Mode LODIV18 for SYNTH_DIVCTRL              */
#define _SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV24          0x0000009CUL                                /**< Mode LODIV24 for SYNTH_DIVCTRL              */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_DEFAULT           (_SYNTH_DIVCTRL_LODIVFREQCTRL_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV1            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV1 << 0)  /**< Shifted mode LODIV1 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV2            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV2 << 0)  /**< Shifted mode LODIV2 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV3            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV3 << 0)  /**< Shifted mode LODIV3 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV4            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV4 << 0)  /**< Shifted mode LODIV4 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV5            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV5 << 0)  /**< Shifted mode LODIV5 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV7            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV7 << 0)  /**< Shifted mode LODIV7 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV6            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV6 << 0)  /**< Shifted mode LODIV6 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV8            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV8 << 0)  /**< Shifted mode LODIV8 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV10           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV10 << 0) /**< Shifted mode LODIV10 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV14           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV14 << 0) /**< Shifted mode LODIV14 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV9            (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV9 << 0)  /**< Shifted mode LODIV9 for SYNTH_DIVCTRL       */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV12           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV12 << 0) /**< Shifted mode LODIV12 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV15           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV15 << 0) /**< Shifted mode LODIV15 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV16           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV16 << 0) /**< Shifted mode LODIV16 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV20           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV20 << 0) /**< Shifted mode LODIV20 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV18           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV18 << 0) /**< Shifted mode LODIV18 for SYNTH_DIVCTRL      */
#define SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV24           (_SYNTH_DIVCTRL_LODIVFREQCTRL_LODIV24 << 0) /**< Shifted mode LODIV24 for SYNTH_DIVCTRL      */

/* Bit fields for SYNTH CHCTRL */
#define _SYNTH_CHCTRL_RESETVALUE                      0x00000000UL                      /**< Default value for SYNTH_CHCTRL              */
#define _SYNTH_CHCTRL_MASK                            0x0000003FUL                      /**< Mask for SYNTH_CHCTRL                       */
#define _SYNTH_CHCTRL_CHNO_SHIFT                      0                                 /**< Shift value for SYNTH_CHNO                  */
#define _SYNTH_CHCTRL_CHNO_MASK                       0x3FUL                            /**< Bit mask for SYNTH_CHNO                     */
#define _SYNTH_CHCTRL_CHNO_DEFAULT                    0x00000000UL                      /**< Mode DEFAULT for SYNTH_CHCTRL               */
#define SYNTH_CHCTRL_CHNO_DEFAULT                     (_SYNTH_CHCTRL_CHNO_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_CHCTRL       */

/* Bit fields for SYNTH CHSP */
#define _SYNTH_CHSP_RESETVALUE                        0x00000000UL                      /**< Default value for SYNTH_CHSP                */
#define _SYNTH_CHSP_MASK                              0x0003FFFFUL                      /**< Mask for SYNTH_CHSP                         */
#define _SYNTH_CHSP_CHSP_SHIFT                        0                                 /**< Shift value for SYNTH_CHSP                  */
#define _SYNTH_CHSP_CHSP_MASK                         0x3FFFFUL                         /**< Bit mask for SYNTH_CHSP                     */
#define _SYNTH_CHSP_CHSP_DEFAULT                      0x00000000UL                      /**< Mode DEFAULT for SYNTH_CHSP                 */
#define SYNTH_CHSP_CHSP_DEFAULT                       (_SYNTH_CHSP_CHSP_DEFAULT << 0)   /**< Shifted mode DEFAULT for SYNTH_CHSP         */

/* Bit fields for SYNTH CALOFFSET */
#define _SYNTH_CALOFFSET_RESETVALUE                   0x00000000UL                              /**< Default value for SYNTH_CALOFFSET           */
#define _SYNTH_CALOFFSET_MASK                         0x00007FFFUL                              /**< Mask for SYNTH_CALOFFSET                    */
#define _SYNTH_CALOFFSET_CALOFFSET_SHIFT              0                                         /**< Shift value for SYNTH_CALOFFSET             */
#define _SYNTH_CALOFFSET_CALOFFSET_MASK               0x7FFFUL                                  /**< Bit mask for SYNTH_CALOFFSET                */
#define _SYNTH_CALOFFSET_CALOFFSET_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for SYNTH_CALOFFSET            */
#define SYNTH_CALOFFSET_CALOFFSET_DEFAULT             (_SYNTH_CALOFFSET_CALOFFSET_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_CALOFFSET    */

/* Bit fields for SYNTH VCOTUNING */
#define _SYNTH_VCOTUNING_RESETVALUE                   0x00008400UL                              /**< Default value for SYNTH_VCOTUNING           */
#define _SYNTH_VCOTUNING_MASK                         0x0000FFFFUL                              /**< Mask for SYNTH_VCOTUNING                    */
#define _SYNTH_VCOTUNING_VCOTUNING_SHIFT              0                                         /**< Shift value for SYNTH_VCOTUNING             */
#define _SYNTH_VCOTUNING_VCOTUNING_MASK               0x7FFUL                                   /**< Bit mask for SYNTH_VCOTUNING                */
#define _SYNTH_VCOTUNING_VCOTUNING_DEFAULT            0x00000400UL                              /**< Mode DEFAULT for SYNTH_VCOTUNING            */
#define SYNTH_VCOTUNING_VCOTUNING_DEFAULT             (_SYNTH_VCOTUNING_VCOTUNING_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_VCOTUNING    */
#define _SYNTH_VCOTUNING_VCAPSEL_SHIFT                11                                        /**< Shift value for SYNTH_VCAPSEL               */
#define _SYNTH_VCOTUNING_VCAPSEL_MASK                 0xF800UL                                  /**< Bit mask for SYNTH_VCAPSEL                  */
#define _SYNTH_VCOTUNING_VCAPSEL_DEFAULT              0x00000010UL                              /**< Mode DEFAULT for SYNTH_VCOTUNING            */
#define SYNTH_VCOTUNING_VCAPSEL_DEFAULT               (_SYNTH_VCOTUNING_VCAPSEL_DEFAULT << 11)  /**< Shifted mode DEFAULT for SYNTH_VCOTUNING    */

/* Bit fields for SYNTH VCOGAIN */
#define _SYNTH_VCOGAIN_RESETVALUE                     0x00000077UL                              /**< Default value for SYNTH_VCOGAIN             */
#define _SYNTH_VCOGAIN_MASK                           0x000000FFUL                              /**< Mask for SYNTH_VCOGAIN                      */
#define _SYNTH_VCOGAIN_VCOKVCOARSE_SHIFT              0                                         /**< Shift value for SYNTH_VCOKVCOARSE           */
#define _SYNTH_VCOGAIN_VCOKVCOARSE_MASK               0xFUL                                     /**< Bit mask for SYNTH_VCOKVCOARSE              */
#define _SYNTH_VCOGAIN_VCOKVCOARSE_DEFAULT            0x00000007UL                              /**< Mode DEFAULT for SYNTH_VCOGAIN              */
#define SYNTH_VCOGAIN_VCOKVCOARSE_DEFAULT             (_SYNTH_VCOGAIN_VCOKVCOARSE_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_VCOGAIN      */
#define _SYNTH_VCOGAIN_VCOKVFINE_SHIFT                4                                         /**< Shift value for SYNTH_VCOKVFINE             */
#define _SYNTH_VCOGAIN_VCOKVFINE_MASK                 0xF0UL                                    /**< Bit mask for SYNTH_VCOKVFINE                */
#define _SYNTH_VCOGAIN_VCOKVFINE_DEFAULT              0x00000007UL                              /**< Mode DEFAULT for SYNTH_VCOGAIN              */
#define SYNTH_VCOGAIN_VCOKVFINE_DEFAULT               (_SYNTH_VCOGAIN_VCOKVFINE_DEFAULT << 4)   /**< Shifted mode DEFAULT for SYNTH_VCOGAIN      */

/* Bit fields for SYNTH IF */
#define _SYNTH_IF_RESETVALUE                          0x00000000UL                        /**< Default value for SYNTH_IF                  */
#define _SYNTH_IF_MASK                                0x00000237UL                        /**< Mask for SYNTH_IF                           */
#define SYNTH_IF_LOCKED                               (0x1UL << 0)                        /**< Synthesizer locked Interrupt Flag           */
#define _SYNTH_IF_LOCKED_SHIFT                        0                                   /**< Shift value for SYNTH_LOCKED                */
#define _SYNTH_IF_LOCKED_MASK                         0x1UL                               /**< Bit mask for SYNTH_LOCKED                   */
#define _SYNTH_IF_LOCKED_DEFAULT                      0x00000000UL                        /**< Mode DEFAULT for SYNTH_IF                   */
#define SYNTH_IF_LOCKED_DEFAULT                       (_SYNTH_IF_LOCKED_DEFAULT << 0)     /**< Shifted mode DEFAULT for SYNTH_IF           */
#define SYNTH_IF_UNLOCKED                             (0x1UL << 1)                        /**< Synthesizer unlocked Interrupt Flag         */
#define _SYNTH_IF_UNLOCKED_SHIFT                      1                                   /**< Shift value for SYNTH_UNLOCKED              */
#define _SYNTH_IF_UNLOCKED_MASK                       0x2UL                               /**< Bit mask for SYNTH_UNLOCKED                 */
#define _SYNTH_IF_UNLOCKED_DEFAULT                    0x00000000UL                        /**< Mode DEFAULT for SYNTH_IF                   */
#define SYNTH_IF_UNLOCKED_DEFAULT                     (_SYNTH_IF_UNLOCKED_DEFAULT << 1)   /**< Shifted mode DEFAULT for SYNTH_IF           */
#define SYNTH_IF_CAPCALDONE                           (0x1UL << 2)                        /**< Capacitor calibration Interrupt Flag        */
#define _SYNTH_IF_CAPCALDONE_SHIFT                    2                                   /**< Shift value for SYNTH_CAPCALDONE            */
#define _SYNTH_IF_CAPCALDONE_MASK                     0x4UL                               /**< Bit mask for SYNTH_CAPCALDONE               */
#define _SYNTH_IF_CAPCALDONE_DEFAULT                  0x00000000UL                        /**< Mode DEFAULT for SYNTH_IF                   */
#define SYNTH_IF_CAPCALDONE_DEFAULT                   (_SYNTH_IF_CAPCALDONE_DEFAULT << 2) /**< Shifted mode DEFAULT for SYNTH_IF           */
#define SYNTH_IF_VCOHIGH                              (0x1UL << 4)                        /**< VCO high voltage Interrupt Flag             */
#define _SYNTH_IF_VCOHIGH_SHIFT                       4                                   /**< Shift value for SYNTH_VCOHIGH               */
#define _SYNTH_IF_VCOHIGH_MASK                        0x10UL                              /**< Bit mask for SYNTH_VCOHIGH                  */
#define _SYNTH_IF_VCOHIGH_DEFAULT                     0x00000000UL                        /**< Mode DEFAULT for SYNTH_IF                   */
#define SYNTH_IF_VCOHIGH_DEFAULT                      (_SYNTH_IF_VCOHIGH_DEFAULT << 4)    /**< Shifted mode DEFAULT for SYNTH_IF           */
#define SYNTH_IF_VCOLOW                               (0x1UL << 5)                        /**< VCO low voltage Interrupt Flag              */
#define _SYNTH_IF_VCOLOW_SHIFT                        5                                   /**< Shift value for SYNTH_VCOLOW                */
#define _SYNTH_IF_VCOLOW_MASK                         0x20UL                              /**< Bit mask for SYNTH_VCOLOW                   */
#define _SYNTH_IF_VCOLOW_DEFAULT                      0x00000000UL                        /**< Mode DEFAULT for SYNTH_IF                   */
#define SYNTH_IF_VCOLOW_DEFAULT                       (_SYNTH_IF_VCOLOW_DEFAULT << 5)     /**< Shifted mode DEFAULT for SYNTH_IF           */
#define SYNTH_IF_LOCNTDONE                            (0x1UL << 9)                        /**< LOCNT measurement done Interrupt Flag       */
#define _SYNTH_IF_LOCNTDONE_SHIFT                     9                                   /**< Shift value for SYNTH_LOCNTDONE             */
#define _SYNTH_IF_LOCNTDONE_MASK                      0x200UL                             /**< Bit mask for SYNTH_LOCNTDONE                */
#define _SYNTH_IF_LOCNTDONE_DEFAULT                   0x00000000UL                        /**< Mode DEFAULT for SYNTH_IF                   */
#define SYNTH_IF_LOCNTDONE_DEFAULT                    (_SYNTH_IF_LOCNTDONE_DEFAULT << 9)  /**< Shifted mode DEFAULT for SYNTH_IF           */

/* Bit fields for SYNTH IEN */
#define _SYNTH_IEN_RESETVALUE                         0x00000000UL                         /**< Default value for SYNTH_IEN                 */
#define _SYNTH_IEN_MASK                               0x00000237UL                         /**< Mask for SYNTH_IEN                          */
#define SYNTH_IEN_LOCKED                              (0x1UL << 0)                         /**< LOCKED Interrupt Enable                     */
#define _SYNTH_IEN_LOCKED_SHIFT                       0                                    /**< Shift value for SYNTH_LOCKED                */
#define _SYNTH_IEN_LOCKED_MASK                        0x1UL                                /**< Bit mask for SYNTH_LOCKED                   */
#define _SYNTH_IEN_LOCKED_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for SYNTH_IEN                  */
#define SYNTH_IEN_LOCKED_DEFAULT                      (_SYNTH_IEN_LOCKED_DEFAULT << 0)     /**< Shifted mode DEFAULT for SYNTH_IEN          */
#define SYNTH_IEN_UNLOCKED                            (0x1UL << 1)                         /**< UNLOCKED Interrupt Enable                   */
#define _SYNTH_IEN_UNLOCKED_SHIFT                     1                                    /**< Shift value for SYNTH_UNLOCKED              */
#define _SYNTH_IEN_UNLOCKED_MASK                      0x2UL                                /**< Bit mask for SYNTH_UNLOCKED                 */
#define _SYNTH_IEN_UNLOCKED_DEFAULT                   0x00000000UL                         /**< Mode DEFAULT for SYNTH_IEN                  */
#define SYNTH_IEN_UNLOCKED_DEFAULT                    (_SYNTH_IEN_UNLOCKED_DEFAULT << 1)   /**< Shifted mode DEFAULT for SYNTH_IEN          */
#define SYNTH_IEN_CAPCALDONE                          (0x1UL << 2)                         /**< CAPCALDONE Interrupt Enable                 */
#define _SYNTH_IEN_CAPCALDONE_SHIFT                   2                                    /**< Shift value for SYNTH_CAPCALDONE            */
#define _SYNTH_IEN_CAPCALDONE_MASK                    0x4UL                                /**< Bit mask for SYNTH_CAPCALDONE               */
#define _SYNTH_IEN_CAPCALDONE_DEFAULT                 0x00000000UL                         /**< Mode DEFAULT for SYNTH_IEN                  */
#define SYNTH_IEN_CAPCALDONE_DEFAULT                  (_SYNTH_IEN_CAPCALDONE_DEFAULT << 2) /**< Shifted mode DEFAULT for SYNTH_IEN          */
#define SYNTH_IEN_VCOHIGH                             (0x1UL << 4)                         /**< VCOHIGH Interrupt Enable                    */
#define _SYNTH_IEN_VCOHIGH_SHIFT                      4                                    /**< Shift value for SYNTH_VCOHIGH               */
#define _SYNTH_IEN_VCOHIGH_MASK                       0x10UL                               /**< Bit mask for SYNTH_VCOHIGH                  */
#define _SYNTH_IEN_VCOHIGH_DEFAULT                    0x00000000UL                         /**< Mode DEFAULT for SYNTH_IEN                  */
#define SYNTH_IEN_VCOHIGH_DEFAULT                     (_SYNTH_IEN_VCOHIGH_DEFAULT << 4)    /**< Shifted mode DEFAULT for SYNTH_IEN          */
#define SYNTH_IEN_VCOLOW                              (0x1UL << 5)                         /**< VCOLOW Interrupt Enable                     */
#define _SYNTH_IEN_VCOLOW_SHIFT                       5                                    /**< Shift value for SYNTH_VCOLOW                */
#define _SYNTH_IEN_VCOLOW_MASK                        0x20UL                               /**< Bit mask for SYNTH_VCOLOW                   */
#define _SYNTH_IEN_VCOLOW_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for SYNTH_IEN                  */
#define SYNTH_IEN_VCOLOW_DEFAULT                      (_SYNTH_IEN_VCOLOW_DEFAULT << 5)     /**< Shifted mode DEFAULT for SYNTH_IEN          */
#define SYNTH_IEN_LOCNTDONE                           (0x1UL << 9)                         /**< LOCNTDONE Interrupt Enable                  */
#define _SYNTH_IEN_LOCNTDONE_SHIFT                    9                                    /**< Shift value for SYNTH_LOCNTDONE             */
#define _SYNTH_IEN_LOCNTDONE_MASK                     0x200UL                              /**< Bit mask for SYNTH_LOCNTDONE                */
#define _SYNTH_IEN_LOCNTDONE_DEFAULT                  0x00000000UL                         /**< Mode DEFAULT for SYNTH_IEN                  */
#define SYNTH_IEN_LOCNTDONE_DEFAULT                   (_SYNTH_IEN_LOCNTDONE_DEFAULT << 9)  /**< Shifted mode DEFAULT for SYNTH_IEN          */

/* Bit fields for SYNTH LOCNTCTRL */
#define _SYNTH_LOCNTCTRL_RESETVALUE                   0x00000000UL                                    /**< Default value for SYNTH_LOCNTCTRL           */
#define _SYNTH_LOCNTCTRL_MASK                         0x000007FFUL                                    /**< Mask for SYNTH_LOCNTCTRL                    */
#define SYNTH_LOCNTCTRL_ENABLE                        (0x1UL << 0)                                    /**< Enable LO Counter                           */
#define _SYNTH_LOCNTCTRL_ENABLE_SHIFT                 0                                               /**< Shift value for SYNTH_ENABLE                */
#define _SYNTH_LOCNTCTRL_ENABLE_MASK                  0x1UL                                           /**< Bit mask for SYNTH_ENABLE                   */
#define _SYNTH_LOCNTCTRL_ENABLE_DEFAULT               0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_ENABLE_OFF                   0x00000000UL                                    /**< Mode OFF for SYNTH_LOCNTCTRL                */
#define _SYNTH_LOCNTCTRL_ENABLE_ON                    0x00000001UL                                    /**< Mode ON for SYNTH_LOCNTCTRL                 */
#define SYNTH_LOCNTCTRL_ENABLE_DEFAULT                (_SYNTH_LOCNTCTRL_ENABLE_DEFAULT << 0)          /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_ENABLE_OFF                    (_SYNTH_LOCNTCTRL_ENABLE_OFF << 0)              /**< Shifted mode OFF for SYNTH_LOCNTCTRL        */
#define SYNTH_LOCNTCTRL_ENABLE_ON                     (_SYNTH_LOCNTCTRL_ENABLE_ON << 0)               /**< Shifted mode ON for SYNTH_LOCNTCTRL         */
#define SYNTH_LOCNTCTRL_CLEAR                         (0x1UL << 1)                                    /**< Clear LO Counter                            */
#define _SYNTH_LOCNTCTRL_CLEAR_SHIFT                  1                                               /**< Shift value for SYNTH_CLEAR                 */
#define _SYNTH_LOCNTCTRL_CLEAR_MASK                   0x2UL                                           /**< Bit mask for SYNTH_CLEAR                    */
#define _SYNTH_LOCNTCTRL_CLEAR_DEFAULT                0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_CLEAR_OFF                    0x00000000UL                                    /**< Mode OFF for SYNTH_LOCNTCTRL                */
#define _SYNTH_LOCNTCTRL_CLEAR_ON                     0x00000001UL                                    /**< Mode ON for SYNTH_LOCNTCTRL                 */
#define SYNTH_LOCNTCTRL_CLEAR_DEFAULT                 (_SYNTH_LOCNTCTRL_CLEAR_DEFAULT << 1)           /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_CLEAR_OFF                     (_SYNTH_LOCNTCTRL_CLEAR_OFF << 1)               /**< Shifted mode OFF for SYNTH_LOCNTCTRL        */
#define SYNTH_LOCNTCTRL_CLEAR_ON                      (_SYNTH_LOCNTCTRL_CLEAR_ON << 1)                /**< Shifted mode ON for SYNTH_LOCNTCTRL         */
#define SYNTH_LOCNTCTRL_RUN                           (0x1UL << 2)                                    /**< Run LO Counter                              */
#define _SYNTH_LOCNTCTRL_RUN_SHIFT                    2                                               /**< Shift value for SYNTH_RUN                   */
#define _SYNTH_LOCNTCTRL_RUN_MASK                     0x4UL                                           /**< Bit mask for SYNTH_RUN                      */
#define _SYNTH_LOCNTCTRL_RUN_DEFAULT                  0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_RUN_OFF                      0x00000000UL                                    /**< Mode OFF for SYNTH_LOCNTCTRL                */
#define _SYNTH_LOCNTCTRL_RUN_ON                       0x00000001UL                                    /**< Mode ON for SYNTH_LOCNTCTRL                 */
#define SYNTH_LOCNTCTRL_RUN_DEFAULT                   (_SYNTH_LOCNTCTRL_RUN_DEFAULT << 2)             /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_RUN_OFF                       (_SYNTH_LOCNTCTRL_RUN_OFF << 2)                 /**< Shifted mode OFF for SYNTH_LOCNTCTRL        */
#define SYNTH_LOCNTCTRL_RUN_ON                        (_SYNTH_LOCNTCTRL_RUN_ON << 2)                  /**< Shifted mode ON for SYNTH_LOCNTCTRL         */
#define SYNTH_LOCNTCTRL_READ                          (0x1UL << 3)                                    /**< Read LO Counter                             */
#define _SYNTH_LOCNTCTRL_READ_SHIFT                   3                                               /**< Shift value for SYNTH_READ                  */
#define _SYNTH_LOCNTCTRL_READ_MASK                    0x8UL                                           /**< Bit mask for SYNTH_READ                     */
#define _SYNTH_LOCNTCTRL_READ_DEFAULT                 0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_READ_OFF                     0x00000000UL                                    /**< Mode OFF for SYNTH_LOCNTCTRL                */
#define _SYNTH_LOCNTCTRL_READ_ON                      0x00000001UL                                    /**< Mode ON for SYNTH_LOCNTCTRL                 */
#define SYNTH_LOCNTCTRL_READ_DEFAULT                  (_SYNTH_LOCNTCTRL_READ_DEFAULT << 3)            /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_READ_OFF                      (_SYNTH_LOCNTCTRL_READ_OFF << 3)                /**< Shifted mode OFF for SYNTH_LOCNTCTRL        */
#define SYNTH_LOCNTCTRL_READ_ON                       (_SYNTH_LOCNTCTRL_READ_ON << 3)                 /**< Shifted mode ON for SYNTH_LOCNTCTRL         */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_SHIFT               4                                               /**< Shift value for SYNTH_NUMCYCLE              */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_MASK                0xF0UL                                          /**< Bit mask for SYNTH_NUMCYCLE                 */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_2               0x00000000UL                                    /**< Mode CNT_2 for SYNTH_LOCNTCTRL              */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_4               0x00000001UL                                    /**< Mode CNT_4 for SYNTH_LOCNTCTRL              */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_8               0x00000002UL                                    /**< Mode CNT_8 for SYNTH_LOCNTCTRL              */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_16              0x00000003UL                                    /**< Mode CNT_16 for SYNTH_LOCNTCTRL             */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_32              0x00000004UL                                    /**< Mode CNT_32 for SYNTH_LOCNTCTRL             */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_64              0x00000005UL                                    /**< Mode CNT_64 for SYNTH_LOCNTCTRL             */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_128             0x00000006UL                                    /**< Mode CNT_128 for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_256             0x00000007UL                                    /**< Mode CNT_256 for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_512             0x00000008UL                                    /**< Mode CNT_512 for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_1024            0x00000009UL                                    /**< Mode CNT_1024 for SYNTH_LOCNTCTRL           */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_2048            0x0000000AUL                                    /**< Mode CNT_2048 for SYNTH_LOCNTCTRL           */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_4096            0x0000000BUL                                    /**< Mode CNT_4096 for SYNTH_LOCNTCTRL           */
#define _SYNTH_LOCNTCTRL_NUMCYCLE_CNT_8192            0x0000000CUL                                    /**< Mode CNT_8192 for SYNTH_LOCNTCTRL           */
#define SYNTH_LOCNTCTRL_NUMCYCLE_DEFAULT              (_SYNTH_LOCNTCTRL_NUMCYCLE_DEFAULT << 4)        /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_2                (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_2 << 4)          /**< Shifted mode CNT_2 for SYNTH_LOCNTCTRL      */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_4                (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_4 << 4)          /**< Shifted mode CNT_4 for SYNTH_LOCNTCTRL      */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_8                (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_8 << 4)          /**< Shifted mode CNT_8 for SYNTH_LOCNTCTRL      */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_16               (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_16 << 4)         /**< Shifted mode CNT_16 for SYNTH_LOCNTCTRL     */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_32               (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_32 << 4)         /**< Shifted mode CNT_32 for SYNTH_LOCNTCTRL     */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_64               (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_64 << 4)         /**< Shifted mode CNT_64 for SYNTH_LOCNTCTRL     */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_128              (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_128 << 4)        /**< Shifted mode CNT_128 for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_256              (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_256 << 4)        /**< Shifted mode CNT_256 for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_512              (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_512 << 4)        /**< Shifted mode CNT_512 for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_1024             (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_1024 << 4)       /**< Shifted mode CNT_1024 for SYNTH_LOCNTCTRL   */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_2048             (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_2048 << 4)       /**< Shifted mode CNT_2048 for SYNTH_LOCNTCTRL   */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_4096             (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_4096 << 4)       /**< Shifted mode CNT_4096 for SYNTH_LOCNTCTRL   */
#define SYNTH_LOCNTCTRL_NUMCYCLE_CNT_8192             (_SYNTH_LOCNTCTRL_NUMCYCLE_CNT_8192 << 4)       /**< Shifted mode CNT_8192 for SYNTH_LOCNTCTRL   */
#define SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN               (0x1UL << 8)                                    /**< Enable manual override of CLEAR and RUN     */
#define _SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_SHIFT        8                                               /**< Shift value for SYNTH_LOCNTOVERRIDEEN       */
#define _SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_MASK         0x100UL                                         /**< Bit mask for SYNTH_LOCNTOVERRIDEEN          */
#define _SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_DEFAULT      0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_DISABLE      0x00000000UL                                    /**< Mode DISABLE for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_ENABLE       0x00000001UL                                    /**< Mode ENABLE for SYNTH_LOCNTCTRL             */
#define SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_DEFAULT       (_SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_DEFAULT << 8) /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_DISABLE       (_SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_DISABLE << 8) /**< Shifted mode DISABLE for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_ENABLE        (_SYNTH_LOCNTCTRL_LOCNTOVERRIDEEN_ENABLE << 8)  /**< Shifted mode ENABLE for SYNTH_LOCNTCTRL     */
#define SYNTH_LOCNTCTRL_LOCNTMANCLEAR                 (0x1UL << 9)                                    /**< Manual Control of LO counter CLEAR          */
#define _SYNTH_LOCNTCTRL_LOCNTMANCLEAR_SHIFT          9                                               /**< Shift value for SYNTH_LOCNTMANCLEAR         */
#define _SYNTH_LOCNTCTRL_LOCNTMANCLEAR_MASK           0x200UL                                         /**< Bit mask for SYNTH_LOCNTMANCLEAR            */
#define _SYNTH_LOCNTCTRL_LOCNTMANCLEAR_DEFAULT        0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_LOCNTMANCLEAR_NOCLEAR        0x00000000UL                                    /**< Mode NOCLEAR for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_LOCNTMANCLEAR_CLEAR          0x00000001UL                                    /**< Mode CLEAR for SYNTH_LOCNTCTRL              */
#define SYNTH_LOCNTCTRL_LOCNTMANCLEAR_DEFAULT         (_SYNTH_LOCNTCTRL_LOCNTMANCLEAR_DEFAULT << 9)   /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_LOCNTMANCLEAR_NOCLEAR         (_SYNTH_LOCNTCTRL_LOCNTMANCLEAR_NOCLEAR << 9)   /**< Shifted mode NOCLEAR for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_LOCNTMANCLEAR_CLEAR           (_SYNTH_LOCNTCTRL_LOCNTMANCLEAR_CLEAR << 9)     /**< Shifted mode CLEAR for SYNTH_LOCNTCTRL      */
#define SYNTH_LOCNTCTRL_LOCNTMANRUN                   (0x1UL << 10)                                   /**< Manual Control of the LO counter RUN        */
#define _SYNTH_LOCNTCTRL_LOCNTMANRUN_SHIFT            10                                              /**< Shift value for SYNTH_LOCNTMANRUN           */
#define _SYNTH_LOCNTCTRL_LOCNTMANRUN_MASK             0x400UL                                         /**< Bit mask for SYNTH_LOCNTMANRUN              */
#define _SYNTH_LOCNTCTRL_LOCNTMANRUN_DEFAULT          0x00000000UL                                    /**< Mode DEFAULT for SYNTH_LOCNTCTRL            */
#define _SYNTH_LOCNTCTRL_LOCNTMANRUN_NORUN            0x00000000UL                                    /**< Mode NORUN for SYNTH_LOCNTCTRL              */
#define _SYNTH_LOCNTCTRL_LOCNTMANRUN_RUN              0x00000001UL                                    /**< Mode RUN for SYNTH_LOCNTCTRL                */
#define SYNTH_LOCNTCTRL_LOCNTMANRUN_DEFAULT           (_SYNTH_LOCNTCTRL_LOCNTMANRUN_DEFAULT << 10)    /**< Shifted mode DEFAULT for SYNTH_LOCNTCTRL    */
#define SYNTH_LOCNTCTRL_LOCNTMANRUN_NORUN             (_SYNTH_LOCNTCTRL_LOCNTMANRUN_NORUN << 10)      /**< Shifted mode NORUN for SYNTH_LOCNTCTRL      */
#define SYNTH_LOCNTCTRL_LOCNTMANRUN_RUN               (_SYNTH_LOCNTCTRL_LOCNTMANRUN_RUN << 10)        /**< Shifted mode RUN for SYNTH_LOCNTCTRL        */

/* Bit fields for SYNTH LOCNTSTATUS */
#define _SYNTH_LOCNTSTATUS_RESETVALUE                 0x00000000UL                              /**< Default value for SYNTH_LOCNTSTATUS         */
#define _SYNTH_LOCNTSTATUS_MASK                       0x000FFFFFUL                              /**< Mask for SYNTH_LOCNTSTATUS                  */
#define _SYNTH_LOCNTSTATUS_LOCOUNT_SHIFT              0                                         /**< Shift value for SYNTH_LOCOUNT               */
#define _SYNTH_LOCNTSTATUS_LOCOUNT_MASK               0x7FFFFUL                                 /**< Bit mask for SYNTH_LOCOUNT                  */
#define _SYNTH_LOCNTSTATUS_LOCOUNT_DEFAULT            0x00000000UL                              /**< Mode DEFAULT for SYNTH_LOCNTSTATUS          */
#define SYNTH_LOCNTSTATUS_LOCOUNT_DEFAULT             (_SYNTH_LOCNTSTATUS_LOCOUNT_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_LOCNTSTATUS  */
#define SYNTH_LOCNTSTATUS_BUSY                        (0x1UL << 19)                             /**< LO Counter is Busy                          */
#define _SYNTH_LOCNTSTATUS_BUSY_SHIFT                 19                                        /**< Shift value for SYNTH_BUSY                  */
#define _SYNTH_LOCNTSTATUS_BUSY_MASK                  0x80000UL                                 /**< Bit mask for SYNTH_BUSY                     */
#define _SYNTH_LOCNTSTATUS_BUSY_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for SYNTH_LOCNTSTATUS          */
#define SYNTH_LOCNTSTATUS_BUSY_DEFAULT                (_SYNTH_LOCNTSTATUS_BUSY_DEFAULT << 19)   /**< Shifted mode DEFAULT for SYNTH_LOCNTSTATUS  */

/* Bit fields for SYNTH LOCNTTARGET */
#define _SYNTH_LOCNTTARGET_RESETVALUE                 0x00000000UL                             /**< Default value for SYNTH_LOCNTTARGET         */
#define _SYNTH_LOCNTTARGET_MASK                       0x0007FFFFUL                             /**< Mask for SYNTH_LOCNTTARGET                  */
#define _SYNTH_LOCNTTARGET_TARGET_SHIFT               0                                        /**< Shift value for SYNTH_TARGET                */
#define _SYNTH_LOCNTTARGET_TARGET_MASK                0x7FFFFUL                                /**< Bit mask for SYNTH_TARGET                   */
#define _SYNTH_LOCNTTARGET_TARGET_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for SYNTH_LOCNTTARGET          */
#define SYNTH_LOCNTTARGET_TARGET_DEFAULT              (_SYNTH_LOCNTTARGET_TARGET_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_LOCNTTARGET  */

/* Bit fields for SYNTH MMDDENOMINIT */
#define _SYNTH_MMDDENOMINIT_RESETVALUE                0x00000000UL                                   /**< Default value for SYNTH_MMDDENOMINIT        */
#define _SYNTH_MMDDENOMINIT_MASK                      0x07FFFFFFUL                                   /**< Mask for SYNTH_MMDDENOMINIT                 */
#define _SYNTH_MMDDENOMINIT_DENOMINIT0_SHIFT          0                                              /**< Shift value for SYNTH_DENOMINIT0            */
#define _SYNTH_MMDDENOMINIT_DENOMINIT0_MASK           0x1FFUL                                        /**< Bit mask for SYNTH_DENOMINIT0               */
#define _SYNTH_MMDDENOMINIT_DENOMINIT0_DEFAULT        0x00000000UL                                   /**< Mode DEFAULT for SYNTH_MMDDENOMINIT         */
#define SYNTH_MMDDENOMINIT_DENOMINIT0_DEFAULT         (_SYNTH_MMDDENOMINIT_DENOMINIT0_DEFAULT << 0)  /**< Shifted mode DEFAULT for SYNTH_MMDDENOMINIT */
#define _SYNTH_MMDDENOMINIT_DENOMINIT1_SHIFT          9                                              /**< Shift value for SYNTH_DENOMINIT1            */
#define _SYNTH_MMDDENOMINIT_DENOMINIT1_MASK           0x3FE00UL                                      /**< Bit mask for SYNTH_DENOMINIT1               */
#define _SYNTH_MMDDENOMINIT_DENOMINIT1_DEFAULT        0x00000000UL                                   /**< Mode DEFAULT for SYNTH_MMDDENOMINIT         */
#define SYNTH_MMDDENOMINIT_DENOMINIT1_DEFAULT         (_SYNTH_MMDDENOMINIT_DENOMINIT1_DEFAULT << 9)  /**< Shifted mode DEFAULT for SYNTH_MMDDENOMINIT */
#define _SYNTH_MMDDENOMINIT_DENOMINIT2_SHIFT          18                                             /**< Shift value for SYNTH_DENOMINIT2            */
#define _SYNTH_MMDDENOMINIT_DENOMINIT2_MASK           0x7FC0000UL                                    /**< Bit mask for SYNTH_DENOMINIT2               */
#define _SYNTH_MMDDENOMINIT_DENOMINIT2_DEFAULT        0x00000000UL                                   /**< Mode DEFAULT for SYNTH_MMDDENOMINIT         */
#define SYNTH_MMDDENOMINIT_DENOMINIT2_DEFAULT         (_SYNTH_MMDDENOMINIT_DENOMINIT2_DEFAULT << 18) /**< Shifted mode DEFAULT for SYNTH_MMDDENOMINIT */

/* Bit fields for SYNTH CHPDACINIT */
#define _SYNTH_CHPDACINIT_RESETVALUE                  0x00000000UL                             /**< Default value for SYNTH_CHPDACINIT          */
#define _SYNTH_CHPDACINIT_MASK                        0x00000FFFUL                             /**< Mask for SYNTH_CHPDACINIT                   */
#define _SYNTH_CHPDACINIT_DACINIT_SHIFT               0                                        /**< Shift value for SYNTH_DACINIT               */
#define _SYNTH_CHPDACINIT_DACINIT_MASK                0xFFFUL                                  /**< Bit mask for SYNTH_DACINIT                  */
#define _SYNTH_CHPDACINIT_DACINIT_DEFAULT             0x00000000UL                             /**< Mode DEFAULT for SYNTH_CHPDACINIT           */
#define SYNTH_CHPDACINIT_DACINIT_DEFAULT              (_SYNTH_CHPDACINIT_DACINIT_DEFAULT << 0) /**< Shifted mode DEFAULT for SYNTH_CHPDACINIT   */

/* Bit fields for SYNTH LPFCTRL1CAL */
#define _SYNTH_LPFCTRL1CAL_RESETVALUE                 0x00000000UL                                 /**< Default value for SYNTH_LPFCTRL1CAL         */
#define _SYNTH_LPFCTRL1CAL_MASK                       0x0003FFFFUL                                 /**< Mask for SYNTH_LPFCTRL1CAL                  */
#define _SYNTH_LPFCTRL1CAL_OP1BWCAL_SHIFT             0                                            /**< Shift value for SYNTH_OP1BWCAL              */
#define _SYNTH_LPFCTRL1CAL_OP1BWCAL_MASK              0xFUL                                        /**< Bit mask for SYNTH_OP1BWCAL                 */
#define _SYNTH_LPFCTRL1CAL_OP1BWCAL_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for SYNTH_LPFCTRL1CAL          */
#define SYNTH_LPFCTRL1CAL_OP1BWCAL_DEFAULT            (_SYNTH_LPFCTRL1CAL_OP1BWCAL_DEFAULT << 0)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1CAL  */
#define _SYNTH_LPFCTRL1CAL_OP1COMPCAL_SHIFT           4                                            /**< Shift value for SYNTH_OP1COMPCAL            */
#define _SYNTH_LPFCTRL1CAL_OP1COMPCAL_MASK            0xF0UL                                       /**< Bit mask for SYNTH_OP1COMPCAL               */
#define _SYNTH_LPFCTRL1CAL_OP1COMPCAL_DEFAULT         0x00000000UL                                 /**< Mode DEFAULT for SYNTH_LPFCTRL1CAL          */
#define SYNTH_LPFCTRL1CAL_OP1COMPCAL_DEFAULT          (_SYNTH_LPFCTRL1CAL_OP1COMPCAL_DEFAULT << 4) /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1CAL  */
#define _SYNTH_LPFCTRL1CAL_RFBVALCAL_SHIFT            8                                            /**< Shift value for SYNTH_RFBVALCAL             */
#define _SYNTH_LPFCTRL1CAL_RFBVALCAL_MASK             0x700UL                                      /**< Bit mask for SYNTH_RFBVALCAL                */
#define _SYNTH_LPFCTRL1CAL_RFBVALCAL_DEFAULT          0x00000000UL                                 /**< Mode DEFAULT for SYNTH_LPFCTRL1CAL          */
#define SYNTH_LPFCTRL1CAL_RFBVALCAL_DEFAULT           (_SYNTH_LPFCTRL1CAL_RFBVALCAL_DEFAULT << 8)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1CAL  */
#define _SYNTH_LPFCTRL1CAL_RPVALCAL_SHIFT             11                                           /**< Shift value for SYNTH_RPVALCAL              */
#define _SYNTH_LPFCTRL1CAL_RPVALCAL_MASK              0x3800UL                                     /**< Bit mask for SYNTH_RPVALCAL                 */
#define _SYNTH_LPFCTRL1CAL_RPVALCAL_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for SYNTH_LPFCTRL1CAL          */
#define SYNTH_LPFCTRL1CAL_RPVALCAL_DEFAULT            (_SYNTH_LPFCTRL1CAL_RPVALCAL_DEFAULT << 11)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1CAL  */
#define _SYNTH_LPFCTRL1CAL_RZVALCAL_SHIFT             14                                           /**< Shift value for SYNTH_RZVALCAL              */
#define _SYNTH_LPFCTRL1CAL_RZVALCAL_MASK              0x3C000UL                                    /**< Bit mask for SYNTH_RZVALCAL                 */
#define _SYNTH_LPFCTRL1CAL_RZVALCAL_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for SYNTH_LPFCTRL1CAL          */
#define SYNTH_LPFCTRL1CAL_RZVALCAL_DEFAULT            (_SYNTH_LPFCTRL1CAL_RZVALCAL_DEFAULT << 14)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1CAL  */

/* Bit fields for SYNTH LPFCTRL1RX */
#define _SYNTH_LPFCTRL1RX_RESETVALUE                  0x00000000UL                               /**< Default value for SYNTH_LPFCTRL1RX          */
#define _SYNTH_LPFCTRL1RX_MASK                        0x0003FFFFUL                               /**< Mask for SYNTH_LPFCTRL1RX                   */
#define _SYNTH_LPFCTRL1RX_OP1BWRX_SHIFT               0                                          /**< Shift value for SYNTH_OP1BWRX               */
#define _SYNTH_LPFCTRL1RX_OP1BWRX_MASK                0xFUL                                      /**< Bit mask for SYNTH_OP1BWRX                  */
#define _SYNTH_LPFCTRL1RX_OP1BWRX_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1RX           */
#define SYNTH_LPFCTRL1RX_OP1BWRX_DEFAULT              (_SYNTH_LPFCTRL1RX_OP1BWRX_DEFAULT << 0)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1RX   */
#define _SYNTH_LPFCTRL1RX_OP1COMPRX_SHIFT             4                                          /**< Shift value for SYNTH_OP1COMPRX             */
#define _SYNTH_LPFCTRL1RX_OP1COMPRX_MASK              0xF0UL                                     /**< Bit mask for SYNTH_OP1COMPRX                */
#define _SYNTH_LPFCTRL1RX_OP1COMPRX_DEFAULT           0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1RX           */
#define SYNTH_LPFCTRL1RX_OP1COMPRX_DEFAULT            (_SYNTH_LPFCTRL1RX_OP1COMPRX_DEFAULT << 4) /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1RX   */
#define _SYNTH_LPFCTRL1RX_RFBVALRX_SHIFT              8                                          /**< Shift value for SYNTH_RFBVALRX              */
#define _SYNTH_LPFCTRL1RX_RFBVALRX_MASK               0x700UL                                    /**< Bit mask for SYNTH_RFBVALRX                 */
#define _SYNTH_LPFCTRL1RX_RFBVALRX_DEFAULT            0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1RX           */
#define SYNTH_LPFCTRL1RX_RFBVALRX_DEFAULT             (_SYNTH_LPFCTRL1RX_RFBVALRX_DEFAULT << 8)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1RX   */
#define _SYNTH_LPFCTRL1RX_RPVALRX_SHIFT               11                                         /**< Shift value for SYNTH_RPVALRX               */
#define _SYNTH_LPFCTRL1RX_RPVALRX_MASK                0x3800UL                                   /**< Bit mask for SYNTH_RPVALRX                  */
#define _SYNTH_LPFCTRL1RX_RPVALRX_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1RX           */
#define SYNTH_LPFCTRL1RX_RPVALRX_DEFAULT              (_SYNTH_LPFCTRL1RX_RPVALRX_DEFAULT << 11)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1RX   */
#define _SYNTH_LPFCTRL1RX_RZVALRX_SHIFT               14                                         /**< Shift value for SYNTH_RZVALRX               */
#define _SYNTH_LPFCTRL1RX_RZVALRX_MASK                0x3C000UL                                  /**< Bit mask for SYNTH_RZVALRX                  */
#define _SYNTH_LPFCTRL1RX_RZVALRX_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1RX           */
#define SYNTH_LPFCTRL1RX_RZVALRX_DEFAULT              (_SYNTH_LPFCTRL1RX_RZVALRX_DEFAULT << 14)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1RX   */

/* Bit fields for SYNTH LPFCTRL1TX */
#define _SYNTH_LPFCTRL1TX_RESETVALUE                  0x00000000UL                               /**< Default value for SYNTH_LPFCTRL1TX          */
#define _SYNTH_LPFCTRL1TX_MASK                        0x0003FFFFUL                               /**< Mask for SYNTH_LPFCTRL1TX                   */
#define _SYNTH_LPFCTRL1TX_OP1BWTX_SHIFT               0                                          /**< Shift value for SYNTH_OP1BWTX               */
#define _SYNTH_LPFCTRL1TX_OP1BWTX_MASK                0xFUL                                      /**< Bit mask for SYNTH_OP1BWTX                  */
#define _SYNTH_LPFCTRL1TX_OP1BWTX_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1TX           */
#define SYNTH_LPFCTRL1TX_OP1BWTX_DEFAULT              (_SYNTH_LPFCTRL1TX_OP1BWTX_DEFAULT << 0)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1TX   */
#define _SYNTH_LPFCTRL1TX_OP1COMPTX_SHIFT             4                                          /**< Shift value for SYNTH_OP1COMPTX             */
#define _SYNTH_LPFCTRL1TX_OP1COMPTX_MASK              0xF0UL                                     /**< Bit mask for SYNTH_OP1COMPTX                */
#define _SYNTH_LPFCTRL1TX_OP1COMPTX_DEFAULT           0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1TX           */
#define SYNTH_LPFCTRL1TX_OP1COMPTX_DEFAULT            (_SYNTH_LPFCTRL1TX_OP1COMPTX_DEFAULT << 4) /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1TX   */
#define _SYNTH_LPFCTRL1TX_RFBVALTX_SHIFT              8                                          /**< Shift value for SYNTH_RFBVALTX              */
#define _SYNTH_LPFCTRL1TX_RFBVALTX_MASK               0x700UL                                    /**< Bit mask for SYNTH_RFBVALTX                 */
#define _SYNTH_LPFCTRL1TX_RFBVALTX_DEFAULT            0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1TX           */
#define SYNTH_LPFCTRL1TX_RFBVALTX_DEFAULT             (_SYNTH_LPFCTRL1TX_RFBVALTX_DEFAULT << 8)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1TX   */
#define _SYNTH_LPFCTRL1TX_RPVALTX_SHIFT               11                                         /**< Shift value for SYNTH_RPVALTX               */
#define _SYNTH_LPFCTRL1TX_RPVALTX_MASK                0x3800UL                                   /**< Bit mask for SYNTH_RPVALTX                  */
#define _SYNTH_LPFCTRL1TX_RPVALTX_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1TX           */
#define SYNTH_LPFCTRL1TX_RPVALTX_DEFAULT              (_SYNTH_LPFCTRL1TX_RPVALTX_DEFAULT << 11)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1TX   */
#define _SYNTH_LPFCTRL1TX_RZVALTX_SHIFT               14                                         /**< Shift value for SYNTH_RZVALTX               */
#define _SYNTH_LPFCTRL1TX_RZVALTX_MASK                0x3C000UL                                  /**< Bit mask for SYNTH_RZVALTX                  */
#define _SYNTH_LPFCTRL1TX_RZVALTX_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for SYNTH_LPFCTRL1TX           */
#define SYNTH_LPFCTRL1TX_RZVALTX_DEFAULT              (_SYNTH_LPFCTRL1TX_RZVALTX_DEFAULT << 14)  /**< Shifted mode DEFAULT for SYNTH_LPFCTRL1TX   */

/* Bit fields for SYNTH LPFCTRL2RX */
#define _SYNTH_LPFCTRL2RX_RESETVALUE                  0x00000000UL                                  /**< Default value for SYNTH_LPFCTRL2RX          */
#define _SYNTH_LPFCTRL2RX_MASK                        0x1FFFFFFFUL                                  /**< Mask for SYNTH_LPFCTRL2RX                   */
#define SYNTH_LPFCTRL2RX_LPFSWENRX                    (0x1UL << 0)                                  /**< LPF Switching Enable in RX Mode             */
#define _SYNTH_LPFCTRL2RX_LPFSWENRX_SHIFT             0                                             /**< Shift value for SYNTH_LPFSWENRX             */
#define _SYNTH_LPFCTRL2RX_LPFSWENRX_MASK              0x1UL                                         /**< Bit mask for SYNTH_LPFSWENRX                */
#define _SYNTH_LPFCTRL2RX_LPFSWENRX_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_LPFSWENRX_DISABLE           0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_LPFSWENRX_ENABLE            0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2RX            */
#define SYNTH_LPFCTRL2RX_LPFSWENRX_DEFAULT            (_SYNTH_LPFCTRL2RX_LPFSWENRX_DEFAULT << 0)    /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_LPFSWENRX_DISABLE            (_SYNTH_LPFCTRL2RX_LPFSWENRX_DISABLE << 0)    /**< Shifted mode DISABLE for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_LPFSWENRX_ENABLE             (_SYNTH_LPFCTRL2RX_LPFSWENRX_ENABLE << 0)     /**< Shifted mode ENABLE for SYNTH_LPFCTRL2RX    */
#define _SYNTH_LPFCTRL2RX_LPFINCAPRX_SHIFT            1                                             /**< Shift value for SYNTH_LPFINCAPRX            */
#define _SYNTH_LPFCTRL2RX_LPFINCAPRX_MASK             0x6UL                                         /**< Bit mask for SYNTH_LPFINCAPRX               */
#define _SYNTH_LPFCTRL2RX_LPFINCAPRX_DEFAULT          0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define SYNTH_LPFCTRL2RX_LPFINCAPRX_DEFAULT           (_SYNTH_LPFCTRL2RX_LPFINCAPRX_DEFAULT << 1)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_LPFGNDSWENRX                 (0x1UL << 3)                                  /**< LPF Gnd Switch Enable in RX Mode            */
#define _SYNTH_LPFCTRL2RX_LPFGNDSWENRX_SHIFT          3                                             /**< Shift value for SYNTH_LPFGNDSWENRX          */
#define _SYNTH_LPFCTRL2RX_LPFGNDSWENRX_MASK           0x8UL                                         /**< Bit mask for SYNTH_LPFGNDSWENRX             */
#define _SYNTH_LPFCTRL2RX_LPFGNDSWENRX_DEFAULT        0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_LPFGNDSWENRX_DISABLE        0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_LPFGNDSWENRX_ENABLE         0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2RX            */
#define SYNTH_LPFCTRL2RX_LPFGNDSWENRX_DEFAULT         (_SYNTH_LPFCTRL2RX_LPFGNDSWENRX_DEFAULT << 3) /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_LPFGNDSWENRX_DISABLE         (_SYNTH_LPFCTRL2RX_LPFGNDSWENRX_DISABLE << 3) /**< Shifted mode DISABLE for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_LPFGNDSWENRX_ENABLE          (_SYNTH_LPFCTRL2RX_LPFGNDSWENRX_ENABLE << 3)  /**< Shifted mode ENABLE for SYNTH_LPFCTRL2RX    */
#define _SYNTH_LPFCTRL2RX_CALCRX_SHIFT                4                                             /**< Shift value for SYNTH_CALCRX                */
#define _SYNTH_LPFCTRL2RX_CALCRX_MASK                 0x1F0UL                                       /**< Bit mask for SYNTH_CALCRX                   */
#define _SYNTH_LPFCTRL2RX_CALCRX_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define SYNTH_LPFCTRL2RX_CALCRX_DEFAULT               (_SYNTH_LPFCTRL2RX_CALCRX_DEFAULT << 4)       /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CASELRX                      (0x1UL << 9)                                  /**< LPF Ca Select in RX Mode                    */
#define _SYNTH_LPFCTRL2RX_CASELRX_SHIFT               9                                             /**< Shift value for SYNTH_CASELRX               */
#define _SYNTH_LPFCTRL2RX_CASELRX_MASK                0x200UL                                       /**< Bit mask for SYNTH_CASELRX                  */
#define _SYNTH_LPFCTRL2RX_CASELRX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_CASELRX_DISABLE             0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_CASELRX_ENABLE              0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2RX            */
#define SYNTH_LPFCTRL2RX_CASELRX_DEFAULT              (_SYNTH_LPFCTRL2RX_CASELRX_DEFAULT << 9)      /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CASELRX_DISABLE              (_SYNTH_LPFCTRL2RX_CASELRX_DISABLE << 9)      /**< Shifted mode DISABLE for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CASELRX_ENABLE               (_SYNTH_LPFCTRL2RX_CASELRX_ENABLE << 9)       /**< Shifted mode ENABLE for SYNTH_LPFCTRL2RX    */
#define _SYNTH_LPFCTRL2RX_CAVALRX_SHIFT               10                                            /**< Shift value for SYNTH_CAVALRX               */
#define _SYNTH_LPFCTRL2RX_CAVALRX_MASK                0x7C00UL                                      /**< Bit mask for SYNTH_CAVALRX                  */
#define _SYNTH_LPFCTRL2RX_CAVALRX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define SYNTH_LPFCTRL2RX_CAVALRX_DEFAULT              (_SYNTH_LPFCTRL2RX_CAVALRX_DEFAULT << 10)     /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CFBSELRX                     (0x1UL << 15)                                 /**< LPF Cfb Select in RX Mode                   */
#define _SYNTH_LPFCTRL2RX_CFBSELRX_SHIFT              15                                            /**< Shift value for SYNTH_CFBSELRX              */
#define _SYNTH_LPFCTRL2RX_CFBSELRX_MASK               0x8000UL                                      /**< Bit mask for SYNTH_CFBSELRX                 */
#define _SYNTH_LPFCTRL2RX_CFBSELRX_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_CFBSELRX_DISABLE            0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_CFBSELRX_ENABLE             0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2RX            */
#define SYNTH_LPFCTRL2RX_CFBSELRX_DEFAULT             (_SYNTH_LPFCTRL2RX_CFBSELRX_DEFAULT << 15)    /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CFBSELRX_DISABLE             (_SYNTH_LPFCTRL2RX_CFBSELRX_DISABLE << 15)    /**< Shifted mode DISABLE for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CFBSELRX_ENABLE              (_SYNTH_LPFCTRL2RX_CFBSELRX_ENABLE << 15)     /**< Shifted mode ENABLE for SYNTH_LPFCTRL2RX    */
#define SYNTH_LPFCTRL2RX_CZSELRX                      (0x1UL << 16)                                 /**< LPF Cz Select in RX Mode                    */
#define _SYNTH_LPFCTRL2RX_CZSELRX_SHIFT               16                                            /**< Shift value for SYNTH_CZSELRX               */
#define _SYNTH_LPFCTRL2RX_CZSELRX_MASK                0x10000UL                                     /**< Bit mask for SYNTH_CZSELRX                  */
#define _SYNTH_LPFCTRL2RX_CZSELRX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_CZSELRX_DISABLE             0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_CZSELRX_ENABLE              0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2RX            */
#define SYNTH_LPFCTRL2RX_CZSELRX_DEFAULT              (_SYNTH_LPFCTRL2RX_CZSELRX_DEFAULT << 16)     /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CZSELRX_DISABLE              (_SYNTH_LPFCTRL2RX_CZSELRX_DISABLE << 16)     /**< Shifted mode DISABLE for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_CZSELRX_ENABLE               (_SYNTH_LPFCTRL2RX_CZSELRX_ENABLE << 16)      /**< Shifted mode ENABLE for SYNTH_LPFCTRL2RX    */
#define _SYNTH_LPFCTRL2RX_CZVALRX_SHIFT               17                                            /**< Shift value for SYNTH_CZVALRX               */
#define _SYNTH_LPFCTRL2RX_CZVALRX_MASK                0x1FE0000UL                                   /**< Bit mask for SYNTH_CZVALRX                  */
#define _SYNTH_LPFCTRL2RX_CZVALRX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define SYNTH_LPFCTRL2RX_CZVALRX_DEFAULT              (_SYNTH_LPFCTRL2RX_CZVALRX_DEFAULT << 17)     /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_MODESELRX                    (0x1UL << 25)                                 /**< LPF Filter Mode Select in RX Mode           */
#define _SYNTH_LPFCTRL2RX_MODESELRX_SHIFT             25                                            /**< Shift value for SYNTH_MODESELRX             */
#define _SYNTH_LPFCTRL2RX_MODESELRX_MASK              0x2000000UL                                   /**< Bit mask for SYNTH_MODESELRX                */
#define _SYNTH_LPFCTRL2RX_MODESELRX_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define _SYNTH_LPFCTRL2RX_MODESELRX_ONEOP             0x00000000UL                                  /**< Mode ONEOP for SYNTH_LPFCTRL2RX             */
#define _SYNTH_LPFCTRL2RX_MODESELRX_TWOOP             0x00000001UL                                  /**< Mode TWOOP for SYNTH_LPFCTRL2RX             */
#define SYNTH_LPFCTRL2RX_MODESELRX_DEFAULT            (_SYNTH_LPFCTRL2RX_MODESELRX_DEFAULT << 25)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */
#define SYNTH_LPFCTRL2RX_MODESELRX_ONEOP              (_SYNTH_LPFCTRL2RX_MODESELRX_ONEOP << 25)     /**< Shifted mode ONEOP for SYNTH_LPFCTRL2RX     */
#define SYNTH_LPFCTRL2RX_MODESELRX_TWOOP              (_SYNTH_LPFCTRL2RX_MODESELRX_TWOOP << 25)     /**< Shifted mode TWOOP for SYNTH_LPFCTRL2RX     */
#define _SYNTH_LPFCTRL2RX_VCMLVLRX_SHIFT              26                                            /**< Shift value for SYNTH_VCMLVLRX              */
#define _SYNTH_LPFCTRL2RX_VCMLVLRX_MASK               0x1C000000UL                                  /**< Bit mask for SYNTH_VCMLVLRX                 */
#define _SYNTH_LPFCTRL2RX_VCMLVLRX_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2RX           */
#define SYNTH_LPFCTRL2RX_VCMLVLRX_DEFAULT             (_SYNTH_LPFCTRL2RX_VCMLVLRX_DEFAULT << 26)    /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2RX   */

/* Bit fields for SYNTH LPFCTRL2TX */
#define _SYNTH_LPFCTRL2TX_RESETVALUE                  0x00000000UL                                  /**< Default value for SYNTH_LPFCTRL2TX          */
#define _SYNTH_LPFCTRL2TX_MASK                        0x1FFFFFFFUL                                  /**< Mask for SYNTH_LPFCTRL2TX                   */
#define SYNTH_LPFCTRL2TX_LPFSWENTX                    (0x1UL << 0)                                  /**< LPF Switching Enable in TX Mode             */
#define _SYNTH_LPFCTRL2TX_LPFSWENTX_SHIFT             0                                             /**< Shift value for SYNTH_LPFSWENTX             */
#define _SYNTH_LPFCTRL2TX_LPFSWENTX_MASK              0x1UL                                         /**< Bit mask for SYNTH_LPFSWENTX                */
#define _SYNTH_LPFCTRL2TX_LPFSWENTX_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_LPFSWENTX_DISABLE           0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_LPFSWENTX_ENABLE            0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2TX            */
#define SYNTH_LPFCTRL2TX_LPFSWENTX_DEFAULT            (_SYNTH_LPFCTRL2TX_LPFSWENTX_DEFAULT << 0)    /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_LPFSWENTX_DISABLE            (_SYNTH_LPFCTRL2TX_LPFSWENTX_DISABLE << 0)    /**< Shifted mode DISABLE for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_LPFSWENTX_ENABLE             (_SYNTH_LPFCTRL2TX_LPFSWENTX_ENABLE << 0)     /**< Shifted mode ENABLE for SYNTH_LPFCTRL2TX    */
#define _SYNTH_LPFCTRL2TX_LPFINCAPTX_SHIFT            1                                             /**< Shift value for SYNTH_LPFINCAPTX            */
#define _SYNTH_LPFCTRL2TX_LPFINCAPTX_MASK             0x6UL                                         /**< Bit mask for SYNTH_LPFINCAPTX               */
#define _SYNTH_LPFCTRL2TX_LPFINCAPTX_DEFAULT          0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define SYNTH_LPFCTRL2TX_LPFINCAPTX_DEFAULT           (_SYNTH_LPFCTRL2TX_LPFINCAPTX_DEFAULT << 1)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_LPFGNDSWENTX                 (0x1UL << 3)                                  /**< LPF Gnd Switch Enable in TX Mode            */
#define _SYNTH_LPFCTRL2TX_LPFGNDSWENTX_SHIFT          3                                             /**< Shift value for SYNTH_LPFGNDSWENTX          */
#define _SYNTH_LPFCTRL2TX_LPFGNDSWENTX_MASK           0x8UL                                         /**< Bit mask for SYNTH_LPFGNDSWENTX             */
#define _SYNTH_LPFCTRL2TX_LPFGNDSWENTX_DEFAULT        0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_LPFGNDSWENTX_DISABLE        0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_LPFGNDSWENTX_ENABLE         0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2TX            */
#define SYNTH_LPFCTRL2TX_LPFGNDSWENTX_DEFAULT         (_SYNTH_LPFCTRL2TX_LPFGNDSWENTX_DEFAULT << 3) /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_LPFGNDSWENTX_DISABLE         (_SYNTH_LPFCTRL2TX_LPFGNDSWENTX_DISABLE << 3) /**< Shifted mode DISABLE for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_LPFGNDSWENTX_ENABLE          (_SYNTH_LPFCTRL2TX_LPFGNDSWENTX_ENABLE << 3)  /**< Shifted mode ENABLE for SYNTH_LPFCTRL2TX    */
#define _SYNTH_LPFCTRL2TX_CALCTX_SHIFT                4                                             /**< Shift value for SYNTH_CALCTX                */
#define _SYNTH_LPFCTRL2TX_CALCTX_MASK                 0x1F0UL                                       /**< Bit mask for SYNTH_CALCTX                   */
#define _SYNTH_LPFCTRL2TX_CALCTX_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define SYNTH_LPFCTRL2TX_CALCTX_DEFAULT               (_SYNTH_LPFCTRL2TX_CALCTX_DEFAULT << 4)       /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CASELTX                      (0x1UL << 9)                                  /**< LPF Ca Select in TX Mode                    */
#define _SYNTH_LPFCTRL2TX_CASELTX_SHIFT               9                                             /**< Shift value for SYNTH_CASELTX               */
#define _SYNTH_LPFCTRL2TX_CASELTX_MASK                0x200UL                                       /**< Bit mask for SYNTH_CASELTX                  */
#define _SYNTH_LPFCTRL2TX_CASELTX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_CASELTX_DISABLE             0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_CASELTX_ENABLE              0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2TX            */
#define SYNTH_LPFCTRL2TX_CASELTX_DEFAULT              (_SYNTH_LPFCTRL2TX_CASELTX_DEFAULT << 9)      /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CASELTX_DISABLE              (_SYNTH_LPFCTRL2TX_CASELTX_DISABLE << 9)      /**< Shifted mode DISABLE for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CASELTX_ENABLE               (_SYNTH_LPFCTRL2TX_CASELTX_ENABLE << 9)       /**< Shifted mode ENABLE for SYNTH_LPFCTRL2TX    */
#define _SYNTH_LPFCTRL2TX_CAVALTX_SHIFT               10                                            /**< Shift value for SYNTH_CAVALTX               */
#define _SYNTH_LPFCTRL2TX_CAVALTX_MASK                0x7C00UL                                      /**< Bit mask for SYNTH_CAVALTX                  */
#define _SYNTH_LPFCTRL2TX_CAVALTX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define SYNTH_LPFCTRL2TX_CAVALTX_DEFAULT              (_SYNTH_LPFCTRL2TX_CAVALTX_DEFAULT << 10)     /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CFBSELTX                     (0x1UL << 15)                                 /**< LPF Cfb Select in TX Mode                   */
#define _SYNTH_LPFCTRL2TX_CFBSELTX_SHIFT              15                                            /**< Shift value for SYNTH_CFBSELTX              */
#define _SYNTH_LPFCTRL2TX_CFBSELTX_MASK               0x8000UL                                      /**< Bit mask for SYNTH_CFBSELTX                 */
#define _SYNTH_LPFCTRL2TX_CFBSELTX_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_CFBSELTX_DISABLE            0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_CFBSELTX_ENABLE             0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2TX            */
#define SYNTH_LPFCTRL2TX_CFBSELTX_DEFAULT             (_SYNTH_LPFCTRL2TX_CFBSELTX_DEFAULT << 15)    /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CFBSELTX_DISABLE             (_SYNTH_LPFCTRL2TX_CFBSELTX_DISABLE << 15)    /**< Shifted mode DISABLE for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CFBSELTX_ENABLE              (_SYNTH_LPFCTRL2TX_CFBSELTX_ENABLE << 15)     /**< Shifted mode ENABLE for SYNTH_LPFCTRL2TX    */
#define SYNTH_LPFCTRL2TX_CZSELTX                      (0x1UL << 16)                                 /**< LPF Cz Select in TX Mode                    */
#define _SYNTH_LPFCTRL2TX_CZSELTX_SHIFT               16                                            /**< Shift value for SYNTH_CZSELTX               */
#define _SYNTH_LPFCTRL2TX_CZSELTX_MASK                0x10000UL                                     /**< Bit mask for SYNTH_CZSELTX                  */
#define _SYNTH_LPFCTRL2TX_CZSELTX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_CZSELTX_DISABLE             0x00000000UL                                  /**< Mode DISABLE for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_CZSELTX_ENABLE              0x00000001UL                                  /**< Mode ENABLE for SYNTH_LPFCTRL2TX            */
#define SYNTH_LPFCTRL2TX_CZSELTX_DEFAULT              (_SYNTH_LPFCTRL2TX_CZSELTX_DEFAULT << 16)     /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CZSELTX_DISABLE              (_SYNTH_LPFCTRL2TX_CZSELTX_DISABLE << 16)     /**< Shifted mode DISABLE for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_CZSELTX_ENABLE               (_SYNTH_LPFCTRL2TX_CZSELTX_ENABLE << 16)      /**< Shifted mode ENABLE for SYNTH_LPFCTRL2TX    */
#define _SYNTH_LPFCTRL2TX_CZVALTX_SHIFT               17                                            /**< Shift value for SYNTH_CZVALTX               */
#define _SYNTH_LPFCTRL2TX_CZVALTX_MASK                0x1FE0000UL                                   /**< Bit mask for SYNTH_CZVALTX                  */
#define _SYNTH_LPFCTRL2TX_CZVALTX_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define SYNTH_LPFCTRL2TX_CZVALTX_DEFAULT              (_SYNTH_LPFCTRL2TX_CZVALTX_DEFAULT << 17)     /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_MODESELTX                    (0x1UL << 25)                                 /**< LPF Filter Mode Select in TX Mode           */
#define _SYNTH_LPFCTRL2TX_MODESELTX_SHIFT             25                                            /**< Shift value for SYNTH_MODESELTX             */
#define _SYNTH_LPFCTRL2TX_MODESELTX_MASK              0x2000000UL                                   /**< Bit mask for SYNTH_MODESELTX                */
#define _SYNTH_LPFCTRL2TX_MODESELTX_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define _SYNTH_LPFCTRL2TX_MODESELTX_ONEOP             0x00000000UL                                  /**< Mode ONEOP for SYNTH_LPFCTRL2TX             */
#define _SYNTH_LPFCTRL2TX_MODESELTX_TWOOP             0x00000001UL                                  /**< Mode TWOOP for SYNTH_LPFCTRL2TX             */
#define SYNTH_LPFCTRL2TX_MODESELTX_DEFAULT            (_SYNTH_LPFCTRL2TX_MODESELTX_DEFAULT << 25)   /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */
#define SYNTH_LPFCTRL2TX_MODESELTX_ONEOP              (_SYNTH_LPFCTRL2TX_MODESELTX_ONEOP << 25)     /**< Shifted mode ONEOP for SYNTH_LPFCTRL2TX     */
#define SYNTH_LPFCTRL2TX_MODESELTX_TWOOP              (_SYNTH_LPFCTRL2TX_MODESELTX_TWOOP << 25)     /**< Shifted mode TWOOP for SYNTH_LPFCTRL2TX     */
#define _SYNTH_LPFCTRL2TX_VCMLVLTX_SHIFT              26                                            /**< Shift value for SYNTH_VCMLVLTX              */
#define _SYNTH_LPFCTRL2TX_VCMLVLTX_MASK               0x1C000000UL                                  /**< Bit mask for SYNTH_VCMLVLTX                 */
#define _SYNTH_LPFCTRL2TX_VCMLVLTX_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for SYNTH_LPFCTRL2TX           */
#define SYNTH_LPFCTRL2TX_VCMLVLTX_DEFAULT             (_SYNTH_LPFCTRL2TX_VCMLVLTX_DEFAULT << 26)    /**< Shifted mode DEFAULT for SYNTH_LPFCTRL2TX   */

/* Bit fields for SYNTH DSMCTRLRX */
#define _SYNTH_DSMCTRLRX_RESETVALUE                   0x00000013UL                                      /**< Default value for SYNTH_DSMCTRLRX           */
#define _SYNTH_DSMCTRLRX_MASK                         0x070003FFUL                                      /**< Mask for SYNTH_DSMCTRLRX                    */
#define SYNTH_DSMCTRLRX_DITHERDSMINPUTRX              (0x1UL << 0)                                      /**< Dithering of DSM input for RX mode          */
#define _SYNTH_DSMCTRLRX_DITHERDSMINPUTRX_SHIFT       0                                                 /**< Shift value for SYNTH_DITHERDSMINPUTRX      */
#define _SYNTH_DSMCTRLRX_DITHERDSMINPUTRX_MASK        0x1UL                                             /**< Bit mask for SYNTH_DITHERDSMINPUTRX         */
#define _SYNTH_DSMCTRLRX_DITHERDSMINPUTRX_DEFAULT     0x00000001UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define SYNTH_DSMCTRLRX_DITHERDSMINPUTRX_DEFAULT      (_SYNTH_DSMCTRLRX_DITHERDSMINPUTRX_DEFAULT << 0)  /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define _SYNTH_DSMCTRLRX_DITHERDSMOUTPUTRX_SHIFT      1                                                 /**< Shift value for SYNTH_DITHERDSMOUTPUTRX     */
#define _SYNTH_DSMCTRLRX_DITHERDSMOUTPUTRX_MASK       0xEUL                                             /**< Bit mask for SYNTH_DITHERDSMOUTPUTRX        */
#define _SYNTH_DSMCTRLRX_DITHERDSMOUTPUTRX_DEFAULT    0x00000001UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define SYNTH_DSMCTRLRX_DITHERDSMOUTPUTRX_DEFAULT     (_SYNTH_DSMCTRLRX_DITHERDSMOUTPUTRX_DEFAULT << 1) /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define _SYNTH_DSMCTRLRX_DITHERDACRX_SHIFT            4                                                 /**< Shift value for SYNTH_DITHERDACRX           */
#define _SYNTH_DSMCTRLRX_DITHERDACRX_MASK             0xF0UL                                            /**< Bit mask for SYNTH_DITHERDACRX              */
#define _SYNTH_DSMCTRLRX_DITHERDACRX_DEFAULT          0x00000001UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define SYNTH_DSMCTRLRX_DITHERDACRX_DEFAULT           (_SYNTH_DSMCTRLRX_DITHERDACRX_DEFAULT << 4)       /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_DSMMODERX                     (0x1UL << 8)                                      /**< Delta-sigma topology for RX mode            */
#define _SYNTH_DSMCTRLRX_DSMMODERX_SHIFT              8                                                 /**< Shift value for SYNTH_DSMMODERX             */
#define _SYNTH_DSMCTRLRX_DSMMODERX_MASK               0x100UL                                           /**< Bit mask for SYNTH_DSMMODERX                */
#define _SYNTH_DSMCTRLRX_DSMMODERX_DEFAULT            0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define _SYNTH_DSMCTRLRX_DSMMODERX_FEEDFORWARD        0x00000000UL                                      /**< Mode FEEDFORWARD for SYNTH_DSMCTRLRX        */
#define _SYNTH_DSMCTRLRX_DSMMODERX_MASH               0x00000001UL                                      /**< Mode MASH for SYNTH_DSMCTRLRX               */
#define SYNTH_DSMCTRLRX_DSMMODERX_DEFAULT             (_SYNTH_DSMCTRLRX_DSMMODERX_DEFAULT << 8)         /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_DSMMODERX_FEEDFORWARD         (_SYNTH_DSMCTRLRX_DSMMODERX_FEEDFORWARD << 8)     /**< Shifted mode FEEDFORWARD for SYNTH_DSMCTRLRX*/
#define SYNTH_DSMCTRLRX_DSMMODERX_MASH                (_SYNTH_DSMCTRLRX_DSMMODERX_MASH << 8)            /**< Shifted mode MASH for SYNTH_DSMCTRLRX       */
#define SYNTH_DSMCTRLRX_LSBFORCERX                    (0x1UL << 9)                                      /**< Delta-sigma input force LSB for RX mode     */
#define _SYNTH_DSMCTRLRX_LSBFORCERX_SHIFT             9                                                 /**< Shift value for SYNTH_LSBFORCERX            */
#define _SYNTH_DSMCTRLRX_LSBFORCERX_MASK              0x200UL                                           /**< Bit mask for SYNTH_LSBFORCERX               */
#define _SYNTH_DSMCTRLRX_LSBFORCERX_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define SYNTH_DSMCTRLRX_LSBFORCERX_DEFAULT            (_SYNTH_DSMCTRLRX_LSBFORCERX_DEFAULT << 9)        /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_DEMMODERX                     (0x1UL << 24)                                     /**< DEM Mode for RX mode                        */
#define _SYNTH_DSMCTRLRX_DEMMODERX_SHIFT              24                                                /**< Shift value for SYNTH_DEMMODERX             */
#define _SYNTH_DSMCTRLRX_DEMMODERX_MASK               0x1000000UL                                       /**< Bit mask for SYNTH_DEMMODERX                */
#define _SYNTH_DSMCTRLRX_DEMMODERX_DEFAULT            0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define _SYNTH_DSMCTRLRX_DEMMODERX_DISABLED           0x00000000UL                                      /**< Mode DISABLED for SYNTH_DSMCTRLRX           */
#define _SYNTH_DSMCTRLRX_DEMMODERX_ENABLED            0x00000001UL                                      /**< Mode ENABLED for SYNTH_DSMCTRLRX            */
#define SYNTH_DSMCTRLRX_DEMMODERX_DEFAULT             (_SYNTH_DSMCTRLRX_DEMMODERX_DEFAULT << 24)        /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_DEMMODERX_DISABLED            (_SYNTH_DSMCTRLRX_DEMMODERX_DISABLED << 24)       /**< Shifted mode DISABLED for SYNTH_DSMCTRLRX   */
#define SYNTH_DSMCTRLRX_DEMMODERX_ENABLED             (_SYNTH_DSMCTRLRX_DEMMODERX_ENABLED << 24)        /**< Shifted mode ENABLED for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_MASHORDERRX                   (0x1UL << 25)                                     /**< MASH order for RX mode                      */
#define _SYNTH_DSMCTRLRX_MASHORDERRX_SHIFT            25                                                /**< Shift value for SYNTH_MASHORDERRX           */
#define _SYNTH_DSMCTRLRX_MASHORDERRX_MASK             0x2000000UL                                       /**< Bit mask for SYNTH_MASHORDERRX              */
#define _SYNTH_DSMCTRLRX_MASHORDERRX_DEFAULT          0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define _SYNTH_DSMCTRLRX_MASHORDERRX_SECOND           0x00000000UL                                      /**< Mode SECOND for SYNTH_DSMCTRLRX             */
#define _SYNTH_DSMCTRLRX_MASHORDERRX_THIRD            0x00000001UL                                      /**< Mode THIRD for SYNTH_DSMCTRLRX              */
#define SYNTH_DSMCTRLRX_MASHORDERRX_DEFAULT           (_SYNTH_DSMCTRLRX_MASHORDERRX_DEFAULT << 25)      /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_MASHORDERRX_SECOND            (_SYNTH_DSMCTRLRX_MASHORDERRX_SECOND << 25)       /**< Shifted mode SECOND for SYNTH_DSMCTRLRX     */
#define SYNTH_DSMCTRLRX_MASHORDERRX_THIRD             (_SYNTH_DSMCTRLRX_MASHORDERRX_THIRD << 25)        /**< Shifted mode THIRD for SYNTH_DSMCTRLRX      */
#define SYNTH_DSMCTRLRX_REQORDERRX                    (0x1UL << 26)                                     /**< ReQuant order for RX mode                   */
#define _SYNTH_DSMCTRLRX_REQORDERRX_SHIFT             26                                                /**< Shift value for SYNTH_REQORDERRX            */
#define _SYNTH_DSMCTRLRX_REQORDERRX_MASK              0x4000000UL                                       /**< Bit mask for SYNTH_REQORDERRX               */
#define _SYNTH_DSMCTRLRX_REQORDERRX_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLRX            */
#define _SYNTH_DSMCTRLRX_REQORDERRX_FIRST             0x00000000UL                                      /**< Mode FIRST for SYNTH_DSMCTRLRX              */
#define _SYNTH_DSMCTRLRX_REQORDERRX_SECOND            0x00000001UL                                      /**< Mode SECOND for SYNTH_DSMCTRLRX             */
#define SYNTH_DSMCTRLRX_REQORDERRX_DEFAULT            (_SYNTH_DSMCTRLRX_REQORDERRX_DEFAULT << 26)       /**< Shifted mode DEFAULT for SYNTH_DSMCTRLRX    */
#define SYNTH_DSMCTRLRX_REQORDERRX_FIRST              (_SYNTH_DSMCTRLRX_REQORDERRX_FIRST << 26)         /**< Shifted mode FIRST for SYNTH_DSMCTRLRX      */
#define SYNTH_DSMCTRLRX_REQORDERRX_SECOND             (_SYNTH_DSMCTRLRX_REQORDERRX_SECOND << 26)        /**< Shifted mode SECOND for SYNTH_DSMCTRLRX     */

/* Bit fields for SYNTH DSMCTRLTX */
#define _SYNTH_DSMCTRLTX_RESETVALUE                   0x00000013UL                                      /**< Default value for SYNTH_DSMCTRLTX           */
#define _SYNTH_DSMCTRLTX_MASK                         0x070003FFUL                                      /**< Mask for SYNTH_DSMCTRLTX                    */
#define SYNTH_DSMCTRLTX_DITHERDSMINPUTTX              (0x1UL << 0)                                      /**< Dithering of DSM input for TX mode          */
#define _SYNTH_DSMCTRLTX_DITHERDSMINPUTTX_SHIFT       0                                                 /**< Shift value for SYNTH_DITHERDSMINPUTTX      */
#define _SYNTH_DSMCTRLTX_DITHERDSMINPUTTX_MASK        0x1UL                                             /**< Bit mask for SYNTH_DITHERDSMINPUTTX         */
#define _SYNTH_DSMCTRLTX_DITHERDSMINPUTTX_DEFAULT     0x00000001UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define SYNTH_DSMCTRLTX_DITHERDSMINPUTTX_DEFAULT      (_SYNTH_DSMCTRLTX_DITHERDSMINPUTTX_DEFAULT << 0)  /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define _SYNTH_DSMCTRLTX_DITHERDSMOUTPUTTX_SHIFT      1                                                 /**< Shift value for SYNTH_DITHERDSMOUTPUTTX     */
#define _SYNTH_DSMCTRLTX_DITHERDSMOUTPUTTX_MASK       0xEUL                                             /**< Bit mask for SYNTH_DITHERDSMOUTPUTTX        */
#define _SYNTH_DSMCTRLTX_DITHERDSMOUTPUTTX_DEFAULT    0x00000001UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define SYNTH_DSMCTRLTX_DITHERDSMOUTPUTTX_DEFAULT     (_SYNTH_DSMCTRLTX_DITHERDSMOUTPUTTX_DEFAULT << 1) /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define _SYNTH_DSMCTRLTX_DITHERDACTX_SHIFT            4                                                 /**< Shift value for SYNTH_DITHERDACTX           */
#define _SYNTH_DSMCTRLTX_DITHERDACTX_MASK             0xF0UL                                            /**< Bit mask for SYNTH_DITHERDACTX              */
#define _SYNTH_DSMCTRLTX_DITHERDACTX_DEFAULT          0x00000001UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define SYNTH_DSMCTRLTX_DITHERDACTX_DEFAULT           (_SYNTH_DSMCTRLTX_DITHERDACTX_DEFAULT << 4)       /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_DSMMODETX                     (0x1UL << 8)                                      /**< Delta-sigma topology for TX mode            */
#define _SYNTH_DSMCTRLTX_DSMMODETX_SHIFT              8                                                 /**< Shift value for SYNTH_DSMMODETX             */
#define _SYNTH_DSMCTRLTX_DSMMODETX_MASK               0x100UL                                           /**< Bit mask for SYNTH_DSMMODETX                */
#define _SYNTH_DSMCTRLTX_DSMMODETX_DEFAULT            0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define _SYNTH_DSMCTRLTX_DSMMODETX_FEEDFORWARD        0x00000000UL                                      /**< Mode FEEDFORWARD for SYNTH_DSMCTRLTX        */
#define _SYNTH_DSMCTRLTX_DSMMODETX_MASH               0x00000001UL                                      /**< Mode MASH for SYNTH_DSMCTRLTX               */
#define SYNTH_DSMCTRLTX_DSMMODETX_DEFAULT             (_SYNTH_DSMCTRLTX_DSMMODETX_DEFAULT << 8)         /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_DSMMODETX_FEEDFORWARD         (_SYNTH_DSMCTRLTX_DSMMODETX_FEEDFORWARD << 8)     /**< Shifted mode FEEDFORWARD for SYNTH_DSMCTRLTX*/
#define SYNTH_DSMCTRLTX_DSMMODETX_MASH                (_SYNTH_DSMCTRLTX_DSMMODETX_MASH << 8)            /**< Shifted mode MASH for SYNTH_DSMCTRLTX       */
#define SYNTH_DSMCTRLTX_LSBFORCETX                    (0x1UL << 9)                                      /**< Delta-sigma input force LSB for TX mode     */
#define _SYNTH_DSMCTRLTX_LSBFORCETX_SHIFT             9                                                 /**< Shift value for SYNTH_LSBFORCETX            */
#define _SYNTH_DSMCTRLTX_LSBFORCETX_MASK              0x200UL                                           /**< Bit mask for SYNTH_LSBFORCETX               */
#define _SYNTH_DSMCTRLTX_LSBFORCETX_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define SYNTH_DSMCTRLTX_LSBFORCETX_DEFAULT            (_SYNTH_DSMCTRLTX_LSBFORCETX_DEFAULT << 9)        /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_DEMMODETX                     (0x1UL << 24)                                     /**< DEM Mode for TX mode                        */
#define _SYNTH_DSMCTRLTX_DEMMODETX_SHIFT              24                                                /**< Shift value for SYNTH_DEMMODETX             */
#define _SYNTH_DSMCTRLTX_DEMMODETX_MASK               0x1000000UL                                       /**< Bit mask for SYNTH_DEMMODETX                */
#define _SYNTH_DSMCTRLTX_DEMMODETX_DEFAULT            0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define _SYNTH_DSMCTRLTX_DEMMODETX_DISABLED           0x00000000UL                                      /**< Mode DISABLED for SYNTH_DSMCTRLTX           */
#define _SYNTH_DSMCTRLTX_DEMMODETX_ENABLED            0x00000001UL                                      /**< Mode ENABLED for SYNTH_DSMCTRLTX            */
#define SYNTH_DSMCTRLTX_DEMMODETX_DEFAULT             (_SYNTH_DSMCTRLTX_DEMMODETX_DEFAULT << 24)        /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_DEMMODETX_DISABLED            (_SYNTH_DSMCTRLTX_DEMMODETX_DISABLED << 24)       /**< Shifted mode DISABLED for SYNTH_DSMCTRLTX   */
#define SYNTH_DSMCTRLTX_DEMMODETX_ENABLED             (_SYNTH_DSMCTRLTX_DEMMODETX_ENABLED << 24)        /**< Shifted mode ENABLED for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_MASHORDERTX                   (0x1UL << 25)                                     /**< MASH order for TX mode                      */
#define _SYNTH_DSMCTRLTX_MASHORDERTX_SHIFT            25                                                /**< Shift value for SYNTH_MASHORDERTX           */
#define _SYNTH_DSMCTRLTX_MASHORDERTX_MASK             0x2000000UL                                       /**< Bit mask for SYNTH_MASHORDERTX              */
#define _SYNTH_DSMCTRLTX_MASHORDERTX_DEFAULT          0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define _SYNTH_DSMCTRLTX_MASHORDERTX_SECOND           0x00000000UL                                      /**< Mode SECOND for SYNTH_DSMCTRLTX             */
#define _SYNTH_DSMCTRLTX_MASHORDERTX_THIRD            0x00000001UL                                      /**< Mode THIRD for SYNTH_DSMCTRLTX              */
#define SYNTH_DSMCTRLTX_MASHORDERTX_DEFAULT           (_SYNTH_DSMCTRLTX_MASHORDERTX_DEFAULT << 25)      /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_MASHORDERTX_SECOND            (_SYNTH_DSMCTRLTX_MASHORDERTX_SECOND << 25)       /**< Shifted mode SECOND for SYNTH_DSMCTRLTX     */
#define SYNTH_DSMCTRLTX_MASHORDERTX_THIRD             (_SYNTH_DSMCTRLTX_MASHORDERTX_THIRD << 25)        /**< Shifted mode THIRD for SYNTH_DSMCTRLTX      */
#define SYNTH_DSMCTRLTX_REQORDERTX                    (0x1UL << 26)                                     /**< ReQuant order for TX mode                   */
#define _SYNTH_DSMCTRLTX_REQORDERTX_SHIFT             26                                                /**< Shift value for SYNTH_REQORDERTX            */
#define _SYNTH_DSMCTRLTX_REQORDERTX_MASK              0x4000000UL                                       /**< Bit mask for SYNTH_REQORDERTX               */
#define _SYNTH_DSMCTRLTX_REQORDERTX_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for SYNTH_DSMCTRLTX            */
#define _SYNTH_DSMCTRLTX_REQORDERTX_FIRST             0x00000000UL                                      /**< Mode FIRST for SYNTH_DSMCTRLTX              */
#define _SYNTH_DSMCTRLTX_REQORDERTX_SECOND            0x00000001UL                                      /**< Mode SECOND for SYNTH_DSMCTRLTX             */
#define SYNTH_DSMCTRLTX_REQORDERTX_DEFAULT            (_SYNTH_DSMCTRLTX_REQORDERTX_DEFAULT << 26)       /**< Shifted mode DEFAULT for SYNTH_DSMCTRLTX    */
#define SYNTH_DSMCTRLTX_REQORDERTX_FIRST              (_SYNTH_DSMCTRLTX_REQORDERTX_FIRST << 26)         /**< Shifted mode FIRST for SYNTH_DSMCTRLTX      */
#define SYNTH_DSMCTRLTX_REQORDERTX_SECOND             (_SYNTH_DSMCTRLTX_REQORDERTX_SECOND << 26)        /**< Shifted mode SECOND for SYNTH_DSMCTRLTX     */

/** @} End of group EFR32MG21_SYNTH_BitFields */
/** @} End of group EFR32MG21_SYNTH */
/** @} End of group Parts */
#endif /* EFR32MG21_SYNTH_H */
