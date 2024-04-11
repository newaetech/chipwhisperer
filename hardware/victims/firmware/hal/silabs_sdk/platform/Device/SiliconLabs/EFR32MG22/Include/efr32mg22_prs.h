/**************************************************************************//**
 * @file
 * @brief EFR32MG22 PRS register and bit field definitions
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
#ifndef EFR32MG22_PRS_H
#define EFR32MG22_PRS_H
#define PRS_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG22_PRS PRS
 * @{
 * @brief EFR32MG22 PRS Register Declaration.
 *****************************************************************************/

/** PRS ASYNC_CH Register Group Declaration. */
typedef struct {
  __IOM uint32_t CTRL;                               /**< Async Channel Control Register                     */
} PRS_ASYNC_CH_TypeDef;

/** PRS SYNC_CH Register Group Declaration. */
typedef struct {
  __IOM uint32_t CTRL;                               /**< Sync Channel Control Register                      */
} PRS_SYNC_CH_TypeDef;

/** PRS Register Declaration. */
typedef struct {
  __IM uint32_t        IPVERSION;                        /**< IP version ID                                      */
  uint32_t             RESERVED0[1U];                    /**< Reserved for future use                            */
  __IOM uint32_t       ASYNC_SWPULSE;                    /**< Software Pulse Register                            */
  __IOM uint32_t       ASYNC_SWLEVEL;                    /**< Software Level Register                            */
  __IM uint32_t        ASYNC_PEEK;                       /**< Async Channel Values                               */
  __IM uint32_t        SYNC_PEEK;                        /**< Sync Channel Values                                */
  PRS_ASYNC_CH_TypeDef ASYNC_CH[12U];                    /**< Async Channel registers                            */
  PRS_SYNC_CH_TypeDef  SYNC_CH[4U];                      /**< Sync Channel registers                             */
  __IOM uint32_t       CONSUMER_CMU_CALDN;               /**< CMU CALDN Consumer Selection                       */
  __IOM uint32_t       CONSUMER_CMU_CALUP;               /**< CMU CALUP Consumer Selection                       */
  uint32_t             RESERVED1[1U];                    /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_IADC0_SCANTRIGGER;       /**< IADC0 SCANTRIGGER Consumer Selection               */
  __IOM uint32_t       CONSUMER_IADC0_SINGLETRIGGER;     /**< IADC0 SINGLETRIGGER Consumer Selection             */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ0;        /**< DMAREQ0 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ1;        /**< DMAREQ1 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LETIMER0_CLEAR;          /**< LETIMER CLEAR Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_START;          /**< LETIMER START Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_STOP;           /**< LETIMER STOP Consumer Selection                    */
  __IOM uint32_t       CONSUMER_EUART0_RX;               /**< EUART0 RX consumer register                        */
  __IOM uint32_t       CONSUMER_EUART0_TRIGGER;          /**< EUART0 TRIGGER Consumer register                   */
  __IOM uint32_t       CONSUMER_MODEM_DIN;               /**< MODEM DIN Consumer Selection                       */
  uint32_t             RESERVED2[2U];                    /**< Reserved for future use                            */
  uint32_t             RESERVED3[11U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_RAC_CLR;                 /**< RAC CLR Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_CTIIN0;              /**< RAC CTIIN0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN1;              /**< RAC CTIIN1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN2;              /**< RAC CTIIN2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN3;              /**< RAC CTIIN3 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_FORCETX;             /**< RAC FORCETX Consumer Selection                     */
  __IOM uint32_t       CONSUMER_RAC_RXDIS;               /**< RAC RXDIS Consumer Selection                       */
  __IOM uint32_t       CONSUMER_RAC_RXEN;                /**< RAC RXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RAC_SEQ;                 /**< RAC SEQ Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_TXEN;                /**< RAC TXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC0;                /**< RTCC CC0 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC1;                /**< RTCC CC1 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC2;                /**< RTCC CC2 Consumer Selection                        */
  uint32_t             RESERVED4[1U];                    /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN0;             /**< CTI0 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN1;             /**< CTI1 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN2;             /**< CTI2 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN3;             /**< CTI3 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_M33RXEV;            /**< M33 Consumer Selection                             */
  __IOM uint32_t       CONSUMER_TIMER0_CC0;              /**< TIMER0 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC1;              /**< TIMER0 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC2;              /**< TIMER0 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTI;              /**< TIMER0 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS1;           /**< TIMER0 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS2;           /**< TIMER0 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_CC0;              /**< TIMER1 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC1;              /**< TIMER1 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC2;              /**< TIMER1 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTI;              /**< TIMER1 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS1;           /**< TIMER1 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS2;           /**< TIMER1 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_CC0;              /**< TIMER2 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC1;              /**< TIMER2 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC2;              /**< TIMER2 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTI;              /**< TIMER2 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS1;           /**< TIMER2 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS2;           /**< TIMER2 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_CC0;              /**< TIMER3 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC1;              /**< TIMER3 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC2;              /**< TIMER3 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTI;              /**< TIMER3 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS1;           /**< TIMER3 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS2;           /**< TIMER3 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_CC0;              /**< TIMER4 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC1;              /**< TIMER4 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC2;              /**< TIMER4 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTI;              /**< TIMER4 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS1;           /**< TIMER4 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS2;           /**< TIMER4 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_USART0_CLK;              /**< USART0 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART0_IR;               /**< USART0 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_RX;               /**< USART0 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_TRIGGER;          /**< USART0 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_USART1_CLK;              /**< USART1 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART1_IR;               /**< USART1 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_RX;               /**< USART1 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_TRIGGER;          /**< USART1 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_WDOG0_SRC0;              /**< WDOG0 SRC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_WDOG0_SRC1;              /**< WDOG0 SRC1 Consumer Selection                      */
  uint32_t             RESERVED5[917U];                  /**< Reserved for future use                            */
  __IM uint32_t        IPVERSION_SET;                    /**< IP version ID                                      */
  uint32_t             RESERVED6[1U];                    /**< Reserved for future use                            */
  __IOM uint32_t       ASYNC_SWPULSE_SET;                /**< Software Pulse Register                            */
  __IOM uint32_t       ASYNC_SWLEVEL_SET;                /**< Software Level Register                            */
  __IM uint32_t        ASYNC_PEEK_SET;                   /**< Async Channel Values                               */
  __IM uint32_t        SYNC_PEEK_SET;                    /**< Sync Channel Values                                */
  PRS_ASYNC_CH_TypeDef ASYNC_CH_SET[12U];                /**< Async Channel registers                            */
  PRS_SYNC_CH_TypeDef  SYNC_CH_SET[4U];                  /**< Sync Channel registers                             */
  __IOM uint32_t       CONSUMER_CMU_CALDN_SET;           /**< CMU CALDN Consumer Selection                       */
  __IOM uint32_t       CONSUMER_CMU_CALUP_SET;           /**< CMU CALUP Consumer Selection                       */
  uint32_t             RESERVED7[1U];                    /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_IADC0_SCANTRIGGER_SET;   /**< IADC0 SCANTRIGGER Consumer Selection               */
  __IOM uint32_t       CONSUMER_IADC0_SINGLETRIGGER_SET; /**< IADC0 SINGLETRIGGER Consumer Selection             */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ0_SET;    /**< DMAREQ0 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ1_SET;    /**< DMAREQ1 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LETIMER0_CLEAR_SET;      /**< LETIMER CLEAR Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_START_SET;      /**< LETIMER START Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_STOP_SET;       /**< LETIMER STOP Consumer Selection                    */
  __IOM uint32_t       CONSUMER_EUART0_RX_SET;           /**< EUART0 RX consumer register                        */
  __IOM uint32_t       CONSUMER_EUART0_TRIGGER_SET;      /**< EUART0 TRIGGER Consumer register                   */
  __IOM uint32_t       CONSUMER_MODEM_DIN_SET;           /**< MODEM DIN Consumer Selection                       */
  uint32_t             RESERVED8[2U];                    /**< Reserved for future use                            */
  uint32_t             RESERVED9[11U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_RAC_CLR_SET;             /**< RAC CLR Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_CTIIN0_SET;          /**< RAC CTIIN0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN1_SET;          /**< RAC CTIIN1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN2_SET;          /**< RAC CTIIN2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN3_SET;          /**< RAC CTIIN3 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_FORCETX_SET;         /**< RAC FORCETX Consumer Selection                     */
  __IOM uint32_t       CONSUMER_RAC_RXDIS_SET;           /**< RAC RXDIS Consumer Selection                       */
  __IOM uint32_t       CONSUMER_RAC_RXEN_SET;            /**< RAC RXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RAC_SEQ_SET;             /**< RAC SEQ Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_TXEN_SET;            /**< RAC TXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC0_SET;            /**< RTCC CC0 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC1_SET;            /**< RTCC CC1 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC2_SET;            /**< RTCC CC2 Consumer Selection                        */
  uint32_t             RESERVED10[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN0_SET;         /**< CTI0 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN1_SET;         /**< CTI1 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN2_SET;         /**< CTI2 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN3_SET;         /**< CTI3 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_M33RXEV_SET;        /**< M33 Consumer Selection                             */
  __IOM uint32_t       CONSUMER_TIMER0_CC0_SET;          /**< TIMER0 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC1_SET;          /**< TIMER0 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC2_SET;          /**< TIMER0 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTI_SET;          /**< TIMER0 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS1_SET;       /**< TIMER0 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS2_SET;       /**< TIMER0 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_CC0_SET;          /**< TIMER1 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC1_SET;          /**< TIMER1 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC2_SET;          /**< TIMER1 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTI_SET;          /**< TIMER1 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS1_SET;       /**< TIMER1 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS2_SET;       /**< TIMER1 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_CC0_SET;          /**< TIMER2 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC1_SET;          /**< TIMER2 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC2_SET;          /**< TIMER2 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTI_SET;          /**< TIMER2 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS1_SET;       /**< TIMER2 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS2_SET;       /**< TIMER2 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_CC0_SET;          /**< TIMER3 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC1_SET;          /**< TIMER3 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC2_SET;          /**< TIMER3 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTI_SET;          /**< TIMER3 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS1_SET;       /**< TIMER3 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS2_SET;       /**< TIMER3 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_CC0_SET;          /**< TIMER4 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC1_SET;          /**< TIMER4 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC2_SET;          /**< TIMER4 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTI_SET;          /**< TIMER4 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS1_SET;       /**< TIMER4 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS2_SET;       /**< TIMER4 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_USART0_CLK_SET;          /**< USART0 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART0_IR_SET;           /**< USART0 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_RX_SET;           /**< USART0 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_TRIGGER_SET;      /**< USART0 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_USART1_CLK_SET;          /**< USART1 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART1_IR_SET;           /**< USART1 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_RX_SET;           /**< USART1 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_TRIGGER_SET;      /**< USART1 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_WDOG0_SRC0_SET;          /**< WDOG0 SRC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_WDOG0_SRC1_SET;          /**< WDOG0 SRC1 Consumer Selection                      */
  uint32_t             RESERVED11[917U];                 /**< Reserved for future use                            */
  __IM uint32_t        IPVERSION_CLR;                    /**< IP version ID                                      */
  uint32_t             RESERVED12[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       ASYNC_SWPULSE_CLR;                /**< Software Pulse Register                            */
  __IOM uint32_t       ASYNC_SWLEVEL_CLR;                /**< Software Level Register                            */
  __IM uint32_t        ASYNC_PEEK_CLR;                   /**< Async Channel Values                               */
  __IM uint32_t        SYNC_PEEK_CLR;                    /**< Sync Channel Values                                */
  PRS_ASYNC_CH_TypeDef ASYNC_CH_CLR[12U];                /**< Async Channel registers                            */
  PRS_SYNC_CH_TypeDef  SYNC_CH_CLR[4U];                  /**< Sync Channel registers                             */
  __IOM uint32_t       CONSUMER_CMU_CALDN_CLR;           /**< CMU CALDN Consumer Selection                       */
  __IOM uint32_t       CONSUMER_CMU_CALUP_CLR;           /**< CMU CALUP Consumer Selection                       */
  uint32_t             RESERVED13[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_IADC0_SCANTRIGGER_CLR;   /**< IADC0 SCANTRIGGER Consumer Selection               */
  __IOM uint32_t       CONSUMER_IADC0_SINGLETRIGGER_CLR; /**< IADC0 SINGLETRIGGER Consumer Selection             */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ0_CLR;    /**< DMAREQ0 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ1_CLR;    /**< DMAREQ1 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LETIMER0_CLEAR_CLR;      /**< LETIMER CLEAR Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_START_CLR;      /**< LETIMER START Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_STOP_CLR;       /**< LETIMER STOP Consumer Selection                    */
  __IOM uint32_t       CONSUMER_EUART0_RX_CLR;           /**< EUART0 RX consumer register                        */
  __IOM uint32_t       CONSUMER_EUART0_TRIGGER_CLR;      /**< EUART0 TRIGGER Consumer register                   */
  __IOM uint32_t       CONSUMER_MODEM_DIN_CLR;           /**< MODEM DIN Consumer Selection                       */
  uint32_t             RESERVED14[2U];                   /**< Reserved for future use                            */
  uint32_t             RESERVED15[11U];                  /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_RAC_CLR_CLR;             /**< RAC CLR Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_CTIIN0_CLR;          /**< RAC CTIIN0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN1_CLR;          /**< RAC CTIIN1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN2_CLR;          /**< RAC CTIIN2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN3_CLR;          /**< RAC CTIIN3 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_FORCETX_CLR;         /**< RAC FORCETX Consumer Selection                     */
  __IOM uint32_t       CONSUMER_RAC_RXDIS_CLR;           /**< RAC RXDIS Consumer Selection                       */
  __IOM uint32_t       CONSUMER_RAC_RXEN_CLR;            /**< RAC RXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RAC_SEQ_CLR;             /**< RAC SEQ Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_TXEN_CLR;            /**< RAC TXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC0_CLR;            /**< RTCC CC0 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC1_CLR;            /**< RTCC CC1 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC2_CLR;            /**< RTCC CC2 Consumer Selection                        */
  uint32_t             RESERVED16[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN0_CLR;         /**< CTI0 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN1_CLR;         /**< CTI1 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN2_CLR;         /**< CTI2 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN3_CLR;         /**< CTI3 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_M33RXEV_CLR;        /**< M33 Consumer Selection                             */
  __IOM uint32_t       CONSUMER_TIMER0_CC0_CLR;          /**< TIMER0 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC1_CLR;          /**< TIMER0 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC2_CLR;          /**< TIMER0 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTI_CLR;          /**< TIMER0 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS1_CLR;       /**< TIMER0 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS2_CLR;       /**< TIMER0 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_CC0_CLR;          /**< TIMER1 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC1_CLR;          /**< TIMER1 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC2_CLR;          /**< TIMER1 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTI_CLR;          /**< TIMER1 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS1_CLR;       /**< TIMER1 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS2_CLR;       /**< TIMER1 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_CC0_CLR;          /**< TIMER2 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC1_CLR;          /**< TIMER2 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC2_CLR;          /**< TIMER2 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTI_CLR;          /**< TIMER2 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS1_CLR;       /**< TIMER2 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS2_CLR;       /**< TIMER2 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_CC0_CLR;          /**< TIMER3 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC1_CLR;          /**< TIMER3 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC2_CLR;          /**< TIMER3 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTI_CLR;          /**< TIMER3 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS1_CLR;       /**< TIMER3 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS2_CLR;       /**< TIMER3 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_CC0_CLR;          /**< TIMER4 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC1_CLR;          /**< TIMER4 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC2_CLR;          /**< TIMER4 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTI_CLR;          /**< TIMER4 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS1_CLR;       /**< TIMER4 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS2_CLR;       /**< TIMER4 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_USART0_CLK_CLR;          /**< USART0 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART0_IR_CLR;           /**< USART0 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_RX_CLR;           /**< USART0 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_TRIGGER_CLR;      /**< USART0 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_USART1_CLK_CLR;          /**< USART1 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART1_IR_CLR;           /**< USART1 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_RX_CLR;           /**< USART1 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_TRIGGER_CLR;      /**< USART1 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_WDOG0_SRC0_CLR;          /**< WDOG0 SRC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_WDOG0_SRC1_CLR;          /**< WDOG0 SRC1 Consumer Selection                      */
  uint32_t             RESERVED17[917U];                 /**< Reserved for future use                            */
  __IM uint32_t        IPVERSION_TGL;                    /**< IP version ID                                      */
  uint32_t             RESERVED18[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       ASYNC_SWPULSE_TGL;                /**< Software Pulse Register                            */
  __IOM uint32_t       ASYNC_SWLEVEL_TGL;                /**< Software Level Register                            */
  __IM uint32_t        ASYNC_PEEK_TGL;                   /**< Async Channel Values                               */
  __IM uint32_t        SYNC_PEEK_TGL;                    /**< Sync Channel Values                                */
  PRS_ASYNC_CH_TypeDef ASYNC_CH_TGL[12U];                /**< Async Channel registers                            */
  PRS_SYNC_CH_TypeDef  SYNC_CH_TGL[4U];                  /**< Sync Channel registers                             */
  __IOM uint32_t       CONSUMER_CMU_CALDN_TGL;           /**< CMU CALDN Consumer Selection                       */
  __IOM uint32_t       CONSUMER_CMU_CALUP_TGL;           /**< CMU CALUP Consumer Selection                       */
  uint32_t             RESERVED19[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_IADC0_SCANTRIGGER_TGL;   /**< IADC0 SCANTRIGGER Consumer Selection               */
  __IOM uint32_t       CONSUMER_IADC0_SINGLETRIGGER_TGL; /**< IADC0 SINGLETRIGGER Consumer Selection             */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ0_TGL;    /**< DMAREQ0 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LDMAXBAR_DMAREQ1_TGL;    /**< DMAREQ1 Consumer Selection                         */
  __IOM uint32_t       CONSUMER_LETIMER0_CLEAR_TGL;      /**< LETIMER CLEAR Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_START_TGL;      /**< LETIMER START Consumer Selection                   */
  __IOM uint32_t       CONSUMER_LETIMER0_STOP_TGL;       /**< LETIMER STOP Consumer Selection                    */
  __IOM uint32_t       CONSUMER_EUART0_RX_TGL;           /**< EUART0 RX consumer register                        */
  __IOM uint32_t       CONSUMER_EUART0_TRIGGER_TGL;      /**< EUART0 TRIGGER Consumer register                   */
  __IOM uint32_t       CONSUMER_MODEM_DIN_TGL;           /**< MODEM DIN Consumer Selection                       */
  uint32_t             RESERVED20[2U];                   /**< Reserved for future use                            */
  uint32_t             RESERVED21[11U];                  /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_RAC_CLR_TGL;             /**< RAC CLR Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_CTIIN0_TGL;          /**< RAC CTIIN0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN1_TGL;          /**< RAC CTIIN1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN2_TGL;          /**< RAC CTIIN2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_CTIIN3_TGL;          /**< RAC CTIIN3 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_RAC_FORCETX_TGL;         /**< RAC FORCETX Consumer Selection                     */
  __IOM uint32_t       CONSUMER_RAC_RXDIS_TGL;           /**< RAC RXDIS Consumer Selection                       */
  __IOM uint32_t       CONSUMER_RAC_RXEN_TGL;            /**< RAC RXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RAC_SEQ_TGL;             /**< RAC SEQ Consumer Selection                         */
  __IOM uint32_t       CONSUMER_RAC_TXEN_TGL;            /**< RAC TXEN Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC0_TGL;            /**< RTCC CC0 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC1_TGL;            /**< RTCC CC1 Consumer Selection                        */
  __IOM uint32_t       CONSUMER_RTCC_CC2_TGL;            /**< RTCC CC2 Consumer Selection                        */
  uint32_t             RESERVED22[1U];                   /**< Reserved for future use                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN0_TGL;         /**< CTI0 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN1_TGL;         /**< CTI1 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN2_TGL;         /**< CTI2 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_CTIIN3_TGL;         /**< CTI3 Consumer Selection                            */
  __IOM uint32_t       CONSUMER_CORE_M33RXEV_TGL;        /**< M33 Consumer Selection                             */
  __IOM uint32_t       CONSUMER_TIMER0_CC0_TGL;          /**< TIMER0 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC1_TGL;          /**< TIMER0 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_CC2_TGL;          /**< TIMER0 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTI_TGL;          /**< TIMER0 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS1_TGL;       /**< TIMER0 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER0_DTIFS2_TGL;       /**< TIMER0 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_CC0_TGL;          /**< TIMER1 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC1_TGL;          /**< TIMER1 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_CC2_TGL;          /**< TIMER1 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTI_TGL;          /**< TIMER1 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS1_TGL;       /**< TIMER1 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER1_DTIFS2_TGL;       /**< TIMER1 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_CC0_TGL;          /**< TIMER2 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC1_TGL;          /**< TIMER2 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_CC2_TGL;          /**< TIMER2 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTI_TGL;          /**< TIMER2 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS1_TGL;       /**< TIMER2 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER2_DTIFS2_TGL;       /**< TIMER2 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_CC0_TGL;          /**< TIMER3 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC1_TGL;          /**< TIMER3 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_CC2_TGL;          /**< TIMER3 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTI_TGL;          /**< TIMER3 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS1_TGL;       /**< TIMER3 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER3_DTIFS2_TGL;       /**< TIMER3 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_CC0_TGL;          /**< TIMER4 CC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC1_TGL;          /**< TIMER4 CC1 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_CC2_TGL;          /**< TIMER4 CC2 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTI_TGL;          /**< TIMER4 DTI Consumer Selection                      */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS1_TGL;       /**< TIMER4 DTIFS1 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_TIMER4_DTIFS2_TGL;       /**< TIMER4 DTIFS2 Consumer Selection                   */
  __IOM uint32_t       CONSUMER_USART0_CLK_TGL;          /**< USART0 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART0_IR_TGL;           /**< USART0 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_RX_TGL;           /**< USART0 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART0_TRIGGER_TGL;      /**< USART0 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_USART1_CLK_TGL;          /**< USART1 CLK Consumer Selection                      */
  __IOM uint32_t       CONSUMER_USART1_IR_TGL;           /**< USART1 IR Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_RX_TGL;           /**< USART1 RX Consumer Selection                       */
  __IOM uint32_t       CONSUMER_USART1_TRIGGER_TGL;      /**< USART1 TRIGGER Consumer Selection                  */
  __IOM uint32_t       CONSUMER_WDOG0_SRC0_TGL;          /**< WDOG0 SRC0 Consumer Selection                      */
  __IOM uint32_t       CONSUMER_WDOG0_SRC1_TGL;          /**< WDOG0 SRC1 Consumer Selection                      */
} PRS_TypeDef;
/** @} End of group EFR32MG22_PRS */

/**************************************************************************//**
 * @addtogroup EFR32MG22_PRS
 * @{
 * @defgroup EFR32MG22_PRS_BitFields PRS Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for PRS IPVERSION */
#define _PRS_IPVERSION_RESETVALUE                            0x00000001UL                            /**< Default value for PRS_IPVERSION             */
#define _PRS_IPVERSION_MASK                                  0xFFFFFFFFUL                            /**< Mask for PRS_IPVERSION                      */
#define _PRS_IPVERSION_IPVERSION_SHIFT                       0                                       /**< Shift value for PRS_IPVERSION               */
#define _PRS_IPVERSION_IPVERSION_MASK                        0xFFFFFFFFUL                            /**< Bit mask for PRS_IPVERSION                  */
#define _PRS_IPVERSION_IPVERSION_DEFAULT                     0x00000001UL                            /**< Mode DEFAULT for PRS_IPVERSION              */
#define PRS_IPVERSION_IPVERSION_DEFAULT                      (_PRS_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_IPVERSION      */

/* Bit fields for PRS ASYNC_SWPULSE */
#define _PRS_ASYNC_SWPULSE_RESETVALUE                        0x00000000UL                                 /**< Default value for PRS_ASYNC_SWPULSE         */
#define _PRS_ASYNC_SWPULSE_MASK                              0x00000FFFUL                                 /**< Mask for PRS_ASYNC_SWPULSE                  */
#define PRS_ASYNC_SWPULSE_CH0PULSE                           (0x1UL << 0)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH0PULSE_SHIFT                    0                                            /**< Shift value for PRS_CH0PULSE                */
#define _PRS_ASYNC_SWPULSE_CH0PULSE_MASK                     0x1UL                                        /**< Bit mask for PRS_CH0PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH0PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH0PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH0PULSE_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH1PULSE                           (0x1UL << 1)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH1PULSE_SHIFT                    1                                            /**< Shift value for PRS_CH1PULSE                */
#define _PRS_ASYNC_SWPULSE_CH1PULSE_MASK                     0x2UL                                        /**< Bit mask for PRS_CH1PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH1PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH1PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH1PULSE_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH2PULSE                           (0x1UL << 2)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH2PULSE_SHIFT                    2                                            /**< Shift value for PRS_CH2PULSE                */
#define _PRS_ASYNC_SWPULSE_CH2PULSE_MASK                     0x4UL                                        /**< Bit mask for PRS_CH2PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH2PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH2PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH2PULSE_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH3PULSE                           (0x1UL << 3)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH3PULSE_SHIFT                    3                                            /**< Shift value for PRS_CH3PULSE                */
#define _PRS_ASYNC_SWPULSE_CH3PULSE_MASK                     0x8UL                                        /**< Bit mask for PRS_CH3PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH3PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH3PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH3PULSE_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH4PULSE                           (0x1UL << 4)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH4PULSE_SHIFT                    4                                            /**< Shift value for PRS_CH4PULSE                */
#define _PRS_ASYNC_SWPULSE_CH4PULSE_MASK                     0x10UL                                       /**< Bit mask for PRS_CH4PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH4PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH4PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH4PULSE_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH5PULSE                           (0x1UL << 5)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH5PULSE_SHIFT                    5                                            /**< Shift value for PRS_CH5PULSE                */
#define _PRS_ASYNC_SWPULSE_CH5PULSE_MASK                     0x20UL                                       /**< Bit mask for PRS_CH5PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH5PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH5PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH5PULSE_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH6PULSE                           (0x1UL << 6)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH6PULSE_SHIFT                    6                                            /**< Shift value for PRS_CH6PULSE                */
#define _PRS_ASYNC_SWPULSE_CH6PULSE_MASK                     0x40UL                                       /**< Bit mask for PRS_CH6PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH6PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH6PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH6PULSE_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH7PULSE                           (0x1UL << 7)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH7PULSE_SHIFT                    7                                            /**< Shift value for PRS_CH7PULSE                */
#define _PRS_ASYNC_SWPULSE_CH7PULSE_MASK                     0x80UL                                       /**< Bit mask for PRS_CH7PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH7PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH7PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH7PULSE_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH8PULSE                           (0x1UL << 8)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH8PULSE_SHIFT                    8                                            /**< Shift value for PRS_CH8PULSE                */
#define _PRS_ASYNC_SWPULSE_CH8PULSE_MASK                     0x100UL                                      /**< Bit mask for PRS_CH8PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH8PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH8PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH8PULSE_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH9PULSE                           (0x1UL << 9)                                 /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH9PULSE_SHIFT                    9                                            /**< Shift value for PRS_CH9PULSE                */
#define _PRS_ASYNC_SWPULSE_CH9PULSE_MASK                     0x200UL                                      /**< Bit mask for PRS_CH9PULSE                   */
#define _PRS_ASYNC_SWPULSE_CH9PULSE_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH9PULSE_DEFAULT                   (_PRS_ASYNC_SWPULSE_CH9PULSE_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH10PULSE                          (0x1UL << 10)                                /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH10PULSE_SHIFT                   10                                           /**< Shift value for PRS_CH10PULSE               */
#define _PRS_ASYNC_SWPULSE_CH10PULSE_MASK                    0x400UL                                      /**< Bit mask for PRS_CH10PULSE                  */
#define _PRS_ASYNC_SWPULSE_CH10PULSE_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH10PULSE_DEFAULT                  (_PRS_ASYNC_SWPULSE_CH10PULSE_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */
#define PRS_ASYNC_SWPULSE_CH11PULSE                          (0x1UL << 11)                                /**< Channel pulse                               */
#define _PRS_ASYNC_SWPULSE_CH11PULSE_SHIFT                   11                                           /**< Shift value for PRS_CH11PULSE               */
#define _PRS_ASYNC_SWPULSE_CH11PULSE_MASK                    0x800UL                                      /**< Bit mask for PRS_CH11PULSE                  */
#define _PRS_ASYNC_SWPULSE_CH11PULSE_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWPULSE          */
#define PRS_ASYNC_SWPULSE_CH11PULSE_DEFAULT                  (_PRS_ASYNC_SWPULSE_CH11PULSE_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_ASYNC_SWPULSE  */

/* Bit fields for PRS ASYNC_SWLEVEL */
#define _PRS_ASYNC_SWLEVEL_RESETVALUE                        0x00000000UL                                 /**< Default value for PRS_ASYNC_SWLEVEL         */
#define _PRS_ASYNC_SWLEVEL_MASK                              0x00000FFFUL                                 /**< Mask for PRS_ASYNC_SWLEVEL                  */
#define PRS_ASYNC_SWLEVEL_CH0LEVEL                           (0x1UL << 0)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH0LEVEL_SHIFT                    0                                            /**< Shift value for PRS_CH0LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH0LEVEL_MASK                     0x1UL                                        /**< Bit mask for PRS_CH0LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH0LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH0LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH0LEVEL_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH1LEVEL                           (0x1UL << 1)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH1LEVEL_SHIFT                    1                                            /**< Shift value for PRS_CH1LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH1LEVEL_MASK                     0x2UL                                        /**< Bit mask for PRS_CH1LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH1LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH1LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH1LEVEL_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH2LEVEL                           (0x1UL << 2)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH2LEVEL_SHIFT                    2                                            /**< Shift value for PRS_CH2LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH2LEVEL_MASK                     0x4UL                                        /**< Bit mask for PRS_CH2LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH2LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH2LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH2LEVEL_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH3LEVEL                           (0x1UL << 3)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH3LEVEL_SHIFT                    3                                            /**< Shift value for PRS_CH3LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH3LEVEL_MASK                     0x8UL                                        /**< Bit mask for PRS_CH3LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH3LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH3LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH3LEVEL_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH4LEVEL                           (0x1UL << 4)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH4LEVEL_SHIFT                    4                                            /**< Shift value for PRS_CH4LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH4LEVEL_MASK                     0x10UL                                       /**< Bit mask for PRS_CH4LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH4LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH4LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH4LEVEL_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH5LEVEL                           (0x1UL << 5)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH5LEVEL_SHIFT                    5                                            /**< Shift value for PRS_CH5LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH5LEVEL_MASK                     0x20UL                                       /**< Bit mask for PRS_CH5LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH5LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH5LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH5LEVEL_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH6LEVEL                           (0x1UL << 6)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH6LEVEL_SHIFT                    6                                            /**< Shift value for PRS_CH6LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH6LEVEL_MASK                     0x40UL                                       /**< Bit mask for PRS_CH6LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH6LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH6LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH6LEVEL_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH7LEVEL                           (0x1UL << 7)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH7LEVEL_SHIFT                    7                                            /**< Shift value for PRS_CH7LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH7LEVEL_MASK                     0x80UL                                       /**< Bit mask for PRS_CH7LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH7LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH7LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH7LEVEL_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH8LEVEL                           (0x1UL << 8)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH8LEVEL_SHIFT                    8                                            /**< Shift value for PRS_CH8LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH8LEVEL_MASK                     0x100UL                                      /**< Bit mask for PRS_CH8LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH8LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH8LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH8LEVEL_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH9LEVEL                           (0x1UL << 9)                                 /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH9LEVEL_SHIFT                    9                                            /**< Shift value for PRS_CH9LEVEL                */
#define _PRS_ASYNC_SWLEVEL_CH9LEVEL_MASK                     0x200UL                                      /**< Bit mask for PRS_CH9LEVEL                   */
#define _PRS_ASYNC_SWLEVEL_CH9LEVEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH9LEVEL_DEFAULT                   (_PRS_ASYNC_SWLEVEL_CH9LEVEL_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH10LEVEL                          (0x1UL << 10)                                /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH10LEVEL_SHIFT                   10                                           /**< Shift value for PRS_CH10LEVEL               */
#define _PRS_ASYNC_SWLEVEL_CH10LEVEL_MASK                    0x400UL                                      /**< Bit mask for PRS_CH10LEVEL                  */
#define _PRS_ASYNC_SWLEVEL_CH10LEVEL_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH10LEVEL_DEFAULT                  (_PRS_ASYNC_SWLEVEL_CH10LEVEL_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */
#define PRS_ASYNC_SWLEVEL_CH11LEVEL                          (0x1UL << 11)                                /**< Channel Level                               */
#define _PRS_ASYNC_SWLEVEL_CH11LEVEL_SHIFT                   11                                           /**< Shift value for PRS_CH11LEVEL               */
#define _PRS_ASYNC_SWLEVEL_CH11LEVEL_MASK                    0x800UL                                      /**< Bit mask for PRS_CH11LEVEL                  */
#define _PRS_ASYNC_SWLEVEL_CH11LEVEL_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PRS_ASYNC_SWLEVEL          */
#define PRS_ASYNC_SWLEVEL_CH11LEVEL_DEFAULT                  (_PRS_ASYNC_SWLEVEL_CH11LEVEL_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_ASYNC_SWLEVEL  */

/* Bit fields for PRS ASYNC_PEEK */
#define _PRS_ASYNC_PEEK_RESETVALUE                           0x00000000UL                            /**< Default value for PRS_ASYNC_PEEK            */
#define _PRS_ASYNC_PEEK_MASK                                 0x00000FFFUL                            /**< Mask for PRS_ASYNC_PEEK                     */
#define PRS_ASYNC_PEEK_CH0VAL                                (0x1UL << 0)                            /**< Channel 0 Current Value                     */
#define _PRS_ASYNC_PEEK_CH0VAL_SHIFT                         0                                       /**< Shift value for PRS_CH0VAL                  */
#define _PRS_ASYNC_PEEK_CH0VAL_MASK                          0x1UL                                   /**< Bit mask for PRS_CH0VAL                     */
#define _PRS_ASYNC_PEEK_CH0VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH0VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH0VAL_DEFAULT << 0)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH1VAL                                (0x1UL << 1)                            /**< Channel 1 Current Value                     */
#define _PRS_ASYNC_PEEK_CH1VAL_SHIFT                         1                                       /**< Shift value for PRS_CH1VAL                  */
#define _PRS_ASYNC_PEEK_CH1VAL_MASK                          0x2UL                                   /**< Bit mask for PRS_CH1VAL                     */
#define _PRS_ASYNC_PEEK_CH1VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH1VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH1VAL_DEFAULT << 1)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH2VAL                                (0x1UL << 2)                            /**< Channel 2 Current Value                     */
#define _PRS_ASYNC_PEEK_CH2VAL_SHIFT                         2                                       /**< Shift value for PRS_CH2VAL                  */
#define _PRS_ASYNC_PEEK_CH2VAL_MASK                          0x4UL                                   /**< Bit mask for PRS_CH2VAL                     */
#define _PRS_ASYNC_PEEK_CH2VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH2VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH2VAL_DEFAULT << 2)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH3VAL                                (0x1UL << 3)                            /**< Channel 3 Current Value                     */
#define _PRS_ASYNC_PEEK_CH3VAL_SHIFT                         3                                       /**< Shift value for PRS_CH3VAL                  */
#define _PRS_ASYNC_PEEK_CH3VAL_MASK                          0x8UL                                   /**< Bit mask for PRS_CH3VAL                     */
#define _PRS_ASYNC_PEEK_CH3VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH3VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH3VAL_DEFAULT << 3)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH4VAL                                (0x1UL << 4)                            /**< Channel 4 Current Value                     */
#define _PRS_ASYNC_PEEK_CH4VAL_SHIFT                         4                                       /**< Shift value for PRS_CH4VAL                  */
#define _PRS_ASYNC_PEEK_CH4VAL_MASK                          0x10UL                                  /**< Bit mask for PRS_CH4VAL                     */
#define _PRS_ASYNC_PEEK_CH4VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH4VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH4VAL_DEFAULT << 4)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH5VAL                                (0x1UL << 5)                            /**< Channel 5 Current Value                     */
#define _PRS_ASYNC_PEEK_CH5VAL_SHIFT                         5                                       /**< Shift value for PRS_CH5VAL                  */
#define _PRS_ASYNC_PEEK_CH5VAL_MASK                          0x20UL                                  /**< Bit mask for PRS_CH5VAL                     */
#define _PRS_ASYNC_PEEK_CH5VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH5VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH5VAL_DEFAULT << 5)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH6VAL                                (0x1UL << 6)                            /**< Channel 6 Current Value                     */
#define _PRS_ASYNC_PEEK_CH6VAL_SHIFT                         6                                       /**< Shift value for PRS_CH6VAL                  */
#define _PRS_ASYNC_PEEK_CH6VAL_MASK                          0x40UL                                  /**< Bit mask for PRS_CH6VAL                     */
#define _PRS_ASYNC_PEEK_CH6VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH6VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH6VAL_DEFAULT << 6)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH7VAL                                (0x1UL << 7)                            /**< Channel 7 Current Value                     */
#define _PRS_ASYNC_PEEK_CH7VAL_SHIFT                         7                                       /**< Shift value for PRS_CH7VAL                  */
#define _PRS_ASYNC_PEEK_CH7VAL_MASK                          0x80UL                                  /**< Bit mask for PRS_CH7VAL                     */
#define _PRS_ASYNC_PEEK_CH7VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH7VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH7VAL_DEFAULT << 7)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH8VAL                                (0x1UL << 8)                            /**< Channel 8 Current Value                     */
#define _PRS_ASYNC_PEEK_CH8VAL_SHIFT                         8                                       /**< Shift value for PRS_CH8VAL                  */
#define _PRS_ASYNC_PEEK_CH8VAL_MASK                          0x100UL                                 /**< Bit mask for PRS_CH8VAL                     */
#define _PRS_ASYNC_PEEK_CH8VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH8VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH8VAL_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH9VAL                                (0x1UL << 9)                            /**< Channel 9 Current Value                     */
#define _PRS_ASYNC_PEEK_CH9VAL_SHIFT                         9                                       /**< Shift value for PRS_CH9VAL                  */
#define _PRS_ASYNC_PEEK_CH9VAL_MASK                          0x200UL                                 /**< Bit mask for PRS_CH9VAL                     */
#define _PRS_ASYNC_PEEK_CH9VAL_DEFAULT                       0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH9VAL_DEFAULT                        (_PRS_ASYNC_PEEK_CH9VAL_DEFAULT << 9)   /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH10VAL                               (0x1UL << 10)                           /**< Channel 10 Current Value                    */
#define _PRS_ASYNC_PEEK_CH10VAL_SHIFT                        10                                      /**< Shift value for PRS_CH10VAL                 */
#define _PRS_ASYNC_PEEK_CH10VAL_MASK                         0x400UL                                 /**< Bit mask for PRS_CH10VAL                    */
#define _PRS_ASYNC_PEEK_CH10VAL_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH10VAL_DEFAULT                       (_PRS_ASYNC_PEEK_CH10VAL_DEFAULT << 10) /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */
#define PRS_ASYNC_PEEK_CH11VAL                               (0x1UL << 11)                           /**< Channel 11 Current Value                    */
#define _PRS_ASYNC_PEEK_CH11VAL_SHIFT                        11                                      /**< Shift value for PRS_CH11VAL                 */
#define _PRS_ASYNC_PEEK_CH11VAL_MASK                         0x800UL                                 /**< Bit mask for PRS_CH11VAL                    */
#define _PRS_ASYNC_PEEK_CH11VAL_DEFAULT                      0x00000000UL                            /**< Mode DEFAULT for PRS_ASYNC_PEEK             */
#define PRS_ASYNC_PEEK_CH11VAL_DEFAULT                       (_PRS_ASYNC_PEEK_CH11VAL_DEFAULT << 11) /**< Shifted mode DEFAULT for PRS_ASYNC_PEEK     */

/* Bit fields for PRS SYNC_PEEK */
#define _PRS_SYNC_PEEK_RESETVALUE                            0x00000000UL                         /**< Default value for PRS_SYNC_PEEK             */
#define _PRS_SYNC_PEEK_MASK                                  0x0000000FUL                         /**< Mask for PRS_SYNC_PEEK                      */
#define PRS_SYNC_PEEK_CH0VAL                                 (0x1UL << 0)                         /**< Channel Value                               */
#define _PRS_SYNC_PEEK_CH0VAL_SHIFT                          0                                    /**< Shift value for PRS_CH0VAL                  */
#define _PRS_SYNC_PEEK_CH0VAL_MASK                           0x1UL                                /**< Bit mask for PRS_CH0VAL                     */
#define _PRS_SYNC_PEEK_CH0VAL_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for PRS_SYNC_PEEK              */
#define PRS_SYNC_PEEK_CH0VAL_DEFAULT                         (_PRS_SYNC_PEEK_CH0VAL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_SYNC_PEEK      */
#define PRS_SYNC_PEEK_CH1VAL                                 (0x1UL << 1)                         /**< Channel Value                               */
#define _PRS_SYNC_PEEK_CH1VAL_SHIFT                          1                                    /**< Shift value for PRS_CH1VAL                  */
#define _PRS_SYNC_PEEK_CH1VAL_MASK                           0x2UL                                /**< Bit mask for PRS_CH1VAL                     */
#define _PRS_SYNC_PEEK_CH1VAL_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for PRS_SYNC_PEEK              */
#define PRS_SYNC_PEEK_CH1VAL_DEFAULT                         (_PRS_SYNC_PEEK_CH1VAL_DEFAULT << 1) /**< Shifted mode DEFAULT for PRS_SYNC_PEEK      */
#define PRS_SYNC_PEEK_CH2VAL                                 (0x1UL << 2)                         /**< Channel Value                               */
#define _PRS_SYNC_PEEK_CH2VAL_SHIFT                          2                                    /**< Shift value for PRS_CH2VAL                  */
#define _PRS_SYNC_PEEK_CH2VAL_MASK                           0x4UL                                /**< Bit mask for PRS_CH2VAL                     */
#define _PRS_SYNC_PEEK_CH2VAL_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for PRS_SYNC_PEEK              */
#define PRS_SYNC_PEEK_CH2VAL_DEFAULT                         (_PRS_SYNC_PEEK_CH2VAL_DEFAULT << 2) /**< Shifted mode DEFAULT for PRS_SYNC_PEEK      */
#define PRS_SYNC_PEEK_CH3VAL                                 (0x1UL << 3)                         /**< Channel Value                               */
#define _PRS_SYNC_PEEK_CH3VAL_SHIFT                          3                                    /**< Shift value for PRS_CH3VAL                  */
#define _PRS_SYNC_PEEK_CH3VAL_MASK                           0x8UL                                /**< Bit mask for PRS_CH3VAL                     */
#define _PRS_SYNC_PEEK_CH3VAL_DEFAULT                        0x00000000UL                         /**< Mode DEFAULT for PRS_SYNC_PEEK              */
#define PRS_SYNC_PEEK_CH3VAL_DEFAULT                         (_PRS_SYNC_PEEK_CH3VAL_DEFAULT << 3) /**< Shifted mode DEFAULT for PRS_SYNC_PEEK      */

/* Bit fields for PRS ASYNC_CH_CTRL */
#define _PRS_ASYNC_CH_CTRL_RESETVALUE                        0x000C0000UL                                  /**< Default value for PRS_ASYNC_CH_CTRL         */
#define _PRS_ASYNC_CH_CTRL_MASK                              0x0F0F7F07UL                                  /**< Mask for PRS_ASYNC_CH_CTRL                  */
#define _PRS_ASYNC_CH_CTRL_SIGSEL_SHIFT                      0                                             /**< Shift value for PRS_SIGSEL                  */
#define _PRS_ASYNC_CH_CTRL_SIGSEL_MASK                       0x7UL                                         /**< Bit mask for PRS_SIGSEL                     */
#define _PRS_ASYNC_CH_CTRL_SIGSEL_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for PRS_ASYNC_CH_CTRL          */
#define _PRS_ASYNC_CH_CTRL_SIGSEL_NONE                       0x00000000UL                                  /**< Mode NONE for PRS_ASYNC_CH_CTRL             */
#define PRS_ASYNC_CH_CTRL_SIGSEL_DEFAULT                     (_PRS_ASYNC_CH_CTRL_SIGSEL_DEFAULT << 0)      /**< Shifted mode DEFAULT for PRS_ASYNC_CH_CTRL  */
#define PRS_ASYNC_CH_CTRL_SIGSEL_NONE                        (_PRS_ASYNC_CH_CTRL_SIGSEL_NONE << 0)         /**< Shifted mode NONE for PRS_ASYNC_CH_CTRL     */
#define _PRS_ASYNC_CH_CTRL_SOURCESEL_SHIFT                   8                                             /**< Shift value for PRS_SOURCESEL               */
#define _PRS_ASYNC_CH_CTRL_SOURCESEL_MASK                    0x7F00UL                                      /**< Bit mask for PRS_SOURCESEL                  */
#define _PRS_ASYNC_CH_CTRL_SOURCESEL_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PRS_ASYNC_CH_CTRL          */
#define PRS_ASYNC_CH_CTRL_SOURCESEL_DEFAULT                  (_PRS_ASYNC_CH_CTRL_SOURCESEL_DEFAULT << 8)   /**< Shifted mode DEFAULT for PRS_ASYNC_CH_CTRL  */
#define _PRS_ASYNC_CH_CTRL_FNSEL_SHIFT                       16                                            /**< Shift value for PRS_FNSEL                   */
#define _PRS_ASYNC_CH_CTRL_FNSEL_MASK                        0xF0000UL                                     /**< Bit mask for PRS_FNSEL                      */
#define _PRS_ASYNC_CH_CTRL_FNSEL_DEFAULT                     0x0000000CUL                                  /**< Mode DEFAULT for PRS_ASYNC_CH_CTRL          */
#define _PRS_ASYNC_CH_CTRL_FNSEL_LOGICAL_ZERO                0x00000000UL                                  /**< Mode LOGICAL_ZERO for PRS_ASYNC_CH_CTRL     */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_NOR_B                     0x00000001UL                                  /**< Mode A_NOR_B for PRS_ASYNC_CH_CTRL          */
#define _PRS_ASYNC_CH_CTRL_FNSEL_NOT_A_AND_B                 0x00000002UL                                  /**< Mode NOT_A_AND_B for PRS_ASYNC_CH_CTRL      */
#define _PRS_ASYNC_CH_CTRL_FNSEL_NOT_A                       0x00000003UL                                  /**< Mode NOT_A for PRS_ASYNC_CH_CTRL            */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_AND_NOT_B                 0x00000004UL                                  /**< Mode A_AND_NOT_B for PRS_ASYNC_CH_CTRL      */
#define _PRS_ASYNC_CH_CTRL_FNSEL_NOT_B                       0x00000005UL                                  /**< Mode NOT_B for PRS_ASYNC_CH_CTRL            */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_XOR_B                     0x00000006UL                                  /**< Mode A_XOR_B for PRS_ASYNC_CH_CTRL          */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_NAND_B                    0x00000007UL                                  /**< Mode A_NAND_B for PRS_ASYNC_CH_CTRL         */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_AND_B                     0x00000008UL                                  /**< Mode A_AND_B for PRS_ASYNC_CH_CTRL          */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_XNOR_B                    0x00000009UL                                  /**< Mode A_XNOR_B for PRS_ASYNC_CH_CTRL         */
#define _PRS_ASYNC_CH_CTRL_FNSEL_B                           0x0000000AUL                                  /**< Mode B for PRS_ASYNC_CH_CTRL                */
#define _PRS_ASYNC_CH_CTRL_FNSEL_NOT_A_OR_B                  0x0000000BUL                                  /**< Mode NOT_A_OR_B for PRS_ASYNC_CH_CTRL       */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A                           0x0000000CUL                                  /**< Mode A for PRS_ASYNC_CH_CTRL                */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_OR_NOT_B                  0x0000000DUL                                  /**< Mode A_OR_NOT_B for PRS_ASYNC_CH_CTRL       */
#define _PRS_ASYNC_CH_CTRL_FNSEL_A_OR_B                      0x0000000EUL                                  /**< Mode A_OR_B for PRS_ASYNC_CH_CTRL           */
#define _PRS_ASYNC_CH_CTRL_FNSEL_LOGICAL_ONE                 0x0000000FUL                                  /**< Mode LOGICAL_ONE for PRS_ASYNC_CH_CTRL      */
#define PRS_ASYNC_CH_CTRL_FNSEL_DEFAULT                      (_PRS_ASYNC_CH_CTRL_FNSEL_DEFAULT << 16)      /**< Shifted mode DEFAULT for PRS_ASYNC_CH_CTRL  */
#define PRS_ASYNC_CH_CTRL_FNSEL_LOGICAL_ZERO                 (_PRS_ASYNC_CH_CTRL_FNSEL_LOGICAL_ZERO << 16) /**< Shifted mode LOGICAL_ZERO for PRS_ASYNC_CH_CTRL*/
#define PRS_ASYNC_CH_CTRL_FNSEL_A_NOR_B                      (_PRS_ASYNC_CH_CTRL_FNSEL_A_NOR_B << 16)      /**< Shifted mode A_NOR_B for PRS_ASYNC_CH_CTRL  */
#define PRS_ASYNC_CH_CTRL_FNSEL_NOT_A_AND_B                  (_PRS_ASYNC_CH_CTRL_FNSEL_NOT_A_AND_B << 16)  /**< Shifted mode NOT_A_AND_B for PRS_ASYNC_CH_CTRL*/
#define PRS_ASYNC_CH_CTRL_FNSEL_NOT_A                        (_PRS_ASYNC_CH_CTRL_FNSEL_NOT_A << 16)        /**< Shifted mode NOT_A for PRS_ASYNC_CH_CTRL    */
#define PRS_ASYNC_CH_CTRL_FNSEL_A_AND_NOT_B                  (_PRS_ASYNC_CH_CTRL_FNSEL_A_AND_NOT_B << 16)  /**< Shifted mode A_AND_NOT_B for PRS_ASYNC_CH_CTRL*/
#define PRS_ASYNC_CH_CTRL_FNSEL_NOT_B                        (_PRS_ASYNC_CH_CTRL_FNSEL_NOT_B << 16)        /**< Shifted mode NOT_B for PRS_ASYNC_CH_CTRL    */
#define PRS_ASYNC_CH_CTRL_FNSEL_A_XOR_B                      (_PRS_ASYNC_CH_CTRL_FNSEL_A_XOR_B << 16)      /**< Shifted mode A_XOR_B for PRS_ASYNC_CH_CTRL  */
#define PRS_ASYNC_CH_CTRL_FNSEL_A_NAND_B                     (_PRS_ASYNC_CH_CTRL_FNSEL_A_NAND_B << 16)     /**< Shifted mode A_NAND_B for PRS_ASYNC_CH_CTRL */
#define PRS_ASYNC_CH_CTRL_FNSEL_A_AND_B                      (_PRS_ASYNC_CH_CTRL_FNSEL_A_AND_B << 16)      /**< Shifted mode A_AND_B for PRS_ASYNC_CH_CTRL  */
#define PRS_ASYNC_CH_CTRL_FNSEL_A_XNOR_B                     (_PRS_ASYNC_CH_CTRL_FNSEL_A_XNOR_B << 16)     /**< Shifted mode A_XNOR_B for PRS_ASYNC_CH_CTRL */
#define PRS_ASYNC_CH_CTRL_FNSEL_B                            (_PRS_ASYNC_CH_CTRL_FNSEL_B << 16)            /**< Shifted mode B for PRS_ASYNC_CH_CTRL        */
#define PRS_ASYNC_CH_CTRL_FNSEL_NOT_A_OR_B                   (_PRS_ASYNC_CH_CTRL_FNSEL_NOT_A_OR_B << 16)   /**< Shifted mode NOT_A_OR_B for PRS_ASYNC_CH_CTRL*/
#define PRS_ASYNC_CH_CTRL_FNSEL_A                            (_PRS_ASYNC_CH_CTRL_FNSEL_A << 16)            /**< Shifted mode A for PRS_ASYNC_CH_CTRL        */
#define PRS_ASYNC_CH_CTRL_FNSEL_A_OR_NOT_B                   (_PRS_ASYNC_CH_CTRL_FNSEL_A_OR_NOT_B << 16)   /**< Shifted mode A_OR_NOT_B for PRS_ASYNC_CH_CTRL*/
#define PRS_ASYNC_CH_CTRL_FNSEL_A_OR_B                       (_PRS_ASYNC_CH_CTRL_FNSEL_A_OR_B << 16)       /**< Shifted mode A_OR_B for PRS_ASYNC_CH_CTRL   */
#define PRS_ASYNC_CH_CTRL_FNSEL_LOGICAL_ONE                  (_PRS_ASYNC_CH_CTRL_FNSEL_LOGICAL_ONE << 16)  /**< Shifted mode LOGICAL_ONE for PRS_ASYNC_CH_CTRL*/
#define _PRS_ASYNC_CH_CTRL_AUXSEL_SHIFT                      24                                            /**< Shift value for PRS_AUXSEL                  */
#define _PRS_ASYNC_CH_CTRL_AUXSEL_MASK                       0xF000000UL                                   /**< Bit mask for PRS_AUXSEL                     */
#define _PRS_ASYNC_CH_CTRL_AUXSEL_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for PRS_ASYNC_CH_CTRL          */
#define PRS_ASYNC_CH_CTRL_AUXSEL_DEFAULT                     (_PRS_ASYNC_CH_CTRL_AUXSEL_DEFAULT << 24)     /**< Shifted mode DEFAULT for PRS_ASYNC_CH_CTRL  */

/* Bit fields for PRS SYNC_CH_CTRL */
#define _PRS_SYNC_CH_CTRL_RESETVALUE                         0x00000000UL                               /**< Default value for PRS_SYNC_CH_CTRL          */
#define _PRS_SYNC_CH_CTRL_MASK                               0x00007F07UL                               /**< Mask for PRS_SYNC_CH_CTRL                   */
#define _PRS_SYNC_CH_CTRL_SIGSEL_SHIFT                       0                                          /**< Shift value for PRS_SIGSEL                  */
#define _PRS_SYNC_CH_CTRL_SIGSEL_MASK                        0x7UL                                      /**< Bit mask for PRS_SIGSEL                     */
#define _PRS_SYNC_CH_CTRL_SIGSEL_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for PRS_SYNC_CH_CTRL           */
#define PRS_SYNC_CH_CTRL_SIGSEL_DEFAULT                      (_PRS_SYNC_CH_CTRL_SIGSEL_DEFAULT << 0)    /**< Shifted mode DEFAULT for PRS_SYNC_CH_CTRL   */
#define _PRS_SYNC_CH_CTRL_SOURCESEL_SHIFT                    8                                          /**< Shift value for PRS_SOURCESEL               */
#define _PRS_SYNC_CH_CTRL_SOURCESEL_MASK                     0x7F00UL                                   /**< Bit mask for PRS_SOURCESEL                  */
#define _PRS_SYNC_CH_CTRL_SOURCESEL_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for PRS_SYNC_CH_CTRL           */
#define PRS_SYNC_CH_CTRL_SOURCESEL_DEFAULT                   (_PRS_SYNC_CH_CTRL_SOURCESEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_SYNC_CH_CTRL   */

/* Bit fields for PRS CONSUMER_CMU_CALDN */
#define _PRS_CONSUMER_CMU_CALDN_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_CMU_CALDN    */
#define _PRS_CONSUMER_CMU_CALDN_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_CMU_CALDN             */
#define _PRS_CONSUMER_CMU_CALDN_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CMU_CALDN_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CMU_CALDN_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_CMU_CALDN     */
#define PRS_CONSUMER_CMU_CALDN_PRSSEL_DEFAULT                (_PRS_CONSUMER_CMU_CALDN_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CMU_CALDN*/

/* Bit fields for PRS CONSUMER_CMU_CALUP */
#define _PRS_CONSUMER_CMU_CALUP_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_CMU_CALUP    */
#define _PRS_CONSUMER_CMU_CALUP_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_CMU_CALUP             */
#define _PRS_CONSUMER_CMU_CALUP_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CMU_CALUP_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CMU_CALUP_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_CMU_CALUP     */
#define PRS_CONSUMER_CMU_CALUP_PRSSEL_DEFAULT                (_PRS_CONSUMER_CMU_CALUP_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CMU_CALUP*/

/* Bit fields for PRS CONSUMER_IADC0_SCANTRIGGER */
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_RESETVALUE           0x00000000UL                                           /**< Default value for PRS_CONSUMER_IADC0_SCANTRIGGER*/
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_MASK                 0x0000030FUL                                           /**< Mask for PRS_CONSUMER_IADC0_SCANTRIGGER     */
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_PRSSEL_SHIFT         0                                                      /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_PRSSEL_MASK          0xFUL                                                  /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_PRSSEL_DEFAULT       0x00000000UL                                           /**< Mode DEFAULT for PRS_CONSUMER_IADC0_SCANTRIGGER*/
#define PRS_CONSUMER_IADC0_SCANTRIGGER_PRSSEL_DEFAULT        (_PRS_CONSUMER_IADC0_SCANTRIGGER_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_IADC0_SCANTRIGGER*/
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_SPRSSEL_SHIFT        8                                                      /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_SPRSSEL_MASK         0x300UL                                                /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_IADC0_SCANTRIGGER_SPRSSEL_DEFAULT      0x00000000UL                                           /**< Mode DEFAULT for PRS_CONSUMER_IADC0_SCANTRIGGER*/
#define PRS_CONSUMER_IADC0_SCANTRIGGER_SPRSSEL_DEFAULT       (_PRS_CONSUMER_IADC0_SCANTRIGGER_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_IADC0_SCANTRIGGER*/

/* Bit fields for PRS CONSUMER_IADC0_SINGLETRIGGER */
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_RESETVALUE         0x00000000UL                                             /**< Default value for PRS_CONSUMER_IADC0_SINGLETRIGGER*/
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_MASK               0x0000030FUL                                             /**< Mask for PRS_CONSUMER_IADC0_SINGLETRIGGER   */
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_PRSSEL_SHIFT       0                                                        /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_PRSSEL_MASK        0xFUL                                                    /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_PRSSEL_DEFAULT     0x00000000UL                                             /**< Mode DEFAULT for PRS_CONSUMER_IADC0_SINGLETRIGGER*/
#define PRS_CONSUMER_IADC0_SINGLETRIGGER_PRSSEL_DEFAULT      (_PRS_CONSUMER_IADC0_SINGLETRIGGER_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_IADC0_SINGLETRIGGER*/
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_SPRSSEL_SHIFT      8                                                        /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_SPRSSEL_MASK       0x300UL                                                  /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_IADC0_SINGLETRIGGER_SPRSSEL_DEFAULT    0x00000000UL                                             /**< Mode DEFAULT for PRS_CONSUMER_IADC0_SINGLETRIGGER*/
#define PRS_CONSUMER_IADC0_SINGLETRIGGER_SPRSSEL_DEFAULT     (_PRS_CONSUMER_IADC0_SINGLETRIGGER_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_IADC0_SINGLETRIGGER*/

/* Bit fields for PRS CONSUMER_LDMAXBAR_DMAREQ0 */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ0_RESETVALUE            0x00000000UL                                         /**< Default value for PRS_CONSUMER_LDMAXBAR_DMAREQ0*/
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ0_MASK                  0x0000000FUL                                         /**< Mask for PRS_CONSUMER_LDMAXBAR_DMAREQ0      */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ0_PRSSEL_SHIFT          0                                                    /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ0_PRSSEL_MASK           0xFUL                                                /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ0_PRSSEL_DEFAULT        0x00000000UL                                         /**< Mode DEFAULT for PRS_CONSUMER_LDMAXBAR_DMAREQ0*/
#define PRS_CONSUMER_LDMAXBAR_DMAREQ0_PRSSEL_DEFAULT         (_PRS_CONSUMER_LDMAXBAR_DMAREQ0_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_LDMAXBAR_DMAREQ0*/

/* Bit fields for PRS CONSUMER_LDMAXBAR_DMAREQ1 */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ1_RESETVALUE            0x00000000UL                                         /**< Default value for PRS_CONSUMER_LDMAXBAR_DMAREQ1*/
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ1_MASK                  0x0000000FUL                                         /**< Mask for PRS_CONSUMER_LDMAXBAR_DMAREQ1      */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ1_PRSSEL_SHIFT          0                                                    /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ1_PRSSEL_MASK           0xFUL                                                /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_LDMAXBAR_DMAREQ1_PRSSEL_DEFAULT        0x00000000UL                                         /**< Mode DEFAULT for PRS_CONSUMER_LDMAXBAR_DMAREQ1*/
#define PRS_CONSUMER_LDMAXBAR_DMAREQ1_PRSSEL_DEFAULT         (_PRS_CONSUMER_LDMAXBAR_DMAREQ1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_LDMAXBAR_DMAREQ1*/

/* Bit fields for PRS CONSUMER_LETIMER0_CLEAR */
#define _PRS_CONSUMER_LETIMER0_CLEAR_RESETVALUE              0x00000000UL                                       /**< Default value for PRS_CONSUMER_LETIMER0_CLEAR*/
#define _PRS_CONSUMER_LETIMER0_CLEAR_MASK                    0x0000000FUL                                       /**< Mask for PRS_CONSUMER_LETIMER0_CLEAR        */
#define _PRS_CONSUMER_LETIMER0_CLEAR_PRSSEL_SHIFT            0                                                  /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_LETIMER0_CLEAR_PRSSEL_MASK             0xFUL                                              /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_LETIMER0_CLEAR_PRSSEL_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for PRS_CONSUMER_LETIMER0_CLEAR*/
#define PRS_CONSUMER_LETIMER0_CLEAR_PRSSEL_DEFAULT           (_PRS_CONSUMER_LETIMER0_CLEAR_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_LETIMER0_CLEAR*/

/* Bit fields for PRS CONSUMER_LETIMER0_START */
#define _PRS_CONSUMER_LETIMER0_START_RESETVALUE              0x00000000UL                                       /**< Default value for PRS_CONSUMER_LETIMER0_START*/
#define _PRS_CONSUMER_LETIMER0_START_MASK                    0x0000000FUL                                       /**< Mask for PRS_CONSUMER_LETIMER0_START        */
#define _PRS_CONSUMER_LETIMER0_START_PRSSEL_SHIFT            0                                                  /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_LETIMER0_START_PRSSEL_MASK             0xFUL                                              /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_LETIMER0_START_PRSSEL_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for PRS_CONSUMER_LETIMER0_START*/
#define PRS_CONSUMER_LETIMER0_START_PRSSEL_DEFAULT           (_PRS_CONSUMER_LETIMER0_START_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_LETIMER0_START*/

/* Bit fields for PRS CONSUMER_LETIMER0_STOP */
#define _PRS_CONSUMER_LETIMER0_STOP_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_LETIMER0_STOP*/
#define _PRS_CONSUMER_LETIMER0_STOP_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_LETIMER0_STOP         */
#define _PRS_CONSUMER_LETIMER0_STOP_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_LETIMER0_STOP_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_LETIMER0_STOP_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_LETIMER0_STOP */
#define PRS_CONSUMER_LETIMER0_STOP_PRSSEL_DEFAULT            (_PRS_CONSUMER_LETIMER0_STOP_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_LETIMER0_STOP*/

/* Bit fields for PRS CONSUMER_EUART0_RX */
#define _PRS_CONSUMER_EUART0_RX_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_EUART0_RX    */
#define _PRS_CONSUMER_EUART0_RX_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_EUART0_RX             */
#define _PRS_CONSUMER_EUART0_RX_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_EUART0_RX_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_EUART0_RX_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_EUART0_RX     */
#define PRS_CONSUMER_EUART0_RX_PRSSEL_DEFAULT                (_PRS_CONSUMER_EUART0_RX_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_EUART0_RX*/

/* Bit fields for PRS CONSUMER_EUART0_TRIGGER */
#define _PRS_CONSUMER_EUART0_TRIGGER_RESETVALUE              0x00000000UL                                       /**< Default value for PRS_CONSUMER_EUART0_TRIGGER*/
#define _PRS_CONSUMER_EUART0_TRIGGER_MASK                    0x0000000FUL                                       /**< Mask for PRS_CONSUMER_EUART0_TRIGGER        */
#define _PRS_CONSUMER_EUART0_TRIGGER_PRSSEL_SHIFT            0                                                  /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_EUART0_TRIGGER_PRSSEL_MASK             0xFUL                                              /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_EUART0_TRIGGER_PRSSEL_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for PRS_CONSUMER_EUART0_TRIGGER*/
#define PRS_CONSUMER_EUART0_TRIGGER_PRSSEL_DEFAULT           (_PRS_CONSUMER_EUART0_TRIGGER_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_EUART0_TRIGGER*/

/* Bit fields for PRS CONSUMER_MODEM_DIN */
#define _PRS_CONSUMER_MODEM_DIN_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_MODEM_DIN    */
#define _PRS_CONSUMER_MODEM_DIN_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_MODEM_DIN             */
#define _PRS_CONSUMER_MODEM_DIN_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_MODEM_DIN_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_MODEM_DIN_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_MODEM_DIN     */
#define PRS_CONSUMER_MODEM_DIN_PRSSEL_DEFAULT                (_PRS_CONSUMER_MODEM_DIN_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_MODEM_DIN*/

/* Bit fields for PRS CONSUMER_RAC_CLR */
#define _PRS_CONSUMER_RAC_CLR_RESETVALUE                     0x00000000UL                                /**< Default value for PRS_CONSUMER_RAC_CLR      */
#define _PRS_CONSUMER_RAC_CLR_MASK                           0x0000000FUL                                /**< Mask for PRS_CONSUMER_RAC_CLR               */
#define _PRS_CONSUMER_RAC_CLR_PRSSEL_SHIFT                   0                                           /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_CLR_PRSSEL_MASK                    0xFUL                                       /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_CLR_PRSSEL_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for PRS_CONSUMER_RAC_CLR       */
#define PRS_CONSUMER_RAC_CLR_PRSSEL_DEFAULT                  (_PRS_CONSUMER_RAC_CLR_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_CLR*/

/* Bit fields for PRS CONSUMER_RAC_CTIIN0 */
#define _PRS_CONSUMER_RAC_CTIIN0_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_RAC_CTIIN0   */
#define _PRS_CONSUMER_RAC_CTIIN0_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_RAC_CTIIN0            */
#define _PRS_CONSUMER_RAC_CTIIN0_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_CTIIN0_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_CTIIN0_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_RAC_CTIIN0    */
#define PRS_CONSUMER_RAC_CTIIN0_PRSSEL_DEFAULT               (_PRS_CONSUMER_RAC_CTIIN0_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_CTIIN0*/

/* Bit fields for PRS CONSUMER_RAC_CTIIN1 */
#define _PRS_CONSUMER_RAC_CTIIN1_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_RAC_CTIIN1   */
#define _PRS_CONSUMER_RAC_CTIIN1_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_RAC_CTIIN1            */
#define _PRS_CONSUMER_RAC_CTIIN1_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_CTIIN1_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_CTIIN1_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_RAC_CTIIN1    */
#define PRS_CONSUMER_RAC_CTIIN1_PRSSEL_DEFAULT               (_PRS_CONSUMER_RAC_CTIIN1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_CTIIN1*/

/* Bit fields for PRS CONSUMER_RAC_CTIIN2 */
#define _PRS_CONSUMER_RAC_CTIIN2_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_RAC_CTIIN2   */
#define _PRS_CONSUMER_RAC_CTIIN2_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_RAC_CTIIN2            */
#define _PRS_CONSUMER_RAC_CTIIN2_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_CTIIN2_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_CTIIN2_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_RAC_CTIIN2    */
#define PRS_CONSUMER_RAC_CTIIN2_PRSSEL_DEFAULT               (_PRS_CONSUMER_RAC_CTIIN2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_CTIIN2*/

/* Bit fields for PRS CONSUMER_RAC_CTIIN3 */
#define _PRS_CONSUMER_RAC_CTIIN3_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_RAC_CTIIN3   */
#define _PRS_CONSUMER_RAC_CTIIN3_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_RAC_CTIIN3            */
#define _PRS_CONSUMER_RAC_CTIIN3_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_CTIIN3_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_CTIIN3_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_RAC_CTIIN3    */
#define PRS_CONSUMER_RAC_CTIIN3_PRSSEL_DEFAULT               (_PRS_CONSUMER_RAC_CTIIN3_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_CTIIN3*/

/* Bit fields for PRS CONSUMER_RAC_FORCETX */
#define _PRS_CONSUMER_RAC_FORCETX_RESETVALUE                 0x00000000UL                                    /**< Default value for PRS_CONSUMER_RAC_FORCETX  */
#define _PRS_CONSUMER_RAC_FORCETX_MASK                       0x0000000FUL                                    /**< Mask for PRS_CONSUMER_RAC_FORCETX           */
#define _PRS_CONSUMER_RAC_FORCETX_PRSSEL_SHIFT               0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_FORCETX_PRSSEL_MASK                0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_FORCETX_PRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_RAC_FORCETX   */
#define PRS_CONSUMER_RAC_FORCETX_PRSSEL_DEFAULT              (_PRS_CONSUMER_RAC_FORCETX_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_FORCETX*/

/* Bit fields for PRS CONSUMER_RAC_RXDIS */
#define _PRS_CONSUMER_RAC_RXDIS_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_RAC_RXDIS    */
#define _PRS_CONSUMER_RAC_RXDIS_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_RAC_RXDIS             */
#define _PRS_CONSUMER_RAC_RXDIS_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_RXDIS_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_RXDIS_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_RAC_RXDIS     */
#define PRS_CONSUMER_RAC_RXDIS_PRSSEL_DEFAULT                (_PRS_CONSUMER_RAC_RXDIS_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_RXDIS*/

/* Bit fields for PRS CONSUMER_RAC_RXEN */
#define _PRS_CONSUMER_RAC_RXEN_RESETVALUE                    0x00000000UL                                 /**< Default value for PRS_CONSUMER_RAC_RXEN     */
#define _PRS_CONSUMER_RAC_RXEN_MASK                          0x0000000FUL                                 /**< Mask for PRS_CONSUMER_RAC_RXEN              */
#define _PRS_CONSUMER_RAC_RXEN_PRSSEL_SHIFT                  0                                            /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_RXEN_PRSSEL_MASK                   0xFUL                                        /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_RXEN_PRSSEL_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for PRS_CONSUMER_RAC_RXEN      */
#define PRS_CONSUMER_RAC_RXEN_PRSSEL_DEFAULT                 (_PRS_CONSUMER_RAC_RXEN_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_RXEN*/

/* Bit fields for PRS CONSUMER_RAC_SEQ */
#define _PRS_CONSUMER_RAC_SEQ_RESETVALUE                     0x00000000UL                                /**< Default value for PRS_CONSUMER_RAC_SEQ      */
#define _PRS_CONSUMER_RAC_SEQ_MASK                           0x0000000FUL                                /**< Mask for PRS_CONSUMER_RAC_SEQ               */
#define _PRS_CONSUMER_RAC_SEQ_PRSSEL_SHIFT                   0                                           /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_SEQ_PRSSEL_MASK                    0xFUL                                       /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_SEQ_PRSSEL_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for PRS_CONSUMER_RAC_SEQ       */
#define PRS_CONSUMER_RAC_SEQ_PRSSEL_DEFAULT                  (_PRS_CONSUMER_RAC_SEQ_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_SEQ*/

/* Bit fields for PRS CONSUMER_RAC_TXEN */
#define _PRS_CONSUMER_RAC_TXEN_RESETVALUE                    0x00000000UL                                 /**< Default value for PRS_CONSUMER_RAC_TXEN     */
#define _PRS_CONSUMER_RAC_TXEN_MASK                          0x0000000FUL                                 /**< Mask for PRS_CONSUMER_RAC_TXEN              */
#define _PRS_CONSUMER_RAC_TXEN_PRSSEL_SHIFT                  0                                            /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RAC_TXEN_PRSSEL_MASK                   0xFUL                                        /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RAC_TXEN_PRSSEL_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for PRS_CONSUMER_RAC_TXEN      */
#define PRS_CONSUMER_RAC_TXEN_PRSSEL_DEFAULT                 (_PRS_CONSUMER_RAC_TXEN_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RAC_TXEN*/

/* Bit fields for PRS CONSUMER_RTCC_CC0 */
#define _PRS_CONSUMER_RTCC_CC0_RESETVALUE                    0x00000000UL                                 /**< Default value for PRS_CONSUMER_RTCC_CC0     */
#define _PRS_CONSUMER_RTCC_CC0_MASK                          0x0000000FUL                                 /**< Mask for PRS_CONSUMER_RTCC_CC0              */
#define _PRS_CONSUMER_RTCC_CC0_PRSSEL_SHIFT                  0                                            /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RTCC_CC0_PRSSEL_MASK                   0xFUL                                        /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RTCC_CC0_PRSSEL_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for PRS_CONSUMER_RTCC_CC0      */
#define PRS_CONSUMER_RTCC_CC0_PRSSEL_DEFAULT                 (_PRS_CONSUMER_RTCC_CC0_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RTCC_CC0*/

/* Bit fields for PRS CONSUMER_RTCC_CC1 */
#define _PRS_CONSUMER_RTCC_CC1_RESETVALUE                    0x00000000UL                                 /**< Default value for PRS_CONSUMER_RTCC_CC1     */
#define _PRS_CONSUMER_RTCC_CC1_MASK                          0x0000000FUL                                 /**< Mask for PRS_CONSUMER_RTCC_CC1              */
#define _PRS_CONSUMER_RTCC_CC1_PRSSEL_SHIFT                  0                                            /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RTCC_CC1_PRSSEL_MASK                   0xFUL                                        /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RTCC_CC1_PRSSEL_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for PRS_CONSUMER_RTCC_CC1      */
#define PRS_CONSUMER_RTCC_CC1_PRSSEL_DEFAULT                 (_PRS_CONSUMER_RTCC_CC1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RTCC_CC1*/

/* Bit fields for PRS CONSUMER_RTCC_CC2 */
#define _PRS_CONSUMER_RTCC_CC2_RESETVALUE                    0x00000000UL                                 /**< Default value for PRS_CONSUMER_RTCC_CC2     */
#define _PRS_CONSUMER_RTCC_CC2_MASK                          0x0000000FUL                                 /**< Mask for PRS_CONSUMER_RTCC_CC2              */
#define _PRS_CONSUMER_RTCC_CC2_PRSSEL_SHIFT                  0                                            /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_RTCC_CC2_PRSSEL_MASK                   0xFUL                                        /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_RTCC_CC2_PRSSEL_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for PRS_CONSUMER_RTCC_CC2      */
#define PRS_CONSUMER_RTCC_CC2_PRSSEL_DEFAULT                 (_PRS_CONSUMER_RTCC_CC2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_RTCC_CC2*/

/* Bit fields for PRS CONSUMER_CORE_CTIIN0 */
#define _PRS_CONSUMER_CORE_CTIIN0_RESETVALUE                 0x00000000UL                                    /**< Default value for PRS_CONSUMER_CORE_CTIIN0  */
#define _PRS_CONSUMER_CORE_CTIIN0_MASK                       0x0000000FUL                                    /**< Mask for PRS_CONSUMER_CORE_CTIIN0           */
#define _PRS_CONSUMER_CORE_CTIIN0_PRSSEL_SHIFT               0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CORE_CTIIN0_PRSSEL_MASK                0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CORE_CTIIN0_PRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_CORE_CTIIN0   */
#define PRS_CONSUMER_CORE_CTIIN0_PRSSEL_DEFAULT              (_PRS_CONSUMER_CORE_CTIIN0_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CORE_CTIIN0*/

/* Bit fields for PRS CONSUMER_CORE_CTIIN1 */
#define _PRS_CONSUMER_CORE_CTIIN1_RESETVALUE                 0x00000000UL                                    /**< Default value for PRS_CONSUMER_CORE_CTIIN1  */
#define _PRS_CONSUMER_CORE_CTIIN1_MASK                       0x0000000FUL                                    /**< Mask for PRS_CONSUMER_CORE_CTIIN1           */
#define _PRS_CONSUMER_CORE_CTIIN1_PRSSEL_SHIFT               0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CORE_CTIIN1_PRSSEL_MASK                0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CORE_CTIIN1_PRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_CORE_CTIIN1   */
#define PRS_CONSUMER_CORE_CTIIN1_PRSSEL_DEFAULT              (_PRS_CONSUMER_CORE_CTIIN1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CORE_CTIIN1*/

/* Bit fields for PRS CONSUMER_CORE_CTIIN2 */
#define _PRS_CONSUMER_CORE_CTIIN2_RESETVALUE                 0x00000000UL                                    /**< Default value for PRS_CONSUMER_CORE_CTIIN2  */
#define _PRS_CONSUMER_CORE_CTIIN2_MASK                       0x0000000FUL                                    /**< Mask for PRS_CONSUMER_CORE_CTIIN2           */
#define _PRS_CONSUMER_CORE_CTIIN2_PRSSEL_SHIFT               0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CORE_CTIIN2_PRSSEL_MASK                0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CORE_CTIIN2_PRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_CORE_CTIIN2   */
#define PRS_CONSUMER_CORE_CTIIN2_PRSSEL_DEFAULT              (_PRS_CONSUMER_CORE_CTIIN2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CORE_CTIIN2*/

/* Bit fields for PRS CONSUMER_CORE_CTIIN3 */
#define _PRS_CONSUMER_CORE_CTIIN3_RESETVALUE                 0x00000000UL                                    /**< Default value for PRS_CONSUMER_CORE_CTIIN3  */
#define _PRS_CONSUMER_CORE_CTIIN3_MASK                       0x0000000FUL                                    /**< Mask for PRS_CONSUMER_CORE_CTIIN3           */
#define _PRS_CONSUMER_CORE_CTIIN3_PRSSEL_SHIFT               0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CORE_CTIIN3_PRSSEL_MASK                0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CORE_CTIIN3_PRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_CORE_CTIIN3   */
#define PRS_CONSUMER_CORE_CTIIN3_PRSSEL_DEFAULT              (_PRS_CONSUMER_CORE_CTIIN3_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CORE_CTIIN3*/

/* Bit fields for PRS CONSUMER_CORE_M33RXEV */
#define _PRS_CONSUMER_CORE_M33RXEV_RESETVALUE                0x00000000UL                                     /**< Default value for PRS_CONSUMER_CORE_M33RXEV */
#define _PRS_CONSUMER_CORE_M33RXEV_MASK                      0x0000000FUL                                     /**< Mask for PRS_CONSUMER_CORE_M33RXEV          */
#define _PRS_CONSUMER_CORE_M33RXEV_PRSSEL_SHIFT              0                                                /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_CORE_M33RXEV_PRSSEL_MASK               0xFUL                                            /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_CORE_M33RXEV_PRSSEL_DEFAULT            0x00000000UL                                     /**< Mode DEFAULT for PRS_CONSUMER_CORE_M33RXEV  */
#define PRS_CONSUMER_CORE_M33RXEV_PRSSEL_DEFAULT             (_PRS_CONSUMER_CORE_M33RXEV_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_CORE_M33RXEV*/

/* Bit fields for PRS CONSUMER_TIMER0_CC0 */
#define _PRS_CONSUMER_TIMER0_CC0_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER0_CC0   */
#define _PRS_CONSUMER_TIMER0_CC0_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER0_CC0            */
#define _PRS_CONSUMER_TIMER0_CC0_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER0_CC0_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER0_CC0_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_CC0    */
#define PRS_CONSUMER_TIMER0_CC0_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER0_CC0_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_CC0*/
#define _PRS_CONSUMER_TIMER0_CC0_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER0_CC0_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER0_CC0_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_CC0    */
#define PRS_CONSUMER_TIMER0_CC0_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER0_CC0_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_CC0*/

/* Bit fields for PRS CONSUMER_TIMER0_CC1 */
#define _PRS_CONSUMER_TIMER0_CC1_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER0_CC1   */
#define _PRS_CONSUMER_TIMER0_CC1_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER0_CC1            */
#define _PRS_CONSUMER_TIMER0_CC1_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER0_CC1_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER0_CC1_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_CC1    */
#define PRS_CONSUMER_TIMER0_CC1_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER0_CC1_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_CC1*/
#define _PRS_CONSUMER_TIMER0_CC1_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER0_CC1_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER0_CC1_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_CC1    */
#define PRS_CONSUMER_TIMER0_CC1_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER0_CC1_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_CC1*/

/* Bit fields for PRS CONSUMER_TIMER0_CC2 */
#define _PRS_CONSUMER_TIMER0_CC2_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER0_CC2   */
#define _PRS_CONSUMER_TIMER0_CC2_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER0_CC2            */
#define _PRS_CONSUMER_TIMER0_CC2_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER0_CC2_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER0_CC2_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_CC2    */
#define PRS_CONSUMER_TIMER0_CC2_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER0_CC2_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_CC2*/
#define _PRS_CONSUMER_TIMER0_CC2_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER0_CC2_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER0_CC2_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_CC2    */
#define PRS_CONSUMER_TIMER0_CC2_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER0_CC2_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_CC2*/

/* Bit fields for PRS CONSUMER_TIMER0_DTI */
#define _PRS_CONSUMER_TIMER0_DTI_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_TIMER0_DTI   */
#define _PRS_CONSUMER_TIMER0_DTI_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_TIMER0_DTI            */
#define _PRS_CONSUMER_TIMER0_DTI_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER0_DTI_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER0_DTI_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_DTI    */
#define PRS_CONSUMER_TIMER0_DTI_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER0_DTI_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_DTI*/

/* Bit fields for PRS CONSUMER_TIMER0_DTIFS1 */
#define _PRS_CONSUMER_TIMER0_DTIFS1_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER0_DTIFS1*/
#define _PRS_CONSUMER_TIMER0_DTIFS1_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER0_DTIFS1         */
#define _PRS_CONSUMER_TIMER0_DTIFS1_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER0_DTIFS1_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER0_DTIFS1_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_DTIFS1 */
#define PRS_CONSUMER_TIMER0_DTIFS1_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER0_DTIFS1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_DTIFS1*/

/* Bit fields for PRS CONSUMER_TIMER0_DTIFS2 */
#define _PRS_CONSUMER_TIMER0_DTIFS2_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER0_DTIFS2*/
#define _PRS_CONSUMER_TIMER0_DTIFS2_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER0_DTIFS2         */
#define _PRS_CONSUMER_TIMER0_DTIFS2_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER0_DTIFS2_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER0_DTIFS2_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER0_DTIFS2 */
#define PRS_CONSUMER_TIMER0_DTIFS2_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER0_DTIFS2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER0_DTIFS2*/

/* Bit fields for PRS CONSUMER_TIMER1_CC0 */
#define _PRS_CONSUMER_TIMER1_CC0_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER1_CC0   */
#define _PRS_CONSUMER_TIMER1_CC0_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER1_CC0            */
#define _PRS_CONSUMER_TIMER1_CC0_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER1_CC0_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER1_CC0_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_CC0    */
#define PRS_CONSUMER_TIMER1_CC0_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER1_CC0_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_CC0*/
#define _PRS_CONSUMER_TIMER1_CC0_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER1_CC0_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER1_CC0_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_CC0    */
#define PRS_CONSUMER_TIMER1_CC0_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER1_CC0_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_CC0*/

/* Bit fields for PRS CONSUMER_TIMER1_CC1 */
#define _PRS_CONSUMER_TIMER1_CC1_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER1_CC1   */
#define _PRS_CONSUMER_TIMER1_CC1_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER1_CC1            */
#define _PRS_CONSUMER_TIMER1_CC1_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER1_CC1_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER1_CC1_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_CC1    */
#define PRS_CONSUMER_TIMER1_CC1_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER1_CC1_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_CC1*/
#define _PRS_CONSUMER_TIMER1_CC1_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER1_CC1_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER1_CC1_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_CC1    */
#define PRS_CONSUMER_TIMER1_CC1_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER1_CC1_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_CC1*/

/* Bit fields for PRS CONSUMER_TIMER1_CC2 */
#define _PRS_CONSUMER_TIMER1_CC2_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER1_CC2   */
#define _PRS_CONSUMER_TIMER1_CC2_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER1_CC2            */
#define _PRS_CONSUMER_TIMER1_CC2_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER1_CC2_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER1_CC2_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_CC2    */
#define PRS_CONSUMER_TIMER1_CC2_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER1_CC2_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_CC2*/
#define _PRS_CONSUMER_TIMER1_CC2_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER1_CC2_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER1_CC2_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_CC2    */
#define PRS_CONSUMER_TIMER1_CC2_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER1_CC2_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_CC2*/

/* Bit fields for PRS CONSUMER_TIMER1_DTI */
#define _PRS_CONSUMER_TIMER1_DTI_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_TIMER1_DTI   */
#define _PRS_CONSUMER_TIMER1_DTI_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_TIMER1_DTI            */
#define _PRS_CONSUMER_TIMER1_DTI_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER1_DTI_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER1_DTI_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_DTI    */
#define PRS_CONSUMER_TIMER1_DTI_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER1_DTI_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_DTI*/

/* Bit fields for PRS CONSUMER_TIMER1_DTIFS1 */
#define _PRS_CONSUMER_TIMER1_DTIFS1_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER1_DTIFS1*/
#define _PRS_CONSUMER_TIMER1_DTIFS1_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER1_DTIFS1         */
#define _PRS_CONSUMER_TIMER1_DTIFS1_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER1_DTIFS1_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER1_DTIFS1_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_DTIFS1 */
#define PRS_CONSUMER_TIMER1_DTIFS1_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER1_DTIFS1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_DTIFS1*/

/* Bit fields for PRS CONSUMER_TIMER1_DTIFS2 */
#define _PRS_CONSUMER_TIMER1_DTIFS2_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER1_DTIFS2*/
#define _PRS_CONSUMER_TIMER1_DTIFS2_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER1_DTIFS2         */
#define _PRS_CONSUMER_TIMER1_DTIFS2_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER1_DTIFS2_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER1_DTIFS2_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER1_DTIFS2 */
#define PRS_CONSUMER_TIMER1_DTIFS2_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER1_DTIFS2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER1_DTIFS2*/

/* Bit fields for PRS CONSUMER_TIMER2_CC0 */
#define _PRS_CONSUMER_TIMER2_CC0_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER2_CC0   */
#define _PRS_CONSUMER_TIMER2_CC0_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER2_CC0            */
#define _PRS_CONSUMER_TIMER2_CC0_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER2_CC0_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER2_CC0_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_CC0    */
#define PRS_CONSUMER_TIMER2_CC0_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER2_CC0_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_CC0*/
#define _PRS_CONSUMER_TIMER2_CC0_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER2_CC0_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER2_CC0_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_CC0    */
#define PRS_CONSUMER_TIMER2_CC0_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER2_CC0_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_CC0*/

/* Bit fields for PRS CONSUMER_TIMER2_CC1 */
#define _PRS_CONSUMER_TIMER2_CC1_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER2_CC1   */
#define _PRS_CONSUMER_TIMER2_CC1_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER2_CC1            */
#define _PRS_CONSUMER_TIMER2_CC1_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER2_CC1_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER2_CC1_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_CC1    */
#define PRS_CONSUMER_TIMER2_CC1_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER2_CC1_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_CC1*/
#define _PRS_CONSUMER_TIMER2_CC1_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER2_CC1_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER2_CC1_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_CC1    */
#define PRS_CONSUMER_TIMER2_CC1_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER2_CC1_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_CC1*/

/* Bit fields for PRS CONSUMER_TIMER2_CC2 */
#define _PRS_CONSUMER_TIMER2_CC2_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER2_CC2   */
#define _PRS_CONSUMER_TIMER2_CC2_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER2_CC2            */
#define _PRS_CONSUMER_TIMER2_CC2_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER2_CC2_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER2_CC2_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_CC2    */
#define PRS_CONSUMER_TIMER2_CC2_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER2_CC2_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_CC2*/
#define _PRS_CONSUMER_TIMER2_CC2_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER2_CC2_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER2_CC2_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_CC2    */
#define PRS_CONSUMER_TIMER2_CC2_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER2_CC2_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_CC2*/

/* Bit fields for PRS CONSUMER_TIMER2_DTI */
#define _PRS_CONSUMER_TIMER2_DTI_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_TIMER2_DTI   */
#define _PRS_CONSUMER_TIMER2_DTI_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_TIMER2_DTI            */
#define _PRS_CONSUMER_TIMER2_DTI_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER2_DTI_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER2_DTI_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_DTI    */
#define PRS_CONSUMER_TIMER2_DTI_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER2_DTI_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_DTI*/

/* Bit fields for PRS CONSUMER_TIMER2_DTIFS1 */
#define _PRS_CONSUMER_TIMER2_DTIFS1_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER2_DTIFS1*/
#define _PRS_CONSUMER_TIMER2_DTIFS1_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER2_DTIFS1         */
#define _PRS_CONSUMER_TIMER2_DTIFS1_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER2_DTIFS1_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER2_DTIFS1_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_DTIFS1 */
#define PRS_CONSUMER_TIMER2_DTIFS1_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER2_DTIFS1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_DTIFS1*/

/* Bit fields for PRS CONSUMER_TIMER2_DTIFS2 */
#define _PRS_CONSUMER_TIMER2_DTIFS2_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER2_DTIFS2*/
#define _PRS_CONSUMER_TIMER2_DTIFS2_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER2_DTIFS2         */
#define _PRS_CONSUMER_TIMER2_DTIFS2_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER2_DTIFS2_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER2_DTIFS2_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER2_DTIFS2 */
#define PRS_CONSUMER_TIMER2_DTIFS2_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER2_DTIFS2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER2_DTIFS2*/

/* Bit fields for PRS CONSUMER_TIMER3_CC0 */
#define _PRS_CONSUMER_TIMER3_CC0_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER3_CC0   */
#define _PRS_CONSUMER_TIMER3_CC0_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER3_CC0            */
#define _PRS_CONSUMER_TIMER3_CC0_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER3_CC0_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER3_CC0_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_CC0    */
#define PRS_CONSUMER_TIMER3_CC0_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER3_CC0_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_CC0*/
#define _PRS_CONSUMER_TIMER3_CC0_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER3_CC0_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER3_CC0_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_CC0    */
#define PRS_CONSUMER_TIMER3_CC0_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER3_CC0_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_CC0*/

/* Bit fields for PRS CONSUMER_TIMER3_CC1 */
#define _PRS_CONSUMER_TIMER3_CC1_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER3_CC1   */
#define _PRS_CONSUMER_TIMER3_CC1_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER3_CC1            */
#define _PRS_CONSUMER_TIMER3_CC1_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER3_CC1_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER3_CC1_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_CC1    */
#define PRS_CONSUMER_TIMER3_CC1_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER3_CC1_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_CC1*/
#define _PRS_CONSUMER_TIMER3_CC1_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER3_CC1_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER3_CC1_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_CC1    */
#define PRS_CONSUMER_TIMER3_CC1_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER3_CC1_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_CC1*/

/* Bit fields for PRS CONSUMER_TIMER3_CC2 */
#define _PRS_CONSUMER_TIMER3_CC2_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER3_CC2   */
#define _PRS_CONSUMER_TIMER3_CC2_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER3_CC2            */
#define _PRS_CONSUMER_TIMER3_CC2_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER3_CC2_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER3_CC2_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_CC2    */
#define PRS_CONSUMER_TIMER3_CC2_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER3_CC2_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_CC2*/
#define _PRS_CONSUMER_TIMER3_CC2_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER3_CC2_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER3_CC2_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_CC2    */
#define PRS_CONSUMER_TIMER3_CC2_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER3_CC2_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_CC2*/

/* Bit fields for PRS CONSUMER_TIMER3_DTI */
#define _PRS_CONSUMER_TIMER3_DTI_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_TIMER3_DTI   */
#define _PRS_CONSUMER_TIMER3_DTI_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_TIMER3_DTI            */
#define _PRS_CONSUMER_TIMER3_DTI_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER3_DTI_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER3_DTI_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_DTI    */
#define PRS_CONSUMER_TIMER3_DTI_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER3_DTI_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_DTI*/

/* Bit fields for PRS CONSUMER_TIMER3_DTIFS1 */
#define _PRS_CONSUMER_TIMER3_DTIFS1_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER3_DTIFS1*/
#define _PRS_CONSUMER_TIMER3_DTIFS1_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER3_DTIFS1         */
#define _PRS_CONSUMER_TIMER3_DTIFS1_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER3_DTIFS1_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER3_DTIFS1_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_DTIFS1 */
#define PRS_CONSUMER_TIMER3_DTIFS1_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER3_DTIFS1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_DTIFS1*/

/* Bit fields for PRS CONSUMER_TIMER3_DTIFS2 */
#define _PRS_CONSUMER_TIMER3_DTIFS2_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER3_DTIFS2*/
#define _PRS_CONSUMER_TIMER3_DTIFS2_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER3_DTIFS2         */
#define _PRS_CONSUMER_TIMER3_DTIFS2_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER3_DTIFS2_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER3_DTIFS2_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER3_DTIFS2 */
#define PRS_CONSUMER_TIMER3_DTIFS2_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER3_DTIFS2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER3_DTIFS2*/

/* Bit fields for PRS CONSUMER_TIMER4_CC0 */
#define _PRS_CONSUMER_TIMER4_CC0_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER4_CC0   */
#define _PRS_CONSUMER_TIMER4_CC0_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER4_CC0            */
#define _PRS_CONSUMER_TIMER4_CC0_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER4_CC0_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER4_CC0_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_CC0    */
#define PRS_CONSUMER_TIMER4_CC0_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER4_CC0_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_CC0*/
#define _PRS_CONSUMER_TIMER4_CC0_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER4_CC0_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER4_CC0_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_CC0    */
#define PRS_CONSUMER_TIMER4_CC0_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER4_CC0_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_CC0*/

/* Bit fields for PRS CONSUMER_TIMER4_CC1 */
#define _PRS_CONSUMER_TIMER4_CC1_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER4_CC1   */
#define _PRS_CONSUMER_TIMER4_CC1_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER4_CC1            */
#define _PRS_CONSUMER_TIMER4_CC1_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER4_CC1_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER4_CC1_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_CC1    */
#define PRS_CONSUMER_TIMER4_CC1_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER4_CC1_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_CC1*/
#define _PRS_CONSUMER_TIMER4_CC1_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER4_CC1_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER4_CC1_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_CC1    */
#define PRS_CONSUMER_TIMER4_CC1_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER4_CC1_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_CC1*/

/* Bit fields for PRS CONSUMER_TIMER4_CC2 */
#define _PRS_CONSUMER_TIMER4_CC2_RESETVALUE                  0x00000000UL                                    /**< Default value for PRS_CONSUMER_TIMER4_CC2   */
#define _PRS_CONSUMER_TIMER4_CC2_MASK                        0x0000030FUL                                    /**< Mask for PRS_CONSUMER_TIMER4_CC2            */
#define _PRS_CONSUMER_TIMER4_CC2_PRSSEL_SHIFT                0                                               /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER4_CC2_PRSSEL_MASK                 0xFUL                                           /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER4_CC2_PRSSEL_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_CC2    */
#define PRS_CONSUMER_TIMER4_CC2_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER4_CC2_PRSSEL_DEFAULT << 0)  /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_CC2*/
#define _PRS_CONSUMER_TIMER4_CC2_SPRSSEL_SHIFT               8                                               /**< Shift value for PRS_SPRSSEL                 */
#define _PRS_CONSUMER_TIMER4_CC2_SPRSSEL_MASK                0x300UL                                         /**< Bit mask for PRS_SPRSSEL                    */
#define _PRS_CONSUMER_TIMER4_CC2_SPRSSEL_DEFAULT             0x00000000UL                                    /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_CC2    */
#define PRS_CONSUMER_TIMER4_CC2_SPRSSEL_DEFAULT              (_PRS_CONSUMER_TIMER4_CC2_SPRSSEL_DEFAULT << 8) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_CC2*/

/* Bit fields for PRS CONSUMER_TIMER4_DTI */
#define _PRS_CONSUMER_TIMER4_DTI_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_TIMER4_DTI   */
#define _PRS_CONSUMER_TIMER4_DTI_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_TIMER4_DTI            */
#define _PRS_CONSUMER_TIMER4_DTI_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER4_DTI_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER4_DTI_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_DTI    */
#define PRS_CONSUMER_TIMER4_DTI_PRSSEL_DEFAULT               (_PRS_CONSUMER_TIMER4_DTI_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_DTI*/

/* Bit fields for PRS CONSUMER_TIMER4_DTIFS1 */
#define _PRS_CONSUMER_TIMER4_DTIFS1_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER4_DTIFS1*/
#define _PRS_CONSUMER_TIMER4_DTIFS1_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER4_DTIFS1         */
#define _PRS_CONSUMER_TIMER4_DTIFS1_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER4_DTIFS1_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER4_DTIFS1_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_DTIFS1 */
#define PRS_CONSUMER_TIMER4_DTIFS1_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER4_DTIFS1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_DTIFS1*/

/* Bit fields for PRS CONSUMER_TIMER4_DTIFS2 */
#define _PRS_CONSUMER_TIMER4_DTIFS2_RESETVALUE               0x00000000UL                                      /**< Default value for PRS_CONSUMER_TIMER4_DTIFS2*/
#define _PRS_CONSUMER_TIMER4_DTIFS2_MASK                     0x0000000FUL                                      /**< Mask for PRS_CONSUMER_TIMER4_DTIFS2         */
#define _PRS_CONSUMER_TIMER4_DTIFS2_PRSSEL_SHIFT             0                                                 /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_TIMER4_DTIFS2_PRSSEL_MASK              0xFUL                                             /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_TIMER4_DTIFS2_PRSSEL_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for PRS_CONSUMER_TIMER4_DTIFS2 */
#define PRS_CONSUMER_TIMER4_DTIFS2_PRSSEL_DEFAULT            (_PRS_CONSUMER_TIMER4_DTIFS2_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_TIMER4_DTIFS2*/

/* Bit fields for PRS CONSUMER_USART0_CLK */
#define _PRS_CONSUMER_USART0_CLK_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_USART0_CLK   */
#define _PRS_CONSUMER_USART0_CLK_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_USART0_CLK            */
#define _PRS_CONSUMER_USART0_CLK_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART0_CLK_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART0_CLK_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_USART0_CLK    */
#define PRS_CONSUMER_USART0_CLK_PRSSEL_DEFAULT               (_PRS_CONSUMER_USART0_CLK_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART0_CLK*/

/* Bit fields for PRS CONSUMER_USART0_IR */
#define _PRS_CONSUMER_USART0_IR_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_USART0_IR    */
#define _PRS_CONSUMER_USART0_IR_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_USART0_IR             */
#define _PRS_CONSUMER_USART0_IR_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART0_IR_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART0_IR_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_USART0_IR     */
#define PRS_CONSUMER_USART0_IR_PRSSEL_DEFAULT                (_PRS_CONSUMER_USART0_IR_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART0_IR*/

/* Bit fields for PRS CONSUMER_USART0_RX */
#define _PRS_CONSUMER_USART0_RX_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_USART0_RX    */
#define _PRS_CONSUMER_USART0_RX_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_USART0_RX             */
#define _PRS_CONSUMER_USART0_RX_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART0_RX_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART0_RX_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_USART0_RX     */
#define PRS_CONSUMER_USART0_RX_PRSSEL_DEFAULT                (_PRS_CONSUMER_USART0_RX_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART0_RX*/

/* Bit fields for PRS CONSUMER_USART0_TRIGGER */
#define _PRS_CONSUMER_USART0_TRIGGER_RESETVALUE              0x00000000UL                                       /**< Default value for PRS_CONSUMER_USART0_TRIGGER*/
#define _PRS_CONSUMER_USART0_TRIGGER_MASK                    0x0000000FUL                                       /**< Mask for PRS_CONSUMER_USART0_TRIGGER        */
#define _PRS_CONSUMER_USART0_TRIGGER_PRSSEL_SHIFT            0                                                  /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART0_TRIGGER_PRSSEL_MASK             0xFUL                                              /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART0_TRIGGER_PRSSEL_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for PRS_CONSUMER_USART0_TRIGGER*/
#define PRS_CONSUMER_USART0_TRIGGER_PRSSEL_DEFAULT           (_PRS_CONSUMER_USART0_TRIGGER_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART0_TRIGGER*/

/* Bit fields for PRS CONSUMER_USART1_CLK */
#define _PRS_CONSUMER_USART1_CLK_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_USART1_CLK   */
#define _PRS_CONSUMER_USART1_CLK_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_USART1_CLK            */
#define _PRS_CONSUMER_USART1_CLK_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART1_CLK_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART1_CLK_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_USART1_CLK    */
#define PRS_CONSUMER_USART1_CLK_PRSSEL_DEFAULT               (_PRS_CONSUMER_USART1_CLK_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART1_CLK*/

/* Bit fields for PRS CONSUMER_USART1_IR */
#define _PRS_CONSUMER_USART1_IR_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_USART1_IR    */
#define _PRS_CONSUMER_USART1_IR_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_USART1_IR             */
#define _PRS_CONSUMER_USART1_IR_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART1_IR_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART1_IR_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_USART1_IR     */
#define PRS_CONSUMER_USART1_IR_PRSSEL_DEFAULT                (_PRS_CONSUMER_USART1_IR_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART1_IR*/

/* Bit fields for PRS CONSUMER_USART1_RX */
#define _PRS_CONSUMER_USART1_RX_RESETVALUE                   0x00000000UL                                  /**< Default value for PRS_CONSUMER_USART1_RX    */
#define _PRS_CONSUMER_USART1_RX_MASK                         0x0000000FUL                                  /**< Mask for PRS_CONSUMER_USART1_RX             */
#define _PRS_CONSUMER_USART1_RX_PRSSEL_SHIFT                 0                                             /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART1_RX_PRSSEL_MASK                  0xFUL                                         /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART1_RX_PRSSEL_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PRS_CONSUMER_USART1_RX     */
#define PRS_CONSUMER_USART1_RX_PRSSEL_DEFAULT                (_PRS_CONSUMER_USART1_RX_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART1_RX*/

/* Bit fields for PRS CONSUMER_USART1_TRIGGER */
#define _PRS_CONSUMER_USART1_TRIGGER_RESETVALUE              0x00000000UL                                       /**< Default value for PRS_CONSUMER_USART1_TRIGGER*/
#define _PRS_CONSUMER_USART1_TRIGGER_MASK                    0x0000000FUL                                       /**< Mask for PRS_CONSUMER_USART1_TRIGGER        */
#define _PRS_CONSUMER_USART1_TRIGGER_PRSSEL_SHIFT            0                                                  /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_USART1_TRIGGER_PRSSEL_MASK             0xFUL                                              /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_USART1_TRIGGER_PRSSEL_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for PRS_CONSUMER_USART1_TRIGGER*/
#define PRS_CONSUMER_USART1_TRIGGER_PRSSEL_DEFAULT           (_PRS_CONSUMER_USART1_TRIGGER_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_USART1_TRIGGER*/

/* Bit fields for PRS CONSUMER_WDOG0_SRC0 */
#define _PRS_CONSUMER_WDOG0_SRC0_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_WDOG0_SRC0   */
#define _PRS_CONSUMER_WDOG0_SRC0_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_WDOG0_SRC0            */
#define _PRS_CONSUMER_WDOG0_SRC0_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_WDOG0_SRC0_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_WDOG0_SRC0_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_WDOG0_SRC0    */
#define PRS_CONSUMER_WDOG0_SRC0_PRSSEL_DEFAULT               (_PRS_CONSUMER_WDOG0_SRC0_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_WDOG0_SRC0*/

/* Bit fields for PRS CONSUMER_WDOG0_SRC1 */
#define _PRS_CONSUMER_WDOG0_SRC1_RESETVALUE                  0x00000000UL                                   /**< Default value for PRS_CONSUMER_WDOG0_SRC1   */
#define _PRS_CONSUMER_WDOG0_SRC1_MASK                        0x0000000FUL                                   /**< Mask for PRS_CONSUMER_WDOG0_SRC1            */
#define _PRS_CONSUMER_WDOG0_SRC1_PRSSEL_SHIFT                0                                              /**< Shift value for PRS_PRSSEL                  */
#define _PRS_CONSUMER_WDOG0_SRC1_PRSSEL_MASK                 0xFUL                                          /**< Bit mask for PRS_PRSSEL                     */
#define _PRS_CONSUMER_WDOG0_SRC1_PRSSEL_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PRS_CONSUMER_WDOG0_SRC1    */
#define PRS_CONSUMER_WDOG0_SRC1_PRSSEL_DEFAULT               (_PRS_CONSUMER_WDOG0_SRC1_PRSSEL_DEFAULT << 0) /**< Shifted mode DEFAULT for PRS_CONSUMER_WDOG0_SRC1*/

/** @} End of group EFR32MG22_PRS_BitFields */
/** @} End of group EFR32MG22_PRS */
/** @} End of group Parts */
#endif /* EFR32MG22_PRS_H */
