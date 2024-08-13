/**************************************************************************//**
 * @file
 * @brief EFR32MG22 RAC register and bit field definitions
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
#ifndef EFR32MG22_RAC_H
#define EFR32MG22_RAC_H
#define RAC_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG22_RAC RAC
 * @{
 * @brief EFR32MG22 RAC Register Declaration.
 *****************************************************************************/

/** RAC Register Declaration. */
typedef struct {
  __IM uint32_t  IPVERSION;                     /**< IP Version                                         */
  __IOM uint32_t EN;                            /**< Enable peripheral clock to this module             */
  __IOM uint32_t RXENSRCEN;                     /**< RXEN Source Enable                                 */
  __IM uint32_t  STATUS;                        /**< Radio State Machine Status                         */
  __IOM uint32_t CMD;                           /**< Radio Commands                                     */
  __IOM uint32_t CTRL;                          /**< Radio Control Register                             */
  __IOM uint32_t FORCESTATE;                    /**< Force state transition                             */
  __IOM uint32_t IF;                            /**< Radio Controller Interrupt Flags                   */
  __IOM uint32_t IEN;                           /**< Interrupt Enable Register                          */
  __IOM uint32_t TESTCTRL;                      /**< Test Control Register                              */
  __IOM uint32_t SEQIF;                         /**< SEQ Interrupt Flags                                */
  __IOM uint32_t SEQIEN;                        /**< SEQ Interrupt Enable Register                      */
  __IM uint32_t  STIMER;                        /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP;                    /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t SEQCTRL;                       /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC;                         /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0;                           /**< Storage Register 0                                 */
  __IOM uint32_t SR1;                           /**< Storage Register 1                                 */
  __IOM uint32_t SR2;                           /**< Storage Register 2                                 */
  __IOM uint32_t SR3;                           /**< Storage Register 3                                 */
  __IOM uint32_t STCTRL;                        /**< Sys tick timer Control Register                    */
  __IOM uint32_t FRCTXWORD;                     /**< FRC wordbuffer write                               */
  __IM uint32_t  FRCRXWORD;                     /**< FRC wordbuffer read                                */
  __IOM uint32_t EM1PCSR;                       /**< Radio EM1P Control and Status Register             */
  uint32_t       RESERVED0[13U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL;                   /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL;                  /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL;                       /**< VCO Control Register                               */
  uint32_t       RESERVED1[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL;                     /**< SYNTH Control Register                             */
  uint32_t       RESERVED2[1U];                 /**< Reserved for future use                            */
  __IM uint32_t  STATUS2;                       /**< Radio State Machine Status 2                       */
  __IOM uint32_t IFPGACTRL;                     /**< IF PGA Control Register                            */
  __IOM uint32_t PAENCTRL;                      /**< PA Enable Control Register                         */
  __IOM uint32_t APC;                           /**< Automatic Power Control Register                   */
  __IOM uint32_t AUXADCTRIM;                    /**< AUXADCTRIM                                         */
  __IOM uint32_t AUXADCEN;                      /**< AUXADCEN                                           */
  __IOM uint32_t AUXADCCTRL0;                   /**< Auxiliary ADC register control                     */
  __IOM uint32_t AUXADCCTRL1;                   /**< AUXADCCTRL1                                        */
  __IM uint32_t  AUXADCOUT;                     /**< Auxiliary ADC digital output                       */
  __IOM uint32_t CLKMULTEN0;                    /**< CLKMULTEN0                                         */
  __IOM uint32_t CLKMULTEN1;                    /**< CLKMULTEN1                                         */
  __IOM uint32_t CLKMULTCTRL;                   /**< CLKMULTCTRL                                        */
  __IM uint32_t  CLKMULTSTATUS;                 /**< CLKMULTSTATUS                                      */
  uint32_t       RESERVED3[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM0;                    /**< IFADCTRIM0                                         */
  __IOM uint32_t IFADCTRIM1;                    /**< IFADCTRIM1                                         */
  __IOM uint32_t IFADCCAL;                      /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS;                   /**< IFADCSTATUS                                        */
  uint32_t       RESERVED4[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0;                   /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1;                   /**< LNAMIXTRIM1                                        */
  uint32_t       RESERVED5[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXCAL;                     /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN;                      /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL;                       /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0;                       /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1;                       /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2;                       /**< PATRIM2                                            */
  __IOM uint32_t PATRIM3;                       /**< PATRIM3                                            */
  __IOM uint32_t PACTRL;                        /**< PACTRL                                             */
  uint32_t       RESERVED6[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM;                       /**< PGATRIM                                            */
  __IOM uint32_t PGACAL;                        /**< PGACAL                                             */
  __IOM uint32_t PGACTRL;                       /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL;                     /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL;                    /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN;                       /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN;                      /**< RFPATHEN                                           */
  __IOM uint32_t RX;                            /**< RX                                                 */
  __IOM uint32_t TX;                            /**< TX                                                 */
  uint32_t       RESERVED7[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0;                       /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1;                       /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL;                         /**< SYCAL                                              */
  __IOM uint32_t SYEN;                          /**< SYEN                                               */
  __IOM uint32_t SYLOEN;                        /**< SYLOEN                                             */
  uint32_t       RESERVED8[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL;                     /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL;              /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS;            /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL;                  /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS;                /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT;                   /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED9[2U];                 /**< Reserved for future use                            */
  __IOM uint32_t AGCOVERWRITE;                  /**< OVERWRITE AGC                                      */
  uint32_t       RESERVED10[149U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0;                      /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1;                      /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2;                      /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3;                      /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4;                      /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5;                      /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6;                      /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7;                      /**< SCRATCH7                                           */
  uint32_t       RESERVED11[250U];              /**< Reserved for future use                            */
  __IOM uint32_t THMSW;                         /**< Thermister control                                 */
  uint32_t       RESERVED12[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED13[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED14[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED15[513U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_SET;                 /**< IP Version                                         */
  __IOM uint32_t EN_SET;                        /**< Enable peripheral clock to this module             */
  __IOM uint32_t RXENSRCEN_SET;                 /**< RXEN Source Enable                                 */
  __IM uint32_t  STATUS_SET;                    /**< Radio State Machine Status                         */
  __IOM uint32_t CMD_SET;                       /**< Radio Commands                                     */
  __IOM uint32_t CTRL_SET;                      /**< Radio Control Register                             */
  __IOM uint32_t FORCESTATE_SET;                /**< Force state transition                             */
  __IOM uint32_t IF_SET;                        /**< Radio Controller Interrupt Flags                   */
  __IOM uint32_t IEN_SET;                       /**< Interrupt Enable Register                          */
  __IOM uint32_t TESTCTRL_SET;                  /**< Test Control Register                              */
  __IOM uint32_t SEQIF_SET;                     /**< SEQ Interrupt Flags                                */
  __IOM uint32_t SEQIEN_SET;                    /**< SEQ Interrupt Enable Register                      */
  __IM uint32_t  STIMER_SET;                    /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP_SET;                /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t SEQCTRL_SET;                   /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC_SET;                     /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0_SET;                       /**< Storage Register 0                                 */
  __IOM uint32_t SR1_SET;                       /**< Storage Register 1                                 */
  __IOM uint32_t SR2_SET;                       /**< Storage Register 2                                 */
  __IOM uint32_t SR3_SET;                       /**< Storage Register 3                                 */
  __IOM uint32_t STCTRL_SET;                    /**< Sys tick timer Control Register                    */
  __IOM uint32_t FRCTXWORD_SET;                 /**< FRC wordbuffer write                               */
  __IM uint32_t  FRCRXWORD_SET;                 /**< FRC wordbuffer read                                */
  __IOM uint32_t EM1PCSR_SET;                   /**< Radio EM1P Control and Status Register             */
  uint32_t       RESERVED16[13U];               /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL_SET;               /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL_SET;              /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL_SET;                   /**< VCO Control Register                               */
  uint32_t       RESERVED17[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL_SET;                 /**< SYNTH Control Register                             */
  uint32_t       RESERVED18[1U];                /**< Reserved for future use                            */
  __IM uint32_t  STATUS2_SET;                   /**< Radio State Machine Status 2                       */
  __IOM uint32_t IFPGACTRL_SET;                 /**< IF PGA Control Register                            */
  __IOM uint32_t PAENCTRL_SET;                  /**< PA Enable Control Register                         */
  __IOM uint32_t APC_SET;                       /**< Automatic Power Control Register                   */
  __IOM uint32_t AUXADCTRIM_SET;                /**< AUXADCTRIM                                         */
  __IOM uint32_t AUXADCEN_SET;                  /**< AUXADCEN                                           */
  __IOM uint32_t AUXADCCTRL0_SET;               /**< Auxiliary ADC register control                     */
  __IOM uint32_t AUXADCCTRL1_SET;               /**< AUXADCCTRL1                                        */
  __IM uint32_t  AUXADCOUT_SET;                 /**< Auxiliary ADC digital output                       */
  __IOM uint32_t CLKMULTEN0_SET;                /**< CLKMULTEN0                                         */
  __IOM uint32_t CLKMULTEN1_SET;                /**< CLKMULTEN1                                         */
  __IOM uint32_t CLKMULTCTRL_SET;               /**< CLKMULTCTRL                                        */
  __IM uint32_t  CLKMULTSTATUS_SET;             /**< CLKMULTSTATUS                                      */
  uint32_t       RESERVED19[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM0_SET;                /**< IFADCTRIM0                                         */
  __IOM uint32_t IFADCTRIM1_SET;                /**< IFADCTRIM1                                         */
  __IOM uint32_t IFADCCAL_SET;                  /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS_SET;               /**< IFADCSTATUS                                        */
  uint32_t       RESERVED20[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0_SET;               /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1_SET;               /**< LNAMIXTRIM1                                        */
  uint32_t       RESERVED21[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXCAL_SET;                 /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN_SET;                  /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL_SET;                   /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0_SET;                   /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1_SET;                   /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2_SET;                   /**< PATRIM2                                            */
  __IOM uint32_t PATRIM3_SET;                   /**< PATRIM3                                            */
  __IOM uint32_t PACTRL_SET;                    /**< PACTRL                                             */
  uint32_t       RESERVED22[1U];                /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM_SET;                   /**< PGATRIM                                            */
  __IOM uint32_t PGACAL_SET;                    /**< PGACAL                                             */
  __IOM uint32_t PGACTRL_SET;                   /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL_SET;                 /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL_SET;                /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN_SET;                   /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN_SET;                  /**< RFPATHEN                                           */
  __IOM uint32_t RX_SET;                        /**< RX                                                 */
  __IOM uint32_t TX_SET;                        /**< TX                                                 */
  uint32_t       RESERVED23[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0_SET;                   /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1_SET;                   /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL_SET;                     /**< SYCAL                                              */
  __IOM uint32_t SYEN_SET;                      /**< SYEN                                               */
  __IOM uint32_t SYLOEN_SET;                    /**< SYLOEN                                             */
  uint32_t       RESERVED24[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL_SET;                 /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL_SET;          /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS_SET;        /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL_SET;              /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS_SET;            /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT_SET;               /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED25[2U];                /**< Reserved for future use                            */
  __IOM uint32_t AGCOVERWRITE_SET;              /**< OVERWRITE AGC                                      */
  uint32_t       RESERVED26[149U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0_SET;                  /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1_SET;                  /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2_SET;                  /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3_SET;                  /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4_SET;                  /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5_SET;                  /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6_SET;                  /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7_SET;                  /**< SCRATCH7                                           */
  uint32_t       RESERVED27[250U];              /**< Reserved for future use                            */
  __IOM uint32_t THMSW_SET;                     /**< Thermister control                                 */
  uint32_t       RESERVED28[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED29[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED30[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED31[513U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_CLR;                 /**< IP Version                                         */
  __IOM uint32_t EN_CLR;                        /**< Enable peripheral clock to this module             */
  __IOM uint32_t RXENSRCEN_CLR;                 /**< RXEN Source Enable                                 */
  __IM uint32_t  STATUS_CLR;                    /**< Radio State Machine Status                         */
  __IOM uint32_t CMD_CLR;                       /**< Radio Commands                                     */
  __IOM uint32_t CTRL_CLR;                      /**< Radio Control Register                             */
  __IOM uint32_t FORCESTATE_CLR;                /**< Force state transition                             */
  __IOM uint32_t IF_CLR;                        /**< Radio Controller Interrupt Flags                   */
  __IOM uint32_t IEN_CLR;                       /**< Interrupt Enable Register                          */
  __IOM uint32_t TESTCTRL_CLR;                  /**< Test Control Register                              */
  __IOM uint32_t SEQIF_CLR;                     /**< SEQ Interrupt Flags                                */
  __IOM uint32_t SEQIEN_CLR;                    /**< SEQ Interrupt Enable Register                      */
  __IM uint32_t  STIMER_CLR;                    /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP_CLR;                /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t SEQCTRL_CLR;                   /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC_CLR;                     /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0_CLR;                       /**< Storage Register 0                                 */
  __IOM uint32_t SR1_CLR;                       /**< Storage Register 1                                 */
  __IOM uint32_t SR2_CLR;                       /**< Storage Register 2                                 */
  __IOM uint32_t SR3_CLR;                       /**< Storage Register 3                                 */
  __IOM uint32_t STCTRL_CLR;                    /**< Sys tick timer Control Register                    */
  __IOM uint32_t FRCTXWORD_CLR;                 /**< FRC wordbuffer write                               */
  __IM uint32_t  FRCRXWORD_CLR;                 /**< FRC wordbuffer read                                */
  __IOM uint32_t EM1PCSR_CLR;                   /**< Radio EM1P Control and Status Register             */
  uint32_t       RESERVED32[13U];               /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL_CLR;               /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL_CLR;              /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL_CLR;                   /**< VCO Control Register                               */
  uint32_t       RESERVED33[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL_CLR;                 /**< SYNTH Control Register                             */
  uint32_t       RESERVED34[1U];                /**< Reserved for future use                            */
  __IM uint32_t  STATUS2_CLR;                   /**< Radio State Machine Status 2                       */
  __IOM uint32_t IFPGACTRL_CLR;                 /**< IF PGA Control Register                            */
  __IOM uint32_t PAENCTRL_CLR;                  /**< PA Enable Control Register                         */
  __IOM uint32_t APC_CLR;                       /**< Automatic Power Control Register                   */
  __IOM uint32_t AUXADCTRIM_CLR;                /**< AUXADCTRIM                                         */
  __IOM uint32_t AUXADCEN_CLR;                  /**< AUXADCEN                                           */
  __IOM uint32_t AUXADCCTRL0_CLR;               /**< Auxiliary ADC register control                     */
  __IOM uint32_t AUXADCCTRL1_CLR;               /**< AUXADCCTRL1                                        */
  __IM uint32_t  AUXADCOUT_CLR;                 /**< Auxiliary ADC digital output                       */
  __IOM uint32_t CLKMULTEN0_CLR;                /**< CLKMULTEN0                                         */
  __IOM uint32_t CLKMULTEN1_CLR;                /**< CLKMULTEN1                                         */
  __IOM uint32_t CLKMULTCTRL_CLR;               /**< CLKMULTCTRL                                        */
  __IM uint32_t  CLKMULTSTATUS_CLR;             /**< CLKMULTSTATUS                                      */
  uint32_t       RESERVED35[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM0_CLR;                /**< IFADCTRIM0                                         */
  __IOM uint32_t IFADCTRIM1_CLR;                /**< IFADCTRIM1                                         */
  __IOM uint32_t IFADCCAL_CLR;                  /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS_CLR;               /**< IFADCSTATUS                                        */
  uint32_t       RESERVED36[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0_CLR;               /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1_CLR;               /**< LNAMIXTRIM1                                        */
  uint32_t       RESERVED37[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXCAL_CLR;                 /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN_CLR;                  /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL_CLR;                   /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0_CLR;                   /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1_CLR;                   /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2_CLR;                   /**< PATRIM2                                            */
  __IOM uint32_t PATRIM3_CLR;                   /**< PATRIM3                                            */
  __IOM uint32_t PACTRL_CLR;                    /**< PACTRL                                             */
  uint32_t       RESERVED38[1U];                /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM_CLR;                   /**< PGATRIM                                            */
  __IOM uint32_t PGACAL_CLR;                    /**< PGACAL                                             */
  __IOM uint32_t PGACTRL_CLR;                   /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL_CLR;                 /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL_CLR;                /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN_CLR;                   /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN_CLR;                  /**< RFPATHEN                                           */
  __IOM uint32_t RX_CLR;                        /**< RX                                                 */
  __IOM uint32_t TX_CLR;                        /**< TX                                                 */
  uint32_t       RESERVED39[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0_CLR;                   /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1_CLR;                   /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL_CLR;                     /**< SYCAL                                              */
  __IOM uint32_t SYEN_CLR;                      /**< SYEN                                               */
  __IOM uint32_t SYLOEN_CLR;                    /**< SYLOEN                                             */
  uint32_t       RESERVED40[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL_CLR;                 /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL_CLR;          /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS_CLR;        /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL_CLR;              /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS_CLR;            /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT_CLR;               /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED41[2U];                /**< Reserved for future use                            */
  __IOM uint32_t AGCOVERWRITE_CLR;              /**< OVERWRITE AGC                                      */
  uint32_t       RESERVED42[149U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0_CLR;                  /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1_CLR;                  /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2_CLR;                  /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3_CLR;                  /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4_CLR;                  /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5_CLR;                  /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6_CLR;                  /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7_CLR;                  /**< SCRATCH7                                           */
  uint32_t       RESERVED43[250U];              /**< Reserved for future use                            */
  __IOM uint32_t THMSW_CLR;                     /**< Thermister control                                 */
  uint32_t       RESERVED44[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED45[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED46[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED47[513U];              /**< Reserved for future use                            */
  __IM uint32_t  IPVERSION_TGL;                 /**< IP Version                                         */
  __IOM uint32_t EN_TGL;                        /**< Enable peripheral clock to this module             */
  __IOM uint32_t RXENSRCEN_TGL;                 /**< RXEN Source Enable                                 */
  __IM uint32_t  STATUS_TGL;                    /**< Radio State Machine Status                         */
  __IOM uint32_t CMD_TGL;                       /**< Radio Commands                                     */
  __IOM uint32_t CTRL_TGL;                      /**< Radio Control Register                             */
  __IOM uint32_t FORCESTATE_TGL;                /**< Force state transition                             */
  __IOM uint32_t IF_TGL;                        /**< Radio Controller Interrupt Flags                   */
  __IOM uint32_t IEN_TGL;                       /**< Interrupt Enable Register                          */
  __IOM uint32_t TESTCTRL_TGL;                  /**< Test Control Register                              */
  __IOM uint32_t SEQIF_TGL;                     /**< SEQ Interrupt Flags                                */
  __IOM uint32_t SEQIEN_TGL;                    /**< SEQ Interrupt Enable Register                      */
  __IM uint32_t  STIMER_TGL;                    /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP_TGL;                /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t SEQCTRL_TGL;                   /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC_TGL;                     /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0_TGL;                       /**< Storage Register 0                                 */
  __IOM uint32_t SR1_TGL;                       /**< Storage Register 1                                 */
  __IOM uint32_t SR2_TGL;                       /**< Storage Register 2                                 */
  __IOM uint32_t SR3_TGL;                       /**< Storage Register 3                                 */
  __IOM uint32_t STCTRL_TGL;                    /**< Sys tick timer Control Register                    */
  __IOM uint32_t FRCTXWORD_TGL;                 /**< FRC wordbuffer write                               */
  __IM uint32_t  FRCRXWORD_TGL;                 /**< FRC wordbuffer read                                */
  __IOM uint32_t EM1PCSR_TGL;                   /**< Radio EM1P Control and Status Register             */
  uint32_t       RESERVED48[13U];               /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL_TGL;               /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL_TGL;              /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL_TGL;                   /**< VCO Control Register                               */
  uint32_t       RESERVED49[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL_TGL;                 /**< SYNTH Control Register                             */
  uint32_t       RESERVED50[1U];                /**< Reserved for future use                            */
  __IM uint32_t  STATUS2_TGL;                   /**< Radio State Machine Status 2                       */
  __IOM uint32_t IFPGACTRL_TGL;                 /**< IF PGA Control Register                            */
  __IOM uint32_t PAENCTRL_TGL;                  /**< PA Enable Control Register                         */
  __IOM uint32_t APC_TGL;                       /**< Automatic Power Control Register                   */
  __IOM uint32_t AUXADCTRIM_TGL;                /**< AUXADCTRIM                                         */
  __IOM uint32_t AUXADCEN_TGL;                  /**< AUXADCEN                                           */
  __IOM uint32_t AUXADCCTRL0_TGL;               /**< Auxiliary ADC register control                     */
  __IOM uint32_t AUXADCCTRL1_TGL;               /**< AUXADCCTRL1                                        */
  __IM uint32_t  AUXADCOUT_TGL;                 /**< Auxiliary ADC digital output                       */
  __IOM uint32_t CLKMULTEN0_TGL;                /**< CLKMULTEN0                                         */
  __IOM uint32_t CLKMULTEN1_TGL;                /**< CLKMULTEN1                                         */
  __IOM uint32_t CLKMULTCTRL_TGL;               /**< CLKMULTCTRL                                        */
  __IM uint32_t  CLKMULTSTATUS_TGL;             /**< CLKMULTSTATUS                                      */
  uint32_t       RESERVED51[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM0_TGL;                /**< IFADCTRIM0                                         */
  __IOM uint32_t IFADCTRIM1_TGL;                /**< IFADCTRIM1                                         */
  __IOM uint32_t IFADCCAL_TGL;                  /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS_TGL;               /**< IFADCSTATUS                                        */
  uint32_t       RESERVED52[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0_TGL;               /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1_TGL;               /**< LNAMIXTRIM1                                        */
  uint32_t       RESERVED53[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXCAL_TGL;                 /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN_TGL;                  /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL_TGL;                   /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0_TGL;                   /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1_TGL;                   /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2_TGL;                   /**< PATRIM2                                            */
  __IOM uint32_t PATRIM3_TGL;                   /**< PATRIM3                                            */
  __IOM uint32_t PACTRL_TGL;                    /**< PACTRL                                             */
  uint32_t       RESERVED54[1U];                /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM_TGL;                   /**< PGATRIM                                            */
  __IOM uint32_t PGACAL_TGL;                    /**< PGACAL                                             */
  __IOM uint32_t PGACTRL_TGL;                   /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL_TGL;                 /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL_TGL;                /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN_TGL;                   /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN_TGL;                  /**< RFPATHEN                                           */
  __IOM uint32_t RX_TGL;                        /**< RX                                                 */
  __IOM uint32_t TX_TGL;                        /**< TX                                                 */
  uint32_t       RESERVED55[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0_TGL;                   /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1_TGL;                   /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL_TGL;                     /**< SYCAL                                              */
  __IOM uint32_t SYEN_TGL;                      /**< SYEN                                               */
  __IOM uint32_t SYLOEN_TGL;                    /**< SYLOEN                                             */
  uint32_t       RESERVED56[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL_TGL;                 /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL_TGL;          /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS_TGL;        /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL_TGL;              /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS_TGL;            /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT_TGL;               /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED57[2U];                /**< Reserved for future use                            */
  __IOM uint32_t AGCOVERWRITE_TGL;              /**< OVERWRITE AGC                                      */
  uint32_t       RESERVED58[149U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0_TGL;                  /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1_TGL;                  /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2_TGL;                  /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3_TGL;                  /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4_TGL;                  /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5_TGL;                  /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6_TGL;                  /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7_TGL;                  /**< SCRATCH7                                           */
  uint32_t       RESERVED59[250U];              /**< Reserved for future use                            */
  __IOM uint32_t THMSW_TGL;                     /**< Thermister control                                 */
  uint32_t       RESERVED60[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED61[2U];                /**< Reserved for future use                            */
  uint32_t       RESERVED62[1U];                /**< Reserved for future use                            */
} RAC_TypeDef;
/** @} End of group EFR32MG22_RAC */

/**************************************************************************//**
 * @addtogroup EFR32MG22_RAC
 * @{
 * @defgroup EFR32MG22_RAC_BitFields RAC Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for RAC IPVERSION */
#define _RAC_IPVERSION_RESETVALUE                                     0x00000001UL                            /**< Default value for RAC_IPVERSION             */
#define _RAC_IPVERSION_MASK                                           0xFFFFFFFFUL                            /**< Mask for RAC_IPVERSION                      */
#define _RAC_IPVERSION_IPVERSION_SHIFT                                0                                       /**< Shift value for RAC_IPVERSION               */
#define _RAC_IPVERSION_IPVERSION_MASK                                 0xFFFFFFFFUL                            /**< Bit mask for RAC_IPVERSION                  */
#define _RAC_IPVERSION_IPVERSION_DEFAULT                              0x00000001UL                            /**< Mode DEFAULT for RAC_IPVERSION              */
#define RAC_IPVERSION_IPVERSION_DEFAULT                               (_RAC_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_IPVERSION      */

/* Bit fields for RAC EN */
#define _RAC_EN_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_EN                    */
#define _RAC_EN_MASK                                                  0x00000001UL              /**< Mask for RAC_EN                             */
#define RAC_EN_EN                                                     (0x1UL << 0)              /**< Enable peripheral clock to this module      */
#define _RAC_EN_EN_SHIFT                                              0                         /**< Shift value for RAC_EN                      */
#define _RAC_EN_EN_MASK                                               0x1UL                     /**< Bit mask for RAC_EN                         */
#define _RAC_EN_EN_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_EN                     */
#define RAC_EN_EN_DEFAULT                                             (_RAC_EN_EN_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_EN             */

/* Bit fields for RAC RXENSRCEN */
#define _RAC_RXENSRCEN_RESETVALUE                                     0x00000000UL                                /**< Default value for RAC_RXENSRCEN             */
#define _RAC_RXENSRCEN_MASK                                           0x00003FFFUL                                /**< Mask for RAC_RXENSRCEN                      */
#define _RAC_RXENSRCEN_SWRXEN_SHIFT                                   0                                           /**< Shift value for RAC_SWRXEN                  */
#define _RAC_RXENSRCEN_SWRXEN_MASK                                    0xFFUL                                      /**< Bit mask for RAC_SWRXEN                     */
#define _RAC_RXENSRCEN_SWRXEN_DEFAULT                                 0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_SWRXEN_DEFAULT                                  (_RAC_RXENSRCEN_SWRXEN_DEFAULT << 0)        /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */
#define RAC_RXENSRCEN_CHANNELBUSYEN                                   (0x1UL << 8)                                /**< Channel Busy Enable                         */
#define _RAC_RXENSRCEN_CHANNELBUSYEN_SHIFT                            8                                           /**< Shift value for RAC_CHANNELBUSYEN           */
#define _RAC_RXENSRCEN_CHANNELBUSYEN_MASK                             0x100UL                                     /**< Bit mask for RAC_CHANNELBUSYEN              */
#define _RAC_RXENSRCEN_CHANNELBUSYEN_DEFAULT                          0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_CHANNELBUSYEN_DEFAULT                           (_RAC_RXENSRCEN_CHANNELBUSYEN_DEFAULT << 8) /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */
#define RAC_RXENSRCEN_TIMDETEN                                        (0x1UL << 9)                                /**< Timing Detected Enable                      */
#define _RAC_RXENSRCEN_TIMDETEN_SHIFT                                 9                                           /**< Shift value for RAC_TIMDETEN                */
#define _RAC_RXENSRCEN_TIMDETEN_MASK                                  0x200UL                                     /**< Bit mask for RAC_TIMDETEN                   */
#define _RAC_RXENSRCEN_TIMDETEN_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_TIMDETEN_DEFAULT                                (_RAC_RXENSRCEN_TIMDETEN_DEFAULT << 9)      /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */
#define RAC_RXENSRCEN_PREDETEN                                        (0x1UL << 10)                               /**< Preamble Detected Enable                    */
#define _RAC_RXENSRCEN_PREDETEN_SHIFT                                 10                                          /**< Shift value for RAC_PREDETEN                */
#define _RAC_RXENSRCEN_PREDETEN_MASK                                  0x400UL                                     /**< Bit mask for RAC_PREDETEN                   */
#define _RAC_RXENSRCEN_PREDETEN_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_PREDETEN_DEFAULT                                (_RAC_RXENSRCEN_PREDETEN_DEFAULT << 10)     /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */
#define RAC_RXENSRCEN_FRAMEDETEN                                      (0x1UL << 11)                               /**< Frame Detected Enable                       */
#define _RAC_RXENSRCEN_FRAMEDETEN_SHIFT                               11                                          /**< Shift value for RAC_FRAMEDETEN              */
#define _RAC_RXENSRCEN_FRAMEDETEN_MASK                                0x800UL                                     /**< Bit mask for RAC_FRAMEDETEN                 */
#define _RAC_RXENSRCEN_FRAMEDETEN_DEFAULT                             0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_FRAMEDETEN_DEFAULT                              (_RAC_RXENSRCEN_FRAMEDETEN_DEFAULT << 11)   /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */
#define RAC_RXENSRCEN_DEMODRXREQEN                                    (0x1UL << 12)                               /**< DEMOD RX Request Enable                     */
#define _RAC_RXENSRCEN_DEMODRXREQEN_SHIFT                             12                                          /**< Shift value for RAC_DEMODRXREQEN            */
#define _RAC_RXENSRCEN_DEMODRXREQEN_MASK                              0x1000UL                                    /**< Bit mask for RAC_DEMODRXREQEN               */
#define _RAC_RXENSRCEN_DEMODRXREQEN_DEFAULT                           0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_DEMODRXREQEN_DEFAULT                            (_RAC_RXENSRCEN_DEMODRXREQEN_DEFAULT << 12) /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */
#define RAC_RXENSRCEN_PRSRXEN                                         (0x1UL << 13)                               /**< PRS RX Enable                               */
#define _RAC_RXENSRCEN_PRSRXEN_SHIFT                                  13                                          /**< Shift value for RAC_PRSRXEN                 */
#define _RAC_RXENSRCEN_PRSRXEN_MASK                                   0x2000UL                                    /**< Bit mask for RAC_PRSRXEN                    */
#define _RAC_RXENSRCEN_PRSRXEN_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_RXENSRCEN              */
#define RAC_RXENSRCEN_PRSRXEN_DEFAULT                                 (_RAC_RXENSRCEN_PRSRXEN_DEFAULT << 13)      /**< Shifted mode DEFAULT for RAC_RXENSRCEN      */

/* Bit fields for RAC STATUS */
#define _RAC_STATUS_RESETVALUE                                        0x00000000UL                                   /**< Default value for RAC_STATUS                */
#define _RAC_STATUS_MASK                                              0xFFF8FFFFUL                                   /**< Mask for RAC_STATUS                         */
#define _RAC_STATUS_RXMASK_SHIFT                                      0                                              /**< Shift value for RAC_RXMASK                  */
#define _RAC_STATUS_RXMASK_MASK                                       0xFFFFUL                                       /**< Bit mask for RAC_RXMASK                     */
#define _RAC_STATUS_RXMASK_DEFAULT                                    0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define RAC_STATUS_RXMASK_DEFAULT                                     (_RAC_STATUS_RXMASK_DEFAULT << 0)              /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_FORCESTATEACTIVE                                   (0x1UL << 19)                                  /**< FSM state force active                      */
#define _RAC_STATUS_FORCESTATEACTIVE_SHIFT                            19                                             /**< Shift value for RAC_FORCESTATEACTIVE        */
#define _RAC_STATUS_FORCESTATEACTIVE_MASK                             0x80000UL                                      /**< Bit mask for RAC_FORCESTATEACTIVE           */
#define _RAC_STATUS_FORCESTATEACTIVE_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define _RAC_STATUS_FORCESTATEACTIVE_X0                               0x00000000UL                                   /**< Mode X0 for RAC_STATUS                      */
#define _RAC_STATUS_FORCESTATEACTIVE_X1                               0x00000001UL                                   /**< Mode X1 for RAC_STATUS                      */
#define RAC_STATUS_FORCESTATEACTIVE_DEFAULT                           (_RAC_STATUS_FORCESTATEACTIVE_DEFAULT << 19)   /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_FORCESTATEACTIVE_X0                                (_RAC_STATUS_FORCESTATEACTIVE_X0 << 19)        /**< Shifted mode X0 for RAC_STATUS              */
#define RAC_STATUS_FORCESTATEACTIVE_X1                                (_RAC_STATUS_FORCESTATEACTIVE_X1 << 19)        /**< Shifted mode X1 for RAC_STATUS              */
#define RAC_STATUS_TXAFTERFRAMEPEND                                   (0x1UL << 20)                                  /**< TX After Frame Pending                      */
#define _RAC_STATUS_TXAFTERFRAMEPEND_SHIFT                            20                                             /**< Shift value for RAC_TXAFTERFRAMEPEND        */
#define _RAC_STATUS_TXAFTERFRAMEPEND_MASK                             0x100000UL                                     /**< Bit mask for RAC_TXAFTERFRAMEPEND           */
#define _RAC_STATUS_TXAFTERFRAMEPEND_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define _RAC_STATUS_TXAFTERFRAMEPEND_X0                               0x00000000UL                                   /**< Mode X0 for RAC_STATUS                      */
#define _RAC_STATUS_TXAFTERFRAMEPEND_X1                               0x00000001UL                                   /**< Mode X1 for RAC_STATUS                      */
#define RAC_STATUS_TXAFTERFRAMEPEND_DEFAULT                           (_RAC_STATUS_TXAFTERFRAMEPEND_DEFAULT << 20)   /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_TXAFTERFRAMEPEND_X0                                (_RAC_STATUS_TXAFTERFRAMEPEND_X0 << 20)        /**< Shifted mode X0 for RAC_STATUS              */
#define RAC_STATUS_TXAFTERFRAMEPEND_X1                                (_RAC_STATUS_TXAFTERFRAMEPEND_X1 << 20)        /**< Shifted mode X1 for RAC_STATUS              */
#define RAC_STATUS_TXAFTERFRAMEACTIVE                                 (0x1UL << 21)                                  /**< TX After Frame Active                       */
#define _RAC_STATUS_TXAFTERFRAMEACTIVE_SHIFT                          21                                             /**< Shift value for RAC_TXAFTERFRAMEACTIVE      */
#define _RAC_STATUS_TXAFTERFRAMEACTIVE_MASK                           0x200000UL                                     /**< Bit mask for RAC_TXAFTERFRAMEACTIVE         */
#define _RAC_STATUS_TXAFTERFRAMEACTIVE_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define _RAC_STATUS_TXAFTERFRAMEACTIVE_X0                             0x00000000UL                                   /**< Mode X0 for RAC_STATUS                      */
#define _RAC_STATUS_TXAFTERFRAMEACTIVE_X1                             0x00000001UL                                   /**< Mode X1 for RAC_STATUS                      */
#define RAC_STATUS_TXAFTERFRAMEACTIVE_DEFAULT                         (_RAC_STATUS_TXAFTERFRAMEACTIVE_DEFAULT << 21) /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_TXAFTERFRAMEACTIVE_X0                              (_RAC_STATUS_TXAFTERFRAMEACTIVE_X0 << 21)      /**< Shifted mode X0 for RAC_STATUS              */
#define RAC_STATUS_TXAFTERFRAMEACTIVE_X1                              (_RAC_STATUS_TXAFTERFRAMEACTIVE_X1 << 21)      /**< Shifted mode X1 for RAC_STATUS              */
#define RAC_STATUS_SEQSLEEPING                                        (0x1UL << 22)                                  /**< SEQ in sleeping                             */
#define _RAC_STATUS_SEQSLEEPING_SHIFT                                 22                                             /**< Shift value for RAC_SEQSLEEPING             */
#define _RAC_STATUS_SEQSLEEPING_MASK                                  0x400000UL                                     /**< Bit mask for RAC_SEQSLEEPING                */
#define _RAC_STATUS_SEQSLEEPING_DEFAULT                               0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define RAC_STATUS_SEQSLEEPING_DEFAULT                                (_RAC_STATUS_SEQSLEEPING_DEFAULT << 22)        /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_SEQSLEEPDEEP                                       (0x1UL << 23)                                  /**< SEQ in deep sleep                           */
#define _RAC_STATUS_SEQSLEEPDEEP_SHIFT                                23                                             /**< Shift value for RAC_SEQSLEEPDEEP            */
#define _RAC_STATUS_SEQSLEEPDEEP_MASK                                 0x800000UL                                     /**< Bit mask for RAC_SEQSLEEPDEEP               */
#define _RAC_STATUS_SEQSLEEPDEEP_DEFAULT                              0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define RAC_STATUS_SEQSLEEPDEEP_DEFAULT                               (_RAC_STATUS_SEQSLEEPDEEP_DEFAULT << 23)       /**< Shifted mode DEFAULT for RAC_STATUS         */
#define _RAC_STATUS_STATE_SHIFT                                       24                                             /**< Shift value for RAC_STATE                   */
#define _RAC_STATUS_STATE_MASK                                        0xF000000UL                                    /**< Bit mask for RAC_STATE                      */
#define _RAC_STATUS_STATE_DEFAULT                                     0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define _RAC_STATUS_STATE_OFF                                         0x00000000UL                                   /**< Mode OFF for RAC_STATUS                     */
#define _RAC_STATUS_STATE_RXWARM                                      0x00000001UL                                   /**< Mode RXWARM for RAC_STATUS                  */
#define _RAC_STATUS_STATE_RXSEARCH                                    0x00000002UL                                   /**< Mode RXSEARCH for RAC_STATUS                */
#define _RAC_STATUS_STATE_RXFRAME                                     0x00000003UL                                   /**< Mode RXFRAME for RAC_STATUS                 */
#define _RAC_STATUS_STATE_RXPD                                        0x00000004UL                                   /**< Mode RXPD for RAC_STATUS                    */
#define _RAC_STATUS_STATE_RX2RX                                       0x00000005UL                                   /**< Mode RX2RX for RAC_STATUS                   */
#define _RAC_STATUS_STATE_RXOVERFLOW                                  0x00000006UL                                   /**< Mode RXOVERFLOW for RAC_STATUS              */
#define _RAC_STATUS_STATE_RX2TX                                       0x00000007UL                                   /**< Mode RX2TX for RAC_STATUS                   */
#define _RAC_STATUS_STATE_TXWARM                                      0x00000008UL                                   /**< Mode TXWARM for RAC_STATUS                  */
#define _RAC_STATUS_STATE_TX                                          0x00000009UL                                   /**< Mode TX for RAC_STATUS                      */
#define _RAC_STATUS_STATE_TXPD                                        0x0000000AUL                                   /**< Mode TXPD for RAC_STATUS                    */
#define _RAC_STATUS_STATE_TX2RX                                       0x0000000BUL                                   /**< Mode TX2RX for RAC_STATUS                   */
#define _RAC_STATUS_STATE_TX2TX                                       0x0000000CUL                                   /**< Mode TX2TX for RAC_STATUS                   */
#define _RAC_STATUS_STATE_SHUTDOWN                                    0x0000000DUL                                   /**< Mode SHUTDOWN for RAC_STATUS                */
#define _RAC_STATUS_STATE_POR                                         0x0000000EUL                                   /**< Mode POR for RAC_STATUS                     */
#define RAC_STATUS_STATE_DEFAULT                                      (_RAC_STATUS_STATE_DEFAULT << 24)              /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_STATE_OFF                                          (_RAC_STATUS_STATE_OFF << 24)                  /**< Shifted mode OFF for RAC_STATUS             */
#define RAC_STATUS_STATE_RXWARM                                       (_RAC_STATUS_STATE_RXWARM << 24)               /**< Shifted mode RXWARM for RAC_STATUS          */
#define RAC_STATUS_STATE_RXSEARCH                                     (_RAC_STATUS_STATE_RXSEARCH << 24)             /**< Shifted mode RXSEARCH for RAC_STATUS        */
#define RAC_STATUS_STATE_RXFRAME                                      (_RAC_STATUS_STATE_RXFRAME << 24)              /**< Shifted mode RXFRAME for RAC_STATUS         */
#define RAC_STATUS_STATE_RXPD                                         (_RAC_STATUS_STATE_RXPD << 24)                 /**< Shifted mode RXPD for RAC_STATUS            */
#define RAC_STATUS_STATE_RX2RX                                        (_RAC_STATUS_STATE_RX2RX << 24)                /**< Shifted mode RX2RX for RAC_STATUS           */
#define RAC_STATUS_STATE_RXOVERFLOW                                   (_RAC_STATUS_STATE_RXOVERFLOW << 24)           /**< Shifted mode RXOVERFLOW for RAC_STATUS      */
#define RAC_STATUS_STATE_RX2TX                                        (_RAC_STATUS_STATE_RX2TX << 24)                /**< Shifted mode RX2TX for RAC_STATUS           */
#define RAC_STATUS_STATE_TXWARM                                       (_RAC_STATUS_STATE_TXWARM << 24)               /**< Shifted mode TXWARM for RAC_STATUS          */
#define RAC_STATUS_STATE_TX                                           (_RAC_STATUS_STATE_TX << 24)                   /**< Shifted mode TX for RAC_STATUS              */
#define RAC_STATUS_STATE_TXPD                                         (_RAC_STATUS_STATE_TXPD << 24)                 /**< Shifted mode TXPD for RAC_STATUS            */
#define RAC_STATUS_STATE_TX2RX                                        (_RAC_STATUS_STATE_TX2RX << 24)                /**< Shifted mode TX2RX for RAC_STATUS           */
#define RAC_STATUS_STATE_TX2TX                                        (_RAC_STATUS_STATE_TX2TX << 24)                /**< Shifted mode TX2TX for RAC_STATUS           */
#define RAC_STATUS_STATE_SHUTDOWN                                     (_RAC_STATUS_STATE_SHUTDOWN << 24)             /**< Shifted mode SHUTDOWN for RAC_STATUS        */
#define RAC_STATUS_STATE_POR                                          (_RAC_STATUS_STATE_POR << 24)                  /**< Shifted mode POR for RAC_STATUS             */
#define RAC_STATUS_SEQACTIVE                                          (0x1UL << 28)                                  /**< SEQ active                                  */
#define _RAC_STATUS_SEQACTIVE_SHIFT                                   28                                             /**< Shift value for RAC_SEQACTIVE               */
#define _RAC_STATUS_SEQACTIVE_MASK                                    0x10000000UL                                   /**< Bit mask for RAC_SEQACTIVE                  */
#define _RAC_STATUS_SEQACTIVE_DEFAULT                                 0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define RAC_STATUS_SEQACTIVE_DEFAULT                                  (_RAC_STATUS_SEQACTIVE_DEFAULT << 28)          /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_TXENS                                              (0x1UL << 30)                                  /**< TXEN Status                                 */
#define _RAC_STATUS_TXENS_SHIFT                                       30                                             /**< Shift value for RAC_TXENS                   */
#define _RAC_STATUS_TXENS_MASK                                        0x40000000UL                                   /**< Bit mask for RAC_TXENS                      */
#define _RAC_STATUS_TXENS_DEFAULT                                     0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define _RAC_STATUS_TXENS_X0                                          0x00000000UL                                   /**< Mode X0 for RAC_STATUS                      */
#define _RAC_STATUS_TXENS_X1                                          0x00000001UL                                   /**< Mode X1 for RAC_STATUS                      */
#define RAC_STATUS_TXENS_DEFAULT                                      (_RAC_STATUS_TXENS_DEFAULT << 30)              /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_TXENS_X0                                           (_RAC_STATUS_TXENS_X0 << 30)                   /**< Shifted mode X0 for RAC_STATUS              */
#define RAC_STATUS_TXENS_X1                                           (_RAC_STATUS_TXENS_X1 << 30)                   /**< Shifted mode X1 for RAC_STATUS              */
#define RAC_STATUS_RXENS                                              (0x1UL << 31)                                  /**< RXEN Status                                 */
#define _RAC_STATUS_RXENS_SHIFT                                       31                                             /**< Shift value for RAC_RXENS                   */
#define _RAC_STATUS_RXENS_MASK                                        0x80000000UL                                   /**< Bit mask for RAC_RXENS                      */
#define _RAC_STATUS_RXENS_DEFAULT                                     0x00000000UL                                   /**< Mode DEFAULT for RAC_STATUS                 */
#define _RAC_STATUS_RXENS_X0                                          0x00000000UL                                   /**< Mode X0 for RAC_STATUS                      */
#define _RAC_STATUS_RXENS_X1                                          0x00000001UL                                   /**< Mode X1 for RAC_STATUS                      */
#define RAC_STATUS_RXENS_DEFAULT                                      (_RAC_STATUS_RXENS_DEFAULT << 31)              /**< Shifted mode DEFAULT for RAC_STATUS         */
#define RAC_STATUS_RXENS_X0                                           (_RAC_STATUS_RXENS_X0 << 31)                   /**< Shifted mode X0 for RAC_STATUS              */
#define RAC_STATUS_RXENS_X1                                           (_RAC_STATUS_RXENS_X1 << 31)                   /**< Shifted mode X1 for RAC_STATUS              */

/* Bit fields for RAC CMD */
#define _RAC_CMD_RESETVALUE                                           0x00000000UL                            /**< Default value for RAC_CMD                   */
#define _RAC_CMD_MASK                                                 0xC000FDFFUL                            /**< Mask for RAC_CMD                            */
#define RAC_CMD_TXEN                                                  (0x1UL << 0)                            /**< Transmitter Enable                          */
#define _RAC_CMD_TXEN_SHIFT                                           0                                       /**< Shift value for RAC_TXEN                    */
#define _RAC_CMD_TXEN_MASK                                            0x1UL                                   /**< Bit mask for RAC_TXEN                       */
#define _RAC_CMD_TXEN_DEFAULT                                         0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_TXEN_DEFAULT                                          (_RAC_CMD_TXEN_DEFAULT << 0)            /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_FORCETX                                               (0x1UL << 1)                            /**< Force TX Command                            */
#define _RAC_CMD_FORCETX_SHIFT                                        1                                       /**< Shift value for RAC_FORCETX                 */
#define _RAC_CMD_FORCETX_MASK                                         0x2UL                                   /**< Bit mask for RAC_FORCETX                    */
#define _RAC_CMD_FORCETX_DEFAULT                                      0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_FORCETX_DEFAULT                                       (_RAC_CMD_FORCETX_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_TXONCCA                                               (0x1UL << 2)                            /**< Transmit On CCA                             */
#define _RAC_CMD_TXONCCA_SHIFT                                        2                                       /**< Shift value for RAC_TXONCCA                 */
#define _RAC_CMD_TXONCCA_MASK                                         0x4UL                                   /**< Bit mask for RAC_TXONCCA                    */
#define _RAC_CMD_TXONCCA_DEFAULT                                      0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_TXONCCA_DEFAULT                                       (_RAC_CMD_TXONCCA_DEFAULT << 2)         /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_CLEARTXEN                                             (0x1UL << 3)                            /**< Clear TX Enable                             */
#define _RAC_CMD_CLEARTXEN_SHIFT                                      3                                       /**< Shift value for RAC_CLEARTXEN               */
#define _RAC_CMD_CLEARTXEN_MASK                                       0x8UL                                   /**< Bit mask for RAC_CLEARTXEN                  */
#define _RAC_CMD_CLEARTXEN_DEFAULT                                    0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_CLEARTXEN_DEFAULT                                     (_RAC_CMD_CLEARTXEN_DEFAULT << 3)       /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_TXAFTERFRAME                                          (0x1UL << 4)                            /**< TX After Frame                              */
#define _RAC_CMD_TXAFTERFRAME_SHIFT                                   4                                       /**< Shift value for RAC_TXAFTERFRAME            */
#define _RAC_CMD_TXAFTERFRAME_MASK                                    0x10UL                                  /**< Bit mask for RAC_TXAFTERFRAME               */
#define _RAC_CMD_TXAFTERFRAME_DEFAULT                                 0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_TXAFTERFRAME_DEFAULT                                  (_RAC_CMD_TXAFTERFRAME_DEFAULT << 4)    /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_TXDIS                                                 (0x1UL << 5)                            /**< TX Disable                                  */
#define _RAC_CMD_TXDIS_SHIFT                                          5                                       /**< Shift value for RAC_TXDIS                   */
#define _RAC_CMD_TXDIS_MASK                                           0x20UL                                  /**< Bit mask for RAC_TXDIS                      */
#define _RAC_CMD_TXDIS_DEFAULT                                        0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_TXDIS_DEFAULT                                         (_RAC_CMD_TXDIS_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_CLEARRXOVERFLOW                                       (0x1UL << 6)                            /**< Clear RX Overflow                           */
#define _RAC_CMD_CLEARRXOVERFLOW_SHIFT                                6                                       /**< Shift value for RAC_CLEARRXOVERFLOW         */
#define _RAC_CMD_CLEARRXOVERFLOW_MASK                                 0x40UL                                  /**< Bit mask for RAC_CLEARRXOVERFLOW            */
#define _RAC_CMD_CLEARRXOVERFLOW_DEFAULT                              0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_CLEARRXOVERFLOW_DEFAULT                               (_RAC_CMD_CLEARRXOVERFLOW_DEFAULT << 6) /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_RXCAL                                                 (0x1UL << 7)                            /**< Start an RX Calibration                     */
#define _RAC_CMD_RXCAL_SHIFT                                          7                                       /**< Shift value for RAC_RXCAL                   */
#define _RAC_CMD_RXCAL_MASK                                           0x80UL                                  /**< Bit mask for RAC_RXCAL                      */
#define _RAC_CMD_RXCAL_DEFAULT                                        0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_RXCAL_DEFAULT                                         (_RAC_CMD_RXCAL_DEFAULT << 7)           /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_RXDIS                                                 (0x1UL << 8)                            /**< RX Disable                                  */
#define _RAC_CMD_RXDIS_SHIFT                                          8                                       /**< Shift value for RAC_RXDIS                   */
#define _RAC_CMD_RXDIS_MASK                                           0x100UL                                 /**< Bit mask for RAC_RXDIS                      */
#define _RAC_CMD_RXDIS_DEFAULT                                        0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_RXDIS_DEFAULT                                         (_RAC_CMD_RXDIS_DEFAULT << 8)           /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_FRCWR                                                 (0x1UL << 10)                           /**< FRC write cmd                               */
#define _RAC_CMD_FRCWR_SHIFT                                          10                                      /**< Shift value for RAC_FRCWR                   */
#define _RAC_CMD_FRCWR_MASK                                           0x400UL                                 /**< Bit mask for RAC_FRCWR                      */
#define _RAC_CMD_FRCWR_DEFAULT                                        0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_FRCWR_DEFAULT                                         (_RAC_CMD_FRCWR_DEFAULT << 10)          /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_FRCRD                                                 (0x1UL << 11)                           /**< FRC read cmd                                */
#define _RAC_CMD_FRCRD_SHIFT                                          11                                      /**< Shift value for RAC_FRCRD                   */
#define _RAC_CMD_FRCRD_MASK                                           0x800UL                                 /**< Bit mask for RAC_FRCRD                      */
#define _RAC_CMD_FRCRD_DEFAULT                                        0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_FRCRD_DEFAULT                                         (_RAC_CMD_FRCRD_DEFAULT << 11)          /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_PAENSET                                               (0x1UL << 12)                           /**< PAEN Set                                    */
#define _RAC_CMD_PAENSET_SHIFT                                        12                                      /**< Shift value for RAC_PAENSET                 */
#define _RAC_CMD_PAENSET_MASK                                         0x1000UL                                /**< Bit mask for RAC_PAENSET                    */
#define _RAC_CMD_PAENSET_DEFAULT                                      0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_PAENSET_DEFAULT                                       (_RAC_CMD_PAENSET_DEFAULT << 12)        /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_PAENCLEAR                                             (0x1UL << 13)                           /**< PAEN Clear                                  */
#define _RAC_CMD_PAENCLEAR_SHIFT                                      13                                      /**< Shift value for RAC_PAENCLEAR               */
#define _RAC_CMD_PAENCLEAR_MASK                                       0x2000UL                                /**< Bit mask for RAC_PAENCLEAR                  */
#define _RAC_CMD_PAENCLEAR_DEFAULT                                    0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_PAENCLEAR_DEFAULT                                     (_RAC_CMD_PAENCLEAR_DEFAULT << 13)      /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_LNAENSET                                              (0x1UL << 14)                           /**< LNAEN Set                                   */
#define _RAC_CMD_LNAENSET_SHIFT                                       14                                      /**< Shift value for RAC_LNAENSET                */
#define _RAC_CMD_LNAENSET_MASK                                        0x4000UL                                /**< Bit mask for RAC_LNAENSET                   */
#define _RAC_CMD_LNAENSET_DEFAULT                                     0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_LNAENSET_DEFAULT                                      (_RAC_CMD_LNAENSET_DEFAULT << 14)       /**< Shifted mode DEFAULT for RAC_CMD            */
#define RAC_CMD_LNAENCLEAR                                            (0x1UL << 15)                           /**< LNAEN Clear                                 */
#define _RAC_CMD_LNAENCLEAR_SHIFT                                     15                                      /**< Shift value for RAC_LNAENCLEAR              */
#define _RAC_CMD_LNAENCLEAR_MASK                                      0x8000UL                                /**< Bit mask for RAC_LNAENCLEAR                 */
#define _RAC_CMD_LNAENCLEAR_DEFAULT                                   0x00000000UL                            /**< Mode DEFAULT for RAC_CMD                    */
#define RAC_CMD_LNAENCLEAR_DEFAULT                                    (_RAC_CMD_LNAENCLEAR_DEFAULT << 15)     /**< Shifted mode DEFAULT for RAC_CMD            */

/* Bit fields for RAC CTRL */
#define _RAC_CTRL_RESETVALUE                                          0x00000000UL                              /**< Default value for RAC_CTRL                  */
#define _RAC_CTRL_MASK                                                0x1F0107EFUL                              /**< Mask for RAC_CTRL                           */
#define RAC_CTRL_FORCEDISABLE                                         (0x1UL << 0)                              /**< Force Radio Disable                         */
#define _RAC_CTRL_FORCEDISABLE_SHIFT                                  0                                         /**< Shift value for RAC_FORCEDISABLE            */
#define _RAC_CTRL_FORCEDISABLE_MASK                                   0x1UL                                     /**< Bit mask for RAC_FORCEDISABLE               */
#define _RAC_CTRL_FORCEDISABLE_DEFAULT                                0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_FORCEDISABLE_DEFAULT                                 (_RAC_CTRL_FORCEDISABLE_DEFAULT << 0)     /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSTXEN                                              (0x1UL << 1)                              /**< PRS TX Enable                               */
#define _RAC_CTRL_PRSTXEN_SHIFT                                       1                                         /**< Shift value for RAC_PRSTXEN                 */
#define _RAC_CTRL_PRSTXEN_MASK                                        0x2UL                                     /**< Bit mask for RAC_PRSTXEN                    */
#define _RAC_CTRL_PRSTXEN_DEFAULT                                     0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_PRSTXEN_DEFAULT                                      (_RAC_CTRL_PRSTXEN_DEFAULT << 1)          /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_TXAFTERRX                                            (0x1UL << 2)                              /**< TX After RX                                 */
#define _RAC_CTRL_TXAFTERRX_SHIFT                                     2                                         /**< Shift value for RAC_TXAFTERRX               */
#define _RAC_CTRL_TXAFTERRX_MASK                                      0x4UL                                     /**< Bit mask for RAC_TXAFTERRX                  */
#define _RAC_CTRL_TXAFTERRX_DEFAULT                                   0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_TXAFTERRX_X0                                        0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_TXAFTERRX_X1                                        0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_TXAFTERRX_DEFAULT                                    (_RAC_CTRL_TXAFTERRX_DEFAULT << 2)        /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_TXAFTERRX_X0                                         (_RAC_CTRL_TXAFTERRX_X0 << 2)             /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_TXAFTERRX_X1                                         (_RAC_CTRL_TXAFTERRX_X1 << 2)             /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PRSMODE                                              (0x1UL << 3)                              /**< PRS RXEN Mode                               */
#define _RAC_CTRL_PRSMODE_SHIFT                                       3                                         /**< Shift value for RAC_PRSMODE                 */
#define _RAC_CTRL_PRSMODE_MASK                                        0x8UL                                     /**< Bit mask for RAC_PRSMODE                    */
#define _RAC_CTRL_PRSMODE_DEFAULT                                     0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSMODE_DIRECT                                      0x00000000UL                              /**< Mode DIRECT for RAC_CTRL                    */
#define _RAC_CTRL_PRSMODE_PULSE                                       0x00000001UL                              /**< Mode PULSE for RAC_CTRL                     */
#define RAC_CTRL_PRSMODE_DEFAULT                                      (_RAC_CTRL_PRSMODE_DEFAULT << 3)          /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSMODE_DIRECT                                       (_RAC_CTRL_PRSMODE_DIRECT << 3)           /**< Shifted mode DIRECT for RAC_CTRL            */
#define RAC_CTRL_PRSMODE_PULSE                                        (_RAC_CTRL_PRSMODE_PULSE << 3)            /**< Shifted mode PULSE for RAC_CTRL             */
#define RAC_CTRL_PRSCLR                                               (0x1UL << 5)                              /**< PRS RXEN Clear                              */
#define _RAC_CTRL_PRSCLR_SHIFT                                        5                                         /**< Shift value for RAC_PRSCLR                  */
#define _RAC_CTRL_PRSCLR_MASK                                         0x20UL                                    /**< Bit mask for RAC_PRSCLR                     */
#define _RAC_CTRL_PRSCLR_DEFAULT                                      0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSCLR_RXSEARCH                                     0x00000000UL                              /**< Mode RXSEARCH for RAC_CTRL                  */
#define _RAC_CTRL_PRSCLR_PRSCH                                        0x00000001UL                              /**< Mode PRSCH for RAC_CTRL                     */
#define RAC_CTRL_PRSCLR_DEFAULT                                       (_RAC_CTRL_PRSCLR_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSCLR_RXSEARCH                                      (_RAC_CTRL_PRSCLR_RXSEARCH << 5)          /**< Shifted mode RXSEARCH for RAC_CTRL          */
#define RAC_CTRL_PRSCLR_PRSCH                                         (_RAC_CTRL_PRSCLR_PRSCH << 5)             /**< Shifted mode PRSCH for RAC_CTRL             */
#define RAC_CTRL_TXPOSTPONE                                           (0x1UL << 6)                              /**< TX Postpone                                 */
#define _RAC_CTRL_TXPOSTPONE_SHIFT                                    6                                         /**< Shift value for RAC_TXPOSTPONE              */
#define _RAC_CTRL_TXPOSTPONE_MASK                                     0x40UL                                    /**< Bit mask for RAC_TXPOSTPONE                 */
#define _RAC_CTRL_TXPOSTPONE_DEFAULT                                  0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_TXPOSTPONE_X0                                       0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_TXPOSTPONE_X1                                       0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_TXPOSTPONE_DEFAULT                                   (_RAC_CTRL_TXPOSTPONE_DEFAULT << 6)       /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_TXPOSTPONE_X0                                        (_RAC_CTRL_TXPOSTPONE_X0 << 6)            /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_TXPOSTPONE_X1                                        (_RAC_CTRL_TXPOSTPONE_X1 << 6)            /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_ACTIVEPOL                                            (0x1UL << 7)                              /**< ACTIVE signal polarity                      */
#define _RAC_CTRL_ACTIVEPOL_SHIFT                                     7                                         /**< Shift value for RAC_ACTIVEPOL               */
#define _RAC_CTRL_ACTIVEPOL_MASK                                      0x80UL                                    /**< Bit mask for RAC_ACTIVEPOL                  */
#define _RAC_CTRL_ACTIVEPOL_DEFAULT                                   0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_ACTIVEPOL_X0                                        0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_ACTIVEPOL_X1                                        0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_ACTIVEPOL_DEFAULT                                    (_RAC_CTRL_ACTIVEPOL_DEFAULT << 7)        /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_ACTIVEPOL_X0                                         (_RAC_CTRL_ACTIVEPOL_X0 << 7)             /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_ACTIVEPOL_X1                                         (_RAC_CTRL_ACTIVEPOL_X1 << 7)             /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PAENPOL                                              (0x1UL << 8)                              /**< PAEN signal polarity                        */
#define _RAC_CTRL_PAENPOL_SHIFT                                       8                                         /**< Shift value for RAC_PAENPOL                 */
#define _RAC_CTRL_PAENPOL_MASK                                        0x100UL                                   /**< Bit mask for RAC_PAENPOL                    */
#define _RAC_CTRL_PAENPOL_DEFAULT                                     0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PAENPOL_X0                                          0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_PAENPOL_X1                                          0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_PAENPOL_DEFAULT                                      (_RAC_CTRL_PAENPOL_DEFAULT << 8)          /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PAENPOL_X0                                           (_RAC_CTRL_PAENPOL_X0 << 8)               /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_PAENPOL_X1                                           (_RAC_CTRL_PAENPOL_X1 << 8)               /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_LNAENPOL                                             (0x1UL << 9)                              /**< LNAEN signal polarity                       */
#define _RAC_CTRL_LNAENPOL_SHIFT                                      9                                         /**< Shift value for RAC_LNAENPOL                */
#define _RAC_CTRL_LNAENPOL_MASK                                       0x200UL                                   /**< Bit mask for RAC_LNAENPOL                   */
#define _RAC_CTRL_LNAENPOL_DEFAULT                                    0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_LNAENPOL_X0                                         0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_LNAENPOL_X1                                         0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_LNAENPOL_DEFAULT                                     (_RAC_CTRL_LNAENPOL_DEFAULT << 9)         /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_LNAENPOL_X0                                          (_RAC_CTRL_LNAENPOL_X0 << 9)              /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_LNAENPOL_X1                                          (_RAC_CTRL_LNAENPOL_X1 << 9)              /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PRSRXDIS                                             (0x1UL << 10)                             /**< PRS RX Disable                              */
#define _RAC_CTRL_PRSRXDIS_SHIFT                                      10                                        /**< Shift value for RAC_PRSRXDIS                */
#define _RAC_CTRL_PRSRXDIS_MASK                                       0x400UL                                   /**< Bit mask for RAC_PRSRXDIS                   */
#define _RAC_CTRL_PRSRXDIS_DEFAULT                                    0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSRXDIS_X0                                         0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_PRSRXDIS_X1                                         0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_PRSRXDIS_DEFAULT                                     (_RAC_CTRL_PRSRXDIS_DEFAULT << 10)        /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSRXDIS_X0                                          (_RAC_CTRL_PRSRXDIS_X0 << 10)             /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_PRSRXDIS_X1                                          (_RAC_CTRL_PRSRXDIS_X1 << 10)             /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PRSFORCETX                                           (0x1UL << 16)                             /**< PRS Force RX                                */
#define _RAC_CTRL_PRSFORCETX_SHIFT                                    16                                        /**< Shift value for RAC_PRSFORCETX              */
#define _RAC_CTRL_PRSFORCETX_MASK                                     0x10000UL                                 /**< Bit mask for RAC_PRSFORCETX                 */
#define _RAC_CTRL_PRSFORCETX_DEFAULT                                  0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSFORCETX_X0                                       0x00000000UL                              /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_PRSFORCETX_X1                                       0x00000001UL                              /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_PRSFORCETX_DEFAULT                                   (_RAC_CTRL_PRSFORCETX_DEFAULT << 16)      /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSFORCETX_X0                                        (_RAC_CTRL_PRSFORCETX_X0 << 16)           /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_PRSFORCETX_X1                                        (_RAC_CTRL_PRSFORCETX_X1 << 16)           /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_SEQRESET                                             (0x1UL << 24)                             /**< SEQ reset                                   */
#define _RAC_CTRL_SEQRESET_SHIFT                                      24                                        /**< Shift value for RAC_SEQRESET                */
#define _RAC_CTRL_SEQRESET_MASK                                       0x1000000UL                               /**< Bit mask for RAC_SEQRESET                   */
#define _RAC_CTRL_SEQRESET_DEFAULT                                    0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_SEQRESET_DEFAULT                                     (_RAC_CTRL_SEQRESET_DEFAULT << 24)        /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_EXITSHUTDOWNDIS                                      (0x1UL << 25)                             /**< Exit SHUTDOWN state Disable                 */
#define _RAC_CTRL_EXITSHUTDOWNDIS_SHIFT                               25                                        /**< Shift value for RAC_EXITSHUTDOWNDIS         */
#define _RAC_CTRL_EXITSHUTDOWNDIS_MASK                                0x2000000UL                               /**< Bit mask for RAC_EXITSHUTDOWNDIS            */
#define _RAC_CTRL_EXITSHUTDOWNDIS_DEFAULT                             0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_EXITSHUTDOWNDIS_DEFAULT                              (_RAC_CTRL_EXITSHUTDOWNDIS_DEFAULT << 25) /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_CPUWAITDIS                                           (0x1UL << 26)                             /**< SEQ CPU Wait Disable                        */
#define _RAC_CTRL_CPUWAITDIS_SHIFT                                    26                                        /**< Shift value for RAC_CPUWAITDIS              */
#define _RAC_CTRL_CPUWAITDIS_MASK                                     0x4000000UL                               /**< Bit mask for RAC_CPUWAITDIS                 */
#define _RAC_CTRL_CPUWAITDIS_DEFAULT                                  0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_CPUWAITDIS_DEFAULT                                   (_RAC_CTRL_CPUWAITDIS_DEFAULT << 26)      /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_SEQCLKDIS                                            (0x1UL << 27)                             /**< SEQ Clk Disable                             */
#define _RAC_CTRL_SEQCLKDIS_SHIFT                                     27                                        /**< Shift value for RAC_SEQCLKDIS               */
#define _RAC_CTRL_SEQCLKDIS_MASK                                      0x8000000UL                               /**< Bit mask for RAC_SEQCLKDIS                  */
#define _RAC_CTRL_SEQCLKDIS_DEFAULT                                   0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_SEQCLKDIS_DEFAULT                                    (_RAC_CTRL_SEQCLKDIS_DEFAULT << 27)       /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_RXOFDIS                                              (0x1UL << 28)                             /**< Switch to RXOVERFLOW Disable                */
#define _RAC_CTRL_RXOFDIS_SHIFT                                       28                                        /**< Shift value for RAC_RXOFDIS                 */
#define _RAC_CTRL_RXOFDIS_MASK                                        0x10000000UL                              /**< Bit mask for RAC_RXOFDIS                    */
#define _RAC_CTRL_RXOFDIS_DEFAULT                                     0x00000000UL                              /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_RXOFDIS_DEFAULT                                      (_RAC_CTRL_RXOFDIS_DEFAULT << 28)         /**< Shifted mode DEFAULT for RAC_CTRL           */

/* Bit fields for RAC FORCESTATE */
#define _RAC_FORCESTATE_RESETVALUE                                    0x00000000UL                              /**< Default value for RAC_FORCESTATE            */
#define _RAC_FORCESTATE_MASK                                          0x0000000FUL                              /**< Mask for RAC_FORCESTATE                     */
#define _RAC_FORCESTATE_FORCESTATE_SHIFT                              0                                         /**< Shift value for RAC_FORCESTATE              */
#define _RAC_FORCESTATE_FORCESTATE_MASK                               0xFUL                                     /**< Bit mask for RAC_FORCESTATE                 */
#define _RAC_FORCESTATE_FORCESTATE_DEFAULT                            0x00000000UL                              /**< Mode DEFAULT for RAC_FORCESTATE             */
#define RAC_FORCESTATE_FORCESTATE_DEFAULT                             (_RAC_FORCESTATE_FORCESTATE_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_FORCESTATE     */

/* Bit fields for RAC IF */
#define _RAC_IF_RESETVALUE                                            0x00000000UL                       /**< Default value for RAC_IF                    */
#define _RAC_IF_MASK                                                  0x00FF000FUL                       /**< Mask for RAC_IF                             */
#define RAC_IF_STATECHANGE                                            (0x1UL << 0)                       /**< Radio State Change                          */
#define _RAC_IF_STATECHANGE_SHIFT                                     0                                  /**< Shift value for RAC_STATECHANGE             */
#define _RAC_IF_STATECHANGE_MASK                                      0x1UL                              /**< Bit mask for RAC_STATECHANGE                */
#define _RAC_IF_STATECHANGE_DEFAULT                                   0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_STATECHANGE_DEFAULT                                    (_RAC_IF_STATECHANGE_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_IF             */
#define RAC_IF_STIMCMPEV                                              (0x1UL << 1)                       /**< STIMER Compare Event                        */
#define _RAC_IF_STIMCMPEV_SHIFT                                       1                                  /**< Shift value for RAC_STIMCMPEV               */
#define _RAC_IF_STIMCMPEV_MASK                                        0x2UL                              /**< Bit mask for RAC_STIMCMPEV                  */
#define _RAC_IF_STIMCMPEV_DEFAULT                                     0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_STIMCMPEV_DEFAULT                                      (_RAC_IF_STIMCMPEV_DEFAULT << 1)   /**< Shifted mode DEFAULT for RAC_IF             */
#define RAC_IF_SEQLOCKUP                                              (0x1UL << 2)                       /**< SEQ locked up                               */
#define _RAC_IF_SEQLOCKUP_SHIFT                                       2                                  /**< Shift value for RAC_SEQLOCKUP               */
#define _RAC_IF_SEQLOCKUP_MASK                                        0x4UL                              /**< Bit mask for RAC_SEQLOCKUP                  */
#define _RAC_IF_SEQLOCKUP_DEFAULT                                     0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_SEQLOCKUP_DEFAULT                                      (_RAC_IF_SEQLOCKUP_DEFAULT << 2)   /**< Shifted mode DEFAULT for RAC_IF             */
#define RAC_IF_SEQRESETREQ                                            (0x1UL << 3)                       /**< SEQ reset request                           */
#define _RAC_IF_SEQRESETREQ_SHIFT                                     3                                  /**< Shift value for RAC_SEQRESETREQ             */
#define _RAC_IF_SEQRESETREQ_MASK                                      0x8UL                              /**< Bit mask for RAC_SEQRESETREQ                */
#define _RAC_IF_SEQRESETREQ_DEFAULT                                   0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_SEQRESETREQ_DEFAULT                                    (_RAC_IF_SEQRESETREQ_DEFAULT << 3) /**< Shifted mode DEFAULT for RAC_IF             */
#define _RAC_IF_SEQ_SHIFT                                             16                                 /**< Shift value for RAC_SEQ                     */
#define _RAC_IF_SEQ_MASK                                              0xFF0000UL                         /**< Bit mask for RAC_SEQ                        */
#define _RAC_IF_SEQ_DEFAULT                                           0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_SEQ_DEFAULT                                            (_RAC_IF_SEQ_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_IF             */

/* Bit fields for RAC IEN */
#define _RAC_IEN_RESETVALUE                                           0x00000000UL                        /**< Default value for RAC_IEN                   */
#define _RAC_IEN_MASK                                                 0x00FF000FUL                        /**< Mask for RAC_IEN                            */
#define RAC_IEN_STATECHANGE                                           (0x1UL << 0)                        /**< Radio State Change Interrupt Enable         */
#define _RAC_IEN_STATECHANGE_SHIFT                                    0                                   /**< Shift value for RAC_STATECHANGE             */
#define _RAC_IEN_STATECHANGE_MASK                                     0x1UL                               /**< Bit mask for RAC_STATECHANGE                */
#define _RAC_IEN_STATECHANGE_DEFAULT                                  0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_STATECHANGE_DEFAULT                                   (_RAC_IEN_STATECHANGE_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_IEN            */
#define RAC_IEN_STIMCMPEV                                             (0x1UL << 1)                        /**< STIMER Compare Event Interrupt Enable       */
#define _RAC_IEN_STIMCMPEV_SHIFT                                      1                                   /**< Shift value for RAC_STIMCMPEV               */
#define _RAC_IEN_STIMCMPEV_MASK                                       0x2UL                               /**< Bit mask for RAC_STIMCMPEV                  */
#define _RAC_IEN_STIMCMPEV_DEFAULT                                    0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_STIMCMPEV_DEFAULT                                     (_RAC_IEN_STIMCMPEV_DEFAULT << 1)   /**< Shifted mode DEFAULT for RAC_IEN            */
#define RAC_IEN_SEQLOCKUP                                             (0x1UL << 2)                        /**< SEQ locked up Interrupt Enable              */
#define _RAC_IEN_SEQLOCKUP_SHIFT                                      2                                   /**< Shift value for RAC_SEQLOCKUP               */
#define _RAC_IEN_SEQLOCKUP_MASK                                       0x4UL                               /**< Bit mask for RAC_SEQLOCKUP                  */
#define _RAC_IEN_SEQLOCKUP_DEFAULT                                    0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_SEQLOCKUP_DEFAULT                                     (_RAC_IEN_SEQLOCKUP_DEFAULT << 2)   /**< Shifted mode DEFAULT for RAC_IEN            */
#define RAC_IEN_SEQRESETREQ                                           (0x1UL << 3)                        /**< SEQ reset request Interrupt Enable          */
#define _RAC_IEN_SEQRESETREQ_SHIFT                                    3                                   /**< Shift value for RAC_SEQRESETREQ             */
#define _RAC_IEN_SEQRESETREQ_MASK                                     0x8UL                               /**< Bit mask for RAC_SEQRESETREQ                */
#define _RAC_IEN_SEQRESETREQ_DEFAULT                                  0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_SEQRESETREQ_DEFAULT                                   (_RAC_IEN_SEQRESETREQ_DEFAULT << 3) /**< Shifted mode DEFAULT for RAC_IEN            */
#define _RAC_IEN_SEQ_SHIFT                                            16                                  /**< Shift value for RAC_SEQ                     */
#define _RAC_IEN_SEQ_MASK                                             0xFF0000UL                          /**< Bit mask for RAC_SEQ                        */
#define _RAC_IEN_SEQ_DEFAULT                                          0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_SEQ_DEFAULT                                           (_RAC_IEN_SEQ_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_IEN            */

/* Bit fields for RAC TESTCTRL */
#define _RAC_TESTCTRL_RESETVALUE                                      0x00000000UL                         /**< Default value for RAC_TESTCTRL              */
#define _RAC_TESTCTRL_MASK                                            0x00000003UL                         /**< Mask for RAC_TESTCTRL                       */
#define RAC_TESTCTRL_MODEN                                            (0x1UL << 0)                         /**< Modulator enable                            */
#define _RAC_TESTCTRL_MODEN_SHIFT                                     0                                    /**< Shift value for RAC_MODEN                   */
#define _RAC_TESTCTRL_MODEN_MASK                                      0x1UL                                /**< Bit mask for RAC_MODEN                      */
#define _RAC_TESTCTRL_MODEN_DEFAULT                                   0x00000000UL                         /**< Mode DEFAULT for RAC_TESTCTRL               */
#define RAC_TESTCTRL_MODEN_DEFAULT                                    (_RAC_TESTCTRL_MODEN_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_TESTCTRL       */
#define RAC_TESTCTRL_DEMODEN                                          (0x1UL << 1)                         /**< Demodulator enable                          */
#define _RAC_TESTCTRL_DEMODEN_SHIFT                                   1                                    /**< Shift value for RAC_DEMODEN                 */
#define _RAC_TESTCTRL_DEMODEN_MASK                                    0x2UL                                /**< Bit mask for RAC_DEMODEN                    */
#define _RAC_TESTCTRL_DEMODEN_DEFAULT                                 0x00000000UL                         /**< Mode DEFAULT for RAC_TESTCTRL               */
#define RAC_TESTCTRL_DEMODEN_DEFAULT                                  (_RAC_TESTCTRL_DEMODEN_DEFAULT << 1) /**< Shifted mode DEFAULT for RAC_TESTCTRL       */

/* Bit fields for RAC SEQIF */
#define _RAC_SEQIF_RESETVALUE                                         0x00000000UL                               /**< Default value for RAC_SEQIF                 */
#define _RAC_SEQIF_MASK                                               0x3FFF000FUL                               /**< Mask for RAC_SEQIF                          */
#define RAC_SEQIF_STATECHANGESEQ                                      (0x1UL << 0)                               /**< Radio State Change                          */
#define _RAC_SEQIF_STATECHANGESEQ_SHIFT                               0                                          /**< Shift value for RAC_STATECHANGESEQ          */
#define _RAC_SEQIF_STATECHANGESEQ_MASK                                0x1UL                                      /**< Bit mask for RAC_STATECHANGESEQ             */
#define _RAC_SEQIF_STATECHANGESEQ_DEFAULT                             0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATECHANGESEQ_DEFAULT                              (_RAC_SEQIF_STATECHANGESEQ_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STIMCMPEVSEQ                                        (0x1UL << 1)                               /**< STIMER Compare Event                        */
#define _RAC_SEQIF_STIMCMPEVSEQ_SHIFT                                 1                                          /**< Shift value for RAC_STIMCMPEVSEQ            */
#define _RAC_SEQIF_STIMCMPEVSEQ_MASK                                  0x2UL                                      /**< Bit mask for RAC_STIMCMPEVSEQ               */
#define _RAC_SEQIF_STIMCMPEVSEQ_DEFAULT                               0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STIMCMPEVSEQ_DEFAULT                                (_RAC_SEQIF_STIMCMPEVSEQ_DEFAULT << 1)     /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_DEMODRXREQCLRSEQ                                    (0x1UL << 2)                               /**< Demod RX request clear                      */
#define _RAC_SEQIF_DEMODRXREQCLRSEQ_SHIFT                             2                                          /**< Shift value for RAC_DEMODRXREQCLRSEQ        */
#define _RAC_SEQIF_DEMODRXREQCLRSEQ_MASK                              0x4UL                                      /**< Bit mask for RAC_DEMODRXREQCLRSEQ           */
#define _RAC_SEQIF_DEMODRXREQCLRSEQ_DEFAULT                           0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_DEMODRXREQCLRSEQ_DEFAULT                            (_RAC_SEQIF_DEMODRXREQCLRSEQ_DEFAULT << 2) /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_PRSEVENTSEQ                                         (0x1UL << 3)                               /**< SEQ PRS Event                               */
#define _RAC_SEQIF_PRSEVENTSEQ_SHIFT                                  3                                          /**< Shift value for RAC_PRSEVENTSEQ             */
#define _RAC_SEQIF_PRSEVENTSEQ_MASK                                   0x8UL                                      /**< Bit mask for RAC_PRSEVENTSEQ                */
#define _RAC_SEQIF_PRSEVENTSEQ_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_PRSEVENTSEQ_DEFAULT                                 (_RAC_SEQIF_PRSEVENTSEQ_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATEOFF                                            (0x1UL << 16)                              /**< entering STATE_OFF                          */
#define _RAC_SEQIF_STATEOFF_SHIFT                                     16                                         /**< Shift value for RAC_STATEOFF                */
#define _RAC_SEQIF_STATEOFF_MASK                                      0x10000UL                                  /**< Bit mask for RAC_STATEOFF                   */
#define _RAC_SEQIF_STATEOFF_DEFAULT                                   0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATEOFF_DEFAULT                                    (_RAC_SEQIF_STATEOFF_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERXWARM                                         (0x1UL << 17)                              /**< entering STATE_RXWARM                       */
#define _RAC_SEQIF_STATERXWARM_SHIFT                                  17                                         /**< Shift value for RAC_STATERXWARM             */
#define _RAC_SEQIF_STATERXWARM_MASK                                   0x20000UL                                  /**< Bit mask for RAC_STATERXWARM                */
#define _RAC_SEQIF_STATERXWARM_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERXWARM_DEFAULT                                 (_RAC_SEQIF_STATERXWARM_DEFAULT << 17)     /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERXSEARCH                                       (0x1UL << 18)                              /**< entering STATE_RXSEARCH                     */
#define _RAC_SEQIF_STATERXSEARCH_SHIFT                                18                                         /**< Shift value for RAC_STATERXSEARCH           */
#define _RAC_SEQIF_STATERXSEARCH_MASK                                 0x40000UL                                  /**< Bit mask for RAC_STATERXSEARCH              */
#define _RAC_SEQIF_STATERXSEARCH_DEFAULT                              0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERXSEARCH_DEFAULT                               (_RAC_SEQIF_STATERXSEARCH_DEFAULT << 18)   /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERXFRAME                                        (0x1UL << 19)                              /**< entering STATE_RXFRAME                      */
#define _RAC_SEQIF_STATERXFRAME_SHIFT                                 19                                         /**< Shift value for RAC_STATERXFRAME            */
#define _RAC_SEQIF_STATERXFRAME_MASK                                  0x80000UL                                  /**< Bit mask for RAC_STATERXFRAME               */
#define _RAC_SEQIF_STATERXFRAME_DEFAULT                               0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERXFRAME_DEFAULT                                (_RAC_SEQIF_STATERXFRAME_DEFAULT << 19)    /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERXPD                                           (0x1UL << 20)                              /**< entering STATE_RXPD                         */
#define _RAC_SEQIF_STATERXPD_SHIFT                                    20                                         /**< Shift value for RAC_STATERXPD               */
#define _RAC_SEQIF_STATERXPD_MASK                                     0x100000UL                                 /**< Bit mask for RAC_STATERXPD                  */
#define _RAC_SEQIF_STATERXPD_DEFAULT                                  0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERXPD_DEFAULT                                   (_RAC_SEQIF_STATERXPD_DEFAULT << 20)       /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERX2RX                                          (0x1UL << 21)                              /**< entering STATE_RX2RX                        */
#define _RAC_SEQIF_STATERX2RX_SHIFT                                   21                                         /**< Shift value for RAC_STATERX2RX              */
#define _RAC_SEQIF_STATERX2RX_MASK                                    0x200000UL                                 /**< Bit mask for RAC_STATERX2RX                 */
#define _RAC_SEQIF_STATERX2RX_DEFAULT                                 0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERX2RX_DEFAULT                                  (_RAC_SEQIF_STATERX2RX_DEFAULT << 21)      /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERXOVERFLOW                                     (0x1UL << 22)                              /**< entering STATE_RXOVERFLOW                   */
#define _RAC_SEQIF_STATERXOVERFLOW_SHIFT                              22                                         /**< Shift value for RAC_STATERXOVERFLOW         */
#define _RAC_SEQIF_STATERXOVERFLOW_MASK                               0x400000UL                                 /**< Bit mask for RAC_STATERXOVERFLOW            */
#define _RAC_SEQIF_STATERXOVERFLOW_DEFAULT                            0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERXOVERFLOW_DEFAULT                             (_RAC_SEQIF_STATERXOVERFLOW_DEFAULT << 22) /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATERX2TX                                          (0x1UL << 23)                              /**< entering STATE_RX2TX                        */
#define _RAC_SEQIF_STATERX2TX_SHIFT                                   23                                         /**< Shift value for RAC_STATERX2TX              */
#define _RAC_SEQIF_STATERX2TX_MASK                                    0x800000UL                                 /**< Bit mask for RAC_STATERX2TX                 */
#define _RAC_SEQIF_STATERX2TX_DEFAULT                                 0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATERX2TX_DEFAULT                                  (_RAC_SEQIF_STATERX2TX_DEFAULT << 23)      /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATETXWARM                                         (0x1UL << 24)                              /**< entering STATE_TXWARM                       */
#define _RAC_SEQIF_STATETXWARM_SHIFT                                  24                                         /**< Shift value for RAC_STATETXWARM             */
#define _RAC_SEQIF_STATETXWARM_MASK                                   0x1000000UL                                /**< Bit mask for RAC_STATETXWARM                */
#define _RAC_SEQIF_STATETXWARM_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATETXWARM_DEFAULT                                 (_RAC_SEQIF_STATETXWARM_DEFAULT << 24)     /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATETX                                             (0x1UL << 25)                              /**< entering STATE_TX                           */
#define _RAC_SEQIF_STATETX_SHIFT                                      25                                         /**< Shift value for RAC_STATETX                 */
#define _RAC_SEQIF_STATETX_MASK                                       0x2000000UL                                /**< Bit mask for RAC_STATETX                    */
#define _RAC_SEQIF_STATETX_DEFAULT                                    0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATETX_DEFAULT                                     (_RAC_SEQIF_STATETX_DEFAULT << 25)         /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATETXPD                                           (0x1UL << 26)                              /**< entering STATE_TXPD                         */
#define _RAC_SEQIF_STATETXPD_SHIFT                                    26                                         /**< Shift value for RAC_STATETXPD               */
#define _RAC_SEQIF_STATETXPD_MASK                                     0x4000000UL                                /**< Bit mask for RAC_STATETXPD                  */
#define _RAC_SEQIF_STATETXPD_DEFAULT                                  0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATETXPD_DEFAULT                                   (_RAC_SEQIF_STATETXPD_DEFAULT << 26)       /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATETX2RX                                          (0x1UL << 27)                              /**< entering STATE_TX2RX                        */
#define _RAC_SEQIF_STATETX2RX_SHIFT                                   27                                         /**< Shift value for RAC_STATETX2RX              */
#define _RAC_SEQIF_STATETX2RX_MASK                                    0x8000000UL                                /**< Bit mask for RAC_STATETX2RX                 */
#define _RAC_SEQIF_STATETX2RX_DEFAULT                                 0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATETX2RX_DEFAULT                                  (_RAC_SEQIF_STATETX2RX_DEFAULT << 27)      /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATETX2TX                                          (0x1UL << 28)                              /**< entering STATE_TX2TX                        */
#define _RAC_SEQIF_STATETX2TX_SHIFT                                   28                                         /**< Shift value for RAC_STATETX2TX              */
#define _RAC_SEQIF_STATETX2TX_MASK                                    0x10000000UL                               /**< Bit mask for RAC_STATETX2TX                 */
#define _RAC_SEQIF_STATETX2TX_DEFAULT                                 0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATETX2TX_DEFAULT                                  (_RAC_SEQIF_STATETX2TX_DEFAULT << 28)      /**< Shifted mode DEFAULT for RAC_SEQIF          */
#define RAC_SEQIF_STATESHUTDOWN                                       (0x1UL << 29)                              /**< entering STATE_SHUTDOWN                     */
#define _RAC_SEQIF_STATESHUTDOWN_SHIFT                                29                                         /**< Shift value for RAC_STATESHUTDOWN           */
#define _RAC_SEQIF_STATESHUTDOWN_MASK                                 0x20000000UL                               /**< Bit mask for RAC_STATESHUTDOWN              */
#define _RAC_SEQIF_STATESHUTDOWN_DEFAULT                              0x00000000UL                               /**< Mode DEFAULT for RAC_SEQIF                  */
#define RAC_SEQIF_STATESHUTDOWN_DEFAULT                               (_RAC_SEQIF_STATESHUTDOWN_DEFAULT << 29)   /**< Shifted mode DEFAULT for RAC_SEQIF          */

/* Bit fields for RAC SEQIEN */
#define _RAC_SEQIEN_RESETVALUE                                        0x00000000UL                                /**< Default value for RAC_SEQIEN                */
#define _RAC_SEQIEN_MASK                                              0x3FFF000FUL                                /**< Mask for RAC_SEQIEN                         */
#define RAC_SEQIEN_STATECHANGESEQ                                     (0x1UL << 0)                                /**< Radio State Change Interrupt Enable         */
#define _RAC_SEQIEN_STATECHANGESEQ_SHIFT                              0                                           /**< Shift value for RAC_STATECHANGESEQ          */
#define _RAC_SEQIEN_STATECHANGESEQ_MASK                               0x1UL                                       /**< Bit mask for RAC_STATECHANGESEQ             */
#define _RAC_SEQIEN_STATECHANGESEQ_DEFAULT                            0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATECHANGESEQ_DEFAULT                             (_RAC_SEQIEN_STATECHANGESEQ_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STIMCMPEVSEQ                                       (0x1UL << 1)                                /**< STIMER Compare Event Interrupt Enable       */
#define _RAC_SEQIEN_STIMCMPEVSEQ_SHIFT                                1                                           /**< Shift value for RAC_STIMCMPEVSEQ            */
#define _RAC_SEQIEN_STIMCMPEVSEQ_MASK                                 0x2UL                                       /**< Bit mask for RAC_STIMCMPEVSEQ               */
#define _RAC_SEQIEN_STIMCMPEVSEQ_DEFAULT                              0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STIMCMPEVSEQ_DEFAULT                               (_RAC_SEQIEN_STIMCMPEVSEQ_DEFAULT << 1)     /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_DEMODRXREQCLRSEQ                                   (0x1UL << 2)                                /**< Demod RX req clr Interrupt Enable           */
#define _RAC_SEQIEN_DEMODRXREQCLRSEQ_SHIFT                            2                                           /**< Shift value for RAC_DEMODRXREQCLRSEQ        */
#define _RAC_SEQIEN_DEMODRXREQCLRSEQ_MASK                             0x4UL                                       /**< Bit mask for RAC_DEMODRXREQCLRSEQ           */
#define _RAC_SEQIEN_DEMODRXREQCLRSEQ_DEFAULT                          0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_DEMODRXREQCLRSEQ_DEFAULT                           (_RAC_SEQIEN_DEMODRXREQCLRSEQ_DEFAULT << 2) /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_PRSEVENTSEQ                                        (0x1UL << 3)                                /**< PRS SEQ EVENT Interrupt Enable              */
#define _RAC_SEQIEN_PRSEVENTSEQ_SHIFT                                 3                                           /**< Shift value for RAC_PRSEVENTSEQ             */
#define _RAC_SEQIEN_PRSEVENTSEQ_MASK                                  0x8UL                                       /**< Bit mask for RAC_PRSEVENTSEQ                */
#define _RAC_SEQIEN_PRSEVENTSEQ_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_PRSEVENTSEQ_DEFAULT                                (_RAC_SEQIEN_PRSEVENTSEQ_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATEOFF                                           (0x1UL << 16)                               /**< STATE_OFF Interrupt Enable                  */
#define _RAC_SEQIEN_STATEOFF_SHIFT                                    16                                          /**< Shift value for RAC_STATEOFF                */
#define _RAC_SEQIEN_STATEOFF_MASK                                     0x10000UL                                   /**< Bit mask for RAC_STATEOFF                   */
#define _RAC_SEQIEN_STATEOFF_DEFAULT                                  0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATEOFF_DEFAULT                                   (_RAC_SEQIEN_STATEOFF_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERXWARM                                        (0x1UL << 17)                               /**< STATE_RXWARM Interrupt Enable               */
#define _RAC_SEQIEN_STATERXWARM_SHIFT                                 17                                          /**< Shift value for RAC_STATERXWARM             */
#define _RAC_SEQIEN_STATERXWARM_MASK                                  0x20000UL                                   /**< Bit mask for RAC_STATERXWARM                */
#define _RAC_SEQIEN_STATERXWARM_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERXWARM_DEFAULT                                (_RAC_SEQIEN_STATERXWARM_DEFAULT << 17)     /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERXSEARCH                                      (0x1UL << 18)                               /**< STATE_RXSEARC Interrupt Enable              */
#define _RAC_SEQIEN_STATERXSEARCH_SHIFT                               18                                          /**< Shift value for RAC_STATERXSEARCH           */
#define _RAC_SEQIEN_STATERXSEARCH_MASK                                0x40000UL                                   /**< Bit mask for RAC_STATERXSEARCH              */
#define _RAC_SEQIEN_STATERXSEARCH_DEFAULT                             0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERXSEARCH_DEFAULT                              (_RAC_SEQIEN_STATERXSEARCH_DEFAULT << 18)   /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERXFRAME                                       (0x1UL << 19)                               /**< STATE_RXFRAME Interrupt Enable              */
#define _RAC_SEQIEN_STATERXFRAME_SHIFT                                19                                          /**< Shift value for RAC_STATERXFRAME            */
#define _RAC_SEQIEN_STATERXFRAME_MASK                                 0x80000UL                                   /**< Bit mask for RAC_STATERXFRAME               */
#define _RAC_SEQIEN_STATERXFRAME_DEFAULT                              0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERXFRAME_DEFAULT                               (_RAC_SEQIEN_STATERXFRAME_DEFAULT << 19)    /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERXPD                                          (0x1UL << 20)                               /**< STATE_RXPD Interrupt Enable                 */
#define _RAC_SEQIEN_STATERXPD_SHIFT                                   20                                          /**< Shift value for RAC_STATERXPD               */
#define _RAC_SEQIEN_STATERXPD_MASK                                    0x100000UL                                  /**< Bit mask for RAC_STATERXPD                  */
#define _RAC_SEQIEN_STATERXPD_DEFAULT                                 0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERXPD_DEFAULT                                  (_RAC_SEQIEN_STATERXPD_DEFAULT << 20)       /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERX2RX                                         (0x1UL << 21)                               /**< STATE_RX2RX Interrupt Enable                */
#define _RAC_SEQIEN_STATERX2RX_SHIFT                                  21                                          /**< Shift value for RAC_STATERX2RX              */
#define _RAC_SEQIEN_STATERX2RX_MASK                                   0x200000UL                                  /**< Bit mask for RAC_STATERX2RX                 */
#define _RAC_SEQIEN_STATERX2RX_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERX2RX_DEFAULT                                 (_RAC_SEQIEN_STATERX2RX_DEFAULT << 21)      /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERXOVERFLOW                                    (0x1UL << 22)                               /**< STATE_RXOVERFLOW Interrupt Enable           */
#define _RAC_SEQIEN_STATERXOVERFLOW_SHIFT                             22                                          /**< Shift value for RAC_STATERXOVERFLOW         */
#define _RAC_SEQIEN_STATERXOVERFLOW_MASK                              0x400000UL                                  /**< Bit mask for RAC_STATERXOVERFLOW            */
#define _RAC_SEQIEN_STATERXOVERFLOW_DEFAULT                           0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERXOVERFLOW_DEFAULT                            (_RAC_SEQIEN_STATERXOVERFLOW_DEFAULT << 22) /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATERX2TX                                         (0x1UL << 23)                               /**< STATE_RX2TX Interrupt Enable                */
#define _RAC_SEQIEN_STATERX2TX_SHIFT                                  23                                          /**< Shift value for RAC_STATERX2TX              */
#define _RAC_SEQIEN_STATERX2TX_MASK                                   0x800000UL                                  /**< Bit mask for RAC_STATERX2TX                 */
#define _RAC_SEQIEN_STATERX2TX_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATERX2TX_DEFAULT                                 (_RAC_SEQIEN_STATERX2TX_DEFAULT << 23)      /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATETXWARM                                        (0x1UL << 24)                               /**< STATE_TXWARM Interrupt Enable               */
#define _RAC_SEQIEN_STATETXWARM_SHIFT                                 24                                          /**< Shift value for RAC_STATETXWARM             */
#define _RAC_SEQIEN_STATETXWARM_MASK                                  0x1000000UL                                 /**< Bit mask for RAC_STATETXWARM                */
#define _RAC_SEQIEN_STATETXWARM_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATETXWARM_DEFAULT                                (_RAC_SEQIEN_STATETXWARM_DEFAULT << 24)     /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATETX                                            (0x1UL << 25)                               /**< STATE_TX Interrupt Enable                   */
#define _RAC_SEQIEN_STATETX_SHIFT                                     25                                          /**< Shift value for RAC_STATETX                 */
#define _RAC_SEQIEN_STATETX_MASK                                      0x2000000UL                                 /**< Bit mask for RAC_STATETX                    */
#define _RAC_SEQIEN_STATETX_DEFAULT                                   0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATETX_DEFAULT                                    (_RAC_SEQIEN_STATETX_DEFAULT << 25)         /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATETXPD                                          (0x1UL << 26)                               /**< STATE_TXPD Interrupt Enable                 */
#define _RAC_SEQIEN_STATETXPD_SHIFT                                   26                                          /**< Shift value for RAC_STATETXPD               */
#define _RAC_SEQIEN_STATETXPD_MASK                                    0x4000000UL                                 /**< Bit mask for RAC_STATETXPD                  */
#define _RAC_SEQIEN_STATETXPD_DEFAULT                                 0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATETXPD_DEFAULT                                  (_RAC_SEQIEN_STATETXPD_DEFAULT << 26)       /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATETX2RX                                         (0x1UL << 27)                               /**< STATE_TX2RX Interrupt Enable                */
#define _RAC_SEQIEN_STATETX2RX_SHIFT                                  27                                          /**< Shift value for RAC_STATETX2RX              */
#define _RAC_SEQIEN_STATETX2RX_MASK                                   0x8000000UL                                 /**< Bit mask for RAC_STATETX2RX                 */
#define _RAC_SEQIEN_STATETX2RX_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATETX2RX_DEFAULT                                 (_RAC_SEQIEN_STATETX2RX_DEFAULT << 27)      /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATETX2TX                                         (0x1UL << 28)                               /**< STATE_TX2TX Interrupt Enable                */
#define _RAC_SEQIEN_STATETX2TX_SHIFT                                  28                                          /**< Shift value for RAC_STATETX2TX              */
#define _RAC_SEQIEN_STATETX2TX_MASK                                   0x10000000UL                                /**< Bit mask for RAC_STATETX2TX                 */
#define _RAC_SEQIEN_STATETX2TX_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATETX2TX_DEFAULT                                 (_RAC_SEQIEN_STATETX2TX_DEFAULT << 28)      /**< Shifted mode DEFAULT for RAC_SEQIEN         */
#define RAC_SEQIEN_STATESHUTDOWN                                      (0x1UL << 29)                               /**< STATE_SHUTDOWN Interrupt Enable             */
#define _RAC_SEQIEN_STATESHUTDOWN_SHIFT                               29                                          /**< Shift value for RAC_STATESHUTDOWN           */
#define _RAC_SEQIEN_STATESHUTDOWN_MASK                                0x20000000UL                                /**< Bit mask for RAC_STATESHUTDOWN              */
#define _RAC_SEQIEN_STATESHUTDOWN_DEFAULT                             0x00000000UL                                /**< Mode DEFAULT for RAC_SEQIEN                 */
#define RAC_SEQIEN_STATESHUTDOWN_DEFAULT                              (_RAC_SEQIEN_STATESHUTDOWN_DEFAULT << 29)   /**< Shifted mode DEFAULT for RAC_SEQIEN         */

/* Bit fields for RAC STIMER */
#define _RAC_STIMER_RESETVALUE                                        0x00000000UL                      /**< Default value for RAC_STIMER                */
#define _RAC_STIMER_MASK                                              0x0000FFFFUL                      /**< Mask for RAC_STIMER                         */
#define _RAC_STIMER_STIMER_SHIFT                                      0                                 /**< Shift value for RAC_STIMER                  */
#define _RAC_STIMER_STIMER_MASK                                       0xFFFFUL                          /**< Bit mask for RAC_STIMER                     */
#define _RAC_STIMER_STIMER_DEFAULT                                    0x00000000UL                      /**< Mode DEFAULT for RAC_STIMER                 */
#define RAC_STIMER_STIMER_DEFAULT                                     (_RAC_STIMER_STIMER_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_STIMER         */

/* Bit fields for RAC STIMERCOMP */
#define _RAC_STIMERCOMP_RESETVALUE                                    0x00000000UL                              /**< Default value for RAC_STIMERCOMP            */
#define _RAC_STIMERCOMP_MASK                                          0x0000FFFFUL                              /**< Mask for RAC_STIMERCOMP                     */
#define _RAC_STIMERCOMP_STIMERCOMP_SHIFT                              0                                         /**< Shift value for RAC_STIMERCOMP              */
#define _RAC_STIMERCOMP_STIMERCOMP_MASK                               0xFFFFUL                                  /**< Bit mask for RAC_STIMERCOMP                 */
#define _RAC_STIMERCOMP_STIMERCOMP_DEFAULT                            0x00000000UL                              /**< Mode DEFAULT for RAC_STIMERCOMP             */
#define RAC_STIMERCOMP_STIMERCOMP_DEFAULT                             (_RAC_STIMERCOMP_STIMERCOMP_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_STIMERCOMP     */

/* Bit fields for RAC SEQCTRL */
#define _RAC_SEQCTRL_RESETVALUE                                       0x00000000UL                                  /**< Default value for RAC_SEQCTRL               */
#define _RAC_SEQCTRL_MASK                                             0x1F00007FUL                                  /**< Mask for RAC_SEQCTRL                        */
#define RAC_SEQCTRL_COMPACT                                           (0x1UL << 0)                                  /**< STIMER Compare Action                       */
#define _RAC_SEQCTRL_COMPACT_SHIFT                                    0                                             /**< Shift value for RAC_COMPACT                 */
#define _RAC_SEQCTRL_COMPACT_MASK                                     0x1UL                                         /**< Bit mask for RAC_COMPACT                    */
#define _RAC_SEQCTRL_COMPACT_DEFAULT                                  0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_COMPACT_WRAP                                     0x00000000UL                                  /**< Mode WRAP for RAC_SEQCTRL                   */
#define _RAC_SEQCTRL_COMPACT_CONTINUE                                 0x00000001UL                                  /**< Mode CONTINUE for RAC_SEQCTRL               */
#define RAC_SEQCTRL_COMPACT_DEFAULT                                   (_RAC_SEQCTRL_COMPACT_DEFAULT << 0)           /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_COMPACT_WRAP                                      (_RAC_SEQCTRL_COMPACT_WRAP << 0)              /**< Shifted mode WRAP for RAC_SEQCTRL           */
#define RAC_SEQCTRL_COMPACT_CONTINUE                                  (_RAC_SEQCTRL_COMPACT_CONTINUE << 0)          /**< Shifted mode CONTINUE for RAC_SEQCTRL       */
#define _RAC_SEQCTRL_COMPINVALMODE_SHIFT                              1                                             /**< Shift value for RAC_COMPINVALMODE           */
#define _RAC_SEQCTRL_COMPINVALMODE_MASK                               0x6UL                                         /**< Bit mask for RAC_COMPINVALMODE              */
#define _RAC_SEQCTRL_COMPINVALMODE_DEFAULT                            0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_COMPINVALMODE_NEVER                              0x00000000UL                                  /**< Mode NEVER for RAC_SEQCTRL                  */
#define _RAC_SEQCTRL_COMPINVALMODE_STATECHANGE                        0x00000001UL                                  /**< Mode STATECHANGE for RAC_SEQCTRL            */
#define _RAC_SEQCTRL_COMPINVALMODE_COMPEVENT                          0x00000002UL                                  /**< Mode COMPEVENT for RAC_SEQCTRL              */
#define _RAC_SEQCTRL_COMPINVALMODE_STATECOMP                          0x00000003UL                                  /**< Mode STATECOMP for RAC_SEQCTRL              */
#define RAC_SEQCTRL_COMPINVALMODE_DEFAULT                             (_RAC_SEQCTRL_COMPINVALMODE_DEFAULT << 1)     /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_COMPINVALMODE_NEVER                               (_RAC_SEQCTRL_COMPINVALMODE_NEVER << 1)       /**< Shifted mode NEVER for RAC_SEQCTRL          */
#define RAC_SEQCTRL_COMPINVALMODE_STATECHANGE                         (_RAC_SEQCTRL_COMPINVALMODE_STATECHANGE << 1) /**< Shifted mode STATECHANGE for RAC_SEQCTRL    */
#define RAC_SEQCTRL_COMPINVALMODE_COMPEVENT                           (_RAC_SEQCTRL_COMPINVALMODE_COMPEVENT << 1)   /**< Shifted mode COMPEVENT for RAC_SEQCTRL      */
#define RAC_SEQCTRL_COMPINVALMODE_STATECOMP                           (_RAC_SEQCTRL_COMPINVALMODE_STATECOMP << 1)   /**< Shifted mode STATECOMP for RAC_SEQCTRL      */
#define RAC_SEQCTRL_RELATIVE                                          (0x1UL << 3)                                  /**< STIMER Compare value relative               */
#define _RAC_SEQCTRL_RELATIVE_SHIFT                                   3                                             /**< Shift value for RAC_RELATIVE                */
#define _RAC_SEQCTRL_RELATIVE_MASK                                    0x8UL                                         /**< Bit mask for RAC_RELATIVE                   */
#define _RAC_SEQCTRL_RELATIVE_DEFAULT                                 0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_RELATIVE_Absolute                                0x00000000UL                                  /**< Mode Absolute for RAC_SEQCTRL               */
#define _RAC_SEQCTRL_RELATIVE_Relative                                0x00000001UL                                  /**< Mode Relative for RAC_SEQCTRL               */
#define RAC_SEQCTRL_RELATIVE_DEFAULT                                  (_RAC_SEQCTRL_RELATIVE_DEFAULT << 3)          /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_RELATIVE_Absolute                                 (_RAC_SEQCTRL_RELATIVE_Absolute << 3)         /**< Shifted mode Absolute for RAC_SEQCTRL       */
#define RAC_SEQCTRL_RELATIVE_Relative                                 (_RAC_SEQCTRL_RELATIVE_Relative << 3)         /**< Shifted mode Relative for RAC_SEQCTRL       */
#define RAC_SEQCTRL_STIMERALWAYSRUN                                   (0x1UL << 4)                                  /**< STIMER always Run                           */
#define _RAC_SEQCTRL_STIMERALWAYSRUN_SHIFT                            4                                             /**< Shift value for RAC_STIMERALWAYSRUN         */
#define _RAC_SEQCTRL_STIMERALWAYSRUN_MASK                             0x10UL                                        /**< Bit mask for RAC_STIMERALWAYSRUN            */
#define _RAC_SEQCTRL_STIMERALWAYSRUN_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define RAC_SEQCTRL_STIMERALWAYSRUN_DEFAULT                           (_RAC_SEQCTRL_STIMERALWAYSRUN_DEFAULT << 4)   /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_STIMERDEBUGRUN                                    (0x1UL << 5)                                  /**< STIMER Debug Run                            */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_SHIFT                             5                                             /**< Shift value for RAC_STIMERDEBUGRUN          */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_MASK                              0x20UL                                        /**< Bit mask for RAC_STIMERDEBUGRUN             */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_X0                                0x00000000UL                                  /**< Mode X0 for RAC_SEQCTRL                     */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_X1                                0x00000001UL                                  /**< Mode X1 for RAC_SEQCTRL                     */
#define RAC_SEQCTRL_STIMERDEBUGRUN_DEFAULT                            (_RAC_SEQCTRL_STIMERDEBUGRUN_DEFAULT << 5)    /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_STIMERDEBUGRUN_X0                                 (_RAC_SEQCTRL_STIMERDEBUGRUN_X0 << 5)         /**< Shifted mode X0 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_STIMERDEBUGRUN_X1                                 (_RAC_SEQCTRL_STIMERDEBUGRUN_X1 << 5)         /**< Shifted mode X1 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_STATEDEBUGRUN                                     (0x1UL << 6)                                  /**< FSM state Debug Run                         */
#define _RAC_SEQCTRL_STATEDEBUGRUN_SHIFT                              6                                             /**< Shift value for RAC_STATEDEBUGRUN           */
#define _RAC_SEQCTRL_STATEDEBUGRUN_MASK                               0x40UL                                        /**< Bit mask for RAC_STATEDEBUGRUN              */
#define _RAC_SEQCTRL_STATEDEBUGRUN_DEFAULT                            0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_STATEDEBUGRUN_X0                                 0x00000000UL                                  /**< Mode X0 for RAC_SEQCTRL                     */
#define _RAC_SEQCTRL_STATEDEBUGRUN_X1                                 0x00000001UL                                  /**< Mode X1 for RAC_SEQCTRL                     */
#define RAC_SEQCTRL_STATEDEBUGRUN_DEFAULT                             (_RAC_SEQCTRL_STATEDEBUGRUN_DEFAULT << 6)     /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_STATEDEBUGRUN_X0                                  (_RAC_SEQCTRL_STATEDEBUGRUN_X0 << 6)          /**< Shifted mode X0 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_STATEDEBUGRUN_X1                                  (_RAC_SEQCTRL_STATEDEBUGRUN_X1 << 6)          /**< Shifted mode X1 for RAC_SEQCTRL             */
#define _RAC_SEQCTRL_SWIRQ_SHIFT                                      24                                            /**< Shift value for RAC_SWIRQ                   */
#define _RAC_SEQCTRL_SWIRQ_MASK                                       0x1F000000UL                                  /**< Bit mask for RAC_SWIRQ                      */
#define _RAC_SEQCTRL_SWIRQ_DEFAULT                                    0x00000000UL                                  /**< Mode DEFAULT for RAC_SEQCTRL                */
#define RAC_SEQCTRL_SWIRQ_DEFAULT                                     (_RAC_SEQCTRL_SWIRQ_DEFAULT << 24)            /**< Shifted mode DEFAULT for RAC_SEQCTRL        */

/* Bit fields for RAC PRESC */
#define _RAC_PRESC_RESETVALUE                                         0x00000007UL                     /**< Default value for RAC_PRESC                 */
#define _RAC_PRESC_MASK                                               0x0000007FUL                     /**< Mask for RAC_PRESC                          */
#define _RAC_PRESC_STIMER_SHIFT                                       0                                /**< Shift value for RAC_STIMER                  */
#define _RAC_PRESC_STIMER_MASK                                        0x7FUL                           /**< Bit mask for RAC_STIMER                     */
#define _RAC_PRESC_STIMER_DEFAULT                                     0x00000007UL                     /**< Mode DEFAULT for RAC_PRESC                  */
#define RAC_PRESC_STIMER_DEFAULT                                      (_RAC_PRESC_STIMER_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_PRESC          */

/* Bit fields for RAC SR0 */
#define _RAC_SR0_RESETVALUE                                           0x00000000UL                /**< Default value for RAC_SR0                   */
#define _RAC_SR0_MASK                                                 0xFFFFFFFFUL                /**< Mask for RAC_SR0                            */
#define _RAC_SR0_SR0_SHIFT                                            0                           /**< Shift value for RAC_SR0                     */
#define _RAC_SR0_SR0_MASK                                             0xFFFFFFFFUL                /**< Bit mask for RAC_SR0                        */
#define _RAC_SR0_SR0_DEFAULT                                          0x00000000UL                /**< Mode DEFAULT for RAC_SR0                    */
#define RAC_SR0_SR0_DEFAULT                                           (_RAC_SR0_SR0_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SR0            */

/* Bit fields for RAC SR1 */
#define _RAC_SR1_RESETVALUE                                           0x00000000UL                /**< Default value for RAC_SR1                   */
#define _RAC_SR1_MASK                                                 0xFFFFFFFFUL                /**< Mask for RAC_SR1                            */
#define _RAC_SR1_SR1_SHIFT                                            0                           /**< Shift value for RAC_SR1                     */
#define _RAC_SR1_SR1_MASK                                             0xFFFFFFFFUL                /**< Bit mask for RAC_SR1                        */
#define _RAC_SR1_SR1_DEFAULT                                          0x00000000UL                /**< Mode DEFAULT for RAC_SR1                    */
#define RAC_SR1_SR1_DEFAULT                                           (_RAC_SR1_SR1_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SR1            */

/* Bit fields for RAC SR2 */
#define _RAC_SR2_RESETVALUE                                           0x00000000UL                /**< Default value for RAC_SR2                   */
#define _RAC_SR2_MASK                                                 0xFFFFFFFFUL                /**< Mask for RAC_SR2                            */
#define _RAC_SR2_SR2_SHIFT                                            0                           /**< Shift value for RAC_SR2                     */
#define _RAC_SR2_SR2_MASK                                             0xFFFFFFFFUL                /**< Bit mask for RAC_SR2                        */
#define _RAC_SR2_SR2_DEFAULT                                          0x00000000UL                /**< Mode DEFAULT for RAC_SR2                    */
#define RAC_SR2_SR2_DEFAULT                                           (_RAC_SR2_SR2_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SR2            */

/* Bit fields for RAC SR3 */
#define _RAC_SR3_RESETVALUE                                           0x00000000UL                /**< Default value for RAC_SR3                   */
#define _RAC_SR3_MASK                                                 0xFFFFFFFFUL                /**< Mask for RAC_SR3                            */
#define _RAC_SR3_SR3_SHIFT                                            0                           /**< Shift value for RAC_SR3                     */
#define _RAC_SR3_SR3_MASK                                             0xFFFFFFFFUL                /**< Bit mask for RAC_SR3                        */
#define _RAC_SR3_SR3_DEFAULT                                          0x00000000UL                /**< Mode DEFAULT for RAC_SR3                    */
#define RAC_SR3_SR3_DEFAULT                                           (_RAC_SR3_SR3_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SR3            */

/* Bit fields for RAC STCTRL */
#define _RAC_STCTRL_RESETVALUE                                        0x00000000UL                       /**< Default value for RAC_STCTRL                */
#define _RAC_STCTRL_MASK                                              0x01FFFFFFUL                       /**< Mask for RAC_STCTRL                         */
#define _RAC_STCTRL_STCAL_SHIFT                                       0                                  /**< Shift value for RAC_STCAL                   */
#define _RAC_STCTRL_STCAL_MASK                                        0xFFFFFFUL                         /**< Bit mask for RAC_STCAL                      */
#define _RAC_STCTRL_STCAL_DEFAULT                                     0x00000000UL                       /**< Mode DEFAULT for RAC_STCTRL                 */
#define RAC_STCTRL_STCAL_DEFAULT                                      (_RAC_STCTRL_STCAL_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_STCTRL         */
#define RAC_STCTRL_STSKEW                                             (0x1UL << 24)                      /**< Systick timer skew                          */
#define _RAC_STCTRL_STSKEW_SHIFT                                      24                                 /**< Shift value for RAC_STSKEW                  */
#define _RAC_STCTRL_STSKEW_MASK                                       0x1000000UL                        /**< Bit mask for RAC_STSKEW                     */
#define _RAC_STCTRL_STSKEW_DEFAULT                                    0x00000000UL                       /**< Mode DEFAULT for RAC_STCTRL                 */
#define RAC_STCTRL_STSKEW_DEFAULT                                     (_RAC_STCTRL_STSKEW_DEFAULT << 24) /**< Shifted mode DEFAULT for RAC_STCTRL         */

/* Bit fields for RAC FRCTXWORD */
#define _RAC_FRCTXWORD_RESETVALUE                                     0x00000000UL                        /**< Default value for RAC_FRCTXWORD             */
#define _RAC_FRCTXWORD_MASK                                           0x000000FFUL                        /**< Mask for RAC_FRCTXWORD                      */
#define _RAC_FRCTXWORD_WDATA_SHIFT                                    0                                   /**< Shift value for RAC_WDATA                   */
#define _RAC_FRCTXWORD_WDATA_MASK                                     0xFFUL                              /**< Bit mask for RAC_WDATA                      */
#define _RAC_FRCTXWORD_WDATA_DEFAULT                                  0x00000000UL                        /**< Mode DEFAULT for RAC_FRCTXWORD              */
#define RAC_FRCTXWORD_WDATA_DEFAULT                                   (_RAC_FRCTXWORD_WDATA_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_FRCTXWORD      */

/* Bit fields for RAC FRCRXWORD */
#define _RAC_FRCRXWORD_RESETVALUE                                     0x00000000UL                        /**< Default value for RAC_FRCRXWORD             */
#define _RAC_FRCRXWORD_MASK                                           0x000000FFUL                        /**< Mask for RAC_FRCRXWORD                      */
#define _RAC_FRCRXWORD_RDATA_SHIFT                                    0                                   /**< Shift value for RAC_RDATA                   */
#define _RAC_FRCRXWORD_RDATA_MASK                                     0xFFUL                              /**< Bit mask for RAC_RDATA                      */
#define _RAC_FRCRXWORD_RDATA_DEFAULT                                  0x00000000UL                        /**< Mode DEFAULT for RAC_FRCRXWORD              */
#define RAC_FRCRXWORD_RDATA_DEFAULT                                   (_RAC_FRCRXWORD_RDATA_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_FRCRXWORD      */

/* Bit fields for RAC EM1PCSR */
#define _RAC_EM1PCSR_RESETVALUE                                       0x00000000UL                                  /**< Default value for RAC_EM1PCSR               */
#define _RAC_EM1PCSR_MASK                                             0x00070033UL                                  /**< Mask for RAC_EM1PCSR                        */
#define RAC_EM1PCSR_RADIOEM1PMODE                                     (0x1UL << 0)                                  /**<                                             */
#define _RAC_EM1PCSR_RADIOEM1PMODE_SHIFT                              0                                             /**< Shift value for RAC_RADIOEM1PMODE           */
#define _RAC_EM1PCSR_RADIOEM1PMODE_MASK                               0x1UL                                         /**< Bit mask for RAC_RADIOEM1PMODE              */
#define _RAC_EM1PCSR_RADIOEM1PMODE_DEFAULT                            0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define _RAC_EM1PCSR_RADIOEM1PMODE_HWCTRL                             0x00000000UL                                  /**< Mode HWCTRL for RAC_EM1PCSR                 */
#define _RAC_EM1PCSR_RADIOEM1PMODE_SWCTRL                             0x00000001UL                                  /**< Mode SWCTRL for RAC_EM1PCSR                 */
#define RAC_EM1PCSR_RADIOEM1PMODE_DEFAULT                             (_RAC_EM1PCSR_RADIOEM1PMODE_DEFAULT << 0)     /**< Shifted mode DEFAULT for RAC_EM1PCSR        */
#define RAC_EM1PCSR_RADIOEM1PMODE_HWCTRL                              (_RAC_EM1PCSR_RADIOEM1PMODE_HWCTRL << 0)      /**< Shifted mode HWCTRL for RAC_EM1PCSR         */
#define RAC_EM1PCSR_RADIOEM1PMODE_SWCTRL                              (_RAC_EM1PCSR_RADIOEM1PMODE_SWCTRL << 0)      /**< Shifted mode SWCTRL for RAC_EM1PCSR         */
#define RAC_EM1PCSR_RADIOEM1PDISSWREQ                                 (0x1UL << 1)                                  /**<                                             */
#define _RAC_EM1PCSR_RADIOEM1PDISSWREQ_SHIFT                          1                                             /**< Shift value for RAC_RADIOEM1PDISSWREQ       */
#define _RAC_EM1PCSR_RADIOEM1PDISSWREQ_MASK                           0x2UL                                         /**< Bit mask for RAC_RADIOEM1PDISSWREQ          */
#define _RAC_EM1PCSR_RADIOEM1PDISSWREQ_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define RAC_EM1PCSR_RADIOEM1PDISSWREQ_DEFAULT                         (_RAC_EM1PCSR_RADIOEM1PDISSWREQ_DEFAULT << 1) /**< Shifted mode DEFAULT for RAC_EM1PCSR        */
#define RAC_EM1PCSR_MCUEM1PMODE                                       (0x1UL << 4)                                  /**<                                             */
#define _RAC_EM1PCSR_MCUEM1PMODE_SHIFT                                4                                             /**< Shift value for RAC_MCUEM1PMODE             */
#define _RAC_EM1PCSR_MCUEM1PMODE_MASK                                 0x10UL                                        /**< Bit mask for RAC_MCUEM1PMODE                */
#define _RAC_EM1PCSR_MCUEM1PMODE_DEFAULT                              0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define _RAC_EM1PCSR_MCUEM1PMODE_HWCTRL                               0x00000000UL                                  /**< Mode HWCTRL for RAC_EM1PCSR                 */
#define _RAC_EM1PCSR_MCUEM1PMODE_SWCTRL                               0x00000001UL                                  /**< Mode SWCTRL for RAC_EM1PCSR                 */
#define RAC_EM1PCSR_MCUEM1PMODE_DEFAULT                               (_RAC_EM1PCSR_MCUEM1PMODE_DEFAULT << 4)       /**< Shifted mode DEFAULT for RAC_EM1PCSR        */
#define RAC_EM1PCSR_MCUEM1PMODE_HWCTRL                                (_RAC_EM1PCSR_MCUEM1PMODE_HWCTRL << 4)        /**< Shifted mode HWCTRL for RAC_EM1PCSR         */
#define RAC_EM1PCSR_MCUEM1PMODE_SWCTRL                                (_RAC_EM1PCSR_MCUEM1PMODE_SWCTRL << 4)        /**< Shifted mode SWCTRL for RAC_EM1PCSR         */
#define RAC_EM1PCSR_MCUEM1PDISSWREQ                                   (0x1UL << 5)                                  /**<                                             */
#define _RAC_EM1PCSR_MCUEM1PDISSWREQ_SHIFT                            5                                             /**< Shift value for RAC_MCUEM1PDISSWREQ         */
#define _RAC_EM1PCSR_MCUEM1PDISSWREQ_MASK                             0x20UL                                        /**< Bit mask for RAC_MCUEM1PDISSWREQ            */
#define _RAC_EM1PCSR_MCUEM1PDISSWREQ_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define RAC_EM1PCSR_MCUEM1PDISSWREQ_DEFAULT                           (_RAC_EM1PCSR_MCUEM1PDISSWREQ_DEFAULT << 5)   /**< Shifted mode DEFAULT for RAC_EM1PCSR        */
#define RAC_EM1PCSR_RADIOEM1PREQ                                      (0x1UL << 16)                                 /**<                                             */
#define _RAC_EM1PCSR_RADIOEM1PREQ_SHIFT                               16                                            /**< Shift value for RAC_RADIOEM1PREQ            */
#define _RAC_EM1PCSR_RADIOEM1PREQ_MASK                                0x10000UL                                     /**< Bit mask for RAC_RADIOEM1PREQ               */
#define _RAC_EM1PCSR_RADIOEM1PREQ_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define RAC_EM1PCSR_RADIOEM1PREQ_DEFAULT                              (_RAC_EM1PCSR_RADIOEM1PREQ_DEFAULT << 16)     /**< Shifted mode DEFAULT for RAC_EM1PCSR        */
#define RAC_EM1PCSR_RADIOEM1PACK                                      (0x1UL << 17)                                 /**<                                             */
#define _RAC_EM1PCSR_RADIOEM1PACK_SHIFT                               17                                            /**< Shift value for RAC_RADIOEM1PACK            */
#define _RAC_EM1PCSR_RADIOEM1PACK_MASK                                0x20000UL                                     /**< Bit mask for RAC_RADIOEM1PACK               */
#define _RAC_EM1PCSR_RADIOEM1PACK_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define RAC_EM1PCSR_RADIOEM1PACK_DEFAULT                              (_RAC_EM1PCSR_RADIOEM1PACK_DEFAULT << 17)     /**< Shifted mode DEFAULT for RAC_EM1PCSR        */
#define RAC_EM1PCSR_RADIOEM1PHWREQ                                    (0x1UL << 18)                                 /**<                                             */
#define _RAC_EM1PCSR_RADIOEM1PHWREQ_SHIFT                             18                                            /**< Shift value for RAC_RADIOEM1PHWREQ          */
#define _RAC_EM1PCSR_RADIOEM1PHWREQ_MASK                              0x40000UL                                     /**< Bit mask for RAC_RADIOEM1PHWREQ             */
#define _RAC_EM1PCSR_RADIOEM1PHWREQ_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for RAC_EM1PCSR                */
#define RAC_EM1PCSR_RADIOEM1PHWREQ_DEFAULT                            (_RAC_EM1PCSR_RADIOEM1PHWREQ_DEFAULT << 18)   /**< Shifted mode DEFAULT for RAC_EM1PCSR        */

/* Bit fields for RAC SYNTHENCTRL */
#define _RAC_SYNTHENCTRL_RESETVALUE                                   0x00000000UL                                       /**< Default value for RAC_SYNTHENCTRL           */
#define _RAC_SYNTHENCTRL_MASK                                         0x00100282UL                                       /**< Mask for RAC_SYNTHENCTRL                    */
#define RAC_SYNTHENCTRL_VCOSTARTUP                                    (0x1UL << 1)                                       /**< SYVCOFASTSTARTUP                            */
#define _RAC_SYNTHENCTRL_VCOSTARTUP_SHIFT                             1                                                  /**< Shift value for RAC_VCOSTARTUP              */
#define _RAC_SYNTHENCTRL_VCOSTARTUP_MASK                              0x2UL                                              /**< Bit mask for RAC_VCOSTARTUP                 */
#define _RAC_SYNTHENCTRL_VCOSTARTUP_DEFAULT                           0x00000000UL                                       /**< Mode DEFAULT for RAC_SYNTHENCTRL            */
#define _RAC_SYNTHENCTRL_VCOSTARTUP_fast_start_up_0                   0x00000000UL                                       /**< Mode fast_start_up_0 for RAC_SYNTHENCTRL    */
#define _RAC_SYNTHENCTRL_VCOSTARTUP_fast_start_up_1                   0x00000001UL                                       /**< Mode fast_start_up_1 for RAC_SYNTHENCTRL    */
#define RAC_SYNTHENCTRL_VCOSTARTUP_DEFAULT                            (_RAC_SYNTHENCTRL_VCOSTARTUP_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_SYNTHENCTRL    */
#define RAC_SYNTHENCTRL_VCOSTARTUP_fast_start_up_0                    (_RAC_SYNTHENCTRL_VCOSTARTUP_fast_start_up_0 << 1) /**< Shifted mode fast_start_up_0 for RAC_SYNTHENCTRL*/
#define RAC_SYNTHENCTRL_VCOSTARTUP_fast_start_up_1                    (_RAC_SYNTHENCTRL_VCOSTARTUP_fast_start_up_1 << 1) /**< Shifted mode fast_start_up_1 for RAC_SYNTHENCTRL*/
#define RAC_SYNTHENCTRL_VCBUFEN                                       (0x1UL << 7)                                       /**< SYLPFVCBUFEN                                */
#define _RAC_SYNTHENCTRL_VCBUFEN_SHIFT                                7                                                  /**< Shift value for RAC_VCBUFEN                 */
#define _RAC_SYNTHENCTRL_VCBUFEN_MASK                                 0x80UL                                             /**< Bit mask for RAC_VCBUFEN                    */
#define _RAC_SYNTHENCTRL_VCBUFEN_DEFAULT                              0x00000000UL                                       /**< Mode DEFAULT for RAC_SYNTHENCTRL            */
#define _RAC_SYNTHENCTRL_VCBUFEN_Disabled                             0x00000000UL                                       /**< Mode Disabled for RAC_SYNTHENCTRL           */
#define _RAC_SYNTHENCTRL_VCBUFEN_Enabled                              0x00000001UL                                       /**< Mode Enabled for RAC_SYNTHENCTRL            */
#define RAC_SYNTHENCTRL_VCBUFEN_DEFAULT                               (_RAC_SYNTHENCTRL_VCBUFEN_DEFAULT << 7)            /**< Shifted mode DEFAULT for RAC_SYNTHENCTRL    */
#define RAC_SYNTHENCTRL_VCBUFEN_Disabled                              (_RAC_SYNTHENCTRL_VCBUFEN_Disabled << 7)           /**< Shifted mode Disabled for RAC_SYNTHENCTRL   */
#define RAC_SYNTHENCTRL_VCBUFEN_Enabled                               (_RAC_SYNTHENCTRL_VCBUFEN_Enabled << 7)            /**< Shifted mode Enabled for RAC_SYNTHENCTRL    */
#define RAC_SYNTHENCTRL_LPFBWSEL                                      (0x1UL << 20)                                      /**< LPF bandwidth register selection            */
#define _RAC_SYNTHENCTRL_LPFBWSEL_SHIFT                               20                                                 /**< Shift value for RAC_LPFBWSEL                */
#define _RAC_SYNTHENCTRL_LPFBWSEL_MASK                                0x100000UL                                         /**< Bit mask for RAC_LPFBWSEL                   */
#define _RAC_SYNTHENCTRL_LPFBWSEL_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for RAC_SYNTHENCTRL            */
#define _RAC_SYNTHENCTRL_LPFBWSEL_LPFBWRX                             0x00000000UL                                       /**< Mode LPFBWRX for RAC_SYNTHENCTRL            */
#define _RAC_SYNTHENCTRL_LPFBWSEL_LPFBWTX                             0x00000001UL                                       /**< Mode LPFBWTX for RAC_SYNTHENCTRL            */
#define RAC_SYNTHENCTRL_LPFBWSEL_DEFAULT                              (_RAC_SYNTHENCTRL_LPFBWSEL_DEFAULT << 20)          /**< Shifted mode DEFAULT for RAC_SYNTHENCTRL    */
#define RAC_SYNTHENCTRL_LPFBWSEL_LPFBWRX                              (_RAC_SYNTHENCTRL_LPFBWSEL_LPFBWRX << 20)          /**< Shifted mode LPFBWRX for RAC_SYNTHENCTRL    */
#define RAC_SYNTHENCTRL_LPFBWSEL_LPFBWTX                              (_RAC_SYNTHENCTRL_LPFBWSEL_LPFBWTX << 20)          /**< Shifted mode LPFBWTX for RAC_SYNTHENCTRL    */

/* Bit fields for RAC SYNTHREGCTRL */
#define _RAC_SYNTHREGCTRL_RESETVALUE                                  0x04000000UL                                        /**< Default value for RAC_SYNTHREGCTRL          */
#define _RAC_SYNTHREGCTRL_MASK                                        0x07001C00UL                                        /**< Mask for RAC_SYNTHREGCTRL                   */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_SHIFT                        10                                                  /**< Shift value for RAC_MMDLDOVREFTRIM          */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_MASK                         0x1C00UL                                            /**< Bit mask for RAC_MMDLDOVREFTRIM             */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_DEFAULT                      0x00000000UL                                        /**< Mode DEFAULT for RAC_SYNTHREGCTRL           */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6000                   0x00000000UL                                        /**< Mode vref0p6000 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6125                   0x00000001UL                                        /**< Mode vref0p6125 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6250                   0x00000002UL                                        /**< Mode vref0p6250 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6375                   0x00000003UL                                        /**< Mode vref0p6375 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6500                   0x00000004UL                                        /**< Mode vref0p6500 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6625                   0x00000005UL                                        /**< Mode vref0p6625 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6750                   0x00000006UL                                        /**< Mode vref0p6750 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6875                   0x00000007UL                                        /**< Mode vref0p6875 for RAC_SYNTHREGCTRL        */
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_DEFAULT                       (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_DEFAULT << 10)    /**< Shifted mode DEFAULT for RAC_SYNTHREGCTRL   */
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6000                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6000 << 10) /**< Shifted mode vref0p6000 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6125                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6125 << 10) /**< Shifted mode vref0p6125 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6250                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6250 << 10) /**< Shifted mode vref0p6250 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6375                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6375 << 10) /**< Shifted mode vref0p6375 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6500                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6500 << 10) /**< Shifted mode vref0p6500 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6625                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6625 << 10) /**< Shifted mode vref0p6625 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6750                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6750 << 10) /**< Shifted mode vref0p6750 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6875                    (_RAC_SYNTHREGCTRL_MMDLDOVREFTRIM_vref0p6875 << 10) /**< Shifted mode vref0p6875 for RAC_SYNTHREGCTRL*/
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_SHIFT                        24                                                  /**< Shift value for RAC_CHPLDOVREFTRIM          */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_MASK                         0x7000000UL                                         /**< Bit mask for RAC_CHPLDOVREFTRIM             */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_DEFAULT                      0x00000004UL                                        /**< Mode DEFAULT for RAC_SYNTHREGCTRL           */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6000                   0x00000000UL                                        /**< Mode vref0p6000 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6125                   0x00000001UL                                        /**< Mode vref0p6125 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6250                   0x00000002UL                                        /**< Mode vref0p6250 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6375                   0x00000003UL                                        /**< Mode vref0p6375 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6500                   0x00000004UL                                        /**< Mode vref0p6500 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6625                   0x00000005UL                                        /**< Mode vref0p6625 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6750                   0x00000006UL                                        /**< Mode vref0p6750 for RAC_SYNTHREGCTRL        */
#define _RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6875                   0x00000007UL                                        /**< Mode vref0p6875 for RAC_SYNTHREGCTRL        */
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_DEFAULT                       (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_DEFAULT << 24)    /**< Shifted mode DEFAULT for RAC_SYNTHREGCTRL   */
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6000                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6000 << 24) /**< Shifted mode vref0p6000 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6125                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6125 << 24) /**< Shifted mode vref0p6125 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6250                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6250 << 24) /**< Shifted mode vref0p6250 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6375                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6375 << 24) /**< Shifted mode vref0p6375 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6500                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6500 << 24) /**< Shifted mode vref0p6500 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6625                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6625 << 24) /**< Shifted mode vref0p6625 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6750                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6750 << 24) /**< Shifted mode vref0p6750 for RAC_SYNTHREGCTRL*/
#define RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6875                    (_RAC_SYNTHREGCTRL_CHPLDOVREFTRIM_vref0p6875 << 24) /**< Shifted mode vref0p6875 for RAC_SYNTHREGCTRL*/

/* Bit fields for RAC VCOCTRL */
#define _RAC_VCOCTRL_RESETVALUE                                       0x0000004CUL                                /**< Default value for RAC_VCOCTRL               */
#define _RAC_VCOCTRL_MASK                                             0x000000FFUL                                /**< Mask for RAC_VCOCTRL                        */
#define _RAC_VCOCTRL_VCOAMPLITUDE_SHIFT                               0                                           /**< Shift value for RAC_VCOAMPLITUDE            */
#define _RAC_VCOCTRL_VCOAMPLITUDE_MASK                                0xFUL                                       /**< Bit mask for RAC_VCOAMPLITUDE               */
#define _RAC_VCOCTRL_VCOAMPLITUDE_DEFAULT                             0x0000000CUL                                /**< Mode DEFAULT for RAC_VCOCTRL                */
#define RAC_VCOCTRL_VCOAMPLITUDE_DEFAULT                              (_RAC_VCOCTRL_VCOAMPLITUDE_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_VCOCTRL        */
#define _RAC_VCOCTRL_VCODETAMPLITUDE_SHIFT                            4                                           /**< Shift value for RAC_VCODETAMPLITUDE         */
#define _RAC_VCOCTRL_VCODETAMPLITUDE_MASK                             0xF0UL                                      /**< Bit mask for RAC_VCODETAMPLITUDE            */
#define _RAC_VCOCTRL_VCODETAMPLITUDE_DEFAULT                          0x00000004UL                                /**< Mode DEFAULT for RAC_VCOCTRL                */
#define RAC_VCOCTRL_VCODETAMPLITUDE_DEFAULT                           (_RAC_VCOCTRL_VCODETAMPLITUDE_DEFAULT << 4) /**< Shifted mode DEFAULT for RAC_VCOCTRL        */

/* Bit fields for RAC SYNTHCTRL */
#define _RAC_SYNTHCTRL_RESETVALUE                                     0x00000000UL                                                    /**< Default value for RAC_SYNTHCTRL             */
#define _RAC_SYNTHCTRL_MASK                                           0x00000400UL                                                    /**< Mask for RAC_SYNTHCTRL                      */
#define RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE                          (0x1UL << 10)                                                   /**< SYMMDPOWERBALANCEENB                        */
#define _RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_SHIFT                   10                                                              /**< Shift value for RAC_MMDPOWERBALANCEDISABLE  */
#define _RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_MASK                    0x400UL                                                         /**< Bit mask for RAC_MMDPOWERBALANCEDISABLE     */
#define _RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_DEFAULT                 0x00000000UL                                                    /**< Mode DEFAULT for RAC_SYNTHCTRL              */
#define _RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_EnablePowerbleed        0x00000000UL                                                    /**< Mode EnablePowerbleed for RAC_SYNTHCTRL     */
#define _RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_DisablePowerBleed       0x00000001UL                                                    /**< Mode DisablePowerBleed for RAC_SYNTHCTRL    */
#define RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_DEFAULT                  (_RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_DEFAULT << 10)           /**< Shifted mode DEFAULT for RAC_SYNTHCTRL      */
#define RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_EnablePowerbleed         (_RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_EnablePowerbleed << 10)  /**< Shifted mode EnablePowerbleed for RAC_SYNTHCTRL*/
#define RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_DisablePowerBleed        (_RAC_SYNTHCTRL_MMDPOWERBALANCEDISABLE_DisablePowerBleed << 10) /**< Shifted mode DisablePowerBleed for RAC_SYNTHCTRL*/

/* Bit fields for RAC STATUS2 */
#define _RAC_STATUS2_RESETVALUE                                       0x00000000UL                              /**< Default value for RAC_STATUS2               */
#define _RAC_STATUS2_MASK                                             0x0000FFFFUL                              /**< Mask for RAC_STATUS2                        */
#define _RAC_STATUS2_PREVSTATE1_SHIFT                                 0                                         /**< Shift value for RAC_PREVSTATE1              */
#define _RAC_STATUS2_PREVSTATE1_MASK                                  0xFUL                                     /**< Bit mask for RAC_PREVSTATE1                 */
#define _RAC_STATUS2_PREVSTATE1_DEFAULT                               0x00000000UL                              /**< Mode DEFAULT for RAC_STATUS2                */
#define _RAC_STATUS2_PREVSTATE1_OFF                                   0x00000000UL                              /**< Mode OFF for RAC_STATUS2                    */
#define _RAC_STATUS2_PREVSTATE1_RXWARM                                0x00000001UL                              /**< Mode RXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_PREVSTATE1_RXSEARCH                              0x00000002UL                              /**< Mode RXSEARCH for RAC_STATUS2               */
#define _RAC_STATUS2_PREVSTATE1_RXFRAME                               0x00000003UL                              /**< Mode RXFRAME for RAC_STATUS2                */
#define _RAC_STATUS2_PREVSTATE1_RXPD                                  0x00000004UL                              /**< Mode RXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_PREVSTATE1_RX2RX                                 0x00000005UL                              /**< Mode RX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE1_RXOVERFLOW                            0x00000006UL                              /**< Mode RXOVERFLOW for RAC_STATUS2             */
#define _RAC_STATUS2_PREVSTATE1_RX2TX                                 0x00000007UL                              /**< Mode RX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE1_TXWARM                                0x00000008UL                              /**< Mode TXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_PREVSTATE1_TX                                    0x00000009UL                              /**< Mode TX for RAC_STATUS2                     */
#define _RAC_STATUS2_PREVSTATE1_TXPD                                  0x0000000AUL                              /**< Mode TXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_PREVSTATE1_TX2RX                                 0x0000000BUL                              /**< Mode TX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE1_TX2TX                                 0x0000000CUL                              /**< Mode TX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE1_SHUTDOWN                              0x0000000DUL                              /**< Mode SHUTDOWN for RAC_STATUS2               */
#define _RAC_STATUS2_PREVSTATE1_POR                                   0x0000000EUL                              /**< Mode POR for RAC_STATUS2                    */
#define RAC_STATUS2_PREVSTATE1_DEFAULT                                (_RAC_STATUS2_PREVSTATE1_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_STATUS2        */
#define RAC_STATUS2_PREVSTATE1_OFF                                    (_RAC_STATUS2_PREVSTATE1_OFF << 0)        /**< Shifted mode OFF for RAC_STATUS2            */
#define RAC_STATUS2_PREVSTATE1_RXWARM                                 (_RAC_STATUS2_PREVSTATE1_RXWARM << 0)     /**< Shifted mode RXWARM for RAC_STATUS2         */
#define RAC_STATUS2_PREVSTATE1_RXSEARCH                               (_RAC_STATUS2_PREVSTATE1_RXSEARCH << 0)   /**< Shifted mode RXSEARCH for RAC_STATUS2       */
#define RAC_STATUS2_PREVSTATE1_RXFRAME                                (_RAC_STATUS2_PREVSTATE1_RXFRAME << 0)    /**< Shifted mode RXFRAME for RAC_STATUS2        */
#define RAC_STATUS2_PREVSTATE1_RXPD                                   (_RAC_STATUS2_PREVSTATE1_RXPD << 0)       /**< Shifted mode RXPD for RAC_STATUS2           */
#define RAC_STATUS2_PREVSTATE1_RX2RX                                  (_RAC_STATUS2_PREVSTATE1_RX2RX << 0)      /**< Shifted mode RX2RX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE1_RXOVERFLOW                             (_RAC_STATUS2_PREVSTATE1_RXOVERFLOW << 0) /**< Shifted mode RXOVERFLOW for RAC_STATUS2     */
#define RAC_STATUS2_PREVSTATE1_RX2TX                                  (_RAC_STATUS2_PREVSTATE1_RX2TX << 0)      /**< Shifted mode RX2TX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE1_TXWARM                                 (_RAC_STATUS2_PREVSTATE1_TXWARM << 0)     /**< Shifted mode TXWARM for RAC_STATUS2         */
#define RAC_STATUS2_PREVSTATE1_TX                                     (_RAC_STATUS2_PREVSTATE1_TX << 0)         /**< Shifted mode TX for RAC_STATUS2             */
#define RAC_STATUS2_PREVSTATE1_TXPD                                   (_RAC_STATUS2_PREVSTATE1_TXPD << 0)       /**< Shifted mode TXPD for RAC_STATUS2           */
#define RAC_STATUS2_PREVSTATE1_TX2RX                                  (_RAC_STATUS2_PREVSTATE1_TX2RX << 0)      /**< Shifted mode TX2RX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE1_TX2TX                                  (_RAC_STATUS2_PREVSTATE1_TX2TX << 0)      /**< Shifted mode TX2TX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE1_SHUTDOWN                               (_RAC_STATUS2_PREVSTATE1_SHUTDOWN << 0)   /**< Shifted mode SHUTDOWN for RAC_STATUS2       */
#define RAC_STATUS2_PREVSTATE1_POR                                    (_RAC_STATUS2_PREVSTATE1_POR << 0)        /**< Shifted mode POR for RAC_STATUS2            */
#define _RAC_STATUS2_PREVSTATE2_SHIFT                                 4                                         /**< Shift value for RAC_PREVSTATE2              */
#define _RAC_STATUS2_PREVSTATE2_MASK                                  0xF0UL                                    /**< Bit mask for RAC_PREVSTATE2                 */
#define _RAC_STATUS2_PREVSTATE2_DEFAULT                               0x00000000UL                              /**< Mode DEFAULT for RAC_STATUS2                */
#define _RAC_STATUS2_PREVSTATE2_OFF                                   0x00000000UL                              /**< Mode OFF for RAC_STATUS2                    */
#define _RAC_STATUS2_PREVSTATE2_RXWARM                                0x00000001UL                              /**< Mode RXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_PREVSTATE2_RXSEARCH                              0x00000002UL                              /**< Mode RXSEARCH for RAC_STATUS2               */
#define _RAC_STATUS2_PREVSTATE2_RXFRAME                               0x00000003UL                              /**< Mode RXFRAME for RAC_STATUS2                */
#define _RAC_STATUS2_PREVSTATE2_RXPD                                  0x00000004UL                              /**< Mode RXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_PREVSTATE2_RX2RX                                 0x00000005UL                              /**< Mode RX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE2_RXOVERFLOW                            0x00000006UL                              /**< Mode RXOVERFLOW for RAC_STATUS2             */
#define _RAC_STATUS2_PREVSTATE2_RX2TX                                 0x00000007UL                              /**< Mode RX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE2_TXWARM                                0x00000008UL                              /**< Mode TXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_PREVSTATE2_TX                                    0x00000009UL                              /**< Mode TX for RAC_STATUS2                     */
#define _RAC_STATUS2_PREVSTATE2_TXPD                                  0x0000000AUL                              /**< Mode TXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_PREVSTATE2_TX2RX                                 0x0000000BUL                              /**< Mode TX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE2_TX2TX                                 0x0000000CUL                              /**< Mode TX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE2_SHUTDOWN                              0x0000000DUL                              /**< Mode SHUTDOWN for RAC_STATUS2               */
#define _RAC_STATUS2_PREVSTATE2_POR                                   0x0000000EUL                              /**< Mode POR for RAC_STATUS2                    */
#define RAC_STATUS2_PREVSTATE2_DEFAULT                                (_RAC_STATUS2_PREVSTATE2_DEFAULT << 4)    /**< Shifted mode DEFAULT for RAC_STATUS2        */
#define RAC_STATUS2_PREVSTATE2_OFF                                    (_RAC_STATUS2_PREVSTATE2_OFF << 4)        /**< Shifted mode OFF for RAC_STATUS2            */
#define RAC_STATUS2_PREVSTATE2_RXWARM                                 (_RAC_STATUS2_PREVSTATE2_RXWARM << 4)     /**< Shifted mode RXWARM for RAC_STATUS2         */
#define RAC_STATUS2_PREVSTATE2_RXSEARCH                               (_RAC_STATUS2_PREVSTATE2_RXSEARCH << 4)   /**< Shifted mode RXSEARCH for RAC_STATUS2       */
#define RAC_STATUS2_PREVSTATE2_RXFRAME                                (_RAC_STATUS2_PREVSTATE2_RXFRAME << 4)    /**< Shifted mode RXFRAME for RAC_STATUS2        */
#define RAC_STATUS2_PREVSTATE2_RXPD                                   (_RAC_STATUS2_PREVSTATE2_RXPD << 4)       /**< Shifted mode RXPD for RAC_STATUS2           */
#define RAC_STATUS2_PREVSTATE2_RX2RX                                  (_RAC_STATUS2_PREVSTATE2_RX2RX << 4)      /**< Shifted mode RX2RX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE2_RXOVERFLOW                             (_RAC_STATUS2_PREVSTATE2_RXOVERFLOW << 4) /**< Shifted mode RXOVERFLOW for RAC_STATUS2     */
#define RAC_STATUS2_PREVSTATE2_RX2TX                                  (_RAC_STATUS2_PREVSTATE2_RX2TX << 4)      /**< Shifted mode RX2TX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE2_TXWARM                                 (_RAC_STATUS2_PREVSTATE2_TXWARM << 4)     /**< Shifted mode TXWARM for RAC_STATUS2         */
#define RAC_STATUS2_PREVSTATE2_TX                                     (_RAC_STATUS2_PREVSTATE2_TX << 4)         /**< Shifted mode TX for RAC_STATUS2             */
#define RAC_STATUS2_PREVSTATE2_TXPD                                   (_RAC_STATUS2_PREVSTATE2_TXPD << 4)       /**< Shifted mode TXPD for RAC_STATUS2           */
#define RAC_STATUS2_PREVSTATE2_TX2RX                                  (_RAC_STATUS2_PREVSTATE2_TX2RX << 4)      /**< Shifted mode TX2RX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE2_TX2TX                                  (_RAC_STATUS2_PREVSTATE2_TX2TX << 4)      /**< Shifted mode TX2TX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE2_SHUTDOWN                               (_RAC_STATUS2_PREVSTATE2_SHUTDOWN << 4)   /**< Shifted mode SHUTDOWN for RAC_STATUS2       */
#define RAC_STATUS2_PREVSTATE2_POR                                    (_RAC_STATUS2_PREVSTATE2_POR << 4)        /**< Shifted mode POR for RAC_STATUS2            */
#define _RAC_STATUS2_PREVSTATE3_SHIFT                                 8                                         /**< Shift value for RAC_PREVSTATE3              */
#define _RAC_STATUS2_PREVSTATE3_MASK                                  0xF00UL                                   /**< Bit mask for RAC_PREVSTATE3                 */
#define _RAC_STATUS2_PREVSTATE3_DEFAULT                               0x00000000UL                              /**< Mode DEFAULT for RAC_STATUS2                */
#define _RAC_STATUS2_PREVSTATE3_OFF                                   0x00000000UL                              /**< Mode OFF for RAC_STATUS2                    */
#define _RAC_STATUS2_PREVSTATE3_RXWARM                                0x00000001UL                              /**< Mode RXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_PREVSTATE3_RXSEARCH                              0x00000002UL                              /**< Mode RXSEARCH for RAC_STATUS2               */
#define _RAC_STATUS2_PREVSTATE3_RXFRAME                               0x00000003UL                              /**< Mode RXFRAME for RAC_STATUS2                */
#define _RAC_STATUS2_PREVSTATE3_RXPD                                  0x00000004UL                              /**< Mode RXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_PREVSTATE3_RX2RX                                 0x00000005UL                              /**< Mode RX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE3_RXOVERFLOW                            0x00000006UL                              /**< Mode RXOVERFLOW for RAC_STATUS2             */
#define _RAC_STATUS2_PREVSTATE3_RX2TX                                 0x00000007UL                              /**< Mode RX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE3_TXWARM                                0x00000008UL                              /**< Mode TXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_PREVSTATE3_TX                                    0x00000009UL                              /**< Mode TX for RAC_STATUS2                     */
#define _RAC_STATUS2_PREVSTATE3_TXPD                                  0x0000000AUL                              /**< Mode TXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_PREVSTATE3_TX2RX                                 0x0000000BUL                              /**< Mode TX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE3_TX2TX                                 0x0000000CUL                              /**< Mode TX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_PREVSTATE3_SHUTDOWN                              0x0000000DUL                              /**< Mode SHUTDOWN for RAC_STATUS2               */
#define _RAC_STATUS2_PREVSTATE3_POR                                   0x0000000EUL                              /**< Mode POR for RAC_STATUS2                    */
#define RAC_STATUS2_PREVSTATE3_DEFAULT                                (_RAC_STATUS2_PREVSTATE3_DEFAULT << 8)    /**< Shifted mode DEFAULT for RAC_STATUS2        */
#define RAC_STATUS2_PREVSTATE3_OFF                                    (_RAC_STATUS2_PREVSTATE3_OFF << 8)        /**< Shifted mode OFF for RAC_STATUS2            */
#define RAC_STATUS2_PREVSTATE3_RXWARM                                 (_RAC_STATUS2_PREVSTATE3_RXWARM << 8)     /**< Shifted mode RXWARM for RAC_STATUS2         */
#define RAC_STATUS2_PREVSTATE3_RXSEARCH                               (_RAC_STATUS2_PREVSTATE3_RXSEARCH << 8)   /**< Shifted mode RXSEARCH for RAC_STATUS2       */
#define RAC_STATUS2_PREVSTATE3_RXFRAME                                (_RAC_STATUS2_PREVSTATE3_RXFRAME << 8)    /**< Shifted mode RXFRAME for RAC_STATUS2        */
#define RAC_STATUS2_PREVSTATE3_RXPD                                   (_RAC_STATUS2_PREVSTATE3_RXPD << 8)       /**< Shifted mode RXPD for RAC_STATUS2           */
#define RAC_STATUS2_PREVSTATE3_RX2RX                                  (_RAC_STATUS2_PREVSTATE3_RX2RX << 8)      /**< Shifted mode RX2RX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE3_RXOVERFLOW                             (_RAC_STATUS2_PREVSTATE3_RXOVERFLOW << 8) /**< Shifted mode RXOVERFLOW for RAC_STATUS2     */
#define RAC_STATUS2_PREVSTATE3_RX2TX                                  (_RAC_STATUS2_PREVSTATE3_RX2TX << 8)      /**< Shifted mode RX2TX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE3_TXWARM                                 (_RAC_STATUS2_PREVSTATE3_TXWARM << 8)     /**< Shifted mode TXWARM for RAC_STATUS2         */
#define RAC_STATUS2_PREVSTATE3_TX                                     (_RAC_STATUS2_PREVSTATE3_TX << 8)         /**< Shifted mode TX for RAC_STATUS2             */
#define RAC_STATUS2_PREVSTATE3_TXPD                                   (_RAC_STATUS2_PREVSTATE3_TXPD << 8)       /**< Shifted mode TXPD for RAC_STATUS2           */
#define RAC_STATUS2_PREVSTATE3_TX2RX                                  (_RAC_STATUS2_PREVSTATE3_TX2RX << 8)      /**< Shifted mode TX2RX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE3_TX2TX                                  (_RAC_STATUS2_PREVSTATE3_TX2TX << 8)      /**< Shifted mode TX2TX for RAC_STATUS2          */
#define RAC_STATUS2_PREVSTATE3_SHUTDOWN                               (_RAC_STATUS2_PREVSTATE3_SHUTDOWN << 8)   /**< Shifted mode SHUTDOWN for RAC_STATUS2       */
#define RAC_STATUS2_PREVSTATE3_POR                                    (_RAC_STATUS2_PREVSTATE3_POR << 8)        /**< Shifted mode POR for RAC_STATUS2            */
#define _RAC_STATUS2_CURRSTATE_SHIFT                                  12                                        /**< Shift value for RAC_CURRSTATE               */
#define _RAC_STATUS2_CURRSTATE_MASK                                   0xF000UL                                  /**< Bit mask for RAC_CURRSTATE                  */
#define _RAC_STATUS2_CURRSTATE_DEFAULT                                0x00000000UL                              /**< Mode DEFAULT for RAC_STATUS2                */
#define _RAC_STATUS2_CURRSTATE_OFF                                    0x00000000UL                              /**< Mode OFF for RAC_STATUS2                    */
#define _RAC_STATUS2_CURRSTATE_RXWARM                                 0x00000001UL                              /**< Mode RXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_CURRSTATE_RXSEARCH                               0x00000002UL                              /**< Mode RXSEARCH for RAC_STATUS2               */
#define _RAC_STATUS2_CURRSTATE_RXFRAME                                0x00000003UL                              /**< Mode RXFRAME for RAC_STATUS2                */
#define _RAC_STATUS2_CURRSTATE_RXPD                                   0x00000004UL                              /**< Mode RXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_CURRSTATE_RX2RX                                  0x00000005UL                              /**< Mode RX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_CURRSTATE_RXOVERFLOW                             0x00000006UL                              /**< Mode RXOVERFLOW for RAC_STATUS2             */
#define _RAC_STATUS2_CURRSTATE_RX2TX                                  0x00000007UL                              /**< Mode RX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_CURRSTATE_TXWARM                                 0x00000008UL                              /**< Mode TXWARM for RAC_STATUS2                 */
#define _RAC_STATUS2_CURRSTATE_TX                                     0x00000009UL                              /**< Mode TX for RAC_STATUS2                     */
#define _RAC_STATUS2_CURRSTATE_TXPD                                   0x0000000AUL                              /**< Mode TXPD for RAC_STATUS2                   */
#define _RAC_STATUS2_CURRSTATE_TX2RX                                  0x0000000BUL                              /**< Mode TX2RX for RAC_STATUS2                  */
#define _RAC_STATUS2_CURRSTATE_TX2TX                                  0x0000000CUL                              /**< Mode TX2TX for RAC_STATUS2                  */
#define _RAC_STATUS2_CURRSTATE_SHUTDOWN                               0x0000000DUL                              /**< Mode SHUTDOWN for RAC_STATUS2               */
#define _RAC_STATUS2_CURRSTATE_POR                                    0x0000000EUL                              /**< Mode POR for RAC_STATUS2                    */
#define RAC_STATUS2_CURRSTATE_DEFAULT                                 (_RAC_STATUS2_CURRSTATE_DEFAULT << 12)    /**< Shifted mode DEFAULT for RAC_STATUS2        */
#define RAC_STATUS2_CURRSTATE_OFF                                     (_RAC_STATUS2_CURRSTATE_OFF << 12)        /**< Shifted mode OFF for RAC_STATUS2            */
#define RAC_STATUS2_CURRSTATE_RXWARM                                  (_RAC_STATUS2_CURRSTATE_RXWARM << 12)     /**< Shifted mode RXWARM for RAC_STATUS2         */
#define RAC_STATUS2_CURRSTATE_RXSEARCH                                (_RAC_STATUS2_CURRSTATE_RXSEARCH << 12)   /**< Shifted mode RXSEARCH for RAC_STATUS2       */
#define RAC_STATUS2_CURRSTATE_RXFRAME                                 (_RAC_STATUS2_CURRSTATE_RXFRAME << 12)    /**< Shifted mode RXFRAME for RAC_STATUS2        */
#define RAC_STATUS2_CURRSTATE_RXPD                                    (_RAC_STATUS2_CURRSTATE_RXPD << 12)       /**< Shifted mode RXPD for RAC_STATUS2           */
#define RAC_STATUS2_CURRSTATE_RX2RX                                   (_RAC_STATUS2_CURRSTATE_RX2RX << 12)      /**< Shifted mode RX2RX for RAC_STATUS2          */
#define RAC_STATUS2_CURRSTATE_RXOVERFLOW                              (_RAC_STATUS2_CURRSTATE_RXOVERFLOW << 12) /**< Shifted mode RXOVERFLOW for RAC_STATUS2     */
#define RAC_STATUS2_CURRSTATE_RX2TX                                   (_RAC_STATUS2_CURRSTATE_RX2TX << 12)      /**< Shifted mode RX2TX for RAC_STATUS2          */
#define RAC_STATUS2_CURRSTATE_TXWARM                                  (_RAC_STATUS2_CURRSTATE_TXWARM << 12)     /**< Shifted mode TXWARM for RAC_STATUS2         */
#define RAC_STATUS2_CURRSTATE_TX                                      (_RAC_STATUS2_CURRSTATE_TX << 12)         /**< Shifted mode TX for RAC_STATUS2             */
#define RAC_STATUS2_CURRSTATE_TXPD                                    (_RAC_STATUS2_CURRSTATE_TXPD << 12)       /**< Shifted mode TXPD for RAC_STATUS2           */
#define RAC_STATUS2_CURRSTATE_TX2RX                                   (_RAC_STATUS2_CURRSTATE_TX2RX << 12)      /**< Shifted mode TX2RX for RAC_STATUS2          */
#define RAC_STATUS2_CURRSTATE_TX2TX                                   (_RAC_STATUS2_CURRSTATE_TX2TX << 12)      /**< Shifted mode TX2TX for RAC_STATUS2          */
#define RAC_STATUS2_CURRSTATE_SHUTDOWN                                (_RAC_STATUS2_CURRSTATE_SHUTDOWN << 12)   /**< Shifted mode SHUTDOWN for RAC_STATUS2       */
#define RAC_STATUS2_CURRSTATE_POR                                     (_RAC_STATUS2_CURRSTATE_POR << 12)        /**< Shifted mode POR for RAC_STATUS2            */

/* Bit fields for RAC IFPGACTRL */
#define _RAC_IFPGACTRL_RESETVALUE                                     0x00000000UL                               /**< Default value for RAC_IFPGACTRL             */
#define _RAC_IFPGACTRL_MASK                                           0x0FF80000UL                               /**< Mask for RAC_IFPGACTRL                      */
#define RAC_IFPGACTRL_DCCALON                                         (0x1UL << 19)                              /**< Enable/Disable DCCAL in DEMOD               */
#define _RAC_IFPGACTRL_DCCALON_SHIFT                                  19                                         /**< Shift value for RAC_DCCALON                 */
#define _RAC_IFPGACTRL_DCCALON_MASK                                   0x80000UL                                  /**< Bit mask for RAC_DCCALON                    */
#define _RAC_IFPGACTRL_DCCALON_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCCALON_DISABLE                                0x00000000UL                               /**< Mode DISABLE for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCCALON_ENABLE                                 0x00000001UL                               /**< Mode ENABLE for RAC_IFPGACTRL               */
#define RAC_IFPGACTRL_DCCALON_DEFAULT                                 (_RAC_IFPGACTRL_DCCALON_DEFAULT << 19)     /**< Shifted mode DEFAULT for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCCALON_DISABLE                                 (_RAC_IFPGACTRL_DCCALON_DISABLE << 19)     /**< Shifted mode DISABLE for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCCALON_ENABLE                                  (_RAC_IFPGACTRL_DCCALON_ENABLE << 19)      /**< Shifted mode ENABLE for RAC_IFPGACTRL       */
#define RAC_IFPGACTRL_DCRSTEN                                         (0x1UL << 20)                              /**< DC Compensation Filter Reset Enable         */
#define _RAC_IFPGACTRL_DCRSTEN_SHIFT                                  20                                         /**< Shift value for RAC_DCRSTEN                 */
#define _RAC_IFPGACTRL_DCRSTEN_MASK                                   0x100000UL                                 /**< Bit mask for RAC_DCRSTEN                    */
#define _RAC_IFPGACTRL_DCRSTEN_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCRSTEN_DISABLE                                0x00000000UL                               /**< Mode DISABLE for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCRSTEN_ENABLE                                 0x00000001UL                               /**< Mode ENABLE for RAC_IFPGACTRL               */
#define RAC_IFPGACTRL_DCRSTEN_DEFAULT                                 (_RAC_IFPGACTRL_DCRSTEN_DEFAULT << 20)     /**< Shifted mode DEFAULT for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCRSTEN_DISABLE                                 (_RAC_IFPGACTRL_DCRSTEN_DISABLE << 20)     /**< Shifted mode DISABLE for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCRSTEN_ENABLE                                  (_RAC_IFPGACTRL_DCRSTEN_ENABLE << 20)      /**< Shifted mode ENABLE for RAC_IFPGACTRL       */
#define RAC_IFPGACTRL_DCESTIEN                                        (0x1UL << 21)                              /**< DCESTIEN Override for RAC                   */
#define _RAC_IFPGACTRL_DCESTIEN_SHIFT                                 21                                         /**< Shift value for RAC_DCESTIEN                */
#define _RAC_IFPGACTRL_DCESTIEN_MASK                                  0x200000UL                                 /**< Bit mask for RAC_DCESTIEN                   */
#define _RAC_IFPGACTRL_DCESTIEN_DEFAULT                               0x00000000UL                               /**< Mode DEFAULT for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCESTIEN_DISABLE                               0x00000000UL                               /**< Mode DISABLE for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCESTIEN_ENABLE                                0x00000001UL                               /**< Mode ENABLE for RAC_IFPGACTRL               */
#define RAC_IFPGACTRL_DCESTIEN_DEFAULT                                (_RAC_IFPGACTRL_DCESTIEN_DEFAULT << 21)    /**< Shifted mode DEFAULT for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCESTIEN_DISABLE                                (_RAC_IFPGACTRL_DCESTIEN_DISABLE << 21)    /**< Shifted mode DISABLE for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCESTIEN_ENABLE                                 (_RAC_IFPGACTRL_DCESTIEN_ENABLE << 21)     /**< Shifted mode ENABLE for RAC_IFPGACTRL       */
#define _RAC_IFPGACTRL_DCCALDEC0_SHIFT                                22                                         /**< Shift value for RAC_DCCALDEC0               */
#define _RAC_IFPGACTRL_DCCALDEC0_MASK                                 0x1C00000UL                                /**< Bit mask for RAC_DCCALDEC0                  */
#define _RAC_IFPGACTRL_DCCALDEC0_DEFAULT                              0x00000000UL                               /**< Mode DEFAULT for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCCALDEC0_DF3                                  0x00000000UL                               /**< Mode DF3 for RAC_IFPGACTRL                  */
#define _RAC_IFPGACTRL_DCCALDEC0_DF4WIDE                              0x00000001UL                               /**< Mode DF4WIDE for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCCALDEC0_DF4NARROW                            0x00000002UL                               /**< Mode DF4NARROW for RAC_IFPGACTRL            */
#define _RAC_IFPGACTRL_DCCALDEC0_DF8WIDE                              0x00000003UL                               /**< Mode DF8WIDE for RAC_IFPGACTRL              */
#define _RAC_IFPGACTRL_DCCALDEC0_DF8NARROW                            0x00000004UL                               /**< Mode DF8NARROW for RAC_IFPGACTRL            */
#define RAC_IFPGACTRL_DCCALDEC0_DEFAULT                               (_RAC_IFPGACTRL_DCCALDEC0_DEFAULT << 22)   /**< Shifted mode DEFAULT for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCCALDEC0_DF3                                   (_RAC_IFPGACTRL_DCCALDEC0_DF3 << 22)       /**< Shifted mode DF3 for RAC_IFPGACTRL          */
#define RAC_IFPGACTRL_DCCALDEC0_DF4WIDE                               (_RAC_IFPGACTRL_DCCALDEC0_DF4WIDE << 22)   /**< Shifted mode DF4WIDE for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCCALDEC0_DF4NARROW                             (_RAC_IFPGACTRL_DCCALDEC0_DF4NARROW << 22) /**< Shifted mode DF4NARROW for RAC_IFPGACTRL    */
#define RAC_IFPGACTRL_DCCALDEC0_DF8WIDE                               (_RAC_IFPGACTRL_DCCALDEC0_DF8WIDE << 22)   /**< Shifted mode DF8WIDE for RAC_IFPGACTRL      */
#define RAC_IFPGACTRL_DCCALDEC0_DF8NARROW                             (_RAC_IFPGACTRL_DCCALDEC0_DF8NARROW << 22) /**< Shifted mode DF8NARROW for RAC_IFPGACTRL    */
#define _RAC_IFPGACTRL_DCCALDCGEAR_SHIFT                              25                                         /**< Shift value for RAC_DCCALDCGEAR             */
#define _RAC_IFPGACTRL_DCCALDCGEAR_MASK                               0xE000000UL                                /**< Bit mask for RAC_DCCALDCGEAR                */
#define _RAC_IFPGACTRL_DCCALDCGEAR_DEFAULT                            0x00000000UL                               /**< Mode DEFAULT for RAC_IFPGACTRL              */
#define RAC_IFPGACTRL_DCCALDCGEAR_DEFAULT                             (_RAC_IFPGACTRL_DCCALDCGEAR_DEFAULT << 25) /**< Shifted mode DEFAULT for RAC_IFPGACTRL      */

/* Bit fields for RAC PAENCTRL */
#define _RAC_PAENCTRL_RESETVALUE                                      0x00000000UL                             /**< Default value for RAC_PAENCTRL              */
#define _RAC_PAENCTRL_MASK                                            0x10010100UL                             /**< Mask for RAC_PAENCTRL                       */
#define RAC_PAENCTRL_PARAMP                                           (0x1UL << 8)                             /**< PA output level ramping                     */
#define _RAC_PAENCTRL_PARAMP_SHIFT                                    8                                        /**< Shift value for RAC_PARAMP                  */
#define _RAC_PAENCTRL_PARAMP_MASK                                     0x100UL                                  /**< Bit mask for RAC_PARAMP                     */
#define _RAC_PAENCTRL_PARAMP_DEFAULT                                  0x00000000UL                             /**< Mode DEFAULT for RAC_PAENCTRL               */
#define RAC_PAENCTRL_PARAMP_DEFAULT                                   (_RAC_PAENCTRL_PARAMP_DEFAULT << 8)      /**< Shifted mode DEFAULT for RAC_PAENCTRL       */
#define RAC_PAENCTRL_INVRAMPCLK                                       (0x1UL << 16)                            /**< Invert PA ramping clock                     */
#define _RAC_PAENCTRL_INVRAMPCLK_SHIFT                                16                                       /**< Shift value for RAC_INVRAMPCLK              */
#define _RAC_PAENCTRL_INVRAMPCLK_MASK                                 0x10000UL                                /**< Bit mask for RAC_INVRAMPCLK                 */
#define _RAC_PAENCTRL_INVRAMPCLK_DEFAULT                              0x00000000UL                             /**< Mode DEFAULT for RAC_PAENCTRL               */
#define RAC_PAENCTRL_INVRAMPCLK_DEFAULT                               (_RAC_PAENCTRL_INVRAMPCLK_DEFAULT << 16) /**< Shifted mode DEFAULT for RAC_PAENCTRL       */
#define RAC_PAENCTRL_PARAMPMODE                                       (0x1UL << 28)                            /**< PA ramp mode                                */
#define _RAC_PAENCTRL_PARAMPMODE_SHIFT                                28                                       /**< Shift value for RAC_PARAMPMODE              */
#define _RAC_PAENCTRL_PARAMPMODE_MASK                                 0x10000000UL                             /**< Bit mask for RAC_PARAMPMODE                 */
#define _RAC_PAENCTRL_PARAMPMODE_DEFAULT                              0x00000000UL                             /**< Mode DEFAULT for RAC_PAENCTRL               */
#define _RAC_PAENCTRL_PARAMPMODE_LINEAR                               0x00000000UL                             /**< Mode LINEAR for RAC_PAENCTRL                */
#define _RAC_PAENCTRL_PARAMPMODE_OFFSET                               0x00000001UL                             /**< Mode OFFSET for RAC_PAENCTRL                */
#define RAC_PAENCTRL_PARAMPMODE_DEFAULT                               (_RAC_PAENCTRL_PARAMPMODE_DEFAULT << 28) /**< Shifted mode DEFAULT for RAC_PAENCTRL       */
#define RAC_PAENCTRL_PARAMPMODE_LINEAR                                (_RAC_PAENCTRL_PARAMPMODE_LINEAR << 28)  /**< Shifted mode LINEAR for RAC_PAENCTRL        */
#define RAC_PAENCTRL_PARAMPMODE_OFFSET                                (_RAC_PAENCTRL_PARAMPMODE_OFFSET << 28)  /**< Shifted mode OFFSET for RAC_PAENCTRL        */

/* Bit fields for RAC APC */
#define _RAC_APC_RESETVALUE                                           0xFF000000UL                               /**< Default value for RAC_APC                   */
#define _RAC_APC_MASK                                                 0xFF000004UL                               /**< Mask for RAC_APC                            */
#define RAC_APC_ENAPCSW                                               (0x1UL << 2)                               /**< software control bit for apc                */
#define _RAC_APC_ENAPCSW_SHIFT                                        2                                          /**< Shift value for RAC_ENAPCSW                 */
#define _RAC_APC_ENAPCSW_MASK                                         0x4UL                                      /**< Bit mask for RAC_ENAPCSW                    */
#define _RAC_APC_ENAPCSW_DEFAULT                                      0x00000000UL                               /**< Mode DEFAULT for RAC_APC                    */
#define _RAC_APC_ENAPCSW_DISABLE                                      0x00000000UL                               /**< Mode DISABLE for RAC_APC                    */
#define _RAC_APC_ENAPCSW_ENABLE                                       0x00000001UL                               /**< Mode ENABLE for RAC_APC                     */
#define RAC_APC_ENAPCSW_DEFAULT                                       (_RAC_APC_ENAPCSW_DEFAULT << 2)            /**< Shifted mode DEFAULT for RAC_APC            */
#define RAC_APC_ENAPCSW_DISABLE                                       (_RAC_APC_ENAPCSW_DISABLE << 2)            /**< Shifted mode DISABLE for RAC_APC            */
#define RAC_APC_ENAPCSW_ENABLE                                        (_RAC_APC_ENAPCSW_ENABLE << 2)             /**< Shifted mode ENABLE for RAC_APC             */
#define _RAC_APC_AMPCONTROLLIMITSW_SHIFT                              24                                         /**< Shift value for RAC_AMPCONTROLLIMITSW       */
#define _RAC_APC_AMPCONTROLLIMITSW_MASK                               0xFF000000UL                               /**< Bit mask for RAC_AMPCONTROLLIMITSW          */
#define _RAC_APC_AMPCONTROLLIMITSW_DEFAULT                            0x000000FFUL                               /**< Mode DEFAULT for RAC_APC                    */
#define RAC_APC_AMPCONTROLLIMITSW_DEFAULT                             (_RAC_APC_AMPCONTROLLIMITSW_DEFAULT << 24) /**< Shifted mode DEFAULT for RAC_APC            */

/* Bit fields for RAC AUXADCTRIM */
#define _RAC_AUXADCTRIM_RESETVALUE                                    0x06D55502UL                                                     /**< Default value for RAC_AUXADCTRIM            */
#define _RAC_AUXADCTRIM_MASK                                          0x1FFFFFFFUL                                                     /**< Mask for RAC_AUXADCTRIM                     */
#define RAC_AUXADCTRIM_AUXADCCLKINVERT                                (0x1UL << 0)                                                     /**< AUXADCCLKINVERT                             */
#define _RAC_AUXADCTRIM_AUXADCCLKINVERT_SHIFT                         0                                                                /**< Shift value for RAC_AUXADCCLKINVERT         */
#define _RAC_AUXADCTRIM_AUXADCCLKINVERT_MASK                          0x1UL                                                            /**< Bit mask for RAC_AUXADCCLKINVERT            */
#define _RAC_AUXADCTRIM_AUXADCCLKINVERT_DEFAULT                       0x00000000UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCCLKINVERT_Disable_Invert                0x00000000UL                                                     /**< Mode Disable_Invert for RAC_AUXADCTRIM      */
#define _RAC_AUXADCTRIM_AUXADCCLKINVERT_Enable_Invert                 0x00000001UL                                                     /**< Mode Enable_Invert for RAC_AUXADCTRIM       */
#define RAC_AUXADCTRIM_AUXADCCLKINVERT_DEFAULT                        (_RAC_AUXADCTRIM_AUXADCCLKINVERT_DEFAULT << 0)                   /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCCLKINVERT_Disable_Invert                 (_RAC_AUXADCTRIM_AUXADCCLKINVERT_Disable_Invert << 0)            /**< Shifted mode Disable_Invert for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCCLKINVERT_Enable_Invert                  (_RAC_AUXADCTRIM_AUXADCCLKINVERT_Enable_Invert << 0)             /**< Shifted mode Enable_Invert for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_SHIFT                       1                                                                /**< Shift value for RAC_AUXADCLDOVREFTRIM       */
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_MASK                        0x6UL                                                            /**< Bit mask for RAC_AUXADCLDOVREFTRIM          */
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_DEFAULT                     0x00000001UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p27                    0x00000000UL                                                     /**< Mode TRIM1p27 for RAC_AUXADCTRIM            */
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p3                     0x00000001UL                                                     /**< Mode TRIM1p3 for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p35                    0x00000002UL                                                     /**< Mode TRIM1p35 for RAC_AUXADCTRIM            */
#define _RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p4                     0x00000003UL                                                     /**< Mode TRIM1p4 for RAC_AUXADCTRIM             */
#define RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_DEFAULT                      (_RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_DEFAULT << 1)                 /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p27                     (_RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p27 << 1)                /**< Shifted mode TRIM1p27 for RAC_AUXADCTRIM    */
#define RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p3                      (_RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p3 << 1)                 /**< Shifted mode TRIM1p3 for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p35                     (_RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p35 << 1)                /**< Shifted mode TRIM1p35 for RAC_AUXADCTRIM    */
#define RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p4                      (_RAC_AUXADCTRIM_AUXADCLDOVREFTRIM_TRIM1p4 << 1)                 /**< Shifted mode TRIM1p4 for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCOUTPUTINVERT                             (0x1UL << 3)                                                     /**< AUXADCOUTPUTINVERT                          */
#define _RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_SHIFT                      3                                                                /**< Shift value for RAC_AUXADCOUTPUTINVERT      */
#define _RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_MASK                       0x8UL                                                            /**< Bit mask for RAC_AUXADCOUTPUTINVERT         */
#define _RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_DEFAULT                    0x00000000UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_Disabled                   0x00000000UL                                                     /**< Mode Disabled for RAC_AUXADCTRIM            */
#define _RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_Enabled                    0x00000001UL                                                     /**< Mode Enabled for RAC_AUXADCTRIM             */
#define RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_DEFAULT                     (_RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_DEFAULT << 3)                /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_Disabled                    (_RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_Disabled << 3)               /**< Shifted mode Disabled for RAC_AUXADCTRIM    */
#define RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_Enabled                     (_RAC_AUXADCTRIM_AUXADCOUTPUTINVERT_Enabled << 3)                /**< Shifted mode Enabled for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCRCTUNE_SHIFT                            4                                                                /**< Shift value for RAC_AUXADCRCTUNE            */
#define _RAC_AUXADCTRIM_AUXADCRCTUNE_MASK                             0x1F0UL                                                          /**< Bit mask for RAC_AUXADCRCTUNE               */
#define _RAC_AUXADCTRIM_AUXADCRCTUNE_DEFAULT                          0x00000010UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define RAC_AUXADCTRIM_AUXADCRCTUNE_DEFAULT                           (_RAC_AUXADCTRIM_AUXADCRCTUNE_DEFAULT << 4)                      /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_SHIFT                   9                                                                /**< Shift value for RAC_AUXADCTRIMADCINPUTRES   */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_MASK                    0x600UL                                                          /**< Bit mask for RAC_AUXADCTRIMADCINPUTRES      */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_DEFAULT                 0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES200k                 0x00000000UL                                                     /**< Mode RES200k for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES250k                 0x00000001UL                                                     /**< Mode RES250k for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES300k                 0x00000002UL                                                     /**< Mode RES300k for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES350k                 0x00000003UL                                                     /**< Mode RES350k for RAC_AUXADCTRIM             */
#define RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_DEFAULT                  (_RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_DEFAULT << 9)             /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES200k                  (_RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES200k << 9)             /**< Shifted mode RES200k for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES250k                  (_RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES250k << 9)             /**< Shifted mode RES250k for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES300k                  (_RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES300k << 9)             /**< Shifted mode RES300k for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES350k                  (_RAC_AUXADCTRIM_AUXADCTRIMADCINPUTRES_RES350k << 9)             /**< Shifted mode RES350k for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_SHIFT                  11                                                               /**< Shift value for RAC_AUXADCTRIMCURRINPUTBUF  */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_MASK                   0x1800UL                                                         /**< Bit mask for RAC_AUXADCTRIMCURRINPUTBUF     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_DEFAULT                0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_minus_40pct        0x00000000UL                                                     /**< Mode Typ_minus_40pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_minus_20pct        0x00000001UL                                                     /**< Mode Typ_minus_20pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ                    0x00000002UL                                                     /**< Mode Typ for RAC_AUXADCTRIM                 */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_plus_20pct         0x00000003UL                                                     /**< Mode Typ_plus_20pct for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_DEFAULT                 (_RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_DEFAULT << 11)           /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_minus_40pct         (_RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_minus_40pct << 11)   /**< Shifted mode Typ_minus_40pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_minus_20pct         (_RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_minus_20pct << 11)   /**< Shifted mode Typ_minus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ                     (_RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ << 11)               /**< Shifted mode Typ for RAC_AUXADCTRIM         */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_plus_20pct          (_RAC_AUXADCTRIM_AUXADCTRIMCURRINPUTBUF_Typ_plus_20pct << 11)    /**< Shifted mode Typ_plus_20pct for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_SHIFT                      13                                                               /**< Shift value for RAC_AUXADCTRIMCURROPA1      */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_MASK                       0x6000UL                                                         /**< Bit mask for RAC_AUXADCTRIMCURROPA1         */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_DEFAULT                    0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_minus_40pct            0x00000000UL                                                     /**< Mode Typ_minus_40pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_minus_20pct            0x00000001UL                                                     /**< Mode Typ_minus_20pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ                        0x00000002UL                                                     /**< Mode Typ for RAC_AUXADCTRIM                 */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_plus_20pct             0x00000003UL                                                     /**< Mode Typ_plus_20pct for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_DEFAULT                     (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_DEFAULT << 13)               /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_minus_40pct             (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_minus_40pct << 13)       /**< Shifted mode Typ_minus_40pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_minus_20pct             (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_minus_20pct << 13)       /**< Shifted mode Typ_minus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ                         (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ << 13)                   /**< Shifted mode Typ for RAC_AUXADCTRIM         */
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_plus_20pct              (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA1_Typ_plus_20pct << 13)        /**< Shifted mode Typ_plus_20pct for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_SHIFT                      15                                                               /**< Shift value for RAC_AUXADCTRIMCURROPA2      */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_MASK                       0x18000UL                                                        /**< Bit mask for RAC_AUXADCTRIMCURROPA2         */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_DEFAULT                    0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_minus_40pct            0x00000000UL                                                     /**< Mode Typ_minus_40pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_minus_20pct            0x00000001UL                                                     /**< Mode Typ_minus_20pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ                        0x00000002UL                                                     /**< Mode Typ for RAC_AUXADCTRIM                 */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_plus_20pct             0x00000003UL                                                     /**< Mode Typ_plus_20pct for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_DEFAULT                     (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_DEFAULT << 15)               /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_minus_40pct             (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_minus_40pct << 15)       /**< Shifted mode Typ_minus_40pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_minus_20pct             (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_minus_20pct << 15)       /**< Shifted mode Typ_minus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ                         (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ << 15)                   /**< Shifted mode Typ for RAC_AUXADCTRIM         */
#define RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_plus_20pct              (_RAC_AUXADCTRIM_AUXADCTRIMCURROPA2_Typ_plus_20pct << 15)        /**< Shifted mode Typ_plus_20pct for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_SHIFT                    17                                                               /**< Shift value for RAC_AUXADCTRIMCURRREFBUF    */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_MASK                     0x60000UL                                                        /**< Bit mask for RAC_AUXADCTRIMCURRREFBUF       */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_DEFAULT                  0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_minus_40pct          0x00000000UL                                                     /**< Mode Typ_minus_40pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_minus_20pct          0x00000001UL                                                     /**< Mode Typ_minus_20pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ                      0x00000002UL                                                     /**< Mode Typ for RAC_AUXADCTRIM                 */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_plus_20pct           0x00000003UL                                                     /**< Mode Typ_plus_20pct for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_DEFAULT                   (_RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_DEFAULT << 17)             /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_minus_40pct           (_RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_minus_40pct << 17)     /**< Shifted mode Typ_minus_40pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_minus_20pct           (_RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_minus_20pct << 17)     /**< Shifted mode Typ_minus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ                       (_RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ << 17)                 /**< Shifted mode Typ for RAC_AUXADCTRIM         */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_plus_20pct            (_RAC_AUXADCTRIM_AUXADCTRIMCURRREFBUF_Typ_plus_20pct << 17)      /**< Shifted mode Typ_plus_20pct for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_SHIFT                    19                                                               /**< Shift value for RAC_AUXADCTRIMCURRTSENSE    */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_MASK                     0x180000UL                                                       /**< Bit mask for RAC_AUXADCTRIMCURRTSENSE       */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_DEFAULT                  0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_minus_40pct          0x00000000UL                                                     /**< Mode Typ_minus_40pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_minus_20pct          0x00000001UL                                                     /**< Mode Typ_minus_20pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ                      0x00000002UL                                                     /**< Mode Typ for RAC_AUXADCTRIM                 */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_plus_20pct           0x00000003UL                                                     /**< Mode Typ_plus_20pct for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_DEFAULT                   (_RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_DEFAULT << 19)             /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_minus_40pct           (_RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_minus_40pct << 19)     /**< Shifted mode Typ_minus_40pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_minus_20pct           (_RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_minus_20pct << 19)     /**< Shifted mode Typ_minus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ                       (_RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ << 19)                 /**< Shifted mode Typ for RAC_AUXADCTRIM         */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_plus_20pct            (_RAC_AUXADCTRIM_AUXADCTRIMCURRTSENSE_Typ_plus_20pct << 19)      /**< Shifted mode Typ_plus_20pct for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_SHIFT                    21                                                               /**< Shift value for RAC_AUXADCTRIMCURRVCMBUF    */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_MASK                     0x600000UL                                                       /**< Bit mask for RAC_AUXADCTRIMCURRVCMBUF       */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_DEFAULT                  0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_minus_40pct          0x00000000UL                                                     /**< Mode Typ_minus_40pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_minus_20pct          0x00000001UL                                                     /**< Mode Typ_minus_20pct for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ                      0x00000002UL                                                     /**< Mode Typ for RAC_AUXADCTRIM                 */
#define _RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_plus_20pct           0x00000003UL                                                     /**< Mode Typ_plus_20pct for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_DEFAULT                   (_RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_DEFAULT << 21)             /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_minus_40pct           (_RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_minus_40pct << 21)     /**< Shifted mode Typ_minus_40pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_minus_20pct           (_RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_minus_20pct << 21)     /**< Shifted mode Typ_minus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ                       (_RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ << 21)                 /**< Shifted mode Typ for RAC_AUXADCTRIM         */
#define RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_plus_20pct            (_RAC_AUXADCTRIM_AUXADCTRIMCURRVCMBUF_Typ_plus_20pct << 21)      /**< Shifted mode Typ_plus_20pct for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT                       (0x1UL << 23)                                                    /**< AUXADCTRIMLDOHIGHCURRENT                    */
#define _RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_SHIFT                23                                                               /**< Shift value for RAC_AUXADCTRIMLDOHIGHCURRENT*/
#define _RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_MASK                 0x800000UL                                                       /**< Bit mask for RAC_AUXADCTRIMLDOHIGHCURRENT   */
#define _RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_DEFAULT              0x00000001UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_LowCurrentMode       0x00000000UL                                                     /**< Mode LowCurrentMode for RAC_AUXADCTRIM      */
#define _RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_HighCurrentMode      0x00000001UL                                                     /**< Mode HighCurrentMode for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_DEFAULT               (_RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_DEFAULT << 23)         /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_LowCurrentMode        (_RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_LowCurrentMode << 23)  /**< Shifted mode LowCurrentMode for RAC_AUXADCTRIM*/
#define RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_HighCurrentMode       (_RAC_AUXADCTRIM_AUXADCTRIMLDOHIGHCURRENT_HighCurrentMode << 23) /**< Shifted mode HighCurrentMode for RAC_AUXADCTRIM*/
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_SHIFT                          24                                                               /**< Shift value for RAC_AUXADCTRIMREFP          */
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_MASK                           0x3000000UL                                                      /**< Bit mask for RAC_AUXADCTRIMREFP             */
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_DEFAULT                        0x00000002UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p05                        0x00000000UL                                                     /**< Mode REF1p05 for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p16                        0x00000001UL                                                     /**< Mode REF1p16 for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p2                         0x00000002UL                                                     /**< Mode REF1p2 for RAC_AUXADCTRIM              */
#define _RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p25                        0x00000003UL                                                     /**< Mode REF1p25 for RAC_AUXADCTRIM             */
#define RAC_AUXADCTRIM_AUXADCTRIMREFP_DEFAULT                         (_RAC_AUXADCTRIM_AUXADCTRIMREFP_DEFAULT << 24)                   /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p05                         (_RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p05 << 24)                   /**< Shifted mode REF1p05 for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p16                         (_RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p16 << 24)                   /**< Shifted mode REF1p16 for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p2                          (_RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p2 << 24)                    /**< Shifted mode REF1p2 for RAC_AUXADCTRIM      */
#define RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p25                         (_RAC_AUXADCTRIM_AUXADCTRIMREFP_REF1p25 << 24)                   /**< Shifted mode REF1p25 for RAC_AUXADCTRIM     */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_SHIFT                       26                                                               /**< Shift value for RAC_AUXADCTRIMVREFVCM       */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_MASK                        0xC000000UL                                                      /**< Bit mask for RAC_AUXADCTRIMVREFVCM          */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_DEFAULT                     0x00000001UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p6                     0x00000000UL                                                     /**< Mode Trim0p6 for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p65                    0x00000001UL                                                     /**< Mode Trim0p65 for RAC_AUXADCTRIM            */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p7                     0x00000002UL                                                     /**< Mode Trim0p7 for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p75                    0x00000003UL                                                     /**< Mode Trim0p75 for RAC_AUXADCTRIM            */
#define RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_DEFAULT                      (_RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_DEFAULT << 26)                /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p6                      (_RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p6 << 26)                /**< Shifted mode Trim0p6 for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p65                     (_RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p65 << 26)               /**< Shifted mode Trim0p65 for RAC_AUXADCTRIM    */
#define RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p7                      (_RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p7 << 26)                /**< Shifted mode Trim0p7 for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p75                     (_RAC_AUXADCTRIM_AUXADCTRIMVREFVCM_Trim0p75 << 26)               /**< Shifted mode Trim0p75 for RAC_AUXADCTRIM    */
#define RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2                           (0x1UL << 28)                                                    /**< AUXADCTSENSETRIMVBE2                        */
#define _RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_SHIFT                    28                                                               /**< Shift value for RAC_AUXADCTSENSETRIMVBE2    */
#define _RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_MASK                     0x10000000UL                                                     /**< Bit mask for RAC_AUXADCTSENSETRIMVBE2       */
#define _RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_DEFAULT                  0x00000000UL                                                     /**< Mode DEFAULT for RAC_AUXADCTRIM             */
#define _RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_VBE_16uA                 0x00000000UL                                                     /**< Mode VBE_16uA for RAC_AUXADCTRIM            */
#define _RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_VBE_32uA                 0x00000001UL                                                     /**< Mode VBE_32uA for RAC_AUXADCTRIM            */
#define RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_DEFAULT                   (_RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_DEFAULT << 28)             /**< Shifted mode DEFAULT for RAC_AUXADCTRIM     */
#define RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_VBE_16uA                  (_RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_VBE_16uA << 28)            /**< Shifted mode VBE_16uA for RAC_AUXADCTRIM    */
#define RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_VBE_32uA                  (_RAC_AUXADCTRIM_AUXADCTSENSETRIMVBE2_VBE_32uA << 28)            /**< Shifted mode VBE_32uA for RAC_AUXADCTRIM    */

/* Bit fields for RAC AUXADCEN */
#define _RAC_AUXADCEN_RESETVALUE                                      0x00000000UL                                              /**< Default value for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_MASK                                            0x000003FFUL                                              /**< Mask for RAC_AUXADCEN                       */
#define RAC_AUXADCEN_AUXADCENAUXADC                                   (0x1UL << 0)                                              /**< AUXADCENAUXADC                              */
#define _RAC_AUXADCEN_AUXADCENAUXADC_SHIFT                            0                                                         /**< Shift value for RAC_AUXADCENAUXADC          */
#define _RAC_AUXADCEN_AUXADCENAUXADC_MASK                             0x1UL                                                     /**< Bit mask for RAC_AUXADCENAUXADC             */
#define _RAC_AUXADCEN_AUXADCENAUXADC_DEFAULT                          0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENAUXADC_Disabled                         0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENAUXADC_Enabled                          0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENAUXADC_DEFAULT                           (_RAC_AUXADCEN_AUXADCENAUXADC_DEFAULT << 0)               /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENAUXADC_Disabled                          (_RAC_AUXADCEN_AUXADCENAUXADC_Disabled << 0)              /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENAUXADC_Enabled                           (_RAC_AUXADCEN_AUXADCENAUXADC_Enabled << 0)               /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENINPUTBUFFER                              (0x1UL << 1)                                              /**< AUXADCENINPUTBUFFER                         */
#define _RAC_AUXADCEN_AUXADCENINPUTBUFFER_SHIFT                       1                                                         /**< Shift value for RAC_AUXADCENINPUTBUFFER     */
#define _RAC_AUXADCEN_AUXADCENINPUTBUFFER_MASK                        0x2UL                                                     /**< Bit mask for RAC_AUXADCENINPUTBUFFER        */
#define _RAC_AUXADCEN_AUXADCENINPUTBUFFER_DEFAULT                     0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENINPUTBUFFER_Disabled                    0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENINPUTBUFFER_Enabled                     0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENINPUTBUFFER_DEFAULT                      (_RAC_AUXADCEN_AUXADCENINPUTBUFFER_DEFAULT << 1)          /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENINPUTBUFFER_Disabled                     (_RAC_AUXADCEN_AUXADCENINPUTBUFFER_Disabled << 1)         /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENINPUTBUFFER_Enabled                      (_RAC_AUXADCEN_AUXADCENINPUTBUFFER_Enabled << 1)          /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENLDO                                      (0x1UL << 2)                                              /**< AUXADCENLDO                                 */
#define _RAC_AUXADCEN_AUXADCENLDO_SHIFT                               2                                                         /**< Shift value for RAC_AUXADCENLDO             */
#define _RAC_AUXADCEN_AUXADCENLDO_MASK                                0x4UL                                                     /**< Bit mask for RAC_AUXADCENLDO                */
#define _RAC_AUXADCEN_AUXADCENLDO_DEFAULT                             0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENLDO_Disabled                            0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENLDO_Enabled                             0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENLDO_DEFAULT                              (_RAC_AUXADCEN_AUXADCENLDO_DEFAULT << 2)                  /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENLDO_Disabled                             (_RAC_AUXADCEN_AUXADCENLDO_Disabled << 2)                 /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENLDO_Enabled                              (_RAC_AUXADCEN_AUXADCENLDO_Enabled << 2)                  /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENOUTPUTDRV                                (0x1UL << 3)                                              /**< AUXADCENOUTPUTDRV                           */
#define _RAC_AUXADCEN_AUXADCENOUTPUTDRV_SHIFT                         3                                                         /**< Shift value for RAC_AUXADCENOUTPUTDRV       */
#define _RAC_AUXADCEN_AUXADCENOUTPUTDRV_MASK                          0x8UL                                                     /**< Bit mask for RAC_AUXADCENOUTPUTDRV          */
#define _RAC_AUXADCEN_AUXADCENOUTPUTDRV_DEFAULT                       0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENOUTPUTDRV_Disabled                      0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENOUTPUTDRV_Enabled                       0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENOUTPUTDRV_DEFAULT                        (_RAC_AUXADCEN_AUXADCENOUTPUTDRV_DEFAULT << 3)            /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENOUTPUTDRV_Disabled                       (_RAC_AUXADCEN_AUXADCENOUTPUTDRV_Disabled << 3)           /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENOUTPUTDRV_Enabled                        (_RAC_AUXADCEN_AUXADCENOUTPUTDRV_Enabled << 3)            /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENPMON                                     (0x1UL << 4)                                              /**< AUXADCENPMON                                */
#define _RAC_AUXADCEN_AUXADCENPMON_SHIFT                              4                                                         /**< Shift value for RAC_AUXADCENPMON            */
#define _RAC_AUXADCEN_AUXADCENPMON_MASK                               0x10UL                                                    /**< Bit mask for RAC_AUXADCENPMON               */
#define _RAC_AUXADCEN_AUXADCENPMON_DEFAULT                            0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENPMON_Disabled                           0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENPMON_Enabled                            0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENPMON_DEFAULT                             (_RAC_AUXADCEN_AUXADCENPMON_DEFAULT << 4)                 /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENPMON_Disabled                            (_RAC_AUXADCEN_AUXADCENPMON_Disabled << 4)                /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENPMON_Enabled                             (_RAC_AUXADCEN_AUXADCENPMON_Enabled << 4)                 /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENRESONDIAGA                               (0x1UL << 5)                                              /**< AUXADCENRESONDIAGA                          */
#define _RAC_AUXADCEN_AUXADCENRESONDIAGA_SHIFT                        5                                                         /**< Shift value for RAC_AUXADCENRESONDIAGA      */
#define _RAC_AUXADCEN_AUXADCENRESONDIAGA_MASK                         0x20UL                                                    /**< Bit mask for RAC_AUXADCENRESONDIAGA         */
#define _RAC_AUXADCEN_AUXADCENRESONDIAGA_DEFAULT                      0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENRESONDIAGA_Disabled                     0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENRESONDIAGA_Enabled                      0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENRESONDIAGA_DEFAULT                       (_RAC_AUXADCEN_AUXADCENRESONDIAGA_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENRESONDIAGA_Disabled                      (_RAC_AUXADCEN_AUXADCENRESONDIAGA_Disabled << 5)          /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENRESONDIAGA_Enabled                       (_RAC_AUXADCEN_AUXADCENRESONDIAGA_Enabled << 5)           /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENTSENSE                                   (0x1UL << 6)                                              /**< AUXADCENTSENSE                              */
#define _RAC_AUXADCEN_AUXADCENTSENSE_SHIFT                            6                                                         /**< Shift value for RAC_AUXADCENTSENSE          */
#define _RAC_AUXADCEN_AUXADCENTSENSE_MASK                             0x40UL                                                    /**< Bit mask for RAC_AUXADCENTSENSE             */
#define _RAC_AUXADCEN_AUXADCENTSENSE_DEFAULT                          0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENTSENSE_Disabled                         0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENTSENSE_Enabled                          0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENTSENSE_DEFAULT                           (_RAC_AUXADCEN_AUXADCENTSENSE_DEFAULT << 6)               /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENTSENSE_Disabled                          (_RAC_AUXADCEN_AUXADCENTSENSE_Disabled << 6)              /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENTSENSE_Enabled                           (_RAC_AUXADCEN_AUXADCENTSENSE_Enabled << 6)               /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENTSENSECAL                                (0x1UL << 7)                                              /**< AUXADCENTSENSECAL                           */
#define _RAC_AUXADCEN_AUXADCENTSENSECAL_SHIFT                         7                                                         /**< Shift value for RAC_AUXADCENTSENSECAL       */
#define _RAC_AUXADCEN_AUXADCENTSENSECAL_MASK                          0x80UL                                                    /**< Bit mask for RAC_AUXADCENTSENSECAL          */
#define _RAC_AUXADCEN_AUXADCENTSENSECAL_DEFAULT                       0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENTSENSECAL_Disabled                      0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENTSENSECAL_Enabled                       0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENTSENSECAL_DEFAULT                        (_RAC_AUXADCEN_AUXADCENTSENSECAL_DEFAULT << 7)            /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENTSENSECAL_Disabled                       (_RAC_AUXADCEN_AUXADCENTSENSECAL_Disabled << 7)           /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENTSENSECAL_Enabled                        (_RAC_AUXADCEN_AUXADCENTSENSECAL_Enabled << 7)            /**< Shifted mode Enabled for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS                          (0x1UL << 8)                                              /**< AUXADCINPUTBUFFERBYPASS                     */
#define _RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_SHIFT                   8                                                         /**< Shift value for RAC_AUXADCINPUTBUFFERBYPASS */
#define _RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_MASK                    0x100UL                                                   /**< Bit mask for RAC_AUXADCINPUTBUFFERBYPASS    */
#define _RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_DEFAULT                 0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_Not_Bypassed            0x00000000UL                                              /**< Mode Not_Bypassed for RAC_AUXADCEN          */
#define _RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_Bypassed                0x00000001UL                                              /**< Mode Bypassed for RAC_AUXADCEN              */
#define RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_DEFAULT                  (_RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_DEFAULT << 8)      /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_Not_Bypassed             (_RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_Not_Bypassed << 8) /**< Shifted mode Not_Bypassed for RAC_AUXADCEN  */
#define RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_Bypassed                 (_RAC_AUXADCEN_AUXADCINPUTBUFFERBYPASS_Bypassed << 8)     /**< Shifted mode Bypassed for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENMEASTHERMISTOR                           (0x1UL << 9)                                              /**< AUXADCENMEASTHERMISTOR                      */
#define _RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_SHIFT                    9                                                         /**< Shift value for RAC_AUXADCENMEASTHERMISTOR  */
#define _RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_MASK                     0x200UL                                                   /**< Bit mask for RAC_AUXADCENMEASTHERMISTOR     */
#define _RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_DEFAULT                  0x00000000UL                                              /**< Mode DEFAULT for RAC_AUXADCEN               */
#define _RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_Disabled                 0x00000000UL                                              /**< Mode Disabled for RAC_AUXADCEN              */
#define _RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_Enabled                  0x00000001UL                                              /**< Mode Enabled for RAC_AUXADCEN               */
#define RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_DEFAULT                   (_RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_DEFAULT << 9)       /**< Shifted mode DEFAULT for RAC_AUXADCEN       */
#define RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_Disabled                  (_RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_Disabled << 9)      /**< Shifted mode Disabled for RAC_AUXADCEN      */
#define RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_Enabled                   (_RAC_AUXADCEN_AUXADCENMEASTHERMISTOR_Enabled << 9)       /**< Shifted mode Enabled for RAC_AUXADCEN       */

/* Bit fields for RAC AUXADCCTRL0 */
#define _RAC_AUXADCCTRL0_RESETVALUE                                   0x00000100UL                                /**< Default value for RAC_AUXADCCTRL0           */
#define _RAC_AUXADCCTRL0_MASK                                         0x00003FFFUL                                /**< Mask for RAC_AUXADCCTRL0                    */
#define _RAC_AUXADCCTRL0_CYCLES_SHIFT                                 0                                           /**< Shift value for RAC_CYCLES                  */
#define _RAC_AUXADCCTRL0_CYCLES_MASK                                  0x3FFUL                                     /**< Bit mask for RAC_CYCLES                     */
#define _RAC_AUXADCCTRL0_CYCLES_DEFAULT                               0x00000100UL                                /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_CYCLES_DEFAULT                                (_RAC_AUXADCCTRL0_CYCLES_DEFAULT << 0)      /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define _RAC_AUXADCCTRL0_MUXSEL_SHIFT                                 10                                          /**< Shift value for RAC_MUXSEL                  */
#define _RAC_AUXADCCTRL0_MUXSEL_MASK                                  0xC00UL                                     /**< Bit mask for RAC_MUXSEL                     */
#define _RAC_AUXADCCTRL0_MUXSEL_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_MUXSEL_DEFAULT                                (_RAC_AUXADCCTRL0_MUXSEL_DEFAULT << 10)     /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define RAC_AUXADCCTRL0_CLRCOUNTER                                    (0x1UL << 12)                               /**< Clear counter                               */
#define _RAC_AUXADCCTRL0_CLRCOUNTER_SHIFT                             12                                          /**< Shift value for RAC_CLRCOUNTER              */
#define _RAC_AUXADCCTRL0_CLRCOUNTER_MASK                              0x1000UL                                    /**< Bit mask for RAC_CLRCOUNTER                 */
#define _RAC_AUXADCCTRL0_CLRCOUNTER_DEFAULT                           0x00000000UL                                /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_CLRCOUNTER_DEFAULT                            (_RAC_AUXADCCTRL0_CLRCOUNTER_DEFAULT << 12) /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define RAC_AUXADCCTRL0_CLRFILTER                                     (0x1UL << 13)                               /**< Clear accumulators                          */
#define _RAC_AUXADCCTRL0_CLRFILTER_SHIFT                              13                                          /**< Shift value for RAC_CLRFILTER               */
#define _RAC_AUXADCCTRL0_CLRFILTER_MASK                               0x2000UL                                    /**< Bit mask for RAC_CLRFILTER                  */
#define _RAC_AUXADCCTRL0_CLRFILTER_DEFAULT                            0x00000000UL                                /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_CLRFILTER_DEFAULT                             (_RAC_AUXADCCTRL0_CLRFILTER_DEFAULT << 13)  /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */

/* Bit fields for RAC AUXADCCTRL1 */
#define _RAC_AUXADCCTRL1_RESETVALUE                                   0x00000000UL                                             /**< Default value for RAC_AUXADCCTRL1           */
#define _RAC_AUXADCCTRL1_MASK                                         0xF31F0FFFUL                                             /**< Mask for RAC_AUXADCCTRL1                    */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_SHIFT                      0                                                        /**< Shift value for RAC_AUXADCINPUTRESSEL       */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_MASK                       0xFUL                                                    /**< Bit mask for RAC_AUXADCINPUTRESSEL          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_DEFAULT                    0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES640kOhm                 0x00000000UL                                             /**< Mode RES640kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES320kOhm                 0x00000001UL                                             /**< Mode RES320kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES160kOhm                 0x00000002UL                                             /**< Mode RES160kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES80kOhm                  0x00000003UL                                             /**< Mode RES80kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES40kOhm                  0x00000004UL                                             /**< Mode RES40kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES20kOhm                  0x00000005UL                                             /**< Mode RES20kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES10kOhm                  0x00000006UL                                             /**< Mode RES10kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES5kOhm                   0x00000007UL                                             /**< Mode RES5kOhm for RAC_AUXADCCTRL1           */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES2p5kOhm                 0x00000008UL                                             /**< Mode RES2p5kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES1p25kOhm                0x00000009UL                                             /**< Mode RES1p25kOhm for RAC_AUXADCCTRL1        */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES0p6kOhm                 0x0000000AUL                                             /**< Mode RES0p6kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES_switch                 0x0000000BUL                                             /**< Mode RES_switch for RAC_AUXADCCTRL1         */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_DEFAULT                     (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_DEFAULT << 0)        /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES640kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES640kOhm << 0)     /**< Shifted mode RES640kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES320kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES320kOhm << 0)     /**< Shifted mode RES320kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES160kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES160kOhm << 0)     /**< Shifted mode RES160kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES80kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES80kOhm << 0)      /**< Shifted mode RES80kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES40kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES40kOhm << 0)      /**< Shifted mode RES40kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES20kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES20kOhm << 0)      /**< Shifted mode RES20kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES10kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES10kOhm << 0)      /**< Shifted mode RES10kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES5kOhm                    (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES5kOhm << 0)       /**< Shifted mode RES5kOhm for RAC_AUXADCCTRL1   */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES2p5kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES2p5kOhm << 0)     /**< Shifted mode RES2p5kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES1p25kOhm                 (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES1p25kOhm << 0)    /**< Shifted mode RES1p25kOhm for RAC_AUXADCCTRL1*/
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES0p6kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES0p6kOhm << 0)     /**< Shifted mode RES0p6kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES_switch                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES_switch << 0)     /**< Shifted mode RES_switch for RAC_AUXADCCTRL1 */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SHIFT                      4                                                        /**< Shift value for RAC_AUXADCINPUTSELECT       */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_MASK                       0xF0UL                                                   /**< Bit mask for RAC_AUXADCINPUTSELECT          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_DEFAULT                    0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL0                       0x00000000UL                                             /**< Mode SEL0 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL1                       0x00000001UL                                             /**< Mode SEL1 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL2                       0x00000002UL                                             /**< Mode SEL2 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL3                       0x00000003UL                                             /**< Mode SEL3 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL4                       0x00000004UL                                             /**< Mode SEL4 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL5                       0x00000005UL                                             /**< Mode SEL5 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL6                       0x00000006UL                                             /**< Mode SEL6 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL7                       0x00000007UL                                             /**< Mode SEL7 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL8                       0x00000008UL                                             /**< Mode SEL8 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL9                       0x00000009UL                                             /**< Mode SEL9 for RAC_AUXADCCTRL1               */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_DEFAULT                     (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_DEFAULT << 4)        /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL0                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL0 << 4)           /**< Shifted mode SEL0 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL1                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL1 << 4)           /**< Shifted mode SEL1 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL2                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL2 << 4)           /**< Shifted mode SEL2 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL3                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL3 << 4)           /**< Shifted mode SEL3 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL4                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL4 << 4)           /**< Shifted mode SEL4 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL5                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL5 << 4)           /**< Shifted mode SEL5 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL6                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL6 << 4)           /**< Shifted mode SEL6 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL7                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL7 << 4)           /**< Shifted mode SEL7 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL8                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL8 << 4)           /**< Shifted mode SEL8 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL9                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL9 << 4)           /**< Shifted mode SEL9 for RAC_AUXADCCTRL1       */
#define _RAC_AUXADCCTRL1_AUXADCPMONSELECT_SHIFT                       8                                                        /**< Shift value for RAC_AUXADCPMONSELECT        */
#define _RAC_AUXADCCTRL1_AUXADCPMONSELECT_MASK                        0xF00UL                                                  /**< Bit mask for RAC_AUXADCPMONSELECT           */
#define _RAC_AUXADCCTRL1_AUXADCPMONSELECT_DEFAULT                     0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define RAC_AUXADCCTRL1_AUXADCPMONSELECT_DEFAULT                      (_RAC_AUXADCCTRL1_AUXADCPMONSELECT_DEFAULT << 8)         /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_SHIFT                    16                                                       /**< Shift value for RAC_AUXADCTSENSESELCURR     */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_MASK                     0x1F0000UL                                               /**< Bit mask for RAC_AUXADCTSENSESELCURR        */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_DEFAULT                  0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_DEFAULT                   (_RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_DEFAULT << 16)     /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCRESET                                   (0x1UL << 24)                                            /**< AUXADCRESET                                 */
#define _RAC_AUXADCCTRL1_AUXADCRESET_SHIFT                            24                                                       /**< Shift value for RAC_AUXADCRESET             */
#define _RAC_AUXADCCTRL1_AUXADCRESET_MASK                             0x1000000UL                                              /**< Bit mask for RAC_AUXADCRESET                */
#define _RAC_AUXADCCTRL1_AUXADCRESET_DEFAULT                          0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCRESET_Reset_Enabled                    0x00000000UL                                             /**< Mode Reset_Enabled for RAC_AUXADCCTRL1      */
#define _RAC_AUXADCCTRL1_AUXADCRESET_Reset_Disabled                   0x00000001UL                                             /**< Mode Reset_Disabled for RAC_AUXADCCTRL1     */
#define RAC_AUXADCCTRL1_AUXADCRESET_DEFAULT                           (_RAC_AUXADCCTRL1_AUXADCRESET_DEFAULT << 24)             /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCRESET_Reset_Enabled                     (_RAC_AUXADCCTRL1_AUXADCRESET_Reset_Enabled << 24)       /**< Shifted mode Reset_Enabled for RAC_AUXADCCTRL1*/
#define RAC_AUXADCCTRL1_AUXADCRESET_Reset_Disabled                    (_RAC_AUXADCCTRL1_AUXADCRESET_Reset_Disabled << 24)      /**< Shifted mode Reset_Disabled for RAC_AUXADCCTRL1*/
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE                            (0x1UL << 25)                                            /**< AUXADCTSENSESELVBE                          */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_SHIFT                     25                                                       /**< Shift value for RAC_AUXADCTSENSESELVBE      */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_MASK                      0x2000000UL                                              /**< Bit mask for RAC_AUXADCTSENSESELVBE         */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_DEFAULT                   0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE1                      0x00000000UL                                             /**< Mode VBE1 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE2                      0x00000001UL                                             /**< Mode VBE2 for RAC_AUXADCCTRL1               */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_DEFAULT                    (_RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_DEFAULT << 25)      /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE1                       (_RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE1 << 25)         /**< Shifted mode VBE1 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE2                       (_RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE2 << 25)         /**< Shifted mode VBE2 for RAC_AUXADCCTRL1       */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_SHIFT                28                                                       /**< Shift value for RAC_AUXADCTHERMISTORFREQSEL */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_MASK                 0xF0000000UL                                             /**< Bit mask for RAC_AUXADCTHERMISTORFREQSEL    */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DEFAULT              0x00000000UL                                             /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV1                 0x00000000UL                                             /**< Mode DIV1 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV2                 0x00000001UL                                             /**< Mode DIV2 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV4                 0x00000002UL                                             /**< Mode DIV4 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV8                 0x00000003UL                                             /**< Mode DIV8 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV16                0x00000004UL                                             /**< Mode DIV16 for RAC_AUXADCCTRL1              */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV32                0x00000005UL                                             /**< Mode DIV32 for RAC_AUXADCCTRL1              */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV64                0x00000006UL                                             /**< Mode DIV64 for RAC_AUXADCCTRL1              */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV128               0x00000007UL                                             /**< Mode DIV128 for RAC_AUXADCCTRL1             */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV256               0x00000008UL                                             /**< Mode DIV256 for RAC_AUXADCCTRL1             */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV512               0x00000009UL                                             /**< Mode DIV512 for RAC_AUXADCCTRL1             */
#define _RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV1024              0x0000000AUL                                             /**< Mode DIV1024 for RAC_AUXADCCTRL1            */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DEFAULT               (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DEFAULT << 28) /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV1                  (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV1 << 28)    /**< Shifted mode DIV1 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV2                  (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV2 << 28)    /**< Shifted mode DIV2 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV4                  (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV4 << 28)    /**< Shifted mode DIV4 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV8                  (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV8 << 28)    /**< Shifted mode DIV8 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV16                 (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV16 << 28)   /**< Shifted mode DIV16 for RAC_AUXADCCTRL1      */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV32                 (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV32 << 28)   /**< Shifted mode DIV32 for RAC_AUXADCCTRL1      */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV64                 (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV64 << 28)   /**< Shifted mode DIV64 for RAC_AUXADCCTRL1      */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV128                (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV128 << 28)  /**< Shifted mode DIV128 for RAC_AUXADCCTRL1     */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV256                (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV256 << 28)  /**< Shifted mode DIV256 for RAC_AUXADCCTRL1     */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV512                (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV512 << 28)  /**< Shifted mode DIV512 for RAC_AUXADCCTRL1     */
#define RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV1024               (_RAC_AUXADCCTRL1_AUXADCTHERMISTORFREQSEL_DIV1024 << 28) /**< Shifted mode DIV1024 for RAC_AUXADCCTRL1    */

/* Bit fields for RAC AUXADCOUT */
#define _RAC_AUXADCOUT_RESETVALUE                                     0x00000000UL                            /**< Default value for RAC_AUXADCOUT             */
#define _RAC_AUXADCOUT_MASK                                           0x0FFFFFFFUL                            /**< Mask for RAC_AUXADCOUT                      */
#define _RAC_AUXADCOUT_AUXADCOUT_SHIFT                                0                                       /**< Shift value for RAC_AUXADCOUT               */
#define _RAC_AUXADCOUT_AUXADCOUT_MASK                                 0xFFFFFFFUL                             /**< Bit mask for RAC_AUXADCOUT                  */
#define _RAC_AUXADCOUT_AUXADCOUT_DEFAULT                              0x00000000UL                            /**< Mode DEFAULT for RAC_AUXADCOUT              */
#define RAC_AUXADCOUT_AUXADCOUT_DEFAULT                               (_RAC_AUXADCOUT_AUXADCOUT_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_AUXADCOUT      */

/* Bit fields for RAC CLKMULTEN0 */
#define _RAC_CLKMULTEN0_RESETVALUE                                    0xAA400005UL                                         /**< Default value for RAC_CLKMULTEN0            */
#define _RAC_CLKMULTEN0_MASK                                          0xFFDFFFFFUL                                         /**< Mask for RAC_CLKMULTEN0                     */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_SHIFT                            0                                                    /**< Shift value for RAC_CLKMULTBWCAL            */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_MASK                             0x3UL                                                /**< Bit mask for RAC_CLKMULTBWCAL               */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_DEFAULT                          0x00000001UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_bw_1lsb                          0x00000000UL                                         /**< Mode bw_1lsb for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_bw_2lsb                          0x00000001UL                                         /**< Mode bw_2lsb for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_bw_3lsb                          0x00000002UL                                         /**< Mode bw_3lsb for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTBWCAL_bw_4lsb                          0x00000003UL                                         /**< Mode bw_4lsb for RAC_CLKMULTEN0             */
#define RAC_CLKMULTEN0_CLKMULTBWCAL_DEFAULT                           (_RAC_CLKMULTEN0_CLKMULTBWCAL_DEFAULT << 0)          /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTBWCAL_bw_1lsb                           (_RAC_CLKMULTEN0_CLKMULTBWCAL_bw_1lsb << 0)          /**< Shifted mode bw_1lsb for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTBWCAL_bw_2lsb                           (_RAC_CLKMULTEN0_CLKMULTBWCAL_bw_2lsb << 0)          /**< Shifted mode bw_2lsb for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTBWCAL_bw_3lsb                           (_RAC_CLKMULTEN0_CLKMULTBWCAL_bw_3lsb << 0)          /**< Shifted mode bw_3lsb for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTBWCAL_bw_4lsb                           (_RAC_CLKMULTEN0_CLKMULTBWCAL_bw_4lsb << 0)          /**< Shifted mode bw_4lsb for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTDISICO                                  (0x1UL << 2)                                         /**< CLKMULTDISICO                               */
#define _RAC_CLKMULTEN0_CLKMULTDISICO_SHIFT                           2                                                    /**< Shift value for RAC_CLKMULTDISICO           */
#define _RAC_CLKMULTEN0_CLKMULTDISICO_MASK                            0x4UL                                                /**< Bit mask for RAC_CLKMULTDISICO              */
#define _RAC_CLKMULTEN0_CLKMULTDISICO_DEFAULT                         0x00000001UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTDISICO_enable                          0x00000000UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define _RAC_CLKMULTEN0_CLKMULTDISICO_disable                         0x00000001UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define RAC_CLKMULTEN0_CLKMULTDISICO_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTDISICO_DEFAULT << 2)         /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTDISICO_enable                           (_RAC_CLKMULTEN0_CLKMULTDISICO_enable << 2)          /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTDISICO_disable                          (_RAC_CLKMULTEN0_CLKMULTDISICO_disable << 2)         /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBDET                                 (0x1UL << 3)                                         /**< CLKMULTENBBDET                              */
#define _RAC_CLKMULTEN0_CLKMULTENBBDET_SHIFT                          3                                                    /**< Shift value for RAC_CLKMULTENBBDET          */
#define _RAC_CLKMULTEN0_CLKMULTENBBDET_MASK                           0x8UL                                                /**< Bit mask for RAC_CLKMULTENBBDET             */
#define _RAC_CLKMULTEN0_CLKMULTENBBDET_DEFAULT                        0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBBDET_disable                        0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBBDET_enable                         0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENBBDET_DEFAULT                         (_RAC_CLKMULTEN0_CLKMULTENBBDET_DEFAULT << 3)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBDET_disable                         (_RAC_CLKMULTEN0_CLKMULTENBBDET_disable << 3)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBDET_enable                          (_RAC_CLKMULTEN0_CLKMULTENBBDET_enable << 3)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENBBXLDET                               (0x1UL << 4)                                         /**< CLKMULTENBBXLDET                            */
#define _RAC_CLKMULTEN0_CLKMULTENBBXLDET_SHIFT                        4                                                    /**< Shift value for RAC_CLKMULTENBBXLDET        */
#define _RAC_CLKMULTEN0_CLKMULTENBBXLDET_MASK                         0x10UL                                               /**< Bit mask for RAC_CLKMULTENBBXLDET           */
#define _RAC_CLKMULTEN0_CLKMULTENBBXLDET_DEFAULT                      0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBBXLDET_disable                      0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBBXLDET_enable                       0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENBBXLDET_DEFAULT                       (_RAC_CLKMULTEN0_CLKMULTENBBXLDET_DEFAULT << 4)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBXLDET_disable                       (_RAC_CLKMULTEN0_CLKMULTENBBXLDET_disable << 4)      /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBXLDET_enable                        (_RAC_CLKMULTEN0_CLKMULTENBBXLDET_enable << 4)       /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENBBXMDET                               (0x1UL << 5)                                         /**< CLKMULTENBBXMDET                            */
#define _RAC_CLKMULTEN0_CLKMULTENBBXMDET_SHIFT                        5                                                    /**< Shift value for RAC_CLKMULTENBBXMDET        */
#define _RAC_CLKMULTEN0_CLKMULTENBBXMDET_MASK                         0x20UL                                               /**< Bit mask for RAC_CLKMULTENBBXMDET           */
#define _RAC_CLKMULTEN0_CLKMULTENBBXMDET_DEFAULT                      0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBBXMDET_disable                      0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBBXMDET_enable                       0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENBBXMDET_DEFAULT                       (_RAC_CLKMULTEN0_CLKMULTENBBXMDET_DEFAULT << 5)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBXMDET_disable                       (_RAC_CLKMULTEN0_CLKMULTENBBXMDET_disable << 5)      /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBBXMDET_enable                        (_RAC_CLKMULTEN0_CLKMULTENBBXMDET_enable << 5)       /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENCFDET                                 (0x1UL << 6)                                         /**< CLKMULTENCFDET                              */
#define _RAC_CLKMULTEN0_CLKMULTENCFDET_SHIFT                          6                                                    /**< Shift value for RAC_CLKMULTENCFDET          */
#define _RAC_CLKMULTEN0_CLKMULTENCFDET_MASK                           0x40UL                                               /**< Bit mask for RAC_CLKMULTENCFDET             */
#define _RAC_CLKMULTEN0_CLKMULTENCFDET_DEFAULT                        0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENCFDET_disable                        0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENCFDET_enable                         0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENCFDET_DEFAULT                         (_RAC_CLKMULTEN0_CLKMULTENCFDET_DEFAULT << 6)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENCFDET_disable                         (_RAC_CLKMULTEN0_CLKMULTENCFDET_disable << 6)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENCFDET_enable                          (_RAC_CLKMULTEN0_CLKMULTENCFDET_enable << 6)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENDITHER                                (0x1UL << 7)                                         /**< CLKMULTENDITHER                             */
#define _RAC_CLKMULTEN0_CLKMULTENDITHER_SHIFT                         7                                                    /**< Shift value for RAC_CLKMULTENDITHER         */
#define _RAC_CLKMULTEN0_CLKMULTENDITHER_MASK                          0x80UL                                               /**< Bit mask for RAC_CLKMULTENDITHER            */
#define _RAC_CLKMULTEN0_CLKMULTENDITHER_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDITHER_disable                       0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDITHER_enable                        0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENDITHER_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTENDITHER_DEFAULT << 7)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDITHER_disable                        (_RAC_CLKMULTEN0_CLKMULTENDITHER_disable << 7)       /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDITHER_enable                         (_RAC_CLKMULTEN0_CLKMULTENDITHER_enable << 7)        /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENDRVADC                                (0x1UL << 8)                                         /**< CLKMULTENDRVADC                             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVADC_SHIFT                         8                                                    /**< Shift value for RAC_CLKMULTENDRVADC         */
#define _RAC_CLKMULTEN0_CLKMULTENDRVADC_MASK                          0x100UL                                              /**< Bit mask for RAC_CLKMULTENDRVADC            */
#define _RAC_CLKMULTEN0_CLKMULTENDRVADC_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVADC_disable                       0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVADC_enable                        0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENDRVADC_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTENDRVADC_DEFAULT << 8)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVADC_disable                        (_RAC_CLKMULTEN0_CLKMULTENDRVADC_disable << 8)       /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVADC_enable                         (_RAC_CLKMULTEN0_CLKMULTENDRVADC_enable << 8)        /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENDRVN                                  (0x1UL << 9)                                         /**< CLKMULTENDRVN                               */
#define _RAC_CLKMULTEN0_CLKMULTENDRVN_SHIFT                           9                                                    /**< Shift value for RAC_CLKMULTENDRVN           */
#define _RAC_CLKMULTEN0_CLKMULTENDRVN_MASK                            0x200UL                                              /**< Bit mask for RAC_CLKMULTENDRVN              */
#define _RAC_CLKMULTEN0_CLKMULTENDRVN_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVN_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVN_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENDRVN_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENDRVN_DEFAULT << 9)         /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVN_disable                          (_RAC_CLKMULTEN0_CLKMULTENDRVN_disable << 9)         /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVN_enable                           (_RAC_CLKMULTEN0_CLKMULTENDRVN_enable << 9)          /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENDRVP                                  (0x1UL << 10)                                        /**< CLKMULTENDRVP                               */
#define _RAC_CLKMULTEN0_CLKMULTENDRVP_SHIFT                           10                                                   /**< Shift value for RAC_CLKMULTENDRVP           */
#define _RAC_CLKMULTEN0_CLKMULTENDRVP_MASK                            0x400UL                                              /**< Bit mask for RAC_CLKMULTENDRVP              */
#define _RAC_CLKMULTEN0_CLKMULTENDRVP_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVP_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVP_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENDRVP_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENDRVP_DEFAULT << 10)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVP_disable                          (_RAC_CLKMULTEN0_CLKMULTENDRVP_disable << 10)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVP_enable                           (_RAC_CLKMULTEN0_CLKMULTENDRVP_enable << 10)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G                             (0x1UL << 11)                                        /**< CLKMULTENDRVRX2P4G                          */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_SHIFT                      11                                                   /**< Shift value for RAC_CLKMULTENDRVRX2P4G      */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_MASK                       0x800UL                                              /**< Bit mask for RAC_CLKMULTENDRVRX2P4G         */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_DEFAULT                    0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_disable                    0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_enable                     0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_DEFAULT                     (_RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_DEFAULT << 11)   /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_disable                     (_RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_disable << 11)   /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_enable                      (_RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_enable << 11)    /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV                                 (0x1UL << 14)                                        /**< CLKMULTENFBDIV                              */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_SHIFT                          14                                                   /**< Shift value for RAC_CLKMULTENFBDIV          */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_MASK                           0x4000UL                                             /**< Bit mask for RAC_CLKMULTENFBDIV             */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_DEFAULT                        0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_disable                        0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_enable                         0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV_DEFAULT                         (_RAC_CLKMULTEN0_CLKMULTENFBDIV_DEFAULT << 14)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV_disable                         (_RAC_CLKMULTEN0_CLKMULTENFBDIV_disable << 14)       /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV_enable                          (_RAC_CLKMULTEN0_CLKMULTENFBDIV_enable << 14)        /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV                                (0x1UL << 15)                                        /**< CLKMULTENREFDIV                             */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_SHIFT                         15                                                   /**< Shift value for RAC_CLKMULTENREFDIV         */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_MASK                          0x8000UL                                             /**< Bit mask for RAC_CLKMULTENREFDIV            */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_disable                       0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_enable                        0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTENREFDIV_DEFAULT << 15)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV_disable                        (_RAC_CLKMULTEN0_CLKMULTENREFDIV_disable << 15)      /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV_enable                         (_RAC_CLKMULTEN0_CLKMULTENREFDIV_enable << 15)       /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREG1                                  (0x1UL << 16)                                        /**< CLKMULTENREG1                               */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_SHIFT                           16                                                   /**< Shift value for RAC_CLKMULTENREG1           */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_MASK                            0x10000UL                                            /**< Bit mask for RAC_CLKMULTENREG1              */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREG1_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENREG1_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG1_disable                          (_RAC_CLKMULTEN0_CLKMULTENREG1_disable << 16)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG1_enable                           (_RAC_CLKMULTEN0_CLKMULTENREG1_enable << 16)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREG2                                  (0x1UL << 17)                                        /**< CLKMULTENREG2                               */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_SHIFT                           17                                                   /**< Shift value for RAC_CLKMULTENREG2           */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_MASK                            0x20000UL                                            /**< Bit mask for RAC_CLKMULTENREG2              */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREG2_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENREG2_DEFAULT << 17)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG2_disable                          (_RAC_CLKMULTEN0_CLKMULTENREG2_disable << 17)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG2_enable                           (_RAC_CLKMULTEN0_CLKMULTENREG2_enable << 17)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREG3                                  (0x1UL << 18)                                        /**< CLKMULTENREG3                               */
#define _RAC_CLKMULTEN0_CLKMULTENREG3_SHIFT                           18                                                   /**< Shift value for RAC_CLKMULTENREG3           */
#define _RAC_CLKMULTEN0_CLKMULTENREG3_MASK                            0x40000UL                                            /**< Bit mask for RAC_CLKMULTENREG3              */
#define _RAC_CLKMULTEN0_CLKMULTENREG3_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG3_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG3_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREG3_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENREG3_DEFAULT << 18)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG3_disable                          (_RAC_CLKMULTEN0_CLKMULTENREG3_disable << 18)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG3_enable                           (_RAC_CLKMULTEN0_CLKMULTENREG3_enable << 18)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENROTDET                                (0x1UL << 19)                                        /**< CLKMULTENROTDET                             */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_SHIFT                         19                                                   /**< Shift value for RAC_CLKMULTENROTDET         */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_MASK                          0x80000UL                                            /**< Bit mask for RAC_CLKMULTENROTDET            */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_disable                       0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_enable                        0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENROTDET_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTENROTDET_DEFAULT << 19)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENROTDET_disable                        (_RAC_CLKMULTEN0_CLKMULTENROTDET_disable << 19)      /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENROTDET_enable                         (_RAC_CLKMULTEN0_CLKMULTENROTDET_enable << 19)       /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ                           (0x1UL << 20)                                        /**< CLKMULTENBYPASS40MHZ                        */
#define _RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_SHIFT                    20                                                   /**< Shift value for RAC_CLKMULTENBYPASS40MHZ    */
#define _RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_MASK                     0x100000UL                                           /**< Bit mask for RAC_CLKMULTENBYPASS40MHZ       */
#define _RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_DEFAULT                  0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_disable                  0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_enable                   0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_DEFAULT                   (_RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_DEFAULT << 20) /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_disable                   (_RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_disable << 20) /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_enable                    (_RAC_CLKMULTEN0_CLKMULTENBYPASS40MHZ_enable << 20)  /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_SHIFT                          22                                                   /**< Shift value for RAC_CLKMULTFREQCAL          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_MASK                           0xC00000UL                                           /**< Bit mask for RAC_CLKMULTFREQCAL             */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_DEFAULT                        0x00000001UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_14uA                     0x00000000UL                                         /**< Mode pedes_14uA for RAC_CLKMULTEN0          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_22uA                     0x00000001UL                                         /**< Mode pedes_22uA for RAC_CLKMULTEN0          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_30uA                     0x00000002UL                                         /**< Mode pedes_30uA for RAC_CLKMULTEN0          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_38uA                     0x00000003UL                                         /**< Mode pedes_38uA for RAC_CLKMULTEN0          */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_DEFAULT                         (_RAC_CLKMULTEN0_CLKMULTFREQCAL_DEFAULT << 22)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_14uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_14uA << 22)    /**< Shifted mode pedes_14uA for RAC_CLKMULTEN0  */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_22uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_22uA << 22)    /**< Shifted mode pedes_22uA for RAC_CLKMULTEN0  */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_30uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_30uA << 22)    /**< Shifted mode pedes_30uA for RAC_CLKMULTEN0  */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_38uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_38uA << 22)    /**< Shifted mode pedes_38uA for RAC_CLKMULTEN0  */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_SHIFT                         24                                                   /**< Shift value for RAC_CLKMULTREG2ADJI         */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_MASK                          0x3000000UL                                          /**< Bit mask for RAC_CLKMULTREG2ADJI            */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_80uA                        0x00000000UL                                         /**< Mode I_80uA for RAC_CLKMULTEN0              */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_100uA                       0x00000001UL                                         /**< Mode I_100uA for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_120uA                       0x00000002UL                                         /**< Mode I_120uA for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_140uA                       0x00000003UL                                         /**< Mode I_140uA for RAC_CLKMULTEN0             */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_DEFAULT << 24)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_80uA                         (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_80uA << 24)       /**< Shifted mode I_80uA for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_100uA                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_100uA << 24)      /**< Shifted mode I_100uA for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_120uA                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_120uA << 24)      /**< Shifted mode I_120uA for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_140uA                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_140uA << 24)      /**< Shifted mode I_140uA for RAC_CLKMULTEN0     */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_SHIFT                         26                                                   /**< Shift value for RAC_CLKMULTREG1ADJV         */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_MASK                          0xC000000UL                                          /**< Bit mask for RAC_CLKMULTREG1ADJV            */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p28                         0x00000000UL                                         /**< Mode v1p28 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p32                         0x00000001UL                                         /**< Mode v1p32 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p33                         0x00000002UL                                         /**< Mode v1p33 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p38                         0x00000003UL                                         /**< Mode v1p38 for RAC_CLKMULTEN0               */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_DEFAULT << 26)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p28                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p28 << 26)        /**< Shifted mode v1p28 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p32                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p32 << 26)        /**< Shifted mode v1p32 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p33                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p33 << 26)        /**< Shifted mode v1p33 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p38                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p38 << 26)        /**< Shifted mode v1p38 for RAC_CLKMULTEN0       */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_SHIFT                         28                                                   /**< Shift value for RAC_CLKMULTREG2ADJV         */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_MASK                          0x30000000UL                                         /**< Bit mask for RAC_CLKMULTREG2ADJV            */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p03                         0x00000000UL                                         /**< Mode v1p03 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p09                         0x00000001UL                                         /**< Mode v1p09 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p10                         0x00000002UL                                         /**< Mode v1p10 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p16                         0x00000003UL                                         /**< Mode v1p16 for RAC_CLKMULTEN0               */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_DEFAULT << 28)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p03                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p03 << 28)        /**< Shifted mode v1p03 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p09                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p09 << 28)        /**< Shifted mode v1p09 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p10                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p10 << 28)        /**< Shifted mode v1p10 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p16                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p16 << 28)        /**< Shifted mode v1p16 for RAC_CLKMULTEN0       */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_SHIFT                         30                                                   /**< Shift value for RAC_CLKMULTREG3ADJV         */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_MASK                          0xC0000000UL                                         /**< Bit mask for RAC_CLKMULTREG3ADJV            */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p03                         0x00000000UL                                         /**< Mode v1p03 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p06                         0x00000001UL                                         /**< Mode v1p06 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p07                         0x00000002UL                                         /**< Mode v1p07 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p09                         0x00000003UL                                         /**< Mode v1p09 for RAC_CLKMULTEN0               */
#define RAC_CLKMULTEN0_CLKMULTREG3ADJV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG3ADJV_DEFAULT << 30)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p03                          (_RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p03 << 30)        /**< Shifted mode v1p03 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p06                          (_RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p06 << 30)        /**< Shifted mode v1p06 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p07                          (_RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p07 << 30)        /**< Shifted mode v1p07 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p09                          (_RAC_CLKMULTEN0_CLKMULTREG3ADJV_v1p09 << 30)        /**< Shifted mode v1p09 for RAC_CLKMULTEN0       */

/* Bit fields for RAC CLKMULTEN1 */
#define _RAC_CLKMULTEN1_RESETVALUE                                    0x00000188UL                                           /**< Default value for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_MASK                                          0x0001FDEFUL                                           /**< Mask for RAC_CLKMULTEN1                     */
#define _RAC_CLKMULTEN1_CLKMULTINNIBBLE_SHIFT                         0                                                      /**< Shift value for RAC_CLKMULTINNIBBLE         */
#define _RAC_CLKMULTEN1_CLKMULTINNIBBLE_MASK                          0xFUL                                                  /**< Bit mask for RAC_CLKMULTINNIBBLE            */
#define _RAC_CLKMULTEN1_CLKMULTINNIBBLE_DEFAULT                       0x00000008UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define RAC_CLKMULTEN1_CLKMULTINNIBBLE_DEFAULT                        (_RAC_CLKMULTEN1_CLKMULTINNIBBLE_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDFNIB                                  (0x1UL << 5)                                           /**< CLKMULTLDFNIB                               */
#define _RAC_CLKMULTEN1_CLKMULTLDFNIB_SHIFT                           5                                                      /**< Shift value for RAC_CLKMULTLDFNIB           */
#define _RAC_CLKMULTEN1_CLKMULTLDFNIB_MASK                            0x20UL                                                 /**< Bit mask for RAC_CLKMULTLDFNIB              */
#define _RAC_CLKMULTEN1_CLKMULTLDFNIB_DEFAULT                         0x00000000UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDFNIB_disable                         0x00000000UL                                           /**< Mode disable for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDFNIB_enable                          0x00000001UL                                           /**< Mode enable for RAC_CLKMULTEN1              */
#define RAC_CLKMULTEN1_CLKMULTLDFNIB_DEFAULT                          (_RAC_CLKMULTEN1_CLKMULTLDFNIB_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDFNIB_disable                          (_RAC_CLKMULTEN1_CLKMULTLDFNIB_disable << 5)           /**< Shifted mode disable for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDFNIB_enable                           (_RAC_CLKMULTEN1_CLKMULTLDFNIB_enable << 5)            /**< Shifted mode enable for RAC_CLKMULTEN1      */
#define RAC_CLKMULTEN1_CLKMULTLDMNIB                                  (0x1UL << 6)                                           /**< CLKMULTLDMNIB                               */
#define _RAC_CLKMULTEN1_CLKMULTLDMNIB_SHIFT                           6                                                      /**< Shift value for RAC_CLKMULTLDMNIB           */
#define _RAC_CLKMULTEN1_CLKMULTLDMNIB_MASK                            0x40UL                                                 /**< Bit mask for RAC_CLKMULTLDMNIB              */
#define _RAC_CLKMULTEN1_CLKMULTLDMNIB_DEFAULT                         0x00000000UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDMNIB_disable                         0x00000000UL                                           /**< Mode disable for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDMNIB_enable                          0x00000001UL                                           /**< Mode enable for RAC_CLKMULTEN1              */
#define RAC_CLKMULTEN1_CLKMULTLDMNIB_DEFAULT                          (_RAC_CLKMULTEN1_CLKMULTLDMNIB_DEFAULT << 6)           /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDMNIB_disable                          (_RAC_CLKMULTEN1_CLKMULTLDMNIB_disable << 6)           /**< Shifted mode disable for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDMNIB_enable                           (_RAC_CLKMULTEN1_CLKMULTLDMNIB_enable << 6)            /**< Shifted mode enable for RAC_CLKMULTEN1      */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_SHIFT                         7                                                      /**< Shift value for RAC_CLKMULTRDNIBBLE         */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_MASK                          0x180UL                                                /**< Bit mask for RAC_CLKMULTRDNIBBLE            */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_DEFAULT                       0x00000003UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_quarter_nibble                0x00000000UL                                           /**< Mode quarter_nibble for RAC_CLKMULTEN1      */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_fine_nibble                   0x00000001UL                                           /**< Mode fine_nibble for RAC_CLKMULTEN1         */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_moderate_nibble               0x00000002UL                                           /**< Mode moderate_nibble for RAC_CLKMULTEN1     */
#define _RAC_CLKMULTEN1_CLKMULTRDNIBBLE_coarse_nibble                 0x00000003UL                                           /**< Mode coarse_nibble for RAC_CLKMULTEN1       */
#define RAC_CLKMULTEN1_CLKMULTRDNIBBLE_DEFAULT                        (_RAC_CLKMULTEN1_CLKMULTRDNIBBLE_DEFAULT << 7)         /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTRDNIBBLE_quarter_nibble                 (_RAC_CLKMULTEN1_CLKMULTRDNIBBLE_quarter_nibble << 7)  /**< Shifted mode quarter_nibble for RAC_CLKMULTEN1*/
#define RAC_CLKMULTEN1_CLKMULTRDNIBBLE_fine_nibble                    (_RAC_CLKMULTEN1_CLKMULTRDNIBBLE_fine_nibble << 7)     /**< Shifted mode fine_nibble for RAC_CLKMULTEN1 */
#define RAC_CLKMULTEN1_CLKMULTRDNIBBLE_moderate_nibble                (_RAC_CLKMULTEN1_CLKMULTRDNIBBLE_moderate_nibble << 7) /**< Shifted mode moderate_nibble for RAC_CLKMULTEN1*/
#define RAC_CLKMULTEN1_CLKMULTRDNIBBLE_coarse_nibble                  (_RAC_CLKMULTEN1_CLKMULTRDNIBBLE_coarse_nibble << 7)   /**< Shifted mode coarse_nibble for RAC_CLKMULTEN1*/
#define RAC_CLKMULTEN1_CLKMULTLDCNIB                                  (0x1UL << 10)                                          /**< CLKMULTLDCNIB                               */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_SHIFT                           10                                                     /**< Shift value for RAC_CLKMULTLDCNIB           */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_MASK                            0x400UL                                                /**< Bit mask for RAC_CLKMULTLDCNIB              */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_DEFAULT                         0x00000000UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_disable                         0x00000000UL                                           /**< Mode disable for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_enable                          0x00000001UL                                           /**< Mode enable for RAC_CLKMULTEN1              */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB_DEFAULT                          (_RAC_CLKMULTEN1_CLKMULTLDCNIB_DEFAULT << 10)          /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB_disable                          (_RAC_CLKMULTEN1_CLKMULTLDCNIB_disable << 10)          /**< Shifted mode disable for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB_enable                           (_RAC_CLKMULTEN1_CLKMULTLDCNIB_enable << 10)           /**< Shifted mode enable for RAC_CLKMULTEN1      */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_SHIFT                        11                                                     /**< Shift value for RAC_CLKMULTDRVAMPSEL        */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_MASK                         0x1F800UL                                              /**< Bit mask for RAC_CLKMULTDRVAMPSEL           */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_DEFAULT                      0x00000000UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_off                          0x00000000UL                                           /**< Mode off for RAC_CLKMULTEN1                 */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x1                     0x00000001UL                                           /**< Mode slide_x1 for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x2                     0x00000003UL                                           /**< Mode slide_x2 for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x3                     0x00000007UL                                           /**< Mode slide_x3 for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x4                     0x0000000FUL                                           /**< Mode slide_x4 for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x5                     0x0000001FUL                                           /**< Mode slide_x5 for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x6                     0x0000003FUL                                           /**< Mode slide_x6 for RAC_CLKMULTEN1            */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_DEFAULT                       (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_DEFAULT << 11)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_off                           (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_off << 11)           /**< Shifted mode off for RAC_CLKMULTEN1         */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x1                      (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x1 << 11)      /**< Shifted mode slide_x1 for RAC_CLKMULTEN1    */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x2                      (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x2 << 11)      /**< Shifted mode slide_x2 for RAC_CLKMULTEN1    */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x3                      (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x3 << 11)      /**< Shifted mode slide_x3 for RAC_CLKMULTEN1    */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x4                      (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x4 << 11)      /**< Shifted mode slide_x4 for RAC_CLKMULTEN1    */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x5                      (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x5 << 11)      /**< Shifted mode slide_x5 for RAC_CLKMULTEN1    */
#define RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x6                      (_RAC_CLKMULTEN1_CLKMULTDRVAMPSEL_slide_x6 << 11)      /**< Shifted mode slide_x6 for RAC_CLKMULTEN1    */

/* Bit fields for RAC CLKMULTCTRL */
#define _RAC_CLKMULTCTRL_RESETVALUE                                   0x000000C0UL                                          /**< Default value for RAC_CLKMULTCTRL           */
#define _RAC_CLKMULTCTRL_MASK                                         0x00007FFFUL                                          /**< Mask for RAC_CLKMULTCTRL                    */
#define _RAC_CLKMULTCTRL_CLKMULTDIVN_SHIFT                            0                                                     /**< Shift value for RAC_CLKMULTDIVN             */
#define _RAC_CLKMULTCTRL_CLKMULTDIVN_MASK                             0x7FUL                                                /**< Bit mask for RAC_CLKMULTDIVN                */
#define _RAC_CLKMULTCTRL_CLKMULTDIVN_DEFAULT                          0x00000040UL                                          /**< Mode DEFAULT for RAC_CLKMULTCTRL            */
#define RAC_CLKMULTCTRL_CLKMULTDIVN_DEFAULT                           (_RAC_CLKMULTCTRL_CLKMULTDIVN_DEFAULT << 0)           /**< Shifted mode DEFAULT for RAC_CLKMULTCTRL    */
#define _RAC_CLKMULTCTRL_CLKMULTDIVR_SHIFT                            7                                                     /**< Shift value for RAC_CLKMULTDIVR             */
#define _RAC_CLKMULTCTRL_CLKMULTDIVR_MASK                             0x380UL                                               /**< Bit mask for RAC_CLKMULTDIVR                */
#define _RAC_CLKMULTCTRL_CLKMULTDIVR_DEFAULT                          0x00000001UL                                          /**< Mode DEFAULT for RAC_CLKMULTCTRL            */
#define RAC_CLKMULTCTRL_CLKMULTDIVR_DEFAULT                           (_RAC_CLKMULTCTRL_CLKMULTDIVR_DEFAULT << 7)           /**< Shifted mode DEFAULT for RAC_CLKMULTCTRL    */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_SHIFT                            10                                                    /**< Shift value for RAC_CLKMULTDIVX             */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_MASK                             0x1C00UL                                              /**< Bit mask for RAC_CLKMULTDIVX                */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_DEFAULT                          0x00000000UL                                          /**< Mode DEFAULT for RAC_CLKMULTCTRL            */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div_1                            0x00000000UL                                          /**< Mode div_1 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div_2                            0x00000001UL                                          /**< Mode div_2 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div_4                            0x00000002UL                                          /**< Mode div_4 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div_6                            0x00000003UL                                          /**< Mode div_6 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div_8                            0x00000004UL                                          /**< Mode div_8 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div10                            0x00000005UL                                          /**< Mode div10 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div12                            0x00000006UL                                          /**< Mode div12 for RAC_CLKMULTCTRL              */
#define _RAC_CLKMULTCTRL_CLKMULTDIVX_div14                            0x00000007UL                                          /**< Mode div14 for RAC_CLKMULTCTRL              */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_DEFAULT                           (_RAC_CLKMULTCTRL_CLKMULTDIVX_DEFAULT << 10)          /**< Shifted mode DEFAULT for RAC_CLKMULTCTRL    */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div_1                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div_1 << 10)            /**< Shifted mode div_1 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div_2                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div_2 << 10)            /**< Shifted mode div_2 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div_4                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div_4 << 10)            /**< Shifted mode div_4 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div_6                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div_6 << 10)            /**< Shifted mode div_6 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div_8                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div_8 << 10)            /**< Shifted mode div_8 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div10                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div10 << 10)            /**< Shifted mode div10 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div12                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div12 << 10)            /**< Shifted mode div12 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTDIVX_div14                             (_RAC_CLKMULTCTRL_CLKMULTDIVX_div14 << 10)            /**< Shifted mode div14 for RAC_CLKMULTCTRL      */
#define RAC_CLKMULTCTRL_CLKMULTENRESYNC                               (0x1UL << 13)                                         /**< CLKMULTENRESYNC                             */
#define _RAC_CLKMULTCTRL_CLKMULTENRESYNC_SHIFT                        13                                                    /**< Shift value for RAC_CLKMULTENRESYNC         */
#define _RAC_CLKMULTCTRL_CLKMULTENRESYNC_MASK                         0x2000UL                                              /**< Bit mask for RAC_CLKMULTENRESYNC            */
#define _RAC_CLKMULTCTRL_CLKMULTENRESYNC_DEFAULT                      0x00000000UL                                          /**< Mode DEFAULT for RAC_CLKMULTCTRL            */
#define _RAC_CLKMULTCTRL_CLKMULTENRESYNC_disable_sync                 0x00000000UL                                          /**< Mode disable_sync for RAC_CLKMULTCTRL       */
#define _RAC_CLKMULTCTRL_CLKMULTENRESYNC_enable_sync                  0x00000001UL                                          /**< Mode enable_sync for RAC_CLKMULTCTRL        */
#define RAC_CLKMULTCTRL_CLKMULTENRESYNC_DEFAULT                       (_RAC_CLKMULTCTRL_CLKMULTENRESYNC_DEFAULT << 13)      /**< Shifted mode DEFAULT for RAC_CLKMULTCTRL    */
#define RAC_CLKMULTCTRL_CLKMULTENRESYNC_disable_sync                  (_RAC_CLKMULTCTRL_CLKMULTENRESYNC_disable_sync << 13) /**< Shifted mode disable_sync for RAC_CLKMULTCTRL*/
#define RAC_CLKMULTCTRL_CLKMULTENRESYNC_enable_sync                   (_RAC_CLKMULTCTRL_CLKMULTENRESYNC_enable_sync << 13)  /**< Shifted mode enable_sync for RAC_CLKMULTCTRL*/
#define RAC_CLKMULTCTRL_CLKMULTVALID                                  (0x1UL << 14)                                         /**< CLKMULTVALID                                */
#define _RAC_CLKMULTCTRL_CLKMULTVALID_SHIFT                           14                                                    /**< Shift value for RAC_CLKMULTVALID            */
#define _RAC_CLKMULTCTRL_CLKMULTVALID_MASK                            0x4000UL                                              /**< Bit mask for RAC_CLKMULTVALID               */
#define _RAC_CLKMULTCTRL_CLKMULTVALID_DEFAULT                         0x00000000UL                                          /**< Mode DEFAULT for RAC_CLKMULTCTRL            */
#define _RAC_CLKMULTCTRL_CLKMULTVALID_invalid                         0x00000000UL                                          /**< Mode invalid for RAC_CLKMULTCTRL            */
#define _RAC_CLKMULTCTRL_CLKMULTVALID_valid                           0x00000001UL                                          /**< Mode valid for RAC_CLKMULTCTRL              */
#define RAC_CLKMULTCTRL_CLKMULTVALID_DEFAULT                          (_RAC_CLKMULTCTRL_CLKMULTVALID_DEFAULT << 14)         /**< Shifted mode DEFAULT for RAC_CLKMULTCTRL    */
#define RAC_CLKMULTCTRL_CLKMULTVALID_invalid                          (_RAC_CLKMULTCTRL_CLKMULTVALID_invalid << 14)         /**< Shifted mode invalid for RAC_CLKMULTCTRL    */
#define RAC_CLKMULTCTRL_CLKMULTVALID_valid                            (_RAC_CLKMULTCTRL_CLKMULTVALID_valid << 14)           /**< Shifted mode valid for RAC_CLKMULTCTRL      */

/* Bit fields for RAC CLKMULTSTATUS */
#define _RAC_CLKMULTSTATUS_RESETVALUE                                 0x00000000UL                                       /**< Default value for RAC_CLKMULTSTATUS         */
#define _RAC_CLKMULTSTATUS_MASK                                       0x0000001FUL                                       /**< Mask for RAC_CLKMULTSTATUS                  */
#define _RAC_CLKMULTSTATUS_CLKMULTOUTNIBBLE_SHIFT                     0                                                  /**< Shift value for RAC_CLKMULTOUTNIBBLE        */
#define _RAC_CLKMULTSTATUS_CLKMULTOUTNIBBLE_MASK                      0xFUL                                              /**< Bit mask for RAC_CLKMULTOUTNIBBLE           */
#define _RAC_CLKMULTSTATUS_CLKMULTOUTNIBBLE_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for RAC_CLKMULTSTATUS          */
#define RAC_CLKMULTSTATUS_CLKMULTOUTNIBBLE_DEFAULT                    (_RAC_CLKMULTSTATUS_CLKMULTOUTNIBBLE_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_CLKMULTSTATUS  */
#define RAC_CLKMULTSTATUS_CLKMULTACKVALID                             (0x1UL << 4)                                       /**< CLKMULTACKVALID                             */
#define _RAC_CLKMULTSTATUS_CLKMULTACKVALID_SHIFT                      4                                                  /**< Shift value for RAC_CLKMULTACKVALID         */
#define _RAC_CLKMULTSTATUS_CLKMULTACKVALID_MASK                       0x10UL                                             /**< Bit mask for RAC_CLKMULTACKVALID            */
#define _RAC_CLKMULTSTATUS_CLKMULTACKVALID_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for RAC_CLKMULTSTATUS          */
#define _RAC_CLKMULTSTATUS_CLKMULTACKVALID_invalid                    0x00000000UL                                       /**< Mode invalid for RAC_CLKMULTSTATUS          */
#define _RAC_CLKMULTSTATUS_CLKMULTACKVALID_valid                      0x00000001UL                                       /**< Mode valid for RAC_CLKMULTSTATUS            */
#define RAC_CLKMULTSTATUS_CLKMULTACKVALID_DEFAULT                     (_RAC_CLKMULTSTATUS_CLKMULTACKVALID_DEFAULT << 4)  /**< Shifted mode DEFAULT for RAC_CLKMULTSTATUS  */
#define RAC_CLKMULTSTATUS_CLKMULTACKVALID_invalid                     (_RAC_CLKMULTSTATUS_CLKMULTACKVALID_invalid << 4)  /**< Shifted mode invalid for RAC_CLKMULTSTATUS  */
#define RAC_CLKMULTSTATUS_CLKMULTACKVALID_valid                       (_RAC_CLKMULTSTATUS_CLKMULTACKVALID_valid << 4)    /**< Shifted mode valid for RAC_CLKMULTSTATUS    */

/* Bit fields for RAC IFADCTRIM0 */
#define _RAC_IFADCTRIM0_RESETVALUE                                    0x11512C6CUL                                           /**< Default value for RAC_IFADCTRIM0            */
#define _RAC_IFADCTRIM0_MASK                                          0x3FFFFFFFUL                                           /**< Mask for RAC_IFADCTRIM0                     */
#define RAC_IFADCTRIM0_IFADCCLKSEL                                    (0x1UL << 0)                                           /**< IFADCCLKSEL                                 */
#define _RAC_IFADCTRIM0_IFADCCLKSEL_SHIFT                             0                                                      /**< Shift value for RAC_IFADCCLKSEL             */
#define _RAC_IFADCTRIM0_IFADCCLKSEL_MASK                              0x1UL                                                  /**< Bit mask for RAC_IFADCCLKSEL                */
#define _RAC_IFADCTRIM0_IFADCCLKSEL_DEFAULT                           0x00000000UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCCLKSEL_clk_2p4g                          0x00000000UL                                           /**< Mode clk_2p4g for RAC_IFADCTRIM0            */
#define _RAC_IFADCTRIM0_IFADCCLKSEL_clk_subg                          0x00000001UL                                           /**< Mode clk_subg for RAC_IFADCTRIM0            */
#define RAC_IFADCTRIM0_IFADCCLKSEL_DEFAULT                            (_RAC_IFADCTRIM0_IFADCCLKSEL_DEFAULT << 0)             /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCCLKSEL_clk_2p4g                           (_RAC_IFADCTRIM0_IFADCCLKSEL_clk_2p4g << 0)            /**< Shifted mode clk_2p4g for RAC_IFADCTRIM0    */
#define RAC_IFADCTRIM0_IFADCCLKSEL_clk_subg                           (_RAC_IFADCTRIM0_IFADCCLKSEL_clk_subg << 0)            /**< Shifted mode clk_subg for RAC_IFADCTRIM0    */
#define RAC_IFADCTRIM0_IFADCENHALFMODE                                (0x1UL << 1)                                           /**< IFADCENHALFMODE                             */
#define _RAC_IFADCTRIM0_IFADCENHALFMODE_SHIFT                         1                                                      /**< Shift value for RAC_IFADCENHALFMODE         */
#define _RAC_IFADCTRIM0_IFADCENHALFMODE_MASK                          0x2UL                                                  /**< Bit mask for RAC_IFADCENHALFMODE            */
#define _RAC_IFADCTRIM0_IFADCENHALFMODE_DEFAULT                       0x00000000UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCENHALFMODE_full_speed_mode               0x00000000UL                                           /**< Mode full_speed_mode for RAC_IFADCTRIM0     */
#define _RAC_IFADCTRIM0_IFADCENHALFMODE_half_speed_mode               0x00000001UL                                           /**< Mode half_speed_mode for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCENHALFMODE_DEFAULT                        (_RAC_IFADCTRIM0_IFADCENHALFMODE_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCENHALFMODE_full_speed_mode                (_RAC_IFADCTRIM0_IFADCENHALFMODE_full_speed_mode << 1) /**< Shifted mode full_speed_mode for RAC_IFADCTRIM0*/
#define RAC_IFADCTRIM0_IFADCENHALFMODE_half_speed_mode                (_RAC_IFADCTRIM0_IFADCENHALFMODE_half_speed_mode << 1) /**< Shifted mode half_speed_mode for RAC_IFADCTRIM0*/
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_SHIFT                    2                                                      /**< Shift value for RAC_IFADCLDOSERIESAMPLVL    */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_MASK                     0x1CUL                                                 /**< Bit mask for RAC_IFADCLDOSERIESAMPLVL       */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_DEFAULT                  0x00000003UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p225                   0x00000000UL                                           /**< Mode v1p225 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p250                   0x00000001UL                                           /**< Mode v1p250 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p275                   0x00000002UL                                           /**< Mode v1p275 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p300                   0x00000003UL                                           /**< Mode v1p300 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p325                   0x00000004UL                                           /**< Mode v1p325 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p350                   0x00000005UL                                           /**< Mode v1p350 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p375                   0x00000006UL                                           /**< Mode v1p375 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p400                   0x00000007UL                                           /**< Mode v1p400 for RAC_IFADCTRIM0              */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_DEFAULT                   (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_DEFAULT << 2)    /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p225                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p225 << 2)     /**< Shifted mode v1p225 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p250                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p250 << 2)     /**< Shifted mode v1p250 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p275                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p275 << 2)     /**< Shifted mode v1p275 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p300                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p300 << 2)     /**< Shifted mode v1p300 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p325                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p325 << 2)     /**< Shifted mode v1p325 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p350                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p350 << 2)     /**< Shifted mode v1p350 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p375                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p375 << 2)     /**< Shifted mode v1p375 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p400                    (_RAC_IFADCTRIM0_IFADCLDOSERIESAMPLVL_v1p400 << 2)     /**< Shifted mode v1p400 for RAC_IFADCTRIM0      */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_SHIFT                    5                                                      /**< Shift value for RAC_IFADCLDOSHUNTAMPLVL1    */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_MASK                     0xE0UL                                                 /**< Bit mask for RAC_IFADCLDOSHUNTAMPLVL1       */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_DEFAULT                  0x00000003UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p125                   0x00000000UL                                           /**< Mode v1p125 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p150                   0x00000001UL                                           /**< Mode v1p150 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p175                   0x00000002UL                                           /**< Mode v1p175 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p200                   0x00000003UL                                           /**< Mode v1p200 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p225                   0x00000004UL                                           /**< Mode v1p225 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p250                   0x00000005UL                                           /**< Mode v1p250 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p275                   0x00000006UL                                           /**< Mode v1p275 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p300                   0x00000007UL                                           /**< Mode v1p300 for RAC_IFADCTRIM0              */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_DEFAULT                   (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_DEFAULT << 5)    /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p125                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p125 << 5)     /**< Shifted mode v1p125 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p150                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p150 << 5)     /**< Shifted mode v1p150 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p175                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p175 << 5)     /**< Shifted mode v1p175 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p200                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p200 << 5)     /**< Shifted mode v1p200 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p225                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p225 << 5)     /**< Shifted mode v1p225 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p250                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p250 << 5)     /**< Shifted mode v1p250 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p275                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p275 << 5)     /**< Shifted mode v1p275 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p300                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL1_v1p300 << 5)     /**< Shifted mode v1p300 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2                           (0x1UL << 8)                                           /**< IFADCLDOSHUNTAMPLVL2                        */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_SHIFT                    8                                                      /**< Shift value for RAC_IFADCLDOSHUNTAMPLVL2    */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_MASK                     0x100UL                                                /**< Bit mask for RAC_IFADCLDOSHUNTAMPLVL2       */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_DEFAULT                  0x00000000UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_disable                  0x00000000UL                                           /**< Mode disable for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_enable                   0x00000001UL                                           /**< Mode enable for RAC_IFADCTRIM0              */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_DEFAULT                   (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_DEFAULT << 8)    /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_disable                   (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_disable << 8)    /**< Shifted mode disable for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_enable                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTAMPLVL2_enable << 8)     /**< Shifted mode enable for RAC_IFADCTRIM0      */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_SHIFT                    9                                                      /**< Shift value for RAC_IFADCLDOSHUNTCURLVL1    */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_MASK                     0xE00UL                                                /**< Bit mask for RAC_IFADCLDOSHUNTCURLVL1       */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_DEFAULT                  0x00000006UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i55u                     0x00000000UL                                           /**< Mode i55u for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i65u                     0x00000001UL                                           /**< Mode i65u for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i70u                     0x00000002UL                                           /**< Mode i70u for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i85u                     0x00000003UL                                           /**< Mode i85u for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i85u2                    0x00000004UL                                           /**< Mode i85u2 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i95u                     0x00000005UL                                           /**< Mode i95u for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i100u                    0x00000006UL                                           /**< Mode i100u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i110u                    0x00000007UL                                           /**< Mode i110u for RAC_IFADCTRIM0               */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_DEFAULT                   (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_DEFAULT << 9)    /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i55u                      (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i55u << 9)       /**< Shifted mode i55u for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i65u                      (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i65u << 9)       /**< Shifted mode i65u for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i70u                      (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i70u << 9)       /**< Shifted mode i70u for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i85u                      (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i85u << 9)       /**< Shifted mode i85u for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i85u2                     (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i85u2 << 9)      /**< Shifted mode i85u2 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i95u                      (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i95u << 9)       /**< Shifted mode i95u for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i100u                     (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i100u << 9)      /**< Shifted mode i100u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i110u                     (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL1_i110u << 9)      /**< Shifted mode i110u for RAC_IFADCTRIM0       */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_SHIFT                    12                                                     /**< Shift value for RAC_IFADCLDOSHUNTCURLVL2    */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_MASK                     0x7000UL                                               /**< Bit mask for RAC_IFADCLDOSHUNTCURLVL2       */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_DEFAULT                  0x00000002UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i4u                      0x00000000UL                                           /**< Mode i4u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i4p5u                    0x00000001UL                                           /**< Mode i4p5u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5u                      0x00000002UL                                           /**< Mode i5u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5p5u                    0x00000003UL                                           /**< Mode i5p5u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5u2                     0x00000004UL                                           /**< Mode i5u2 for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5p5u2                   0x00000005UL                                           /**< Mode i5p5u2 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i6u                      0x00000006UL                                           /**< Mode i6u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i6p5u                    0x00000007UL                                           /**< Mode i6p5u for RAC_IFADCTRIM0               */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_DEFAULT                   (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_DEFAULT << 12)   /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i4u                       (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i4u << 12)       /**< Shifted mode i4u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i4p5u                     (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i4p5u << 12)     /**< Shifted mode i4p5u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5u                       (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5u << 12)       /**< Shifted mode i5u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5p5u                     (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5p5u << 12)     /**< Shifted mode i5p5u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5u2                      (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5u2 << 12)      /**< Shifted mode i5u2 for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5p5u2                    (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i5p5u2 << 12)    /**< Shifted mode i5p5u2 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i6u                       (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i6u << 12)       /**< Shifted mode i6u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i6p5u                     (_RAC_IFADCTRIM0_IFADCLDOSHUNTCURLVL2_i6p5u << 12)     /**< Shifted mode i6p5u for RAC_IFADCTRIM0       */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_SHIFT                         15                                                     /**< Shift value for RAC_IFADCOTACURRENT         */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_MASK                          0x38000UL                                              /**< Bit mask for RAC_IFADCOTACURRENT            */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_DEFAULT                       0x00000002UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i3u                           0x00000000UL                                           /**< Mode i3u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i3p5u                         0x00000001UL                                           /**< Mode i3p5u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i4u                           0x00000002UL                                           /**< Mode i4u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i4p5u                         0x00000003UL                                           /**< Mode i4p5u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i4u2                          0x00000004UL                                           /**< Mode i4u2 for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i4p5u2                        0x00000005UL                                           /**< Mode i4p5u2 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i5u                           0x00000006UL                                           /**< Mode i5u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCOTACURRENT_i5p5u                         0x00000007UL                                           /**< Mode i5p5u for RAC_IFADCTRIM0               */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_DEFAULT                        (_RAC_IFADCTRIM0_IFADCOTACURRENT_DEFAULT << 15)        /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i3u                            (_RAC_IFADCTRIM0_IFADCOTACURRENT_i3u << 15)            /**< Shifted mode i3u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i3p5u                          (_RAC_IFADCTRIM0_IFADCOTACURRENT_i3p5u << 15)          /**< Shifted mode i3p5u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i4u                            (_RAC_IFADCTRIM0_IFADCOTACURRENT_i4u << 15)            /**< Shifted mode i4u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i4p5u                          (_RAC_IFADCTRIM0_IFADCOTACURRENT_i4p5u << 15)          /**< Shifted mode i4p5u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i4u2                           (_RAC_IFADCTRIM0_IFADCOTACURRENT_i4u2 << 15)           /**< Shifted mode i4u2 for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i4p5u2                         (_RAC_IFADCTRIM0_IFADCOTACURRENT_i4p5u2 << 15)         /**< Shifted mode i4p5u2 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i5u                            (_RAC_IFADCTRIM0_IFADCOTACURRENT_i5u << 15)            /**< Shifted mode i5u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCOTACURRENT_i5p5u                          (_RAC_IFADCTRIM0_IFADCOTACURRENT_i5p5u << 15)          /**< Shifted mode i5p5u for RAC_IFADCTRIM0       */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_SHIFT                       18                                                     /**< Shift value for RAC_IFADCREFBUFAMPLVL       */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_MASK                        0x1C0000UL                                             /**< Bit mask for RAC_IFADCREFBUFAMPLVL          */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_DEFAULT                     0x00000004UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p88                       0x00000000UL                                           /**< Mode v0p88 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p91                       0x00000001UL                                           /**< Mode v0p91 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p94                       0x00000002UL                                           /**< Mode v0p94 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p97                       0x00000003UL                                           /**< Mode v0p97 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p00                       0x00000004UL                                           /**< Mode v1p00 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p03                       0x00000005UL                                           /**< Mode v1p03 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p06                       0x00000006UL                                           /**< Mode v1p06 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p09                       0x00000007UL                                           /**< Mode v1p09 for RAC_IFADCTRIM0               */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_DEFAULT                      (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_DEFAULT << 18)      /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p88                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p88 << 18)        /**< Shifted mode v0p88 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p91                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p91 << 18)        /**< Shifted mode v0p91 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p94                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p94 << 18)        /**< Shifted mode v0p94 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p97                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v0p97 << 18)        /**< Shifted mode v0p97 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p00                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p00 << 18)        /**< Shifted mode v1p00 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p03                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p03 << 18)        /**< Shifted mode v1p03 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p06                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p06 << 18)        /**< Shifted mode v1p06 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p09                        (_RAC_IFADCTRIM0_IFADCREFBUFAMPLVL_v1p09 << 18)        /**< Shifted mode v1p09 for RAC_IFADCTRIM0       */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_SHIFT                       21                                                     /**< Shift value for RAC_IFADCREFBUFCURLVL       */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_MASK                        0xE00000UL                                             /**< Bit mask for RAC_IFADCREFBUFCURLVL          */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_DEFAULT                     0x00000002UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i4u                         0x00000000UL                                           /**< Mode i4u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i4p5u                       0x00000001UL                                           /**< Mode i4p5u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5u                         0x00000002UL                                           /**< Mode i5u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5p5u                       0x00000003UL                                           /**< Mode i5p5u for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5u2                        0x00000004UL                                           /**< Mode i5u2 for RAC_IFADCTRIM0                */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5p5u2                      0x00000005UL                                           /**< Mode i5p5u2 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i6u                         0x00000006UL                                           /**< Mode i6u for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i6p5u                       0x00000007UL                                           /**< Mode i6p5u for RAC_IFADCTRIM0               */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_DEFAULT                      (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_DEFAULT << 21)      /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i4u                          (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i4u << 21)          /**< Shifted mode i4u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i4p5u                        (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i4p5u << 21)        /**< Shifted mode i4p5u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5u                          (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5u << 21)          /**< Shifted mode i5u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5p5u                        (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5p5u << 21)        /**< Shifted mode i5p5u for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5u2                         (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5u2 << 21)         /**< Shifted mode i5u2 for RAC_IFADCTRIM0        */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5p5u2                       (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i5p5u2 << 21)       /**< Shifted mode i5p5u2 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i6u                          (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i6u << 21)          /**< Shifted mode i6u for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i6p5u                        (_RAC_IFADCTRIM0_IFADCREFBUFCURLVL_i6p5u << 21)        /**< Shifted mode i6p5u for RAC_IFADCTRIM0       */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_SHIFT                        24                                                     /**< Shift value for RAC_IFADCSIDETONEAMP        */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_MASK                         0x7000000UL                                            /**< Bit mask for RAC_IFADCSIDETONEAMP           */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_DEFAULT                      0x00000001UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_5p68mV                  0x00000000UL                                           /**< Mode diff_5p68mV for RAC_IFADCTRIM0         */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_29p1mV                  0x00000001UL                                           /**< Mode diff_29p1mV for RAC_IFADCTRIM0         */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_9p73mV                  0x00000002UL                                           /**< Mode diff_9p73mV for RAC_IFADCTRIM0         */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_76p9mV                  0x00000003UL                                           /**< Mode diff_76p9mV for RAC_IFADCTRIM0         */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_9p68_mV                 0x00000004UL                                           /**< Mode diff_9p68_mV for RAC_IFADCTRIM0        */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_51_mV                   0x00000005UL                                           /**< Mode diff_51_mV for RAC_IFADCTRIM0          */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_17p2_mV                 0x00000006UL                                           /**< Mode diff_17p2_mV for RAC_IFADCTRIM0        */
#define _RAC_IFADCTRIM0_IFADCSIDETONEAMP_disable                      0x00000007UL                                           /**< Mode disable for RAC_IFADCTRIM0             */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_DEFAULT                       (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_DEFAULT << 24)       /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_5p68mV                   (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_5p68mV << 24)   /**< Shifted mode diff_5p68mV for RAC_IFADCTRIM0 */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_29p1mV                   (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_29p1mV << 24)   /**< Shifted mode diff_29p1mV for RAC_IFADCTRIM0 */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_9p73mV                   (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_9p73mV << 24)   /**< Shifted mode diff_9p73mV for RAC_IFADCTRIM0 */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_76p9mV                   (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_76p9mV << 24)   /**< Shifted mode diff_76p9mV for RAC_IFADCTRIM0 */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_9p68_mV                  (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_9p68_mV << 24)  /**< Shifted mode diff_9p68_mV for RAC_IFADCTRIM0*/
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_51_mV                    (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_51_mV << 24)    /**< Shifted mode diff_51_mV for RAC_IFADCTRIM0  */
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_17p2_mV                  (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_diff_17p2_mV << 24)  /**< Shifted mode diff_17p2_mV for RAC_IFADCTRIM0*/
#define RAC_IFADCTRIM0_IFADCSIDETONEAMP_disable                       (_RAC_IFADCTRIM0_IFADCSIDETONEAMP_disable << 24)       /**< Shifted mode disable for RAC_IFADCTRIM0     */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_SHIFT                       27                                                     /**< Shift value for RAC_IFADCSIDETONEFREQ       */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_MASK                        0x38000000UL                                           /**< Bit mask for RAC_IFADCSIDETONEFREQ          */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_DEFAULT                     0x00000002UL                                           /**< Mode DEFAULT for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_na0                         0x00000000UL                                           /**< Mode na0 for RAC_IFADCTRIM0                 */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_128                     0x00000001UL                                           /**< Mode div_128 for RAC_IFADCTRIM0             */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_64                      0x00000002UL                                           /**< Mode div_64 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_32                      0x00000003UL                                           /**< Mode div_32 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_16                      0x00000004UL                                           /**< Mode div_16 for RAC_IFADCTRIM0              */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_8                       0x00000005UL                                           /**< Mode div_8 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_4                       0x00000006UL                                           /**< Mode div_4 for RAC_IFADCTRIM0               */
#define _RAC_IFADCTRIM0_IFADCSIDETONEFREQ_na7                         0x00000007UL                                           /**< Mode na7 for RAC_IFADCTRIM0                 */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_DEFAULT                      (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_DEFAULT << 27)      /**< Shifted mode DEFAULT for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_na0                          (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_na0 << 27)          /**< Shifted mode na0 for RAC_IFADCTRIM0         */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_128                      (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_128 << 27)      /**< Shifted mode div_128 for RAC_IFADCTRIM0     */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_64                       (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_64 << 27)       /**< Shifted mode div_64 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_32                       (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_32 << 27)       /**< Shifted mode div_32 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_16                       (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_16 << 27)       /**< Shifted mode div_16 for RAC_IFADCTRIM0      */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_8                        (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_8 << 27)        /**< Shifted mode div_8 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_4                        (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_div_4 << 27)        /**< Shifted mode div_4 for RAC_IFADCTRIM0       */
#define RAC_IFADCTRIM0_IFADCSIDETONEFREQ_na7                          (_RAC_IFADCTRIM0_IFADCSIDETONEFREQ_na7 << 27)          /**< Shifted mode na7 for RAC_IFADCTRIM0         */

/* Bit fields for RAC IFADCTRIM1 */
#define _RAC_IFADCTRIM1_RESETVALUE                                    0x00000123UL                                       /**< Default value for RAC_IFADCTRIM1            */
#define _RAC_IFADCTRIM1_MASK                                          0x000001FFUL                                       /**< Mask for RAC_IFADCTRIM1                     */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_SHIFT                             0                                                  /**< Shift value for RAC_IFADCVCMLVL             */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_MASK                              0x7UL                                              /**< Bit mask for RAC_IFADCVCMLVL                */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_DEFAULT                           0x00000003UL                                       /**< Mode DEFAULT for RAC_IFADCTRIM1             */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_475mV                         0x00000000UL                                       /**< Mode vcm_475mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_500mV                         0x00000001UL                                       /**< Mode vcm_500mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_525mV                         0x00000002UL                                       /**< Mode vcm_525mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_550mV                         0x00000003UL                                       /**< Mode vcm_550mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_575mV                         0x00000004UL                                       /**< Mode vcm_575mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_600mV                         0x00000005UL                                       /**< Mode vcm_600mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_vcm_625mV                         0x00000006UL                                       /**< Mode vcm_625mV for RAC_IFADCTRIM1           */
#define _RAC_IFADCTRIM1_IFADCVCMLVL_cm_650mV                          0x00000007UL                                       /**< Mode cm_650mV for RAC_IFADCTRIM1            */
#define RAC_IFADCTRIM1_IFADCVCMLVL_DEFAULT                            (_RAC_IFADCTRIM1_IFADCVCMLVL_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_IFADCTRIM1     */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_475mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_475mV << 0)       /**< Shifted mode vcm_475mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_500mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_500mV << 0)       /**< Shifted mode vcm_500mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_525mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_525mV << 0)       /**< Shifted mode vcm_525mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_550mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_550mV << 0)       /**< Shifted mode vcm_550mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_575mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_575mV << 0)       /**< Shifted mode vcm_575mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_600mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_600mV << 0)       /**< Shifted mode vcm_600mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_vcm_625mV                          (_RAC_IFADCTRIM1_IFADCVCMLVL_vcm_625mV << 0)       /**< Shifted mode vcm_625mV for RAC_IFADCTRIM1   */
#define RAC_IFADCTRIM1_IFADCVCMLVL_cm_650mV                           (_RAC_IFADCTRIM1_IFADCVCMLVL_cm_650mV << 0)        /**< Shifted mode cm_650mV for RAC_IFADCTRIM1    */
#define RAC_IFADCTRIM1_IFADCENNEGRES                                  (0x1UL << 3)                                       /**< IFADCENNEGRES                               */
#define _RAC_IFADCTRIM1_IFADCENNEGRES_SHIFT                           3                                                  /**< Shift value for RAC_IFADCENNEGRES           */
#define _RAC_IFADCTRIM1_IFADCENNEGRES_MASK                            0x8UL                                              /**< Bit mask for RAC_IFADCENNEGRES              */
#define _RAC_IFADCTRIM1_IFADCENNEGRES_DEFAULT                         0x00000000UL                                       /**< Mode DEFAULT for RAC_IFADCTRIM1             */
#define _RAC_IFADCTRIM1_IFADCENNEGRES_disable                         0x00000000UL                                       /**< Mode disable for RAC_IFADCTRIM1             */
#define _RAC_IFADCTRIM1_IFADCENNEGRES_enable                          0x00000001UL                                       /**< Mode enable for RAC_IFADCTRIM1              */
#define RAC_IFADCTRIM1_IFADCENNEGRES_DEFAULT                          (_RAC_IFADCTRIM1_IFADCENNEGRES_DEFAULT << 3)       /**< Shifted mode DEFAULT for RAC_IFADCTRIM1     */
#define RAC_IFADCTRIM1_IFADCENNEGRES_disable                          (_RAC_IFADCTRIM1_IFADCENNEGRES_disable << 3)       /**< Shifted mode disable for RAC_IFADCTRIM1     */
#define RAC_IFADCTRIM1_IFADCENNEGRES_enable                           (_RAC_IFADCTRIM1_IFADCENNEGRES_enable << 3)        /**< Shifted mode enable for RAC_IFADCTRIM1      */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_SHIFT                      4                                                  /**< Shift value for RAC_IFADCNEGRESCURRENT      */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_MASK                       0x70UL                                             /**< Bit mask for RAC_IFADCNEGRESCURRENT         */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_DEFAULT                    0x00000002UL                                       /**< Mode DEFAULT for RAC_IFADCTRIM1             */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i1p0u                      0x00000000UL                                       /**< Mode i1p0u for RAC_IFADCTRIM1               */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i1p5u                      0x00000001UL                                       /**< Mode i1p5u for RAC_IFADCTRIM1               */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p0u                      0x00000002UL                                       /**< Mode i2p0u for RAC_IFADCTRIM1               */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p5u                      0x00000003UL                                       /**< Mode i2p5u for RAC_IFADCTRIM1               */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p0u2                     0x00000004UL                                       /**< Mode i2p0u2 for RAC_IFADCTRIM1              */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p5u2                     0x00000005UL                                       /**< Mode i2p5u2 for RAC_IFADCTRIM1              */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i3p0u                      0x00000006UL                                       /**< Mode i3p0u for RAC_IFADCTRIM1               */
#define _RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i3p5u                      0x00000007UL                                       /**< Mode i3p5u for RAC_IFADCTRIM1               */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_DEFAULT                     (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_DEFAULT << 4)  /**< Shifted mode DEFAULT for RAC_IFADCTRIM1     */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i1p0u                       (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i1p0u << 4)    /**< Shifted mode i1p0u for RAC_IFADCTRIM1       */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i1p5u                       (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i1p5u << 4)    /**< Shifted mode i1p5u for RAC_IFADCTRIM1       */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p0u                       (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p0u << 4)    /**< Shifted mode i2p0u for RAC_IFADCTRIM1       */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p5u                       (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p5u << 4)    /**< Shifted mode i2p5u for RAC_IFADCTRIM1       */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p0u2                      (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p0u2 << 4)   /**< Shifted mode i2p0u2 for RAC_IFADCTRIM1      */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p5u2                      (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i2p5u2 << 4)   /**< Shifted mode i2p5u2 for RAC_IFADCTRIM1      */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i3p0u                       (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i3p0u << 4)    /**< Shifted mode i3p0u for RAC_IFADCTRIM1       */
#define RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i3p5u                       (_RAC_IFADCTRIM1_IFADCNEGRESCURRENT_i3p5u << 4)    /**< Shifted mode i3p5u for RAC_IFADCTRIM1       */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_SHIFT                          7                                                  /**< Shift value for RAC_IFADCNEGRESVCM          */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_MASK                           0x180UL                                            /**< Bit mask for RAC_IFADCNEGRESVCM             */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_DEFAULT                        0x00000002UL                                       /**< Mode DEFAULT for RAC_IFADCTRIM1             */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_r210k_x_1uA                    0x00000000UL                                       /**< Mode r210k_x_1uA for RAC_IFADCTRIM1         */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_r210k_x_1uA2                   0x00000001UL                                       /**< Mode r210k_x_1uA2 for RAC_IFADCTRIM1        */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_r100k_x_2uA                    0x00000002UL                                       /**< Mode r100k_x_2uA for RAC_IFADCTRIM1         */
#define _RAC_IFADCTRIM1_IFADCNEGRESVCM_r50k_x_3uA                     0x00000003UL                                       /**< Mode r50k_x_3uA for RAC_IFADCTRIM1          */
#define RAC_IFADCTRIM1_IFADCNEGRESVCM_DEFAULT                         (_RAC_IFADCTRIM1_IFADCNEGRESVCM_DEFAULT << 7)      /**< Shifted mode DEFAULT for RAC_IFADCTRIM1     */
#define RAC_IFADCTRIM1_IFADCNEGRESVCM_r210k_x_1uA                     (_RAC_IFADCTRIM1_IFADCNEGRESVCM_r210k_x_1uA << 7)  /**< Shifted mode r210k_x_1uA for RAC_IFADCTRIM1 */
#define RAC_IFADCTRIM1_IFADCNEGRESVCM_r210k_x_1uA2                    (_RAC_IFADCTRIM1_IFADCNEGRESVCM_r210k_x_1uA2 << 7) /**< Shifted mode r210k_x_1uA2 for RAC_IFADCTRIM1*/
#define RAC_IFADCTRIM1_IFADCNEGRESVCM_r100k_x_2uA                     (_RAC_IFADCTRIM1_IFADCNEGRESVCM_r100k_x_2uA << 7)  /**< Shifted mode r100k_x_2uA for RAC_IFADCTRIM1 */
#define RAC_IFADCTRIM1_IFADCNEGRESVCM_r50k_x_3uA                      (_RAC_IFADCTRIM1_IFADCNEGRESVCM_r50k_x_3uA << 7)   /**< Shifted mode r50k_x_3uA for RAC_IFADCTRIM1  */

/* Bit fields for RAC IFADCCAL */
#define _RAC_IFADCCAL_RESETVALUE                                      0x00000C00UL                                            /**< Default value for RAC_IFADCCAL              */
#define _RAC_IFADCCAL_MASK                                            0x00FF1F03UL                                            /**< Mask for RAC_IFADCCAL                       */
#define RAC_IFADCCAL_IFADCENRCCAL                                     (0x1UL << 0)                                            /**< IFADCENRCCAL                                */
#define _RAC_IFADCCAL_IFADCENRCCAL_SHIFT                              0                                                       /**< Shift value for RAC_IFADCENRCCAL            */
#define _RAC_IFADCCAL_IFADCENRCCAL_MASK                               0x1UL                                                   /**< Bit mask for RAC_IFADCENRCCAL               */
#define _RAC_IFADCCAL_IFADCENRCCAL_DEFAULT                            0x00000000UL                                            /**< Mode DEFAULT for RAC_IFADCCAL               */
#define _RAC_IFADCCAL_IFADCENRCCAL_rccal_disable                      0x00000000UL                                            /**< Mode rccal_disable for RAC_IFADCCAL         */
#define _RAC_IFADCCAL_IFADCENRCCAL_rccal_enable                       0x00000001UL                                            /**< Mode rccal_enable for RAC_IFADCCAL          */
#define RAC_IFADCCAL_IFADCENRCCAL_DEFAULT                             (_RAC_IFADCCAL_IFADCENRCCAL_DEFAULT << 0)               /**< Shifted mode DEFAULT for RAC_IFADCCAL       */
#define RAC_IFADCCAL_IFADCENRCCAL_rccal_disable                       (_RAC_IFADCCAL_IFADCENRCCAL_rccal_disable << 0)         /**< Shifted mode rccal_disable for RAC_IFADCCAL */
#define RAC_IFADCCAL_IFADCENRCCAL_rccal_enable                        (_RAC_IFADCCAL_IFADCENRCCAL_rccal_enable << 0)          /**< Shifted mode rccal_enable for RAC_IFADCCAL  */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE                               (0x1UL << 1)                                            /**< IFADCTUNERCCALMODE                          */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_SHIFT                        1                                                       /**< Shift value for RAC_IFADCTUNERCCALMODE      */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_MASK                         0x2UL                                                   /**< Bit mask for RAC_IFADCTUNERCCALMODE         */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_DEFAULT                      0x00000000UL                                            /**< Mode DEFAULT for RAC_IFADCCAL               */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_SYmode                       0x00000000UL                                            /**< Mode SYmode for RAC_IFADCCAL                */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_ADCmode                      0x00000001UL                                            /**< Mode ADCmode for RAC_IFADCCAL               */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE_DEFAULT                       (_RAC_IFADCCAL_IFADCTUNERCCALMODE_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_IFADCCAL       */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE_SYmode                        (_RAC_IFADCCAL_IFADCTUNERCCALMODE_SYmode << 1)          /**< Shifted mode SYmode for RAC_IFADCCAL        */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE_ADCmode                       (_RAC_IFADCCAL_IFADCTUNERCCALMODE_ADCmode << 1)         /**< Shifted mode ADCmode for RAC_IFADCCAL       */
#define _RAC_IFADCCAL_IFADCTUNERC_SHIFT                               8                                                       /**< Shift value for RAC_IFADCTUNERC             */
#define _RAC_IFADCCAL_IFADCTUNERC_MASK                                0x1F00UL                                                /**< Bit mask for RAC_IFADCTUNERC                */
#define _RAC_IFADCCAL_IFADCTUNERC_DEFAULT                             0x0000000CUL                                            /**< Mode DEFAULT for RAC_IFADCCAL               */
#define RAC_IFADCCAL_IFADCTUNERC_DEFAULT                              (_RAC_IFADCCAL_IFADCTUNERC_DEFAULT << 8)                /**< Shifted mode DEFAULT for RAC_IFADCCAL       */
#define _RAC_IFADCCAL_IFADCRCCALCOUNTERSTARTVAL_SHIFT                 16                                                      /**< Shift value for RAC_IFADCRCCALCOUNTERSTARTVAL*/
#define _RAC_IFADCCAL_IFADCRCCALCOUNTERSTARTVAL_MASK                  0xFF0000UL                                              /**< Bit mask for RAC_IFADCRCCALCOUNTERSTARTVAL  */
#define _RAC_IFADCCAL_IFADCRCCALCOUNTERSTARTVAL_DEFAULT               0x00000000UL                                            /**< Mode DEFAULT for RAC_IFADCCAL               */
#define RAC_IFADCCAL_IFADCRCCALCOUNTERSTARTVAL_DEFAULT                (_RAC_IFADCCAL_IFADCRCCALCOUNTERSTARTVAL_DEFAULT << 16) /**< Shifted mode DEFAULT for RAC_IFADCCAL       */

/* Bit fields for RAC IFADCSTATUS */
#define _RAC_IFADCSTATUS_RESETVALUE                                   0x00000000UL                                  /**< Default value for RAC_IFADCSTATUS           */
#define _RAC_IFADCSTATUS_MASK                                         0x00000001UL                                  /**< Mask for RAC_IFADCSTATUS                    */
#define RAC_IFADCSTATUS_IFADCRCCALOUT                                 (0x1UL << 0)                                  /**< IFADCRCCALOUT                               */
#define _RAC_IFADCSTATUS_IFADCRCCALOUT_SHIFT                          0                                             /**< Shift value for RAC_IFADCRCCALOUT           */
#define _RAC_IFADCSTATUS_IFADCRCCALOUT_MASK                           0x1UL                                         /**< Bit mask for RAC_IFADCRCCALOUT              */
#define _RAC_IFADCSTATUS_IFADCRCCALOUT_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for RAC_IFADCSTATUS            */
#define _RAC_IFADCSTATUS_IFADCRCCALOUT_lo                             0x00000000UL                                  /**< Mode lo for RAC_IFADCSTATUS                 */
#define _RAC_IFADCSTATUS_IFADCRCCALOUT_hi                             0x00000001UL                                  /**< Mode hi for RAC_IFADCSTATUS                 */
#define RAC_IFADCSTATUS_IFADCRCCALOUT_DEFAULT                         (_RAC_IFADCSTATUS_IFADCRCCALOUT_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_IFADCSTATUS    */
#define RAC_IFADCSTATUS_IFADCRCCALOUT_lo                              (_RAC_IFADCSTATUS_IFADCRCCALOUT_lo << 0)      /**< Shifted mode lo for RAC_IFADCSTATUS         */
#define RAC_IFADCSTATUS_IFADCRCCALOUT_hi                              (_RAC_IFADCSTATUS_IFADCRCCALOUT_hi << 0)      /**< Shifted mode hi for RAC_IFADCSTATUS         */

/* Bit fields for RAC LNAMIXTRIM0 */
#define _RAC_LNAMIXTRIM0_RESETVALUE                                   0x1108233DUL                                        /**< Default value for RAC_LNAMIXTRIM0           */
#define _RAC_LNAMIXTRIM0_MASK                                         0x1FFFFFFFUL                                        /**< Mask for RAC_LNAMIXTRIM0                    */
#define _RAC_LNAMIXTRIM0_LNAMIXCURCTRL_SHIFT                          0                                                   /**< Shift value for RAC_LNAMIXCURCTRL           */
#define _RAC_LNAMIXTRIM0_LNAMIXCURCTRL_MASK                           0x3FUL                                              /**< Bit mask for RAC_LNAMIXCURCTRL              */
#define _RAC_LNAMIXTRIM0_LNAMIXCURCTRL_DEFAULT                        0x0000003DUL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXCURCTRL_DEFAULT                         (_RAC_LNAMIXTRIM0_LNAMIXCURCTRL_DEFAULT << 0)       /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_SHIFT                          6                                                   /**< Shift value for RAC_LNAMIXHIGHCUR           */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_MASK                           0xC0UL                                              /**< Bit mask for RAC_LNAMIXHIGHCUR              */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_DEFAULT                        0x00000000UL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_470uA                  0x00000000UL                                        /**< Mode current_470uA for RAC_LNAMIXTRIM0      */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_530uA                  0x00000001UL                                        /**< Mode current_530uA for RAC_LNAMIXTRIM0      */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_unused                         0x00000002UL                                        /**< Mode unused for RAC_LNAMIXTRIM0             */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_590uA                  0x00000003UL                                        /**< Mode current_590uA for RAC_LNAMIXTRIM0      */
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_DEFAULT                         (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_DEFAULT << 6)       /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_470uA                   (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_470uA << 6) /**< Shifted mode current_470uA for RAC_LNAMIXTRIM0*/
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_530uA                   (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_530uA << 6) /**< Shifted mode current_530uA for RAC_LNAMIXTRIM0*/
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_unused                          (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_unused << 6)        /**< Shifted mode unused for RAC_LNAMIXTRIM0     */
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_590uA                   (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_590uA << 6) /**< Shifted mode current_590uA for RAC_LNAMIXTRIM0*/
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_SHIFT                           8                                                   /**< Shift value for RAC_LNAMIXLOWCUR            */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_MASK                            0xF00UL                                             /**< Bit mask for RAC_LNAMIXLOWCUR               */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_DEFAULT                         0x00000003UL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXLOWCUR_DEFAULT                          (_RAC_LNAMIXTRIM0_LNAMIXLOWCUR_DEFAULT << 8)        /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_SHIFT                       12                                                  /**< Shift value for RAC_LNAMIXRFPKDBWSEL        */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_MASK                        0x3000UL                                            /**< Bit mask for RAC_LNAMIXRFPKDBWSEL           */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_DEFAULT                     0x00000002UL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_DEFAULT                      (_RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_DEFAULT << 12)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_SHIFT                       14                                                  /**< Shift value for RAC_LNAMIXRFPKDCALCM        */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_MASK                        0xFC000UL                                           /**< Bit mask for RAC_LNAMIXRFPKDCALCM           */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_DEFAULT                     0x00000020UL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_DEFAULT                      (_RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_DEFAULT << 14)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_SHIFT                       20                                                  /**< Shift value for RAC_LNAMIXRFPKDCALDM        */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_MASK                        0x1F00000UL                                         /**< Bit mask for RAC_LNAMIXRFPKDCALDM           */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_DEFAULT                     0x00000010UL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_DEFAULT                      (_RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_DEFAULT << 20)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_SHIFT                         25                                                  /**< Shift value for RAC_LNAMIXTRIMVREG          */
#define _RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_MASK                          0x1E000000UL                                        /**< Bit mask for RAC_LNAMIXTRIMVREG             */
#define _RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_DEFAULT                       0x00000008UL                                        /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_DEFAULT                        (_RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_DEFAULT << 25)     /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */

/* Bit fields for RAC LNAMIXTRIM1 */
#define _RAC_LNAMIXTRIM1_RESETVALUE                                   0x00045408UL                                     /**< Default value for RAC_LNAMIXTRIM1           */
#define _RAC_LNAMIXTRIM1_MASK                                         0x0007FFFFUL                                     /**< Mask for RAC_LNAMIXTRIM1                    */
#define _RAC_LNAMIXTRIM1_LNAMIXIBIASADJ_SHIFT                         0                                                /**< Shift value for RAC_LNAMIXIBIASADJ          */
#define _RAC_LNAMIXTRIM1_LNAMIXIBIASADJ_MASK                          0x3FUL                                           /**< Bit mask for RAC_LNAMIXIBIASADJ             */
#define _RAC_LNAMIXTRIM1_LNAMIXIBIASADJ_DEFAULT                       0x00000008UL                                     /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define RAC_LNAMIXTRIM1_LNAMIXIBIASADJ_DEFAULT                        (_RAC_LNAMIXTRIM1_LNAMIXIBIASADJ_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define _RAC_LNAMIXTRIM1_LNAMIXLNACAPSEL_SHIFT                        6                                                /**< Shift value for RAC_LNAMIXLNACAPSEL         */
#define _RAC_LNAMIXTRIM1_LNAMIXLNACAPSEL_MASK                         0x1C0UL                                          /**< Bit mask for RAC_LNAMIXLNACAPSEL            */
#define _RAC_LNAMIXTRIM1_LNAMIXLNACAPSEL_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define RAC_LNAMIXTRIM1_LNAMIXLNACAPSEL_DEFAULT                       (_RAC_LNAMIXTRIM1_LNAMIXLNACAPSEL_DEFAULT << 6)  /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_SHIFT                          9                                                /**< Shift value for RAC_LNAMIXMXRBIAS           */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_MASK                           0x600UL                                          /**< Bit mask for RAC_LNAMIXMXRBIAS              */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_DEFAULT                        0x00000002UL                                     /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_1V                        0x00000000UL                                     /**< Mode bias_1V for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_unused                         0x00000001UL                                     /**< Mode unused for RAC_LNAMIXTRIM1             */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_900m                      0x00000002UL                                     /**< Mode bias_900m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_800m                      0x00000003UL                                     /**< Mode bias_800m for RAC_LNAMIXTRIM1          */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_DEFAULT                         (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_DEFAULT << 9)    /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_1V                         (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_1V << 9)    /**< Shifted mode bias_1V for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_unused                          (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_unused << 9)     /**< Shifted mode unused for RAC_LNAMIXTRIM1     */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_900m                       (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_900m << 9)  /**< Shifted mode bias_900m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_800m                       (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS_bias_800m << 9)  /**< Shifted mode bias_800m for RAC_LNAMIXTRIM1  */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_SHIFT                          11                                               /**< Shift value for RAC_LNAMIXNCASADJ           */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_MASK                           0x1800UL                                         /**< Bit mask for RAC_LNAMIXNCASADJ              */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_DEFAULT                        0x00000002UL                                     /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_1V                        0x00000000UL                                     /**< Mode ncas_1V for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_unused                         0x00000001UL                                     /**< Mode unused for RAC_LNAMIXTRIM1             */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_950m                      0x00000002UL                                     /**< Mode ncas_950m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_900m                      0x00000003UL                                     /**< Mode ncas_900m for RAC_LNAMIXTRIM1          */
#define RAC_LNAMIXTRIM1_LNAMIXNCASADJ_DEFAULT                         (_RAC_LNAMIXTRIM1_LNAMIXNCASADJ_DEFAULT << 11)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_1V                         (_RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_1V << 11)   /**< Shifted mode ncas_1V for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXNCASADJ_unused                          (_RAC_LNAMIXTRIM1_LNAMIXNCASADJ_unused << 11)    /**< Shifted mode unused for RAC_LNAMIXTRIM1     */
#define RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_950m                       (_RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_950m << 11) /**< Shifted mode ncas_950m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_900m                       (_RAC_LNAMIXTRIM1_LNAMIXNCASADJ_ncas_900m << 11) /**< Shifted mode ncas_900m for RAC_LNAMIXTRIM1  */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_SHIFT                          13                                               /**< Shift value for RAC_LNAMIXPCASADJ           */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_MASK                           0x6000UL                                         /**< Bit mask for RAC_LNAMIXPCASADJ              */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_DEFAULT                        0x00000002UL                                     /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_250m                      0x00000000UL                                     /**< Mode pcas_250m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_unused                         0x00000001UL                                     /**< Mode unused for RAC_LNAMIXTRIM1             */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_300m                      0x00000002UL                                     /**< Mode pcas_300m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_350m                      0x00000003UL                                     /**< Mode pcas_350m for RAC_LNAMIXTRIM1          */
#define RAC_LNAMIXTRIM1_LNAMIXPCASADJ_DEFAULT                         (_RAC_LNAMIXTRIM1_LNAMIXPCASADJ_DEFAULT << 13)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_250m                       (_RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_250m << 13) /**< Shifted mode pcas_250m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXPCASADJ_unused                          (_RAC_LNAMIXTRIM1_LNAMIXPCASADJ_unused << 13)    /**< Shifted mode unused for RAC_LNAMIXTRIM1     */
#define RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_300m                       (_RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_300m << 13) /**< Shifted mode pcas_300m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_350m                       (_RAC_LNAMIXTRIM1_LNAMIXPCASADJ_pcas_350m << 13) /**< Shifted mode pcas_350m for RAC_LNAMIXTRIM1  */
#define _RAC_LNAMIXTRIM1_LNAMIXVOUTADJ_SHIFT                          15                                               /**< Shift value for RAC_LNAMIXVOUTADJ           */
#define _RAC_LNAMIXTRIM1_LNAMIXVOUTADJ_MASK                           0x78000UL                                        /**< Bit mask for RAC_LNAMIXVOUTADJ              */
#define _RAC_LNAMIXTRIM1_LNAMIXVOUTADJ_DEFAULT                        0x00000008UL                                     /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define RAC_LNAMIXTRIM1_LNAMIXVOUTADJ_DEFAULT                         (_RAC_LNAMIXTRIM1_LNAMIXVOUTADJ_DEFAULT << 15)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */

/* Bit fields for RAC LNAMIXCAL */
#define _RAC_LNAMIXCAL_RESETVALUE                                     0x00000070UL                                      /**< Default value for RAC_LNAMIXCAL             */
#define _RAC_LNAMIXCAL_MASK                                           0x00000077UL                                      /**< Mask for RAC_LNAMIXCAL                      */
#define RAC_LNAMIXCAL_LNAMIXCALEN                                     (0x1UL << 0)                                      /**< LNAMIXCALEN                                 */
#define _RAC_LNAMIXCAL_LNAMIXCALEN_SHIFT                              0                                                 /**< Shift value for RAC_LNAMIXCALEN             */
#define _RAC_LNAMIXCAL_LNAMIXCALEN_MASK                               0x1UL                                             /**< Bit mask for RAC_LNAMIXCALEN                */
#define _RAC_LNAMIXCAL_LNAMIXCALEN_DEFAULT                            0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXCALEN_cal_disable                        0x00000000UL                                      /**< Mode cal_disable for RAC_LNAMIXCAL          */
#define _RAC_LNAMIXCAL_LNAMIXCALEN_cal_enable                         0x00000001UL                                      /**< Mode cal_enable for RAC_LNAMIXCAL           */
#define RAC_LNAMIXCAL_LNAMIXCALEN_DEFAULT                             (_RAC_LNAMIXCAL_LNAMIXCALEN_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXCALEN_cal_disable                         (_RAC_LNAMIXCAL_LNAMIXCALEN_cal_disable << 0)     /**< Shifted mode cal_disable for RAC_LNAMIXCAL  */
#define RAC_LNAMIXCAL_LNAMIXCALEN_cal_enable                          (_RAC_LNAMIXCAL_LNAMIXCALEN_cal_enable << 0)      /**< Shifted mode cal_enable for RAC_LNAMIXCAL   */
#define RAC_LNAMIXCAL_LNAMIXCALVMODE                                  (0x1UL << 1)                                      /**< LNAMIXCALVMODE                              */
#define _RAC_LNAMIXCAL_LNAMIXCALVMODE_SHIFT                           1                                                 /**< Shift value for RAC_LNAMIXCALVMODE          */
#define _RAC_LNAMIXCAL_LNAMIXCALVMODE_MASK                            0x2UL                                             /**< Bit mask for RAC_LNAMIXCALVMODE             */
#define _RAC_LNAMIXCAL_LNAMIXCALVMODE_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXCALVMODE_current_mode                    0x00000000UL                                      /**< Mode current_mode for RAC_LNAMIXCAL         */
#define _RAC_LNAMIXCAL_LNAMIXCALVMODE_voltage_mode                    0x00000001UL                                      /**< Mode voltage_mode for RAC_LNAMIXCAL         */
#define RAC_LNAMIXCAL_LNAMIXCALVMODE_DEFAULT                          (_RAC_LNAMIXCAL_LNAMIXCALVMODE_DEFAULT << 1)      /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXCALVMODE_current_mode                     (_RAC_LNAMIXCAL_LNAMIXCALVMODE_current_mode << 1) /**< Shifted mode current_mode for RAC_LNAMIXCAL */
#define RAC_LNAMIXCAL_LNAMIXCALVMODE_voltage_mode                     (_RAC_LNAMIXCAL_LNAMIXCALVMODE_voltage_mode << 1) /**< Shifted mode voltage_mode for RAC_LNAMIXCAL */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL                                   (0x1UL << 2)                                      /**< LNAMIXENIRCAL                               */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL_SHIFT                            2                                                 /**< Shift value for RAC_LNAMIXENIRCAL           */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL_MASK                             0x4UL                                             /**< Bit mask for RAC_LNAMIXENIRCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL_DEFAULT                          0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL_disable                          0x00000000UL                                      /**< Mode disable for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL_enable                           0x00000001UL                                      /**< Mode enable for RAC_LNAMIXCAL               */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL_DEFAULT                           (_RAC_LNAMIXCAL_LNAMIXENIRCAL_DEFAULT << 2)       /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL_disable                           (_RAC_LNAMIXCAL_LNAMIXENIRCAL_disable << 2)       /**< Shifted mode disable for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL_enable                            (_RAC_LNAMIXCAL_LNAMIXENIRCAL_enable << 2)        /**< Shifted mode enable for RAC_LNAMIXCAL       */
#define _RAC_LNAMIXCAL_LNAMIXIRCALAMP_SHIFT                           4                                                 /**< Shift value for RAC_LNAMIXIRCALAMP          */
#define _RAC_LNAMIXCAL_LNAMIXIRCALAMP_MASK                            0x70UL                                            /**< Bit mask for RAC_LNAMIXIRCALAMP             */
#define _RAC_LNAMIXCAL_LNAMIXIRCALAMP_DEFAULT                         0x00000007UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define RAC_LNAMIXCAL_LNAMIXIRCALAMP_DEFAULT                          (_RAC_LNAMIXCAL_LNAMIXIRCALAMP_DEFAULT << 4)      /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */

/* Bit fields for RAC LNAMIXEN */
#define _RAC_LNAMIXEN_RESETVALUE                                      0x00000000UL                             /**< Default value for RAC_LNAMIXEN              */
#define _RAC_LNAMIXEN_MASK                                            0x00000001UL                             /**< Mask for RAC_LNAMIXEN                       */
#define RAC_LNAMIXEN_LNAMIXENLDO                                      (0x1UL << 0)                             /**< LNAMIXENLDO                                 */
#define _RAC_LNAMIXEN_LNAMIXENLDO_SHIFT                               0                                        /**< Shift value for RAC_LNAMIXENLDO             */
#define _RAC_LNAMIXEN_LNAMIXENLDO_MASK                                0x1UL                                    /**< Bit mask for RAC_LNAMIXENLDO                */
#define _RAC_LNAMIXEN_LNAMIXENLDO_DEFAULT                             0x00000000UL                             /**< Mode DEFAULT for RAC_LNAMIXEN               */
#define _RAC_LNAMIXEN_LNAMIXENLDO_disable                             0x00000000UL                             /**< Mode disable for RAC_LNAMIXEN               */
#define _RAC_LNAMIXEN_LNAMIXENLDO_enable                              0x00000001UL                             /**< Mode enable for RAC_LNAMIXEN                */
#define RAC_LNAMIXEN_LNAMIXENLDO_DEFAULT                              (_RAC_LNAMIXEN_LNAMIXENLDO_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_LNAMIXEN       */
#define RAC_LNAMIXEN_LNAMIXENLDO_disable                              (_RAC_LNAMIXEN_LNAMIXENLDO_disable << 0) /**< Shifted mode disable for RAC_LNAMIXEN       */
#define RAC_LNAMIXEN_LNAMIXENLDO_enable                               (_RAC_LNAMIXEN_LNAMIXENLDO_enable << 0)  /**< Shifted mode enable for RAC_LNAMIXEN        */

/* Bit fields for RAC PRECTRL */
#define _RAC_PRECTRL_RESETVALUE                                       0x00000026UL                               /**< Default value for RAC_PRECTRL               */
#define _RAC_PRECTRL_MASK                                             0x0000003FUL                               /**< Mask for RAC_PRECTRL                        */
#define RAC_PRECTRL_PREBYPFORCE                                       (0x1UL << 0)                               /**< PREBYPFORCE                                 */
#define _RAC_PRECTRL_PREBYPFORCE_SHIFT                                0                                          /**< Shift value for RAC_PREBYPFORCE             */
#define _RAC_PRECTRL_PREBYPFORCE_MASK                                 0x1UL                                      /**< Bit mask for RAC_PREBYPFORCE                */
#define _RAC_PRECTRL_PREBYPFORCE_DEFAULT                              0x00000000UL                               /**< Mode DEFAULT for RAC_PRECTRL                */
#define _RAC_PRECTRL_PREBYPFORCE_not_forced                           0x00000000UL                               /**< Mode not_forced for RAC_PRECTRL             */
#define _RAC_PRECTRL_PREBYPFORCE_forced                               0x00000001UL                               /**< Mode forced for RAC_PRECTRL                 */
#define RAC_PRECTRL_PREBYPFORCE_DEFAULT                               (_RAC_PRECTRL_PREBYPFORCE_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_PRECTRL        */
#define RAC_PRECTRL_PREBYPFORCE_not_forced                            (_RAC_PRECTRL_PREBYPFORCE_not_forced << 0) /**< Shifted mode not_forced for RAC_PRECTRL     */
#define RAC_PRECTRL_PREBYPFORCE_forced                                (_RAC_PRECTRL_PREBYPFORCE_forced << 0)     /**< Shifted mode forced for RAC_PRECTRL         */
#define _RAC_PRECTRL_PREREGTRIM_SHIFT                                 1                                          /**< Shift value for RAC_PREREGTRIM              */
#define _RAC_PRECTRL_PREREGTRIM_MASK                                  0xEUL                                      /**< Bit mask for RAC_PREREGTRIM                 */
#define _RAC_PRECTRL_PREREGTRIM_DEFAULT                               0x00000003UL                               /**< Mode DEFAULT for RAC_PRECTRL                */
#define _RAC_PRECTRL_PREREGTRIM_v1p61                                 0x00000000UL                               /**< Mode v1p61 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v1p68                                 0x00000001UL                               /**< Mode v1p68 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v1p74                                 0x00000002UL                               /**< Mode v1p74 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v1p80                                 0x00000003UL                               /**< Mode v1p80 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v1p86                                 0x00000004UL                               /**< Mode v1p86 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v1p91                                 0x00000005UL                               /**< Mode v1p91 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v1p96                                 0x00000006UL                               /**< Mode v1p96 for RAC_PRECTRL                  */
#define _RAC_PRECTRL_PREREGTRIM_v2p00                                 0x00000007UL                               /**< Mode v2p00 for RAC_PRECTRL                  */
#define RAC_PRECTRL_PREREGTRIM_DEFAULT                                (_RAC_PRECTRL_PREREGTRIM_DEFAULT << 1)     /**< Shifted mode DEFAULT for RAC_PRECTRL        */
#define RAC_PRECTRL_PREREGTRIM_v1p61                                  (_RAC_PRECTRL_PREREGTRIM_v1p61 << 1)       /**< Shifted mode v1p61 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v1p68                                  (_RAC_PRECTRL_PREREGTRIM_v1p68 << 1)       /**< Shifted mode v1p68 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v1p74                                  (_RAC_PRECTRL_PREREGTRIM_v1p74 << 1)       /**< Shifted mode v1p74 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v1p80                                  (_RAC_PRECTRL_PREREGTRIM_v1p80 << 1)       /**< Shifted mode v1p80 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v1p86                                  (_RAC_PRECTRL_PREREGTRIM_v1p86 << 1)       /**< Shifted mode v1p86 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v1p91                                  (_RAC_PRECTRL_PREREGTRIM_v1p91 << 1)       /**< Shifted mode v1p91 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v1p96                                  (_RAC_PRECTRL_PREREGTRIM_v1p96 << 1)       /**< Shifted mode v1p96 for RAC_PRECTRL          */
#define RAC_PRECTRL_PREREGTRIM_v2p00                                  (_RAC_PRECTRL_PREREGTRIM_v2p00 << 1)       /**< Shifted mode v2p00 for RAC_PRECTRL          */
#define _RAC_PRECTRL_PREVREFTRIM_SHIFT                                4                                          /**< Shift value for RAC_PREVREFTRIM             */
#define _RAC_PRECTRL_PREVREFTRIM_MASK                                 0x30UL                                     /**< Bit mask for RAC_PREVREFTRIM                */
#define _RAC_PRECTRL_PREVREFTRIM_DEFAULT                              0x00000002UL                               /**< Mode DEFAULT for RAC_PRECTRL                */
#define _RAC_PRECTRL_PREVREFTRIM_v0p675                               0x00000000UL                               /**< Mode v0p675 for RAC_PRECTRL                 */
#define _RAC_PRECTRL_PREVREFTRIM_v0p688                               0x00000001UL                               /**< Mode v0p688 for RAC_PRECTRL                 */
#define _RAC_PRECTRL_PREVREFTRIM_v0p700                               0x00000002UL                               /**< Mode v0p700 for RAC_PRECTRL                 */
#define _RAC_PRECTRL_PREVREFTRIM_v0p713                               0x00000003UL                               /**< Mode v0p713 for RAC_PRECTRL                 */
#define RAC_PRECTRL_PREVREFTRIM_DEFAULT                               (_RAC_PRECTRL_PREVREFTRIM_DEFAULT << 4)    /**< Shifted mode DEFAULT for RAC_PRECTRL        */
#define RAC_PRECTRL_PREVREFTRIM_v0p675                                (_RAC_PRECTRL_PREVREFTRIM_v0p675 << 4)     /**< Shifted mode v0p675 for RAC_PRECTRL         */
#define RAC_PRECTRL_PREVREFTRIM_v0p688                                (_RAC_PRECTRL_PREVREFTRIM_v0p688 << 4)     /**< Shifted mode v0p688 for RAC_PRECTRL         */
#define RAC_PRECTRL_PREVREFTRIM_v0p700                                (_RAC_PRECTRL_PREVREFTRIM_v0p700 << 4)     /**< Shifted mode v0p700 for RAC_PRECTRL         */
#define RAC_PRECTRL_PREVREFTRIM_v0p713                                (_RAC_PRECTRL_PREVREFTRIM_v0p713 << 4)     /**< Shifted mode v0p713 for RAC_PRECTRL         */

/* Bit fields for RAC PATRIM0 */
#define _RAC_PATRIM0_RESETVALUE                                       0x00000077UL                                   /**< Default value for RAC_PATRIM0               */
#define _RAC_PATRIM0_MASK                                             0x00003FFFUL                                   /**< Mask for RAC_PATRIM0                        */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_SHIFT                            0                                              /**< Shift value for RAC_TX0DBMTRIMBIASN         */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_MASK                             0xFUL                                          /**< Bit mask for RAC_TX0DBMTRIMBIASN            */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_DEFAULT                          0x00000007UL                                   /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_378m                           0x00000000UL                                   /**< Mode v_378m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_392m                           0x00000001UL                                   /**< Mode v_392m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_405m                           0x00000002UL                                   /**< Mode v_405m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_418p5m                         0x00000003UL                                   /**< Mode v_418p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_431m                           0x00000004UL                                   /**< Mode v_431m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_444m                           0x00000005UL                                   /**< Mode v_444m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_457m                           0x00000006UL                                   /**< Mode v_457m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_470m                           0x00000007UL                                   /**< Mode v_470m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_483m                           0x00000008UL                                   /**< Mode v_483m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_496m                           0x00000009UL                                   /**< Mode v_496m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_509m                           0x0000000AUL                                   /**< Mode v_509m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_522m                           0x0000000BUL                                   /**< Mode v_522m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_535m                           0x0000000CUL                                   /**< Mode v_535m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_548m                           0x0000000DUL                                   /**< Mode v_548m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_561m                           0x0000000EUL                                   /**< Mode v_561m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASN_v_574m                           0x0000000FUL                                   /**< Mode v_574m for RAC_PATRIM0                 */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_DEFAULT                           (_RAC_PATRIM0_TX0DBMTRIMBIASN_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_378m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_378m << 0)     /**< Shifted mode v_378m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_392m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_392m << 0)     /**< Shifted mode v_392m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_405m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_405m << 0)     /**< Shifted mode v_405m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_418p5m                          (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_418p5m << 0)   /**< Shifted mode v_418p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_431m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_431m << 0)     /**< Shifted mode v_431m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_444m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_444m << 0)     /**< Shifted mode v_444m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_457m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_457m << 0)     /**< Shifted mode v_457m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_470m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_470m << 0)     /**< Shifted mode v_470m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_483m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_483m << 0)     /**< Shifted mode v_483m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_496m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_496m << 0)     /**< Shifted mode v_496m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_509m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_509m << 0)     /**< Shifted mode v_509m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_522m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_522m << 0)     /**< Shifted mode v_522m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_535m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_535m << 0)     /**< Shifted mode v_535m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_548m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_548m << 0)     /**< Shifted mode v_548m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_561m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_561m << 0)     /**< Shifted mode v_561m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASN_v_574m                            (_RAC_PATRIM0_TX0DBMTRIMBIASN_v_574m << 0)     /**< Shifted mode v_574m for RAC_PATRIM0         */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_SHIFT                            4                                              /**< Shift value for RAC_TX0DBMTRIMBIASP         */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_MASK                             0xF0UL                                         /**< Bit mask for RAC_TX0DBMTRIMBIASP            */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_DEFAULT                          0x00000007UL                                   /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_378m                           0x00000000UL                                   /**< Mode v_378m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_392m                           0x00000001UL                                   /**< Mode v_392m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_405m                           0x00000002UL                                   /**< Mode v_405m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_418p5m                         0x00000003UL                                   /**< Mode v_418p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_431m                           0x00000004UL                                   /**< Mode v_431m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_444m                           0x00000005UL                                   /**< Mode v_444m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_457m                           0x00000006UL                                   /**< Mode v_457m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_470m                           0x00000007UL                                   /**< Mode v_470m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_483m                           0x00000008UL                                   /**< Mode v_483m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_496m                           0x00000009UL                                   /**< Mode v_496m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_509m                           0x0000000AUL                                   /**< Mode v_509m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_522m                           0x0000000BUL                                   /**< Mode v_522m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_535m                           0x0000000CUL                                   /**< Mode v_535m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_548m                           0x0000000DUL                                   /**< Mode v_548m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_561m                           0x0000000EUL                                   /**< Mode v_561m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_TX0DBMTRIMBIASP_v_574m                           0x0000000FUL                                   /**< Mode v_574m for RAC_PATRIM0                 */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_DEFAULT                           (_RAC_PATRIM0_TX0DBMTRIMBIASP_DEFAULT << 4)    /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_378m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_378m << 4)     /**< Shifted mode v_378m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_392m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_392m << 4)     /**< Shifted mode v_392m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_405m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_405m << 4)     /**< Shifted mode v_405m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_418p5m                          (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_418p5m << 4)   /**< Shifted mode v_418p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_431m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_431m << 4)     /**< Shifted mode v_431m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_444m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_444m << 4)     /**< Shifted mode v_444m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_457m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_457m << 4)     /**< Shifted mode v_457m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_470m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_470m << 4)     /**< Shifted mode v_470m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_483m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_483m << 4)     /**< Shifted mode v_483m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_496m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_496m << 4)     /**< Shifted mode v_496m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_509m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_509m << 4)     /**< Shifted mode v_509m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_522m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_522m << 4)     /**< Shifted mode v_522m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_535m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_535m << 4)     /**< Shifted mode v_535m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_548m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_548m << 4)     /**< Shifted mode v_548m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_561m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_561m << 4)     /**< Shifted mode v_561m for RAC_PATRIM0         */
#define RAC_PATRIM0_TX0DBMTRIMBIASP_v_574m                            (_RAC_PATRIM0_TX0DBMTRIMBIASP_v_574m << 4)     /**< Shifted mode v_574m for RAC_PATRIM0         */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_SHIFT                          8                                              /**< Shift value for RAC_TX0DBMTRIMDUTYCYN       */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_MASK                           0x700UL                                        /**< Bit mask for RAC_TX0DBMTRIMDUTYCYN          */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_0pct                        0x00000000UL                                   /**< Mode up_0pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_1pct                        0x00000001UL                                   /**< Mode up_1pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_2pct                        0x00000002UL                                   /**< Mode up_2pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_3pct                        0x00000003UL                                   /**< Mode up_3pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_4pct                        0x00000004UL                                   /**< Mode up_4pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_5pct                        0x00000005UL                                   /**< Mode up_5pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_6pct                        0x00000006UL                                   /**< Mode up_6pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYN_na                             0x00000007UL                                   /**< Mode na for RAC_PATRIM0                     */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_DEFAULT                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_DEFAULT << 8)  /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_0pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_0pct << 8)  /**< Shifted mode up_0pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_1pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_1pct << 8)  /**< Shifted mode up_1pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_2pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_2pct << 8)  /**< Shifted mode up_2pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_3pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_3pct << 8)  /**< Shifted mode up_3pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_4pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_4pct << 8)  /**< Shifted mode up_4pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_5pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_5pct << 8)  /**< Shifted mode up_5pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_6pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_up_6pct << 8)  /**< Shifted mode up_6pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYN_na                              (_RAC_PATRIM0_TX0DBMTRIMDUTYCYN_na << 8)       /**< Shifted mode na for RAC_PATRIM0             */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_SHIFT                          11                                             /**< Shift value for RAC_TX0DBMTRIMDUTYCYP       */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_MASK                           0x3800UL                                       /**< Bit mask for RAC_TX0DBMTRIMDUTYCYP          */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_0pct                        0x00000000UL                                   /**< Mode dn_0pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_1pct                        0x00000001UL                                   /**< Mode dn_1pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_2pct                        0x00000002UL                                   /**< Mode dn_2pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_3pct                        0x00000003UL                                   /**< Mode dn_3pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_4pct                        0x00000004UL                                   /**< Mode dn_4pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_5pct                        0x00000005UL                                   /**< Mode dn_5pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_6pct                        0x00000006UL                                   /**< Mode dn_6pct for RAC_PATRIM0                */
#define _RAC_PATRIM0_TX0DBMTRIMDUTYCYP_na                             0x00000007UL                                   /**< Mode na for RAC_PATRIM0                     */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_DEFAULT                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_DEFAULT << 11) /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_0pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_0pct << 11) /**< Shifted mode dn_0pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_1pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_1pct << 11) /**< Shifted mode dn_1pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_2pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_2pct << 11) /**< Shifted mode dn_2pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_3pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_3pct << 11) /**< Shifted mode dn_3pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_4pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_4pct << 11) /**< Shifted mode dn_4pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_5pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_5pct << 11) /**< Shifted mode dn_5pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_6pct                         (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_dn_6pct << 11) /**< Shifted mode dn_6pct for RAC_PATRIM0        */
#define RAC_PATRIM0_TX0DBMTRIMDUTYCYP_na                              (_RAC_PATRIM0_TX0DBMTRIMDUTYCYP_na << 11)      /**< Shifted mode na for RAC_PATRIM0             */

/* Bit fields for RAC PATRIM1 */
#define _RAC_PATRIM1_RESETVALUE                                       0x0003AB97UL                                             /**< Default value for RAC_PATRIM1               */
#define _RAC_PATRIM1_MASK                                             0x0007FFFFUL                                             /**< Mask for RAC_PATRIM1                        */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_SHIFT                  0                                                        /**< Shift value for RAC_TX0DBMTRIMPREDRVREGIBCORE*/
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_MASK                   0x3UL                                                    /**< Bit mask for RAC_TX0DBMTRIMPREDRVREGIBCORE  */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_DEFAULT                0x00000003UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_4u                   0x00000000UL                                             /**< Mode i_4u for RAC_PATRIM1                   */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_5u                   0x00000001UL                                             /**< Mode i_5u for RAC_PATRIM1                   */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_6u                   0x00000002UL                                             /**< Mode i_6u for RAC_PATRIM1                   */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_7u                   0x00000003UL                                             /**< Mode i_7u for RAC_PATRIM1                   */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_DEFAULT                 (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_4u                    (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_4u << 0)       /**< Shifted mode i_4u for RAC_PATRIM1           */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_5u                    (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_5u << 0)       /**< Shifted mode i_5u for RAC_PATRIM1           */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_6u                    (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_6u << 0)       /**< Shifted mode i_6u for RAC_PATRIM1           */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_7u                    (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBCORE_i_7u << 0)       /**< Shifted mode i_7u for RAC_PATRIM1           */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_SHIFT                  2                                                        /**< Shift value for RAC_TX0DBMTRIMPREDRVREGIBNDIO*/
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_MASK                   0x3CUL                                                   /**< Bit mask for RAC_TX0DBMTRIMPREDRVREGIBNDIO  */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_DEFAULT                0x00000005UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p127             0x00000000UL                                             /**< Mode vreg_1p127 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p171             0x00000001UL                                             /**< Mode vreg_1p171 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p209             0x00000002UL                                             /**< Mode vreg_1p209 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p244             0x00000003UL                                             /**< Mode vreg_1p244 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p275             0x00000004UL                                             /**< Mode vreg_1p275 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p305             0x00000005UL                                             /**< Mode vreg_1p305 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p335             0x00000006UL                                             /**< Mode vreg_1p335 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p363             0x00000007UL                                             /**< Mode vreg_1p363 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p388             0x00000008UL                                             /**< Mode vreg_1p388 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p414             0x00000009UL                                             /**< Mode vreg_1p414 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p439             0x0000000AUL                                             /**< Mode vreg_1p439 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p464             0x0000000BUL                                             /**< Mode vreg_1p464 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p486             0x0000000CUL                                             /**< Mode vreg_1p486 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p506             0x0000000DUL                                             /**< Mode vreg_1p506 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p525             0x0000000EUL                                             /**< Mode vreg_1p525 for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p545             0x0000000FUL                                             /**< Mode vreg_1p545 for RAC_PATRIM1             */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_DEFAULT                 (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_DEFAULT << 2)    /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p127              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p127 << 2) /**< Shifted mode vreg_1p127 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p171              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p171 << 2) /**< Shifted mode vreg_1p171 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p209              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p209 << 2) /**< Shifted mode vreg_1p209 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p244              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p244 << 2) /**< Shifted mode vreg_1p244 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p275              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p275 << 2) /**< Shifted mode vreg_1p275 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p305              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p305 << 2) /**< Shifted mode vreg_1p305 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p335              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p335 << 2) /**< Shifted mode vreg_1p335 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p363              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p363 << 2) /**< Shifted mode vreg_1p363 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p388              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p388 << 2) /**< Shifted mode vreg_1p388 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p414              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p414 << 2) /**< Shifted mode vreg_1p414 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p439              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p439 << 2) /**< Shifted mode vreg_1p439 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p464              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p464 << 2) /**< Shifted mode vreg_1p464 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p486              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p486 << 2) /**< Shifted mode vreg_1p486 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p506              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p506 << 2) /**< Shifted mode vreg_1p506 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p525              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p525 << 2) /**< Shifted mode vreg_1p525 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p545              (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGIBNDIO_vreg_1p545 << 2) /**< Shifted mode vreg_1p545 for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR                            (0x1UL << 6)                                             /**< TX0DBMTRIMPREDRVREGPSR                      */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_SHIFT                     6                                                        /**< Shift value for RAC_TX0DBMTRIMPREDRVREGPSR  */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_MASK                      0x40UL                                                   /**< Bit mask for RAC_TX0DBMTRIMPREDRVREGPSR     */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_DEFAULT                   0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_disable                   0x00000000UL                                             /**< Mode disable for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_enable                    0x00000001UL                                             /**< Mode enable for RAC_PATRIM1                 */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_DEFAULT                    (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_DEFAULT << 6)       /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_disable                    (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_disable << 6)       /**< Shifted mode disable for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_enable                     (_RAC_PATRIM1_TX0DBMTRIMPREDRVREGPSR_enable << 6)        /**< Shifted mode enable for RAC_PATRIM1         */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_SHIFT                      7                                                        /**< Shift value for RAC_TX0DBMTRIMPREDRVSLOPE   */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_MASK                       0x180UL                                                  /**< Bit mask for RAC_TX0DBMTRIMPREDRVSLOPE      */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_DEFAULT                    0x00000003UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_0                    0x00000000UL                                             /**< Mode slope_0 for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_1                    0x00000001UL                                             /**< Mode slope_1 for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_2                    0x00000002UL                                             /**< Mode slope_2 for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_max                  0x00000003UL                                             /**< Mode slope_max for RAC_PATRIM1              */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_DEFAULT                     (_RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_DEFAULT << 7)        /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_0                     (_RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_0 << 7)        /**< Shifted mode slope_0 for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_1                     (_RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_1 << 7)        /**< Shifted mode slope_1 for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_2                     (_RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_2 << 7)        /**< Shifted mode slope_2 for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_max                   (_RAC_PATRIM1_TX0DBMTRIMPREDRVSLOPE_slope_max << 7)      /**< Shifted mode slope_max for RAC_PATRIM1      */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_SHIFT                            9                                                        /**< Shift value for RAC_TX0DBMTRIMREGFB         */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_MASK                             0x1E00UL                                                 /**< Bit mask for RAC_TX0DBMTRIMREGFB            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_DEFAULT                          0x00000005UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p475                      0x00000000UL                                             /**< Mode vo_vi_0p475 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p500                      0x00000001UL                                             /**< Mode vo_vi_0p500 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p525                      0x00000002UL                                             /**< Mode vo_vi_0p525 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p550                      0x00000003UL                                             /**< Mode vo_vi_0p550 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p575                      0x00000004UL                                             /**< Mode vo_vi_0p575 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p600                      0x00000005UL                                             /**< Mode vo_vi_0p600 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p625                      0x00000006UL                                             /**< Mode vo_vi_0p625 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p650                      0x00000007UL                                             /**< Mode vo_vi_0p650 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p675                      0x00000008UL                                             /**< Mode vo_vi_0p675 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p700                      0x00000009UL                                             /**< Mode vo_vi_0p700 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p725                      0x0000000AUL                                             /**< Mode vo_vi_0p725 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p750                      0x0000000BUL                                             /**< Mode vo_vi_0p750 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p775                      0x0000000CUL                                             /**< Mode vo_vi_0p775 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p800                      0x0000000DUL                                             /**< Mode vo_vi_0p800 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p825                      0x0000000EUL                                             /**< Mode vo_vi_0p825 for RAC_PATRIM1            */
#define _RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p850                      0x0000000FUL                                             /**< Mode vo_vi_0p850 for RAC_PATRIM1            */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_DEFAULT                           (_RAC_PATRIM1_TX0DBMTRIMREGFB_DEFAULT << 9)              /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p475                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p475 << 9)          /**< Shifted mode vo_vi_0p475 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p500                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p500 << 9)          /**< Shifted mode vo_vi_0p500 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p525                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p525 << 9)          /**< Shifted mode vo_vi_0p525 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p550                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p550 << 9)          /**< Shifted mode vo_vi_0p550 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p575                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p575 << 9)          /**< Shifted mode vo_vi_0p575 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p600                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p600 << 9)          /**< Shifted mode vo_vi_0p600 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p625                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p625 << 9)          /**< Shifted mode vo_vi_0p625 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p650                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p650 << 9)          /**< Shifted mode vo_vi_0p650 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p675                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p675 << 9)          /**< Shifted mode vo_vi_0p675 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p700                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p700 << 9)          /**< Shifted mode vo_vi_0p700 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p725                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p725 << 9)          /**< Shifted mode vo_vi_0p725 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p750                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p750 << 9)          /**< Shifted mode vo_vi_0p750 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p775                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p775 << 9)          /**< Shifted mode vo_vi_0p775 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p800                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p800 << 9)          /**< Shifted mode vo_vi_0p800 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p825                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p825 << 9)          /**< Shifted mode vo_vi_0p825 for RAC_PATRIM1    */
#define RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p850                       (_RAC_PATRIM1_TX0DBMTRIMREGFB_vo_vi_0p850 << 9)          /**< Shifted mode vo_vi_0p850 for RAC_PATRIM1    */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_SHIFT                          13                                                       /**< Shift value for RAC_TX0DBMTRIMREGVREF       */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_MASK                           0xE000UL                                                 /**< Bit mask for RAC_TX0DBMTRIMREGVREF          */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_DEFAULT                        0x00000005UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_900m                         0x00000000UL                                             /**< Mode v_900m for RAC_PATRIM1                 */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_912p5m                       0x00000001UL                                             /**< Mode v_912p5m for RAC_PATRIM1               */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_925m                         0x00000002UL                                             /**< Mode v_925m for RAC_PATRIM1                 */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_937p5m                       0x00000003UL                                             /**< Mode v_937p5m for RAC_PATRIM1               */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_950m                         0x00000004UL                                             /**< Mode v_950m for RAC_PATRIM1                 */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_962p5m                       0x00000005UL                                             /**< Mode v_962p5m for RAC_PATRIM1               */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_975m                         0x00000006UL                                             /**< Mode v_975m for RAC_PATRIM1                 */
#define _RAC_PATRIM1_TX0DBMTRIMREGVREF_v_987p5m                       0x00000007UL                                             /**< Mode v_987p5m for RAC_PATRIM1               */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_DEFAULT                         (_RAC_PATRIM1_TX0DBMTRIMREGVREF_DEFAULT << 13)           /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_900m                          (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_900m << 13)            /**< Shifted mode v_900m for RAC_PATRIM1         */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_912p5m                        (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_912p5m << 13)          /**< Shifted mode v_912p5m for RAC_PATRIM1       */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_925m                          (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_925m << 13)            /**< Shifted mode v_925m for RAC_PATRIM1         */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_937p5m                        (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_937p5m << 13)          /**< Shifted mode v_937p5m for RAC_PATRIM1       */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_950m                          (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_950m << 13)            /**< Shifted mode v_950m for RAC_PATRIM1         */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_962p5m                        (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_962p5m << 13)          /**< Shifted mode v_962p5m for RAC_PATRIM1       */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_975m                          (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_975m << 13)            /**< Shifted mode v_975m for RAC_PATRIM1         */
#define RAC_PATRIM1_TX0DBMTRIMREGVREF_v_987p5m                        (_RAC_PATRIM1_TX0DBMTRIMREGVREF_v_987p5m << 13)          /**< Shifted mode v_987p5m for RAC_PATRIM1       */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_SHIFT                           16                                                       /**< Shift value for RAC_TX0DBMTRIMTAPCAP        */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_MASK                            0x70000UL                                                /**< Bit mask for RAC_TX0DBMTRIMTAPCAP           */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_DEFAULT                         0x00000003UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0F                          0x00000000UL                                             /**< Mode cap_0F for RAC_PATRIM1                 */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0p35pF                      0x00000001UL                                             /**< Mode cap_0p35pF for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0p7pF                       0x00000002UL                                             /**< Mode cap_0p7pF for RAC_PATRIM1              */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p05pF                      0x00000003UL                                             /**< Mode cap_1p05pF for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p4pF                       0x00000004UL                                             /**< Mode cap_1p4pF for RAC_PATRIM1              */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p75pF                      0x00000005UL                                             /**< Mode cap_1p75pF for RAC_PATRIM1             */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_2p1pF                       0x00000006UL                                             /**< Mode cap_2p1pF for RAC_PATRIM1              */
#define _RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_2p45pF                      0x00000007UL                                             /**< Mode cap_2p45pF for RAC_PATRIM1             */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_DEFAULT                          (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_DEFAULT << 16)            /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0F                           (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0F << 16)             /**< Shifted mode cap_0F for RAC_PATRIM1         */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0p35pF                       (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0p35pF << 16)         /**< Shifted mode cap_0p35pF for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0p7pF                        (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_0p7pF << 16)          /**< Shifted mode cap_0p7pF for RAC_PATRIM1      */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p05pF                       (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p05pF << 16)         /**< Shifted mode cap_1p05pF for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p4pF                        (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p4pF << 16)          /**< Shifted mode cap_1p4pF for RAC_PATRIM1      */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p75pF                       (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_1p75pF << 16)         /**< Shifted mode cap_1p75pF for RAC_PATRIM1     */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_2p1pF                        (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_2p1pF << 16)          /**< Shifted mode cap_2p1pF for RAC_PATRIM1      */
#define RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_2p45pF                       (_RAC_PATRIM1_TX0DBMTRIMTAPCAP_cap_2p45pF << 16)         /**< Shifted mode cap_2p45pF for RAC_PATRIM1     */

/* Bit fields for RAC PATRIM2 */
#define _RAC_PATRIM2_RESETVALUE                                       0x00000088UL                                             /**< Default value for RAC_PATRIM2               */
#define _RAC_PATRIM2_MASK                                             0x00003FFFUL                                             /**< Mask for RAC_PATRIM2                        */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_SHIFT                            0                                                        /**< Shift value for RAC_TX6DBMTRIMBIASN         */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_MASK                             0xFUL                                                    /**< Bit mask for RAC_TX6DBMTRIMBIASN            */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_DEFAULT                          0x00000008UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn104mV                   0x00000000UL                                             /**< Mode vnbias_dn104mV for RAC_PATRIM2         */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn91mV                    0x00000001UL                                             /**< Mode vnbias_dn91mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn78mV                    0x00000002UL                                             /**< Mode vnbias_dn78mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn65mV                    0x00000003UL                                             /**< Mode vnbias_dn65mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn52mV                    0x00000004UL                                             /**< Mode vnbias_dn52mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn39mV                    0x00000005UL                                             /**< Mode vnbias_dn39mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn26mV                    0x00000006UL                                             /**< Mode vnbias_dn26mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn13mV                    0x00000007UL                                             /**< Mode vnbias_dn13mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_default_613mV             0x00000008UL                                             /**< Mode vnbias_default_613mV for RAC_PATRIM2   */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up13mV                    0x00000009UL                                             /**< Mode vnbias_up13mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up26mV                    0x0000000AUL                                             /**< Mode vnbias_up26mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up39mV                    0x0000000BUL                                             /**< Mode vnbias_up39mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up52mV                    0x0000000CUL                                             /**< Mode vnbias_up52mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up65mV                    0x0000000DUL                                             /**< Mode vnbias_up65mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up78mV                    0x0000000EUL                                             /**< Mode vnbias_up78mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up91mV                    0x0000000FUL                                             /**< Mode vnbias_up91mV for RAC_PATRIM2          */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_DEFAULT                           (_RAC_PATRIM2_TX6DBMTRIMBIASN_DEFAULT << 0)              /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn104mV                    (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn104mV << 0)       /**< Shifted mode vnbias_dn104mV for RAC_PATRIM2 */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn91mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn91mV << 0)        /**< Shifted mode vnbias_dn91mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn78mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn78mV << 0)        /**< Shifted mode vnbias_dn78mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn65mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn65mV << 0)        /**< Shifted mode vnbias_dn65mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn52mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn52mV << 0)        /**< Shifted mode vnbias_dn52mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn39mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn39mV << 0)        /**< Shifted mode vnbias_dn39mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn26mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn26mV << 0)        /**< Shifted mode vnbias_dn26mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn13mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_dn13mV << 0)        /**< Shifted mode vnbias_dn13mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_default_613mV              (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_default_613mV << 0) /**< Shifted mode vnbias_default_613mV for RAC_PATRIM2*/
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up13mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up13mV << 0)        /**< Shifted mode vnbias_up13mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up26mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up26mV << 0)        /**< Shifted mode vnbias_up26mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up39mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up39mV << 0)        /**< Shifted mode vnbias_up39mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up52mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up52mV << 0)        /**< Shifted mode vnbias_up52mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up65mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up65mV << 0)        /**< Shifted mode vnbias_up65mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up78mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up78mV << 0)        /**< Shifted mode vnbias_up78mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up91mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASN_vnbias_up91mV << 0)        /**< Shifted mode vnbias_up91mV for RAC_PATRIM2  */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_SHIFT                            4                                                        /**< Shift value for RAC_TX6DBMTRIMBIASP         */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_MASK                             0xF0UL                                                   /**< Bit mask for RAC_TX6DBMTRIMBIASP            */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_DEFAULT                          0x00000008UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn104mV                   0x00000000UL                                             /**< Mode vpbias_dn104mV for RAC_PATRIM2         */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn91mV                    0x00000001UL                                             /**< Mode vpbias_dn91mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn78mV                    0x00000002UL                                             /**< Mode vpbias_dn78mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn65mV                    0x00000003UL                                             /**< Mode vpbias_dn65mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn52mV                    0x00000004UL                                             /**< Mode vpbias_dn52mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn39mV                    0x00000005UL                                             /**< Mode vpbias_dn39mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn26mV                    0x00000006UL                                             /**< Mode vpbias_dn26mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn13mV                    0x00000007UL                                             /**< Mode vpbias_dn13mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_default_949mV             0x00000008UL                                             /**< Mode vpbias_default_949mV for RAC_PATRIM2   */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up13mV                    0x00000009UL                                             /**< Mode vpbias_up13mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up26mV                    0x0000000AUL                                             /**< Mode vpbias_up26mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up39mV                    0x0000000BUL                                             /**< Mode vpbias_up39mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up52mV                    0x0000000CUL                                             /**< Mode vpbias_up52mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up65mV                    0x0000000DUL                                             /**< Mode vpbias_up65mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up78mV                    0x0000000EUL                                             /**< Mode vpbias_up78mV for RAC_PATRIM2          */
#define _RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up91mV                    0x0000000FUL                                             /**< Mode vpbias_up91mV for RAC_PATRIM2          */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_DEFAULT                           (_RAC_PATRIM2_TX6DBMTRIMBIASP_DEFAULT << 4)              /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn104mV                    (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn104mV << 4)       /**< Shifted mode vpbias_dn104mV for RAC_PATRIM2 */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn91mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn91mV << 4)        /**< Shifted mode vpbias_dn91mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn78mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn78mV << 4)        /**< Shifted mode vpbias_dn78mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn65mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn65mV << 4)        /**< Shifted mode vpbias_dn65mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn52mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn52mV << 4)        /**< Shifted mode vpbias_dn52mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn39mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn39mV << 4)        /**< Shifted mode vpbias_dn39mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn26mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn26mV << 4)        /**< Shifted mode vpbias_dn26mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn13mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_dn13mV << 4)        /**< Shifted mode vpbias_dn13mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_default_949mV              (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_default_949mV << 4) /**< Shifted mode vpbias_default_949mV for RAC_PATRIM2*/
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up13mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up13mV << 4)        /**< Shifted mode vpbias_up13mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up26mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up26mV << 4)        /**< Shifted mode vpbias_up26mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up39mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up39mV << 4)        /**< Shifted mode vpbias_up39mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up52mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up52mV << 4)        /**< Shifted mode vpbias_up52mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up65mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up65mV << 4)        /**< Shifted mode vpbias_up65mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up78mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up78mV << 4)        /**< Shifted mode vpbias_up78mV for RAC_PATRIM2  */
#define RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up91mV                     (_RAC_PATRIM2_TX6DBMTRIMBIASP_vpbias_up91mV << 4)        /**< Shifted mode vpbias_up91mV for RAC_PATRIM2  */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_SHIFT                          8                                                        /**< Shift value for RAC_TX6DBMTRIMDUTYCYN       */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_MASK                           0x700UL                                                  /**< Bit mask for RAC_TX6DBMTRIMDUTYCYN          */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_DEFAULT                        0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_0pct                        0x00000000UL                                             /**< Mode up_0pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_1pct                        0x00000001UL                                             /**< Mode up_1pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_2pct                        0x00000002UL                                             /**< Mode up_2pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_3pct                        0x00000003UL                                             /**< Mode up_3pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_4pct                        0x00000004UL                                             /**< Mode up_4pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_5pct                        0x00000005UL                                             /**< Mode up_5pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_6pct                        0x00000006UL                                             /**< Mode up_6pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYN_na                             0x00000007UL                                             /**< Mode na for RAC_PATRIM2                     */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_DEFAULT                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_DEFAULT << 8)            /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_0pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_0pct << 8)            /**< Shifted mode up_0pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_1pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_1pct << 8)            /**< Shifted mode up_1pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_2pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_2pct << 8)            /**< Shifted mode up_2pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_3pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_3pct << 8)            /**< Shifted mode up_3pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_4pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_4pct << 8)            /**< Shifted mode up_4pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_5pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_5pct << 8)            /**< Shifted mode up_5pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_6pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_up_6pct << 8)            /**< Shifted mode up_6pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYN_na                              (_RAC_PATRIM2_TX6DBMTRIMDUTYCYN_na << 8)                 /**< Shifted mode na for RAC_PATRIM2             */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_SHIFT                          11                                                       /**< Shift value for RAC_TX6DBMTRIMDUTYCYP       */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_MASK                           0x3800UL                                                 /**< Bit mask for RAC_TX6DBMTRIMDUTYCYP          */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_DEFAULT                        0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_0pct                        0x00000000UL                                             /**< Mode dn_0pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_1pct                        0x00000001UL                                             /**< Mode dn_1pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_2pct                        0x00000002UL                                             /**< Mode dn_2pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_3pct                        0x00000003UL                                             /**< Mode dn_3pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_4pct                        0x00000004UL                                             /**< Mode dn_4pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_5pct                        0x00000005UL                                             /**< Mode dn_5pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_6pct                        0x00000006UL                                             /**< Mode dn_6pct for RAC_PATRIM2                */
#define _RAC_PATRIM2_TX6DBMTRIMDUTYCYP_na                             0x00000007UL                                             /**< Mode na for RAC_PATRIM2                     */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_DEFAULT                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_DEFAULT << 11)           /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_0pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_0pct << 11)           /**< Shifted mode dn_0pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_1pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_1pct << 11)           /**< Shifted mode dn_1pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_2pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_2pct << 11)           /**< Shifted mode dn_2pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_3pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_3pct << 11)           /**< Shifted mode dn_3pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_4pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_4pct << 11)           /**< Shifted mode dn_4pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_5pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_5pct << 11)           /**< Shifted mode dn_5pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_6pct                         (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_dn_6pct << 11)           /**< Shifted mode dn_6pct for RAC_PATRIM2        */
#define RAC_PATRIM2_TX6DBMTRIMDUTYCYP_na                              (_RAC_PATRIM2_TX6DBMTRIMDUTYCYP_na << 11)                /**< Shifted mode na for RAC_PATRIM2             */

/* Bit fields for RAC PATRIM3 */
#define _RAC_PATRIM3_RESETVALUE                                       0x002E2B2AUL                                              /**< Default value for RAC_PATRIM3               */
#define _RAC_PATRIM3_MASK                                             0x007E7FFFUL                                              /**< Mask for RAC_PATRIM3                        */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_SHIFT                      0                                                         /**< Shift value for RAC_TX6DBMTRIMIBIASMASTER   */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_MASK                       0x3UL                                                     /**< Bit mask for RAC_TX6DBMTRIMIBIASMASTER      */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_DEFAULT                    0x00000002UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_45u                  0x00000000UL                                              /**< Mode ibias_45u for RAC_PATRIM3              */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_47p5u                0x00000001UL                                              /**< Mode ibias_47p5u for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_50u                  0x00000002UL                                              /**< Mode ibias_50u for RAC_PATRIM3              */
#define _RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_52p5u                0x00000003UL                                              /**< Mode ibias_52p5u for RAC_PATRIM3            */
#define RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_DEFAULT                     (_RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_45u                   (_RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_45u << 0)       /**< Shifted mode ibias_45u for RAC_PATRIM3      */
#define RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_47p5u                 (_RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_47p5u << 0)     /**< Shifted mode ibias_47p5u for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_50u                   (_RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_50u << 0)       /**< Shifted mode ibias_50u for RAC_PATRIM3      */
#define RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_52p5u                 (_RAC_PATRIM3_TX6DBMTRIMIBIASMASTER_ibias_52p5u << 0)     /**< Shifted mode ibias_52p5u for RAC_PATRIM3    */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_SHIFT                      2                                                         /**< Shift value for RAC_TX6DBMTRIMPREDRVREGFB   */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_MASK                       0xCUL                                                     /**< Bit mask for RAC_TX6DBMTRIMPREDRVREGFB      */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_DEFAULT                    0x00000002UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p63                   0x00000000UL                                              /**< Mode Acl_1p63 for RAC_PATRIM3               */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p71                   0x00000001UL                                              /**< Mode Acl_1p71 for RAC_PATRIM3               */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p80                   0x00000002UL                                              /**< Mode Acl_1p80 for RAC_PATRIM3               */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p92                   0x00000003UL                                              /**< Mode Acl_1p92 for RAC_PATRIM3               */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_DEFAULT                     (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_DEFAULT << 2)         /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p63                    (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p63 << 2)        /**< Shifted mode Acl_1p63 for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p71                    (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p71 << 2)        /**< Shifted mode Acl_1p71 for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p80                    (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p80 << 2)        /**< Shifted mode Acl_1p80 for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p92                    (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFB_Acl_1p92 << 2)        /**< Shifted mode Acl_1p92 for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT                         (0x1UL << 4)                                              /**< TX6DBMTRIMPREDRVREGFBKATT                   */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_SHIFT                  4                                                         /**< Shift value for RAC_TX6DBMTRIMPREDRVREGFBKATT*/
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_MASK                   0x10UL                                                    /**< Bit mask for RAC_TX6DBMTRIMPREDRVREGFBKATT  */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_DEFAULT                0x00000000UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_reduce_BW              0x00000000UL                                              /**< Mode reduce_BW for RAC_PATRIM3              */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_increase_BW            0x00000001UL                                              /**< Mode increase_BW for RAC_PATRIM3            */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_DEFAULT                 (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_DEFAULT << 4)     /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_reduce_BW               (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_reduce_BW << 4)   /**< Shifted mode reduce_BW for RAC_PATRIM3      */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_increase_BW             (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGFBKATT_increase_BW << 4) /**< Shifted mode increase_BW for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR                            (0x1UL << 5)                                              /**< TX6DBMTRIMPREDRVREGPSR                      */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_SHIFT                     5                                                         /**< Shift value for RAC_TX6DBMTRIMPREDRVREGPSR  */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_MASK                      0x20UL                                                    /**< Bit mask for RAC_TX6DBMTRIMPREDRVREGPSR     */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_DEFAULT                   0x00000001UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_low_psr                   0x00000000UL                                              /**< Mode low_psr for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_high_psr                  0x00000001UL                                              /**< Mode high_psr for RAC_PATRIM3               */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_DEFAULT                    (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_DEFAULT << 5)        /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_low_psr                    (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_low_psr << 5)        /**< Shifted mode low_psr for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_high_psr                   (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGPSR_high_psr << 5)       /**< Shifted mode high_psr for RAC_PATRIM3       */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_SHIFT                   6                                                         /**< Shift value for RAC_TX6DBMTRIMPREDRVREGSLICE*/
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_MASK                    0xC0UL                                                    /**< Bit mask for RAC_TX6DBMTRIMPREDRVREGSLICE   */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_DEFAULT                 0x00000000UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_3mA               0x00000000UL                                              /**< Mode iload_3mA for RAC_PATRIM3              */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_6mA               0x00000001UL                                              /**< Mode iload_6mA for RAC_PATRIM3              */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_9mA               0x00000002UL                                              /**< Mode iload_9mA for RAC_PATRIM3              */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_12mA              0x00000003UL                                              /**< Mode iload_12mA for RAC_PATRIM3             */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_DEFAULT                  (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_DEFAULT << 6)      /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_3mA                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_3mA << 6)    /**< Shifted mode iload_3mA for RAC_PATRIM3      */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_6mA                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_6mA << 6)    /**< Shifted mode iload_6mA for RAC_PATRIM3      */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_9mA                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_9mA << 6)    /**< Shifted mode iload_9mA for RAC_PATRIM3      */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_12mA               (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGSLICE_iload_12mA << 6)   /**< Shifted mode iload_12mA for RAC_PATRIM3     */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_SHIFT                    8                                                         /**< Shift value for RAC_TX6DBMTRIMPREDRVREGVREF */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_MASK                     0x700UL                                                   /**< Bit mask for RAC_TX6DBMTRIMPREDRVREGVREF    */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_DEFAULT                  0x00000003UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p675               0x00000000UL                                              /**< Mode vref_0p675 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p700               0x00000001UL                                              /**< Mode vref_0p700 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p725               0x00000002UL                                              /**< Mode vref_0p725 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p750               0x00000003UL                                              /**< Mode vref_0p750 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p775               0x00000004UL                                              /**< Mode vref_0p775 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p800               0x00000005UL                                              /**< Mode vref_0p800 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p825               0x00000006UL                                              /**< Mode vref_0p825 for RAC_PATRIM3             */
#define _RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p850               0x00000007UL                                              /**< Mode vref_0p850 for RAC_PATRIM3             */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_DEFAULT                   (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_DEFAULT << 8)       /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p675                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p675 << 8)    /**< Shifted mode vref_0p675 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p700                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p700 << 8)    /**< Shifted mode vref_0p700 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p725                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p725 << 8)    /**< Shifted mode vref_0p725 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p750                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p750 << 8)    /**< Shifted mode vref_0p750 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p775                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p775 << 8)    /**< Shifted mode vref_0p775 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p800                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p800 << 8)    /**< Shifted mode vref_0p800 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p825                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p825 << 8)    /**< Shifted mode vref_0p825 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p850                (_RAC_PATRIM3_TX6DBMTRIMPREDRVREGVREF_vref_0p850 << 8)    /**< Shifted mode vref_0p850 for RAC_PATRIM3     */
#define RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO                            (0x1UL << 11)                                             /**< TX6DBMTRIMREGBLEEDAUTO                      */
#define _RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_SHIFT                     11                                                        /**< Shift value for RAC_TX6DBMTRIMREGBLEEDAUTO  */
#define _RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_MASK                      0x800UL                                                   /**< Bit mask for RAC_TX6DBMTRIMREGBLEEDAUTO     */
#define _RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_DEFAULT                   0x00000001UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_not_automatic             0x00000000UL                                              /**< Mode not_automatic for RAC_PATRIM3          */
#define _RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_automatic                 0x00000001UL                                              /**< Mode automatic for RAC_PATRIM3              */
#define RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_DEFAULT                    (_RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_DEFAULT << 11)       /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_not_automatic              (_RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_not_automatic << 11) /**< Shifted mode not_automatic for RAC_PATRIM3  */
#define RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_automatic                  (_RAC_PATRIM3_TX6DBMTRIMREGBLEEDAUTO_automatic << 11)     /**< Shifted mode automatic for RAC_PATRIM3      */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_SHIFT                            12                                                        /**< Shift value for RAC_TX6DBMTRIMREGFB         */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_MASK                             0x3000UL                                                  /**< Bit mask for RAC_TX6DBMTRIMREGFB            */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_DEFAULT                          0x00000002UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p0x                         0x00000000UL                                              /**< Mode Acl_2p0x for RAC_PATRIM3               */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p1x                         0x00000001UL                                              /**< Mode Acl_2p1x for RAC_PATRIM3               */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p3125x                      0x00000002UL                                              /**< Mode Acl_2p3125x for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p5x                         0x00000003UL                                              /**< Mode Acl_2p5x for RAC_PATRIM3               */
#define RAC_PATRIM3_TX6DBMTRIMREGFB_DEFAULT                           (_RAC_PATRIM3_TX6DBMTRIMREGFB_DEFAULT << 12)              /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p0x                          (_RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p0x << 12)             /**< Shifted mode Acl_2p0x for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p1x                          (_RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p1x << 12)             /**< Shifted mode Acl_2p1x for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p3125x                       (_RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p3125x << 12)          /**< Shifted mode Acl_2p3125x for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p5x                          (_RAC_PATRIM3_TX6DBMTRIMREGFB_Acl_2p5x << 12)             /**< Shifted mode Acl_2p5x for RAC_PATRIM3       */
#define RAC_PATRIM3_TX6DBMTRIMREGPSR                                  (0x1UL << 14)                                             /**< TX6DBMTRIMREGPSR                            */
#define _RAC_PATRIM3_TX6DBMTRIMREGPSR_SHIFT                           14                                                        /**< Shift value for RAC_TX6DBMTRIMREGPSR        */
#define _RAC_PATRIM3_TX6DBMTRIMREGPSR_MASK                            0x4000UL                                                  /**< Bit mask for RAC_TX6DBMTRIMREGPSR           */
#define _RAC_PATRIM3_TX6DBMTRIMREGPSR_DEFAULT                         0x00000000UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMREGPSR_low_PSR                         0x00000000UL                                              /**< Mode low_PSR for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMREGPSR_high_PSR                        0x00000001UL                                              /**< Mode high_PSR for RAC_PATRIM3               */
#define RAC_PATRIM3_TX6DBMTRIMREGPSR_DEFAULT                          (_RAC_PATRIM3_TX6DBMTRIMREGPSR_DEFAULT << 14)             /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMREGPSR_low_PSR                          (_RAC_PATRIM3_TX6DBMTRIMREGPSR_low_PSR << 14)             /**< Shifted mode low_PSR for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMREGPSR_high_PSR                         (_RAC_PATRIM3_TX6DBMTRIMREGPSR_high_PSR << 14)            /**< Shifted mode high_PSR for RAC_PATRIM3       */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_SHIFT                          17                                                        /**< Shift value for RAC_TX6DBMTRIMREGVREF       */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_MASK                           0x1E0000UL                                                /**< Bit mask for RAC_TX6DBMTRIMREGVREF          */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_DEFAULT                        0x00000007UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6000                    0x00000000UL                                              /**< Mode vref_0p6000 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6125                    0x00000001UL                                              /**< Mode vref_0p6125 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6250                    0x00000002UL                                              /**< Mode vref_0p6250 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6375                    0x00000003UL                                              /**< Mode vref_0p6375 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6500                    0x00000004UL                                              /**< Mode vref_0p6500 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6625                    0x00000005UL                                              /**< Mode vref_0p6625 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6750                    0x00000006UL                                              /**< Mode vref_0p6750 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6875                    0x00000007UL                                              /**< Mode vref_0p6875 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7000                    0x00000008UL                                              /**< Mode vref_0p7000 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7125                    0x00000009UL                                              /**< Mode vref_0p7125 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7250                    0x0000000AUL                                              /**< Mode vref_0p7250 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7375                    0x0000000BUL                                              /**< Mode vref_0p7375 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7500                    0x0000000CUL                                              /**< Mode vref_0p7500 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7625                    0x0000000DUL                                              /**< Mode vref_0p7625 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7750                    0x0000000EUL                                              /**< Mode vref_0p7750 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7875                    0x0000000FUL                                              /**< Mode vref_0p7875 for RAC_PATRIM3            */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_DEFAULT                         (_RAC_PATRIM3_TX6DBMTRIMREGVREF_DEFAULT << 17)            /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6000                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6000 << 17)        /**< Shifted mode vref_0p6000 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6125                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6125 << 17)        /**< Shifted mode vref_0p6125 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6250                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6250 << 17)        /**< Shifted mode vref_0p6250 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6375                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6375 << 17)        /**< Shifted mode vref_0p6375 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6500                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6500 << 17)        /**< Shifted mode vref_0p6500 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6625                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6625 << 17)        /**< Shifted mode vref_0p6625 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6750                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6750 << 17)        /**< Shifted mode vref_0p6750 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6875                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p6875 << 17)        /**< Shifted mode vref_0p6875 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7000                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7000 << 17)        /**< Shifted mode vref_0p7000 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7125                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7125 << 17)        /**< Shifted mode vref_0p7125 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7250                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7250 << 17)        /**< Shifted mode vref_0p7250 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7375                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7375 << 17)        /**< Shifted mode vref_0p7375 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7500                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7500 << 17)        /**< Shifted mode vref_0p7500 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7625                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7625 << 17)        /**< Shifted mode vref_0p7625 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7750                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7750 << 17)        /**< Shifted mode vref_0p7750 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7875                     (_RAC_PATRIM3_TX6DBMTRIMREGVREF_vref_0p7875 << 17)        /**< Shifted mode vref_0p7875 for RAC_PATRIM3    */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_SHIFT                       21                                                        /**< Shift value for RAC_TX6DBMTRIMRXMODEVREF    */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_MASK                        0x600000UL                                                /**< Bit mask for RAC_TX6DBMTRIMRXMODEVREF       */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_DEFAULT                     0x00000001UL                                              /**< Mode DEFAULT for RAC_PATRIM3                */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p05                 0x00000000UL                                              /**< Mode vddreg_1p05 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p14                 0x00000001UL                                              /**< Mode vddreg_1p14 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p20                 0x00000002UL                                              /**< Mode vddreg_1p20 for RAC_PATRIM3            */
#define _RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p23                 0x00000003UL                                              /**< Mode vddreg_1p23 for RAC_PATRIM3            */
#define RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_DEFAULT                      (_RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_DEFAULT << 21)         /**< Shifted mode DEFAULT for RAC_PATRIM3        */
#define RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p05                  (_RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p05 << 21)     /**< Shifted mode vddreg_1p05 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p14                  (_RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p14 << 21)     /**< Shifted mode vddreg_1p14 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p20                  (_RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p20 << 21)     /**< Shifted mode vddreg_1p20 for RAC_PATRIM3    */
#define RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p23                  (_RAC_PATRIM3_TX6DBMTRIMRXMODEVREF_vddreg_1p23 << 21)     /**< Shifted mode vddreg_1p23 for RAC_PATRIM3    */

/* Bit fields for RAC PACTRL */
#define _RAC_PACTRL_RESETVALUE                                        0x00000010UL                                         /**< Default value for RAC_PACTRL                */
#define _RAC_PACTRL_MASK                                              0x1FFF033FUL                                         /**< Mask for RAC_PACTRL                         */
#define _RAC_PACTRL_TX0DBMPOWER_SHIFT                                 0                                                    /**< Shift value for RAC_TX0DBMPOWER             */
#define _RAC_PACTRL_TX0DBMPOWER_MASK                                  0xFUL                                                /**< Bit mask for RAC_TX0DBMPOWER                */
#define _RAC_PACTRL_TX0DBMPOWER_DEFAULT                               0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX0DBMPOWER_on_stripe_0                           0x00000000UL                                         /**< Mode on_stripe_0 for RAC_PACTRL             */
#define _RAC_PACTRL_TX0DBMPOWER_on_stripe_12                          0x0000000CUL                                         /**< Mode on_stripe_12 for RAC_PACTRL            */
#define RAC_PACTRL_TX0DBMPOWER_DEFAULT                                (_RAC_PACTRL_TX0DBMPOWER_DEFAULT << 0)               /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX0DBMPOWER_on_stripe_0                            (_RAC_PACTRL_TX0DBMPOWER_on_stripe_0 << 0)           /**< Shifted mode on_stripe_0 for RAC_PACTRL     */
#define RAC_PACTRL_TX0DBMPOWER_on_stripe_12                           (_RAC_PACTRL_TX0DBMPOWER_on_stripe_12 << 0)          /**< Shifted mode on_stripe_12 for RAC_PACTRL    */
#define _RAC_PACTRL_TX0DBMSELSLICE_SHIFT                              4                                                    /**< Shift value for RAC_TX0DBMSELSLICE          */
#define _RAC_PACTRL_TX0DBMSELSLICE_MASK                               0x30UL                                               /**< Bit mask for RAC_TX0DBMSELSLICE             */
#define _RAC_PACTRL_TX0DBMSELSLICE_DEFAULT                            0x00000001UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX0DBMSELSLICE_on_0_slice                         0x00000000UL                                         /**< Mode on_0_slice for RAC_PACTRL              */
#define _RAC_PACTRL_TX0DBMSELSLICE_on_1_slices                        0x00000001UL                                         /**< Mode on_1_slices for RAC_PACTRL             */
#define _RAC_PACTRL_TX0DBMSELSLICE_on_2_slices                        0x00000002UL                                         /**< Mode on_2_slices for RAC_PACTRL             */
#define _RAC_PACTRL_TX0DBMSELSLICE_NA                                 0x00000003UL                                         /**< Mode NA for RAC_PACTRL                      */
#define RAC_PACTRL_TX0DBMSELSLICE_DEFAULT                             (_RAC_PACTRL_TX0DBMSELSLICE_DEFAULT << 4)            /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX0DBMSELSLICE_on_0_slice                          (_RAC_PACTRL_TX0DBMSELSLICE_on_0_slice << 4)         /**< Shifted mode on_0_slice for RAC_PACTRL      */
#define RAC_PACTRL_TX0DBMSELSLICE_on_1_slices                         (_RAC_PACTRL_TX0DBMSELSLICE_on_1_slices << 4)        /**< Shifted mode on_1_slices for RAC_PACTRL     */
#define RAC_PACTRL_TX0DBMSELSLICE_on_2_slices                         (_RAC_PACTRL_TX0DBMSELSLICE_on_2_slices << 4)        /**< Shifted mode on_2_slices for RAC_PACTRL     */
#define RAC_PACTRL_TX0DBMSELSLICE_NA                                  (_RAC_PACTRL_TX0DBMSELSLICE_NA << 4)                 /**< Shifted mode NA for RAC_PACTRL              */
#define RAC_PACTRL_TX0DBMSLICERESET                                   (0x1UL << 8)                                         /**< TX0DBMSLICERESET                            */
#define _RAC_PACTRL_TX0DBMSLICERESET_SHIFT                            8                                                    /**< Shift value for RAC_TX0DBMSLICERESET        */
#define _RAC_PACTRL_TX0DBMSLICERESET_MASK                             0x100UL                                              /**< Bit mask for RAC_TX0DBMSLICERESET           */
#define _RAC_PACTRL_TX0DBMSLICERESET_DEFAULT                          0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX0DBMSLICERESET_active                           0x00000000UL                                         /**< Mode active for RAC_PACTRL                  */
#define _RAC_PACTRL_TX0DBMSLICERESET_reset                            0x00000001UL                                         /**< Mode reset for RAC_PACTRL                   */
#define RAC_PACTRL_TX0DBMSLICERESET_DEFAULT                           (_RAC_PACTRL_TX0DBMSLICERESET_DEFAULT << 8)          /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX0DBMSLICERESET_active                            (_RAC_PACTRL_TX0DBMSLICERESET_active << 8)           /**< Shifted mode active for RAC_PACTRL          */
#define RAC_PACTRL_TX0DBMSLICERESET_reset                             (_RAC_PACTRL_TX0DBMSLICERESET_reset << 8)            /**< Shifted mode reset for RAC_PACTRL           */
#define RAC_PACTRL_TX0DBMLATCHBYPASS                                  (0x1UL << 9)                                         /**< TX0DBMLATCHBYPASS                           */
#define _RAC_PACTRL_TX0DBMLATCHBYPASS_SHIFT                           9                                                    /**< Shift value for RAC_TX0DBMLATCHBYPASS       */
#define _RAC_PACTRL_TX0DBMLATCHBYPASS_MASK                            0x200UL                                              /**< Bit mask for RAC_TX0DBMLATCHBYPASS          */
#define _RAC_PACTRL_TX0DBMLATCHBYPASS_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX0DBMLATCHBYPASS_disable                         0x00000000UL                                         /**< Mode disable for RAC_PACTRL                 */
#define _RAC_PACTRL_TX0DBMLATCHBYPASS_enable                          0x00000001UL                                         /**< Mode enable for RAC_PACTRL                  */
#define RAC_PACTRL_TX0DBMLATCHBYPASS_DEFAULT                          (_RAC_PACTRL_TX0DBMLATCHBYPASS_DEFAULT << 9)         /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX0DBMLATCHBYPASS_disable                          (_RAC_PACTRL_TX0DBMLATCHBYPASS_disable << 9)         /**< Shifted mode disable for RAC_PACTRL         */
#define RAC_PACTRL_TX0DBMLATCHBYPASS_enable                           (_RAC_PACTRL_TX0DBMLATCHBYPASS_enable << 9)          /**< Shifted mode enable for RAC_PACTRL          */
#define _RAC_PACTRL_TX6DBMPOWER_SHIFT                                 16                                                   /**< Shift value for RAC_TX6DBMPOWER             */
#define _RAC_PACTRL_TX6DBMPOWER_MASK                                  0x1F0000UL                                           /**< Bit mask for RAC_TX6DBMPOWER                */
#define _RAC_PACTRL_TX6DBMPOWER_DEFAULT                               0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define RAC_PACTRL_TX6DBMPOWER_DEFAULT                                (_RAC_PACTRL_TX6DBMPOWER_DEFAULT << 16)              /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define _RAC_PACTRL_TX6DBMSELSLICE_SHIFT                              21                                                   /**< Shift value for RAC_TX6DBMSELSLICE          */
#define _RAC_PACTRL_TX6DBMSELSLICE_MASK                               0xE00000UL                                           /**< Bit mask for RAC_TX6DBMSELSLICE             */
#define _RAC_PACTRL_TX6DBMSELSLICE_DEFAULT                            0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_0                       0x00000000UL                                         /**< Mode n_slice_on_0 for RAC_PACTRL            */
#define _RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_1                       0x00000001UL                                         /**< Mode n_slice_on_1 for RAC_PACTRL            */
#define _RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_2                       0x00000002UL                                         /**< Mode n_slice_on_2 for RAC_PACTRL            */
#define _RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_3                       0x00000003UL                                         /**< Mode n_slice_on_3 for RAC_PACTRL            */
#define _RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_4                       0x00000004UL                                         /**< Mode n_slice_on_4 for RAC_PACTRL            */
#define _RAC_PACTRL_TX6DBMSELSLICE_tbd_5                              0x00000005UL                                         /**< Mode tbd_5 for RAC_PACTRL                   */
#define _RAC_PACTRL_TX6DBMSELSLICE_tbd_6                              0x00000006UL                                         /**< Mode tbd_6 for RAC_PACTRL                   */
#define _RAC_PACTRL_TX6DBMSELSLICE_tbd_7                              0x00000007UL                                         /**< Mode tbd_7 for RAC_PACTRL                   */
#define RAC_PACTRL_TX6DBMSELSLICE_DEFAULT                             (_RAC_PACTRL_TX6DBMSELSLICE_DEFAULT << 21)           /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_0                        (_RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_0 << 21)      /**< Shifted mode n_slice_on_0 for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_1                        (_RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_1 << 21)      /**< Shifted mode n_slice_on_1 for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_2                        (_RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_2 << 21)      /**< Shifted mode n_slice_on_2 for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_3                        (_RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_3 << 21)      /**< Shifted mode n_slice_on_3 for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_4                        (_RAC_PACTRL_TX6DBMSELSLICE_n_slice_on_4 << 21)      /**< Shifted mode n_slice_on_4 for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMSELSLICE_tbd_5                               (_RAC_PACTRL_TX6DBMSELSLICE_tbd_5 << 21)             /**< Shifted mode tbd_5 for RAC_PACTRL           */
#define RAC_PACTRL_TX6DBMSELSLICE_tbd_6                               (_RAC_PACTRL_TX6DBMSELSLICE_tbd_6 << 21)             /**< Shifted mode tbd_6 for RAC_PACTRL           */
#define RAC_PACTRL_TX6DBMSELSLICE_tbd_7                               (_RAC_PACTRL_TX6DBMSELSLICE_tbd_7 << 21)             /**< Shifted mode tbd_7 for RAC_PACTRL           */
#define RAC_PACTRL_TX6DBMSLICERESET                                   (0x1UL << 24)                                        /**< TX6DBMSLICERESET                            */
#define _RAC_PACTRL_TX6DBMSLICERESET_SHIFT                            24                                                   /**< Shift value for RAC_TX6DBMSLICERESET        */
#define _RAC_PACTRL_TX6DBMSLICERESET_MASK                             0x1000000UL                                          /**< Bit mask for RAC_TX6DBMSLICERESET           */
#define _RAC_PACTRL_TX6DBMSLICERESET_DEFAULT                          0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX6DBMSLICERESET_disable_reset                    0x00000000UL                                         /**< Mode disable_reset for RAC_PACTRL           */
#define _RAC_PACTRL_TX6DBMSLICERESET_enable_reset                     0x00000001UL                                         /**< Mode enable_reset for RAC_PACTRL            */
#define RAC_PACTRL_TX6DBMSLICERESET_DEFAULT                           (_RAC_PACTRL_TX6DBMSLICERESET_DEFAULT << 24)         /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX6DBMSLICERESET_disable_reset                     (_RAC_PACTRL_TX6DBMSLICERESET_disable_reset << 24)   /**< Shifted mode disable_reset for RAC_PACTRL   */
#define RAC_PACTRL_TX6DBMSLICERESET_enable_reset                      (_RAC_PACTRL_TX6DBMSLICERESET_enable_reset << 24)    /**< Shifted mode enable_reset for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMLATCHBYPASS                                  (0x1UL << 25)                                        /**< TX6DBMLATCHBYPASS                           */
#define _RAC_PACTRL_TX6DBMLATCHBYPASS_SHIFT                           25                                                   /**< Shift value for RAC_TX6DBMLATCHBYPASS       */
#define _RAC_PACTRL_TX6DBMLATCHBYPASS_MASK                            0x2000000UL                                          /**< Bit mask for RAC_TX6DBMLATCHBYPASS          */
#define _RAC_PACTRL_TX6DBMLATCHBYPASS_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX6DBMLATCHBYPASS_not_bypass                      0x00000000UL                                         /**< Mode not_bypass for RAC_PACTRL              */
#define _RAC_PACTRL_TX6DBMLATCHBYPASS_bypass_latch                    0x00000001UL                                         /**< Mode bypass_latch for RAC_PACTRL            */
#define RAC_PACTRL_TX6DBMLATCHBYPASS_DEFAULT                          (_RAC_PACTRL_TX6DBMLATCHBYPASS_DEFAULT << 25)        /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX6DBMLATCHBYPASS_not_bypass                       (_RAC_PACTRL_TX6DBMLATCHBYPASS_not_bypass << 25)     /**< Shifted mode not_bypass for RAC_PACTRL      */
#define RAC_PACTRL_TX6DBMLATCHBYPASS_bypass_latch                     (_RAC_PACTRL_TX6DBMLATCHBYPASS_bypass_latch << 25)   /**< Shifted mode bypass_latch for RAC_PACTRL    */
#define RAC_PACTRL_TX6DBMPREDRVREGBYPASS                              (0x1UL << 26)                                        /**< TX6DBMREGBYPASSPDRVLDo                      */
#define _RAC_PACTRL_TX6DBMPREDRVREGBYPASS_SHIFT                       26                                                   /**< Shift value for RAC_TX6DBMPREDRVREGBYPASS   */
#define _RAC_PACTRL_TX6DBMPREDRVREGBYPASS_MASK                        0x4000000UL                                          /**< Bit mask for RAC_TX6DBMPREDRVREGBYPASS      */
#define _RAC_PACTRL_TX6DBMPREDRVREGBYPASS_DEFAULT                     0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX6DBMPREDRVREGBYPASS_not_bypass                  0x00000000UL                                         /**< Mode not_bypass for RAC_PACTRL              */
#define _RAC_PACTRL_TX6DBMPREDRVREGBYPASS_bypass                      0x00000001UL                                         /**< Mode bypass for RAC_PACTRL                  */
#define RAC_PACTRL_TX6DBMPREDRVREGBYPASS_DEFAULT                      (_RAC_PACTRL_TX6DBMPREDRVREGBYPASS_DEFAULT << 26)    /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX6DBMPREDRVREGBYPASS_not_bypass                   (_RAC_PACTRL_TX6DBMPREDRVREGBYPASS_not_bypass << 26) /**< Shifted mode not_bypass for RAC_PACTRL      */
#define RAC_PACTRL_TX6DBMPREDRVREGBYPASS_bypass                       (_RAC_PACTRL_TX6DBMPREDRVREGBYPASS_bypass << 26)     /**< Shifted mode bypass for RAC_PACTRL          */
#define RAC_PACTRL_TX6DBMPULLDOWNREG                                  (0x1UL << 27)                                        /**< TX6DBMPULLDOWNREG                           */
#define _RAC_PACTRL_TX6DBMPULLDOWNREG_SHIFT                           27                                                   /**< Shift value for RAC_TX6DBMPULLDOWNREG       */
#define _RAC_PACTRL_TX6DBMPULLDOWNREG_MASK                            0x8000000UL                                          /**< Bit mask for RAC_TX6DBMPULLDOWNREG          */
#define _RAC_PACTRL_TX6DBMPULLDOWNREG_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX6DBMPULLDOWNREG_not_pull_down                   0x00000000UL                                         /**< Mode not_pull_down for RAC_PACTRL           */
#define _RAC_PACTRL_TX6DBMPULLDOWNREG_pull_down                       0x00000001UL                                         /**< Mode pull_down for RAC_PACTRL               */
#define RAC_PACTRL_TX6DBMPULLDOWNREG_DEFAULT                          (_RAC_PACTRL_TX6DBMPULLDOWNREG_DEFAULT << 27)        /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX6DBMPULLDOWNREG_not_pull_down                    (_RAC_PACTRL_TX6DBMPULLDOWNREG_not_pull_down << 27)  /**< Shifted mode not_pull_down for RAC_PACTRL   */
#define RAC_PACTRL_TX6DBMPULLDOWNREG_pull_down                        (_RAC_PACTRL_TX6DBMPULLDOWNREG_pull_down << 27)      /**< Shifted mode pull_down for RAC_PACTRL       */
#define RAC_PACTRL_TX6DBMREGBYPASS                                    (0x1UL << 28)                                        /**< TX6DBMREGBYPASS                             */
#define _RAC_PACTRL_TX6DBMREGBYPASS_SHIFT                             28                                                   /**< Shift value for RAC_TX6DBMREGBYPASS         */
#define _RAC_PACTRL_TX6DBMREGBYPASS_MASK                              0x10000000UL                                         /**< Bit mask for RAC_TX6DBMREGBYPASS            */
#define _RAC_PACTRL_TX6DBMREGBYPASS_DEFAULT                           0x00000000UL                                         /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_TX6DBMREGBYPASS_not_bypass                        0x00000000UL                                         /**< Mode not_bypass for RAC_PACTRL              */
#define _RAC_PACTRL_TX6DBMREGBYPASS_bypass                            0x00000001UL                                         /**< Mode bypass for RAC_PACTRL                  */
#define RAC_PACTRL_TX6DBMREGBYPASS_DEFAULT                            (_RAC_PACTRL_TX6DBMREGBYPASS_DEFAULT << 28)          /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_TX6DBMREGBYPASS_not_bypass                         (_RAC_PACTRL_TX6DBMREGBYPASS_not_bypass << 28)       /**< Shifted mode not_bypass for RAC_PACTRL      */
#define RAC_PACTRL_TX6DBMREGBYPASS_bypass                             (_RAC_PACTRL_TX6DBMREGBYPASS_bypass << 28)           /**< Shifted mode bypass for RAC_PACTRL          */

/* Bit fields for RAC PGATRIM */
#define _RAC_PGATRIM_RESETVALUE                                       0x00000547UL                                        /**< Default value for RAC_PGATRIM               */
#define _RAC_PGATRIM_MASK                                             0x000007FFUL                                        /**< Mask for RAC_PGATRIM                        */
#define _RAC_PGATRIM_PGACTUNE_SHIFT                                   0                                                   /**< Shift value for RAC_PGACTUNE                */
#define _RAC_PGATRIM_PGACTUNE_MASK                                    0xFUL                                               /**< Bit mask for RAC_PGACTUNE                   */
#define _RAC_PGATRIM_PGACTUNE_DEFAULT                                 0x00000007UL                                        /**< Mode DEFAULT for RAC_PGATRIM                */
#define _RAC_PGATRIM_PGACTUNE_cfb_0p7                                 0x00000000UL                                        /**< Mode cfb_0p7 for RAC_PGATRIM                */
#define _RAC_PGATRIM_PGACTUNE_cfb_nominal                             0x00000007UL                                        /**< Mode cfb_nominal for RAC_PGATRIM            */
#define _RAC_PGATRIM_PGACTUNE_cfb_1p32                                0x0000000FUL                                        /**< Mode cfb_1p32 for RAC_PGATRIM               */
#define RAC_PGATRIM_PGACTUNE_DEFAULT                                  (_RAC_PGATRIM_PGACTUNE_DEFAULT << 0)                /**< Shifted mode DEFAULT for RAC_PGATRIM        */
#define RAC_PGATRIM_PGACTUNE_cfb_0p7                                  (_RAC_PGATRIM_PGACTUNE_cfb_0p7 << 0)                /**< Shifted mode cfb_0p7 for RAC_PGATRIM        */
#define RAC_PGATRIM_PGACTUNE_cfb_nominal                              (_RAC_PGATRIM_PGACTUNE_cfb_nominal << 0)            /**< Shifted mode cfb_nominal for RAC_PGATRIM    */
#define RAC_PGATRIM_PGACTUNE_cfb_1p32                                 (_RAC_PGATRIM_PGACTUNE_cfb_1p32 << 0)               /**< Shifted mode cfb_1p32 for RAC_PGATRIM       */
#define RAC_PGATRIM_PGADISANTILOCK                                    (0x1UL << 4)                                        /**< PGADISANTILOCK                              */
#define _RAC_PGATRIM_PGADISANTILOCK_SHIFT                             4                                                   /**< Shift value for RAC_PGADISANTILOCK          */
#define _RAC_PGATRIM_PGADISANTILOCK_MASK                              0x10UL                                              /**< Bit mask for RAC_PGADISANTILOCK             */
#define _RAC_PGATRIM_PGADISANTILOCK_DEFAULT                           0x00000000UL                                        /**< Mode DEFAULT for RAC_PGATRIM                */
#define _RAC_PGATRIM_PGADISANTILOCK_antilock_enable                   0x00000000UL                                        /**< Mode antilock_enable for RAC_PGATRIM        */
#define _RAC_PGATRIM_PGADISANTILOCK_antilock_disable                  0x00000001UL                                        /**< Mode antilock_disable for RAC_PGATRIM       */
#define RAC_PGATRIM_PGADISANTILOCK_DEFAULT                            (_RAC_PGATRIM_PGADISANTILOCK_DEFAULT << 4)          /**< Shifted mode DEFAULT for RAC_PGATRIM        */
#define RAC_PGATRIM_PGADISANTILOCK_antilock_enable                    (_RAC_PGATRIM_PGADISANTILOCK_antilock_enable << 4)  /**< Shifted mode antilock_enable for RAC_PGATRIM*/
#define RAC_PGATRIM_PGADISANTILOCK_antilock_disable                   (_RAC_PGATRIM_PGADISANTILOCK_antilock_disable << 4) /**< Shifted mode antilock_disable for RAC_PGATRIM*/
#define _RAC_PGATRIM_PGAVCMOUTTRIM_SHIFT                              5                                                   /**< Shift value for RAC_PGAVCMOUTTRIM           */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_MASK                               0xE0UL                                              /**< Bit mask for RAC_PGAVCMOUTTRIM              */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_DEFAULT                            0x00000002UL                                        /**< Mode DEFAULT for RAC_PGATRIM                */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p4                        0x00000000UL                                        /**< Mode vcm_out_0p4 for RAC_PGATRIM            */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p45                       0x00000001UL                                        /**< Mode vcm_out_0p45 for RAC_PGATRIM           */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p5                        0x00000002UL                                        /**< Mode vcm_out_0p5 for RAC_PGATRIM            */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p55                       0x00000003UL                                        /**< Mode vcm_out_0p55 for RAC_PGATRIM           */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p6                        0x00000004UL                                        /**< Mode vcm_out_0p6 for RAC_PGATRIM            */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p65                       0x00000005UL                                        /**< Mode vcm_out_0p65 for RAC_PGATRIM           */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p7                        0x00000006UL                                        /**< Mode vcm_out_0p7 for RAC_PGATRIM            */
#define _RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p75                       0x00000007UL                                        /**< Mode vcm_out_0p75 for RAC_PGATRIM           */
#define RAC_PGATRIM_PGAVCMOUTTRIM_DEFAULT                             (_RAC_PGATRIM_PGAVCMOUTTRIM_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_PGATRIM        */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p4                         (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p4 << 5)       /**< Shifted mode vcm_out_0p4 for RAC_PGATRIM    */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p45                        (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p45 << 5)      /**< Shifted mode vcm_out_0p45 for RAC_PGATRIM   */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p5                         (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p5 << 5)       /**< Shifted mode vcm_out_0p5 for RAC_PGATRIM    */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p55                        (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p55 << 5)      /**< Shifted mode vcm_out_0p55 for RAC_PGATRIM   */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p6                         (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p6 << 5)       /**< Shifted mode vcm_out_0p6 for RAC_PGATRIM    */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p65                        (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p65 << 5)      /**< Shifted mode vcm_out_0p65 for RAC_PGATRIM   */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p7                         (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p7 << 5)       /**< Shifted mode vcm_out_0p7 for RAC_PGATRIM    */
#define RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p75                        (_RAC_PGATRIM_PGAVCMOUTTRIM_vcm_out_0p75 << 5)      /**< Shifted mode vcm_out_0p75 for RAC_PGATRIM   */
#define _RAC_PGATRIM_PGAVLDOTRIM_SHIFT                                8                                                   /**< Shift value for RAC_PGAVLDOTRIM             */
#define _RAC_PGATRIM_PGAVLDOTRIM_MASK                                 0x700UL                                             /**< Bit mask for RAC_PGAVLDOTRIM                */
#define _RAC_PGATRIM_PGAVLDOTRIM_DEFAULT                              0x00000005UL                                        /**< Mode DEFAULT for RAC_PGATRIM                */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p15                            0x00000000UL                                        /**< Mode vdda_1p15 for RAC_PGATRIM              */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p2                             0x00000001UL                                        /**< Mode vdda_1p2 for RAC_PGATRIM               */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p25                            0x00000002UL                                        /**< Mode vdda_1p25 for RAC_PGATRIM              */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p3                             0x00000003UL                                        /**< Mode vdda_1p3 for RAC_PGATRIM               */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p35                            0x00000004UL                                        /**< Mode vdda_1p35 for RAC_PGATRIM              */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p4                             0x00000005UL                                        /**< Mode vdda_1p4 for RAC_PGATRIM               */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p5                             0x00000006UL                                        /**< Mode vdda_1p5 for RAC_PGATRIM               */
#define _RAC_PGATRIM_PGAVLDOTRIM_vdda_1p55                            0x00000007UL                                        /**< Mode vdda_1p55 for RAC_PGATRIM              */
#define RAC_PGATRIM_PGAVLDOTRIM_DEFAULT                               (_RAC_PGATRIM_PGAVLDOTRIM_DEFAULT << 8)             /**< Shifted mode DEFAULT for RAC_PGATRIM        */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p15                             (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p15 << 8)           /**< Shifted mode vdda_1p15 for RAC_PGATRIM      */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p2                              (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p2 << 8)            /**< Shifted mode vdda_1p2 for RAC_PGATRIM       */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p25                             (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p25 << 8)           /**< Shifted mode vdda_1p25 for RAC_PGATRIM      */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p3                              (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p3 << 8)            /**< Shifted mode vdda_1p3 for RAC_PGATRIM       */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p35                             (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p35 << 8)           /**< Shifted mode vdda_1p35 for RAC_PGATRIM      */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p4                              (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p4 << 8)            /**< Shifted mode vdda_1p4 for RAC_PGATRIM       */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p5                              (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p5 << 8)            /**< Shifted mode vdda_1p5 for RAC_PGATRIM       */
#define RAC_PGATRIM_PGAVLDOTRIM_vdda_1p55                             (_RAC_PGATRIM_PGAVLDOTRIM_vdda_1p55 << 8)           /**< Shifted mode vdda_1p55 for RAC_PGATRIM      */

/* Bit fields for RAC PGACAL */
#define _RAC_PGACAL_RESETVALUE                                        0x20202020UL                                   /**< Default value for RAC_PGACAL                */
#define _RAC_PGACAL_MASK                                              0x3F3F3F3FUL                                   /**< Mask for RAC_PGACAL                         */
#define _RAC_PGACAL_PGAOFFNCALI_SHIFT                                 0                                              /**< Shift value for RAC_PGAOFFNCALI             */
#define _RAC_PGACAL_PGAOFFNCALI_MASK                                  0x3FUL                                         /**< Bit mask for RAC_PGAOFFNCALI                */
#define _RAC_PGACAL_PGAOFFNCALI_DEFAULT                               0x00000020UL                                   /**< Mode DEFAULT for RAC_PGACAL                 */
#define _RAC_PGACAL_PGAOFFNCALI_offset_m_300mv                        0x00000000UL                                   /**< Mode offset_m_300mv for RAC_PGACAL          */
#define _RAC_PGACAL_PGAOFFNCALI_offset_p_300mv                        0x0000003FUL                                   /**< Mode offset_p_300mv for RAC_PGACAL          */
#define RAC_PGACAL_PGAOFFNCALI_DEFAULT                                (_RAC_PGACAL_PGAOFFNCALI_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_PGACAL         */
#define RAC_PGACAL_PGAOFFNCALI_offset_m_300mv                         (_RAC_PGACAL_PGAOFFNCALI_offset_m_300mv << 0)  /**< Shifted mode offset_m_300mv for RAC_PGACAL  */
#define RAC_PGACAL_PGAOFFNCALI_offset_p_300mv                         (_RAC_PGACAL_PGAOFFNCALI_offset_p_300mv << 0)  /**< Shifted mode offset_p_300mv for RAC_PGACAL  */
#define _RAC_PGACAL_PGAOFFNCALQ_SHIFT                                 8                                              /**< Shift value for RAC_PGAOFFNCALQ             */
#define _RAC_PGACAL_PGAOFFNCALQ_MASK                                  0x3F00UL                                       /**< Bit mask for RAC_PGAOFFNCALQ                */
#define _RAC_PGACAL_PGAOFFNCALQ_DEFAULT                               0x00000020UL                                   /**< Mode DEFAULT for RAC_PGACAL                 */
#define _RAC_PGACAL_PGAOFFNCALQ_offset_m_300mv                        0x00000000UL                                   /**< Mode offset_m_300mv for RAC_PGACAL          */
#define _RAC_PGACAL_PGAOFFNCALQ_offset_p_300mv                        0x0000003FUL                                   /**< Mode offset_p_300mv for RAC_PGACAL          */
#define RAC_PGACAL_PGAOFFNCALQ_DEFAULT                                (_RAC_PGACAL_PGAOFFNCALQ_DEFAULT << 8)         /**< Shifted mode DEFAULT for RAC_PGACAL         */
#define RAC_PGACAL_PGAOFFNCALQ_offset_m_300mv                         (_RAC_PGACAL_PGAOFFNCALQ_offset_m_300mv << 8)  /**< Shifted mode offset_m_300mv for RAC_PGACAL  */
#define RAC_PGACAL_PGAOFFNCALQ_offset_p_300mv                         (_RAC_PGACAL_PGAOFFNCALQ_offset_p_300mv << 8)  /**< Shifted mode offset_p_300mv for RAC_PGACAL  */
#define _RAC_PGACAL_PGAOFFPCALI_SHIFT                                 16                                             /**< Shift value for RAC_PGAOFFPCALI             */
#define _RAC_PGACAL_PGAOFFPCALI_MASK                                  0x3F0000UL                                     /**< Bit mask for RAC_PGAOFFPCALI                */
#define _RAC_PGACAL_PGAOFFPCALI_DEFAULT                               0x00000020UL                                   /**< Mode DEFAULT for RAC_PGACAL                 */
#define _RAC_PGACAL_PGAOFFPCALI_offset_m_300mv                        0x00000000UL                                   /**< Mode offset_m_300mv for RAC_PGACAL          */
#define _RAC_PGACAL_PGAOFFPCALI_offset_p_300mv                        0x0000003FUL                                   /**< Mode offset_p_300mv for RAC_PGACAL          */
#define RAC_PGACAL_PGAOFFPCALI_DEFAULT                                (_RAC_PGACAL_PGAOFFPCALI_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_PGACAL         */
#define RAC_PGACAL_PGAOFFPCALI_offset_m_300mv                         (_RAC_PGACAL_PGAOFFPCALI_offset_m_300mv << 16) /**< Shifted mode offset_m_300mv for RAC_PGACAL  */
#define RAC_PGACAL_PGAOFFPCALI_offset_p_300mv                         (_RAC_PGACAL_PGAOFFPCALI_offset_p_300mv << 16) /**< Shifted mode offset_p_300mv for RAC_PGACAL  */
#define _RAC_PGACAL_PGAOFFPCALQ_SHIFT                                 24                                             /**< Shift value for RAC_PGAOFFPCALQ             */
#define _RAC_PGACAL_PGAOFFPCALQ_MASK                                  0x3F000000UL                                   /**< Bit mask for RAC_PGAOFFPCALQ                */
#define _RAC_PGACAL_PGAOFFPCALQ_DEFAULT                               0x00000020UL                                   /**< Mode DEFAULT for RAC_PGACAL                 */
#define _RAC_PGACAL_PGAOFFPCALQ_offset_m_300mv                        0x00000000UL                                   /**< Mode offset_m_300mv for RAC_PGACAL          */
#define _RAC_PGACAL_PGAOFFPCALQ_offset_p_300mv                        0x0000003FUL                                   /**< Mode offset_p_300mv for RAC_PGACAL          */
#define RAC_PGACAL_PGAOFFPCALQ_DEFAULT                                (_RAC_PGACAL_PGAOFFPCALQ_DEFAULT << 24)        /**< Shifted mode DEFAULT for RAC_PGACAL         */
#define RAC_PGACAL_PGAOFFPCALQ_offset_m_300mv                         (_RAC_PGACAL_PGAOFFPCALQ_offset_m_300mv << 24) /**< Shifted mode offset_m_300mv for RAC_PGACAL  */
#define RAC_PGACAL_PGAOFFPCALQ_offset_p_300mv                         (_RAC_PGACAL_PGAOFFPCALQ_offset_p_300mv << 24) /**< Shifted mode offset_p_300mv for RAC_PGACAL  */

/* Bit fields for RAC PGACTRL */
#define _RAC_PGACTRL_RESETVALUE                                       0x04000000UL                                        /**< Default value for RAC_PGACTRL               */
#define _RAC_PGACTRL_MASK                                             0x07FFFEEFUL                                        /**< Mask for RAC_PGACTRL                        */
#define _RAC_PGACTRL_PGABWMODE_SHIFT                                  0                                                   /**< Shift value for RAC_PGABWMODE               */
#define _RAC_PGACTRL_PGABWMODE_MASK                                   0x3UL                                               /**< Bit mask for RAC_PGABWMODE                  */
#define _RAC_PGACTRL_PGABWMODE_DEFAULT                                0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGABWMODE_bw_5MHz                                0x00000000UL                                        /**< Mode bw_5MHz for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGABWMODE_bw_2p5MHz                              0x00000001UL                                        /**< Mode bw_2p5MHz for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGABWMODE_bw_1p67MHz                             0x00000002UL                                        /**< Mode bw_1p67MHz for RAC_PGACTRL             */
#define _RAC_PGACTRL_PGABWMODE_bw_1p25MHz                             0x00000003UL                                        /**< Mode bw_1p25MHz for RAC_PGACTRL             */
#define RAC_PGACTRL_PGABWMODE_DEFAULT                                 (_RAC_PGACTRL_PGABWMODE_DEFAULT << 0)               /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGABWMODE_bw_5MHz                                 (_RAC_PGACTRL_PGABWMODE_bw_5MHz << 0)               /**< Shifted mode bw_5MHz for RAC_PGACTRL        */
#define RAC_PGACTRL_PGABWMODE_bw_2p5MHz                               (_RAC_PGACTRL_PGABWMODE_bw_2p5MHz << 0)             /**< Shifted mode bw_2p5MHz for RAC_PGACTRL      */
#define RAC_PGACTRL_PGABWMODE_bw_1p67MHz                              (_RAC_PGACTRL_PGABWMODE_bw_1p67MHz << 0)            /**< Shifted mode bw_1p67MHz for RAC_PGACTRL     */
#define RAC_PGACTRL_PGABWMODE_bw_1p25MHz                              (_RAC_PGACTRL_PGABWMODE_bw_1p25MHz << 0)            /**< Shifted mode bw_1p25MHz for RAC_PGACTRL     */
#define RAC_PGACTRL_PGAENBIAS                                         (0x1UL << 2)                                        /**< PGAENBIAS                                   */
#define _RAC_PGACTRL_PGAENBIAS_SHIFT                                  2                                                   /**< Shift value for RAC_PGAENBIAS               */
#define _RAC_PGACTRL_PGAENBIAS_MASK                                   0x4UL                                               /**< Bit mask for RAC_PGAENBIAS                  */
#define _RAC_PGACTRL_PGAENBIAS_DEFAULT                                0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENBIAS_bias_disable                           0x00000000UL                                        /**< Mode bias_disable for RAC_PGACTRL           */
#define _RAC_PGACTRL_PGAENBIAS_bias_enable                            0x00000001UL                                        /**< Mode bias_enable for RAC_PGACTRL            */
#define RAC_PGACTRL_PGAENBIAS_DEFAULT                                 (_RAC_PGACTRL_PGAENBIAS_DEFAULT << 2)               /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENBIAS_bias_disable                            (_RAC_PGACTRL_PGAENBIAS_bias_disable << 2)          /**< Shifted mode bias_disable for RAC_PGACTRL   */
#define RAC_PGACTRL_PGAENBIAS_bias_enable                             (_RAC_PGACTRL_PGAENBIAS_bias_enable << 2)           /**< Shifted mode bias_enable for RAC_PGACTRL    */
#define RAC_PGACTRL_PGAENGHZ                                          (0x1UL << 3)                                        /**< PGAENGHZ                                    */
#define _RAC_PGACTRL_PGAENGHZ_SHIFT                                   3                                                   /**< Shift value for RAC_PGAENGHZ                */
#define _RAC_PGACTRL_PGAENGHZ_MASK                                    0x8UL                                               /**< Bit mask for RAC_PGAENGHZ                   */
#define _RAC_PGACTRL_PGAENGHZ_DEFAULT                                 0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENGHZ_ghz_disable                             0x00000000UL                                        /**< Mode ghz_disable for RAC_PGACTRL            */
#define _RAC_PGACTRL_PGAENGHZ_ghz_enable                              0x00000001UL                                        /**< Mode ghz_enable for RAC_PGACTRL             */
#define RAC_PGACTRL_PGAENGHZ_DEFAULT                                  (_RAC_PGACTRL_PGAENGHZ_DEFAULT << 3)                /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENGHZ_ghz_disable                              (_RAC_PGACTRL_PGAENGHZ_ghz_disable << 3)            /**< Shifted mode ghz_disable for RAC_PGACTRL    */
#define RAC_PGACTRL_PGAENGHZ_ghz_enable                               (_RAC_PGACTRL_PGAENGHZ_ghz_enable << 3)             /**< Shifted mode ghz_enable for RAC_PGACTRL     */
#define RAC_PGACTRL_PGAENLATCHI                                       (0x1UL << 5)                                        /**< PGAENLATCHI                                 */
#define _RAC_PGACTRL_PGAENLATCHI_SHIFT                                5                                                   /**< Shift value for RAC_PGAENLATCHI             */
#define _RAC_PGACTRL_PGAENLATCHI_MASK                                 0x20UL                                              /**< Bit mask for RAC_PGAENLATCHI                */
#define _RAC_PGACTRL_PGAENLATCHI_DEFAULT                              0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENLATCHI_pkd_latch_i_disable                  0x00000000UL                                        /**< Mode pkd_latch_i_disable for RAC_PGACTRL    */
#define _RAC_PGACTRL_PGAENLATCHI_pkd_latch_i_enable                   0x00000001UL                                        /**< Mode pkd_latch_i_enable for RAC_PGACTRL     */
#define RAC_PGACTRL_PGAENLATCHI_DEFAULT                               (_RAC_PGACTRL_PGAENLATCHI_DEFAULT << 5)             /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENLATCHI_pkd_latch_i_disable                   (_RAC_PGACTRL_PGAENLATCHI_pkd_latch_i_disable << 5) /**< Shifted mode pkd_latch_i_disable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENLATCHI_pkd_latch_i_enable                    (_RAC_PGACTRL_PGAENLATCHI_pkd_latch_i_enable << 5)  /**< Shifted mode pkd_latch_i_enable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENLATCHQ                                       (0x1UL << 6)                                        /**< PGAENLATCHQ                                 */
#define _RAC_PGACTRL_PGAENLATCHQ_SHIFT                                6                                                   /**< Shift value for RAC_PGAENLATCHQ             */
#define _RAC_PGACTRL_PGAENLATCHQ_MASK                                 0x40UL                                              /**< Bit mask for RAC_PGAENLATCHQ                */
#define _RAC_PGACTRL_PGAENLATCHQ_DEFAULT                              0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENLATCHQ_pkd_latch_q_disable                  0x00000000UL                                        /**< Mode pkd_latch_q_disable for RAC_PGACTRL    */
#define _RAC_PGACTRL_PGAENLATCHQ_pkd_latch_q_enable                   0x00000001UL                                        /**< Mode pkd_latch_q_enable for RAC_PGACTRL     */
#define RAC_PGACTRL_PGAENLATCHQ_DEFAULT                               (_RAC_PGACTRL_PGAENLATCHQ_DEFAULT << 6)             /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENLATCHQ_pkd_latch_q_disable                   (_RAC_PGACTRL_PGAENLATCHQ_pkd_latch_q_disable << 6) /**< Shifted mode pkd_latch_q_disable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENLATCHQ_pkd_latch_q_enable                    (_RAC_PGACTRL_PGAENLATCHQ_pkd_latch_q_enable << 6)  /**< Shifted mode pkd_latch_q_enable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENLDOLOAD                                      (0x1UL << 7)                                        /**< PGAENLDOLOAD                                */
#define _RAC_PGACTRL_PGAENLDOLOAD_SHIFT                               7                                                   /**< Shift value for RAC_PGAENLDOLOAD            */
#define _RAC_PGACTRL_PGAENLDOLOAD_MASK                                0x80UL                                              /**< Bit mask for RAC_PGAENLDOLOAD               */
#define _RAC_PGACTRL_PGAENLDOLOAD_DEFAULT                             0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENLDOLOAD_disable_ldo_load                    0x00000000UL                                        /**< Mode disable_ldo_load for RAC_PGACTRL       */
#define _RAC_PGACTRL_PGAENLDOLOAD_enable_ldo_load                     0x00000001UL                                        /**< Mode enable_ldo_load for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENLDOLOAD_DEFAULT                              (_RAC_PGACTRL_PGAENLDOLOAD_DEFAULT << 7)            /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENLDOLOAD_disable_ldo_load                     (_RAC_PGACTRL_PGAENLDOLOAD_disable_ldo_load << 7)   /**< Shifted mode disable_ldo_load for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENLDOLOAD_enable_ldo_load                      (_RAC_PGACTRL_PGAENLDOLOAD_enable_ldo_load << 7)    /**< Shifted mode enable_ldo_load for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENPGAI                                         (0x1UL << 9)                                        /**< PGAENPGAI                                   */
#define _RAC_PGACTRL_PGAENPGAI_SHIFT                                  9                                                   /**< Shift value for RAC_PGAENPGAI               */
#define _RAC_PGACTRL_PGAENPGAI_MASK                                   0x200UL                                             /**< Bit mask for RAC_PGAENPGAI                  */
#define _RAC_PGACTRL_PGAENPGAI_DEFAULT                                0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENPGAI_pgai_disable                           0x00000000UL                                        /**< Mode pgai_disable for RAC_PGACTRL           */
#define _RAC_PGACTRL_PGAENPGAI_pgai_enable                            0x00000001UL                                        /**< Mode pgai_enable for RAC_PGACTRL            */
#define RAC_PGACTRL_PGAENPGAI_DEFAULT                                 (_RAC_PGACTRL_PGAENPGAI_DEFAULT << 9)               /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENPGAI_pgai_disable                            (_RAC_PGACTRL_PGAENPGAI_pgai_disable << 9)          /**< Shifted mode pgai_disable for RAC_PGACTRL   */
#define RAC_PGACTRL_PGAENPGAI_pgai_enable                             (_RAC_PGACTRL_PGAENPGAI_pgai_enable << 9)           /**< Shifted mode pgai_enable for RAC_PGACTRL    */
#define RAC_PGACTRL_PGAENPGAQ                                         (0x1UL << 10)                                       /**< PGAENPGAQ                                   */
#define _RAC_PGACTRL_PGAENPGAQ_SHIFT                                  10                                                  /**< Shift value for RAC_PGAENPGAQ               */
#define _RAC_PGACTRL_PGAENPGAQ_MASK                                   0x400UL                                             /**< Bit mask for RAC_PGAENPGAQ                  */
#define _RAC_PGACTRL_PGAENPGAQ_DEFAULT                                0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENPGAQ_pgaq_disable                           0x00000000UL                                        /**< Mode pgaq_disable for RAC_PGACTRL           */
#define _RAC_PGACTRL_PGAENPGAQ_pgaq_enable                            0x00000001UL                                        /**< Mode pgaq_enable for RAC_PGACTRL            */
#define RAC_PGACTRL_PGAENPGAQ_DEFAULT                                 (_RAC_PGACTRL_PGAENPGAQ_DEFAULT << 10)              /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENPGAQ_pgaq_disable                            (_RAC_PGACTRL_PGAENPGAQ_pgaq_disable << 10)         /**< Shifted mode pgaq_disable for RAC_PGACTRL   */
#define RAC_PGACTRL_PGAENPGAQ_pgaq_enable                             (_RAC_PGACTRL_PGAENPGAQ_pgaq_enable << 10)          /**< Shifted mode pgaq_enable for RAC_PGACTRL    */
#define RAC_PGACTRL_PGAENPKD                                          (0x1UL << 11)                                       /**< PGAENPKD                                    */
#define _RAC_PGACTRL_PGAENPKD_SHIFT                                   11                                                  /**< Shift value for RAC_PGAENPKD                */
#define _RAC_PGACTRL_PGAENPKD_MASK                                    0x800UL                                             /**< Bit mask for RAC_PGAENPKD                   */
#define _RAC_PGACTRL_PGAENPKD_DEFAULT                                 0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENPKD_pkd_disable                             0x00000000UL                                        /**< Mode pkd_disable for RAC_PGACTRL            */
#define _RAC_PGACTRL_PGAENPKD_pkd_enable                              0x00000001UL                                        /**< Mode pkd_enable for RAC_PGACTRL             */
#define RAC_PGACTRL_PGAENPKD_DEFAULT                                  (_RAC_PGACTRL_PGAENPKD_DEFAULT << 11)               /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENPKD_pkd_disable                              (_RAC_PGACTRL_PGAENPKD_pkd_disable << 11)           /**< Shifted mode pkd_disable for RAC_PGACTRL    */
#define RAC_PGACTRL_PGAENPKD_pkd_enable                               (_RAC_PGACTRL_PGAENPKD_pkd_enable << 11)            /**< Shifted mode pkd_enable for RAC_PGACTRL     */
#define RAC_PGACTRL_PGAENRCMOUT                                       (0x1UL << 12)                                       /**< PGAENRCMOUT                                 */
#define _RAC_PGACTRL_PGAENRCMOUT_SHIFT                                12                                                  /**< Shift value for RAC_PGAENRCMOUT             */
#define _RAC_PGACTRL_PGAENRCMOUT_MASK                                 0x1000UL                                            /**< Bit mask for RAC_PGAENRCMOUT                */
#define _RAC_PGACTRL_PGAENRCMOUT_DEFAULT                              0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENRCMOUT_rcm_out_disable                      0x00000000UL                                        /**< Mode rcm_out_disable for RAC_PGACTRL        */
#define _RAC_PGACTRL_PGAENRCMOUT_rcm_out_enable                       0x00000001UL                                        /**< Mode rcm_out_enable for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAENRCMOUT_DEFAULT                               (_RAC_PGACTRL_PGAENRCMOUT_DEFAULT << 12)            /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENRCMOUT_rcm_out_disable                       (_RAC_PGACTRL_PGAENRCMOUT_rcm_out_disable << 12)    /**< Shifted mode rcm_out_disable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENRCMOUT_rcm_out_enable                        (_RAC_PGACTRL_PGAENRCMOUT_rcm_out_enable << 12)     /**< Shifted mode rcm_out_enable for RAC_PGACTRL */
#define _RAC_PGACTRL_PGAPOWERMODE_SHIFT                               14                                                  /**< Shift value for RAC_PGAPOWERMODE            */
#define _RAC_PGACTRL_PGAPOWERMODE_MASK                                0xC000UL                                            /**< Bit mask for RAC_PGAPOWERMODE               */
#define _RAC_PGACTRL_PGAPOWERMODE_DEFAULT                             0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAPOWERMODE_pm_typ                              0x00000000UL                                        /**< Mode pm_typ for RAC_PGACTRL                 */
#define _RAC_PGACTRL_PGAPOWERMODE_pm_0p9                              0x00000001UL                                        /**< Mode pm_0p9 for RAC_PGACTRL                 */
#define _RAC_PGACTRL_PGAPOWERMODE_pm_1p2                              0x00000002UL                                        /**< Mode pm_1p2 for RAC_PGACTRL                 */
#define _RAC_PGACTRL_PGAPOWERMODE_pm_0p8                              0x00000003UL                                        /**< Mode pm_0p8 for RAC_PGACTRL                 */
#define RAC_PGACTRL_PGAPOWERMODE_DEFAULT                              (_RAC_PGACTRL_PGAPOWERMODE_DEFAULT << 14)           /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAPOWERMODE_pm_typ                               (_RAC_PGACTRL_PGAPOWERMODE_pm_typ << 14)            /**< Shifted mode pm_typ for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAPOWERMODE_pm_0p9                               (_RAC_PGACTRL_PGAPOWERMODE_pm_0p9 << 14)            /**< Shifted mode pm_0p9 for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAPOWERMODE_pm_1p2                               (_RAC_PGACTRL_PGAPOWERMODE_pm_1p2 << 14)            /**< Shifted mode pm_1p2 for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAPOWERMODE_pm_0p8                               (_RAC_PGACTRL_PGAPOWERMODE_pm_0p8 << 14)            /**< Shifted mode pm_0p8 for RAC_PGACTRL         */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_SHIFT                             16                                                  /**< Shift value for RAC_PGATHRPKDLOSEL          */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_MASK                              0xF0000UL                                           /**< Bit mask for RAC_PGATHRPKDLOSEL             */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_DEFAULT                           0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref50mv                          0x00000000UL                                        /**< Mode vref50mv for RAC_PGACTRL               */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref75mv                          0x00000001UL                                        /**< Mode vref75mv for RAC_PGACTRL               */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref100mv                         0x00000002UL                                        /**< Mode vref100mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref125mv                         0x00000003UL                                        /**< Mode vref125mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref150mv                         0x00000004UL                                        /**< Mode vref150mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref175mv                         0x00000005UL                                        /**< Mode vref175mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref200mv                         0x00000006UL                                        /**< Mode vref200mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref225mv                         0x00000007UL                                        /**< Mode vref225mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref250mv                         0x00000008UL                                        /**< Mode vref250mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref275mv                         0x00000009UL                                        /**< Mode vref275mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDLOSEL_vref300mv                         0x0000000AUL                                        /**< Mode vref300mv for RAC_PGACTRL              */
#define RAC_PGACTRL_PGATHRPKDLOSEL_DEFAULT                            (_RAC_PGACTRL_PGATHRPKDLOSEL_DEFAULT << 16)         /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref50mv                           (_RAC_PGACTRL_PGATHRPKDLOSEL_vref50mv << 16)        /**< Shifted mode vref50mv for RAC_PGACTRL       */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref75mv                           (_RAC_PGACTRL_PGATHRPKDLOSEL_vref75mv << 16)        /**< Shifted mode vref75mv for RAC_PGACTRL       */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref100mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref100mv << 16)       /**< Shifted mode vref100mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref125mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref125mv << 16)       /**< Shifted mode vref125mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref150mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref150mv << 16)       /**< Shifted mode vref150mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref175mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref175mv << 16)       /**< Shifted mode vref175mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref200mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref200mv << 16)       /**< Shifted mode vref200mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref225mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref225mv << 16)       /**< Shifted mode vref225mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref250mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref250mv << 16)       /**< Shifted mode vref250mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref275mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref275mv << 16)       /**< Shifted mode vref275mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDLOSEL_vref300mv                          (_RAC_PGACTRL_PGATHRPKDLOSEL_vref300mv << 16)       /**< Shifted mode vref300mv for RAC_PGACTRL      */
#define _RAC_PGACTRL_PGATHRPKDHISEL_SHIFT                             20                                                  /**< Shift value for RAC_PGATHRPKDHISEL          */
#define _RAC_PGACTRL_PGATHRPKDHISEL_MASK                              0xF00000UL                                          /**< Bit mask for RAC_PGATHRPKDHISEL             */
#define _RAC_PGACTRL_PGATHRPKDHISEL_DEFAULT                           0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref50mv                          0x00000000UL                                        /**< Mode vref50mv for RAC_PGACTRL               */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref75mv                          0x00000001UL                                        /**< Mode vref75mv for RAC_PGACTRL               */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref100mv                         0x00000002UL                                        /**< Mode vref100mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref125mv                         0x00000003UL                                        /**< Mode vref125mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_verf150mv                         0x00000004UL                                        /**< Mode verf150mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref175mv                         0x00000005UL                                        /**< Mode vref175mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref200mv                         0x00000006UL                                        /**< Mode vref200mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref225mv                         0x00000007UL                                        /**< Mode vref225mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref250mv                         0x00000008UL                                        /**< Mode vref250mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref275mv                         0x00000009UL                                        /**< Mode vref275mv for RAC_PGACTRL              */
#define _RAC_PGACTRL_PGATHRPKDHISEL_vref300mv                         0x0000000AUL                                        /**< Mode vref300mv for RAC_PGACTRL              */
#define RAC_PGACTRL_PGATHRPKDHISEL_DEFAULT                            (_RAC_PGACTRL_PGATHRPKDHISEL_DEFAULT << 20)         /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref50mv                           (_RAC_PGACTRL_PGATHRPKDHISEL_vref50mv << 20)        /**< Shifted mode vref50mv for RAC_PGACTRL       */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref75mv                           (_RAC_PGACTRL_PGATHRPKDHISEL_vref75mv << 20)        /**< Shifted mode vref75mv for RAC_PGACTRL       */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref100mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref100mv << 20)       /**< Shifted mode vref100mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref125mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref125mv << 20)       /**< Shifted mode vref125mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_verf150mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_verf150mv << 20)       /**< Shifted mode verf150mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref175mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref175mv << 20)       /**< Shifted mode vref175mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref200mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref200mv << 20)       /**< Shifted mode vref200mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref225mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref225mv << 20)       /**< Shifted mode vref225mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref250mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref250mv << 20)       /**< Shifted mode vref250mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref275mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref275mv << 20)       /**< Shifted mode vref275mv for RAC_PGACTRL      */
#define RAC_PGACTRL_PGATHRPKDHISEL_vref300mv                          (_RAC_PGACTRL_PGATHRPKDHISEL_vref300mv << 20)       /**< Shifted mode vref300mv for RAC_PGACTRL      */
#define _RAC_PGACTRL_LNAMIXRFPKDTHRESHSEL_SHIFT                       24                                                  /**< Shift value for RAC_LNAMIXRFPKDTHRESHSEL    */
#define _RAC_PGACTRL_LNAMIXRFPKDTHRESHSEL_MASK                        0x7000000UL                                         /**< Bit mask for RAC_LNAMIXRFPKDTHRESHSEL       */
#define _RAC_PGACTRL_LNAMIXRFPKDTHRESHSEL_DEFAULT                     0x00000004UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define RAC_PGACTRL_LNAMIXRFPKDTHRESHSEL_DEFAULT                      (_RAC_PGACTRL_LNAMIXRFPKDTHRESHSEL_DEFAULT << 24)   /**< Shifted mode DEFAULT for RAC_PGACTRL        */

/* Bit fields for RAC RFBIASCAL */
#define _RAC_RFBIASCAL_RESETVALUE                                     0x30203020UL                                        /**< Default value for RAC_RFBIASCAL             */
#define _RAC_RFBIASCAL_MASK                                           0x3F3F3F3FUL                                        /**< Mask for RAC_RFBIASCAL                      */
#define _RAC_RFBIASCAL_RFBIASCALBIAS_SHIFT                            0                                                   /**< Shift value for RAC_RFBIASCALBIAS           */
#define _RAC_RFBIASCAL_RFBIASCALBIAS_MASK                             0x3FUL                                              /**< Bit mask for RAC_RFBIASCALBIAS              */
#define _RAC_RFBIASCAL_RFBIASCALBIAS_DEFAULT                          0x00000020UL                                        /**< Mode DEFAULT for RAC_RFBIASCAL              */
#define RAC_RFBIASCAL_RFBIASCALBIAS_DEFAULT                           (_RAC_RFBIASCAL_RFBIASCALBIAS_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_RFBIASCAL      */
#define _RAC_RFBIASCAL_RFBIASCALTC_SHIFT                              8                                                   /**< Shift value for RAC_RFBIASCALTC             */
#define _RAC_RFBIASCAL_RFBIASCALTC_MASK                               0x3F00UL                                            /**< Bit mask for RAC_RFBIASCALTC                */
#define _RAC_RFBIASCAL_RFBIASCALTC_DEFAULT                            0x00000030UL                                        /**< Mode DEFAULT for RAC_RFBIASCAL              */
#define RAC_RFBIASCAL_RFBIASCALTC_DEFAULT                             (_RAC_RFBIASCAL_RFBIASCALTC_DEFAULT << 8)           /**< Shifted mode DEFAULT for RAC_RFBIASCAL      */
#define _RAC_RFBIASCAL_RFBIASCALVREF_SHIFT                            16                                                  /**< Shift value for RAC_RFBIASCALVREF           */
#define _RAC_RFBIASCAL_RFBIASCALVREF_MASK                             0x3F0000UL                                          /**< Bit mask for RAC_RFBIASCALVREF              */
#define _RAC_RFBIASCAL_RFBIASCALVREF_DEFAULT                          0x00000020UL                                        /**< Mode DEFAULT for RAC_RFBIASCAL              */
#define RAC_RFBIASCAL_RFBIASCALVREF_DEFAULT                           (_RAC_RFBIASCAL_RFBIASCALVREF_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_RFBIASCAL      */
#define _RAC_RFBIASCAL_RFBIASCALVREFSTARTUP_SHIFT                     24                                                  /**< Shift value for RAC_RFBIASCALVREFSTARTUP    */
#define _RAC_RFBIASCAL_RFBIASCALVREFSTARTUP_MASK                      0x3F000000UL                                        /**< Bit mask for RAC_RFBIASCALVREFSTARTUP       */
#define _RAC_RFBIASCAL_RFBIASCALVREFSTARTUP_DEFAULT                   0x00000030UL                                        /**< Mode DEFAULT for RAC_RFBIASCAL              */
#define RAC_RFBIASCAL_RFBIASCALVREFSTARTUP_DEFAULT                    (_RAC_RFBIASCAL_RFBIASCALVREFSTARTUP_DEFAULT << 24) /**< Shifted mode DEFAULT for RAC_RFBIASCAL      */

/* Bit fields for RAC RFBIASCTRL */
#define _RAC_RFBIASCTRL_RESETVALUE                                    0x00040000UL                                                  /**< Default value for RAC_RFBIASCTRL            */
#define _RAC_RFBIASCTRL_MASK                                          0x000F001FUL                                                  /**< Mask for RAC_RFBIASCTRL                     */
#define RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP                         (0x1UL << 0)                                                  /**< RFBIASDISABLEBOOTSTRAP                      */
#define _RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_SHIFT                  0                                                             /**< Shift value for RAC_RFBIASDISABLEBOOTSTRAP  */
#define _RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_MASK                   0x1UL                                                         /**< Bit mask for RAC_RFBIASDISABLEBOOTSTRAP     */
#define _RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_DEFAULT                0x00000000UL                                                  /**< Mode DEFAULT for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_enable_startup         0x00000000UL                                                  /**< Mode enable_startup for RAC_RFBIASCTRL      */
#define _RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_disable_startup        0x00000001UL                                                  /**< Mode disable_startup for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_DEFAULT                 (_RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_enable_startup          (_RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_enable_startup << 0)  /**< Shifted mode enable_startup for RAC_RFBIASCTRL*/
#define RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_disable_startup         (_RAC_RFBIASCTRL_RFBIASDISABLEBOOTSTRAP_disable_startup << 0) /**< Shifted mode disable_startup for RAC_RFBIASCTRL*/
#define RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT                           (0x1UL << 1)                                                  /**< RFBIASLDOHIGHCURRENT                        */
#define _RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_SHIFT                    1                                                             /**< Shift value for RAC_RFBIASLDOHIGHCURRENT    */
#define _RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_MASK                     0x2UL                                                         /**< Bit mask for RAC_RFBIASLDOHIGHCURRENT       */
#define _RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_DEFAULT                  0x00000000UL                                                  /**< Mode DEFAULT for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_low_current              0x00000000UL                                                  /**< Mode low_current for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_high_current             0x00000001UL                                                  /**< Mode high_current for RAC_RFBIASCTRL        */
#define RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_DEFAULT                   (_RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_DEFAULT << 1)           /**< Shifted mode DEFAULT for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_low_current               (_RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_low_current << 1)       /**< Shifted mode low_current for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_high_current              (_RAC_RFBIASCTRL_RFBIASLDOHIGHCURRENT_high_current << 1)      /**< Shifted mode high_current for RAC_RFBIASCTRL*/
#define RAC_RFBIASCTRL_RFBIASNONFLASHMODE                             (0x1UL << 2)                                                  /**< RFBIASNONFLASHMODE                          */
#define _RAC_RFBIASCTRL_RFBIASNONFLASHMODE_SHIFT                      2                                                             /**< Shift value for RAC_RFBIASNONFLASHMODE      */
#define _RAC_RFBIASCTRL_RFBIASNONFLASHMODE_MASK                       0x4UL                                                         /**< Bit mask for RAC_RFBIASNONFLASHMODE         */
#define _RAC_RFBIASCTRL_RFBIASNONFLASHMODE_DEFAULT                    0x00000000UL                                                  /**< Mode DEFAULT for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASNONFLASHMODE_flash_process              0x00000000UL                                                  /**< Mode flash_process for RAC_RFBIASCTRL       */
#define _RAC_RFBIASCTRL_RFBIASNONFLASHMODE_non_flash_process          0x00000001UL                                                  /**< Mode non_flash_process for RAC_RFBIASCTRL   */
#define RAC_RFBIASCTRL_RFBIASNONFLASHMODE_DEFAULT                     (_RAC_RFBIASCTRL_RFBIASNONFLASHMODE_DEFAULT << 2)             /**< Shifted mode DEFAULT for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASNONFLASHMODE_flash_process               (_RAC_RFBIASCTRL_RFBIASNONFLASHMODE_flash_process << 2)       /**< Shifted mode flash_process for RAC_RFBIASCTRL*/
#define RAC_RFBIASCTRL_RFBIASNONFLASHMODE_non_flash_process           (_RAC_RFBIASCTRL_RFBIASNONFLASHMODE_non_flash_process << 2)   /**< Shifted mode non_flash_process for RAC_RFBIASCTRL*/
#define RAC_RFBIASCTRL_RFBIASSTARTUPCORE                              (0x1UL << 3)                                                  /**< RFBIASSTARTUPCORE                           */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPCORE_SHIFT                       3                                                             /**< Shift value for RAC_RFBIASSTARTUPCORE       */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPCORE_MASK                        0x8UL                                                         /**< Bit mask for RAC_RFBIASSTARTUPCORE          */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPCORE_DEFAULT                     0x00000000UL                                                  /**< Mode DEFAULT for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPCORE_default                     0x00000000UL                                                  /**< Mode default for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPCORE_force_start                 0x00000001UL                                                  /**< Mode force_start for RAC_RFBIASCTRL         */
#define RAC_RFBIASCTRL_RFBIASSTARTUPCORE_DEFAULT                      (_RAC_RFBIASCTRL_RFBIASSTARTUPCORE_DEFAULT << 3)              /**< Shifted mode DEFAULT for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASSTARTUPCORE_default                      (_RAC_RFBIASCTRL_RFBIASSTARTUPCORE_default << 3)              /**< Shifted mode default for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASSTARTUPCORE_force_start                  (_RAC_RFBIASCTRL_RFBIASSTARTUPCORE_force_start << 3)          /**< Shifted mode force_start for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY                            (0x1UL << 4)                                                  /**< RFBIASSTARTUPSUPPLY                         */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_SHIFT                     4                                                             /**< Shift value for RAC_RFBIASSTARTUPSUPPLY     */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_MASK                      0x10UL                                                        /**< Bit mask for RAC_RFBIASSTARTUPSUPPLY        */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_DEFAULT                   0x00000000UL                                                  /**< Mode DEFAULT for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_default                   0x00000000UL                                                  /**< Mode default for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_forc_start                0x00000001UL                                                  /**< Mode forc_start for RAC_RFBIASCTRL          */
#define RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_DEFAULT                    (_RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_DEFAULT << 4)            /**< Shifted mode DEFAULT for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_default                    (_RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_default << 4)            /**< Shifted mode default for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_forc_start                 (_RAC_RFBIASCTRL_RFBIASSTARTUPSUPPLY_forc_start << 4)         /**< Shifted mode forc_start for RAC_RFBIASCTRL  */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_SHIFT                       16                                                            /**< Shift value for RAC_RFBIASLDOVREFTRIM       */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_MASK                        0xF0000UL                                                     /**< Bit mask for RAC_RFBIASLDOVREFTRIM          */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_DEFAULT                     0x00000004UL                                                  /**< Mode DEFAULT for RAC_RFBIASCTRL             */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p800                 0x00000000UL                                                  /**< Mode vref_v0p800 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p813                 0x00000001UL                                                  /**< Mode vref_v0p813 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p825                 0x00000002UL                                                  /**< Mode vref_v0p825 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p837                 0x00000003UL                                                  /**< Mode vref_v0p837 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p850                 0x00000004UL                                                  /**< Mode vref_v0p850 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p863                 0x00000005UL                                                  /**< Mode vref_v0p863 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p875                 0x00000006UL                                                  /**< Mode vref_v0p875 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p887                 0x00000007UL                                                  /**< Mode vref_v0p887 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p900                 0x00000008UL                                                  /**< Mode vref_v0p900 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p913                 0x00000009UL                                                  /**< Mode vref_v0p913 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p925                 0x0000000AUL                                                  /**< Mode vref_v0p925 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p938                 0x0000000BUL                                                  /**< Mode vref_v0p938 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p950                 0x0000000CUL                                                  /**< Mode vref_v0p950 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p963                 0x0000000DUL                                                  /**< Mode vref_v0p963 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p975                 0x0000000EUL                                                  /**< Mode vref_v0p975 for RAC_RFBIASCTRL         */
#define _RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p988                 0x0000000FUL                                                  /**< Mode vref_v0p988 for RAC_RFBIASCTRL         */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_DEFAULT                      (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_DEFAULT << 16)             /**< Shifted mode DEFAULT for RAC_RFBIASCTRL     */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p800                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p800 << 16)         /**< Shifted mode vref_v0p800 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p813                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p813 << 16)         /**< Shifted mode vref_v0p813 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p825                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p825 << 16)         /**< Shifted mode vref_v0p825 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p837                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p837 << 16)         /**< Shifted mode vref_v0p837 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p850                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p850 << 16)         /**< Shifted mode vref_v0p850 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p863                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p863 << 16)         /**< Shifted mode vref_v0p863 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p875                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p875 << 16)         /**< Shifted mode vref_v0p875 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p887                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p887 << 16)         /**< Shifted mode vref_v0p887 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p900                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p900 << 16)         /**< Shifted mode vref_v0p900 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p913                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p913 << 16)         /**< Shifted mode vref_v0p913 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p925                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p925 << 16)         /**< Shifted mode vref_v0p925 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p938                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p938 << 16)         /**< Shifted mode vref_v0p938 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p950                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p950 << 16)         /**< Shifted mode vref_v0p950 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p963                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p963 << 16)         /**< Shifted mode vref_v0p963 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p975                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p975 << 16)         /**< Shifted mode vref_v0p975 for RAC_RFBIASCTRL */
#define RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p988                  (_RAC_RFBIASCTRL_RFBIASLDOVREFTRIM_vref_v0p988 << 16)         /**< Shifted mode vref_v0p988 for RAC_RFBIASCTRL */

/* Bit fields for RAC RADIOEN */
#define _RAC_RADIOEN_RESETVALUE                                       0x00000000UL                                      /**< Default value for RAC_RADIOEN               */
#define _RAC_RADIOEN_MASK                                             0x00000007UL                                      /**< Mask for RAC_RADIOEN                        */
#define RAC_RADIOEN_PREEN                                             (0x1UL << 0)                                      /**< PREEN                                       */
#define _RAC_RADIOEN_PREEN_SHIFT                                      0                                                 /**< Shift value for RAC_PREEN                   */
#define _RAC_RADIOEN_PREEN_MASK                                       0x1UL                                             /**< Bit mask for RAC_PREEN                      */
#define _RAC_RADIOEN_PREEN_DEFAULT                                    0x00000000UL                                      /**< Mode DEFAULT for RAC_RADIOEN                */
#define _RAC_RADIOEN_PREEN_powered_off                                0x00000000UL                                      /**< Mode powered_off for RAC_RADIOEN            */
#define _RAC_RADIOEN_PREEN_powered_on                                 0x00000001UL                                      /**< Mode powered_on for RAC_RADIOEN             */
#define RAC_RADIOEN_PREEN_DEFAULT                                     (_RAC_RADIOEN_PREEN_DEFAULT << 0)                 /**< Shifted mode DEFAULT for RAC_RADIOEN        */
#define RAC_RADIOEN_PREEN_powered_off                                 (_RAC_RADIOEN_PREEN_powered_off << 0)             /**< Shifted mode powered_off for RAC_RADIOEN    */
#define RAC_RADIOEN_PREEN_powered_on                                  (_RAC_RADIOEN_PREEN_powered_on << 0)              /**< Shifted mode powered_on for RAC_RADIOEN     */
#define RAC_RADIOEN_PRESTB100UDIS                                     (0x1UL << 1)                                      /**< PRESTB100UDIS                               */
#define _RAC_RADIOEN_PRESTB100UDIS_SHIFT                              1                                                 /**< Shift value for RAC_PRESTB100UDIS           */
#define _RAC_RADIOEN_PRESTB100UDIS_MASK                               0x2UL                                             /**< Bit mask for RAC_PRESTB100UDIS              */
#define _RAC_RADIOEN_PRESTB100UDIS_DEFAULT                            0x00000000UL                                      /**< Mode DEFAULT for RAC_RADIOEN                */
#define _RAC_RADIOEN_PRESTB100UDIS_i100ua_enabled                     0x00000000UL                                      /**< Mode i100ua_enabled for RAC_RADIOEN         */
#define _RAC_RADIOEN_PRESTB100UDIS_i100ua_disabled                    0x00000001UL                                      /**< Mode i100ua_disabled for RAC_RADIOEN        */
#define RAC_RADIOEN_PRESTB100UDIS_DEFAULT                             (_RAC_RADIOEN_PRESTB100UDIS_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_RADIOEN        */
#define RAC_RADIOEN_PRESTB100UDIS_i100ua_enabled                      (_RAC_RADIOEN_PRESTB100UDIS_i100ua_enabled << 1)  /**< Shifted mode i100ua_enabled for RAC_RADIOEN */
#define RAC_RADIOEN_PRESTB100UDIS_i100ua_disabled                     (_RAC_RADIOEN_PRESTB100UDIS_i100ua_disabled << 1) /**< Shifted mode i100ua_disabled for RAC_RADIOEN*/
#define RAC_RADIOEN_RFBIASEN                                          (0x1UL << 2)                                      /**< RFBIASEN                                    */
#define _RAC_RADIOEN_RFBIASEN_SHIFT                                   2                                                 /**< Shift value for RAC_RFBIASEN                */
#define _RAC_RADIOEN_RFBIASEN_MASK                                    0x4UL                                             /**< Bit mask for RAC_RFBIASEN                   */
#define _RAC_RADIOEN_RFBIASEN_DEFAULT                                 0x00000000UL                                      /**< Mode DEFAULT for RAC_RADIOEN                */
#define _RAC_RADIOEN_RFBIASEN_disable_rfis_vtr                        0x00000000UL                                      /**< Mode disable_rfis_vtr for RAC_RADIOEN       */
#define _RAC_RADIOEN_RFBIASEN_enable_rfis_vtr                         0x00000001UL                                      /**< Mode enable_rfis_vtr for RAC_RADIOEN        */
#define RAC_RADIOEN_RFBIASEN_DEFAULT                                  (_RAC_RADIOEN_RFBIASEN_DEFAULT << 2)              /**< Shifted mode DEFAULT for RAC_RADIOEN        */
#define RAC_RADIOEN_RFBIASEN_disable_rfis_vtr                         (_RAC_RADIOEN_RFBIASEN_disable_rfis_vtr << 2)     /**< Shifted mode disable_rfis_vtr for RAC_RADIOEN*/
#define RAC_RADIOEN_RFBIASEN_enable_rfis_vtr                          (_RAC_RADIOEN_RFBIASEN_enable_rfis_vtr << 2)      /**< Shifted mode enable_rfis_vtr for RAC_RADIOEN*/

/* Bit fields for RAC RFPATHEN */
#define _RAC_RFPATHEN_RESETVALUE                                      0x00000004UL                                     /**< Default value for RAC_RFPATHEN              */
#define _RAC_RFPATHEN_MASK                                            0x0000001EUL                                     /**< Mask for RAC_RFPATHEN                       */
#define RAC_RFPATHEN_LNAMIXEN                                         (0x1UL << 1)                                     /**< LNAMIXEN                                    */
#define _RAC_RFPATHEN_LNAMIXEN_SHIFT                                  1                                                /**< Shift value for RAC_LNAMIXEN                */
#define _RAC_RFPATHEN_LNAMIXEN_MASK                                   0x2UL                                            /**< Bit mask for RAC_LNAMIXEN                   */
#define _RAC_RFPATHEN_LNAMIXEN_DEFAULT                                0x00000000UL                                     /**< Mode DEFAULT for RAC_RFPATHEN               */
#define _RAC_RFPATHEN_LNAMIXEN_disable                                0x00000000UL                                     /**< Mode disable for RAC_RFPATHEN               */
#define _RAC_RFPATHEN_LNAMIXEN_enable                                 0x00000001UL                                     /**< Mode enable for RAC_RFPATHEN                */
#define RAC_RFPATHEN_LNAMIXEN_DEFAULT                                 (_RAC_RFPATHEN_LNAMIXEN_DEFAULT << 1)            /**< Shifted mode DEFAULT for RAC_RFPATHEN       */
#define RAC_RFPATHEN_LNAMIXEN_disable                                 (_RAC_RFPATHEN_LNAMIXEN_disable << 1)            /**< Shifted mode disable for RAC_RFPATHEN       */
#define RAC_RFPATHEN_LNAMIXEN_enable                                  (_RAC_RFPATHEN_LNAMIXEN_enable << 1)             /**< Shifted mode enable for RAC_RFPATHEN        */
#define RAC_RFPATHEN_LNAMIXRFATTDCEN                                  (0x1UL << 2)                                     /**< LNAMIXRFATTDCEN                             */
#define _RAC_RFPATHEN_LNAMIXRFATTDCEN_SHIFT                           2                                                /**< Shift value for RAC_LNAMIXRFATTDCEN         */
#define _RAC_RFPATHEN_LNAMIXRFATTDCEN_MASK                            0x4UL                                            /**< Bit mask for RAC_LNAMIXRFATTDCEN            */
#define _RAC_RFPATHEN_LNAMIXRFATTDCEN_DEFAULT                         0x00000001UL                                     /**< Mode DEFAULT for RAC_RFPATHEN               */
#define _RAC_RFPATHEN_LNAMIXRFATTDCEN_disable_dc                      0x00000000UL                                     /**< Mode disable_dc for RAC_RFPATHEN            */
#define _RAC_RFPATHEN_LNAMIXRFATTDCEN_enable_dc                       0x00000001UL                                     /**< Mode enable_dc for RAC_RFPATHEN             */
#define RAC_RFPATHEN_LNAMIXRFATTDCEN_DEFAULT                          (_RAC_RFPATHEN_LNAMIXRFATTDCEN_DEFAULT << 2)     /**< Shifted mode DEFAULT for RAC_RFPATHEN       */
#define RAC_RFPATHEN_LNAMIXRFATTDCEN_disable_dc                       (_RAC_RFPATHEN_LNAMIXRFATTDCEN_disable_dc << 2)  /**< Shifted mode disable_dc for RAC_RFPATHEN    */
#define RAC_RFPATHEN_LNAMIXRFATTDCEN_enable_dc                        (_RAC_RFPATHEN_LNAMIXRFATTDCEN_enable_dc << 2)   /**< Shifted mode enable_dc for RAC_RFPATHEN     */
#define RAC_RFPATHEN_LNAMIXRFPKDENRF                                  (0x1UL << 3)                                     /**< LNAMIXRFPKDENRF                             */
#define _RAC_RFPATHEN_LNAMIXRFPKDENRF_SHIFT                           3                                                /**< Shift value for RAC_LNAMIXRFPKDENRF         */
#define _RAC_RFPATHEN_LNAMIXRFPKDENRF_MASK                            0x8UL                                            /**< Bit mask for RAC_LNAMIXRFPKDENRF            */
#define _RAC_RFPATHEN_LNAMIXRFPKDENRF_DEFAULT                         0x00000000UL                                     /**< Mode DEFAULT for RAC_RFPATHEN               */
#define _RAC_RFPATHEN_LNAMIXRFPKDENRF_disable                         0x00000000UL                                     /**< Mode disable for RAC_RFPATHEN               */
#define _RAC_RFPATHEN_LNAMIXRFPKDENRF_enable_path                     0x00000001UL                                     /**< Mode enable_path for RAC_RFPATHEN           */
#define RAC_RFPATHEN_LNAMIXRFPKDENRF_DEFAULT                          (_RAC_RFPATHEN_LNAMIXRFPKDENRF_DEFAULT << 3)     /**< Shifted mode DEFAULT for RAC_RFPATHEN       */
#define RAC_RFPATHEN_LNAMIXRFPKDENRF_disable                          (_RAC_RFPATHEN_LNAMIXRFPKDENRF_disable << 3)     /**< Shifted mode disable for RAC_RFPATHEN       */
#define RAC_RFPATHEN_LNAMIXRFPKDENRF_enable_path                      (_RAC_RFPATHEN_LNAMIXRFPKDENRF_enable_path << 3) /**< Shifted mode enable_path for RAC_RFPATHEN   */
#define RAC_RFPATHEN_LNAMIXTRSW                                       (0x1UL << 4)                                     /**< LNAMIXTRSW                                  */
#define _RAC_RFPATHEN_LNAMIXTRSW_SHIFT                                4                                                /**< Shift value for RAC_LNAMIXTRSW              */
#define _RAC_RFPATHEN_LNAMIXTRSW_MASK                                 0x10UL                                           /**< Bit mask for RAC_LNAMIXTRSW                 */
#define _RAC_RFPATHEN_LNAMIXTRSW_DEFAULT                              0x00000000UL                                     /**< Mode DEFAULT for RAC_RFPATHEN               */
#define _RAC_RFPATHEN_LNAMIXTRSW_disabled                             0x00000000UL                                     /**< Mode disabled for RAC_RFPATHEN              */
#define _RAC_RFPATHEN_LNAMIXTRSW_enabled                              0x00000001UL                                     /**< Mode enabled for RAC_RFPATHEN               */
#define RAC_RFPATHEN_LNAMIXTRSW_DEFAULT                               (_RAC_RFPATHEN_LNAMIXTRSW_DEFAULT << 4)          /**< Shifted mode DEFAULT for RAC_RFPATHEN       */
#define RAC_RFPATHEN_LNAMIXTRSW_disabled                              (_RAC_RFPATHEN_LNAMIXTRSW_disabled << 4)         /**< Shifted mode disabled for RAC_RFPATHEN      */
#define RAC_RFPATHEN_LNAMIXTRSW_enabled                               (_RAC_RFPATHEN_LNAMIXTRSW_enabled << 4)          /**< Shifted mode enabled for RAC_RFPATHEN       */

/* Bit fields for RAC RX */
#define _RAC_RX_RESETVALUE                                            0x00000010UL                                       /**< Default value for RAC_RX                    */
#define _RAC_RX_MASK                                                  0x00000FFFUL                                       /**< Mask for RAC_RX                             */
#define RAC_RX_IFADCCAPRESET                                          (0x1UL << 0)                                       /**< IFADCCAPRESET                               */
#define _RAC_RX_IFADCCAPRESET_SHIFT                                   0                                                  /**< Shift value for RAC_IFADCCAPRESET           */
#define _RAC_RX_IFADCCAPRESET_MASK                                    0x1UL                                              /**< Bit mask for RAC_IFADCCAPRESET              */
#define _RAC_RX_IFADCCAPRESET_DEFAULT                                 0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_IFADCCAPRESET_cap_reset_disable                       0x00000000UL                                       /**< Mode cap_reset_disable for RAC_RX           */
#define _RAC_RX_IFADCCAPRESET_cap_reset_enable                        0x00000001UL                                       /**< Mode cap_reset_enable for RAC_RX            */
#define RAC_RX_IFADCCAPRESET_DEFAULT                                  (_RAC_RX_IFADCCAPRESET_DEFAULT << 0)               /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_IFADCCAPRESET_cap_reset_disable                        (_RAC_RX_IFADCCAPRESET_cap_reset_disable << 0)     /**< Shifted mode cap_reset_disable for RAC_RX   */
#define RAC_RX_IFADCCAPRESET_cap_reset_enable                         (_RAC_RX_IFADCCAPRESET_cap_reset_enable << 0)      /**< Shifted mode cap_reset_enable for RAC_RX    */
#define RAC_RX_IFADCENLDOSERIES                                       (0x1UL << 1)                                       /**< IFADCENLDOSERIES                            */
#define _RAC_RX_IFADCENLDOSERIES_SHIFT                                1                                                  /**< Shift value for RAC_IFADCENLDOSERIES        */
#define _RAC_RX_IFADCENLDOSERIES_MASK                                 0x2UL                                              /**< Bit mask for RAC_IFADCENLDOSERIES           */
#define _RAC_RX_IFADCENLDOSERIES_DEFAULT                              0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_IFADCENLDOSERIES_series_ldo_disable                   0x00000000UL                                       /**< Mode series_ldo_disable for RAC_RX          */
#define _RAC_RX_IFADCENLDOSERIES_series_ldo_enable                    0x00000001UL                                       /**< Mode series_ldo_enable for RAC_RX           */
#define RAC_RX_IFADCENLDOSERIES_DEFAULT                               (_RAC_RX_IFADCENLDOSERIES_DEFAULT << 1)            /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_IFADCENLDOSERIES_series_ldo_disable                    (_RAC_RX_IFADCENLDOSERIES_series_ldo_disable << 1) /**< Shifted mode series_ldo_disable for RAC_RX  */
#define RAC_RX_IFADCENLDOSERIES_series_ldo_enable                     (_RAC_RX_IFADCENLDOSERIES_series_ldo_enable << 1)  /**< Shifted mode series_ldo_enable for RAC_RX   */
#define RAC_RX_IFADCENLDOSHUNT                                        (0x1UL << 2)                                       /**< IFADCENLDOSHUNT                             */
#define _RAC_RX_IFADCENLDOSHUNT_SHIFT                                 2                                                  /**< Shift value for RAC_IFADCENLDOSHUNT         */
#define _RAC_RX_IFADCENLDOSHUNT_MASK                                  0x4UL                                              /**< Bit mask for RAC_IFADCENLDOSHUNT            */
#define _RAC_RX_IFADCENLDOSHUNT_DEFAULT                               0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_IFADCENLDOSHUNT_shunt_ldo_disable                     0x00000000UL                                       /**< Mode shunt_ldo_disable for RAC_RX           */
#define _RAC_RX_IFADCENLDOSHUNT_shunt_ldo_enable                      0x00000001UL                                       /**< Mode shunt_ldo_enable for RAC_RX            */
#define RAC_RX_IFADCENLDOSHUNT_DEFAULT                                (_RAC_RX_IFADCENLDOSHUNT_DEFAULT << 2)             /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_IFADCENLDOSHUNT_shunt_ldo_disable                      (_RAC_RX_IFADCENLDOSHUNT_shunt_ldo_disable << 2)   /**< Shifted mode shunt_ldo_disable for RAC_RX   */
#define RAC_RX_IFADCENLDOSHUNT_shunt_ldo_enable                       (_RAC_RX_IFADCENLDOSHUNT_shunt_ldo_enable << 2)    /**< Shifted mode shunt_ldo_enable for RAC_RX    */
#define RAC_RX_LNAMIXENRFPKD                                          (0x1UL << 3)                                       /**< LNAMIXENRFPKD                               */
#define _RAC_RX_LNAMIXENRFPKD_SHIFT                                   3                                                  /**< Shift value for RAC_LNAMIXENRFPKD           */
#define _RAC_RX_LNAMIXENRFPKD_MASK                                    0x8UL                                              /**< Bit mask for RAC_LNAMIXENRFPKD              */
#define _RAC_RX_LNAMIXENRFPKD_DEFAULT                                 0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_LNAMIXENRFPKD_disable                                 0x00000000UL                                       /**< Mode disable for RAC_RX                     */
#define _RAC_RX_LNAMIXENRFPKD_enable                                  0x00000001UL                                       /**< Mode enable for RAC_RX                      */
#define RAC_RX_LNAMIXENRFPKD_DEFAULT                                  (_RAC_RX_LNAMIXENRFPKD_DEFAULT << 3)               /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_LNAMIXENRFPKD_disable                                  (_RAC_RX_LNAMIXENRFPKD_disable << 3)               /**< Shifted mode disable for RAC_RX             */
#define RAC_RX_LNAMIXENRFPKD_enable                                   (_RAC_RX_LNAMIXENRFPKD_enable << 3)                /**< Shifted mode enable for RAC_RX              */
#define RAC_RX_LNAMIXLDOLOWCUR                                        (0x1UL << 4)                                       /**< LNAMIXLDOLOWCUR                             */
#define _RAC_RX_LNAMIXLDOLOWCUR_SHIFT                                 4                                                  /**< Shift value for RAC_LNAMIXLDOLOWCUR         */
#define _RAC_RX_LNAMIXLDOLOWCUR_MASK                                  0x10UL                                             /**< Bit mask for RAC_LNAMIXLDOLOWCUR            */
#define _RAC_RX_LNAMIXLDOLOWCUR_DEFAULT                               0x00000001UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_LNAMIXLDOLOWCUR_regular_mode                          0x00000000UL                                       /**< Mode regular_mode for RAC_RX                */
#define _RAC_RX_LNAMIXLDOLOWCUR_low_current_mode                      0x00000001UL                                       /**< Mode low_current_mode for RAC_RX            */
#define RAC_RX_LNAMIXLDOLOWCUR_DEFAULT                                (_RAC_RX_LNAMIXLDOLOWCUR_DEFAULT << 4)             /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_LNAMIXLDOLOWCUR_regular_mode                           (_RAC_RX_LNAMIXLDOLOWCUR_regular_mode << 4)        /**< Shifted mode regular_mode for RAC_RX        */
#define RAC_RX_LNAMIXLDOLOWCUR_low_current_mode                       (_RAC_RX_LNAMIXLDOLOWCUR_low_current_mode << 4)    /**< Shifted mode low_current_mode for RAC_RX    */
#define RAC_RX_LNAMIXREGLOADEN                                        (0x1UL << 5)                                       /**< LNAMIXREGLOADEN                             */
#define _RAC_RX_LNAMIXREGLOADEN_SHIFT                                 5                                                  /**< Shift value for RAC_LNAMIXREGLOADEN         */
#define _RAC_RX_LNAMIXREGLOADEN_MASK                                  0x20UL                                             /**< Bit mask for RAC_LNAMIXREGLOADEN            */
#define _RAC_RX_LNAMIXREGLOADEN_DEFAULT                               0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_LNAMIXREGLOADEN_disable_resistor                      0x00000000UL                                       /**< Mode disable_resistor for RAC_RX            */
#define _RAC_RX_LNAMIXREGLOADEN_enable_resistor                       0x00000001UL                                       /**< Mode enable_resistor for RAC_RX             */
#define RAC_RX_LNAMIXREGLOADEN_DEFAULT                                (_RAC_RX_LNAMIXREGLOADEN_DEFAULT << 5)             /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_LNAMIXREGLOADEN_disable_resistor                       (_RAC_RX_LNAMIXREGLOADEN_disable_resistor << 5)    /**< Shifted mode disable_resistor for RAC_RX    */
#define RAC_RX_LNAMIXREGLOADEN_enable_resistor                        (_RAC_RX_LNAMIXREGLOADEN_enable_resistor << 5)     /**< Shifted mode enable_resistor for RAC_RX     */
#define RAC_RX_PGAENLDO                                               (0x1UL << 6)                                       /**< PGAENLDO                                    */
#define _RAC_RX_PGAENLDO_SHIFT                                        6                                                  /**< Shift value for RAC_PGAENLDO                */
#define _RAC_RX_PGAENLDO_MASK                                         0x40UL                                             /**< Bit mask for RAC_PGAENLDO                   */
#define _RAC_RX_PGAENLDO_DEFAULT                                      0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_PGAENLDO_disable_ldo                                  0x00000000UL                                       /**< Mode disable_ldo for RAC_RX                 */
#define _RAC_RX_PGAENLDO_enable_ldo                                   0x00000001UL                                       /**< Mode enable_ldo for RAC_RX                  */
#define RAC_RX_PGAENLDO_DEFAULT                                       (_RAC_RX_PGAENLDO_DEFAULT << 6)                    /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_PGAENLDO_disable_ldo                                   (_RAC_RX_PGAENLDO_disable_ldo << 6)                /**< Shifted mode disable_ldo for RAC_RX         */
#define RAC_RX_PGAENLDO_enable_ldo                                    (_RAC_RX_PGAENLDO_enable_ldo << 6)                 /**< Shifted mode enable_ldo for RAC_RX          */
#define RAC_RX_SYCHPBIASTRIMBUF                                       (0x1UL << 7)                                       /**< SYCHPBIASTRIMBUF                            */
#define _RAC_RX_SYCHPBIASTRIMBUF_SHIFT                                7                                                  /**< Shift value for RAC_SYCHPBIASTRIMBUF        */
#define _RAC_RX_SYCHPBIASTRIMBUF_MASK                                 0x80UL                                             /**< Bit mask for RAC_SYCHPBIASTRIMBUF           */
#define _RAC_RX_SYCHPBIASTRIMBUF_DEFAULT                              0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYCHPBIASTRIMBUF_i_tail_10u                           0x00000000UL                                       /**< Mode i_tail_10u for RAC_RX                  */
#define _RAC_RX_SYCHPBIASTRIMBUF_i_tail_20u                           0x00000001UL                                       /**< Mode i_tail_20u for RAC_RX                  */
#define RAC_RX_SYCHPBIASTRIMBUF_DEFAULT                               (_RAC_RX_SYCHPBIASTRIMBUF_DEFAULT << 7)            /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYCHPBIASTRIMBUF_i_tail_10u                            (_RAC_RX_SYCHPBIASTRIMBUF_i_tail_10u << 7)         /**< Shifted mode i_tail_10u for RAC_RX          */
#define RAC_RX_SYCHPBIASTRIMBUF_i_tail_20u                            (_RAC_RX_SYCHPBIASTRIMBUF_i_tail_20u << 7)         /**< Shifted mode i_tail_20u for RAC_RX          */
#define RAC_RX_SYCHPQNC3EN                                            (0x1UL << 8)                                       /**< SYCHPQNC3EN                                 */
#define _RAC_RX_SYCHPQNC3EN_SHIFT                                     8                                                  /**< Shift value for RAC_SYCHPQNC3EN             */
#define _RAC_RX_SYCHPQNC3EN_MASK                                      0x100UL                                            /**< Bit mask for RAC_SYCHPQNC3EN                */
#define _RAC_RX_SYCHPQNC3EN_DEFAULT                                   0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYCHPQNC3EN_qnc_2                                     0x00000000UL                                       /**< Mode qnc_2 for RAC_RX                       */
#define _RAC_RX_SYCHPQNC3EN_qnc_3                                     0x00000001UL                                       /**< Mode qnc_3 for RAC_RX                       */
#define RAC_RX_SYCHPQNC3EN_DEFAULT                                    (_RAC_RX_SYCHPQNC3EN_DEFAULT << 8)                 /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYCHPQNC3EN_qnc_2                                      (_RAC_RX_SYCHPQNC3EN_qnc_2 << 8)                   /**< Shifted mode qnc_2 for RAC_RX               */
#define RAC_RX_SYCHPQNC3EN_qnc_3                                      (_RAC_RX_SYCHPQNC3EN_qnc_3 << 8)                   /**< Shifted mode qnc_3 for RAC_RX               */
#define RAC_RX_SYPFDCHPLPEN                                           (0x1UL << 9)                                       /**< SYPFDCHPLPEN                                */
#define _RAC_RX_SYPFDCHPLPEN_SHIFT                                    9                                                  /**< Shift value for RAC_SYPFDCHPLPEN            */
#define _RAC_RX_SYPFDCHPLPEN_MASK                                     0x200UL                                            /**< Bit mask for RAC_SYPFDCHPLPEN               */
#define _RAC_RX_SYPFDCHPLPEN_DEFAULT                                  0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYPFDCHPLPEN_disable                                  0x00000000UL                                       /**< Mode disable for RAC_RX                     */
#define _RAC_RX_SYPFDCHPLPEN_enable                                   0x00000001UL                                       /**< Mode enable for RAC_RX                      */
#define RAC_RX_SYPFDCHPLPEN_DEFAULT                                   (_RAC_RX_SYPFDCHPLPEN_DEFAULT << 9)                /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYPFDCHPLPEN_disable                                   (_RAC_RX_SYPFDCHPLPEN_disable << 9)                /**< Shifted mode disable for RAC_RX             */
#define RAC_RX_SYPFDCHPLPEN_enable                                    (_RAC_RX_SYPFDCHPLPEN_enable << 9)                 /**< Shifted mode enable for RAC_RX              */
#define RAC_RX_SYPFDFPWEN                                             (0x1UL << 10)                                      /**< SYPFDFPWEN                                  */
#define _RAC_RX_SYPFDFPWEN_SHIFT                                      10                                                 /**< Shift value for RAC_SYPFDFPWEN              */
#define _RAC_RX_SYPFDFPWEN_MASK                                       0x400UL                                            /**< Bit mask for RAC_SYPFDFPWEN                 */
#define _RAC_RX_SYPFDFPWEN_DEFAULT                                    0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYPFDFPWEN_disable                                    0x00000000UL                                       /**< Mode disable for RAC_RX                     */
#define _RAC_RX_SYPFDFPWEN_enable                                     0x00000001UL                                       /**< Mode enable for RAC_RX                      */
#define RAC_RX_SYPFDFPWEN_DEFAULT                                     (_RAC_RX_SYPFDFPWEN_DEFAULT << 10)                 /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYPFDFPWEN_disable                                     (_RAC_RX_SYPFDFPWEN_disable << 10)                 /**< Shifted mode disable for RAC_RX             */
#define RAC_RX_SYPFDFPWEN_enable                                      (_RAC_RX_SYPFDFPWEN_enable << 10)                  /**< Shifted mode enable for RAC_RX              */
#define RAC_RX_TX6DBMENRXMODEBIAS                                     (0x1UL << 11)                                      /**< TX6DBMENRXMODEBIAS                          */
#define _RAC_RX_TX6DBMENRXMODEBIAS_SHIFT                              11                                                 /**< Shift value for RAC_TX6DBMENRXMODEBIAS      */
#define _RAC_RX_TX6DBMENRXMODEBIAS_MASK                               0x800UL                                            /**< Bit mask for RAC_TX6DBMENRXMODEBIAS         */
#define _RAC_RX_TX6DBMENRXMODEBIAS_DEFAULT                            0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_TX6DBMENRXMODEBIAS_Disable                            0x00000000UL                                       /**< Mode Disable for RAC_RX                     */
#define _RAC_RX_TX6DBMENRXMODEBIAS_Enable                             0x00000001UL                                       /**< Mode Enable for RAC_RX                      */
#define RAC_RX_TX6DBMENRXMODEBIAS_DEFAULT                             (_RAC_RX_TX6DBMENRXMODEBIAS_DEFAULT << 11)         /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_TX6DBMENRXMODEBIAS_Disable                             (_RAC_RX_TX6DBMENRXMODEBIAS_Disable << 11)         /**< Shifted mode Disable for RAC_RX             */
#define RAC_RX_TX6DBMENRXMODEBIAS_Enable                              (_RAC_RX_TX6DBMENRXMODEBIAS_Enable << 11)          /**< Shifted mode Enable for RAC_RX              */

/* Bit fields for RAC TX */
#define _RAC_TX_RESETVALUE                                            0x00000000UL                                   /**< Default value for RAC_TX                    */
#define _RAC_TX_MASK                                                  0xE3CB00FFUL                                   /**< Mask for RAC_TX                             */
#define RAC_TX_TX0DBMENBLEEDPREDRVREG                                 (0x1UL << 0)                                   /**< TX0DBMENBLEEDPREDRVREG                      */
#define _RAC_TX_TX0DBMENBLEEDPREDRVREG_SHIFT                          0                                              /**< Shift value for RAC_TX0DBMENBLEEDPREDRVREG  */
#define _RAC_TX_TX0DBMENBLEEDPREDRVREG_MASK                           0x1UL                                          /**< Bit mask for RAC_TX0DBMENBLEEDPREDRVREG     */
#define _RAC_TX_TX0DBMENBLEEDPREDRVREG_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENBLEEDPREDRVREG_disable                        0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENBLEEDPREDRVREG_enable                         0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENBLEEDPREDRVREG_DEFAULT                         (_RAC_TX_TX0DBMENBLEEDPREDRVREG_DEFAULT << 0)  /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENBLEEDPREDRVREG_disable                         (_RAC_TX_TX0DBMENBLEEDPREDRVREG_disable << 0)  /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENBLEEDPREDRVREG_enable                          (_RAC_TX_TX0DBMENBLEEDPREDRVREG_enable << 0)   /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENBLEEDREG                                       (0x1UL << 1)                                   /**< TX0DBMENBLEEDREG                            */
#define _RAC_TX_TX0DBMENBLEEDREG_SHIFT                                1                                              /**< Shift value for RAC_TX0DBMENBLEEDREG        */
#define _RAC_TX_TX0DBMENBLEEDREG_MASK                                 0x2UL                                          /**< Bit mask for RAC_TX0DBMENBLEEDREG           */
#define _RAC_TX_TX0DBMENBLEEDREG_DEFAULT                              0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENBLEEDREG_disable                              0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENBLEEDREG_enable                               0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENBLEEDREG_DEFAULT                               (_RAC_TX_TX0DBMENBLEEDREG_DEFAULT << 1)        /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENBLEEDREG_disable                               (_RAC_TX_TX0DBMENBLEEDREG_disable << 1)        /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENBLEEDREG_enable                                (_RAC_TX_TX0DBMENBLEEDREG_enable << 1)         /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENPREDRV                                         (0x1UL << 2)                                   /**< TX0DBMENPREDRV                              */
#define _RAC_TX_TX0DBMENPREDRV_SHIFT                                  2                                              /**< Shift value for RAC_TX0DBMENPREDRV          */
#define _RAC_TX_TX0DBMENPREDRV_MASK                                   0x4UL                                          /**< Bit mask for RAC_TX0DBMENPREDRV             */
#define _RAC_TX_TX0DBMENPREDRV_DEFAULT                                0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENPREDRV_disable                                0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENPREDRV_enable                                 0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENPREDRV_DEFAULT                                 (_RAC_TX_TX0DBMENPREDRV_DEFAULT << 2)          /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENPREDRV_disable                                 (_RAC_TX_TX0DBMENPREDRV_disable << 2)          /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENPREDRV_enable                                  (_RAC_TX_TX0DBMENPREDRV_enable << 2)           /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENPREDRVREG                                      (0x1UL << 3)                                   /**< TX0DBMENPREDRVREG                           */
#define _RAC_TX_TX0DBMENPREDRVREG_SHIFT                               3                                              /**< Shift value for RAC_TX0DBMENPREDRVREG       */
#define _RAC_TX_TX0DBMENPREDRVREG_MASK                                0x8UL                                          /**< Bit mask for RAC_TX0DBMENPREDRVREG          */
#define _RAC_TX_TX0DBMENPREDRVREG_DEFAULT                             0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENPREDRVREG_disable                             0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENPREDRVREG_enable                              0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENPREDRVREG_DEFAULT                              (_RAC_TX_TX0DBMENPREDRVREG_DEFAULT << 3)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENPREDRVREG_disable                              (_RAC_TX_TX0DBMENPREDRVREG_disable << 3)       /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENPREDRVREG_enable                               (_RAC_TX_TX0DBMENPREDRVREG_enable << 3)        /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENPREDRVREGBIAS                                  (0x1UL << 4)                                   /**< TX0DBMENPREDRVREGBIAS                       */
#define _RAC_TX_TX0DBMENPREDRVREGBIAS_SHIFT                           4                                              /**< Shift value for RAC_TX0DBMENPREDRVREGBIAS   */
#define _RAC_TX_TX0DBMENPREDRVREGBIAS_MASK                            0x10UL                                         /**< Bit mask for RAC_TX0DBMENPREDRVREGBIAS      */
#define _RAC_TX_TX0DBMENPREDRVREGBIAS_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENPREDRVREGBIAS_disable                         0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENPREDRVREGBIAS_enable                          0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENPREDRVREGBIAS_DEFAULT                          (_RAC_TX_TX0DBMENPREDRVREGBIAS_DEFAULT << 4)   /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENPREDRVREGBIAS_disable                          (_RAC_TX_TX0DBMENPREDRVREGBIAS_disable << 4)   /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENPREDRVREGBIAS_enable                           (_RAC_TX_TX0DBMENPREDRVREGBIAS_enable << 4)    /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENBIAS                                           (0x1UL << 5)                                   /**< TX0DBMENBIAS                                */
#define _RAC_TX_TX0DBMENBIAS_SHIFT                                    5                                              /**< Shift value for RAC_TX0DBMENBIAS            */
#define _RAC_TX_TX0DBMENBIAS_MASK                                     0x20UL                                         /**< Bit mask for RAC_TX0DBMENBIAS               */
#define _RAC_TX_TX0DBMENBIAS_DEFAULT                                  0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENBIAS_disable                                  0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENBIAS_enable                                   0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENBIAS_DEFAULT                                   (_RAC_TX_TX0DBMENBIAS_DEFAULT << 5)            /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENBIAS_disable                                   (_RAC_TX_TX0DBMENBIAS_disable << 5)            /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENBIAS_enable                                    (_RAC_TX_TX0DBMENBIAS_enable << 5)             /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENRAMPCLK                                        (0x1UL << 6)                                   /**< TX0DBMENRAMPCLK                             */
#define _RAC_TX_TX0DBMENRAMPCLK_SHIFT                                 6                                              /**< Shift value for RAC_TX0DBMENRAMPCLK         */
#define _RAC_TX_TX0DBMENRAMPCLK_MASK                                  0x40UL                                         /**< Bit mask for RAC_TX0DBMENRAMPCLK            */
#define _RAC_TX_TX0DBMENRAMPCLK_DEFAULT                               0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENRAMPCLK_disable                               0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENRAMPCLK_enable                                0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENRAMPCLK_DEFAULT                                (_RAC_TX_TX0DBMENRAMPCLK_DEFAULT << 6)         /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENRAMPCLK_disable                                (_RAC_TX_TX0DBMENRAMPCLK_disable << 6)         /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENRAMPCLK_enable                                 (_RAC_TX_TX0DBMENRAMPCLK_enable << 6)          /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX0DBMENREG                                            (0x1UL << 7)                                   /**< TX0DBMENREG                                 */
#define _RAC_TX_TX0DBMENREG_SHIFT                                     7                                              /**< Shift value for RAC_TX0DBMENREG             */
#define _RAC_TX_TX0DBMENREG_MASK                                      0x80UL                                         /**< Bit mask for RAC_TX0DBMENREG                */
#define _RAC_TX_TX0DBMENREG_DEFAULT                                   0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX0DBMENREG_disable                                   0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX0DBMENREG_enable                                    0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX0DBMENREG_DEFAULT                                    (_RAC_TX_TX0DBMENREG_DEFAULT << 7)             /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX0DBMENREG_disable                                    (_RAC_TX_TX0DBMENREG_disable << 7)             /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX0DBMENREG_enable                                     (_RAC_TX_TX0DBMENREG_enable << 7)              /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX6DBMENBLEEDPREDRVREG                                 (0x1UL << 16)                                  /**< TX6DBMENBLEEDPREDRVREG                      */
#define _RAC_TX_TX6DBMENBLEEDPREDRVREG_SHIFT                          16                                             /**< Shift value for RAC_TX6DBMENBLEEDPREDRVREG  */
#define _RAC_TX_TX6DBMENBLEEDPREDRVREG_MASK                           0x10000UL                                      /**< Bit mask for RAC_TX6DBMENBLEEDPREDRVREG     */
#define _RAC_TX_TX6DBMENBLEEDPREDRVREG_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENBLEEDPREDRVREG_disable                        0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX6DBMENBLEEDPREDRVREG_enable                         0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX6DBMENBLEEDPREDRVREG_DEFAULT                         (_RAC_TX_TX6DBMENBLEEDPREDRVREG_DEFAULT << 16) /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENBLEEDPREDRVREG_disable                         (_RAC_TX_TX6DBMENBLEEDPREDRVREG_disable << 16) /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX6DBMENBLEEDPREDRVREG_enable                          (_RAC_TX_TX6DBMENBLEEDPREDRVREG_enable << 16)  /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX6DBMENBLEEDREG                                       (0x1UL << 17)                                  /**< TX6DBMENBLEEDREG                            */
#define _RAC_TX_TX6DBMENBLEEDREG_SHIFT                                17                                             /**< Shift value for RAC_TX6DBMENBLEEDREG        */
#define _RAC_TX_TX6DBMENBLEEDREG_MASK                                 0x20000UL                                      /**< Bit mask for RAC_TX6DBMENBLEEDREG           */
#define _RAC_TX_TX6DBMENBLEEDREG_DEFAULT                              0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENBLEEDREG_disable                              0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX6DBMENBLEEDREG_enable                               0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX6DBMENBLEEDREG_DEFAULT                               (_RAC_TX_TX6DBMENBLEEDREG_DEFAULT << 17)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENBLEEDREG_disable                               (_RAC_TX_TX6DBMENBLEEDREG_disable << 17)       /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX6DBMENBLEEDREG_enable                                (_RAC_TX_TX6DBMENBLEEDREG_enable << 17)        /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX6DBMENPREDRVREG                                      (0x1UL << 19)                                  /**< TX6DBMENPREDRVREG                           */
#define _RAC_TX_TX6DBMENPREDRVREG_SHIFT                               19                                             /**< Shift value for RAC_TX6DBMENPREDRVREG       */
#define _RAC_TX_TX6DBMENPREDRVREG_MASK                                0x80000UL                                      /**< Bit mask for RAC_TX6DBMENPREDRVREG          */
#define _RAC_TX_TX6DBMENPREDRVREG_DEFAULT                             0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENPREDRVREG_disable                             0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX6DBMENPREDRVREG_enable                              0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX6DBMENPREDRVREG_DEFAULT                              (_RAC_TX_TX6DBMENPREDRVREG_DEFAULT << 19)      /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENPREDRVREG_disable                              (_RAC_TX_TX6DBMENPREDRVREG_disable << 19)      /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX6DBMENPREDRVREG_enable                               (_RAC_TX_TX6DBMENPREDRVREG_enable << 19)       /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX6DBMENRAMPCLK                                        (0x1UL << 22)                                  /**< TX6DBMENRAMPCLK                             */
#define _RAC_TX_TX6DBMENRAMPCLK_SHIFT                                 22                                             /**< Shift value for RAC_TX6DBMENRAMPCLK         */
#define _RAC_TX_TX6DBMENRAMPCLK_MASK                                  0x400000UL                                     /**< Bit mask for RAC_TX6DBMENRAMPCLK            */
#define _RAC_TX_TX6DBMENRAMPCLK_DEFAULT                               0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENRAMPCLK_disable_clock                         0x00000000UL                                   /**< Mode disable_clock for RAC_TX               */
#define _RAC_TX_TX6DBMENRAMPCLK_enable_clock                          0x00000001UL                                   /**< Mode enable_clock for RAC_TX                */
#define RAC_TX_TX6DBMENRAMPCLK_DEFAULT                                (_RAC_TX_TX6DBMENRAMPCLK_DEFAULT << 22)        /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENRAMPCLK_disable_clock                          (_RAC_TX_TX6DBMENRAMPCLK_disable_clock << 22)  /**< Shifted mode disable_clock for RAC_TX       */
#define RAC_TX_TX6DBMENRAMPCLK_enable_clock                           (_RAC_TX_TX6DBMENRAMPCLK_enable_clock << 22)   /**< Shifted mode enable_clock for RAC_TX        */
#define RAC_TX_TX6DBMENREG                                            (0x1UL << 23)                                  /**< TX6DBMENREG                                 */
#define _RAC_TX_TX6DBMENREG_SHIFT                                     23                                             /**< Shift value for RAC_TX6DBMENREG             */
#define _RAC_TX_TX6DBMENREG_MASK                                      0x800000UL                                     /**< Bit mask for RAC_TX6DBMENREG                */
#define _RAC_TX_TX6DBMENREG_DEFAULT                                   0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENREG_disable                                   0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX6DBMENREG_enable                                    0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX6DBMENREG_DEFAULT                                    (_RAC_TX_TX6DBMENREG_DEFAULT << 23)            /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENREG_disable                                    (_RAC_TX_TX6DBMENREG_disable << 23)            /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX6DBMENREG_enable                                     (_RAC_TX_TX6DBMENREG_enable << 23)             /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX6DBMENPACORE                                         (0x1UL << 24)                                  /**< TX6DBMENPACORE                              */
#define _RAC_TX_TX6DBMENPACORE_SHIFT                                  24                                             /**< Shift value for RAC_TX6DBMENPACORE          */
#define _RAC_TX_TX6DBMENPACORE_MASK                                   0x1000000UL                                    /**< Bit mask for RAC_TX6DBMENPACORE             */
#define _RAC_TX_TX6DBMENPACORE_DEFAULT                                0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENPACORE_disable                                0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX6DBMENPACORE_enable                                 0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX6DBMENPACORE_DEFAULT                                 (_RAC_TX_TX6DBMENPACORE_DEFAULT << 24)         /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENPACORE_disable                                 (_RAC_TX_TX6DBMENPACORE_disable << 24)         /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX6DBMENPACORE_enable                                  (_RAC_TX_TX6DBMENPACORE_enable << 24)          /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_TX6DBMENPAOUT                                          (0x1UL << 25)                                  /**< TX6DBMENPAOUT                               */
#define _RAC_TX_TX6DBMENPAOUT_SHIFT                                   25                                             /**< Shift value for RAC_TX6DBMENPAOUT           */
#define _RAC_TX_TX6DBMENPAOUT_MASK                                    0x2000000UL                                    /**< Bit mask for RAC_TX6DBMENPAOUT              */
#define _RAC_TX_TX6DBMENPAOUT_DEFAULT                                 0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_TX6DBMENPAOUT_disable                                 0x00000000UL                                   /**< Mode disable for RAC_TX                     */
#define _RAC_TX_TX6DBMENPAOUT_enable                                  0x00000001UL                                   /**< Mode enable for RAC_TX                      */
#define RAC_TX_TX6DBMENPAOUT_DEFAULT                                  (_RAC_TX_TX6DBMENPAOUT_DEFAULT << 25)          /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_TX6DBMENPAOUT_disable                                  (_RAC_TX_TX6DBMENPAOUT_disable << 25)          /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_TX6DBMENPAOUT_enable                                   (_RAC_TX_TX6DBMENPAOUT_enable << 25)           /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_ENXOSQBUFFILT                                          (0x1UL << 29)                                  /**< Override                                    */
#define _RAC_TX_ENXOSQBUFFILT_SHIFT                                   29                                             /**< Shift value for RAC_ENXOSQBUFFILT           */
#define _RAC_TX_ENXOSQBUFFILT_MASK                                    0x20000000UL                                   /**< Bit mask for RAC_ENXOSQBUFFILT              */
#define _RAC_TX_ENXOSQBUFFILT_DEFAULT                                 0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENXOSQBUFFILT_DEFAULT                                  (_RAC_TX_ENXOSQBUFFILT_DEFAULT << 29)          /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_ENPAPOWER                                              (0x1UL << 30)                                  /**< Override                                    */
#define _RAC_TX_ENPAPOWER_SHIFT                                       30                                             /**< Shift value for RAC_ENPAPOWER               */
#define _RAC_TX_ENPAPOWER_MASK                                        0x40000000UL                                   /**< Bit mask for RAC_ENPAPOWER                  */
#define _RAC_TX_ENPAPOWER_DEFAULT                                     0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENPAPOWER_DEFAULT                                      (_RAC_TX_ENPAPOWER_DEFAULT << 30)              /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_ENPASELSLICE                                           (0x1UL << 31)                                  /**< Override                                    */
#define _RAC_TX_ENPASELSLICE_SHIFT                                    31                                             /**< Shift value for RAC_ENPASELSLICE            */
#define _RAC_TX_ENPASELSLICE_MASK                                     0x80000000UL                                   /**< Bit mask for RAC_ENPASELSLICE               */
#define _RAC_TX_ENPASELSLICE_DEFAULT                                  0x00000000UL                                   /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENPASELSLICE_DEFAULT                                   (_RAC_TX_ENPASELSLICE_DEFAULT << 31)           /**< Shifted mode DEFAULT for RAC_TX             */

/* Bit fields for RAC SYTRIM0 */
#define _RAC_SYTRIM0_RESETVALUE                                       0x00062E29UL                                       /**< Default value for RAC_SYTRIM0               */
#define _RAC_SYTRIM0_MASK                                             0x003FEFFFUL                                       /**< Mask for RAC_SYTRIM0                        */
#define _RAC_SYTRIM0_SYCHPBIAS_SHIFT                                  0                                                  /**< Shift value for RAC_SYCHPBIAS               */
#define _RAC_SYTRIM0_SYCHPBIAS_MASK                                   0x7UL                                              /**< Bit mask for RAC_SYCHPBIAS                  */
#define _RAC_SYTRIM0_SYCHPBIAS_DEFAULT                                0x00000001UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYCHPBIAS_bias_0                                 0x00000000UL                                       /**< Mode bias_0 for RAC_SYTRIM0                 */
#define _RAC_SYTRIM0_SYCHPBIAS_bias_1                                 0x00000001UL                                       /**< Mode bias_1 for RAC_SYTRIM0                 */
#define _RAC_SYTRIM0_SYCHPBIAS_bias_2                                 0x00000003UL                                       /**< Mode bias_2 for RAC_SYTRIM0                 */
#define _RAC_SYTRIM0_SYCHPBIAS_bias_3                                 0x00000007UL                                       /**< Mode bias_3 for RAC_SYTRIM0                 */
#define RAC_SYTRIM0_SYCHPBIAS_DEFAULT                                 (_RAC_SYTRIM0_SYCHPBIAS_DEFAULT << 0)              /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYCHPBIAS_bias_0                                  (_RAC_SYTRIM0_SYCHPBIAS_bias_0 << 0)               /**< Shifted mode bias_0 for RAC_SYTRIM0         */
#define RAC_SYTRIM0_SYCHPBIAS_bias_1                                  (_RAC_SYTRIM0_SYCHPBIAS_bias_1 << 0)               /**< Shifted mode bias_1 for RAC_SYTRIM0         */
#define RAC_SYTRIM0_SYCHPBIAS_bias_2                                  (_RAC_SYTRIM0_SYCHPBIAS_bias_2 << 0)               /**< Shifted mode bias_2 for RAC_SYTRIM0         */
#define RAC_SYTRIM0_SYCHPBIAS_bias_3                                  (_RAC_SYTRIM0_SYCHPBIAS_bias_3 << 0)               /**< Shifted mode bias_3 for RAC_SYTRIM0         */
#define _RAC_SYTRIM0_SYCHPCURR_SHIFT                                  3                                                  /**< Shift value for RAC_SYCHPCURR               */
#define _RAC_SYTRIM0_SYCHPCURR_MASK                                   0x38UL                                             /**< Bit mask for RAC_SYCHPCURR                  */
#define _RAC_SYTRIM0_SYCHPCURR_DEFAULT                                0x00000005UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYCHPCURR_curr_1p5uA                             0x00000000UL                                       /**< Mode curr_1p5uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_2p0uA                             0x00000001UL                                       /**< Mode curr_2p0uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_2p5uA                             0x00000002UL                                       /**< Mode curr_2p5uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_3p0uA                             0x00000003UL                                       /**< Mode curr_3p0uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_3p5uA                             0x00000004UL                                       /**< Mode curr_3p5uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_4p0uA                             0x00000005UL                                       /**< Mode curr_4p0uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_4p5uA                             0x00000006UL                                       /**< Mode curr_4p5uA for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPCURR_curr_5p0uA                             0x00000007UL                                       /**< Mode curr_5p0uA for RAC_SYTRIM0             */
#define RAC_SYTRIM0_SYCHPCURR_DEFAULT                                 (_RAC_SYTRIM0_SYCHPCURR_DEFAULT << 3)              /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYCHPCURR_curr_1p5uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_1p5uA << 3)           /**< Shifted mode curr_1p5uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_2p0uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_2p0uA << 3)           /**< Shifted mode curr_2p0uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_2p5uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_2p5uA << 3)           /**< Shifted mode curr_2p5uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_3p0uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_3p0uA << 3)           /**< Shifted mode curr_3p0uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_3p5uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_3p5uA << 3)           /**< Shifted mode curr_3p5uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_4p0uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_4p0uA << 3)           /**< Shifted mode curr_4p0uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_4p5uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_4p5uA << 3)           /**< Shifted mode curr_4p5uA for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPCURR_curr_5p0uA                              (_RAC_SYTRIM0_SYCHPCURR_curr_5p0uA << 3)           /**< Shifted mode curr_5p0uA for RAC_SYTRIM0     */
#define _RAC_SYTRIM0_SYCHPLEVNSRC_SHIFT                               6                                                  /**< Shift value for RAC_SYCHPLEVNSRC            */
#define _RAC_SYTRIM0_SYCHPLEVNSRC_MASK                                0x1C0UL                                            /**< Bit mask for RAC_SYCHPLEVNSRC               */
#define _RAC_SYTRIM0_SYCHPLEVNSRC_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define RAC_SYTRIM0_SYCHPLEVNSRC_DEFAULT                              (_RAC_SYTRIM0_SYCHPLEVNSRC_DEFAULT << 6)           /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_SHIFT                               9                                                  /**< Shift value for RAC_SYCHPLEVPSRC            */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_MASK                                0xE00UL                                            /**< Bit mask for RAC_SYCHPLEVPSRC               */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_DEFAULT                             0x00000007UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n105m                         0x00000000UL                                       /**< Mode vsrcp_n105m for RAC_SYTRIM0            */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n90m                          0x00000001UL                                       /**< Mode vsrcp_n90m for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n75m                          0x00000002UL                                       /**< Mode vsrcp_n75m for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n60m                          0x00000003UL                                       /**< Mode vsrcp_n60m for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n45m                          0x00000004UL                                       /**< Mode vsrcp_n45m for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n30m                          0x00000005UL                                       /**< Mode vsrcp_n30m for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n15m                          0x00000006UL                                       /**< Mode vsrcp_n15m for RAC_SYTRIM0             */
#define _RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n0m                           0x00000007UL                                       /**< Mode vsrcp_n0m for RAC_SYTRIM0              */
#define RAC_SYTRIM0_SYCHPLEVPSRC_DEFAULT                              (_RAC_SYTRIM0_SYCHPLEVPSRC_DEFAULT << 9)           /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n105m                          (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n105m << 9)       /**< Shifted mode vsrcp_n105m for RAC_SYTRIM0    */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n90m                           (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n90m << 9)        /**< Shifted mode vsrcp_n90m for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n75m                           (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n75m << 9)        /**< Shifted mode vsrcp_n75m for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n60m                           (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n60m << 9)        /**< Shifted mode vsrcp_n60m for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n45m                           (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n45m << 9)        /**< Shifted mode vsrcp_n45m for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n30m                           (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n30m << 9)        /**< Shifted mode vsrcp_n30m for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n15m                           (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n15m << 9)        /**< Shifted mode vsrcp_n15m for RAC_SYTRIM0     */
#define RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n0m                            (_RAC_SYTRIM0_SYCHPLEVPSRC_vsrcp_n0m << 9)         /**< Shifted mode vsrcp_n0m for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPSRCEN                                        (0x1UL << 13)                                      /**< SYCHPSRCEN                                  */
#define _RAC_SYTRIM0_SYCHPSRCEN_SHIFT                                 13                                                 /**< Shift value for RAC_SYCHPSRCEN              */
#define _RAC_SYTRIM0_SYCHPSRCEN_MASK                                  0x2000UL                                           /**< Bit mask for RAC_SYCHPSRCEN                 */
#define _RAC_SYTRIM0_SYCHPSRCEN_DEFAULT                               0x00000001UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYCHPSRCEN_disable                               0x00000000UL                                       /**< Mode disable for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYCHPSRCEN_enable                                0x00000001UL                                       /**< Mode enable for RAC_SYTRIM0                 */
#define RAC_SYTRIM0_SYCHPSRCEN_DEFAULT                                (_RAC_SYTRIM0_SYCHPSRCEN_DEFAULT << 13)            /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYCHPSRCEN_disable                                (_RAC_SYTRIM0_SYCHPSRCEN_disable << 13)            /**< Shifted mode disable for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYCHPSRCEN_enable                                 (_RAC_SYTRIM0_SYCHPSRCEN_enable << 13)             /**< Shifted mode enable for RAC_SYTRIM0         */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_SHIFT                        14                                                 /**< Shift value for RAC_SYCHPREPLICACURRADJ     */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_MASK                         0x1C000UL                                          /**< Bit mask for RAC_SYCHPREPLICACURRADJ        */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_DEFAULT                      0x00000000UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_8ua                     0x00000000UL                                       /**< Mode load_8ua for RAC_SYTRIM0               */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_16ua                    0x00000001UL                                       /**< Mode load_16ua for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_20ua                    0x00000002UL                                       /**< Mode load_20ua for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_28ua                    0x00000003UL                                       /**< Mode load_28ua for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_24ua                    0x00000004UL                                       /**< Mode load_24ua for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_32ua                    0x00000005UL                                       /**< Mode load_32ua for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_36ua                    0x00000006UL                                       /**< Mode load_36ua for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_44ua                    0x00000007UL                                       /**< Mode load_44ua for RAC_SYTRIM0              */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_DEFAULT                       (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_DEFAULT << 14)   /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_8ua                      (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_8ua << 14)  /**< Shifted mode load_8ua for RAC_SYTRIM0       */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_16ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_16ua << 14) /**< Shifted mode load_16ua for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_20ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_20ua << 14) /**< Shifted mode load_20ua for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_28ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_28ua << 14) /**< Shifted mode load_28ua for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_24ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_24ua << 14) /**< Shifted mode load_24ua for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_32ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_32ua << 14) /**< Shifted mode load_32ua for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_36ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_36ua << 14) /**< Shifted mode load_36ua for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_44ua                     (_RAC_SYTRIM0_SYCHPREPLICACURRADJ_load_44ua << 14) /**< Shifted mode load_44ua for RAC_SYTRIM0      */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_SHIFT                        17                                                 /**< Shift value for RAC_SYTRIMCHPREGAMPBIAS     */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_MASK                         0xE0000UL                                          /**< Bit mask for RAC_SYTRIMCHPREGAMPBIAS        */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_DEFAULT                      0x00000003UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_14uA                    0x00000000UL                                       /**< Mode bias_14uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_20uA                    0x00000001UL                                       /**< Mode bias_20uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_26uA                    0x00000002UL                                       /**< Mode bias_26uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_32uA                    0x00000003UL                                       /**< Mode bias_32uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_38uA                    0x00000004UL                                       /**< Mode bias_38uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_44uA                    0x00000005UL                                       /**< Mode bias_44uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_50uA                    0x00000006UL                                       /**< Mode bias_50uA for RAC_SYTRIM0              */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_56uA                    0x00000007UL                                       /**< Mode bias_56uA for RAC_SYTRIM0              */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_DEFAULT                       (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_DEFAULT << 17)   /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_14uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_14uA << 17) /**< Shifted mode bias_14uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_20uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_20uA << 17) /**< Shifted mode bias_20uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_26uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_26uA << 17) /**< Shifted mode bias_26uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_32uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_32uA << 17) /**< Shifted mode bias_32uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_38uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_38uA << 17) /**< Shifted mode bias_38uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_44uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_44uA << 17) /**< Shifted mode bias_44uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_50uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_50uA << 17) /**< Shifted mode bias_50uA for RAC_SYTRIM0      */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_56uA                     (_RAC_SYTRIM0_SYTRIMCHPREGAMPBIAS_bias_56uA << 17) /**< Shifted mode bias_56uA for RAC_SYTRIM0      */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_SHIFT                          20                                                 /**< Shift value for RAC_SYTRIMCHPREGAMPBW       */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_MASK                           0x300000UL                                         /**< Bit mask for RAC_SYTRIMCHPREGAMPBW          */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_DEFAULT                        0x00000000UL                                       /**< Mode DEFAULT for RAC_SYTRIM0                */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_000f                         0x00000000UL                                       /**< Mode C_000f for RAC_SYTRIM0                 */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_300f                         0x00000001UL                                       /**< Mode C_300f for RAC_SYTRIM0                 */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_600f                         0x00000002UL                                       /**< Mode C_600f for RAC_SYTRIM0                 */
#define _RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_900f                         0x00000003UL                                       /**< Mode C_900f for RAC_SYTRIM0                 */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBW_DEFAULT                         (_RAC_SYTRIM0_SYTRIMCHPREGAMPBW_DEFAULT << 20)     /**< Shifted mode DEFAULT for RAC_SYTRIM0        */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_000f                          (_RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_000f << 20)      /**< Shifted mode C_000f for RAC_SYTRIM0         */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_300f                          (_RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_300f << 20)      /**< Shifted mode C_300f for RAC_SYTRIM0         */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_600f                          (_RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_600f << 20)      /**< Shifted mode C_600f for RAC_SYTRIM0         */
#define RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_900f                          (_RAC_SYTRIM0_SYTRIMCHPREGAMPBW_C_900f << 20)      /**< Shifted mode C_900f for RAC_SYTRIM0         */

/* Bit fields for RAC SYTRIM1 */
#define _RAC_SYTRIM1_RESETVALUE                                       0x00003FC4UL                                           /**< Default value for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_MASK                                             0xE003FFFFUL                                           /**< Mask for RAC_SYTRIM1                        */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_SHIFT                         0                                                      /**< Shift value for RAC_SYLODIVLDOTRIMCORE      */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_MASK                          0x3UL                                                  /**< Bit mask for RAC_SYLODIVLDOTRIMCORE         */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_DEFAULT                       0x00000000UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_RXLO                          0x00000000UL                                           /**< Mode RXLO for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_TXLO                          0x00000003UL                                           /**< Mode TXLO for RAC_SYTRIM1                   */
#define RAC_SYTRIM1_SYLODIVLDOTRIMCORE_DEFAULT                        (_RAC_SYTRIM1_SYLODIVLDOTRIMCORE_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYLODIVLDOTRIMCORE_RXLO                           (_RAC_SYTRIM1_SYLODIVLDOTRIMCORE_RXLO << 0)            /**< Shifted mode RXLO for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVLDOTRIMCORE_TXLO                           (_RAC_SYTRIM1_SYLODIVLDOTRIMCORE_TXLO << 0)            /**< Shifted mode TXLO for RAC_SYTRIM1           */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_SHIFT                         2                                                      /**< Shift value for RAC_SYLODIVLDOTRIMNDIO      */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_MASK                          0x3CUL                                                 /**< Bit mask for RAC_SYLODIVLDOTRIMNDIO         */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_DEFAULT                       0x00000001UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p08                     0x00000000UL                                           /**< Mode vreg_1p08 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p11                     0x00000001UL                                           /**< Mode vreg_1p11 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p15                     0x00000002UL                                           /**< Mode vreg_1p15 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p18                     0x00000003UL                                           /**< Mode vreg_1p18 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p21                     0x00000004UL                                           /**< Mode vreg_1p21 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p24                     0x00000005UL                                           /**< Mode vreg_1p24 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p27                     0x00000006UL                                           /**< Mode vreg_1p27 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p29                     0x00000007UL                                           /**< Mode vreg_1p29 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p32                     0x00000008UL                                           /**< Mode vreg_1p32 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p34                     0x00000009UL                                           /**< Mode vreg_1p34 for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_DEFAULT                        (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_DEFAULT << 2)         /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p08                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p08 << 2)       /**< Shifted mode vreg_1p08 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p11                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p11 << 2)       /**< Shifted mode vreg_1p11 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p15                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p15 << 2)       /**< Shifted mode vreg_1p15 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p18                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p18 << 2)       /**< Shifted mode vreg_1p18 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p21                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p21 << 2)       /**< Shifted mode vreg_1p21 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p24                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p24 << 2)       /**< Shifted mode vreg_1p24 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p27                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p27 << 2)       /**< Shifted mode vreg_1p27 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p29                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p29 << 2)       /**< Shifted mode vreg_1p29 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p32                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p32 << 2)       /**< Shifted mode vreg_1p32 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p34                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p34 << 2)       /**< Shifted mode vreg_1p34 for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_SHIFT                       6                                                      /**< Shift value for RAC_SYMMDREPLICA1CURRADJ    */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_MASK                        0x1C0UL                                                /**< Bit mask for RAC_SYMMDREPLICA1CURRADJ       */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_DEFAULT                     0x00000007UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_8ua                    0x00000000UL                                           /**< Mode load_8ua for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_16u                    0x00000001UL                                           /**< Mode load_16u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_20ua                   0x00000002UL                                           /**< Mode load_20ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_28ua                   0x00000003UL                                           /**< Mode load_28ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_24ua                   0x00000004UL                                           /**< Mode load_24ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_32ua                   0x00000005UL                                           /**< Mode load_32ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_36ua                   0x00000006UL                                           /**< Mode load_36ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_44ua                   0x00000007UL                                           /**< Mode load_44ua for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_DEFAULT                      (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_DEFAULT << 6)       /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_8ua                     (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_8ua << 6)      /**< Shifted mode load_8ua for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_16u                     (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_16u << 6)      /**< Shifted mode load_16u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_20ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_20ua << 6)     /**< Shifted mode load_20ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_28ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_28ua << 6)     /**< Shifted mode load_28ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_24ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_24ua << 6)     /**< Shifted mode load_24ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_32ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_32ua << 6)     /**< Shifted mode load_32ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_36ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_36ua << 6)     /**< Shifted mode load_36ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_44ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_44ua << 6)     /**< Shifted mode load_44ua for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_SHIFT                       9                                                      /**< Shift value for RAC_SYMMDREPLICA2CURRADJ    */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_MASK                        0xE00UL                                                /**< Bit mask for RAC_SYMMDREPLICA2CURRADJ       */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_DEFAULT                     0x00000007UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_32u                    0x00000000UL                                           /**< Mode load_32u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_64u                    0x00000001UL                                           /**< Mode load_64u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_96u                    0x00000002UL                                           /**< Mode load_96u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_128u                   0x00000003UL                                           /**< Mode load_128u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_160u                   0x00000004UL                                           /**< Mode load_160u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_192u                   0x00000005UL                                           /**< Mode load_192u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_224u                   0x00000006UL                                           /**< Mode load_224u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_256u                   0x00000007UL                                           /**< Mode load_256u for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_DEFAULT                      (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_DEFAULT << 9)       /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_32u                     (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_32u << 9)      /**< Shifted mode load_32u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_64u                     (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_64u << 9)      /**< Shifted mode load_64u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_96u                     (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_96u << 9)      /**< Shifted mode load_96u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_128u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_128u << 9)     /**< Shifted mode load_128u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_160u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_160u << 9)     /**< Shifted mode load_160u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_192u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_192u << 9)     /**< Shifted mode load_192u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_224u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_224u << 9)     /**< Shifted mode load_224u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_256u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_256u << 9)     /**< Shifted mode load_256u for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_SHIFT                        12                                                     /**< Shift value for RAC_SYTRIMMMDREGAMPBIAS     */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_MASK                         0x7000UL                                               /**< Bit mask for RAC_SYTRIMMMDREGAMPBIAS        */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_DEFAULT                      0x00000003UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_14uA                    0x00000000UL                                           /**< Mode bias_14uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_20uA                    0x00000001UL                                           /**< Mode bias_20uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_26uA                    0x00000002UL                                           /**< Mode bias_26uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_32uA                    0x00000003UL                                           /**< Mode bias_32uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_38uA                    0x00000004UL                                           /**< Mode bias_38uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_44uA                    0x00000005UL                                           /**< Mode bias_44uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_50uA                    0x00000006UL                                           /**< Mode bias_50uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_56uA                    0x00000007UL                                           /**< Mode bias_56uA for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_DEFAULT                       (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_DEFAULT << 12)       /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_14uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_14uA << 12)     /**< Shifted mode bias_14uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_20uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_20uA << 12)     /**< Shifted mode bias_20uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_26uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_26uA << 12)     /**< Shifted mode bias_26uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_32uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_32uA << 12)     /**< Shifted mode bias_32uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_38uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_38uA << 12)     /**< Shifted mode bias_38uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_44uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_44uA << 12)     /**< Shifted mode bias_44uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_50uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_50uA << 12)     /**< Shifted mode bias_50uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_56uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_56uA << 12)     /**< Shifted mode bias_56uA for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_SHIFT                          15                                                     /**< Shift value for RAC_SYTRIMMMDREGAMPBW       */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_MASK                           0x18000UL                                              /**< Bit mask for RAC_SYTRIMMMDREGAMPBW          */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_DEFAULT                        0x00000000UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_000f                         0x00000000UL                                           /**< Mode C_000f for RAC_SYTRIM1                 */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_300f                         0x00000001UL                                           /**< Mode C_300f for RAC_SYTRIM1                 */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_600f                         0x00000002UL                                           /**< Mode C_600f for RAC_SYTRIM1                 */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_900f                         0x00000003UL                                           /**< Mode C_900f for RAC_SYTRIM1                 */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_DEFAULT                         (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_DEFAULT << 15)         /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_000f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_000f << 15)          /**< Shifted mode C_000f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_300f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_300f << 15)          /**< Shifted mode C_300f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_600f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_600f << 15)          /**< Shifted mode C_600f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_900f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_900f << 15)          /**< Shifted mode C_900f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYLODIVRLOADCCLKSEL                               (0x1UL << 17)                                          /**< SYLODIVRLOADCCLKSEL                         */
#define _RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_SHIFT                        17                                                     /**< Shift value for RAC_SYLODIVRLOADCCLKSEL     */
#define _RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_MASK                         0x20000UL                                              /**< Bit mask for RAC_SYLODIVRLOADCCLKSEL        */
#define _RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_DEFAULT                      0x00000000UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_adc_clk_div8                 0x00000000UL                                           /**< Mode adc_clk_div8 for RAC_SYTRIM1           */
#define _RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_adc_clk_div16                0x00000001UL                                           /**< Mode adc_clk_div16 for RAC_SYTRIM1          */
#define RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_DEFAULT                       (_RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_DEFAULT << 17)       /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_adc_clk_div8                  (_RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_adc_clk_div8 << 17)  /**< Shifted mode adc_clk_div8 for RAC_SYTRIM1   */
#define RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_adc_clk_div16                 (_RAC_SYTRIM1_SYLODIVRLOADCCLKSEL_adc_clk_div16 << 17) /**< Shifted mode adc_clk_div16 for RAC_SYTRIM1  */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_SHIFT                           29                                                     /**< Shift value for RAC_SYLODIVSGTESTDIV        */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_MASK                            0xE0000000UL                                           /**< Bit mask for RAC_SYLODIVSGTESTDIV           */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_DEFAULT                         0x00000000UL                                           /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div2                            0x00000000UL                                           /**< Mode div2 for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div3                            0x00000001UL                                           /**< Mode div3 for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div4                            0x00000002UL                                           /**< Mode div4 for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div6                            0x00000003UL                                           /**< Mode div6 for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div8                            0x00000004UL                                           /**< Mode div8 for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div12                           0x00000005UL                                           /**< Mode div12 for RAC_SYTRIM1                  */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div16                           0x00000006UL                                           /**< Mode div16 for RAC_SYTRIM1                  */
#define _RAC_SYTRIM1_SYLODIVSGTESTDIV_div12x                          0x00000007UL                                           /**< Mode div12x for RAC_SYTRIM1                 */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_DEFAULT                          (_RAC_SYTRIM1_SYLODIVSGTESTDIV_DEFAULT << 29)          /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div2                             (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div2 << 29)             /**< Shifted mode div2 for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div3                             (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div3 << 29)             /**< Shifted mode div3 for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div4                             (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div4 << 29)             /**< Shifted mode div4 for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div6                             (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div6 << 29)             /**< Shifted mode div6 for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div8                             (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div8 << 29)             /**< Shifted mode div8 for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div12                            (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div12 << 29)            /**< Shifted mode div12 for RAC_SYTRIM1          */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div16                            (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div16 << 29)            /**< Shifted mode div16 for RAC_SYTRIM1          */
#define RAC_SYTRIM1_SYLODIVSGTESTDIV_div12x                           (_RAC_SYTRIM1_SYLODIVSGTESTDIV_div12x << 29)           /**< Shifted mode div12x for RAC_SYTRIM1         */

/* Bit fields for RAC SYCAL */
#define _RAC_SYCAL_RESETVALUE                                         0x01008100UL                                                /**< Default value for RAC_SYCAL                 */
#define _RAC_SYCAL_MASK                                               0x03018700UL                                                /**< Mask for RAC_SYCAL                          */
#define RAC_SYCAL_SYVCOMODEPKD                                        (0x1UL << 8)                                                /**< SYVCOMODEPKD                                */
#define _RAC_SYCAL_SYVCOMODEPKD_SHIFT                                 8                                                           /**< Shift value for RAC_SYVCOMODEPKD            */
#define _RAC_SYCAL_SYVCOMODEPKD_MASK                                  0x100UL                                                     /**< Bit mask for RAC_SYVCOMODEPKD               */
#define _RAC_SYCAL_SYVCOMODEPKD_DEFAULT                               0x00000001UL                                                /**< Mode DEFAULT for RAC_SYCAL                  */
#define _RAC_SYCAL_SYVCOMODEPKD_t_openloop_0                          0x00000000UL                                                /**< Mode t_openloop_0 for RAC_SYCAL             */
#define _RAC_SYCAL_SYVCOMODEPKD_t_pkdetect_1                          0x00000001UL                                                /**< Mode t_pkdetect_1 for RAC_SYCAL             */
#define RAC_SYCAL_SYVCOMODEPKD_DEFAULT                                (_RAC_SYCAL_SYVCOMODEPKD_DEFAULT << 8)                      /**< Shifted mode DEFAULT for RAC_SYCAL          */
#define RAC_SYCAL_SYVCOMODEPKD_t_openloop_0                           (_RAC_SYCAL_SYVCOMODEPKD_t_openloop_0 << 8)                 /**< Shifted mode t_openloop_0 for RAC_SYCAL     */
#define RAC_SYCAL_SYVCOMODEPKD_t_pkdetect_1                           (_RAC_SYCAL_SYVCOMODEPKD_t_pkdetect_1 << 8)                 /**< Shifted mode t_pkdetect_1 for RAC_SYCAL     */
#define RAC_SYCAL_SYVCOMORECURRENT                                    (0x1UL << 9)                                                /**< SYVCOMORECURRENT                            */
#define _RAC_SYCAL_SYVCOMORECURRENT_SHIFT                             9                                                           /**< Shift value for RAC_SYVCOMORECURRENT        */
#define _RAC_SYCAL_SYVCOMORECURRENT_MASK                              0x200UL                                                     /**< Bit mask for RAC_SYVCOMORECURRENT           */
#define _RAC_SYCAL_SYVCOMORECURRENT_DEFAULT                           0x00000000UL                                                /**< Mode DEFAULT for RAC_SYCAL                  */
#define _RAC_SYCAL_SYVCOMORECURRENT_more_current_0                    0x00000000UL                                                /**< Mode more_current_0 for RAC_SYCAL           */
#define _RAC_SYCAL_SYVCOMORECURRENT_more_current_1                    0x00000001UL                                                /**< Mode more_current_1 for RAC_SYCAL           */
#define RAC_SYCAL_SYVCOMORECURRENT_DEFAULT                            (_RAC_SYCAL_SYVCOMORECURRENT_DEFAULT << 9)                  /**< Shifted mode DEFAULT for RAC_SYCAL          */
#define RAC_SYCAL_SYVCOMORECURRENT_more_current_0                     (_RAC_SYCAL_SYVCOMORECURRENT_more_current_0 << 9)           /**< Shifted mode more_current_0 for RAC_SYCAL   */
#define RAC_SYCAL_SYVCOMORECURRENT_more_current_1                     (_RAC_SYCAL_SYVCOMORECURRENT_more_current_1 << 9)           /**< Shifted mode more_current_1 for RAC_SYCAL   */
#define RAC_SYCAL_SYVCOSLOWNOISEFILTER                                (0x1UL << 10)                                               /**< SYVCOSLOWNOISEFILTER                        */
#define _RAC_SYCAL_SYVCOSLOWNOISEFILTER_SHIFT                         10                                                          /**< Shift value for RAC_SYVCOSLOWNOISEFILTER    */
#define _RAC_SYCAL_SYVCOSLOWNOISEFILTER_MASK                          0x400UL                                                     /**< Bit mask for RAC_SYVCOSLOWNOISEFILTER       */
#define _RAC_SYCAL_SYVCOSLOWNOISEFILTER_DEFAULT                       0x00000000UL                                                /**< Mode DEFAULT for RAC_SYCAL                  */
#define _RAC_SYCAL_SYVCOSLOWNOISEFILTER_slow_noise_filter_0           0x00000000UL                                                /**< Mode slow_noise_filter_0 for RAC_SYCAL      */
#define _RAC_SYCAL_SYVCOSLOWNOISEFILTER_slow_noise_filter_1           0x00000001UL                                                /**< Mode slow_noise_filter_1 for RAC_SYCAL      */
#define RAC_SYCAL_SYVCOSLOWNOISEFILTER_DEFAULT                        (_RAC_SYCAL_SYVCOSLOWNOISEFILTER_DEFAULT << 10)             /**< Shifted mode DEFAULT for RAC_SYCAL          */
#define RAC_SYCAL_SYVCOSLOWNOISEFILTER_slow_noise_filter_0            (_RAC_SYCAL_SYVCOSLOWNOISEFILTER_slow_noise_filter_0 << 10) /**< Shifted mode slow_noise_filter_0 for RAC_SYCAL*/
#define RAC_SYCAL_SYVCOSLOWNOISEFILTER_slow_noise_filter_1            (_RAC_SYCAL_SYVCOSLOWNOISEFILTER_slow_noise_filter_1 << 10) /**< Shifted mode slow_noise_filter_1 for RAC_SYCAL*/
#define _RAC_SYCAL_SYVCOVCAPVCM_SHIFT                                 15                                                          /**< Shift value for RAC_SYVCOVCAPVCM            */
#define _RAC_SYCAL_SYVCOVCAPVCM_MASK                                  0x18000UL                                                   /**< Bit mask for RAC_SYVCOVCAPVCM               */
#define _RAC_SYCAL_SYVCOVCAPVCM_DEFAULT                               0x00000001UL                                                /**< Mode DEFAULT for RAC_SYCAL                  */
#define RAC_SYCAL_SYVCOVCAPVCM_DEFAULT                                (_RAC_SYCAL_SYVCOVCAPVCM_DEFAULT << 15)                     /**< Shifted mode DEFAULT for RAC_SYCAL          */
#define _RAC_SYCAL_SYHILOADCHPREG_SHIFT                               24                                                          /**< Shift value for RAC_SYHILOADCHPREG          */
#define _RAC_SYCAL_SYHILOADCHPREG_MASK                                0x3000000UL                                                 /**< Bit mask for RAC_SYHILOADCHPREG             */
#define _RAC_SYCAL_SYHILOADCHPREG_DEFAULT                             0x00000001UL                                                /**< Mode DEFAULT for RAC_SYCAL                  */
#define _RAC_SYCAL_SYHILOADCHPREG_i_350uA                             0x00000000UL                                                /**< Mode i_350uA for RAC_SYCAL                  */
#define _RAC_SYCAL_SYHILOADCHPREG_i_500uA                             0x00000001UL                                                /**< Mode i_500uA for RAC_SYCAL                  */
#define _RAC_SYCAL_SYHILOADCHPREG_i_550uA                             0x00000002UL                                                /**< Mode i_550uA for RAC_SYCAL                  */
#define _RAC_SYCAL_SYHILOADCHPREG_i_700uA                             0x00000003UL                                                /**< Mode i_700uA for RAC_SYCAL                  */
#define RAC_SYCAL_SYHILOADCHPREG_DEFAULT                              (_RAC_SYCAL_SYHILOADCHPREG_DEFAULT << 24)                   /**< Shifted mode DEFAULT for RAC_SYCAL          */
#define RAC_SYCAL_SYHILOADCHPREG_i_350uA                              (_RAC_SYCAL_SYHILOADCHPREG_i_350uA << 24)                   /**< Shifted mode i_350uA for RAC_SYCAL          */
#define RAC_SYCAL_SYHILOADCHPREG_i_500uA                              (_RAC_SYCAL_SYHILOADCHPREG_i_500uA << 24)                   /**< Shifted mode i_500uA for RAC_SYCAL          */
#define RAC_SYCAL_SYHILOADCHPREG_i_550uA                              (_RAC_SYCAL_SYHILOADCHPREG_i_550uA << 24)                   /**< Shifted mode i_550uA for RAC_SYCAL          */
#define RAC_SYCAL_SYHILOADCHPREG_i_700uA                              (_RAC_SYCAL_SYHILOADCHPREG_i_700uA << 24)                   /**< Shifted mode i_700uA for RAC_SYCAL          */

/* Bit fields for RAC SYEN */
#define _RAC_SYEN_RESETVALUE                                          0x00000000UL                                    /**< Default value for RAC_SYEN                  */
#define _RAC_SYEN_MASK                                                0x00007FFFUL                                    /**< Mask for RAC_SYEN                           */
#define RAC_SYEN_SYCHPEN                                              (0x1UL << 0)                                    /**< SYCHPEN                                     */
#define _RAC_SYEN_SYCHPEN_SHIFT                                       0                                               /**< Shift value for RAC_SYCHPEN                 */
#define _RAC_SYEN_SYCHPEN_MASK                                        0x1UL                                           /**< Bit mask for RAC_SYCHPEN                    */
#define _RAC_SYEN_SYCHPEN_DEFAULT                                     0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYCHPEN_disable                                     0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYCHPEN_enable                                      0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYCHPEN_DEFAULT                                      (_RAC_SYEN_SYCHPEN_DEFAULT << 0)                /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYCHPEN_disable                                      (_RAC_SYEN_SYCHPEN_disable << 0)                /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYCHPEN_enable                                       (_RAC_SYEN_SYCHPEN_enable << 0)                 /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYCHPLPEN                                            (0x1UL << 1)                                    /**< SYCHPLPEN                                   */
#define _RAC_SYEN_SYCHPLPEN_SHIFT                                     1                                               /**< Shift value for RAC_SYCHPLPEN               */
#define _RAC_SYEN_SYCHPLPEN_MASK                                      0x2UL                                           /**< Bit mask for RAC_SYCHPLPEN                  */
#define _RAC_SYEN_SYCHPLPEN_DEFAULT                                   0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYCHPLPEN_disable                                   0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYCHPLPEN_enable                                    0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYCHPLPEN_DEFAULT                                    (_RAC_SYEN_SYCHPLPEN_DEFAULT << 1)              /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYCHPLPEN_disable                                    (_RAC_SYEN_SYCHPLPEN_disable << 1)              /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYCHPLPEN_enable                                     (_RAC_SYEN_SYCHPLPEN_enable << 1)               /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYENCHPREG                                           (0x1UL << 2)                                    /**< SYENCHPREG                                  */
#define _RAC_SYEN_SYENCHPREG_SHIFT                                    2                                               /**< Shift value for RAC_SYENCHPREG              */
#define _RAC_SYEN_SYENCHPREG_MASK                                     0x4UL                                           /**< Bit mask for RAC_SYENCHPREG                 */
#define _RAC_SYEN_SYENCHPREG_DEFAULT                                  0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENCHPREG_Disable                                  0x00000000UL                                    /**< Mode Disable for RAC_SYEN                   */
#define _RAC_SYEN_SYENCHPREG_Enable                                   0x00000001UL                                    /**< Mode Enable for RAC_SYEN                    */
#define RAC_SYEN_SYENCHPREG_DEFAULT                                   (_RAC_SYEN_SYENCHPREG_DEFAULT << 2)             /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENCHPREG_Disable                                   (_RAC_SYEN_SYENCHPREG_Disable << 2)             /**< Shifted mode Disable for RAC_SYEN           */
#define RAC_SYEN_SYENCHPREG_Enable                                    (_RAC_SYEN_SYENCHPREG_Enable << 2)              /**< Shifted mode Enable for RAC_SYEN            */
#define RAC_SYEN_SYENCHPREPLICA                                       (0x1UL << 3)                                    /**< SYENCHPREPLICA                              */
#define _RAC_SYEN_SYENCHPREPLICA_SHIFT                                3                                               /**< Shift value for RAC_SYENCHPREPLICA          */
#define _RAC_SYEN_SYENCHPREPLICA_MASK                                 0x8UL                                           /**< Bit mask for RAC_SYENCHPREPLICA             */
#define _RAC_SYEN_SYENCHPREPLICA_DEFAULT                              0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENCHPREPLICA_disable                              0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYENCHPREPLICA_enable                               0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYENCHPREPLICA_DEFAULT                               (_RAC_SYEN_SYENCHPREPLICA_DEFAULT << 3)         /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENCHPREPLICA_disable                               (_RAC_SYEN_SYENCHPREPLICA_disable << 3)         /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYENCHPREPLICA_enable                                (_RAC_SYEN_SYENCHPREPLICA_enable << 3)          /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYENMMDREG                                           (0x1UL << 4)                                    /**< SYENMMDREG                                  */
#define _RAC_SYEN_SYENMMDREG_SHIFT                                    4                                               /**< Shift value for RAC_SYENMMDREG              */
#define _RAC_SYEN_SYENMMDREG_MASK                                     0x10UL                                          /**< Bit mask for RAC_SYENMMDREG                 */
#define _RAC_SYEN_SYENMMDREG_DEFAULT                                  0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENMMDREG_Disable                                  0x00000000UL                                    /**< Mode Disable for RAC_SYEN                   */
#define _RAC_SYEN_SYENMMDREG_Enable                                   0x00000001UL                                    /**< Mode Enable for RAC_SYEN                    */
#define RAC_SYEN_SYENMMDREG_DEFAULT                                   (_RAC_SYEN_SYENMMDREG_DEFAULT << 4)             /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENMMDREG_Disable                                   (_RAC_SYEN_SYENMMDREG_Disable << 4)             /**< Shifted mode Disable for RAC_SYEN           */
#define RAC_SYEN_SYENMMDREG_Enable                                    (_RAC_SYEN_SYENMMDREG_Enable << 4)              /**< Shifted mode Enable for RAC_SYEN            */
#define RAC_SYEN_SYENMMDREPLICA1                                      (0x1UL << 5)                                    /**< SYENMMDREPLICA1                             */
#define _RAC_SYEN_SYENMMDREPLICA1_SHIFT                               5                                               /**< Shift value for RAC_SYENMMDREPLICA1         */
#define _RAC_SYEN_SYENMMDREPLICA1_MASK                                0x20UL                                          /**< Bit mask for RAC_SYENMMDREPLICA1            */
#define _RAC_SYEN_SYENMMDREPLICA1_DEFAULT                             0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENMMDREPLICA1_disable                             0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYENMMDREPLICA1_enable                              0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYENMMDREPLICA1_DEFAULT                              (_RAC_SYEN_SYENMMDREPLICA1_DEFAULT << 5)        /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENMMDREPLICA1_disable                              (_RAC_SYEN_SYENMMDREPLICA1_disable << 5)        /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYENMMDREPLICA1_enable                               (_RAC_SYEN_SYENMMDREPLICA1_enable << 5)         /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYENMMDREPLICA2                                      (0x1UL << 6)                                    /**< SYENMMDREPLICA2                             */
#define _RAC_SYEN_SYENMMDREPLICA2_SHIFT                               6                                               /**< Shift value for RAC_SYENMMDREPLICA2         */
#define _RAC_SYEN_SYENMMDREPLICA2_MASK                                0x40UL                                          /**< Bit mask for RAC_SYENMMDREPLICA2            */
#define _RAC_SYEN_SYENMMDREPLICA2_DEFAULT                             0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENMMDREPLICA2_Disable                             0x00000000UL                                    /**< Mode Disable for RAC_SYEN                   */
#define _RAC_SYEN_SYENMMDREPLICA2_Enable                              0x00000001UL                                    /**< Mode Enable for RAC_SYEN                    */
#define RAC_SYEN_SYENMMDREPLICA2_DEFAULT                              (_RAC_SYEN_SYENMMDREPLICA2_DEFAULT << 6)        /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENMMDREPLICA2_Disable                              (_RAC_SYEN_SYENMMDREPLICA2_Disable << 6)        /**< Shifted mode Disable for RAC_SYEN           */
#define RAC_SYEN_SYENMMDREPLICA2_Enable                               (_RAC_SYEN_SYENMMDREPLICA2_Enable << 6)         /**< Shifted mode Enable for RAC_SYEN            */
#define RAC_SYEN_SYENVCOBIAS                                          (0x1UL << 7)                                    /**< SYENVCOBIAS                                 */
#define _RAC_SYEN_SYENVCOBIAS_SHIFT                                   7                                               /**< Shift value for RAC_SYENVCOBIAS             */
#define _RAC_SYEN_SYENVCOBIAS_MASK                                    0x80UL                                          /**< Bit mask for RAC_SYENVCOBIAS                */
#define _RAC_SYEN_SYENVCOBIAS_DEFAULT                                 0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENVCOBIAS_en_vco_bias_0                           0x00000000UL                                    /**< Mode en_vco_bias_0 for RAC_SYEN             */
#define _RAC_SYEN_SYENVCOBIAS_en_vco_bias_1                           0x00000001UL                                    /**< Mode en_vco_bias_1 for RAC_SYEN             */
#define RAC_SYEN_SYENVCOBIAS_DEFAULT                                  (_RAC_SYEN_SYENVCOBIAS_DEFAULT << 7)            /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENVCOBIAS_en_vco_bias_0                            (_RAC_SYEN_SYENVCOBIAS_en_vco_bias_0 << 7)      /**< Shifted mode en_vco_bias_0 for RAC_SYEN     */
#define RAC_SYEN_SYENVCOBIAS_en_vco_bias_1                            (_RAC_SYEN_SYENVCOBIAS_en_vco_bias_1 << 7)      /**< Shifted mode en_vco_bias_1 for RAC_SYEN     */
#define RAC_SYEN_SYENVCOPFET                                          (0x1UL << 8)                                    /**< SYENVCOPFET                                 */
#define _RAC_SYEN_SYENVCOPFET_SHIFT                                   8                                               /**< Shift value for RAC_SYENVCOPFET             */
#define _RAC_SYEN_SYENVCOPFET_MASK                                    0x100UL                                         /**< Bit mask for RAC_SYENVCOPFET                */
#define _RAC_SYEN_SYENVCOPFET_DEFAULT                                 0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENVCOPFET_en_vco_pfet_0                           0x00000000UL                                    /**< Mode en_vco_pfet_0 for RAC_SYEN             */
#define _RAC_SYEN_SYENVCOPFET_en_vco_pfet_1                           0x00000001UL                                    /**< Mode en_vco_pfet_1 for RAC_SYEN             */
#define RAC_SYEN_SYENVCOPFET_DEFAULT                                  (_RAC_SYEN_SYENVCOPFET_DEFAULT << 8)            /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENVCOPFET_en_vco_pfet_0                            (_RAC_SYEN_SYENVCOPFET_en_vco_pfet_0 << 8)      /**< Shifted mode en_vco_pfet_0 for RAC_SYEN     */
#define RAC_SYEN_SYENVCOPFET_en_vco_pfet_1                            (_RAC_SYEN_SYENVCOPFET_en_vco_pfet_1 << 8)      /**< Shifted mode en_vco_pfet_1 for RAC_SYEN     */
#define RAC_SYEN_SYENVCOREG                                           (0x1UL << 9)                                    /**< SYENVCOREG                                  */
#define _RAC_SYEN_SYENVCOREG_SHIFT                                    9                                               /**< Shift value for RAC_SYENVCOREG              */
#define _RAC_SYEN_SYENVCOREG_MASK                                     0x200UL                                         /**< Bit mask for RAC_SYENVCOREG                 */
#define _RAC_SYEN_SYENVCOREG_DEFAULT                                  0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYENVCOREG_en_vco_reg_0                             0x00000000UL                                    /**< Mode en_vco_reg_0 for RAC_SYEN              */
#define _RAC_SYEN_SYENVCOREG_en_vco_reg_1                             0x00000001UL                                    /**< Mode en_vco_reg_1 for RAC_SYEN              */
#define RAC_SYEN_SYENVCOREG_DEFAULT                                   (_RAC_SYEN_SYENVCOREG_DEFAULT << 9)             /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYENVCOREG_en_vco_reg_0                              (_RAC_SYEN_SYENVCOREG_en_vco_reg_0 << 9)        /**< Shifted mode en_vco_reg_0 for RAC_SYEN      */
#define RAC_SYEN_SYENVCOREG_en_vco_reg_1                              (_RAC_SYEN_SYENVCOREG_en_vco_reg_1 << 9)        /**< Shifted mode en_vco_reg_1 for RAC_SYEN      */
#define RAC_SYEN_SYLODIVEN                                            (0x1UL << 10)                                   /**< SYLODIVEN                                   */
#define _RAC_SYEN_SYLODIVEN_SHIFT                                     10                                              /**< Shift value for RAC_SYLODIVEN               */
#define _RAC_SYEN_SYLODIVEN_MASK                                      0x400UL                                         /**< Bit mask for RAC_SYLODIVEN                  */
#define _RAC_SYEN_SYLODIVEN_DEFAULT                                   0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYLODIVEN_disable                                   0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYLODIVEN_enable                                    0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYLODIVEN_DEFAULT                                    (_RAC_SYEN_SYLODIVEN_DEFAULT << 10)             /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYLODIVEN_disable                                    (_RAC_SYEN_SYLODIVEN_disable << 10)             /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYLODIVEN_enable                                     (_RAC_SYEN_SYLODIVEN_enable << 10)              /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYLODIVLDOBIASEN                                     (0x1UL << 11)                                   /**< SYLODIVLDOBIASEN                            */
#define _RAC_SYEN_SYLODIVLDOBIASEN_SHIFT                              11                                              /**< Shift value for RAC_SYLODIVLDOBIASEN        */
#define _RAC_SYEN_SYLODIVLDOBIASEN_MASK                               0x800UL                                         /**< Bit mask for RAC_SYLODIVLDOBIASEN           */
#define _RAC_SYEN_SYLODIVLDOBIASEN_DEFAULT                            0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYLODIVLDOBIASEN_disable                            0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYLODIVLDOBIASEN_enable                             0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYLODIVLDOBIASEN_DEFAULT                             (_RAC_SYEN_SYLODIVLDOBIASEN_DEFAULT << 11)      /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYLODIVLDOBIASEN_disable                             (_RAC_SYEN_SYLODIVLDOBIASEN_disable << 11)      /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYLODIVLDOBIASEN_enable                              (_RAC_SYEN_SYLODIVLDOBIASEN_enable << 11)       /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYLODIVLDOEN                                         (0x1UL << 12)                                   /**< SYLODIVLDOEN                                */
#define _RAC_SYEN_SYLODIVLDOEN_SHIFT                                  12                                              /**< Shift value for RAC_SYLODIVLDOEN            */
#define _RAC_SYEN_SYLODIVLDOEN_MASK                                   0x1000UL                                        /**< Bit mask for RAC_SYLODIVLDOEN               */
#define _RAC_SYEN_SYLODIVLDOEN_DEFAULT                                0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYLODIVLDOEN_disable                                0x00000000UL                                    /**< Mode disable for RAC_SYEN                   */
#define _RAC_SYEN_SYLODIVLDOEN_enable                                 0x00000001UL                                    /**< Mode enable for RAC_SYEN                    */
#define RAC_SYEN_SYLODIVLDOEN_DEFAULT                                 (_RAC_SYEN_SYLODIVLDOEN_DEFAULT << 12)          /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYLODIVLDOEN_disable                                 (_RAC_SYEN_SYLODIVLDOEN_disable << 12)          /**< Shifted mode disable for RAC_SYEN           */
#define RAC_SYEN_SYLODIVLDOEN_enable                                  (_RAC_SYEN_SYLODIVLDOEN_enable << 12)           /**< Shifted mode enable for RAC_SYEN            */
#define RAC_SYEN_SYSTARTCHPREG                                        (0x1UL << 13)                                   /**< SYSTARTCHPREG                               */
#define _RAC_SYEN_SYSTARTCHPREG_SHIFT                                 13                                              /**< Shift value for RAC_SYSTARTCHPREG           */
#define _RAC_SYEN_SYSTARTCHPREG_MASK                                  0x2000UL                                        /**< Bit mask for RAC_SYSTARTCHPREG              */
#define _RAC_SYEN_SYSTARTCHPREG_DEFAULT                               0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYSTARTCHPREG_no_fast_startup                       0x00000000UL                                    /**< Mode no_fast_startup for RAC_SYEN           */
#define _RAC_SYEN_SYSTARTCHPREG_fast_startup                          0x00000001UL                                    /**< Mode fast_startup for RAC_SYEN              */
#define RAC_SYEN_SYSTARTCHPREG_DEFAULT                                (_RAC_SYEN_SYSTARTCHPREG_DEFAULT << 13)         /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYSTARTCHPREG_no_fast_startup                        (_RAC_SYEN_SYSTARTCHPREG_no_fast_startup << 13) /**< Shifted mode no_fast_startup for RAC_SYEN   */
#define RAC_SYEN_SYSTARTCHPREG_fast_startup                           (_RAC_SYEN_SYSTARTCHPREG_fast_startup << 13)    /**< Shifted mode fast_startup for RAC_SYEN      */
#define RAC_SYEN_SYSTARTMMDREG                                        (0x1UL << 14)                                   /**< SYSTARTMMDREG                               */
#define _RAC_SYEN_SYSTARTMMDREG_SHIFT                                 14                                              /**< Shift value for RAC_SYSTARTMMDREG           */
#define _RAC_SYEN_SYSTARTMMDREG_MASK                                  0x4000UL                                        /**< Bit mask for RAC_SYSTARTMMDREG              */
#define _RAC_SYEN_SYSTARTMMDREG_DEFAULT                               0x00000000UL                                    /**< Mode DEFAULT for RAC_SYEN                   */
#define _RAC_SYEN_SYSTARTMMDREG_no_fast_startup                       0x00000000UL                                    /**< Mode no_fast_startup for RAC_SYEN           */
#define _RAC_SYEN_SYSTARTMMDREG_fast_startup                          0x00000001UL                                    /**< Mode fast_startup for RAC_SYEN              */
#define RAC_SYEN_SYSTARTMMDREG_DEFAULT                                (_RAC_SYEN_SYSTARTMMDREG_DEFAULT << 14)         /**< Shifted mode DEFAULT for RAC_SYEN           */
#define RAC_SYEN_SYSTARTMMDREG_no_fast_startup                        (_RAC_SYEN_SYSTARTMMDREG_no_fast_startup << 14) /**< Shifted mode no_fast_startup for RAC_SYEN   */
#define RAC_SYEN_SYSTARTMMDREG_fast_startup                           (_RAC_SYEN_SYSTARTMMDREG_fast_startup << 14)    /**< Shifted mode fast_startup for RAC_SYEN      */

/* Bit fields for RAC SYLOEN */
#define _RAC_SYLOEN_RESETVALUE                                        0x00000000UL                                      /**< Default value for RAC_SYLOEN                */
#define _RAC_SYLOEN_MASK                                              0x80000663UL                                      /**< Mask for RAC_SYLOEN                         */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN                              (0x1UL << 0)                                      /**< SYLODIVRLOADCCLK2G4EN                       */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_SHIFT                       0                                                 /**< Shift value for RAC_SYLODIVRLOADCCLK2G4EN   */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_MASK                        0x1UL                                             /**< Bit mask for RAC_SYLODIVRLOADCCLK2G4EN      */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_disable                     0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_enable                      0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_DEFAULT                      (_RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_DEFAULT << 0)  /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_disable                      (_RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_disable << 0)  /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_enable                       (_RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_enable << 0)   /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVRLO2G4EN                                    (0x1UL << 1)                                      /**< SYLODIVRLO2G4EN                             */
#define _RAC_SYLOEN_SYLODIVRLO2G4EN_SHIFT                             1                                                 /**< Shift value for RAC_SYLODIVRLO2G4EN         */
#define _RAC_SYLOEN_SYLODIVRLO2G4EN_MASK                              0x2UL                                             /**< Bit mask for RAC_SYLODIVRLO2G4EN            */
#define _RAC_SYLOEN_SYLODIVRLO2G4EN_DEFAULT                           0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLO2G4EN_disable                           0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLO2G4EN_enable                            0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVRLO2G4EN_DEFAULT                            (_RAC_SYLOEN_SYLODIVRLO2G4EN_DEFAULT << 1)        /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLO2G4EN_disable                            (_RAC_SYLOEN_SYLODIVRLO2G4EN_disable << 1)        /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLO2G4EN_enable                             (_RAC_SYLOEN_SYLODIVRLO2G4EN_enable << 1)         /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN                             (0x1UL << 5)                                      /**< SYLODIVTLO0DBM2G4AUXEN                      */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_SHIFT                      5                                                 /**< Shift value for RAC_SYLODIVTLO0DBM2G4AUXEN  */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_MASK                       0x20UL                                            /**< Bit mask for RAC_SYLODIVTLO0DBM2G4AUXEN     */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_disable                    0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_enable                     0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_DEFAULT                     (_RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_DEFAULT << 5) /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_disable                     (_RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_disable << 5) /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_enable                      (_RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_enable << 5)  /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN                                (0x1UL << 6)                                      /**< SYLODIVTLO0DBM2G4EN                         */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_SHIFT                         6                                                 /**< Shift value for RAC_SYLODIVTLO0DBM2G4EN     */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_MASK                          0x40UL                                            /**< Bit mask for RAC_SYLODIVTLO0DBM2G4EN        */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_disable                       0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_enable                        0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_DEFAULT                        (_RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_DEFAULT << 6)    /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_disable                        (_RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_disable << 6)    /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_enable                         (_RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_enable << 6)     /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN                             (0x1UL << 9)                                      /**< SYLODIVTLO6DBM2G4AUXEN                      */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_SHIFT                      9                                                 /**< Shift value for RAC_SYLODIVTLO6DBM2G4AUXEN  */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_MASK                       0x200UL                                           /**< Bit mask for RAC_SYLODIVTLO6DBM2G4AUXEN     */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_disable                    0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_enable                     0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_DEFAULT                     (_RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_DEFAULT << 9) /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_disable                     (_RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_disable << 9) /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_enable                      (_RAC_SYLOEN_SYLODIVTLO6DBM2G4AUXEN_enable << 9)  /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4EN                                (0x1UL << 10)                                     /**< SYLODIVTLO6DBM2G4EN                         */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_SHIFT                         10                                                /**< Shift value for RAC_SYLODIVTLO6DBM2G4EN     */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_MASK                          0x400UL                                           /**< Bit mask for RAC_SYLODIVTLO6DBM2G4EN        */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_disable                       0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_enable                        0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_DEFAULT                        (_RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_DEFAULT << 10)   /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_disable                        (_RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_disable << 10)   /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_enable                         (_RAC_SYLOEN_SYLODIVTLO6DBM2G4EN_enable << 10)    /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVSGTESTDIVEN                                 (0x1UL << 31)                                     /**< SYLODIVSGTESTDIVEN                          */
#define _RAC_SYLOEN_SYLODIVSGTESTDIVEN_SHIFT                          31                                                /**< Shift value for RAC_SYLODIVSGTESTDIVEN      */
#define _RAC_SYLOEN_SYLODIVSGTESTDIVEN_MASK                           0x80000000UL                                      /**< Bit mask for RAC_SYLODIVSGTESTDIVEN         */
#define _RAC_SYLOEN_SYLODIVSGTESTDIVEN_DEFAULT                        0x00000000UL                                      /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVSGTESTDIVEN_disable                        0x00000000UL                                      /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVSGTESTDIVEN_enable                         0x00000001UL                                      /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVSGTESTDIVEN_DEFAULT                         (_RAC_SYLOEN_SYLODIVSGTESTDIVEN_DEFAULT << 31)    /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVSGTESTDIVEN_disable                         (_RAC_SYLOEN_SYLODIVSGTESTDIVEN_disable << 31)    /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVSGTESTDIVEN_enable                          (_RAC_SYLOEN_SYLODIVSGTESTDIVEN_enable << 31)     /**< Shifted mode enable for RAC_SYLOEN          */

/* Bit fields for RAC SYMMDCTRL */
#define _RAC_SYMMDCTRL_RESETVALUE                                     0x00000400UL                                   /**< Default value for RAC_SYMMDCTRL             */
#define _RAC_SYMMDCTRL_MASK                                           0x00000E07UL                                   /**< Mask for RAC_SYMMDCTRL                      */
#define RAC_SYMMDCTRL_SYMMDENRSDIG                                    (0x1UL << 0)                                   /**< SYMMDENRSDIG                                */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_SHIFT                             0                                              /**< Shift value for RAC_SYMMDENRSDIG            */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_MASK                              0x1UL                                          /**< Bit mask for RAC_SYMMDENRSDIG               */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_DEFAULT                           0x00000000UL                                   /**< Mode DEFAULT for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_disable                           0x00000000UL                                   /**< Mode disable for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_enable                            0x00000001UL                                   /**< Mode enable for RAC_SYMMDCTRL               */
#define RAC_SYMMDCTRL_SYMMDENRSDIG_DEFAULT                            (_RAC_SYMMDCTRL_SYMMDENRSDIG_DEFAULT << 0)     /**< Shifted mode DEFAULT for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDENRSDIG_disable                            (_RAC_SYMMDCTRL_SYMMDENRSDIG_disable << 0)     /**< Shifted mode disable for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDENRSDIG_enable                             (_RAC_SYMMDCTRL_SYMMDENRSDIG_enable << 0)      /**< Shifted mode enable for RAC_SYMMDCTRL       */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_SHIFT                            1                                              /**< Shift value for RAC_SYMMDDIVRSDIG           */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_MASK                             0x6UL                                          /**< Bit mask for RAC_SYMMDDIVRSDIG              */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby1                        0x00000000UL                                   /**< Mode Divideby1 for RAC_SYMMDCTRL            */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby2                        0x00000001UL                                   /**< Mode Divideby2 for RAC_SYMMDCTRL            */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby4                        0x00000002UL                                   /**< Mode Divideby4 for RAC_SYMMDCTRL            */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby8                        0x00000003UL                                   /**< Mode Divideby8 for RAC_SYMMDCTRL            */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_DEFAULT                           (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_DEFAULT << 1)    /**< Shifted mode DEFAULT for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby1                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby1 << 1)  /**< Shifted mode Divideby1 for RAC_SYMMDCTRL    */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby2                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby2 << 1)  /**< Shifted mode Divideby2 for RAC_SYMMDCTRL    */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby4                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby4 << 1)  /**< Shifted mode Divideby4 for RAC_SYMMDCTRL    */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby8                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby8 << 1)  /**< Shifted mode Divideby8 for RAC_SYMMDCTRL    */
#define _RAC_SYMMDCTRL_SYMMDMODE_SHIFT                                9                                              /**< Shift value for RAC_SYMMDMODE               */
#define _RAC_SYMMDCTRL_SYMMDMODE_MASK                                 0xE00UL                                        /**< Bit mask for RAC_SYMMDMODE                  */
#define _RAC_SYMMDCTRL_SYMMDMODE_DEFAULT                              0x00000002UL                                   /**< Mode DEFAULT for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDMODE_rx_w_swctrl                          0x00000000UL                                   /**< Mode rx_w_swctrl for RAC_SYMMDCTRL          */
#define _RAC_SYMMDCTRL_SYMMDMODE_rx_wo_swctrl                         0x00000001UL                                   /**< Mode rx_wo_swctrl for RAC_SYMMDCTRL         */
#define _RAC_SYMMDCTRL_SYMMDMODE_qnc_dsm2                             0x00000002UL                                   /**< Mode qnc_dsm2 for RAC_SYMMDCTRL             */
#define _RAC_SYMMDCTRL_SYMMDMODE_qnc_dsm3                             0x00000003UL                                   /**< Mode qnc_dsm3 for RAC_SYMMDCTRL             */
#define _RAC_SYMMDCTRL_SYMMDMODE_rxlp_wo_swctrl                       0x00000004UL                                   /**< Mode rxlp_wo_swctrl for RAC_SYMMDCTRL       */
#define _RAC_SYMMDCTRL_SYMMDMODE_notuse_5                             0x00000005UL                                   /**< Mode notuse_5 for RAC_SYMMDCTRL             */
#define _RAC_SYMMDCTRL_SYMMDMODE_notuse_6                             0x00000006UL                                   /**< Mode notuse_6 for RAC_SYMMDCTRL             */
#define _RAC_SYMMDCTRL_SYMMDMODE_notuse_7                             0x00000007UL                                   /**< Mode notuse_7 for RAC_SYMMDCTRL             */
#define RAC_SYMMDCTRL_SYMMDMODE_DEFAULT                               (_RAC_SYMMDCTRL_SYMMDMODE_DEFAULT << 9)        /**< Shifted mode DEFAULT for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDMODE_rx_w_swctrl                           (_RAC_SYMMDCTRL_SYMMDMODE_rx_w_swctrl << 9)    /**< Shifted mode rx_w_swctrl for RAC_SYMMDCTRL  */
#define RAC_SYMMDCTRL_SYMMDMODE_rx_wo_swctrl                          (_RAC_SYMMDCTRL_SYMMDMODE_rx_wo_swctrl << 9)   /**< Shifted mode rx_wo_swctrl for RAC_SYMMDCTRL */
#define RAC_SYMMDCTRL_SYMMDMODE_qnc_dsm2                              (_RAC_SYMMDCTRL_SYMMDMODE_qnc_dsm2 << 9)       /**< Shifted mode qnc_dsm2 for RAC_SYMMDCTRL     */
#define RAC_SYMMDCTRL_SYMMDMODE_qnc_dsm3                              (_RAC_SYMMDCTRL_SYMMDMODE_qnc_dsm3 << 9)       /**< Shifted mode qnc_dsm3 for RAC_SYMMDCTRL     */
#define RAC_SYMMDCTRL_SYMMDMODE_rxlp_wo_swctrl                        (_RAC_SYMMDCTRL_SYMMDMODE_rxlp_wo_swctrl << 9) /**< Shifted mode rxlp_wo_swctrl for RAC_SYMMDCTRL*/
#define RAC_SYMMDCTRL_SYMMDMODE_notuse_5                              (_RAC_SYMMDCTRL_SYMMDMODE_notuse_5 << 9)       /**< Shifted mode notuse_5 for RAC_SYMMDCTRL     */
#define RAC_SYMMDCTRL_SYMMDMODE_notuse_6                              (_RAC_SYMMDCTRL_SYMMDMODE_notuse_6 << 9)       /**< Shifted mode notuse_6 for RAC_SYMMDCTRL     */
#define RAC_SYMMDCTRL_SYMMDMODE_notuse_7                              (_RAC_SYMMDCTRL_SYMMDMODE_notuse_7 << 9)       /**< Shifted mode notuse_7 for RAC_SYMMDCTRL     */

/* Bit fields for RAC DIGCLKRETIMECTRL */
#define _RAC_DIGCLKRETIMECTRL_RESETVALUE                              0x00000000UL                                                      /**< Default value for RAC_DIGCLKRETIMECTRL      */
#define _RAC_DIGCLKRETIMECTRL_MASK                                    0x00000777UL                                                      /**< Mask for RAC_DIGCLKRETIMECTRL               */
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME                     (0x1UL << 0)                                                      /**< DIGCLKRETIMEENRETIME                        */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_SHIFT              0                                                                 /**< Shift value for RAC_DIGCLKRETIMEENRETIME    */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_MASK               0x1UL                                                             /**< Bit mask for RAC_DIGCLKRETIMEENRETIME       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_DEFAULT            0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMECTRL       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_disable            0x00000000UL                                                      /**< Mode disable for RAC_DIGCLKRETIMECTRL       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_enable             0x00000001UL                                                      /**< Mode enable for RAC_DIGCLKRETIMECTRL        */
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_DEFAULT             (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_disable             (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_disable << 0)         /**< Shifted mode disable for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_enable              (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEENRETIME_enable << 0)          /**< Shifted mode enable for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME                    (0x1UL << 1)                                                      /**< DIGCLKRETIMEDISRETIME                       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_SHIFT             1                                                                 /**< Shift value for RAC_DIGCLKRETIMEDISRETIME   */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_MASK              0x2UL                                                             /**< Bit mask for RAC_DIGCLKRETIMEDISRETIME      */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_DEFAULT           0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMECTRL       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_enable_retime     0x00000000UL                                                      /**< Mode enable_retime for RAC_DIGCLKRETIMECTRL */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_disable_retime    0x00000001UL                                                      /**< Mode disable_retime for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_DEFAULT            (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_DEFAULT << 1)        /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_enable_retime      (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_enable_retime << 1)  /**< Shifted mode enable_retime for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_disable_retime     (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMEDISRETIME_disable_retime << 1) /**< Shifted mode disable_retime for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN                       (0x1UL << 2)                                                      /**< DIGCLKRETIMERESETN                          */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_SHIFT                2                                                                 /**< Shift value for RAC_DIGCLKRETIMERESETN      */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_MASK                 0x4UL                                                             /**< Bit mask for RAC_DIGCLKRETIMERESETN         */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_DEFAULT              0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMECTRL       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_operate              0x00000000UL                                                      /**< Mode operate for RAC_DIGCLKRETIMECTRL       */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_reset                0x00000001UL                                                      /**< Mode reset for RAC_DIGCLKRETIMECTRL         */
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_DEFAULT               (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_DEFAULT << 2)           /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_operate               (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_operate << 2)           /**< Shifted mode operate for RAC_DIGCLKRETIMECTRL*/
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_reset                 (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMERESETN_reset << 2)             /**< Shifted mode reset for RAC_DIGCLKRETIMECTRL */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITH_SHIFT                4                                                                 /**< Shift value for RAC_DIGCLKRETIMELIMITH      */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITH_MASK                 0x70UL                                                            /**< Bit mask for RAC_DIGCLKRETIMELIMITH         */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITH_DEFAULT              0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMECTRL       */
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITH_DEFAULT               (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITH_DEFAULT << 4)           /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMECTRL*/
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITL_SHIFT                8                                                                 /**< Shift value for RAC_DIGCLKRETIMELIMITL      */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITL_MASK                 0x700UL                                                           /**< Bit mask for RAC_DIGCLKRETIMELIMITL         */
#define _RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITL_DEFAULT              0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMECTRL       */
#define RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITL_DEFAULT               (_RAC_DIGCLKRETIMECTRL_DIGCLKRETIMELIMITL_DEFAULT << 8)           /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMECTRL*/

/* Bit fields for RAC DIGCLKRETIMESTATUS */
#define _RAC_DIGCLKRETIMESTATUS_RESETVALUE                            0x00000000UL                                                      /**< Default value for RAC_DIGCLKRETIMESTATUS    */
#define _RAC_DIGCLKRETIMESTATUS_MASK                                  0x00000003UL                                                      /**< Mask for RAC_DIGCLKRETIMESTATUS             */
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL                     (0x1UL << 0)                                                      /**< DIGCLKRETIMECLKSEL                          */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_SHIFT              0                                                                 /**< Shift value for RAC_DIGCLKRETIMECLKSEL      */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_MASK               0x1UL                                                             /**< Bit mask for RAC_DIGCLKRETIMECLKSEL         */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_DEFAULT            0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMESTATUS     */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_use_raw_clk        0x00000000UL                                                      /**< Mode use_raw_clk for RAC_DIGCLKRETIMESTATUS */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_use_retimed_clk    0x00000001UL                                                      /**< Mode use_retimed_clk for RAC_DIGCLKRETIMESTATUS*/
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_DEFAULT             (_RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMESTATUS*/
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_use_raw_clk         (_RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_use_raw_clk << 0)     /**< Shifted mode use_raw_clk for RAC_DIGCLKRETIMESTATUS*/
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_use_retimed_clk     (_RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMECLKSEL_use_retimed_clk << 0) /**< Shifted mode use_retimed_clk for RAC_DIGCLKRETIMESTATUS*/
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO                   (0x1UL << 1)                                                      /**< DIGCLKRETIMERESETNLO                        */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_SHIFT            1                                                                 /**< Shift value for RAC_DIGCLKRETIMERESETNLO    */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_MASK             0x2UL                                                             /**< Bit mask for RAC_DIGCLKRETIMERESETNLO       */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_DEFAULT          0x00000000UL                                                      /**< Mode DEFAULT for RAC_DIGCLKRETIMESTATUS     */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_lo               0x00000000UL                                                      /**< Mode lo for RAC_DIGCLKRETIMESTATUS          */
#define _RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_hi               0x00000001UL                                                      /**< Mode hi for RAC_DIGCLKRETIMESTATUS          */
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_DEFAULT           (_RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_DEFAULT << 1)       /**< Shifted mode DEFAULT for RAC_DIGCLKRETIMESTATUS*/
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_lo                (_RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_lo << 1)            /**< Shifted mode lo for RAC_DIGCLKRETIMESTATUS  */
#define RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_hi                (_RAC_DIGCLKRETIMESTATUS_DIGCLKRETIMERESETNLO_hi << 1)            /**< Shifted mode hi for RAC_DIGCLKRETIMESTATUS  */

/* Bit fields for RAC XORETIMECTRL */
#define _RAC_XORETIMECTRL_RESETVALUE                                  0x00000000UL                                              /**< Default value for RAC_XORETIMECTRL          */
#define _RAC_XORETIMECTRL_MASK                                        0x00000777UL                                              /**< Mask for RAC_XORETIMECTRL                   */
#define RAC_XORETIMECTRL_XORETIMEENRETIME                             (0x1UL << 0)                                              /**< XORETIMEENRETIME                            */
#define _RAC_XORETIMECTRL_XORETIMEENRETIME_SHIFT                      0                                                         /**< Shift value for RAC_XORETIMEENRETIME        */
#define _RAC_XORETIMECTRL_XORETIMEENRETIME_MASK                       0x1UL                                                     /**< Bit mask for RAC_XORETIMEENRETIME           */
#define _RAC_XORETIMECTRL_XORETIMEENRETIME_DEFAULT                    0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMECTRL           */
#define _RAC_XORETIMECTRL_XORETIMEENRETIME_disable                    0x00000000UL                                              /**< Mode disable for RAC_XORETIMECTRL           */
#define _RAC_XORETIMECTRL_XORETIMEENRETIME_enable                     0x00000001UL                                              /**< Mode enable for RAC_XORETIMECTRL            */
#define RAC_XORETIMECTRL_XORETIMEENRETIME_DEFAULT                     (_RAC_XORETIMECTRL_XORETIMEENRETIME_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_XORETIMECTRL   */
#define RAC_XORETIMECTRL_XORETIMEENRETIME_disable                     (_RAC_XORETIMECTRL_XORETIMEENRETIME_disable << 0)         /**< Shifted mode disable for RAC_XORETIMECTRL   */
#define RAC_XORETIMECTRL_XORETIMEENRETIME_enable                      (_RAC_XORETIMECTRL_XORETIMEENRETIME_enable << 0)          /**< Shifted mode enable for RAC_XORETIMECTRL    */
#define RAC_XORETIMECTRL_XORETIMEDISRETIME                            (0x1UL << 1)                                              /**< XORETIMEDISRETIME                           */
#define _RAC_XORETIMECTRL_XORETIMEDISRETIME_SHIFT                     1                                                         /**< Shift value for RAC_XORETIMEDISRETIME       */
#define _RAC_XORETIMECTRL_XORETIMEDISRETIME_MASK                      0x2UL                                                     /**< Bit mask for RAC_XORETIMEDISRETIME          */
#define _RAC_XORETIMECTRL_XORETIMEDISRETIME_DEFAULT                   0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMECTRL           */
#define _RAC_XORETIMECTRL_XORETIMEDISRETIME_enable_retime             0x00000000UL                                              /**< Mode enable_retime for RAC_XORETIMECTRL     */
#define _RAC_XORETIMECTRL_XORETIMEDISRETIME_disable_retime            0x00000001UL                                              /**< Mode disable_retime for RAC_XORETIMECTRL    */
#define RAC_XORETIMECTRL_XORETIMEDISRETIME_DEFAULT                    (_RAC_XORETIMECTRL_XORETIMEDISRETIME_DEFAULT << 1)        /**< Shifted mode DEFAULT for RAC_XORETIMECTRL   */
#define RAC_XORETIMECTRL_XORETIMEDISRETIME_enable_retime              (_RAC_XORETIMECTRL_XORETIMEDISRETIME_enable_retime << 1)  /**< Shifted mode enable_retime for RAC_XORETIMECTRL*/
#define RAC_XORETIMECTRL_XORETIMEDISRETIME_disable_retime             (_RAC_XORETIMECTRL_XORETIMEDISRETIME_disable_retime << 1) /**< Shifted mode disable_retime for RAC_XORETIMECTRL*/
#define RAC_XORETIMECTRL_XORETIMERESETN                               (0x1UL << 2)                                              /**< XORETIMERESETN                              */
#define _RAC_XORETIMECTRL_XORETIMERESETN_SHIFT                        2                                                         /**< Shift value for RAC_XORETIMERESETN          */
#define _RAC_XORETIMECTRL_XORETIMERESETN_MASK                         0x4UL                                                     /**< Bit mask for RAC_XORETIMERESETN             */
#define _RAC_XORETIMECTRL_XORETIMERESETN_DEFAULT                      0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMECTRL           */
#define _RAC_XORETIMECTRL_XORETIMERESETN_operate                      0x00000000UL                                              /**< Mode operate for RAC_XORETIMECTRL           */
#define _RAC_XORETIMECTRL_XORETIMERESETN_reset                        0x00000001UL                                              /**< Mode reset for RAC_XORETIMECTRL             */
#define RAC_XORETIMECTRL_XORETIMERESETN_DEFAULT                       (_RAC_XORETIMECTRL_XORETIMERESETN_DEFAULT << 2)           /**< Shifted mode DEFAULT for RAC_XORETIMECTRL   */
#define RAC_XORETIMECTRL_XORETIMERESETN_operate                       (_RAC_XORETIMECTRL_XORETIMERESETN_operate << 2)           /**< Shifted mode operate for RAC_XORETIMECTRL   */
#define RAC_XORETIMECTRL_XORETIMERESETN_reset                         (_RAC_XORETIMECTRL_XORETIMERESETN_reset << 2)             /**< Shifted mode reset for RAC_XORETIMECTRL     */
#define _RAC_XORETIMECTRL_XORETIMELIMITH_SHIFT                        4                                                         /**< Shift value for RAC_XORETIMELIMITH          */
#define _RAC_XORETIMECTRL_XORETIMELIMITH_MASK                         0x70UL                                                    /**< Bit mask for RAC_XORETIMELIMITH             */
#define _RAC_XORETIMECTRL_XORETIMELIMITH_DEFAULT                      0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMECTRL           */
#define RAC_XORETIMECTRL_XORETIMELIMITH_DEFAULT                       (_RAC_XORETIMECTRL_XORETIMELIMITH_DEFAULT << 4)           /**< Shifted mode DEFAULT for RAC_XORETIMECTRL   */
#define _RAC_XORETIMECTRL_XORETIMELIMITL_SHIFT                        8                                                         /**< Shift value for RAC_XORETIMELIMITL          */
#define _RAC_XORETIMECTRL_XORETIMELIMITL_MASK                         0x700UL                                                   /**< Bit mask for RAC_XORETIMELIMITL             */
#define _RAC_XORETIMECTRL_XORETIMELIMITL_DEFAULT                      0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMECTRL           */
#define RAC_XORETIMECTRL_XORETIMELIMITL_DEFAULT                       (_RAC_XORETIMECTRL_XORETIMELIMITL_DEFAULT << 8)           /**< Shifted mode DEFAULT for RAC_XORETIMECTRL   */

/* Bit fields for RAC XORETIMESTATUS */
#define _RAC_XORETIMESTATUS_RESETVALUE                                0x00000000UL                                              /**< Default value for RAC_XORETIMESTATUS        */
#define _RAC_XORETIMESTATUS_MASK                                      0x00000003UL                                              /**< Mask for RAC_XORETIMESTATUS                 */
#define RAC_XORETIMESTATUS_XORETIMECLKSEL                             (0x1UL << 0)                                              /**< XORETIMECLKSEL                              */
#define _RAC_XORETIMESTATUS_XORETIMECLKSEL_SHIFT                      0                                                         /**< Shift value for RAC_XORETIMECLKSEL          */
#define _RAC_XORETIMESTATUS_XORETIMECLKSEL_MASK                       0x1UL                                                     /**< Bit mask for RAC_XORETIMECLKSEL             */
#define _RAC_XORETIMESTATUS_XORETIMECLKSEL_DEFAULT                    0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMESTATUS         */
#define _RAC_XORETIMESTATUS_XORETIMECLKSEL_use_raw_clk                0x00000000UL                                              /**< Mode use_raw_clk for RAC_XORETIMESTATUS     */
#define _RAC_XORETIMESTATUS_XORETIMECLKSEL_use_retimed_clk            0x00000001UL                                              /**< Mode use_retimed_clk for RAC_XORETIMESTATUS */
#define RAC_XORETIMESTATUS_XORETIMECLKSEL_DEFAULT                     (_RAC_XORETIMESTATUS_XORETIMECLKSEL_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_XORETIMESTATUS */
#define RAC_XORETIMESTATUS_XORETIMECLKSEL_use_raw_clk                 (_RAC_XORETIMESTATUS_XORETIMECLKSEL_use_raw_clk << 0)     /**< Shifted mode use_raw_clk for RAC_XORETIMESTATUS*/
#define RAC_XORETIMESTATUS_XORETIMECLKSEL_use_retimed_clk             (_RAC_XORETIMESTATUS_XORETIMECLKSEL_use_retimed_clk << 0) /**< Shifted mode use_retimed_clk for RAC_XORETIMESTATUS*/
#define RAC_XORETIMESTATUS_XORETIMERESETNLO                           (0x1UL << 1)                                              /**< XORETIMERESETNLO                            */
#define _RAC_XORETIMESTATUS_XORETIMERESETNLO_SHIFT                    1                                                         /**< Shift value for RAC_XORETIMERESETNLO        */
#define _RAC_XORETIMESTATUS_XORETIMERESETNLO_MASK                     0x2UL                                                     /**< Bit mask for RAC_XORETIMERESETNLO           */
#define _RAC_XORETIMESTATUS_XORETIMERESETNLO_DEFAULT                  0x00000000UL                                              /**< Mode DEFAULT for RAC_XORETIMESTATUS         */
#define _RAC_XORETIMESTATUS_XORETIMERESETNLO_lo                       0x00000000UL                                              /**< Mode lo for RAC_XORETIMESTATUS              */
#define _RAC_XORETIMESTATUS_XORETIMERESETNLO_hi                       0x00000001UL                                              /**< Mode hi for RAC_XORETIMESTATUS              */
#define RAC_XORETIMESTATUS_XORETIMERESETNLO_DEFAULT                   (_RAC_XORETIMESTATUS_XORETIMERESETNLO_DEFAULT << 1)       /**< Shifted mode DEFAULT for RAC_XORETIMESTATUS */
#define RAC_XORETIMESTATUS_XORETIMERESETNLO_lo                        (_RAC_XORETIMESTATUS_XORETIMERESETNLO_lo << 1)            /**< Shifted mode lo for RAC_XORETIMESTATUS      */
#define RAC_XORETIMESTATUS_XORETIMERESETNLO_hi                        (_RAC_XORETIMESTATUS_XORETIMERESETNLO_hi << 1)            /**< Shifted mode hi for RAC_XORETIMESTATUS      */

/* Bit fields for RAC XOSQBUFFILT */
#define _RAC_XOSQBUFFILT_RESETVALUE                                   0x00000000UL                                 /**< Default value for RAC_XOSQBUFFILT           */
#define _RAC_XOSQBUFFILT_MASK                                         0x00000003UL                                 /**< Mask for RAC_XOSQBUFFILT                    */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_SHIFT                            0                                            /**< Shift value for RAC_XOSQBUFFILT             */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_MASK                             0x3UL                                        /**< Bit mask for RAC_XOSQBUFFILT                */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_DEFAULT                          0x00000000UL                                 /**< Mode DEFAULT for RAC_XOSQBUFFILT            */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_bypass                           0x00000000UL                                 /**< Mode bypass for RAC_XOSQBUFFILT             */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_filter_1                         0x00000001UL                                 /**< Mode filter_1 for RAC_XOSQBUFFILT           */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_filter_2                         0x00000002UL                                 /**< Mode filter_2 for RAC_XOSQBUFFILT           */
#define _RAC_XOSQBUFFILT_XOSQBUFFILT_filter_3                         0x00000003UL                                 /**< Mode filter_3 for RAC_XOSQBUFFILT           */
#define RAC_XOSQBUFFILT_XOSQBUFFILT_DEFAULT                           (_RAC_XOSQBUFFILT_XOSQBUFFILT_DEFAULT << 0)  /**< Shifted mode DEFAULT for RAC_XOSQBUFFILT    */
#define RAC_XOSQBUFFILT_XOSQBUFFILT_bypass                            (_RAC_XOSQBUFFILT_XOSQBUFFILT_bypass << 0)   /**< Shifted mode bypass for RAC_XOSQBUFFILT     */
#define RAC_XOSQBUFFILT_XOSQBUFFILT_filter_1                          (_RAC_XOSQBUFFILT_XOSQBUFFILT_filter_1 << 0) /**< Shifted mode filter_1 for RAC_XOSQBUFFILT   */
#define RAC_XOSQBUFFILT_XOSQBUFFILT_filter_2                          (_RAC_XOSQBUFFILT_XOSQBUFFILT_filter_2 << 0) /**< Shifted mode filter_2 for RAC_XOSQBUFFILT   */
#define RAC_XOSQBUFFILT_XOSQBUFFILT_filter_3                          (_RAC_XOSQBUFFILT_XOSQBUFFILT_filter_3 << 0) /**< Shifted mode filter_3 for RAC_XOSQBUFFILT   */

/* Bit fields for RAC AGCOVERWRITE */
#define _RAC_AGCOVERWRITE_RESETVALUE                                  0x00000000UL                                      /**< Default value for RAC_AGCOVERWRITE          */
#define _RAC_AGCOVERWRITE_MASK                                        0x03F0FFFFUL                                      /**< Mask for RAC_AGCOVERWRITE                   */
#define RAC_AGCOVERWRITE_ENMANLNAMIXRFATT                             (0x1UL << 0)                                      /**< Enable RAC Overwite PN                      */
#define _RAC_AGCOVERWRITE_ENMANLNAMIXRFATT_SHIFT                      0                                                 /**< Shift value for RAC_ENMANLNAMIXRFATT        */
#define _RAC_AGCOVERWRITE_ENMANLNAMIXRFATT_MASK                       0x1UL                                             /**< Bit mask for RAC_ENMANLNAMIXRFATT           */
#define _RAC_AGCOVERWRITE_ENMANLNAMIXRFATT_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_ENMANLNAMIXRFATT_DEFAULT                     (_RAC_AGCOVERWRITE_ENMANLNAMIXRFATT_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define RAC_AGCOVERWRITE_ENMANLNAMIXSLICE                             (0x1UL << 1)                                      /**< Enable RAC Overwite LNA                     */
#define _RAC_AGCOVERWRITE_ENMANLNAMIXSLICE_SHIFT                      1                                                 /**< Shift value for RAC_ENMANLNAMIXSLICE        */
#define _RAC_AGCOVERWRITE_ENMANLNAMIXSLICE_MASK                       0x2UL                                             /**< Bit mask for RAC_ENMANLNAMIXSLICE           */
#define _RAC_AGCOVERWRITE_ENMANLNAMIXSLICE_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_ENMANLNAMIXSLICE_DEFAULT                     (_RAC_AGCOVERWRITE_ENMANLNAMIXSLICE_DEFAULT << 1) /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define RAC_AGCOVERWRITE_ENMANPGAGAIN                                 (0x1UL << 2)                                      /**< Enable RAC Overwite PGA                     */
#define _RAC_AGCOVERWRITE_ENMANPGAGAIN_SHIFT                          2                                                 /**< Shift value for RAC_ENMANPGAGAIN            */
#define _RAC_AGCOVERWRITE_ENMANPGAGAIN_MASK                           0x4UL                                             /**< Bit mask for RAC_ENMANPGAGAIN               */
#define _RAC_AGCOVERWRITE_ENMANPGAGAIN_DEFAULT                        0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_ENMANPGAGAIN_DEFAULT                         (_RAC_AGCOVERWRITE_ENMANPGAGAIN_DEFAULT << 2)     /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define RAC_AGCOVERWRITE_ENMANIFADCSCALE                              (0x1UL << 3)                                      /**< Enable RAC Overwite PN                      */
#define _RAC_AGCOVERWRITE_ENMANIFADCSCALE_SHIFT                       3                                                 /**< Shift value for RAC_ENMANIFADCSCALE         */
#define _RAC_AGCOVERWRITE_ENMANIFADCSCALE_MASK                        0x8UL                                             /**< Bit mask for RAC_ENMANIFADCSCALE            */
#define _RAC_AGCOVERWRITE_ENMANIFADCSCALE_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_ENMANIFADCSCALE_DEFAULT                      (_RAC_AGCOVERWRITE_ENMANIFADCSCALE_DEFAULT << 3)  /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define _RAC_AGCOVERWRITE_MANLNAMIXRFATT_SHIFT                        4                                                 /**< Shift value for RAC_MANLNAMIXRFATT          */
#define _RAC_AGCOVERWRITE_MANLNAMIXRFATT_MASK                         0x3F0UL                                           /**< Bit mask for RAC_MANLNAMIXRFATT             */
#define _RAC_AGCOVERWRITE_MANLNAMIXRFATT_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_MANLNAMIXRFATT_DEFAULT                       (_RAC_AGCOVERWRITE_MANLNAMIXRFATT_DEFAULT << 4)   /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define _RAC_AGCOVERWRITE_MANLNAMIXSLICE_SHIFT                        10                                                /**< Shift value for RAC_MANLNAMIXSLICE          */
#define _RAC_AGCOVERWRITE_MANLNAMIXSLICE_MASK                         0xFC00UL                                          /**< Bit mask for RAC_MANLNAMIXSLICE             */
#define _RAC_AGCOVERWRITE_MANLNAMIXSLICE_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_MANLNAMIXSLICE_DEFAULT                       (_RAC_AGCOVERWRITE_MANLNAMIXSLICE_DEFAULT << 10)  /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define _RAC_AGCOVERWRITE_MANPGAGAIN_SHIFT                            20                                                /**< Shift value for RAC_MANPGAGAIN              */
#define _RAC_AGCOVERWRITE_MANPGAGAIN_MASK                             0xF00000UL                                        /**< Bit mask for RAC_MANPGAGAIN                 */
#define _RAC_AGCOVERWRITE_MANPGAGAIN_DEFAULT                          0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_MANPGAGAIN_DEFAULT                           (_RAC_AGCOVERWRITE_MANPGAGAIN_DEFAULT << 20)      /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */
#define _RAC_AGCOVERWRITE_MANIFADCSCALE_SHIFT                         24                                                /**< Shift value for RAC_MANIFADCSCALE           */
#define _RAC_AGCOVERWRITE_MANIFADCSCALE_MASK                          0x3000000UL                                       /**< Bit mask for RAC_MANIFADCSCALE              */
#define _RAC_AGCOVERWRITE_MANIFADCSCALE_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for RAC_AGCOVERWRITE           */
#define RAC_AGCOVERWRITE_MANIFADCSCALE_DEFAULT                        (_RAC_AGCOVERWRITE_MANIFADCSCALE_DEFAULT << 24)   /**< Shifted mode DEFAULT for RAC_AGCOVERWRITE   */

/* Bit fields for RAC SCRATCH0 */
#define _RAC_SCRATCH0_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH0              */
#define _RAC_SCRATCH0_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH0                       */
#define _RAC_SCRATCH0_SCRATCH0_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH0                */
#define _RAC_SCRATCH0_SCRATCH0_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH0                   */
#define _RAC_SCRATCH0_SCRATCH0_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH0               */
#define RAC_SCRATCH0_SCRATCH0_DEFAULT                                 (_RAC_SCRATCH0_SCRATCH0_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH0       */

/* Bit fields for RAC SCRATCH1 */
#define _RAC_SCRATCH1_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH1              */
#define _RAC_SCRATCH1_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH1                       */
#define _RAC_SCRATCH1_SCRATCH1_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH1                */
#define _RAC_SCRATCH1_SCRATCH1_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH1                   */
#define _RAC_SCRATCH1_SCRATCH1_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH1               */
#define RAC_SCRATCH1_SCRATCH1_DEFAULT                                 (_RAC_SCRATCH1_SCRATCH1_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH1       */

/* Bit fields for RAC SCRATCH2 */
#define _RAC_SCRATCH2_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH2              */
#define _RAC_SCRATCH2_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH2                       */
#define _RAC_SCRATCH2_SCRATCH2_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH2                */
#define _RAC_SCRATCH2_SCRATCH2_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH2                   */
#define _RAC_SCRATCH2_SCRATCH2_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH2               */
#define RAC_SCRATCH2_SCRATCH2_DEFAULT                                 (_RAC_SCRATCH2_SCRATCH2_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH2       */

/* Bit fields for RAC SCRATCH3 */
#define _RAC_SCRATCH3_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH3              */
#define _RAC_SCRATCH3_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH3                       */
#define _RAC_SCRATCH3_SCRATCH3_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH3                */
#define _RAC_SCRATCH3_SCRATCH3_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH3                   */
#define _RAC_SCRATCH3_SCRATCH3_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH3               */
#define RAC_SCRATCH3_SCRATCH3_DEFAULT                                 (_RAC_SCRATCH3_SCRATCH3_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH3       */

/* Bit fields for RAC SCRATCH4 */
#define _RAC_SCRATCH4_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH4              */
#define _RAC_SCRATCH4_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH4                       */
#define _RAC_SCRATCH4_SCRATCH4_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH4                */
#define _RAC_SCRATCH4_SCRATCH4_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH4                   */
#define _RAC_SCRATCH4_SCRATCH4_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH4               */
#define RAC_SCRATCH4_SCRATCH4_DEFAULT                                 (_RAC_SCRATCH4_SCRATCH4_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH4       */

/* Bit fields for RAC SCRATCH5 */
#define _RAC_SCRATCH5_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH5              */
#define _RAC_SCRATCH5_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH5                       */
#define _RAC_SCRATCH5_SCRATCH5_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH5                */
#define _RAC_SCRATCH5_SCRATCH5_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH5                   */
#define _RAC_SCRATCH5_SCRATCH5_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH5               */
#define RAC_SCRATCH5_SCRATCH5_DEFAULT                                 (_RAC_SCRATCH5_SCRATCH5_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH5       */

/* Bit fields for RAC SCRATCH6 */
#define _RAC_SCRATCH6_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH6              */
#define _RAC_SCRATCH6_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH6                       */
#define _RAC_SCRATCH6_SCRATCH6_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH6                */
#define _RAC_SCRATCH6_SCRATCH6_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH6                   */
#define _RAC_SCRATCH6_SCRATCH6_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH6               */
#define RAC_SCRATCH6_SCRATCH6_DEFAULT                                 (_RAC_SCRATCH6_SCRATCH6_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH6       */

/* Bit fields for RAC SCRATCH7 */
#define _RAC_SCRATCH7_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_SCRATCH7              */
#define _RAC_SCRATCH7_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_SCRATCH7                       */
#define _RAC_SCRATCH7_SCRATCH7_SHIFT                                  0                                     /**< Shift value for RAC_SCRATCH7                */
#define _RAC_SCRATCH7_SCRATCH7_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_SCRATCH7                   */
#define _RAC_SCRATCH7_SCRATCH7_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_SCRATCH7               */
#define RAC_SCRATCH7_SCRATCH7_DEFAULT                                 (_RAC_SCRATCH7_SCRATCH7_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_SCRATCH7       */

/* Bit fields for RAC THMSW */
#define _RAC_THMSW_RESETVALUE                                         0x00000000UL                          /**< Default value for RAC_THMSW                 */
#define _RAC_THMSW_MASK                                               0x00000003UL                          /**< Mask for RAC_THMSW                          */
#define RAC_THMSW_EN                                                  (0x1UL << 0)                          /**< Enable Switch                               */
#define _RAC_THMSW_EN_SHIFT                                           0                                     /**< Shift value for RAC_EN                      */
#define _RAC_THMSW_EN_MASK                                            0x1UL                                 /**< Bit mask for RAC_EN                         */
#define _RAC_THMSW_EN_DEFAULT                                         0x00000000UL                          /**< Mode DEFAULT for RAC_THMSW                  */
#define _RAC_THMSW_EN_Disabled                                        0x00000000UL                          /**< Mode Disabled for RAC_THMSW                 */
#define _RAC_THMSW_EN_Enabled                                         0x00000001UL                          /**< Mode Enabled for RAC_THMSW                  */
#define RAC_THMSW_EN_DEFAULT                                          (_RAC_THMSW_EN_DEFAULT << 0)          /**< Shifted mode DEFAULT for RAC_THMSW          */
#define RAC_THMSW_EN_Disabled                                         (_RAC_THMSW_EN_Disabled << 0)         /**< Shifted mode Disabled for RAC_THMSW         */
#define RAC_THMSW_EN_Enabled                                          (_RAC_THMSW_EN_Enabled << 0)          /**< Shifted mode Enabled for RAC_THMSW          */
#define RAC_THMSW_HALFSWITCH                                          (0x1UL << 1)                          /**< Halfswitch Mode enable                      */
#define _RAC_THMSW_HALFSWITCH_SHIFT                                   1                                     /**< Shift value for RAC_HALFSWITCH              */
#define _RAC_THMSW_HALFSWITCH_MASK                                    0x2UL                                 /**< Bit mask for RAC_HALFSWITCH                 */
#define _RAC_THMSW_HALFSWITCH_DEFAULT                                 0x00000000UL                          /**< Mode DEFAULT for RAC_THMSW                  */
#define _RAC_THMSW_HALFSWITCH_Disabled                                0x00000000UL                          /**< Mode Disabled for RAC_THMSW                 */
#define _RAC_THMSW_HALFSWITCH_Enabled                                 0x00000001UL                          /**< Mode Enabled for RAC_THMSW                  */
#define RAC_THMSW_HALFSWITCH_DEFAULT                                  (_RAC_THMSW_HALFSWITCH_DEFAULT << 1)  /**< Shifted mode DEFAULT for RAC_THMSW          */
#define RAC_THMSW_HALFSWITCH_Disabled                                 (_RAC_THMSW_HALFSWITCH_Disabled << 1) /**< Shifted mode Disabled for RAC_THMSW         */
#define RAC_THMSW_HALFSWITCH_Enabled                                  (_RAC_THMSW_HALFSWITCH_Enabled << 1)  /**< Shifted mode Enabled for RAC_THMSW          */

/** @} End of group EFR32MG22_RAC_BitFields */
/** @} End of group EFR32MG22_RAC */
/** @} End of group Parts */
#endif /* EFR32MG22_RAC_H */
