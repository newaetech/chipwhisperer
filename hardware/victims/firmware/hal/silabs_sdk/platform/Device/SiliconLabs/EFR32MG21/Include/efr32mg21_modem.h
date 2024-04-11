/**************************************************************************//**
 * @file
 * @brief EFR32MG21 MODEM register and bit field definitions
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
#ifndef EFR32MG21_MODEM_H
#define EFR32MG21_MODEM_H
#define MODEM_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG21_MODEM MODEM
 * @{
 * @brief EFR32MG21 MODEM Register Declaration.
 *****************************************************************************/

/** MODEM IRCALCOEFWR Register Group Declaration. */
typedef struct {
  __IOM uint32_t IRCALCOEFWR;                        /**< IRCAL COEF WR per antenna                          */
} MODEM_IRCALCOEFWR_TypeDef;

/** MODEM Register Declaration. */
typedef struct {
  __IM uint32_t             IPVERSION;           /**< IP Version                                         */
  __IOM uint32_t            EN;                  /**< Enable peripheral clock to this module             */
  __IM uint32_t             STATUS;              /**< Status Register                                    */
  __IM uint32_t             TIMDETSTATUS;        /**< Timing Detection Status Register                   */
  __IM uint32_t             FREQOFFEST;          /**< Frequency Offset Estimate                          */
  __IM uint32_t             AFCADJRX;            /**< AFC Adjustment RX                                  */
  __IM uint32_t             AFCADJTX;            /**< AFC Adjustment TX                                  */
  __IOM uint32_t            MIXCTRL;             /**< Analog mixer control                               */
  __IOM uint32_t            CTRL0;               /**< Control Register 0                                 */
  __IOM uint32_t            CTRL1;               /**< Control Register 1                                 */
  __IOM uint32_t            CTRL2;               /**< Control Register 2                                 */
  __IOM uint32_t            CTRL3;               /**< Control Register 3                                 */
  __IOM uint32_t            CTRL4;               /**< Control Register 4                                 */
  __IOM uint32_t            CTRL5;               /**< Control Register 5                                 */
  __IOM uint32_t            CTRL6;               /**< Control Register 6                                 */
  uint32_t                  RESERVED0[7U];       /**< Reserved for future use                            */
  __IOM uint32_t            TXBR;                /**< Transmit baudrate                                  */
  __IOM uint32_t            RXBR;                /**< Receive Baudrate                                   */
  __IOM uint32_t            CF;                  /**< Channel Filter                                     */
  __IOM uint32_t            PRE;                 /**< Preamble Register                                  */
  __IOM uint32_t            SYNC0;               /**< Sync word 0                                        */
  __IOM uint32_t            SYNC1;               /**< Sync word 1                                        */
  uint32_t                  RESERVED1[4U];       /**< Reserved for future use                            */
  __IOM uint32_t            TIMING;              /**< Timing Register                                    */
  __IOM uint32_t            DSSS0;               /**< DSSS symbol 0 Register                             */
  __IOM uint32_t            MODINDEX;            /**< Modulation Index                                   */
  __IOM uint32_t            AFC;                 /**< Automatic Frequency Control                        */
  __IOM uint32_t            AFCADJLIM;           /**< AFC Adjustment Limit                               */
  __IOM uint32_t            SHAPING0;            /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING1;            /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING2;            /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING3;            /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING4;            /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING5;            /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING6;            /**< Shaping Coefficients                               */
  uint32_t                  RESERVED2[4U];       /**< Reserved for future use                            */
  __IOM uint32_t            RAMPCTRL;            /**< Ramping Register                                   */
  __IOM uint32_t            RAMPLEV;             /**< Ramping Register                                   */
  uint32_t                  RESERVED3[6U];       /**< Reserved for future use                            */
  __IOM uint32_t            DCCOMP;              /**< DC Offset Compensation Filter Settings             */
  __IOM uint32_t            DCCOMPFILTINIT;      /**< DC Offset compensation Filter                      */
  __IM uint32_t             DCESTI;              /**< DC Offset Estimated value                          */
  __IOM uint32_t            SRCCHF;              /**< SRC ratio values and channel filter                */
  __IOM uint32_t            INTAFC;              /**< Internal AFC                                       */
  __IOM uint32_t            DSATHD0;             /**< DSA detector threshold-0                           */
  __IOM uint32_t            DSATHD1;             /**< DSA detector threshold-1                           */
  __IOM uint32_t            DSACTRL;             /**< DSA mode                                           */
  __IOM uint32_t            VITERBIDEMOD;        /**< Viterbi demodulator                                */
  __IOM uint32_t            VTCORRCFG0;          /**< Viterbi demodulator                                */
  uint32_t                  RESERVED4[1U];       /**< Reserved for future use                            */
  __IOM uint32_t            DIGMIXCTRL;          /**< Digital mixer control register                     */
  __IOM uint32_t            VTCORRCFG1;          /**< Viterbi demodulator                                */
  __IOM uint32_t            VTTRACK;             /**< Viterbi demodulator tracking loop                  */
  __IM uint32_t             BREST;               /**< Baudrate Estimate                                  */
  uint32_t                  RESERVED5[2U];       /**< Reserved for future use                            */
  __IOM uint32_t            AUTOCG;              /**< Automatic clock gating                             */
  __IOM uint32_t            CGCLKSTOP;           /**< Automatic clock gating                             */
  __IM uint32_t             POE;                 /**< Phase Offset Estimate                              */
  __IOM uint32_t            DSATHD2;             /**< DSA detector threshold-2                           */
  __IOM uint32_t            DIRECTMODE;          /**< Direct Mode Control                                */
  __IOM uint32_t            LONGRANGE;           /**< BLE Long Range                                     */
  __IOM uint32_t            LONGRANGE1;          /**< BLE Long Range Set1                                */
  __IOM uint32_t            LONGRANGE2;          /**< BLE Long Range Set2                                */
  __IOM uint32_t            LONGRANGE3;          /**< BLE Long Range Set3                                */
  __IOM uint32_t            LONGRANGE4;          /**< BLE Long Range Set4                                */
  __IOM uint32_t            LONGRANGE5;          /**< BLE Long Range Set5                                */
  __IOM uint32_t            LONGRANGE6;          /**< BLE Long Range Set6                                */
  __IOM uint32_t            LRFRC;               /**< BLE Long Range FRC interface                       */
  __IOM uint32_t            COH0;                /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH1;                /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH2;                /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH3;                /**< Coherent demodulator control signals               */
  __IOM uint32_t            DSATHD3;             /**< DSA detector threshold 3                           */
  __IOM uint32_t            DSATHD4;             /**< DSA detector threshold 4                           */
  __IOM uint32_t            VTBLETIMING;         /**< Viterbi BLE timing stamp control                   */
  uint32_t                  RESERVED6[37U];      /**< Reserved for future use                            */
  __IOM uint32_t            IF;                  /**< Interrupt Flags                                    */
  __IOM uint32_t            IEN;                 /**< Interrupt Enable                                   */
  uint32_t                  RESERVED7[2U];       /**< Reserved for future use                            */
  __IOM uint32_t            CMD;                 /**< Command register                                   */
  __IM uint32_t             FSMSTATUS;           /**< Demod FSM Status Register                          */
  __IM uint32_t             STATUS2;             /**< Status Register 2                                  */
  __IM uint32_t             STATUS3;             /**< Status Register 3                                  */
  __IOM uint32_t            IRCAL;               /**< IRCAL control signals                              */
  __IM uint32_t             IRCALCOEF;           /**< IRCAL COEF values                                  */
  __IOM uint32_t            BLEIQDSA;            /**< BLEIQDSA                                           */
  __IOM uint32_t            BLEIQDSAEXT1;        /**< BLEIQDSA Extention1                                */
  __IOM uint32_t            SYNCPROPERTIES;      /**< Sync word properties                               */
  __IOM uint32_t            DIGIGAINCTRL;        /**< Digital Gain Control                               */
  __IOM uint32_t            PRSCTRL;             /**< Mux control for PRS outputs                        */
  uint32_t                  RESERVED8[3U];       /**< Reserved for future use                            */
  MODEM_IRCALCOEFWR_TypeDef IRCALCOEFWR[2U];     /**< IRCAL COEFS WR per antenna                         */
  uint32_t                  RESERVED9[874U];     /**< Reserved for future use                            */
  __IM uint32_t             IPVERSION_SET;       /**< IP Version                                         */
  __IOM uint32_t            EN_SET;              /**< Enable peripheral clock to this module             */
  __IM uint32_t             STATUS_SET;          /**< Status Register                                    */
  __IM uint32_t             TIMDETSTATUS_SET;    /**< Timing Detection Status Register                   */
  __IM uint32_t             FREQOFFEST_SET;      /**< Frequency Offset Estimate                          */
  __IM uint32_t             AFCADJRX_SET;        /**< AFC Adjustment RX                                  */
  __IM uint32_t             AFCADJTX_SET;        /**< AFC Adjustment TX                                  */
  __IOM uint32_t            MIXCTRL_SET;         /**< Analog mixer control                               */
  __IOM uint32_t            CTRL0_SET;           /**< Control Register 0                                 */
  __IOM uint32_t            CTRL1_SET;           /**< Control Register 1                                 */
  __IOM uint32_t            CTRL2_SET;           /**< Control Register 2                                 */
  __IOM uint32_t            CTRL3_SET;           /**< Control Register 3                                 */
  __IOM uint32_t            CTRL4_SET;           /**< Control Register 4                                 */
  __IOM uint32_t            CTRL5_SET;           /**< Control Register 5                                 */
  __IOM uint32_t            CTRL6_SET;           /**< Control Register 6                                 */
  uint32_t                  RESERVED10[7U];      /**< Reserved for future use                            */
  __IOM uint32_t            TXBR_SET;            /**< Transmit baudrate                                  */
  __IOM uint32_t            RXBR_SET;            /**< Receive Baudrate                                   */
  __IOM uint32_t            CF_SET;              /**< Channel Filter                                     */
  __IOM uint32_t            PRE_SET;             /**< Preamble Register                                  */
  __IOM uint32_t            SYNC0_SET;           /**< Sync word 0                                        */
  __IOM uint32_t            SYNC1_SET;           /**< Sync word 1                                        */
  uint32_t                  RESERVED11[4U];      /**< Reserved for future use                            */
  __IOM uint32_t            TIMING_SET;          /**< Timing Register                                    */
  __IOM uint32_t            DSSS0_SET;           /**< DSSS symbol 0 Register                             */
  __IOM uint32_t            MODINDEX_SET;        /**< Modulation Index                                   */
  __IOM uint32_t            AFC_SET;             /**< Automatic Frequency Control                        */
  __IOM uint32_t            AFCADJLIM_SET;       /**< AFC Adjustment Limit                               */
  __IOM uint32_t            SHAPING0_SET;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING1_SET;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING2_SET;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING3_SET;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING4_SET;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING5_SET;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING6_SET;        /**< Shaping Coefficients                               */
  uint32_t                  RESERVED12[4U];      /**< Reserved for future use                            */
  __IOM uint32_t            RAMPCTRL_SET;        /**< Ramping Register                                   */
  __IOM uint32_t            RAMPLEV_SET;         /**< Ramping Register                                   */
  uint32_t                  RESERVED13[6U];      /**< Reserved for future use                            */
  __IOM uint32_t            DCCOMP_SET;          /**< DC Offset Compensation Filter Settings             */
  __IOM uint32_t            DCCOMPFILTINIT_SET;  /**< DC Offset compensation Filter                      */
  __IM uint32_t             DCESTI_SET;          /**< DC Offset Estimated value                          */
  __IOM uint32_t            SRCCHF_SET;          /**< SRC ratio values and channel filter                */
  __IOM uint32_t            INTAFC_SET;          /**< Internal AFC                                       */
  __IOM uint32_t            DSATHD0_SET;         /**< DSA detector threshold-0                           */
  __IOM uint32_t            DSATHD1_SET;         /**< DSA detector threshold-1                           */
  __IOM uint32_t            DSACTRL_SET;         /**< DSA mode                                           */
  __IOM uint32_t            VITERBIDEMOD_SET;    /**< Viterbi demodulator                                */
  __IOM uint32_t            VTCORRCFG0_SET;      /**< Viterbi demodulator                                */
  uint32_t                  RESERVED14[1U];      /**< Reserved for future use                            */
  __IOM uint32_t            DIGMIXCTRL_SET;      /**< Digital mixer control register                     */
  __IOM uint32_t            VTCORRCFG1_SET;      /**< Viterbi demodulator                                */
  __IOM uint32_t            VTTRACK_SET;         /**< Viterbi demodulator tracking loop                  */
  __IM uint32_t             BREST_SET;           /**< Baudrate Estimate                                  */
  uint32_t                  RESERVED15[2U];      /**< Reserved for future use                            */
  __IOM uint32_t            AUTOCG_SET;          /**< Automatic clock gating                             */
  __IOM uint32_t            CGCLKSTOP_SET;       /**< Automatic clock gating                             */
  __IM uint32_t             POE_SET;             /**< Phase Offset Estimate                              */
  __IOM uint32_t            DSATHD2_SET;         /**< DSA detector threshold-2                           */
  __IOM uint32_t            DIRECTMODE_SET;      /**< Direct Mode Control                                */
  __IOM uint32_t            LONGRANGE_SET;       /**< BLE Long Range                                     */
  __IOM uint32_t            LONGRANGE1_SET;      /**< BLE Long Range Set1                                */
  __IOM uint32_t            LONGRANGE2_SET;      /**< BLE Long Range Set2                                */
  __IOM uint32_t            LONGRANGE3_SET;      /**< BLE Long Range Set3                                */
  __IOM uint32_t            LONGRANGE4_SET;      /**< BLE Long Range Set4                                */
  __IOM uint32_t            LONGRANGE5_SET;      /**< BLE Long Range Set5                                */
  __IOM uint32_t            LONGRANGE6_SET;      /**< BLE Long Range Set6                                */
  __IOM uint32_t            LRFRC_SET;           /**< BLE Long Range FRC interface                       */
  __IOM uint32_t            COH0_SET;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH1_SET;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH2_SET;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH3_SET;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            DSATHD3_SET;         /**< DSA detector threshold 3                           */
  __IOM uint32_t            DSATHD4_SET;         /**< DSA detector threshold 4                           */
  __IOM uint32_t            VTBLETIMING_SET;     /**< Viterbi BLE timing stamp control                   */
  uint32_t                  RESERVED16[37U];     /**< Reserved for future use                            */
  __IOM uint32_t            IF_SET;              /**< Interrupt Flags                                    */
  __IOM uint32_t            IEN_SET;             /**< Interrupt Enable                                   */
  uint32_t                  RESERVED17[2U];      /**< Reserved for future use                            */
  __IOM uint32_t            CMD_SET;             /**< Command register                                   */
  __IM uint32_t             FSMSTATUS_SET;       /**< Demod FSM Status Register                          */
  __IM uint32_t             STATUS2_SET;         /**< Status Register 2                                  */
  __IM uint32_t             STATUS3_SET;         /**< Status Register 3                                  */
  __IOM uint32_t            IRCAL_SET;           /**< IRCAL control signals                              */
  __IM uint32_t             IRCALCOEF_SET;       /**< IRCAL COEF values                                  */
  __IOM uint32_t            BLEIQDSA_SET;        /**< BLEIQDSA                                           */
  __IOM uint32_t            BLEIQDSAEXT1_SET;    /**< BLEIQDSA Extention1                                */
  __IOM uint32_t            SYNCPROPERTIES_SET;  /**< Sync word properties                               */
  __IOM uint32_t            DIGIGAINCTRL_SET;    /**< Digital Gain Control                               */
  __IOM uint32_t            PRSCTRL_SET;         /**< Mux control for PRS outputs                        */
  uint32_t                  RESERVED18[3U];      /**< Reserved for future use                            */
  MODEM_IRCALCOEFWR_TypeDef IRCALCOEFWR_SET[2U]; /**< IRCAL COEFS WR per antenna                         */
  uint32_t                  RESERVED19[874U];    /**< Reserved for future use                            */
  __IM uint32_t             IPVERSION_CLR;       /**< IP Version                                         */
  __IOM uint32_t            EN_CLR;              /**< Enable peripheral clock to this module             */
  __IM uint32_t             STATUS_CLR;          /**< Status Register                                    */
  __IM uint32_t             TIMDETSTATUS_CLR;    /**< Timing Detection Status Register                   */
  __IM uint32_t             FREQOFFEST_CLR;      /**< Frequency Offset Estimate                          */
  __IM uint32_t             AFCADJRX_CLR;        /**< AFC Adjustment RX                                  */
  __IM uint32_t             AFCADJTX_CLR;        /**< AFC Adjustment TX                                  */
  __IOM uint32_t            MIXCTRL_CLR;         /**< Analog mixer control                               */
  __IOM uint32_t            CTRL0_CLR;           /**< Control Register 0                                 */
  __IOM uint32_t            CTRL1_CLR;           /**< Control Register 1                                 */
  __IOM uint32_t            CTRL2_CLR;           /**< Control Register 2                                 */
  __IOM uint32_t            CTRL3_CLR;           /**< Control Register 3                                 */
  __IOM uint32_t            CTRL4_CLR;           /**< Control Register 4                                 */
  __IOM uint32_t            CTRL5_CLR;           /**< Control Register 5                                 */
  __IOM uint32_t            CTRL6_CLR;           /**< Control Register 6                                 */
  uint32_t                  RESERVED20[7U];      /**< Reserved for future use                            */
  __IOM uint32_t            TXBR_CLR;            /**< Transmit baudrate                                  */
  __IOM uint32_t            RXBR_CLR;            /**< Receive Baudrate                                   */
  __IOM uint32_t            CF_CLR;              /**< Channel Filter                                     */
  __IOM uint32_t            PRE_CLR;             /**< Preamble Register                                  */
  __IOM uint32_t            SYNC0_CLR;           /**< Sync word 0                                        */
  __IOM uint32_t            SYNC1_CLR;           /**< Sync word 1                                        */
  uint32_t                  RESERVED21[4U];      /**< Reserved for future use                            */
  __IOM uint32_t            TIMING_CLR;          /**< Timing Register                                    */
  __IOM uint32_t            DSSS0_CLR;           /**< DSSS symbol 0 Register                             */
  __IOM uint32_t            MODINDEX_CLR;        /**< Modulation Index                                   */
  __IOM uint32_t            AFC_CLR;             /**< Automatic Frequency Control                        */
  __IOM uint32_t            AFCADJLIM_CLR;       /**< AFC Adjustment Limit                               */
  __IOM uint32_t            SHAPING0_CLR;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING1_CLR;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING2_CLR;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING3_CLR;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING4_CLR;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING5_CLR;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING6_CLR;        /**< Shaping Coefficients                               */
  uint32_t                  RESERVED22[4U];      /**< Reserved for future use                            */
  __IOM uint32_t            RAMPCTRL_CLR;        /**< Ramping Register                                   */
  __IOM uint32_t            RAMPLEV_CLR;         /**< Ramping Register                                   */
  uint32_t                  RESERVED23[6U];      /**< Reserved for future use                            */
  __IOM uint32_t            DCCOMP_CLR;          /**< DC Offset Compensation Filter Settings             */
  __IOM uint32_t            DCCOMPFILTINIT_CLR;  /**< DC Offset compensation Filter                      */
  __IM uint32_t             DCESTI_CLR;          /**< DC Offset Estimated value                          */
  __IOM uint32_t            SRCCHF_CLR;          /**< SRC ratio values and channel filter                */
  __IOM uint32_t            INTAFC_CLR;          /**< Internal AFC                                       */
  __IOM uint32_t            DSATHD0_CLR;         /**< DSA detector threshold-0                           */
  __IOM uint32_t            DSATHD1_CLR;         /**< DSA detector threshold-1                           */
  __IOM uint32_t            DSACTRL_CLR;         /**< DSA mode                                           */
  __IOM uint32_t            VITERBIDEMOD_CLR;    /**< Viterbi demodulator                                */
  __IOM uint32_t            VTCORRCFG0_CLR;      /**< Viterbi demodulator                                */
  uint32_t                  RESERVED24[1U];      /**< Reserved for future use                            */
  __IOM uint32_t            DIGMIXCTRL_CLR;      /**< Digital mixer control register                     */
  __IOM uint32_t            VTCORRCFG1_CLR;      /**< Viterbi demodulator                                */
  __IOM uint32_t            VTTRACK_CLR;         /**< Viterbi demodulator tracking loop                  */
  __IM uint32_t             BREST_CLR;           /**< Baudrate Estimate                                  */
  uint32_t                  RESERVED25[2U];      /**< Reserved for future use                            */
  __IOM uint32_t            AUTOCG_CLR;          /**< Automatic clock gating                             */
  __IOM uint32_t            CGCLKSTOP_CLR;       /**< Automatic clock gating                             */
  __IM uint32_t             POE_CLR;             /**< Phase Offset Estimate                              */
  __IOM uint32_t            DSATHD2_CLR;         /**< DSA detector threshold-2                           */
  __IOM uint32_t            DIRECTMODE_CLR;      /**< Direct Mode Control                                */
  __IOM uint32_t            LONGRANGE_CLR;       /**< BLE Long Range                                     */
  __IOM uint32_t            LONGRANGE1_CLR;      /**< BLE Long Range Set1                                */
  __IOM uint32_t            LONGRANGE2_CLR;      /**< BLE Long Range Set2                                */
  __IOM uint32_t            LONGRANGE3_CLR;      /**< BLE Long Range Set3                                */
  __IOM uint32_t            LONGRANGE4_CLR;      /**< BLE Long Range Set4                                */
  __IOM uint32_t            LONGRANGE5_CLR;      /**< BLE Long Range Set5                                */
  __IOM uint32_t            LONGRANGE6_CLR;      /**< BLE Long Range Set6                                */
  __IOM uint32_t            LRFRC_CLR;           /**< BLE Long Range FRC interface                       */
  __IOM uint32_t            COH0_CLR;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH1_CLR;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH2_CLR;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH3_CLR;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            DSATHD3_CLR;         /**< DSA detector threshold 3                           */
  __IOM uint32_t            DSATHD4_CLR;         /**< DSA detector threshold 4                           */
  __IOM uint32_t            VTBLETIMING_CLR;     /**< Viterbi BLE timing stamp control                   */
  uint32_t                  RESERVED26[37U];     /**< Reserved for future use                            */
  __IOM uint32_t            IF_CLR;              /**< Interrupt Flags                                    */
  __IOM uint32_t            IEN_CLR;             /**< Interrupt Enable                                   */
  uint32_t                  RESERVED27[2U];      /**< Reserved for future use                            */
  __IOM uint32_t            CMD_CLR;             /**< Command register                                   */
  __IM uint32_t             FSMSTATUS_CLR;       /**< Demod FSM Status Register                          */
  __IM uint32_t             STATUS2_CLR;         /**< Status Register 2                                  */
  __IM uint32_t             STATUS3_CLR;         /**< Status Register 3                                  */
  __IOM uint32_t            IRCAL_CLR;           /**< IRCAL control signals                              */
  __IM uint32_t             IRCALCOEF_CLR;       /**< IRCAL COEF values                                  */
  __IOM uint32_t            BLEIQDSA_CLR;        /**< BLEIQDSA                                           */
  __IOM uint32_t            BLEIQDSAEXT1_CLR;    /**< BLEIQDSA Extention1                                */
  __IOM uint32_t            SYNCPROPERTIES_CLR;  /**< Sync word properties                               */
  __IOM uint32_t            DIGIGAINCTRL_CLR;    /**< Digital Gain Control                               */
  __IOM uint32_t            PRSCTRL_CLR;         /**< Mux control for PRS outputs                        */
  uint32_t                  RESERVED28[3U];      /**< Reserved for future use                            */
  MODEM_IRCALCOEFWR_TypeDef IRCALCOEFWR_CLR[2U]; /**< IRCAL COEFS WR per antenna                         */
  uint32_t                  RESERVED29[874U];    /**< Reserved for future use                            */
  __IM uint32_t             IPVERSION_TGL;       /**< IP Version                                         */
  __IOM uint32_t            EN_TGL;              /**< Enable peripheral clock to this module             */
  __IM uint32_t             STATUS_TGL;          /**< Status Register                                    */
  __IM uint32_t             TIMDETSTATUS_TGL;    /**< Timing Detection Status Register                   */
  __IM uint32_t             FREQOFFEST_TGL;      /**< Frequency Offset Estimate                          */
  __IM uint32_t             AFCADJRX_TGL;        /**< AFC Adjustment RX                                  */
  __IM uint32_t             AFCADJTX_TGL;        /**< AFC Adjustment TX                                  */
  __IOM uint32_t            MIXCTRL_TGL;         /**< Analog mixer control                               */
  __IOM uint32_t            CTRL0_TGL;           /**< Control Register 0                                 */
  __IOM uint32_t            CTRL1_TGL;           /**< Control Register 1                                 */
  __IOM uint32_t            CTRL2_TGL;           /**< Control Register 2                                 */
  __IOM uint32_t            CTRL3_TGL;           /**< Control Register 3                                 */
  __IOM uint32_t            CTRL4_TGL;           /**< Control Register 4                                 */
  __IOM uint32_t            CTRL5_TGL;           /**< Control Register 5                                 */
  __IOM uint32_t            CTRL6_TGL;           /**< Control Register 6                                 */
  uint32_t                  RESERVED30[7U];      /**< Reserved for future use                            */
  __IOM uint32_t            TXBR_TGL;            /**< Transmit baudrate                                  */
  __IOM uint32_t            RXBR_TGL;            /**< Receive Baudrate                                   */
  __IOM uint32_t            CF_TGL;              /**< Channel Filter                                     */
  __IOM uint32_t            PRE_TGL;             /**< Preamble Register                                  */
  __IOM uint32_t            SYNC0_TGL;           /**< Sync word 0                                        */
  __IOM uint32_t            SYNC1_TGL;           /**< Sync word 1                                        */
  uint32_t                  RESERVED31[4U];      /**< Reserved for future use                            */
  __IOM uint32_t            TIMING_TGL;          /**< Timing Register                                    */
  __IOM uint32_t            DSSS0_TGL;           /**< DSSS symbol 0 Register                             */
  __IOM uint32_t            MODINDEX_TGL;        /**< Modulation Index                                   */
  __IOM uint32_t            AFC_TGL;             /**< Automatic Frequency Control                        */
  __IOM uint32_t            AFCADJLIM_TGL;       /**< AFC Adjustment Limit                               */
  __IOM uint32_t            SHAPING0_TGL;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING1_TGL;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING2_TGL;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING3_TGL;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING4_TGL;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING5_TGL;        /**< Shaping Coefficients                               */
  __IOM uint32_t            SHAPING6_TGL;        /**< Shaping Coefficients                               */
  uint32_t                  RESERVED32[4U];      /**< Reserved for future use                            */
  __IOM uint32_t            RAMPCTRL_TGL;        /**< Ramping Register                                   */
  __IOM uint32_t            RAMPLEV_TGL;         /**< Ramping Register                                   */
  uint32_t                  RESERVED33[6U];      /**< Reserved for future use                            */
  __IOM uint32_t            DCCOMP_TGL;          /**< DC Offset Compensation Filter Settings             */
  __IOM uint32_t            DCCOMPFILTINIT_TGL;  /**< DC Offset compensation Filter                      */
  __IM uint32_t             DCESTI_TGL;          /**< DC Offset Estimated value                          */
  __IOM uint32_t            SRCCHF_TGL;          /**< SRC ratio values and channel filter                */
  __IOM uint32_t            INTAFC_TGL;          /**< Internal AFC                                       */
  __IOM uint32_t            DSATHD0_TGL;         /**< DSA detector threshold-0                           */
  __IOM uint32_t            DSATHD1_TGL;         /**< DSA detector threshold-1                           */
  __IOM uint32_t            DSACTRL_TGL;         /**< DSA mode                                           */
  __IOM uint32_t            VITERBIDEMOD_TGL;    /**< Viterbi demodulator                                */
  __IOM uint32_t            VTCORRCFG0_TGL;      /**< Viterbi demodulator                                */
  uint32_t                  RESERVED34[1U];      /**< Reserved for future use                            */
  __IOM uint32_t            DIGMIXCTRL_TGL;      /**< Digital mixer control register                     */
  __IOM uint32_t            VTCORRCFG1_TGL;      /**< Viterbi demodulator                                */
  __IOM uint32_t            VTTRACK_TGL;         /**< Viterbi demodulator tracking loop                  */
  __IM uint32_t             BREST_TGL;           /**< Baudrate Estimate                                  */
  uint32_t                  RESERVED35[2U];      /**< Reserved for future use                            */
  __IOM uint32_t            AUTOCG_TGL;          /**< Automatic clock gating                             */
  __IOM uint32_t            CGCLKSTOP_TGL;       /**< Automatic clock gating                             */
  __IM uint32_t             POE_TGL;             /**< Phase Offset Estimate                              */
  __IOM uint32_t            DSATHD2_TGL;         /**< DSA detector threshold-2                           */
  __IOM uint32_t            DIRECTMODE_TGL;      /**< Direct Mode Control                                */
  __IOM uint32_t            LONGRANGE_TGL;       /**< BLE Long Range                                     */
  __IOM uint32_t            LONGRANGE1_TGL;      /**< BLE Long Range Set1                                */
  __IOM uint32_t            LONGRANGE2_TGL;      /**< BLE Long Range Set2                                */
  __IOM uint32_t            LONGRANGE3_TGL;      /**< BLE Long Range Set3                                */
  __IOM uint32_t            LONGRANGE4_TGL;      /**< BLE Long Range Set4                                */
  __IOM uint32_t            LONGRANGE5_TGL;      /**< BLE Long Range Set5                                */
  __IOM uint32_t            LONGRANGE6_TGL;      /**< BLE Long Range Set6                                */
  __IOM uint32_t            LRFRC_TGL;           /**< BLE Long Range FRC interface                       */
  __IOM uint32_t            COH0_TGL;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH1_TGL;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH2_TGL;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            COH3_TGL;            /**< Coherent demodulator control signals               */
  __IOM uint32_t            DSATHD3_TGL;         /**< DSA detector threshold 3                           */
  __IOM uint32_t            DSATHD4_TGL;         /**< DSA detector threshold 4                           */
  __IOM uint32_t            VTBLETIMING_TGL;     /**< Viterbi BLE timing stamp control                   */
  uint32_t                  RESERVED36[37U];     /**< Reserved for future use                            */
  __IOM uint32_t            IF_TGL;              /**< Interrupt Flags                                    */
  __IOM uint32_t            IEN_TGL;             /**< Interrupt Enable                                   */
  uint32_t                  RESERVED37[2U];      /**< Reserved for future use                            */
  __IOM uint32_t            CMD_TGL;             /**< Command register                                   */
  __IM uint32_t             FSMSTATUS_TGL;       /**< Demod FSM Status Register                          */
  __IM uint32_t             STATUS2_TGL;         /**< Status Register 2                                  */
  __IM uint32_t             STATUS3_TGL;         /**< Status Register 3                                  */
  __IOM uint32_t            IRCAL_TGL;           /**< IRCAL control signals                              */
  __IM uint32_t             IRCALCOEF_TGL;       /**< IRCAL COEF values                                  */
  __IOM uint32_t            BLEIQDSA_TGL;        /**< BLEIQDSA                                           */
  __IOM uint32_t            BLEIQDSAEXT1_TGL;    /**< BLEIQDSA Extention1                                */
  __IOM uint32_t            SYNCPROPERTIES_TGL;  /**< Sync word properties                               */
  __IOM uint32_t            DIGIGAINCTRL_TGL;    /**< Digital Gain Control                               */
  __IOM uint32_t            PRSCTRL_TGL;         /**< Mux control for PRS outputs                        */
  uint32_t                  RESERVED38[3U];      /**< Reserved for future use                            */
  MODEM_IRCALCOEFWR_TypeDef IRCALCOEFWR_TGL[2U]; /**< IRCAL COEFS WR per antenna                         */
} MODEM_TypeDef;
/** @} End of group EFR32MG21_MODEM */

/**************************************************************************//**
 * @addtogroup EFR32MG21_MODEM
 * @{
 * @defgroup EFR32MG21_MODEM_BitFields MODEM Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for MODEM IPVERSION */
#define _MODEM_IPVERSION_RESETVALUE                          0x00000000UL                              /**< Default value for MODEM_IPVERSION           */
#define _MODEM_IPVERSION_MASK                                0xFFFFFFFFUL                              /**< Mask for MODEM_IPVERSION                    */
#define _MODEM_IPVERSION_IPVERSION_SHIFT                     0                                         /**< Shift value for MODEM_IPVERSION             */
#define _MODEM_IPVERSION_IPVERSION_MASK                      0xFFFFFFFFUL                              /**< Bit mask for MODEM_IPVERSION                */
#define _MODEM_IPVERSION_IPVERSION_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for MODEM_IPVERSION            */
#define MODEM_IPVERSION_IPVERSION_DEFAULT                    (_MODEM_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_IPVERSION    */

/* Bit fields for MODEM EN */
#define _MODEM_EN_RESETVALUE                                 0x00000000UL                /**< Default value for MODEM_EN                  */
#define _MODEM_EN_MASK                                       0x00000001UL                /**< Mask for MODEM_EN                           */
#define MODEM_EN_EN                                          (0x1UL << 0)                /**< Enable peripheral clock to this module      */
#define _MODEM_EN_EN_SHIFT                                   0                           /**< Shift value for MODEM_EN                    */
#define _MODEM_EN_EN_MASK                                    0x1UL                       /**< Bit mask for MODEM_EN                       */
#define _MODEM_EN_EN_DEFAULT                                 0x00000000UL                /**< Mode DEFAULT for MODEM_EN                   */
#define MODEM_EN_EN_DEFAULT                                  (_MODEM_EN_EN_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_EN           */

/* Bit fields for MODEM STATUS */
#define _MODEM_STATUS_RESETVALUE                             0x00000000UL                                       /**< Default value for MODEM_STATUS              */
#define _MODEM_STATUS_MASK                                   0xFFFF7FF7UL                                       /**< Mask for MODEM_STATUS                       */
#define _MODEM_STATUS_DEMODSTATE_SHIFT                       0                                                  /**< Shift value for MODEM_DEMODSTATE            */
#define _MODEM_STATUS_DEMODSTATE_MASK                        0x7UL                                              /**< Bit mask for MODEM_DEMODSTATE               */
#define _MODEM_STATUS_DEMODSTATE_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define _MODEM_STATUS_DEMODSTATE_OFF                         0x00000000UL                                       /**< Mode OFF for MODEM_STATUS                   */
#define _MODEM_STATUS_DEMODSTATE_TIMINGSEARCH                0x00000001UL                                       /**< Mode TIMINGSEARCH for MODEM_STATUS          */
#define _MODEM_STATUS_DEMODSTATE_PRESEARCH                   0x00000002UL                                       /**< Mode PRESEARCH for MODEM_STATUS             */
#define _MODEM_STATUS_DEMODSTATE_FRAMESEARCH                 0x00000003UL                                       /**< Mode FRAMESEARCH for MODEM_STATUS           */
#define _MODEM_STATUS_DEMODSTATE_RXFRAME                     0x00000004UL                                       /**< Mode RXFRAME for MODEM_STATUS               */
#define _MODEM_STATUS_DEMODSTATE_FRAMEDETMODE0               0x00000005UL                                       /**< Mode FRAMEDETMODE0 for MODEM_STATUS         */
#define MODEM_STATUS_DEMODSTATE_DEFAULT                      (_MODEM_STATUS_DEMODSTATE_DEFAULT << 0)            /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_DEMODSTATE_OFF                          (_MODEM_STATUS_DEMODSTATE_OFF << 0)                /**< Shifted mode OFF for MODEM_STATUS           */
#define MODEM_STATUS_DEMODSTATE_TIMINGSEARCH                 (_MODEM_STATUS_DEMODSTATE_TIMINGSEARCH << 0)       /**< Shifted mode TIMINGSEARCH for MODEM_STATUS  */
#define MODEM_STATUS_DEMODSTATE_PRESEARCH                    (_MODEM_STATUS_DEMODSTATE_PRESEARCH << 0)          /**< Shifted mode PRESEARCH for MODEM_STATUS     */
#define MODEM_STATUS_DEMODSTATE_FRAMESEARCH                  (_MODEM_STATUS_DEMODSTATE_FRAMESEARCH << 0)        /**< Shifted mode FRAMESEARCH for MODEM_STATUS   */
#define MODEM_STATUS_DEMODSTATE_RXFRAME                      (_MODEM_STATUS_DEMODSTATE_RXFRAME << 0)            /**< Shifted mode RXFRAME for MODEM_STATUS       */
#define MODEM_STATUS_DEMODSTATE_FRAMEDETMODE0                (_MODEM_STATUS_DEMODSTATE_FRAMEDETMODE0 << 0)      /**< Shifted mode FRAMEDETMODE0 for MODEM_STATUS */
#define MODEM_STATUS_FRAMEDETID                              (0x1UL << 4)                                       /**< Frame Detected ID                           */
#define _MODEM_STATUS_FRAMEDETID_SHIFT                       4                                                  /**< Shift value for MODEM_FRAMEDETID            */
#define _MODEM_STATUS_FRAMEDETID_MASK                        0x10UL                                             /**< Bit mask for MODEM_FRAMEDETID               */
#define _MODEM_STATUS_FRAMEDETID_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define _MODEM_STATUS_FRAMEDETID_FRAMEDET0                   0x00000000UL                                       /**< Mode FRAMEDET0 for MODEM_STATUS             */
#define _MODEM_STATUS_FRAMEDETID_FRAMEDET1                   0x00000001UL                                       /**< Mode FRAMEDET1 for MODEM_STATUS             */
#define MODEM_STATUS_FRAMEDETID_DEFAULT                      (_MODEM_STATUS_FRAMEDETID_DEFAULT << 4)            /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_FRAMEDETID_FRAMEDET0                    (_MODEM_STATUS_FRAMEDETID_FRAMEDET0 << 4)          /**< Shifted mode FRAMEDET0 for MODEM_STATUS     */
#define MODEM_STATUS_FRAMEDETID_FRAMEDET1                    (_MODEM_STATUS_FRAMEDETID_FRAMEDET1 << 4)          /**< Shifted mode FRAMEDET1 for MODEM_STATUS     */
#define MODEM_STATUS_ANTSEL                                  (0x1UL << 5)                                       /**< Selected Antenna                            */
#define _MODEM_STATUS_ANTSEL_SHIFT                           5                                                  /**< Shift value for MODEM_ANTSEL                */
#define _MODEM_STATUS_ANTSEL_MASK                            0x20UL                                             /**< Bit mask for MODEM_ANTSEL                   */
#define _MODEM_STATUS_ANTSEL_DEFAULT                         0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define _MODEM_STATUS_ANTSEL_ANTENNA0                        0x00000000UL                                       /**< Mode ANTENNA0 for MODEM_STATUS              */
#define _MODEM_STATUS_ANTSEL_ANTENNA1                        0x00000001UL                                       /**< Mode ANTENNA1 for MODEM_STATUS              */
#define MODEM_STATUS_ANTSEL_DEFAULT                          (_MODEM_STATUS_ANTSEL_DEFAULT << 5)                /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_ANTSEL_ANTENNA0                         (_MODEM_STATUS_ANTSEL_ANTENNA0 << 5)               /**< Shifted mode ANTENNA0 for MODEM_STATUS      */
#define MODEM_STATUS_ANTSEL_ANTENNA1                         (_MODEM_STATUS_ANTSEL_ANTENNA1 << 5)               /**< Shifted mode ANTENNA1 for MODEM_STATUS      */
#define MODEM_STATUS_TIMSEQINV                               (0x1UL << 6)                                       /**< Timing Sequence Inverted                    */
#define _MODEM_STATUS_TIMSEQINV_SHIFT                        6                                                  /**< Shift value for MODEM_TIMSEQINV             */
#define _MODEM_STATUS_TIMSEQINV_MASK                         0x40UL                                             /**< Bit mask for MODEM_TIMSEQINV                */
#define _MODEM_STATUS_TIMSEQINV_DEFAULT                      0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_TIMSEQINV_DEFAULT                       (_MODEM_STATUS_TIMSEQINV_DEFAULT << 6)             /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_TIMLOSTCAUSE                            (0x1UL << 7)                                       /**< Timing Lost Cause                           */
#define _MODEM_STATUS_TIMLOSTCAUSE_SHIFT                     7                                                  /**< Shift value for MODEM_TIMLOSTCAUSE          */
#define _MODEM_STATUS_TIMLOSTCAUSE_MASK                      0x80UL                                             /**< Bit mask for MODEM_TIMLOSTCAUSE             */
#define _MODEM_STATUS_TIMLOSTCAUSE_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define _MODEM_STATUS_TIMLOSTCAUSE_LOWCORR                   0x00000000UL                                       /**< Mode LOWCORR for MODEM_STATUS               */
#define _MODEM_STATUS_TIMLOSTCAUSE_TIMEOUT                   0x00000001UL                                       /**< Mode TIMEOUT for MODEM_STATUS               */
#define MODEM_STATUS_TIMLOSTCAUSE_DEFAULT                    (_MODEM_STATUS_TIMLOSTCAUSE_DEFAULT << 7)          /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_TIMLOSTCAUSE_LOWCORR                    (_MODEM_STATUS_TIMLOSTCAUSE_LOWCORR << 7)          /**< Shifted mode LOWCORR for MODEM_STATUS       */
#define MODEM_STATUS_TIMLOSTCAUSE_TIMEOUT                    (_MODEM_STATUS_TIMLOSTCAUSE_TIMEOUT << 7)          /**< Shifted mode TIMEOUT for MODEM_STATUS       */
#define MODEM_STATUS_DSADETECTED                             (0x1UL << 8)                                       /**< DSA detected                                */
#define _MODEM_STATUS_DSADETECTED_SHIFT                      8                                                  /**< Shift value for MODEM_DSADETECTED           */
#define _MODEM_STATUS_DSADETECTED_MASK                       0x100UL                                            /**< Bit mask for MODEM_DSADETECTED              */
#define _MODEM_STATUS_DSADETECTED_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_DSADETECTED_DEFAULT                     (_MODEM_STATUS_DSADETECTED_DEFAULT << 8)           /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_DSAFREQESTDONE                          (0x1UL << 9)                                       /**< DSA frequency estimation complete           */
#define _MODEM_STATUS_DSAFREQESTDONE_SHIFT                   9                                                  /**< Shift value for MODEM_DSAFREQESTDONE        */
#define _MODEM_STATUS_DSAFREQESTDONE_MASK                    0x200UL                                            /**< Bit mask for MODEM_DSAFREQESTDONE           */
#define _MODEM_STATUS_DSAFREQESTDONE_DEFAULT                 0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_DSAFREQESTDONE_DEFAULT                  (_MODEM_STATUS_DSAFREQESTDONE_DEFAULT << 9)        /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_VITERBIDEMODTIMDET                      (0x1UL << 10)                                      /**< Viterbi Demod timing detected               */
#define _MODEM_STATUS_VITERBIDEMODTIMDET_SHIFT               10                                                 /**< Shift value for MODEM_VITERBIDEMODTIMDET    */
#define _MODEM_STATUS_VITERBIDEMODTIMDET_MASK                0x400UL                                            /**< Bit mask for MODEM_VITERBIDEMODTIMDET       */
#define _MODEM_STATUS_VITERBIDEMODTIMDET_DEFAULT             0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_VITERBIDEMODTIMDET_DEFAULT              (_MODEM_STATUS_VITERBIDEMODTIMDET_DEFAULT << 10)   /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define MODEM_STATUS_VITERBIDEMODFRAMEDET                    (0x1UL << 11)                                      /**< Viterbi Demod frame detected                */
#define _MODEM_STATUS_VITERBIDEMODFRAMEDET_SHIFT             11                                                 /**< Shift value for MODEM_VITERBIDEMODFRAMEDET  */
#define _MODEM_STATUS_VITERBIDEMODFRAMEDET_MASK              0x800UL                                            /**< Bit mask for MODEM_VITERBIDEMODFRAMEDET     */
#define _MODEM_STATUS_VITERBIDEMODFRAMEDET_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_VITERBIDEMODFRAMEDET_DEFAULT            (_MODEM_STATUS_VITERBIDEMODFRAMEDET_DEFAULT << 11) /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define _MODEM_STATUS_STAMPSTATE_SHIFT                       12                                                 /**< Shift value for MODEM_STAMPSTATE            */
#define _MODEM_STATUS_STAMPSTATE_MASK                        0x7000UL                                           /**< Bit mask for MODEM_STAMPSTATE               */
#define _MODEM_STATUS_STAMPSTATE_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_STAMPSTATE_DEFAULT                      (_MODEM_STATUS_STAMPSTATE_DEFAULT << 12)           /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define _MODEM_STATUS_CORR_SHIFT                             16                                                 /**< Shift value for MODEM_CORR                  */
#define _MODEM_STATUS_CORR_MASK                              0xFF0000UL                                         /**< Bit mask for MODEM_CORR                     */
#define _MODEM_STATUS_CORR_DEFAULT                           0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_CORR_DEFAULT                            (_MODEM_STATUS_CORR_DEFAULT << 16)                 /**< Shifted mode DEFAULT for MODEM_STATUS       */
#define _MODEM_STATUS_WEAKSYMBOLS_SHIFT                      24                                                 /**< Shift value for MODEM_WEAKSYMBOLS           */
#define _MODEM_STATUS_WEAKSYMBOLS_MASK                       0xFF000000UL                                       /**< Bit mask for MODEM_WEAKSYMBOLS              */
#define _MODEM_STATUS_WEAKSYMBOLS_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for MODEM_STATUS               */
#define MODEM_STATUS_WEAKSYMBOLS_DEFAULT                     (_MODEM_STATUS_WEAKSYMBOLS_DEFAULT << 24)          /**< Shifted mode DEFAULT for MODEM_STATUS       */

/* Bit fields for MODEM TIMDETSTATUS */
#define _MODEM_TIMDETSTATUS_RESETVALUE                       0x00000000UL                                        /**< Default value for MODEM_TIMDETSTATUS        */
#define _MODEM_TIMDETSTATUS_MASK                             0x1F0FFFFFUL                                        /**< Mask for MODEM_TIMDETSTATUS                 */
#define _MODEM_TIMDETSTATUS_TIMDETCORR_SHIFT                 0                                                   /**< Shift value for MODEM_TIMDETCORR            */
#define _MODEM_TIMDETSTATUS_TIMDETCORR_MASK                  0xFFUL                                              /**< Bit mask for MODEM_TIMDETCORR               */
#define _MODEM_TIMDETSTATUS_TIMDETCORR_DEFAULT               0x00000000UL                                        /**< Mode DEFAULT for MODEM_TIMDETSTATUS         */
#define MODEM_TIMDETSTATUS_TIMDETCORR_DEFAULT                (_MODEM_TIMDETSTATUS_TIMDETCORR_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_TIMDETSTATUS */
#define _MODEM_TIMDETSTATUS_TIMDETFREQOFFEST_SHIFT           8                                                   /**< Shift value for MODEM_TIMDETFREQOFFEST      */
#define _MODEM_TIMDETSTATUS_TIMDETFREQOFFEST_MASK            0xFF00UL                                            /**< Bit mask for MODEM_TIMDETFREQOFFEST         */
#define _MODEM_TIMDETSTATUS_TIMDETFREQOFFEST_DEFAULT         0x00000000UL                                        /**< Mode DEFAULT for MODEM_TIMDETSTATUS         */
#define MODEM_TIMDETSTATUS_TIMDETFREQOFFEST_DEFAULT          (_MODEM_TIMDETSTATUS_TIMDETFREQOFFEST_DEFAULT << 8) /**< Shifted mode DEFAULT for MODEM_TIMDETSTATUS */
#define _MODEM_TIMDETSTATUS_TIMDETPREERRORS_SHIFT            16                                                  /**< Shift value for MODEM_TIMDETPREERRORS       */
#define _MODEM_TIMDETSTATUS_TIMDETPREERRORS_MASK             0xF0000UL                                           /**< Bit mask for MODEM_TIMDETPREERRORS          */
#define _MODEM_TIMDETSTATUS_TIMDETPREERRORS_DEFAULT          0x00000000UL                                        /**< Mode DEFAULT for MODEM_TIMDETSTATUS         */
#define MODEM_TIMDETSTATUS_TIMDETPREERRORS_DEFAULT           (_MODEM_TIMDETSTATUS_TIMDETPREERRORS_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_TIMDETSTATUS */
#define MODEM_TIMDETSTATUS_TIMDETPASS                        (0x1UL << 24)                                       /**< Timing detection pass                       */
#define _MODEM_TIMDETSTATUS_TIMDETPASS_SHIFT                 24                                                  /**< Shift value for MODEM_TIMDETPASS            */
#define _MODEM_TIMDETSTATUS_TIMDETPASS_MASK                  0x1000000UL                                         /**< Bit mask for MODEM_TIMDETPASS               */
#define _MODEM_TIMDETSTATUS_TIMDETPASS_DEFAULT               0x00000000UL                                        /**< Mode DEFAULT for MODEM_TIMDETSTATUS         */
#define MODEM_TIMDETSTATUS_TIMDETPASS_DEFAULT                (_MODEM_TIMDETSTATUS_TIMDETPASS_DEFAULT << 24)      /**< Shifted mode DEFAULT for MODEM_TIMDETSTATUS */
#define _MODEM_TIMDETSTATUS_TIMDETINDEX_SHIFT                25                                                  /**< Shift value for MODEM_TIMDETINDEX           */
#define _MODEM_TIMDETSTATUS_TIMDETINDEX_MASK                 0x1E000000UL                                        /**< Bit mask for MODEM_TIMDETINDEX              */
#define _MODEM_TIMDETSTATUS_TIMDETINDEX_DEFAULT              0x00000000UL                                        /**< Mode DEFAULT for MODEM_TIMDETSTATUS         */
#define MODEM_TIMDETSTATUS_TIMDETINDEX_DEFAULT               (_MODEM_TIMDETSTATUS_TIMDETINDEX_DEFAULT << 25)     /**< Shifted mode DEFAULT for MODEM_TIMDETSTATUS */

/* Bit fields for MODEM FREQOFFEST */
#define _MODEM_FREQOFFEST_RESETVALUE                         0x00000000UL                                /**< Default value for MODEM_FREQOFFEST          */
#define _MODEM_FREQOFFEST_MASK                               0xFFFF1FFFUL                                /**< Mask for MODEM_FREQOFFEST                   */
#define _MODEM_FREQOFFEST_FREQOFFEST_SHIFT                   0                                           /**< Shift value for MODEM_FREQOFFEST            */
#define _MODEM_FREQOFFEST_FREQOFFEST_MASK                    0x1FFFUL                                    /**< Bit mask for MODEM_FREQOFFEST               */
#define _MODEM_FREQOFFEST_FREQOFFEST_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for MODEM_FREQOFFEST           */
#define MODEM_FREQOFFEST_FREQOFFEST_DEFAULT                  (_MODEM_FREQOFFEST_FREQOFFEST_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_FREQOFFEST   */
#define _MODEM_FREQOFFEST_CORRVAL_SHIFT                      16                                          /**< Shift value for MODEM_CORRVAL               */
#define _MODEM_FREQOFFEST_CORRVAL_MASK                       0xFF0000UL                                  /**< Bit mask for MODEM_CORRVAL                  */
#define _MODEM_FREQOFFEST_CORRVAL_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for MODEM_FREQOFFEST           */
#define MODEM_FREQOFFEST_CORRVAL_DEFAULT                     (_MODEM_FREQOFFEST_CORRVAL_DEFAULT << 16)   /**< Shifted mode DEFAULT for MODEM_FREQOFFEST   */
#define _MODEM_FREQOFFEST_SOFTVAL_SHIFT                      24                                          /**< Shift value for MODEM_SOFTVAL               */
#define _MODEM_FREQOFFEST_SOFTVAL_MASK                       0xFF000000UL                                /**< Bit mask for MODEM_SOFTVAL                  */
#define _MODEM_FREQOFFEST_SOFTVAL_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for MODEM_FREQOFFEST           */
#define MODEM_FREQOFFEST_SOFTVAL_DEFAULT                     (_MODEM_FREQOFFEST_SOFTVAL_DEFAULT << 24)   /**< Shifted mode DEFAULT for MODEM_FREQOFFEST   */

/* Bit fields for MODEM AFCADJRX */
#define _MODEM_AFCADJRX_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_AFCADJRX            */
#define _MODEM_AFCADJRX_MASK                                 0x0007FFFFUL                            /**< Mask for MODEM_AFCADJRX                     */
#define _MODEM_AFCADJRX_AFCADJRX_SHIFT                       0                                       /**< Shift value for MODEM_AFCADJRX              */
#define _MODEM_AFCADJRX_AFCADJRX_MASK                        0x7FFFFUL                               /**< Bit mask for MODEM_AFCADJRX                 */
#define _MODEM_AFCADJRX_AFCADJRX_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for MODEM_AFCADJRX             */
#define MODEM_AFCADJRX_AFCADJRX_DEFAULT                      (_MODEM_AFCADJRX_AFCADJRX_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_AFCADJRX     */

/* Bit fields for MODEM AFCADJTX */
#define _MODEM_AFCADJTX_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_AFCADJTX            */
#define _MODEM_AFCADJTX_MASK                                 0x0007FFFFUL                            /**< Mask for MODEM_AFCADJTX                     */
#define _MODEM_AFCADJTX_AFCADJTX_SHIFT                       0                                       /**< Shift value for MODEM_AFCADJTX              */
#define _MODEM_AFCADJTX_AFCADJTX_MASK                        0x7FFFFUL                               /**< Bit mask for MODEM_AFCADJTX                 */
#define _MODEM_AFCADJTX_AFCADJTX_DEFAULT                     0x00000000UL                            /**< Mode DEFAULT for MODEM_AFCADJTX             */
#define MODEM_AFCADJTX_AFCADJTX_DEFAULT                      (_MODEM_AFCADJTX_AFCADJTX_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_AFCADJTX     */

/* Bit fields for MODEM MIXCTRL */
#define _MODEM_MIXCTRL_RESETVALUE                            0x00000000UL                                 /**< Default value for MODEM_MIXCTRL             */
#define _MODEM_MIXCTRL_MASK                                  0x0000001FUL                                 /**< Mask for MODEM_MIXCTRL                      */
#define _MODEM_MIXCTRL_ANAMIXMODE_SHIFT                      0                                            /**< Shift value for MODEM_ANAMIXMODE            */
#define _MODEM_MIXCTRL_ANAMIXMODE_MASK                       0xFUL                                        /**< Bit mask for MODEM_ANAMIXMODE               */
#define _MODEM_MIXCTRL_ANAMIXMODE_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for MODEM_MIXCTRL              */
#define _MODEM_MIXCTRL_ANAMIXMODE_NORMAL                     0x00000000UL                                 /**< Mode NORMAL for MODEM_MIXCTRL               */
#define _MODEM_MIXCTRL_ANAMIXMODE_IPQPIQSWAP                 0x00000001UL                                 /**< Mode IPQPIQSWAP for MODEM_MIXCTRL           */
#define _MODEM_MIXCTRL_ANAMIXMODE_IPQN                       0x00000002UL                                 /**< Mode IPQN for MODEM_MIXCTRL                 */
#define _MODEM_MIXCTRL_ANAMIXMODE_IPQNIQSWAP                 0x00000003UL                                 /**< Mode IPQNIQSWAP for MODEM_MIXCTRL           */
#define _MODEM_MIXCTRL_ANAMIXMODE_INQP                       0x00000004UL                                 /**< Mode INQP for MODEM_MIXCTRL                 */
#define _MODEM_MIXCTRL_ANAMIXMODE_INQPIQSWAP                 0x00000005UL                                 /**< Mode INQPIQSWAP for MODEM_MIXCTRL           */
#define _MODEM_MIXCTRL_ANAMIXMODE_INQN                       0x00000006UL                                 /**< Mode INQN for MODEM_MIXCTRL                 */
#define _MODEM_MIXCTRL_ANAMIXMODE_INQNIQSWAP                 0x00000007UL                                 /**< Mode INQNIQSWAP for MODEM_MIXCTRL           */
#define _MODEM_MIXCTRL_ANAMIXMODE_UPCONVERT                  0x00000008UL                                 /**< Mode UPCONVERT for MODEM_MIXCTRL            */
#define _MODEM_MIXCTRL_ANAMIXMODE_DOWNCONVERT                0x00000009UL                                 /**< Mode DOWNCONVERT for MODEM_MIXCTRL          */
#define MODEM_MIXCTRL_ANAMIXMODE_DEFAULT                     (_MODEM_MIXCTRL_ANAMIXMODE_DEFAULT << 0)     /**< Shifted mode DEFAULT for MODEM_MIXCTRL      */
#define MODEM_MIXCTRL_ANAMIXMODE_NORMAL                      (_MODEM_MIXCTRL_ANAMIXMODE_NORMAL << 0)      /**< Shifted mode NORMAL for MODEM_MIXCTRL       */
#define MODEM_MIXCTRL_ANAMIXMODE_IPQPIQSWAP                  (_MODEM_MIXCTRL_ANAMIXMODE_IPQPIQSWAP << 0)  /**< Shifted mode IPQPIQSWAP for MODEM_MIXCTRL   */
#define MODEM_MIXCTRL_ANAMIXMODE_IPQN                        (_MODEM_MIXCTRL_ANAMIXMODE_IPQN << 0)        /**< Shifted mode IPQN for MODEM_MIXCTRL         */
#define MODEM_MIXCTRL_ANAMIXMODE_IPQNIQSWAP                  (_MODEM_MIXCTRL_ANAMIXMODE_IPQNIQSWAP << 0)  /**< Shifted mode IPQNIQSWAP for MODEM_MIXCTRL   */
#define MODEM_MIXCTRL_ANAMIXMODE_INQP                        (_MODEM_MIXCTRL_ANAMIXMODE_INQP << 0)        /**< Shifted mode INQP for MODEM_MIXCTRL         */
#define MODEM_MIXCTRL_ANAMIXMODE_INQPIQSWAP                  (_MODEM_MIXCTRL_ANAMIXMODE_INQPIQSWAP << 0)  /**< Shifted mode INQPIQSWAP for MODEM_MIXCTRL   */
#define MODEM_MIXCTRL_ANAMIXMODE_INQN                        (_MODEM_MIXCTRL_ANAMIXMODE_INQN << 0)        /**< Shifted mode INQN for MODEM_MIXCTRL         */
#define MODEM_MIXCTRL_ANAMIXMODE_INQNIQSWAP                  (_MODEM_MIXCTRL_ANAMIXMODE_INQNIQSWAP << 0)  /**< Shifted mode INQNIQSWAP for MODEM_MIXCTRL   */
#define MODEM_MIXCTRL_ANAMIXMODE_UPCONVERT                   (_MODEM_MIXCTRL_ANAMIXMODE_UPCONVERT << 0)   /**< Shifted mode UPCONVERT for MODEM_MIXCTRL    */
#define MODEM_MIXCTRL_ANAMIXMODE_DOWNCONVERT                 (_MODEM_MIXCTRL_ANAMIXMODE_DOWNCONVERT << 0) /**< Shifted mode DOWNCONVERT for MODEM_MIXCTRL  */
#define MODEM_MIXCTRL_DIGIQSWAPEN                            (0x1UL << 4)                                 /**< Digital I/Q swap enable                     */
#define _MODEM_MIXCTRL_DIGIQSWAPEN_SHIFT                     4                                            /**< Shift value for MODEM_DIGIQSWAPEN           */
#define _MODEM_MIXCTRL_DIGIQSWAPEN_MASK                      0x10UL                                       /**< Bit mask for MODEM_DIGIQSWAPEN              */
#define _MODEM_MIXCTRL_DIGIQSWAPEN_DEFAULT                   0x00000000UL                                 /**< Mode DEFAULT for MODEM_MIXCTRL              */
#define MODEM_MIXCTRL_DIGIQSWAPEN_DEFAULT                    (_MODEM_MIXCTRL_DIGIQSWAPEN_DEFAULT << 4)    /**< Shifted mode DEFAULT for MODEM_MIXCTRL      */

/* Bit fields for MODEM CTRL0 */
#define _MODEM_CTRL0_RESETVALUE                              0x00000000UL                                  /**< Default value for MODEM_CTRL0               */
#define _MODEM_CTRL0_MASK                                    0xFFFFFFFFUL                                  /**< Mask for MODEM_CTRL0                        */
#define MODEM_CTRL0_FDM0DIFFDIS                              (0x1UL << 0)                                  /**< Frame Detection Mode 0 disable              */
#define _MODEM_CTRL0_FDM0DIFFDIS_SHIFT                       0                                             /**< Shift value for MODEM_FDM0DIFFDIS           */
#define _MODEM_CTRL0_FDM0DIFFDIS_MASK                        0x1UL                                         /**< Bit mask for MODEM_FDM0DIFFDIS              */
#define _MODEM_CTRL0_FDM0DIFFDIS_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define MODEM_CTRL0_FDM0DIFFDIS_DEFAULT                      (_MODEM_CTRL0_FDM0DIFFDIS_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define _MODEM_CTRL0_MAPFSK_SHIFT                            1                                             /**< Shift value for MODEM_MAPFSK                */
#define _MODEM_CTRL0_MAPFSK_MASK                             0xEUL                                         /**< Bit mask for MODEM_MAPFSK                   */
#define _MODEM_CTRL0_MAPFSK_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_MAPFSK_MAP0                             0x00000000UL                                  /**< Mode MAP0 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP1                             0x00000001UL                                  /**< Mode MAP1 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP2                             0x00000002UL                                  /**< Mode MAP2 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP3                             0x00000003UL                                  /**< Mode MAP3 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP4                             0x00000004UL                                  /**< Mode MAP4 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP5                             0x00000005UL                                  /**< Mode MAP5 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP6                             0x00000006UL                                  /**< Mode MAP6 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MAPFSK_MAP7                             0x00000007UL                                  /**< Mode MAP7 for MODEM_CTRL0                   */
#define MODEM_CTRL0_MAPFSK_DEFAULT                           (_MODEM_CTRL0_MAPFSK_DEFAULT << 1)            /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_MAPFSK_MAP0                              (_MODEM_CTRL0_MAPFSK_MAP0 << 1)               /**< Shifted mode MAP0 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP1                              (_MODEM_CTRL0_MAPFSK_MAP1 << 1)               /**< Shifted mode MAP1 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP2                              (_MODEM_CTRL0_MAPFSK_MAP2 << 1)               /**< Shifted mode MAP2 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP3                              (_MODEM_CTRL0_MAPFSK_MAP3 << 1)               /**< Shifted mode MAP3 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP4                              (_MODEM_CTRL0_MAPFSK_MAP4 << 1)               /**< Shifted mode MAP4 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP5                              (_MODEM_CTRL0_MAPFSK_MAP5 << 1)               /**< Shifted mode MAP5 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP6                              (_MODEM_CTRL0_MAPFSK_MAP6 << 1)               /**< Shifted mode MAP6 for MODEM_CTRL0           */
#define MODEM_CTRL0_MAPFSK_MAP7                              (_MODEM_CTRL0_MAPFSK_MAP7 << 1)               /**< Shifted mode MAP7 for MODEM_CTRL0           */
#define _MODEM_CTRL0_CODING_SHIFT                            4                                             /**< Shift value for MODEM_CODING                */
#define _MODEM_CTRL0_CODING_MASK                             0x30UL                                        /**< Bit mask for MODEM_CODING                   */
#define _MODEM_CTRL0_CODING_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_CODING_NRZ                              0x00000000UL                                  /**< Mode NRZ for MODEM_CTRL0                    */
#define _MODEM_CTRL0_CODING_MANCHESTER                       0x00000001UL                                  /**< Mode MANCHESTER for MODEM_CTRL0             */
#define _MODEM_CTRL0_CODING_DSSS                             0x00000002UL                                  /**< Mode DSSS for MODEM_CTRL0                   */
#define _MODEM_CTRL0_CODING_LINECODE                         0x00000003UL                                  /**< Mode LINECODE for MODEM_CTRL0               */
#define MODEM_CTRL0_CODING_DEFAULT                           (_MODEM_CTRL0_CODING_DEFAULT << 4)            /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_CODING_NRZ                               (_MODEM_CTRL0_CODING_NRZ << 4)                /**< Shifted mode NRZ for MODEM_CTRL0            */
#define MODEM_CTRL0_CODING_MANCHESTER                        (_MODEM_CTRL0_CODING_MANCHESTER << 4)         /**< Shifted mode MANCHESTER for MODEM_CTRL0     */
#define MODEM_CTRL0_CODING_DSSS                              (_MODEM_CTRL0_CODING_DSSS << 4)               /**< Shifted mode DSSS for MODEM_CTRL0           */
#define MODEM_CTRL0_CODING_LINECODE                          (_MODEM_CTRL0_CODING_LINECODE << 4)           /**< Shifted mode LINECODE for MODEM_CTRL0       */
#define _MODEM_CTRL0_MODFORMAT_SHIFT                         6                                             /**< Shift value for MODEM_MODFORMAT             */
#define _MODEM_CTRL0_MODFORMAT_MASK                          0x1C0UL                                       /**< Bit mask for MODEM_MODFORMAT                */
#define _MODEM_CTRL0_MODFORMAT_DEFAULT                       0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_MODFORMAT_FSK2                          0x00000000UL                                  /**< Mode FSK2 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MODFORMAT_FSK4                          0x00000001UL                                  /**< Mode FSK4 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MODFORMAT_BPSK                          0x00000002UL                                  /**< Mode BPSK for MODEM_CTRL0                   */
#define _MODEM_CTRL0_MODFORMAT_DBPSK                         0x00000003UL                                  /**< Mode DBPSK for MODEM_CTRL0                  */
#define _MODEM_CTRL0_MODFORMAT_OQPSK                         0x00000004UL                                  /**< Mode OQPSK for MODEM_CTRL0                  */
#define _MODEM_CTRL0_MODFORMAT_MSK                           0x00000005UL                                  /**< Mode MSK for MODEM_CTRL0                    */
#define _MODEM_CTRL0_MODFORMAT_OOKASK                        0x00000006UL                                  /**< Mode OOKASK for MODEM_CTRL0                 */
#define MODEM_CTRL0_MODFORMAT_DEFAULT                        (_MODEM_CTRL0_MODFORMAT_DEFAULT << 6)         /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_MODFORMAT_FSK2                           (_MODEM_CTRL0_MODFORMAT_FSK2 << 6)            /**< Shifted mode FSK2 for MODEM_CTRL0           */
#define MODEM_CTRL0_MODFORMAT_FSK4                           (_MODEM_CTRL0_MODFORMAT_FSK4 << 6)            /**< Shifted mode FSK4 for MODEM_CTRL0           */
#define MODEM_CTRL0_MODFORMAT_BPSK                           (_MODEM_CTRL0_MODFORMAT_BPSK << 6)            /**< Shifted mode BPSK for MODEM_CTRL0           */
#define MODEM_CTRL0_MODFORMAT_DBPSK                          (_MODEM_CTRL0_MODFORMAT_DBPSK << 6)           /**< Shifted mode DBPSK for MODEM_CTRL0          */
#define MODEM_CTRL0_MODFORMAT_OQPSK                          (_MODEM_CTRL0_MODFORMAT_OQPSK << 6)           /**< Shifted mode OQPSK for MODEM_CTRL0          */
#define MODEM_CTRL0_MODFORMAT_MSK                            (_MODEM_CTRL0_MODFORMAT_MSK << 6)             /**< Shifted mode MSK for MODEM_CTRL0            */
#define MODEM_CTRL0_MODFORMAT_OOKASK                         (_MODEM_CTRL0_MODFORMAT_OOKASK << 6)          /**< Shifted mode OOKASK for MODEM_CTRL0         */
#define MODEM_CTRL0_DUALCORROPTDIS                           (0x1UL << 9)                                  /**< Dual Correlation Optimization Disable       */
#define _MODEM_CTRL0_DUALCORROPTDIS_SHIFT                    9                                             /**< Shift value for MODEM_DUALCORROPTDIS        */
#define _MODEM_CTRL0_DUALCORROPTDIS_MASK                     0x200UL                                       /**< Bit mask for MODEM_DUALCORROPTDIS           */
#define _MODEM_CTRL0_DUALCORROPTDIS_DEFAULT                  0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define MODEM_CTRL0_DUALCORROPTDIS_DEFAULT                   (_MODEM_CTRL0_DUALCORROPTDIS_DEFAULT << 9)    /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_OOKASYNCPIN                              (0x1UL << 10)                                 /**< OOK asynchronous pin mode                   */
#define _MODEM_CTRL0_OOKASYNCPIN_SHIFT                       10                                            /**< Shift value for MODEM_OOKASYNCPIN           */
#define _MODEM_CTRL0_OOKASYNCPIN_MASK                        0x400UL                                       /**< Bit mask for MODEM_OOKASYNCPIN              */
#define _MODEM_CTRL0_OOKASYNCPIN_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define MODEM_CTRL0_OOKASYNCPIN_DEFAULT                      (_MODEM_CTRL0_OOKASYNCPIN_DEFAULT << 10)      /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define _MODEM_CTRL0_DSSSLEN_SHIFT                           11                                            /**< Shift value for MODEM_DSSSLEN               */
#define _MODEM_CTRL0_DSSSLEN_MASK                            0xF800UL                                      /**< Bit mask for MODEM_DSSSLEN                  */
#define _MODEM_CTRL0_DSSSLEN_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define MODEM_CTRL0_DSSSLEN_DEFAULT                          (_MODEM_CTRL0_DSSSLEN_DEFAULT << 11)          /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define _MODEM_CTRL0_DSSSSHIFTS_SHIFT                        16                                            /**< Shift value for MODEM_DSSSSHIFTS            */
#define _MODEM_CTRL0_DSSSSHIFTS_MASK                         0x70000UL                                     /**< Bit mask for MODEM_DSSSSHIFTS               */
#define _MODEM_CTRL0_DSSSSHIFTS_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_DSSSSHIFTS_NOSHIFT                      0x00000000UL                                  /**< Mode NOSHIFT for MODEM_CTRL0                */
#define _MODEM_CTRL0_DSSSSHIFTS_SHIFT1                       0x00000001UL                                  /**< Mode SHIFT1 for MODEM_CTRL0                 */
#define _MODEM_CTRL0_DSSSSHIFTS_SHIFT2                       0x00000002UL                                  /**< Mode SHIFT2 for MODEM_CTRL0                 */
#define _MODEM_CTRL0_DSSSSHIFTS_SHIFT4                       0x00000003UL                                  /**< Mode SHIFT4 for MODEM_CTRL0                 */
#define _MODEM_CTRL0_DSSSSHIFTS_SHIFT8                       0x00000004UL                                  /**< Mode SHIFT8 for MODEM_CTRL0                 */
#define _MODEM_CTRL0_DSSSSHIFTS_SHIFT16                      0x00000005UL                                  /**< Mode SHIFT16 for MODEM_CTRL0                */
#define MODEM_CTRL0_DSSSSHIFTS_DEFAULT                       (_MODEM_CTRL0_DSSSSHIFTS_DEFAULT << 16)       /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_DSSSSHIFTS_NOSHIFT                       (_MODEM_CTRL0_DSSSSHIFTS_NOSHIFT << 16)       /**< Shifted mode NOSHIFT for MODEM_CTRL0        */
#define MODEM_CTRL0_DSSSSHIFTS_SHIFT1                        (_MODEM_CTRL0_DSSSSHIFTS_SHIFT1 << 16)        /**< Shifted mode SHIFT1 for MODEM_CTRL0         */
#define MODEM_CTRL0_DSSSSHIFTS_SHIFT2                        (_MODEM_CTRL0_DSSSSHIFTS_SHIFT2 << 16)        /**< Shifted mode SHIFT2 for MODEM_CTRL0         */
#define MODEM_CTRL0_DSSSSHIFTS_SHIFT4                        (_MODEM_CTRL0_DSSSSHIFTS_SHIFT4 << 16)        /**< Shifted mode SHIFT4 for MODEM_CTRL0         */
#define MODEM_CTRL0_DSSSSHIFTS_SHIFT8                        (_MODEM_CTRL0_DSSSSHIFTS_SHIFT8 << 16)        /**< Shifted mode SHIFT8 for MODEM_CTRL0         */
#define MODEM_CTRL0_DSSSSHIFTS_SHIFT16                       (_MODEM_CTRL0_DSSSSHIFTS_SHIFT16 << 16)       /**< Shifted mode SHIFT16 for MODEM_CTRL0        */
#define _MODEM_CTRL0_DSSSDOUBLE_SHIFT                        19                                            /**< Shift value for MODEM_DSSSDOUBLE            */
#define _MODEM_CTRL0_DSSSDOUBLE_MASK                         0x180000UL                                    /**< Bit mask for MODEM_DSSSDOUBLE               */
#define _MODEM_CTRL0_DSSSDOUBLE_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_DSSSDOUBLE_DIS                          0x00000000UL                                  /**< Mode DIS for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DSSSDOUBLE_INV                          0x00000001UL                                  /**< Mode INV for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DSSSDOUBLE_CONJ                         0x00000002UL                                  /**< Mode CONJ for MODEM_CTRL0                   */
#define MODEM_CTRL0_DSSSDOUBLE_DEFAULT                       (_MODEM_CTRL0_DSSSDOUBLE_DEFAULT << 19)       /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_DSSSDOUBLE_DIS                           (_MODEM_CTRL0_DSSSDOUBLE_DIS << 19)           /**< Shifted mode DIS for MODEM_CTRL0            */
#define MODEM_CTRL0_DSSSDOUBLE_INV                           (_MODEM_CTRL0_DSSSDOUBLE_INV << 19)           /**< Shifted mode INV for MODEM_CTRL0            */
#define MODEM_CTRL0_DSSSDOUBLE_CONJ                          (_MODEM_CTRL0_DSSSDOUBLE_CONJ << 19)          /**< Shifted mode CONJ for MODEM_CTRL0           */
#define MODEM_CTRL0_DETDIS                                   (0x1UL << 21)                                 /**< Detection disable                           */
#define _MODEM_CTRL0_DETDIS_SHIFT                            21                                            /**< Shift value for MODEM_DETDIS                */
#define _MODEM_CTRL0_DETDIS_MASK                             0x200000UL                                    /**< Bit mask for MODEM_DETDIS                   */
#define _MODEM_CTRL0_DETDIS_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define MODEM_CTRL0_DETDIS_DEFAULT                           (_MODEM_CTRL0_DETDIS_DEFAULT << 21)           /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define _MODEM_CTRL0_DIFFENCMODE_SHIFT                       22                                            /**< Shift value for MODEM_DIFFENCMODE           */
#define _MODEM_CTRL0_DIFFENCMODE_MASK                        0x1C00000UL                                   /**< Bit mask for MODEM_DIFFENCMODE              */
#define _MODEM_CTRL0_DIFFENCMODE_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_DIFFENCMODE_DIS                         0x00000000UL                                  /**< Mode DIS for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DIFFENCMODE_RR0                         0x00000001UL                                  /**< Mode RR0 for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DIFFENCMODE_RE0                         0x00000002UL                                  /**< Mode RE0 for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DIFFENCMODE_RR1                         0x00000003UL                                  /**< Mode RR1 for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DIFFENCMODE_RE1                         0x00000004UL                                  /**< Mode RE1 for MODEM_CTRL0                    */
#define MODEM_CTRL0_DIFFENCMODE_DEFAULT                      (_MODEM_CTRL0_DIFFENCMODE_DEFAULT << 22)      /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_DIFFENCMODE_DIS                          (_MODEM_CTRL0_DIFFENCMODE_DIS << 22)          /**< Shifted mode DIS for MODEM_CTRL0            */
#define MODEM_CTRL0_DIFFENCMODE_RR0                          (_MODEM_CTRL0_DIFFENCMODE_RR0 << 22)          /**< Shifted mode RR0 for MODEM_CTRL0            */
#define MODEM_CTRL0_DIFFENCMODE_RE0                          (_MODEM_CTRL0_DIFFENCMODE_RE0 << 22)          /**< Shifted mode RE0 for MODEM_CTRL0            */
#define MODEM_CTRL0_DIFFENCMODE_RR1                          (_MODEM_CTRL0_DIFFENCMODE_RR1 << 22)          /**< Shifted mode RR1 for MODEM_CTRL0            */
#define MODEM_CTRL0_DIFFENCMODE_RE1                          (_MODEM_CTRL0_DIFFENCMODE_RE1 << 22)          /**< Shifted mode RE1 for MODEM_CTRL0            */
#define _MODEM_CTRL0_SHAPING_SHIFT                           25                                            /**< Shift value for MODEM_SHAPING               */
#define _MODEM_CTRL0_SHAPING_MASK                            0x6000000UL                                   /**< Bit mask for MODEM_SHAPING                  */
#define _MODEM_CTRL0_SHAPING_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_SHAPING_DISABLED                        0x00000000UL                                  /**< Mode DISABLED for MODEM_CTRL0               */
#define _MODEM_CTRL0_SHAPING_ODDLENGTH                       0x00000001UL                                  /**< Mode ODDLENGTH for MODEM_CTRL0              */
#define _MODEM_CTRL0_SHAPING_EVENLENGTH                      0x00000002UL                                  /**< Mode EVENLENGTH for MODEM_CTRL0             */
#define _MODEM_CTRL0_SHAPING_ASYMMETRIC                      0x00000003UL                                  /**< Mode ASYMMETRIC for MODEM_CTRL0             */
#define MODEM_CTRL0_SHAPING_DEFAULT                          (_MODEM_CTRL0_SHAPING_DEFAULT << 25)          /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_SHAPING_DISABLED                         (_MODEM_CTRL0_SHAPING_DISABLED << 25)         /**< Shifted mode DISABLED for MODEM_CTRL0       */
#define MODEM_CTRL0_SHAPING_ODDLENGTH                        (_MODEM_CTRL0_SHAPING_ODDLENGTH << 25)        /**< Shifted mode ODDLENGTH for MODEM_CTRL0      */
#define MODEM_CTRL0_SHAPING_EVENLENGTH                       (_MODEM_CTRL0_SHAPING_EVENLENGTH << 25)       /**< Shifted mode EVENLENGTH for MODEM_CTRL0     */
#define MODEM_CTRL0_SHAPING_ASYMMETRIC                       (_MODEM_CTRL0_SHAPING_ASYMMETRIC << 25)       /**< Shifted mode ASYMMETRIC for MODEM_CTRL0     */
#define _MODEM_CTRL0_DEMODRAWDATASEL_SHIFT                   27                                            /**< Shift value for MODEM_DEMODRAWDATASEL       */
#define _MODEM_CTRL0_DEMODRAWDATASEL_MASK                    0x38000000UL                                  /**< Bit mask for MODEM_DEMODRAWDATASEL          */
#define _MODEM_CTRL0_DEMODRAWDATASEL_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_DEMODRAWDATASEL_DIS                     0x00000000UL                                  /**< Mode DIS for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DEMODRAWDATASEL_ENTROPY                 0x00000001UL                                  /**< Mode ENTROPY for MODEM_CTRL0                */
#define _MODEM_CTRL0_DEMODRAWDATASEL_ADC                     0x00000002UL                                  /**< Mode ADC for MODEM_CTRL0                    */
#define _MODEM_CTRL0_DEMODRAWDATASEL_FILTLSB                 0x00000003UL                                  /**< Mode FILTLSB for MODEM_CTRL0                */
#define _MODEM_CTRL0_DEMODRAWDATASEL_FILTMSB                 0x00000004UL                                  /**< Mode FILTMSB for MODEM_CTRL0                */
#define _MODEM_CTRL0_DEMODRAWDATASEL_FILTFULL                0x00000005UL                                  /**< Mode FILTFULL for MODEM_CTRL0               */
#define _MODEM_CTRL0_DEMODRAWDATASEL_FREQ                    0x00000006UL                                  /**< Mode FREQ for MODEM_CTRL0                   */
#define _MODEM_CTRL0_DEMODRAWDATASEL_DEMOD                   0x00000007UL                                  /**< Mode DEMOD for MODEM_CTRL0                  */
#define MODEM_CTRL0_DEMODRAWDATASEL_DEFAULT                  (_MODEM_CTRL0_DEMODRAWDATASEL_DEFAULT << 27)  /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_DEMODRAWDATASEL_DIS                      (_MODEM_CTRL0_DEMODRAWDATASEL_DIS << 27)      /**< Shifted mode DIS for MODEM_CTRL0            */
#define MODEM_CTRL0_DEMODRAWDATASEL_ENTROPY                  (_MODEM_CTRL0_DEMODRAWDATASEL_ENTROPY << 27)  /**< Shifted mode ENTROPY for MODEM_CTRL0        */
#define MODEM_CTRL0_DEMODRAWDATASEL_ADC                      (_MODEM_CTRL0_DEMODRAWDATASEL_ADC << 27)      /**< Shifted mode ADC for MODEM_CTRL0            */
#define MODEM_CTRL0_DEMODRAWDATASEL_FILTLSB                  (_MODEM_CTRL0_DEMODRAWDATASEL_FILTLSB << 27)  /**< Shifted mode FILTLSB for MODEM_CTRL0        */
#define MODEM_CTRL0_DEMODRAWDATASEL_FILTMSB                  (_MODEM_CTRL0_DEMODRAWDATASEL_FILTMSB << 27)  /**< Shifted mode FILTMSB for MODEM_CTRL0        */
#define MODEM_CTRL0_DEMODRAWDATASEL_FILTFULL                 (_MODEM_CTRL0_DEMODRAWDATASEL_FILTFULL << 27) /**< Shifted mode FILTFULL for MODEM_CTRL0       */
#define MODEM_CTRL0_DEMODRAWDATASEL_FREQ                     (_MODEM_CTRL0_DEMODRAWDATASEL_FREQ << 27)     /**< Shifted mode FREQ for MODEM_CTRL0           */
#define MODEM_CTRL0_DEMODRAWDATASEL_DEMOD                    (_MODEM_CTRL0_DEMODRAWDATASEL_DEMOD << 27)    /**< Shifted mode DEMOD for MODEM_CTRL0          */
#define _MODEM_CTRL0_FRAMEDETDEL_SHIFT                       30                                            /**< Shift value for MODEM_FRAMEDETDEL           */
#define _MODEM_CTRL0_FRAMEDETDEL_MASK                        0xC0000000UL                                  /**< Bit mask for MODEM_FRAMEDETDEL              */
#define _MODEM_CTRL0_FRAMEDETDEL_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL0                */
#define _MODEM_CTRL0_FRAMEDETDEL_DEL0                        0x00000000UL                                  /**< Mode DEL0 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_FRAMEDETDEL_DEL8                        0x00000001UL                                  /**< Mode DEL8 for MODEM_CTRL0                   */
#define _MODEM_CTRL0_FRAMEDETDEL_DEL16                       0x00000002UL                                  /**< Mode DEL16 for MODEM_CTRL0                  */
#define _MODEM_CTRL0_FRAMEDETDEL_DEL32                       0x00000003UL                                  /**< Mode DEL32 for MODEM_CTRL0                  */
#define MODEM_CTRL0_FRAMEDETDEL_DEFAULT                      (_MODEM_CTRL0_FRAMEDETDEL_DEFAULT << 30)      /**< Shifted mode DEFAULT for MODEM_CTRL0        */
#define MODEM_CTRL0_FRAMEDETDEL_DEL0                         (_MODEM_CTRL0_FRAMEDETDEL_DEL0 << 30)         /**< Shifted mode DEL0 for MODEM_CTRL0           */
#define MODEM_CTRL0_FRAMEDETDEL_DEL8                         (_MODEM_CTRL0_FRAMEDETDEL_DEL8 << 30)         /**< Shifted mode DEL8 for MODEM_CTRL0           */
#define MODEM_CTRL0_FRAMEDETDEL_DEL16                        (_MODEM_CTRL0_FRAMEDETDEL_DEL16 << 30)        /**< Shifted mode DEL16 for MODEM_CTRL0          */
#define MODEM_CTRL0_FRAMEDETDEL_DEL32                        (_MODEM_CTRL0_FRAMEDETDEL_DEL32 << 30)        /**< Shifted mode DEL32 for MODEM_CTRL0          */

/* Bit fields for MODEM CTRL1 */
#define _MODEM_CTRL1_RESETVALUE                              0x00000000UL                               /**< Default value for MODEM_CTRL1               */
#define _MODEM_CTRL1_MASK                                    0xFFFFDFFFUL                               /**< Mask for MODEM_CTRL1                        */
#define _MODEM_CTRL1_SYNCBITS_SHIFT                          0                                          /**< Shift value for MODEM_SYNCBITS              */
#define _MODEM_CTRL1_SYNCBITS_MASK                           0x1FUL                                     /**< Bit mask for MODEM_SYNCBITS                 */
#define _MODEM_CTRL1_SYNCBITS_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define MODEM_CTRL1_SYNCBITS_DEFAULT                         (_MODEM_CTRL1_SYNCBITS_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define _MODEM_CTRL1_SYNCERRORS_SHIFT                        5                                          /**< Shift value for MODEM_SYNCERRORS            */
#define _MODEM_CTRL1_SYNCERRORS_MASK                         0x1E0UL                                    /**< Bit mask for MODEM_SYNCERRORS               */
#define _MODEM_CTRL1_SYNCERRORS_DEFAULT                      0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define MODEM_CTRL1_SYNCERRORS_DEFAULT                       (_MODEM_CTRL1_SYNCERRORS_DEFAULT << 5)     /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define MODEM_CTRL1_DUALSYNC                                 (0x1UL << 9)                               /**< Dual sync words.                            */
#define _MODEM_CTRL1_DUALSYNC_SHIFT                          9                                          /**< Shift value for MODEM_DUALSYNC              */
#define _MODEM_CTRL1_DUALSYNC_MASK                           0x200UL                                    /**< Bit mask for MODEM_DUALSYNC                 */
#define _MODEM_CTRL1_DUALSYNC_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define _MODEM_CTRL1_DUALSYNC_DISABLED                       0x00000000UL                               /**< Mode DISABLED for MODEM_CTRL1               */
#define _MODEM_CTRL1_DUALSYNC_ENABLED                        0x00000001UL                               /**< Mode ENABLED for MODEM_CTRL1                */
#define MODEM_CTRL1_DUALSYNC_DEFAULT                         (_MODEM_CTRL1_DUALSYNC_DEFAULT << 9)       /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define MODEM_CTRL1_DUALSYNC_DISABLED                        (_MODEM_CTRL1_DUALSYNC_DISABLED << 9)      /**< Shifted mode DISABLED for MODEM_CTRL1       */
#define MODEM_CTRL1_DUALSYNC_ENABLED                         (_MODEM_CTRL1_DUALSYNC_ENABLED << 9)       /**< Shifted mode ENABLED for MODEM_CTRL1        */
#define MODEM_CTRL1_TXSYNC                                   (0x1UL << 10)                              /**< Transmit sync word.                         */
#define _MODEM_CTRL1_TXSYNC_SHIFT                            10                                         /**< Shift value for MODEM_TXSYNC                */
#define _MODEM_CTRL1_TXSYNC_MASK                             0x400UL                                    /**< Bit mask for MODEM_TXSYNC                   */
#define _MODEM_CTRL1_TXSYNC_DEFAULT                          0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define _MODEM_CTRL1_TXSYNC_SYNC0                            0x00000000UL                               /**< Mode SYNC0 for MODEM_CTRL1                  */
#define _MODEM_CTRL1_TXSYNC_SYNC1                            0x00000001UL                               /**< Mode SYNC1 for MODEM_CTRL1                  */
#define MODEM_CTRL1_TXSYNC_DEFAULT                           (_MODEM_CTRL1_TXSYNC_DEFAULT << 10)        /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define MODEM_CTRL1_TXSYNC_SYNC0                             (_MODEM_CTRL1_TXSYNC_SYNC0 << 10)          /**< Shifted mode SYNC0 for MODEM_CTRL1          */
#define MODEM_CTRL1_TXSYNC_SYNC1                             (_MODEM_CTRL1_TXSYNC_SYNC1 << 10)          /**< Shifted mode SYNC1 for MODEM_CTRL1          */
#define MODEM_CTRL1_SYNCDATA                                 (0x1UL << 11)                              /**< Sync data.                                  */
#define _MODEM_CTRL1_SYNCDATA_SHIFT                          11                                         /**< Shift value for MODEM_SYNCDATA              */
#define _MODEM_CTRL1_SYNCDATA_MASK                           0x800UL                                    /**< Bit mask for MODEM_SYNCDATA                 */
#define _MODEM_CTRL1_SYNCDATA_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define _MODEM_CTRL1_SYNCDATA_DISABLED                       0x00000000UL                               /**< Mode DISABLED for MODEM_CTRL1               */
#define _MODEM_CTRL1_SYNCDATA_ENABLED                        0x00000001UL                               /**< Mode ENABLED for MODEM_CTRL1                */
#define MODEM_CTRL1_SYNCDATA_DEFAULT                         (_MODEM_CTRL1_SYNCDATA_DEFAULT << 11)      /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define MODEM_CTRL1_SYNCDATA_DISABLED                        (_MODEM_CTRL1_SYNCDATA_DISABLED << 11)     /**< Shifted mode DISABLED for MODEM_CTRL1       */
#define MODEM_CTRL1_SYNCDATA_ENABLED                         (_MODEM_CTRL1_SYNCDATA_ENABLED << 11)      /**< Shifted mode ENABLED for MODEM_CTRL1        */
#define MODEM_CTRL1_SYNC1INV                                 (0x1UL << 12)                              /**< SYNC1 invert.                               */
#define _MODEM_CTRL1_SYNC1INV_SHIFT                          12                                         /**< Shift value for MODEM_SYNC1INV              */
#define _MODEM_CTRL1_SYNC1INV_MASK                           0x1000UL                                   /**< Bit mask for MODEM_SYNC1INV                 */
#define _MODEM_CTRL1_SYNC1INV_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define MODEM_CTRL1_SYNC1INV_DEFAULT                         (_MODEM_CTRL1_SYNC1INV_DEFAULT << 12)      /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define _MODEM_CTRL1_COMPMODE_SHIFT                          14                                         /**< Shift value for MODEM_COMPMODE              */
#define _MODEM_CTRL1_COMPMODE_MASK                           0xC000UL                                   /**< Bit mask for MODEM_COMPMODE                 */
#define _MODEM_CTRL1_COMPMODE_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define _MODEM_CTRL1_COMPMODE_DIS                            0x00000000UL                               /**< Mode DIS for MODEM_CTRL1                    */
#define _MODEM_CTRL1_COMPMODE_PRELOCK                        0x00000001UL                               /**< Mode PRELOCK for MODEM_CTRL1                */
#define _MODEM_CTRL1_COMPMODE_FRAMELOCK                      0x00000002UL                               /**< Mode FRAMELOCK for MODEM_CTRL1              */
#define _MODEM_CTRL1_COMPMODE_NOLOCK                         0x00000003UL                               /**< Mode NOLOCK for MODEM_CTRL1                 */
#define MODEM_CTRL1_COMPMODE_DEFAULT                         (_MODEM_CTRL1_COMPMODE_DEFAULT << 14)      /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define MODEM_CTRL1_COMPMODE_DIS                             (_MODEM_CTRL1_COMPMODE_DIS << 14)          /**< Shifted mode DIS for MODEM_CTRL1            */
#define MODEM_CTRL1_COMPMODE_PRELOCK                         (_MODEM_CTRL1_COMPMODE_PRELOCK << 14)      /**< Shifted mode PRELOCK for MODEM_CTRL1        */
#define MODEM_CTRL1_COMPMODE_FRAMELOCK                       (_MODEM_CTRL1_COMPMODE_FRAMELOCK << 14)    /**< Shifted mode FRAMELOCK for MODEM_CTRL1      */
#define MODEM_CTRL1_COMPMODE_NOLOCK                          (_MODEM_CTRL1_COMPMODE_NOLOCK << 14)       /**< Shifted mode NOLOCK for MODEM_CTRL1         */
#define _MODEM_CTRL1_RESYNCPER_SHIFT                         16                                         /**< Shift value for MODEM_RESYNCPER             */
#define _MODEM_CTRL1_RESYNCPER_MASK                          0xF0000UL                                  /**< Bit mask for MODEM_RESYNCPER                */
#define _MODEM_CTRL1_RESYNCPER_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define MODEM_CTRL1_RESYNCPER_DEFAULT                        (_MODEM_CTRL1_RESYNCPER_DEFAULT << 16)     /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define _MODEM_CTRL1_PHASEDEMOD_SHIFT                        20                                         /**< Shift value for MODEM_PHASEDEMOD            */
#define _MODEM_CTRL1_PHASEDEMOD_MASK                         0x300000UL                                 /**< Bit mask for MODEM_PHASEDEMOD               */
#define _MODEM_CTRL1_PHASEDEMOD_DEFAULT                      0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define _MODEM_CTRL1_PHASEDEMOD_BDD                          0x00000000UL                               /**< Mode BDD for MODEM_CTRL1                    */
#define _MODEM_CTRL1_PHASEDEMOD_MBDD                         0x00000001UL                               /**< Mode MBDD for MODEM_CTRL1                   */
#define _MODEM_CTRL1_PHASEDEMOD_COH                          0x00000002UL                               /**< Mode COH for MODEM_CTRL1                    */
#define MODEM_CTRL1_PHASEDEMOD_DEFAULT                       (_MODEM_CTRL1_PHASEDEMOD_DEFAULT << 20)    /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define MODEM_CTRL1_PHASEDEMOD_BDD                           (_MODEM_CTRL1_PHASEDEMOD_BDD << 20)        /**< Shifted mode BDD for MODEM_CTRL1            */
#define MODEM_CTRL1_PHASEDEMOD_MBDD                          (_MODEM_CTRL1_PHASEDEMOD_MBDD << 20)       /**< Shifted mode MBDD for MODEM_CTRL1           */
#define MODEM_CTRL1_PHASEDEMOD_COH                           (_MODEM_CTRL1_PHASEDEMOD_COH << 20)        /**< Shifted mode COH for MODEM_CTRL1            */
#define _MODEM_CTRL1_FREQOFFESTPER_SHIFT                     22                                         /**< Shift value for MODEM_FREQOFFESTPER         */
#define _MODEM_CTRL1_FREQOFFESTPER_MASK                      0x1C00000UL                                /**< Bit mask for MODEM_FREQOFFESTPER            */
#define _MODEM_CTRL1_FREQOFFESTPER_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define MODEM_CTRL1_FREQOFFESTPER_DEFAULT                    (_MODEM_CTRL1_FREQOFFESTPER_DEFAULT << 22) /**< Shifted mode DEFAULT for MODEM_CTRL1        */
#define _MODEM_CTRL1_FREQOFFESTLIM_SHIFT                     25                                         /**< Shift value for MODEM_FREQOFFESTLIM         */
#define _MODEM_CTRL1_FREQOFFESTLIM_MASK                      0xFE000000UL                               /**< Bit mask for MODEM_FREQOFFESTLIM            */
#define _MODEM_CTRL1_FREQOFFESTLIM_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for MODEM_CTRL1                */
#define MODEM_CTRL1_FREQOFFESTLIM_DEFAULT                    (_MODEM_CTRL1_FREQOFFESTLIM_DEFAULT << 25) /**< Shifted mode DEFAULT for MODEM_CTRL1        */

/* Bit fields for MODEM CTRL2 */
#define _MODEM_CTRL2_RESETVALUE                              0x00001000UL                                /**< Default value for MODEM_CTRL2               */
#define _MODEM_CTRL2_MASK                                    0xFFFFFFFFUL                                /**< Mask for MODEM_CTRL2                        */
#define _MODEM_CTRL2_SQITHRESH_SHIFT                         0                                           /**< Shift value for MODEM_SQITHRESH             */
#define _MODEM_CTRL2_SQITHRESH_MASK                          0xFFUL                                      /**< Bit mask for MODEM_SQITHRESH                */
#define _MODEM_CTRL2_SQITHRESH_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_SQITHRESH_DEFAULT                        (_MODEM_CTRL2_SQITHRESH_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_RXFRCDIS                                 (0x1UL << 8)                                /**< Receive FRC disable                         */
#define _MODEM_CTRL2_RXFRCDIS_SHIFT                          8                                           /**< Shift value for MODEM_RXFRCDIS              */
#define _MODEM_CTRL2_RXFRCDIS_MASK                           0x100UL                                     /**< Bit mask for MODEM_RXFRCDIS                 */
#define _MODEM_CTRL2_RXFRCDIS_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_RXFRCDIS_DEFAULT                         (_MODEM_CTRL2_RXFRCDIS_DEFAULT << 8)        /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_RXPINMODE                                (0x1UL << 9)                                /**< Receive pin mode                            */
#define _MODEM_CTRL2_RXPINMODE_SHIFT                         9                                           /**< Shift value for MODEM_RXPINMODE             */
#define _MODEM_CTRL2_RXPINMODE_MASK                          0x200UL                                     /**< Bit mask for MODEM_RXPINMODE                */
#define _MODEM_CTRL2_RXPINMODE_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define _MODEM_CTRL2_RXPINMODE_SYNCHRONOUS                   0x00000000UL                                /**< Mode SYNCHRONOUS for MODEM_CTRL2            */
#define _MODEM_CTRL2_RXPINMODE_ASYNCHRONOUS                  0x00000001UL                                /**< Mode ASYNCHRONOUS for MODEM_CTRL2           */
#define MODEM_CTRL2_RXPINMODE_DEFAULT                        (_MODEM_CTRL2_RXPINMODE_DEFAULT << 9)       /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_RXPINMODE_SYNCHRONOUS                    (_MODEM_CTRL2_RXPINMODE_SYNCHRONOUS << 9)   /**< Shifted mode SYNCHRONOUS for MODEM_CTRL2    */
#define MODEM_CTRL2_RXPINMODE_ASYNCHRONOUS                   (_MODEM_CTRL2_RXPINMODE_ASYNCHRONOUS << 9)  /**< Shifted mode ASYNCHRONOUS for MODEM_CTRL2   */
#define _MODEM_CTRL2_TXPINMODE_SHIFT                         10                                          /**< Shift value for MODEM_TXPINMODE             */
#define _MODEM_CTRL2_TXPINMODE_MASK                          0xC00UL                                     /**< Bit mask for MODEM_TXPINMODE                */
#define _MODEM_CTRL2_TXPINMODE_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define _MODEM_CTRL2_TXPINMODE_OFF                           0x00000000UL                                /**< Mode OFF for MODEM_CTRL2                    */
#define _MODEM_CTRL2_TXPINMODE_UNUSED                        0x00000001UL                                /**< Mode UNUSED for MODEM_CTRL2                 */
#define _MODEM_CTRL2_TXPINMODE_ASYNCHRONOUS                  0x00000002UL                                /**< Mode ASYNCHRONOUS for MODEM_CTRL2           */
#define _MODEM_CTRL2_TXPINMODE_SYNCHRONOUS                   0x00000003UL                                /**< Mode SYNCHRONOUS for MODEM_CTRL2            */
#define MODEM_CTRL2_TXPINMODE_DEFAULT                        (_MODEM_CTRL2_TXPINMODE_DEFAULT << 10)      /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_TXPINMODE_OFF                            (_MODEM_CTRL2_TXPINMODE_OFF << 10)          /**< Shifted mode OFF for MODEM_CTRL2            */
#define MODEM_CTRL2_TXPINMODE_UNUSED                         (_MODEM_CTRL2_TXPINMODE_UNUSED << 10)       /**< Shifted mode UNUSED for MODEM_CTRL2         */
#define MODEM_CTRL2_TXPINMODE_ASYNCHRONOUS                   (_MODEM_CTRL2_TXPINMODE_ASYNCHRONOUS << 10) /**< Shifted mode ASYNCHRONOUS for MODEM_CTRL2   */
#define MODEM_CTRL2_TXPINMODE_SYNCHRONOUS                    (_MODEM_CTRL2_TXPINMODE_SYNCHRONOUS << 10)  /**< Shifted mode SYNCHRONOUS for MODEM_CTRL2    */
#define _MODEM_CTRL2_DATAFILTER_SHIFT                        12                                          /**< Shift value for MODEM_DATAFILTER            */
#define _MODEM_CTRL2_DATAFILTER_MASK                         0x7000UL                                    /**< Bit mask for MODEM_DATAFILTER               */
#define _MODEM_CTRL2_DATAFILTER_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define _MODEM_CTRL2_DATAFILTER_DISABLED                     0x00000000UL                                /**< Mode DISABLED for MODEM_CTRL2               */
#define _MODEM_CTRL2_DATAFILTER_SHORT                        0x00000001UL                                /**< Mode SHORT for MODEM_CTRL2                  */
#define _MODEM_CTRL2_DATAFILTER_MEDIUM                       0x00000002UL                                /**< Mode MEDIUM for MODEM_CTRL2                 */
#define _MODEM_CTRL2_DATAFILTER_LONG                         0x00000003UL                                /**< Mode LONG for MODEM_CTRL2                   */
#define _MODEM_CTRL2_DATAFILTER_LEN6                         0x00000004UL                                /**< Mode LEN6 for MODEM_CTRL2                   */
#define _MODEM_CTRL2_DATAFILTER_LEN7                         0x00000005UL                                /**< Mode LEN7 for MODEM_CTRL2                   */
#define _MODEM_CTRL2_DATAFILTER_LEN8                         0x00000006UL                                /**< Mode LEN8 for MODEM_CTRL2                   */
#define _MODEM_CTRL2_DATAFILTER_LEN9                         0x00000007UL                                /**< Mode LEN9 for MODEM_CTRL2                   */
#define MODEM_CTRL2_DATAFILTER_DEFAULT                       (_MODEM_CTRL2_DATAFILTER_DEFAULT << 12)     /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_DATAFILTER_DISABLED                      (_MODEM_CTRL2_DATAFILTER_DISABLED << 12)    /**< Shifted mode DISABLED for MODEM_CTRL2       */
#define MODEM_CTRL2_DATAFILTER_SHORT                         (_MODEM_CTRL2_DATAFILTER_SHORT << 12)       /**< Shifted mode SHORT for MODEM_CTRL2          */
#define MODEM_CTRL2_DATAFILTER_MEDIUM                        (_MODEM_CTRL2_DATAFILTER_MEDIUM << 12)      /**< Shifted mode MEDIUM for MODEM_CTRL2         */
#define MODEM_CTRL2_DATAFILTER_LONG                          (_MODEM_CTRL2_DATAFILTER_LONG << 12)        /**< Shifted mode LONG for MODEM_CTRL2           */
#define MODEM_CTRL2_DATAFILTER_LEN6                          (_MODEM_CTRL2_DATAFILTER_LEN6 << 12)        /**< Shifted mode LEN6 for MODEM_CTRL2           */
#define MODEM_CTRL2_DATAFILTER_LEN7                          (_MODEM_CTRL2_DATAFILTER_LEN7 << 12)        /**< Shifted mode LEN7 for MODEM_CTRL2           */
#define MODEM_CTRL2_DATAFILTER_LEN8                          (_MODEM_CTRL2_DATAFILTER_LEN8 << 12)        /**< Shifted mode LEN8 for MODEM_CTRL2           */
#define MODEM_CTRL2_DATAFILTER_LEN9                          (_MODEM_CTRL2_DATAFILTER_LEN9 << 12)        /**< Shifted mode LEN9 for MODEM_CTRL2           */
#define _MODEM_CTRL2_BRDIVA_SHIFT                            15                                          /**< Shift value for MODEM_BRDIVA                */
#define _MODEM_CTRL2_BRDIVA_MASK                             0x78000UL                                   /**< Bit mask for MODEM_BRDIVA                   */
#define _MODEM_CTRL2_BRDIVA_DEFAULT                          0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_BRDIVA_DEFAULT                           (_MODEM_CTRL2_BRDIVA_DEFAULT << 15)         /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define _MODEM_CTRL2_BRDIVB_SHIFT                            19                                          /**< Shift value for MODEM_BRDIVB                */
#define _MODEM_CTRL2_BRDIVB_MASK                             0x780000UL                                  /**< Bit mask for MODEM_BRDIVB                   */
#define _MODEM_CTRL2_BRDIVB_DEFAULT                          0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_BRDIVB_DEFAULT                           (_MODEM_CTRL2_BRDIVB_DEFAULT << 19)         /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define _MODEM_CTRL2_DEVMULA_SHIFT                           23                                          /**< Shift value for MODEM_DEVMULA               */
#define _MODEM_CTRL2_DEVMULA_MASK                            0x1800000UL                                 /**< Bit mask for MODEM_DEVMULA                  */
#define _MODEM_CTRL2_DEVMULA_DEFAULT                         0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_DEVMULA_DEFAULT                          (_MODEM_CTRL2_DEVMULA_DEFAULT << 23)        /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define _MODEM_CTRL2_DEVMULB_SHIFT                           25                                          /**< Shift value for MODEM_DEVMULB               */
#define _MODEM_CTRL2_DEVMULB_MASK                            0x6000000UL                                 /**< Bit mask for MODEM_DEVMULB                  */
#define _MODEM_CTRL2_DEVMULB_DEFAULT                         0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_DEVMULB_DEFAULT                          (_MODEM_CTRL2_DEVMULB_DEFAULT << 25)        /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define _MODEM_CTRL2_RATESELMODE_SHIFT                       27                                          /**< Shift value for MODEM_RATESELMODE           */
#define _MODEM_CTRL2_RATESELMODE_MASK                        0x18000000UL                                /**< Bit mask for MODEM_RATESELMODE              */
#define _MODEM_CTRL2_RATESELMODE_DEFAULT                     0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define _MODEM_CTRL2_RATESELMODE_NOCHANGE                    0x00000000UL                                /**< Mode NOCHANGE for MODEM_CTRL2               */
#define _MODEM_CTRL2_RATESELMODE_PAYLOAD                     0x00000001UL                                /**< Mode PAYLOAD for MODEM_CTRL2                */
#define _MODEM_CTRL2_RATESELMODE_FRC                         0x00000002UL                                /**< Mode FRC for MODEM_CTRL2                    */
#define _MODEM_CTRL2_RATESELMODE_SYNC                        0x00000003UL                                /**< Mode SYNC for MODEM_CTRL2                   */
#define MODEM_CTRL2_RATESELMODE_DEFAULT                      (_MODEM_CTRL2_RATESELMODE_DEFAULT << 27)    /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_RATESELMODE_NOCHANGE                     (_MODEM_CTRL2_RATESELMODE_NOCHANGE << 27)   /**< Shifted mode NOCHANGE for MODEM_CTRL2       */
#define MODEM_CTRL2_RATESELMODE_PAYLOAD                      (_MODEM_CTRL2_RATESELMODE_PAYLOAD << 27)    /**< Shifted mode PAYLOAD for MODEM_CTRL2        */
#define MODEM_CTRL2_RATESELMODE_FRC                          (_MODEM_CTRL2_RATESELMODE_FRC << 27)        /**< Shifted mode FRC for MODEM_CTRL2            */
#define MODEM_CTRL2_RATESELMODE_SYNC                         (_MODEM_CTRL2_RATESELMODE_SYNC << 27)       /**< Shifted mode SYNC for MODEM_CTRL2           */
#define MODEM_CTRL2_DEVWEIGHTDIS                             (0x1UL << 29)                               /**< Deviation weighting disable.                */
#define _MODEM_CTRL2_DEVWEIGHTDIS_SHIFT                      29                                          /**< Shift value for MODEM_DEVWEIGHTDIS          */
#define _MODEM_CTRL2_DEVWEIGHTDIS_MASK                       0x20000000UL                                /**< Bit mask for MODEM_DEVWEIGHTDIS             */
#define _MODEM_CTRL2_DEVWEIGHTDIS_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define MODEM_CTRL2_DEVWEIGHTDIS_DEFAULT                     (_MODEM_CTRL2_DEVWEIGHTDIS_DEFAULT << 29)   /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define _MODEM_CTRL2_DMASEL_SHIFT                            30                                          /**< Shift value for MODEM_DMASEL                */
#define _MODEM_CTRL2_DMASEL_MASK                             0xC0000000UL                                /**< Bit mask for MODEM_DMASEL                   */
#define _MODEM_CTRL2_DMASEL_DEFAULT                          0x00000000UL                                /**< Mode DEFAULT for MODEM_CTRL2                */
#define _MODEM_CTRL2_DMASEL_SOFT                             0x00000000UL                                /**< Mode SOFT for MODEM_CTRL2                   */
#define _MODEM_CTRL2_DMASEL_CORR                             0x00000001UL                                /**< Mode CORR for MODEM_CTRL2                   */
#define _MODEM_CTRL2_DMASEL_FREQOFFEST                       0x00000002UL                                /**< Mode FREQOFFEST for MODEM_CTRL2             */
#define _MODEM_CTRL2_DMASEL_POE                              0x00000003UL                                /**< Mode POE for MODEM_CTRL2                    */
#define MODEM_CTRL2_DMASEL_DEFAULT                           (_MODEM_CTRL2_DMASEL_DEFAULT << 30)         /**< Shifted mode DEFAULT for MODEM_CTRL2        */
#define MODEM_CTRL2_DMASEL_SOFT                              (_MODEM_CTRL2_DMASEL_SOFT << 30)            /**< Shifted mode SOFT for MODEM_CTRL2           */
#define MODEM_CTRL2_DMASEL_CORR                              (_MODEM_CTRL2_DMASEL_CORR << 30)            /**< Shifted mode CORR for MODEM_CTRL2           */
#define MODEM_CTRL2_DMASEL_FREQOFFEST                        (_MODEM_CTRL2_DMASEL_FREQOFFEST << 30)      /**< Shifted mode FREQOFFEST for MODEM_CTRL2     */
#define MODEM_CTRL2_DMASEL_POE                               (_MODEM_CTRL2_DMASEL_POE << 30)             /**< Shifted mode POE for MODEM_CTRL2            */

/* Bit fields for MODEM CTRL3 */
#define _MODEM_CTRL3_RESETVALUE                              0x00008000UL                                 /**< Default value for MODEM_CTRL3               */
#define _MODEM_CTRL3_MASK                                    0xFFFFFF81UL                                 /**< Mask for MODEM_CTRL3                        */
#define MODEM_CTRL3_PRSDINEN                                 (0x1UL << 0)                                 /**< DIN PRS enable                              */
#define _MODEM_CTRL3_PRSDINEN_SHIFT                          0                                            /**< Shift value for MODEM_PRSDINEN              */
#define _MODEM_CTRL3_PRSDINEN_MASK                           0x1UL                                        /**< Bit mask for MODEM_PRSDINEN                 */
#define _MODEM_CTRL3_PRSDINEN_DEFAULT                        0x00000000UL                                 /**< Mode DEFAULT for MODEM_CTRL3                */
#define MODEM_CTRL3_PRSDINEN_DEFAULT                         (_MODEM_CTRL3_PRSDINEN_DEFAULT << 0)         /**< Shifted mode DEFAULT for MODEM_CTRL3        */
#define _MODEM_CTRL3_ANTDIVMODE_SHIFT                        8                                            /**< Shift value for MODEM_ANTDIVMODE            */
#define _MODEM_CTRL3_ANTDIVMODE_MASK                         0x700UL                                      /**< Bit mask for MODEM_ANTDIVMODE               */
#define _MODEM_CTRL3_ANTDIVMODE_DEFAULT                      0x00000000UL                                 /**< Mode DEFAULT for MODEM_CTRL3                */
#define _MODEM_CTRL3_ANTDIVMODE_ANTENNA0                     0x00000000UL                                 /**< Mode ANTENNA0 for MODEM_CTRL3               */
#define _MODEM_CTRL3_ANTDIVMODE_ANTENNA1                     0x00000001UL                                 /**< Mode ANTENNA1 for MODEM_CTRL3               */
#define _MODEM_CTRL3_ANTDIVMODE_ANTSELFIRST                  0x00000002UL                                 /**< Mode ANTSELFIRST for MODEM_CTRL3            */
#define _MODEM_CTRL3_ANTDIVMODE_ANTSELCORR                   0x00000003UL                                 /**< Mode ANTSELCORR for MODEM_CTRL3             */
#define _MODEM_CTRL3_ANTDIVMODE_ANTSELRSSI                   0x00000004UL                                 /**< Mode ANTSELRSSI for MODEM_CTRL3             */
#define MODEM_CTRL3_ANTDIVMODE_DEFAULT                       (_MODEM_CTRL3_ANTDIVMODE_DEFAULT << 8)       /**< Shifted mode DEFAULT for MODEM_CTRL3        */
#define MODEM_CTRL3_ANTDIVMODE_ANTENNA0                      (_MODEM_CTRL3_ANTDIVMODE_ANTENNA0 << 8)      /**< Shifted mode ANTENNA0 for MODEM_CTRL3       */
#define MODEM_CTRL3_ANTDIVMODE_ANTENNA1                      (_MODEM_CTRL3_ANTDIVMODE_ANTENNA1 << 8)      /**< Shifted mode ANTENNA1 for MODEM_CTRL3       */
#define MODEM_CTRL3_ANTDIVMODE_ANTSELFIRST                   (_MODEM_CTRL3_ANTDIVMODE_ANTSELFIRST << 8)   /**< Shifted mode ANTSELFIRST for MODEM_CTRL3    */
#define MODEM_CTRL3_ANTDIVMODE_ANTSELCORR                    (_MODEM_CTRL3_ANTDIVMODE_ANTSELCORR << 8)    /**< Shifted mode ANTSELCORR for MODEM_CTRL3     */
#define MODEM_CTRL3_ANTDIVMODE_ANTSELRSSI                    (_MODEM_CTRL3_ANTDIVMODE_ANTSELRSSI << 8)    /**< Shifted mode ANTSELRSSI for MODEM_CTRL3     */
#define MODEM_CTRL3_ANTDIVREPEATDIS                          (0x1UL << 11)                                /**< Antenna diversity repeat disable            */
#define _MODEM_CTRL3_ANTDIVREPEATDIS_SHIFT                   11                                           /**< Shift value for MODEM_ANTDIVREPEATDIS       */
#define _MODEM_CTRL3_ANTDIVREPEATDIS_MASK                    0x800UL                                      /**< Bit mask for MODEM_ANTDIVREPEATDIS          */
#define _MODEM_CTRL3_ANTDIVREPEATDIS_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_CTRL3                */
#define MODEM_CTRL3_ANTDIVREPEATDIS_DEFAULT                  (_MODEM_CTRL3_ANTDIVREPEATDIS_DEFAULT << 11) /**< Shifted mode DEFAULT for MODEM_CTRL3        */
#define _MODEM_CTRL3_TSAMPMODE_SHIFT                         12                                           /**< Shift value for MODEM_TSAMPMODE             */
#define _MODEM_CTRL3_TSAMPMODE_MASK                          0x3000UL                                     /**< Bit mask for MODEM_TSAMPMODE                */
#define _MODEM_CTRL3_TSAMPMODE_DEFAULT                       0x00000000UL                                 /**< Mode DEFAULT for MODEM_CTRL3                */
#define _MODEM_CTRL3_TSAMPMODE_OFF                           0x00000000UL                                 /**< Mode OFF for MODEM_CTRL3                    */
#define _MODEM_CTRL3_TSAMPMODE_ON                            0x00000001UL                                 /**< Mode ON for MODEM_CTRL3                     */
#define _MODEM_CTRL3_TSAMPMODE_DIFF                          0x00000002UL                                 /**< Mode DIFF for MODEM_CTRL3                   */
#define MODEM_CTRL3_TSAMPMODE_DEFAULT                        (_MODEM_CTRL3_TSAMPMODE_DEFAULT << 12)       /**< Shifted mode DEFAULT for MODEM_CTRL3        */
#define MODEM_CTRL3_TSAMPMODE_OFF                            (_MODEM_CTRL3_TSAMPMODE_OFF << 12)           /**< Shifted mode OFF for MODEM_CTRL3            */
#define MODEM_CTRL3_TSAMPMODE_ON                             (_MODEM_CTRL3_TSAMPMODE_ON << 12)            /**< Shifted mode ON for MODEM_CTRL3             */
#define MODEM_CTRL3_TSAMPMODE_DIFF                           (_MODEM_CTRL3_TSAMPMODE_DIFF << 12)          /**< Shifted mode DIFF for MODEM_CTRL3           */
#define _MODEM_CTRL3_TSAMPDEL_SHIFT                          14                                           /**< Shift value for MODEM_TSAMPDEL              */
#define _MODEM_CTRL3_TSAMPDEL_MASK                           0xC000UL                                     /**< Bit mask for MODEM_TSAMPDEL                 */
#define _MODEM_CTRL3_TSAMPDEL_DEFAULT                        0x00000002UL                                 /**< Mode DEFAULT for MODEM_CTRL3                */
#define MODEM_CTRL3_TSAMPDEL_DEFAULT                         (_MODEM_CTRL3_TSAMPDEL_DEFAULT << 14)        /**< Shifted mode DEFAULT for MODEM_CTRL3        */
#define _MODEM_CTRL3_TSAMPLIM_SHIFT                          16                                           /**< Shift value for MODEM_TSAMPLIM              */
#define _MODEM_CTRL3_TSAMPLIM_MASK                           0xFFFF0000UL                                 /**< Bit mask for MODEM_TSAMPLIM                 */
#define _MODEM_CTRL3_TSAMPLIM_DEFAULT                        0x00000000UL                                 /**< Mode DEFAULT for MODEM_CTRL3                */
#define MODEM_CTRL3_TSAMPLIM_DEFAULT                         (_MODEM_CTRL3_TSAMPLIM_DEFAULT << 16)        /**< Shifted mode DEFAULT for MODEM_CTRL3        */

/* Bit fields for MODEM CTRL4 */
#define _MODEM_CTRL4_RESETVALUE                              0x03000000UL                                    /**< Default value for MODEM_CTRL4               */
#define _MODEM_CTRL4_MASK                                    0xBFFFFFFFUL                                    /**< Mask for MODEM_CTRL4                        */
#define _MODEM_CTRL4_ISICOMP_SHIFT                           0                                               /**< Shift value for MODEM_ISICOMP               */
#define _MODEM_CTRL4_ISICOMP_MASK                            0xFUL                                           /**< Bit mask for MODEM_ISICOMP                  */
#define _MODEM_CTRL4_ISICOMP_DEFAULT                         0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_ISICOMP_DEFAULT                          (_MODEM_CTRL4_ISICOMP_DEFAULT << 0)             /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_DEVOFFCOMP                               (0x1UL << 4)                                    /**< Deviation offset compensation               */
#define _MODEM_CTRL4_DEVOFFCOMP_SHIFT                        4                                               /**< Shift value for MODEM_DEVOFFCOMP            */
#define _MODEM_CTRL4_DEVOFFCOMP_MASK                         0x10UL                                          /**< Bit mask for MODEM_DEVOFFCOMP               */
#define _MODEM_CTRL4_DEVOFFCOMP_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_DEVOFFCOMP_DEFAULT                       (_MODEM_CTRL4_DEVOFFCOMP_DEFAULT << 4)          /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define _MODEM_CTRL4_PREDISTGAIN_SHIFT                       5                                               /**< Shift value for MODEM_PREDISTGAIN           */
#define _MODEM_CTRL4_PREDISTGAIN_MASK                        0x3E0UL                                         /**< Bit mask for MODEM_PREDISTGAIN              */
#define _MODEM_CTRL4_PREDISTGAIN_DEFAULT                     0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_PREDISTGAIN_DEFAULT                      (_MODEM_CTRL4_PREDISTGAIN_DEFAULT << 5)         /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define _MODEM_CTRL4_PREDISTDEB_SHIFT                        10                                              /**< Shift value for MODEM_PREDISTDEB            */
#define _MODEM_CTRL4_PREDISTDEB_MASK                         0x1C00UL                                        /**< Bit mask for MODEM_PREDISTDEB               */
#define _MODEM_CTRL4_PREDISTDEB_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_PREDISTDEB_DEFAULT                       (_MODEM_CTRL4_PREDISTDEB_DEFAULT << 10)         /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_PREDISTAVG                               (0x1UL << 13)                                   /**< Predistortion Average                       */
#define _MODEM_CTRL4_PREDISTAVG_SHIFT                        13                                              /**< Shift value for MODEM_PREDISTAVG            */
#define _MODEM_CTRL4_PREDISTAVG_MASK                         0x2000UL                                        /**< Bit mask for MODEM_PREDISTAVG               */
#define _MODEM_CTRL4_PREDISTAVG_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define _MODEM_CTRL4_PREDISTAVG_AVG8                         0x00000000UL                                    /**< Mode AVG8 for MODEM_CTRL4                   */
#define _MODEM_CTRL4_PREDISTAVG_AVG16                        0x00000001UL                                    /**< Mode AVG16 for MODEM_CTRL4                  */
#define MODEM_CTRL4_PREDISTAVG_DEFAULT                       (_MODEM_CTRL4_PREDISTAVG_DEFAULT << 13)         /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_PREDISTAVG_AVG8                          (_MODEM_CTRL4_PREDISTAVG_AVG8 << 13)            /**< Shifted mode AVG8 for MODEM_CTRL4           */
#define MODEM_CTRL4_PREDISTAVG_AVG16                         (_MODEM_CTRL4_PREDISTAVG_AVG16 << 13)           /**< Shifted mode AVG16 for MODEM_CTRL4          */
#define MODEM_CTRL4_PREDISTRST                               (0x1UL << 14)                                   /**< Predistortion Reset                         */
#define _MODEM_CTRL4_PREDISTRST_SHIFT                        14                                              /**< Shift value for MODEM_PREDISTRST            */
#define _MODEM_CTRL4_PREDISTRST_MASK                         0x4000UL                                        /**< Bit mask for MODEM_PREDISTRST               */
#define _MODEM_CTRL4_PREDISTRST_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_PREDISTRST_DEFAULT                       (_MODEM_CTRL4_PREDISTRST_DEFAULT << 14)         /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define _MODEM_CTRL4_PHASECLICKFILT_SHIFT                    15                                              /**< Shift value for MODEM_PHASECLICKFILT        */
#define _MODEM_CTRL4_PHASECLICKFILT_MASK                     0x3F8000UL                                      /**< Bit mask for MODEM_PHASECLICKFILT           */
#define _MODEM_CTRL4_PHASECLICKFILT_DEFAULT                  0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_PHASECLICKFILT_DEFAULT                   (_MODEM_CTRL4_PHASECLICKFILT_DEFAULT << 15)     /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_SOFTDSSSMODE                             (0x1UL << 22)                                   /**< Soft DSSS mode                              */
#define _MODEM_CTRL4_SOFTDSSSMODE_SHIFT                      22                                              /**< Shift value for MODEM_SOFTDSSSMODE          */
#define _MODEM_CTRL4_SOFTDSSSMODE_MASK                       0x400000UL                                      /**< Bit mask for MODEM_SOFTDSSSMODE             */
#define _MODEM_CTRL4_SOFTDSSSMODE_DEFAULT                    0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define _MODEM_CTRL4_SOFTDSSSMODE_CORR0INV                   0x00000000UL                                    /**< Mode CORR0INV for MODEM_CTRL4               */
#define _MODEM_CTRL4_SOFTDSSSMODE_CORRDIFF                   0x00000001UL                                    /**< Mode CORRDIFF for MODEM_CTRL4               */
#define MODEM_CTRL4_SOFTDSSSMODE_DEFAULT                     (_MODEM_CTRL4_SOFTDSSSMODE_DEFAULT << 22)       /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_SOFTDSSSMODE_CORR0INV                    (_MODEM_CTRL4_SOFTDSSSMODE_CORR0INV << 22)      /**< Shifted mode CORR0INV for MODEM_CTRL4       */
#define MODEM_CTRL4_SOFTDSSSMODE_CORRDIFF                    (_MODEM_CTRL4_SOFTDSSSMODE_CORRDIFF << 22)      /**< Shifted mode CORRDIFF for MODEM_CTRL4       */
#define _MODEM_CTRL4_ADCSATLEVEL_SHIFT                       23                                              /**< Shift value for MODEM_ADCSATLEVEL           */
#define _MODEM_CTRL4_ADCSATLEVEL_MASK                        0x3800000UL                                     /**< Bit mask for MODEM_ADCSATLEVEL              */
#define _MODEM_CTRL4_ADCSATLEVEL_DEFAULT                     0x00000006UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS1                       0x00000000UL                                    /**< Mode CONS1 for MODEM_CTRL4                  */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS2                       0x00000001UL                                    /**< Mode CONS2 for MODEM_CTRL4                  */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS4                       0x00000002UL                                    /**< Mode CONS4 for MODEM_CTRL4                  */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS8                       0x00000003UL                                    /**< Mode CONS8 for MODEM_CTRL4                  */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS16                      0x00000004UL                                    /**< Mode CONS16 for MODEM_CTRL4                 */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS32                      0x00000005UL                                    /**< Mode CONS32 for MODEM_CTRL4                 */
#define _MODEM_CTRL4_ADCSATLEVEL_CONS64                      0x00000006UL                                    /**< Mode CONS64 for MODEM_CTRL4                 */
#define MODEM_CTRL4_ADCSATLEVEL_DEFAULT                      (_MODEM_CTRL4_ADCSATLEVEL_DEFAULT << 23)        /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_ADCSATLEVEL_CONS1                        (_MODEM_CTRL4_ADCSATLEVEL_CONS1 << 23)          /**< Shifted mode CONS1 for MODEM_CTRL4          */
#define MODEM_CTRL4_ADCSATLEVEL_CONS2                        (_MODEM_CTRL4_ADCSATLEVEL_CONS2 << 23)          /**< Shifted mode CONS2 for MODEM_CTRL4          */
#define MODEM_CTRL4_ADCSATLEVEL_CONS4                        (_MODEM_CTRL4_ADCSATLEVEL_CONS4 << 23)          /**< Shifted mode CONS4 for MODEM_CTRL4          */
#define MODEM_CTRL4_ADCSATLEVEL_CONS8                        (_MODEM_CTRL4_ADCSATLEVEL_CONS8 << 23)          /**< Shifted mode CONS8 for MODEM_CTRL4          */
#define MODEM_CTRL4_ADCSATLEVEL_CONS16                       (_MODEM_CTRL4_ADCSATLEVEL_CONS16 << 23)         /**< Shifted mode CONS16 for MODEM_CTRL4         */
#define MODEM_CTRL4_ADCSATLEVEL_CONS32                       (_MODEM_CTRL4_ADCSATLEVEL_CONS32 << 23)         /**< Shifted mode CONS32 for MODEM_CTRL4         */
#define MODEM_CTRL4_ADCSATLEVEL_CONS64                       (_MODEM_CTRL4_ADCSATLEVEL_CONS64 << 23)         /**< Shifted mode CONS64 for MODEM_CTRL4         */
#define _MODEM_CTRL4_ADCSATDENS_SHIFT                        26                                              /**< Shift value for MODEM_ADCSATDENS            */
#define _MODEM_CTRL4_ADCSATDENS_MASK                         0xC000000UL                                     /**< Bit mask for MODEM_ADCSATDENS               */
#define _MODEM_CTRL4_ADCSATDENS_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_ADCSATDENS_DEFAULT                       (_MODEM_CTRL4_ADCSATDENS_DEFAULT << 26)         /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_OFFSETPHASEMASKING                       (0x1UL << 28)                                   /**< Offset phase masking                        */
#define _MODEM_CTRL4_OFFSETPHASEMASKING_SHIFT                28                                              /**< Shift value for MODEM_OFFSETPHASEMASKING    */
#define _MODEM_CTRL4_OFFSETPHASEMASKING_MASK                 0x10000000UL                                    /**< Bit mask for MODEM_OFFSETPHASEMASKING       */
#define _MODEM_CTRL4_OFFSETPHASEMASKING_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_OFFSETPHASEMASKING_DEFAULT               (_MODEM_CTRL4_OFFSETPHASEMASKING_DEFAULT << 28) /**< Shifted mode DEFAULT for MODEM_CTRL4        */
#define MODEM_CTRL4_OFFSETPHASESCALING                       (0x1UL << 29)                                   /**< Offset phase scaling                        */
#define _MODEM_CTRL4_OFFSETPHASESCALING_SHIFT                29                                              /**< Shift value for MODEM_OFFSETPHASESCALING    */
#define _MODEM_CTRL4_OFFSETPHASESCALING_MASK                 0x20000000UL                                    /**< Bit mask for MODEM_OFFSETPHASESCALING       */
#define _MODEM_CTRL4_OFFSETPHASESCALING_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for MODEM_CTRL4                */
#define MODEM_CTRL4_OFFSETPHASESCALING_DEFAULT               (_MODEM_CTRL4_OFFSETPHASESCALING_DEFAULT << 29) /**< Shifted mode DEFAULT for MODEM_CTRL4        */

/* Bit fields for MODEM CTRL5 */
#define _MODEM_CTRL5_RESETVALUE                              0x00000000UL                                  /**< Default value for MODEM_CTRL5               */
#define _MODEM_CTRL5_MASK                                    0xFF7FFFFEUL                                  /**< Mask for MODEM_CTRL5                        */
#define MODEM_CTRL5_BRCALEN                                  (0x1UL << 1)                                  /**< Baudrate calibration enable                 */
#define _MODEM_CTRL5_BRCALEN_SHIFT                           1                                             /**< Shift value for MODEM_BRCALEN               */
#define _MODEM_CTRL5_BRCALEN_MASK                            0x2UL                                         /**< Bit mask for MODEM_BRCALEN                  */
#define _MODEM_CTRL5_BRCALEN_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_BRCALEN_DEFAULT                          (_MODEM_CTRL5_BRCALEN_DEFAULT << 1)           /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define _MODEM_CTRL5_BRCALMODE_SHIFT                         2                                             /**< Shift value for MODEM_BRCALMODE             */
#define _MODEM_CTRL5_BRCALMODE_MASK                          0xCUL                                         /**< Bit mask for MODEM_BRCALMODE                */
#define _MODEM_CTRL5_BRCALMODE_DEFAULT                       0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define _MODEM_CTRL5_BRCALMODE_PEAK                          0x00000000UL                                  /**< Mode PEAK for MODEM_CTRL5                   */
#define _MODEM_CTRL5_BRCALMODE_ZERO                          0x00000001UL                                  /**< Mode ZERO for MODEM_CTRL5                   */
#define _MODEM_CTRL5_BRCALMODE_PEAKZERO                      0x00000002UL                                  /**< Mode PEAKZERO for MODEM_CTRL5               */
#define MODEM_CTRL5_BRCALMODE_DEFAULT                        (_MODEM_CTRL5_BRCALMODE_DEFAULT << 2)         /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_BRCALMODE_PEAK                           (_MODEM_CTRL5_BRCALMODE_PEAK << 2)            /**< Shifted mode PEAK for MODEM_CTRL5           */
#define MODEM_CTRL5_BRCALMODE_ZERO                           (_MODEM_CTRL5_BRCALMODE_ZERO << 2)            /**< Shifted mode ZERO for MODEM_CTRL5           */
#define MODEM_CTRL5_BRCALMODE_PEAKZERO                       (_MODEM_CTRL5_BRCALMODE_PEAKZERO << 2)        /**< Shifted mode PEAKZERO for MODEM_CTRL5       */
#define _MODEM_CTRL5_BRCALAVG_SHIFT                          4                                             /**< Shift value for MODEM_BRCALAVG              */
#define _MODEM_CTRL5_BRCALAVG_MASK                           0x30UL                                        /**< Bit mask for MODEM_BRCALAVG                 */
#define _MODEM_CTRL5_BRCALAVG_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_BRCALAVG_DEFAULT                         (_MODEM_CTRL5_BRCALAVG_DEFAULT << 4)          /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define _MODEM_CTRL5_DETDEL_SHIFT                            6                                             /**< Shift value for MODEM_DETDEL                */
#define _MODEM_CTRL5_DETDEL_MASK                             0x1C0UL                                       /**< Bit mask for MODEM_DETDEL                   */
#define _MODEM_CTRL5_DETDEL_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_DETDEL_DEFAULT                           (_MODEM_CTRL5_DETDEL_DEFAULT << 6)            /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_TDEDGE                                   (0x1UL << 9)                                  /**< Timing detection edge mode                  */
#define _MODEM_CTRL5_TDEDGE_SHIFT                            9                                             /**< Shift value for MODEM_TDEDGE                */
#define _MODEM_CTRL5_TDEDGE_MASK                             0x200UL                                       /**< Bit mask for MODEM_TDEDGE                   */
#define _MODEM_CTRL5_TDEDGE_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_TDEDGE_DEFAULT                           (_MODEM_CTRL5_TDEDGE_DEFAULT << 9)            /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_TREDGE                                   (0x1UL << 10)                                 /**< Timing resynchronization edge mode          */
#define _MODEM_CTRL5_TREDGE_SHIFT                            10                                            /**< Shift value for MODEM_TREDGE                */
#define _MODEM_CTRL5_TREDGE_MASK                             0x400UL                                       /**< Bit mask for MODEM_TREDGE                   */
#define _MODEM_CTRL5_TREDGE_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_TREDGE_DEFAULT                           (_MODEM_CTRL5_TREDGE_DEFAULT << 10)           /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_DSSSCTD                                  (0x1UL << 11)                                 /**< DSSS Correlation Threshold Disable          */
#define _MODEM_CTRL5_DSSSCTD_SHIFT                           11                                            /**< Shift value for MODEM_DSSSCTD               */
#define _MODEM_CTRL5_DSSSCTD_MASK                            0x800UL                                       /**< Bit mask for MODEM_DSSSCTD                  */
#define _MODEM_CTRL5_DSSSCTD_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_DSSSCTD_DEFAULT                          (_MODEM_CTRL5_DSSSCTD_DEFAULT << 11)          /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define _MODEM_CTRL5_BBSS_SHIFT                              12                                            /**< Shift value for MODEM_BBSS                  */
#define _MODEM_CTRL5_BBSS_MASK                               0xF000UL                                      /**< Bit mask for MODEM_BBSS                     */
#define _MODEM_CTRL5_BBSS_DEFAULT                            0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_BBSS_DEFAULT                             (_MODEM_CTRL5_BBSS_DEFAULT << 12)             /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define _MODEM_CTRL5_POEPER_SHIFT                            16                                            /**< Shift value for MODEM_POEPER                */
#define _MODEM_CTRL5_POEPER_MASK                             0xF0000UL                                     /**< Bit mask for MODEM_POEPER                   */
#define _MODEM_CTRL5_POEPER_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_POEPER_DEFAULT                           (_MODEM_CTRL5_POEPER_DEFAULT << 16)           /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_SHIFT                  20                                            /**< Shift value for MODEM_DEMODRAWDATASEL2      */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_MASK                   0x700000UL                                    /**< Bit mask for MODEM_DEMODRAWDATASEL2         */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_DIS                    0x00000000UL                                  /**< Mode DIS for MODEM_CTRL5                    */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_COH                    0x00000001UL                                  /**< Mode COH for MODEM_CTRL5                    */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_CORR                   0x00000002UL                                  /**< Mode CORR for MODEM_CTRL5                   */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_CHPW                   0x00000003UL                                  /**< Mode CHPW for MODEM_CTRL5                   */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_BBPF                   0x00000004UL                                  /**< Mode BBPF for MODEM_CTRL5                   */
#define _MODEM_CTRL5_DEMODRAWDATASEL2_FSM                    0x00000005UL                                  /**< Mode FSM for MODEM_CTRL5                    */
#define MODEM_CTRL5_DEMODRAWDATASEL2_DEFAULT                 (_MODEM_CTRL5_DEMODRAWDATASEL2_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_DEMODRAWDATASEL2_DIS                     (_MODEM_CTRL5_DEMODRAWDATASEL2_DIS << 20)     /**< Shifted mode DIS for MODEM_CTRL5            */
#define MODEM_CTRL5_DEMODRAWDATASEL2_COH                     (_MODEM_CTRL5_DEMODRAWDATASEL2_COH << 20)     /**< Shifted mode COH for MODEM_CTRL5            */
#define MODEM_CTRL5_DEMODRAWDATASEL2_CORR                    (_MODEM_CTRL5_DEMODRAWDATASEL2_CORR << 20)    /**< Shifted mode CORR for MODEM_CTRL5           */
#define MODEM_CTRL5_DEMODRAWDATASEL2_CHPW                    (_MODEM_CTRL5_DEMODRAWDATASEL2_CHPW << 20)    /**< Shifted mode CHPW for MODEM_CTRL5           */
#define MODEM_CTRL5_DEMODRAWDATASEL2_BBPF                    (_MODEM_CTRL5_DEMODRAWDATASEL2_BBPF << 20)    /**< Shifted mode BBPF for MODEM_CTRL5           */
#define MODEM_CTRL5_DEMODRAWDATASEL2_FSM                     (_MODEM_CTRL5_DEMODRAWDATASEL2_FSM << 20)     /**< Shifted mode FSM for MODEM_CTRL5            */
#define _MODEM_CTRL5_FOEPREAVG_SHIFT                         24                                            /**< Shift value for MODEM_FOEPREAVG             */
#define _MODEM_CTRL5_FOEPREAVG_MASK                          0x7000000UL                                   /**< Bit mask for MODEM_FOEPREAVG                */
#define _MODEM_CTRL5_FOEPREAVG_DEFAULT                       0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_FOEPREAVG_DEFAULT                        (_MODEM_CTRL5_FOEPREAVG_DEFAULT << 24)        /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_LINCORR                                  (0x1UL << 27)                                 /**< Linear Correlation                          */
#define _MODEM_CTRL5_LINCORR_SHIFT                           27                                            /**< Shift value for MODEM_LINCORR               */
#define _MODEM_CTRL5_LINCORR_MASK                            0x8000000UL                                   /**< Bit mask for MODEM_LINCORR                  */
#define _MODEM_CTRL5_LINCORR_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_LINCORR_DEFAULT                          (_MODEM_CTRL5_LINCORR_DEFAULT << 27)          /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_RESYNCBAUDTRANS                          (0x1UL << 29)                                 /**< Resynchronization Baud Transitions          */
#define _MODEM_CTRL5_RESYNCBAUDTRANS_SHIFT                   29                                            /**< Shift value for MODEM_RESYNCBAUDTRANS       */
#define _MODEM_CTRL5_RESYNCBAUDTRANS_MASK                    0x20000000UL                                  /**< Bit mask for MODEM_RESYNCBAUDTRANS          */
#define _MODEM_CTRL5_RESYNCBAUDTRANS_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define MODEM_CTRL5_RESYNCBAUDTRANS_DEFAULT                  (_MODEM_CTRL5_RESYNCBAUDTRANS_DEFAULT << 29)  /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_RESYNCLIMIT                              (0x1UL << 30)                                 /**< Resynchronization Limit                     */
#define _MODEM_CTRL5_RESYNCLIMIT_SHIFT                       30                                            /**< Shift value for MODEM_RESYNCLIMIT           */
#define _MODEM_CTRL5_RESYNCLIMIT_MASK                        0x40000000UL                                  /**< Bit mask for MODEM_RESYNCLIMIT              */
#define _MODEM_CTRL5_RESYNCLIMIT_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for MODEM_CTRL5                */
#define _MODEM_CTRL5_RESYNCLIMIT_HALF                        0x00000000UL                                  /**< Mode HALF for MODEM_CTRL5                   */
#define _MODEM_CTRL5_RESYNCLIMIT_ALWAYS                      0x00000001UL                                  /**< Mode ALWAYS for MODEM_CTRL5                 */
#define MODEM_CTRL5_RESYNCLIMIT_DEFAULT                      (_MODEM_CTRL5_RESYNCLIMIT_DEFAULT << 30)      /**< Shifted mode DEFAULT for MODEM_CTRL5        */
#define MODEM_CTRL5_RESYNCLIMIT_HALF                         (_MODEM_CTRL5_RESYNCLIMIT_HALF << 30)         /**< Shifted mode HALF for MODEM_CTRL5           */
#define MODEM_CTRL5_RESYNCLIMIT_ALWAYS                       (_MODEM_CTRL5_RESYNCLIMIT_ALWAYS << 30)       /**< Shifted mode ALWAYS for MODEM_CTRL5         */

/* Bit fields for MODEM CTRL6 */
#define _MODEM_CTRL6_RESETVALUE                              0x00000000UL                                   /**< Default value for MODEM_CTRL6               */
#define _MODEM_CTRL6_MASK                                    0xF63FFFFFUL                                   /**< Mask for MODEM_CTRL6                        */
#define _MODEM_CTRL6_TDREW_SHIFT                             0                                              /**< Shift value for MODEM_TDREW                 */
#define _MODEM_CTRL6_TDREW_MASK                              0x7FUL                                         /**< Bit mask for MODEM_TDREW                    */
#define _MODEM_CTRL6_TDREW_DEFAULT                           0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_TDREW_DEFAULT                            (_MODEM_CTRL6_TDREW_DEFAULT << 0)              /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define _MODEM_CTRL6_PREBASES_SHIFT                          7                                              /**< Shift value for MODEM_PREBASES              */
#define _MODEM_CTRL6_PREBASES_MASK                           0x780UL                                        /**< Bit mask for MODEM_PREBASES                 */
#define _MODEM_CTRL6_PREBASES_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_PREBASES_DEFAULT                         (_MODEM_CTRL6_PREBASES_DEFAULT << 7)           /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_PSTIMABORT0                              (0x1UL << 11)                                  /**< Preamble Search Timing Abort Criteria 0     */
#define _MODEM_CTRL6_PSTIMABORT0_SHIFT                       11                                             /**< Shift value for MODEM_PSTIMABORT0           */
#define _MODEM_CTRL6_PSTIMABORT0_MASK                        0x800UL                                        /**< Bit mask for MODEM_PSTIMABORT0              */
#define _MODEM_CTRL6_PSTIMABORT0_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_PSTIMABORT0_DEFAULT                      (_MODEM_CTRL6_PSTIMABORT0_DEFAULT << 11)       /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_PSTIMABORT1                              (0x1UL << 12)                                  /**< Preamble Search Timing Abort Criteria 1     */
#define _MODEM_CTRL6_PSTIMABORT1_SHIFT                       12                                             /**< Shift value for MODEM_PSTIMABORT1           */
#define _MODEM_CTRL6_PSTIMABORT1_MASK                        0x1000UL                                       /**< Bit mask for MODEM_PSTIMABORT1              */
#define _MODEM_CTRL6_PSTIMABORT1_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_PSTIMABORT1_DEFAULT                      (_MODEM_CTRL6_PSTIMABORT1_DEFAULT << 12)       /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_PSTIMABORT2                              (0x1UL << 13)                                  /**< Preamble Search Timing Abort Criteria 2     */
#define _MODEM_CTRL6_PSTIMABORT2_SHIFT                       13                                             /**< Shift value for MODEM_PSTIMABORT2           */
#define _MODEM_CTRL6_PSTIMABORT2_MASK                        0x2000UL                                       /**< Bit mask for MODEM_PSTIMABORT2              */
#define _MODEM_CTRL6_PSTIMABORT2_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_PSTIMABORT2_DEFAULT                      (_MODEM_CTRL6_PSTIMABORT2_DEFAULT << 13)       /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_PSTIMABORT3                              (0x1UL << 14)                                  /**< Preamble Search Timing Abort Criteria 3     */
#define _MODEM_CTRL6_PSTIMABORT3_SHIFT                       14                                             /**< Shift value for MODEM_PSTIMABORT3           */
#define _MODEM_CTRL6_PSTIMABORT3_MASK                        0x4000UL                                       /**< Bit mask for MODEM_PSTIMABORT3              */
#define _MODEM_CTRL6_PSTIMABORT3_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_PSTIMABORT3_DEFAULT                      (_MODEM_CTRL6_PSTIMABORT3_DEFAULT << 14)       /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define _MODEM_CTRL6_ARW_SHIFT                               15                                             /**< Shift value for MODEM_ARW                   */
#define _MODEM_CTRL6_ARW_MASK                                0x18000UL                                      /**< Bit mask for MODEM_ARW                      */
#define _MODEM_CTRL6_ARW_DEFAULT                             0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define _MODEM_CTRL6_ARW_SMALLWND                            0x00000000UL                                   /**< Mode SMALLWND for MODEM_CTRL6               */
#define _MODEM_CTRL6_ARW_ALWAYS                              0x00000001UL                                   /**< Mode ALWAYS for MODEM_CTRL6                 */
#define _MODEM_CTRL6_ARW_NEVER                               0x00000002UL                                   /**< Mode NEVER for MODEM_CTRL6                  */
#define _MODEM_CTRL6_ARW_PSABORT                             0x00000003UL                                   /**< Mode PSABORT for MODEM_CTRL6                */
#define MODEM_CTRL6_ARW_DEFAULT                              (_MODEM_CTRL6_ARW_DEFAULT << 15)               /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_ARW_SMALLWND                             (_MODEM_CTRL6_ARW_SMALLWND << 15)              /**< Shifted mode SMALLWND for MODEM_CTRL6       */
#define MODEM_CTRL6_ARW_ALWAYS                               (_MODEM_CTRL6_ARW_ALWAYS << 15)                /**< Shifted mode ALWAYS for MODEM_CTRL6         */
#define MODEM_CTRL6_ARW_NEVER                                (_MODEM_CTRL6_ARW_NEVER << 15)                 /**< Shifted mode NEVER for MODEM_CTRL6          */
#define MODEM_CTRL6_ARW_PSABORT                              (_MODEM_CTRL6_ARW_PSABORT << 15)               /**< Shifted mode PSABORT for MODEM_CTRL6        */
#define _MODEM_CTRL6_TIMTHRESHGAIN_SHIFT                     17                                             /**< Shift value for MODEM_TIMTHRESHGAIN         */
#define _MODEM_CTRL6_TIMTHRESHGAIN_MASK                      0xE0000UL                                      /**< Bit mask for MODEM_TIMTHRESHGAIN            */
#define _MODEM_CTRL6_TIMTHRESHGAIN_DEFAULT                   0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_TIMTHRESHGAIN_DEFAULT                    (_MODEM_CTRL6_TIMTHRESHGAIN_DEFAULT << 17)     /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_CPLXCORREN                               (0x1UL << 20)                                  /**< Enable Complex Correlation                  */
#define _MODEM_CTRL6_CPLXCORREN_SHIFT                        20                                             /**< Shift value for MODEM_CPLXCORREN            */
#define _MODEM_CTRL6_CPLXCORREN_MASK                         0x100000UL                                     /**< Bit mask for MODEM_CPLXCORREN               */
#define _MODEM_CTRL6_CPLXCORREN_DEFAULT                      0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_CPLXCORREN_DEFAULT                       (_MODEM_CTRL6_CPLXCORREN_DEFAULT << 20)        /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_DSSS3SYMBOLSYNCEN                        (0x1UL << 21)                                  /**< Enable three symbol sync detection          */
#define _MODEM_CTRL6_DSSS3SYMBOLSYNCEN_SHIFT                 21                                             /**< Shift value for MODEM_DSSS3SYMBOLSYNCEN     */
#define _MODEM_CTRL6_DSSS3SYMBOLSYNCEN_MASK                  0x200000UL                                     /**< Bit mask for MODEM_DSSS3SYMBOLSYNCEN        */
#define _MODEM_CTRL6_DSSS3SYMBOLSYNCEN_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_DSSS3SYMBOLSYNCEN_DEFAULT                (_MODEM_CTRL6_DSSS3SYMBOLSYNCEN_DEFAULT << 21) /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define _MODEM_CTRL6_CODINGB_SHIFT                           25                                             /**< Shift value for MODEM_CODINGB               */
#define _MODEM_CTRL6_CODINGB_MASK                            0x6000000UL                                    /**< Bit mask for MODEM_CODINGB                  */
#define _MODEM_CTRL6_CODINGB_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define _MODEM_CTRL6_CODINGB_NRZ                             0x00000000UL                                   /**< Mode NRZ for MODEM_CTRL6                    */
#define _MODEM_CTRL6_CODINGB_MANCHESTER                      0x00000001UL                                   /**< Mode MANCHESTER for MODEM_CTRL6             */
#define _MODEM_CTRL6_CODINGB_DSSS                            0x00000002UL                                   /**< Mode DSSS for MODEM_CTRL6                   */
#define _MODEM_CTRL6_CODINGB_LINECODE                        0x00000003UL                                   /**< Mode LINECODE for MODEM_CTRL6               */
#define MODEM_CTRL6_CODINGB_DEFAULT                          (_MODEM_CTRL6_CODINGB_DEFAULT << 25)           /**< Shifted mode DEFAULT for MODEM_CTRL6        */
#define MODEM_CTRL6_CODINGB_NRZ                              (_MODEM_CTRL6_CODINGB_NRZ << 25)               /**< Shifted mode NRZ for MODEM_CTRL6            */
#define MODEM_CTRL6_CODINGB_MANCHESTER                       (_MODEM_CTRL6_CODINGB_MANCHESTER << 25)        /**< Shifted mode MANCHESTER for MODEM_CTRL6     */
#define MODEM_CTRL6_CODINGB_DSSS                             (_MODEM_CTRL6_CODINGB_DSSS << 25)              /**< Shifted mode DSSS for MODEM_CTRL6           */
#define MODEM_CTRL6_CODINGB_LINECODE                         (_MODEM_CTRL6_CODINGB_LINECODE << 25)          /**< Shifted mode LINECODE for MODEM_CTRL6       */
#define MODEM_CTRL6_RXBRCALCDIS                              (0x1UL << 30)                                  /**< RX Baudrate Calculation Disable             */
#define _MODEM_CTRL6_RXBRCALCDIS_SHIFT                       30                                             /**< Shift value for MODEM_RXBRCALCDIS           */
#define _MODEM_CTRL6_RXBRCALCDIS_MASK                        0x40000000UL                                   /**< Bit mask for MODEM_RXBRCALCDIS              */
#define _MODEM_CTRL6_RXBRCALCDIS_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_CTRL6                */
#define MODEM_CTRL6_RXBRCALCDIS_DEFAULT                      (_MODEM_CTRL6_RXBRCALCDIS_DEFAULT << 30)       /**< Shifted mode DEFAULT for MODEM_CTRL6        */

/* Bit fields for MODEM TXBR */
#define _MODEM_TXBR_RESETVALUE                               0x00000000UL                        /**< Default value for MODEM_TXBR                */
#define _MODEM_TXBR_MASK                                     0x00FFFFFFUL                        /**< Mask for MODEM_TXBR                         */
#define _MODEM_TXBR_TXBRNUM_SHIFT                            0                                   /**< Shift value for MODEM_TXBRNUM               */
#define _MODEM_TXBR_TXBRNUM_MASK                             0xFFFFUL                            /**< Bit mask for MODEM_TXBRNUM                  */
#define _MODEM_TXBR_TXBRNUM_DEFAULT                          0x00000000UL                        /**< Mode DEFAULT for MODEM_TXBR                 */
#define MODEM_TXBR_TXBRNUM_DEFAULT                           (_MODEM_TXBR_TXBRNUM_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_TXBR         */
#define _MODEM_TXBR_TXBRDEN_SHIFT                            16                                  /**< Shift value for MODEM_TXBRDEN               */
#define _MODEM_TXBR_TXBRDEN_MASK                             0xFF0000UL                          /**< Bit mask for MODEM_TXBRDEN                  */
#define _MODEM_TXBR_TXBRDEN_DEFAULT                          0x00000000UL                        /**< Mode DEFAULT for MODEM_TXBR                 */
#define MODEM_TXBR_TXBRDEN_DEFAULT                           (_MODEM_TXBR_TXBRDEN_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_TXBR         */

/* Bit fields for MODEM RXBR */
#define _MODEM_RXBR_RESETVALUE                               0x00000000UL                        /**< Default value for MODEM_RXBR                */
#define _MODEM_RXBR_MASK                                     0x00001FFFUL                        /**< Mask for MODEM_RXBR                         */
#define _MODEM_RXBR_RXBRNUM_SHIFT                            0                                   /**< Shift value for MODEM_RXBRNUM               */
#define _MODEM_RXBR_RXBRNUM_MASK                             0x1FUL                              /**< Bit mask for MODEM_RXBRNUM                  */
#define _MODEM_RXBR_RXBRNUM_DEFAULT                          0x00000000UL                        /**< Mode DEFAULT for MODEM_RXBR                 */
#define MODEM_RXBR_RXBRNUM_DEFAULT                           (_MODEM_RXBR_RXBRNUM_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_RXBR         */
#define _MODEM_RXBR_RXBRDEN_SHIFT                            5                                   /**< Shift value for MODEM_RXBRDEN               */
#define _MODEM_RXBR_RXBRDEN_MASK                             0x3E0UL                             /**< Bit mask for MODEM_RXBRDEN                  */
#define _MODEM_RXBR_RXBRDEN_DEFAULT                          0x00000000UL                        /**< Mode DEFAULT for MODEM_RXBR                 */
#define MODEM_RXBR_RXBRDEN_DEFAULT                           (_MODEM_RXBR_RXBRDEN_DEFAULT << 5)  /**< Shifted mode DEFAULT for MODEM_RXBR         */
#define _MODEM_RXBR_RXBRINT_SHIFT                            10                                  /**< Shift value for MODEM_RXBRINT               */
#define _MODEM_RXBR_RXBRINT_MASK                             0x1C00UL                            /**< Bit mask for MODEM_RXBRINT                  */
#define _MODEM_RXBR_RXBRINT_DEFAULT                          0x00000000UL                        /**< Mode DEFAULT for MODEM_RXBR                 */
#define MODEM_RXBR_RXBRINT_DEFAULT                           (_MODEM_RXBR_RXBRINT_DEFAULT << 10) /**< Shifted mode DEFAULT for MODEM_RXBR         */

/* Bit fields for MODEM CF */
#define _MODEM_CF_RESETVALUE                                 0x00000000UL                       /**< Default value for MODEM_CF                  */
#define _MODEM_CF_MASK                                       0xFFFFFFFFUL                       /**< Mask for MODEM_CF                           */
#define _MODEM_CF_DEC0_SHIFT                                 0                                  /**< Shift value for MODEM_DEC0                  */
#define _MODEM_CF_DEC0_MASK                                  0x7UL                              /**< Bit mask for MODEM_DEC0                     */
#define _MODEM_CF_DEC0_DEFAULT                               0x00000000UL                       /**< Mode DEFAULT for MODEM_CF                   */
#define _MODEM_CF_DEC0_DF3                                   0x00000000UL                       /**< Mode DF3 for MODEM_CF                       */
#define _MODEM_CF_DEC0_DF4WIDE                               0x00000001UL                       /**< Mode DF4WIDE for MODEM_CF                   */
#define _MODEM_CF_DEC0_DF4NARROW                             0x00000002UL                       /**< Mode DF4NARROW for MODEM_CF                 */
#define _MODEM_CF_DEC0_DF8WIDE                               0x00000003UL                       /**< Mode DF8WIDE for MODEM_CF                   */
#define _MODEM_CF_DEC0_DF8NARROW                             0x00000004UL                       /**< Mode DF8NARROW for MODEM_CF                 */
#define MODEM_CF_DEC0_DEFAULT                                (_MODEM_CF_DEC0_DEFAULT << 0)      /**< Shifted mode DEFAULT for MODEM_CF           */
#define MODEM_CF_DEC0_DF3                                    (_MODEM_CF_DEC0_DF3 << 0)          /**< Shifted mode DF3 for MODEM_CF               */
#define MODEM_CF_DEC0_DF4WIDE                                (_MODEM_CF_DEC0_DF4WIDE << 0)      /**< Shifted mode DF4WIDE for MODEM_CF           */
#define MODEM_CF_DEC0_DF4NARROW                              (_MODEM_CF_DEC0_DF4NARROW << 0)    /**< Shifted mode DF4NARROW for MODEM_CF         */
#define MODEM_CF_DEC0_DF8WIDE                                (_MODEM_CF_DEC0_DF8WIDE << 0)      /**< Shifted mode DF8WIDE for MODEM_CF           */
#define MODEM_CF_DEC0_DF8NARROW                              (_MODEM_CF_DEC0_DF8NARROW << 0)    /**< Shifted mode DF8NARROW for MODEM_CF         */
#define _MODEM_CF_DEC1_SHIFT                                 3                                  /**< Shift value for MODEM_DEC1                  */
#define _MODEM_CF_DEC1_MASK                                  0x1FFF8UL                          /**< Bit mask for MODEM_DEC1                     */
#define _MODEM_CF_DEC1_DEFAULT                               0x00000000UL                       /**< Mode DEFAULT for MODEM_CF                   */
#define MODEM_CF_DEC1_DEFAULT                                (_MODEM_CF_DEC1_DEFAULT << 3)      /**< Shifted mode DEFAULT for MODEM_CF           */
#define _MODEM_CF_DEC2_SHIFT                                 17                                 /**< Shift value for MODEM_DEC2                  */
#define _MODEM_CF_DEC2_MASK                                  0x7E0000UL                         /**< Bit mask for MODEM_DEC2                     */
#define _MODEM_CF_DEC2_DEFAULT                               0x00000000UL                       /**< Mode DEFAULT for MODEM_CF                   */
#define MODEM_CF_DEC2_DEFAULT                                (_MODEM_CF_DEC2_DEFAULT << 17)     /**< Shifted mode DEFAULT for MODEM_CF           */
#define _MODEM_CF_CFOSR_SHIFT                                23                                 /**< Shift value for MODEM_CFOSR                 */
#define _MODEM_CF_CFOSR_MASK                                 0x3800000UL                        /**< Bit mask for MODEM_CFOSR                    */
#define _MODEM_CF_CFOSR_DEFAULT                              0x00000000UL                       /**< Mode DEFAULT for MODEM_CF                   */
#define _MODEM_CF_CFOSR_CF7                                  0x00000000UL                       /**< Mode CF7 for MODEM_CF                       */
#define _MODEM_CF_CFOSR_CF8                                  0x00000001UL                       /**< Mode CF8 for MODEM_CF                       */
#define _MODEM_CF_CFOSR_CF12                                 0x00000002UL                       /**< Mode CF12 for MODEM_CF                      */
#define _MODEM_CF_CFOSR_CF16                                 0x00000003UL                       /**< Mode CF16 for MODEM_CF                      */
#define _MODEM_CF_CFOSR_CF32                                 0x00000004UL                       /**< Mode CF32 for MODEM_CF                      */
#define _MODEM_CF_CFOSR_CF0                                  0x00000005UL                       /**< Mode CF0 for MODEM_CF                       */
#define MODEM_CF_CFOSR_DEFAULT                               (_MODEM_CF_CFOSR_DEFAULT << 23)    /**< Shifted mode DEFAULT for MODEM_CF           */
#define MODEM_CF_CFOSR_CF7                                   (_MODEM_CF_CFOSR_CF7 << 23)        /**< Shifted mode CF7 for MODEM_CF               */
#define MODEM_CF_CFOSR_CF8                                   (_MODEM_CF_CFOSR_CF8 << 23)        /**< Shifted mode CF8 for MODEM_CF               */
#define MODEM_CF_CFOSR_CF12                                  (_MODEM_CF_CFOSR_CF12 << 23)       /**< Shifted mode CF12 for MODEM_CF              */
#define MODEM_CF_CFOSR_CF16                                  (_MODEM_CF_CFOSR_CF16 << 23)       /**< Shifted mode CF16 for MODEM_CF              */
#define MODEM_CF_CFOSR_CF32                                  (_MODEM_CF_CFOSR_CF32 << 23)       /**< Shifted mode CF32 for MODEM_CF              */
#define MODEM_CF_CFOSR_CF0                                   (_MODEM_CF_CFOSR_CF0 << 23)        /**< Shifted mode CF0 for MODEM_CF               */
#define _MODEM_CF_DEC1GAIN_SHIFT                             26                                 /**< Shift value for MODEM_DEC1GAIN              */
#define _MODEM_CF_DEC1GAIN_MASK                              0xC000000UL                        /**< Bit mask for MODEM_DEC1GAIN                 */
#define _MODEM_CF_DEC1GAIN_DEFAULT                           0x00000000UL                       /**< Mode DEFAULT for MODEM_CF                   */
#define _MODEM_CF_DEC1GAIN_ADD0                              0x00000000UL                       /**< Mode ADD0 for MODEM_CF                      */
#define _MODEM_CF_DEC1GAIN_ADD6                              0x00000001UL                       /**< Mode ADD6 for MODEM_CF                      */
#define _MODEM_CF_DEC1GAIN_ADD12                             0x00000002UL                       /**< Mode ADD12 for MODEM_CF                     */
#define MODEM_CF_DEC1GAIN_DEFAULT                            (_MODEM_CF_DEC1GAIN_DEFAULT << 26) /**< Shifted mode DEFAULT for MODEM_CF           */
#define MODEM_CF_DEC1GAIN_ADD0                               (_MODEM_CF_DEC1GAIN_ADD0 << 26)    /**< Shifted mode ADD0 for MODEM_CF              */
#define MODEM_CF_DEC1GAIN_ADD6                               (_MODEM_CF_DEC1GAIN_ADD6 << 26)    /**< Shifted mode ADD6 for MODEM_CF              */
#define MODEM_CF_DEC1GAIN_ADD12                              (_MODEM_CF_DEC1GAIN_ADD12 << 26)   /**< Shifted mode ADD12 for MODEM_CF             */

/* Bit fields for MODEM PRE */
#define _MODEM_PRE_RESETVALUE                                0x00000000UL                            /**< Default value for MODEM_PRE                 */
#define _MODEM_PRE_MASK                                      0xFFFF1FFFUL                            /**< Mask for MODEM_PRE                          */
#define _MODEM_PRE_BASE_SHIFT                                0                                       /**< Shift value for MODEM_BASE                  */
#define _MODEM_PRE_BASE_MASK                                 0xFUL                                   /**< Bit mask for MODEM_BASE                     */
#define _MODEM_PRE_BASE_DEFAULT                              0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define MODEM_PRE_BASE_DEFAULT                               (_MODEM_PRE_BASE_DEFAULT << 0)          /**< Shifted mode DEFAULT for MODEM_PRE          */
#define _MODEM_PRE_BASEBITS_SHIFT                            4                                       /**< Shift value for MODEM_BASEBITS              */
#define _MODEM_PRE_BASEBITS_MASK                             0x30UL                                  /**< Bit mask for MODEM_BASEBITS                 */
#define _MODEM_PRE_BASEBITS_DEFAULT                          0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define MODEM_PRE_BASEBITS_DEFAULT                           (_MODEM_PRE_BASEBITS_DEFAULT << 4)      /**< Shifted mode DEFAULT for MODEM_PRE          */
#define MODEM_PRE_PRESYMB4FSK                                (0x1UL << 6)                            /**< Preamble symbols 4-FSK                      */
#define _MODEM_PRE_PRESYMB4FSK_SHIFT                         6                                       /**< Shift value for MODEM_PRESYMB4FSK           */
#define _MODEM_PRE_PRESYMB4FSK_MASK                          0x40UL                                  /**< Bit mask for MODEM_PRESYMB4FSK              */
#define _MODEM_PRE_PRESYMB4FSK_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define _MODEM_PRE_PRESYMB4FSK_OUTER                         0x00000000UL                            /**< Mode OUTER for MODEM_PRE                    */
#define _MODEM_PRE_PRESYMB4FSK_INNER                         0x00000001UL                            /**< Mode INNER for MODEM_PRE                    */
#define MODEM_PRE_PRESYMB4FSK_DEFAULT                        (_MODEM_PRE_PRESYMB4FSK_DEFAULT << 6)   /**< Shifted mode DEFAULT for MODEM_PRE          */
#define MODEM_PRE_PRESYMB4FSK_OUTER                          (_MODEM_PRE_PRESYMB4FSK_OUTER << 6)     /**< Shifted mode OUTER for MODEM_PRE            */
#define MODEM_PRE_PRESYMB4FSK_INNER                          (_MODEM_PRE_PRESYMB4FSK_INNER << 6)     /**< Shifted mode INNER for MODEM_PRE            */
#define _MODEM_PRE_PREERRORS_SHIFT                           7                                       /**< Shift value for MODEM_PREERRORS             */
#define _MODEM_PRE_PREERRORS_MASK                            0x780UL                                 /**< Bit mask for MODEM_PREERRORS                */
#define _MODEM_PRE_PREERRORS_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define MODEM_PRE_PREERRORS_DEFAULT                          (_MODEM_PRE_PREERRORS_DEFAULT << 7)     /**< Shifted mode DEFAULT for MODEM_PRE          */
#define MODEM_PRE_DSSSPRE                                    (0x1UL << 11)                           /**< DSSS preamble                               */
#define _MODEM_PRE_DSSSPRE_SHIFT                             11                                      /**< Shift value for MODEM_DSSSPRE               */
#define _MODEM_PRE_DSSSPRE_MASK                              0x800UL                                 /**< Bit mask for MODEM_DSSSPRE                  */
#define _MODEM_PRE_DSSSPRE_DEFAULT                           0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define MODEM_PRE_DSSSPRE_DEFAULT                            (_MODEM_PRE_DSSSPRE_DEFAULT << 11)      /**< Shifted mode DEFAULT for MODEM_PRE          */
#define MODEM_PRE_SYNCSYMB4FSK                               (0x1UL << 12)                           /**< Sync symbols 4FSK                           */
#define _MODEM_PRE_SYNCSYMB4FSK_SHIFT                        12                                      /**< Shift value for MODEM_SYNCSYMB4FSK          */
#define _MODEM_PRE_SYNCSYMB4FSK_MASK                         0x1000UL                                /**< Bit mask for MODEM_SYNCSYMB4FSK             */
#define _MODEM_PRE_SYNCSYMB4FSK_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define _MODEM_PRE_SYNCSYMB4FSK_FSK2                         0x00000000UL                            /**< Mode FSK2 for MODEM_PRE                     */
#define _MODEM_PRE_SYNCSYMB4FSK_FSK4                         0x00000001UL                            /**< Mode FSK4 for MODEM_PRE                     */
#define MODEM_PRE_SYNCSYMB4FSK_DEFAULT                       (_MODEM_PRE_SYNCSYMB4FSK_DEFAULT << 12) /**< Shifted mode DEFAULT for MODEM_PRE          */
#define MODEM_PRE_SYNCSYMB4FSK_FSK2                          (_MODEM_PRE_SYNCSYMB4FSK_FSK2 << 12)    /**< Shifted mode FSK2 for MODEM_PRE             */
#define MODEM_PRE_SYNCSYMB4FSK_FSK4                          (_MODEM_PRE_SYNCSYMB4FSK_FSK4 << 12)    /**< Shifted mode FSK4 for MODEM_PRE             */
#define _MODEM_PRE_TXBASES_SHIFT                             16                                      /**< Shift value for MODEM_TXBASES               */
#define _MODEM_PRE_TXBASES_MASK                              0xFFFF0000UL                            /**< Bit mask for MODEM_TXBASES                  */
#define _MODEM_PRE_TXBASES_DEFAULT                           0x00000000UL                            /**< Mode DEFAULT for MODEM_PRE                  */
#define MODEM_PRE_TXBASES_DEFAULT                            (_MODEM_PRE_TXBASES_DEFAULT << 16)      /**< Shifted mode DEFAULT for MODEM_PRE          */

/* Bit fields for MODEM SYNC0 */
#define _MODEM_SYNC0_RESETVALUE                              0x00000000UL                      /**< Default value for MODEM_SYNC0               */
#define _MODEM_SYNC0_MASK                                    0xFFFFFFFFUL                      /**< Mask for MODEM_SYNC0                        */
#define _MODEM_SYNC0_SYNC0_SHIFT                             0                                 /**< Shift value for MODEM_SYNC0                 */
#define _MODEM_SYNC0_SYNC0_MASK                              0xFFFFFFFFUL                      /**< Bit mask for MODEM_SYNC0                    */
#define _MODEM_SYNC0_SYNC0_DEFAULT                           0x00000000UL                      /**< Mode DEFAULT for MODEM_SYNC0                */
#define MODEM_SYNC0_SYNC0_DEFAULT                            (_MODEM_SYNC0_SYNC0_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_SYNC0        */

/* Bit fields for MODEM SYNC1 */
#define _MODEM_SYNC1_RESETVALUE                              0x00000000UL                      /**< Default value for MODEM_SYNC1               */
#define _MODEM_SYNC1_MASK                                    0xFFFFFFFFUL                      /**< Mask for MODEM_SYNC1                        */
#define _MODEM_SYNC1_SYNC1_SHIFT                             0                                 /**< Shift value for MODEM_SYNC1                 */
#define _MODEM_SYNC1_SYNC1_MASK                              0xFFFFFFFFUL                      /**< Bit mask for MODEM_SYNC1                    */
#define _MODEM_SYNC1_SYNC1_DEFAULT                           0x00000000UL                      /**< Mode DEFAULT for MODEM_SYNC1                */
#define MODEM_SYNC1_SYNC1_DEFAULT                            (_MODEM_SYNC1_SYNC1_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_SYNC1        */

/* Bit fields for MODEM TIMING */
#define _MODEM_TIMING_RESETVALUE                             0x00000000UL                              /**< Default value for MODEM_TIMING              */
#define _MODEM_TIMING_MASK                                   0xFFFFFFFFUL                              /**< Mask for MODEM_TIMING                       */
#define _MODEM_TIMING_TIMTHRESH_SHIFT                        0                                         /**< Shift value for MODEM_TIMTHRESH             */
#define _MODEM_TIMING_TIMTHRESH_MASK                         0xFFUL                                    /**< Bit mask for MODEM_TIMTHRESH                */
#define _MODEM_TIMING_TIMTHRESH_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_TIMTHRESH_DEFAULT                       (_MODEM_TIMING_TIMTHRESH_DEFAULT << 0)    /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define _MODEM_TIMING_TIMINGBASES_SHIFT                      8                                         /**< Shift value for MODEM_TIMINGBASES           */
#define _MODEM_TIMING_TIMINGBASES_MASK                       0xF00UL                                   /**< Bit mask for MODEM_TIMINGBASES              */
#define _MODEM_TIMING_TIMINGBASES_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_TIMINGBASES_DEFAULT                     (_MODEM_TIMING_TIMINGBASES_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define _MODEM_TIMING_ADDTIMSEQ_SHIFT                        12                                        /**< Shift value for MODEM_ADDTIMSEQ             */
#define _MODEM_TIMING_ADDTIMSEQ_MASK                         0xF000UL                                  /**< Bit mask for MODEM_ADDTIMSEQ                */
#define _MODEM_TIMING_ADDTIMSEQ_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_ADDTIMSEQ_DEFAULT                       (_MODEM_TIMING_ADDTIMSEQ_DEFAULT << 12)   /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define MODEM_TIMING_TIMSEQINVEN                             (0x1UL << 16)                             /**< Timing sequence inversion enable            */
#define _MODEM_TIMING_TIMSEQINVEN_SHIFT                      16                                        /**< Shift value for MODEM_TIMSEQINVEN           */
#define _MODEM_TIMING_TIMSEQINVEN_MASK                       0x10000UL                                 /**< Bit mask for MODEM_TIMSEQINVEN              */
#define _MODEM_TIMING_TIMSEQINVEN_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_TIMSEQINVEN_DEFAULT                     (_MODEM_TIMING_TIMSEQINVEN_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define MODEM_TIMING_TIMSEQSYNC                              (0x1UL << 17)                             /**< Timing sequence part of sync-word           */
#define _MODEM_TIMING_TIMSEQSYNC_SHIFT                       17                                        /**< Shift value for MODEM_TIMSEQSYNC            */
#define _MODEM_TIMING_TIMSEQSYNC_MASK                        0x20000UL                                 /**< Bit mask for MODEM_TIMSEQSYNC               */
#define _MODEM_TIMING_TIMSEQSYNC_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_TIMSEQSYNC_DEFAULT                      (_MODEM_TIMING_TIMSEQSYNC_DEFAULT << 17)  /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define _MODEM_TIMING_FDM0THRESH_SHIFT                       18                                        /**< Shift value for MODEM_FDM0THRESH            */
#define _MODEM_TIMING_FDM0THRESH_MASK                        0x1C0000UL                                /**< Bit mask for MODEM_FDM0THRESH               */
#define _MODEM_TIMING_FDM0THRESH_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_FDM0THRESH_DEFAULT                      (_MODEM_TIMING_FDM0THRESH_DEFAULT << 18)  /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define _MODEM_TIMING_OFFSUBNUM_SHIFT                        21                                        /**< Shift value for MODEM_OFFSUBNUM             */
#define _MODEM_TIMING_OFFSUBNUM_MASK                         0x1E00000UL                               /**< Bit mask for MODEM_OFFSUBNUM                */
#define _MODEM_TIMING_OFFSUBNUM_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_OFFSUBNUM_DEFAULT                       (_MODEM_TIMING_OFFSUBNUM_DEFAULT << 21)   /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define _MODEM_TIMING_OFFSUBDEN_SHIFT                        25                                        /**< Shift value for MODEM_OFFSUBDEN             */
#define _MODEM_TIMING_OFFSUBDEN_MASK                         0x1E000000UL                              /**< Bit mask for MODEM_OFFSUBDEN                */
#define _MODEM_TIMING_OFFSUBDEN_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_OFFSUBDEN_DEFAULT                       (_MODEM_TIMING_OFFSUBDEN_DEFAULT << 25)   /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define MODEM_TIMING_TSAGCDEL                                (0x1UL << 29)                             /**< Timing Search AGC delay                     */
#define _MODEM_TIMING_TSAGCDEL_SHIFT                         29                                        /**< Shift value for MODEM_TSAGCDEL              */
#define _MODEM_TIMING_TSAGCDEL_MASK                          0x20000000UL                              /**< Bit mask for MODEM_TSAGCDEL                 */
#define _MODEM_TIMING_TSAGCDEL_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define MODEM_TIMING_TSAGCDEL_DEFAULT                        (_MODEM_TIMING_TSAGCDEL_DEFAULT << 29)    /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define _MODEM_TIMING_FASTRESYNC_SHIFT                       30                                        /**< Shift value for MODEM_FASTRESYNC            */
#define _MODEM_TIMING_FASTRESYNC_MASK                        0xC0000000UL                              /**< Bit mask for MODEM_FASTRESYNC               */
#define _MODEM_TIMING_FASTRESYNC_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_TIMING               */
#define _MODEM_TIMING_FASTRESYNC_DIS                         0x00000000UL                              /**< Mode DIS for MODEM_TIMING                   */
#define _MODEM_TIMING_FASTRESYNC_PREDET                      0x00000001UL                              /**< Mode PREDET for MODEM_TIMING                */
#define _MODEM_TIMING_FASTRESYNC_FRAMEDET                    0x00000002UL                              /**< Mode FRAMEDET for MODEM_TIMING              */
#define MODEM_TIMING_FASTRESYNC_DEFAULT                      (_MODEM_TIMING_FASTRESYNC_DEFAULT << 30)  /**< Shifted mode DEFAULT for MODEM_TIMING       */
#define MODEM_TIMING_FASTRESYNC_DIS                          (_MODEM_TIMING_FASTRESYNC_DIS << 30)      /**< Shifted mode DIS for MODEM_TIMING           */
#define MODEM_TIMING_FASTRESYNC_PREDET                       (_MODEM_TIMING_FASTRESYNC_PREDET << 30)   /**< Shifted mode PREDET for MODEM_TIMING        */
#define MODEM_TIMING_FASTRESYNC_FRAMEDET                     (_MODEM_TIMING_FASTRESYNC_FRAMEDET << 30) /**< Shifted mode FRAMEDET for MODEM_TIMING      */

/* Bit fields for MODEM DSSS0 */
#define _MODEM_DSSS0_RESETVALUE                              0x00000000UL                      /**< Default value for MODEM_DSSS0               */
#define _MODEM_DSSS0_MASK                                    0xFFFFFFFFUL                      /**< Mask for MODEM_DSSS0                        */
#define _MODEM_DSSS0_DSSS0_SHIFT                             0                                 /**< Shift value for MODEM_DSSS0                 */
#define _MODEM_DSSS0_DSSS0_MASK                              0xFFFFFFFFUL                      /**< Bit mask for MODEM_DSSS0                    */
#define _MODEM_DSSS0_DSSS0_DEFAULT                           0x00000000UL                      /**< Mode DEFAULT for MODEM_DSSS0                */
#define MODEM_DSSS0_DSSS0_DEFAULT                            (_MODEM_DSSS0_DSSS0_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_DSSS0        */

/* Bit fields for MODEM MODINDEX */
#define _MODEM_MODINDEX_RESETVALUE                           0x00000000UL                              /**< Default value for MODEM_MODINDEX            */
#define _MODEM_MODINDEX_MASK                                 0x003F03FFUL                              /**< Mask for MODEM_MODINDEX                     */
#define _MODEM_MODINDEX_MODINDEXM_SHIFT                      0                                         /**< Shift value for MODEM_MODINDEXM             */
#define _MODEM_MODINDEX_MODINDEXM_MASK                       0x1FUL                                    /**< Bit mask for MODEM_MODINDEXM                */
#define _MODEM_MODINDEX_MODINDEXM_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_MODINDEX             */
#define MODEM_MODINDEX_MODINDEXM_DEFAULT                     (_MODEM_MODINDEX_MODINDEXM_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_MODINDEX     */
#define _MODEM_MODINDEX_MODINDEXE_SHIFT                      5                                         /**< Shift value for MODEM_MODINDEXE             */
#define _MODEM_MODINDEX_MODINDEXE_MASK                       0x3E0UL                                   /**< Bit mask for MODEM_MODINDEXE                */
#define _MODEM_MODINDEX_MODINDEXE_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_MODINDEX             */
#define MODEM_MODINDEX_MODINDEXE_DEFAULT                     (_MODEM_MODINDEX_MODINDEXE_DEFAULT << 5)  /**< Shifted mode DEFAULT for MODEM_MODINDEX     */
#define _MODEM_MODINDEX_FREQGAINE_SHIFT                      16                                        /**< Shift value for MODEM_FREQGAINE             */
#define _MODEM_MODINDEX_FREQGAINE_MASK                       0x70000UL                                 /**< Bit mask for MODEM_FREQGAINE                */
#define _MODEM_MODINDEX_FREQGAINE_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_MODINDEX             */
#define MODEM_MODINDEX_FREQGAINE_DEFAULT                     (_MODEM_MODINDEX_FREQGAINE_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_MODINDEX     */
#define _MODEM_MODINDEX_FREQGAINM_SHIFT                      19                                        /**< Shift value for MODEM_FREQGAINM             */
#define _MODEM_MODINDEX_FREQGAINM_MASK                       0x380000UL                                /**< Bit mask for MODEM_FREQGAINM                */
#define _MODEM_MODINDEX_FREQGAINM_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_MODINDEX             */
#define MODEM_MODINDEX_FREQGAINM_DEFAULT                     (_MODEM_MODINDEX_FREQGAINM_DEFAULT << 19) /**< Shifted mode DEFAULT for MODEM_MODINDEX     */

/* Bit fields for MODEM AFC */
#define _MODEM_AFC_RESETVALUE                                0x00000000UL                                   /**< Default value for MODEM_AFC                 */
#define _MODEM_AFC_MASK                                      0x1FFFFDFFUL                                   /**< Mask for MODEM_AFC                          */
#define _MODEM_AFC_AFCSCALEM_SHIFT                           0                                              /**< Shift value for MODEM_AFCSCALEM             */
#define _MODEM_AFC_AFCSCALEM_MASK                            0x1FUL                                         /**< Bit mask for MODEM_AFCSCALEM                */
#define _MODEM_AFC_AFCSCALEM_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCSCALEM_DEFAULT                          (_MODEM_AFC_AFCSCALEM_DEFAULT << 0)            /**< Shifted mode DEFAULT for MODEM_AFC          */
#define _MODEM_AFC_AFCSCALEE_SHIFT                           5                                              /**< Shift value for MODEM_AFCSCALEE             */
#define _MODEM_AFC_AFCSCALEE_MASK                            0x1E0UL                                        /**< Bit mask for MODEM_AFCSCALEE                */
#define _MODEM_AFC_AFCSCALEE_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCSCALEE_DEFAULT                          (_MODEM_AFC_AFCSCALEE_DEFAULT << 5)            /**< Shifted mode DEFAULT for MODEM_AFC          */
#define _MODEM_AFC_AFCRXMODE_SHIFT                           10                                             /**< Shift value for MODEM_AFCRXMODE             */
#define _MODEM_AFC_AFCRXMODE_MASK                            0x1C00UL                                       /**< Bit mask for MODEM_AFCRXMODE                */
#define _MODEM_AFC_AFCRXMODE_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define _MODEM_AFC_AFCRXMODE_DIS                             0x00000000UL                                   /**< Mode DIS for MODEM_AFC                      */
#define _MODEM_AFC_AFCRXMODE_FREE                            0x00000001UL                                   /**< Mode FREE for MODEM_AFC                     */
#define _MODEM_AFC_AFCRXMODE_FREEPRESTART                    0x00000002UL                                   /**< Mode FREEPRESTART for MODEM_AFC             */
#define _MODEM_AFC_AFCRXMODE_TIMLOCK                         0x00000003UL                                   /**< Mode TIMLOCK for MODEM_AFC                  */
#define _MODEM_AFC_AFCRXMODE_PRELOCK                         0x00000004UL                                   /**< Mode PRELOCK for MODEM_AFC                  */
#define _MODEM_AFC_AFCRXMODE_FRAMELOCK                       0x00000005UL                                   /**< Mode FRAMELOCK for MODEM_AFC                */
#define _MODEM_AFC_AFCRXMODE_FRAMELOCKPRESTART               0x00000006UL                                   /**< Mode FRAMELOCKPRESTART for MODEM_AFC        */
#define MODEM_AFC_AFCRXMODE_DEFAULT                          (_MODEM_AFC_AFCRXMODE_DEFAULT << 10)           /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCRXMODE_DIS                              (_MODEM_AFC_AFCRXMODE_DIS << 10)               /**< Shifted mode DIS for MODEM_AFC              */
#define MODEM_AFC_AFCRXMODE_FREE                             (_MODEM_AFC_AFCRXMODE_FREE << 10)              /**< Shifted mode FREE for MODEM_AFC             */
#define MODEM_AFC_AFCRXMODE_FREEPRESTART                     (_MODEM_AFC_AFCRXMODE_FREEPRESTART << 10)      /**< Shifted mode FREEPRESTART for MODEM_AFC     */
#define MODEM_AFC_AFCRXMODE_TIMLOCK                          (_MODEM_AFC_AFCRXMODE_TIMLOCK << 10)           /**< Shifted mode TIMLOCK for MODEM_AFC          */
#define MODEM_AFC_AFCRXMODE_PRELOCK                          (_MODEM_AFC_AFCRXMODE_PRELOCK << 10)           /**< Shifted mode PRELOCK for MODEM_AFC          */
#define MODEM_AFC_AFCRXMODE_FRAMELOCK                        (_MODEM_AFC_AFCRXMODE_FRAMELOCK << 10)         /**< Shifted mode FRAMELOCK for MODEM_AFC        */
#define MODEM_AFC_AFCRXMODE_FRAMELOCKPRESTART                (_MODEM_AFC_AFCRXMODE_FRAMELOCKPRESTART << 10) /**< Shifted mode FRAMELOCKPRESTART for MODEM_AFC*/
#define _MODEM_AFC_AFCTXMODE_SHIFT                           13                                             /**< Shift value for MODEM_AFCTXMODE             */
#define _MODEM_AFC_AFCTXMODE_MASK                            0x6000UL                                       /**< Bit mask for MODEM_AFCTXMODE                */
#define _MODEM_AFC_AFCTXMODE_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define _MODEM_AFC_AFCTXMODE_DIS                             0x00000000UL                                   /**< Mode DIS for MODEM_AFC                      */
#define _MODEM_AFC_AFCTXMODE_PRELOCK                         0x00000001UL                                   /**< Mode PRELOCK for MODEM_AFC                  */
#define _MODEM_AFC_AFCTXMODE_FRAMELOCK                       0x00000002UL                                   /**< Mode FRAMELOCK for MODEM_AFC                */
#define MODEM_AFC_AFCTXMODE_DEFAULT                          (_MODEM_AFC_AFCTXMODE_DEFAULT << 13)           /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCTXMODE_DIS                              (_MODEM_AFC_AFCTXMODE_DIS << 13)               /**< Shifted mode DIS for MODEM_AFC              */
#define MODEM_AFC_AFCTXMODE_PRELOCK                          (_MODEM_AFC_AFCTXMODE_PRELOCK << 13)           /**< Shifted mode PRELOCK for MODEM_AFC          */
#define MODEM_AFC_AFCTXMODE_FRAMELOCK                        (_MODEM_AFC_AFCTXMODE_FRAMELOCK << 13)         /**< Shifted mode FRAMELOCK for MODEM_AFC        */
#define MODEM_AFC_AFCRXCLR                                   (0x1UL << 15)                                  /**< AFCRX clear mode                            */
#define _MODEM_AFC_AFCRXCLR_SHIFT                            15                                             /**< Shift value for MODEM_AFCRXCLR              */
#define _MODEM_AFC_AFCRXCLR_MASK                             0x8000UL                                       /**< Bit mask for MODEM_AFCRXCLR                 */
#define _MODEM_AFC_AFCRXCLR_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCRXCLR_DEFAULT                           (_MODEM_AFC_AFCRXCLR_DEFAULT << 15)            /**< Shifted mode DEFAULT for MODEM_AFC          */
#define _MODEM_AFC_AFCDEL_SHIFT                              16                                             /**< Shift value for MODEM_AFCDEL                */
#define _MODEM_AFC_AFCDEL_MASK                               0x1F0000UL                                     /**< Bit mask for MODEM_AFCDEL                   */
#define _MODEM_AFC_AFCDEL_DEFAULT                            0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCDEL_DEFAULT                             (_MODEM_AFC_AFCDEL_DEFAULT << 16)              /**< Shifted mode DEFAULT for MODEM_AFC          */
#define _MODEM_AFC_AFCAVGPER_SHIFT                           21                                             /**< Shift value for MODEM_AFCAVGPER             */
#define _MODEM_AFC_AFCAVGPER_MASK                            0xE00000UL                                     /**< Bit mask for MODEM_AFCAVGPER                */
#define _MODEM_AFC_AFCAVGPER_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCAVGPER_DEFAULT                          (_MODEM_AFC_AFCAVGPER_DEFAULT << 21)           /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCLIMRESET                                (0x1UL << 24)                                  /**< Reset AFCADJRX value                        */
#define _MODEM_AFC_AFCLIMRESET_SHIFT                         24                                             /**< Shift value for MODEM_AFCLIMRESET           */
#define _MODEM_AFC_AFCLIMRESET_MASK                          0x1000000UL                                    /**< Bit mask for MODEM_AFCLIMRESET              */
#define _MODEM_AFC_AFCLIMRESET_DEFAULT                       0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCLIMRESET_DEFAULT                        (_MODEM_AFC_AFCLIMRESET_DEFAULT << 24)         /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCONESHOT                                 (0x1UL << 25)                                  /**< AFC One-Shot feature                        */
#define _MODEM_AFC_AFCONESHOT_SHIFT                          25                                             /**< Shift value for MODEM_AFCONESHOT            */
#define _MODEM_AFC_AFCONESHOT_MASK                           0x2000000UL                                    /**< Bit mask for MODEM_AFCONESHOT               */
#define _MODEM_AFC_AFCONESHOT_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCONESHOT_DEFAULT                         (_MODEM_AFC_AFCONESHOT_DEFAULT << 25)          /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCENINTCOMP                               (0x1UL << 26)                                  /**< Internal frequency offset compensation      */
#define _MODEM_AFC_AFCENINTCOMP_SHIFT                        26                                             /**< Shift value for MODEM_AFCENINTCOMP          */
#define _MODEM_AFC_AFCENINTCOMP_MASK                         0x4000000UL                                    /**< Bit mask for MODEM_AFCENINTCOMP             */
#define _MODEM_AFC_AFCENINTCOMP_DEFAULT                      0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCENINTCOMP_DEFAULT                       (_MODEM_AFC_AFCENINTCOMP_DEFAULT << 26)        /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCDSAFREQOFFEST                           (0x1UL << 27)                                  /**< Consider frequency offset estimation        */
#define _MODEM_AFC_AFCDSAFREQOFFEST_SHIFT                    27                                             /**< Shift value for MODEM_AFCDSAFREQOFFEST      */
#define _MODEM_AFC_AFCDSAFREQOFFEST_MASK                     0x8000000UL                                    /**< Bit mask for MODEM_AFCDSAFREQOFFEST         */
#define _MODEM_AFC_AFCDSAFREQOFFEST_DEFAULT                  0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCDSAFREQOFFEST_DEFAULT                   (_MODEM_AFC_AFCDSAFREQOFFEST_DEFAULT << 27)    /**< Shifted mode DEFAULT for MODEM_AFC          */
#define MODEM_AFC_AFCDELDET                                  (0x1UL << 28)                                  /**< Delay Detection state machine               */
#define _MODEM_AFC_AFCDELDET_SHIFT                           28                                             /**< Shift value for MODEM_AFCDELDET             */
#define _MODEM_AFC_AFCDELDET_MASK                            0x10000000UL                                   /**< Bit mask for MODEM_AFCDELDET                */
#define _MODEM_AFC_AFCDELDET_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for MODEM_AFC                  */
#define MODEM_AFC_AFCDELDET_DEFAULT                          (_MODEM_AFC_AFCDELDET_DEFAULT << 28)           /**< Shifted mode DEFAULT for MODEM_AFC          */

/* Bit fields for MODEM AFCADJLIM */
#define _MODEM_AFCADJLIM_RESETVALUE                          0x00000000UL                              /**< Default value for MODEM_AFCADJLIM           */
#define _MODEM_AFCADJLIM_MASK                                0x0003FFFFUL                              /**< Mask for MODEM_AFCADJLIM                    */
#define _MODEM_AFCADJLIM_AFCADJLIM_SHIFT                     0                                         /**< Shift value for MODEM_AFCADJLIM             */
#define _MODEM_AFCADJLIM_AFCADJLIM_MASK                      0x3FFFFUL                                 /**< Bit mask for MODEM_AFCADJLIM                */
#define _MODEM_AFCADJLIM_AFCADJLIM_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for MODEM_AFCADJLIM            */
#define MODEM_AFCADJLIM_AFCADJLIM_DEFAULT                    (_MODEM_AFCADJLIM_AFCADJLIM_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_AFCADJLIM    */

/* Bit fields for MODEM SHAPING0 */
#define _MODEM_SHAPING0_RESETVALUE                           0x22130A04UL                           /**< Default value for MODEM_SHAPING0            */
#define _MODEM_SHAPING0_MASK                                 0xFFFFFFFFUL                           /**< Mask for MODEM_SHAPING0                     */
#define _MODEM_SHAPING0_COEFF0_SHIFT                         0                                      /**< Shift value for MODEM_COEFF0                */
#define _MODEM_SHAPING0_COEFF0_MASK                          0xFFUL                                 /**< Bit mask for MODEM_COEFF0                   */
#define _MODEM_SHAPING0_COEFF0_DEFAULT                       0x00000004UL                           /**< Mode DEFAULT for MODEM_SHAPING0             */
#define MODEM_SHAPING0_COEFF0_DEFAULT                        (_MODEM_SHAPING0_COEFF0_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_SHAPING0     */
#define _MODEM_SHAPING0_COEFF1_SHIFT                         8                                      /**< Shift value for MODEM_COEFF1                */
#define _MODEM_SHAPING0_COEFF1_MASK                          0xFF00UL                               /**< Bit mask for MODEM_COEFF1                   */
#define _MODEM_SHAPING0_COEFF1_DEFAULT                       0x0000000AUL                           /**< Mode DEFAULT for MODEM_SHAPING0             */
#define MODEM_SHAPING0_COEFF1_DEFAULT                        (_MODEM_SHAPING0_COEFF1_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_SHAPING0     */
#define _MODEM_SHAPING0_COEFF2_SHIFT                         16                                     /**< Shift value for MODEM_COEFF2                */
#define _MODEM_SHAPING0_COEFF2_MASK                          0xFF0000UL                             /**< Bit mask for MODEM_COEFF2                   */
#define _MODEM_SHAPING0_COEFF2_DEFAULT                       0x00000013UL                           /**< Mode DEFAULT for MODEM_SHAPING0             */
#define MODEM_SHAPING0_COEFF2_DEFAULT                        (_MODEM_SHAPING0_COEFF2_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_SHAPING0     */
#define _MODEM_SHAPING0_COEFF3_SHIFT                         24                                     /**< Shift value for MODEM_COEFF3                */
#define _MODEM_SHAPING0_COEFF3_MASK                          0xFF000000UL                           /**< Bit mask for MODEM_COEFF3                   */
#define _MODEM_SHAPING0_COEFF3_DEFAULT                       0x00000022UL                           /**< Mode DEFAULT for MODEM_SHAPING0             */
#define MODEM_SHAPING0_COEFF3_DEFAULT                        (_MODEM_SHAPING0_COEFF3_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_SHAPING0     */

/* Bit fields for MODEM SHAPING1 */
#define _MODEM_SHAPING1_RESETVALUE                           0x4F4A4132UL                           /**< Default value for MODEM_SHAPING1            */
#define _MODEM_SHAPING1_MASK                                 0xFFFFFFFFUL                           /**< Mask for MODEM_SHAPING1                     */
#define _MODEM_SHAPING1_COEFF4_SHIFT                         0                                      /**< Shift value for MODEM_COEFF4                */
#define _MODEM_SHAPING1_COEFF4_MASK                          0xFFUL                                 /**< Bit mask for MODEM_COEFF4                   */
#define _MODEM_SHAPING1_COEFF4_DEFAULT                       0x00000032UL                           /**< Mode DEFAULT for MODEM_SHAPING1             */
#define MODEM_SHAPING1_COEFF4_DEFAULT                        (_MODEM_SHAPING1_COEFF4_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_SHAPING1     */
#define _MODEM_SHAPING1_COEFF5_SHIFT                         8                                      /**< Shift value for MODEM_COEFF5                */
#define _MODEM_SHAPING1_COEFF5_MASK                          0xFF00UL                               /**< Bit mask for MODEM_COEFF5                   */
#define _MODEM_SHAPING1_COEFF5_DEFAULT                       0x00000041UL                           /**< Mode DEFAULT for MODEM_SHAPING1             */
#define MODEM_SHAPING1_COEFF5_DEFAULT                        (_MODEM_SHAPING1_COEFF5_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_SHAPING1     */
#define _MODEM_SHAPING1_COEFF6_SHIFT                         16                                     /**< Shift value for MODEM_COEFF6                */
#define _MODEM_SHAPING1_COEFF6_MASK                          0xFF0000UL                             /**< Bit mask for MODEM_COEFF6                   */
#define _MODEM_SHAPING1_COEFF6_DEFAULT                       0x0000004AUL                           /**< Mode DEFAULT for MODEM_SHAPING1             */
#define MODEM_SHAPING1_COEFF6_DEFAULT                        (_MODEM_SHAPING1_COEFF6_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_SHAPING1     */
#define _MODEM_SHAPING1_COEFF7_SHIFT                         24                                     /**< Shift value for MODEM_COEFF7                */
#define _MODEM_SHAPING1_COEFF7_MASK                          0xFF000000UL                           /**< Bit mask for MODEM_COEFF7                   */
#define _MODEM_SHAPING1_COEFF7_DEFAULT                       0x0000004FUL                           /**< Mode DEFAULT for MODEM_SHAPING1             */
#define MODEM_SHAPING1_COEFF7_DEFAULT                        (_MODEM_SHAPING1_COEFF7_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_SHAPING1     */

/* Bit fields for MODEM SHAPING2 */
#define _MODEM_SHAPING2_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_SHAPING2            */
#define _MODEM_SHAPING2_MASK                                 0xFFFFFFFFUL                            /**< Mask for MODEM_SHAPING2                     */
#define _MODEM_SHAPING2_COEFF8_SHIFT                         0                                       /**< Shift value for MODEM_COEFF8                */
#define _MODEM_SHAPING2_COEFF8_MASK                          0xFFUL                                  /**< Bit mask for MODEM_COEFF8                   */
#define _MODEM_SHAPING2_COEFF8_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING2             */
#define MODEM_SHAPING2_COEFF8_DEFAULT                        (_MODEM_SHAPING2_COEFF8_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_SHAPING2     */
#define _MODEM_SHAPING2_COEFF9_SHIFT                         8                                       /**< Shift value for MODEM_COEFF9                */
#define _MODEM_SHAPING2_COEFF9_MASK                          0xFF00UL                                /**< Bit mask for MODEM_COEFF9                   */
#define _MODEM_SHAPING2_COEFF9_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING2             */
#define MODEM_SHAPING2_COEFF9_DEFAULT                        (_MODEM_SHAPING2_COEFF9_DEFAULT << 8)   /**< Shifted mode DEFAULT for MODEM_SHAPING2     */
#define _MODEM_SHAPING2_COEFF10_SHIFT                        16                                      /**< Shift value for MODEM_COEFF10               */
#define _MODEM_SHAPING2_COEFF10_MASK                         0xFF0000UL                              /**< Bit mask for MODEM_COEFF10                  */
#define _MODEM_SHAPING2_COEFF10_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING2             */
#define MODEM_SHAPING2_COEFF10_DEFAULT                       (_MODEM_SHAPING2_COEFF10_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_SHAPING2     */
#define _MODEM_SHAPING2_COEFF11_SHIFT                        24                                      /**< Shift value for MODEM_COEFF11               */
#define _MODEM_SHAPING2_COEFF11_MASK                         0xFF000000UL                            /**< Bit mask for MODEM_COEFF11                  */
#define _MODEM_SHAPING2_COEFF11_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING2             */
#define MODEM_SHAPING2_COEFF11_DEFAULT                       (_MODEM_SHAPING2_COEFF11_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_SHAPING2     */

/* Bit fields for MODEM SHAPING3 */
#define _MODEM_SHAPING3_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_SHAPING3            */
#define _MODEM_SHAPING3_MASK                                 0xFFFFFFFFUL                            /**< Mask for MODEM_SHAPING3                     */
#define _MODEM_SHAPING3_COEFF12_SHIFT                        0                                       /**< Shift value for MODEM_COEFF12               */
#define _MODEM_SHAPING3_COEFF12_MASK                         0xFFUL                                  /**< Bit mask for MODEM_COEFF12                  */
#define _MODEM_SHAPING3_COEFF12_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING3             */
#define MODEM_SHAPING3_COEFF12_DEFAULT                       (_MODEM_SHAPING3_COEFF12_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_SHAPING3     */
#define _MODEM_SHAPING3_COEFF13_SHIFT                        8                                       /**< Shift value for MODEM_COEFF13               */
#define _MODEM_SHAPING3_COEFF13_MASK                         0xFF00UL                                /**< Bit mask for MODEM_COEFF13                  */
#define _MODEM_SHAPING3_COEFF13_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING3             */
#define MODEM_SHAPING3_COEFF13_DEFAULT                       (_MODEM_SHAPING3_COEFF13_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_SHAPING3     */
#define _MODEM_SHAPING3_COEFF14_SHIFT                        16                                      /**< Shift value for MODEM_COEFF14               */
#define _MODEM_SHAPING3_COEFF14_MASK                         0xFF0000UL                              /**< Bit mask for MODEM_COEFF14                  */
#define _MODEM_SHAPING3_COEFF14_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING3             */
#define MODEM_SHAPING3_COEFF14_DEFAULT                       (_MODEM_SHAPING3_COEFF14_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_SHAPING3     */
#define _MODEM_SHAPING3_COEFF15_SHIFT                        24                                      /**< Shift value for MODEM_COEFF15               */
#define _MODEM_SHAPING3_COEFF15_MASK                         0xFF000000UL                            /**< Bit mask for MODEM_COEFF15                  */
#define _MODEM_SHAPING3_COEFF15_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING3             */
#define MODEM_SHAPING3_COEFF15_DEFAULT                       (_MODEM_SHAPING3_COEFF15_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_SHAPING3     */

/* Bit fields for MODEM SHAPING4 */
#define _MODEM_SHAPING4_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_SHAPING4            */
#define _MODEM_SHAPING4_MASK                                 0xFFFFFFFFUL                            /**< Mask for MODEM_SHAPING4                     */
#define _MODEM_SHAPING4_COEFF16_SHIFT                        0                                       /**< Shift value for MODEM_COEFF16               */
#define _MODEM_SHAPING4_COEFF16_MASK                         0x3FUL                                  /**< Bit mask for MODEM_COEFF16                  */
#define _MODEM_SHAPING4_COEFF16_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING4             */
#define MODEM_SHAPING4_COEFF16_DEFAULT                       (_MODEM_SHAPING4_COEFF16_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_SHAPING4     */
#define _MODEM_SHAPING4_COEFF17_SHIFT                        6                                       /**< Shift value for MODEM_COEFF17               */
#define _MODEM_SHAPING4_COEFF17_MASK                         0xFC0UL                                 /**< Bit mask for MODEM_COEFF17                  */
#define _MODEM_SHAPING4_COEFF17_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING4             */
#define MODEM_SHAPING4_COEFF17_DEFAULT                       (_MODEM_SHAPING4_COEFF17_DEFAULT << 6)  /**< Shifted mode DEFAULT for MODEM_SHAPING4     */
#define _MODEM_SHAPING4_COEFF18_SHIFT                        12                                      /**< Shift value for MODEM_COEFF18               */
#define _MODEM_SHAPING4_COEFF18_MASK                         0x3F000UL                               /**< Bit mask for MODEM_COEFF18                  */
#define _MODEM_SHAPING4_COEFF18_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING4             */
#define MODEM_SHAPING4_COEFF18_DEFAULT                       (_MODEM_SHAPING4_COEFF18_DEFAULT << 12) /**< Shifted mode DEFAULT for MODEM_SHAPING4     */
#define _MODEM_SHAPING4_COEFF19_SHIFT                        18                                      /**< Shift value for MODEM_COEFF19               */
#define _MODEM_SHAPING4_COEFF19_MASK                         0x7C0000UL                              /**< Bit mask for MODEM_COEFF19                  */
#define _MODEM_SHAPING4_COEFF19_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING4             */
#define MODEM_SHAPING4_COEFF19_DEFAULT                       (_MODEM_SHAPING4_COEFF19_DEFAULT << 18) /**< Shifted mode DEFAULT for MODEM_SHAPING4     */
#define _MODEM_SHAPING4_COEFF20_SHIFT                        23                                      /**< Shift value for MODEM_COEFF20               */
#define _MODEM_SHAPING4_COEFF20_MASK                         0xF800000UL                             /**< Bit mask for MODEM_COEFF20                  */
#define _MODEM_SHAPING4_COEFF20_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING4             */
#define MODEM_SHAPING4_COEFF20_DEFAULT                       (_MODEM_SHAPING4_COEFF20_DEFAULT << 23) /**< Shifted mode DEFAULT for MODEM_SHAPING4     */
#define _MODEM_SHAPING4_COEFF21_SHIFT                        28                                      /**< Shift value for MODEM_COEFF21               */
#define _MODEM_SHAPING4_COEFF21_MASK                         0xF0000000UL                            /**< Bit mask for MODEM_COEFF21                  */
#define _MODEM_SHAPING4_COEFF21_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING4             */
#define MODEM_SHAPING4_COEFF21_DEFAULT                       (_MODEM_SHAPING4_COEFF21_DEFAULT << 28) /**< Shifted mode DEFAULT for MODEM_SHAPING4     */

/* Bit fields for MODEM SHAPING5 */
#define _MODEM_SHAPING5_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_SHAPING5            */
#define _MODEM_SHAPING5_MASK                                 0xFFFFFFFFUL                            /**< Mask for MODEM_SHAPING5                     */
#define _MODEM_SHAPING5_COEFF22_SHIFT                        0                                       /**< Shift value for MODEM_COEFF22               */
#define _MODEM_SHAPING5_COEFF22_MASK                         0xFUL                                   /**< Bit mask for MODEM_COEFF22                  */
#define _MODEM_SHAPING5_COEFF22_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF22_DEFAULT                       (_MODEM_SHAPING5_COEFF22_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF23_SHIFT                        4                                       /**< Shift value for MODEM_COEFF23               */
#define _MODEM_SHAPING5_COEFF23_MASK                         0xF0UL                                  /**< Bit mask for MODEM_COEFF23                  */
#define _MODEM_SHAPING5_COEFF23_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF23_DEFAULT                       (_MODEM_SHAPING5_COEFF23_DEFAULT << 4)  /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF24_SHIFT                        8                                       /**< Shift value for MODEM_COEFF24               */
#define _MODEM_SHAPING5_COEFF24_MASK                         0xF00UL                                 /**< Bit mask for MODEM_COEFF24                  */
#define _MODEM_SHAPING5_COEFF24_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF24_DEFAULT                       (_MODEM_SHAPING5_COEFF24_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF25_SHIFT                        12                                      /**< Shift value for MODEM_COEFF25               */
#define _MODEM_SHAPING5_COEFF25_MASK                         0xF000UL                                /**< Bit mask for MODEM_COEFF25                  */
#define _MODEM_SHAPING5_COEFF25_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF25_DEFAULT                       (_MODEM_SHAPING5_COEFF25_DEFAULT << 12) /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF26_SHIFT                        16                                      /**< Shift value for MODEM_COEFF26               */
#define _MODEM_SHAPING5_COEFF26_MASK                         0xF0000UL                               /**< Bit mask for MODEM_COEFF26                  */
#define _MODEM_SHAPING5_COEFF26_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF26_DEFAULT                       (_MODEM_SHAPING5_COEFF26_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF27_SHIFT                        20                                      /**< Shift value for MODEM_COEFF27               */
#define _MODEM_SHAPING5_COEFF27_MASK                         0xF00000UL                              /**< Bit mask for MODEM_COEFF27                  */
#define _MODEM_SHAPING5_COEFF27_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF27_DEFAULT                       (_MODEM_SHAPING5_COEFF27_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF28_SHIFT                        24                                      /**< Shift value for MODEM_COEFF28               */
#define _MODEM_SHAPING5_COEFF28_MASK                         0xF000000UL                             /**< Bit mask for MODEM_COEFF28                  */
#define _MODEM_SHAPING5_COEFF28_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF28_DEFAULT                       (_MODEM_SHAPING5_COEFF28_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_SHAPING5     */
#define _MODEM_SHAPING5_COEFF29_SHIFT                        28                                      /**< Shift value for MODEM_COEFF29               */
#define _MODEM_SHAPING5_COEFF29_MASK                         0xF0000000UL                            /**< Bit mask for MODEM_COEFF29                  */
#define _MODEM_SHAPING5_COEFF29_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING5             */
#define MODEM_SHAPING5_COEFF29_DEFAULT                       (_MODEM_SHAPING5_COEFF29_DEFAULT << 28) /**< Shifted mode DEFAULT for MODEM_SHAPING5     */

/* Bit fields for MODEM SHAPING6 */
#define _MODEM_SHAPING6_RESETVALUE                           0x00000000UL                            /**< Default value for MODEM_SHAPING6            */
#define _MODEM_SHAPING6_MASK                                 0xFFFFFFFFUL                            /**< Mask for MODEM_SHAPING6                     */
#define _MODEM_SHAPING6_COEFF30_SHIFT                        0                                       /**< Shift value for MODEM_COEFF30               */
#define _MODEM_SHAPING6_COEFF30_MASK                         0xFUL                                   /**< Bit mask for MODEM_COEFF30                  */
#define _MODEM_SHAPING6_COEFF30_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF30_DEFAULT                       (_MODEM_SHAPING6_COEFF30_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF31_SHIFT                        4                                       /**< Shift value for MODEM_COEFF31               */
#define _MODEM_SHAPING6_COEFF31_MASK                         0xF0UL                                  /**< Bit mask for MODEM_COEFF31                  */
#define _MODEM_SHAPING6_COEFF31_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF31_DEFAULT                       (_MODEM_SHAPING6_COEFF31_DEFAULT << 4)  /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF32_SHIFT                        8                                       /**< Shift value for MODEM_COEFF32               */
#define _MODEM_SHAPING6_COEFF32_MASK                         0x700UL                                 /**< Bit mask for MODEM_COEFF32                  */
#define _MODEM_SHAPING6_COEFF32_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF32_DEFAULT                       (_MODEM_SHAPING6_COEFF32_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF33_SHIFT                        11                                      /**< Shift value for MODEM_COEFF33               */
#define _MODEM_SHAPING6_COEFF33_MASK                         0x3800UL                                /**< Bit mask for MODEM_COEFF33                  */
#define _MODEM_SHAPING6_COEFF33_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF33_DEFAULT                       (_MODEM_SHAPING6_COEFF33_DEFAULT << 11) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF34_SHIFT                        14                                      /**< Shift value for MODEM_COEFF34               */
#define _MODEM_SHAPING6_COEFF34_MASK                         0x1C000UL                               /**< Bit mask for MODEM_COEFF34                  */
#define _MODEM_SHAPING6_COEFF34_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF34_DEFAULT                       (_MODEM_SHAPING6_COEFF34_DEFAULT << 14) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF35_SHIFT                        17                                      /**< Shift value for MODEM_COEFF35               */
#define _MODEM_SHAPING6_COEFF35_MASK                         0xE0000UL                               /**< Bit mask for MODEM_COEFF35                  */
#define _MODEM_SHAPING6_COEFF35_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF35_DEFAULT                       (_MODEM_SHAPING6_COEFF35_DEFAULT << 17) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF36_SHIFT                        20                                      /**< Shift value for MODEM_COEFF36               */
#define _MODEM_SHAPING6_COEFF36_MASK                         0x700000UL                              /**< Bit mask for MODEM_COEFF36                  */
#define _MODEM_SHAPING6_COEFF36_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF36_DEFAULT                       (_MODEM_SHAPING6_COEFF36_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF37_SHIFT                        23                                      /**< Shift value for MODEM_COEFF37               */
#define _MODEM_SHAPING6_COEFF37_MASK                         0x3800000UL                             /**< Bit mask for MODEM_COEFF37                  */
#define _MODEM_SHAPING6_COEFF37_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF37_DEFAULT                       (_MODEM_SHAPING6_COEFF37_DEFAULT << 23) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF38_SHIFT                        26                                      /**< Shift value for MODEM_COEFF38               */
#define _MODEM_SHAPING6_COEFF38_MASK                         0x1C000000UL                            /**< Bit mask for MODEM_COEFF38                  */
#define _MODEM_SHAPING6_COEFF38_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF38_DEFAULT                       (_MODEM_SHAPING6_COEFF38_DEFAULT << 26) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */
#define _MODEM_SHAPING6_COEFF39_SHIFT                        29                                      /**< Shift value for MODEM_COEFF39               */
#define _MODEM_SHAPING6_COEFF39_MASK                         0xE0000000UL                            /**< Bit mask for MODEM_COEFF39                  */
#define _MODEM_SHAPING6_COEFF39_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_SHAPING6             */
#define MODEM_SHAPING6_COEFF39_DEFAULT                       (_MODEM_SHAPING6_COEFF39_DEFAULT << 29) /**< Shifted mode DEFAULT for MODEM_SHAPING6     */

/* Bit fields for MODEM RAMPCTRL */
#define _MODEM_RAMPCTRL_RESETVALUE                           0x00000555UL                             /**< Default value for MODEM_RAMPCTRL            */
#define _MODEM_RAMPCTRL_MASK                                 0xFF800FFFUL                             /**< Mask for MODEM_RAMPCTRL                     */
#define _MODEM_RAMPCTRL_RAMPRATE0_SHIFT                      0                                        /**< Shift value for MODEM_RAMPRATE0             */
#define _MODEM_RAMPCTRL_RAMPRATE0_MASK                       0xFUL                                    /**< Bit mask for MODEM_RAMPRATE0                */
#define _MODEM_RAMPCTRL_RAMPRATE0_DEFAULT                    0x00000005UL                             /**< Mode DEFAULT for MODEM_RAMPCTRL             */
#define MODEM_RAMPCTRL_RAMPRATE0_DEFAULT                     (_MODEM_RAMPCTRL_RAMPRATE0_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_RAMPCTRL     */
#define _MODEM_RAMPCTRL_RAMPRATE1_SHIFT                      4                                        /**< Shift value for MODEM_RAMPRATE1             */
#define _MODEM_RAMPCTRL_RAMPRATE1_MASK                       0xF0UL                                   /**< Bit mask for MODEM_RAMPRATE1                */
#define _MODEM_RAMPCTRL_RAMPRATE1_DEFAULT                    0x00000005UL                             /**< Mode DEFAULT for MODEM_RAMPCTRL             */
#define MODEM_RAMPCTRL_RAMPRATE1_DEFAULT                     (_MODEM_RAMPCTRL_RAMPRATE1_DEFAULT << 4) /**< Shifted mode DEFAULT for MODEM_RAMPCTRL     */
#define _MODEM_RAMPCTRL_RAMPRATE2_SHIFT                      8                                        /**< Shift value for MODEM_RAMPRATE2             */
#define _MODEM_RAMPCTRL_RAMPRATE2_MASK                       0xF00UL                                  /**< Bit mask for MODEM_RAMPRATE2                */
#define _MODEM_RAMPCTRL_RAMPRATE2_DEFAULT                    0x00000005UL                             /**< Mode DEFAULT for MODEM_RAMPCTRL             */
#define MODEM_RAMPCTRL_RAMPRATE2_DEFAULT                     (_MODEM_RAMPCTRL_RAMPRATE2_DEFAULT << 8) /**< Shifted mode DEFAULT for MODEM_RAMPCTRL     */

/* Bit fields for MODEM RAMPLEV */
#define _MODEM_RAMPLEV_RESETVALUE                            0x00FFFFFFUL                            /**< Default value for MODEM_RAMPLEV             */
#define _MODEM_RAMPLEV_MASK                                  0x00FFFFFFUL                            /**< Mask for MODEM_RAMPLEV                      */
#define _MODEM_RAMPLEV_RAMPLEV0_SHIFT                        0                                       /**< Shift value for MODEM_RAMPLEV0              */
#define _MODEM_RAMPLEV_RAMPLEV0_MASK                         0xFFUL                                  /**< Bit mask for MODEM_RAMPLEV0                 */
#define _MODEM_RAMPLEV_RAMPLEV0_DEFAULT                      0x000000FFUL                            /**< Mode DEFAULT for MODEM_RAMPLEV              */
#define MODEM_RAMPLEV_RAMPLEV0_DEFAULT                       (_MODEM_RAMPLEV_RAMPLEV0_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_RAMPLEV      */
#define _MODEM_RAMPLEV_RAMPLEV1_SHIFT                        8                                       /**< Shift value for MODEM_RAMPLEV1              */
#define _MODEM_RAMPLEV_RAMPLEV1_MASK                         0xFF00UL                                /**< Bit mask for MODEM_RAMPLEV1                 */
#define _MODEM_RAMPLEV_RAMPLEV1_DEFAULT                      0x000000FFUL                            /**< Mode DEFAULT for MODEM_RAMPLEV              */
#define MODEM_RAMPLEV_RAMPLEV1_DEFAULT                       (_MODEM_RAMPLEV_RAMPLEV1_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_RAMPLEV      */
#define _MODEM_RAMPLEV_RAMPLEV2_SHIFT                        16                                      /**< Shift value for MODEM_RAMPLEV2              */
#define _MODEM_RAMPLEV_RAMPLEV2_MASK                         0xFF0000UL                              /**< Bit mask for MODEM_RAMPLEV2                 */
#define _MODEM_RAMPLEV_RAMPLEV2_DEFAULT                      0x000000FFUL                            /**< Mode DEFAULT for MODEM_RAMPLEV              */
#define MODEM_RAMPLEV_RAMPLEV2_DEFAULT                       (_MODEM_RAMPLEV_RAMPLEV2_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_RAMPLEV      */

/* Bit fields for MODEM DCCOMP */
#define _MODEM_DCCOMP_RESETVALUE                             0x00000030UL                               /**< Default value for MODEM_DCCOMP              */
#define _MODEM_DCCOMP_MASK                                   0x000001FFUL                               /**< Mask for MODEM_DCCOMP                       */
#define MODEM_DCCOMP_DCESTIEN                                (0x1UL << 0)                               /**< DC Offset Estimation Enable                 */
#define _MODEM_DCCOMP_DCESTIEN_SHIFT                         0                                          /**< Shift value for MODEM_DCESTIEN              */
#define _MODEM_DCCOMP_DCESTIEN_MASK                          0x1UL                                      /**< Bit mask for MODEM_DCESTIEN                 */
#define _MODEM_DCCOMP_DCESTIEN_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for MODEM_DCCOMP               */
#define MODEM_DCCOMP_DCESTIEN_DEFAULT                        (_MODEM_DCCOMP_DCESTIEN_DEFAULT << 0)      /**< Shifted mode DEFAULT for MODEM_DCCOMP       */
#define MODEM_DCCOMP_DCCOMPEN                                (0x1UL << 1)                               /**< DC Offset Compensation Enable               */
#define _MODEM_DCCOMP_DCCOMPEN_SHIFT                         1                                          /**< Shift value for MODEM_DCCOMPEN              */
#define _MODEM_DCCOMP_DCCOMPEN_MASK                          0x2UL                                      /**< Bit mask for MODEM_DCCOMPEN                 */
#define _MODEM_DCCOMP_DCCOMPEN_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for MODEM_DCCOMP               */
#define MODEM_DCCOMP_DCCOMPEN_DEFAULT                        (_MODEM_DCCOMP_DCCOMPEN_DEFAULT << 1)      /**< Shifted mode DEFAULT for MODEM_DCCOMP       */
#define MODEM_DCCOMP_DCRSTEN                                 (0x1UL << 2)                               /**< DC Compensation Filter Reset Enable         */
#define _MODEM_DCCOMP_DCRSTEN_SHIFT                          2                                          /**< Shift value for MODEM_DCRSTEN               */
#define _MODEM_DCCOMP_DCRSTEN_MASK                           0x4UL                                      /**< Bit mask for MODEM_DCRSTEN                  */
#define _MODEM_DCCOMP_DCRSTEN_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_DCCOMP               */
#define MODEM_DCCOMP_DCRSTEN_DEFAULT                         (_MODEM_DCCOMP_DCRSTEN_DEFAULT << 2)       /**< Shifted mode DEFAULT for MODEM_DCCOMP       */
#define MODEM_DCCOMP_DCCOMPFREEZE                            (0x1UL << 3)                               /**< DC Offset Compensation Filter Freeze        */
#define _MODEM_DCCOMP_DCCOMPFREEZE_SHIFT                     3                                          /**< Shift value for MODEM_DCCOMPFREEZE          */
#define _MODEM_DCCOMP_DCCOMPFREEZE_MASK                      0x8UL                                      /**< Bit mask for MODEM_DCCOMPFREEZE             */
#define _MODEM_DCCOMP_DCCOMPFREEZE_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for MODEM_DCCOMP               */
#define MODEM_DCCOMP_DCCOMPFREEZE_DEFAULT                    (_MODEM_DCCOMP_DCCOMPFREEZE_DEFAULT << 3)  /**< Shifted mode DEFAULT for MODEM_DCCOMP       */
#define _MODEM_DCCOMP_DCCOMPGEAR_SHIFT                       4                                          /**< Shift value for MODEM_DCCOMPGEAR            */
#define _MODEM_DCCOMP_DCCOMPGEAR_MASK                        0x70UL                                     /**< Bit mask for MODEM_DCCOMPGEAR               */
#define _MODEM_DCCOMP_DCCOMPGEAR_DEFAULT                     0x00000003UL                               /**< Mode DEFAULT for MODEM_DCCOMP               */
#define MODEM_DCCOMP_DCCOMPGEAR_DEFAULT                      (_MODEM_DCCOMP_DCCOMPGEAR_DEFAULT << 4)    /**< Shifted mode DEFAULT for MODEM_DCCOMP       */
#define _MODEM_DCCOMP_DCLIMIT_SHIFT                          7                                          /**< Shift value for MODEM_DCLIMIT               */
#define _MODEM_DCCOMP_DCLIMIT_MASK                           0x180UL                                    /**< Bit mask for MODEM_DCLIMIT                  */
#define _MODEM_DCCOMP_DCLIMIT_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for MODEM_DCCOMP               */
#define _MODEM_DCCOMP_DCLIMIT_FULLSCALE                      0x00000000UL                               /**< Mode FULLSCALE for MODEM_DCCOMP             */
#define _MODEM_DCCOMP_DCLIMIT_FULLSCALEBY4                   0x00000001UL                               /**< Mode FULLSCALEBY4 for MODEM_DCCOMP          */
#define _MODEM_DCCOMP_DCLIMIT_FULLSCALEBY8                   0x00000002UL                               /**< Mode FULLSCALEBY8 for MODEM_DCCOMP          */
#define _MODEM_DCCOMP_DCLIMIT_FULLSCALEBY16                  0x00000003UL                               /**< Mode FULLSCALEBY16 for MODEM_DCCOMP         */
#define MODEM_DCCOMP_DCLIMIT_DEFAULT                         (_MODEM_DCCOMP_DCLIMIT_DEFAULT << 7)       /**< Shifted mode DEFAULT for MODEM_DCCOMP       */
#define MODEM_DCCOMP_DCLIMIT_FULLSCALE                       (_MODEM_DCCOMP_DCLIMIT_FULLSCALE << 7)     /**< Shifted mode FULLSCALE for MODEM_DCCOMP     */
#define MODEM_DCCOMP_DCLIMIT_FULLSCALEBY4                    (_MODEM_DCCOMP_DCLIMIT_FULLSCALEBY4 << 7)  /**< Shifted mode FULLSCALEBY4 for MODEM_DCCOMP  */
#define MODEM_DCCOMP_DCLIMIT_FULLSCALEBY8                    (_MODEM_DCCOMP_DCLIMIT_FULLSCALEBY8 << 7)  /**< Shifted mode FULLSCALEBY8 for MODEM_DCCOMP  */
#define MODEM_DCCOMP_DCLIMIT_FULLSCALEBY16                   (_MODEM_DCCOMP_DCLIMIT_FULLSCALEBY16 << 7) /**< Shifted mode FULLSCALEBY16 for MODEM_DCCOMP */

/* Bit fields for MODEM DCCOMPFILTINIT */
#define _MODEM_DCCOMPFILTINIT_RESETVALUE                     0x00000000UL                                         /**< Default value for MODEM_DCCOMPFILTINIT      */
#define _MODEM_DCCOMPFILTINIT_MASK                           0x7FFFFFFFUL                                         /**< Mask for MODEM_DCCOMPFILTINIT               */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINITVALI_SHIFT           0                                                    /**< Shift value for MODEM_DCCOMPINITVALI        */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINITVALI_MASK            0x7FFFUL                                             /**< Bit mask for MODEM_DCCOMPINITVALI           */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINITVALI_DEFAULT         0x00000000UL                                         /**< Mode DEFAULT for MODEM_DCCOMPFILTINIT       */
#define MODEM_DCCOMPFILTINIT_DCCOMPINITVALI_DEFAULT          (_MODEM_DCCOMPFILTINIT_DCCOMPINITVALI_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_DCCOMPFILTINIT*/
#define _MODEM_DCCOMPFILTINIT_DCCOMPINITVALQ_SHIFT           15                                                   /**< Shift value for MODEM_DCCOMPINITVALQ        */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINITVALQ_MASK            0x3FFF8000UL                                         /**< Bit mask for MODEM_DCCOMPINITVALQ           */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINITVALQ_DEFAULT         0x00000000UL                                         /**< Mode DEFAULT for MODEM_DCCOMPFILTINIT       */
#define MODEM_DCCOMPFILTINIT_DCCOMPINITVALQ_DEFAULT          (_MODEM_DCCOMPFILTINIT_DCCOMPINITVALQ_DEFAULT << 15) /**< Shifted mode DEFAULT for MODEM_DCCOMPFILTINIT*/
#define MODEM_DCCOMPFILTINIT_DCCOMPINIT                      (0x1UL << 30)                                        /**< Initialize filter state                     */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINIT_SHIFT               30                                                   /**< Shift value for MODEM_DCCOMPINIT            */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINIT_MASK                0x40000000UL                                         /**< Bit mask for MODEM_DCCOMPINIT               */
#define _MODEM_DCCOMPFILTINIT_DCCOMPINIT_DEFAULT             0x00000000UL                                         /**< Mode DEFAULT for MODEM_DCCOMPFILTINIT       */
#define MODEM_DCCOMPFILTINIT_DCCOMPINIT_DEFAULT              (_MODEM_DCCOMPFILTINIT_DCCOMPINIT_DEFAULT << 30)     /**< Shifted mode DEFAULT for MODEM_DCCOMPFILTINIT*/

/* Bit fields for MODEM DCESTI */
#define _MODEM_DCESTI_RESETVALUE                             0x00000000UL                                 /**< Default value for MODEM_DCESTI              */
#define _MODEM_DCESTI_MASK                                   0x3FFFFFFFUL                                 /**< Mask for MODEM_DCESTI                       */
#define _MODEM_DCESTI_DCCOMPESTIVALI_SHIFT                   0                                            /**< Shift value for MODEM_DCCOMPESTIVALI        */
#define _MODEM_DCESTI_DCCOMPESTIVALI_MASK                    0x7FFFUL                                     /**< Bit mask for MODEM_DCCOMPESTIVALI           */
#define _MODEM_DCESTI_DCCOMPESTIVALI_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_DCESTI               */
#define MODEM_DCESTI_DCCOMPESTIVALI_DEFAULT                  (_MODEM_DCESTI_DCCOMPESTIVALI_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_DCESTI       */
#define _MODEM_DCESTI_DCCOMPESTIVALQ_SHIFT                   15                                           /**< Shift value for MODEM_DCCOMPESTIVALQ        */
#define _MODEM_DCESTI_DCCOMPESTIVALQ_MASK                    0x3FFF8000UL                                 /**< Bit mask for MODEM_DCCOMPESTIVALQ           */
#define _MODEM_DCESTI_DCCOMPESTIVALQ_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_DCESTI               */
#define MODEM_DCESTI_DCCOMPESTIVALQ_DEFAULT                  (_MODEM_DCESTI_DCCOMPESTIVALQ_DEFAULT << 15) /**< Shifted mode DEFAULT for MODEM_DCESTI       */

/* Bit fields for MODEM SRCCHF */
#define _MODEM_SRCCHF_RESETVALUE                             0x00000000UL                             /**< Default value for MODEM_SRCCHF              */
#define _MODEM_SRCCHF_MASK                                   0xEFFFF8FFUL                             /**< Mask for MODEM_SRCCHF                       */
#define _MODEM_SRCCHF_SRCRATIO1_SHIFT                        0                                        /**< Shift value for MODEM_SRCRATIO1             */
#define _MODEM_SRCCHF_SRCRATIO1_MASK                         0xFFUL                                   /**< Bit mask for MODEM_SRCRATIO1                */
#define _MODEM_SRCCHF_SRCRATIO1_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for MODEM_SRCCHF               */
#define MODEM_SRCCHF_SRCRATIO1_DEFAULT                       (_MODEM_SRCCHF_SRCRATIO1_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_SRCCHF       */
#define MODEM_SRCCHF_SRCENABLE1                              (0x1UL << 11)                            /**< SRC1 enable                                 */
#define _MODEM_SRCCHF_SRCENABLE1_SHIFT                       11                                       /**< Shift value for MODEM_SRCENABLE1            */
#define _MODEM_SRCCHF_SRCENABLE1_MASK                        0x800UL                                  /**< Bit mask for MODEM_SRCENABLE1               */
#define _MODEM_SRCCHF_SRCENABLE1_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_SRCCHF               */
#define MODEM_SRCCHF_SRCENABLE1_DEFAULT                      (_MODEM_SRCCHF_SRCENABLE1_DEFAULT << 11) /**< Shifted mode DEFAULT for MODEM_SRCCHF       */
#define _MODEM_SRCCHF_SRCRATIO2_SHIFT                        12                                       /**< Shift value for MODEM_SRCRATIO2             */
#define _MODEM_SRCCHF_SRCRATIO2_MASK                         0x7FFF000UL                              /**< Bit mask for MODEM_SRCRATIO2                */
#define _MODEM_SRCCHF_SRCRATIO2_DEFAULT                      0x00000000UL                             /**< Mode DEFAULT for MODEM_SRCCHF               */
#define MODEM_SRCCHF_SRCRATIO2_DEFAULT                       (_MODEM_SRCCHF_SRCRATIO2_DEFAULT << 12)  /**< Shifted mode DEFAULT for MODEM_SRCCHF       */
#define MODEM_SRCCHF_SRCENABLE2                              (0x1UL << 27)                            /**< SRC2 enable                                 */
#define _MODEM_SRCCHF_SRCENABLE2_SHIFT                       27                                       /**< Shift value for MODEM_SRCENABLE2            */
#define _MODEM_SRCCHF_SRCENABLE2_MASK                        0x8000000UL                              /**< Bit mask for MODEM_SRCENABLE2               */
#define _MODEM_SRCCHF_SRCENABLE2_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_SRCCHF               */
#define MODEM_SRCCHF_SRCENABLE2_DEFAULT                      (_MODEM_SRCCHF_SRCENABLE2_DEFAULT << 27) /**< Shifted mode DEFAULT for MODEM_SRCCHF       */
#define _MODEM_SRCCHF_BWSEL_SHIFT                            29                                       /**< Shift value for MODEM_BWSEL                 */
#define _MODEM_SRCCHF_BWSEL_MASK                             0x60000000UL                             /**< Bit mask for MODEM_BWSEL                    */
#define _MODEM_SRCCHF_BWSEL_DEFAULT                          0x00000000UL                             /**< Mode DEFAULT for MODEM_SRCCHF               */
#define _MODEM_SRCCHF_BWSEL_X0                               0x00000000UL                             /**< Mode X0 for MODEM_SRCCHF                    */
#define _MODEM_SRCCHF_BWSEL_X1                               0x00000001UL                             /**< Mode X1 for MODEM_SRCCHF                    */
#define _MODEM_SRCCHF_BWSEL_X2                               0x00000002UL                             /**< Mode X2 for MODEM_SRCCHF                    */
#define _MODEM_SRCCHF_BWSEL_X3                               0x00000003UL                             /**< Mode X3 for MODEM_SRCCHF                    */
#define MODEM_SRCCHF_BWSEL_DEFAULT                           (_MODEM_SRCCHF_BWSEL_DEFAULT << 29)      /**< Shifted mode DEFAULT for MODEM_SRCCHF       */
#define MODEM_SRCCHF_BWSEL_X0                                (_MODEM_SRCCHF_BWSEL_X0 << 29)           /**< Shifted mode X0 for MODEM_SRCCHF            */
#define MODEM_SRCCHF_BWSEL_X1                                (_MODEM_SRCCHF_BWSEL_X1 << 29)           /**< Shifted mode X1 for MODEM_SRCCHF            */
#define MODEM_SRCCHF_BWSEL_X2                                (_MODEM_SRCCHF_BWSEL_X2 << 29)           /**< Shifted mode X2 for MODEM_SRCCHF            */
#define MODEM_SRCCHF_BWSEL_X3                                (_MODEM_SRCCHF_BWSEL_X3 << 29)           /**< Shifted mode X3 for MODEM_SRCCHF            */
#define MODEM_SRCCHF_INTOSR                                  (0x1UL << 31)                            /**< Forcing Integer OSR                         */
#define _MODEM_SRCCHF_INTOSR_SHIFT                           31                                       /**< Shift value for MODEM_INTOSR                */
#define _MODEM_SRCCHF_INTOSR_MASK                            0x80000000UL                             /**< Bit mask for MODEM_INTOSR                   */
#define _MODEM_SRCCHF_INTOSR_DEFAULT                         0x00000000UL                             /**< Mode DEFAULT for MODEM_SRCCHF               */
#define MODEM_SRCCHF_INTOSR_DEFAULT                          (_MODEM_SRCCHF_INTOSR_DEFAULT << 31)     /**< Shifted mode DEFAULT for MODEM_SRCCHF       */

/* Bit fields for MODEM INTAFC */
#define _MODEM_INTAFC_RESETVALUE                             0x00000000UL                             /**< Default value for MODEM_INTAFC              */
#define _MODEM_INTAFC_MASK                                   0x00FFFFFFUL                             /**< Mask for MODEM_INTAFC                       */
#define _MODEM_INTAFC_FOEPREAVG0_SHIFT                       0                                        /**< Shift value for MODEM_FOEPREAVG0            */
#define _MODEM_INTAFC_FOEPREAVG0_MASK                        0x7UL                                    /**< Bit mask for MODEM_FOEPREAVG0               */
#define _MODEM_INTAFC_FOEPREAVG0_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG0_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG0_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG1_SHIFT                       3                                        /**< Shift value for MODEM_FOEPREAVG1            */
#define _MODEM_INTAFC_FOEPREAVG1_MASK                        0x38UL                                   /**< Bit mask for MODEM_FOEPREAVG1               */
#define _MODEM_INTAFC_FOEPREAVG1_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG1_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG1_DEFAULT << 3)  /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG2_SHIFT                       6                                        /**< Shift value for MODEM_FOEPREAVG2            */
#define _MODEM_INTAFC_FOEPREAVG2_MASK                        0x1C0UL                                  /**< Bit mask for MODEM_FOEPREAVG2               */
#define _MODEM_INTAFC_FOEPREAVG2_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG2_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG2_DEFAULT << 6)  /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG3_SHIFT                       9                                        /**< Shift value for MODEM_FOEPREAVG3            */
#define _MODEM_INTAFC_FOEPREAVG3_MASK                        0xE00UL                                  /**< Bit mask for MODEM_FOEPREAVG3               */
#define _MODEM_INTAFC_FOEPREAVG3_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG3_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG3_DEFAULT << 9)  /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG4_SHIFT                       12                                       /**< Shift value for MODEM_FOEPREAVG4            */
#define _MODEM_INTAFC_FOEPREAVG4_MASK                        0x7000UL                                 /**< Bit mask for MODEM_FOEPREAVG4               */
#define _MODEM_INTAFC_FOEPREAVG4_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG4_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG4_DEFAULT << 12) /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG5_SHIFT                       15                                       /**< Shift value for MODEM_FOEPREAVG5            */
#define _MODEM_INTAFC_FOEPREAVG5_MASK                        0x38000UL                                /**< Bit mask for MODEM_FOEPREAVG5               */
#define _MODEM_INTAFC_FOEPREAVG5_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG5_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG5_DEFAULT << 15) /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG6_SHIFT                       18                                       /**< Shift value for MODEM_FOEPREAVG6            */
#define _MODEM_INTAFC_FOEPREAVG6_MASK                        0x1C0000UL                               /**< Bit mask for MODEM_FOEPREAVG6               */
#define _MODEM_INTAFC_FOEPREAVG6_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG6_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG6_DEFAULT << 18) /**< Shifted mode DEFAULT for MODEM_INTAFC       */
#define _MODEM_INTAFC_FOEPREAVG7_SHIFT                       21                                       /**< Shift value for MODEM_FOEPREAVG7            */
#define _MODEM_INTAFC_FOEPREAVG7_MASK                        0xE00000UL                               /**< Bit mask for MODEM_FOEPREAVG7               */
#define _MODEM_INTAFC_FOEPREAVG7_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for MODEM_INTAFC               */
#define MODEM_INTAFC_FOEPREAVG7_DEFAULT                      (_MODEM_INTAFC_FOEPREAVG7_DEFAULT << 21) /**< Shifted mode DEFAULT for MODEM_INTAFC       */

/* Bit fields for MODEM DSATHD0 */
#define _MODEM_DSATHD0_RESETVALUE                            0x07830464UL                              /**< Default value for MODEM_DSATHD0             */
#define _MODEM_DSATHD0_MASK                                  0xFFFFFFFFUL                              /**< Mask for MODEM_DSATHD0                      */
#define _MODEM_DSATHD0_SPIKETHD_SHIFT                        0                                         /**< Shift value for MODEM_SPIKETHD              */
#define _MODEM_DSATHD0_SPIKETHD_MASK                         0xFFUL                                    /**< Bit mask for MODEM_SPIKETHD                 */
#define _MODEM_DSATHD0_SPIKETHD_DEFAULT                      0x00000064UL                              /**< Mode DEFAULT for MODEM_DSATHD0              */
#define MODEM_DSATHD0_SPIKETHD_DEFAULT                       (_MODEM_DSATHD0_SPIKETHD_DEFAULT << 0)    /**< Shifted mode DEFAULT for MODEM_DSATHD0      */
#define _MODEM_DSATHD0_UNMODTHD_SHIFT                        8                                         /**< Shift value for MODEM_UNMODTHD              */
#define _MODEM_DSATHD0_UNMODTHD_MASK                         0x3F00UL                                  /**< Bit mask for MODEM_UNMODTHD                 */
#define _MODEM_DSATHD0_UNMODTHD_DEFAULT                      0x00000004UL                              /**< Mode DEFAULT for MODEM_DSATHD0              */
#define MODEM_DSATHD0_UNMODTHD_DEFAULT                       (_MODEM_DSATHD0_UNMODTHD_DEFAULT << 8)    /**< Shifted mode DEFAULT for MODEM_DSATHD0      */
#define _MODEM_DSATHD0_FDEVMINTHD_SHIFT                      14                                        /**< Shift value for MODEM_FDEVMINTHD            */
#define _MODEM_DSATHD0_FDEVMINTHD_MASK                       0xFC000UL                                 /**< Bit mask for MODEM_FDEVMINTHD               */
#define _MODEM_DSATHD0_FDEVMINTHD_DEFAULT                    0x0000000CUL                              /**< Mode DEFAULT for MODEM_DSATHD0              */
#define MODEM_DSATHD0_FDEVMINTHD_DEFAULT                     (_MODEM_DSATHD0_FDEVMINTHD_DEFAULT << 14) /**< Shifted mode DEFAULT for MODEM_DSATHD0      */
#define _MODEM_DSATHD0_FDEVMAXTHD_SHIFT                      20                                        /**< Shift value for MODEM_FDEVMAXTHD            */
#define _MODEM_DSATHD0_FDEVMAXTHD_MASK                       0xFFF00000UL                              /**< Bit mask for MODEM_FDEVMAXTHD               */
#define _MODEM_DSATHD0_FDEVMAXTHD_DEFAULT                    0x00000078UL                              /**< Mode DEFAULT for MODEM_DSATHD0              */
#define MODEM_DSATHD0_FDEVMAXTHD_DEFAULT                     (_MODEM_DSATHD0_FDEVMAXTHD_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_DSATHD0      */

/* Bit fields for MODEM DSATHD1 */
#define _MODEM_DSATHD1_RESETVALUE                            0x3AC81388UL                              /**< Default value for MODEM_DSATHD1             */
#define _MODEM_DSATHD1_MASK                                  0x7FFFFFFFUL                              /**< Mask for MODEM_DSATHD1                      */
#define _MODEM_DSATHD1_POWABSTHD_SHIFT                       0                                         /**< Shift value for MODEM_POWABSTHD             */
#define _MODEM_DSATHD1_POWABSTHD_MASK                        0xFFFFUL                                  /**< Bit mask for MODEM_POWABSTHD                */
#define _MODEM_DSATHD1_POWABSTHD_DEFAULT                     0x00001388UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_POWABSTHD_DEFAULT                      (_MODEM_DSATHD1_POWABSTHD_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define _MODEM_DSATHD1_POWRELTHD_SHIFT                       16                                        /**< Shift value for MODEM_POWRELTHD             */
#define _MODEM_DSATHD1_POWRELTHD_MASK                        0x30000UL                                 /**< Bit mask for MODEM_POWRELTHD                */
#define _MODEM_DSATHD1_POWRELTHD_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define _MODEM_DSATHD1_POWRELTHD_DISABLED                    0x00000000UL                              /**< Mode DISABLED for MODEM_DSATHD1             */
#define _MODEM_DSATHD1_POWRELTHD_MODE1                       0x00000001UL                              /**< Mode MODE1 for MODEM_DSATHD1                */
#define _MODEM_DSATHD1_POWRELTHD_MODE2                       0x00000002UL                              /**< Mode MODE2 for MODEM_DSATHD1                */
#define _MODEM_DSATHD1_POWRELTHD_MODE3                       0x00000003UL                              /**< Mode MODE3 for MODEM_DSATHD1                */
#define MODEM_DSATHD1_POWRELTHD_DEFAULT                      (_MODEM_DSATHD1_POWRELTHD_DEFAULT << 16)  /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define MODEM_DSATHD1_POWRELTHD_DISABLED                     (_MODEM_DSATHD1_POWRELTHD_DISABLED << 16) /**< Shifted mode DISABLED for MODEM_DSATHD1     */
#define MODEM_DSATHD1_POWRELTHD_MODE1                        (_MODEM_DSATHD1_POWRELTHD_MODE1 << 16)    /**< Shifted mode MODE1 for MODEM_DSATHD1        */
#define MODEM_DSATHD1_POWRELTHD_MODE2                        (_MODEM_DSATHD1_POWRELTHD_MODE2 << 16)    /**< Shifted mode MODE2 for MODEM_DSATHD1        */
#define MODEM_DSATHD1_POWRELTHD_MODE3                        (_MODEM_DSATHD1_POWRELTHD_MODE3 << 16)    /**< Shifted mode MODE3 for MODEM_DSATHD1        */
#define _MODEM_DSATHD1_DSARSTCNT_SHIFT                       18                                        /**< Shift value for MODEM_DSARSTCNT             */
#define _MODEM_DSATHD1_DSARSTCNT_MASK                        0x1C0000UL                                /**< Bit mask for MODEM_DSARSTCNT                */
#define _MODEM_DSATHD1_DSARSTCNT_DEFAULT                     0x00000002UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_DSARSTCNT_DEFAULT                      (_MODEM_DSATHD1_DSARSTCNT_DEFAULT << 18)  /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define _MODEM_DSATHD1_RSSIJMPTHD_SHIFT                      21                                        /**< Shift value for MODEM_RSSIJMPTHD            */
#define _MODEM_DSATHD1_RSSIJMPTHD_MASK                       0x1E00000UL                               /**< Bit mask for MODEM_RSSIJMPTHD               */
#define _MODEM_DSATHD1_RSSIJMPTHD_DEFAULT                    0x00000006UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_RSSIJMPTHD_DEFAULT                     (_MODEM_DSATHD1_RSSIJMPTHD_DEFAULT << 21) /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define _MODEM_DSATHD1_FREQLATDLY_SHIFT                      25                                        /**< Shift value for MODEM_FREQLATDLY            */
#define _MODEM_DSATHD1_FREQLATDLY_MASK                       0x6000000UL                               /**< Bit mask for MODEM_FREQLATDLY               */
#define _MODEM_DSATHD1_FREQLATDLY_DEFAULT                    0x00000001UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_FREQLATDLY_DEFAULT                     (_MODEM_DSATHD1_FREQLATDLY_DEFAULT << 25) /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define MODEM_DSATHD1_PWRFLTBYP                              (0x1UL << 27)                             /**< Power filter bypass                         */
#define _MODEM_DSATHD1_PWRFLTBYP_SHIFT                       27                                        /**< Shift value for MODEM_PWRFLTBYP             */
#define _MODEM_DSATHD1_PWRFLTBYP_MASK                        0x8000000UL                               /**< Bit mask for MODEM_PWRFLTBYP                */
#define _MODEM_DSATHD1_PWRFLTBYP_DEFAULT                     0x00000001UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_PWRFLTBYP_DEFAULT                      (_MODEM_DSATHD1_PWRFLTBYP_DEFAULT << 27)  /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define MODEM_DSATHD1_AMPFLTBYP                              (0x1UL << 28)                             /**< Amplitude filter bypass                     */
#define _MODEM_DSATHD1_AMPFLTBYP_SHIFT                       28                                        /**< Shift value for MODEM_AMPFLTBYP             */
#define _MODEM_DSATHD1_AMPFLTBYP_MASK                        0x10000000UL                              /**< Bit mask for MODEM_AMPFLTBYP                */
#define _MODEM_DSATHD1_AMPFLTBYP_DEFAULT                     0x00000001UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_AMPFLTBYP_DEFAULT                      (_MODEM_DSATHD1_AMPFLTBYP_DEFAULT << 28)  /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define MODEM_DSATHD1_PWRDETDIS                              (0x1UL << 29)                             /**< Power detection disabled                    */
#define _MODEM_DSATHD1_PWRDETDIS_SHIFT                       29                                        /**< Shift value for MODEM_PWRDETDIS             */
#define _MODEM_DSATHD1_PWRDETDIS_MASK                        0x20000000UL                              /**< Bit mask for MODEM_PWRDETDIS                */
#define _MODEM_DSATHD1_PWRDETDIS_DEFAULT                     0x00000001UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_PWRDETDIS_DEFAULT                      (_MODEM_DSATHD1_PWRDETDIS_DEFAULT << 29)  /**< Shifted mode DEFAULT for MODEM_DSATHD1      */
#define MODEM_DSATHD1_FREQSCALE                              (0x1UL << 30)                             /**< Frequency scale factor                      */
#define _MODEM_DSATHD1_FREQSCALE_SHIFT                       30                                        /**< Shift value for MODEM_FREQSCALE             */
#define _MODEM_DSATHD1_FREQSCALE_MASK                        0x40000000UL                              /**< Bit mask for MODEM_FREQSCALE                */
#define _MODEM_DSATHD1_FREQSCALE_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_DSATHD1              */
#define MODEM_DSATHD1_FREQSCALE_DEFAULT                      (_MODEM_DSATHD1_FREQSCALE_DEFAULT << 30)  /**< Shifted mode DEFAULT for MODEM_DSATHD1      */

/* Bit fields for MODEM DSACTRL */
#define _MODEM_DSACTRL_RESETVALUE                            0x000A2090UL                                /**< Default value for MODEM_DSACTRL             */
#define _MODEM_DSACTRL_MASK                                  0xFFEFFFFFUL                                /**< Mask for MODEM_DSACTRL                      */
#define _MODEM_DSACTRL_DSAMODE_SHIFT                         0                                           /**< Shift value for MODEM_DSAMODE               */
#define _MODEM_DSACTRL_DSAMODE_MASK                          0x3UL                                       /**< Bit mask for MODEM_DSAMODE                  */
#define _MODEM_DSACTRL_DSAMODE_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define _MODEM_DSACTRL_DSAMODE_DISABLED                      0x00000000UL                                /**< Mode DISABLED for MODEM_DSACTRL             */
#define _MODEM_DSACTRL_DSAMODE_ENABLED                       0x00000001UL                                /**< Mode ENABLED for MODEM_DSACTRL              */
#define MODEM_DSACTRL_DSAMODE_DEFAULT                        (_MODEM_DSACTRL_DSAMODE_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_DSAMODE_DISABLED                       (_MODEM_DSACTRL_DSAMODE_DISABLED << 0)      /**< Shifted mode DISABLED for MODEM_DSACTRL     */
#define MODEM_DSACTRL_DSAMODE_ENABLED                        (_MODEM_DSACTRL_DSAMODE_ENABLED << 0)       /**< Shifted mode ENABLED for MODEM_DSACTRL      */
#define _MODEM_DSACTRL_ARRTHD_SHIFT                          2                                           /**< Shift value for MODEM_ARRTHD                */
#define _MODEM_DSACTRL_ARRTHD_MASK                           0x3CUL                                      /**< Bit mask for MODEM_ARRTHD                   */
#define _MODEM_DSACTRL_ARRTHD_DEFAULT                        0x00000004UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_ARRTHD_DEFAULT                         (_MODEM_DSACTRL_ARRTHD_DEFAULT << 2)        /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define _MODEM_DSACTRL_ARRTOLERTHD0_SHIFT                    6                                           /**< Shift value for MODEM_ARRTOLERTHD0          */
#define _MODEM_DSACTRL_ARRTOLERTHD0_MASK                     0x7C0UL                                     /**< Bit mask for MODEM_ARRTOLERTHD0             */
#define _MODEM_DSACTRL_ARRTOLERTHD0_DEFAULT                  0x00000002UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_ARRTOLERTHD0_DEFAULT                   (_MODEM_DSACTRL_ARRTOLERTHD0_DEFAULT << 6)  /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define _MODEM_DSACTRL_ARRTOLERTHD1_SHIFT                    11                                          /**< Shift value for MODEM_ARRTOLERTHD1          */
#define _MODEM_DSACTRL_ARRTOLERTHD1_MASK                     0xF800UL                                    /**< Bit mask for MODEM_ARRTOLERTHD1             */
#define _MODEM_DSACTRL_ARRTOLERTHD1_DEFAULT                  0x00000004UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_ARRTOLERTHD1_DEFAULT                   (_MODEM_DSACTRL_ARRTOLERTHD1_DEFAULT << 11) /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_SCHPRD                                 (0x1UL << 16)                               /**< Search period window length                 */
#define _MODEM_DSACTRL_SCHPRD_SHIFT                          16                                          /**< Shift value for MODEM_SCHPRD                */
#define _MODEM_DSACTRL_SCHPRD_MASK                           0x10000UL                                   /**< Bit mask for MODEM_SCHPRD                   */
#define _MODEM_DSACTRL_SCHPRD_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define _MODEM_DSACTRL_SCHPRD_TS2                            0x00000000UL                                /**< Mode TS2 for MODEM_DSACTRL                  */
#define _MODEM_DSACTRL_SCHPRD_TS4                            0x00000001UL                                /**< Mode TS4 for MODEM_DSACTRL                  */
#define MODEM_DSACTRL_SCHPRD_DEFAULT                         (_MODEM_DSACTRL_SCHPRD_DEFAULT << 16)       /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_SCHPRD_TS2                             (_MODEM_DSACTRL_SCHPRD_TS2 << 16)           /**< Shifted mode TS2 for MODEM_DSACTRL          */
#define MODEM_DSACTRL_SCHPRD_TS4                             (_MODEM_DSACTRL_SCHPRD_TS4 << 16)           /**< Shifted mode TS4 for MODEM_DSACTRL          */
#define MODEM_DSACTRL_FREQAVGSYM                             (0x1UL << 17)                               /**< DSA frequency estimation averaging          */
#define _MODEM_DSACTRL_FREQAVGSYM_SHIFT                      17                                          /**< Shift value for MODEM_FREQAVGSYM            */
#define _MODEM_DSACTRL_FREQAVGSYM_MASK                       0x20000UL                                   /**< Bit mask for MODEM_FREQAVGSYM               */
#define _MODEM_DSACTRL_FREQAVGSYM_DEFAULT                    0x00000001UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define _MODEM_DSACTRL_FREQAVGSYM_AVG2TS                     0x00000000UL                                /**< Mode AVG2TS for MODEM_DSACTRL               */
#define _MODEM_DSACTRL_FREQAVGSYM_AVG4TS                     0x00000001UL                                /**< Mode AVG4TS for MODEM_DSACTRL               */
#define MODEM_DSACTRL_FREQAVGSYM_DEFAULT                     (_MODEM_DSACTRL_FREQAVGSYM_DEFAULT << 17)   /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_FREQAVGSYM_AVG2TS                      (_MODEM_DSACTRL_FREQAVGSYM_AVG2TS << 17)    /**< Shifted mode AVG2TS for MODEM_DSACTRL       */
#define MODEM_DSACTRL_FREQAVGSYM_AVG4TS                      (_MODEM_DSACTRL_FREQAVGSYM_AVG4TS << 17)    /**< Shifted mode AVG4TS for MODEM_DSACTRL       */
#define MODEM_DSACTRL_TRANRSTDSA                             (0x1UL << 18)                               /**< power transient detector Reset DSA          */
#define _MODEM_DSACTRL_TRANRSTDSA_SHIFT                      18                                          /**< Shift value for MODEM_TRANRSTDSA            */
#define _MODEM_DSACTRL_TRANRSTDSA_MASK                       0x40000UL                                   /**< Bit mask for MODEM_TRANRSTDSA               */
#define _MODEM_DSACTRL_TRANRSTDSA_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_TRANRSTDSA_DEFAULT                     (_MODEM_DSACTRL_TRANRSTDSA_DEFAULT << 18)   /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_DSARSTON                               (0x1UL << 19)                               /**< DSA detection reset                         */
#define _MODEM_DSACTRL_DSARSTON_SHIFT                        19                                          /**< Shift value for MODEM_DSARSTON              */
#define _MODEM_DSACTRL_DSARSTON_MASK                         0x80000UL                                   /**< Bit mask for MODEM_DSARSTON                 */
#define _MODEM_DSACTRL_DSARSTON_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_DSARSTON_DEFAULT                       (_MODEM_DSACTRL_DSARSTON_DEFAULT << 19)     /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define _MODEM_DSACTRL_GAINREDUCDLY_SHIFT                    21                                          /**< Shift value for MODEM_GAINREDUCDLY          */
#define _MODEM_DSACTRL_GAINREDUCDLY_MASK                     0x600000UL                                  /**< Bit mask for MODEM_GAINREDUCDLY             */
#define _MODEM_DSACTRL_GAINREDUCDLY_DEFAULT                  0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_GAINREDUCDLY_DEFAULT                   (_MODEM_DSACTRL_GAINREDUCDLY_DEFAULT << 21) /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define _MODEM_DSACTRL_LOWDUTY_SHIFT                         23                                          /**< Shift value for MODEM_LOWDUTY               */
#define _MODEM_DSACTRL_LOWDUTY_MASK                          0x3800000UL                                 /**< Bit mask for MODEM_LOWDUTY                  */
#define _MODEM_DSACTRL_LOWDUTY_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_LOWDUTY_DEFAULT                        (_MODEM_DSACTRL_LOWDUTY_DEFAULT << 23)      /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_RESTORE                                (0x1UL << 26)                               /**< Power detector reset of DSA                 */
#define _MODEM_DSACTRL_RESTORE_SHIFT                         26                                          /**< Shift value for MODEM_RESTORE               */
#define _MODEM_DSACTRL_RESTORE_MASK                          0x4000000UL                                 /**< Bit mask for MODEM_RESTORE                  */
#define _MODEM_DSACTRL_RESTORE_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_RESTORE_DEFAULT                        (_MODEM_DSACTRL_RESTORE_DEFAULT << 26)      /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define MODEM_DSACTRL_AGCBAUDEN                              (0x1UL << 27)                               /**< Consider Baud_en from AGC                   */
#define _MODEM_DSACTRL_AGCBAUDEN_SHIFT                       27                                          /**< Shift value for MODEM_AGCBAUDEN             */
#define _MODEM_DSACTRL_AGCBAUDEN_MASK                        0x8000000UL                                 /**< Bit mask for MODEM_AGCBAUDEN                */
#define _MODEM_DSACTRL_AGCBAUDEN_DEFAULT                     0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_AGCBAUDEN_DEFAULT                      (_MODEM_DSACTRL_AGCBAUDEN_DEFAULT << 27)    /**< Shifted mode DEFAULT for MODEM_DSACTRL      */
#define _MODEM_DSACTRL_AMPJUPTHD_SHIFT                       28                                          /**< Shift value for MODEM_AMPJUPTHD             */
#define _MODEM_DSACTRL_AMPJUPTHD_MASK                        0xF0000000UL                                /**< Bit mask for MODEM_AMPJUPTHD                */
#define _MODEM_DSACTRL_AMPJUPTHD_DEFAULT                     0x00000000UL                                /**< Mode DEFAULT for MODEM_DSACTRL              */
#define MODEM_DSACTRL_AMPJUPTHD_DEFAULT                      (_MODEM_DSACTRL_AMPJUPTHD_DEFAULT << 28)    /**< Shifted mode DEFAULT for MODEM_DSACTRL      */

/* Bit fields for MODEM VITERBIDEMOD */
#define _MODEM_VITERBIDEMOD_RESETVALUE                       0x00206100UL                                    /**< Default value for MODEM_VITERBIDEMOD        */
#define _MODEM_VITERBIDEMOD_MASK                             0xFFFFFFFFUL                                    /**< Mask for MODEM_VITERBIDEMOD                 */
#define MODEM_VITERBIDEMOD_VTDEMODEN                         (0x1UL << 0)                                    /**< Viterbi demodulator enable                  */
#define _MODEM_VITERBIDEMOD_VTDEMODEN_SHIFT                  0                                               /**< Shift value for MODEM_VTDEMODEN             */
#define _MODEM_VITERBIDEMOD_VTDEMODEN_MASK                   0x1UL                                           /**< Bit mask for MODEM_VTDEMODEN                */
#define _MODEM_VITERBIDEMOD_VTDEMODEN_DEFAULT                0x00000000UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_VTDEMODEN_DEFAULT                 (_MODEM_VITERBIDEMOD_VTDEMODEN_DEFAULT << 0)    /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define MODEM_VITERBIDEMOD_HARDDECISION                      (0x1UL << 1)                                    /**< Hard decision                               */
#define _MODEM_VITERBIDEMOD_HARDDECISION_SHIFT               1                                               /**< Shift value for MODEM_HARDDECISION          */
#define _MODEM_VITERBIDEMOD_HARDDECISION_MASK                0x2UL                                           /**< Bit mask for MODEM_HARDDECISION             */
#define _MODEM_VITERBIDEMOD_HARDDECISION_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_HARDDECISION_DEFAULT              (_MODEM_VITERBIDEMOD_HARDDECISION_DEFAULT << 1) /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define _MODEM_VITERBIDEMOD_VITERBIKSI1_SHIFT                2                                               /**< Shift value for MODEM_VITERBIKSI1           */
#define _MODEM_VITERBIDEMOD_VITERBIKSI1_MASK                 0x1FCUL                                         /**< Bit mask for MODEM_VITERBIKSI1              */
#define _MODEM_VITERBIDEMOD_VITERBIKSI1_DEFAULT              0x00000040UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_VITERBIKSI1_DEFAULT               (_MODEM_VITERBIDEMOD_VITERBIKSI1_DEFAULT << 2)  /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define _MODEM_VITERBIDEMOD_VITERBIKSI2_SHIFT                9                                               /**< Shift value for MODEM_VITERBIKSI2           */
#define _MODEM_VITERBIDEMOD_VITERBIKSI2_MASK                 0xFE00UL                                        /**< Bit mask for MODEM_VITERBIKSI2              */
#define _MODEM_VITERBIDEMOD_VITERBIKSI2_DEFAULT              0x00000030UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_VITERBIKSI2_DEFAULT               (_MODEM_VITERBIDEMOD_VITERBIKSI2_DEFAULT << 9)  /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define _MODEM_VITERBIDEMOD_VITERBIKSI3_SHIFT                16                                              /**< Shift value for MODEM_VITERBIKSI3           */
#define _MODEM_VITERBIDEMOD_VITERBIKSI3_MASK                 0x3F0000UL                                      /**< Bit mask for MODEM_VITERBIKSI3              */
#define _MODEM_VITERBIDEMOD_VITERBIKSI3_DEFAULT              0x00000020UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_VITERBIKSI3_DEFAULT               (_MODEM_VITERBIDEMOD_VITERBIKSI3_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define MODEM_VITERBIDEMOD_SYNTHAFC                          (0x1UL << 22)                                   /**< Synthesizer AFC in Viterbi demod            */
#define _MODEM_VITERBIDEMOD_SYNTHAFC_SHIFT                   22                                              /**< Shift value for MODEM_SYNTHAFC              */
#define _MODEM_VITERBIDEMOD_SYNTHAFC_MASK                    0x400000UL                                      /**< Bit mask for MODEM_SYNTHAFC                 */
#define _MODEM_VITERBIDEMOD_SYNTHAFC_DEFAULT                 0x00000000UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_SYNTHAFC_DEFAULT                  (_MODEM_VITERBIDEMOD_SYNTHAFC_DEFAULT << 22)    /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define _MODEM_VITERBIDEMOD_CORRCYCLE_SHIFT                  23                                              /**< Shift value for MODEM_CORRCYCLE             */
#define _MODEM_VITERBIDEMOD_CORRCYCLE_MASK                   0x7800000UL                                     /**< Bit mask for MODEM_CORRCYCLE                */
#define _MODEM_VITERBIDEMOD_CORRCYCLE_DEFAULT                0x00000000UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_CORRCYCLE_DEFAULT                 (_MODEM_VITERBIDEMOD_CORRCYCLE_DEFAULT << 23)   /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define _MODEM_VITERBIDEMOD_CORRSTPSIZE_SHIFT                27                                              /**< Shift value for MODEM_CORRSTPSIZE           */
#define _MODEM_VITERBIDEMOD_CORRSTPSIZE_MASK                 0x78000000UL                                    /**< Bit mask for MODEM_CORRSTPSIZE              */
#define _MODEM_VITERBIDEMOD_CORRSTPSIZE_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_CORRSTPSIZE_DEFAULT               (_MODEM_VITERBIDEMOD_CORRSTPSIZE_DEFAULT << 27) /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */
#define MODEM_VITERBIDEMOD_DISDEMODOF                        (0x1UL << 31)                                   /**< Disable Demod Over Flow Detection           */
#define _MODEM_VITERBIDEMOD_DISDEMODOF_SHIFT                 31                                              /**< Shift value for MODEM_DISDEMODOF            */
#define _MODEM_VITERBIDEMOD_DISDEMODOF_MASK                  0x80000000UL                                    /**< Bit mask for MODEM_DISDEMODOF               */
#define _MODEM_VITERBIDEMOD_DISDEMODOF_DEFAULT               0x00000000UL                                    /**< Mode DEFAULT for MODEM_VITERBIDEMOD         */
#define MODEM_VITERBIDEMOD_DISDEMODOF_DEFAULT                (_MODEM_VITERBIDEMOD_DISDEMODOF_DEFAULT << 31)  /**< Shifted mode DEFAULT for MODEM_VITERBIDEMOD */

/* Bit fields for MODEM VTCORRCFG0 */
#define _MODEM_VTCORRCFG0_RESETVALUE                         0x123556B7UL                                /**< Default value for MODEM_VTCORRCFG0          */
#define _MODEM_VTCORRCFG0_MASK                               0xFFFFFFFFUL                                /**< Mask for MODEM_VTCORRCFG0                   */
#define _MODEM_VTCORRCFG0_EXPECTPATT_SHIFT                   0                                           /**< Shift value for MODEM_EXPECTPATT            */
#define _MODEM_VTCORRCFG0_EXPECTPATT_MASK                    0xFFFFFFFFUL                                /**< Bit mask for MODEM_EXPECTPATT               */
#define _MODEM_VTCORRCFG0_EXPECTPATT_DEFAULT                 0x123556B7UL                                /**< Mode DEFAULT for MODEM_VTCORRCFG0           */
#define MODEM_VTCORRCFG0_EXPECTPATT_DEFAULT                  (_MODEM_VTCORRCFG0_EXPECTPATT_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_VTCORRCFG0   */

/* Bit fields for MODEM DIGMIXCTRL */
#define _MODEM_DIGMIXCTRL_RESETVALUE                         0x00000000UL                                    /**< Default value for MODEM_DIGMIXCTRL          */
#define _MODEM_DIGMIXCTRL_MASK                               0x003FFFFFUL                                    /**< Mask for MODEM_DIGMIXCTRL                   */
#define _MODEM_DIGMIXCTRL_DIGMIXFREQ_SHIFT                   0                                               /**< Shift value for MODEM_DIGMIXFREQ            */
#define _MODEM_DIGMIXCTRL_DIGMIXFREQ_MASK                    0xFFFFFUL                                       /**< Bit mask for MODEM_DIGMIXFREQ               */
#define _MODEM_DIGMIXCTRL_DIGMIXFREQ_DEFAULT                 0x00000000UL                                    /**< Mode DEFAULT for MODEM_DIGMIXCTRL           */
#define MODEM_DIGMIXCTRL_DIGMIXFREQ_DEFAULT                  (_MODEM_DIGMIXCTRL_DIGMIXFREQ_DEFAULT << 0)     /**< Shifted mode DEFAULT for MODEM_DIGMIXCTRL   */
#define MODEM_DIGMIXCTRL_DIGMIXMODE                          (0x1UL << 20)                                   /**< Digital mixer frequency control             */
#define _MODEM_DIGMIXCTRL_DIGMIXMODE_SHIFT                   20                                              /**< Shift value for MODEM_DIGMIXMODE            */
#define _MODEM_DIGMIXCTRL_DIGMIXMODE_MASK                    0x100000UL                                      /**< Bit mask for MODEM_DIGMIXMODE               */
#define _MODEM_DIGMIXCTRL_DIGMIXMODE_DEFAULT                 0x00000000UL                                    /**< Mode DEFAULT for MODEM_DIGMIXCTRL           */
#define _MODEM_DIGMIXCTRL_DIGMIXMODE_CFOSR                   0x00000000UL                                    /**< Mode CFOSR for MODEM_DIGMIXCTRL             */
#define _MODEM_DIGMIXCTRL_DIGMIXMODE_DIGMIXFREQ              0x00000001UL                                    /**< Mode DIGMIXFREQ for MODEM_DIGMIXCTRL        */
#define MODEM_DIGMIXCTRL_DIGMIXMODE_DEFAULT                  (_MODEM_DIGMIXCTRL_DIGMIXMODE_DEFAULT << 20)    /**< Shifted mode DEFAULT for MODEM_DIGMIXCTRL   */
#define MODEM_DIGMIXCTRL_DIGMIXMODE_CFOSR                    (_MODEM_DIGMIXCTRL_DIGMIXMODE_CFOSR << 20)      /**< Shifted mode CFOSR for MODEM_DIGMIXCTRL     */
#define MODEM_DIGMIXCTRL_DIGMIXMODE_DIGMIXFREQ               (_MODEM_DIGMIXCTRL_DIGMIXMODE_DIGMIXFREQ << 20) /**< Shifted mode DIGMIXFREQ for MODEM_DIGMIXCTRL*/
#define MODEM_DIGMIXCTRL_MIXERCONJ                           (0x1UL << 21)                                   /**< Digital mixer input conjugate               */
#define _MODEM_DIGMIXCTRL_MIXERCONJ_SHIFT                    21                                              /**< Shift value for MODEM_MIXERCONJ             */
#define _MODEM_DIGMIXCTRL_MIXERCONJ_MASK                     0x200000UL                                      /**< Bit mask for MODEM_MIXERCONJ                */
#define _MODEM_DIGMIXCTRL_MIXERCONJ_DEFAULT                  0x00000000UL                                    /**< Mode DEFAULT for MODEM_DIGMIXCTRL           */
#define MODEM_DIGMIXCTRL_MIXERCONJ_DEFAULT                   (_MODEM_DIGMIXCTRL_MIXERCONJ_DEFAULT << 21)     /**< Shifted mode DEFAULT for MODEM_DIGMIXCTRL   */

/* Bit fields for MODEM VTCORRCFG1 */
#define _MODEM_VTCORRCFG1_RESETVALUE                         0x29043020UL                                 /**< Default value for MODEM_VTCORRCFG1          */
#define _MODEM_VTCORRCFG1_MASK                               0x7FFFFFFFUL                                 /**< Mask for MODEM_VTCORRCFG1                   */
#define _MODEM_VTCORRCFG1_CORRSHFTLEN_SHIFT                  0                                            /**< Shift value for MODEM_CORRSHFTLEN           */
#define _MODEM_VTCORRCFG1_CORRSHFTLEN_MASK                   0x3FUL                                       /**< Bit mask for MODEM_CORRSHFTLEN              */
#define _MODEM_VTCORRCFG1_CORRSHFTLEN_DEFAULT                0x00000020UL                                 /**< Mode DEFAULT for MODEM_VTCORRCFG1           */
#define MODEM_VTCORRCFG1_CORRSHFTLEN_DEFAULT                 (_MODEM_VTCORRCFG1_CORRSHFTLEN_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_VTCORRCFG1   */
#define _MODEM_VTCORRCFG1_VTFRQLIM_SHIFT                     6                                            /**< Shift value for MODEM_VTFRQLIM              */
#define _MODEM_VTCORRCFG1_VTFRQLIM_MASK                      0x7FC0UL                                     /**< Bit mask for MODEM_VTFRQLIM                 */
#define _MODEM_VTCORRCFG1_VTFRQLIM_DEFAULT                   0x000000C0UL                                 /**< Mode DEFAULT for MODEM_VTCORRCFG1           */
#define MODEM_VTCORRCFG1_VTFRQLIM_DEFAULT                    (_MODEM_VTCORRCFG1_VTFRQLIM_DEFAULT << 6)    /**< Shifted mode DEFAULT for MODEM_VTCORRCFG1   */
#define _MODEM_VTCORRCFG1_EXPSYNCLEN_SHIFT                   15                                           /**< Shift value for MODEM_EXPSYNCLEN            */
#define _MODEM_VTCORRCFG1_EXPSYNCLEN_MASK                    0x7F8000UL                                   /**< Bit mask for MODEM_EXPSYNCLEN               */
#define _MODEM_VTCORRCFG1_EXPSYNCLEN_DEFAULT                 0x00000008UL                                 /**< Mode DEFAULT for MODEM_VTCORRCFG1           */
#define MODEM_VTCORRCFG1_EXPSYNCLEN_DEFAULT                  (_MODEM_VTCORRCFG1_EXPSYNCLEN_DEFAULT << 15) /**< Shifted mode DEFAULT for MODEM_VTCORRCFG1   */
#define _MODEM_VTCORRCFG1_BUFFHEAD_SHIFT                     23                                           /**< Shift value for MODEM_BUFFHEAD              */
#define _MODEM_VTCORRCFG1_BUFFHEAD_MASK                      0x7800000UL                                  /**< Bit mask for MODEM_BUFFHEAD                 */
#define _MODEM_VTCORRCFG1_BUFFHEAD_DEFAULT                   0x00000002UL                                 /**< Mode DEFAULT for MODEM_VTCORRCFG1           */
#define MODEM_VTCORRCFG1_BUFFHEAD_DEFAULT                    (_MODEM_VTCORRCFG1_BUFFHEAD_DEFAULT << 23)   /**< Shifted mode DEFAULT for MODEM_VTCORRCFG1   */
#define _MODEM_VTCORRCFG1_EXPECTHT_SHIFT                     27                                           /**< Shift value for MODEM_EXPECTHT              */
#define _MODEM_VTCORRCFG1_EXPECTHT_MASK                      0x78000000UL                                 /**< Bit mask for MODEM_EXPECTHT                 */
#define _MODEM_VTCORRCFG1_EXPECTHT_DEFAULT                   0x00000005UL                                 /**< Mode DEFAULT for MODEM_VTCORRCFG1           */
#define MODEM_VTCORRCFG1_EXPECTHT_DEFAULT                    (_MODEM_VTCORRCFG1_EXPECTHT_DEFAULT << 27)   /**< Shifted mode DEFAULT for MODEM_VTCORRCFG1   */

/* Bit fields for MODEM VTTRACK */
#define _MODEM_VTTRACK_RESETVALUE                            0x0D80BB88UL                                 /**< Default value for MODEM_VTTRACK             */
#define _MODEM_VTTRACK_MASK                                  0x3FFFFFFFUL                                 /**< Mask for MODEM_VTTRACK                      */
#define _MODEM_VTTRACK_FREQTRACKMODE_SHIFT                   0                                            /**< Shift value for MODEM_FREQTRACKMODE         */
#define _MODEM_VTTRACK_FREQTRACKMODE_MASK                    0x3UL                                        /**< Bit mask for MODEM_FREQTRACKMODE            */
#define _MODEM_VTTRACK_FREQTRACKMODE_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define _MODEM_VTTRACK_FREQTRACKMODE_DISABLED                0x00000000UL                                 /**< Mode DISABLED for MODEM_VTTRACK             */
#define _MODEM_VTTRACK_FREQTRACKMODE_MODE1                   0x00000001UL                                 /**< Mode MODE1 for MODEM_VTTRACK                */
#define _MODEM_VTTRACK_FREQTRACKMODE_MODE2                   0x00000002UL                                 /**< Mode MODE2 for MODEM_VTTRACK                */
#define _MODEM_VTTRACK_FREQTRACKMODE_MODE3                   0x00000003UL                                 /**< Mode MODE3 for MODEM_VTTRACK                */
#define MODEM_VTTRACK_FREQTRACKMODE_DEFAULT                  (_MODEM_VTTRACK_FREQTRACKMODE_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define MODEM_VTTRACK_FREQTRACKMODE_DISABLED                 (_MODEM_VTTRACK_FREQTRACKMODE_DISABLED << 0) /**< Shifted mode DISABLED for MODEM_VTTRACK     */
#define MODEM_VTTRACK_FREQTRACKMODE_MODE1                    (_MODEM_VTTRACK_FREQTRACKMODE_MODE1 << 0)    /**< Shifted mode MODE1 for MODEM_VTTRACK        */
#define MODEM_VTTRACK_FREQTRACKMODE_MODE2                    (_MODEM_VTTRACK_FREQTRACKMODE_MODE2 << 0)    /**< Shifted mode MODE2 for MODEM_VTTRACK        */
#define MODEM_VTTRACK_FREQTRACKMODE_MODE3                    (_MODEM_VTTRACK_FREQTRACKMODE_MODE3 << 0)    /**< Shifted mode MODE3 for MODEM_VTTRACK        */
#define _MODEM_VTTRACK_TIMTRACKTHD_SHIFT                     2                                            /**< Shift value for MODEM_TIMTRACKTHD           */
#define _MODEM_VTTRACK_TIMTRACKTHD_MASK                      0x3CUL                                       /**< Bit mask for MODEM_TIMTRACKTHD              */
#define _MODEM_VTTRACK_TIMTRACKTHD_DEFAULT                   0x00000002UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define MODEM_VTTRACK_TIMTRACKTHD_DEFAULT                    (_MODEM_VTTRACK_TIMTRACKTHD_DEFAULT << 2)    /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define _MODEM_VTTRACK_TIMEACQUTHD_SHIFT                     6                                            /**< Shift value for MODEM_TIMEACQUTHD           */
#define _MODEM_VTTRACK_TIMEACQUTHD_MASK                      0x3FC0UL                                     /**< Bit mask for MODEM_TIMEACQUTHD              */
#define _MODEM_VTTRACK_TIMEACQUTHD_DEFAULT                   0x000000EEUL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define MODEM_VTTRACK_TIMEACQUTHD_DEFAULT                    (_MODEM_VTTRACK_TIMEACQUTHD_DEFAULT << 6)    /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define MODEM_VTTRACK_TIMCHK                                 (0x1UL << 14)                                /**< Time check                                  */
#define _MODEM_VTTRACK_TIMCHK_SHIFT                          14                                           /**< Shift value for MODEM_TIMCHK                */
#define _MODEM_VTTRACK_TIMCHK_MASK                           0x4000UL                                     /**< Bit mask for MODEM_TIMCHK                   */
#define _MODEM_VTTRACK_TIMCHK_DEFAULT                        0x00000000UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define MODEM_VTTRACK_TIMCHK_DEFAULT                         (_MODEM_VTTRACK_TIMCHK_DEFAULT << 14)        /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define MODEM_VTTRACK_TIMEOUTMODE                            (0x1UL << 15)                                /**< Timeout mode                                */
#define _MODEM_VTTRACK_TIMEOUTMODE_SHIFT                     15                                           /**< Shift value for MODEM_TIMEOUTMODE           */
#define _MODEM_VTTRACK_TIMEOUTMODE_MASK                      0x8000UL                                     /**< Bit mask for MODEM_TIMEOUTMODE              */
#define _MODEM_VTTRACK_TIMEOUTMODE_DEFAULT                   0x00000001UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define MODEM_VTTRACK_TIMEOUTMODE_DEFAULT                    (_MODEM_VTTRACK_TIMEOUTMODE_DEFAULT << 15)   /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define _MODEM_VTTRACK_TIMGEAR_SHIFT                         16                                           /**< Shift value for MODEM_TIMGEAR               */
#define _MODEM_VTTRACK_TIMGEAR_MASK                          0x30000UL                                    /**< Bit mask for MODEM_TIMGEAR                  */
#define _MODEM_VTTRACK_TIMGEAR_DEFAULT                       0x00000000UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define _MODEM_VTTRACK_TIMGEAR_GEAR0                         0x00000000UL                                 /**< Mode GEAR0 for MODEM_VTTRACK                */
#define _MODEM_VTTRACK_TIMGEAR_GEAR1                         0x00000001UL                                 /**< Mode GEAR1 for MODEM_VTTRACK                */
#define _MODEM_VTTRACK_TIMGEAR_GEAR2                         0x00000002UL                                 /**< Mode GEAR2 for MODEM_VTTRACK                */
#define MODEM_VTTRACK_TIMGEAR_DEFAULT                        (_MODEM_VTTRACK_TIMGEAR_DEFAULT << 16)       /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define MODEM_VTTRACK_TIMGEAR_GEAR0                          (_MODEM_VTTRACK_TIMGEAR_GEAR0 << 16)         /**< Shifted mode GEAR0 for MODEM_VTTRACK        */
#define MODEM_VTTRACK_TIMGEAR_GEAR1                          (_MODEM_VTTRACK_TIMGEAR_GEAR1 << 16)         /**< Shifted mode GEAR1 for MODEM_VTTRACK        */
#define MODEM_VTTRACK_TIMGEAR_GEAR2                          (_MODEM_VTTRACK_TIMGEAR_GEAR2 << 16)         /**< Shifted mode GEAR2 for MODEM_VTTRACK        */
#define _MODEM_VTTRACK_FREQBIAS_SHIFT                        18                                           /**< Shift value for MODEM_FREQBIAS              */
#define _MODEM_VTTRACK_FREQBIAS_MASK                         0x3C0000UL                                   /**< Bit mask for MODEM_FREQBIAS                 */
#define _MODEM_VTTRACK_FREQBIAS_DEFAULT                      0x00000000UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define MODEM_VTTRACK_FREQBIAS_DEFAULT                       (_MODEM_VTTRACK_FREQBIAS_DEFAULT << 18)      /**< Shifted mode DEFAULT for MODEM_VTTRACK      */
#define _MODEM_VTTRACK_HIPWRTHD_SHIFT                        22                                           /**< Shift value for MODEM_HIPWRTHD              */
#define _MODEM_VTTRACK_HIPWRTHD_MASK                         0x3FC00000UL                                 /**< Bit mask for MODEM_HIPWRTHD                 */
#define _MODEM_VTTRACK_HIPWRTHD_DEFAULT                      0x00000036UL                                 /**< Mode DEFAULT for MODEM_VTTRACK              */
#define MODEM_VTTRACK_HIPWRTHD_DEFAULT                       (_MODEM_VTTRACK_HIPWRTHD_DEFAULT << 22)      /**< Shifted mode DEFAULT for MODEM_VTTRACK      */

/* Bit fields for MODEM BREST */
#define _MODEM_BREST_RESETVALUE                              0x00000000UL                         /**< Default value for MODEM_BREST               */
#define _MODEM_BREST_MASK                                    0x000007FFUL                         /**< Mask for MODEM_BREST                        */
#define _MODEM_BREST_BRESTINT_SHIFT                          0                                    /**< Shift value for MODEM_BRESTINT              */
#define _MODEM_BREST_BRESTINT_MASK                           0x3FUL                               /**< Bit mask for MODEM_BRESTINT                 */
#define _MODEM_BREST_BRESTINT_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for MODEM_BREST                */
#define MODEM_BREST_BRESTINT_DEFAULT                         (_MODEM_BREST_BRESTINT_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_BREST        */
#define _MODEM_BREST_BRESTNUM_SHIFT                          6                                    /**< Shift value for MODEM_BRESTNUM              */
#define _MODEM_BREST_BRESTNUM_MASK                           0x7C0UL                              /**< Bit mask for MODEM_BRESTNUM                 */
#define _MODEM_BREST_BRESTNUM_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for MODEM_BREST                */
#define MODEM_BREST_BRESTNUM_DEFAULT                         (_MODEM_BREST_BRESTNUM_DEFAULT << 6) /**< Shifted mode DEFAULT for MODEM_BREST        */

/* Bit fields for MODEM AUTOCG */
#define _MODEM_AUTOCG_RESETVALUE                             0x00000000UL                          /**< Default value for MODEM_AUTOCG              */
#define _MODEM_AUTOCG_MASK                                   0x0000FFFFUL                          /**< Mask for MODEM_AUTOCG                       */
#define _MODEM_AUTOCG_AUTOCGEN_SHIFT                         0                                     /**< Shift value for MODEM_AUTOCGEN              */
#define _MODEM_AUTOCG_AUTOCGEN_MASK                          0xFFFFUL                              /**< Bit mask for MODEM_AUTOCGEN                 */
#define _MODEM_AUTOCG_AUTOCGEN_DEFAULT                       0x00000000UL                          /**< Mode DEFAULT for MODEM_AUTOCG               */
#define MODEM_AUTOCG_AUTOCGEN_DEFAULT                        (_MODEM_AUTOCG_AUTOCGEN_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_AUTOCG       */

/* Bit fields for MODEM CGCLKSTOP */
#define _MODEM_CGCLKSTOP_RESETVALUE                          0x00000000UL                             /**< Default value for MODEM_CGCLKSTOP           */
#define _MODEM_CGCLKSTOP_MASK                                0x0000FFFFUL                             /**< Mask for MODEM_CGCLKSTOP                    */
#define _MODEM_CGCLKSTOP_FORCEOFF_SHIFT                      0                                        /**< Shift value for MODEM_FORCEOFF              */
#define _MODEM_CGCLKSTOP_FORCEOFF_MASK                       0xFFFFUL                                 /**< Bit mask for MODEM_FORCEOFF                 */
#define _MODEM_CGCLKSTOP_FORCEOFF_DEFAULT                    0x00000000UL                             /**< Mode DEFAULT for MODEM_CGCLKSTOP            */
#define MODEM_CGCLKSTOP_FORCEOFF_DEFAULT                     (_MODEM_CGCLKSTOP_FORCEOFF_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_CGCLKSTOP    */

/* Bit fields for MODEM POE */
#define _MODEM_POE_RESETVALUE                                0x00000000UL                    /**< Default value for MODEM_POE                 */
#define _MODEM_POE_MASK                                      0x03FF03FFUL                    /**< Mask for MODEM_POE                          */
#define _MODEM_POE_POEI_SHIFT                                0                               /**< Shift value for MODEM_POEI                  */
#define _MODEM_POE_POEI_MASK                                 0x3FFUL                         /**< Bit mask for MODEM_POEI                     */
#define _MODEM_POE_POEI_DEFAULT                              0x00000000UL                    /**< Mode DEFAULT for MODEM_POE                  */
#define MODEM_POE_POEI_DEFAULT                               (_MODEM_POE_POEI_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_POE          */
#define _MODEM_POE_POEQ_SHIFT                                16                              /**< Shift value for MODEM_POEQ                  */
#define _MODEM_POE_POEQ_MASK                                 0x3FF0000UL                     /**< Bit mask for MODEM_POEQ                     */
#define _MODEM_POE_POEQ_DEFAULT                              0x00000000UL                    /**< Mode DEFAULT for MODEM_POE                  */
#define MODEM_POE_POEQ_DEFAULT                               (_MODEM_POE_POEQ_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_POE          */

/* Bit fields for MODEM DSATHD2 */
#define _MODEM_DSATHD2_RESETVALUE                            0x0C660664UL                                /**< Default value for MODEM_DSATHD2             */
#define _MODEM_DSATHD2_MASK                                  0x7FFFFEFFUL                                /**< Mask for MODEM_DSATHD2                      */
#define _MODEM_DSATHD2_POWABSTHDLOG_SHIFT                    0                                           /**< Shift value for MODEM_POWABSTHDLOG          */
#define _MODEM_DSATHD2_POWABSTHDLOG_MASK                     0xFFUL                                      /**< Bit mask for MODEM_POWABSTHDLOG             */
#define _MODEM_DSATHD2_POWABSTHDLOG_DEFAULT                  0x00000064UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_POWABSTHDLOG_DEFAULT                   (_MODEM_DSATHD2_POWABSTHDLOG_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_DSATHD2      */
#define MODEM_DSATHD2_JUMPDETEN                              (0x1UL << 9)                                /**< Power jump detection enable                 */
#define _MODEM_DSATHD2_JUMPDETEN_SHIFT                       9                                           /**< Shift value for MODEM_JUMPDETEN             */
#define _MODEM_DSATHD2_JUMPDETEN_MASK                        0x200UL                                     /**< Bit mask for MODEM_JUMPDETEN                */
#define _MODEM_DSATHD2_JUMPDETEN_DEFAULT                     0x00000001UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_JUMPDETEN_DEFAULT                      (_MODEM_DSATHD2_JUMPDETEN_DEFAULT << 9)     /**< Shifted mode DEFAULT for MODEM_DSATHD2      */
#define _MODEM_DSATHD2_FDADJTHD_SHIFT                        10                                          /**< Shift value for MODEM_FDADJTHD              */
#define _MODEM_DSATHD2_FDADJTHD_MASK                         0xFC00UL                                    /**< Bit mask for MODEM_FDADJTHD                 */
#define _MODEM_DSATHD2_FDADJTHD_DEFAULT                      0x00000001UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_FDADJTHD_DEFAULT                       (_MODEM_DSATHD2_FDADJTHD_DEFAULT << 10)     /**< Shifted mode DEFAULT for MODEM_DSATHD2      */
#define _MODEM_DSATHD2_PMDETPASSTHD_SHIFT                    16                                          /**< Shift value for MODEM_PMDETPASSTHD          */
#define _MODEM_DSATHD2_PMDETPASSTHD_MASK                     0xF0000UL                                   /**< Bit mask for MODEM_PMDETPASSTHD             */
#define _MODEM_DSATHD2_PMDETPASSTHD_DEFAULT                  0x00000006UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_PMDETPASSTHD_DEFAULT                   (_MODEM_DSATHD2_PMDETPASSTHD_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_DSATHD2      */
#define _MODEM_DSATHD2_FREQESTTHD_SHIFT                      20                                          /**< Shift value for MODEM_FREQESTTHD            */
#define _MODEM_DSATHD2_FREQESTTHD_MASK                       0x1F00000UL                                 /**< Bit mask for MODEM_FREQESTTHD               */
#define _MODEM_DSATHD2_FREQESTTHD_DEFAULT                    0x00000006UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_FREQESTTHD_DEFAULT                     (_MODEM_DSATHD2_FREQESTTHD_DEFAULT << 20)   /**< Shifted mode DEFAULT for MODEM_DSATHD2      */
#define _MODEM_DSATHD2_INTERFERDET_SHIFT                     25                                          /**< Shift value for MODEM_INTERFERDET           */
#define _MODEM_DSATHD2_INTERFERDET_MASK                      0x3E000000UL                                /**< Bit mask for MODEM_INTERFERDET              */
#define _MODEM_DSATHD2_INTERFERDET_DEFAULT                   0x00000006UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_INTERFERDET_DEFAULT                    (_MODEM_DSATHD2_INTERFERDET_DEFAULT << 25)  /**< Shifted mode DEFAULT for MODEM_DSATHD2      */
#define MODEM_DSATHD2_PMDETFORCE                             (0x1UL << 30)                               /**< Force DSA preamble detector                 */
#define _MODEM_DSATHD2_PMDETFORCE_SHIFT                      30                                          /**< Shift value for MODEM_PMDETFORCE            */
#define _MODEM_DSATHD2_PMDETFORCE_MASK                       0x40000000UL                                /**< Bit mask for MODEM_PMDETFORCE               */
#define _MODEM_DSATHD2_PMDETFORCE_DEFAULT                    0x00000000UL                                /**< Mode DEFAULT for MODEM_DSATHD2              */
#define MODEM_DSATHD2_PMDETFORCE_DEFAULT                     (_MODEM_DSATHD2_PMDETFORCE_DEFAULT << 30)   /**< Shifted mode DEFAULT for MODEM_DSATHD2      */

/* Bit fields for MODEM DIRECTMODE */
#define _MODEM_DIRECTMODE_RESETVALUE                         0x0000010CUL                               /**< Default value for MODEM_DIRECTMODE          */
#define _MODEM_DIRECTMODE_MASK                               0x00001F0FUL                               /**< Mask for MODEM_DIRECTMODE                   */
#define MODEM_DIRECTMODE_DMENABLE                            (0x1UL << 0)                               /**< Enable Direct Mode                          */
#define _MODEM_DIRECTMODE_DMENABLE_SHIFT                     0                                          /**< Shift value for MODEM_DMENABLE              */
#define _MODEM_DIRECTMODE_DMENABLE_MASK                      0x1UL                                      /**< Bit mask for MODEM_DMENABLE                 */
#define _MODEM_DIRECTMODE_DMENABLE_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for MODEM_DIRECTMODE           */
#define MODEM_DIRECTMODE_DMENABLE_DEFAULT                    (_MODEM_DIRECTMODE_DMENABLE_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_DIRECTMODE   */
#define MODEM_DIRECTMODE_SYNCASYNC                           (0x1UL << 1)                               /**< Choose Synchronous or Asynchronous mode     */
#define _MODEM_DIRECTMODE_SYNCASYNC_SHIFT                    1                                          /**< Shift value for MODEM_SYNCASYNC             */
#define _MODEM_DIRECTMODE_SYNCASYNC_MASK                     0x2UL                                      /**< Bit mask for MODEM_SYNCASYNC                */
#define _MODEM_DIRECTMODE_SYNCASYNC_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for MODEM_DIRECTMODE           */
#define MODEM_DIRECTMODE_SYNCASYNC_DEFAULT                   (_MODEM_DIRECTMODE_SYNCASYNC_DEFAULT << 1) /**< Shifted mode DEFAULT for MODEM_DIRECTMODE   */
#define _MODEM_DIRECTMODE_SYNCPREAM_SHIFT                    2                                          /**< Shift value for MODEM_SYNCPREAM             */
#define _MODEM_DIRECTMODE_SYNCPREAM_MASK                     0xCUL                                      /**< Bit mask for MODEM_SYNCPREAM                */
#define _MODEM_DIRECTMODE_SYNCPREAM_DEFAULT                  0x00000003UL                               /**< Mode DEFAULT for MODEM_DIRECTMODE           */
#define _MODEM_DIRECTMODE_SYNCPREAM_ADD0                     0x00000000UL                               /**< Mode ADD0 for MODEM_DIRECTMODE              */
#define _MODEM_DIRECTMODE_SYNCPREAM_ADD8                     0x00000001UL                               /**< Mode ADD8 for MODEM_DIRECTMODE              */
#define _MODEM_DIRECTMODE_SYNCPREAM_ADD16                    0x00000002UL                               /**< Mode ADD16 for MODEM_DIRECTMODE             */
#define _MODEM_DIRECTMODE_SYNCPREAM_ADD32                    0x00000003UL                               /**< Mode ADD32 for MODEM_DIRECTMODE             */
#define MODEM_DIRECTMODE_SYNCPREAM_DEFAULT                   (_MODEM_DIRECTMODE_SYNCPREAM_DEFAULT << 2) /**< Shifted mode DEFAULT for MODEM_DIRECTMODE   */
#define MODEM_DIRECTMODE_SYNCPREAM_ADD0                      (_MODEM_DIRECTMODE_SYNCPREAM_ADD0 << 2)    /**< Shifted mode ADD0 for MODEM_DIRECTMODE      */
#define MODEM_DIRECTMODE_SYNCPREAM_ADD8                      (_MODEM_DIRECTMODE_SYNCPREAM_ADD8 << 2)    /**< Shifted mode ADD8 for MODEM_DIRECTMODE      */
#define MODEM_DIRECTMODE_SYNCPREAM_ADD16                     (_MODEM_DIRECTMODE_SYNCPREAM_ADD16 << 2)   /**< Shifted mode ADD16 for MODEM_DIRECTMODE     */
#define MODEM_DIRECTMODE_SYNCPREAM_ADD32                     (_MODEM_DIRECTMODE_SYNCPREAM_ADD32 << 2)   /**< Shifted mode ADD32 for MODEM_DIRECTMODE     */
#define _MODEM_DIRECTMODE_CLKWIDTH_SHIFT                     8                                          /**< Shift value for MODEM_CLKWIDTH              */
#define _MODEM_DIRECTMODE_CLKWIDTH_MASK                      0x1F00UL                                   /**< Bit mask for MODEM_CLKWIDTH                 */
#define _MODEM_DIRECTMODE_CLKWIDTH_DEFAULT                   0x00000001UL                               /**< Mode DEFAULT for MODEM_DIRECTMODE           */
#define MODEM_DIRECTMODE_CLKWIDTH_DEFAULT                    (_MODEM_DIRECTMODE_CLKWIDTH_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_DIRECTMODE   */

/* Bit fields for MODEM LONGRANGE */
#define _MODEM_LONGRANGE_RESETVALUE                          0x00FA53E8UL                                    /**< Default value for MODEM_LONGRANGE           */
#define _MODEM_LONGRANGE_MASK                                0xFFFFFFFFUL                                    /**< Mask for MODEM_LONGRANGE                    */
#define _MODEM_LONGRANGE_LRCORRTHD_SHIFT                     0                                               /**< Shift value for MODEM_LRCORRTHD             */
#define _MODEM_LONGRANGE_LRCORRTHD_MASK                      0x7FFUL                                         /**< Bit mask for MODEM_LRCORRTHD                */
#define _MODEM_LONGRANGE_LRCORRTHD_DEFAULT                   0x000003E8UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRCORRTHD_DEFAULT                    (_MODEM_LONGRANGE_LRCORRTHD_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */
#define _MODEM_LONGRANGE_LRCORRSCHWIN_SHIFT                  11                                              /**< Shift value for MODEM_LRCORRSCHWIN          */
#define _MODEM_LONGRANGE_LRCORRSCHWIN_MASK                   0x7800UL                                        /**< Bit mask for MODEM_LRCORRSCHWIN             */
#define _MODEM_LONGRANGE_LRCORRSCHWIN_DEFAULT                0x0000000AUL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRCORRSCHWIN_DEFAULT                 (_MODEM_LONGRANGE_LRCORRSCHWIN_DEFAULT << 11)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */
#define MODEM_LONGRANGE_LRBLE                                (0x1UL << 15)                                   /**< Enable                                      */
#define _MODEM_LONGRANGE_LRBLE_SHIFT                         15                                              /**< Shift value for MODEM_LRBLE                 */
#define _MODEM_LONGRANGE_LRBLE_MASK                          0x8000UL                                        /**< Bit mask for MODEM_LRBLE                    */
#define _MODEM_LONGRANGE_LRBLE_DEFAULT                       0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRBLE_DEFAULT                        (_MODEM_LONGRANGE_LRBLE_DEFAULT << 15)          /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */
#define _MODEM_LONGRANGE_LRTIMCORRTHD_SHIFT                  16                                              /**< Shift value for MODEM_LRTIMCORRTHD          */
#define _MODEM_LONGRANGE_LRTIMCORRTHD_MASK                   0x7FF0000UL                                     /**< Bit mask for MODEM_LRTIMCORRTHD             */
#define _MODEM_LONGRANGE_LRTIMCORRTHD_DEFAULT                0x000000FAUL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRTIMCORRTHD_DEFAULT                 (_MODEM_LONGRANGE_LRTIMCORRTHD_DEFAULT << 16)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */
#define MODEM_LONGRANGE_LRBLEDSA                             (0x1UL << 27)                                   /**< DSA enable                                  */
#define _MODEM_LONGRANGE_LRBLEDSA_SHIFT                      27                                              /**< Shift value for MODEM_LRBLEDSA              */
#define _MODEM_LONGRANGE_LRBLEDSA_MASK                       0x8000000UL                                     /**< Bit mask for MODEM_LRBLEDSA                 */
#define _MODEM_LONGRANGE_LRBLEDSA_DEFAULT                    0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRBLEDSA_DEFAULT                     (_MODEM_LONGRANGE_LRBLEDSA_DEFAULT << 27)       /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */
#define _MODEM_LONGRANGE_LRDEC_SHIFT                         28                                              /**< Shift value for MODEM_LRDEC                 */
#define _MODEM_LONGRANGE_LRDEC_MASK                          0x70000000UL                                    /**< Bit mask for MODEM_LRDEC                    */
#define _MODEM_LONGRANGE_LRDEC_DEFAULT                       0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRDEC_DEFAULT                        (_MODEM_LONGRANGE_LRDEC_DEFAULT << 28)          /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */
#define MODEM_LONGRANGE_LRCORRTHDDYNEN                       (0x1UL << 31)                                   /**< Correlator THD dynamic enable               */
#define _MODEM_LONGRANGE_LRCORRTHDDYNEN_SHIFT                31                                              /**< Shift value for MODEM_LRCORRTHDDYNEN        */
#define _MODEM_LONGRANGE_LRCORRTHDDYNEN_MASK                 0x80000000UL                                    /**< Bit mask for MODEM_LRCORRTHDDYNEN           */
#define _MODEM_LONGRANGE_LRCORRTHDDYNEN_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE            */
#define MODEM_LONGRANGE_LRCORRTHDDYNEN_DEFAULT               (_MODEM_LONGRANGE_LRCORRTHDDYNEN_DEFAULT << 31) /**< Shifted mode DEFAULT for MODEM_LONGRANGE    */

/* Bit fields for MODEM LONGRANGE1 */
#define _MODEM_LONGRANGE1_RESETVALUE                         0x00000000UL                                            /**< Default value for MODEM_LONGRANGE1          */
#define _MODEM_LONGRANGE1_MASK                               0x3FFF7FFFUL                                            /**< Mask for MODEM_LONGRANGE1                   */
#define _MODEM_LONGRANGE1_LRSS_SHIFT                         0                                                       /**< Shift value for MODEM_LRSS                  */
#define _MODEM_LONGRANGE1_LRSS_MASK                          0xFUL                                                   /**< Bit mask for MODEM_LRSS                     */
#define _MODEM_LONGRANGE1_LRSS_DEFAULT                       0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_LRSS_DEFAULT                        (_MODEM_LONGRANGE1_LRSS_DEFAULT << 0)                   /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define _MODEM_LONGRANGE1_LRTIMEOUTTHD_SHIFT                 4                                                       /**< Shift value for MODEM_LRTIMEOUTTHD          */
#define _MODEM_LONGRANGE1_LRTIMEOUTTHD_MASK                  0x7FF0UL                                                /**< Bit mask for MODEM_LRTIMEOUTTHD             */
#define _MODEM_LONGRANGE1_LRTIMEOUTTHD_DEFAULT               0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_LRTIMEOUTTHD_DEFAULT                (_MODEM_LONGRANGE1_LRTIMEOUTTHD_DEFAULT << 4)           /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define _MODEM_LONGRANGE1_CHPWRACCUDEL_SHIFT                 16                                                      /**< Shift value for MODEM_CHPWRACCUDEL          */
#define _MODEM_LONGRANGE1_CHPWRACCUDEL_MASK                  0x30000UL                                               /**< Bit mask for MODEM_CHPWRACCUDEL             */
#define _MODEM_LONGRANGE1_CHPWRACCUDEL_DEFAULT               0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define _MODEM_LONGRANGE1_CHPWRACCUDEL_DEL0                  0x00000000UL                                            /**< Mode DEL0 for MODEM_LONGRANGE1              */
#define _MODEM_LONGRANGE1_CHPWRACCUDEL_DEL32                 0x00000001UL                                            /**< Mode DEL32 for MODEM_LONGRANGE1             */
#define _MODEM_LONGRANGE1_CHPWRACCUDEL_DEL64                 0x00000002UL                                            /**< Mode DEL64 for MODEM_LONGRANGE1             */
#define MODEM_LONGRANGE1_CHPWRACCUDEL_DEFAULT                (_MODEM_LONGRANGE1_CHPWRACCUDEL_DEFAULT << 16)          /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define MODEM_LONGRANGE1_CHPWRACCUDEL_DEL0                   (_MODEM_LONGRANGE1_CHPWRACCUDEL_DEL0 << 16)             /**< Shifted mode DEL0 for MODEM_LONGRANGE1      */
#define MODEM_LONGRANGE1_CHPWRACCUDEL_DEL32                  (_MODEM_LONGRANGE1_CHPWRACCUDEL_DEL32 << 16)            /**< Shifted mode DEL32 for MODEM_LONGRANGE1     */
#define MODEM_LONGRANGE1_CHPWRACCUDEL_DEL64                  (_MODEM_LONGRANGE1_CHPWRACCUDEL_DEL64 << 16)            /**< Shifted mode DEL64 for MODEM_LONGRANGE1     */
#define _MODEM_LONGRANGE1_HYSVAL_SHIFT                       18                                                      /**< Shift value for MODEM_HYSVAL                */
#define _MODEM_LONGRANGE1_HYSVAL_MASK                        0x1C0000UL                                              /**< Bit mask for MODEM_HYSVAL                   */
#define _MODEM_LONGRANGE1_HYSVAL_DEFAULT                     0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_HYSVAL_DEFAULT                      (_MODEM_LONGRANGE1_HYSVAL_DEFAULT << 18)                /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define _MODEM_LONGRANGE1_AVGWIN_SHIFT                       21                                                      /**< Shift value for MODEM_AVGWIN                */
#define _MODEM_LONGRANGE1_AVGWIN_MASK                        0xE00000UL                                              /**< Bit mask for MODEM_AVGWIN                   */
#define _MODEM_LONGRANGE1_AVGWIN_DEFAULT                     0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_AVGWIN_DEFAULT                      (_MODEM_LONGRANGE1_AVGWIN_DEFAULT << 21)                /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define _MODEM_LONGRANGE1_LRSPIKETHADD_SHIFT                 24                                                      /**< Shift value for MODEM_LRSPIKETHADD          */
#define _MODEM_LONGRANGE1_LRSPIKETHADD_MASK                  0xF000000UL                                             /**< Bit mask for MODEM_LRSPIKETHADD             */
#define _MODEM_LONGRANGE1_LRSPIKETHADD_DEFAULT               0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_LRSPIKETHADD_DEFAULT                (_MODEM_LONGRANGE1_LRSPIKETHADD_DEFAULT << 24)          /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define MODEM_LONGRANGE1_LOGICBASEDPUGATE                    (0x1UL << 28)                                           /**< Logic Based Phase Unwrap Gating             */
#define _MODEM_LONGRANGE1_LOGICBASEDPUGATE_SHIFT             28                                                      /**< Shift value for MODEM_LOGICBASEDPUGATE      */
#define _MODEM_LONGRANGE1_LOGICBASEDPUGATE_MASK              0x10000000UL                                            /**< Bit mask for MODEM_LOGICBASEDPUGATE         */
#define _MODEM_LONGRANGE1_LOGICBASEDPUGATE_DEFAULT           0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_LOGICBASEDPUGATE_DEFAULT            (_MODEM_LONGRANGE1_LOGICBASEDPUGATE_DEFAULT << 28)      /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */
#define MODEM_LONGRANGE1_LOGICBASEDLRDEMODGATE               (0x1UL << 29)                                           /**< Logic Based Long Range Demod Gating         */
#define _MODEM_LONGRANGE1_LOGICBASEDLRDEMODGATE_SHIFT        29                                                      /**< Shift value for MODEM_LOGICBASEDLRDEMODGATE */
#define _MODEM_LONGRANGE1_LOGICBASEDLRDEMODGATE_MASK         0x20000000UL                                            /**< Bit mask for MODEM_LOGICBASEDLRDEMODGATE    */
#define _MODEM_LONGRANGE1_LOGICBASEDLRDEMODGATE_DEFAULT      0x00000000UL                                            /**< Mode DEFAULT for MODEM_LONGRANGE1           */
#define MODEM_LONGRANGE1_LOGICBASEDLRDEMODGATE_DEFAULT       (_MODEM_LONGRANGE1_LOGICBASEDLRDEMODGATE_DEFAULT << 29) /**< Shifted mode DEFAULT for MODEM_LONGRANGE1   */

/* Bit fields for MODEM LONGRANGE2 */
#define _MODEM_LONGRANGE2_RESETVALUE                         0x00000000UL                                 /**< Default value for MODEM_LONGRANGE2          */
#define _MODEM_LONGRANGE2_MASK                               0xFFFFFFFFUL                                 /**< Mask for MODEM_LONGRANGE2                   */
#define _MODEM_LONGRANGE2_LRCHPWRTH1_SHIFT                   0                                            /**< Shift value for MODEM_LRCHPWRTH1            */
#define _MODEM_LONGRANGE2_LRCHPWRTH1_MASK                    0xFFUL                                       /**< Bit mask for MODEM_LRCHPWRTH1               */
#define _MODEM_LONGRANGE2_LRCHPWRTH1_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE2           */
#define MODEM_LONGRANGE2_LRCHPWRTH1_DEFAULT                  (_MODEM_LONGRANGE2_LRCHPWRTH1_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE2   */
#define _MODEM_LONGRANGE2_LRCHPWRTH2_SHIFT                   8                                            /**< Shift value for MODEM_LRCHPWRTH2            */
#define _MODEM_LONGRANGE2_LRCHPWRTH2_MASK                    0xFF00UL                                     /**< Bit mask for MODEM_LRCHPWRTH2               */
#define _MODEM_LONGRANGE2_LRCHPWRTH2_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE2           */
#define MODEM_LONGRANGE2_LRCHPWRTH2_DEFAULT                  (_MODEM_LONGRANGE2_LRCHPWRTH2_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE2   */
#define _MODEM_LONGRANGE2_LRCHPWRTH3_SHIFT                   16                                           /**< Shift value for MODEM_LRCHPWRTH3            */
#define _MODEM_LONGRANGE2_LRCHPWRTH3_MASK                    0xFF0000UL                                   /**< Bit mask for MODEM_LRCHPWRTH3               */
#define _MODEM_LONGRANGE2_LRCHPWRTH3_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE2           */
#define MODEM_LONGRANGE2_LRCHPWRTH3_DEFAULT                  (_MODEM_LONGRANGE2_LRCHPWRTH3_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_LONGRANGE2   */
#define _MODEM_LONGRANGE2_LRCHPWRTH4_SHIFT                   24                                           /**< Shift value for MODEM_LRCHPWRTH4            */
#define _MODEM_LONGRANGE2_LRCHPWRTH4_MASK                    0xFF000000UL                                 /**< Bit mask for MODEM_LRCHPWRTH4               */
#define _MODEM_LONGRANGE2_LRCHPWRTH4_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE2           */
#define MODEM_LONGRANGE2_LRCHPWRTH4_DEFAULT                  (_MODEM_LONGRANGE2_LRCHPWRTH4_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_LONGRANGE2   */

/* Bit fields for MODEM LONGRANGE3 */
#define _MODEM_LONGRANGE3_RESETVALUE                         0x00000000UL                                 /**< Default value for MODEM_LONGRANGE3          */
#define _MODEM_LONGRANGE3_MASK                               0xFFFFFFFFUL                                 /**< Mask for MODEM_LONGRANGE3                   */
#define _MODEM_LONGRANGE3_LRCHPWRTH5_SHIFT                   0                                            /**< Shift value for MODEM_LRCHPWRTH5            */
#define _MODEM_LONGRANGE3_LRCHPWRTH5_MASK                    0xFFUL                                       /**< Bit mask for MODEM_LRCHPWRTH5               */
#define _MODEM_LONGRANGE3_LRCHPWRTH5_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE3           */
#define MODEM_LONGRANGE3_LRCHPWRTH5_DEFAULT                  (_MODEM_LONGRANGE3_LRCHPWRTH5_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE3   */
#define _MODEM_LONGRANGE3_LRCHPWRTH6_SHIFT                   8                                            /**< Shift value for MODEM_LRCHPWRTH6            */
#define _MODEM_LONGRANGE3_LRCHPWRTH6_MASK                    0xFF00UL                                     /**< Bit mask for MODEM_LRCHPWRTH6               */
#define _MODEM_LONGRANGE3_LRCHPWRTH6_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE3           */
#define MODEM_LONGRANGE3_LRCHPWRTH6_DEFAULT                  (_MODEM_LONGRANGE3_LRCHPWRTH6_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE3   */
#define _MODEM_LONGRANGE3_LRCHPWRTH7_SHIFT                   16                                           /**< Shift value for MODEM_LRCHPWRTH7            */
#define _MODEM_LONGRANGE3_LRCHPWRTH7_MASK                    0xFF0000UL                                   /**< Bit mask for MODEM_LRCHPWRTH7               */
#define _MODEM_LONGRANGE3_LRCHPWRTH7_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE3           */
#define MODEM_LONGRANGE3_LRCHPWRTH7_DEFAULT                  (_MODEM_LONGRANGE3_LRCHPWRTH7_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_LONGRANGE3   */
#define _MODEM_LONGRANGE3_LRCHPWRTH8_SHIFT                   24                                           /**< Shift value for MODEM_LRCHPWRTH8            */
#define _MODEM_LONGRANGE3_LRCHPWRTH8_MASK                    0xFF000000UL                                 /**< Bit mask for MODEM_LRCHPWRTH8               */
#define _MODEM_LONGRANGE3_LRCHPWRTH8_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE3           */
#define MODEM_LONGRANGE3_LRCHPWRTH8_DEFAULT                  (_MODEM_LONGRANGE3_LRCHPWRTH8_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_LONGRANGE3   */

/* Bit fields for MODEM LONGRANGE4 */
#define _MODEM_LONGRANGE4_RESETVALUE                         0x00000000UL                                 /**< Default value for MODEM_LONGRANGE4          */
#define _MODEM_LONGRANGE4_MASK                               0xFFFFFFFFUL                                 /**< Mask for MODEM_LONGRANGE4                   */
#define _MODEM_LONGRANGE4_LRCHPWRTH9_SHIFT                   0                                            /**< Shift value for MODEM_LRCHPWRTH9            */
#define _MODEM_LONGRANGE4_LRCHPWRTH9_MASK                    0xFFUL                                       /**< Bit mask for MODEM_LRCHPWRTH9               */
#define _MODEM_LONGRANGE4_LRCHPWRTH9_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE4           */
#define MODEM_LONGRANGE4_LRCHPWRTH9_DEFAULT                  (_MODEM_LONGRANGE4_LRCHPWRTH9_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE4   */
#define _MODEM_LONGRANGE4_LRCHPWRTH10_SHIFT                  8                                            /**< Shift value for MODEM_LRCHPWRTH10           */
#define _MODEM_LONGRANGE4_LRCHPWRTH10_MASK                   0xFF00UL                                     /**< Bit mask for MODEM_LRCHPWRTH10              */
#define _MODEM_LONGRANGE4_LRCHPWRTH10_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE4           */
#define MODEM_LONGRANGE4_LRCHPWRTH10_DEFAULT                 (_MODEM_LONGRANGE4_LRCHPWRTH10_DEFAULT << 8) /**< Shifted mode DEFAULT for MODEM_LONGRANGE4   */
#define _MODEM_LONGRANGE4_LRCHPWRSH1_SHIFT                   16                                           /**< Shift value for MODEM_LRCHPWRSH1            */
#define _MODEM_LONGRANGE4_LRCHPWRSH1_MASK                    0xF0000UL                                    /**< Bit mask for MODEM_LRCHPWRSH1               */
#define _MODEM_LONGRANGE4_LRCHPWRSH1_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE4           */
#define MODEM_LONGRANGE4_LRCHPWRSH1_DEFAULT                  (_MODEM_LONGRANGE4_LRCHPWRSH1_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_LONGRANGE4   */
#define _MODEM_LONGRANGE4_LRCHPWRSH2_SHIFT                   20                                           /**< Shift value for MODEM_LRCHPWRSH2            */
#define _MODEM_LONGRANGE4_LRCHPWRSH2_MASK                    0xF00000UL                                   /**< Bit mask for MODEM_LRCHPWRSH2               */
#define _MODEM_LONGRANGE4_LRCHPWRSH2_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE4           */
#define MODEM_LONGRANGE4_LRCHPWRSH2_DEFAULT                  (_MODEM_LONGRANGE4_LRCHPWRSH2_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_LONGRANGE4   */
#define _MODEM_LONGRANGE4_LRCHPWRSH3_SHIFT                   24                                           /**< Shift value for MODEM_LRCHPWRSH3            */
#define _MODEM_LONGRANGE4_LRCHPWRSH3_MASK                    0xF000000UL                                  /**< Bit mask for MODEM_LRCHPWRSH3               */
#define _MODEM_LONGRANGE4_LRCHPWRSH3_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE4           */
#define MODEM_LONGRANGE4_LRCHPWRSH3_DEFAULT                  (_MODEM_LONGRANGE4_LRCHPWRSH3_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_LONGRANGE4   */
#define _MODEM_LONGRANGE4_LRCHPWRSH4_SHIFT                   28                                           /**< Shift value for MODEM_LRCHPWRSH4            */
#define _MODEM_LONGRANGE4_LRCHPWRSH4_MASK                    0xF0000000UL                                 /**< Bit mask for MODEM_LRCHPWRSH4               */
#define _MODEM_LONGRANGE4_LRCHPWRSH4_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_LONGRANGE4           */
#define MODEM_LONGRANGE4_LRCHPWRSH4_DEFAULT                  (_MODEM_LONGRANGE4_LRCHPWRSH4_DEFAULT << 28) /**< Shifted mode DEFAULT for MODEM_LONGRANGE4   */

/* Bit fields for MODEM LONGRANGE5 */
#define _MODEM_LONGRANGE5_RESETVALUE                         0x00000000UL                                  /**< Default value for MODEM_LONGRANGE5          */
#define _MODEM_LONGRANGE5_MASK                               0x0FFFFFFFUL                                  /**< Mask for MODEM_LONGRANGE5                   */
#define _MODEM_LONGRANGE5_LRCHPWRSH5_SHIFT                   0                                             /**< Shift value for MODEM_LRCHPWRSH5            */
#define _MODEM_LONGRANGE5_LRCHPWRSH5_MASK                    0xFUL                                         /**< Bit mask for MODEM_LRCHPWRSH5               */
#define _MODEM_LONGRANGE5_LRCHPWRSH5_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH5_DEFAULT                  (_MODEM_LONGRANGE5_LRCHPWRSH5_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */
#define _MODEM_LONGRANGE5_LRCHPWRSH6_SHIFT                   4                                             /**< Shift value for MODEM_LRCHPWRSH6            */
#define _MODEM_LONGRANGE5_LRCHPWRSH6_MASK                    0xF0UL                                        /**< Bit mask for MODEM_LRCHPWRSH6               */
#define _MODEM_LONGRANGE5_LRCHPWRSH6_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH6_DEFAULT                  (_MODEM_LONGRANGE5_LRCHPWRSH6_DEFAULT << 4)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */
#define _MODEM_LONGRANGE5_LRCHPWRSH7_SHIFT                   8                                             /**< Shift value for MODEM_LRCHPWRSH7            */
#define _MODEM_LONGRANGE5_LRCHPWRSH7_MASK                    0xF00UL                                       /**< Bit mask for MODEM_LRCHPWRSH7               */
#define _MODEM_LONGRANGE5_LRCHPWRSH7_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH7_DEFAULT                  (_MODEM_LONGRANGE5_LRCHPWRSH7_DEFAULT << 8)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */
#define _MODEM_LONGRANGE5_LRCHPWRSH8_SHIFT                   12                                            /**< Shift value for MODEM_LRCHPWRSH8            */
#define _MODEM_LONGRANGE5_LRCHPWRSH8_MASK                    0xF000UL                                      /**< Bit mask for MODEM_LRCHPWRSH8               */
#define _MODEM_LONGRANGE5_LRCHPWRSH8_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH8_DEFAULT                  (_MODEM_LONGRANGE5_LRCHPWRSH8_DEFAULT << 12)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */
#define _MODEM_LONGRANGE5_LRCHPWRSH9_SHIFT                   16                                            /**< Shift value for MODEM_LRCHPWRSH9            */
#define _MODEM_LONGRANGE5_LRCHPWRSH9_MASK                    0xF0000UL                                     /**< Bit mask for MODEM_LRCHPWRSH9               */
#define _MODEM_LONGRANGE5_LRCHPWRSH9_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH9_DEFAULT                  (_MODEM_LONGRANGE5_LRCHPWRSH9_DEFAULT << 16)  /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */
#define _MODEM_LONGRANGE5_LRCHPWRSH10_SHIFT                  20                                            /**< Shift value for MODEM_LRCHPWRSH10           */
#define _MODEM_LONGRANGE5_LRCHPWRSH10_MASK                   0xF00000UL                                    /**< Bit mask for MODEM_LRCHPWRSH10              */
#define _MODEM_LONGRANGE5_LRCHPWRSH10_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH10_DEFAULT                 (_MODEM_LONGRANGE5_LRCHPWRSH10_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */
#define _MODEM_LONGRANGE5_LRCHPWRSH11_SHIFT                  24                                            /**< Shift value for MODEM_LRCHPWRSH11           */
#define _MODEM_LONGRANGE5_LRCHPWRSH11_MASK                   0xF000000UL                                   /**< Bit mask for MODEM_LRCHPWRSH11              */
#define _MODEM_LONGRANGE5_LRCHPWRSH11_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for MODEM_LONGRANGE5           */
#define MODEM_LONGRANGE5_LRCHPWRSH11_DEFAULT                 (_MODEM_LONGRANGE5_LRCHPWRSH11_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_LONGRANGE5   */

/* Bit fields for MODEM LONGRANGE6 */
#define _MODEM_LONGRANGE6_RESETVALUE                         0x00000000UL                                    /**< Default value for MODEM_LONGRANGE6          */
#define _MODEM_LONGRANGE6_MASK                               0xFFF7FFFFUL                                    /**< Mask for MODEM_LONGRANGE6                   */
#define _MODEM_LONGRANGE6_LRCHPWRSPIKETH_SHIFT               0                                               /**< Shift value for MODEM_LRCHPWRSPIKETH        */
#define _MODEM_LONGRANGE6_LRCHPWRSPIKETH_MASK                0xFFUL                                          /**< Bit mask for MODEM_LRCHPWRSPIKETH           */
#define _MODEM_LONGRANGE6_LRCHPWRSPIKETH_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE6           */
#define MODEM_LONGRANGE6_LRCHPWRSPIKETH_DEFAULT              (_MODEM_LONGRANGE6_LRCHPWRSPIKETH_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_LONGRANGE6   */
#define _MODEM_LONGRANGE6_LRSPIKETHD_SHIFT                   8                                               /**< Shift value for MODEM_LRSPIKETHD            */
#define _MODEM_LONGRANGE6_LRSPIKETHD_MASK                    0x7FF00UL                                       /**< Bit mask for MODEM_LRSPIKETHD               */
#define _MODEM_LONGRANGE6_LRSPIKETHD_DEFAULT                 0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE6           */
#define MODEM_LONGRANGE6_LRSPIKETHD_DEFAULT                  (_MODEM_LONGRANGE6_LRSPIKETHD_DEFAULT << 8)     /**< Shifted mode DEFAULT for MODEM_LONGRANGE6   */
#define _MODEM_LONGRANGE6_LRCHPWRTH11_SHIFT                  20                                              /**< Shift value for MODEM_LRCHPWRTH11           */
#define _MODEM_LONGRANGE6_LRCHPWRTH11_MASK                   0xFF00000UL                                     /**< Bit mask for MODEM_LRCHPWRTH11              */
#define _MODEM_LONGRANGE6_LRCHPWRTH11_DEFAULT                0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE6           */
#define MODEM_LONGRANGE6_LRCHPWRTH11_DEFAULT                 (_MODEM_LONGRANGE6_LRCHPWRTH11_DEFAULT << 20)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE6   */
#define _MODEM_LONGRANGE6_LRCHPWRSH12_SHIFT                  28                                              /**< Shift value for MODEM_LRCHPWRSH12           */
#define _MODEM_LONGRANGE6_LRCHPWRSH12_MASK                   0xF0000000UL                                    /**< Bit mask for MODEM_LRCHPWRSH12              */
#define _MODEM_LONGRANGE6_LRCHPWRSH12_DEFAULT                0x00000000UL                                    /**< Mode DEFAULT for MODEM_LONGRANGE6           */
#define MODEM_LONGRANGE6_LRCHPWRSH12_DEFAULT                 (_MODEM_LONGRANGE6_LRCHPWRSH12_DEFAULT << 28)   /**< Shifted mode DEFAULT for MODEM_LONGRANGE6   */

/* Bit fields for MODEM LRFRC */
#define _MODEM_LRFRC_RESETVALUE                              0x00000001UL                              /**< Default value for MODEM_LRFRC               */
#define _MODEM_LRFRC_MASK                                    0x000000FFUL                              /**< Mask for MODEM_LRFRC                        */
#define _MODEM_LRFRC_CI500_SHIFT                             0                                         /**< Shift value for MODEM_CI500                 */
#define _MODEM_LRFRC_CI500_MASK                              0x3UL                                     /**< Bit mask for MODEM_CI500                    */
#define _MODEM_LRFRC_CI500_DEFAULT                           0x00000001UL                              /**< Mode DEFAULT for MODEM_LRFRC                */
#define MODEM_LRFRC_CI500_DEFAULT                            (_MODEM_LRFRC_CI500_DEFAULT << 0)         /**< Shifted mode DEFAULT for MODEM_LRFRC        */
#define _MODEM_LRFRC_FRCACKTIMETHD_SHIFT                     2                                         /**< Shift value for MODEM_FRCACKTIMETHD         */
#define _MODEM_LRFRC_FRCACKTIMETHD_MASK                      0xFCUL                                    /**< Bit mask for MODEM_FRCACKTIMETHD            */
#define _MODEM_LRFRC_FRCACKTIMETHD_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for MODEM_LRFRC                */
#define MODEM_LRFRC_FRCACKTIMETHD_DEFAULT                    (_MODEM_LRFRC_FRCACKTIMETHD_DEFAULT << 2) /**< Shifted mode DEFAULT for MODEM_LRFRC        */

/* Bit fields for MODEM COH0 */
#define _MODEM_COH0_RESETVALUE                               0x00000000UL                                      /**< Default value for MODEM_COH0                */
#define _MODEM_COH0_MASK                                     0xFFFFFFE7UL                                      /**< Mask for MODEM_COH0                         */
#define MODEM_COH0_COHDYNAMICBBSSEN                          (0x1UL << 0)                                      /**< Dynamic BBSS enable bit                     */
#define _MODEM_COH0_COHDYNAMICBBSSEN_SHIFT                   0                                                 /**< Shift value for MODEM_COHDYNAMICBBSSEN      */
#define _MODEM_COH0_COHDYNAMICBBSSEN_MASK                    0x1UL                                             /**< Bit mask for MODEM_COHDYNAMICBBSSEN         */
#define _MODEM_COH0_COHDYNAMICBBSSEN_DEFAULT                 0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define MODEM_COH0_COHDYNAMICBBSSEN_DEFAULT                  (_MODEM_COH0_COHDYNAMICBBSSEN_DEFAULT << 0)       /**< Shifted mode DEFAULT for MODEM_COH0         */
#define MODEM_COH0_COHDYNAMICSYNCTHRESH                      (0x1UL << 1)                                      /**< Dynamic syncword threshold enable bit       */
#define _MODEM_COH0_COHDYNAMICSYNCTHRESH_SHIFT               1                                                 /**< Shift value for MODEM_COHDYNAMICSYNCTHRESH  */
#define _MODEM_COH0_COHDYNAMICSYNCTHRESH_MASK                0x2UL                                             /**< Bit mask for MODEM_COHDYNAMICSYNCTHRESH     */
#define _MODEM_COH0_COHDYNAMICSYNCTHRESH_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define MODEM_COH0_COHDYNAMICSYNCTHRESH_DEFAULT              (_MODEM_COH0_COHDYNAMICSYNCTHRESH_DEFAULT << 1)   /**< Shifted mode DEFAULT for MODEM_COH0         */
#define MODEM_COH0_COHDYNAMICPRETHRESH                       (0x1UL << 2)                                      /**< Dynamic preamble threshold enable bit       */
#define _MODEM_COH0_COHDYNAMICPRETHRESH_SHIFT                2                                                 /**< Shift value for MODEM_COHDYNAMICPRETHRESH   */
#define _MODEM_COH0_COHDYNAMICPRETHRESH_MASK                 0x4UL                                             /**< Bit mask for MODEM_COHDYNAMICPRETHRESH      */
#define _MODEM_COH0_COHDYNAMICPRETHRESH_DEFAULT              0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define MODEM_COH0_COHDYNAMICPRETHRESH_DEFAULT               (_MODEM_COH0_COHDYNAMICPRETHRESH_DEFAULT << 2)    /**< Shifted mode DEFAULT for MODEM_COH0         */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_SHIFT             5                                                 /**< Shift value for MODEM_COHDYNAMICPRETHRESHSEL*/
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_MASK              0xE0UL                                            /**< Bit mask for MODEM_COHDYNAMICPRETHRESHSEL   */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL0              0x00000000UL                                      /**< Mode SEL0 for MODEM_COH0                    */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL1              0x00000001UL                                      /**< Mode SEL1 for MODEM_COH0                    */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL2              0x00000002UL                                      /**< Mode SEL2 for MODEM_COH0                    */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL3              0x00000003UL                                      /**< Mode SEL3 for MODEM_COH0                    */
#define _MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL4              0x00000004UL                                      /**< Mode SEL4 for MODEM_COH0                    */
#define MODEM_COH0_COHDYNAMICPRETHRESHSEL_DEFAULT            (_MODEM_COH0_COHDYNAMICPRETHRESHSEL_DEFAULT << 5) /**< Shifted mode DEFAULT for MODEM_COH0         */
#define MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL0               (_MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL0 << 5)    /**< Shifted mode SEL0 for MODEM_COH0            */
#define MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL1               (_MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL1 << 5)    /**< Shifted mode SEL1 for MODEM_COH0            */
#define MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL2               (_MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL2 << 5)    /**< Shifted mode SEL2 for MODEM_COH0            */
#define MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL3               (_MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL3 << 5)    /**< Shifted mode SEL3 for MODEM_COH0            */
#define MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL4               (_MODEM_COH0_COHDYNAMICPRETHRESHSEL_SEL4 << 5)    /**< Shifted mode SEL4 for MODEM_COH0            */
#define _MODEM_COH0_COHCHPWRTH0_SHIFT                        8                                                 /**< Shift value for MODEM_COHCHPWRTH0           */
#define _MODEM_COH0_COHCHPWRTH0_MASK                         0xFF00UL                                          /**< Bit mask for MODEM_COHCHPWRTH0              */
#define _MODEM_COH0_COHCHPWRTH0_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define MODEM_COH0_COHCHPWRTH0_DEFAULT                       (_MODEM_COH0_COHCHPWRTH0_DEFAULT << 8)            /**< Shifted mode DEFAULT for MODEM_COH0         */
#define _MODEM_COH0_COHCHPWRTH1_SHIFT                        16                                                /**< Shift value for MODEM_COHCHPWRTH1           */
#define _MODEM_COH0_COHCHPWRTH1_MASK                         0xFF0000UL                                        /**< Bit mask for MODEM_COHCHPWRTH1              */
#define _MODEM_COH0_COHCHPWRTH1_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define MODEM_COH0_COHCHPWRTH1_DEFAULT                       (_MODEM_COH0_COHCHPWRTH1_DEFAULT << 16)           /**< Shifted mode DEFAULT for MODEM_COH0         */
#define _MODEM_COH0_COHCHPWRTH2_SHIFT                        24                                                /**< Shift value for MODEM_COHCHPWRTH2           */
#define _MODEM_COH0_COHCHPWRTH2_MASK                         0xFF000000UL                                      /**< Bit mask for MODEM_COHCHPWRTH2              */
#define _MODEM_COH0_COHCHPWRTH2_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for MODEM_COH0                 */
#define MODEM_COH0_COHCHPWRTH2_DEFAULT                       (_MODEM_COH0_COHCHPWRTH2_DEFAULT << 24)           /**< Shifted mode DEFAULT for MODEM_COH0         */

/* Bit fields for MODEM COH1 */
#define _MODEM_COH1_RESETVALUE                               0x00000000UL                            /**< Default value for MODEM_COH1                */
#define _MODEM_COH1_MASK                                     0xFFFFFFFFUL                            /**< Mask for MODEM_COH1                         */
#define _MODEM_COH1_SYNCTHRESH0_SHIFT                        0                                       /**< Shift value for MODEM_SYNCTHRESH0           */
#define _MODEM_COH1_SYNCTHRESH0_MASK                         0xFFUL                                  /**< Bit mask for MODEM_SYNCTHRESH0              */
#define _MODEM_COH1_SYNCTHRESH0_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_COH1                 */
#define MODEM_COH1_SYNCTHRESH0_DEFAULT                       (_MODEM_COH1_SYNCTHRESH0_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_COH1         */
#define _MODEM_COH1_SYNCTHRESH1_SHIFT                        8                                       /**< Shift value for MODEM_SYNCTHRESH1           */
#define _MODEM_COH1_SYNCTHRESH1_MASK                         0xFF00UL                                /**< Bit mask for MODEM_SYNCTHRESH1              */
#define _MODEM_COH1_SYNCTHRESH1_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_COH1                 */
#define MODEM_COH1_SYNCTHRESH1_DEFAULT                       (_MODEM_COH1_SYNCTHRESH1_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_COH1         */
#define _MODEM_COH1_SYNCTHRESH2_SHIFT                        16                                      /**< Shift value for MODEM_SYNCTHRESH2           */
#define _MODEM_COH1_SYNCTHRESH2_MASK                         0xFF0000UL                              /**< Bit mask for MODEM_SYNCTHRESH2              */
#define _MODEM_COH1_SYNCTHRESH2_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_COH1                 */
#define MODEM_COH1_SYNCTHRESH2_DEFAULT                       (_MODEM_COH1_SYNCTHRESH2_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_COH1         */
#define _MODEM_COH1_SYNCTHRESH3_SHIFT                        24                                      /**< Shift value for MODEM_SYNCTHRESH3           */
#define _MODEM_COH1_SYNCTHRESH3_MASK                         0xFF000000UL                            /**< Bit mask for MODEM_SYNCTHRESH3              */
#define _MODEM_COH1_SYNCTHRESH3_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_COH1                 */
#define MODEM_COH1_SYNCTHRESH3_DEFAULT                       (_MODEM_COH1_SYNCTHRESH3_DEFAULT << 24) /**< Shifted mode DEFAULT for MODEM_COH1         */

/* Bit fields for MODEM COH2 */
#define _MODEM_COH2_RESETVALUE                               0x00000000UL                                 /**< Default value for MODEM_COH2                */
#define _MODEM_COH2_MASK                                     0xFFFFFFFFUL                                 /**< Mask for MODEM_COH2                         */
#define _MODEM_COH2_SYNCTHRESHDELTA0_SHIFT                   0                                            /**< Shift value for MODEM_SYNCTHRESHDELTA0      */
#define _MODEM_COH2_SYNCTHRESHDELTA0_MASK                    0xFUL                                        /**< Bit mask for MODEM_SYNCTHRESHDELTA0         */
#define _MODEM_COH2_SYNCTHRESHDELTA0_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_COH2                 */
#define MODEM_COH2_SYNCTHRESHDELTA0_DEFAULT                  (_MODEM_COH2_SYNCTHRESHDELTA0_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_COH2         */
#define _MODEM_COH2_SYNCTHRESHDELTA1_SHIFT                   4                                            /**< Shift value for MODEM_SYNCTHRESHDELTA1      */
#define _MODEM_COH2_SYNCTHRESHDELTA1_MASK                    0xF0UL                                       /**< Bit mask for MODEM_SYNCTHRESHDELTA1         */
#define _MODEM_COH2_SYNCTHRESHDELTA1_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_COH2                 */
#define MODEM_COH2_SYNCTHRESHDELTA1_DEFAULT                  (_MODEM_COH2_SYNCTHRESHDELTA1_DEFAULT << 4)  /**< Shifted mode DEFAULT for MODEM_COH2         */
#define _MODEM_COH2_SYNCTHRESHDELTA2_SHIFT                   8                                            /**< Shift value for MODEM_SYNCTHRESHDELTA2      */
#define _MODEM_COH2_SYNCTHRESHDELTA2_MASK                    0xF00UL                                      /**< Bit mask for MODEM_SYNCTHRESHDELTA2         */
#define _MODEM_COH2_SYNCTHRESHDELTA2_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_COH2                 */
#define MODEM_COH2_SYNCTHRESHDELTA2_DEFAULT                  (_MODEM_COH2_SYNCTHRESHDELTA2_DEFAULT << 8)  /**< Shifted mode DEFAULT for MODEM_COH2         */
#define _MODEM_COH2_SYNCTHRESHDELTA3_SHIFT                   12                                           /**< Shift value for MODEM_SYNCTHRESHDELTA3      */
#define _MODEM_COH2_SYNCTHRESHDELTA3_MASK                    0xF000UL                                     /**< Bit mask for MODEM_SYNCTHRESHDELTA3         */
#define _MODEM_COH2_SYNCTHRESHDELTA3_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for MODEM_COH2                 */
#define MODEM_COH2_SYNCTHRESHDELTA3_DEFAULT                  (_MODEM_COH2_SYNCTHRESHDELTA3_DEFAULT << 12) /**< Shifted mode DEFAULT for MODEM_COH2         */
#define _MODEM_COH2_DSAPEAKCHPWRTH_SHIFT                     16                                           /**< Shift value for MODEM_DSAPEAKCHPWRTH        */
#define _MODEM_COH2_DSAPEAKCHPWRTH_MASK                      0xFF0000UL                                   /**< Bit mask for MODEM_DSAPEAKCHPWRTH           */
#define _MODEM_COH2_DSAPEAKCHPWRTH_DEFAULT                   0x00000000UL                                 /**< Mode DEFAULT for MODEM_COH2                 */
#define MODEM_COH2_DSAPEAKCHPWRTH_DEFAULT                    (_MODEM_COH2_DSAPEAKCHPWRTH_DEFAULT << 16)   /**< Shifted mode DEFAULT for MODEM_COH2         */
#define _MODEM_COH2_FIXEDCDTHFORIIR_SHIFT                    24                                           /**< Shift value for MODEM_FIXEDCDTHFORIIR       */
#define _MODEM_COH2_FIXEDCDTHFORIIR_MASK                     0xFF000000UL                                 /**< Bit mask for MODEM_FIXEDCDTHFORIIR          */
#define _MODEM_COH2_FIXEDCDTHFORIIR_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for MODEM_COH2                 */
#define MODEM_COH2_FIXEDCDTHFORIIR_DEFAULT                   (_MODEM_COH2_FIXEDCDTHFORIIR_DEFAULT << 24)  /**< Shifted mode DEFAULT for MODEM_COH2         */

/* Bit fields for MODEM COH3 */
#define _MODEM_COH3_RESETVALUE                               0x00000000UL                                       /**< Default value for MODEM_COH3                */
#define _MODEM_COH3_MASK                                     0x1FFFFFFFUL                                       /**< Mask for MODEM_COH3                         */
#define MODEM_COH3_COHDSAEN                                  (0x1UL << 0)                                       /**< DSA enable bit                              */
#define _MODEM_COH3_COHDSAEN_SHIFT                           0                                                  /**< Shift value for MODEM_COHDSAEN              */
#define _MODEM_COH3_COHDSAEN_MASK                            0x1UL                                              /**< Bit mask for MODEM_COHDSAEN                 */
#define _MODEM_COH3_COHDSAEN_DEFAULT                         0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_COHDSAEN_DEFAULT                          (_MODEM_COH3_COHDSAEN_DEFAULT << 0)                /**< Shifted mode DEFAULT for MODEM_COH3         */
#define _MODEM_COH3_COHDSAADDWNDSIZE_SHIFT                   1                                                  /**< Shift value for MODEM_COHDSAADDWNDSIZE      */
#define _MODEM_COH3_COHDSAADDWNDSIZE_MASK                    0x7FEUL                                            /**< Bit mask for MODEM_COHDSAADDWNDSIZE         */
#define _MODEM_COH3_COHDSAADDWNDSIZE_DEFAULT                 0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_COHDSAADDWNDSIZE_DEFAULT                  (_MODEM_COH3_COHDSAADDWNDSIZE_DEFAULT << 1)        /**< Shifted mode DEFAULT for MODEM_COH3         */
#define _MODEM_COH3_CDSS_SHIFT                               11                                                 /**< Shift value for MODEM_CDSS                  */
#define _MODEM_COH3_CDSS_MASK                                0x3800UL                                           /**< Bit mask for MODEM_CDSS                     */
#define _MODEM_COH3_CDSS_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_CDSS_DEFAULT                              (_MODEM_COH3_CDSS_DEFAULT << 11)                   /**< Shifted mode DEFAULT for MODEM_COH3         */
#define MODEM_COH3_DSAPEAKCHKEN                              (0x1UL << 14)                                      /**< DSA Peak Checking Enable                    */
#define _MODEM_COH3_DSAPEAKCHKEN_SHIFT                       14                                                 /**< Shift value for MODEM_DSAPEAKCHKEN          */
#define _MODEM_COH3_DSAPEAKCHKEN_MASK                        0x4000UL                                           /**< Bit mask for MODEM_DSAPEAKCHKEN             */
#define _MODEM_COH3_DSAPEAKCHKEN_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_DSAPEAKCHKEN_DEFAULT                      (_MODEM_COH3_DSAPEAKCHKEN_DEFAULT << 14)           /**< Shifted mode DEFAULT for MODEM_COH3         */
#define _MODEM_COH3_DSAPEAKINDLEN_SHIFT                      15                                                 /**< Shift value for MODEM_DSAPEAKINDLEN         */
#define _MODEM_COH3_DSAPEAKINDLEN_MASK                       0x38000UL                                          /**< Bit mask for MODEM_DSAPEAKINDLEN            */
#define _MODEM_COH3_DSAPEAKINDLEN_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_DSAPEAKINDLEN_DEFAULT                     (_MODEM_COH3_DSAPEAKINDLEN_DEFAULT << 15)          /**< Shifted mode DEFAULT for MODEM_COH3         */
#define MODEM_COH3_DSAPEAKCHPWREN                            (0x1UL << 18)                                      /**< DSA Peak Check channel power enable         */
#define _MODEM_COH3_DSAPEAKCHPWREN_SHIFT                     18                                                 /**< Shift value for MODEM_DSAPEAKCHPWREN        */
#define _MODEM_COH3_DSAPEAKCHPWREN_MASK                      0x40000UL                                          /**< Bit mask for MODEM_DSAPEAKCHPWREN           */
#define _MODEM_COH3_DSAPEAKCHPWREN_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_DSAPEAKCHPWREN_DEFAULT                    (_MODEM_COH3_DSAPEAKCHPWREN_DEFAULT << 18)         /**< Shifted mode DEFAULT for MODEM_COH3         */
#define MODEM_COH3_LOGICBASEDCOHDEMODGATE                    (0x1UL << 19)                                      /**< Logic Based clock gate                      */
#define _MODEM_COH3_LOGICBASEDCOHDEMODGATE_SHIFT             19                                                 /**< Shift value for MODEM_LOGICBASEDCOHDEMODGATE*/
#define _MODEM_COH3_LOGICBASEDCOHDEMODGATE_MASK              0x80000UL                                          /**< Bit mask for MODEM_LOGICBASEDCOHDEMODGATE   */
#define _MODEM_COH3_LOGICBASEDCOHDEMODGATE_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_LOGICBASEDCOHDEMODGATE_DEFAULT            (_MODEM_COH3_LOGICBASEDCOHDEMODGATE_DEFAULT << 19) /**< Shifted mode DEFAULT for MODEM_COH3         */
#define _MODEM_COH3_DYNIIRCOEFOPTION_SHIFT                   20                                                 /**< Shift value for MODEM_DYNIIRCOEFOPTION      */
#define _MODEM_COH3_DYNIIRCOEFOPTION_MASK                    0x300000UL                                         /**< Bit mask for MODEM_DYNIIRCOEFOPTION         */
#define _MODEM_COH3_DYNIIRCOEFOPTION_DEFAULT                 0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_DYNIIRCOEFOPTION_DEFAULT                  (_MODEM_COH3_DYNIIRCOEFOPTION_DEFAULT << 20)       /**< Shifted mode DEFAULT for MODEM_COH3         */
#define MODEM_COH3_ONEPEAKQUALEN                             (0x1UL << 22)                                      /**< One Peak                                    */
#define _MODEM_COH3_ONEPEAKQUALEN_SHIFT                      22                                                 /**< Shift value for MODEM_ONEPEAKQUALEN         */
#define _MODEM_COH3_ONEPEAKQUALEN_MASK                       0x400000UL                                         /**< Bit mask for MODEM_ONEPEAKQUALEN            */
#define _MODEM_COH3_ONEPEAKQUALEN_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_ONEPEAKQUALEN_DEFAULT                     (_MODEM_COH3_ONEPEAKQUALEN_DEFAULT << 22)          /**< Shifted mode DEFAULT for MODEM_COH3         */
#define _MODEM_COH3_PEAKCHKTIMOUT_SHIFT                      23                                                 /**< Shift value for MODEM_PEAKCHKTIMOUT         */
#define _MODEM_COH3_PEAKCHKTIMOUT_MASK                       0xF800000UL                                        /**< Bit mask for MODEM_PEAKCHKTIMOUT            */
#define _MODEM_COH3_PEAKCHKTIMOUT_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_PEAKCHKTIMOUT_DEFAULT                     (_MODEM_COH3_PEAKCHKTIMOUT_DEFAULT << 23)          /**< Shifted mode DEFAULT for MODEM_COH3         */
#define MODEM_COH3_COHDSADETDIS                              (0x1UL << 28)                                      /**< DSA Detection Disable                       */
#define _MODEM_COH3_COHDSADETDIS_SHIFT                       28                                                 /**< Shift value for MODEM_COHDSADETDIS          */
#define _MODEM_COH3_COHDSADETDIS_MASK                        0x10000000UL                                       /**< Bit mask for MODEM_COHDSADETDIS             */
#define _MODEM_COH3_COHDSADETDIS_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for MODEM_COH3                 */
#define MODEM_COH3_COHDSADETDIS_DEFAULT                      (_MODEM_COH3_COHDSADETDIS_DEFAULT << 28)           /**< Shifted mode DEFAULT for MODEM_COH3         */

/* Bit fields for MODEM DSATHD3 */
#define _MODEM_DSATHD3_RESETVALUE                            0x07830464UL                                /**< Default value for MODEM_DSATHD3             */
#define _MODEM_DSATHD3_MASK                                  0xFFFFFFFFUL                                /**< Mask for MODEM_DSATHD3                      */
#define _MODEM_DSATHD3_SPIKETHDLO_SHIFT                      0                                           /**< Shift value for MODEM_SPIKETHDLO            */
#define _MODEM_DSATHD3_SPIKETHDLO_MASK                       0xFFUL                                      /**< Bit mask for MODEM_SPIKETHDLO               */
#define _MODEM_DSATHD3_SPIKETHDLO_DEFAULT                    0x00000064UL                                /**< Mode DEFAULT for MODEM_DSATHD3              */
#define MODEM_DSATHD3_SPIKETHDLO_DEFAULT                     (_MODEM_DSATHD3_SPIKETHDLO_DEFAULT << 0)    /**< Shifted mode DEFAULT for MODEM_DSATHD3      */
#define _MODEM_DSATHD3_UNMODTHDLO_SHIFT                      8                                           /**< Shift value for MODEM_UNMODTHDLO            */
#define _MODEM_DSATHD3_UNMODTHDLO_MASK                       0x3F00UL                                    /**< Bit mask for MODEM_UNMODTHDLO               */
#define _MODEM_DSATHD3_UNMODTHDLO_DEFAULT                    0x00000004UL                                /**< Mode DEFAULT for MODEM_DSATHD3              */
#define MODEM_DSATHD3_UNMODTHDLO_DEFAULT                     (_MODEM_DSATHD3_UNMODTHDLO_DEFAULT << 8)    /**< Shifted mode DEFAULT for MODEM_DSATHD3      */
#define _MODEM_DSATHD3_FDEVMINTHDLO_SHIFT                    14                                          /**< Shift value for MODEM_FDEVMINTHDLO          */
#define _MODEM_DSATHD3_FDEVMINTHDLO_MASK                     0xFC000UL                                   /**< Bit mask for MODEM_FDEVMINTHDLO             */
#define _MODEM_DSATHD3_FDEVMINTHDLO_DEFAULT                  0x0000000CUL                                /**< Mode DEFAULT for MODEM_DSATHD3              */
#define MODEM_DSATHD3_FDEVMINTHDLO_DEFAULT                   (_MODEM_DSATHD3_FDEVMINTHDLO_DEFAULT << 14) /**< Shifted mode DEFAULT for MODEM_DSATHD3      */
#define _MODEM_DSATHD3_FDEVMAXTHDLO_SHIFT                    20                                          /**< Shift value for MODEM_FDEVMAXTHDLO          */
#define _MODEM_DSATHD3_FDEVMAXTHDLO_MASK                     0xFFF00000UL                                /**< Bit mask for MODEM_FDEVMAXTHDLO             */
#define _MODEM_DSATHD3_FDEVMAXTHDLO_DEFAULT                  0x00000078UL                                /**< Mode DEFAULT for MODEM_DSATHD3              */
#define MODEM_DSATHD3_FDEVMAXTHDLO_DEFAULT                   (_MODEM_DSATHD3_FDEVMAXTHDLO_DEFAULT << 20) /**< Shifted mode DEFAULT for MODEM_DSATHD3      */

/* Bit fields for MODEM DSATHD4 */
#define _MODEM_DSATHD4_RESETVALUE                            0x00821388UL                                  /**< Default value for MODEM_DSATHD4             */
#define _MODEM_DSATHD4_MASK                                  0x07FFFFFFUL                                  /**< Mask for MODEM_DSATHD4                      */
#define _MODEM_DSATHD4_POWABSTHDLO_SHIFT                     0                                             /**< Shift value for MODEM_POWABSTHDLO           */
#define _MODEM_DSATHD4_POWABSTHDLO_MASK                      0xFFFFUL                                      /**< Bit mask for MODEM_POWABSTHDLO              */
#define _MODEM_DSATHD4_POWABSTHDLO_DEFAULT                   0x00001388UL                                  /**< Mode DEFAULT for MODEM_DSATHD4              */
#define MODEM_DSATHD4_POWABSTHDLO_DEFAULT                    (_MODEM_DSATHD4_POWABSTHDLO_DEFAULT << 0)     /**< Shifted mode DEFAULT for MODEM_DSATHD4      */
#define _MODEM_DSATHD4_ARRTOLERTHD0LO_SHIFT                  16                                            /**< Shift value for MODEM_ARRTOLERTHD0LO        */
#define _MODEM_DSATHD4_ARRTOLERTHD0LO_MASK                   0x1F0000UL                                    /**< Bit mask for MODEM_ARRTOLERTHD0LO           */
#define _MODEM_DSATHD4_ARRTOLERTHD0LO_DEFAULT                0x00000002UL                                  /**< Mode DEFAULT for MODEM_DSATHD4              */
#define MODEM_DSATHD4_ARRTOLERTHD0LO_DEFAULT                 (_MODEM_DSATHD4_ARRTOLERTHD0LO_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_DSATHD4      */
#define _MODEM_DSATHD4_ARRTOLERTHD1LO_SHIFT                  21                                            /**< Shift value for MODEM_ARRTOLERTHD1LO        */
#define _MODEM_DSATHD4_ARRTOLERTHD1LO_MASK                   0x3E00000UL                                   /**< Bit mask for MODEM_ARRTOLERTHD1LO           */
#define _MODEM_DSATHD4_ARRTOLERTHD1LO_DEFAULT                0x00000004UL                                  /**< Mode DEFAULT for MODEM_DSATHD4              */
#define MODEM_DSATHD4_ARRTOLERTHD1LO_DEFAULT                 (_MODEM_DSATHD4_ARRTOLERTHD1LO_DEFAULT << 21) /**< Shifted mode DEFAULT for MODEM_DSATHD4      */
#define MODEM_DSATHD4_SWTHD                                  (0x1UL << 26)                                 /**< Enable switch threshold for low power       */
#define _MODEM_DSATHD4_SWTHD_SHIFT                           26                                            /**< Shift value for MODEM_SWTHD                 */
#define _MODEM_DSATHD4_SWTHD_MASK                            0x4000000UL                                   /**< Bit mask for MODEM_SWTHD                    */
#define _MODEM_DSATHD4_SWTHD_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for MODEM_DSATHD4              */
#define MODEM_DSATHD4_SWTHD_DEFAULT                          (_MODEM_DSATHD4_SWTHD_DEFAULT << 26)          /**< Shifted mode DEFAULT for MODEM_DSATHD4      */

/* Bit fields for MODEM VTBLETIMING */
#define _MODEM_VTBLETIMING_RESETVALUE                        0x00000000UL                                             /**< Default value for MODEM_VTBLETIMING         */
#define _MODEM_VTBLETIMING_MASK                              0x0000FFF3UL                                             /**< Mask for MODEM_VTBLETIMING                  */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_SHIFT              0                                                        /**< Shift value for MODEM_VTBLETIMINGSEL        */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_MASK               0x3UL                                                    /**< Bit mask for MODEM_VTBLETIMINGSEL           */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_DEFAULT            0x00000000UL                                             /**< Mode DEFAULT for MODEM_VTBLETIMING          */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_FRAMEDET_DELAY     0x00000000UL                                             /**< Mode FRAMEDET_DELAY for MODEM_VTBLETIMING   */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_END_FRAME_PULSE    0x00000001UL                                             /**< Mode END_FRAME_PULSE for MODEM_VTBLETIMING  */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_END_FRAME          0x00000002UL                                             /**< Mode END_FRAME for MODEM_VTBLETIMING        */
#define _MODEM_VTBLETIMING_VTBLETIMINGSEL_INV_END_FRAME      0x00000003UL                                             /**< Mode INV_END_FRAME for MODEM_VTBLETIMING    */
#define MODEM_VTBLETIMING_VTBLETIMINGSEL_DEFAULT             (_MODEM_VTBLETIMING_VTBLETIMINGSEL_DEFAULT << 0)         /**< Shifted mode DEFAULT for MODEM_VTBLETIMING  */
#define MODEM_VTBLETIMING_VTBLETIMINGSEL_FRAMEDET_DELAY      (_MODEM_VTBLETIMING_VTBLETIMINGSEL_FRAMEDET_DELAY << 0)  /**< Shifted mode FRAMEDET_DELAY for MODEM_VTBLETIMING*/
#define MODEM_VTBLETIMING_VTBLETIMINGSEL_END_FRAME_PULSE     (_MODEM_VTBLETIMING_VTBLETIMINGSEL_END_FRAME_PULSE << 0) /**< Shifted mode END_FRAME_PULSE for MODEM_VTBLETIMING*/
#define MODEM_VTBLETIMING_VTBLETIMINGSEL_END_FRAME           (_MODEM_VTBLETIMING_VTBLETIMINGSEL_END_FRAME << 0)       /**< Shifted mode END_FRAME for MODEM_VTBLETIMING*/
#define MODEM_VTBLETIMING_VTBLETIMINGSEL_INV_END_FRAME       (_MODEM_VTBLETIMING_VTBLETIMINGSEL_INV_END_FRAME << 0)   /**< Shifted mode INV_END_FRAME for MODEM_VTBLETIMING*/
#define _MODEM_VTBLETIMING_TIMINGDELAY_SHIFT                 4                                                        /**< Shift value for MODEM_TIMINGDELAY           */
#define _MODEM_VTBLETIMING_TIMINGDELAY_MASK                  0xFF0UL                                                  /**< Bit mask for MODEM_TIMINGDELAY              */
#define _MODEM_VTBLETIMING_TIMINGDELAY_DEFAULT               0x00000000UL                                             /**< Mode DEFAULT for MODEM_VTBLETIMING          */
#define MODEM_VTBLETIMING_TIMINGDELAY_DEFAULT                (_MODEM_VTBLETIMING_TIMINGDELAY_DEFAULT << 4)            /**< Shifted mode DEFAULT for MODEM_VTBLETIMING  */
#define _MODEM_VTBLETIMING_FLENOFF_SHIFT                     12                                                       /**< Shift value for MODEM_FLENOFF               */
#define _MODEM_VTBLETIMING_FLENOFF_MASK                      0xF000UL                                                 /**< Bit mask for MODEM_FLENOFF                  */
#define _MODEM_VTBLETIMING_FLENOFF_DEFAULT                   0x00000000UL                                             /**< Mode DEFAULT for MODEM_VTBLETIMING          */
#define MODEM_VTBLETIMING_FLENOFF_DEFAULT                    (_MODEM_VTBLETIMING_FLENOFF_DEFAULT << 12)               /**< Shifted mode DEFAULT for MODEM_VTBLETIMING  */

/* Bit fields for MODEM IF */
#define _MODEM_IF_RESETVALUE                                 0x00000000UL                           /**< Default value for MODEM_IF                  */
#define _MODEM_IF_MASK                                       0x0001FF07UL                           /**< Mask for MODEM_IF                           */
#define MODEM_IF_TXFRAMESENT                                 (0x1UL << 0)                           /**< Frame sent                                  */
#define _MODEM_IF_TXFRAMESENT_SHIFT                          0                                      /**< Shift value for MODEM_TXFRAMESENT           */
#define _MODEM_IF_TXFRAMESENT_MASK                           0x1UL                                  /**< Bit mask for MODEM_TXFRAMESENT              */
#define _MODEM_IF_TXFRAMESENT_DEFAULT                        0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_TXFRAMESENT_DEFAULT                         (_MODEM_IF_TXFRAMESENT_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_TXSYNCSENT                                  (0x1UL << 1)                           /**< Sync word sent                              */
#define _MODEM_IF_TXSYNCSENT_SHIFT                           1                                      /**< Shift value for MODEM_TXSYNCSENT            */
#define _MODEM_IF_TXSYNCSENT_MASK                            0x2UL                                  /**< Bit mask for MODEM_TXSYNCSENT               */
#define _MODEM_IF_TXSYNCSENT_DEFAULT                         0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_TXSYNCSENT_DEFAULT                          (_MODEM_IF_TXSYNCSENT_DEFAULT << 1)    /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_TXPRESENT                                   (0x1UL << 2)                           /**< Preamble sent                               */
#define _MODEM_IF_TXPRESENT_SHIFT                            2                                      /**< Shift value for MODEM_TXPRESENT             */
#define _MODEM_IF_TXPRESENT_MASK                             0x4UL                                  /**< Bit mask for MODEM_TXPRESENT                */
#define _MODEM_IF_TXPRESENT_DEFAULT                          0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_TXPRESENT_DEFAULT                           (_MODEM_IF_TXPRESENT_DEFAULT << 2)     /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXTIMDET                                    (0x1UL << 8)                           /**< Timing detected                             */
#define _MODEM_IF_RXTIMDET_SHIFT                             8                                      /**< Shift value for MODEM_RXTIMDET              */
#define _MODEM_IF_RXTIMDET_MASK                              0x100UL                                /**< Bit mask for MODEM_RXTIMDET                 */
#define _MODEM_IF_RXTIMDET_DEFAULT                           0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXTIMDET_DEFAULT                            (_MODEM_IF_RXTIMDET_DEFAULT << 8)      /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXPREDET                                    (0x1UL << 9)                           /**< Preamble detected                           */
#define _MODEM_IF_RXPREDET_SHIFT                             9                                      /**< Shift value for MODEM_RXPREDET              */
#define _MODEM_IF_RXPREDET_MASK                              0x200UL                                /**< Bit mask for MODEM_RXPREDET                 */
#define _MODEM_IF_RXPREDET_DEFAULT                           0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXPREDET_DEFAULT                            (_MODEM_IF_RXPREDET_DEFAULT << 9)      /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXFRAMEDET0                                 (0x1UL << 10)                          /**< Frame with sync-word 0 detected             */
#define _MODEM_IF_RXFRAMEDET0_SHIFT                          10                                     /**< Shift value for MODEM_RXFRAMEDET0           */
#define _MODEM_IF_RXFRAMEDET0_MASK                           0x400UL                                /**< Bit mask for MODEM_RXFRAMEDET0              */
#define _MODEM_IF_RXFRAMEDET0_DEFAULT                        0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXFRAMEDET0_DEFAULT                         (_MODEM_IF_RXFRAMEDET0_DEFAULT << 10)  /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXFRAMEDET1                                 (0x1UL << 11)                          /**< Frame with sync-word 1 detected             */
#define _MODEM_IF_RXFRAMEDET1_SHIFT                          11                                     /**< Shift value for MODEM_RXFRAMEDET1           */
#define _MODEM_IF_RXFRAMEDET1_MASK                           0x800UL                                /**< Bit mask for MODEM_RXFRAMEDET1              */
#define _MODEM_IF_RXFRAMEDET1_DEFAULT                        0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXFRAMEDET1_DEFAULT                         (_MODEM_IF_RXFRAMEDET1_DEFAULT << 11)  /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXTIMLOST                                   (0x1UL << 12)                          /**< Timing lost                                 */
#define _MODEM_IF_RXTIMLOST_SHIFT                            12                                     /**< Shift value for MODEM_RXTIMLOST             */
#define _MODEM_IF_RXTIMLOST_MASK                             0x1000UL                               /**< Bit mask for MODEM_RXTIMLOST                */
#define _MODEM_IF_RXTIMLOST_DEFAULT                          0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXTIMLOST_DEFAULT                           (_MODEM_IF_RXTIMLOST_DEFAULT << 12)    /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXPRELOST                                   (0x1UL << 13)                          /**< Preamble lost                               */
#define _MODEM_IF_RXPRELOST_SHIFT                            13                                     /**< Shift value for MODEM_RXPRELOST             */
#define _MODEM_IF_RXPRELOST_MASK                             0x2000UL                               /**< Bit mask for MODEM_RXPRELOST                */
#define _MODEM_IF_RXPRELOST_DEFAULT                          0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXPRELOST_DEFAULT                           (_MODEM_IF_RXPRELOST_DEFAULT << 13)    /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXFRAMEDETOF                                (0x1UL << 14)                          /**< Frame detection overflow                    */
#define _MODEM_IF_RXFRAMEDETOF_SHIFT                         14                                     /**< Shift value for MODEM_RXFRAMEDETOF          */
#define _MODEM_IF_RXFRAMEDETOF_MASK                          0x4000UL                               /**< Bit mask for MODEM_RXFRAMEDETOF             */
#define _MODEM_IF_RXFRAMEDETOF_DEFAULT                       0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXFRAMEDETOF_DEFAULT                        (_MODEM_IF_RXFRAMEDETOF_DEFAULT << 14) /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_RXTIMNF                                     (0x1UL << 15)                          /**< Timing not found                            */
#define _MODEM_IF_RXTIMNF_SHIFT                              15                                     /**< Shift value for MODEM_RXTIMNF               */
#define _MODEM_IF_RXTIMNF_MASK                               0x8000UL                               /**< Bit mask for MODEM_RXTIMNF                  */
#define _MODEM_IF_RXTIMNF_DEFAULT                            0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_RXTIMNF_DEFAULT                             (_MODEM_IF_RXTIMNF_DEFAULT << 15)      /**< Shifted mode DEFAULT for MODEM_IF           */
#define MODEM_IF_FRCTIMOUT                                   (0x1UL << 16)                          /**< DEMOD-FRC req/ack timeout                   */
#define _MODEM_IF_FRCTIMOUT_SHIFT                            16                                     /**< Shift value for MODEM_FRCTIMOUT             */
#define _MODEM_IF_FRCTIMOUT_MASK                             0x10000UL                              /**< Bit mask for MODEM_FRCTIMOUT                */
#define _MODEM_IF_FRCTIMOUT_DEFAULT                          0x00000000UL                           /**< Mode DEFAULT for MODEM_IF                   */
#define MODEM_IF_FRCTIMOUT_DEFAULT                           (_MODEM_IF_FRCTIMOUT_DEFAULT << 16)    /**< Shifted mode DEFAULT for MODEM_IF           */

/* Bit fields for MODEM IEN */
#define _MODEM_IEN_RESETVALUE                                0x00000000UL                            /**< Default value for MODEM_IEN                 */
#define _MODEM_IEN_MASK                                      0x0001FF07UL                            /**< Mask for MODEM_IEN                          */
#define MODEM_IEN_TXFRAMESENT                                (0x1UL << 0)                            /**< Frame sent                                  */
#define _MODEM_IEN_TXFRAMESENT_SHIFT                         0                                       /**< Shift value for MODEM_TXFRAMESENT           */
#define _MODEM_IEN_TXFRAMESENT_MASK                          0x1UL                                   /**< Bit mask for MODEM_TXFRAMESENT              */
#define _MODEM_IEN_TXFRAMESENT_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_TXFRAMESENT_DEFAULT                        (_MODEM_IEN_TXFRAMESENT_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_TXSYNCSENT                                 (0x1UL << 1)                            /**< Sync word sent                              */
#define _MODEM_IEN_TXSYNCSENT_SHIFT                          1                                       /**< Shift value for MODEM_TXSYNCSENT            */
#define _MODEM_IEN_TXSYNCSENT_MASK                           0x2UL                                   /**< Bit mask for MODEM_TXSYNCSENT               */
#define _MODEM_IEN_TXSYNCSENT_DEFAULT                        0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_TXSYNCSENT_DEFAULT                         (_MODEM_IEN_TXSYNCSENT_DEFAULT << 1)    /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_TXPRESENT                                  (0x1UL << 2)                            /**< Preamble sent                               */
#define _MODEM_IEN_TXPRESENT_SHIFT                           2                                       /**< Shift value for MODEM_TXPRESENT             */
#define _MODEM_IEN_TXPRESENT_MASK                            0x4UL                                   /**< Bit mask for MODEM_TXPRESENT                */
#define _MODEM_IEN_TXPRESENT_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_TXPRESENT_DEFAULT                          (_MODEM_IEN_TXPRESENT_DEFAULT << 2)     /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXTIMDET                                   (0x1UL << 8)                            /**< Timing detected                             */
#define _MODEM_IEN_RXTIMDET_SHIFT                            8                                       /**< Shift value for MODEM_RXTIMDET              */
#define _MODEM_IEN_RXTIMDET_MASK                             0x100UL                                 /**< Bit mask for MODEM_RXTIMDET                 */
#define _MODEM_IEN_RXTIMDET_DEFAULT                          0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXTIMDET_DEFAULT                           (_MODEM_IEN_RXTIMDET_DEFAULT << 8)      /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXPREDET                                   (0x1UL << 9)                            /**< Preamble detected                           */
#define _MODEM_IEN_RXPREDET_SHIFT                            9                                       /**< Shift value for MODEM_RXPREDET              */
#define _MODEM_IEN_RXPREDET_MASK                             0x200UL                                 /**< Bit mask for MODEM_RXPREDET                 */
#define _MODEM_IEN_RXPREDET_DEFAULT                          0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXPREDET_DEFAULT                           (_MODEM_IEN_RXPREDET_DEFAULT << 9)      /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXFRAMEDET0                                (0x1UL << 10)                           /**< Frame with sync-word 0 detected             */
#define _MODEM_IEN_RXFRAMEDET0_SHIFT                         10                                      /**< Shift value for MODEM_RXFRAMEDET0           */
#define _MODEM_IEN_RXFRAMEDET0_MASK                          0x400UL                                 /**< Bit mask for MODEM_RXFRAMEDET0              */
#define _MODEM_IEN_RXFRAMEDET0_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXFRAMEDET0_DEFAULT                        (_MODEM_IEN_RXFRAMEDET0_DEFAULT << 10)  /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXFRAMEDET1                                (0x1UL << 11)                           /**< Frame with sync-word 1 detected             */
#define _MODEM_IEN_RXFRAMEDET1_SHIFT                         11                                      /**< Shift value for MODEM_RXFRAMEDET1           */
#define _MODEM_IEN_RXFRAMEDET1_MASK                          0x800UL                                 /**< Bit mask for MODEM_RXFRAMEDET1              */
#define _MODEM_IEN_RXFRAMEDET1_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXFRAMEDET1_DEFAULT                        (_MODEM_IEN_RXFRAMEDET1_DEFAULT << 11)  /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXTIMLOST                                  (0x1UL << 12)                           /**< Timing lost                                 */
#define _MODEM_IEN_RXTIMLOST_SHIFT                           12                                      /**< Shift value for MODEM_RXTIMLOST             */
#define _MODEM_IEN_RXTIMLOST_MASK                            0x1000UL                                /**< Bit mask for MODEM_RXTIMLOST                */
#define _MODEM_IEN_RXTIMLOST_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXTIMLOST_DEFAULT                          (_MODEM_IEN_RXTIMLOST_DEFAULT << 12)    /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXPRELOST                                  (0x1UL << 13)                           /**< Preamble lost                               */
#define _MODEM_IEN_RXPRELOST_SHIFT                           13                                      /**< Shift value for MODEM_RXPRELOST             */
#define _MODEM_IEN_RXPRELOST_MASK                            0x2000UL                                /**< Bit mask for MODEM_RXPRELOST                */
#define _MODEM_IEN_RXPRELOST_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXPRELOST_DEFAULT                          (_MODEM_IEN_RXPRELOST_DEFAULT << 13)    /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXFRAMEDETOF                               (0x1UL << 14)                           /**< Frame detection overflow                    */
#define _MODEM_IEN_RXFRAMEDETOF_SHIFT                        14                                      /**< Shift value for MODEM_RXFRAMEDETOF          */
#define _MODEM_IEN_RXFRAMEDETOF_MASK                         0x4000UL                                /**< Bit mask for MODEM_RXFRAMEDETOF             */
#define _MODEM_IEN_RXFRAMEDETOF_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXFRAMEDETOF_DEFAULT                       (_MODEM_IEN_RXFRAMEDETOF_DEFAULT << 14) /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_RXTIMNF                                    (0x1UL << 15)                           /**< Timing not found                            */
#define _MODEM_IEN_RXTIMNF_SHIFT                             15                                      /**< Shift value for MODEM_RXTIMNF               */
#define _MODEM_IEN_RXTIMNF_MASK                              0x8000UL                                /**< Bit mask for MODEM_RXTIMNF                  */
#define _MODEM_IEN_RXTIMNF_DEFAULT                           0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_RXTIMNF_DEFAULT                            (_MODEM_IEN_RXTIMNF_DEFAULT << 15)      /**< Shifted mode DEFAULT for MODEM_IEN          */
#define MODEM_IEN_FRCTIMOUT                                  (0x1UL << 16)                           /**< DEMOD-FRC req/ack timeout                   */
#define _MODEM_IEN_FRCTIMOUT_SHIFT                           16                                      /**< Shift value for MODEM_FRCTIMOUT             */
#define _MODEM_IEN_FRCTIMOUT_MASK                            0x10000UL                               /**< Bit mask for MODEM_FRCTIMOUT                */
#define _MODEM_IEN_FRCTIMOUT_DEFAULT                         0x00000000UL                            /**< Mode DEFAULT for MODEM_IEN                  */
#define MODEM_IEN_FRCTIMOUT_DEFAULT                          (_MODEM_IEN_FRCTIMOUT_DEFAULT << 16)    /**< Shifted mode DEFAULT for MODEM_IEN          */

/* Bit fields for MODEM CMD */
#define _MODEM_CMD_RESETVALUE                                0x00000000UL                         /**< Default value for MODEM_CMD                 */
#define _MODEM_CMD_MASK                                      0x00000039UL                         /**< Mask for MODEM_CMD                          */
#define MODEM_CMD_PRESTOP                                    (0x1UL << 0)                         /**< Preamble stop                               */
#define _MODEM_CMD_PRESTOP_SHIFT                             0                                    /**< Shift value for MODEM_PRESTOP               */
#define _MODEM_CMD_PRESTOP_MASK                              0x1UL                                /**< Bit mask for MODEM_PRESTOP                  */
#define _MODEM_CMD_PRESTOP_DEFAULT                           0x00000000UL                         /**< Mode DEFAULT for MODEM_CMD                  */
#define MODEM_CMD_PRESTOP_DEFAULT                            (_MODEM_CMD_PRESTOP_DEFAULT << 0)    /**< Shifted mode DEFAULT for MODEM_CMD          */
#define MODEM_CMD_AFCTXLOCK                                  (0x1UL << 3)                         /**< Lock AFC TX compensation                    */
#define _MODEM_CMD_AFCTXLOCK_SHIFT                           3                                    /**< Shift value for MODEM_AFCTXLOCK             */
#define _MODEM_CMD_AFCTXLOCK_MASK                            0x8UL                                /**< Bit mask for MODEM_AFCTXLOCK                */
#define _MODEM_CMD_AFCTXLOCK_DEFAULT                         0x00000000UL                         /**< Mode DEFAULT for MODEM_CMD                  */
#define MODEM_CMD_AFCTXLOCK_DEFAULT                          (_MODEM_CMD_AFCTXLOCK_DEFAULT << 3)  /**< Shifted mode DEFAULT for MODEM_CMD          */
#define MODEM_CMD_AFCTXCLEAR                                 (0x1UL << 4)                         /**< Clear AFC TX compensation.                  */
#define _MODEM_CMD_AFCTXCLEAR_SHIFT                          4                                    /**< Shift value for MODEM_AFCTXCLEAR            */
#define _MODEM_CMD_AFCTXCLEAR_MASK                           0x10UL                               /**< Bit mask for MODEM_AFCTXCLEAR               */
#define _MODEM_CMD_AFCTXCLEAR_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for MODEM_CMD                  */
#define MODEM_CMD_AFCTXCLEAR_DEFAULT                         (_MODEM_CMD_AFCTXCLEAR_DEFAULT << 4) /**< Shifted mode DEFAULT for MODEM_CMD          */
#define MODEM_CMD_AFCRXCLEAR                                 (0x1UL << 5)                         /**< Clear AFC RX compensation.                  */
#define _MODEM_CMD_AFCRXCLEAR_SHIFT                          5                                    /**< Shift value for MODEM_AFCRXCLEAR            */
#define _MODEM_CMD_AFCRXCLEAR_MASK                           0x20UL                               /**< Bit mask for MODEM_AFCRXCLEAR               */
#define _MODEM_CMD_AFCRXCLEAR_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for MODEM_CMD                  */
#define MODEM_CMD_AFCRXCLEAR_DEFAULT                         (_MODEM_CMD_AFCRXCLEAR_DEFAULT << 5) /**< Shifted mode DEFAULT for MODEM_CMD          */

/* Bit fields for MODEM FSMSTATUS */
#define _MODEM_FSMSTATUS_RESETVALUE                          0x00000000UL                                        /**< Default value for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_MASK                                0x000FFFFFUL                                        /**< Mask for MODEM_FSMSTATUS                    */
#define _MODEM_FSMSTATUS_DETSTATE_SHIFT                      0                                                   /**< Shift value for MODEM_DETSTATE              */
#define _MODEM_FSMSTATUS_DETSTATE_MASK                       0x7FUL                                              /**< Bit mask for MODEM_DETSTATE                 */
#define _MODEM_FSMSTATUS_DETSTATE_DEFAULT                    0x00000000UL                                        /**< Mode DEFAULT for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_DETSTATE_OFF                        0x00000000UL                                        /**< Mode OFF for MODEM_FSMSTATUS                */
#define _MODEM_FSMSTATUS_DETSTATE_TIMINGSEARCH               0x0000000AUL                                        /**< Mode TIMINGSEARCH for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_DETSTATE_PRESEARCH                  0x00000014UL                                        /**< Mode PRESEARCH for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_DETSTATE_FRAMESEARCH                0x0000001EUL                                        /**< Mode FRAMESEARCH for MODEM_FSMSTATUS        */
#define _MODEM_FSMSTATUS_DETSTATE_RXFRAME                    0x00000028UL                                        /**< Mode RXFRAME for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_DETSTATE_FRAMEDETMODE0              0x00000032UL                                        /**< Mode FRAMEDETMODE0 for MODEM_FSMSTATUS      */
#define MODEM_FSMSTATUS_DETSTATE_DEFAULT                     (_MODEM_FSMSTATUS_DETSTATE_DEFAULT << 0)            /**< Shifted mode DEFAULT for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_DETSTATE_OFF                         (_MODEM_FSMSTATUS_DETSTATE_OFF << 0)                /**< Shifted mode OFF for MODEM_FSMSTATUS        */
#define MODEM_FSMSTATUS_DETSTATE_TIMINGSEARCH                (_MODEM_FSMSTATUS_DETSTATE_TIMINGSEARCH << 0)       /**< Shifted mode TIMINGSEARCH for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_DETSTATE_PRESEARCH                   (_MODEM_FSMSTATUS_DETSTATE_PRESEARCH << 0)          /**< Shifted mode PRESEARCH for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_DETSTATE_FRAMESEARCH                 (_MODEM_FSMSTATUS_DETSTATE_FRAMESEARCH << 0)        /**< Shifted mode FRAMESEARCH for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_DETSTATE_RXFRAME                     (_MODEM_FSMSTATUS_DETSTATE_RXFRAME << 0)            /**< Shifted mode RXFRAME for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_DETSTATE_FRAMEDETMODE0               (_MODEM_FSMSTATUS_DETSTATE_FRAMEDETMODE0 << 0)      /**< Shifted mode FRAMEDETMODE0 for MODEM_FSMSTATUS*/
#define _MODEM_FSMSTATUS_DSASTATE_SHIFT                      7                                                   /**< Shift value for MODEM_DSASTATE              */
#define _MODEM_FSMSTATUS_DSASTATE_MASK                       0x380UL                                             /**< Bit mask for MODEM_DSASTATE                 */
#define _MODEM_FSMSTATUS_DSASTATE_DEFAULT                    0x00000000UL                                        /**< Mode DEFAULT for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_DSASTATE_IDLE                       0x00000000UL                                        /**< Mode IDLE for MODEM_FSMSTATUS               */
#define _MODEM_FSMSTATUS_DSASTATE_ARRIVALCHK                 0x00000001UL                                        /**< Mode ARRIVALCHK for MODEM_FSMSTATUS         */
#define _MODEM_FSMSTATUS_DSASTATE_STATUSCHK                  0x00000002UL                                        /**< Mode STATUSCHK for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_DSASTATE_SAMPPW                     0x00000003UL                                        /**< Mode SAMPPW for MODEM_FSMSTATUS             */
#define _MODEM_FSMSTATUS_DSASTATE_WAITPWRUP                  0x00000004UL                                        /**< Mode WAITPWRUP for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_DSASTATE_WAITDSALO                  0x00000005UL                                        /**< Mode WAITDSALO for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_DSASTATE_WAITABORT                  0x00000006UL                                        /**< Mode WAITABORT for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_DSASTATE_STOP                       0x00000007UL                                        /**< Mode STOP for MODEM_FSMSTATUS               */
#define MODEM_FSMSTATUS_DSASTATE_DEFAULT                     (_MODEM_FSMSTATUS_DSASTATE_DEFAULT << 7)            /**< Shifted mode DEFAULT for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_DSASTATE_IDLE                        (_MODEM_FSMSTATUS_DSASTATE_IDLE << 7)               /**< Shifted mode IDLE for MODEM_FSMSTATUS       */
#define MODEM_FSMSTATUS_DSASTATE_ARRIVALCHK                  (_MODEM_FSMSTATUS_DSASTATE_ARRIVALCHK << 7)         /**< Shifted mode ARRIVALCHK for MODEM_FSMSTATUS */
#define MODEM_FSMSTATUS_DSASTATE_STATUSCHK                   (_MODEM_FSMSTATUS_DSASTATE_STATUSCHK << 7)          /**< Shifted mode STATUSCHK for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_DSASTATE_SAMPPW                      (_MODEM_FSMSTATUS_DSASTATE_SAMPPW << 7)             /**< Shifted mode SAMPPW for MODEM_FSMSTATUS     */
#define MODEM_FSMSTATUS_DSASTATE_WAITPWRUP                   (_MODEM_FSMSTATUS_DSASTATE_WAITPWRUP << 7)          /**< Shifted mode WAITPWRUP for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_DSASTATE_WAITDSALO                   (_MODEM_FSMSTATUS_DSASTATE_WAITDSALO << 7)          /**< Shifted mode WAITDSALO for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_DSASTATE_WAITABORT                   (_MODEM_FSMSTATUS_DSASTATE_WAITABORT << 7)          /**< Shifted mode WAITABORT for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_DSASTATE_STOP                        (_MODEM_FSMSTATUS_DSASTATE_STOP << 7)               /**< Shifted mode STOP for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_LRBLESTATE_SHIFT                    10                                                  /**< Shift value for MODEM_LRBLESTATE            */
#define _MODEM_FSMSTATUS_LRBLESTATE_MASK                     0x7C00UL                                            /**< Bit mask for MODEM_LRBLESTATE               */
#define _MODEM_FSMSTATUS_LRBLESTATE_DEFAULT                  0x00000000UL                                        /**< Mode DEFAULT for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_IDLE                     0x00000000UL                                        /**< Mode IDLE for MODEM_FSMSTATUS               */
#define _MODEM_FSMSTATUS_LRBLESTATE_CLEANUP                  0x00000001UL                                        /**< Mode CLEANUP for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_CORRCOE                  0x00000002UL                                        /**< Mode CORRCOE for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_WAITLRDSA                0x00000003UL                                        /**< Mode WAITLRDSA for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_LRBLESTATE_MAXCORR                  0x00000004UL                                        /**< Mode MAXCORR for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_WAITRDY                  0x00000005UL                                        /**< Mode WAITRDY for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_FEC1DATA                 0x00000006UL                                        /**< Mode FEC1DATA for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_LRBLESTATE_FEC1ACK                  0x00000007UL                                        /**< Mode FEC1ACK for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_PAUSE                    0x00000008UL                                        /**< Mode PAUSE for MODEM_FSMSTATUS              */
#define _MODEM_FSMSTATUS_LRBLESTATE_FEC2DATA                 0x00000009UL                                        /**< Mode FEC2DATA for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_LRBLESTATE_FEC2ACK                  0x0000000AUL                                        /**< Mode FEC2ACK for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_LRBLESTATE_TRACKCUR                 0x0000000BUL                                        /**< Mode TRACKCUR for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_LRBLESTATE_TRACKEAR                 0x0000000CUL                                        /**< Mode TRACKEAR for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_LRBLESTATE_TRACKLAT                 0x0000000DUL                                        /**< Mode TRACKLAT for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_LRBLESTATE_TRACKDONE                0x0000000EUL                                        /**< Mode TRACKDONE for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_LRBLESTATE_TDECISION                0x0000000FUL                                        /**< Mode TDECISION for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_LRBLESTATE_STOP                     0x00000010UL                                        /**< Mode STOP for MODEM_FSMSTATUS               */
#define MODEM_FSMSTATUS_LRBLESTATE_DEFAULT                   (_MODEM_FSMSTATUS_LRBLESTATE_DEFAULT << 10)         /**< Shifted mode DEFAULT for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_IDLE                      (_MODEM_FSMSTATUS_LRBLESTATE_IDLE << 10)            /**< Shifted mode IDLE for MODEM_FSMSTATUS       */
#define MODEM_FSMSTATUS_LRBLESTATE_CLEANUP                   (_MODEM_FSMSTATUS_LRBLESTATE_CLEANUP << 10)         /**< Shifted mode CLEANUP for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_CORRCOE                   (_MODEM_FSMSTATUS_LRBLESTATE_CORRCOE << 10)         /**< Shifted mode CORRCOE for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_WAITLRDSA                 (_MODEM_FSMSTATUS_LRBLESTATE_WAITLRDSA << 10)       /**< Shifted mode WAITLRDSA for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_LRBLESTATE_MAXCORR                   (_MODEM_FSMSTATUS_LRBLESTATE_MAXCORR << 10)         /**< Shifted mode MAXCORR for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_WAITRDY                   (_MODEM_FSMSTATUS_LRBLESTATE_WAITRDY << 10)         /**< Shifted mode WAITRDY for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_FEC1DATA                  (_MODEM_FSMSTATUS_LRBLESTATE_FEC1DATA << 10)        /**< Shifted mode FEC1DATA for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_LRBLESTATE_FEC1ACK                   (_MODEM_FSMSTATUS_LRBLESTATE_FEC1ACK << 10)         /**< Shifted mode FEC1ACK for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_PAUSE                     (_MODEM_FSMSTATUS_LRBLESTATE_PAUSE << 10)           /**< Shifted mode PAUSE for MODEM_FSMSTATUS      */
#define MODEM_FSMSTATUS_LRBLESTATE_FEC2DATA                  (_MODEM_FSMSTATUS_LRBLESTATE_FEC2DATA << 10)        /**< Shifted mode FEC2DATA for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_LRBLESTATE_FEC2ACK                   (_MODEM_FSMSTATUS_LRBLESTATE_FEC2ACK << 10)         /**< Shifted mode FEC2ACK for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_LRBLESTATE_TRACKCUR                  (_MODEM_FSMSTATUS_LRBLESTATE_TRACKCUR << 10)        /**< Shifted mode TRACKCUR for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_LRBLESTATE_TRACKEAR                  (_MODEM_FSMSTATUS_LRBLESTATE_TRACKEAR << 10)        /**< Shifted mode TRACKEAR for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_LRBLESTATE_TRACKLAT                  (_MODEM_FSMSTATUS_LRBLESTATE_TRACKLAT << 10)        /**< Shifted mode TRACKLAT for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_LRBLESTATE_TRACKDONE                 (_MODEM_FSMSTATUS_LRBLESTATE_TRACKDONE << 10)       /**< Shifted mode TRACKDONE for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_LRBLESTATE_TDECISION                 (_MODEM_FSMSTATUS_LRBLESTATE_TDECISION << 10)       /**< Shifted mode TDECISION for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_LRBLESTATE_STOP                      (_MODEM_FSMSTATUS_LRBLESTATE_STOP << 10)            /**< Shifted mode STOP for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_NBBLESTATE_SHIFT                    15                                                  /**< Shift value for MODEM_NBBLESTATE            */
#define _MODEM_FSMSTATUS_NBBLESTATE_MASK                     0xF8000UL                                           /**< Bit mask for MODEM_NBBLESTATE               */
#define _MODEM_FSMSTATUS_NBBLESTATE_DEFAULT                  0x00000000UL                                        /**< Mode DEFAULT for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_NBBLESTATE_IDLE                     0x00000000UL                                        /**< Mode IDLE for MODEM_FSMSTATUS               */
#define _MODEM_FSMSTATUS_NBBLESTATE_VTINITI                  0x00000001UL                                        /**< Mode VTINITI for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_NBBLESTATE_ADDRNXT                  0x00000002UL                                        /**< Mode ADDRNXT for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_NBBLESTATE_INICOST                  0x00000003UL                                        /**< Mode INICOST for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_NBBLESTATE_CALCCOST                 0x00000004UL                                        /**< Mode CALCCOST for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_NBBLESTATE_INITALACQU               0x00000005UL                                        /**< Mode INITALACQU for MODEM_FSMSTATUS         */
#define _MODEM_FSMSTATUS_NBBLESTATE_INITALCOSTCALC           0x00000006UL                                        /**< Mode INITALCOSTCALC for MODEM_FSMSTATUS     */
#define _MODEM_FSMSTATUS_NBBLESTATE_MINCOSTCALC              0x00000007UL                                        /**< Mode MINCOSTCALC for MODEM_FSMSTATUS        */
#define _MODEM_FSMSTATUS_NBBLESTATE_FREQACQU                 0x00000008UL                                        /**< Mode FREQACQU for MODEM_FSMSTATUS           */
#define _MODEM_FSMSTATUS_NBBLESTATE_FREQACQUDONE             0x00000009UL                                        /**< Mode FREQACQUDONE for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUEARLY          0x0000000AUL                                        /**< Mode TIMINGACQUEARLY for MODEM_FSMSTATUS    */
#define _MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUCURR           0x0000000BUL                                        /**< Mode TIMINGACQUCURR for MODEM_FSMSTATUS     */
#define _MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQULATE           0x0000000CUL                                        /**< Mode TIMINGACQULATE for MODEM_FSMSTATUS     */
#define _MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUDONE           0x0000000DUL                                        /**< Mode TIMINGACQUDONE for MODEM_FSMSTATUS     */
#define _MODEM_FSMSTATUS_NBBLESTATE_VIRTBIINIT0              0x0000000EUL                                        /**< Mode VIRTBIINIT0 for MODEM_FSMSTATUS        */
#define _MODEM_FSMSTATUS_NBBLESTATE_VIRTBIINIT1              0x0000000FUL                                        /**< Mode VIRTBIINIT1 for MODEM_FSMSTATUS        */
#define _MODEM_FSMSTATUS_NBBLESTATE_VIRTBIRXSYNC             0x00000010UL                                        /**< Mode VIRTBIRXSYNC for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_NBBLESTATE_VIRTBIRXPAYLOAD          0x00000011UL                                        /**< Mode VIRTBIRXPAYLOAD for MODEM_FSMSTATUS    */
#define _MODEM_FSMSTATUS_NBBLESTATE_HARDRXSYNC               0x00000012UL                                        /**< Mode HARDRXSYNC for MODEM_FSMSTATUS         */
#define _MODEM_FSMSTATUS_NBBLESTATE_HARDXPAYLOAD             0x00000013UL                                        /**< Mode HARDXPAYLOAD for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_NBBLESTATE_TRACKFREQ                0x00000014UL                                        /**< Mode TRACKFREQ for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMEARLY            0x00000015UL                                        /**< Mode TRACKTIMEARLY for MODEM_FSMSTATUS      */
#define _MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMCURR             0x00000016UL                                        /**< Mode TRACKTIMCURR for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMLATE             0x00000017UL                                        /**< Mode TRACKTIMLATE for MODEM_FSMSTATUS       */
#define _MODEM_FSMSTATUS_NBBLESTATE_TRACKDONE                0x00000018UL                                        /**< Mode TRACKDONE for MODEM_FSMSTATUS          */
#define _MODEM_FSMSTATUS_NBBLESTATE_TRACKDECISION            0x00000019UL                                        /**< Mode TRACKDECISION for MODEM_FSMSTATUS      */
#define _MODEM_FSMSTATUS_NBBLESTATE_STOP                     0x0000001AUL                                        /**< Mode STOP for MODEM_FSMSTATUS               */
#define _MODEM_FSMSTATUS_NBBLESTATE_WAITACK                  0x0000001BUL                                        /**< Mode WAITACK for MODEM_FSMSTATUS            */
#define _MODEM_FSMSTATUS_NBBLESTATE_DEBUG                    0x0000001CUL                                        /**< Mode DEBUG for MODEM_FSMSTATUS              */
#define MODEM_FSMSTATUS_NBBLESTATE_DEFAULT                   (_MODEM_FSMSTATUS_NBBLESTATE_DEFAULT << 15)         /**< Shifted mode DEFAULT for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_NBBLESTATE_IDLE                      (_MODEM_FSMSTATUS_NBBLESTATE_IDLE << 15)            /**< Shifted mode IDLE for MODEM_FSMSTATUS       */
#define MODEM_FSMSTATUS_NBBLESTATE_VTINITI                   (_MODEM_FSMSTATUS_NBBLESTATE_VTINITI << 15)         /**< Shifted mode VTINITI for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_NBBLESTATE_ADDRNXT                   (_MODEM_FSMSTATUS_NBBLESTATE_ADDRNXT << 15)         /**< Shifted mode ADDRNXT for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_NBBLESTATE_INICOST                   (_MODEM_FSMSTATUS_NBBLESTATE_INICOST << 15)         /**< Shifted mode INICOST for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_NBBLESTATE_CALCCOST                  (_MODEM_FSMSTATUS_NBBLESTATE_CALCCOST << 15)        /**< Shifted mode CALCCOST for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_NBBLESTATE_INITALACQU                (_MODEM_FSMSTATUS_NBBLESTATE_INITALACQU << 15)      /**< Shifted mode INITALACQU for MODEM_FSMSTATUS */
#define MODEM_FSMSTATUS_NBBLESTATE_INITALCOSTCALC            (_MODEM_FSMSTATUS_NBBLESTATE_INITALCOSTCALC << 15)  /**< Shifted mode INITALCOSTCALC for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_MINCOSTCALC               (_MODEM_FSMSTATUS_NBBLESTATE_MINCOSTCALC << 15)     /**< Shifted mode MINCOSTCALC for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_FREQACQU                  (_MODEM_FSMSTATUS_NBBLESTATE_FREQACQU << 15)        /**< Shifted mode FREQACQU for MODEM_FSMSTATUS   */
#define MODEM_FSMSTATUS_NBBLESTATE_FREQACQUDONE              (_MODEM_FSMSTATUS_NBBLESTATE_FREQACQUDONE << 15)    /**< Shifted mode FREQACQUDONE for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUEARLY           (_MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUEARLY << 15) /**< Shifted mode TIMINGACQUEARLY for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUCURR            (_MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUCURR << 15)  /**< Shifted mode TIMINGACQUCURR for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQULATE            (_MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQULATE << 15)  /**< Shifted mode TIMINGACQULATE for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUDONE            (_MODEM_FSMSTATUS_NBBLESTATE_TIMINGACQUDONE << 15)  /**< Shifted mode TIMINGACQUDONE for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_VIRTBIINIT0               (_MODEM_FSMSTATUS_NBBLESTATE_VIRTBIINIT0 << 15)     /**< Shifted mode VIRTBIINIT0 for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_VIRTBIINIT1               (_MODEM_FSMSTATUS_NBBLESTATE_VIRTBIINIT1 << 15)     /**< Shifted mode VIRTBIINIT1 for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_VIRTBIRXSYNC              (_MODEM_FSMSTATUS_NBBLESTATE_VIRTBIRXSYNC << 15)    /**< Shifted mode VIRTBIRXSYNC for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_VIRTBIRXPAYLOAD           (_MODEM_FSMSTATUS_NBBLESTATE_VIRTBIRXPAYLOAD << 15) /**< Shifted mode VIRTBIRXPAYLOAD for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_HARDRXSYNC                (_MODEM_FSMSTATUS_NBBLESTATE_HARDRXSYNC << 15)      /**< Shifted mode HARDRXSYNC for MODEM_FSMSTATUS */
#define MODEM_FSMSTATUS_NBBLESTATE_HARDXPAYLOAD              (_MODEM_FSMSTATUS_NBBLESTATE_HARDXPAYLOAD << 15)    /**< Shifted mode HARDXPAYLOAD for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TRACKFREQ                 (_MODEM_FSMSTATUS_NBBLESTATE_TRACKFREQ << 15)       /**< Shifted mode TRACKFREQ for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMEARLY             (_MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMEARLY << 15)   /**< Shifted mode TRACKTIMEARLY for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMCURR              (_MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMCURR << 15)    /**< Shifted mode TRACKTIMCURR for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMLATE              (_MODEM_FSMSTATUS_NBBLESTATE_TRACKTIMLATE << 15)    /**< Shifted mode TRACKTIMLATE for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_TRACKDONE                 (_MODEM_FSMSTATUS_NBBLESTATE_TRACKDONE << 15)       /**< Shifted mode TRACKDONE for MODEM_FSMSTATUS  */
#define MODEM_FSMSTATUS_NBBLESTATE_TRACKDECISION             (_MODEM_FSMSTATUS_NBBLESTATE_TRACKDECISION << 15)   /**< Shifted mode TRACKDECISION for MODEM_FSMSTATUS*/
#define MODEM_FSMSTATUS_NBBLESTATE_STOP                      (_MODEM_FSMSTATUS_NBBLESTATE_STOP << 15)            /**< Shifted mode STOP for MODEM_FSMSTATUS       */
#define MODEM_FSMSTATUS_NBBLESTATE_WAITACK                   (_MODEM_FSMSTATUS_NBBLESTATE_WAITACK << 15)         /**< Shifted mode WAITACK for MODEM_FSMSTATUS    */
#define MODEM_FSMSTATUS_NBBLESTATE_DEBUG                     (_MODEM_FSMSTATUS_NBBLESTATE_DEBUG << 15)           /**< Shifted mode DEBUG for MODEM_FSMSTATUS      */

/* Bit fields for MODEM STATUS2 */
#define _MODEM_STATUS2_RESETVALUE                            0x00000000UL                               /**< Default value for MODEM_STATUS2             */
#define _MODEM_STATUS2_MASK                                  0x00003FFFUL                               /**< Mask for MODEM_STATUS2                      */
#define _MODEM_STATUS2_CHPWRACCUMUX_SHIFT                    0                                          /**< Shift value for MODEM_CHPWRACCUMUX          */
#define _MODEM_STATUS2_CHPWRACCUMUX_MASK                     0xFFUL                                     /**< Bit mask for MODEM_CHPWRACCUMUX             */
#define _MODEM_STATUS2_CHPWRACCUMUX_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for MODEM_STATUS2              */
#define MODEM_STATUS2_CHPWRACCUMUX_DEFAULT                   (_MODEM_STATUS2_CHPWRACCUMUX_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_STATUS2      */
#define _MODEM_STATUS2_BBSSMUX_SHIFT                         8                                          /**< Shift value for MODEM_BBSSMUX               */
#define _MODEM_STATUS2_BBSSMUX_MASK                          0xF00UL                                    /**< Bit mask for MODEM_BBSSMUX                  */
#define _MODEM_STATUS2_BBSSMUX_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for MODEM_STATUS2              */
#define MODEM_STATUS2_BBSSMUX_DEFAULT                        (_MODEM_STATUS2_BBSSMUX_DEFAULT << 8)      /**< Shifted mode DEFAULT for MODEM_STATUS2      */
#define _MODEM_STATUS2_LRBLECI_SHIFT                         12                                         /**< Shift value for MODEM_LRBLECI               */
#define _MODEM_STATUS2_LRBLECI_MASK                          0x3000UL                                   /**< Bit mask for MODEM_LRBLECI                  */
#define _MODEM_STATUS2_LRBLECI_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for MODEM_STATUS2              */
#define _MODEM_STATUS2_LRBLECI_LR125k                        0x00000000UL                               /**< Mode LR125k for MODEM_STATUS2               */
#define _MODEM_STATUS2_LRBLECI_LR500k                        0x00000001UL                               /**< Mode LR500k for MODEM_STATUS2               */
#define MODEM_STATUS2_LRBLECI_DEFAULT                        (_MODEM_STATUS2_LRBLECI_DEFAULT << 12)     /**< Shifted mode DEFAULT for MODEM_STATUS2      */
#define MODEM_STATUS2_LRBLECI_LR125k                         (_MODEM_STATUS2_LRBLECI_LR125k << 12)      /**< Shifted mode LR125k for MODEM_STATUS2       */
#define MODEM_STATUS2_LRBLECI_LR500k                         (_MODEM_STATUS2_LRBLECI_LR500k << 12)      /**< Shifted mode LR500k for MODEM_STATUS2       */

/* Bit fields for MODEM STATUS3 */
#define _MODEM_STATUS3_RESETVALUE                            0x00000000UL                                   /**< Default value for MODEM_STATUS3             */
#define _MODEM_STATUS3_MASK                                  0x07FFFFFFUL                                   /**< Mask for MODEM_STATUS3                      */
#define _MODEM_STATUS3_BBPFOUTABS1_SHIFT                     0                                              /**< Shift value for MODEM_BBPFOUTABS1           */
#define _MODEM_STATUS3_BBPFOUTABS1_MASK                      0x7FFUL                                        /**< Bit mask for MODEM_BBPFOUTABS1              */
#define _MODEM_STATUS3_BBPFOUTABS1_DEFAULT                   0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_BBPFOUTABS1_DEFAULT                    (_MODEM_STATUS3_BBPFOUTABS1_DEFAULT << 0)      /**< Shifted mode DEFAULT for MODEM_STATUS3      */
#define _MODEM_STATUS3_BBPFOUTABS_SHIFT                      11                                             /**< Shift value for MODEM_BBPFOUTABS            */
#define _MODEM_STATUS3_BBPFOUTABS_MASK                       0x3FF800UL                                     /**< Bit mask for MODEM_BBPFOUTABS               */
#define _MODEM_STATUS3_BBPFOUTABS_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_BBPFOUTABS_DEFAULT                     (_MODEM_STATUS3_BBPFOUTABS_DEFAULT << 11)      /**< Shifted mode DEFAULT for MODEM_STATUS3      */
#define MODEM_STATUS3_LRDSALIVE                              (0x1UL << 22)                                  /**< BLRDSA Prefilter above LRSPIKETHD           */
#define _MODEM_STATUS3_LRDSALIVE_SHIFT                       22                                             /**< Shift value for MODEM_LRDSALIVE             */
#define _MODEM_STATUS3_LRDSALIVE_MASK                        0x400000UL                                     /**< Bit mask for MODEM_LRDSALIVE                */
#define _MODEM_STATUS3_LRDSALIVE_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_LRDSALIVE_DEFAULT                      (_MODEM_STATUS3_LRDSALIVE_DEFAULT << 22)       /**< Shifted mode DEFAULT for MODEM_STATUS3      */
#define MODEM_STATUS3_COHDSALIVE                             (0x1UL << 23)                                  /**< COHDSA Prefilter above CDTH                 */
#define _MODEM_STATUS3_COHDSALIVE_SHIFT                      23                                             /**< Shift value for MODEM_COHDSALIVE            */
#define _MODEM_STATUS3_COHDSALIVE_MASK                       0x800000UL                                     /**< Bit mask for MODEM_COHDSALIVE               */
#define _MODEM_STATUS3_COHDSALIVE_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_COHDSALIVE_DEFAULT                     (_MODEM_STATUS3_COHDSALIVE_DEFAULT << 23)      /**< Shifted mode DEFAULT for MODEM_STATUS3      */
#define MODEM_STATUS3_LRDSADET                               (0x1UL << 24)                                  /**< DSA prefilter above LRSPIKETHD              */
#define _MODEM_STATUS3_LRDSADET_SHIFT                        24                                             /**< Shift value for MODEM_LRDSADET              */
#define _MODEM_STATUS3_LRDSADET_MASK                         0x1000000UL                                    /**< Bit mask for MODEM_LRDSADET                 */
#define _MODEM_STATUS3_LRDSADET_DEFAULT                      0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_LRDSADET_DEFAULT                       (_MODEM_STATUS3_LRDSADET_DEFAULT << 24)        /**< Shifted mode DEFAULT for MODEM_STATUS3      */
#define MODEM_STATUS3_COHDSADET                              (0x1UL << 25)                                  /**< DSA prefilter above CDTH                    */
#define _MODEM_STATUS3_COHDSADET_SHIFT                       25                                             /**< Shift value for MODEM_COHDSADET             */
#define _MODEM_STATUS3_COHDSADET_MASK                        0x2000000UL                                    /**< Bit mask for MODEM_COHDSADET                */
#define _MODEM_STATUS3_COHDSADET_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_COHDSADET_DEFAULT                      (_MODEM_STATUS3_COHDSADET_DEFAULT << 25)       /**< Shifted mode DEFAULT for MODEM_STATUS3      */
#define MODEM_STATUS3_SYNCSECPEAKABTH                        (0x1UL << 26)                                  /**< SYNC second peak above threshold            */
#define _MODEM_STATUS3_SYNCSECPEAKABTH_SHIFT                 26                                             /**< Shift value for MODEM_SYNCSECPEAKABTH       */
#define _MODEM_STATUS3_SYNCSECPEAKABTH_MASK                  0x4000000UL                                    /**< Bit mask for MODEM_SYNCSECPEAKABTH          */
#define _MODEM_STATUS3_SYNCSECPEAKABTH_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for MODEM_STATUS3              */
#define MODEM_STATUS3_SYNCSECPEAKABTH_DEFAULT                (_MODEM_STATUS3_SYNCSECPEAKABTH_DEFAULT << 26) /**< Shifted mode DEFAULT for MODEM_STATUS3      */

/* Bit fields for MODEM IRCAL */
#define _MODEM_IRCAL_RESETVALUE                              0x00000000UL                          /**< Default value for MODEM_IRCAL               */
#define _MODEM_IRCAL_MASK                                    0x00003FBFUL                          /**< Mask for MODEM_IRCAL                        */
#define MODEM_IRCAL_IRCALEN                                  (0x1UL << 0)                          /**< IRCAL enable bit                            */
#define _MODEM_IRCAL_IRCALEN_SHIFT                           0                                     /**< Shift value for MODEM_IRCALEN               */
#define _MODEM_IRCAL_IRCALEN_MASK                            0x1UL                                 /**< Bit mask for MODEM_IRCALEN                  */
#define _MODEM_IRCAL_IRCALEN_DEFAULT                         0x00000000UL                          /**< Mode DEFAULT for MODEM_IRCAL                */
#define MODEM_IRCAL_IRCALEN_DEFAULT                          (_MODEM_IRCAL_IRCALEN_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_IRCAL        */
#define _MODEM_IRCAL_MURSHF_SHIFT                            1                                     /**< Shift value for MODEM_MURSHF                */
#define _MODEM_IRCAL_MURSHF_MASK                             0x3EUL                                /**< Bit mask for MODEM_MURSHF                   */
#define _MODEM_IRCAL_MURSHF_DEFAULT                          0x00000000UL                          /**< Mode DEFAULT for MODEM_IRCAL                */
#define MODEM_IRCAL_MURSHF_DEFAULT                           (_MODEM_IRCAL_MURSHF_DEFAULT << 1)    /**< Shifted mode DEFAULT for MODEM_IRCAL        */
#define _MODEM_IRCAL_MUISHF_SHIFT                            7                                     /**< Shift value for MODEM_MUISHF                */
#define _MODEM_IRCAL_MUISHF_MASK                             0x1F80UL                              /**< Bit mask for MODEM_MUISHF                   */
#define _MODEM_IRCAL_MUISHF_DEFAULT                          0x00000000UL                          /**< Mode DEFAULT for MODEM_IRCAL                */
#define MODEM_IRCAL_MUISHF_DEFAULT                           (_MODEM_IRCAL_MUISHF_DEFAULT << 7)    /**< Shifted mode DEFAULT for MODEM_IRCAL        */
#define MODEM_IRCAL_IRCORREN                                 (0x1UL << 13)                         /**< IR Correction enable bit                    */
#define _MODEM_IRCAL_IRCORREN_SHIFT                          13                                    /**< Shift value for MODEM_IRCORREN              */
#define _MODEM_IRCAL_IRCORREN_MASK                           0x2000UL                              /**< Bit mask for MODEM_IRCORREN                 */
#define _MODEM_IRCAL_IRCORREN_DEFAULT                        0x00000000UL                          /**< Mode DEFAULT for MODEM_IRCAL                */
#define MODEM_IRCAL_IRCORREN_DEFAULT                         (_MODEM_IRCAL_IRCORREN_DEFAULT << 13) /**< Shifted mode DEFAULT for MODEM_IRCAL        */

/* Bit fields for MODEM IRCALCOEF */
#define _MODEM_IRCALCOEF_RESETVALUE                          0x00000000UL                         /**< Default value for MODEM_IRCALCOEF           */
#define _MODEM_IRCALCOEF_MASK                                0x7FFF7FFFUL                         /**< Mask for MODEM_IRCALCOEF                    */
#define _MODEM_IRCALCOEF_CRV_SHIFT                           0                                    /**< Shift value for MODEM_CRV                   */
#define _MODEM_IRCALCOEF_CRV_MASK                            0x7FFFUL                             /**< Bit mask for MODEM_CRV                      */
#define _MODEM_IRCALCOEF_CRV_DEFAULT                         0x00000000UL                         /**< Mode DEFAULT for MODEM_IRCALCOEF            */
#define MODEM_IRCALCOEF_CRV_DEFAULT                          (_MODEM_IRCALCOEF_CRV_DEFAULT << 0)  /**< Shifted mode DEFAULT for MODEM_IRCALCOEF    */
#define _MODEM_IRCALCOEF_CIV_SHIFT                           16                                   /**< Shift value for MODEM_CIV                   */
#define _MODEM_IRCALCOEF_CIV_MASK                            0x7FFF0000UL                         /**< Bit mask for MODEM_CIV                      */
#define _MODEM_IRCALCOEF_CIV_DEFAULT                         0x00000000UL                         /**< Mode DEFAULT for MODEM_IRCALCOEF            */
#define MODEM_IRCALCOEF_CIV_DEFAULT                          (_MODEM_IRCALCOEF_CIV_DEFAULT << 16) /**< Shifted mode DEFAULT for MODEM_IRCALCOEF    */

/* Bit fields for MODEM BLEIQDSA */
#define _MODEM_BLEIQDSA_RESETVALUE                           0x00000000UL                                       /**< Default value for MODEM_BLEIQDSA            */
#define _MODEM_BLEIQDSA_MASK                                 0xFFFFFFFFUL                                       /**< Mask for MODEM_BLEIQDSA                     */
#define MODEM_BLEIQDSA_BLEIQDSAEN                            (0x1UL << 0)                                       /**< BLEIQDSA Enable                             */
#define _MODEM_BLEIQDSA_BLEIQDSAEN_SHIFT                     0                                                  /**< Shift value for MODEM_BLEIQDSAEN            */
#define _MODEM_BLEIQDSA_BLEIQDSAEN_MASK                      0x1UL                                              /**< Bit mask for MODEM_BLEIQDSAEN               */
#define _MODEM_BLEIQDSA_BLEIQDSAEN_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for MODEM_BLEIQDSA             */
#define MODEM_BLEIQDSA_BLEIQDSAEN_DEFAULT                    (_MODEM_BLEIQDSA_BLEIQDSAEN_DEFAULT << 0)          /**< Shifted mode DEFAULT for MODEM_BLEIQDSA     */
#define _MODEM_BLEIQDSA_BLEIQDSATH_SHIFT                     1                                                  /**< Shift value for MODEM_BLEIQDSATH            */
#define _MODEM_BLEIQDSA_BLEIQDSATH_MASK                      0x7FFEUL                                           /**< Bit mask for MODEM_BLEIQDSATH               */
#define _MODEM_BLEIQDSA_BLEIQDSATH_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for MODEM_BLEIQDSA             */
#define MODEM_BLEIQDSA_BLEIQDSATH_DEFAULT                    (_MODEM_BLEIQDSA_BLEIQDSATH_DEFAULT << 1)          /**< Shifted mode DEFAULT for MODEM_BLEIQDSA     */
#define _MODEM_BLEIQDSA_BLEIQDSAIIRCOEFPWR_SHIFT             15                                                 /**< Shift value for MODEM_BLEIQDSAIIRCOEFPWR    */
#define _MODEM_BLEIQDSA_BLEIQDSAIIRCOEFPWR_MASK              0x38000UL                                          /**< Bit mask for MODEM_BLEIQDSAIIRCOEFPWR       */
#define _MODEM_BLEIQDSA_BLEIQDSAIIRCOEFPWR_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for MODEM_BLEIQDSA             */
#define MODEM_BLEIQDSA_BLEIQDSAIIRCOEFPWR_DEFAULT            (_MODEM_BLEIQDSA_BLEIQDSAIIRCOEFPWR_DEFAULT << 15) /**< Shifted mode DEFAULT for MODEM_BLEIQDSA     */
#define _MODEM_BLEIQDSA_BLEIQDSADIFFTH1_SHIFT                18                                                 /**< Shift value for MODEM_BLEIQDSADIFFTH1       */
#define _MODEM_BLEIQDSA_BLEIQDSADIFFTH1_MASK                 0xFFFC0000UL                                       /**< Bit mask for MODEM_BLEIQDSADIFFTH1          */
#define _MODEM_BLEIQDSA_BLEIQDSADIFFTH1_DEFAULT              0x00000000UL                                       /**< Mode DEFAULT for MODEM_BLEIQDSA             */
#define MODEM_BLEIQDSA_BLEIQDSADIFFTH1_DEFAULT               (_MODEM_BLEIQDSA_BLEIQDSADIFFTH1_DEFAULT << 18)    /**< Shifted mode DEFAULT for MODEM_BLEIQDSA     */

/* Bit fields for MODEM BLEIQDSAEXT1 */
#define _MODEM_BLEIQDSAEXT1_RESETVALUE                       0x0E000000UL                                         /**< Default value for MODEM_BLEIQDSAEXT1        */
#define _MODEM_BLEIQDSAEXT1_MASK                             0x3FFFFFFFUL                                         /**< Mask for MODEM_BLEIQDSAEXT1                 */
#define _MODEM_BLEIQDSAEXT1_FREQSCALEIQDSA_SHIFT             0                                                    /**< Shift value for MODEM_FREQSCALEIQDSA        */
#define _MODEM_BLEIQDSAEXT1_FREQSCALEIQDSA_MASK              0x3UL                                                /**< Bit mask for MODEM_FREQSCALEIQDSA           */
#define _MODEM_BLEIQDSAEXT1_FREQSCALEIQDSA_DEFAULT           0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_FREQSCALEIQDSA_DEFAULT            (_MODEM_BLEIQDSAEXT1_FREQSCALEIQDSA_DEFAULT << 0)    /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGEN                     (0x1UL << 2)                                         /**< Channel Power FIR Avg Enable                */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGEN_SHIFT              2                                                    /**< Shift value for MODEM_CHPWRFIRAVGEN         */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGEN_MASK               0x4UL                                                /**< Bit mask for MODEM_CHPWRFIRAVGEN            */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGEN_DEFAULT            0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGEN_DEFAULT             (_MODEM_BLEIQDSAEXT1_CHPWRFIRAVGEN_DEFAULT << 2)     /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_SHIFT             3                                                    /**< Shift value for MODEM_CHPWRFIRAVGVAL        */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_MASK              0x18UL                                               /**< Bit mask for MODEM_CHPWRFIRAVGVAL           */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_DEFAULT           0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG0              0x00000000UL                                         /**< Mode AVG0 for MODEM_BLEIQDSAEXT1            */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG2              0x00000001UL                                         /**< Mode AVG2 for MODEM_BLEIQDSAEXT1            */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG4              0x00000002UL                                         /**< Mode AVG4 for MODEM_BLEIQDSAEXT1            */
#define _MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG8              0x00000003UL                                         /**< Mode AVG8 for MODEM_BLEIQDSAEXT1            */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_DEFAULT            (_MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_DEFAULT << 3)    /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG0               (_MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG0 << 3)       /**< Shifted mode AVG0 for MODEM_BLEIQDSAEXT1    */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG2               (_MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG2 << 3)       /**< Shifted mode AVG2 for MODEM_BLEIQDSAEXT1    */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG4               (_MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG4 << 3)       /**< Shifted mode AVG4 for MODEM_BLEIQDSAEXT1    */
#define MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG8               (_MODEM_BLEIQDSAEXT1_CHPWRFIRAVGVAL_AVG8 << 3)       /**< Shifted mode AVG8 for MODEM_BLEIQDSAEXT1    */
#define _MODEM_BLEIQDSAEXT1_CORRIIRAVGMULFACT_SHIFT          5                                                    /**< Shift value for MODEM_CORRIIRAVGMULFACT     */
#define _MODEM_BLEIQDSAEXT1_CORRIIRAVGMULFACT_MASK           0x60UL                                               /**< Bit mask for MODEM_CORRIIRAVGMULFACT        */
#define _MODEM_BLEIQDSAEXT1_CORRIIRAVGMULFACT_DEFAULT        0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_CORRIIRAVGMULFACT_DEFAULT         (_MODEM_BLEIQDSAEXT1_CORRIIRAVGMULFACT_DEFAULT << 5) /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define _MODEM_BLEIQDSAEXT1_BLEIQDSAADDRBIAS_SHIFT           7                                                    /**< Shift value for MODEM_BLEIQDSAADDRBIAS      */
#define _MODEM_BLEIQDSAEXT1_BLEIQDSAADDRBIAS_MASK            0x780UL                                              /**< Bit mask for MODEM_BLEIQDSAADDRBIAS         */
#define _MODEM_BLEIQDSAEXT1_BLEIQDSAADDRBIAS_DEFAULT         0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_BLEIQDSAADDRBIAS_DEFAULT          (_MODEM_BLEIQDSAEXT1_BLEIQDSAADDRBIAS_DEFAULT << 7)  /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define _MODEM_BLEIQDSAEXT1_BLEIQDSATHCOMB_SHIFT             11                                                   /**< Shift value for MODEM_BLEIQDSATHCOMB        */
#define _MODEM_BLEIQDSAEXT1_BLEIQDSATHCOMB_MASK              0x1FFF800UL                                          /**< Bit mask for MODEM_BLEIQDSATHCOMB           */
#define _MODEM_BLEIQDSAEXT1_BLEIQDSATHCOMB_DEFAULT           0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_BLEIQDSATHCOMB_DEFAULT            (_MODEM_BLEIQDSAEXT1_BLEIQDSATHCOMB_DEFAULT << 11)   /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define _MODEM_BLEIQDSAEXT1_MAXCORRCNTIQDSA_SHIFT            25                                                   /**< Shift value for MODEM_MAXCORRCNTIQDSA       */
#define _MODEM_BLEIQDSAEXT1_MAXCORRCNTIQDSA_MASK             0x1E000000UL                                         /**< Bit mask for MODEM_MAXCORRCNTIQDSA          */
#define _MODEM_BLEIQDSAEXT1_MAXCORRCNTIQDSA_DEFAULT          0x00000007UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_MAXCORRCNTIQDSA_DEFAULT           (_MODEM_BLEIQDSAEXT1_MAXCORRCNTIQDSA_DEFAULT << 25)  /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */
#define MODEM_BLEIQDSAEXT1_IIRRST                            (0x1UL << 29)                                        /**< IIR Reset                                   */
#define _MODEM_BLEIQDSAEXT1_IIRRST_SHIFT                     29                                                   /**< Shift value for MODEM_IIRRST                */
#define _MODEM_BLEIQDSAEXT1_IIRRST_MASK                      0x20000000UL                                         /**< Bit mask for MODEM_IIRRST                   */
#define _MODEM_BLEIQDSAEXT1_IIRRST_DEFAULT                   0x00000000UL                                         /**< Mode DEFAULT for MODEM_BLEIQDSAEXT1         */
#define MODEM_BLEIQDSAEXT1_IIRRST_DEFAULT                    (_MODEM_BLEIQDSAEXT1_IIRRST_DEFAULT << 29)           /**< Shifted mode DEFAULT for MODEM_BLEIQDSAEXT1 */

/* Bit fields for MODEM SYNCPROPERTIES */
#define _MODEM_SYNCPROPERTIES_RESETVALUE                     0x00000000UL                                       /**< Default value for MODEM_SYNCPROPERTIES      */
#define _MODEM_SYNCPROPERTIES_MASK                           0x000000FFUL                                       /**< Mask for MODEM_SYNCPROPERTIES               */
#define MODEM_SYNCPROPERTIES_SYNCCORRCLR                     (0x1UL << 0)                                       /**< Sync auto corr clear bit                    */
#define _MODEM_SYNCPROPERTIES_SYNCCORRCLR_SHIFT              0                                                  /**< Shift value for MODEM_SYNCCORRCLR           */
#define _MODEM_SYNCPROPERTIES_SYNCCORRCLR_MASK               0x1UL                                              /**< Bit mask for MODEM_SYNCCORRCLR              */
#define _MODEM_SYNCPROPERTIES_SYNCCORRCLR_DEFAULT            0x00000000UL                                       /**< Mode DEFAULT for MODEM_SYNCPROPERTIES       */
#define MODEM_SYNCPROPERTIES_SYNCCORRCLR_DEFAULT             (_MODEM_SYNCPROPERTIES_SYNCCORRCLR_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_SYNCPROPERTIES*/
#define _MODEM_SYNCPROPERTIES_SYNCSECPEAKTH_SHIFT            1                                                  /**< Shift value for MODEM_SYNCSECPEAKTH         */
#define _MODEM_SYNCPROPERTIES_SYNCSECPEAKTH_MASK             0xFEUL                                             /**< Bit mask for MODEM_SYNCSECPEAKTH            */
#define _MODEM_SYNCPROPERTIES_SYNCSECPEAKTH_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for MODEM_SYNCPROPERTIES       */
#define MODEM_SYNCPROPERTIES_SYNCSECPEAKTH_DEFAULT           (_MODEM_SYNCPROPERTIES_SYNCSECPEAKTH_DEFAULT << 1) /**< Shifted mode DEFAULT for MODEM_SYNCPROPERTIES*/

/* Bit fields for MODEM DIGIGAINCTRL */
#define _MODEM_DIGIGAINCTRL_RESETVALUE                       0x00000000UL                                      /**< Default value for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_MASK                             0x000001FFUL                                      /**< Mask for MODEM_DIGIGAINCTRL                 */
#define MODEM_DIGIGAINCTRL_DIGIGAINEN                        (0x1UL << 0)                                      /**< Digital Gain Enable                         */
#define _MODEM_DIGIGAINCTRL_DIGIGAINEN_SHIFT                 0                                                 /**< Shift value for MODEM_DIGIGAINEN            */
#define _MODEM_DIGIGAINCTRL_DIGIGAINEN_MASK                  0x1UL                                             /**< Bit mask for MODEM_DIGIGAINEN               */
#define _MODEM_DIGIGAINCTRL_DIGIGAINEN_DEFAULT               0x00000000UL                                      /**< Mode DEFAULT for MODEM_DIGIGAINCTRL         */
#define MODEM_DIGIGAINCTRL_DIGIGAINEN_DEFAULT                (_MODEM_DIGIGAINCTRL_DIGIGAINEN_DEFAULT << 0)     /**< Shifted mode DEFAULT for MODEM_DIGIGAINCTRL */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_SHIFT                1                                                 /**< Shift value for MODEM_DIGIGAINSEL           */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_MASK                 0x3EUL                                            /**< Bit mask for MODEM_DIGIGAINSEL              */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_DEFAULT              0x00000000UL                                      /**< Mode DEFAULT for MODEM_DIGIGAINCTRL         */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM3               0x00000000UL                                      /**< Mode GAINM3 for MODEM_DIGIGAINCTRL          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P75            0x00000001UL                                      /**< Mode GAINM2P75 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P5             0x00000002UL                                      /**< Mode GAINM2P5 for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P25            0x00000003UL                                      /**< Mode GAINM2P25 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2               0x00000004UL                                      /**< Mode GAINM2 for MODEM_DIGIGAINCTRL          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P75            0x00000005UL                                      /**< Mode GAINM1P75 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P5             0x00000006UL                                      /**< Mode GAINM1P5 for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P25            0x00000007UL                                      /**< Mode GAINM1P25 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1               0x00000008UL                                      /**< Mode GAINM1 for MODEM_DIGIGAINCTRL          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P75            0x00000009UL                                      /**< Mode GAINM0P75 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P5             0x0000000AUL                                      /**< Mode GAINM0P5 for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P25            0x0000000BUL                                      /**< Mode GAINM0P25 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0               0x0000000CUL                                      /**< Mode GAINM0 for MODEM_DIGIGAINCTRL          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P25            0x0000000DUL                                      /**< Mode GAINP0P25 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P5             0x0000000EUL                                      /**< Mode GAINP0P5 for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P75            0x0000000FUL                                      /**< Mode GAINP0P75 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1               0x00000010UL                                      /**< Mode GAINP1 for MODEM_DIGIGAINCTRL          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P25            0x00000011UL                                      /**< Mode GAINP1P25 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P5             0x00000012UL                                      /**< Mode GAINP1P5 for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P75            0x00000013UL                                      /**< Mode GAINP1P75 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2               0x00000014UL                                      /**< Mode GAINP2 for MODEM_DIGIGAINCTRL          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P25            0x00000015UL                                      /**< Mode GAINP2P25 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P5             0x00000016UL                                      /**< Mode GAINP2P5 for MODEM_DIGIGAINCTRL        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P75            0x00000017UL                                      /**< Mode GAINP2P75 for MODEM_DIGIGAINCTRL       */
#define _MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP3               0x00000018UL                                      /**< Mode GAINP3 for MODEM_DIGIGAINCTRL          */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_DEFAULT               (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_DEFAULT << 1)    /**< Shifted mode DEFAULT for MODEM_DIGIGAINCTRL */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM3                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM3 << 1)     /**< Shifted mode GAINM3 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P75             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P75 << 1)  /**< Shifted mode GAINM2P75 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P5              (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P5 << 1)   /**< Shifted mode GAINM2P5 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P25             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2P25 << 1)  /**< Shifted mode GAINM2P25 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM2 << 1)     /**< Shifted mode GAINM2 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P75             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P75 << 1)  /**< Shifted mode GAINM1P75 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P5              (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P5 << 1)   /**< Shifted mode GAINM1P5 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P25             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1P25 << 1)  /**< Shifted mode GAINM1P25 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM1 << 1)     /**< Shifted mode GAINM1 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P75             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P75 << 1)  /**< Shifted mode GAINM0P75 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P5              (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P5 << 1)   /**< Shifted mode GAINM0P5 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P25             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0P25 << 1)  /**< Shifted mode GAINM0P25 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINM0 << 1)     /**< Shifted mode GAINM0 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P25             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P25 << 1)  /**< Shifted mode GAINP0P25 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P5              (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P5 << 1)   /**< Shifted mode GAINP0P5 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P75             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP0P75 << 1)  /**< Shifted mode GAINP0P75 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1 << 1)     /**< Shifted mode GAINP1 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P25             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P25 << 1)  /**< Shifted mode GAINP1P25 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P5              (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P5 << 1)   /**< Shifted mode GAINP1P5 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P75             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP1P75 << 1)  /**< Shifted mode GAINP1P75 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2 << 1)     /**< Shifted mode GAINP2 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P25             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P25 << 1)  /**< Shifted mode GAINP2P25 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P5              (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P5 << 1)   /**< Shifted mode GAINP2P5 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P75             (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP2P75 << 1)  /**< Shifted mode GAINP2P75 for MODEM_DIGIGAINCTRL*/
#define MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP3                (_MODEM_DIGIGAINCTRL_DIGIGAINSEL_GAINP3 << 1)     /**< Shifted mode GAINP3 for MODEM_DIGIGAINCTRL  */
#define MODEM_DIGIGAINCTRL_DIGIGAINDOUBLE                    (0x1UL << 6)                                      /**< Digital Gain Doubled                        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINDOUBLE_SHIFT             6                                                 /**< Shift value for MODEM_DIGIGAINDOUBLE        */
#define _MODEM_DIGIGAINCTRL_DIGIGAINDOUBLE_MASK              0x40UL                                            /**< Bit mask for MODEM_DIGIGAINDOUBLE           */
#define _MODEM_DIGIGAINCTRL_DIGIGAINDOUBLE_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for MODEM_DIGIGAINCTRL         */
#define MODEM_DIGIGAINCTRL_DIGIGAINDOUBLE_DEFAULT            (_MODEM_DIGIGAINCTRL_DIGIGAINDOUBLE_DEFAULT << 6) /**< Shifted mode DEFAULT for MODEM_DIGIGAINCTRL */
#define MODEM_DIGIGAINCTRL_DIGIGAINHALF                      (0x1UL << 7)                                      /**< Digital Gain Halved                         */
#define _MODEM_DIGIGAINCTRL_DIGIGAINHALF_SHIFT               7                                                 /**< Shift value for MODEM_DIGIGAINHALF          */
#define _MODEM_DIGIGAINCTRL_DIGIGAINHALF_MASK                0x80UL                                            /**< Bit mask for MODEM_DIGIGAINHALF             */
#define _MODEM_DIGIGAINCTRL_DIGIGAINHALF_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for MODEM_DIGIGAINCTRL         */
#define MODEM_DIGIGAINCTRL_DIGIGAINHALF_DEFAULT              (_MODEM_DIGIGAINCTRL_DIGIGAINHALF_DEFAULT << 7)   /**< Shifted mode DEFAULT for MODEM_DIGIGAINCTRL */
#define MODEM_DIGIGAINCTRL_DEC0GAIN                          (0x1UL << 8)                                      /**< DEC0 Gain Select                            */
#define _MODEM_DIGIGAINCTRL_DEC0GAIN_SHIFT                   8                                                 /**< Shift value for MODEM_DEC0GAIN              */
#define _MODEM_DIGIGAINCTRL_DEC0GAIN_MASK                    0x100UL                                           /**< Bit mask for MODEM_DEC0GAIN                 */
#define _MODEM_DIGIGAINCTRL_DEC0GAIN_DEFAULT                 0x00000000UL                                      /**< Mode DEFAULT for MODEM_DIGIGAINCTRL         */
#define MODEM_DIGIGAINCTRL_DEC0GAIN_DEFAULT                  (_MODEM_DIGIGAINCTRL_DEC0GAIN_DEFAULT << 8)       /**< Shifted mode DEFAULT for MODEM_DIGIGAINCTRL */

/* Bit fields for MODEM PRSCTRL */
#define _MODEM_PRSCTRL_RESETVALUE                            0x00000000UL                              /**< Default value for MODEM_PRSCTRL             */
#define _MODEM_PRSCTRL_MASK                                  0x0003FFFFUL                              /**< Mask for MODEM_PRSCTRL                      */
#define _MODEM_PRSCTRL_POSTPONESEL_SHIFT                     0                                         /**< Shift value for MODEM_POSTPONESEL           */
#define _MODEM_PRSCTRL_POSTPONESEL_MASK                      0x3UL                                     /**< Bit mask for MODEM_POSTPONESEL              */
#define _MODEM_PRSCTRL_POSTPONESEL_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_POSTPONESEL_DEFAULT                    (_MODEM_PRSCTRL_POSTPONESEL_DEFAULT << 0) /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_ADVANCESEL_SHIFT                      2                                         /**< Shift value for MODEM_ADVANCESEL            */
#define _MODEM_PRSCTRL_ADVANCESEL_MASK                       0xCUL                                     /**< Bit mask for MODEM_ADVANCESEL               */
#define _MODEM_PRSCTRL_ADVANCESEL_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_ADVANCESEL_DEFAULT                     (_MODEM_PRSCTRL_ADVANCESEL_DEFAULT << 2)  /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_NEWWNDSEL_SHIFT                       4                                         /**< Shift value for MODEM_NEWWNDSEL             */
#define _MODEM_PRSCTRL_NEWWNDSEL_MASK                        0x30UL                                    /**< Bit mask for MODEM_NEWWNDSEL                */
#define _MODEM_PRSCTRL_NEWWNDSEL_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_NEWWNDSEL_DEFAULT                      (_MODEM_PRSCTRL_NEWWNDSEL_DEFAULT << 4)   /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_WEAKSEL_SHIFT                         6                                         /**< Shift value for MODEM_WEAKSEL               */
#define _MODEM_PRSCTRL_WEAKSEL_MASK                          0xC0UL                                    /**< Bit mask for MODEM_WEAKSEL                  */
#define _MODEM_PRSCTRL_WEAKSEL_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_WEAKSEL_DEFAULT                        (_MODEM_PRSCTRL_WEAKSEL_DEFAULT << 6)     /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_SYNCSENTSEL_SHIFT                     8                                         /**< Shift value for MODEM_SYNCSENTSEL           */
#define _MODEM_PRSCTRL_SYNCSENTSEL_MASK                      0x300UL                                   /**< Bit mask for MODEM_SYNCSENTSEL              */
#define _MODEM_PRSCTRL_SYNCSENTSEL_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_SYNCSENTSEL_DEFAULT                    (_MODEM_PRSCTRL_SYNCSENTSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_PRESENTSEL_SHIFT                      10                                        /**< Shift value for MODEM_PRESENTSEL            */
#define _MODEM_PRSCTRL_PRESENTSEL_MASK                       0xC00UL                                   /**< Bit mask for MODEM_PRESENTSEL               */
#define _MODEM_PRSCTRL_PRESENTSEL_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_PRESENTSEL_DEFAULT                     (_MODEM_PRSCTRL_PRESENTSEL_DEFAULT << 10) /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_LOWCORRSEL_SHIFT                      12                                        /**< Shift value for MODEM_LOWCORRSEL            */
#define _MODEM_PRSCTRL_LOWCORRSEL_MASK                       0x3000UL                                  /**< Bit mask for MODEM_LOWCORRSEL               */
#define _MODEM_PRSCTRL_LOWCORRSEL_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_LOWCORRSEL_DEFAULT                     (_MODEM_PRSCTRL_LOWCORRSEL_DEFAULT << 12) /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_ANT0SEL_SHIFT                         14                                        /**< Shift value for MODEM_ANT0SEL               */
#define _MODEM_PRSCTRL_ANT0SEL_MASK                          0xC000UL                                  /**< Bit mask for MODEM_ANT0SEL                  */
#define _MODEM_PRSCTRL_ANT0SEL_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_ANT0SEL_DEFAULT                        (_MODEM_PRSCTRL_ANT0SEL_DEFAULT << 14)    /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */
#define _MODEM_PRSCTRL_ANT1SEL_SHIFT                         16                                        /**< Shift value for MODEM_ANT1SEL               */
#define _MODEM_PRSCTRL_ANT1SEL_MASK                          0x30000UL                                 /**< Bit mask for MODEM_ANT1SEL                  */
#define _MODEM_PRSCTRL_ANT1SEL_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for MODEM_PRSCTRL              */
#define MODEM_PRSCTRL_ANT1SEL_DEFAULT                        (_MODEM_PRSCTRL_ANT1SEL_DEFAULT << 16)    /**< Shifted mode DEFAULT for MODEM_PRSCTRL      */

/* Bit fields for MODEM IRCALCOEFWR */
#define _MODEM_IRCALCOEFWR_RESETVALUE                        0x00000000UL                              /**< Default value for MODEM_IRCALCOEFWR         */
#define _MODEM_IRCALCOEFWR_MASK                              0xFFFFFFFFUL                              /**< Mask for MODEM_IRCALCOEFWR                  */
#define _MODEM_IRCALCOEFWR_CRVWD_SHIFT                       0                                         /**< Shift value for MODEM_CRVWD                 */
#define _MODEM_IRCALCOEFWR_CRVWD_MASK                        0x7FFFUL                                  /**< Bit mask for MODEM_CRVWD                    */
#define _MODEM_IRCALCOEFWR_CRVWD_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_IRCALCOEFWR          */
#define MODEM_IRCALCOEFWR_CRVWD_DEFAULT                      (_MODEM_IRCALCOEFWR_CRVWD_DEFAULT << 0)   /**< Shifted mode DEFAULT for MODEM_IRCALCOEFWR  */
#define MODEM_IRCALCOEFWR_CRVWEN                             (0x1UL << 15)                             /**< CIV Coefficient Write Enable                */
#define _MODEM_IRCALCOEFWR_CRVWEN_SHIFT                      15                                        /**< Shift value for MODEM_CRVWEN                */
#define _MODEM_IRCALCOEFWR_CRVWEN_MASK                       0x8000UL                                  /**< Bit mask for MODEM_CRVWEN                   */
#define _MODEM_IRCALCOEFWR_CRVWEN_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_IRCALCOEFWR          */
#define MODEM_IRCALCOEFWR_CRVWEN_DEFAULT                     (_MODEM_IRCALCOEFWR_CRVWEN_DEFAULT << 15) /**< Shifted mode DEFAULT for MODEM_IRCALCOEFWR  */
#define _MODEM_IRCALCOEFWR_CIVWD_SHIFT                       16                                        /**< Shift value for MODEM_CIVWD                 */
#define _MODEM_IRCALCOEFWR_CIVWD_MASK                        0x7FFF0000UL                              /**< Bit mask for MODEM_CIVWD                    */
#define _MODEM_IRCALCOEFWR_CIVWD_DEFAULT                     0x00000000UL                              /**< Mode DEFAULT for MODEM_IRCALCOEFWR          */
#define MODEM_IRCALCOEFWR_CIVWD_DEFAULT                      (_MODEM_IRCALCOEFWR_CIVWD_DEFAULT << 16)  /**< Shifted mode DEFAULT for MODEM_IRCALCOEFWR  */
#define MODEM_IRCALCOEFWR_CIVWEN                             (0x1UL << 31)                             /**< CIV Coefficient Write Enable                */
#define _MODEM_IRCALCOEFWR_CIVWEN_SHIFT                      31                                        /**< Shift value for MODEM_CIVWEN                */
#define _MODEM_IRCALCOEFWR_CIVWEN_MASK                       0x80000000UL                              /**< Bit mask for MODEM_CIVWEN                   */
#define _MODEM_IRCALCOEFWR_CIVWEN_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for MODEM_IRCALCOEFWR          */
#define MODEM_IRCALCOEFWR_CIVWEN_DEFAULT                     (_MODEM_IRCALCOEFWR_CIVWEN_DEFAULT << 31) /**< Shifted mode DEFAULT for MODEM_IRCALCOEFWR  */

/** @} End of group EFR32MG21_MODEM_BitFields */
/** @} End of group EFR32MG21_MODEM */
/** @} End of group Parts */
#endif /* EFR32MG21_MODEM_H */
