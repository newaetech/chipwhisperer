/**************************************************************************//**
 * @file
 * @brief EFR32MG21 RAC register and bit field definitions
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
#ifndef EFR32MG21_RAC_H
#define EFR32MG21_RAC_H
#define RAC_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG21_RAC RAC
 * @{
 * @brief EFR32MG21 RAC Register Declaration.
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
  __IM uint32_t  SEQSTATUS;                     /**< Sequencer Status Register                          */
  __IOM uint32_t SEQCMD;                        /**< Sequencer Command Register                         */
  __IOM uint32_t BREAKPOINT;                    /**< Sequencer Breakpoint                               */
  __IOM uint32_t R0;                            /**< Register 0                                         */
  __IOM uint32_t R1;                            /**< Register 1                                         */
  __IOM uint32_t R2;                            /**< Register 2                                         */
  __IOM uint32_t R3;                            /**< Register 3                                         */
  __IOM uint32_t R4;                            /**< Register 4                                         */
  __IOM uint32_t R5;                            /**< Register 5                                         */
  __IOM uint32_t R6;                            /**< Register 6                                         */
  __IOM uint32_t R7;                            /**< Register 7                                         */
  __IM uint32_t  WAITMASK;                      /**< Sequencer Wait Mask Register                       */
  __IM uint32_t  WAITSNSH;                      /**< Sequencer Wait Snapshot Register                   */
  __IM uint32_t  STIMER;                        /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP;                    /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t VECTADDR;                      /**< Vector Table Address Register                      */
  __IOM uint32_t SEQCTRL;                       /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC;                         /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0;                           /**< Storage Register 0                                 */
  __IOM uint32_t SR1;                           /**< Storage Register 1                                 */
  __IOM uint32_t SR2;                           /**< Storage Register 2                                 */
  __IOM uint32_t SR3;                           /**< Storage Register 3                                 */
  uint32_t       RESERVED0[1U];                 /**< Reserved for future use                            */
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
  __IOM uint32_t IFADCTRIM;                     /**< IFADCTRIM                                          */
  __IOM uint32_t IFADCCAL;                      /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS;                   /**< IFADCSTATUS                                        */
  uint32_t       RESERVED4[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0;                   /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1;                   /**< LNAMIXTRIM1                                        */
  __IOM uint32_t LNAMIXTRIM2;                   /**< LNAMIXTRIM2                                        */
  __IOM uint32_t LNAMIXCAL;                     /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN;                      /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL;                       /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0;                       /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1;                       /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2;                       /**< PATRIM2                                            */
  __IOM uint32_t PACTRL;                        /**< PACTRL                                             */
  uint32_t       RESERVED5[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM;                       /**< PGATRIM                                            */
  __IOM uint32_t PGACAL;                        /**< PGACAL                                             */
  __IOM uint32_t PGACTRL;                       /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL;                     /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL;                    /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN;                       /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN1;                     /**< RFPATHEN1                                          */
  __IOM uint32_t RFPATHEN2;                     /**< RFPATHEN2                                          */
  __IOM uint32_t RX;                            /**< RX                                                 */
  __IOM uint32_t TX;                            /**< TX                                                 */
  uint32_t       RESERVED6[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0;                       /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1;                       /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL;                         /**< SYCAL                                              */
  __IOM uint32_t SYEN;                          /**< SYEN                                               */
  __IOM uint32_t SYLOEN;                        /**< SYLOEN                                             */
  uint32_t       RESERVED7[2U];                 /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL;                     /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL;              /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS;            /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL;                  /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS;                /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT;                   /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED8[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t ANTDIV;                        /**< ANTDIV                                             */
  uint32_t       RESERVED9[154U];               /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0;                      /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1;                      /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2;                      /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3;                      /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4;                      /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5;                      /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6;                      /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7;                      /**< SCRATCH7                                           */
  uint32_t       RESERVED10[254U];              /**< Reserved for future use                            */
  uint32_t       RESERVED11[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED12[513U];              /**< Reserved for future use                            */
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
  __IM uint32_t  SEQSTATUS_SET;                 /**< Sequencer Status Register                          */
  __IOM uint32_t SEQCMD_SET;                    /**< Sequencer Command Register                         */
  __IOM uint32_t BREAKPOINT_SET;                /**< Sequencer Breakpoint                               */
  __IOM uint32_t R0_SET;                        /**< Register 0                                         */
  __IOM uint32_t R1_SET;                        /**< Register 1                                         */
  __IOM uint32_t R2_SET;                        /**< Register 2                                         */
  __IOM uint32_t R3_SET;                        /**< Register 3                                         */
  __IOM uint32_t R4_SET;                        /**< Register 4                                         */
  __IOM uint32_t R5_SET;                        /**< Register 5                                         */
  __IOM uint32_t R6_SET;                        /**< Register 6                                         */
  __IOM uint32_t R7_SET;                        /**< Register 7                                         */
  __IM uint32_t  WAITMASK_SET;                  /**< Sequencer Wait Mask Register                       */
  __IM uint32_t  WAITSNSH_SET;                  /**< Sequencer Wait Snapshot Register                   */
  __IM uint32_t  STIMER_SET;                    /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP_SET;                /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t VECTADDR_SET;                  /**< Vector Table Address Register                      */
  __IOM uint32_t SEQCTRL_SET;                   /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC_SET;                     /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0_SET;                       /**< Storage Register 0                                 */
  __IOM uint32_t SR1_SET;                       /**< Storage Register 1                                 */
  __IOM uint32_t SR2_SET;                       /**< Storage Register 2                                 */
  __IOM uint32_t SR3_SET;                       /**< Storage Register 3                                 */
  uint32_t       RESERVED13[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL_SET;               /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL_SET;              /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL_SET;                   /**< VCO Control Register                               */
  uint32_t       RESERVED14[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL_SET;                 /**< SYNTH Control Register                             */
  uint32_t       RESERVED15[1U];                /**< Reserved for future use                            */
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
  uint32_t       RESERVED16[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM_SET;                 /**< IFADCTRIM                                          */
  __IOM uint32_t IFADCCAL_SET;                  /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS_SET;               /**< IFADCSTATUS                                        */
  uint32_t       RESERVED17[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0_SET;               /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1_SET;               /**< LNAMIXTRIM1                                        */
  __IOM uint32_t LNAMIXTRIM2_SET;               /**< LNAMIXTRIM2                                        */
  __IOM uint32_t LNAMIXCAL_SET;                 /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN_SET;                  /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL_SET;                   /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0_SET;                   /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1_SET;                   /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2_SET;                   /**< PATRIM2                                            */
  __IOM uint32_t PACTRL_SET;                    /**< PACTRL                                             */
  uint32_t       RESERVED18[1U];                /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM_SET;                   /**< PGATRIM                                            */
  __IOM uint32_t PGACAL_SET;                    /**< PGACAL                                             */
  __IOM uint32_t PGACTRL_SET;                   /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL_SET;                 /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL_SET;                /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN_SET;                   /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN1_SET;                 /**< RFPATHEN1                                          */
  __IOM uint32_t RFPATHEN2_SET;                 /**< RFPATHEN2                                          */
  __IOM uint32_t RX_SET;                        /**< RX                                                 */
  __IOM uint32_t TX_SET;                        /**< TX                                                 */
  uint32_t       RESERVED19[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0_SET;                   /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1_SET;                   /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL_SET;                     /**< SYCAL                                              */
  __IOM uint32_t SYEN_SET;                      /**< SYEN                                               */
  __IOM uint32_t SYLOEN_SET;                    /**< SYLOEN                                             */
  uint32_t       RESERVED20[2U];                /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL_SET;                 /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL_SET;          /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS_SET;        /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL_SET;              /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS_SET;            /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT_SET;               /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED21[1U];                /**< Reserved for future use                            */
  __IOM uint32_t ANTDIV_SET;                    /**< ANTDIV                                             */
  uint32_t       RESERVED22[154U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0_SET;                  /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1_SET;                  /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2_SET;                  /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3_SET;                  /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4_SET;                  /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5_SET;                  /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6_SET;                  /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7_SET;                  /**< SCRATCH7                                           */
  uint32_t       RESERVED23[254U];              /**< Reserved for future use                            */
  uint32_t       RESERVED24[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED25[513U];              /**< Reserved for future use                            */
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
  __IM uint32_t  SEQSTATUS_CLR;                 /**< Sequencer Status Register                          */
  __IOM uint32_t SEQCMD_CLR;                    /**< Sequencer Command Register                         */
  __IOM uint32_t BREAKPOINT_CLR;                /**< Sequencer Breakpoint                               */
  __IOM uint32_t R0_CLR;                        /**< Register 0                                         */
  __IOM uint32_t R1_CLR;                        /**< Register 1                                         */
  __IOM uint32_t R2_CLR;                        /**< Register 2                                         */
  __IOM uint32_t R3_CLR;                        /**< Register 3                                         */
  __IOM uint32_t R4_CLR;                        /**< Register 4                                         */
  __IOM uint32_t R5_CLR;                        /**< Register 5                                         */
  __IOM uint32_t R6_CLR;                        /**< Register 6                                         */
  __IOM uint32_t R7_CLR;                        /**< Register 7                                         */
  __IM uint32_t  WAITMASK_CLR;                  /**< Sequencer Wait Mask Register                       */
  __IM uint32_t  WAITSNSH_CLR;                  /**< Sequencer Wait Snapshot Register                   */
  __IM uint32_t  STIMER_CLR;                    /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP_CLR;                /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t VECTADDR_CLR;                  /**< Vector Table Address Register                      */
  __IOM uint32_t SEQCTRL_CLR;                   /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC_CLR;                     /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0_CLR;                       /**< Storage Register 0                                 */
  __IOM uint32_t SR1_CLR;                       /**< Storage Register 1                                 */
  __IOM uint32_t SR2_CLR;                       /**< Storage Register 2                                 */
  __IOM uint32_t SR3_CLR;                       /**< Storage Register 3                                 */
  uint32_t       RESERVED26[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL_CLR;               /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL_CLR;              /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL_CLR;                   /**< VCO Control Register                               */
  uint32_t       RESERVED27[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL_CLR;                 /**< SYNTH Control Register                             */
  uint32_t       RESERVED28[1U];                /**< Reserved for future use                            */
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
  uint32_t       RESERVED29[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM_CLR;                 /**< IFADCTRIM                                          */
  __IOM uint32_t IFADCCAL_CLR;                  /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS_CLR;               /**< IFADCSTATUS                                        */
  uint32_t       RESERVED30[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0_CLR;               /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1_CLR;               /**< LNAMIXTRIM1                                        */
  __IOM uint32_t LNAMIXTRIM2_CLR;               /**< LNAMIXTRIM2                                        */
  __IOM uint32_t LNAMIXCAL_CLR;                 /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN_CLR;                  /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL_CLR;                   /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0_CLR;                   /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1_CLR;                   /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2_CLR;                   /**< PATRIM2                                            */
  __IOM uint32_t PACTRL_CLR;                    /**< PACTRL                                             */
  uint32_t       RESERVED31[1U];                /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM_CLR;                   /**< PGATRIM                                            */
  __IOM uint32_t PGACAL_CLR;                    /**< PGACAL                                             */
  __IOM uint32_t PGACTRL_CLR;                   /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL_CLR;                 /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL_CLR;                /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN_CLR;                   /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN1_CLR;                 /**< RFPATHEN1                                          */
  __IOM uint32_t RFPATHEN2_CLR;                 /**< RFPATHEN2                                          */
  __IOM uint32_t RX_CLR;                        /**< RX                                                 */
  __IOM uint32_t TX_CLR;                        /**< TX                                                 */
  uint32_t       RESERVED32[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0_CLR;                   /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1_CLR;                   /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL_CLR;                     /**< SYCAL                                              */
  __IOM uint32_t SYEN_CLR;                      /**< SYEN                                               */
  __IOM uint32_t SYLOEN_CLR;                    /**< SYLOEN                                             */
  uint32_t       RESERVED33[2U];                /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL_CLR;                 /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL_CLR;          /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS_CLR;        /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL_CLR;              /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS_CLR;            /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT_CLR;               /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED34[1U];                /**< Reserved for future use                            */
  __IOM uint32_t ANTDIV_CLR;                    /**< ANTDIV                                             */
  uint32_t       RESERVED35[154U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0_CLR;                  /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1_CLR;                  /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2_CLR;                  /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3_CLR;                  /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4_CLR;                  /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5_CLR;                  /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6_CLR;                  /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7_CLR;                  /**< SCRATCH7                                           */
  uint32_t       RESERVED36[254U];              /**< Reserved for future use                            */
  uint32_t       RESERVED37[1U];                /**< Reserved for future use                            */
  uint32_t       RESERVED38[513U];              /**< Reserved for future use                            */
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
  __IM uint32_t  SEQSTATUS_TGL;                 /**< Sequencer Status Register                          */
  __IOM uint32_t SEQCMD_TGL;                    /**< Sequencer Command Register                         */
  __IOM uint32_t BREAKPOINT_TGL;                /**< Sequencer Breakpoint                               */
  __IOM uint32_t R0_TGL;                        /**< Register 0                                         */
  __IOM uint32_t R1_TGL;                        /**< Register 1                                         */
  __IOM uint32_t R2_TGL;                        /**< Register 2                                         */
  __IOM uint32_t R3_TGL;                        /**< Register 3                                         */
  __IOM uint32_t R4_TGL;                        /**< Register 4                                         */
  __IOM uint32_t R5_TGL;                        /**< Register 5                                         */
  __IOM uint32_t R6_TGL;                        /**< Register 6                                         */
  __IOM uint32_t R7_TGL;                        /**< Register 7                                         */
  __IM uint32_t  WAITMASK_TGL;                  /**< Sequencer Wait Mask Register                       */
  __IM uint32_t  WAITSNSH_TGL;                  /**< Sequencer Wait Snapshot Register                   */
  __IM uint32_t  STIMER_TGL;                    /**< Sequencer Timer Value                              */
  __IOM uint32_t STIMERCOMP_TGL;                /**< Sequencer Timer Compare Value                      */
  __IOM uint32_t VECTADDR_TGL;                  /**< Vector Table Address Register                      */
  __IOM uint32_t SEQCTRL_TGL;                   /**< Sequencer Control Register                         */
  __IOM uint32_t PRESC_TGL;                     /**< Sequencer prescaler Register                       */
  __IOM uint32_t SR0_TGL;                       /**< Storage Register 0                                 */
  __IOM uint32_t SR1_TGL;                       /**< Storage Register 1                                 */
  __IOM uint32_t SR2_TGL;                       /**< Storage Register 2                                 */
  __IOM uint32_t SR3_TGL;                       /**< Storage Register 3                                 */
  uint32_t       RESERVED39[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHENCTRL_TGL;               /**< Synthesizer Enable Control Register                */
  __IOM uint32_t SYNTHREGCTRL_TGL;              /**< Synthesizer Regulator Enable Control               */
  __IOM uint32_t VCOCTRL_TGL;                   /**< VCO Control Register                               */
  uint32_t       RESERVED40[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYNTHCTRL_TGL;                 /**< SYNTH Control Register                             */
  uint32_t       RESERVED41[1U];                /**< Reserved for future use                            */
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
  uint32_t       RESERVED42[1U];                /**< Reserved for future use                            */
  __IOM uint32_t IFADCTRIM_TGL;                 /**< IFADCTRIM                                          */
  __IOM uint32_t IFADCCAL_TGL;                  /**< IFADCCAL                                           */
  __IM uint32_t  IFADCSTATUS_TGL;               /**< IFADCSTATUS                                        */
  uint32_t       RESERVED43[1U];                /**< Reserved for future use                            */
  __IOM uint32_t LNAMIXTRIM0_TGL;               /**< LNAMIXTRIM0                                        */
  __IOM uint32_t LNAMIXTRIM1_TGL;               /**< LNAMIXTRIM1                                        */
  __IOM uint32_t LNAMIXTRIM2_TGL;               /**< LNAMIXTRIM2                                        */
  __IOM uint32_t LNAMIXCAL_TGL;                 /**< LNAMIXCAL                                          */
  __IOM uint32_t LNAMIXEN_TGL;                  /**< LNAMIXEN                                           */
  __IOM uint32_t PRECTRL_TGL;                   /**< PRECTRL                                            */
  __IOM uint32_t PATRIM0_TGL;                   /**< PATRIM0                                            */
  __IOM uint32_t PATRIM1_TGL;                   /**< PATRIM1                                            */
  __IOM uint32_t PATRIM2_TGL;                   /**< PATRIM2                                            */
  __IOM uint32_t PACTRL_TGL;                    /**< PACTRL                                             */
  uint32_t       RESERVED44[1U];                /**< Reserved for future use                            */
  __IOM uint32_t PGATRIM_TGL;                   /**< PGATRIM                                            */
  __IOM uint32_t PGACAL_TGL;                    /**< PGACAL                                             */
  __IOM uint32_t PGACTRL_TGL;                   /**< PGACTRL                                            */
  __IOM uint32_t RFBIASCAL_TGL;                 /**< RFBIASCAL                                          */
  __IOM uint32_t RFBIASCTRL_TGL;                /**< RFBIASCTRL                                         */
  __IOM uint32_t RADIOEN_TGL;                   /**< RADIOEN                                            */
  __IOM uint32_t RFPATHEN1_TGL;                 /**< RFPATHEN1                                          */
  __IOM uint32_t RFPATHEN2_TGL;                 /**< RFPATHEN2                                          */
  __IOM uint32_t RX_TGL;                        /**< RX                                                 */
  __IOM uint32_t TX_TGL;                        /**< TX                                                 */
  uint32_t       RESERVED45[1U];                /**< Reserved for future use                            */
  __IOM uint32_t SYTRIM0_TGL;                   /**< SYTRIM0                                            */
  __IOM uint32_t SYTRIM1_TGL;                   /**< SYTRIM1                                            */
  __IOM uint32_t SYCAL_TGL;                     /**< SYCAL                                              */
  __IOM uint32_t SYEN_TGL;                      /**< SYEN                                               */
  __IOM uint32_t SYLOEN_TGL;                    /**< SYLOEN                                             */
  uint32_t       RESERVED46[2U];                /**< Reserved for future use                            */
  __IOM uint32_t SYMMDCTRL_TGL;                 /**< SYMMDCTRL                                          */
  __IOM uint32_t DIGCLKRETIMECTRL_TGL;          /**< DIGCLKRETIMECTRL                                   */
  __IM uint32_t  DIGCLKRETIMESTATUS_TGL;        /**< DIGCLKRETIMESTATUS                                 */
  __IOM uint32_t XORETIMECTRL_TGL;              /**< XORETIMECTRL                                       */
  __IM uint32_t  XORETIMESTATUS_TGL;            /**< XORETIMESTATUS                                     */
  __IOM uint32_t XOSQBUFFILT_TGL;               /**< XOSQBUFFILT                                        */
  uint32_t       RESERVED47[1U];                /**< Reserved for future use                            */
  __IOM uint32_t ANTDIV_TGL;                    /**< ANTDIV                                             */
  uint32_t       RESERVED48[154U];              /**< Reserved for future use                            */
  __IOM uint32_t SCRATCH0_TGL;                  /**< SCRATCH0                                           */
  __IOM uint32_t SCRATCH1_TGL;                  /**< SCRATCH1                                           */
  __IOM uint32_t SCRATCH2_TGL;                  /**< SCRATCH2                                           */
  __IOM uint32_t SCRATCH3_TGL;                  /**< SCRATCH3                                           */
  __IOM uint32_t SCRATCH4_TGL;                  /**< SCRATCH4                                           */
  __IOM uint32_t SCRATCH5_TGL;                  /**< SCRATCH5                                           */
  __IOM uint32_t SCRATCH6_TGL;                  /**< SCRATCH6                                           */
  __IOM uint32_t SCRATCH7_TGL;                  /**< SCRATCH7                                           */
  uint32_t       RESERVED49[254U];              /**< Reserved for future use                            */
  uint32_t       RESERVED50[1U];                /**< Reserved for future use                            */
} RAC_TypeDef;
/** @} End of group EFR32MG21_RAC */

/**************************************************************************//**
 * @addtogroup EFR32MG21_RAC
 * @{
 * @defgroup EFR32MG21_RAC_BitFields RAC Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for RAC IPVERSION */
#define _RAC_IPVERSION_RESETVALUE                                     0x00000000UL                            /**< Default value for RAC_IPVERSION             */
#define _RAC_IPVERSION_MASK                                           0xFFFFFFFFUL                            /**< Mask for RAC_IPVERSION                      */
#define _RAC_IPVERSION_IPVERSION_SHIFT                                0                                       /**< Shift value for RAC_IPVERSION               */
#define _RAC_IPVERSION_IPVERSION_MASK                                 0xFFFFFFFFUL                            /**< Bit mask for RAC_IPVERSION                  */
#define _RAC_IPVERSION_IPVERSION_DEFAULT                              0x00000000UL                            /**< Mode DEFAULT for RAC_IPVERSION              */
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
#define _RAC_STATUS_MASK                                              0xEF38FFFFUL                                   /**< Mask for RAC_STATUS                         */
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
#define _RAC_CMD_MASK                                                 0xC000F1FFUL                            /**< Mask for RAC_CMD                            */
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
#define _RAC_CTRL_RESETVALUE                                          0x00000000UL                          /**< Default value for RAC_CTRL                  */
#define _RAC_CTRL_MASK                                                0x000107EFUL                          /**< Mask for RAC_CTRL                           */
#define RAC_CTRL_FORCEDISABLE                                         (0x1UL << 0)                          /**< Force Radio Disable                         */
#define _RAC_CTRL_FORCEDISABLE_SHIFT                                  0                                     /**< Shift value for RAC_FORCEDISABLE            */
#define _RAC_CTRL_FORCEDISABLE_MASK                                   0x1UL                                 /**< Bit mask for RAC_FORCEDISABLE               */
#define _RAC_CTRL_FORCEDISABLE_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_FORCEDISABLE_DEFAULT                                 (_RAC_CTRL_FORCEDISABLE_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSTXEN                                              (0x1UL << 1)                          /**< PRS TX Enable                               */
#define _RAC_CTRL_PRSTXEN_SHIFT                                       1                                     /**< Shift value for RAC_PRSTXEN                 */
#define _RAC_CTRL_PRSTXEN_MASK                                        0x2UL                                 /**< Bit mask for RAC_PRSTXEN                    */
#define _RAC_CTRL_PRSTXEN_DEFAULT                                     0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define RAC_CTRL_PRSTXEN_DEFAULT                                      (_RAC_CTRL_PRSTXEN_DEFAULT << 1)      /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_TXAFTERRX                                            (0x1UL << 2)                          /**< TX After RX                                 */
#define _RAC_CTRL_TXAFTERRX_SHIFT                                     2                                     /**< Shift value for RAC_TXAFTERRX               */
#define _RAC_CTRL_TXAFTERRX_MASK                                      0x4UL                                 /**< Bit mask for RAC_TXAFTERRX                  */
#define _RAC_CTRL_TXAFTERRX_DEFAULT                                   0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_TXAFTERRX_X0                                        0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_TXAFTERRX_X1                                        0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_TXAFTERRX_DEFAULT                                    (_RAC_CTRL_TXAFTERRX_DEFAULT << 2)    /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_TXAFTERRX_X0                                         (_RAC_CTRL_TXAFTERRX_X0 << 2)         /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_TXAFTERRX_X1                                         (_RAC_CTRL_TXAFTERRX_X1 << 2)         /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PRSMODE                                              (0x1UL << 3)                          /**< PRS RXEN Mode                               */
#define _RAC_CTRL_PRSMODE_SHIFT                                       3                                     /**< Shift value for RAC_PRSMODE                 */
#define _RAC_CTRL_PRSMODE_MASK                                        0x8UL                                 /**< Bit mask for RAC_PRSMODE                    */
#define _RAC_CTRL_PRSMODE_DEFAULT                                     0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSMODE_DIRECT                                      0x00000000UL                          /**< Mode DIRECT for RAC_CTRL                    */
#define _RAC_CTRL_PRSMODE_PULSE                                       0x00000001UL                          /**< Mode PULSE for RAC_CTRL                     */
#define RAC_CTRL_PRSMODE_DEFAULT                                      (_RAC_CTRL_PRSMODE_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSMODE_DIRECT                                       (_RAC_CTRL_PRSMODE_DIRECT << 3)       /**< Shifted mode DIRECT for RAC_CTRL            */
#define RAC_CTRL_PRSMODE_PULSE                                        (_RAC_CTRL_PRSMODE_PULSE << 3)        /**< Shifted mode PULSE for RAC_CTRL             */
#define RAC_CTRL_PRSCLR                                               (0x1UL << 5)                          /**< PRS RXEN Clear                              */
#define _RAC_CTRL_PRSCLR_SHIFT                                        5                                     /**< Shift value for RAC_PRSCLR                  */
#define _RAC_CTRL_PRSCLR_MASK                                         0x20UL                                /**< Bit mask for RAC_PRSCLR                     */
#define _RAC_CTRL_PRSCLR_DEFAULT                                      0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSCLR_RXSEARCH                                     0x00000000UL                          /**< Mode RXSEARCH for RAC_CTRL                  */
#define _RAC_CTRL_PRSCLR_PRSCH                                        0x00000001UL                          /**< Mode PRSCH for RAC_CTRL                     */
#define RAC_CTRL_PRSCLR_DEFAULT                                       (_RAC_CTRL_PRSCLR_DEFAULT << 5)       /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSCLR_RXSEARCH                                      (_RAC_CTRL_PRSCLR_RXSEARCH << 5)      /**< Shifted mode RXSEARCH for RAC_CTRL          */
#define RAC_CTRL_PRSCLR_PRSCH                                         (_RAC_CTRL_PRSCLR_PRSCH << 5)         /**< Shifted mode PRSCH for RAC_CTRL             */
#define RAC_CTRL_TXPOSTPONE                                           (0x1UL << 6)                          /**< TX Postpone                                 */
#define _RAC_CTRL_TXPOSTPONE_SHIFT                                    6                                     /**< Shift value for RAC_TXPOSTPONE              */
#define _RAC_CTRL_TXPOSTPONE_MASK                                     0x40UL                                /**< Bit mask for RAC_TXPOSTPONE                 */
#define _RAC_CTRL_TXPOSTPONE_DEFAULT                                  0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_TXPOSTPONE_X0                                       0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_TXPOSTPONE_X1                                       0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_TXPOSTPONE_DEFAULT                                   (_RAC_CTRL_TXPOSTPONE_DEFAULT << 6)   /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_TXPOSTPONE_X0                                        (_RAC_CTRL_TXPOSTPONE_X0 << 6)        /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_TXPOSTPONE_X1                                        (_RAC_CTRL_TXPOSTPONE_X1 << 6)        /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_ACTIVEPOL                                            (0x1UL << 7)                          /**< ACTIVE signal polarity                      */
#define _RAC_CTRL_ACTIVEPOL_SHIFT                                     7                                     /**< Shift value for RAC_ACTIVEPOL               */
#define _RAC_CTRL_ACTIVEPOL_MASK                                      0x80UL                                /**< Bit mask for RAC_ACTIVEPOL                  */
#define _RAC_CTRL_ACTIVEPOL_DEFAULT                                   0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_ACTIVEPOL_X0                                        0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_ACTIVEPOL_X1                                        0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_ACTIVEPOL_DEFAULT                                    (_RAC_CTRL_ACTIVEPOL_DEFAULT << 7)    /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_ACTIVEPOL_X0                                         (_RAC_CTRL_ACTIVEPOL_X0 << 7)         /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_ACTIVEPOL_X1                                         (_RAC_CTRL_ACTIVEPOL_X1 << 7)         /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PAENPOL                                              (0x1UL << 8)                          /**< PAEN signal polarity                        */
#define _RAC_CTRL_PAENPOL_SHIFT                                       8                                     /**< Shift value for RAC_PAENPOL                 */
#define _RAC_CTRL_PAENPOL_MASK                                        0x100UL                               /**< Bit mask for RAC_PAENPOL                    */
#define _RAC_CTRL_PAENPOL_DEFAULT                                     0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PAENPOL_X0                                          0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_PAENPOL_X1                                          0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_PAENPOL_DEFAULT                                      (_RAC_CTRL_PAENPOL_DEFAULT << 8)      /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PAENPOL_X0                                           (_RAC_CTRL_PAENPOL_X0 << 8)           /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_PAENPOL_X1                                           (_RAC_CTRL_PAENPOL_X1 << 8)           /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_LNAENPOL                                             (0x1UL << 9)                          /**< LNAEN signal polarity                       */
#define _RAC_CTRL_LNAENPOL_SHIFT                                      9                                     /**< Shift value for RAC_LNAENPOL                */
#define _RAC_CTRL_LNAENPOL_MASK                                       0x200UL                               /**< Bit mask for RAC_LNAENPOL                   */
#define _RAC_CTRL_LNAENPOL_DEFAULT                                    0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_LNAENPOL_X0                                         0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_LNAENPOL_X1                                         0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_LNAENPOL_DEFAULT                                     (_RAC_CTRL_LNAENPOL_DEFAULT << 9)     /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_LNAENPOL_X0                                          (_RAC_CTRL_LNAENPOL_X0 << 9)          /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_LNAENPOL_X1                                          (_RAC_CTRL_LNAENPOL_X1 << 9)          /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PRSRXDIS                                             (0x1UL << 10)                         /**< PRS RX Disable                              */
#define _RAC_CTRL_PRSRXDIS_SHIFT                                      10                                    /**< Shift value for RAC_PRSRXDIS                */
#define _RAC_CTRL_PRSRXDIS_MASK                                       0x400UL                               /**< Bit mask for RAC_PRSRXDIS                   */
#define _RAC_CTRL_PRSRXDIS_DEFAULT                                    0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSRXDIS_X0                                         0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_PRSRXDIS_X1                                         0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_PRSRXDIS_DEFAULT                                     (_RAC_CTRL_PRSRXDIS_DEFAULT << 10)    /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSRXDIS_X0                                          (_RAC_CTRL_PRSRXDIS_X0 << 10)         /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_PRSRXDIS_X1                                          (_RAC_CTRL_PRSRXDIS_X1 << 10)         /**< Shifted mode X1 for RAC_CTRL                */
#define RAC_CTRL_PRSFORCETX                                           (0x1UL << 16)                         /**< PRS Force RX                                */
#define _RAC_CTRL_PRSFORCETX_SHIFT                                    16                                    /**< Shift value for RAC_PRSFORCETX              */
#define _RAC_CTRL_PRSFORCETX_MASK                                     0x10000UL                             /**< Bit mask for RAC_PRSFORCETX                 */
#define _RAC_CTRL_PRSFORCETX_DEFAULT                                  0x00000000UL                          /**< Mode DEFAULT for RAC_CTRL                   */
#define _RAC_CTRL_PRSFORCETX_X0                                       0x00000000UL                          /**< Mode X0 for RAC_CTRL                        */
#define _RAC_CTRL_PRSFORCETX_X1                                       0x00000001UL                          /**< Mode X1 for RAC_CTRL                        */
#define RAC_CTRL_PRSFORCETX_DEFAULT                                   (_RAC_CTRL_PRSFORCETX_DEFAULT << 16)  /**< Shifted mode DEFAULT for RAC_CTRL           */
#define RAC_CTRL_PRSFORCETX_X0                                        (_RAC_CTRL_PRSFORCETX_X0 << 16)       /**< Shifted mode X0 for RAC_CTRL                */
#define RAC_CTRL_PRSFORCETX_X1                                        (_RAC_CTRL_PRSFORCETX_X1 << 16)       /**< Shifted mode X1 for RAC_CTRL                */

/* Bit fields for RAC FORCESTATE */
#define _RAC_FORCESTATE_RESETVALUE                                    0x00000000UL                              /**< Default value for RAC_FORCESTATE            */
#define _RAC_FORCESTATE_MASK                                          0x0000000FUL                              /**< Mask for RAC_FORCESTATE                     */
#define _RAC_FORCESTATE_FORCESTATE_SHIFT                              0                                         /**< Shift value for RAC_FORCESTATE              */
#define _RAC_FORCESTATE_FORCESTATE_MASK                               0xFUL                                     /**< Bit mask for RAC_FORCESTATE                 */
#define _RAC_FORCESTATE_FORCESTATE_DEFAULT                            0x00000000UL                              /**< Mode DEFAULT for RAC_FORCESTATE             */
#define RAC_FORCESTATE_FORCESTATE_DEFAULT                             (_RAC_FORCESTATE_FORCESTATE_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_FORCESTATE     */

/* Bit fields for RAC IF */
#define _RAC_IF_RESETVALUE                                            0x00000000UL                       /**< Default value for RAC_IF                    */
#define _RAC_IF_MASK                                                  0x00FF0007UL                       /**< Mask for RAC_IF                             */
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
#define RAC_IF_BUSERROR                                               (0x1UL << 2)                       /**< Bus Error                                   */
#define _RAC_IF_BUSERROR_SHIFT                                        2                                  /**< Shift value for RAC_BUSERROR                */
#define _RAC_IF_BUSERROR_MASK                                         0x4UL                              /**< Bit mask for RAC_BUSERROR                   */
#define _RAC_IF_BUSERROR_DEFAULT                                      0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_BUSERROR_DEFAULT                                       (_RAC_IF_BUSERROR_DEFAULT << 2)    /**< Shifted mode DEFAULT for RAC_IF             */
#define _RAC_IF_SEQ_SHIFT                                             16                                 /**< Shift value for RAC_SEQ                     */
#define _RAC_IF_SEQ_MASK                                              0xFF0000UL                         /**< Bit mask for RAC_SEQ                        */
#define _RAC_IF_SEQ_DEFAULT                                           0x00000000UL                       /**< Mode DEFAULT for RAC_IF                     */
#define RAC_IF_SEQ_DEFAULT                                            (_RAC_IF_SEQ_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_IF             */

/* Bit fields for RAC IEN */
#define _RAC_IEN_RESETVALUE                                           0x00000000UL                        /**< Default value for RAC_IEN                   */
#define _RAC_IEN_MASK                                                 0x00FF0007UL                        /**< Mask for RAC_IEN                            */
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
#define RAC_IEN_BUSERROR                                              (0x1UL << 2)                        /**< Bus Error Interrupt Enable                  */
#define _RAC_IEN_BUSERROR_SHIFT                                       2                                   /**< Shift value for RAC_BUSERROR                */
#define _RAC_IEN_BUSERROR_MASK                                        0x4UL                               /**< Bit mask for RAC_BUSERROR                   */
#define _RAC_IEN_BUSERROR_DEFAULT                                     0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_BUSERROR_DEFAULT                                      (_RAC_IEN_BUSERROR_DEFAULT << 2)    /**< Shifted mode DEFAULT for RAC_IEN            */
#define _RAC_IEN_SEQ_SHIFT                                            16                                  /**< Shift value for RAC_SEQ                     */
#define _RAC_IEN_SEQ_MASK                                             0xFF0000UL                          /**< Bit mask for RAC_SEQ                        */
#define _RAC_IEN_SEQ_DEFAULT                                          0x00000000UL                        /**< Mode DEFAULT for RAC_IEN                    */
#define RAC_IEN_SEQ_DEFAULT                                           (_RAC_IEN_SEQ_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_IEN            */

/* Bit fields for RAC TESTCTRL */
#define _RAC_TESTCTRL_RESETVALUE                                      0x00000000UL                                    /**< Default value for RAC_TESTCTRL              */
#define _RAC_TESTCTRL_MASK                                            0x0000001FUL                                    /**< Mask for RAC_TESTCTRL                       */
#define RAC_TESTCTRL_MODEN                                            (0x1UL << 0)                                    /**< Modulator enable                            */
#define _RAC_TESTCTRL_MODEN_SHIFT                                     0                                               /**< Shift value for RAC_MODEN                   */
#define _RAC_TESTCTRL_MODEN_MASK                                      0x1UL                                           /**< Bit mask for RAC_MODEN                      */
#define _RAC_TESTCTRL_MODEN_DEFAULT                                   0x00000000UL                                    /**< Mode DEFAULT for RAC_TESTCTRL               */
#define RAC_TESTCTRL_MODEN_DEFAULT                                    (_RAC_TESTCTRL_MODEN_DEFAULT << 0)              /**< Shifted mode DEFAULT for RAC_TESTCTRL       */
#define RAC_TESTCTRL_DEMODEN                                          (0x1UL << 1)                                    /**< Demodulator enable                          */
#define _RAC_TESTCTRL_DEMODEN_SHIFT                                   1                                               /**< Shift value for RAC_DEMODEN                 */
#define _RAC_TESTCTRL_DEMODEN_MASK                                    0x2UL                                           /**< Bit mask for RAC_DEMODEN                    */
#define _RAC_TESTCTRL_DEMODEN_DEFAULT                                 0x00000000UL                                    /**< Mode DEFAULT for RAC_TESTCTRL               */
#define RAC_TESTCTRL_DEMODEN_DEFAULT                                  (_RAC_TESTCTRL_DEMODEN_DEFAULT << 1)            /**< Shifted mode DEFAULT for RAC_TESTCTRL       */
#define RAC_TESTCTRL_AUX2RFSENSE                                      (0x1UL << 2)                                    /**< Enable auxiliary synthesizer output         */
#define _RAC_TESTCTRL_AUX2RFSENSE_SHIFT                               2                                               /**< Shift value for RAC_AUX2RFSENSE             */
#define _RAC_TESTCTRL_AUX2RFSENSE_MASK                                0x4UL                                           /**< Bit mask for RAC_AUX2RFSENSE                */
#define _RAC_TESTCTRL_AUX2RFSENSE_DEFAULT                             0x00000000UL                                    /**< Mode DEFAULT for RAC_TESTCTRL               */
#define _RAC_TESTCTRL_AUX2RFSENSE_X0                                  0x00000000UL                                    /**< Mode X0 for RAC_TESTCTRL                    */
#define _RAC_TESTCTRL_AUX2RFSENSE_X1                                  0x00000001UL                                    /**< Mode X1 for RAC_TESTCTRL                    */
#define RAC_TESTCTRL_AUX2RFSENSE_DEFAULT                              (_RAC_TESTCTRL_AUX2RFSENSE_DEFAULT << 2)        /**< Shifted mode DEFAULT for RAC_TESTCTRL       */
#define RAC_TESTCTRL_AUX2RFSENSE_X0                                   (_RAC_TESTCTRL_AUX2RFSENSE_X0 << 2)             /**< Shifted mode X0 for RAC_TESTCTRL            */
#define RAC_TESTCTRL_AUX2RFSENSE_X1                                   (_RAC_TESTCTRL_AUX2RFSENSE_X1 << 2)             /**< Shifted mode X1 for RAC_TESTCTRL            */
#define RAC_TESTCTRL_LOOPBACK2LNAINPUT                                (0x1UL << 3)                                    /**< Enable RF loopback                          */
#define _RAC_TESTCTRL_LOOPBACK2LNAINPUT_SHIFT                         3                                               /**< Shift value for RAC_LOOPBACK2LNAINPUT       */
#define _RAC_TESTCTRL_LOOPBACK2LNAINPUT_MASK                          0x8UL                                           /**< Bit mask for RAC_LOOPBACK2LNAINPUT          */
#define _RAC_TESTCTRL_LOOPBACK2LNAINPUT_DEFAULT                       0x00000000UL                                    /**< Mode DEFAULT for RAC_TESTCTRL               */
#define RAC_TESTCTRL_LOOPBACK2LNAINPUT_DEFAULT                        (_RAC_TESTCTRL_LOOPBACK2LNAINPUT_DEFAULT << 3)  /**< Shifted mode DEFAULT for RAC_TESTCTRL       */
#define RAC_TESTCTRL_LOOPBACK2LNAOUTPUT                               (0x1UL << 4)                                    /**< Enable RF loopback                          */
#define _RAC_TESTCTRL_LOOPBACK2LNAOUTPUT_SHIFT                        4                                               /**< Shift value for RAC_LOOPBACK2LNAOUTPUT      */
#define _RAC_TESTCTRL_LOOPBACK2LNAOUTPUT_MASK                         0x10UL                                          /**< Bit mask for RAC_LOOPBACK2LNAOUTPUT         */
#define _RAC_TESTCTRL_LOOPBACK2LNAOUTPUT_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for RAC_TESTCTRL               */
#define RAC_TESTCTRL_LOOPBACK2LNAOUTPUT_DEFAULT                       (_RAC_TESTCTRL_LOOPBACK2LNAOUTPUT_DEFAULT << 4) /**< Shifted mode DEFAULT for RAC_TESTCTRL       */

/* Bit fields for RAC SEQSTATUS */
#define _RAC_SEQSTATUS_RESETVALUE                                     0x00000010UL                           /**< Default value for RAC_SEQSTATUS             */
#define _RAC_SEQSTATUS_MASK                                           0x000005FFUL                           /**< Mask for RAC_SEQSTATUS                      */
#define RAC_SEQSTATUS_STOPPED                                         (0x1UL << 0)                           /**< Sequencer Stopped                           */
#define _RAC_SEQSTATUS_STOPPED_SHIFT                                  0                                      /**< Shift value for RAC_STOPPED                 */
#define _RAC_SEQSTATUS_STOPPED_MASK                                   0x1UL                                  /**< Bit mask for RAC_STOPPED                    */
#define _RAC_SEQSTATUS_STOPPED_DEFAULT                                0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_STOPPED_DEFAULT                                 (_RAC_SEQSTATUS_STOPPED_DEFAULT << 0)  /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_BKPT                                            (0x1UL << 1)                           /**< Breakpoint Enabled                          */
#define _RAC_SEQSTATUS_BKPT_SHIFT                                     1                                      /**< Shift value for RAC_BKPT                    */
#define _RAC_SEQSTATUS_BKPT_MASK                                      0x2UL                                  /**< Bit mask for RAC_BKPT                       */
#define _RAC_SEQSTATUS_BKPT_DEFAULT                                   0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_BKPT_DEFAULT                                    (_RAC_SEQSTATUS_BKPT_DEFAULT << 1)     /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_WAITING                                         (0x1UL << 2)                           /**< Sequencer Waiting                           */
#define _RAC_SEQSTATUS_WAITING_SHIFT                                  2                                      /**< Shift value for RAC_WAITING                 */
#define _RAC_SEQSTATUS_WAITING_MASK                                   0x4UL                                  /**< Bit mask for RAC_WAITING                    */
#define _RAC_SEQSTATUS_WAITING_DEFAULT                                0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_WAITING_DEFAULT                                 (_RAC_SEQSTATUS_WAITING_DEFAULT << 2)  /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_WAITMODE                                        (0x1UL << 3)                           /**< Sequencer Waiting Mode                      */
#define _RAC_SEQSTATUS_WAITMODE_SHIFT                                 3                                      /**< Shift value for RAC_WAITMODE                */
#define _RAC_SEQSTATUS_WAITMODE_MASK                                  0x8UL                                  /**< Bit mask for RAC_WAITMODE                   */
#define _RAC_SEQSTATUS_WAITMODE_DEFAULT                               0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define _RAC_SEQSTATUS_WAITMODE_ANY                                   0x00000000UL                           /**< Mode ANY for RAC_SEQSTATUS                  */
#define _RAC_SEQSTATUS_WAITMODE_ALL                                   0x00000001UL                           /**< Mode ALL for RAC_SEQSTATUS                  */
#define RAC_SEQSTATUS_WAITMODE_DEFAULT                                (_RAC_SEQSTATUS_WAITMODE_DEFAULT << 3) /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_WAITMODE_ANY                                    (_RAC_SEQSTATUS_WAITMODE_ANY << 3)     /**< Shifted mode ANY for RAC_SEQSTATUS          */
#define RAC_SEQSTATUS_WAITMODE_ALL                                    (_RAC_SEQSTATUS_WAITMODE_ALL << 3)     /**< Shifted mode ALL for RAC_SEQSTATUS          */
#define RAC_SEQSTATUS_DONE                                            (0x1UL << 4)                           /**< Sequencer Done Signal                       */
#define _RAC_SEQSTATUS_DONE_SHIFT                                     4                                      /**< Shift value for RAC_DONE                    */
#define _RAC_SEQSTATUS_DONE_MASK                                      0x10UL                                 /**< Bit mask for RAC_DONE                       */
#define _RAC_SEQSTATUS_DONE_DEFAULT                                   0x00000001UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_DONE_DEFAULT                                    (_RAC_SEQSTATUS_DONE_DEFAULT << 4)     /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_NEG                                             (0x1UL << 5)                           /**< Negative Flag                               */
#define _RAC_SEQSTATUS_NEG_SHIFT                                      5                                      /**< Shift value for RAC_NEG                     */
#define _RAC_SEQSTATUS_NEG_MASK                                       0x20UL                                 /**< Bit mask for RAC_NEG                        */
#define _RAC_SEQSTATUS_NEG_DEFAULT                                    0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_NEG_DEFAULT                                     (_RAC_SEQSTATUS_NEG_DEFAULT << 5)      /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_POS                                             (0x1UL << 6)                           /**< Positive Flag                               */
#define _RAC_SEQSTATUS_POS_SHIFT                                      6                                      /**< Shift value for RAC_POS                     */
#define _RAC_SEQSTATUS_POS_MASK                                       0x40UL                                 /**< Bit mask for RAC_POS                        */
#define _RAC_SEQSTATUS_POS_DEFAULT                                    0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_POS_DEFAULT                                     (_RAC_SEQSTATUS_POS_DEFAULT << 6)      /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_ZERO                                            (0x1UL << 7)                           /**< Zero Flag                                   */
#define _RAC_SEQSTATUS_ZERO_SHIFT                                     7                                      /**< Shift value for RAC_ZERO                    */
#define _RAC_SEQSTATUS_ZERO_MASK                                      0x80UL                                 /**< Bit mask for RAC_ZERO                       */
#define _RAC_SEQSTATUS_ZERO_DEFAULT                                   0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_ZERO_DEFAULT                                    (_RAC_SEQSTATUS_ZERO_DEFAULT << 7)     /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_CARRY                                           (0x1UL << 8)                           /**< Carry Flag                                  */
#define _RAC_SEQSTATUS_CARRY_SHIFT                                    8                                      /**< Shift value for RAC_CARRY                   */
#define _RAC_SEQSTATUS_CARRY_MASK                                     0x100UL                                /**< Bit mask for RAC_CARRY                      */
#define _RAC_SEQSTATUS_CARRY_DEFAULT                                  0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define RAC_SEQSTATUS_CARRY_DEFAULT                                   (_RAC_SEQSTATUS_CARRY_DEFAULT << 8)    /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_ABORTEN                                         (0x1UL << 10)                          /**< Sequencer Program Execution Abort Enable    */
#define _RAC_SEQSTATUS_ABORTEN_SHIFT                                  10                                     /**< Shift value for RAC_ABORTEN                 */
#define _RAC_SEQSTATUS_ABORTEN_MASK                                   0x400UL                                /**< Bit mask for RAC_ABORTEN                    */
#define _RAC_SEQSTATUS_ABORTEN_DEFAULT                                0x00000000UL                           /**< Mode DEFAULT for RAC_SEQSTATUS              */
#define _RAC_SEQSTATUS_ABORTEN_X0                                     0x00000000UL                           /**< Mode X0 for RAC_SEQSTATUS                   */
#define _RAC_SEQSTATUS_ABORTEN_X1                                     0x00000001UL                           /**< Mode X1 for RAC_SEQSTATUS                   */
#define RAC_SEQSTATUS_ABORTEN_DEFAULT                                 (_RAC_SEQSTATUS_ABORTEN_DEFAULT << 10) /**< Shifted mode DEFAULT for RAC_SEQSTATUS      */
#define RAC_SEQSTATUS_ABORTEN_X0                                      (_RAC_SEQSTATUS_ABORTEN_X0 << 10)      /**< Shifted mode X0 for RAC_SEQSTATUS           */
#define RAC_SEQSTATUS_ABORTEN_X1                                      (_RAC_SEQSTATUS_ABORTEN_X1 << 10)      /**< Shifted mode X1 for RAC_SEQSTATUS           */

/* Bit fields for RAC SEQCMD */
#define _RAC_SEQCMD_RESETVALUE                                        0x00000000UL                            /**< Default value for RAC_SEQCMD                */
#define _RAC_SEQCMD_MASK                                              0x000000FFUL                            /**< Mask for RAC_SEQCMD                         */
#define RAC_SEQCMD_HALT                                               (0x1UL << 0)                            /**< Sequencer Halt                              */
#define _RAC_SEQCMD_HALT_SHIFT                                        0                                       /**< Shift value for RAC_HALT                    */
#define _RAC_SEQCMD_HALT_MASK                                         0x1UL                                   /**< Bit mask for RAC_HALT                       */
#define _RAC_SEQCMD_HALT_DEFAULT                                      0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_HALT_DEFAULT                                       (_RAC_SEQCMD_HALT_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_STEP                                               (0x1UL << 1)                            /**< Sequencer Step                              */
#define _RAC_SEQCMD_STEP_SHIFT                                        1                                       /**< Shift value for RAC_STEP                    */
#define _RAC_SEQCMD_STEP_MASK                                         0x2UL                                   /**< Bit mask for RAC_STEP                       */
#define _RAC_SEQCMD_STEP_DEFAULT                                      0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_STEP_DEFAULT                                       (_RAC_SEQCMD_STEP_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_RESUME                                             (0x1UL << 2)                            /**< Sequencer Resume                            */
#define _RAC_SEQCMD_RESUME_SHIFT                                      2                                       /**< Shift value for RAC_RESUME                  */
#define _RAC_SEQCMD_RESUME_MASK                                       0x4UL                                   /**< Bit mask for RAC_RESUME                     */
#define _RAC_SEQCMD_RESUME_DEFAULT                                    0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_RESUME_DEFAULT                                     (_RAC_SEQCMD_RESUME_DEFAULT << 2)       /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_BKPTEN                                             (0x1UL << 3)                            /**< Breakpoint Enable                           */
#define _RAC_SEQCMD_BKPTEN_SHIFT                                      3                                       /**< Shift value for RAC_BKPTEN                  */
#define _RAC_SEQCMD_BKPTEN_MASK                                       0x8UL                                   /**< Bit mask for RAC_BKPTEN                     */
#define _RAC_SEQCMD_BKPTEN_DEFAULT                                    0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_BKPTEN_DEFAULT                                     (_RAC_SEQCMD_BKPTEN_DEFAULT << 3)       /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_BKPTDIS                                            (0x1UL << 4)                            /**< Breakpoint Disable                          */
#define _RAC_SEQCMD_BKPTDIS_SHIFT                                     4                                       /**< Shift value for RAC_BKPTDIS                 */
#define _RAC_SEQCMD_BKPTDIS_MASK                                      0x10UL                                  /**< Bit mask for RAC_BKPTDIS                    */
#define _RAC_SEQCMD_BKPTDIS_DEFAULT                                   0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_BKPTDIS_DEFAULT                                    (_RAC_SEQCMD_BKPTDIS_DEFAULT << 4)      /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_ABORT                                              (0x1UL << 5)                            /**< Sequencer Execution Abort                   */
#define _RAC_SEQCMD_ABORT_SHIFT                                       5                                       /**< Shift value for RAC_ABORT                   */
#define _RAC_SEQCMD_ABORT_MASK                                        0x20UL                                  /**< Bit mask for RAC_ABORT                      */
#define _RAC_SEQCMD_ABORT_DEFAULT                                     0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_ABORT_DEFAULT                                      (_RAC_SEQCMD_ABORT_DEFAULT << 5)        /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_ABORTENSET                                         (0x1UL << 6)                            /**< Set Sequencer Abort Enable                  */
#define _RAC_SEQCMD_ABORTENSET_SHIFT                                  6                                       /**< Shift value for RAC_ABORTENSET              */
#define _RAC_SEQCMD_ABORTENSET_MASK                                   0x40UL                                  /**< Bit mask for RAC_ABORTENSET                 */
#define _RAC_SEQCMD_ABORTENSET_DEFAULT                                0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_ABORTENSET_DEFAULT                                 (_RAC_SEQCMD_ABORTENSET_DEFAULT << 6)   /**< Shifted mode DEFAULT for RAC_SEQCMD         */
#define RAC_SEQCMD_ABORTENCLEAR                                       (0x1UL << 7)                            /**< Clear Sequencer Abort Enable                */
#define _RAC_SEQCMD_ABORTENCLEAR_SHIFT                                7                                       /**< Shift value for RAC_ABORTENCLEAR            */
#define _RAC_SEQCMD_ABORTENCLEAR_MASK                                 0x80UL                                  /**< Bit mask for RAC_ABORTENCLEAR               */
#define _RAC_SEQCMD_ABORTENCLEAR_DEFAULT                              0x00000000UL                            /**< Mode DEFAULT for RAC_SEQCMD                 */
#define RAC_SEQCMD_ABORTENCLEAR_DEFAULT                               (_RAC_SEQCMD_ABORTENCLEAR_DEFAULT << 7) /**< Shifted mode DEFAULT for RAC_SEQCMD         */

/* Bit fields for RAC BREAKPOINT */
#define _RAC_BREAKPOINT_RESETVALUE                                    0x00000000UL                           /**< Default value for RAC_BREAKPOINT            */
#define _RAC_BREAKPOINT_MASK                                          0xFFFFFFFFUL                           /**< Mask for RAC_BREAKPOINT                     */
#define _RAC_BREAKPOINT_BKPADDR_SHIFT                                 0                                      /**< Shift value for RAC_BKPADDR                 */
#define _RAC_BREAKPOINT_BKPADDR_MASK                                  0xFFFFFFFFUL                           /**< Bit mask for RAC_BKPADDR                    */
#define _RAC_BREAKPOINT_BKPADDR_DEFAULT                               0x00000000UL                           /**< Mode DEFAULT for RAC_BREAKPOINT             */
#define RAC_BREAKPOINT_BKPADDR_DEFAULT                                (_RAC_BREAKPOINT_BKPADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_BREAKPOINT     */

/* Bit fields for RAC R0 */
#define _RAC_R0_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R0                    */
#define _RAC_R0_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R0                             */
#define _RAC_R0_R0_SHIFT                                              0                         /**< Shift value for RAC_R0                      */
#define _RAC_R0_R0_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R0                         */
#define _RAC_R0_R0_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R0                     */
#define RAC_R0_R0_DEFAULT                                             (_RAC_R0_R0_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R0             */

/* Bit fields for RAC R1 */
#define _RAC_R1_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R1                    */
#define _RAC_R1_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R1                             */
#define _RAC_R1_R1_SHIFT                                              0                         /**< Shift value for RAC_R1                      */
#define _RAC_R1_R1_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R1                         */
#define _RAC_R1_R1_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R1                     */
#define RAC_R1_R1_DEFAULT                                             (_RAC_R1_R1_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R1             */

/* Bit fields for RAC R2 */
#define _RAC_R2_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R2                    */
#define _RAC_R2_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R2                             */
#define _RAC_R2_R2_SHIFT                                              0                         /**< Shift value for RAC_R2                      */
#define _RAC_R2_R2_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R2                         */
#define _RAC_R2_R2_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R2                     */
#define RAC_R2_R2_DEFAULT                                             (_RAC_R2_R2_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R2             */

/* Bit fields for RAC R3 */
#define _RAC_R3_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R3                    */
#define _RAC_R3_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R3                             */
#define _RAC_R3_R3_SHIFT                                              0                         /**< Shift value for RAC_R3                      */
#define _RAC_R3_R3_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R3                         */
#define _RAC_R3_R3_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R3                     */
#define RAC_R3_R3_DEFAULT                                             (_RAC_R3_R3_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R3             */

/* Bit fields for RAC R4 */
#define _RAC_R4_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R4                    */
#define _RAC_R4_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R4                             */
#define _RAC_R4_R4_SHIFT                                              0                         /**< Shift value for RAC_R4                      */
#define _RAC_R4_R4_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R4                         */
#define _RAC_R4_R4_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R4                     */
#define RAC_R4_R4_DEFAULT                                             (_RAC_R4_R4_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R4             */

/* Bit fields for RAC R5 */
#define _RAC_R5_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R5                    */
#define _RAC_R5_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R5                             */
#define _RAC_R5_R5_SHIFT                                              0                         /**< Shift value for RAC_R5                      */
#define _RAC_R5_R5_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R5                         */
#define _RAC_R5_R5_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R5                     */
#define RAC_R5_R5_DEFAULT                                             (_RAC_R5_R5_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R5             */

/* Bit fields for RAC R6 */
#define _RAC_R6_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R6                    */
#define _RAC_R6_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R6                             */
#define _RAC_R6_R6_SHIFT                                              0                         /**< Shift value for RAC_R6                      */
#define _RAC_R6_R6_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R6                         */
#define _RAC_R6_R6_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R6                     */
#define RAC_R6_R6_DEFAULT                                             (_RAC_R6_R6_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R6             */

/* Bit fields for RAC R7 */
#define _RAC_R7_RESETVALUE                                            0x00000000UL              /**< Default value for RAC_R7                    */
#define _RAC_R7_MASK                                                  0xFFFFFFFFUL              /**< Mask for RAC_R7                             */
#define _RAC_R7_R7_SHIFT                                              0                         /**< Shift value for RAC_R7                      */
#define _RAC_R7_R7_MASK                                               0xFFFFFFFFUL              /**< Bit mask for RAC_R7                         */
#define _RAC_R7_R7_DEFAULT                                            0x00000000UL              /**< Mode DEFAULT for RAC_R7                     */
#define RAC_R7_R7_DEFAULT                                             (_RAC_R7_R7_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_R7             */

/* Bit fields for RAC WAITMASK */
#define _RAC_WAITMASK_RESETVALUE                                      0x00000000UL                               /**< Default value for RAC_WAITMASK              */
#define _RAC_WAITMASK_MASK                                            0x000001FFUL                               /**< Mask for RAC_WAITMASK                       */
#define RAC_WAITMASK_STCMP                                            (0x1UL << 0)                               /**< STIMER Compare Event                        */
#define _RAC_WAITMASK_STCMP_SHIFT                                     0                                          /**< Shift value for RAC_STCMP                   */
#define _RAC_WAITMASK_STCMP_MASK                                      0x1UL                                      /**< Bit mask for RAC_STCMP                      */
#define _RAC_WAITMASK_STCMP_DEFAULT                                   0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_STCMP_DEFAULT                                    (_RAC_WAITMASK_STCMP_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_FRCRX                                            (0x1UL << 1)                               /**< FRC RXWord                                  */
#define _RAC_WAITMASK_FRCRX_SHIFT                                     1                                          /**< Shift value for RAC_FRCRX                   */
#define _RAC_WAITMASK_FRCRX_MASK                                      0x2UL                                      /**< Bit mask for RAC_FRCRX                      */
#define _RAC_WAITMASK_FRCRX_DEFAULT                                   0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_FRCRX_DEFAULT                                    (_RAC_WAITMASK_FRCRX_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_FRCTX                                            (0x1UL << 2)                               /**< FRC TXWord                                  */
#define _RAC_WAITMASK_FRCTX_SHIFT                                     2                                          /**< Shift value for RAC_FRCTX                   */
#define _RAC_WAITMASK_FRCTX_MASK                                      0x4UL                                      /**< Bit mask for RAC_FRCTX                      */
#define _RAC_WAITMASK_FRCTX_DEFAULT                                   0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_FRCTX_DEFAULT                                    (_RAC_WAITMASK_FRCTX_DEFAULT << 2)         /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_PRSEVENT                                         (0x1UL << 3)                               /**< PRS Event                                   */
#define _RAC_WAITMASK_PRSEVENT_SHIFT                                  3                                          /**< Shift value for RAC_PRSEVENT                */
#define _RAC_WAITMASK_PRSEVENT_MASK                                   0x8UL                                      /**< Bit mask for RAC_PRSEVENT                   */
#define _RAC_WAITMASK_PRSEVENT_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_PRSEVENT_DEFAULT                                 (_RAC_WAITMASK_PRSEVENT_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_DEMODRXREQCLR                                    (0x1UL << 4)                               /**< Demodulator RX Request Clear                */
#define _RAC_WAITMASK_DEMODRXREQCLR_SHIFT                             4                                          /**< Shift value for RAC_DEMODRXREQCLR           */
#define _RAC_WAITMASK_DEMODRXREQCLR_MASK                              0x10UL                                     /**< Bit mask for RAC_DEMODRXREQCLR              */
#define _RAC_WAITMASK_DEMODRXREQCLR_DEFAULT                           0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_DEMODRXREQCLR_DEFAULT                            (_RAC_WAITMASK_DEMODRXREQCLR_DEFAULT << 4) /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_SYNTHRDY                                         (0x1UL << 5)                               /**< SYNTH Ready                                 */
#define _RAC_WAITMASK_SYNTHRDY_SHIFT                                  5                                          /**< Shift value for RAC_SYNTHRDY                */
#define _RAC_WAITMASK_SYNTHRDY_MASK                                   0x20UL                                     /**< Bit mask for RAC_SYNTHRDY                   */
#define _RAC_WAITMASK_SYNTHRDY_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_SYNTHRDY_DEFAULT                                 (_RAC_WAITMASK_SYNTHRDY_DEFAULT << 5)      /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_RAMPDONE                                         (0x1UL << 6)                               /**< Ramp Done                                   */
#define _RAC_WAITMASK_RAMPDONE_SHIFT                                  6                                          /**< Shift value for RAC_RAMPDONE                */
#define _RAC_WAITMASK_RAMPDONE_MASK                                   0x40UL                                     /**< Bit mask for RAC_RAMPDONE                   */
#define _RAC_WAITMASK_RAMPDONE_DEFAULT                                0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_RAMPDONE_DEFAULT                                 (_RAC_WAITMASK_RAMPDONE_DEFAULT << 6)      /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_FRCPAUSED                                        (0x1UL << 7)                               /**< FRC Paused                                  */
#define _RAC_WAITMASK_FRCPAUSED_SHIFT                                 7                                          /**< Shift value for RAC_FRCPAUSED               */
#define _RAC_WAITMASK_FRCPAUSED_MASK                                  0x80UL                                     /**< Bit mask for RAC_FRCPAUSED                  */
#define _RAC_WAITMASK_FRCPAUSED_DEFAULT                               0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_FRCPAUSED_DEFAULT                                (_RAC_WAITMASK_FRCPAUSED_DEFAULT << 7)     /**< Shifted mode DEFAULT for RAC_WAITMASK       */
#define RAC_WAITMASK_ANTSWITCH                                        (0x1UL << 8)                               /**< Active antenna has switched                 */
#define _RAC_WAITMASK_ANTSWITCH_SHIFT                                 8                                          /**< Shift value for RAC_ANTSWITCH               */
#define _RAC_WAITMASK_ANTSWITCH_MASK                                  0x100UL                                    /**< Bit mask for RAC_ANTSWITCH                  */
#define _RAC_WAITMASK_ANTSWITCH_DEFAULT                               0x00000000UL                               /**< Mode DEFAULT for RAC_WAITMASK               */
#define RAC_WAITMASK_ANTSWITCH_DEFAULT                                (_RAC_WAITMASK_ANTSWITCH_DEFAULT << 8)     /**< Shifted mode DEFAULT for RAC_WAITMASK       */

/* Bit fields for RAC WAITSNSH */
#define _RAC_WAITSNSH_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_WAITSNSH              */
#define _RAC_WAITSNSH_MASK                                            0x000003FFUL                          /**< Mask for RAC_WAITSNSH                       */
#define _RAC_WAITSNSH_WAITSNSH_SHIFT                                  0                                     /**< Shift value for RAC_WAITSNSH                */
#define _RAC_WAITSNSH_WAITSNSH_MASK                                   0x3FFUL                               /**< Bit mask for RAC_WAITSNSH                   */
#define _RAC_WAITSNSH_WAITSNSH_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_WAITSNSH               */
#define RAC_WAITSNSH_WAITSNSH_DEFAULT                                 (_RAC_WAITSNSH_WAITSNSH_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_WAITSNSH       */

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

/* Bit fields for RAC VECTADDR */
#define _RAC_VECTADDR_RESETVALUE                                      0x00000000UL                          /**< Default value for RAC_VECTADDR              */
#define _RAC_VECTADDR_MASK                                            0xFFFFFFFFUL                          /**< Mask for RAC_VECTADDR                       */
#define _RAC_VECTADDR_VECTADDR_SHIFT                                  0                                     /**< Shift value for RAC_VECTADDR                */
#define _RAC_VECTADDR_VECTADDR_MASK                                   0xFFFFFFFFUL                          /**< Bit mask for RAC_VECTADDR                   */
#define _RAC_VECTADDR_VECTADDR_DEFAULT                                0x00000000UL                          /**< Mode DEFAULT for RAC_VECTADDR               */
#define RAC_VECTADDR_VECTADDR_DEFAULT                                 (_RAC_VECTADDR_VECTADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_VECTADDR       */

/* Bit fields for RAC SEQCTRL */
#define _RAC_SEQCTRL_RESETVALUE                                       0x00000000UL                                      /**< Default value for RAC_SEQCTRL               */
#define _RAC_SEQCTRL_MASK                                             0x00001C07UL                                      /**< Mask for RAC_SEQCTRL                        */
#define RAC_SEQCTRL_COMPACT                                           (0x1UL << 0)                                      /**< STIMER Compare Action                       */
#define _RAC_SEQCTRL_COMPACT_SHIFT                                    0                                                 /**< Shift value for RAC_COMPACT                 */
#define _RAC_SEQCTRL_COMPACT_MASK                                     0x1UL                                             /**< Bit mask for RAC_COMPACT                    */
#define _RAC_SEQCTRL_COMPACT_DEFAULT                                  0x00000000UL                                      /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_COMPACT_WRAP                                     0x00000000UL                                      /**< Mode WRAP for RAC_SEQCTRL                   */
#define _RAC_SEQCTRL_COMPACT_CONTINUE                                 0x00000001UL                                      /**< Mode CONTINUE for RAC_SEQCTRL               */
#define RAC_SEQCTRL_COMPACT_DEFAULT                                   (_RAC_SEQCTRL_COMPACT_DEFAULT << 0)               /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_COMPACT_WRAP                                      (_RAC_SEQCTRL_COMPACT_WRAP << 0)                  /**< Shifted mode WRAP for RAC_SEQCTRL           */
#define RAC_SEQCTRL_COMPACT_CONTINUE                                  (_RAC_SEQCTRL_COMPACT_CONTINUE << 0)              /**< Shifted mode CONTINUE for RAC_SEQCTRL       */
#define _RAC_SEQCTRL_COMPINVALMODE_SHIFT                              1                                                 /**< Shift value for RAC_COMPINVALMODE           */
#define _RAC_SEQCTRL_COMPINVALMODE_MASK                               0x6UL                                             /**< Bit mask for RAC_COMPINVALMODE              */
#define _RAC_SEQCTRL_COMPINVALMODE_DEFAULT                            0x00000000UL                                      /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_COMPINVALMODE_NEVER                              0x00000000UL                                      /**< Mode NEVER for RAC_SEQCTRL                  */
#define _RAC_SEQCTRL_COMPINVALMODE_STATECHANGE                        0x00000001UL                                      /**< Mode STATECHANGE for RAC_SEQCTRL            */
#define _RAC_SEQCTRL_COMPINVALMODE_COMPEVENT                          0x00000002UL                                      /**< Mode COMPEVENT for RAC_SEQCTRL              */
#define _RAC_SEQCTRL_COMPINVALMODE_STATECOMP                          0x00000003UL                                      /**< Mode STATECOMP for RAC_SEQCTRL              */
#define RAC_SEQCTRL_COMPINVALMODE_DEFAULT                             (_RAC_SEQCTRL_COMPINVALMODE_DEFAULT << 1)         /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_COMPINVALMODE_NEVER                               (_RAC_SEQCTRL_COMPINVALMODE_NEVER << 1)           /**< Shifted mode NEVER for RAC_SEQCTRL          */
#define RAC_SEQCTRL_COMPINVALMODE_STATECHANGE                         (_RAC_SEQCTRL_COMPINVALMODE_STATECHANGE << 1)     /**< Shifted mode STATECHANGE for RAC_SEQCTRL    */
#define RAC_SEQCTRL_COMPINVALMODE_COMPEVENT                           (_RAC_SEQCTRL_COMPINVALMODE_COMPEVENT << 1)       /**< Shifted mode COMPEVENT for RAC_SEQCTRL      */
#define RAC_SEQCTRL_COMPINVALMODE_STATECOMP                           (_RAC_SEQCTRL_COMPINVALMODE_STATECOMP << 1)       /**< Shifted mode STATECOMP for RAC_SEQCTRL      */
#define RAC_SEQCTRL_STIMERDEBUGRUN                                    (0x1UL << 10)                                     /**< STIMER Debug Run                            */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_SHIFT                             10                                                /**< Shift value for RAC_STIMERDEBUGRUN          */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_MASK                              0x400UL                                           /**< Bit mask for RAC_STIMERDEBUGRUN             */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_DEFAULT                           0x00000000UL                                      /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_X0                                0x00000000UL                                      /**< Mode X0 for RAC_SEQCTRL                     */
#define _RAC_SEQCTRL_STIMERDEBUGRUN_X1                                0x00000001UL                                      /**< Mode X1 for RAC_SEQCTRL                     */
#define RAC_SEQCTRL_STIMERDEBUGRUN_DEFAULT                            (_RAC_SEQCTRL_STIMERDEBUGRUN_DEFAULT << 10)       /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_STIMERDEBUGRUN_X0                                 (_RAC_SEQCTRL_STIMERDEBUGRUN_X0 << 10)            /**< Shifted mode X0 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_STIMERDEBUGRUN_X1                                 (_RAC_SEQCTRL_STIMERDEBUGRUN_X1 << 10)            /**< Shifted mode X1 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_CPUHALTREQEN                                      (0x1UL << 11)                                     /**< CPU Halt Request Enable                     */
#define _RAC_SEQCTRL_CPUHALTREQEN_SHIFT                               11                                                /**< Shift value for RAC_CPUHALTREQEN            */
#define _RAC_SEQCTRL_CPUHALTREQEN_MASK                                0x800UL                                           /**< Bit mask for RAC_CPUHALTREQEN               */
#define _RAC_SEQCTRL_CPUHALTREQEN_DEFAULT                             0x00000000UL                                      /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_CPUHALTREQEN_X0                                  0x00000000UL                                      /**< Mode X0 for RAC_SEQCTRL                     */
#define _RAC_SEQCTRL_CPUHALTREQEN_X1                                  0x00000001UL                                      /**< Mode X1 for RAC_SEQCTRL                     */
#define RAC_SEQCTRL_CPUHALTREQEN_DEFAULT                              (_RAC_SEQCTRL_CPUHALTREQEN_DEFAULT << 11)         /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_CPUHALTREQEN_X0                                   (_RAC_SEQCTRL_CPUHALTREQEN_X0 << 11)              /**< Shifted mode X0 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_CPUHALTREQEN_X1                                   (_RAC_SEQCTRL_CPUHALTREQEN_X1 << 11)              /**< Shifted mode X1 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_SEQHALTUPONCPUHALTEN                              (0x1UL << 12)                                     /**< Sequencer Halt Upon CPU Halt Enable         */
#define _RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_SHIFT                       12                                                /**< Shift value for RAC_SEQHALTUPONCPUHALTEN    */
#define _RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_MASK                        0x1000UL                                          /**< Bit mask for RAC_SEQHALTUPONCPUHALTEN       */
#define _RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for RAC_SEQCTRL                */
#define _RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_X0                          0x00000000UL                                      /**< Mode X0 for RAC_SEQCTRL                     */
#define _RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_X1                          0x00000001UL                                      /**< Mode X1 for RAC_SEQCTRL                     */
#define RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_DEFAULT                      (_RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_DEFAULT << 12) /**< Shifted mode DEFAULT for RAC_SEQCTRL        */
#define RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_X0                           (_RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_X0 << 12)      /**< Shifted mode X0 for RAC_SEQCTRL             */
#define RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_X1                           (_RAC_SEQCTRL_SEQHALTUPONCPUHALTEN_X1 << 12)      /**< Shifted mode X1 for RAC_SEQCTRL             */

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
#define _RAC_STATUS2_MASK                                             0x00000FFFUL                              /**< Mask for RAC_STATUS2                        */
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
#define _RAC_PAENCTRL_RESETVALUE                                      0x00000000UL                        /**< Default value for RAC_PAENCTRL              */
#define _RAC_PAENCTRL_MASK                                            0x00000100UL                        /**< Mask for RAC_PAENCTRL                       */
#define RAC_PAENCTRL_PARAMP                                           (0x1UL << 8)                        /**< PA output level ramping                     */
#define _RAC_PAENCTRL_PARAMP_SHIFT                                    8                                   /**< Shift value for RAC_PARAMP                  */
#define _RAC_PAENCTRL_PARAMP_MASK                                     0x100UL                             /**< Bit mask for RAC_PARAMP                     */
#define _RAC_PAENCTRL_PARAMP_DEFAULT                                  0x00000000UL                        /**< Mode DEFAULT for RAC_PAENCTRL               */
#define RAC_PAENCTRL_PARAMP_DEFAULT                                   (_RAC_PAENCTRL_PARAMP_DEFAULT << 8) /**< Shifted mode DEFAULT for RAC_PAENCTRL       */

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
#define _RAC_AUXADCEN_MASK                                            0x000001FFUL                                              /**< Mask for RAC_AUXADCEN                       */
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

/* Bit fields for RAC AUXADCCTRL0 */
#define _RAC_AUXADCCTRL0_RESETVALUE                                   0x00000100UL                                 /**< Default value for RAC_AUXADCCTRL0           */
#define _RAC_AUXADCCTRL0_MASK                                         0x0003FFFFUL                                 /**< Mask for RAC_AUXADCCTRL0                    */
#define _RAC_AUXADCCTRL0_CYCLES_SHIFT                                 0                                            /**< Shift value for RAC_CYCLES                  */
#define _RAC_AUXADCCTRL0_CYCLES_MASK                                  0x3FFUL                                      /**< Bit mask for RAC_CYCLES                     */
#define _RAC_AUXADCCTRL0_CYCLES_DEFAULT                               0x00000100UL                                 /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_CYCLES_DEFAULT                                (_RAC_AUXADCCTRL0_CYCLES_DEFAULT << 0)       /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define _RAC_AUXADCCTRL0_MUXSEL_SHIFT                                 10                                           /**< Shift value for RAC_MUXSEL                  */
#define _RAC_AUXADCCTRL0_MUXSEL_MASK                                  0xC00UL                                      /**< Bit mask for RAC_MUXSEL                     */
#define _RAC_AUXADCCTRL0_MUXSEL_DEFAULT                               0x00000000UL                                 /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_MUXSEL_DEFAULT                                (_RAC_AUXADCCTRL0_MUXSEL_DEFAULT << 10)      /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define RAC_AUXADCCTRL0_CLRCOUNTER                                    (0x1UL << 12)                                /**< Clear counter                               */
#define _RAC_AUXADCCTRL0_CLRCOUNTER_SHIFT                             12                                           /**< Shift value for RAC_CLRCOUNTER              */
#define _RAC_AUXADCCTRL0_CLRCOUNTER_MASK                              0x1000UL                                     /**< Bit mask for RAC_CLRCOUNTER                 */
#define _RAC_AUXADCCTRL0_CLRCOUNTER_DEFAULT                           0x00000000UL                                 /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_CLRCOUNTER_DEFAULT                            (_RAC_AUXADCCTRL0_CLRCOUNTER_DEFAULT << 12)  /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define RAC_AUXADCCTRL0_CLRFILTER                                     (0x1UL << 13)                                /**< Clear accumulators                          */
#define _RAC_AUXADCCTRL0_CLRFILTER_SHIFT                              13                                           /**< Shift value for RAC_CLRFILTER               */
#define _RAC_AUXADCCTRL0_CLRFILTER_MASK                               0x2000UL                                     /**< Bit mask for RAC_CLRFILTER                  */
#define _RAC_AUXADCCTRL0_CLRFILTER_DEFAULT                            0x00000000UL                                 /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_CLRFILTER_DEFAULT                             (_RAC_AUXADCCTRL0_CLRFILTER_DEFAULT << 13)   /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */
#define _RAC_AUXADCCTRL0_INPUTRESSEL_SHIFT                            14                                           /**< Shift value for RAC_INPUTRESSEL             */
#define _RAC_AUXADCCTRL0_INPUTRESSEL_MASK                             0x3C000UL                                    /**< Bit mask for RAC_INPUTRESSEL                */
#define _RAC_AUXADCCTRL0_INPUTRESSEL_DEFAULT                          0x00000000UL                                 /**< Mode DEFAULT for RAC_AUXADCCTRL0            */
#define RAC_AUXADCCTRL0_INPUTRESSEL_DEFAULT                           (_RAC_AUXADCCTRL0_INPUTRESSEL_DEFAULT << 14) /**< Shifted mode DEFAULT for RAC_AUXADCCTRL0    */

/* Bit fields for RAC AUXADCCTRL1 */
#define _RAC_AUXADCCTRL1_RESETVALUE                                   0x00000000UL                                          /**< Default value for RAC_AUXADCCTRL1           */
#define _RAC_AUXADCCTRL1_MASK                                         0x031F0FFFUL                                          /**< Mask for RAC_AUXADCCTRL1                    */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_SHIFT                      0                                                     /**< Shift value for RAC_AUXADCINPUTRESSEL       */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_MASK                       0xFUL                                                 /**< Bit mask for RAC_AUXADCINPUTRESSEL          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_DEFAULT                    0x00000000UL                                          /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES640kOhm                 0x00000000UL                                          /**< Mode RES640kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES320kOhm                 0x00000001UL                                          /**< Mode RES320kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES160kOhm                 0x00000002UL                                          /**< Mode RES160kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES80kOhm                  0x00000003UL                                          /**< Mode RES80kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES40kOhm                  0x00000004UL                                          /**< Mode RES40kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES20kOhm                  0x00000005UL                                          /**< Mode RES20kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES10kOhm                  0x00000006UL                                          /**< Mode RES10kOhm for RAC_AUXADCCTRL1          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES5kOhm                   0x00000007UL                                          /**< Mode RES5kOhm for RAC_AUXADCCTRL1           */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES2p5kOhm                 0x00000008UL                                          /**< Mode RES2p5kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES1p25kOhm                0x00000009UL                                          /**< Mode RES1p25kOhm for RAC_AUXADCCTRL1        */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES0p6kOhm                 0x0000000AUL                                          /**< Mode RES0p6kOhm for RAC_AUXADCCTRL1         */
#define _RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES_switch                 0x0000000BUL                                          /**< Mode RES_switch for RAC_AUXADCCTRL1         */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_DEFAULT                     (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_DEFAULT << 0)     /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES640kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES640kOhm << 0)  /**< Shifted mode RES640kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES320kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES320kOhm << 0)  /**< Shifted mode RES320kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES160kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES160kOhm << 0)  /**< Shifted mode RES160kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES80kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES80kOhm << 0)   /**< Shifted mode RES80kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES40kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES40kOhm << 0)   /**< Shifted mode RES40kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES20kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES20kOhm << 0)   /**< Shifted mode RES20kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES10kOhm                   (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES10kOhm << 0)   /**< Shifted mode RES10kOhm for RAC_AUXADCCTRL1  */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES5kOhm                    (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES5kOhm << 0)    /**< Shifted mode RES5kOhm for RAC_AUXADCCTRL1   */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES2p5kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES2p5kOhm << 0)  /**< Shifted mode RES2p5kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES1p25kOhm                 (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES1p25kOhm << 0) /**< Shifted mode RES1p25kOhm for RAC_AUXADCCTRL1*/
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES0p6kOhm                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES0p6kOhm << 0)  /**< Shifted mode RES0p6kOhm for RAC_AUXADCCTRL1 */
#define RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES_switch                  (_RAC_AUXADCCTRL1_AUXADCINPUTRESSEL_RES_switch << 0)  /**< Shifted mode RES_switch for RAC_AUXADCCTRL1 */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SHIFT                      4                                                     /**< Shift value for RAC_AUXADCINPUTSELECT       */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_MASK                       0xF0UL                                                /**< Bit mask for RAC_AUXADCINPUTSELECT          */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_DEFAULT                    0x00000000UL                                          /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL0                       0x00000000UL                                          /**< Mode SEL0 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL1                       0x00000001UL                                          /**< Mode SEL1 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL2                       0x00000002UL                                          /**< Mode SEL2 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL3                       0x00000003UL                                          /**< Mode SEL3 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL4                       0x00000004UL                                          /**< Mode SEL4 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL5                       0x00000005UL                                          /**< Mode SEL5 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL6                       0x00000006UL                                          /**< Mode SEL6 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL7                       0x00000007UL                                          /**< Mode SEL7 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL8                       0x00000008UL                                          /**< Mode SEL8 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL9                       0x00000009UL                                          /**< Mode SEL9 for RAC_AUXADCCTRL1               */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_DEFAULT                     (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_DEFAULT << 4)     /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL0                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL0 << 4)        /**< Shifted mode SEL0 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL1                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL1 << 4)        /**< Shifted mode SEL1 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL2                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL2 << 4)        /**< Shifted mode SEL2 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL3                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL3 << 4)        /**< Shifted mode SEL3 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL4                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL4 << 4)        /**< Shifted mode SEL4 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL5                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL5 << 4)        /**< Shifted mode SEL5 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL6                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL6 << 4)        /**< Shifted mode SEL6 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL7                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL7 << 4)        /**< Shifted mode SEL7 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL8                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL8 << 4)        /**< Shifted mode SEL8 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL9                        (_RAC_AUXADCCTRL1_AUXADCINPUTSELECT_SEL9 << 4)        /**< Shifted mode SEL9 for RAC_AUXADCCTRL1       */
#define _RAC_AUXADCCTRL1_AUXADCPMONSELECT_SHIFT                       8                                                     /**< Shift value for RAC_AUXADCPMONSELECT        */
#define _RAC_AUXADCCTRL1_AUXADCPMONSELECT_MASK                        0xF00UL                                               /**< Bit mask for RAC_AUXADCPMONSELECT           */
#define _RAC_AUXADCCTRL1_AUXADCPMONSELECT_DEFAULT                     0x00000000UL                                          /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define RAC_AUXADCCTRL1_AUXADCPMONSELECT_DEFAULT                      (_RAC_AUXADCCTRL1_AUXADCPMONSELECT_DEFAULT << 8)      /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_SHIFT                    16                                                    /**< Shift value for RAC_AUXADCTSENSESELCURR     */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_MASK                     0x1F0000UL                                            /**< Bit mask for RAC_AUXADCTSENSESELCURR        */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_DEFAULT                  0x00000000UL                                          /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_DEFAULT                   (_RAC_AUXADCCTRL1_AUXADCTSENSESELCURR_DEFAULT << 16)  /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCRESET                                   (0x1UL << 24)                                         /**< AUXADCRESET                                 */
#define _RAC_AUXADCCTRL1_AUXADCRESET_SHIFT                            24                                                    /**< Shift value for RAC_AUXADCRESET             */
#define _RAC_AUXADCCTRL1_AUXADCRESET_MASK                             0x1000000UL                                           /**< Bit mask for RAC_AUXADCRESET                */
#define _RAC_AUXADCCTRL1_AUXADCRESET_DEFAULT                          0x00000000UL                                          /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCRESET_Reset_Enabled                    0x00000000UL                                          /**< Mode Reset_Enabled for RAC_AUXADCCTRL1      */
#define _RAC_AUXADCCTRL1_AUXADCRESET_Reset_Disabled                   0x00000001UL                                          /**< Mode Reset_Disabled for RAC_AUXADCCTRL1     */
#define RAC_AUXADCCTRL1_AUXADCRESET_DEFAULT                           (_RAC_AUXADCCTRL1_AUXADCRESET_DEFAULT << 24)          /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCRESET_Reset_Enabled                     (_RAC_AUXADCCTRL1_AUXADCRESET_Reset_Enabled << 24)    /**< Shifted mode Reset_Enabled for RAC_AUXADCCTRL1*/
#define RAC_AUXADCCTRL1_AUXADCRESET_Reset_Disabled                    (_RAC_AUXADCCTRL1_AUXADCRESET_Reset_Disabled << 24)   /**< Shifted mode Reset_Disabled for RAC_AUXADCCTRL1*/
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE                            (0x1UL << 25)                                         /**< AUXADCTSENSESELVBE                          */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_SHIFT                     25                                                    /**< Shift value for RAC_AUXADCTSENSESELVBE      */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_MASK                      0x2000000UL                                           /**< Bit mask for RAC_AUXADCTSENSESELVBE         */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_DEFAULT                   0x00000000UL                                          /**< Mode DEFAULT for RAC_AUXADCCTRL1            */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE1                      0x00000000UL                                          /**< Mode VBE1 for RAC_AUXADCCTRL1               */
#define _RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE2                      0x00000001UL                                          /**< Mode VBE2 for RAC_AUXADCCTRL1               */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_DEFAULT                    (_RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_DEFAULT << 25)   /**< Shifted mode DEFAULT for RAC_AUXADCCTRL1    */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE1                       (_RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE1 << 25)      /**< Shifted mode VBE1 for RAC_AUXADCCTRL1       */
#define RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE2                       (_RAC_AUXADCCTRL1_AUXADCTSENSESELVBE_VBE2 << 25)      /**< Shifted mode VBE2 for RAC_AUXADCCTRL1       */

/* Bit fields for RAC AUXADCOUT */
#define _RAC_AUXADCOUT_RESETVALUE                                     0x00000000UL                            /**< Default value for RAC_AUXADCOUT             */
#define _RAC_AUXADCOUT_MASK                                           0x0FFFFFFFUL                            /**< Mask for RAC_AUXADCOUT                      */
#define _RAC_AUXADCOUT_AUXADCOUT_SHIFT                                0                                       /**< Shift value for RAC_AUXADCOUT               */
#define _RAC_AUXADCOUT_AUXADCOUT_MASK                                 0xFFFFFFFUL                             /**< Bit mask for RAC_AUXADCOUT                  */
#define _RAC_AUXADCOUT_AUXADCOUT_DEFAULT                              0x00000000UL                            /**< Mode DEFAULT for RAC_AUXADCOUT              */
#define RAC_AUXADCOUT_AUXADCOUT_DEFAULT                               (_RAC_AUXADCOUT_AUXADCOUT_DEFAULT << 0) /**< Shifted mode DEFAULT for RAC_AUXADCOUT      */

/* Bit fields for RAC CLKMULTEN0 */
#define _RAC_CLKMULTEN0_RESETVALUE                                    0x02A40005UL                                         /**< Default value for RAC_CLKMULTEN0            */
#define _RAC_CLKMULTEN0_MASK                                          0x03FFFFFFUL                                         /**< Mask for RAC_CLKMULTEN0                     */
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
#define RAC_CLKMULTEN0_CLKMULTENDRVDIFF                               (0x1UL << 9)                                         /**< CLKMULTENDRVDIFF                            */
#define _RAC_CLKMULTEN0_CLKMULTENDRVDIFF_SHIFT                        9                                                    /**< Shift value for RAC_CLKMULTENDRVDIFF        */
#define _RAC_CLKMULTEN0_CLKMULTENDRVDIFF_MASK                         0x200UL                                              /**< Bit mask for RAC_CLKMULTENDRVDIFF           */
#define _RAC_CLKMULTEN0_CLKMULTENDRVDIFF_DEFAULT                      0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVDIFF_Single_ended                 0x00000000UL                                         /**< Mode Single_ended for RAC_CLKMULTEN0        */
#define _RAC_CLKMULTEN0_CLKMULTENDRVDIFF_Differential                 0x00000001UL                                         /**< Mode Differential for RAC_CLKMULTEN0        */
#define RAC_CLKMULTEN0_CLKMULTENDRVDIFF_DEFAULT                       (_RAC_CLKMULTEN0_CLKMULTENDRVDIFF_DEFAULT << 9)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVDIFF_Single_ended                  (_RAC_CLKMULTEN0_CLKMULTENDRVDIFF_Single_ended << 9) /**< Shifted mode Single_ended for RAC_CLKMULTEN0*/
#define RAC_CLKMULTEN0_CLKMULTENDRVDIFF_Differential                  (_RAC_CLKMULTEN0_CLKMULTENDRVDIFF_Differential << 9) /**< Shifted mode Differential for RAC_CLKMULTEN0*/
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G                             (0x1UL << 10)                                        /**< CLKMULTENDRVRX2P4G                          */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_SHIFT                      10                                                   /**< Shift value for RAC_CLKMULTENDRVRX2P4G      */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_MASK                       0x400UL                                              /**< Bit mask for RAC_CLKMULTENDRVRX2P4G         */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_DEFAULT                    0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_disable                    0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_enable                     0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_DEFAULT                     (_RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_DEFAULT << 10)   /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_disable                     (_RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_disable << 10)   /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_enable                      (_RAC_CLKMULTEN0_CLKMULTENDRVRX2P4G_enable << 10)    /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV                                 (0x1UL << 13)                                        /**< CLKMULTENFBDIV                              */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_SHIFT                          13                                                   /**< Shift value for RAC_CLKMULTENFBDIV          */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_MASK                           0x2000UL                                             /**< Bit mask for RAC_CLKMULTENFBDIV             */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_DEFAULT                        0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_disable                        0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENFBDIV_enable                         0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV_DEFAULT                         (_RAC_CLKMULTEN0_CLKMULTENFBDIV_DEFAULT << 13)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV_disable                         (_RAC_CLKMULTEN0_CLKMULTENFBDIV_disable << 13)       /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENFBDIV_enable                          (_RAC_CLKMULTEN0_CLKMULTENFBDIV_enable << 13)        /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV                                (0x1UL << 14)                                        /**< CLKMULTENREFDIV                             */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_SHIFT                         14                                                   /**< Shift value for RAC_CLKMULTENREFDIV         */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_MASK                          0x4000UL                                             /**< Bit mask for RAC_CLKMULTENREFDIV            */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_disable                       0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREFDIV_enable                        0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTENREFDIV_DEFAULT << 14)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV_disable                        (_RAC_CLKMULTEN0_CLKMULTENREFDIV_disable << 14)      /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREFDIV_enable                         (_RAC_CLKMULTEN0_CLKMULTENREFDIV_enable << 14)       /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREG1                                  (0x1UL << 15)                                        /**< CLKMULTENREG1                               */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_SHIFT                           15                                                   /**< Shift value for RAC_CLKMULTENREG1           */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_MASK                            0x8000UL                                             /**< Bit mask for RAC_CLKMULTENREG1              */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG1_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREG1_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENREG1_DEFAULT << 15)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG1_disable                          (_RAC_CLKMULTEN0_CLKMULTENREG1_disable << 15)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG1_enable                           (_RAC_CLKMULTEN0_CLKMULTENREG1_enable << 15)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENREG2                                  (0x1UL << 16)                                        /**< CLKMULTENREG2                               */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_SHIFT                           16                                                   /**< Shift value for RAC_CLKMULTENREG2           */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_MASK                            0x10000UL                                            /**< Bit mask for RAC_CLKMULTENREG2              */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_DEFAULT                         0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_disable                         0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENREG2_enable                          0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENREG2_DEFAULT                          (_RAC_CLKMULTEN0_CLKMULTENREG2_DEFAULT << 16)        /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG2_disable                          (_RAC_CLKMULTEN0_CLKMULTENREG2_disable << 16)        /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENREG2_enable                           (_RAC_CLKMULTEN0_CLKMULTENREG2_enable << 16)         /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define RAC_CLKMULTEN0_CLKMULTENROTDET                                (0x1UL << 17)                                        /**< CLKMULTENROTDET                             */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_SHIFT                         17                                                   /**< Shift value for RAC_CLKMULTENROTDET         */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_MASK                          0x20000UL                                            /**< Bit mask for RAC_CLKMULTENROTDET            */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_disable                       0x00000000UL                                         /**< Mode disable for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTENROTDET_enable                        0x00000001UL                                         /**< Mode enable for RAC_CLKMULTEN0              */
#define RAC_CLKMULTEN0_CLKMULTENROTDET_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTENROTDET_DEFAULT << 17)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENROTDET_disable                        (_RAC_CLKMULTEN0_CLKMULTENROTDET_disable << 17)      /**< Shifted mode disable for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTENROTDET_enable                         (_RAC_CLKMULTEN0_CLKMULTENROTDET_enable << 17)       /**< Shifted mode enable for RAC_CLKMULTEN0      */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_SHIFT                          18                                                   /**< Shift value for RAC_CLKMULTFREQCAL          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_MASK                           0xC0000UL                                            /**< Bit mask for RAC_CLKMULTFREQCAL             */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_DEFAULT                        0x00000001UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_14uA                     0x00000000UL                                         /**< Mode pedes_14uA for RAC_CLKMULTEN0          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_22uA                     0x00000001UL                                         /**< Mode pedes_22uA for RAC_CLKMULTEN0          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_30uA                     0x00000002UL                                         /**< Mode pedes_30uA for RAC_CLKMULTEN0          */
#define _RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_38uA                     0x00000003UL                                         /**< Mode pedes_38uA for RAC_CLKMULTEN0          */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_DEFAULT                         (_RAC_CLKMULTEN0_CLKMULTFREQCAL_DEFAULT << 18)       /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_14uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_14uA << 18)    /**< Shifted mode pedes_14uA for RAC_CLKMULTEN0  */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_22uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_22uA << 18)    /**< Shifted mode pedes_22uA for RAC_CLKMULTEN0  */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_30uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_30uA << 18)    /**< Shifted mode pedes_30uA for RAC_CLKMULTEN0  */
#define RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_38uA                      (_RAC_CLKMULTEN0_CLKMULTFREQCAL_pedes_38uA << 18)    /**< Shifted mode pedes_38uA for RAC_CLKMULTEN0  */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_SHIFT                         20                                                   /**< Shift value for RAC_CLKMULTREG1ADJV         */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_MASK                          0x300000UL                                           /**< Bit mask for RAC_CLKMULTREG1ADJV            */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p28                         0x00000000UL                                         /**< Mode v1p28 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p32                         0x00000001UL                                         /**< Mode v1p32 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p33                         0x00000002UL                                         /**< Mode v1p33 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p38                         0x00000003UL                                         /**< Mode v1p38 for RAC_CLKMULTEN0               */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_DEFAULT << 20)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p28                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p28 << 20)        /**< Shifted mode v1p28 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p32                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p32 << 20)        /**< Shifted mode v1p32 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p33                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p33 << 20)        /**< Shifted mode v1p33 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p38                          (_RAC_CLKMULTEN0_CLKMULTREG1ADJV_v1p38 << 20)        /**< Shifted mode v1p38 for RAC_CLKMULTEN0       */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_SHIFT                         22                                                   /**< Shift value for RAC_CLKMULTREG2ADJI         */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_MASK                          0xC00000UL                                           /**< Bit mask for RAC_CLKMULTREG2ADJI            */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_200uA                       0x00000000UL                                         /**< Mode I_200uA for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_480uA                       0x00000001UL                                         /**< Mode I_480uA for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_760uA                       0x00000002UL                                         /**< Mode I_760uA for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_1040uA                      0x00000003UL                                         /**< Mode I_1040uA for RAC_CLKMULTEN0            */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_DEFAULT << 22)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_200uA                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_200uA << 22)      /**< Shifted mode I_200uA for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_480uA                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_480uA << 22)      /**< Shifted mode I_480uA for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_760uA                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_760uA << 22)      /**< Shifted mode I_760uA for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_1040uA                       (_RAC_CLKMULTEN0_CLKMULTREG2ADJI_I_1040uA << 22)     /**< Shifted mode I_1040uA for RAC_CLKMULTEN0    */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_SHIFT                         24                                                   /**< Shift value for RAC_CLKMULTREG2ADJV         */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_MASK                          0x3000000UL                                          /**< Bit mask for RAC_CLKMULTREG2ADJV            */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_DEFAULT                       0x00000002UL                                         /**< Mode DEFAULT for RAC_CLKMULTEN0             */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p03                         0x00000000UL                                         /**< Mode v1p03 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p09                         0x00000001UL                                         /**< Mode v1p09 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p10                         0x00000002UL                                         /**< Mode v1p10 for RAC_CLKMULTEN0               */
#define _RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p16                         0x00000003UL                                         /**< Mode v1p16 for RAC_CLKMULTEN0               */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_DEFAULT                        (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_DEFAULT << 24)      /**< Shifted mode DEFAULT for RAC_CLKMULTEN0     */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p03                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p03 << 24)        /**< Shifted mode v1p03 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p09                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p09 << 24)        /**< Shifted mode v1p09 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p10                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p10 << 24)        /**< Shifted mode v1p10 for RAC_CLKMULTEN0       */
#define RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p16                          (_RAC_CLKMULTEN0_CLKMULTREG2ADJV_v1p16 << 24)        /**< Shifted mode v1p16 for RAC_CLKMULTEN0       */

/* Bit fields for RAC CLKMULTEN1 */
#define _RAC_CLKMULTEN1_RESETVALUE                                    0x00000188UL                                           /**< Default value for RAC_CLKMULTEN1            */
#define _RAC_CLKMULTEN1_MASK                                          0x000001FFUL                                           /**< Mask for RAC_CLKMULTEN1                     */
#define _RAC_CLKMULTEN1_CLKMULTINNIBBLE_SHIFT                         0                                                      /**< Shift value for RAC_CLKMULTINNIBBLE         */
#define _RAC_CLKMULTEN1_CLKMULTINNIBBLE_MASK                          0xFUL                                                  /**< Bit mask for RAC_CLKMULTINNIBBLE            */
#define _RAC_CLKMULTEN1_CLKMULTINNIBBLE_DEFAULT                       0x00000008UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define RAC_CLKMULTEN1_CLKMULTINNIBBLE_DEFAULT                        (_RAC_CLKMULTEN1_CLKMULTINNIBBLE_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB                                  (0x1UL << 4)                                           /**< CLKMULTLDCNIB                               */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_SHIFT                           4                                                      /**< Shift value for RAC_CLKMULTLDCNIB           */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_MASK                            0x10UL                                                 /**< Bit mask for RAC_CLKMULTLDCNIB              */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_DEFAULT                         0x00000000UL                                           /**< Mode DEFAULT for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_disable                         0x00000000UL                                           /**< Mode disable for RAC_CLKMULTEN1             */
#define _RAC_CLKMULTEN1_CLKMULTLDCNIB_enable                          0x00000001UL                                           /**< Mode enable for RAC_CLKMULTEN1              */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB_DEFAULT                          (_RAC_CLKMULTEN1_CLKMULTLDCNIB_DEFAULT << 4)           /**< Shifted mode DEFAULT for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB_disable                          (_RAC_CLKMULTEN1_CLKMULTLDCNIB_disable << 4)           /**< Shifted mode disable for RAC_CLKMULTEN1     */
#define RAC_CLKMULTEN1_CLKMULTLDCNIB_enable                           (_RAC_CLKMULTEN1_CLKMULTLDCNIB_enable << 4)            /**< Shifted mode enable for RAC_CLKMULTEN1      */
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

/* Bit fields for RAC IFADCTRIM */
#define _RAC_IFADCTRIM_RESETVALUE                                     0x08965290UL                                                /**< Default value for RAC_IFADCTRIM             */
#define _RAC_IFADCTRIM_MASK                                           0x0FFFFFFFUL                                                /**< Mask for RAC_IFADCTRIM                      */
#define RAC_IFADCTRIM_IFADCCLKSEL                                     (0x1UL << 0)                                                /**< IFADCCLKSEL                                 */
#define _RAC_IFADCTRIM_IFADCCLKSEL_SHIFT                              0                                                           /**< Shift value for RAC_IFADCCLKSEL             */
#define _RAC_IFADCTRIM_IFADCCLKSEL_MASK                               0x1UL                                                       /**< Bit mask for RAC_IFADCCLKSEL                */
#define _RAC_IFADCTRIM_IFADCCLKSEL_DEFAULT                            0x00000000UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCCLKSEL_clk_2p4g                           0x00000000UL                                                /**< Mode clk_2p4g for RAC_IFADCTRIM             */
#define _RAC_IFADCTRIM_IFADCCLKSEL_clk_subg                           0x00000001UL                                                /**< Mode clk_subg for RAC_IFADCTRIM             */
#define RAC_IFADCTRIM_IFADCCLKSEL_DEFAULT                             (_RAC_IFADCTRIM_IFADCCLKSEL_DEFAULT << 0)                   /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCCLKSEL_clk_2p4g                            (_RAC_IFADCTRIM_IFADCCLKSEL_clk_2p4g << 0)                  /**< Shifted mode clk_2p4g for RAC_IFADCTRIM     */
#define RAC_IFADCTRIM_IFADCCLKSEL_clk_subg                            (_RAC_IFADCTRIM_IFADCCLKSEL_clk_subg << 0)                  /**< Shifted mode clk_subg for RAC_IFADCTRIM     */
#define RAC_IFADCTRIM_IFADCENHALFMODE                                 (0x1UL << 1)                                                /**< IFADCENHALFMODE                             */
#define _RAC_IFADCTRIM_IFADCENHALFMODE_SHIFT                          1                                                           /**< Shift value for RAC_IFADCENHALFMODE         */
#define _RAC_IFADCTRIM_IFADCENHALFMODE_MASK                           0x2UL                                                       /**< Bit mask for RAC_IFADCENHALFMODE            */
#define _RAC_IFADCTRIM_IFADCENHALFMODE_DEFAULT                        0x00000000UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCENHALFMODE_full_speed_mode                0x00000000UL                                                /**< Mode full_speed_mode for RAC_IFADCTRIM      */
#define _RAC_IFADCTRIM_IFADCENHALFMODE_half_speed_mode                0x00000001UL                                                /**< Mode half_speed_mode for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCENHALFMODE_DEFAULT                         (_RAC_IFADCTRIM_IFADCENHALFMODE_DEFAULT << 1)               /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCENHALFMODE_full_speed_mode                 (_RAC_IFADCTRIM_IFADCENHALFMODE_full_speed_mode << 1)       /**< Shifted mode full_speed_mode for RAC_IFADCTRIM*/
#define RAC_IFADCTRIM_IFADCENHALFMODE_half_speed_mode                 (_RAC_IFADCTRIM_IFADCENHALFMODE_half_speed_mode << 1)       /**< Shifted mode half_speed_mode for RAC_IFADCTRIM*/
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_SHIFT                     2                                                           /**< Shift value for RAC_IFADCLDOSERIESAMPLVL    */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_MASK                      0x1CUL                                                      /**< Bit mask for RAC_IFADCLDOSERIESAMPLVL       */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_DEFAULT                   0x00000004UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p20                     0x00000000UL                                                /**< Mode v1p20 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p24                     0x00000001UL                                                /**< Mode v1p24 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p28                     0x00000002UL                                                /**< Mode v1p28 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p32                     0x00000003UL                                                /**< Mode v1p32 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p35                     0x00000004UL                                                /**< Mode v1p35 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p39                     0x00000005UL                                                /**< Mode v1p39 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p42                     0x00000006UL                                                /**< Mode v1p42 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p46                     0x00000007UL                                                /**< Mode v1p46 for RAC_IFADCTRIM                */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_DEFAULT                    (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_DEFAULT << 2)          /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p20                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p20 << 2)            /**< Shifted mode v1p20 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p24                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p24 << 2)            /**< Shifted mode v1p24 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p28                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p28 << 2)            /**< Shifted mode v1p28 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p32                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p32 << 2)            /**< Shifted mode v1p32 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p35                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p35 << 2)            /**< Shifted mode v1p35 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p39                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p39 << 2)            /**< Shifted mode v1p39 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p42                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p42 << 2)            /**< Shifted mode v1p42 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p46                      (_RAC_IFADCTRIM_IFADCLDOSERIESAMPLVL_v1p46 << 2)            /**< Shifted mode v1p46 for RAC_IFADCTRIM        */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_SHIFT                      5                                                           /**< Shift value for RAC_IFADCLDOSHUNTAMPLVL     */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_MASK                       0xE0UL                                                      /**< Bit mask for RAC_IFADCLDOSHUNTAMPLVL        */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_DEFAULT                    0x00000004UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p20                      0x00000000UL                                                /**< Mode v1p20 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p24                      0x00000001UL                                                /**< Mode v1p24 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p28                      0x00000002UL                                                /**< Mode v1p28 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p32                      0x00000003UL                                                /**< Mode v1p32 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p35                      0x00000004UL                                                /**< Mode v1p35 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p39                      0x00000005UL                                                /**< Mode v1p39 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p42                      0x00000006UL                                                /**< Mode v1p42 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p46                      0x00000007UL                                                /**< Mode v1p46 for RAC_IFADCTRIM                */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_DEFAULT                     (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p20                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p20 << 5)             /**< Shifted mode v1p20 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p24                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p24 << 5)             /**< Shifted mode v1p24 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p28                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p28 << 5)             /**< Shifted mode v1p28 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p32                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p32 << 5)             /**< Shifted mode v1p32 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p35                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p35 << 5)             /**< Shifted mode v1p35 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p39                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p39 << 5)             /**< Shifted mode v1p39 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p42                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p42 << 5)             /**< Shifted mode v1p42 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p46                       (_RAC_IFADCTRIM_IFADCLDOSHUNTAMPLVL_v1p46 << 5)             /**< Shifted mode v1p46 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLP                              (0x1UL << 8)                                                /**< IFADCLDOSHUNTCURLP                          */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_SHIFT                       8                                                           /**< Shift value for RAC_IFADCLDOSHUNTCURLP      */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_MASK                        0x100UL                                                     /**< Bit mask for RAC_IFADCLDOSHUNTCURLP         */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_DEFAULT                     0x00000000UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_low_power_disabled          0x00000000UL                                                /**< Mode low_power_disabled for RAC_IFADCTRIM   */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_low_power_enabled           0x00000001UL                                                /**< Mode low_power_enabled for RAC_IFADCTRIM    */
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_DEFAULT                      (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_DEFAULT << 8)            /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_low_power_disabled           (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_low_power_disabled << 8) /**< Shifted mode low_power_disabled for RAC_IFADCTRIM*/
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_low_power_enabled            (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLP_low_power_enabled << 8)  /**< Shifted mode low_power_enabled for RAC_IFADCTRIM*/
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_SHIFT                      9                                                           /**< Shift value for RAC_IFADCLDOSHUNTCURLVL     */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_MASK                       0x600UL                                                     /**< Bit mask for RAC_IFADCLDOSHUNTCURLVL        */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_DEFAULT                    0x00000001UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_180uA              0x00000000UL                                                /**< Mode current_180uA for RAC_IFADCTRIM        */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_190uA              0x00000001UL                                                /**< Mode current_190uA for RAC_IFADCTRIM        */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_200uA              0x00000002UL                                                /**< Mode current_200uA for RAC_IFADCTRIM        */
#define _RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_210uA              0x00000003UL                                                /**< Mode current_210uA for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_DEFAULT                     (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_DEFAULT << 9)           /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_180uA               (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_180uA << 9)     /**< Shifted mode current_180uA for RAC_IFADCTRIM*/
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_190uA               (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_190uA << 9)     /**< Shifted mode current_190uA for RAC_IFADCTRIM*/
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_200uA               (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_200uA << 9)     /**< Shifted mode current_200uA for RAC_IFADCTRIM*/
#define RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_210uA               (_RAC_IFADCTRIM_IFADCLDOSHUNTCURLVL_current_210uA << 9)     /**< Shifted mode current_210uA for RAC_IFADCTRIM*/
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_SHIFT                       11                                                          /**< Shift value for RAC_IFADCOTAST1CURRENT      */
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_MASK                        0x1800UL                                                    /**< Bit mask for RAC_IFADCOTAST1CURRENT         */
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_DEFAULT                     0x00000002UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_negative_20p                0x00000000UL                                                /**< Mode negative_20p for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_negative_11p                0x00000001UL                                                /**< Mode negative_11p for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_nominal                     0x00000002UL                                                /**< Mode nominal for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCOTAST1CURRENT_positive_15p                0x00000003UL                                                /**< Mode positive_15p for RAC_IFADCTRIM         */
#define RAC_IFADCTRIM_IFADCOTAST1CURRENT_DEFAULT                      (_RAC_IFADCTRIM_IFADCOTAST1CURRENT_DEFAULT << 11)           /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCOTAST1CURRENT_negative_20p                 (_RAC_IFADCTRIM_IFADCOTAST1CURRENT_negative_20p << 11)      /**< Shifted mode negative_20p for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCOTAST1CURRENT_negative_11p                 (_RAC_IFADCTRIM_IFADCOTAST1CURRENT_negative_11p << 11)      /**< Shifted mode negative_11p for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCOTAST1CURRENT_nominal                      (_RAC_IFADCTRIM_IFADCOTAST1CURRENT_nominal << 11)           /**< Shifted mode nominal for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCOTAST1CURRENT_positive_15p                 (_RAC_IFADCTRIM_IFADCOTAST1CURRENT_positive_15p << 11)      /**< Shifted mode positive_15p for RAC_IFADCTRIM */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_SHIFT                       13                                                          /**< Shift value for RAC_IFADCOTAST2CURRENT      */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_MASK                        0x6000UL                                                    /**< Bit mask for RAC_IFADCOTAST2CURRENT         */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_DEFAULT                     0x00000002UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_negative_20p                0x00000000UL                                                /**< Mode negative_20p for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_negative_11p                0x00000001UL                                                /**< Mode negative_11p for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_nominal                     0x00000002UL                                                /**< Mode nominal for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCOTAST2CURRENT_positive_15p                0x00000003UL                                                /**< Mode positive_15p for RAC_IFADCTRIM         */
#define RAC_IFADCTRIM_IFADCOTAST2CURRENT_DEFAULT                      (_RAC_IFADCTRIM_IFADCOTAST2CURRENT_DEFAULT << 13)           /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCOTAST2CURRENT_negative_20p                 (_RAC_IFADCTRIM_IFADCOTAST2CURRENT_negative_20p << 13)      /**< Shifted mode negative_20p for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCOTAST2CURRENT_negative_11p                 (_RAC_IFADCTRIM_IFADCOTAST2CURRENT_negative_11p << 13)      /**< Shifted mode negative_11p for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCOTAST2CURRENT_nominal                      (_RAC_IFADCTRIM_IFADCOTAST2CURRENT_nominal << 13)           /**< Shifted mode nominal for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCOTAST2CURRENT_positive_15p                 (_RAC_IFADCTRIM_IFADCOTAST2CURRENT_positive_15p << 13)      /**< Shifted mode positive_15p for RAC_IFADCTRIM */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_SHIFT                        15                                                          /**< Shift value for RAC_IFADCREFBUFAMPLVL       */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_MASK                         0x38000UL                                                   /**< Bit mask for RAC_IFADCREFBUFAMPLVL          */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_DEFAULT                      0x00000004UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p88                        0x00000000UL                                                /**< Mode v0p88 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p91                        0x00000001UL                                                /**< Mode v0p91 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p94                        0x00000002UL                                                /**< Mode v0p94 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p97                        0x00000003UL                                                /**< Mode v0p97 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p00                        0x00000004UL                                                /**< Mode v1p00 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p03                        0x00000005UL                                                /**< Mode v1p03 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p06                        0x00000006UL                                                /**< Mode v1p06 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p09                        0x00000007UL                                                /**< Mode v1p09 for RAC_IFADCTRIM                */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_DEFAULT                       (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_DEFAULT << 15)            /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p88                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p88 << 15)              /**< Shifted mode v0p88 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p91                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p91 << 15)              /**< Shifted mode v0p91 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p94                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p94 << 15)              /**< Shifted mode v0p94 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p97                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v0p97 << 15)              /**< Shifted mode v0p97 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p00                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p00 << 15)              /**< Shifted mode v1p00 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p03                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p03 << 15)              /**< Shifted mode v1p03 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p06                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p06 << 15)              /**< Shifted mode v1p06 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p09                         (_RAC_IFADCTRIM_IFADCREFBUFAMPLVL_v1p09 << 15)              /**< Shifted mode v1p09 for RAC_IFADCTRIM        */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_SHIFT                        18                                                          /**< Shift value for RAC_IFADCREFBUFCURLVL       */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_MASK                         0xC0000UL                                                   /**< Bit mask for RAC_IFADCREFBUFCURLVL          */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_DEFAULT                      0x00000001UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_65uA                 0x00000000UL                                                /**< Mode current_65uA for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_75uA                 0x00000001UL                                                /**< Mode current_75uA for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_85uA                 0x00000002UL                                                /**< Mode current_85uA for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_95uA                 0x00000003UL                                                /**< Mode current_95uA for RAC_IFADCTRIM         */
#define RAC_IFADCTRIM_IFADCREFBUFCURLVL_DEFAULT                       (_RAC_IFADCTRIM_IFADCREFBUFCURLVL_DEFAULT << 18)            /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_65uA                  (_RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_65uA << 18)       /**< Shifted mode current_65uA for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_75uA                  (_RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_75uA << 18)       /**< Shifted mode current_75uA for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_85uA                  (_RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_85uA << 18)       /**< Shifted mode current_85uA for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_95uA                  (_RAC_IFADCTRIM_IFADCREFBUFCURLVL_current_95uA << 18)       /**< Shifted mode current_95uA for RAC_IFADCTRIM */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_SHIFT                         20                                                          /**< Shift value for RAC_IFADCSIDETONEAMP        */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_MASK                          0x300000UL                                                  /**< Bit mask for RAC_IFADCSIDETONEAMP           */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_DEFAULT                       0x00000001UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_10mV                  0x00000000UL                                                /**< Mode diff_pk_10mV for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_20mV                  0x00000001UL                                                /**< Mode diff_pk_20mV for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_50mV                  0x00000002UL                                                /**< Mode diff_pk_50mV for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_100mV                 0x00000003UL                                                /**< Mode diff_pk_100mV for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCSIDETONEAMP_DEFAULT                        (_RAC_IFADCTRIM_IFADCSIDETONEAMP_DEFAULT << 20)             /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_10mV                   (_RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_10mV << 20)        /**< Shifted mode diff_pk_10mV for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_20mV                   (_RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_20mV << 20)        /**< Shifted mode diff_pk_20mV for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_50mV                   (_RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_50mV << 20)        /**< Shifted mode diff_pk_50mV for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_100mV                  (_RAC_IFADCTRIM_IFADCSIDETONEAMP_diff_pk_100mV << 20)       /**< Shifted mode diff_pk_100mV for RAC_IFADCTRIM*/
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_SHIFT                        22                                                          /**< Shift value for RAC_IFADCSIDETONEFREQ       */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_MASK                         0x1C00000UL                                                 /**< Bit mask for RAC_IFADCSIDETONEFREQ          */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_DEFAULT                      0x00000002UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_na0                          0x00000000UL                                                /**< Mode na0 for RAC_IFADCTRIM                  */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_128                      0x00000001UL                                                /**< Mode div_128 for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_64                       0x00000002UL                                                /**< Mode div_64 for RAC_IFADCTRIM               */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_32                       0x00000003UL                                                /**< Mode div_32 for RAC_IFADCTRIM               */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_16                       0x00000004UL                                                /**< Mode div_16 for RAC_IFADCTRIM               */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_8                        0x00000005UL                                                /**< Mode div_8 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_4                        0x00000006UL                                                /**< Mode div_4 for RAC_IFADCTRIM                */
#define _RAC_IFADCTRIM_IFADCSIDETONEFREQ_na7                          0x00000007UL                                                /**< Mode na7 for RAC_IFADCTRIM                  */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_DEFAULT                       (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_DEFAULT << 22)            /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_na0                           (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_na0 << 22)                /**< Shifted mode na0 for RAC_IFADCTRIM          */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_128                       (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_128 << 22)            /**< Shifted mode div_128 for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_64                        (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_64 << 22)             /**< Shifted mode div_64 for RAC_IFADCTRIM       */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_32                        (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_32 << 22)             /**< Shifted mode div_32 for RAC_IFADCTRIM       */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_16                        (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_16 << 22)             /**< Shifted mode div_16 for RAC_IFADCTRIM       */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_8                         (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_8 << 22)              /**< Shifted mode div_8 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_4                         (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_div_4 << 22)              /**< Shifted mode div_4 for RAC_IFADCTRIM        */
#define RAC_IFADCTRIM_IFADCSIDETONEFREQ_na7                           (_RAC_IFADCTRIM_IFADCSIDETONEFREQ_na7 << 22)                /**< Shifted mode na7 for RAC_IFADCTRIM          */
#define RAC_IFADCTRIM_IFADCTUNEZERO                                   (0x1UL << 25)                                               /**< IFADCTUNEZERO                               */
#define _RAC_IFADCTRIM_IFADCTUNEZERO_SHIFT                            25                                                          /**< Shift value for RAC_IFADCTUNEZERO           */
#define _RAC_IFADCTRIM_IFADCTUNEZERO_MASK                             0x2000000UL                                                 /**< Bit mask for RAC_IFADCTUNEZERO              */
#define _RAC_IFADCTRIM_IFADCTUNEZERO_DEFAULT                          0x00000000UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCTUNEZERO_nominal_zero                     0x00000000UL                                                /**< Mode nominal_zero for RAC_IFADCTRIM         */
#define _RAC_IFADCTRIM_IFADCTUNEZERO_half_freq_zero                   0x00000001UL                                                /**< Mode half_freq_zero for RAC_IFADCTRIM       */
#define RAC_IFADCTRIM_IFADCTUNEZERO_DEFAULT                           (_RAC_IFADCTRIM_IFADCTUNEZERO_DEFAULT << 25)                /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCTUNEZERO_nominal_zero                      (_RAC_IFADCTRIM_IFADCTUNEZERO_nominal_zero << 25)           /**< Shifted mode nominal_zero for RAC_IFADCTRIM */
#define RAC_IFADCTRIM_IFADCTUNEZERO_half_freq_zero                    (_RAC_IFADCTRIM_IFADCTUNEZERO_half_freq_zero << 25)         /**< Shifted mode half_freq_zero for RAC_IFADCTRIM*/
#define _RAC_IFADCTRIM_IFADCVCMLVL_SHIFT                              26                                                          /**< Shift value for RAC_IFADCVCMLVL             */
#define _RAC_IFADCTRIM_IFADCVCMLVL_MASK                               0xC000000UL                                                 /**< Bit mask for RAC_IFADCVCMLVL                */
#define _RAC_IFADCTRIM_IFADCVCMLVL_DEFAULT                            0x00000002UL                                                /**< Mode DEFAULT for RAC_IFADCTRIM              */
#define _RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p48                         0x00000000UL                                                /**< Mode ratio_0p48 for RAC_IFADCTRIM           */
#define _RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p49                         0x00000001UL                                                /**< Mode ratio_0p49 for RAC_IFADCTRIM           */
#define _RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p5                          0x00000002UL                                                /**< Mode ratio_0p5 for RAC_IFADCTRIM            */
#define _RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p52                         0x00000003UL                                                /**< Mode ratio_0p52 for RAC_IFADCTRIM           */
#define RAC_IFADCTRIM_IFADCVCMLVL_DEFAULT                             (_RAC_IFADCTRIM_IFADCVCMLVL_DEFAULT << 26)                  /**< Shifted mode DEFAULT for RAC_IFADCTRIM      */
#define RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p48                          (_RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p48 << 26)               /**< Shifted mode ratio_0p48 for RAC_IFADCTRIM   */
#define RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p49                          (_RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p49 << 26)               /**< Shifted mode ratio_0p49 for RAC_IFADCTRIM   */
#define RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p5                           (_RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p5 << 26)                /**< Shifted mode ratio_0p5 for RAC_IFADCTRIM    */
#define RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p52                          (_RAC_IFADCTRIM_IFADCVCMLVL_ratio_0p52 << 26)               /**< Shifted mode ratio_0p52 for RAC_IFADCTRIM   */

/* Bit fields for RAC IFADCCAL */
#define _RAC_IFADCCAL_RESETVALUE                                      0x00001000UL                                    /**< Default value for RAC_IFADCCAL              */
#define _RAC_IFADCCAL_MASK                                            0x00001F03UL                                    /**< Mask for RAC_IFADCCAL                       */
#define RAC_IFADCCAL_IFADCENRCCAL                                     (0x1UL << 0)                                    /**< IFADCENRCCAL                                */
#define _RAC_IFADCCAL_IFADCENRCCAL_SHIFT                              0                                               /**< Shift value for RAC_IFADCENRCCAL            */
#define _RAC_IFADCCAL_IFADCENRCCAL_MASK                               0x1UL                                           /**< Bit mask for RAC_IFADCENRCCAL               */
#define _RAC_IFADCCAL_IFADCENRCCAL_DEFAULT                            0x00000000UL                                    /**< Mode DEFAULT for RAC_IFADCCAL               */
#define _RAC_IFADCCAL_IFADCENRCCAL_rccal_disable                      0x00000000UL                                    /**< Mode rccal_disable for RAC_IFADCCAL         */
#define _RAC_IFADCCAL_IFADCENRCCAL_rccal_enable                       0x00000001UL                                    /**< Mode rccal_enable for RAC_IFADCCAL          */
#define RAC_IFADCCAL_IFADCENRCCAL_DEFAULT                             (_RAC_IFADCCAL_IFADCENRCCAL_DEFAULT << 0)       /**< Shifted mode DEFAULT for RAC_IFADCCAL       */
#define RAC_IFADCCAL_IFADCENRCCAL_rccal_disable                       (_RAC_IFADCCAL_IFADCENRCCAL_rccal_disable << 0) /**< Shifted mode rccal_disable for RAC_IFADCCAL */
#define RAC_IFADCCAL_IFADCENRCCAL_rccal_enable                        (_RAC_IFADCCAL_IFADCENRCCAL_rccal_enable << 0)  /**< Shifted mode rccal_enable for RAC_IFADCCAL  */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE                               (0x1UL << 1)                                    /**< IFADCTUNERCCALMODE                          */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_SHIFT                        1                                               /**< Shift value for RAC_IFADCTUNERCCALMODE      */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_MASK                         0x2UL                                           /**< Bit mask for RAC_IFADCTUNERCCALMODE         */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_DEFAULT                      0x00000000UL                                    /**< Mode DEFAULT for RAC_IFADCCAL               */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_SYmode                       0x00000000UL                                    /**< Mode SYmode for RAC_IFADCCAL                */
#define _RAC_IFADCCAL_IFADCTUNERCCALMODE_ADCmode                      0x00000001UL                                    /**< Mode ADCmode for RAC_IFADCCAL               */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE_DEFAULT                       (_RAC_IFADCCAL_IFADCTUNERCCALMODE_DEFAULT << 1) /**< Shifted mode DEFAULT for RAC_IFADCCAL       */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE_SYmode                        (_RAC_IFADCCAL_IFADCTUNERCCALMODE_SYmode << 1)  /**< Shifted mode SYmode for RAC_IFADCCAL        */
#define RAC_IFADCCAL_IFADCTUNERCCALMODE_ADCmode                       (_RAC_IFADCCAL_IFADCTUNERCCALMODE_ADCmode << 1) /**< Shifted mode ADCmode for RAC_IFADCCAL       */
#define _RAC_IFADCCAL_IFADCTUNERC_SHIFT                               8                                               /**< Shift value for RAC_IFADCTUNERC             */
#define _RAC_IFADCCAL_IFADCTUNERC_MASK                                0x1F00UL                                        /**< Bit mask for RAC_IFADCTUNERC                */
#define _RAC_IFADCCAL_IFADCTUNERC_DEFAULT                             0x00000010UL                                    /**< Mode DEFAULT for RAC_IFADCCAL               */
#define RAC_IFADCCAL_IFADCTUNERC_DEFAULT                              (_RAC_IFADCCAL_IFADCTUNERC_DEFAULT << 8)        /**< Shifted mode DEFAULT for RAC_IFADCCAL       */

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
#define _RAC_LNAMIXTRIM0_RESETVALUE                                   0x0442093DUL                                           /**< Default value for RAC_LNAMIXTRIM0           */
#define _RAC_LNAMIXTRIM0_MASK                                         0x07FFFFFFUL                                           /**< Mask for RAC_LNAMIXTRIM0                    */
#define _RAC_LNAMIXTRIM0_LNAMIXCURCTRL_SHIFT                          0                                                      /**< Shift value for RAC_LNAMIXCURCTRL           */
#define _RAC_LNAMIXTRIM0_LNAMIXCURCTRL_MASK                           0x3FUL                                                 /**< Bit mask for RAC_LNAMIXCURCTRL              */
#define _RAC_LNAMIXTRIM0_LNAMIXCURCTRL_DEFAULT                        0x0000003DUL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXCURCTRL_DEFAULT                         (_RAC_LNAMIXTRIM0_LNAMIXCURCTRL_DEFAULT << 0)          /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_SHIFT                          6                                                      /**< Shift value for RAC_LNAMIXHIGHCUR           */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_MASK                           0xC0UL                                                 /**< Bit mask for RAC_LNAMIXHIGHCUR              */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_DEFAULT                        0x00000000UL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_470uA                  0x00000000UL                                           /**< Mode current_470uA for RAC_LNAMIXTRIM0      */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_530uA                  0x00000001UL                                           /**< Mode current_530uA for RAC_LNAMIXTRIM0      */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_unused                         0x00000002UL                                           /**< Mode unused for RAC_LNAMIXTRIM0             */
#define _RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_590uA                  0x00000003UL                                           /**< Mode current_590uA for RAC_LNAMIXTRIM0      */
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_DEFAULT                         (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_DEFAULT << 6)          /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_470uA                   (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_470uA << 6)    /**< Shifted mode current_470uA for RAC_LNAMIXTRIM0*/
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_530uA                   (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_530uA << 6)    /**< Shifted mode current_530uA for RAC_LNAMIXTRIM0*/
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_unused                          (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_unused << 6)           /**< Shifted mode unused for RAC_LNAMIXTRIM0     */
#define RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_590uA                   (_RAC_LNAMIXTRIM0_LNAMIXHIGHCUR_current_590uA << 6)    /**< Shifted mode current_590uA for RAC_LNAMIXTRIM0*/
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_SHIFT                           8                                                      /**< Shift value for RAC_LNAMIXLOWCUR            */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_MASK                            0x300UL                                                /**< Bit mask for RAC_LNAMIXLOWCUR               */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_DEFAULT                         0x00000001UL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_nom                     0x00000000UL                                           /**< Mode current_nom for RAC_LNAMIXTRIM0        */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_unused                          0x00000001UL                                           /**< Mode unused for RAC_LNAMIXTRIM0             */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_80percent               0x00000002UL                                           /**< Mode current_80percent for RAC_LNAMIXTRIM0  */
#define _RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_60percent               0x00000003UL                                           /**< Mode current_60percent for RAC_LNAMIXTRIM0  */
#define RAC_LNAMIXTRIM0_LNAMIXLOWCUR_DEFAULT                          (_RAC_LNAMIXTRIM0_LNAMIXLOWCUR_DEFAULT << 8)           /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_nom                      (_RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_nom << 8)       /**< Shifted mode current_nom for RAC_LNAMIXTRIM0*/
#define RAC_LNAMIXTRIM0_LNAMIXLOWCUR_unused                           (_RAC_LNAMIXTRIM0_LNAMIXLOWCUR_unused << 8)            /**< Shifted mode unused for RAC_LNAMIXTRIM0     */
#define RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_80percent                (_RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_80percent << 8) /**< Shifted mode current_80percent for RAC_LNAMIXTRIM0*/
#define RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_60percent                (_RAC_LNAMIXTRIM0_LNAMIXLOWCUR_current_60percent << 8) /**< Shifted mode current_60percent for RAC_LNAMIXTRIM0*/
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_SHIFT                       10                                                     /**< Shift value for RAC_LNAMIXRFPKDBWSEL        */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_MASK                        0xC00UL                                                /**< Bit mask for RAC_LNAMIXRFPKDBWSEL           */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_DEFAULT                     0x00000002UL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_DEFAULT                      (_RAC_LNAMIXTRIM0_LNAMIXRFPKDBWSEL_DEFAULT << 10)      /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_SHIFT                       12                                                     /**< Shift value for RAC_LNAMIXRFPKDCALCM        */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_MASK                        0x3F000UL                                              /**< Bit mask for RAC_LNAMIXRFPKDCALCM           */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_DEFAULT                     0x00000020UL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_DEFAULT                      (_RAC_LNAMIXTRIM0_LNAMIXRFPKDCALCM_DEFAULT << 12)      /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_SHIFT                       18                                                     /**< Shift value for RAC_LNAMIXRFPKDCALDM        */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_MASK                        0x7C0000UL                                             /**< Bit mask for RAC_LNAMIXRFPKDCALDM           */
#define _RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_DEFAULT                     0x00000010UL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_DEFAULT                      (_RAC_LNAMIXTRIM0_LNAMIXRFPKDCALDM_DEFAULT << 18)      /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */
#define _RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_SHIFT                         23                                                     /**< Shift value for RAC_LNAMIXTRIMVREG          */
#define _RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_MASK                          0x7800000UL                                            /**< Bit mask for RAC_LNAMIXTRIMVREG             */
#define _RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_DEFAULT                       0x00000008UL                                           /**< Mode DEFAULT for RAC_LNAMIXTRIM0            */
#define RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_DEFAULT                        (_RAC_LNAMIXTRIM0_LNAMIXTRIMVREG_DEFAULT << 23)        /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM0    */

/* Bit fields for RAC LNAMIXTRIM1 */
#define _RAC_LNAMIXTRIM1_RESETVALUE                                   0x00011508UL                                      /**< Default value for RAC_LNAMIXTRIM1           */
#define _RAC_LNAMIXTRIM1_MASK                                         0x0001FFFFUL                                      /**< Mask for RAC_LNAMIXTRIM1                    */
#define _RAC_LNAMIXTRIM1_LNAMIXIBIAS1ADJ_SHIFT                        0                                                 /**< Shift value for RAC_LNAMIXIBIAS1ADJ         */
#define _RAC_LNAMIXTRIM1_LNAMIXIBIAS1ADJ_MASK                         0xFUL                                             /**< Bit mask for RAC_LNAMIXIBIAS1ADJ            */
#define _RAC_LNAMIXTRIM1_LNAMIXIBIAS1ADJ_DEFAULT                      0x00000008UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define RAC_LNAMIXTRIM1_LNAMIXIBIAS1ADJ_DEFAULT                       (_RAC_LNAMIXTRIM1_LNAMIXIBIAS1ADJ_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define _RAC_LNAMIXTRIM1_LNAMIXLNA1CAPSEL_SHIFT                       4                                                 /**< Shift value for RAC_LNAMIXLNA1CAPSEL        */
#define _RAC_LNAMIXTRIM1_LNAMIXLNA1CAPSEL_MASK                        0x70UL                                            /**< Bit mask for RAC_LNAMIXLNA1CAPSEL           */
#define _RAC_LNAMIXTRIM1_LNAMIXLNA1CAPSEL_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define RAC_LNAMIXTRIM1_LNAMIXLNA1CAPSEL_DEFAULT                      (_RAC_LNAMIXTRIM1_LNAMIXLNA1CAPSEL_DEFAULT << 4)  /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_SHIFT                         7                                                 /**< Shift value for RAC_LNAMIXMXRBIAS1          */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_MASK                          0x180UL                                           /**< Bit mask for RAC_LNAMIXMXRBIAS1             */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_DEFAULT                       0x00000002UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_1V                       0x00000000UL                                      /**< Mode bias_1V for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_unused                        0x00000001UL                                      /**< Mode unused for RAC_LNAMIXTRIM1             */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_900m                     0x00000002UL                                      /**< Mode bias_900m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_800m                     0x00000003UL                                      /**< Mode bias_800m for RAC_LNAMIXTRIM1          */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_DEFAULT                        (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_DEFAULT << 7)    /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_1V                        (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_1V << 7)    /**< Shifted mode bias_1V for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_unused                         (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_unused << 7)     /**< Shifted mode unused for RAC_LNAMIXTRIM1     */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_900m                      (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_900m << 7)  /**< Shifted mode bias_900m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_800m                      (_RAC_LNAMIXTRIM1_LNAMIXMXRBIAS1_bias_800m << 7)  /**< Shifted mode bias_800m for RAC_LNAMIXTRIM1  */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_SHIFT                         9                                                 /**< Shift value for RAC_LNAMIXNCAS1ADJ          */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_MASK                          0x600UL                                           /**< Bit mask for RAC_LNAMIXNCAS1ADJ             */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_DEFAULT                       0x00000002UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_1V                       0x00000000UL                                      /**< Mode ncas_1V for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_unused                        0x00000001UL                                      /**< Mode unused for RAC_LNAMIXTRIM1             */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_950m                     0x00000002UL                                      /**< Mode ncas_950m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_900m                     0x00000003UL                                      /**< Mode ncas_900m for RAC_LNAMIXTRIM1          */
#define RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_DEFAULT                        (_RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_DEFAULT << 9)    /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_1V                        (_RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_1V << 9)    /**< Shifted mode ncas_1V for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_unused                         (_RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_unused << 9)     /**< Shifted mode unused for RAC_LNAMIXTRIM1     */
#define RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_950m                      (_RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_950m << 9)  /**< Shifted mode ncas_950m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_900m                      (_RAC_LNAMIXTRIM1_LNAMIXNCAS1ADJ_ncas_900m << 9)  /**< Shifted mode ncas_900m for RAC_LNAMIXTRIM1  */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_SHIFT                         11                                                /**< Shift value for RAC_LNAMIXPCAS1ADJ          */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_MASK                          0x1800UL                                          /**< Bit mask for RAC_LNAMIXPCAS1ADJ             */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_DEFAULT                       0x00000002UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_250m                     0x00000000UL                                      /**< Mode pcas_250m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_unused                        0x00000001UL                                      /**< Mode unused for RAC_LNAMIXTRIM1             */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_300m                     0x00000002UL                                      /**< Mode pcas_300m for RAC_LNAMIXTRIM1          */
#define _RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_350m                     0x00000003UL                                      /**< Mode pcas_350m for RAC_LNAMIXTRIM1          */
#define RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_DEFAULT                        (_RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_DEFAULT << 11)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */
#define RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_250m                      (_RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_250m << 11) /**< Shifted mode pcas_250m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_unused                         (_RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_unused << 11)    /**< Shifted mode unused for RAC_LNAMIXTRIM1     */
#define RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_300m                      (_RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_300m << 11) /**< Shifted mode pcas_300m for RAC_LNAMIXTRIM1  */
#define RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_350m                      (_RAC_LNAMIXTRIM1_LNAMIXPCAS1ADJ_pcas_350m << 11) /**< Shifted mode pcas_350m for RAC_LNAMIXTRIM1  */
#define _RAC_LNAMIXTRIM1_LNAMIXVOUT1ADJ_SHIFT                         13                                                /**< Shift value for RAC_LNAMIXVOUT1ADJ          */
#define _RAC_LNAMIXTRIM1_LNAMIXVOUT1ADJ_MASK                          0x1E000UL                                         /**< Bit mask for RAC_LNAMIXVOUT1ADJ             */
#define _RAC_LNAMIXTRIM1_LNAMIXVOUT1ADJ_DEFAULT                       0x00000008UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM1            */
#define RAC_LNAMIXTRIM1_LNAMIXVOUT1ADJ_DEFAULT                        (_RAC_LNAMIXTRIM1_LNAMIXVOUT1ADJ_DEFAULT << 13)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM1    */

/* Bit fields for RAC LNAMIXTRIM2 */
#define _RAC_LNAMIXTRIM2_RESETVALUE                                   0x00011508UL                                      /**< Default value for RAC_LNAMIXTRIM2           */
#define _RAC_LNAMIXTRIM2_MASK                                         0x0001FFFFUL                                      /**< Mask for RAC_LNAMIXTRIM2                    */
#define _RAC_LNAMIXTRIM2_LNAMIXIBIAS2ADJ_SHIFT                        0                                                 /**< Shift value for RAC_LNAMIXIBIAS2ADJ         */
#define _RAC_LNAMIXTRIM2_LNAMIXIBIAS2ADJ_MASK                         0xFUL                                             /**< Bit mask for RAC_LNAMIXIBIAS2ADJ            */
#define _RAC_LNAMIXTRIM2_LNAMIXIBIAS2ADJ_DEFAULT                      0x00000008UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM2            */
#define RAC_LNAMIXTRIM2_LNAMIXIBIAS2ADJ_DEFAULT                       (_RAC_LNAMIXTRIM2_LNAMIXIBIAS2ADJ_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM2    */
#define _RAC_LNAMIXTRIM2_LNAMIXLNA2CAPSEL_SHIFT                       4                                                 /**< Shift value for RAC_LNAMIXLNA2CAPSEL        */
#define _RAC_LNAMIXTRIM2_LNAMIXLNA2CAPSEL_MASK                        0x70UL                                            /**< Bit mask for RAC_LNAMIXLNA2CAPSEL           */
#define _RAC_LNAMIXTRIM2_LNAMIXLNA2CAPSEL_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM2            */
#define RAC_LNAMIXTRIM2_LNAMIXLNA2CAPSEL_DEFAULT                      (_RAC_LNAMIXTRIM2_LNAMIXLNA2CAPSEL_DEFAULT << 4)  /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM2    */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_SHIFT                         7                                                 /**< Shift value for RAC_LNAMIXMXRBIAS2          */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_MASK                          0x180UL                                           /**< Bit mask for RAC_LNAMIXMXRBIAS2             */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_DEFAULT                       0x00000002UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM2            */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_1V                       0x00000000UL                                      /**< Mode bias_1V for RAC_LNAMIXTRIM2            */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_unused                        0x00000001UL                                      /**< Mode unused for RAC_LNAMIXTRIM2             */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_900m                     0x00000002UL                                      /**< Mode bias_900m for RAC_LNAMIXTRIM2          */
#define _RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_800m                     0x00000003UL                                      /**< Mode bias_800m for RAC_LNAMIXTRIM2          */
#define RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_DEFAULT                        (_RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_DEFAULT << 7)    /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM2    */
#define RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_1V                        (_RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_1V << 7)    /**< Shifted mode bias_1V for RAC_LNAMIXTRIM2    */
#define RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_unused                         (_RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_unused << 7)     /**< Shifted mode unused for RAC_LNAMIXTRIM2     */
#define RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_900m                      (_RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_900m << 7)  /**< Shifted mode bias_900m for RAC_LNAMIXTRIM2  */
#define RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_800m                      (_RAC_LNAMIXTRIM2_LNAMIXMXRBIAS2_bias_800m << 7)  /**< Shifted mode bias_800m for RAC_LNAMIXTRIM2  */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_SHIFT                         9                                                 /**< Shift value for RAC_LNAMIXNCAS2ADJ          */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_MASK                          0x600UL                                           /**< Bit mask for RAC_LNAMIXNCAS2ADJ             */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_DEFAULT                       0x00000002UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM2            */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_1V                       0x00000000UL                                      /**< Mode ncas_1V for RAC_LNAMIXTRIM2            */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_unused                        0x00000001UL                                      /**< Mode unused for RAC_LNAMIXTRIM2             */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_950m                     0x00000002UL                                      /**< Mode ncas_950m for RAC_LNAMIXTRIM2          */
#define _RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_900m                     0x00000003UL                                      /**< Mode ncas_900m for RAC_LNAMIXTRIM2          */
#define RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_DEFAULT                        (_RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_DEFAULT << 9)    /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM2    */
#define RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_1V                        (_RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_1V << 9)    /**< Shifted mode ncas_1V for RAC_LNAMIXTRIM2    */
#define RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_unused                         (_RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_unused << 9)     /**< Shifted mode unused for RAC_LNAMIXTRIM2     */
#define RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_950m                      (_RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_950m << 9)  /**< Shifted mode ncas_950m for RAC_LNAMIXTRIM2  */
#define RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_900m                      (_RAC_LNAMIXTRIM2_LNAMIXNCAS2ADJ_ncas_900m << 9)  /**< Shifted mode ncas_900m for RAC_LNAMIXTRIM2  */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_SHIFT                         11                                                /**< Shift value for RAC_LNAMIXPCAS2ADJ          */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_MASK                          0x1800UL                                          /**< Bit mask for RAC_LNAMIXPCAS2ADJ             */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_DEFAULT                       0x00000002UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM2            */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_250m                     0x00000000UL                                      /**< Mode pcas_250m for RAC_LNAMIXTRIM2          */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_unused                        0x00000001UL                                      /**< Mode unused for RAC_LNAMIXTRIM2             */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_300m                     0x00000002UL                                      /**< Mode pcas_300m for RAC_LNAMIXTRIM2          */
#define _RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_350m                     0x00000003UL                                      /**< Mode pcas_350m for RAC_LNAMIXTRIM2          */
#define RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_DEFAULT                        (_RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_DEFAULT << 11)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM2    */
#define RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_250m                      (_RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_250m << 11) /**< Shifted mode pcas_250m for RAC_LNAMIXTRIM2  */
#define RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_unused                         (_RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_unused << 11)    /**< Shifted mode unused for RAC_LNAMIXTRIM2     */
#define RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_300m                      (_RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_300m << 11) /**< Shifted mode pcas_300m for RAC_LNAMIXTRIM2  */
#define RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_350m                      (_RAC_LNAMIXTRIM2_LNAMIXPCAS2ADJ_pcas_350m << 11) /**< Shifted mode pcas_350m for RAC_LNAMIXTRIM2  */
#define _RAC_LNAMIXTRIM2_LNAMIXVOUT2ADJ_SHIFT                         13                                                /**< Shift value for RAC_LNAMIXVOUT2ADJ          */
#define _RAC_LNAMIXTRIM2_LNAMIXVOUT2ADJ_MASK                          0x1E000UL                                         /**< Bit mask for RAC_LNAMIXVOUT2ADJ             */
#define _RAC_LNAMIXTRIM2_LNAMIXVOUT2ADJ_DEFAULT                       0x00000008UL                                      /**< Mode DEFAULT for RAC_LNAMIXTRIM2            */
#define RAC_LNAMIXTRIM2_LNAMIXVOUT2ADJ_DEFAULT                        (_RAC_LNAMIXTRIM2_LNAMIXVOUT2ADJ_DEFAULT << 13)   /**< Shifted mode DEFAULT for RAC_LNAMIXTRIM2    */

/* Bit fields for RAC LNAMIXCAL */
#define _RAC_LNAMIXCAL_RESETVALUE                                     0x000003F0UL                                      /**< Default value for RAC_LNAMIXCAL             */
#define _RAC_LNAMIXCAL_MASK                                           0x000003FFUL                                      /**< Mask for RAC_LNAMIXCAL                      */
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
#define RAC_LNAMIXCAL_LNAMIXENIRCAL1                                  (0x1UL << 2)                                      /**< LNAMIXENIRCAL1                              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL1_SHIFT                           2                                                 /**< Shift value for RAC_LNAMIXENIRCAL1          */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL1_MASK                            0x4UL                                             /**< Bit mask for RAC_LNAMIXENIRCAL1             */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL1_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL1_disable                         0x00000000UL                                      /**< Mode disable for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL1_enable                          0x00000001UL                                      /**< Mode enable for RAC_LNAMIXCAL               */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL1_DEFAULT                          (_RAC_LNAMIXCAL_LNAMIXENIRCAL1_DEFAULT << 2)      /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL1_disable                          (_RAC_LNAMIXCAL_LNAMIXENIRCAL1_disable << 2)      /**< Shifted mode disable for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL1_enable                           (_RAC_LNAMIXCAL_LNAMIXENIRCAL1_enable << 2)       /**< Shifted mode enable for RAC_LNAMIXCAL       */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL2                                  (0x1UL << 3)                                      /**< LNAMIXENIRCAL2                              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL2_SHIFT                           3                                                 /**< Shift value for RAC_LNAMIXENIRCAL2          */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL2_MASK                            0x8UL                                             /**< Bit mask for RAC_LNAMIXENIRCAL2             */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL2_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL2_disable                         0x00000000UL                                      /**< Mode disable for RAC_LNAMIXCAL              */
#define _RAC_LNAMIXCAL_LNAMIXENIRCAL2_enable                          0x00000001UL                                      /**< Mode enable for RAC_LNAMIXCAL               */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL2_DEFAULT                          (_RAC_LNAMIXCAL_LNAMIXENIRCAL2_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL2_disable                          (_RAC_LNAMIXCAL_LNAMIXENIRCAL2_disable << 3)      /**< Shifted mode disable for RAC_LNAMIXCAL      */
#define RAC_LNAMIXCAL_LNAMIXENIRCAL2_enable                           (_RAC_LNAMIXCAL_LNAMIXENIRCAL2_enable << 3)       /**< Shifted mode enable for RAC_LNAMIXCAL       */
#define _RAC_LNAMIXCAL_LNAMIXIRCAL1AMP_SHIFT                          4                                                 /**< Shift value for RAC_LNAMIXIRCAL1AMP         */
#define _RAC_LNAMIXCAL_LNAMIXIRCAL1AMP_MASK                           0x70UL                                            /**< Bit mask for RAC_LNAMIXIRCAL1AMP            */
#define _RAC_LNAMIXCAL_LNAMIXIRCAL1AMP_DEFAULT                        0x00000007UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define RAC_LNAMIXCAL_LNAMIXIRCAL1AMP_DEFAULT                         (_RAC_LNAMIXCAL_LNAMIXIRCAL1AMP_DEFAULT << 4)     /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */
#define _RAC_LNAMIXCAL_LNAMIXIRCAL2AMP_SHIFT                          7                                                 /**< Shift value for RAC_LNAMIXIRCAL2AMP         */
#define _RAC_LNAMIXCAL_LNAMIXIRCAL2AMP_MASK                           0x380UL                                           /**< Bit mask for RAC_LNAMIXIRCAL2AMP            */
#define _RAC_LNAMIXCAL_LNAMIXIRCAL2AMP_DEFAULT                        0x00000007UL                                      /**< Mode DEFAULT for RAC_LNAMIXCAL              */
#define RAC_LNAMIXCAL_LNAMIXIRCAL2AMP_DEFAULT                         (_RAC_LNAMIXCAL_LNAMIXIRCAL2AMP_DEFAULT << 7)     /**< Shifted mode DEFAULT for RAC_LNAMIXCAL      */

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
#define _RAC_PATRIM0_RESETVALUE                                       0x20088D93UL                                         /**< Default value for RAC_PATRIM0               */
#define _RAC_PATRIM0_MASK                                             0x3FFFFFFFUL                                         /**< Mask for RAC_PATRIM0                        */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_SHIFT                     0                                                    /**< Shift value for RAC_PATRIMDRVREGIBCORE0DBM  */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_MASK                      0x3UL                                                /**< Bit mask for RAC_PATRIMDRVREGIBCORE0DBM     */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_DEFAULT                   0x00000003UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_4u                      0x00000000UL                                         /**< Mode i_4u for RAC_PATRIM0                   */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_5u                      0x00000001UL                                         /**< Mode i_5u for RAC_PATRIM0                   */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_6u                      0x00000002UL                                         /**< Mode i_6u for RAC_PATRIM0                   */
#define _RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_7u                      0x00000003UL                                         /**< Mode i_7u for RAC_PATRIM0                   */
#define RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_DEFAULT                    (_RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_4u                       (_RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_4u << 0)      /**< Shifted mode i_4u for RAC_PATRIM0           */
#define RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_5u                       (_RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_5u << 0)      /**< Shifted mode i_5u for RAC_PATRIM0           */
#define RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_6u                       (_RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_6u << 0)      /**< Shifted mode i_6u for RAC_PATRIM0           */
#define RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_7u                       (_RAC_PATRIM0_PATRIMDRVREGIBCORE0DBM_i_7u << 0)      /**< Shifted mode i_7u for RAC_PATRIM0           */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_SHIFT                     2                                                    /**< Shift value for RAC_PATRIMDRVREGIBNDIO0DBM  */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_MASK                      0x3CUL                                               /**< Bit mask for RAC_PATRIMDRVREGIBNDIO0DBM     */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_DEFAULT                   0x00000004UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p09                 0x00000000UL                                         /**< Mode vreg_1p09 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p13                 0x00000001UL                                         /**< Mode vreg_1p13 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p16                 0x00000002UL                                         /**< Mode vreg_1p16 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p20                 0x00000003UL                                         /**< Mode vreg_1p20 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p23                 0x00000004UL                                         /**< Mode vreg_1p23 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p25                 0x00000005UL                                         /**< Mode vreg_1p25 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p28                 0x00000006UL                                         /**< Mode vreg_1p28 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p31                 0x00000007UL                                         /**< Mode vreg_1p31 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p33                 0x00000008UL                                         /**< Mode vreg_1p33 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p36                 0x00000009UL                                         /**< Mode vreg_1p36 for RAC_PATRIM0              */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_10                     0x0000000AUL                                         /**< Mode NA_10 for RAC_PATRIM0                  */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_11                     0x0000000BUL                                         /**< Mode NA_11 for RAC_PATRIM0                  */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_12                     0x0000000CUL                                         /**< Mode NA_12 for RAC_PATRIM0                  */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_13                     0x0000000DUL                                         /**< Mode NA_13 for RAC_PATRIM0                  */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_14                     0x0000000EUL                                         /**< Mode NA_14 for RAC_PATRIM0                  */
#define _RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_15                     0x0000000FUL                                         /**< Mode NA_15 for RAC_PATRIM0                  */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_DEFAULT                    (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_DEFAULT << 2)   /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p09                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p09 << 2) /**< Shifted mode vreg_1p09 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p13                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p13 << 2) /**< Shifted mode vreg_1p13 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p16                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p16 << 2) /**< Shifted mode vreg_1p16 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p20                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p20 << 2) /**< Shifted mode vreg_1p20 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p23                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p23 << 2) /**< Shifted mode vreg_1p23 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p25                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p25 << 2) /**< Shifted mode vreg_1p25 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p28                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p28 << 2) /**< Shifted mode vreg_1p28 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p31                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p31 << 2) /**< Shifted mode vreg_1p31 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p33                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p33 << 2) /**< Shifted mode vreg_1p33 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p36                  (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_vreg_1p36 << 2) /**< Shifted mode vreg_1p36 for RAC_PATRIM0      */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_10                      (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_10 << 2)     /**< Shifted mode NA_10 for RAC_PATRIM0          */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_11                      (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_11 << 2)     /**< Shifted mode NA_11 for RAC_PATRIM0          */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_12                      (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_12 << 2)     /**< Shifted mode NA_12 for RAC_PATRIM0          */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_13                      (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_13 << 2)     /**< Shifted mode NA_13 for RAC_PATRIM0          */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_14                      (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_14 << 2)     /**< Shifted mode NA_14 for RAC_PATRIM0          */
#define RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_15                      (_RAC_PATRIM0_PATRIMDRVREGIBNDIO0DBM_NA_15 << 2)     /**< Shifted mode NA_15 for RAC_PATRIM0          */
#define RAC_PATRIM0_PATRIMDRVREGPSR0DBM                               (0x1UL << 6)                                         /**< PATRIMDRVREGPSR0DBM                         */
#define _RAC_PATRIM0_PATRIMDRVREGPSR0DBM_SHIFT                        6                                                    /**< Shift value for RAC_PATRIMDRVREGPSR0DBM     */
#define _RAC_PATRIM0_PATRIMDRVREGPSR0DBM_MASK                         0x40UL                                               /**< Bit mask for RAC_PATRIMDRVREGPSR0DBM        */
#define _RAC_PATRIM0_PATRIMDRVREGPSR0DBM_DEFAULT                      0x00000000UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMDRVREGPSR0DBM_disable                      0x00000000UL                                         /**< Mode disable for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMDRVREGPSR0DBM_enable                       0x00000001UL                                         /**< Mode enable for RAC_PATRIM0                 */
#define RAC_PATRIM0_PATRIMDRVREGPSR0DBM_DEFAULT                       (_RAC_PATRIM0_PATRIMDRVREGPSR0DBM_DEFAULT << 6)      /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMDRVREGPSR0DBM_disable                       (_RAC_PATRIM0_PATRIMDRVREGPSR0DBM_disable << 6)      /**< Shifted mode disable for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMDRVREGPSR0DBM_enable                        (_RAC_PATRIM0_PATRIMDRVREGPSR0DBM_enable << 6)       /**< Shifted mode enable for RAC_PATRIM0         */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_SHIFT                         7                                                    /**< Shift value for RAC_PATRIMDRVSLICE0DBM      */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_MASK                          0x180UL                                              /**< Bit mask for RAC_PATRIMDRVSLICE0DBM         */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_DEFAULT                       0x00000003UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_0_slice                    0x00000000UL                                         /**< Mode on_0_slice for RAC_PATRIM0             */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_1_slice                    0x00000001UL                                         /**< Mode on_1_slice for RAC_PATRIM0             */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_2_slice                    0x00000002UL                                         /**< Mode on_2_slice for RAC_PATRIM0             */
#define _RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_3_slice                    0x00000003UL                                         /**< Mode on_3_slice for RAC_PATRIM0             */
#define RAC_PATRIM0_PATRIMDRVSLICE0DBM_DEFAULT                        (_RAC_PATRIM0_PATRIMDRVSLICE0DBM_DEFAULT << 7)       /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_0_slice                     (_RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_0_slice << 7)    /**< Shifted mode on_0_slice for RAC_PATRIM0     */
#define RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_1_slice                     (_RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_1_slice << 7)    /**< Shifted mode on_1_slice for RAC_PATRIM0     */
#define RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_2_slice                     (_RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_2_slice << 7)    /**< Shifted mode on_2_slice for RAC_PATRIM0     */
#define RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_3_slice                     (_RAC_PATRIM0_PATRIMDRVSLICE0DBM_on_3_slice << 7)    /**< Shifted mode on_3_slice for RAC_PATRIM0     */
#define _RAC_PATRIM0_PATRIMFB0DBM_SHIFT                               9                                                    /**< Shift value for RAC_PATRIMFB0DBM            */
#define _RAC_PATRIM0_PATRIMFB0DBM_MASK                                0x1E00UL                                             /**< Bit mask for RAC_PATRIMFB0DBM               */
#define _RAC_PATRIM0_PATRIMFB0DBM_DEFAULT                             0x00000006UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p475                         0x00000000UL                                         /**< Mode vo_vi_0p475 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p500                         0x00000001UL                                         /**< Mode vo_vi_0p500 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p525                         0x00000002UL                                         /**< Mode vo_vi_0p525 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p550                         0x00000003UL                                         /**< Mode vo_vi_0p550 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p575                         0x00000004UL                                         /**< Mode vo_vi_0p575 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p600                         0x00000005UL                                         /**< Mode vo_vi_0p600 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p625                         0x00000006UL                                         /**< Mode vo_vi_0p625 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p650                         0x00000007UL                                         /**< Mode vo_vi_0p650 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p675                         0x00000008UL                                         /**< Mode vo_vi_0p675 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p700                         0x00000009UL                                         /**< Mode vo_vi_0p700 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p725                         0x0000000AUL                                         /**< Mode vo_vi_0p725 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p750                         0x0000000BUL                                         /**< Mode vo_vi_0p750 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p775                         0x0000000CUL                                         /**< Mode vo_vi_0p775 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p80                          0x0000000DUL                                         /**< Mode vo_vi_0p80 for RAC_PATRIM0             */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p825                         0x0000000EUL                                         /**< Mode vo_vi_0p825 for RAC_PATRIM0            */
#define _RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p85                          0x0000000FUL                                         /**< Mode vo_vi_0p85 for RAC_PATRIM0             */
#define RAC_PATRIM0_PATRIMFB0DBM_DEFAULT                              (_RAC_PATRIM0_PATRIMFB0DBM_DEFAULT << 9)             /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p475                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p475 << 9)         /**< Shifted mode vo_vi_0p475 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p500                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p500 << 9)         /**< Shifted mode vo_vi_0p500 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p525                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p525 << 9)         /**< Shifted mode vo_vi_0p525 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p550                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p550 << 9)         /**< Shifted mode vo_vi_0p550 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p575                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p575 << 9)         /**< Shifted mode vo_vi_0p575 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p600                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p600 << 9)         /**< Shifted mode vo_vi_0p600 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p625                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p625 << 9)         /**< Shifted mode vo_vi_0p625 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p650                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p650 << 9)         /**< Shifted mode vo_vi_0p650 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p675                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p675 << 9)         /**< Shifted mode vo_vi_0p675 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p700                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p700 << 9)         /**< Shifted mode vo_vi_0p700 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p725                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p725 << 9)         /**< Shifted mode vo_vi_0p725 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p750                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p750 << 9)         /**< Shifted mode vo_vi_0p750 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p775                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p775 << 9)         /**< Shifted mode vo_vi_0p775 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p80                           (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p80 << 9)          /**< Shifted mode vo_vi_0p80 for RAC_PATRIM0     */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p825                          (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p825 << 9)         /**< Shifted mode vo_vi_0p825 for RAC_PATRIM0    */
#define RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p85                           (_RAC_PATRIM0_PATRIMFB0DBM_vo_vi_0p85 << 9)          /**< Shifted mode vo_vi_0p85 for RAC_PATRIM0     */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_SHIFT                          13                                                   /**< Shift value for RAC_PATRIMPABIASN0DBM       */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_MASK                           0x1E000UL                                            /**< Bit mask for RAC_PATRIMPABIASN0DBM          */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_DEFAULT                        0x00000004UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_450m                         0x00000000UL                                         /**< Mode v_450m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_462p5m                       0x00000001UL                                         /**< Mode v_462p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_475m                         0x00000002UL                                         /**< Mode v_475m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_487p5m                       0x00000003UL                                         /**< Mode v_487p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_500m                         0x00000004UL                                         /**< Mode v_500m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_512p5m                       0x00000005UL                                         /**< Mode v_512p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_525m                         0x00000006UL                                         /**< Mode v_525m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_537p5m                       0x00000007UL                                         /**< Mode v_537p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_550m                         0x00000008UL                                         /**< Mode v_550m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_562p5m                       0x00000009UL                                         /**< Mode v_562p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_575m                         0x0000000AUL                                         /**< Mode v_575m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_587p5m                       0x0000000BUL                                         /**< Mode v_587p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_600m                         0x0000000CUL                                         /**< Mode v_600m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_612p5m                       0x0000000DUL                                         /**< Mode v_612p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_625m                         0x0000000EUL                                         /**< Mode v_625m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASN0DBM_v_637p5m                       0x0000000FUL                                         /**< Mode v_637p5m for RAC_PATRIM0               */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_DEFAULT                         (_RAC_PATRIM0_PATRIMPABIASN0DBM_DEFAULT << 13)       /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_450m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_450m << 13)        /**< Shifted mode v_450m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_462p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_462p5m << 13)      /**< Shifted mode v_462p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_475m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_475m << 13)        /**< Shifted mode v_475m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_487p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_487p5m << 13)      /**< Shifted mode v_487p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_500m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_500m << 13)        /**< Shifted mode v_500m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_512p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_512p5m << 13)      /**< Shifted mode v_512p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_525m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_525m << 13)        /**< Shifted mode v_525m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_537p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_537p5m << 13)      /**< Shifted mode v_537p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_550m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_550m << 13)        /**< Shifted mode v_550m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_562p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_562p5m << 13)      /**< Shifted mode v_562p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_575m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_575m << 13)        /**< Shifted mode v_575m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_587p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_587p5m << 13)      /**< Shifted mode v_587p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_600m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_600m << 13)        /**< Shifted mode v_600m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_612p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_612p5m << 13)      /**< Shifted mode v_612p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_625m                          (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_625m << 13)        /**< Shifted mode v_625m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASN0DBM_v_637p5m                        (_RAC_PATRIM0_PATRIMPABIASN0DBM_v_637p5m << 13)      /**< Shifted mode v_637p5m for RAC_PATRIM0       */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_SHIFT                          17                                                   /**< Shift value for RAC_PATRIMPABIASP0DBM       */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_MASK                           0x1E0000UL                                           /**< Bit mask for RAC_PATRIMPABIASP0DBM          */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_DEFAULT                        0x00000004UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_450m                         0x00000000UL                                         /**< Mode v_450m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_462p5m                       0x00000001UL                                         /**< Mode v_462p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_475m                         0x00000002UL                                         /**< Mode v_475m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_487p5m                       0x00000003UL                                         /**< Mode v_487p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_500m                         0x00000004UL                                         /**< Mode v_500m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_512p5m                       0x00000005UL                                         /**< Mode v_512p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_525m                         0x00000006UL                                         /**< Mode v_525m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_537p5m                       0x00000007UL                                         /**< Mode v_537p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_550m                         0x00000008UL                                         /**< Mode v_550m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_562p5m                       0x00000009UL                                         /**< Mode v_562p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_575m                         0x0000000AUL                                         /**< Mode v_575m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_587p5m                       0x0000000BUL                                         /**< Mode v_587p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_600m                         0x0000000CUL                                         /**< Mode v_600m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_612p5m                       0x0000000DUL                                         /**< Mode v_612p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_625m                         0x0000000EUL                                         /**< Mode v_625m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMPABIASP0DBM_v_637p5m                       0x0000000FUL                                         /**< Mode v_637p5m for RAC_PATRIM0               */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_DEFAULT                         (_RAC_PATRIM0_PATRIMPABIASP0DBM_DEFAULT << 17)       /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_450m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_450m << 17)        /**< Shifted mode v_450m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_462p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_462p5m << 17)      /**< Shifted mode v_462p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_475m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_475m << 17)        /**< Shifted mode v_475m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_487p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_487p5m << 17)      /**< Shifted mode v_487p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_500m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_500m << 17)        /**< Shifted mode v_500m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_512p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_512p5m << 17)      /**< Shifted mode v_512p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_525m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_525m << 17)        /**< Shifted mode v_525m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_537p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_537p5m << 17)      /**< Shifted mode v_537p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_550m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_550m << 17)        /**< Shifted mode v_550m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_562p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_562p5m << 17)      /**< Shifted mode v_562p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_575m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_575m << 17)        /**< Shifted mode v_575m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_587p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_587p5m << 17)      /**< Shifted mode v_587p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_600m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_600m << 17)        /**< Shifted mode v_600m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_612p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_612p5m << 17)      /**< Shifted mode v_612p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_625m                          (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_625m << 17)        /**< Shifted mode v_625m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMPABIASP0DBM_v_637p5m                        (_RAC_PATRIM0_PATRIMPABIASP0DBM_v_637p5m << 17)      /**< Shifted mode v_637p5m for RAC_PATRIM0       */
#define _RAC_PATRIM0_PATRIMPASLICE0DBM_SHIFT                          21                                                   /**< Shift value for RAC_PATRIMPASLICE0DBM       */
#define _RAC_PATRIM0_PATRIMPASLICE0DBM_MASK                           0x7E00000UL                                          /**< Bit mask for RAC_PATRIMPASLICE0DBM          */
#define _RAC_PATRIM0_PATRIMPASLICE0DBM_DEFAULT                        0x00000000UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMPASLICE0DBM_on_slice_0                     0x00000000UL                                         /**< Mode on_slice_0 for RAC_PATRIM0             */
#define _RAC_PATRIM0_PATRIMPASLICE0DBM_on_slice_63                    0x0000003FUL                                         /**< Mode on_slice_63 for RAC_PATRIM0            */
#define RAC_PATRIM0_PATRIMPASLICE0DBM_DEFAULT                         (_RAC_PATRIM0_PATRIMPASLICE0DBM_DEFAULT << 21)       /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMPASLICE0DBM_on_slice_0                      (_RAC_PATRIM0_PATRIMPASLICE0DBM_on_slice_0 << 21)    /**< Shifted mode on_slice_0 for RAC_PATRIM0     */
#define RAC_PATRIM0_PATRIMPASLICE0DBM_on_slice_63                     (_RAC_PATRIM0_PATRIMPASLICE0DBM_on_slice_63 << 21)   /**< Shifted mode on_slice_63 for RAC_PATRIM0    */
#define _RAC_PATRIM0_PATRIMVREF0DBM_SHIFT                             27                                                   /**< Shift value for RAC_PATRIMVREF0DBM          */
#define _RAC_PATRIM0_PATRIMVREF0DBM_MASK                              0x38000000UL                                         /**< Bit mask for RAC_PATRIMVREF0DBM             */
#define _RAC_PATRIM0_PATRIMVREF0DBM_DEFAULT                           0x00000004UL                                         /**< Mode DEFAULT for RAC_PATRIM0                */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_900m                            0x00000000UL                                         /**< Mode v_900m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_912p5m                          0x00000001UL                                         /**< Mode v_912p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_925m                            0x00000002UL                                         /**< Mode v_925m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_937p5m                          0x00000003UL                                         /**< Mode v_937p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_950m                            0x00000004UL                                         /**< Mode v_950m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_962p5m                          0x00000005UL                                         /**< Mode v_962p5m for RAC_PATRIM0               */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_975m                            0x00000006UL                                         /**< Mode v_975m for RAC_PATRIM0                 */
#define _RAC_PATRIM0_PATRIMVREF0DBM_v_987p5m                          0x00000007UL                                         /**< Mode v_987p5m for RAC_PATRIM0               */
#define RAC_PATRIM0_PATRIMVREF0DBM_DEFAULT                            (_RAC_PATRIM0_PATRIMVREF0DBM_DEFAULT << 27)          /**< Shifted mode DEFAULT for RAC_PATRIM0        */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_900m                             (_RAC_PATRIM0_PATRIMVREF0DBM_v_900m << 27)           /**< Shifted mode v_900m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_912p5m                           (_RAC_PATRIM0_PATRIMVREF0DBM_v_912p5m << 27)         /**< Shifted mode v_912p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_925m                             (_RAC_PATRIM0_PATRIMVREF0DBM_v_925m << 27)           /**< Shifted mode v_925m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_937p5m                           (_RAC_PATRIM0_PATRIMVREF0DBM_v_937p5m << 27)         /**< Shifted mode v_937p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_950m                             (_RAC_PATRIM0_PATRIMVREF0DBM_v_950m << 27)           /**< Shifted mode v_950m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_962p5m                           (_RAC_PATRIM0_PATRIMVREF0DBM_v_962p5m << 27)         /**< Shifted mode v_962p5m for RAC_PATRIM0       */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_975m                             (_RAC_PATRIM0_PATRIMVREF0DBM_v_975m << 27)           /**< Shifted mode v_975m for RAC_PATRIM0         */
#define RAC_PATRIM0_PATRIMVREF0DBM_v_987p5m                           (_RAC_PATRIM0_PATRIMVREF0DBM_v_987p5m << 27)         /**< Shifted mode v_987p5m for RAC_PATRIM0       */

/* Bit fields for RAC PATRIM1 */
#define _RAC_PATRIM1_RESETVALUE                                       0x40000980UL                                             /**< Default value for RAC_PATRIM1               */
#define _RAC_PATRIM1_MASK                                             0x7FFFFFFFUL                                             /**< Mask for RAC_PATRIM1                        */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_SHIFT                         0                                                        /**< Shift value for RAC_PATRIM10DBMDUTYCYN      */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_MASK                          0x7UL                                                    /**< Bit mask for RAC_PATRIM10DBMDUTYCYN         */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_DEFAULT                       0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_0pct                       0x00000000UL                                             /**< Mode up_0pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_1pct                       0x00000001UL                                             /**< Mode up_1pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_2pct                       0x00000002UL                                             /**< Mode up_2pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_3pct                       0x00000003UL                                             /**< Mode up_3pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_4pct                       0x00000004UL                                             /**< Mode up_4pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_5pct                       0x00000005UL                                             /**< Mode up_5pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_6pct                       0x00000006UL                                             /**< Mode up_6pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYN_na                            0x00000007UL                                             /**< Mode na for RAC_PATRIM1                     */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_DEFAULT                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_DEFAULT << 0)           /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_0pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_0pct << 0)           /**< Shifted mode up_0pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_1pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_1pct << 0)           /**< Shifted mode up_1pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_2pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_2pct << 0)           /**< Shifted mode up_2pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_3pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_3pct << 0)           /**< Shifted mode up_3pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_4pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_4pct << 0)           /**< Shifted mode up_4pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_5pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_5pct << 0)           /**< Shifted mode up_5pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_6pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_up_6pct << 0)           /**< Shifted mode up_6pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYN_na                             (_RAC_PATRIM1_PATRIM10DBMDUTYCYN_na << 0)                /**< Shifted mode na for RAC_PATRIM1             */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_SHIFT                         3                                                        /**< Shift value for RAC_PATRIM10DBMDUTYCYP      */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_MASK                          0x38UL                                                   /**< Bit mask for RAC_PATRIM10DBMDUTYCYP         */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_DEFAULT                       0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_0pct                       0x00000000UL                                             /**< Mode dn_0pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_1pct                       0x00000001UL                                             /**< Mode dn_1pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_2pct                       0x00000002UL                                             /**< Mode dn_2pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_3pct                       0x00000003UL                                             /**< Mode dn_3pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_4pct                       0x00000004UL                                             /**< Mode dn_4pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_5pct                       0x00000005UL                                             /**< Mode dn_5pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_6pct                       0x00000006UL                                             /**< Mode dn_6pct for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM10DBMDUTYCYP_na                            0x00000007UL                                             /**< Mode na for RAC_PATRIM1                     */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_DEFAULT                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_DEFAULT << 3)           /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_0pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_0pct << 3)           /**< Shifted mode dn_0pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_1pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_1pct << 3)           /**< Shifted mode dn_1pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_2pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_2pct << 3)           /**< Shifted mode dn_2pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_3pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_3pct << 3)           /**< Shifted mode dn_3pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_4pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_4pct << 3)           /**< Shifted mode dn_4pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_5pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_5pct << 3)           /**< Shifted mode dn_5pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_6pct                        (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_dn_6pct << 3)           /**< Shifted mode dn_6pct for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM10DBMDUTYCYP_na                             (_RAC_PATRIM1_PATRIM10DBMDUTYCYP_na << 3)                /**< Shifted mode na for RAC_PATRIM1             */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_SHIFT                          6                                                        /**< Shift value for RAC_PATRIM20DBMPREDRV       */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_MASK                           0x1C0UL                                                  /**< Bit mask for RAC_PATRIM20DBMPREDRV          */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_DEFAULT                        0x00000006UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_137ps                    0x00000000UL                                             /**< Mode trise_137ps for RAC_PATRIM1            */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_127ps                    0x00000001UL                                             /**< Mode trise_127ps for RAC_PATRIM1            */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_117ps                    0x00000002UL                                             /**< Mode trise_117ps for RAC_PATRIM1            */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_110ps                    0x00000003UL                                             /**< Mode trise_110ps for RAC_PATRIM1            */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_75ps                     0x00000004UL                                             /**< Mode trise_75ps for RAC_PATRIM1             */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_73ps                     0x00000005UL                                             /**< Mode trise_73ps for RAC_PATRIM1             */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_71ps                     0x00000006UL                                             /**< Mode trise_71ps for RAC_PATRIM1             */
#define _RAC_PATRIM1_PATRIM20DBMPREDRV_trise_70ps                     0x00000007UL                                             /**< Mode trise_70ps for RAC_PATRIM1             */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_DEFAULT                         (_RAC_PATRIM1_PATRIM20DBMPREDRV_DEFAULT << 6)            /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_137ps                     (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_137ps << 6)        /**< Shifted mode trise_137ps for RAC_PATRIM1    */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_127ps                     (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_127ps << 6)        /**< Shifted mode trise_127ps for RAC_PATRIM1    */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_117ps                     (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_117ps << 6)        /**< Shifted mode trise_117ps for RAC_PATRIM1    */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_110ps                     (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_110ps << 6)        /**< Shifted mode trise_110ps for RAC_PATRIM1    */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_75ps                      (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_75ps << 6)         /**< Shifted mode trise_75ps for RAC_PATRIM1     */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_73ps                      (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_73ps << 6)         /**< Shifted mode trise_73ps for RAC_PATRIM1     */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_71ps                      (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_71ps << 6)         /**< Shifted mode trise_71ps for RAC_PATRIM1     */
#define RAC_PATRIM1_PATRIM20DBMPREDRV_trise_70ps                      (_RAC_PATRIM1_PATRIM20DBMPREDRV_trise_70ps << 6)         /**< Shifted mode trise_70ps for RAC_PATRIM1     */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_SHIFT                            9                                                        /**< Shift value for RAC_PATRIMANTSWBIAS         */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_MASK                             0x600UL                                                  /**< Bit mask for RAC_PATRIMANTSWBIAS            */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_DEFAULT                          0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd                        0x00000000UL                                             /**< Mode vb_at_vdd for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_mp6v                   0x00000001UL                                             /**< Mode vb_at_vdd_mp6v for RAC_PATRIM1         */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_m1p2v                  0x00000002UL                                             /**< Mode vb_at_vdd_m1p2v for RAC_PATRIM1        */
#define _RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_m1p8v                  0x00000003UL                                             /**< Mode vb_at_vdd_m1p8v for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMANTSWBIAS_DEFAULT                           (_RAC_PATRIM1_PATRIMANTSWBIAS_DEFAULT << 9)              /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd                         (_RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd << 9)            /**< Shifted mode vb_at_vdd for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_mp6v                    (_RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_mp6v << 9)       /**< Shifted mode vb_at_vdd_mp6v for RAC_PATRIM1 */
#define RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_m1p2v                   (_RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_m1p2v << 9)      /**< Shifted mode vb_at_vdd_m1p2v for RAC_PATRIM1*/
#define RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_m1p8v                   (_RAC_PATRIM1_PATRIMANTSWBIAS_vb_at_vdd_m1p8v << 9)      /**< Shifted mode vb_at_vdd_m1p8v for RAC_PATRIM1*/
#define RAC_PATRIM1_PATRIMBLEEDAUTOPREREG                             (0x1UL << 11)                                            /**< PATRIMBLEEDAUTOPREREG                       */
#define _RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_SHIFT                      11                                                       /**< Shift value for RAC_PATRIMBLEEDAUTOPREREG   */
#define _RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_MASK                       0x800UL                                                  /**< Bit mask for RAC_PATRIMBLEEDAUTOPREREG      */
#define _RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_DEFAULT                    0x00000001UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_not_automatic              0x00000000UL                                             /**< Mode not_automatic for RAC_PATRIM1          */
#define _RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_automatic                  0x00000001UL                                             /**< Mode automatic for RAC_PATRIM1              */
#define RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_DEFAULT                     (_RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_DEFAULT << 11)       /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_not_automatic               (_RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_not_automatic << 11) /**< Shifted mode not_automatic for RAC_PATRIM1  */
#define RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_automatic                   (_RAC_PATRIM1_PATRIMBLEEDAUTOPREREG_automatic << 11)     /**< Shifted mode automatic for RAC_PATRIM1      */
#define _RAC_PATRIM1_PATRIMCAPPAOUTM_SHIFT                            12                                                       /**< Shift value for RAC_PATRIMCAPPAOUTM         */
#define _RAC_PATRIM1_PATRIMCAPPAOUTM_MASK                             0xF000UL                                                 /**< Bit mask for RAC_PATRIMCAPPAOUTM            */
#define _RAC_PATRIM1_PATRIMCAPPAOUTM_DEFAULT                          0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define RAC_PATRIM1_PATRIMCAPPAOUTM_DEFAULT                           (_RAC_PATRIM1_PATRIMCAPPAOUTM_DEFAULT << 12)             /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define _RAC_PATRIM1_PATRIMCAPPAOUTP_SHIFT                            16                                                       /**< Shift value for RAC_PATRIMCAPPAOUTP         */
#define _RAC_PATRIM1_PATRIMCAPPAOUTP_MASK                             0xF0000UL                                                /**< Bit mask for RAC_PATRIMCAPPAOUTP            */
#define _RAC_PATRIM1_PATRIMCAPPAOUTP_DEFAULT                          0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define RAC_PATRIM1_PATRIMCAPPAOUTP_DEFAULT                           (_RAC_PATRIM1_PATRIMCAPPAOUTP_DEFAULT << 16)             /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define _RAC_PATRIM1_PATRIMCMGAIN_SHIFT                               20                                                       /**< Shift value for RAC_PATRIMCMGAIN            */
#define _RAC_PATRIM1_PATRIMCMGAIN_MASK                                0x300000UL                                               /**< Bit mask for RAC_PATRIMCMGAIN               */
#define _RAC_PATRIM1_PATRIMCMGAIN_DEFAULT                             0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define RAC_PATRIM1_PATRIMCMGAIN_DEFAULT                              (_RAC_PATRIM1_PATRIMCMGAIN_DEFAULT << 20)                /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define _RAC_PATRIM1_PATRIMDLY0_SHIFT                                 22                                                       /**< Shift value for RAC_PATRIMDLY0              */
#define _RAC_PATRIM1_PATRIMDLY0_MASK                                  0x1C00000UL                                              /**< Bit mask for RAC_PATRIMDLY0                 */
#define _RAC_PATRIM1_PATRIMDLY0_DEFAULT                               0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_0ps                              0x00000000UL                                             /**< Mode tdly_0ps for RAC_PATRIM1               */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_64ps                             0x00000001UL                                             /**< Mode tdly_64ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_65ps                             0x00000002UL                                             /**< Mode tdly_65ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_66ps                             0x00000003UL                                             /**< Mode tdly_66ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_68ps                             0x00000004UL                                             /**< Mode tdly_68ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_70ps                             0x00000005UL                                             /**< Mode tdly_70ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_75ps                             0x00000006UL                                             /**< Mode tdly_75ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY0_tdly_83ps                             0x00000007UL                                             /**< Mode tdly_83ps for RAC_PATRIM1              */
#define RAC_PATRIM1_PATRIMDLY0_DEFAULT                                (_RAC_PATRIM1_PATRIMDLY0_DEFAULT << 22)                  /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMDLY0_tdly_0ps                               (_RAC_PATRIM1_PATRIMDLY0_tdly_0ps << 22)                 /**< Shifted mode tdly_0ps for RAC_PATRIM1       */
#define RAC_PATRIM1_PATRIMDLY0_tdly_64ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_64ps << 22)                /**< Shifted mode tdly_64ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY0_tdly_65ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_65ps << 22)                /**< Shifted mode tdly_65ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY0_tdly_66ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_66ps << 22)                /**< Shifted mode tdly_66ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY0_tdly_68ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_68ps << 22)                /**< Shifted mode tdly_68ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY0_tdly_70ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_70ps << 22)                /**< Shifted mode tdly_70ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY0_tdly_75ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_75ps << 22)                /**< Shifted mode tdly_75ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY0_tdly_83ps                              (_RAC_PATRIM1_PATRIMDLY0_tdly_83ps << 22)                /**< Shifted mode tdly_83ps for RAC_PATRIM1      */
#define _RAC_PATRIM1_PATRIMDLY1_SHIFT                                 25                                                       /**< Shift value for RAC_PATRIMDLY1              */
#define _RAC_PATRIM1_PATRIMDLY1_MASK                                  0xE000000UL                                              /**< Bit mask for RAC_PATRIMDLY1                 */
#define _RAC_PATRIM1_PATRIMDLY1_DEFAULT                               0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_0ps                              0x00000000UL                                             /**< Mode tdly_0ps for RAC_PATRIM1               */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_64ps                             0x00000001UL                                             /**< Mode tdly_64ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_65ps                             0x00000002UL                                             /**< Mode tdly_65ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_66ps                             0x00000003UL                                             /**< Mode tdly_66ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_68ps                             0x00000004UL                                             /**< Mode tdly_68ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_70ps                             0x00000005UL                                             /**< Mode tdly_70ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_75ps                             0x00000006UL                                             /**< Mode tdly_75ps for RAC_PATRIM1              */
#define _RAC_PATRIM1_PATRIMDLY1_tdly_83ps                             0x00000007UL                                             /**< Mode tdly_83ps for RAC_PATRIM1              */
#define RAC_PATRIM1_PATRIMDLY1_DEFAULT                                (_RAC_PATRIM1_PATRIMDLY1_DEFAULT << 25)                  /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMDLY1_tdly_0ps                               (_RAC_PATRIM1_PATRIMDLY1_tdly_0ps << 25)                 /**< Shifted mode tdly_0ps for RAC_PATRIM1       */
#define RAC_PATRIM1_PATRIMDLY1_tdly_64ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_64ps << 25)                /**< Shifted mode tdly_64ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY1_tdly_65ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_65ps << 25)                /**< Shifted mode tdly_65ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY1_tdly_66ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_66ps << 25)                /**< Shifted mode tdly_66ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY1_tdly_68ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_68ps << 25)                /**< Shifted mode tdly_68ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY1_tdly_70ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_70ps << 25)                /**< Shifted mode tdly_70ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY1_tdly_75ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_75ps << 25)                /**< Shifted mode tdly_75ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMDLY1_tdly_83ps                              (_RAC_PATRIM1_PATRIMDLY1_tdly_83ps << 25)                /**< Shifted mode tdly_83ps for RAC_PATRIM1      */
#define RAC_PATRIM1_PATRIMFBKATTPDRVLDO                               (0x1UL << 28)                                            /**< PATRIMFBKATTPDRVLDO                         */
#define _RAC_PATRIM1_PATRIMFBKATTPDRVLDO_SHIFT                        28                                                       /**< Shift value for RAC_PATRIMFBKATTPDRVLDO     */
#define _RAC_PATRIM1_PATRIMFBKATTPDRVLDO_MASK                         0x10000000UL                                             /**< Bit mask for RAC_PATRIMFBKATTPDRVLDO        */
#define _RAC_PATRIM1_PATRIMFBKATTPDRVLDO_DEFAULT                      0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMFBKATTPDRVLDO_less_bw                      0x00000000UL                                             /**< Mode less_bw for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMFBKATTPDRVLDO_more_bw                      0x00000001UL                                             /**< Mode more_bw for RAC_PATRIM1                */
#define RAC_PATRIM1_PATRIMFBKATTPDRVLDO_DEFAULT                       (_RAC_PATRIM1_PATRIMFBKATTPDRVLDO_DEFAULT << 28)         /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMFBKATTPDRVLDO_less_bw                       (_RAC_PATRIM1_PATRIMFBKATTPDRVLDO_less_bw << 28)         /**< Shifted mode less_bw for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMFBKATTPDRVLDO_more_bw                       (_RAC_PATRIM1_PATRIMFBKATTPDRVLDO_more_bw << 28)         /**< Shifted mode more_bw for RAC_PATRIM1        */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_SHIFT                          29                                                       /**< Shift value for RAC_PATRIMIBIASMASTER       */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_MASK                           0x60000000UL                                             /**< Bit mask for RAC_PATRIMIBIASMASTER          */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_DEFAULT                        0x00000002UL                                             /**< Mode DEFAULT for RAC_PATRIM1                */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_45u                   0x00000000UL                                             /**< Mode Ibias_is_45u for RAC_PATRIM1           */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_47p5u                 0x00000001UL                                             /**< Mode Ibias_is_47p5u for RAC_PATRIM1         */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_50u                   0x00000002UL                                             /**< Mode Ibias_is_50u for RAC_PATRIM1           */
#define _RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_52p5u                 0x00000003UL                                             /**< Mode Ibias_is_52p5u for RAC_PATRIM1         */
#define RAC_PATRIM1_PATRIMIBIASMASTER_DEFAULT                         (_RAC_PATRIM1_PATRIMIBIASMASTER_DEFAULT << 29)           /**< Shifted mode DEFAULT for RAC_PATRIM1        */
#define RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_45u                    (_RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_45u << 29)      /**< Shifted mode Ibias_is_45u for RAC_PATRIM1   */
#define RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_47p5u                  (_RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_47p5u << 29)    /**< Shifted mode Ibias_is_47p5u for RAC_PATRIM1 */
#define RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_50u                    (_RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_50u << 29)      /**< Shifted mode Ibias_is_50u for RAC_PATRIM1   */
#define RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_52p5u                  (_RAC_PATRIM1_PATRIMIBIASMASTER_Ibias_is_52p5u << 29)    /**< Shifted mode Ibias_is_52p5u for RAC_PATRIM1 */

/* Bit fields for RAC PATRIM2 */
#define _RAC_PATRIM2_RESETVALUE                                       0x30C0F87AUL                                             /**< Default value for RAC_PATRIM2               */
#define _RAC_PATRIM2_MASK                                             0x7FFFFFFFUL                                             /**< Mask for RAC_PATRIM2                        */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_SHIFT                       0                                                        /**< Shift value for RAC_PATRIMLDOFBHVPDRVLDO    */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_MASK                        0x3UL                                                    /**< Bit mask for RAC_PATRIMLDOFBHVPDRVLDO       */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_DEFAULT                     0x00000002UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p22                   0x00000000UL                                             /**< Mode vreg_1p22 for RAC_PATRIM2              */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p28                   0x00000001UL                                             /**< Mode vreg_1p28 for RAC_PATRIM2              */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p35                   0x00000002UL                                             /**< Mode vreg_1p35 for RAC_PATRIM2              */
#define _RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p44                   0x00000003UL                                             /**< Mode vreg_1p44 for RAC_PATRIM2              */
#define RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_DEFAULT                      (_RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p22                    (_RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p22 << 0)       /**< Shifted mode vreg_1p22 for RAC_PATRIM2      */
#define RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p28                    (_RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p28 << 0)       /**< Shifted mode vreg_1p28 for RAC_PATRIM2      */
#define RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p35                    (_RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p35 << 0)       /**< Shifted mode vreg_1p35 for RAC_PATRIM2      */
#define RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p44                    (_RAC_PATRIM2_PATRIMLDOFBHVPDRVLDO_vreg_1p44 << 0)       /**< Shifted mode vreg_1p44 for RAC_PATRIM2      */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_SHIFT                        2                                                        /**< Shift value for RAC_PATRIMLDOFBHVPREREG     */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_MASK                         0x1CUL                                                   /**< Bit mask for RAC_PATRIMLDOFBHVPREREG        */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_DEFAULT                      0x00000006UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p678                   0x00000000UL                                             /**< Mode vreg_1p678 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p735                   0x00000001UL                                             /**< Mode vreg_1p735 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p801                   0x00000002UL                                             /**< Mode vreg_1p801 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p875                   0x00000003UL                                             /**< Mode vreg_1p875 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p00                    0x00000004UL                                             /**< Mode vreg_3p00 for RAC_PATRIM2              */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p14                    0x00000005UL                                             /**< Mode vreg_3p14 for RAC_PATRIM2              */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p3                     0x00000006UL                                             /**< Mode vreg_3p3 for RAC_PATRIM2               */
#define _RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p477                   0x00000007UL                                             /**< Mode vreg_3p477 for RAC_PATRIM2             */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_DEFAULT                       (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_DEFAULT << 2)          /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p678                    (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p678 << 2)       /**< Shifted mode vreg_1p678 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p735                    (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p735 << 2)       /**< Shifted mode vreg_1p735 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p801                    (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p801 << 2)       /**< Shifted mode vreg_1p801 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p875                    (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_1p875 << 2)       /**< Shifted mode vreg_1p875 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p00                     (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p00 << 2)        /**< Shifted mode vreg_3p00 for RAC_PATRIM2      */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p14                     (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p14 << 2)        /**< Shifted mode vreg_3p14 for RAC_PATRIM2      */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p3                      (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p3 << 2)         /**< Shifted mode vreg_3p3 for RAC_PATRIM2       */
#define RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p477                    (_RAC_PATRIM2_PATRIMLDOFBHVPREREG_vreg_3p477 << 2)       /**< Shifted mode vreg_3p477 for RAC_PATRIM2     */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_SHIFT                         5                                                        /**< Shift value for RAC_PATRIMLDOHVPDRVLDO      */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_MASK                          0xE0UL                                                   /**< Bit mask for RAC_PATRIMLDOHVPDRVLDO         */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_DEFAULT                       0x00000003UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p675                    0x00000000UL                                             /**< Mode vref_0p675 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p700                    0x00000001UL                                             /**< Mode vref_0p700 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p725                    0x00000002UL                                             /**< Mode vref_0p725 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p750                    0x00000003UL                                             /**< Mode vref_0p750 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p775                    0x00000004UL                                             /**< Mode vref_0p775 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p800                    0x00000005UL                                             /**< Mode vref_0p800 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p825                    0x00000006UL                                             /**< Mode vref_0p825 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p850                    0x00000007UL                                             /**< Mode vref_0p850 for RAC_PATRIM2             */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_DEFAULT                        (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p675                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p675 << 5)        /**< Shifted mode vref_0p675 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p700                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p700 << 5)        /**< Shifted mode vref_0p700 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p725                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p725 << 5)        /**< Shifted mode vref_0p725 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p750                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p750 << 5)        /**< Shifted mode vref_0p750 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p775                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p775 << 5)        /**< Shifted mode vref_0p775 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p800                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p800 << 5)        /**< Shifted mode vref_0p800 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p825                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p825 << 5)        /**< Shifted mode vref_0p825 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p850                     (_RAC_PATRIM2_PATRIMLDOHVPDRVLDO_vref_0p850 << 5)        /**< Shifted mode vref_0p850 for RAC_PATRIM2     */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_SHIFT                          8                                                        /**< Shift value for RAC_PATRIMLDOHVPREREG       */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_MASK                           0xF00UL                                                  /**< Bit mask for RAC_PATRIMLDOHVPREREG          */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_DEFAULT                        0x00000008UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p651                     0x00000000UL                                             /**< Mode vref_0p651 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p663                     0x00000001UL                                             /**< Mode vref_0p663 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p676                     0x00000002UL                                             /**< Mode vref_0p676 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p688                     0x00000003UL                                             /**< Mode vref_0p688 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p701                     0x00000004UL                                             /**< Mode vref_0p701 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p713                     0x00000005UL                                             /**< Mode vref_0p713 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p726                     0x00000006UL                                             /**< Mode vref_0p726 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p738                     0x00000007UL                                             /**< Mode vref_0p738 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p751                     0x00000008UL                                             /**< Mode vref_0p751 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p763                     0x00000009UL                                             /**< Mode vref_0p763 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p776                     0x0000000AUL                                             /**< Mode vref_0p776 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p788                     0x0000000BUL                                             /**< Mode vref_0p788 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p801                     0x0000000CUL                                             /**< Mode vref_0p801 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p813                     0x0000000DUL                                             /**< Mode vref_0p813 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p826                     0x0000000EUL                                             /**< Mode vref_0p826 for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p838                     0x0000000FUL                                             /**< Mode vref_0p838 for RAC_PATRIM2             */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_DEFAULT                         (_RAC_PATRIM2_PATRIMLDOHVPREREG_DEFAULT << 8)            /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p651                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p651 << 8)         /**< Shifted mode vref_0p651 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p663                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p663 << 8)         /**< Shifted mode vref_0p663 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p676                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p676 << 8)         /**< Shifted mode vref_0p676 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p688                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p688 << 8)         /**< Shifted mode vref_0p688 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p701                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p701 << 8)         /**< Shifted mode vref_0p701 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p713                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p713 << 8)         /**< Shifted mode vref_0p713 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p726                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p726 << 8)         /**< Shifted mode vref_0p726 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p738                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p738 << 8)         /**< Shifted mode vref_0p738 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p751                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p751 << 8)         /**< Shifted mode vref_0p751 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p763                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p763 << 8)         /**< Shifted mode vref_0p763 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p776                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p776 << 8)         /**< Shifted mode vref_0p776 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p788                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p788 << 8)         /**< Shifted mode vref_0p788 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p801                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p801 << 8)         /**< Shifted mode vref_0p801 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p813                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p813 << 8)         /**< Shifted mode vref_0p813 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p826                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p826 << 8)         /**< Shifted mode vref_0p826 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p838                      (_RAC_PATRIM2_PATRIMLDOHVPREREG_vref_0p838 << 8)         /**< Shifted mode vref_0p838 for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOPSRPDRVLDO                               (0x1UL << 12)                                            /**< PATRIMLDOPSRPDRVLDO                         */
#define _RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_SHIFT                        12                                                       /**< Shift value for RAC_PATRIMLDOPSRPDRVLDO     */
#define _RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_MASK                         0x1000UL                                                 /**< Bit mask for RAC_PATRIMLDOPSRPDRVLDO        */
#define _RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_DEFAULT                      0x00000001UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_low_psr                      0x00000000UL                                             /**< Mode low_psr for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_high_psr                     0x00000001UL                                             /**< Mode high_psr for RAC_PATRIM2               */
#define RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_DEFAULT                       (_RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_DEFAULT << 12)         /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_low_psr                       (_RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_low_psr << 12)         /**< Shifted mode low_psr for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_high_psr                      (_RAC_PATRIM2_PATRIMLDOPSRPDRVLDO_high_psr << 12)        /**< Shifted mode high_psr for RAC_PATRIM2       */
#define RAC_PATRIM2_PATRIMLDOPSRPREREG                                (0x1UL << 13)                                            /**< PATRIMLDOPSRPREREG                          */
#define _RAC_PATRIM2_PATRIMLDOPSRPREREG_SHIFT                         13                                                       /**< Shift value for RAC_PATRIMLDOPSRPREREG      */
#define _RAC_PATRIM2_PATRIMLDOPSRPREREG_MASK                          0x2000UL                                                 /**< Bit mask for RAC_PATRIMLDOPSRPREREG         */
#define _RAC_PATRIM2_PATRIMLDOPSRPREREG_DEFAULT                       0x00000001UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOPSRPREREG_low_psr                       0x00000000UL                                             /**< Mode low_psr for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOPSRPREREG_high_psr                      0x00000001UL                                             /**< Mode high_psr for RAC_PATRIM2               */
#define RAC_PATRIM2_PATRIMLDOPSRPREREG_DEFAULT                        (_RAC_PATRIM2_PATRIMLDOPSRPREREG_DEFAULT << 13)          /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOPSRPREREG_low_psr                        (_RAC_PATRIM2_PATRIMLDOPSRPREREG_low_psr << 13)          /**< Shifted mode low_psr for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOPSRPREREG_high_psr                       (_RAC_PATRIM2_PATRIMLDOPSRPREREG_high_psr << 13)         /**< Shifted mode high_psr for RAC_PATRIM2       */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_SHIFT                     14                                                       /**< Shift value for RAC_PATRIMLDOSLICESPDRVLDO  */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_MASK                      0xC000UL                                                 /**< Bit mask for RAC_PATRIMLDOSLICESPDRVLDO     */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_DEFAULT                   0x00000003UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_7p5mA               0x00000000UL                                             /**< Mode iload_7p5mA for RAC_PATRIM2            */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_15mA                0x00000001UL                                             /**< Mode iload_15mA for RAC_PATRIM2             */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_22p5mA              0x00000002UL                                             /**< Mode iload_22p5mA for RAC_PATRIM2           */
#define _RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_30mA                0x00000003UL                                             /**< Mode iload_30mA for RAC_PATRIM2             */
#define RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_DEFAULT                    (_RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_DEFAULT << 14)      /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_7p5mA                (_RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_7p5mA << 14)  /**< Shifted mode iload_7p5mA for RAC_PATRIM2    */
#define RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_15mA                 (_RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_15mA << 14)   /**< Shifted mode iload_15mA for RAC_PATRIM2     */
#define RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_22p5mA               (_RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_22p5mA << 14) /**< Shifted mode iload_22p5mA for RAC_PATRIM2   */
#define RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_30mA                 (_RAC_PATRIM2_PATRIMLDOSLICESPDRVLDO_iload_30mA << 14)   /**< Shifted mode iload_30mA for RAC_PATRIM2     */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_SHIFT                      16                                                       /**< Shift value for RAC_PATRIMLDOSLICESPREREG   */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_MASK                       0x30000UL                                                /**< Bit mask for RAC_PATRIMLDOSLICESPREREG      */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_DEFAULT                    0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare1                     0x00000000UL                                             /**< Mode spare1 for RAC_PATRIM2                 */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare2                     0x00000001UL                                             /**< Mode spare2 for RAC_PATRIM2                 */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare3                     0x00000002UL                                             /**< Mode spare3 for RAC_PATRIM2                 */
#define _RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare4                     0x00000003UL                                             /**< Mode spare4 for RAC_PATRIM2                 */
#define RAC_PATRIM2_PATRIMLDOSLICESPREREG_DEFAULT                     (_RAC_PATRIM2_PATRIMLDOSLICESPREREG_DEFAULT << 16)       /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare1                      (_RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare1 << 16)        /**< Shifted mode spare1 for RAC_PATRIM2         */
#define RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare2                      (_RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare2 << 16)        /**< Shifted mode spare2 for RAC_PATRIM2         */
#define RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare3                      (_RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare3 << 16)        /**< Shifted mode spare3 for RAC_PATRIM2         */
#define RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare4                      (_RAC_PATRIM2_PATRIMLDOSLICESPREREG_spare4 << 16)        /**< Shifted mode spare4 for RAC_PATRIM2         */
#define RAC_PATRIM2_PATRIMPADACGLITCH                                 (0x1UL << 18)                                            /**< PATRIMPADACGLITCH                           */
#define _RAC_PATRIM2_PATRIMPADACGLITCH_SHIFT                          18                                                       /**< Shift value for RAC_PATRIMPADACGLITCH       */
#define _RAC_PATRIM2_PATRIMPADACGLITCH_MASK                           0x40000UL                                                /**< Bit mask for RAC_PATRIMPADACGLITCH          */
#define _RAC_PATRIM2_PATRIMPADACGLITCH_DEFAULT                        0x00000000UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMPADACGLITCH_larger_glitch                  0x00000000UL                                             /**< Mode larger_glitch for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPADACGLITCH_smaller_glitch                 0x00000001UL                                             /**< Mode smaller_glitch for RAC_PATRIM2         */
#define RAC_PATRIM2_PATRIMPADACGLITCH_DEFAULT                         (_RAC_PATRIM2_PATRIMPADACGLITCH_DEFAULT << 18)           /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMPADACGLITCH_larger_glitch                   (_RAC_PATRIM2_PATRIMPADACGLITCH_larger_glitch << 18)     /**< Shifted mode larger_glitch for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPADACGLITCH_smaller_glitch                  (_RAC_PATRIM2_PATRIMPADACGLITCH_smaller_glitch << 18)    /**< Shifted mode smaller_glitch for RAC_PATRIM2 */
#define _RAC_PATRIM2_PATRIMNBIAS_SHIFT                                19                                                       /**< Shift value for RAC_PATRIMNBIAS             */
#define _RAC_PATRIM2_PATRIMNBIAS_MASK                                 0x780000UL                                               /**< Bit mask for RAC_PATRIMNBIAS                */
#define _RAC_PATRIM2_PATRIMNBIAS_DEFAULT                              0x00000008UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn104mv                       0x00000000UL                                             /**< Mode vnbias_dn104mv for RAC_PATRIM2         */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn91mv                        0x00000001UL                                             /**< Mode vnbias_dn91mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn78mv                        0x00000002UL                                             /**< Mode vnbias_dn78mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn65mv                        0x00000003UL                                             /**< Mode vnbias_dn65mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn52mv                        0x00000004UL                                             /**< Mode vnbias_dn52mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn39mv                        0x00000005UL                                             /**< Mode vnbias_dn39mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn26mv                        0x00000006UL                                             /**< Mode vnbias_dn26mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_dn13mv                        0x00000007UL                                             /**< Mode vnbias_dn13mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_default                       0x00000008UL                                             /**< Mode vnbias_default for RAC_PATRIM2         */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up13mv                        0x00000009UL                                             /**< Mode vnbias_up13mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up26mv                        0x0000000AUL                                             /**< Mode vnbias_up26mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up39mv                        0x0000000BUL                                             /**< Mode vnbias_up39mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up52mv                        0x0000000CUL                                             /**< Mode vnbias_up52mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up65mv                        0x0000000DUL                                             /**< Mode vnbias_up65mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up78mv                        0x0000000EUL                                             /**< Mode vnbias_up78mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMNBIAS_vnbias_up91mv                        0x0000000FUL                                             /**< Mode vnbias_up91mv for RAC_PATRIM2          */
#define RAC_PATRIM2_PATRIMNBIAS_DEFAULT                               (_RAC_PATRIM2_PATRIMNBIAS_DEFAULT << 19)                 /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn104mv                        (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn104mv << 19)          /**< Shifted mode vnbias_dn104mv for RAC_PATRIM2 */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn91mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn91mv << 19)           /**< Shifted mode vnbias_dn91mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn78mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn78mv << 19)           /**< Shifted mode vnbias_dn78mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn65mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn65mv << 19)           /**< Shifted mode vnbias_dn65mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn52mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn52mv << 19)           /**< Shifted mode vnbias_dn52mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn39mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn39mv << 19)           /**< Shifted mode vnbias_dn39mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn26mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn26mv << 19)           /**< Shifted mode vnbias_dn26mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_dn13mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_dn13mv << 19)           /**< Shifted mode vnbias_dn13mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_default                        (_RAC_PATRIM2_PATRIMNBIAS_vnbias_default << 19)          /**< Shifted mode vnbias_default for RAC_PATRIM2 */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up13mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up13mv << 19)           /**< Shifted mode vnbias_up13mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up26mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up26mv << 19)           /**< Shifted mode vnbias_up26mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up39mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up39mv << 19)           /**< Shifted mode vnbias_up39mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up52mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up52mv << 19)           /**< Shifted mode vnbias_up52mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up65mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up65mv << 19)           /**< Shifted mode vnbias_up65mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up78mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up78mv << 19)           /**< Shifted mode vnbias_up78mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMNBIAS_vnbias_up91mv                         (_RAC_PATRIM2_PATRIMNBIAS_vnbias_up91mv << 19)           /**< Shifted mode vnbias_up91mv for RAC_PATRIM2  */
#define _RAC_PATRIM2_PATRIMNCASC_SHIFT                                23                                                       /**< Shift value for RAC_PATRIMNCASC             */
#define _RAC_PATRIM2_PATRIMNCASC_MASK                                 0x1800000UL                                              /**< Bit mask for RAC_PATRIMNCASC                */
#define _RAC_PATRIM2_PATRIMNCASC_DEFAULT                              0x00000001UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMNCASC_ncbias_m50mv                         0x00000000UL                                             /**< Mode ncbias_m50mv for RAC_PATRIM2           */
#define _RAC_PATRIM2_PATRIMNCASC_ncbias_default                       0x00000001UL                                             /**< Mode ncbias_default for RAC_PATRIM2         */
#define _RAC_PATRIM2_PATRIMNCASC_ncbias_p50mv                         0x00000002UL                                             /**< Mode ncbias_p50mv for RAC_PATRIM2           */
#define _RAC_PATRIM2_PATRIMNCASC_ncbias_p100mv                        0x00000003UL                                             /**< Mode ncbias_p100mv for RAC_PATRIM2          */
#define RAC_PATRIM2_PATRIMNCASC_DEFAULT                               (_RAC_PATRIM2_PATRIMNCASC_DEFAULT << 23)                 /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMNCASC_ncbias_m50mv                          (_RAC_PATRIM2_PATRIMNCASC_ncbias_m50mv << 23)            /**< Shifted mode ncbias_m50mv for RAC_PATRIM2   */
#define RAC_PATRIM2_PATRIMNCASC_ncbias_default                        (_RAC_PATRIM2_PATRIMNCASC_ncbias_default << 23)          /**< Shifted mode ncbias_default for RAC_PATRIM2 */
#define RAC_PATRIM2_PATRIMNCASC_ncbias_p50mv                          (_RAC_PATRIM2_PATRIMNCASC_ncbias_p50mv << 23)            /**< Shifted mode ncbias_p50mv for RAC_PATRIM2   */
#define RAC_PATRIM2_PATRIMNCASC_ncbias_p100mv                         (_RAC_PATRIM2_PATRIMNCASC_ncbias_p100mv << 23)           /**< Shifted mode ncbias_p100mv for RAC_PATRIM2  */
#define _RAC_PATRIM2_PATRIMPBIAS_SHIFT                                25                                                       /**< Shift value for RAC_PATRIMPBIAS             */
#define _RAC_PATRIM2_PATRIMPBIAS_MASK                                 0x1E000000UL                                             /**< Bit mask for RAC_PATRIMPBIAS                */
#define _RAC_PATRIM2_PATRIMPBIAS_DEFAULT                              0x00000008UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up104mv                       0x00000000UL                                             /**< Mode vpbias_up104mv for RAC_PATRIM2         */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up91mv                        0x00000001UL                                             /**< Mode vpbias_up91mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up78mv                        0x00000002UL                                             /**< Mode vpbias_up78mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up65mv                        0x00000003UL                                             /**< Mode vpbias_up65mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up52mv                        0x00000004UL                                             /**< Mode vpbias_up52mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up39mv                        0x00000005UL                                             /**< Mode vpbias_up39mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up26mv                        0x00000006UL                                             /**< Mode vpbias_up26mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_up13mv                        0x00000007UL                                             /**< Mode vpbias_up13mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_default                       0x00000008UL                                             /**< Mode vpbias_default for RAC_PATRIM2         */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn13mv                        0x00000009UL                                             /**< Mode vpbias_dn13mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn26mv                        0x0000000AUL                                             /**< Mode vpbias_dn26mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn38mv                        0x0000000BUL                                             /**< Mode vpbias_dn38mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn52mv                        0x0000000CUL                                             /**< Mode vpbias_dn52mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn65mv                        0x0000000DUL                                             /**< Mode vpbias_dn65mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn78mv                        0x0000000EUL                                             /**< Mode vpbias_dn78mv for RAC_PATRIM2          */
#define _RAC_PATRIM2_PATRIMPBIAS_vpbias_dn91mv                        0x0000000FUL                                             /**< Mode vpbias_dn91mv for RAC_PATRIM2          */
#define RAC_PATRIM2_PATRIMPBIAS_DEFAULT                               (_RAC_PATRIM2_PATRIMPBIAS_DEFAULT << 25)                 /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up104mv                        (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up104mv << 25)          /**< Shifted mode vpbias_up104mv for RAC_PATRIM2 */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up91mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up91mv << 25)           /**< Shifted mode vpbias_up91mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up78mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up78mv << 25)           /**< Shifted mode vpbias_up78mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up65mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up65mv << 25)           /**< Shifted mode vpbias_up65mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up52mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up52mv << 25)           /**< Shifted mode vpbias_up52mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up39mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up39mv << 25)           /**< Shifted mode vpbias_up39mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up26mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up26mv << 25)           /**< Shifted mode vpbias_up26mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_up13mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_up13mv << 25)           /**< Shifted mode vpbias_up13mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_default                        (_RAC_PATRIM2_PATRIMPBIAS_vpbias_default << 25)          /**< Shifted mode vpbias_default for RAC_PATRIM2 */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn13mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn13mv << 25)           /**< Shifted mode vpbias_dn13mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn26mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn26mv << 25)           /**< Shifted mode vpbias_dn26mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn38mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn38mv << 25)           /**< Shifted mode vpbias_dn38mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn52mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn52mv << 25)           /**< Shifted mode vpbias_dn52mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn65mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn65mv << 25)           /**< Shifted mode vpbias_dn65mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn78mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn78mv << 25)           /**< Shifted mode vpbias_dn78mv for RAC_PATRIM2  */
#define RAC_PATRIM2_PATRIMPBIAS_vpbias_dn91mv                         (_RAC_PATRIM2_PATRIMPBIAS_vpbias_dn91mv << 25)           /**< Shifted mode vpbias_dn91mv for RAC_PATRIM2  */
#define _RAC_PATRIM2_PATRIMPCASC_SHIFT                                29                                                       /**< Shift value for RAC_PATRIMPCASC             */
#define _RAC_PATRIM2_PATRIMPCASC_MASK                                 0x60000000UL                                             /**< Bit mask for RAC_PATRIMPCASC                */
#define _RAC_PATRIM2_PATRIMPCASC_DEFAULT                              0x00000001UL                                             /**< Mode DEFAULT for RAC_PATRIM2                */
#define _RAC_PATRIM2_PATRIMPCASC_pcbias_p50mv                         0x00000000UL                                             /**< Mode pcbias_p50mv for RAC_PATRIM2           */
#define _RAC_PATRIM2_PATRIMPCASC_pcbias_default                       0x00000001UL                                             /**< Mode pcbias_default for RAC_PATRIM2         */
#define _RAC_PATRIM2_PATRIMPCASC_pcbias_m50mv                         0x00000002UL                                             /**< Mode pcbias_m50mv for RAC_PATRIM2           */
#define _RAC_PATRIM2_PATRIMPCASC_pcbias_m100mv                        0x00000003UL                                             /**< Mode pcbias_m100mv for RAC_PATRIM2          */
#define RAC_PATRIM2_PATRIMPCASC_DEFAULT                               (_RAC_PATRIM2_PATRIMPCASC_DEFAULT << 29)                 /**< Shifted mode DEFAULT for RAC_PATRIM2        */
#define RAC_PATRIM2_PATRIMPCASC_pcbias_p50mv                          (_RAC_PATRIM2_PATRIMPCASC_pcbias_p50mv << 29)            /**< Shifted mode pcbias_p50mv for RAC_PATRIM2   */
#define RAC_PATRIM2_PATRIMPCASC_pcbias_default                        (_RAC_PATRIM2_PATRIMPCASC_pcbias_default << 29)          /**< Shifted mode pcbias_default for RAC_PATRIM2 */
#define RAC_PATRIM2_PATRIMPCASC_pcbias_m50mv                          (_RAC_PATRIM2_PATRIMPCASC_pcbias_m50mv << 29)            /**< Shifted mode pcbias_m50mv for RAC_PATRIM2   */
#define RAC_PATRIM2_PATRIMPCASC_pcbias_m100mv                         (_RAC_PATRIM2_PATRIMPCASC_pcbias_m100mv << 29)           /**< Shifted mode pcbias_m100mv for RAC_PATRIM2  */

/* Bit fields for RAC PACTRL */
#define _RAC_PACTRL_RESETVALUE                                        0x00000000UL                                       /**< Default value for RAC_PACTRL                */
#define _RAC_PACTRL_MASK                                              0x00FF07FFUL                                       /**< Mask for RAC_PACTRL                         */
#define RAC_PACTRL_PAEN10DBMVMID                                      (0x1UL << 0)                                       /**< PAEN10DBMVMID                               */
#define _RAC_PACTRL_PAEN10DBMVMID_SHIFT                               0                                                  /**< Shift value for RAC_PAEN10DBMVMID           */
#define _RAC_PACTRL_PAEN10DBMVMID_MASK                                0x1UL                                              /**< Bit mask for RAC_PAEN10DBMVMID              */
#define _RAC_PACTRL_PAEN10DBMVMID_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAEN10DBMVMID_disable                             0x00000000UL                                       /**< Mode disable for RAC_PACTRL                 */
#define _RAC_PACTRL_PAEN10DBMVMID_enable                              0x00000001UL                                       /**< Mode enable for RAC_PACTRL                  */
#define RAC_PACTRL_PAEN10DBMVMID_DEFAULT                              (_RAC_PACTRL_PAEN10DBMVMID_DEFAULT << 0)           /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAEN10DBMVMID_disable                              (_RAC_PACTRL_PAEN10DBMVMID_disable << 0)           /**< Shifted mode disable for RAC_PACTRL         */
#define RAC_PACTRL_PAEN10DBMVMID_enable                               (_RAC_PACTRL_PAEN10DBMVMID_enable << 0)            /**< Shifted mode enable for RAC_PACTRL          */
#define RAC_PACTRL_PAEN20DBMVMID                                      (0x1UL << 1)                                       /**< PAEN20DBMVMID                               */
#define _RAC_PACTRL_PAEN20DBMVMID_SHIFT                               1                                                  /**< Shift value for RAC_PAEN20DBMVMID           */
#define _RAC_PACTRL_PAEN20DBMVMID_MASK                                0x2UL                                              /**< Bit mask for RAC_PAEN20DBMVMID              */
#define _RAC_PACTRL_PAEN20DBMVMID_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAEN20DBMVMID_disable                             0x00000000UL                                       /**< Mode disable for RAC_PACTRL                 */
#define _RAC_PACTRL_PAEN20DBMVMID_enable                              0x00000001UL                                       /**< Mode enable for RAC_PACTRL                  */
#define RAC_PACTRL_PAEN20DBMVMID_DEFAULT                              (_RAC_PACTRL_PAEN20DBMVMID_DEFAULT << 1)           /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAEN20DBMVMID_disable                              (_RAC_PACTRL_PAEN20DBMVMID_disable << 1)           /**< Shifted mode disable for RAC_PACTRL         */
#define RAC_PACTRL_PAEN20DBMVMID_enable                               (_RAC_PACTRL_PAEN20DBMVMID_enable << 1)            /**< Shifted mode enable for RAC_PACTRL          */
#define RAC_PACTRL_PAENCAPATT                                         (0x1UL << 2)                                       /**< PAENCAPATT                                  */
#define _RAC_PACTRL_PAENCAPATT_SHIFT                                  2                                                  /**< Shift value for RAC_PAENCAPATT              */
#define _RAC_PACTRL_PAENCAPATT_MASK                                   0x4UL                                              /**< Bit mask for RAC_PAENCAPATT                 */
#define _RAC_PACTRL_PAENCAPATT_DEFAULT                                0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAENCAPATT_disable                                0x00000000UL                                       /**< Mode disable for RAC_PACTRL                 */
#define _RAC_PACTRL_PAENCAPATT_enable                                 0x00000001UL                                       /**< Mode enable for RAC_PACTRL                  */
#define RAC_PACTRL_PAENCAPATT_DEFAULT                                 (_RAC_PACTRL_PAENCAPATT_DEFAULT << 2)              /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAENCAPATT_disable                                 (_RAC_PACTRL_PAENCAPATT_disable << 2)              /**< Shifted mode disable for RAC_PACTRL         */
#define RAC_PACTRL_PAENCAPATT_enable                                  (_RAC_PACTRL_PAENCAPATT_enable << 2)               /**< Shifted mode enable for RAC_PACTRL          */
#define RAC_PACTRL_PAENLATCHBYPASS                                    (0x1UL << 3)                                       /**< PAENLATCHBYPASS                             */
#define _RAC_PACTRL_PAENLATCHBYPASS_SHIFT                             3                                                  /**< Shift value for RAC_PAENLATCHBYPASS         */
#define _RAC_PACTRL_PAENLATCHBYPASS_MASK                              0x8UL                                              /**< Bit mask for RAC_PAENLATCHBYPASS            */
#define _RAC_PACTRL_PAENLATCHBYPASS_DEFAULT                           0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAENLATCHBYPASS_disable                           0x00000000UL                                       /**< Mode disable for RAC_PACTRL                 */
#define _RAC_PACTRL_PAENLATCHBYPASS_enable                            0x00000001UL                                       /**< Mode enable for RAC_PACTRL                  */
#define RAC_PACTRL_PAENLATCHBYPASS_DEFAULT                            (_RAC_PACTRL_PAENLATCHBYPASS_DEFAULT << 3)         /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAENLATCHBYPASS_disable                            (_RAC_PACTRL_PAENLATCHBYPASS_disable << 3)         /**< Shifted mode disable for RAC_PACTRL         */
#define RAC_PACTRL_PAENLATCHBYPASS_enable                             (_RAC_PACTRL_PAENLATCHBYPASS_enable << 3)          /**< Shifted mode enable for RAC_PACTRL          */
#define RAC_PACTRL_PAENPOWERRAMPINGCLK                                (0x1UL << 4)                                       /**< PAENPOWERRAMPINGCLK                         */
#define _RAC_PACTRL_PAENPOWERRAMPINGCLK_SHIFT                         4                                                  /**< Shift value for RAC_PAENPOWERRAMPINGCLK     */
#define _RAC_PACTRL_PAENPOWERRAMPINGCLK_MASK                          0x10UL                                             /**< Bit mask for RAC_PAENPOWERRAMPINGCLK        */
#define _RAC_PACTRL_PAENPOWERRAMPINGCLK_DEFAULT                       0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAENPOWERRAMPINGCLK_silence_clk                   0x00000000UL                                       /**< Mode silence_clk for RAC_PACTRL             */
#define _RAC_PACTRL_PAENPOWERRAMPINGCLK_en_clk                        0x00000001UL                                       /**< Mode en_clk for RAC_PACTRL                  */
#define RAC_PACTRL_PAENPOWERRAMPINGCLK_DEFAULT                        (_RAC_PACTRL_PAENPOWERRAMPINGCLK_DEFAULT << 4)     /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAENPOWERRAMPINGCLK_silence_clk                    (_RAC_PACTRL_PAENPOWERRAMPINGCLK_silence_clk << 4) /**< Shifted mode silence_clk for RAC_PACTRL     */
#define RAC_PACTRL_PAENPOWERRAMPINGCLK_en_clk                         (_RAC_PACTRL_PAENPOWERRAMPINGCLK_en_clk << 4)      /**< Shifted mode en_clk for RAC_PACTRL          */
#define RAC_PACTRL_PAPULLDOWNVDDPA                                    (0x1UL << 5)                                       /**< PAPULLDOWNVDDPA                             */
#define _RAC_PACTRL_PAPULLDOWNVDDPA_SHIFT                             5                                                  /**< Shift value for RAC_PAPULLDOWNVDDPA         */
#define _RAC_PACTRL_PAPULLDOWNVDDPA_MASK                              0x20UL                                             /**< Bit mask for RAC_PAPULLDOWNVDDPA            */
#define _RAC_PACTRL_PAPULLDOWNVDDPA_DEFAULT                           0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAPULLDOWNVDDPA_not_pull_down                     0x00000000UL                                       /**< Mode not_pull_down for RAC_PACTRL           */
#define _RAC_PACTRL_PAPULLDOWNVDDPA_pull_down_vddpa                   0x00000001UL                                       /**< Mode pull_down_vddpa for RAC_PACTRL         */
#define RAC_PACTRL_PAPULLDOWNVDDPA_DEFAULT                            (_RAC_PACTRL_PAPULLDOWNVDDPA_DEFAULT << 5)         /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAPULLDOWNVDDPA_not_pull_down                      (_RAC_PACTRL_PAPULLDOWNVDDPA_not_pull_down << 5)   /**< Shifted mode not_pull_down for RAC_PACTRL   */
#define RAC_PACTRL_PAPULLDOWNVDDPA_pull_down_vddpa                    (_RAC_PACTRL_PAPULLDOWNVDDPA_pull_down_vddpa << 5) /**< Shifted mode pull_down_vddpa for RAC_PACTRL */
#define RAC_PACTRL_PAREGBYPASSPDRVLDO                                 (0x1UL << 6)                                       /**< PAREGBYPASSPDRVLDO                          */
#define _RAC_PACTRL_PAREGBYPASSPDRVLDO_SHIFT                          6                                                  /**< Shift value for RAC_PAREGBYPASSPDRVLDO      */
#define _RAC_PACTRL_PAREGBYPASSPDRVLDO_MASK                           0x40UL                                             /**< Bit mask for RAC_PAREGBYPASSPDRVLDO         */
#define _RAC_PACTRL_PAREGBYPASSPDRVLDO_DEFAULT                        0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAREGBYPASSPDRVLDO_not_bypass                     0x00000000UL                                       /**< Mode not_bypass for RAC_PACTRL              */
#define _RAC_PACTRL_PAREGBYPASSPDRVLDO_bypass                         0x00000001UL                                       /**< Mode bypass for RAC_PACTRL                  */
#define RAC_PACTRL_PAREGBYPASSPDRVLDO_DEFAULT                         (_RAC_PACTRL_PAREGBYPASSPDRVLDO_DEFAULT << 6)      /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAREGBYPASSPDRVLDO_not_bypass                      (_RAC_PACTRL_PAREGBYPASSPDRVLDO_not_bypass << 6)   /**< Shifted mode not_bypass for RAC_PACTRL      */
#define RAC_PACTRL_PAREGBYPASSPDRVLDO_bypass                          (_RAC_PACTRL_PAREGBYPASSPDRVLDO_bypass << 6)       /**< Shifted mode bypass for RAC_PACTRL          */
#define RAC_PACTRL_PAREGBYPASSPREREG                                  (0x1UL << 7)                                       /**< PAREGBYPASSPREREG                           */
#define _RAC_PACTRL_PAREGBYPASSPREREG_SHIFT                           7                                                  /**< Shift value for RAC_PAREGBYPASSPREREG       */
#define _RAC_PACTRL_PAREGBYPASSPREREG_MASK                            0x80UL                                             /**< Bit mask for RAC_PAREGBYPASSPREREG          */
#define _RAC_PACTRL_PAREGBYPASSPREREG_DEFAULT                         0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAREGBYPASSPREREG_not_bypass                      0x00000000UL                                       /**< Mode not_bypass for RAC_PACTRL              */
#define _RAC_PACTRL_PAREGBYPASSPREREG_bypass                          0x00000001UL                                       /**< Mode bypass for RAC_PACTRL                  */
#define RAC_PACTRL_PAREGBYPASSPREREG_DEFAULT                          (_RAC_PACTRL_PAREGBYPASSPREREG_DEFAULT << 7)       /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAREGBYPASSPREREG_not_bypass                       (_RAC_PACTRL_PAREGBYPASSPREREG_not_bypass << 7)    /**< Shifted mode not_bypass for RAC_PACTRL      */
#define RAC_PACTRL_PAREGBYPASSPREREG_bypass                           (_RAC_PACTRL_PAREGBYPASSPREREG_bypass << 7)        /**< Shifted mode bypass for RAC_PACTRL          */
#define RAC_PACTRL_PASELLDOVDDPA                                      (0x1UL << 8)                                       /**< PASELLDOVDDPA                               */
#define _RAC_PACTRL_PASELLDOVDDPA_SHIFT                               8                                                  /**< Shift value for RAC_PASELLDOVDDPA           */
#define _RAC_PACTRL_PASELLDOVDDPA_MASK                                0x100UL                                            /**< Bit mask for RAC_PASELLDOVDDPA              */
#define _RAC_PACTRL_PASELLDOVDDPA_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PASELLDOVDDPA_not_selected                        0x00000000UL                                       /**< Mode not_selected for RAC_PACTRL            */
#define _RAC_PACTRL_PASELLDOVDDPA_selected                            0x00000001UL                                       /**< Mode selected for RAC_PACTRL                */
#define RAC_PACTRL_PASELLDOVDDPA_DEFAULT                              (_RAC_PACTRL_PASELLDOVDDPA_DEFAULT << 8)           /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PASELLDOVDDPA_not_selected                         (_RAC_PACTRL_PASELLDOVDDPA_not_selected << 8)      /**< Shifted mode not_selected for RAC_PACTRL    */
#define RAC_PACTRL_PASELLDOVDDPA_selected                             (_RAC_PACTRL_PASELLDOVDDPA_selected << 8)          /**< Shifted mode selected for RAC_PACTRL        */
#define RAC_PACTRL_PASELLDOVDDRF                                      (0x1UL << 9)                                       /**< PASELLDOVDDRF                               */
#define _RAC_PACTRL_PASELLDOVDDRF_SHIFT                               9                                                  /**< Shift value for RAC_PASELLDOVDDRF           */
#define _RAC_PACTRL_PASELLDOVDDRF_MASK                                0x200UL                                            /**< Bit mask for RAC_PASELLDOVDDRF              */
#define _RAC_PACTRL_PASELLDOVDDRF_DEFAULT                             0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PASELLDOVDDRF_not_selected                        0x00000000UL                                       /**< Mode not_selected for RAC_PACTRL            */
#define _RAC_PACTRL_PASELLDOVDDRF_selected                            0x00000001UL                                       /**< Mode selected for RAC_PACTRL                */
#define RAC_PACTRL_PASELLDOVDDRF_DEFAULT                              (_RAC_PACTRL_PASELLDOVDDRF_DEFAULT << 9)           /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PASELLDOVDDRF_not_selected                         (_RAC_PACTRL_PASELLDOVDDRF_not_selected << 9)      /**< Shifted mode not_selected for RAC_PACTRL    */
#define RAC_PACTRL_PASELLDOVDDRF_selected                             (_RAC_PACTRL_PASELLDOVDDRF_selected << 9)          /**< Shifted mode selected for RAC_PACTRL        */
#define RAC_PACTRL_PASLICERST                                         (0x1UL << 10)                                      /**< PASLICERST                                  */
#define _RAC_PACTRL_PASLICERST_SHIFT                                  10                                                 /**< Shift value for RAC_PASLICERST              */
#define _RAC_PACTRL_PASLICERST_MASK                                   0x400UL                                            /**< Bit mask for RAC_PASLICERST                 */
#define _RAC_PACTRL_PASLICERST_DEFAULT                                0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PASLICERST_disable                                0x00000000UL                                       /**< Mode disable for RAC_PACTRL                 */
#define _RAC_PACTRL_PASLICERST_enable                                 0x00000001UL                                       /**< Mode enable for RAC_PACTRL                  */
#define RAC_PACTRL_PASLICERST_DEFAULT                                 (_RAC_PACTRL_PASLICERST_DEFAULT << 10)             /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PASLICERST_disable                                 (_RAC_PACTRL_PASLICERST_disable << 10)             /**< Shifted mode disable for RAC_PACTRL         */
#define RAC_PACTRL_PASLICERST_enable                                  (_RAC_PACTRL_PASLICERST_enable << 10)              /**< Shifted mode enable for RAC_PACTRL          */
#define _RAC_PACTRL_PAPOWER_SHIFT                                     16                                                 /**< Shift value for RAC_PAPOWER                 */
#define _RAC_PACTRL_PAPOWER_MASK                                      0xF0000UL                                          /**< Bit mask for RAC_PAPOWER                    */
#define _RAC_PACTRL_PAPOWER_DEFAULT                                   0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define _RAC_PACTRL_PAPOWER_t0stripeon                                0x00000000UL                                       /**< Mode t0stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t1stripeon                                0x00000001UL                                       /**< Mode t1stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t2stripeon                                0x00000002UL                                       /**< Mode t2stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t3stripeon                                0x00000003UL                                       /**< Mode t3stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t4stripeon                                0x00000004UL                                       /**< Mode t4stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t5stripeon                                0x00000005UL                                       /**< Mode t5stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t6stripeon                                0x00000006UL                                       /**< Mode t6stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t7stripeon                                0x00000007UL                                       /**< Mode t7stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t8stripeon                                0x00000008UL                                       /**< Mode t8stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t9stripeon                                0x00000009UL                                       /**< Mode t9stripeon for RAC_PACTRL              */
#define _RAC_PACTRL_PAPOWER_t10stripeon                               0x0000000AUL                                       /**< Mode t10stripeon for RAC_PACTRL             */
#define _RAC_PACTRL_PAPOWER_t11stripeon                               0x0000000BUL                                       /**< Mode t11stripeon for RAC_PACTRL             */
#define _RAC_PACTRL_PAPOWER_t12stripeon                               0x0000000CUL                                       /**< Mode t12stripeon for RAC_PACTRL             */
#define _RAC_PACTRL_PAPOWER_t13stripeon                               0x0000000DUL                                       /**< Mode t13stripeon for RAC_PACTRL             */
#define _RAC_PACTRL_PAPOWER_t14stripeon                               0x0000000EUL                                       /**< Mode t14stripeon for RAC_PACTRL             */
#define _RAC_PACTRL_PAPOWER_t15stripeon                               0x0000000FUL                                       /**< Mode t15stripeon for RAC_PACTRL             */
#define RAC_PACTRL_PAPOWER_DEFAULT                                    (_RAC_PACTRL_PAPOWER_DEFAULT << 16)                /**< Shifted mode DEFAULT for RAC_PACTRL         */
#define RAC_PACTRL_PAPOWER_t0stripeon                                 (_RAC_PACTRL_PAPOWER_t0stripeon << 16)             /**< Shifted mode t0stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t1stripeon                                 (_RAC_PACTRL_PAPOWER_t1stripeon << 16)             /**< Shifted mode t1stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t2stripeon                                 (_RAC_PACTRL_PAPOWER_t2stripeon << 16)             /**< Shifted mode t2stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t3stripeon                                 (_RAC_PACTRL_PAPOWER_t3stripeon << 16)             /**< Shifted mode t3stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t4stripeon                                 (_RAC_PACTRL_PAPOWER_t4stripeon << 16)             /**< Shifted mode t4stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t5stripeon                                 (_RAC_PACTRL_PAPOWER_t5stripeon << 16)             /**< Shifted mode t5stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t6stripeon                                 (_RAC_PACTRL_PAPOWER_t6stripeon << 16)             /**< Shifted mode t6stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t7stripeon                                 (_RAC_PACTRL_PAPOWER_t7stripeon << 16)             /**< Shifted mode t7stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t8stripeon                                 (_RAC_PACTRL_PAPOWER_t8stripeon << 16)             /**< Shifted mode t8stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t9stripeon                                 (_RAC_PACTRL_PAPOWER_t9stripeon << 16)             /**< Shifted mode t9stripeon for RAC_PACTRL      */
#define RAC_PACTRL_PAPOWER_t10stripeon                                (_RAC_PACTRL_PAPOWER_t10stripeon << 16)            /**< Shifted mode t10stripeon for RAC_PACTRL     */
#define RAC_PACTRL_PAPOWER_t11stripeon                                (_RAC_PACTRL_PAPOWER_t11stripeon << 16)            /**< Shifted mode t11stripeon for RAC_PACTRL     */
#define RAC_PACTRL_PAPOWER_t12stripeon                                (_RAC_PACTRL_PAPOWER_t12stripeon << 16)            /**< Shifted mode t12stripeon for RAC_PACTRL     */
#define RAC_PACTRL_PAPOWER_t13stripeon                                (_RAC_PACTRL_PAPOWER_t13stripeon << 16)            /**< Shifted mode t13stripeon for RAC_PACTRL     */
#define RAC_PACTRL_PAPOWER_t14stripeon                                (_RAC_PACTRL_PAPOWER_t14stripeon << 16)            /**< Shifted mode t14stripeon for RAC_PACTRL     */
#define RAC_PACTRL_PAPOWER_t15stripeon                                (_RAC_PACTRL_PAPOWER_t15stripeon << 16)            /**< Shifted mode t15stripeon for RAC_PACTRL     */
#define _RAC_PACTRL_PASELSLICE_SHIFT                                  20                                                 /**< Shift value for RAC_PASELSLICE              */
#define _RAC_PACTRL_PASELSLICE_MASK                                   0xF00000UL                                         /**< Bit mask for RAC_PASELSLICE                 */
#define _RAC_PACTRL_PASELSLICE_DEFAULT                                0x00000000UL                                       /**< Mode DEFAULT for RAC_PACTRL                 */
#define RAC_PACTRL_PASELSLICE_DEFAULT                                 (_RAC_PACTRL_PASELSLICE_DEFAULT << 20)             /**< Shifted mode DEFAULT for RAC_PACTRL         */

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
#define _RAC_PGACTRL_MASK                                             0x07FFFFFFUL                                        /**< Mask for RAC_PGACTRL                        */
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
#define RAC_PGACTRL_PGAENHYST                                         (0x1UL << 4)                                        /**< PGAENHYST                                   */
#define _RAC_PGACTRL_PGAENHYST_SHIFT                                  4                                                   /**< Shift value for RAC_PGAENHYST               */
#define _RAC_PGACTRL_PGAENHYST_MASK                                   0x10UL                                              /**< Bit mask for RAC_PGAENHYST                  */
#define _RAC_PGACTRL_PGAENHYST_DEFAULT                                0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENHYST_pkd_hyst_disable                       0x00000000UL                                        /**< Mode pkd_hyst_disable for RAC_PGACTRL       */
#define _RAC_PGACTRL_PGAENHYST_pkd_hyst_enable                        0x00000001UL                                        /**< Mode pkd_hyst_enable for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENHYST_DEFAULT                                 (_RAC_PGACTRL_PGAENHYST_DEFAULT << 4)               /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENHYST_pkd_hyst_disable                        (_RAC_PGACTRL_PGAENHYST_pkd_hyst_disable << 4)      /**< Shifted mode pkd_hyst_disable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENHYST_pkd_hyst_enable                         (_RAC_PGACTRL_PGAENHYST_pkd_hyst_enable << 4)       /**< Shifted mode pkd_hyst_enable for RAC_PGACTRL*/
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
#define RAC_PGACTRL_PGAENOFFD                                         (0x1UL << 8)                                        /**< PGAENOFFD                                   */
#define _RAC_PGACTRL_PGAENOFFD_SHIFT                                  8                                                   /**< Shift value for RAC_PGAENOFFD               */
#define _RAC_PGACTRL_PGAENOFFD_MASK                                   0x100UL                                             /**< Bit mask for RAC_PGAENOFFD                  */
#define _RAC_PGACTRL_PGAENOFFD_DEFAULT                                0x00000000UL                                        /**< Mode DEFAULT for RAC_PGACTRL                */
#define _RAC_PGACTRL_PGAENOFFD_pkd_offd_disable                       0x00000000UL                                        /**< Mode pkd_offd_disable for RAC_PGACTRL       */
#define _RAC_PGACTRL_PGAENOFFD_pkd_offd_enable                        0x00000001UL                                        /**< Mode pkd_offd_enable for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENOFFD_DEFAULT                                 (_RAC_PGACTRL_PGAENOFFD_DEFAULT << 8)               /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAENOFFD_pkd_offd_disable                        (_RAC_PGACTRL_PGAENOFFD_pkd_offd_disable << 8)      /**< Shifted mode pkd_offd_disable for RAC_PGACTRL*/
#define RAC_PGACTRL_PGAENOFFD_pkd_offd_enable                         (_RAC_PGACTRL_PGAENOFFD_pkd_offd_enable << 8)       /**< Shifted mode pkd_offd_enable for RAC_PGACTRL*/
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
#define _RAC_PGACTRL_PGAPOWERMODE_pm_0p8                              0x00000001UL                                        /**< Mode pm_0p8 for RAC_PGACTRL                 */
#define _RAC_PGACTRL_PGAPOWERMODE_pm_1p2                              0x00000002UL                                        /**< Mode pm_1p2 for RAC_PGACTRL                 */
#define _RAC_PGACTRL_PGAPOWERMODE_pm_0p5                              0x00000003UL                                        /**< Mode pm_0p5 for RAC_PGACTRL                 */
#define RAC_PGACTRL_PGAPOWERMODE_DEFAULT                              (_RAC_PGACTRL_PGAPOWERMODE_DEFAULT << 14)           /**< Shifted mode DEFAULT for RAC_PGACTRL        */
#define RAC_PGACTRL_PGAPOWERMODE_pm_typ                               (_RAC_PGACTRL_PGAPOWERMODE_pm_typ << 14)            /**< Shifted mode pm_typ for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAPOWERMODE_pm_0p8                               (_RAC_PGACTRL_PGAPOWERMODE_pm_0p8 << 14)            /**< Shifted mode pm_0p8 for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAPOWERMODE_pm_1p2                               (_RAC_PGACTRL_PGAPOWERMODE_pm_1p2 << 14)            /**< Shifted mode pm_1p2 for RAC_PGACTRL         */
#define RAC_PGACTRL_PGAPOWERMODE_pm_0p5                               (_RAC_PGACTRL_PGAPOWERMODE_pm_0p5 << 14)            /**< Shifted mode pm_0p5 for RAC_PGACTRL         */
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
#define _RAC_RFBIASCAL_RESETVALUE                                     0x30202020UL                                        /**< Default value for RAC_RFBIASCAL             */
#define _RAC_RFBIASCAL_MASK                                           0x3F3F3F3FUL                                        /**< Mask for RAC_RFBIASCAL                      */
#define _RAC_RFBIASCAL_RFBIASCALBIAS_SHIFT                            0                                                   /**< Shift value for RAC_RFBIASCALBIAS           */
#define _RAC_RFBIASCAL_RFBIASCALBIAS_MASK                             0x3FUL                                              /**< Bit mask for RAC_RFBIASCALBIAS              */
#define _RAC_RFBIASCAL_RFBIASCALBIAS_DEFAULT                          0x00000020UL                                        /**< Mode DEFAULT for RAC_RFBIASCAL              */
#define RAC_RFBIASCAL_RFBIASCALBIAS_DEFAULT                           (_RAC_RFBIASCAL_RFBIASCALBIAS_DEFAULT << 0)         /**< Shifted mode DEFAULT for RAC_RFBIASCAL      */
#define _RAC_RFBIASCAL_RFBIASCALTC_SHIFT                              8                                                   /**< Shift value for RAC_RFBIASCALTC             */
#define _RAC_RFBIASCAL_RFBIASCALTC_MASK                               0x3F00UL                                            /**< Bit mask for RAC_RFBIASCALTC                */
#define _RAC_RFBIASCAL_RFBIASCALTC_DEFAULT                            0x00000020UL                                        /**< Mode DEFAULT for RAC_RFBIASCAL              */
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
#define _RAC_RADIOEN_RFBIASEN_disable_dualbis_vtr                     0x00000000UL                                      /**< Mode disable_dualbis_vtr for RAC_RADIOEN    */
#define _RAC_RADIOEN_RFBIASEN_enable_dualbis_vtr                      0x00000001UL                                      /**< Mode enable_dualbis_vtr for RAC_RADIOEN     */
#define RAC_RADIOEN_RFBIASEN_DEFAULT                                  (_RAC_RADIOEN_RFBIASEN_DEFAULT << 2)              /**< Shifted mode DEFAULT for RAC_RADIOEN        */
#define RAC_RADIOEN_RFBIASEN_disable_dualbis_vtr                      (_RAC_RADIOEN_RFBIASEN_disable_dualbis_vtr << 2)  /**< Shifted mode disable_dualbis_vtr for RAC_RADIOEN*/
#define RAC_RADIOEN_RFBIASEN_enable_dualbis_vtr                       (_RAC_RADIOEN_RFBIASEN_enable_dualbis_vtr << 2)   /**< Shifted mode enable_dualbis_vtr for RAC_RADIOEN*/

/* Bit fields for RAC RFPATHEN1 */
#define _RAC_RFPATHEN1_RESETVALUE                                     0x00000004UL                                        /**< Default value for RAC_RFPATHEN1             */
#define _RAC_RFPATHEN1_MASK                                           0x000000FFUL                                        /**< Mask for RAC_RFPATHEN1                      */
#define RAC_RFPATHEN1_LNAMIXEN0DBMPA1                                 (0x1UL << 0)                                        /**< LNAMIXEN0DBMPA1                             */
#define _RAC_RFPATHEN1_LNAMIXEN0DBMPA1_SHIFT                          0                                                   /**< Shift value for RAC_LNAMIXEN0DBMPA1         */
#define _RAC_RFPATHEN1_LNAMIXEN0DBMPA1_MASK                           0x1UL                                               /**< Bit mask for RAC_LNAMIXEN0DBMPA1            */
#define _RAC_RFPATHEN1_LNAMIXEN0DBMPA1_DEFAULT                        0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXEN0DBMPA1_disable                        0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXEN0DBMPA1_enable                         0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN1               */
#define RAC_RFPATHEN1_LNAMIXEN0DBMPA1_DEFAULT                         (_RAC_RFPATHEN1_LNAMIXEN0DBMPA1_DEFAULT << 0)       /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXEN0DBMPA1_disable                         (_RAC_RFPATHEN1_LNAMIXEN0DBMPA1_disable << 0)       /**< Shifted mode disable for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXEN0DBMPA1_enable                          (_RAC_RFPATHEN1_LNAMIXEN0DBMPA1_enable << 0)        /**< Shifted mode enable for RAC_RFPATHEN1       */
#define RAC_RFPATHEN1_LNAMIXEN1                                       (0x1UL << 1)                                        /**< LNAMIXEN1                                   */
#define _RAC_RFPATHEN1_LNAMIXEN1_SHIFT                                1                                                   /**< Shift value for RAC_LNAMIXEN1               */
#define _RAC_RFPATHEN1_LNAMIXEN1_MASK                                 0x2UL                                               /**< Bit mask for RAC_LNAMIXEN1                  */
#define _RAC_RFPATHEN1_LNAMIXEN1_DEFAULT                              0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXEN1_disable                              0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXEN1_enable                               0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN1               */
#define RAC_RFPATHEN1_LNAMIXEN1_DEFAULT                               (_RAC_RFPATHEN1_LNAMIXEN1_DEFAULT << 1)             /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXEN1_disable                               (_RAC_RFPATHEN1_LNAMIXEN1_disable << 1)             /**< Shifted mode disable for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXEN1_enable                                (_RAC_RFPATHEN1_LNAMIXEN1_enable << 1)              /**< Shifted mode enable for RAC_RFPATHEN1       */
#define RAC_RFPATHEN1_LNAMIXRFATTDCEN1                                (0x1UL << 2)                                        /**< LNAMIXRFATTDCEN1                            */
#define _RAC_RFPATHEN1_LNAMIXRFATTDCEN1_SHIFT                         2                                                   /**< Shift value for RAC_LNAMIXRFATTDCEN1        */
#define _RAC_RFPATHEN1_LNAMIXRFATTDCEN1_MASK                          0x4UL                                               /**< Bit mask for RAC_LNAMIXRFATTDCEN1           */
#define _RAC_RFPATHEN1_LNAMIXRFATTDCEN1_DEFAULT                       0x00000001UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXRFATTDCEN1_disable_dc                    0x00000000UL                                        /**< Mode disable_dc for RAC_RFPATHEN1           */
#define _RAC_RFPATHEN1_LNAMIXRFATTDCEN1_enable_dc                     0x00000001UL                                        /**< Mode enable_dc for RAC_RFPATHEN1            */
#define RAC_RFPATHEN1_LNAMIXRFATTDCEN1_DEFAULT                        (_RAC_RFPATHEN1_LNAMIXRFATTDCEN1_DEFAULT << 2)      /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXRFATTDCEN1_disable_dc                     (_RAC_RFPATHEN1_LNAMIXRFATTDCEN1_disable_dc << 2)   /**< Shifted mode disable_dc for RAC_RFPATHEN1   */
#define RAC_RFPATHEN1_LNAMIXRFATTDCEN1_enable_dc                      (_RAC_RFPATHEN1_LNAMIXRFATTDCEN1_enable_dc << 2)    /**< Shifted mode enable_dc for RAC_RFPATHEN1    */
#define RAC_RFPATHEN1_LNAMIXRFPKDENRF1                                (0x1UL << 3)                                        /**< LNAMIXRFPKDENRF1                            */
#define _RAC_RFPATHEN1_LNAMIXRFPKDENRF1_SHIFT                         3                                                   /**< Shift value for RAC_LNAMIXRFPKDENRF1        */
#define _RAC_RFPATHEN1_LNAMIXRFPKDENRF1_MASK                          0x8UL                                               /**< Bit mask for RAC_LNAMIXRFPKDENRF1           */
#define _RAC_RFPATHEN1_LNAMIXRFPKDENRF1_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXRFPKDENRF1_disable                       0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXRFPKDENRF1_enable_path1                  0x00000001UL                                        /**< Mode enable_path1 for RAC_RFPATHEN1         */
#define RAC_RFPATHEN1_LNAMIXRFPKDENRF1_DEFAULT                        (_RAC_RFPATHEN1_LNAMIXRFPKDENRF1_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXRFPKDENRF1_disable                        (_RAC_RFPATHEN1_LNAMIXRFPKDENRF1_disable << 3)      /**< Shifted mode disable for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXRFPKDENRF1_enable_path1                   (_RAC_RFPATHEN1_LNAMIXRFPKDENRF1_enable_path1 << 3) /**< Shifted mode enable_path1 for RAC_RFPATHEN1 */
#define RAC_RFPATHEN1_LNAMIXTRSW1                                     (0x1UL << 4)                                        /**< LNAMIXTRSW1                                 */
#define _RAC_RFPATHEN1_LNAMIXTRSW1_SHIFT                              4                                                   /**< Shift value for RAC_LNAMIXTRSW1             */
#define _RAC_RFPATHEN1_LNAMIXTRSW1_MASK                               0x10UL                                              /**< Bit mask for RAC_LNAMIXTRSW1                */
#define _RAC_RFPATHEN1_LNAMIXTRSW1_DEFAULT                            0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_LNAMIXTRSW1_disabled                           0x00000000UL                                        /**< Mode disabled for RAC_RFPATHEN1             */
#define _RAC_RFPATHEN1_LNAMIXTRSW1_enabled                            0x00000001UL                                        /**< Mode enabled for RAC_RFPATHEN1              */
#define RAC_RFPATHEN1_LNAMIXTRSW1_DEFAULT                             (_RAC_RFPATHEN1_LNAMIXTRSW1_DEFAULT << 4)           /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_LNAMIXTRSW1_disabled                            (_RAC_RFPATHEN1_LNAMIXTRSW1_disabled << 4)          /**< Shifted mode disabled for RAC_RFPATHEN1     */
#define RAC_RFPATHEN1_LNAMIXTRSW1_enabled                             (_RAC_RFPATHEN1_LNAMIXTRSW1_enabled << 4)           /**< Shifted mode enabled for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENANT1                                        (0x1UL << 5)                                        /**< PAENANT1                                    */
#define _RAC_RFPATHEN1_PAENANT1_SHIFT                                 5                                                   /**< Shift value for RAC_PAENANT1                */
#define _RAC_RFPATHEN1_PAENANT1_MASK                                  0x20UL                                              /**< Bit mask for RAC_PAENANT1                   */
#define _RAC_RFPATHEN1_PAENANT1_DEFAULT                               0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_PAENANT1_disable                               0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_PAENANT1_enable                                0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN1               */
#define RAC_RFPATHEN1_PAENANT1_DEFAULT                                (_RAC_RFPATHEN1_PAENANT1_DEFAULT << 5)              /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENANT1_disable                                (_RAC_RFPATHEN1_PAENANT1_disable << 5)              /**< Shifted mode disable for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENANT1_enable                                 (_RAC_RFPATHEN1_PAENANT1_enable << 5)               /**< Shifted mode enable for RAC_RFPATHEN1       */
#define RAC_RFPATHEN1_PAENPA10DBM                                     (0x1UL << 6)                                        /**< PAENPA10DBM                                 */
#define _RAC_RFPATHEN1_PAENPA10DBM_SHIFT                              6                                                   /**< Shift value for RAC_PAENPA10DBM             */
#define _RAC_RFPATHEN1_PAENPA10DBM_MASK                               0x40UL                                              /**< Bit mask for RAC_PAENPA10DBM                */
#define _RAC_RFPATHEN1_PAENPA10DBM_DEFAULT                            0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_PAENPA10DBM_disable                            0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_PAENPA10DBM_enable                             0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN1               */
#define RAC_RFPATHEN1_PAENPA10DBM_DEFAULT                             (_RAC_RFPATHEN1_PAENPA10DBM_DEFAULT << 6)           /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENPA10DBM_disable                             (_RAC_RFPATHEN1_PAENPA10DBM_disable << 6)           /**< Shifted mode disable for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENPA10DBM_enable                              (_RAC_RFPATHEN1_PAENPA10DBM_enable << 6)            /**< Shifted mode enable for RAC_RFPATHEN1       */
#define RAC_RFPATHEN1_PAENPAPREDRV10DBM                               (0x1UL << 7)                                        /**< PAENPAPREDRV10DBM                           */
#define _RAC_RFPATHEN1_PAENPAPREDRV10DBM_SHIFT                        7                                                   /**< Shift value for RAC_PAENPAPREDRV10DBM       */
#define _RAC_RFPATHEN1_PAENPAPREDRV10DBM_MASK                         0x80UL                                              /**< Bit mask for RAC_PAENPAPREDRV10DBM          */
#define _RAC_RFPATHEN1_PAENPAPREDRV10DBM_DEFAULT                      0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_PAENPAPREDRV10DBM_disable                      0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN1              */
#define _RAC_RFPATHEN1_PAENPAPREDRV10DBM_enable                       0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN1               */
#define RAC_RFPATHEN1_PAENPAPREDRV10DBM_DEFAULT                       (_RAC_RFPATHEN1_PAENPAPREDRV10DBM_DEFAULT << 7)     /**< Shifted mode DEFAULT for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENPAPREDRV10DBM_disable                       (_RAC_RFPATHEN1_PAENPAPREDRV10DBM_disable << 7)     /**< Shifted mode disable for RAC_RFPATHEN1      */
#define RAC_RFPATHEN1_PAENPAPREDRV10DBM_enable                        (_RAC_RFPATHEN1_PAENPAPREDRV10DBM_enable << 7)      /**< Shifted mode enable for RAC_RFPATHEN1       */

/* Bit fields for RAC RFPATHEN2 */
#define _RAC_RFPATHEN2_RESETVALUE                                     0x00000004UL                                        /**< Default value for RAC_RFPATHEN2             */
#define _RAC_RFPATHEN2_MASK                                           0x000000FFUL                                        /**< Mask for RAC_RFPATHEN2                      */
#define RAC_RFPATHEN2_LNAMIXEN0DBMPA2                                 (0x1UL << 0)                                        /**< LNAMIXEN0DBMPA2                             */
#define _RAC_RFPATHEN2_LNAMIXEN0DBMPA2_SHIFT                          0                                                   /**< Shift value for RAC_LNAMIXEN0DBMPA2         */
#define _RAC_RFPATHEN2_LNAMIXEN0DBMPA2_MASK                           0x1UL                                               /**< Bit mask for RAC_LNAMIXEN0DBMPA2            */
#define _RAC_RFPATHEN2_LNAMIXEN0DBMPA2_DEFAULT                        0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXEN0DBMPA2_disable                        0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXEN0DBMPA2_enable                         0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_LNAMIXEN0DBMPA2_DEFAULT                         (_RAC_RFPATHEN2_LNAMIXEN0DBMPA2_DEFAULT << 0)       /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXEN0DBMPA2_disable                         (_RAC_RFPATHEN2_LNAMIXEN0DBMPA2_disable << 0)       /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXEN0DBMPA2_enable                          (_RAC_RFPATHEN2_LNAMIXEN0DBMPA2_enable << 0)        /**< Shifted mode enable for RAC_RFPATHEN2       */
#define RAC_RFPATHEN2_LNAMIXEN2                                       (0x1UL << 1)                                        /**< LNAMIXEN2                                   */
#define _RAC_RFPATHEN2_LNAMIXEN2_SHIFT                                1                                                   /**< Shift value for RAC_LNAMIXEN2               */
#define _RAC_RFPATHEN2_LNAMIXEN2_MASK                                 0x2UL                                               /**< Bit mask for RAC_LNAMIXEN2                  */
#define _RAC_RFPATHEN2_LNAMIXEN2_DEFAULT                              0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXEN2_disable                              0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXEN2_enable                               0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_LNAMIXEN2_DEFAULT                               (_RAC_RFPATHEN2_LNAMIXEN2_DEFAULT << 1)             /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXEN2_disable                               (_RAC_RFPATHEN2_LNAMIXEN2_disable << 1)             /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXEN2_enable                                (_RAC_RFPATHEN2_LNAMIXEN2_enable << 1)              /**< Shifted mode enable for RAC_RFPATHEN2       */
#define RAC_RFPATHEN2_LNAMIXRFATTDCEN2                                (0x1UL << 2)                                        /**< LNAMIXRFATTDCEN2                            */
#define _RAC_RFPATHEN2_LNAMIXRFATTDCEN2_SHIFT                         2                                                   /**< Shift value for RAC_LNAMIXRFATTDCEN2        */
#define _RAC_RFPATHEN2_LNAMIXRFATTDCEN2_MASK                          0x4UL                                               /**< Bit mask for RAC_LNAMIXRFATTDCEN2           */
#define _RAC_RFPATHEN2_LNAMIXRFATTDCEN2_DEFAULT                       0x00000001UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXRFATTDCEN2_disable                       0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXRFATTDCEN2_enable                        0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_LNAMIXRFATTDCEN2_DEFAULT                        (_RAC_RFPATHEN2_LNAMIXRFATTDCEN2_DEFAULT << 2)      /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXRFATTDCEN2_disable                        (_RAC_RFPATHEN2_LNAMIXRFATTDCEN2_disable << 2)      /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXRFATTDCEN2_enable                         (_RAC_RFPATHEN2_LNAMIXRFATTDCEN2_enable << 2)       /**< Shifted mode enable for RAC_RFPATHEN2       */
#define RAC_RFPATHEN2_LNAMIXRFPKDENRF2                                (0x1UL << 3)                                        /**< LNAMIXRFPKDENRF2                            */
#define _RAC_RFPATHEN2_LNAMIXRFPKDENRF2_SHIFT                         3                                                   /**< Shift value for RAC_LNAMIXRFPKDENRF2        */
#define _RAC_RFPATHEN2_LNAMIXRFPKDENRF2_MASK                          0x8UL                                               /**< Bit mask for RAC_LNAMIXRFPKDENRF2           */
#define _RAC_RFPATHEN2_LNAMIXRFPKDENRF2_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXRFPKDENRF2_disable                       0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXRFPKDENRF2_enable_path2                  0x00000001UL                                        /**< Mode enable_path2 for RAC_RFPATHEN2         */
#define RAC_RFPATHEN2_LNAMIXRFPKDENRF2_DEFAULT                        (_RAC_RFPATHEN2_LNAMIXRFPKDENRF2_DEFAULT << 3)      /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXRFPKDENRF2_disable                        (_RAC_RFPATHEN2_LNAMIXRFPKDENRF2_disable << 3)      /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXRFPKDENRF2_enable_path2                   (_RAC_RFPATHEN2_LNAMIXRFPKDENRF2_enable_path2 << 3) /**< Shifted mode enable_path2 for RAC_RFPATHEN2 */
#define RAC_RFPATHEN2_LNAMIXTRSW2                                     (0x1UL << 4)                                        /**< LNAMIXTRSW2                                 */
#define _RAC_RFPATHEN2_LNAMIXTRSW2_SHIFT                              4                                                   /**< Shift value for RAC_LNAMIXTRSW2             */
#define _RAC_RFPATHEN2_LNAMIXTRSW2_MASK                               0x10UL                                              /**< Bit mask for RAC_LNAMIXTRSW2                */
#define _RAC_RFPATHEN2_LNAMIXTRSW2_DEFAULT                            0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXTRSW2_disable                            0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_LNAMIXTRSW2_enable                             0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_LNAMIXTRSW2_DEFAULT                             (_RAC_RFPATHEN2_LNAMIXTRSW2_DEFAULT << 4)           /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXTRSW2_disable                             (_RAC_RFPATHEN2_LNAMIXTRSW2_disable << 4)           /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_LNAMIXTRSW2_enable                              (_RAC_RFPATHEN2_LNAMIXTRSW2_enable << 4)            /**< Shifted mode enable for RAC_RFPATHEN2       */
#define RAC_RFPATHEN2_PAENANT2                                        (0x1UL << 5)                                        /**< PAENANT2                                    */
#define _RAC_RFPATHEN2_PAENANT2_SHIFT                                 5                                                   /**< Shift value for RAC_PAENANT2                */
#define _RAC_RFPATHEN2_PAENANT2_MASK                                  0x20UL                                              /**< Bit mask for RAC_PAENANT2                   */
#define _RAC_RFPATHEN2_PAENANT2_DEFAULT                               0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_PAENANT2_disable                               0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_PAENANT2_enable                                0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_PAENANT2_DEFAULT                                (_RAC_RFPATHEN2_PAENANT2_DEFAULT << 5)              /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_PAENANT2_disable                                (_RAC_RFPATHEN2_PAENANT2_disable << 5)              /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_PAENANT2_enable                                 (_RAC_RFPATHEN2_PAENANT2_enable << 5)               /**< Shifted mode enable for RAC_RFPATHEN2       */
#define RAC_RFPATHEN2_PAENPA20DBM                                     (0x1UL << 6)                                        /**< PAENPA20DBM                                 */
#define _RAC_RFPATHEN2_PAENPA20DBM_SHIFT                              6                                                   /**< Shift value for RAC_PAENPA20DBM             */
#define _RAC_RFPATHEN2_PAENPA20DBM_MASK                               0x40UL                                              /**< Bit mask for RAC_PAENPA20DBM                */
#define _RAC_RFPATHEN2_PAENPA20DBM_DEFAULT                            0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_PAENPA20DBM_disable                            0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_PAENPA20DBM_enable                             0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_PAENPA20DBM_DEFAULT                             (_RAC_RFPATHEN2_PAENPA20DBM_DEFAULT << 6)           /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_PAENPA20DBM_disable                             (_RAC_RFPATHEN2_PAENPA20DBM_disable << 6)           /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_PAENPA20DBM_enable                              (_RAC_RFPATHEN2_PAENPA20DBM_enable << 6)            /**< Shifted mode enable for RAC_RFPATHEN2       */
#define RAC_RFPATHEN2_PAENPAPREDRV20DBM                               (0x1UL << 7)                                        /**< PAENPAPREDRV20DBM                           */
#define _RAC_RFPATHEN2_PAENPAPREDRV20DBM_SHIFT                        7                                                   /**< Shift value for RAC_PAENPAPREDRV20DBM       */
#define _RAC_RFPATHEN2_PAENPAPREDRV20DBM_MASK                         0x80UL                                              /**< Bit mask for RAC_PAENPAPREDRV20DBM          */
#define _RAC_RFPATHEN2_PAENPAPREDRV20DBM_DEFAULT                      0x00000000UL                                        /**< Mode DEFAULT for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_PAENPAPREDRV20DBM_disable                      0x00000000UL                                        /**< Mode disable for RAC_RFPATHEN2              */
#define _RAC_RFPATHEN2_PAENPAPREDRV20DBM_enable                       0x00000001UL                                        /**< Mode enable for RAC_RFPATHEN2               */
#define RAC_RFPATHEN2_PAENPAPREDRV20DBM_DEFAULT                       (_RAC_RFPATHEN2_PAENPAPREDRV20DBM_DEFAULT << 7)     /**< Shifted mode DEFAULT for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_PAENPAPREDRV20DBM_disable                       (_RAC_RFPATHEN2_PAENPAPREDRV20DBM_disable << 7)     /**< Shifted mode disable for RAC_RFPATHEN2      */
#define RAC_RFPATHEN2_PAENPAPREDRV20DBM_enable                        (_RAC_RFPATHEN2_PAENPAPREDRV20DBM_enable << 7)      /**< Shifted mode enable for RAC_RFPATHEN2       */

/* Bit fields for RAC RX */
#define _RAC_RX_RESETVALUE                                            0x00000410UL                                       /**< Default value for RAC_RX                    */
#define _RAC_RX_MASK                                                  0x00003FFFUL                                       /**< Mask for RAC_RX                             */
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
#define _RAC_RX_SYMMDMODE_SHIFT                                       9                                                  /**< Shift value for RAC_SYMMDMODE               */
#define _RAC_RX_SYMMDMODE_MASK                                        0xE00UL                                            /**< Bit mask for RAC_SYMMDMODE                  */
#define _RAC_RX_SYMMDMODE_DEFAULT                                     0x00000002UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYMMDMODE_rx_w_swctrl                                 0x00000000UL                                       /**< Mode rx_w_swctrl for RAC_RX                 */
#define _RAC_RX_SYMMDMODE_rx_wo_swctrl                                0x00000001UL                                       /**< Mode rx_wo_swctrl for RAC_RX                */
#define _RAC_RX_SYMMDMODE_qnc_dsm2                                    0x00000002UL                                       /**< Mode qnc_dsm2 for RAC_RX                    */
#define _RAC_RX_SYMMDMODE_qnc_dsm3                                    0x00000003UL                                       /**< Mode qnc_dsm3 for RAC_RX                    */
#define _RAC_RX_SYMMDMODE_rxlp_wo_swctrl                              0x00000004UL                                       /**< Mode rxlp_wo_swctrl for RAC_RX              */
#define _RAC_RX_SYMMDMODE_notuse_5                                    0x00000005UL                                       /**< Mode notuse_5 for RAC_RX                    */
#define _RAC_RX_SYMMDMODE_notuse_6                                    0x00000006UL                                       /**< Mode notuse_6 for RAC_RX                    */
#define _RAC_RX_SYMMDMODE_notuse_7                                    0x00000007UL                                       /**< Mode notuse_7 for RAC_RX                    */
#define RAC_RX_SYMMDMODE_DEFAULT                                      (_RAC_RX_SYMMDMODE_DEFAULT << 9)                   /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYMMDMODE_rx_w_swctrl                                  (_RAC_RX_SYMMDMODE_rx_w_swctrl << 9)               /**< Shifted mode rx_w_swctrl for RAC_RX         */
#define RAC_RX_SYMMDMODE_rx_wo_swctrl                                 (_RAC_RX_SYMMDMODE_rx_wo_swctrl << 9)              /**< Shifted mode rx_wo_swctrl for RAC_RX        */
#define RAC_RX_SYMMDMODE_qnc_dsm2                                     (_RAC_RX_SYMMDMODE_qnc_dsm2 << 9)                  /**< Shifted mode qnc_dsm2 for RAC_RX            */
#define RAC_RX_SYMMDMODE_qnc_dsm3                                     (_RAC_RX_SYMMDMODE_qnc_dsm3 << 9)                  /**< Shifted mode qnc_dsm3 for RAC_RX            */
#define RAC_RX_SYMMDMODE_rxlp_wo_swctrl                               (_RAC_RX_SYMMDMODE_rxlp_wo_swctrl << 9)            /**< Shifted mode rxlp_wo_swctrl for RAC_RX      */
#define RAC_RX_SYMMDMODE_notuse_5                                     (_RAC_RX_SYMMDMODE_notuse_5 << 9)                  /**< Shifted mode notuse_5 for RAC_RX            */
#define RAC_RX_SYMMDMODE_notuse_6                                     (_RAC_RX_SYMMDMODE_notuse_6 << 9)                  /**< Shifted mode notuse_6 for RAC_RX            */
#define RAC_RX_SYMMDMODE_notuse_7                                     (_RAC_RX_SYMMDMODE_notuse_7 << 9)                  /**< Shifted mode notuse_7 for RAC_RX            */
#define RAC_RX_SYPFDCHPLPEN                                           (0x1UL << 12)                                      /**< SYPFDCHPLPEN                                */
#define _RAC_RX_SYPFDCHPLPEN_SHIFT                                    12                                                 /**< Shift value for RAC_SYPFDCHPLPEN            */
#define _RAC_RX_SYPFDCHPLPEN_MASK                                     0x1000UL                                           /**< Bit mask for RAC_SYPFDCHPLPEN               */
#define _RAC_RX_SYPFDCHPLPEN_DEFAULT                                  0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYPFDCHPLPEN_disable                                  0x00000000UL                                       /**< Mode disable for RAC_RX                     */
#define _RAC_RX_SYPFDCHPLPEN_enable                                   0x00000001UL                                       /**< Mode enable for RAC_RX                      */
#define RAC_RX_SYPFDCHPLPEN_DEFAULT                                   (_RAC_RX_SYPFDCHPLPEN_DEFAULT << 12)               /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYPFDCHPLPEN_disable                                   (_RAC_RX_SYPFDCHPLPEN_disable << 12)               /**< Shifted mode disable for RAC_RX             */
#define RAC_RX_SYPFDCHPLPEN_enable                                    (_RAC_RX_SYPFDCHPLPEN_enable << 12)                /**< Shifted mode enable for RAC_RX              */
#define RAC_RX_SYPFDFPWEN                                             (0x1UL << 13)                                      /**< SYPFDFPWEN                                  */
#define _RAC_RX_SYPFDFPWEN_SHIFT                                      13                                                 /**< Shift value for RAC_SYPFDFPWEN              */
#define _RAC_RX_SYPFDFPWEN_MASK                                       0x2000UL                                           /**< Bit mask for RAC_SYPFDFPWEN                 */
#define _RAC_RX_SYPFDFPWEN_DEFAULT                                    0x00000000UL                                       /**< Mode DEFAULT for RAC_RX                     */
#define _RAC_RX_SYPFDFPWEN_disable                                    0x00000000UL                                       /**< Mode disable for RAC_RX                     */
#define _RAC_RX_SYPFDFPWEN_enable                                     0x00000001UL                                       /**< Mode enable for RAC_RX                      */
#define RAC_RX_SYPFDFPWEN_DEFAULT                                     (_RAC_RX_SYPFDFPWEN_DEFAULT << 13)                 /**< Shifted mode DEFAULT for RAC_RX             */
#define RAC_RX_SYPFDFPWEN_disable                                     (_RAC_RX_SYPFDFPWEN_disable << 13)                 /**< Shifted mode disable for RAC_RX             */
#define RAC_RX_SYPFDFPWEN_enable                                      (_RAC_RX_SYPFDFPWEN_enable << 13)                  /**< Shifted mode enable for RAC_RX              */

/* Bit fields for RAC TX */
#define _RAC_TX_RESETVALUE                                            0x00000000UL                                /**< Default value for RAC_TX                    */
#define _RAC_TX_MASK                                                  0xFF3707FFUL                                /**< Mask for RAC_TX                             */
#define RAC_TX_PABLEEDDRVREG0DBM                                      (0x1UL << 0)                                /**< PABLEEDDRVREG0DBM                           */
#define _RAC_TX_PABLEEDDRVREG0DBM_SHIFT                               0                                           /**< Shift value for RAC_PABLEEDDRVREG0DBM       */
#define _RAC_TX_PABLEEDDRVREG0DBM_MASK                                0x1UL                                       /**< Bit mask for RAC_PABLEEDDRVREG0DBM          */
#define _RAC_TX_PABLEEDDRVREG0DBM_DEFAULT                             0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PABLEEDDRVREG0DBM_disable                             0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PABLEEDDRVREG0DBM_enable                              0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PABLEEDDRVREG0DBM_DEFAULT                              (_RAC_TX_PABLEEDDRVREG0DBM_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PABLEEDDRVREG0DBM_disable                              (_RAC_TX_PABLEEDDRVREG0DBM_disable << 0)    /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PABLEEDDRVREG0DBM_enable                               (_RAC_TX_PABLEEDDRVREG0DBM_enable << 0)     /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PABLEEDREG0DBM                                         (0x1UL << 1)                                /**< PABLEEDREG0DBM                              */
#define _RAC_TX_PABLEEDREG0DBM_SHIFT                                  1                                           /**< Shift value for RAC_PABLEEDREG0DBM          */
#define _RAC_TX_PABLEEDREG0DBM_MASK                                   0x2UL                                       /**< Bit mask for RAC_PABLEEDREG0DBM             */
#define _RAC_TX_PABLEEDREG0DBM_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PABLEEDREG0DBM_disable                                0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PABLEEDREG0DBM_enable                                 0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PABLEEDREG0DBM_DEFAULT                                 (_RAC_TX_PABLEEDREG0DBM_DEFAULT << 1)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PABLEEDREG0DBM_disable                                 (_RAC_TX_PABLEEDREG0DBM_disable << 1)       /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PABLEEDREG0DBM_enable                                  (_RAC_TX_PABLEEDREG0DBM_enable << 1)        /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENBIAS0DBM                                           (0x1UL << 2)                                /**< PAENBIAS0DBM                                */
#define _RAC_TX_PAENBIAS0DBM_SHIFT                                    2                                           /**< Shift value for RAC_PAENBIAS0DBM            */
#define _RAC_TX_PAENBIAS0DBM_MASK                                     0x4UL                                       /**< Bit mask for RAC_PAENBIAS0DBM               */
#define _RAC_TX_PAENBIAS0DBM_DEFAULT                                  0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENBIAS0DBM_disable                                  0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENBIAS0DBM_enable                                   0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENBIAS0DBM_DEFAULT                                   (_RAC_TX_PAENBIAS0DBM_DEFAULT << 2)         /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENBIAS0DBM_disable                                   (_RAC_TX_PAENBIAS0DBM_disable << 2)         /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENBIAS0DBM_enable                                    (_RAC_TX_PAENBIAS0DBM_enable << 2)          /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENDRVREG0DBM                                         (0x1UL << 3)                                /**< PAENDRVREG0DBM                              */
#define _RAC_TX_PAENDRVREG0DBM_SHIFT                                  3                                           /**< Shift value for RAC_PAENDRVREG0DBM          */
#define _RAC_TX_PAENDRVREG0DBM_MASK                                   0x8UL                                       /**< Bit mask for RAC_PAENDRVREG0DBM             */
#define _RAC_TX_PAENDRVREG0DBM_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENDRVREG0DBM_disable                                0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENDRVREG0DBM_enable                                 0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENDRVREG0DBM_DEFAULT                                 (_RAC_TX_PAENDRVREG0DBM_DEFAULT << 3)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENDRVREG0DBM_disable                                 (_RAC_TX_PAENDRVREG0DBM_disable << 3)       /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENDRVREG0DBM_enable                                  (_RAC_TX_PAENDRVREG0DBM_enable << 3)        /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENDRVREGBIAS0DBM                                     (0x1UL << 4)                                /**< PAENDRVREGBIAS0DBM                          */
#define _RAC_TX_PAENDRVREGBIAS0DBM_SHIFT                              4                                           /**< Shift value for RAC_PAENDRVREGBIAS0DBM      */
#define _RAC_TX_PAENDRVREGBIAS0DBM_MASK                               0x10UL                                      /**< Bit mask for RAC_PAENDRVREGBIAS0DBM         */
#define _RAC_TX_PAENDRVREGBIAS0DBM_DEFAULT                            0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENDRVREGBIAS0DBM_disable                            0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENDRVREGBIAS0DBM_enable                             0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENDRVREGBIAS0DBM_DEFAULT                             (_RAC_TX_PAENDRVREGBIAS0DBM_DEFAULT << 4)   /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENDRVREGBIAS0DBM_disable                             (_RAC_TX_PAENDRVREGBIAS0DBM_disable << 4)   /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENDRVREGBIAS0DBM_enable                              (_RAC_TX_PAENDRVREGBIAS0DBM_enable << 4)    /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENLO0DBM                                             (0x1UL << 5)                                /**< PAENLO0DBM                                  */
#define _RAC_TX_PAENLO0DBM_SHIFT                                      5                                           /**< Shift value for RAC_PAENLO0DBM              */
#define _RAC_TX_PAENLO0DBM_MASK                                       0x20UL                                      /**< Bit mask for RAC_PAENLO0DBM                 */
#define _RAC_TX_PAENLO0DBM_DEFAULT                                    0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENLO0DBM_disable                                    0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENLO0DBM_enable                                     0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENLO0DBM_DEFAULT                                     (_RAC_TX_PAENLO0DBM_DEFAULT << 5)           /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENLO0DBM_disable                                     (_RAC_TX_PAENLO0DBM_disable << 5)           /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENLO0DBM_enable                                      (_RAC_TX_PAENLO0DBM_enable << 5)            /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENREG0DBM                                            (0x1UL << 6)                                /**< PAENREG0DBM                                 */
#define _RAC_TX_PAENREG0DBM_SHIFT                                     6                                           /**< Shift value for RAC_PAENREG0DBM             */
#define _RAC_TX_PAENREG0DBM_MASK                                      0x40UL                                      /**< Bit mask for RAC_PAENREG0DBM                */
#define _RAC_TX_PAENREG0DBM_DEFAULT                                   0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENREG0DBM_disable                                   0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENREG0DBM_enable                                    0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENREG0DBM_DEFAULT                                    (_RAC_TX_PAENREG0DBM_DEFAULT << 6)          /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENREG0DBM_disable                                    (_RAC_TX_PAENREG0DBM_disable << 6)          /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENREG0DBM_enable                                     (_RAC_TX_PAENREG0DBM_enable << 6)           /**< Shifted mode enable for RAC_TX              */
#define _RAC_TX_PAENTAPCAP0DBM_SHIFT                                  7                                           /**< Shift value for RAC_PAENTAPCAP0DBM          */
#define _RAC_TX_PAENTAPCAP0DBM_MASK                                   0x380UL                                     /**< Bit mask for RAC_PAENTAPCAP0DBM             */
#define _RAC_TX_PAENTAPCAP0DBM_DEFAULT                                0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENTAPCAP0DBM_cap_0f                                 0x00000000UL                                /**< Mode cap_0f for RAC_TX                      */
#define _RAC_TX_PAENTAPCAP0DBM_cap_0p35pF                             0x00000001UL                                /**< Mode cap_0p35pF for RAC_TX                  */
#define _RAC_TX_PAENTAPCAP0DBM_cap_0p7pF                              0x00000002UL                                /**< Mode cap_0p7pF for RAC_TX                   */
#define _RAC_TX_PAENTAPCAP0DBM_cap_1p05pF                             0x00000003UL                                /**< Mode cap_1p05pF for RAC_TX                  */
#define _RAC_TX_PAENTAPCAP0DBM_cap_1p4pF                              0x00000004UL                                /**< Mode cap_1p4pF for RAC_TX                   */
#define _RAC_TX_PAENTAPCAP0DBM_cap_1p75pF                             0x00000005UL                                /**< Mode cap_1p75pF for RAC_TX                  */
#define _RAC_TX_PAENTAPCAP0DBM_cap_2p1pF                              0x00000006UL                                /**< Mode cap_2p1pF for RAC_TX                   */
#define _RAC_TX_PAENTAPCAP0DBM_cap_2p45pF                             0x00000007UL                                /**< Mode cap_2p45pF for RAC_TX                  */
#define RAC_TX_PAENTAPCAP0DBM_DEFAULT                                 (_RAC_TX_PAENTAPCAP0DBM_DEFAULT << 7)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENTAPCAP0DBM_cap_0f                                  (_RAC_TX_PAENTAPCAP0DBM_cap_0f << 7)        /**< Shifted mode cap_0f for RAC_TX              */
#define RAC_TX_PAENTAPCAP0DBM_cap_0p35pF                              (_RAC_TX_PAENTAPCAP0DBM_cap_0p35pF << 7)    /**< Shifted mode cap_0p35pF for RAC_TX          */
#define RAC_TX_PAENTAPCAP0DBM_cap_0p7pF                               (_RAC_TX_PAENTAPCAP0DBM_cap_0p7pF << 7)     /**< Shifted mode cap_0p7pF for RAC_TX           */
#define RAC_TX_PAENTAPCAP0DBM_cap_1p05pF                              (_RAC_TX_PAENTAPCAP0DBM_cap_1p05pF << 7)    /**< Shifted mode cap_1p05pF for RAC_TX          */
#define RAC_TX_PAENTAPCAP0DBM_cap_1p4pF                               (_RAC_TX_PAENTAPCAP0DBM_cap_1p4pF << 7)     /**< Shifted mode cap_1p4pF for RAC_TX           */
#define RAC_TX_PAENTAPCAP0DBM_cap_1p75pF                              (_RAC_TX_PAENTAPCAP0DBM_cap_1p75pF << 7)    /**< Shifted mode cap_1p75pF for RAC_TX          */
#define RAC_TX_PAENTAPCAP0DBM_cap_2p1pF                               (_RAC_TX_PAENTAPCAP0DBM_cap_2p1pF << 7)     /**< Shifted mode cap_2p1pF for RAC_TX           */
#define RAC_TX_PAENTAPCAP0DBM_cap_2p45pF                              (_RAC_TX_PAENTAPCAP0DBM_cap_2p45pF << 7)    /**< Shifted mode cap_2p45pF for RAC_TX          */
#define RAC_TX_ENPATRIMPASLICE0DBM                                    (0x1UL << 10)                               /**< Override                                    */
#define _RAC_TX_ENPATRIMPASLICE0DBM_SHIFT                             10                                          /**< Shift value for RAC_ENPATRIMPASLICE0DBM     */
#define _RAC_TX_ENPATRIMPASLICE0DBM_MASK                              0x400UL                                     /**< Bit mask for RAC_ENPATRIMPASLICE0DBM        */
#define _RAC_TX_ENPATRIMPASLICE0DBM_DEFAULT                           0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENPATRIMPASLICE0DBM_DEFAULT                            (_RAC_TX_ENPATRIMPASLICE0DBM_DEFAULT << 10) /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAEN10DBMM                                             (0x1UL << 16)                               /**< PAEN10DBMM                                  */
#define _RAC_TX_PAEN10DBMM_SHIFT                                      16                                          /**< Shift value for RAC_PAEN10DBMM              */
#define _RAC_TX_PAEN10DBMM_MASK                                       0x10000UL                                   /**< Bit mask for RAC_PAEN10DBMM                 */
#define _RAC_TX_PAEN10DBMM_DEFAULT                                    0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAEN10DBMM_disable                                    0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAEN10DBMM_enable                                     0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAEN10DBMM_DEFAULT                                     (_RAC_TX_PAEN10DBMM_DEFAULT << 16)          /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAEN10DBMM_disable                                     (_RAC_TX_PAEN10DBMM_disable << 16)          /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAEN10DBMM_enable                                      (_RAC_TX_PAEN10DBMM_enable << 16)           /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAEN10DBMP                                             (0x1UL << 17)                               /**< PAEN10DBMP                                  */
#define _RAC_TX_PAEN10DBMP_SHIFT                                      17                                          /**< Shift value for RAC_PAEN10DBMP              */
#define _RAC_TX_PAEN10DBMP_MASK                                       0x20000UL                                   /**< Bit mask for RAC_PAEN10DBMP                 */
#define _RAC_TX_PAEN10DBMP_DEFAULT                                    0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAEN10DBMP_disable                                    0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAEN10DBMP_enable                                     0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAEN10DBMP_DEFAULT                                     (_RAC_TX_PAEN10DBMP_DEFAULT << 17)          /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAEN10DBMP_disable                                     (_RAC_TX_PAEN10DBMP_disable << 17)          /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAEN10DBMP_enable                                      (_RAC_TX_PAEN10DBMP_enable << 17)           /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAEN10DBMPDRV                                          (0x1UL << 18)                               /**< PAEN10DBMPDRV                               */
#define _RAC_TX_PAEN10DBMPDRV_SHIFT                                   18                                          /**< Shift value for RAC_PAEN10DBMPDRV           */
#define _RAC_TX_PAEN10DBMPDRV_MASK                                    0x40000UL                                   /**< Bit mask for RAC_PAEN10DBMPDRV              */
#define _RAC_TX_PAEN10DBMPDRV_DEFAULT                                 0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAEN10DBMPDRV_disable                                 0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAEN10DBMPDRV_enable                                  0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAEN10DBMPDRV_DEFAULT                                  (_RAC_TX_PAEN10DBMPDRV_DEFAULT << 18)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAEN10DBMPDRV_disable                                  (_RAC_TX_PAEN10DBMPDRV_disable << 18)       /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAEN10DBMPDRV_enable                                   (_RAC_TX_PAEN10DBMPDRV_enable << 18)        /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAEN20DBM                                              (0x1UL << 20)                               /**< PAEN20DBM                                   */
#define _RAC_TX_PAEN20DBM_SHIFT                                       20                                          /**< Shift value for RAC_PAEN20DBM               */
#define _RAC_TX_PAEN20DBM_MASK                                        0x100000UL                                  /**< Bit mask for RAC_PAEN20DBM                  */
#define _RAC_TX_PAEN20DBM_DEFAULT                                     0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAEN20DBM_disable                                     0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAEN20DBM_enable                                      0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAEN20DBM_DEFAULT                                      (_RAC_TX_PAEN20DBM_DEFAULT << 20)           /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAEN20DBM_disable                                      (_RAC_TX_PAEN20DBM_disable << 20)           /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAEN20DBM_enable                                       (_RAC_TX_PAEN20DBM_enable << 20)            /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAEN20DBMPDRV                                          (0x1UL << 21)                               /**< PAEN20DBMPDRV                               */
#define _RAC_TX_PAEN20DBMPDRV_SHIFT                                   21                                          /**< Shift value for RAC_PAEN20DBMPDRV           */
#define _RAC_TX_PAEN20DBMPDRV_MASK                                    0x200000UL                                  /**< Bit mask for RAC_PAEN20DBMPDRV              */
#define _RAC_TX_PAEN20DBMPDRV_DEFAULT                                 0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAEN20DBMPDRV_disable                                 0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAEN20DBMPDRV_enable                                  0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAEN20DBMPDRV_DEFAULT                                  (_RAC_TX_PAEN20DBMPDRV_DEFAULT << 21)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAEN20DBMPDRV_disable                                  (_RAC_TX_PAEN20DBMPDRV_disable << 21)       /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAEN20DBMPDRV_enable                                   (_RAC_TX_PAEN20DBMPDRV_enable << 21)        /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENBLEEDPDRVLDO                                       (0x1UL << 24)                               /**< PAENBLEEDPDRVLDO                            */
#define _RAC_TX_PAENBLEEDPDRVLDO_SHIFT                                24                                          /**< Shift value for RAC_PAENBLEEDPDRVLDO        */
#define _RAC_TX_PAENBLEEDPDRVLDO_MASK                                 0x1000000UL                                 /**< Bit mask for RAC_PAENBLEEDPDRVLDO           */
#define _RAC_TX_PAENBLEEDPDRVLDO_DEFAULT                              0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENBLEEDPDRVLDO_disable                              0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENBLEEDPDRVLDO_enable                               0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENBLEEDPDRVLDO_DEFAULT                               (_RAC_TX_PAENBLEEDPDRVLDO_DEFAULT << 24)    /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENBLEEDPDRVLDO_disable                               (_RAC_TX_PAENBLEEDPDRVLDO_disable << 24)    /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENBLEEDPDRVLDO_enable                                (_RAC_TX_PAENBLEEDPDRVLDO_enable << 24)     /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENBLEEDPREREG                                        (0x1UL << 25)                               /**< PAENBLEEDPREREG                             */
#define _RAC_TX_PAENBLEEDPREREG_SHIFT                                 25                                          /**< Shift value for RAC_PAENBLEEDPREREG         */
#define _RAC_TX_PAENBLEEDPREREG_MASK                                  0x2000000UL                                 /**< Bit mask for RAC_PAENBLEEDPREREG            */
#define _RAC_TX_PAENBLEEDPREREG_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENBLEEDPREREG_disable                               0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENBLEEDPREREG_enable                                0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENBLEEDPREREG_DEFAULT                                (_RAC_TX_PAENBLEEDPREREG_DEFAULT << 25)     /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENBLEEDPREREG_disable                                (_RAC_TX_PAENBLEEDPREREG_disable << 25)     /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENBLEEDPREREG_enable                                 (_RAC_TX_PAENBLEEDPREREG_enable << 25)      /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENLDOHVPDRVLDO                                       (0x1UL << 26)                               /**< PAENLDOHVPDRVLDO                            */
#define _RAC_TX_PAENLDOHVPDRVLDO_SHIFT                                26                                          /**< Shift value for RAC_PAENLDOHVPDRVLDO        */
#define _RAC_TX_PAENLDOHVPDRVLDO_MASK                                 0x4000000UL                                 /**< Bit mask for RAC_PAENLDOHVPDRVLDO           */
#define _RAC_TX_PAENLDOHVPDRVLDO_DEFAULT                              0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENLDOHVPDRVLDO_disable                              0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENLDOHVPDRVLDO_enable                               0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENLDOHVPDRVLDO_DEFAULT                               (_RAC_TX_PAENLDOHVPDRVLDO_DEFAULT << 26)    /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENLDOHVPDRVLDO_disable                               (_RAC_TX_PAENLDOHVPDRVLDO_disable << 26)    /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENLDOHVPDRVLDO_enable                                (_RAC_TX_PAENLDOHVPDRVLDO_enable << 26)     /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENLDOHVPREREG                                        (0x1UL << 27)                               /**< PAENLDOHVPREREG                             */
#define _RAC_TX_PAENLDOHVPREREG_SHIFT                                 27                                          /**< Shift value for RAC_PAENLDOHVPREREG         */
#define _RAC_TX_PAENLDOHVPREREG_MASK                                  0x8000000UL                                 /**< Bit mask for RAC_PAENLDOHVPREREG            */
#define _RAC_TX_PAENLDOHVPREREG_DEFAULT                               0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENLDOHVPREREG_disable                               0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENLDOHVPREREG_enable                                0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENLDOHVPREREG_DEFAULT                                (_RAC_TX_PAENLDOHVPREREG_DEFAULT << 27)     /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENLDOHVPREREG_disable                                (_RAC_TX_PAENLDOHVPREREG_disable << 27)     /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENLDOHVPREREG_enable                                 (_RAC_TX_PAENLDOHVPREREG_enable << 27)      /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_PAENPAOUT                                              (0x1UL << 28)                               /**< PAENPAOUT                                   */
#define _RAC_TX_PAENPAOUT_SHIFT                                       28                                          /**< Shift value for RAC_PAENPAOUT               */
#define _RAC_TX_PAENPAOUT_MASK                                        0x10000000UL                                /**< Bit mask for RAC_PAENPAOUT                  */
#define _RAC_TX_PAENPAOUT_DEFAULT                                     0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define _RAC_TX_PAENPAOUT_disable                                     0x00000000UL                                /**< Mode disable for RAC_TX                     */
#define _RAC_TX_PAENPAOUT_enable                                      0x00000001UL                                /**< Mode enable for RAC_TX                      */
#define RAC_TX_PAENPAOUT_DEFAULT                                      (_RAC_TX_PAENPAOUT_DEFAULT << 28)           /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_PAENPAOUT_disable                                      (_RAC_TX_PAENPAOUT_disable << 28)           /**< Shifted mode disable for RAC_TX             */
#define RAC_TX_PAENPAOUT_enable                                       (_RAC_TX_PAENPAOUT_enable << 28)            /**< Shifted mode enable for RAC_TX              */
#define RAC_TX_ENXOSQBUFFILT                                          (0x1UL << 29)                               /**< Override                                    */
#define _RAC_TX_ENXOSQBUFFILT_SHIFT                                   29                                          /**< Shift value for RAC_ENXOSQBUFFILT           */
#define _RAC_TX_ENXOSQBUFFILT_MASK                                    0x20000000UL                                /**< Bit mask for RAC_ENXOSQBUFFILT              */
#define _RAC_TX_ENXOSQBUFFILT_DEFAULT                                 0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENXOSQBUFFILT_DEFAULT                                  (_RAC_TX_ENXOSQBUFFILT_DEFAULT << 29)       /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_ENPAPOWER                                              (0x1UL << 30)                               /**< Override                                    */
#define _RAC_TX_ENPAPOWER_SHIFT                                       30                                          /**< Shift value for RAC_ENPAPOWER               */
#define _RAC_TX_ENPAPOWER_MASK                                        0x40000000UL                                /**< Bit mask for RAC_ENPAPOWER                  */
#define _RAC_TX_ENPAPOWER_DEFAULT                                     0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENPAPOWER_DEFAULT                                      (_RAC_TX_ENPAPOWER_DEFAULT << 30)           /**< Shifted mode DEFAULT for RAC_TX             */
#define RAC_TX_ENPASELSLICE                                           (0x1UL << 31)                               /**< Override                                    */
#define _RAC_TX_ENPASELSLICE_SHIFT                                    31                                          /**< Shift value for RAC_ENPASELSLICE            */
#define _RAC_TX_ENPASELSLICE_MASK                                     0x80000000UL                                /**< Bit mask for RAC_ENPASELSLICE               */
#define _RAC_TX_ENPASELSLICE_DEFAULT                                  0x00000000UL                                /**< Mode DEFAULT for RAC_TX                     */
#define RAC_TX_ENPASELSLICE_DEFAULT                                   (_RAC_TX_ENPASELSLICE_DEFAULT << 31)        /**< Shifted mode DEFAULT for RAC_TX             */

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
#define _RAC_SYTRIM1_RESETVALUE                                       0x00003FD0UL                                       /**< Default value for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_MASK                                             0x0001FFFFUL                                       /**< Mask for RAC_SYTRIM1                        */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_SHIFT                         0                                                  /**< Shift value for RAC_SYLODIVLDOTRIMCORE      */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_MASK                          0x3UL                                              /**< Bit mask for RAC_SYLODIVLDOTRIMCORE         */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_DEFAULT                       0x00000000UL                                       /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_RXLO                          0x00000000UL                                       /**< Mode RXLO for RAC_SYTRIM1                   */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMCORE_TXLO                          0x00000003UL                                       /**< Mode TXLO for RAC_SYTRIM1                   */
#define RAC_SYTRIM1_SYLODIVLDOTRIMCORE_DEFAULT                        (_RAC_SYTRIM1_SYLODIVLDOTRIMCORE_DEFAULT << 0)     /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYLODIVLDOTRIMCORE_RXLO                           (_RAC_SYTRIM1_SYLODIVLDOTRIMCORE_RXLO << 0)        /**< Shifted mode RXLO for RAC_SYTRIM1           */
#define RAC_SYTRIM1_SYLODIVLDOTRIMCORE_TXLO                           (_RAC_SYTRIM1_SYLODIVLDOTRIMCORE_TXLO << 0)        /**< Shifted mode TXLO for RAC_SYTRIM1           */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_SHIFT                         2                                                  /**< Shift value for RAC_SYLODIVLDOTRIMNDIO      */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_MASK                          0x3CUL                                             /**< Bit mask for RAC_SYLODIVLDOTRIMNDIO         */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_DEFAULT                       0x00000004UL                                       /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p08                     0x00000000UL                                       /**< Mode vreg_1p08 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p11                     0x00000001UL                                       /**< Mode vreg_1p11 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p15                     0x00000002UL                                       /**< Mode vreg_1p15 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p18                     0x00000003UL                                       /**< Mode vreg_1p18 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p21                     0x00000004UL                                       /**< Mode vreg_1p21 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p24                     0x00000005UL                                       /**< Mode vreg_1p24 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p27                     0x00000006UL                                       /**< Mode vreg_1p27 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p29                     0x00000007UL                                       /**< Mode vreg_1p29 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p32                     0x00000008UL                                       /**< Mode vreg_1p32 for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p34                     0x00000009UL                                       /**< Mode vreg_1p34 for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_DEFAULT                        (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_DEFAULT << 2)     /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p08                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p08 << 2)   /**< Shifted mode vreg_1p08 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p11                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p11 << 2)   /**< Shifted mode vreg_1p11 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p15                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p15 << 2)   /**< Shifted mode vreg_1p15 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p18                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p18 << 2)   /**< Shifted mode vreg_1p18 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p21                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p21 << 2)   /**< Shifted mode vreg_1p21 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p24                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p24 << 2)   /**< Shifted mode vreg_1p24 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p27                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p27 << 2)   /**< Shifted mode vreg_1p27 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p29                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p29 << 2)   /**< Shifted mode vreg_1p29 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p32                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p32 << 2)   /**< Shifted mode vreg_1p32 for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p34                      (_RAC_SYTRIM1_SYLODIVLDOTRIMNDIO_vreg_1p34 << 2)   /**< Shifted mode vreg_1p34 for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_SHIFT                       6                                                  /**< Shift value for RAC_SYMMDREPLICA1CURRADJ    */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_MASK                        0x1C0UL                                            /**< Bit mask for RAC_SYMMDREPLICA1CURRADJ       */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_DEFAULT                     0x00000007UL                                       /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_8ua                    0x00000000UL                                       /**< Mode load_8ua for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_16u                    0x00000001UL                                       /**< Mode load_16u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_20ua                   0x00000002UL                                       /**< Mode load_20ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_28ua                   0x00000003UL                                       /**< Mode load_28ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_24ua                   0x00000004UL                                       /**< Mode load_24ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_32ua                   0x00000005UL                                       /**< Mode load_32ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_36ua                   0x00000006UL                                       /**< Mode load_36ua for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_44ua                   0x00000007UL                                       /**< Mode load_44ua for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_DEFAULT                      (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_DEFAULT << 6)   /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_8ua                     (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_8ua << 6)  /**< Shifted mode load_8ua for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_16u                     (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_16u << 6)  /**< Shifted mode load_16u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_20ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_20ua << 6) /**< Shifted mode load_20ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_28ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_28ua << 6) /**< Shifted mode load_28ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_24ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_24ua << 6) /**< Shifted mode load_24ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_32ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_32ua << 6) /**< Shifted mode load_32ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_36ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_36ua << 6) /**< Shifted mode load_36ua for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_44ua                    (_RAC_SYTRIM1_SYMMDREPLICA1CURRADJ_load_44ua << 6) /**< Shifted mode load_44ua for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_SHIFT                       9                                                  /**< Shift value for RAC_SYMMDREPLICA2CURRADJ    */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_MASK                        0xE00UL                                            /**< Bit mask for RAC_SYMMDREPLICA2CURRADJ       */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_DEFAULT                     0x00000007UL                                       /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_32u                    0x00000000UL                                       /**< Mode load_32u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_64u                    0x00000001UL                                       /**< Mode load_64u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_96u                    0x00000002UL                                       /**< Mode load_96u for RAC_SYTRIM1               */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_128u                   0x00000003UL                                       /**< Mode load_128u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_160u                   0x00000004UL                                       /**< Mode load_160u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_192u                   0x00000005UL                                       /**< Mode load_192u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_224u                   0x00000006UL                                       /**< Mode load_224u for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_256u                   0x00000007UL                                       /**< Mode load_256u for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_DEFAULT                      (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_DEFAULT << 9)   /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_32u                     (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_32u << 9)  /**< Shifted mode load_32u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_64u                     (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_64u << 9)  /**< Shifted mode load_64u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_96u                     (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_96u << 9)  /**< Shifted mode load_96u for RAC_SYTRIM1       */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_128u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_128u << 9) /**< Shifted mode load_128u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_160u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_160u << 9) /**< Shifted mode load_160u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_192u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_192u << 9) /**< Shifted mode load_192u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_224u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_224u << 9) /**< Shifted mode load_224u for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_256u                    (_RAC_SYTRIM1_SYMMDREPLICA2CURRADJ_load_256u << 9) /**< Shifted mode load_256u for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_SHIFT                        12                                                 /**< Shift value for RAC_SYTRIMMMDREGAMPBIAS     */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_MASK                         0x7000UL                                           /**< Bit mask for RAC_SYTRIMMMDREGAMPBIAS        */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_DEFAULT                      0x00000003UL                                       /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_14uA                    0x00000000UL                                       /**< Mode bias_14uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_20uA                    0x00000001UL                                       /**< Mode bias_20uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_26uA                    0x00000002UL                                       /**< Mode bias_26uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_32uA                    0x00000003UL                                       /**< Mode bias_32uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_38uA                    0x00000004UL                                       /**< Mode bias_38uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_44uA                    0x00000005UL                                       /**< Mode bias_44uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_50uA                    0x00000006UL                                       /**< Mode bias_50uA for RAC_SYTRIM1              */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_56uA                    0x00000007UL                                       /**< Mode bias_56uA for RAC_SYTRIM1              */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_DEFAULT                       (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_DEFAULT << 12)   /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_14uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_14uA << 12) /**< Shifted mode bias_14uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_20uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_20uA << 12) /**< Shifted mode bias_20uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_26uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_26uA << 12) /**< Shifted mode bias_26uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_32uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_32uA << 12) /**< Shifted mode bias_32uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_38uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_38uA << 12) /**< Shifted mode bias_38uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_44uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_44uA << 12) /**< Shifted mode bias_44uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_50uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_50uA << 12) /**< Shifted mode bias_50uA for RAC_SYTRIM1      */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_56uA                     (_RAC_SYTRIM1_SYTRIMMMDREGAMPBIAS_bias_56uA << 12) /**< Shifted mode bias_56uA for RAC_SYTRIM1      */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_SHIFT                          15                                                 /**< Shift value for RAC_SYTRIMMMDREGAMPBW       */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_MASK                           0x18000UL                                          /**< Bit mask for RAC_SYTRIMMMDREGAMPBW          */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_DEFAULT                        0x00000000UL                                       /**< Mode DEFAULT for RAC_SYTRIM1                */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_000f                         0x00000000UL                                       /**< Mode C_000f for RAC_SYTRIM1                 */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_300f                         0x00000001UL                                       /**< Mode C_300f for RAC_SYTRIM1                 */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_600f                         0x00000002UL                                       /**< Mode C_600f for RAC_SYTRIM1                 */
#define _RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_900f                         0x00000003UL                                       /**< Mode C_900f for RAC_SYTRIM1                 */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_DEFAULT                         (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_DEFAULT << 15)     /**< Shifted mode DEFAULT for RAC_SYTRIM1        */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_000f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_000f << 15)      /**< Shifted mode C_000f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_300f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_300f << 15)      /**< Shifted mode C_300f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_600f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_600f << 15)      /**< Shifted mode C_600f for RAC_SYTRIM1         */
#define RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_900f                          (_RAC_SYTRIM1_SYTRIMMMDREGAMPBW_C_900f << 15)      /**< Shifted mode C_900f for RAC_SYTRIM1         */

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
#define _RAC_SYLOEN_RESETVALUE                                        0x00000000UL                                       /**< Default value for RAC_SYLOEN                */
#define _RAC_SYLOEN_MASK                                              0x00001FFFUL                                       /**< Mask for RAC_SYLOEN                         */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN                              (0x1UL << 0)                                       /**< SYLODIVRLOADCCLK2G4EN                       */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_SHIFT                       0                                                  /**< Shift value for RAC_SYLODIVRLOADCCLK2G4EN   */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_MASK                        0x1UL                                              /**< Bit mask for RAC_SYLODIVRLOADCCLK2G4EN      */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_disable                     0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_enable                      0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_DEFAULT                      (_RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_DEFAULT << 0)   /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_disable                      (_RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_disable << 0)   /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_enable                       (_RAC_SYLOEN_SYLODIVRLOADCCLK2G4EN_enable << 0)    /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVRLO12G4EN                                   (0x1UL << 1)                                       /**< SYLODIVRLO12G4EN                            */
#define _RAC_SYLOEN_SYLODIVRLO12G4EN_SHIFT                            1                                                  /**< Shift value for RAC_SYLODIVRLO12G4EN        */
#define _RAC_SYLOEN_SYLODIVRLO12G4EN_MASK                             0x2UL                                              /**< Bit mask for RAC_SYLODIVRLO12G4EN           */
#define _RAC_SYLOEN_SYLODIVRLO12G4EN_DEFAULT                          0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLO12G4EN_disable                          0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLO12G4EN_enable                           0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVRLO12G4EN_DEFAULT                           (_RAC_SYLOEN_SYLODIVRLO12G4EN_DEFAULT << 1)        /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLO12G4EN_disable                           (_RAC_SYLOEN_SYLODIVRLO12G4EN_disable << 1)        /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLO12G4EN_enable                            (_RAC_SYLOEN_SYLODIVRLO12G4EN_enable << 1)         /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVRLO22G4EN                                   (0x1UL << 3)                                       /**< SYLODIVRLO22G4EN                            */
#define _RAC_SYLOEN_SYLODIVRLO22G4EN_SHIFT                            3                                                  /**< Shift value for RAC_SYLODIVRLO22G4EN        */
#define _RAC_SYLOEN_SYLODIVRLO22G4EN_MASK                             0x8UL                                              /**< Bit mask for RAC_SYLODIVRLO22G4EN           */
#define _RAC_SYLOEN_SYLODIVRLO22G4EN_DEFAULT                          0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLO22G4EN_disable                          0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVRLO22G4EN_enable                           0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVRLO22G4EN_DEFAULT                           (_RAC_SYLOEN_SYLODIVRLO22G4EN_DEFAULT << 3)        /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLO22G4EN_disable                           (_RAC_SYLOEN_SYLODIVRLO22G4EN_disable << 3)        /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVRLO22G4EN_enable                            (_RAC_SYLOEN_SYLODIVRLO22G4EN_enable << 3)         /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN                             (0x1UL << 5)                                       /**< SYLODIVTLO0DBM2G4AUXEN                      */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_SHIFT                      5                                                  /**< Shift value for RAC_SYLODIVTLO0DBM2G4AUXEN  */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_MASK                       0x20UL                                             /**< Bit mask for RAC_SYLODIVTLO0DBM2G4AUXEN     */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_disable                    0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_enable                     0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_DEFAULT                     (_RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_DEFAULT << 5)  /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_disable                     (_RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_disable << 5)  /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_enable                      (_RAC_SYLOEN_SYLODIVTLO0DBM2G4AUXEN_enable << 5)   /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN                                (0x1UL << 6)                                       /**< SYLODIVTLO0DBM2G4EN                         */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_SHIFT                         6                                                  /**< Shift value for RAC_SYLODIVTLO0DBM2G4EN     */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_MASK                          0x40UL                                             /**< Bit mask for RAC_SYLODIVTLO0DBM2G4EN        */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_DEFAULT                       0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_disable                       0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_enable                        0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_DEFAULT                        (_RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_DEFAULT << 6)     /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_disable                        (_RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_disable << 6)     /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_enable                         (_RAC_SYLOEN_SYLODIVTLO0DBM2G4EN_enable << 6)      /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN                            (0x1UL << 9)                                       /**< SYLODIVTLO20DBM2G4AUXEN                     */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_SHIFT                     9                                                  /**< Shift value for RAC_SYLODIVTLO20DBM2G4AUXEN */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_MASK                      0x200UL                                            /**< Bit mask for RAC_SYLODIVTLO20DBM2G4AUXEN    */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_disable                   0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_enable                    0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_DEFAULT                    (_RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_DEFAULT << 9) /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_disable                    (_RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_disable << 9) /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_enable                     (_RAC_SYLOEN_SYLODIVTLO20DBM2G4AUXEN_enable << 9)  /**< Shifted mode enable for RAC_SYLOEN          */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4EN                               (0x1UL << 10)                                      /**< SYLODIVTLO20DBM2G4EN                        */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_SHIFT                        10                                                 /**< Shift value for RAC_SYLODIVTLO20DBM2G4EN    */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_MASK                         0x400UL                                            /**< Bit mask for RAC_SYLODIVTLO20DBM2G4EN       */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_DEFAULT                      0x00000000UL                                       /**< Mode DEFAULT for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_disable                      0x00000000UL                                       /**< Mode disable for RAC_SYLOEN                 */
#define _RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_enable                       0x00000001UL                                       /**< Mode enable for RAC_SYLOEN                  */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_DEFAULT                       (_RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_DEFAULT << 10)   /**< Shifted mode DEFAULT for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_disable                       (_RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_disable << 10)   /**< Shifted mode disable for RAC_SYLOEN         */
#define RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_enable                        (_RAC_SYLOEN_SYLODIVTLO20DBM2G4EN_enable << 10)    /**< Shifted mode enable for RAC_SYLOEN          */

/* Bit fields for RAC SYMMDCTRL */
#define _RAC_SYMMDCTRL_RESETVALUE                                     0x00000000UL                                  /**< Default value for RAC_SYMMDCTRL             */
#define _RAC_SYMMDCTRL_MASK                                           0x00000007UL                                  /**< Mask for RAC_SYMMDCTRL                      */
#define RAC_SYMMDCTRL_SYMMDENRSDIG                                    (0x1UL << 0)                                  /**< SYMMDENRSDIG                                */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_SHIFT                             0                                             /**< Shift value for RAC_SYMMDENRSDIG            */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_MASK                              0x1UL                                         /**< Bit mask for RAC_SYMMDENRSDIG               */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_disable                           0x00000000UL                                  /**< Mode disable for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDENRSDIG_enable                            0x00000001UL                                  /**< Mode enable for RAC_SYMMDCTRL               */
#define RAC_SYMMDCTRL_SYMMDENRSDIG_DEFAULT                            (_RAC_SYMMDCTRL_SYMMDENRSDIG_DEFAULT << 0)    /**< Shifted mode DEFAULT for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDENRSDIG_disable                            (_RAC_SYMMDCTRL_SYMMDENRSDIG_disable << 0)    /**< Shifted mode disable for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDENRSDIG_enable                             (_RAC_SYMMDCTRL_SYMMDENRSDIG_enable << 0)     /**< Shifted mode enable for RAC_SYMMDCTRL       */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_SHIFT                            1                                             /**< Shift value for RAC_SYMMDDIVRSDIG           */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_MASK                             0x6UL                                         /**< Bit mask for RAC_SYMMDDIVRSDIG              */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for RAC_SYMMDCTRL              */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby1                        0x00000000UL                                  /**< Mode Divideby1 for RAC_SYMMDCTRL            */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby2                        0x00000001UL                                  /**< Mode Divideby2 for RAC_SYMMDCTRL            */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby4                        0x00000002UL                                  /**< Mode Divideby4 for RAC_SYMMDCTRL            */
#define _RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby8                        0x00000003UL                                  /**< Mode Divideby8 for RAC_SYMMDCTRL            */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_DEFAULT                           (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_DEFAULT << 1)   /**< Shifted mode DEFAULT for RAC_SYMMDCTRL      */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby1                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby1 << 1) /**< Shifted mode Divideby1 for RAC_SYMMDCTRL    */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby2                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby2 << 1) /**< Shifted mode Divideby2 for RAC_SYMMDCTRL    */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby4                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby4 << 1) /**< Shifted mode Divideby4 for RAC_SYMMDCTRL    */
#define RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby8                         (_RAC_SYMMDCTRL_SYMMDDIVRSDIG_Divideby8 << 1) /**< Shifted mode Divideby8 for RAC_SYMMDCTRL    */

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

/* Bit fields for RAC ANTDIV */
#define _RAC_ANTDIV_RESETVALUE                                        0x00000000UL                           /**< Default value for RAC_ANTDIV                */
#define _RAC_ANTDIV_MASK                                              0x000003FFUL                           /**< Mask for RAC_ANTDIV                         */
#define _RAC_ANTDIV_EN_SHIFT                                          0                                      /**< Shift value for RAC_EN                      */
#define _RAC_ANTDIV_EN_MASK                                           0xFFUL                                 /**< Bit mask for RAC_EN                         */
#define _RAC_ANTDIV_EN_DEFAULT                                        0x00000000UL                           /**< Mode DEFAULT for RAC_ANTDIV                 */
#define _RAC_ANTDIV_EN_OFF                                            0x00000000UL                           /**< Mode OFF for RAC_ANTDIV                     */
#define _RAC_ANTDIV_EN_PAENANT1                                       0x00000001UL                           /**< Mode PAENANT1 for RAC_ANTDIV                */
#define _RAC_ANTDIV_EN_LNAMIXEN1                                      0x00000002UL                           /**< Mode LNAMIXEN1 for RAC_ANTDIV               */
#define _RAC_ANTDIV_EN_LNAMIXRFPKDENRF1                               0x00000004UL                           /**< Mode LNAMIXRFPKDENRF1 for RAC_ANTDIV        */
#define _RAC_ANTDIV_EN_SYLODIVRLO12G4EN                               0x00000008UL                           /**< Mode SYLODIVRLO12G4EN for RAC_ANTDIV        */
#define _RAC_ANTDIV_EN_PAENANT2                                       0x00000010UL                           /**< Mode PAENANT2 for RAC_ANTDIV                */
#define _RAC_ANTDIV_EN_LNAMIXEN2                                      0x00000020UL                           /**< Mode LNAMIXEN2 for RAC_ANTDIV               */
#define _RAC_ANTDIV_EN_LNAMIXRFPKDENRF2                               0x00000040UL                           /**< Mode LNAMIXRFPKDENRF2 for RAC_ANTDIV        */
#define _RAC_ANTDIV_EN_SYLODIVRLO22G4EN                               0x00000080UL                           /**< Mode SYLODIVRLO22G4EN for RAC_ANTDIV        */
#define _RAC_ANTDIV_EN_ON                                             0x000000FFUL                           /**< Mode ON for RAC_ANTDIV                      */
#define RAC_ANTDIV_EN_DEFAULT                                         (_RAC_ANTDIV_EN_DEFAULT << 0)          /**< Shifted mode DEFAULT for RAC_ANTDIV         */
#define RAC_ANTDIV_EN_OFF                                             (_RAC_ANTDIV_EN_OFF << 0)              /**< Shifted mode OFF for RAC_ANTDIV             */
#define RAC_ANTDIV_EN_PAENANT1                                        (_RAC_ANTDIV_EN_PAENANT1 << 0)         /**< Shifted mode PAENANT1 for RAC_ANTDIV        */
#define RAC_ANTDIV_EN_LNAMIXEN1                                       (_RAC_ANTDIV_EN_LNAMIXEN1 << 0)        /**< Shifted mode LNAMIXEN1 for RAC_ANTDIV       */
#define RAC_ANTDIV_EN_LNAMIXRFPKDENRF1                                (_RAC_ANTDIV_EN_LNAMIXRFPKDENRF1 << 0) /**< Shifted mode LNAMIXRFPKDENRF1 for RAC_ANTDIV*/
#define RAC_ANTDIV_EN_SYLODIVRLO12G4EN                                (_RAC_ANTDIV_EN_SYLODIVRLO12G4EN << 0) /**< Shifted mode SYLODIVRLO12G4EN for RAC_ANTDIV*/
#define RAC_ANTDIV_EN_PAENANT2                                        (_RAC_ANTDIV_EN_PAENANT2 << 0)         /**< Shifted mode PAENANT2 for RAC_ANTDIV        */
#define RAC_ANTDIV_EN_LNAMIXEN2                                       (_RAC_ANTDIV_EN_LNAMIXEN2 << 0)        /**< Shifted mode LNAMIXEN2 for RAC_ANTDIV       */
#define RAC_ANTDIV_EN_LNAMIXRFPKDENRF2                                (_RAC_ANTDIV_EN_LNAMIXRFPKDENRF2 << 0) /**< Shifted mode LNAMIXRFPKDENRF2 for RAC_ANTDIV*/
#define RAC_ANTDIV_EN_SYLODIVRLO22G4EN                                (_RAC_ANTDIV_EN_SYLODIVRLO22G4EN << 0) /**< Shifted mode SYLODIVRLO22G4EN for RAC_ANTDIV*/
#define RAC_ANTDIV_EN_ON                                              (_RAC_ANTDIV_EN_ON << 0)               /**< Shifted mode ON for RAC_ANTDIV              */
#define _RAC_ANTDIV_STATUS_SHIFT                                      8                                      /**< Shift value for RAC_STATUS                  */
#define _RAC_ANTDIV_STATUS_MASK                                       0x300UL                                /**< Bit mask for RAC_STATUS                     */
#define _RAC_ANTDIV_STATUS_DEFAULT                                    0x00000000UL                           /**< Mode DEFAULT for RAC_ANTDIV                 */
#define _RAC_ANTDIV_STATUS_OFF                                        0x00000000UL                           /**< Mode OFF for RAC_ANTDIV                     */
#define _RAC_ANTDIV_STATUS_ANT1                                       0x00000001UL                           /**< Mode ANT1 for RAC_ANTDIV                    */
#define _RAC_ANTDIV_STATUS_ANT2                                       0x00000002UL                           /**< Mode ANT2 for RAC_ANTDIV                    */
#define _RAC_ANTDIV_STATUS_BOTH                                       0x00000003UL                           /**< Mode BOTH for RAC_ANTDIV                    */
#define RAC_ANTDIV_STATUS_DEFAULT                                     (_RAC_ANTDIV_STATUS_DEFAULT << 8)      /**< Shifted mode DEFAULT for RAC_ANTDIV         */
#define RAC_ANTDIV_STATUS_OFF                                         (_RAC_ANTDIV_STATUS_OFF << 8)          /**< Shifted mode OFF for RAC_ANTDIV             */
#define RAC_ANTDIV_STATUS_ANT1                                        (_RAC_ANTDIV_STATUS_ANT1 << 8)         /**< Shifted mode ANT1 for RAC_ANTDIV            */
#define RAC_ANTDIV_STATUS_ANT2                                        (_RAC_ANTDIV_STATUS_ANT2 << 8)         /**< Shifted mode ANT2 for RAC_ANTDIV            */
#define RAC_ANTDIV_STATUS_BOTH                                        (_RAC_ANTDIV_STATUS_BOTH << 8)         /**< Shifted mode BOTH for RAC_ANTDIV            */

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

/** @} End of group EFR32MG21_RAC_BitFields */
/** @} End of group EFR32MG21_RAC */
/** @} End of group Parts */
#endif /* EFR32MG21_RAC_H */
