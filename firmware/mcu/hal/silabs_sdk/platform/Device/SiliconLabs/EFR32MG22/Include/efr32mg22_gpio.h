/**************************************************************************//**
 * @file
 * @brief EFR32MG22 GPIO register and bit field definitions
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
#ifndef EFR32MG22_GPIO_H
#define EFR32MG22_GPIO_H
#define GPIO_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/

#include "efr32mg22_gpio_port.h"

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< CMU pin enable                                     */
  __IOM uint32_t CLKIN0ROUTE;                        /**< CLKIN0 port/pin select                             */
  __IOM uint32_t CLKOUT0ROUTE;                       /**< CLKOUT0 port/pin select                            */
  __IOM uint32_t CLKOUT1ROUTE;                       /**< CLKOUT1 port/pin select                            */
  __IOM uint32_t CLKOUT2ROUTE;                       /**< CLKOUT2 port/pin select                            */
  uint32_t       RESERVED0[2U];                      /**< Reserved for future use                            */
} GPIO_CMUROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< DCDC pin enable                                    */
  __IOM uint32_t DCDCCOREHIDDENROUTE;                /**< DCDCCOREHIDDEN port/pin select                     */
  uint32_t       RESERVED0[2U];                      /**< Reserved for future use                            */
} GPIO_DCDCROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< FRC pin enable                                     */
  __IOM uint32_t DCLKROUTE;                          /**< DCLK port/pin select                               */
  __IOM uint32_t DFRAMEROUTE;                        /**< DFRAME port/pin select                             */
  __IOM uint32_t DOUTROUTE;                          /**< DOUT port/pin select                               */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_FRCROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< I2C0 pin enable                                    */
  __IOM uint32_t SCLROUTE;                           /**< SCL port/pin select                                */
  __IOM uint32_t SDAROUTE;                           /**< SDA port/pin select                                */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_I2CROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< LETIMER pin enable                                 */
  __IOM uint32_t OUT0ROUTE;                          /**< OUT0 port/pin select                               */
  __IOM uint32_t OUT1ROUTE;                          /**< OUT1 port/pin select                               */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_LETIMERROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< EUART pin enable                                   */
  __IOM uint32_t CTSROUTE;                           /**< CTS port/pin select                                */
  __IOM uint32_t RTSROUTE;                           /**< RTS port/pin select                                */
  __IOM uint32_t RXROUTE;                            /**< RX port/pin select                                 */
  __IOM uint32_t TXROUTE;                            /**< TX port/pin select                                 */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_EUARTROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< MODEM pin enable                                   */
  __IOM uint32_t ANT0ROUTE;                          /**< ANT0 port/pin select                               */
  __IOM uint32_t ANT1ROUTE;                          /**< ANT1 port/pin select                               */
  __IOM uint32_t ANTROLLOVERROUTE;                   /**< ANTROLLOVER port/pin select                        */
  __IOM uint32_t ANTRR0ROUTE;                        /**< ANTRR0 port/pin select                             */
  __IOM uint32_t ANTRR1ROUTE;                        /**< ANTRR1 port/pin select                             */
  __IOM uint32_t ANTRR2ROUTE;                        /**< ANTRR2 port/pin select                             */
  __IOM uint32_t ANTRR3ROUTE;                        /**< ANTRR3 port/pin select                             */
  __IOM uint32_t ANTRR4ROUTE;                        /**< ANTRR4 port/pin select                             */
  __IOM uint32_t ANTRR5ROUTE;                        /**< ANTRR5 port/pin select                             */
  __IOM uint32_t ANTSWENROUTE;                       /**< ANTSWEN port/pin select                            */
  __IOM uint32_t ANTSWUSROUTE;                       /**< ANTSWUS port/pin select                            */
  __IOM uint32_t ANTTRIGROUTE;                       /**< ANTTRIG port/pin select                            */
  __IOM uint32_t ANTTRIGSTOPROUTE;                   /**< ANTTRIGSTOP port/pin select                        */
  __IOM uint32_t DCLKROUTE;                          /**< DCLK port/pin select                               */
  __IOM uint32_t DINROUTE;                           /**< DIN port/pin select                                */
  __IOM uint32_t DOUTROUTE;                          /**< DOUT port/pin select                               */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_MODEMROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< PDM pin enable                                     */
  __IOM uint32_t CLKROUTE;                           /**< CLK port/pin select                                */
  __IOM uint32_t DAT0ROUTE;                          /**< DAT0 port/pin select                               */
  __IOM uint32_t DAT1ROUTE;                          /**< DAT1 port/pin select                               */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_PDMROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< PRS0 pin enable                                    */
  __IOM uint32_t ASYNCH0ROUTE;                       /**< ASYNCH0 port/pin select                            */
  __IOM uint32_t ASYNCH1ROUTE;                       /**< ASYNCH1 port/pin select                            */
  __IOM uint32_t ASYNCH2ROUTE;                       /**< ASYNCH2 port/pin select                            */
  __IOM uint32_t ASYNCH3ROUTE;                       /**< ASYNCH3 port/pin select                            */
  __IOM uint32_t ASYNCH4ROUTE;                       /**< ASYNCH4 port/pin select                            */
  __IOM uint32_t ASYNCH5ROUTE;                       /**< ASYNCH5 port/pin select                            */
  __IOM uint32_t ASYNCH6ROUTE;                       /**< ASYNCH6 port/pin select                            */
  __IOM uint32_t ASYNCH7ROUTE;                       /**< ASYNCH7 port/pin select                            */
  __IOM uint32_t ASYNCH8ROUTE;                       /**< ASYNCH8 port/pin select                            */
  __IOM uint32_t ASYNCH9ROUTE;                       /**< ASYNCH9 port/pin select                            */
  __IOM uint32_t ASYNCH10ROUTE;                      /**< ASYNCH10 port/pin select                           */
  __IOM uint32_t ASYNCH11ROUTE;                      /**< ASYNCH11 port/pin select                           */
  __IOM uint32_t SYNCH0ROUTE;                        /**< SYNCH0 port/pin select                             */
  __IOM uint32_t SYNCH1ROUTE;                        /**< SYNCH1 port/pin select                             */
  __IOM uint32_t SYNCH2ROUTE;                        /**< SYNCH2 port/pin select                             */
  __IOM uint32_t SYNCH3ROUTE;                        /**< SYNCH3 port/pin select                             */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_PRSROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< TIMER0 pin enable                                  */
  __IOM uint32_t CC0ROUTE;                           /**< CC0 port/pin select                                */
  __IOM uint32_t CC1ROUTE;                           /**< CC1 port/pin select                                */
  __IOM uint32_t CC2ROUTE;                           /**< CC2 port/pin select                                */
  __IOM uint32_t CCC0ROUTE;                          /**< CCC0 port/pin select                               */
  __IOM uint32_t CCC1ROUTE;                          /**< CCC1 port/pin select                               */
  __IOM uint32_t CCC2ROUTE;                          /**< CCC2 port/pin select                               */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_TIMERROUTE_TypeDef;

typedef struct {
  __IOM uint32_t ROUTEEN;                            /**< USART0 pin enable                                  */
  __IOM uint32_t CSROUTE;                            /**< CS port/pin select                                 */
  __IOM uint32_t CTSROUTE;                           /**< CTS port/pin select                                */
  __IOM uint32_t RTSROUTE;                           /**< RTS port/pin select                                */
  __IOM uint32_t RXROUTE;                            /**< RX port/pin select                                 */
  __IOM uint32_t CLKROUTE;                           /**< SCLK port/pin select                               */
  __IOM uint32_t TXROUTE;                            /**< TX port/pin select                                 */
  uint32_t       RESERVED0[1U];                      /**< Reserved for future use                            */
} GPIO_USARTROUTE_TypeDef;

typedef struct {
  GPIO_PORT_TypeDef         P[4U];                   /**<                                                    */
  uint32_t                  RESERVED0[144U];         /**< Reserved for future use                            */
  __IOM uint32_t            LOCK;                    /**< Lock Register                                      */
  uint32_t                  RESERVED1[3U];           /**< Reserved for future use                            */
  __IM uint32_t             GPIOLOCKSTATUS;          /**< Lock Status                                        */
  uint32_t                  RESERVED2[3U];           /**< Reserved for future use                            */
  __IOM uint32_t            ABUSALLOC;               /**< A Bus allocation                                   */
  __IOM uint32_t            BBUSALLOC;               /**< B Bus allocation                                   */
  __IOM uint32_t            CDBUSALLOC;              /**< CD Bus allocation                                  */
  uint32_t                  RESERVED3[1U];           /**< Reserved for future use                            */
  __IOM uint32_t            AODD0SWITCH;             /**< AODD0 Switch Register                              */
  __IOM uint32_t            AODD1SWITCH;             /**< AODD1 Switch Register                              */
  __IOM uint32_t            AEVEN0SWITCH;            /**< AEVEN0 Switch Register                             */
  __IOM uint32_t            AEVEN1SWITCH;            /**< AEVEN1 Switch Register                             */
  __IOM uint32_t            BODD0SWITCH;             /**< BODD0 Switch Register                              */
  __IOM uint32_t            BODD1SWITCH;             /**< BODD1 Switch Register                              */
  __IOM uint32_t            BEVEN0SWITCH;            /**< BEVEN0 Switch Register                             */
  __IOM uint32_t            BEVEN1SWITCH;            /**< BEVEN1 Switch Register                             */
  __IOM uint32_t            CDODD0SWITCH;            /**< CDODD0 Switch Register                             */
  __IOM uint32_t            CDODD1SWITCH;            /**< CDODD1 Switch Register                             */
  __IOM uint32_t            CDEVEN0SWITCH;           /**< CDEVEN0 Switch Register                            */
  __IOM uint32_t            CDEVEN1SWITCH;           /**< CDEVEN1 Switch Register                            */
  uint32_t                  RESERVED4[40U];          /**< Reserved for future use                            */
  __IOM uint32_t            EXTIPSELL;               /**< External Interrupt Port Select Low                 */
  __IOM uint32_t            EXTIPSELH;               /**< External interrupt Port Select High                */
  __IOM uint32_t            EXTIPINSELL;             /**< External Interrupt Pin Select Low                  */
  __IOM uint32_t            EXTIPINSELH;             /**< External Interrupt Pin Select High                 */
  __IOM uint32_t            EXTIRISE;                /**< External Interrupt Rising Edge Trigger             */
  __IOM uint32_t            EXTIFALL;                /**< External Interrupt Falling Edge Trigger            */
  uint32_t                  RESERVED5[2U];           /**< Reserved for future use                            */
  __IOM uint32_t            IF;                      /**< Interrupt Flag                                     */
  __IOM uint32_t            IEN;                     /**< Interrupt Enable                                   */
  uint32_t                  RESERVED6[1U];           /**< Reserved for future use                            */
  __IOM uint32_t            EM4WUEN;                 /**< EM4 wakeup enable                                  */
  __IOM uint32_t            EM4WUPOL;                /**< EM4 wakeup polarity                                */
  uint32_t                  RESERVED7[3U];           /**< Reserved for future use                            */
  __IOM uint32_t            DBGROUTEPEN;             /**< Debugger Route Pin enable                          */
  __IOM uint32_t            TRACEROUTEPEN;           /**< Trace Route Pin Enable                             */
  uint32_t                  RESERVED8[2U];           /**< Reserved for future use                            */
  GPIO_CMUROUTE_TypeDef     CMUROUTE;                /**< cmu DBUS config registers                          */
  GPIO_DCDCROUTE_TypeDef    DCDCROUTE;               /**< dcdc DBUS config registers                         */
  GPIO_FRCROUTE_TypeDef     FRCROUTE;                /**< frc DBUS config registers                          */
  GPIO_I2CROUTE_TypeDef     I2CROUTE[2U];            /**< i2c0 DBUS config registers                         */
  GPIO_LETIMERROUTE_TypeDef LETIMERROUTE[1U];        /**< letimer DBUS config registers                      */
  GPIO_EUARTROUTE_TypeDef   EUARTROUTE[1U];          /**< leuart DBUS config registers                       */
  GPIO_MODEMROUTE_TypeDef   MODEMROUTE;              /**< modem DBUS config registers                        */
  GPIO_PDMROUTE_TypeDef     PDMROUTE;                /**< pdm DBUS config registers                          */
  GPIO_PRSROUTE_TypeDef     PRSROUTE[1U];            /**< prs0 DBUS config registers                         */
  GPIO_TIMERROUTE_TypeDef   TIMERROUTE[5U];          /**< timer0 DBUS config registers                       */
  GPIO_USARTROUTE_TypeDef   USARTROUTE[2U];          /**< usart0 DBUS config registers                       */
  uint32_t                  RESERVED9[617U];         /**< Reserved for future use                            */
  GPIO_PORT_TypeDef         P_SET[4U];               /**<                                                    */
  uint32_t                  RESERVED10[144U];        /**< Reserved for future use                            */
  __IOM uint32_t            LOCK_SET;                /**< Lock Register                                      */
  uint32_t                  RESERVED11[3U];          /**< Reserved for future use                            */
  __IM uint32_t             GPIOLOCKSTATUS_SET;      /**< Lock Status                                        */
  uint32_t                  RESERVED12[3U];          /**< Reserved for future use                            */
  __IOM uint32_t            ABUSALLOC_SET;           /**< A Bus allocation                                   */
  __IOM uint32_t            BBUSALLOC_SET;           /**< B Bus allocation                                   */
  __IOM uint32_t            CDBUSALLOC_SET;          /**< CD Bus allocation                                  */
  uint32_t                  RESERVED13[1U];          /**< Reserved for future use                            */
  __IOM uint32_t            AODD0SWITCH_SET;         /**< AODD0 Switch Register                              */
  __IOM uint32_t            AODD1SWITCH_SET;         /**< AODD1 Switch Register                              */
  __IOM uint32_t            AEVEN0SWITCH_SET;        /**< AEVEN0 Switch Register                             */
  __IOM uint32_t            AEVEN1SWITCH_SET;        /**< AEVEN1 Switch Register                             */
  __IOM uint32_t            BODD0SWITCH_SET;         /**< BODD0 Switch Register                              */
  __IOM uint32_t            BODD1SWITCH_SET;         /**< BODD1 Switch Register                              */
  __IOM uint32_t            BEVEN0SWITCH_SET;        /**< BEVEN0 Switch Register                             */
  __IOM uint32_t            BEVEN1SWITCH_SET;        /**< BEVEN1 Switch Register                             */
  __IOM uint32_t            CDODD0SWITCH_SET;        /**< CDODD0 Switch Register                             */
  __IOM uint32_t            CDODD1SWITCH_SET;        /**< CDODD1 Switch Register                             */
  __IOM uint32_t            CDEVEN0SWITCH_SET;       /**< CDEVEN0 Switch Register                            */
  __IOM uint32_t            CDEVEN1SWITCH_SET;       /**< CDEVEN1 Switch Register                            */
  uint32_t                  RESERVED14[40U];         /**< Reserved for future use                            */
  __IOM uint32_t            EXTIPSELL_SET;           /**< External Interrupt Port Select Low                 */
  __IOM uint32_t            EXTIPSELH_SET;           /**< External interrupt Port Select High                */
  __IOM uint32_t            EXTIPINSELL_SET;         /**< External Interrupt Pin Select Low                  */
  __IOM uint32_t            EXTIPINSELH_SET;         /**< External Interrupt Pin Select High                 */
  __IOM uint32_t            EXTIRISE_SET;            /**< External Interrupt Rising Edge Trigger             */
  __IOM uint32_t            EXTIFALL_SET;            /**< External Interrupt Falling Edge Trigger            */
  uint32_t                  RESERVED15[2U];          /**< Reserved for future use                            */
  __IOM uint32_t            IF_SET;                  /**< Interrupt Flag                                     */
  __IOM uint32_t            IEN_SET;                 /**< Interrupt Enable                                   */
  uint32_t                  RESERVED16[1U];          /**< Reserved for future use                            */
  __IOM uint32_t            EM4WUEN_SET;             /**< EM4 wakeup enable                                  */
  __IOM uint32_t            EM4WUPOL_SET;            /**< EM4 wakeup polarity                                */
  uint32_t                  RESERVED17[3U];          /**< Reserved for future use                            */
  __IOM uint32_t            DBGROUTEPEN_SET;         /**< Debugger Route Pin enable                          */
  __IOM uint32_t            TRACEROUTEPEN_SET;       /**< Trace Route Pin Enable                             */
  uint32_t                  RESERVED18[2U];          /**< Reserved for future use                            */
  GPIO_CMUROUTE_TypeDef     CMUROUTE_SET;            /**< cmu DBUS config registers                          */
  GPIO_DCDCROUTE_TypeDef    DCDCROUTE_SET;           /**< dcdc DBUS config registers                         */
  GPIO_FRCROUTE_TypeDef     FRCROUTE_SET;            /**< frc DBUS config registers                          */
  GPIO_I2CROUTE_TypeDef     I2CROUTE_SET[2U];        /**< i2c0 DBUS config registers                         */
  GPIO_LETIMERROUTE_TypeDef LETIMERROUTE_SET[1U];    /**< letimer DBUS config registers                      */
  GPIO_EUARTROUTE_TypeDef   EUARTROUTE_SET[1U];      /**< leuart DBUS config registers                       */
  GPIO_MODEMROUTE_TypeDef   MODEMROUTE_SET;          /**< modem DBUS config registers                        */
  GPIO_PDMROUTE_TypeDef     PDMROUTE_SET;            /**< pdm DBUS config registers                          */
  GPIO_PRSROUTE_TypeDef     PRSROUTE_SET[1U];        /**< prs0 DBUS config registers                         */
  GPIO_TIMERROUTE_TypeDef   TIMERROUTE_SET[5U];      /**< timer0 DBUS config registers                       */
  GPIO_USARTROUTE_TypeDef   USARTROUTE_SET[2U];      /**< usart0 DBUS config registers                       */
  uint32_t                  RESERVED19[617U];        /**< Reserved for future use                            */
  GPIO_PORT_TypeDef         P_CLR[4U];               /**<                                                    */
  uint32_t                  RESERVED20[144U];        /**< Reserved for future use                            */
  __IOM uint32_t            LOCK_CLR;                /**< Lock Register                                      */
  uint32_t                  RESERVED21[3U];          /**< Reserved for future use                            */
  __IM uint32_t             GPIOLOCKSTATUS_CLR;      /**< Lock Status                                        */
  uint32_t                  RESERVED22[3U];          /**< Reserved for future use                            */
  __IOM uint32_t            ABUSALLOC_CLR;           /**< A Bus allocation                                   */
  __IOM uint32_t            BBUSALLOC_CLR;           /**< B Bus allocation                                   */
  __IOM uint32_t            CDBUSALLOC_CLR;          /**< CD Bus allocation                                  */
  uint32_t                  RESERVED23[1U];          /**< Reserved for future use                            */
  __IOM uint32_t            AODD0SWITCH_CLR;         /**< AODD0 Switch Register                              */
  __IOM uint32_t            AODD1SWITCH_CLR;         /**< AODD1 Switch Register                              */
  __IOM uint32_t            AEVEN0SWITCH_CLR;        /**< AEVEN0 Switch Register                             */
  __IOM uint32_t            AEVEN1SWITCH_CLR;        /**< AEVEN1 Switch Register                             */
  __IOM uint32_t            BODD0SWITCH_CLR;         /**< BODD0 Switch Register                              */
  __IOM uint32_t            BODD1SWITCH_CLR;         /**< BODD1 Switch Register                              */
  __IOM uint32_t            BEVEN0SWITCH_CLR;        /**< BEVEN0 Switch Register                             */
  __IOM uint32_t            BEVEN1SWITCH_CLR;        /**< BEVEN1 Switch Register                             */
  __IOM uint32_t            CDODD0SWITCH_CLR;        /**< CDODD0 Switch Register                             */
  __IOM uint32_t            CDODD1SWITCH_CLR;        /**< CDODD1 Switch Register                             */
  __IOM uint32_t            CDEVEN0SWITCH_CLR;       /**< CDEVEN0 Switch Register                            */
  __IOM uint32_t            CDEVEN1SWITCH_CLR;       /**< CDEVEN1 Switch Register                            */
  uint32_t                  RESERVED24[40U];         /**< Reserved for future use                            */
  __IOM uint32_t            EXTIPSELL_CLR;           /**< External Interrupt Port Select Low                 */
  __IOM uint32_t            EXTIPSELH_CLR;           /**< External interrupt Port Select High                */
  __IOM uint32_t            EXTIPINSELL_CLR;         /**< External Interrupt Pin Select Low                  */
  __IOM uint32_t            EXTIPINSELH_CLR;         /**< External Interrupt Pin Select High                 */
  __IOM uint32_t            EXTIRISE_CLR;            /**< External Interrupt Rising Edge Trigger             */
  __IOM uint32_t            EXTIFALL_CLR;            /**< External Interrupt Falling Edge Trigger            */
  uint32_t                  RESERVED25[2U];          /**< Reserved for future use                            */
  __IOM uint32_t            IF_CLR;                  /**< Interrupt Flag                                     */
  __IOM uint32_t            IEN_CLR;                 /**< Interrupt Enable                                   */
  uint32_t                  RESERVED26[1U];          /**< Reserved for future use                            */
  __IOM uint32_t            EM4WUEN_CLR;             /**< EM4 wakeup enable                                  */
  __IOM uint32_t            EM4WUPOL_CLR;            /**< EM4 wakeup polarity                                */
  uint32_t                  RESERVED27[3U];          /**< Reserved for future use                            */
  __IOM uint32_t            DBGROUTEPEN_CLR;         /**< Debugger Route Pin enable                          */
  __IOM uint32_t            TRACEROUTEPEN_CLR;       /**< Trace Route Pin Enable                             */
  uint32_t                  RESERVED28[2U];          /**< Reserved for future use                            */
  GPIO_CMUROUTE_TypeDef     CMUROUTE_CLR;            /**< cmu DBUS config registers                          */
  GPIO_DCDCROUTE_TypeDef    DCDCROUTE_CLR;           /**< dcdc DBUS config registers                         */
  GPIO_FRCROUTE_TypeDef     FRCROUTE_CLR;            /**< frc DBUS config registers                          */
  GPIO_I2CROUTE_TypeDef     I2CROUTE_CLR[2U];        /**< i2c0 DBUS config registers                         */
  GPIO_LETIMERROUTE_TypeDef LETIMERROUTE_CLR[1U];    /**< letimer DBUS config registers                      */
  GPIO_EUARTROUTE_TypeDef   EUARTROUTE_CLR[1U];      /**< leuart DBUS config registers                       */
  GPIO_MODEMROUTE_TypeDef   MODEMROUTE_CLR;          /**< modem DBUS config registers                        */
  GPIO_PDMROUTE_TypeDef     PDMROUTE_CLR;            /**< pdm DBUS config registers                          */
  GPIO_PRSROUTE_TypeDef     PRSROUTE_CLR[1U];        /**< prs0 DBUS config registers                         */
  GPIO_TIMERROUTE_TypeDef   TIMERROUTE_CLR[5U];      /**< timer0 DBUS config registers                       */
  GPIO_USARTROUTE_TypeDef   USARTROUTE_CLR[2U];      /**< usart0 DBUS config registers                       */
  uint32_t                  RESERVED29[617U];        /**< Reserved for future use                            */
  GPIO_PORT_TypeDef         P_TGL[4U];               /**<                                                    */
  uint32_t                  RESERVED30[144U];        /**< Reserved for future use                            */
  __IOM uint32_t            LOCK_TGL;                /**< Lock Register                                      */
  uint32_t                  RESERVED31[3U];          /**< Reserved for future use                            */
  __IM uint32_t             GPIOLOCKSTATUS_TGL;      /**< Lock Status                                        */
  uint32_t                  RESERVED32[3U];          /**< Reserved for future use                            */
  __IOM uint32_t            ABUSALLOC_TGL;           /**< A Bus allocation                                   */
  __IOM uint32_t            BBUSALLOC_TGL;           /**< B Bus allocation                                   */
  __IOM uint32_t            CDBUSALLOC_TGL;          /**< CD Bus allocation                                  */
  uint32_t                  RESERVED33[1U];          /**< Reserved for future use                            */
  __IOM uint32_t            AODD0SWITCH_TGL;         /**< AODD0 Switch Register                              */
  __IOM uint32_t            AODD1SWITCH_TGL;         /**< AODD1 Switch Register                              */
  __IOM uint32_t            AEVEN0SWITCH_TGL;        /**< AEVEN0 Switch Register                             */
  __IOM uint32_t            AEVEN1SWITCH_TGL;        /**< AEVEN1 Switch Register                             */
  __IOM uint32_t            BODD0SWITCH_TGL;         /**< BODD0 Switch Register                              */
  __IOM uint32_t            BODD1SWITCH_TGL;         /**< BODD1 Switch Register                              */
  __IOM uint32_t            BEVEN0SWITCH_TGL;        /**< BEVEN0 Switch Register                             */
  __IOM uint32_t            BEVEN1SWITCH_TGL;        /**< BEVEN1 Switch Register                             */
  __IOM uint32_t            CDODD0SWITCH_TGL;        /**< CDODD0 Switch Register                             */
  __IOM uint32_t            CDODD1SWITCH_TGL;        /**< CDODD1 Switch Register                             */
  __IOM uint32_t            CDEVEN0SWITCH_TGL;       /**< CDEVEN0 Switch Register                            */
  __IOM uint32_t            CDEVEN1SWITCH_TGL;       /**< CDEVEN1 Switch Register                            */
  uint32_t                  RESERVED34[40U];         /**< Reserved for future use                            */
  __IOM uint32_t            EXTIPSELL_TGL;           /**< External Interrupt Port Select Low                 */
  __IOM uint32_t            EXTIPSELH_TGL;           /**< External interrupt Port Select High                */
  __IOM uint32_t            EXTIPINSELL_TGL;         /**< External Interrupt Pin Select Low                  */
  __IOM uint32_t            EXTIPINSELH_TGL;         /**< External Interrupt Pin Select High                 */
  __IOM uint32_t            EXTIRISE_TGL;            /**< External Interrupt Rising Edge Trigger             */
  __IOM uint32_t            EXTIFALL_TGL;            /**< External Interrupt Falling Edge Trigger            */
  uint32_t                  RESERVED35[2U];          /**< Reserved for future use                            */
  __IOM uint32_t            IF_TGL;                  /**< Interrupt Flag                                     */
  __IOM uint32_t            IEN_TGL;                 /**< Interrupt Enable                                   */
  uint32_t                  RESERVED36[1U];          /**< Reserved for future use                            */
  __IOM uint32_t            EM4WUEN_TGL;             /**< EM4 wakeup enable                                  */
  __IOM uint32_t            EM4WUPOL_TGL;            /**< EM4 wakeup polarity                                */
  uint32_t                  RESERVED37[3U];          /**< Reserved for future use                            */
  __IOM uint32_t            DBGROUTEPEN_TGL;         /**< Debugger Route Pin enable                          */
  __IOM uint32_t            TRACEROUTEPEN_TGL;       /**< Trace Route Pin Enable                             */
  uint32_t                  RESERVED38[2U];          /**< Reserved for future use                            */
  GPIO_CMUROUTE_TypeDef     CMUROUTE_TGL;            /**< cmu DBUS config registers                          */
  GPIO_DCDCROUTE_TypeDef    DCDCROUTE_TGL;           /**< dcdc DBUS config registers                         */
  GPIO_FRCROUTE_TypeDef     FRCROUTE_TGL;            /**< frc DBUS config registers                          */
  GPIO_I2CROUTE_TypeDef     I2CROUTE_TGL[2U];        /**< i2c0 DBUS config registers                         */
  GPIO_LETIMERROUTE_TypeDef LETIMERROUTE_TGL[1U];    /**< letimer DBUS config registers                      */
  GPIO_EUARTROUTE_TypeDef   EUARTROUTE_TGL[1U];      /**< leuart DBUS config registers                       */
  GPIO_MODEMROUTE_TypeDef   MODEMROUTE_TGL;          /**< modem DBUS config registers                        */
  GPIO_PDMROUTE_TypeDef     PDMROUTE_TGL;            /**< pdm DBUS config registers                          */
  GPIO_PRSROUTE_TypeDef     PRSROUTE_TGL[1U];        /**< prs0 DBUS config registers                         */
  GPIO_TIMERROUTE_TypeDef   TIMERROUTE_TGL[5U];      /**< timer0 DBUS config registers                       */
  GPIO_USARTROUTE_TypeDef   USARTROUTE_TGL[2U];      /**< usart0 DBUS config registers                       */
} GPIO_TypeDef;

#define GPIO_PORTA                                      0x00000000UL                    /**< PORTA index                                  */
#define GPIO_PORTB                                      0x00000001UL                    /**< PORTB index                                  */
#define GPIO_PORTC                                      0x00000002UL                    /**< PORTC index                                  */
#define GPIO_PORTD                                      0x00000003UL                    /**< PORTD index                                  */

/* Bit fields for GPIO LOCK */
#define _GPIO_LOCK_RESETVALUE                           0x0000A534UL                      /**< Default value for GPIO_LOCK                 */
#define _GPIO_LOCK_MASK                                 0x0000FFFFUL                      /**< Mask for GPIO_LOCK                          */
#define _GPIO_LOCK_LOCKKEY_SHIFT                        0                                 /**< Shift value for GPIO_LOCKKEY                */
#define _GPIO_LOCK_LOCKKEY_MASK                         0xFFFFUL                          /**< Bit mask for GPIO_LOCKKEY                   */
#define _GPIO_LOCK_LOCKKEY_DEFAULT                      0x0000A534UL                      /**< Mode DEFAULT for GPIO_LOCK                  */
#define _GPIO_LOCK_LOCKKEY_UNLOCK                       0x0000A534UL                      /**< Mode UNLOCK for GPIO_LOCK                   */
#define GPIO_LOCK_LOCKKEY_DEFAULT                       (_GPIO_LOCK_LOCKKEY_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_LOCK          */
#define GPIO_LOCK_LOCKKEY_UNLOCK                        (_GPIO_LOCK_LOCKKEY_UNLOCK << 0)  /**< Shifted mode UNLOCK for GPIO_LOCK           */

/* Bit fields for GPIO GPIOLOCKSTATUS */
#define _GPIO_GPIOLOCKSTATUS_RESETVALUE                 0x00000000UL                              /**< Default value for GPIO_GPIOLOCKSTATUS       */
#define _GPIO_GPIOLOCKSTATUS_MASK                       0x00000001UL                              /**< Mask for GPIO_GPIOLOCKSTATUS                */
#define GPIO_GPIOLOCKSTATUS_LOCK                        (0x1UL << 0)                              /**< GPIO LOCK status                            */
#define _GPIO_GPIOLOCKSTATUS_LOCK_SHIFT                 0                                         /**< Shift value for GPIO_LOCK                   */
#define _GPIO_GPIOLOCKSTATUS_LOCK_MASK                  0x1UL                                     /**< Bit mask for GPIO_LOCK                      */
#define _GPIO_GPIOLOCKSTATUS_LOCK_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_GPIOLOCKSTATUS        */
#define _GPIO_GPIOLOCKSTATUS_LOCK_UNLOCKED              0x00000000UL                              /**< Mode UNLOCKED for GPIO_GPIOLOCKSTATUS       */
#define _GPIO_GPIOLOCKSTATUS_LOCK_LOCKED                0x00000001UL                              /**< Mode LOCKED for GPIO_GPIOLOCKSTATUS         */
#define GPIO_GPIOLOCKSTATUS_LOCK_DEFAULT                (_GPIO_GPIOLOCKSTATUS_LOCK_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_GPIOLOCKSTATUS*/
#define GPIO_GPIOLOCKSTATUS_LOCK_UNLOCKED               (_GPIO_GPIOLOCKSTATUS_LOCK_UNLOCKED << 0) /**< Shifted mode UNLOCKED for GPIO_GPIOLOCKSTATUS*/
#define GPIO_GPIOLOCKSTATUS_LOCK_LOCKED                 (_GPIO_GPIOLOCKSTATUS_LOCK_LOCKED << 0)   /**< Shifted mode LOCKED for GPIO_GPIOLOCKSTATUS */

/* Bit fields for GPIO ABUSALLOC */
#define _GPIO_ABUSALLOC_RESETVALUE                      0x00000000UL                           /**< Default value for GPIO_ABUSALLOC            */
#define _GPIO_ABUSALLOC_MASK                            0x0F0F0F0FUL                           /**< Mask for GPIO_ABUSALLOC                     */
#define _GPIO_ABUSALLOC_AEVEN0_SHIFT                    0                                      /**< Shift value for GPIO_AEVEN0                 */
#define _GPIO_ABUSALLOC_AEVEN0_MASK                     0xFUL                                  /**< Bit mask for GPIO_AEVEN0                    */
#define _GPIO_ABUSALLOC_AEVEN0_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_ABUSALLOC             */
#define _GPIO_ABUSALLOC_AEVEN0_TRISTATE                 0x00000000UL                           /**< Mode TRISTATE for GPIO_ABUSALLOC            */
#define _GPIO_ABUSALLOC_AEVEN0_ADC0                     0x00000001UL                           /**< Mode ADC0 for GPIO_ABUSALLOC                */
#define _GPIO_ABUSALLOC_AEVEN0_DIAGA                    0x0000000EUL                           /**< Mode DIAGA for GPIO_ABUSALLOC               */
#define _GPIO_ABUSALLOC_AEVEN0_DEBUG                    0x0000000FUL                           /**< Mode DEBUG for GPIO_ABUSALLOC               */
#define GPIO_ABUSALLOC_AEVEN0_DEFAULT                   (_GPIO_ABUSALLOC_AEVEN0_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_ABUSALLOC     */
#define GPIO_ABUSALLOC_AEVEN0_TRISTATE                  (_GPIO_ABUSALLOC_AEVEN0_TRISTATE << 0) /**< Shifted mode TRISTATE for GPIO_ABUSALLOC    */
#define GPIO_ABUSALLOC_AEVEN0_ADC0                      (_GPIO_ABUSALLOC_AEVEN0_ADC0 << 0)     /**< Shifted mode ADC0 for GPIO_ABUSALLOC        */
#define GPIO_ABUSALLOC_AEVEN0_DIAGA                     (_GPIO_ABUSALLOC_AEVEN0_DIAGA << 0)    /**< Shifted mode DIAGA for GPIO_ABUSALLOC       */
#define GPIO_ABUSALLOC_AEVEN0_DEBUG                     (_GPIO_ABUSALLOC_AEVEN0_DEBUG << 0)    /**< Shifted mode DEBUG for GPIO_ABUSALLOC       */
#define _GPIO_ABUSALLOC_AEVEN1_SHIFT                    8                                      /**< Shift value for GPIO_AEVEN1                 */
#define _GPIO_ABUSALLOC_AEVEN1_MASK                     0xF00UL                                /**< Bit mask for GPIO_AEVEN1                    */
#define _GPIO_ABUSALLOC_AEVEN1_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_ABUSALLOC             */
#define _GPIO_ABUSALLOC_AEVEN1_TRISTATE                 0x00000000UL                           /**< Mode TRISTATE for GPIO_ABUSALLOC            */
#define _GPIO_ABUSALLOC_AEVEN1_ADC0                     0x00000001UL                           /**< Mode ADC0 for GPIO_ABUSALLOC                */
#define _GPIO_ABUSALLOC_AEVEN1_DEBUG                    0x0000000FUL                           /**< Mode DEBUG for GPIO_ABUSALLOC               */
#define GPIO_ABUSALLOC_AEVEN1_DEFAULT                   (_GPIO_ABUSALLOC_AEVEN1_DEFAULT << 8)  /**< Shifted mode DEFAULT for GPIO_ABUSALLOC     */
#define GPIO_ABUSALLOC_AEVEN1_TRISTATE                  (_GPIO_ABUSALLOC_AEVEN1_TRISTATE << 8) /**< Shifted mode TRISTATE for GPIO_ABUSALLOC    */
#define GPIO_ABUSALLOC_AEVEN1_ADC0                      (_GPIO_ABUSALLOC_AEVEN1_ADC0 << 8)     /**< Shifted mode ADC0 for GPIO_ABUSALLOC        */
#define GPIO_ABUSALLOC_AEVEN1_DEBUG                     (_GPIO_ABUSALLOC_AEVEN1_DEBUG << 8)    /**< Shifted mode DEBUG for GPIO_ABUSALLOC       */
#define _GPIO_ABUSALLOC_AODD0_SHIFT                     16                                     /**< Shift value for GPIO_AODD0                  */
#define _GPIO_ABUSALLOC_AODD0_MASK                      0xF0000UL                              /**< Bit mask for GPIO_AODD0                     */
#define _GPIO_ABUSALLOC_AODD0_DEFAULT                   0x00000000UL                           /**< Mode DEFAULT for GPIO_ABUSALLOC             */
#define _GPIO_ABUSALLOC_AODD0_TRISTATE                  0x00000000UL                           /**< Mode TRISTATE for GPIO_ABUSALLOC            */
#define _GPIO_ABUSALLOC_AODD0_ADC0                      0x00000001UL                           /**< Mode ADC0 for GPIO_ABUSALLOC                */
#define _GPIO_ABUSALLOC_AODD0_DIAGA                     0x0000000EUL                           /**< Mode DIAGA for GPIO_ABUSALLOC               */
#define _GPIO_ABUSALLOC_AODD0_DEBUG                     0x0000000FUL                           /**< Mode DEBUG for GPIO_ABUSALLOC               */
#define GPIO_ABUSALLOC_AODD0_DEFAULT                    (_GPIO_ABUSALLOC_AODD0_DEFAULT << 16)  /**< Shifted mode DEFAULT for GPIO_ABUSALLOC     */
#define GPIO_ABUSALLOC_AODD0_TRISTATE                   (_GPIO_ABUSALLOC_AODD0_TRISTATE << 16) /**< Shifted mode TRISTATE for GPIO_ABUSALLOC    */
#define GPIO_ABUSALLOC_AODD0_ADC0                       (_GPIO_ABUSALLOC_AODD0_ADC0 << 16)     /**< Shifted mode ADC0 for GPIO_ABUSALLOC        */
#define GPIO_ABUSALLOC_AODD0_DIAGA                      (_GPIO_ABUSALLOC_AODD0_DIAGA << 16)    /**< Shifted mode DIAGA for GPIO_ABUSALLOC       */
#define GPIO_ABUSALLOC_AODD0_DEBUG                      (_GPIO_ABUSALLOC_AODD0_DEBUG << 16)    /**< Shifted mode DEBUG for GPIO_ABUSALLOC       */
#define _GPIO_ABUSALLOC_AODD1_SHIFT                     24                                     /**< Shift value for GPIO_AODD1                  */
#define _GPIO_ABUSALLOC_AODD1_MASK                      0xF000000UL                            /**< Bit mask for GPIO_AODD1                     */
#define _GPIO_ABUSALLOC_AODD1_DEFAULT                   0x00000000UL                           /**< Mode DEFAULT for GPIO_ABUSALLOC             */
#define _GPIO_ABUSALLOC_AODD1_TRISTATE                  0x00000000UL                           /**< Mode TRISTATE for GPIO_ABUSALLOC            */
#define _GPIO_ABUSALLOC_AODD1_ADC0                      0x00000001UL                           /**< Mode ADC0 for GPIO_ABUSALLOC                */
#define _GPIO_ABUSALLOC_AODD1_DEBUG                     0x0000000FUL                           /**< Mode DEBUG for GPIO_ABUSALLOC               */
#define GPIO_ABUSALLOC_AODD1_DEFAULT                    (_GPIO_ABUSALLOC_AODD1_DEFAULT << 24)  /**< Shifted mode DEFAULT for GPIO_ABUSALLOC     */
#define GPIO_ABUSALLOC_AODD1_TRISTATE                   (_GPIO_ABUSALLOC_AODD1_TRISTATE << 24) /**< Shifted mode TRISTATE for GPIO_ABUSALLOC    */
#define GPIO_ABUSALLOC_AODD1_ADC0                       (_GPIO_ABUSALLOC_AODD1_ADC0 << 24)     /**< Shifted mode ADC0 for GPIO_ABUSALLOC        */
#define GPIO_ABUSALLOC_AODD1_DEBUG                      (_GPIO_ABUSALLOC_AODD1_DEBUG << 24)    /**< Shifted mode DEBUG for GPIO_ABUSALLOC       */

/* Bit fields for GPIO BBUSALLOC */
#define _GPIO_BBUSALLOC_RESETVALUE                      0x00000000UL                           /**< Default value for GPIO_BBUSALLOC            */
#define _GPIO_BBUSALLOC_MASK                            0x0F0F0F0FUL                           /**< Mask for GPIO_BBUSALLOC                     */
#define _GPIO_BBUSALLOC_BEVEN0_SHIFT                    0                                      /**< Shift value for GPIO_BEVEN0                 */
#define _GPIO_BBUSALLOC_BEVEN0_MASK                     0xFUL                                  /**< Bit mask for GPIO_BEVEN0                    */
#define _GPIO_BBUSALLOC_BEVEN0_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_BBUSALLOC             */
#define _GPIO_BBUSALLOC_BEVEN0_TRISTATE                 0x00000000UL                           /**< Mode TRISTATE for GPIO_BBUSALLOC            */
#define _GPIO_BBUSALLOC_BEVEN0_ADC0                     0x00000001UL                           /**< Mode ADC0 for GPIO_BBUSALLOC                */
#define _GPIO_BBUSALLOC_BEVEN0_DEBUG                    0x0000000FUL                           /**< Mode DEBUG for GPIO_BBUSALLOC               */
#define GPIO_BBUSALLOC_BEVEN0_DEFAULT                   (_GPIO_BBUSALLOC_BEVEN0_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_BBUSALLOC     */
#define GPIO_BBUSALLOC_BEVEN0_TRISTATE                  (_GPIO_BBUSALLOC_BEVEN0_TRISTATE << 0) /**< Shifted mode TRISTATE for GPIO_BBUSALLOC    */
#define GPIO_BBUSALLOC_BEVEN0_ADC0                      (_GPIO_BBUSALLOC_BEVEN0_ADC0 << 0)     /**< Shifted mode ADC0 for GPIO_BBUSALLOC        */
#define GPIO_BBUSALLOC_BEVEN0_DEBUG                     (_GPIO_BBUSALLOC_BEVEN0_DEBUG << 0)    /**< Shifted mode DEBUG for GPIO_BBUSALLOC       */
#define _GPIO_BBUSALLOC_BEVEN1_SHIFT                    8                                      /**< Shift value for GPIO_BEVEN1                 */
#define _GPIO_BBUSALLOC_BEVEN1_MASK                     0xF00UL                                /**< Bit mask for GPIO_BEVEN1                    */
#define _GPIO_BBUSALLOC_BEVEN1_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_BBUSALLOC             */
#define _GPIO_BBUSALLOC_BEVEN1_TRISTATE                 0x00000000UL                           /**< Mode TRISTATE for GPIO_BBUSALLOC            */
#define _GPIO_BBUSALLOC_BEVEN1_ADC0                     0x00000001UL                           /**< Mode ADC0 for GPIO_BBUSALLOC                */
#define _GPIO_BBUSALLOC_BEVEN1_DEBUG                    0x0000000FUL                           /**< Mode DEBUG for GPIO_BBUSALLOC               */
#define GPIO_BBUSALLOC_BEVEN1_DEFAULT                   (_GPIO_BBUSALLOC_BEVEN1_DEFAULT << 8)  /**< Shifted mode DEFAULT for GPIO_BBUSALLOC     */
#define GPIO_BBUSALLOC_BEVEN1_TRISTATE                  (_GPIO_BBUSALLOC_BEVEN1_TRISTATE << 8) /**< Shifted mode TRISTATE for GPIO_BBUSALLOC    */
#define GPIO_BBUSALLOC_BEVEN1_ADC0                      (_GPIO_BBUSALLOC_BEVEN1_ADC0 << 8)     /**< Shifted mode ADC0 for GPIO_BBUSALLOC        */
#define GPIO_BBUSALLOC_BEVEN1_DEBUG                     (_GPIO_BBUSALLOC_BEVEN1_DEBUG << 8)    /**< Shifted mode DEBUG for GPIO_BBUSALLOC       */
#define _GPIO_BBUSALLOC_BODD0_SHIFT                     16                                     /**< Shift value for GPIO_BODD0                  */
#define _GPIO_BBUSALLOC_BODD0_MASK                      0xF0000UL                              /**< Bit mask for GPIO_BODD0                     */
#define _GPIO_BBUSALLOC_BODD0_DEFAULT                   0x00000000UL                           /**< Mode DEFAULT for GPIO_BBUSALLOC             */
#define _GPIO_BBUSALLOC_BODD0_TRISTATE                  0x00000000UL                           /**< Mode TRISTATE for GPIO_BBUSALLOC            */
#define _GPIO_BBUSALLOC_BODD0_ADC0                      0x00000001UL                           /**< Mode ADC0 for GPIO_BBUSALLOC                */
#define _GPIO_BBUSALLOC_BODD0_DEBUG                     0x0000000FUL                           /**< Mode DEBUG for GPIO_BBUSALLOC               */
#define GPIO_BBUSALLOC_BODD0_DEFAULT                    (_GPIO_BBUSALLOC_BODD0_DEFAULT << 16)  /**< Shifted mode DEFAULT for GPIO_BBUSALLOC     */
#define GPIO_BBUSALLOC_BODD0_TRISTATE                   (_GPIO_BBUSALLOC_BODD0_TRISTATE << 16) /**< Shifted mode TRISTATE for GPIO_BBUSALLOC    */
#define GPIO_BBUSALLOC_BODD0_ADC0                       (_GPIO_BBUSALLOC_BODD0_ADC0 << 16)     /**< Shifted mode ADC0 for GPIO_BBUSALLOC        */
#define GPIO_BBUSALLOC_BODD0_DEBUG                      (_GPIO_BBUSALLOC_BODD0_DEBUG << 16)    /**< Shifted mode DEBUG for GPIO_BBUSALLOC       */
#define _GPIO_BBUSALLOC_BODD1_SHIFT                     24                                     /**< Shift value for GPIO_BODD1                  */
#define _GPIO_BBUSALLOC_BODD1_MASK                      0xF000000UL                            /**< Bit mask for GPIO_BODD1                     */
#define _GPIO_BBUSALLOC_BODD1_DEFAULT                   0x00000000UL                           /**< Mode DEFAULT for GPIO_BBUSALLOC             */
#define _GPIO_BBUSALLOC_BODD1_TRISTATE                  0x00000000UL                           /**< Mode TRISTATE for GPIO_BBUSALLOC            */
#define _GPIO_BBUSALLOC_BODD1_ADC0                      0x00000001UL                           /**< Mode ADC0 for GPIO_BBUSALLOC                */
#define _GPIO_BBUSALLOC_BODD1_DEBUG                     0x0000000FUL                           /**< Mode DEBUG for GPIO_BBUSALLOC               */
#define GPIO_BBUSALLOC_BODD1_DEFAULT                    (_GPIO_BBUSALLOC_BODD1_DEFAULT << 24)  /**< Shifted mode DEFAULT for GPIO_BBUSALLOC     */
#define GPIO_BBUSALLOC_BODD1_TRISTATE                   (_GPIO_BBUSALLOC_BODD1_TRISTATE << 24) /**< Shifted mode TRISTATE for GPIO_BBUSALLOC    */
#define GPIO_BBUSALLOC_BODD1_ADC0                       (_GPIO_BBUSALLOC_BODD1_ADC0 << 24)     /**< Shifted mode ADC0 for GPIO_BBUSALLOC        */
#define GPIO_BBUSALLOC_BODD1_DEBUG                      (_GPIO_BBUSALLOC_BODD1_DEBUG << 24)    /**< Shifted mode DEBUG for GPIO_BBUSALLOC       */

/* Bit fields for GPIO CDBUSALLOC */
#define _GPIO_CDBUSALLOC_RESETVALUE                     0x00000000UL                             /**< Default value for GPIO_CDBUSALLOC           */
#define _GPIO_CDBUSALLOC_MASK                           0x0F0F0F0FUL                             /**< Mask for GPIO_CDBUSALLOC                    */
#define _GPIO_CDBUSALLOC_CDEVEN0_SHIFT                  0                                        /**< Shift value for GPIO_CDEVEN0                */
#define _GPIO_CDBUSALLOC_CDEVEN0_MASK                   0xFUL                                    /**< Bit mask for GPIO_CDEVEN0                   */
#define _GPIO_CDBUSALLOC_CDEVEN0_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_CDBUSALLOC            */
#define _GPIO_CDBUSALLOC_CDEVEN0_TRISTATE               0x00000000UL                             /**< Mode TRISTATE for GPIO_CDBUSALLOC           */
#define _GPIO_CDBUSALLOC_CDEVEN0_ADC0                   0x00000001UL                             /**< Mode ADC0 for GPIO_CDBUSALLOC               */
#define _GPIO_CDBUSALLOC_CDEVEN0_PMON                   0x0000000CUL                             /**< Mode PMON for GPIO_CDBUSALLOC               */
#define _GPIO_CDBUSALLOC_CDEVEN0_EFUSE                  0x0000000DUL                             /**< Mode EFUSE for GPIO_CDBUSALLOC              */
#define _GPIO_CDBUSALLOC_CDEVEN0_DEBUG                  0x0000000FUL                             /**< Mode DEBUG for GPIO_CDBUSALLOC              */
#define GPIO_CDBUSALLOC_CDEVEN0_DEFAULT                 (_GPIO_CDBUSALLOC_CDEVEN0_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_CDBUSALLOC    */
#define GPIO_CDBUSALLOC_CDEVEN0_TRISTATE                (_GPIO_CDBUSALLOC_CDEVEN0_TRISTATE << 0) /**< Shifted mode TRISTATE for GPIO_CDBUSALLOC   */
#define GPIO_CDBUSALLOC_CDEVEN0_ADC0                    (_GPIO_CDBUSALLOC_CDEVEN0_ADC0 << 0)     /**< Shifted mode ADC0 for GPIO_CDBUSALLOC       */
#define GPIO_CDBUSALLOC_CDEVEN0_PMON                    (_GPIO_CDBUSALLOC_CDEVEN0_PMON << 0)     /**< Shifted mode PMON for GPIO_CDBUSALLOC       */
#define GPIO_CDBUSALLOC_CDEVEN0_EFUSE                   (_GPIO_CDBUSALLOC_CDEVEN0_EFUSE << 0)    /**< Shifted mode EFUSE for GPIO_CDBUSALLOC      */
#define GPIO_CDBUSALLOC_CDEVEN0_DEBUG                   (_GPIO_CDBUSALLOC_CDEVEN0_DEBUG << 0)    /**< Shifted mode DEBUG for GPIO_CDBUSALLOC      */
#define _GPIO_CDBUSALLOC_CDEVEN1_SHIFT                  8                                        /**< Shift value for GPIO_CDEVEN1                */
#define _GPIO_CDBUSALLOC_CDEVEN1_MASK                   0xF00UL                                  /**< Bit mask for GPIO_CDEVEN1                   */
#define _GPIO_CDBUSALLOC_CDEVEN1_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_CDBUSALLOC            */
#define _GPIO_CDBUSALLOC_CDEVEN1_TRISTATE               0x00000000UL                             /**< Mode TRISTATE for GPIO_CDBUSALLOC           */
#define _GPIO_CDBUSALLOC_CDEVEN1_ADC0                   0x00000001UL                             /**< Mode ADC0 for GPIO_CDBUSALLOC               */
#define _GPIO_CDBUSALLOC_CDEVEN1_DEBUG                  0x0000000FUL                             /**< Mode DEBUG for GPIO_CDBUSALLOC              */
#define GPIO_CDBUSALLOC_CDEVEN1_DEFAULT                 (_GPIO_CDBUSALLOC_CDEVEN1_DEFAULT << 8)  /**< Shifted mode DEFAULT for GPIO_CDBUSALLOC    */
#define GPIO_CDBUSALLOC_CDEVEN1_TRISTATE                (_GPIO_CDBUSALLOC_CDEVEN1_TRISTATE << 8) /**< Shifted mode TRISTATE for GPIO_CDBUSALLOC   */
#define GPIO_CDBUSALLOC_CDEVEN1_ADC0                    (_GPIO_CDBUSALLOC_CDEVEN1_ADC0 << 8)     /**< Shifted mode ADC0 for GPIO_CDBUSALLOC       */
#define GPIO_CDBUSALLOC_CDEVEN1_DEBUG                   (_GPIO_CDBUSALLOC_CDEVEN1_DEBUG << 8)    /**< Shifted mode DEBUG for GPIO_CDBUSALLOC      */
#define _GPIO_CDBUSALLOC_CDODD0_SHIFT                   16                                       /**< Shift value for GPIO_CDODD0                 */
#define _GPIO_CDBUSALLOC_CDODD0_MASK                    0xF0000UL                                /**< Bit mask for GPIO_CDODD0                    */
#define _GPIO_CDBUSALLOC_CDODD0_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for GPIO_CDBUSALLOC            */
#define _GPIO_CDBUSALLOC_CDODD0_TRISTATE                0x00000000UL                             /**< Mode TRISTATE for GPIO_CDBUSALLOC           */
#define _GPIO_CDBUSALLOC_CDODD0_ADC0                    0x00000001UL                             /**< Mode ADC0 for GPIO_CDBUSALLOC               */
#define _GPIO_CDBUSALLOC_CDODD0_PMON                    0x0000000CUL                             /**< Mode PMON for GPIO_CDBUSALLOC               */
#define _GPIO_CDBUSALLOC_CDODD0_DEBUG                   0x0000000FUL                             /**< Mode DEBUG for GPIO_CDBUSALLOC              */
#define GPIO_CDBUSALLOC_CDODD0_DEFAULT                  (_GPIO_CDBUSALLOC_CDODD0_DEFAULT << 16)  /**< Shifted mode DEFAULT for GPIO_CDBUSALLOC    */
#define GPIO_CDBUSALLOC_CDODD0_TRISTATE                 (_GPIO_CDBUSALLOC_CDODD0_TRISTATE << 16) /**< Shifted mode TRISTATE for GPIO_CDBUSALLOC   */
#define GPIO_CDBUSALLOC_CDODD0_ADC0                     (_GPIO_CDBUSALLOC_CDODD0_ADC0 << 16)     /**< Shifted mode ADC0 for GPIO_CDBUSALLOC       */
#define GPIO_CDBUSALLOC_CDODD0_PMON                     (_GPIO_CDBUSALLOC_CDODD0_PMON << 16)     /**< Shifted mode PMON for GPIO_CDBUSALLOC       */
#define GPIO_CDBUSALLOC_CDODD0_DEBUG                    (_GPIO_CDBUSALLOC_CDODD0_DEBUG << 16)    /**< Shifted mode DEBUG for GPIO_CDBUSALLOC      */
#define _GPIO_CDBUSALLOC_CDODD1_SHIFT                   24                                       /**< Shift value for GPIO_CDODD1                 */
#define _GPIO_CDBUSALLOC_CDODD1_MASK                    0xF000000UL                              /**< Bit mask for GPIO_CDODD1                    */
#define _GPIO_CDBUSALLOC_CDODD1_DEFAULT                 0x00000000UL                             /**< Mode DEFAULT for GPIO_CDBUSALLOC            */
#define _GPIO_CDBUSALLOC_CDODD1_TRISTATE                0x00000000UL                             /**< Mode TRISTATE for GPIO_CDBUSALLOC           */
#define _GPIO_CDBUSALLOC_CDODD1_ADC0                    0x00000001UL                             /**< Mode ADC0 for GPIO_CDBUSALLOC               */
#define _GPIO_CDBUSALLOC_CDODD1_DEBUG                   0x0000000FUL                             /**< Mode DEBUG for GPIO_CDBUSALLOC              */
#define GPIO_CDBUSALLOC_CDODD1_DEFAULT                  (_GPIO_CDBUSALLOC_CDODD1_DEFAULT << 24)  /**< Shifted mode DEFAULT for GPIO_CDBUSALLOC    */
#define GPIO_CDBUSALLOC_CDODD1_TRISTATE                 (_GPIO_CDBUSALLOC_CDODD1_TRISTATE << 24) /**< Shifted mode TRISTATE for GPIO_CDBUSALLOC   */
#define GPIO_CDBUSALLOC_CDODD1_ADC0                     (_GPIO_CDBUSALLOC_CDODD1_ADC0 << 24)     /**< Shifted mode ADC0 for GPIO_CDBUSALLOC       */
#define GPIO_CDBUSALLOC_CDODD1_DEBUG                    (_GPIO_CDBUSALLOC_CDODD1_DEBUG << 24)    /**< Shifted mode DEBUG for GPIO_CDBUSALLOC      */

/* Bit fields for GPIO AODD0SWITCH */
#define _GPIO_AODD0SWITCH_RESETVALUE                    0x00000000UL                                 /**< Default value for GPIO_AODD0SWITCH          */
#define _GPIO_AODD0SWITCH_MASK                          0x0000000FUL                                 /**< Mask for GPIO_AODD0SWITCH                   */
#define _GPIO_AODD0SWITCH_AODD0SWITCH_SHIFT             0                                            /**< Shift value for GPIO_AODD0SWITCH            */
#define _GPIO_AODD0SWITCH_AODD0SWITCH_MASK              0xFUL                                        /**< Bit mask for GPIO_AODD0SWITCH               */
#define _GPIO_AODD0SWITCH_AODD0SWITCH_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_AODD0SWITCH           */
#define GPIO_AODD0SWITCH_AODD0SWITCH_DEFAULT            (_GPIO_AODD0SWITCH_AODD0SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_AODD0SWITCH   */

/* Bit fields for GPIO AODD1SWITCH */
#define _GPIO_AODD1SWITCH_RESETVALUE                    0x00000000UL                                 /**< Default value for GPIO_AODD1SWITCH          */
#define _GPIO_AODD1SWITCH_MASK                          0x0000000FUL                                 /**< Mask for GPIO_AODD1SWITCH                   */
#define _GPIO_AODD1SWITCH_AODD1SWITCH_SHIFT             0                                            /**< Shift value for GPIO_AODD1SWITCH            */
#define _GPIO_AODD1SWITCH_AODD1SWITCH_MASK              0xFUL                                        /**< Bit mask for GPIO_AODD1SWITCH               */
#define _GPIO_AODD1SWITCH_AODD1SWITCH_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_AODD1SWITCH           */
#define GPIO_AODD1SWITCH_AODD1SWITCH_DEFAULT            (_GPIO_AODD1SWITCH_AODD1SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_AODD1SWITCH   */

/* Bit fields for GPIO AEVEN0SWITCH */
#define _GPIO_AEVEN0SWITCH_RESETVALUE                   0x00000000UL                                   /**< Default value for GPIO_AEVEN0SWITCH         */
#define _GPIO_AEVEN0SWITCH_MASK                         0x0000001FUL                                   /**< Mask for GPIO_AEVEN0SWITCH                  */
#define _GPIO_AEVEN0SWITCH_AEVEN0SWITCH_SHIFT           0                                              /**< Shift value for GPIO_AEVEN0SWITCH           */
#define _GPIO_AEVEN0SWITCH_AEVEN0SWITCH_MASK            0x1FUL                                         /**< Bit mask for GPIO_AEVEN0SWITCH              */
#define _GPIO_AEVEN0SWITCH_AEVEN0SWITCH_DEFAULT         0x00000000UL                                   /**< Mode DEFAULT for GPIO_AEVEN0SWITCH          */
#define GPIO_AEVEN0SWITCH_AEVEN0SWITCH_DEFAULT          (_GPIO_AEVEN0SWITCH_AEVEN0SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_AEVEN0SWITCH  */

/* Bit fields for GPIO AEVEN1SWITCH */
#define _GPIO_AEVEN1SWITCH_RESETVALUE                   0x00000000UL                                   /**< Default value for GPIO_AEVEN1SWITCH         */
#define _GPIO_AEVEN1SWITCH_MASK                         0x0000001FUL                                   /**< Mask for GPIO_AEVEN1SWITCH                  */
#define _GPIO_AEVEN1SWITCH_AEVEN1SWITCH_SHIFT           0                                              /**< Shift value for GPIO_AEVEN1SWITCH           */
#define _GPIO_AEVEN1SWITCH_AEVEN1SWITCH_MASK            0x1FUL                                         /**< Bit mask for GPIO_AEVEN1SWITCH              */
#define _GPIO_AEVEN1SWITCH_AEVEN1SWITCH_DEFAULT         0x00000000UL                                   /**< Mode DEFAULT for GPIO_AEVEN1SWITCH          */
#define GPIO_AEVEN1SWITCH_AEVEN1SWITCH_DEFAULT          (_GPIO_AEVEN1SWITCH_AEVEN1SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_AEVEN1SWITCH  */

/* Bit fields for GPIO BODD0SWITCH */
#define _GPIO_BODD0SWITCH_RESETVALUE                    0x00000000UL                                 /**< Default value for GPIO_BODD0SWITCH          */
#define _GPIO_BODD0SWITCH_MASK                          0x00000003UL                                 /**< Mask for GPIO_BODD0SWITCH                   */
#define _GPIO_BODD0SWITCH_BODD0SWITCH_SHIFT             0                                            /**< Shift value for GPIO_BODD0SWITCH            */
#define _GPIO_BODD0SWITCH_BODD0SWITCH_MASK              0x3UL                                        /**< Bit mask for GPIO_BODD0SWITCH               */
#define _GPIO_BODD0SWITCH_BODD0SWITCH_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_BODD0SWITCH           */
#define GPIO_BODD0SWITCH_BODD0SWITCH_DEFAULT            (_GPIO_BODD0SWITCH_BODD0SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_BODD0SWITCH   */

/* Bit fields for GPIO BODD1SWITCH */
#define _GPIO_BODD1SWITCH_RESETVALUE                    0x00000000UL                                 /**< Default value for GPIO_BODD1SWITCH          */
#define _GPIO_BODD1SWITCH_MASK                          0x00000003UL                                 /**< Mask for GPIO_BODD1SWITCH                   */
#define _GPIO_BODD1SWITCH_BODD1SWITCH_SHIFT             0                                            /**< Shift value for GPIO_BODD1SWITCH            */
#define _GPIO_BODD1SWITCH_BODD1SWITCH_MASK              0x3UL                                        /**< Bit mask for GPIO_BODD1SWITCH               */
#define _GPIO_BODD1SWITCH_BODD1SWITCH_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_BODD1SWITCH           */
#define GPIO_BODD1SWITCH_BODD1SWITCH_DEFAULT            (_GPIO_BODD1SWITCH_BODD1SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_BODD1SWITCH   */

/* Bit fields for GPIO BEVEN0SWITCH */
#define _GPIO_BEVEN0SWITCH_RESETVALUE                   0x00000000UL                                   /**< Default value for GPIO_BEVEN0SWITCH         */
#define _GPIO_BEVEN0SWITCH_MASK                         0x00000007UL                                   /**< Mask for GPIO_BEVEN0SWITCH                  */
#define _GPIO_BEVEN0SWITCH_BEVEN0SWITCH_SHIFT           0                                              /**< Shift value for GPIO_BEVEN0SWITCH           */
#define _GPIO_BEVEN0SWITCH_BEVEN0SWITCH_MASK            0x7UL                                          /**< Bit mask for GPIO_BEVEN0SWITCH              */
#define _GPIO_BEVEN0SWITCH_BEVEN0SWITCH_DEFAULT         0x00000000UL                                   /**< Mode DEFAULT for GPIO_BEVEN0SWITCH          */
#define GPIO_BEVEN0SWITCH_BEVEN0SWITCH_DEFAULT          (_GPIO_BEVEN0SWITCH_BEVEN0SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_BEVEN0SWITCH  */

/* Bit fields for GPIO BEVEN1SWITCH */
#define _GPIO_BEVEN1SWITCH_RESETVALUE                   0x00000000UL                                   /**< Default value for GPIO_BEVEN1SWITCH         */
#define _GPIO_BEVEN1SWITCH_MASK                         0x00000007UL                                   /**< Mask for GPIO_BEVEN1SWITCH                  */
#define _GPIO_BEVEN1SWITCH_BEVEN1SWITCH_SHIFT           0                                              /**< Shift value for GPIO_BEVEN1SWITCH           */
#define _GPIO_BEVEN1SWITCH_BEVEN1SWITCH_MASK            0x7UL                                          /**< Bit mask for GPIO_BEVEN1SWITCH              */
#define _GPIO_BEVEN1SWITCH_BEVEN1SWITCH_DEFAULT         0x00000000UL                                   /**< Mode DEFAULT for GPIO_BEVEN1SWITCH          */
#define GPIO_BEVEN1SWITCH_BEVEN1SWITCH_DEFAULT          (_GPIO_BEVEN1SWITCH_BEVEN1SWITCH_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_BEVEN1SWITCH  */

/* Bit fields for GPIO CDODD0SWITCH */
#define _GPIO_CDODD0SWITCH_RESETVALUE                   0x00000000UL                                   /**< Default value for GPIO_CDODD0SWITCH         */
#define _GPIO_CDODD0SWITCH_MASK                         0x0003000FUL                                   /**< Mask for GPIO_CDODD0SWITCH                  */
#define _GPIO_CDODD0SWITCH_CODD0SWITCH_SHIFT            0                                              /**< Shift value for GPIO_CODD0SWITCH            */
#define _GPIO_CDODD0SWITCH_CODD0SWITCH_MASK             0xFUL                                          /**< Bit mask for GPIO_CODD0SWITCH               */
#define _GPIO_CDODD0SWITCH_CODD0SWITCH_DEFAULT          0x00000000UL                                   /**< Mode DEFAULT for GPIO_CDODD0SWITCH          */
#define GPIO_CDODD0SWITCH_CODD0SWITCH_DEFAULT           (_GPIO_CDODD0SWITCH_CODD0SWITCH_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_CDODD0SWITCH  */
#define _GPIO_CDODD0SWITCH_DODD0SWITCH_SHIFT            16                                             /**< Shift value for GPIO_DODD0SWITCH            */
#define _GPIO_CDODD0SWITCH_DODD0SWITCH_MASK             0x30000UL                                      /**< Bit mask for GPIO_DODD0SWITCH               */
#define _GPIO_CDODD0SWITCH_DODD0SWITCH_DEFAULT          0x00000000UL                                   /**< Mode DEFAULT for GPIO_CDODD0SWITCH          */
#define GPIO_CDODD0SWITCH_DODD0SWITCH_DEFAULT           (_GPIO_CDODD0SWITCH_DODD0SWITCH_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CDODD0SWITCH  */

/* Bit fields for GPIO CDODD1SWITCH */
#define _GPIO_CDODD1SWITCH_RESETVALUE                   0x00000000UL                                   /**< Default value for GPIO_CDODD1SWITCH         */
#define _GPIO_CDODD1SWITCH_MASK                         0x0003000FUL                                   /**< Mask for GPIO_CDODD1SWITCH                  */
#define _GPIO_CDODD1SWITCH_CODD1SWITCH_SHIFT            0                                              /**< Shift value for GPIO_CODD1SWITCH            */
#define _GPIO_CDODD1SWITCH_CODD1SWITCH_MASK             0xFUL                                          /**< Bit mask for GPIO_CODD1SWITCH               */
#define _GPIO_CDODD1SWITCH_CODD1SWITCH_DEFAULT          0x00000000UL                                   /**< Mode DEFAULT for GPIO_CDODD1SWITCH          */
#define GPIO_CDODD1SWITCH_CODD1SWITCH_DEFAULT           (_GPIO_CDODD1SWITCH_CODD1SWITCH_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_CDODD1SWITCH  */
#define _GPIO_CDODD1SWITCH_DODD1SWITCH_SHIFT            16                                             /**< Shift value for GPIO_DODD1SWITCH            */
#define _GPIO_CDODD1SWITCH_DODD1SWITCH_MASK             0x30000UL                                      /**< Bit mask for GPIO_DODD1SWITCH               */
#define _GPIO_CDODD1SWITCH_DODD1SWITCH_DEFAULT          0x00000000UL                                   /**< Mode DEFAULT for GPIO_CDODD1SWITCH          */
#define GPIO_CDODD1SWITCH_DODD1SWITCH_DEFAULT           (_GPIO_CDODD1SWITCH_DODD1SWITCH_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CDODD1SWITCH  */

/* Bit fields for GPIO CDEVEN0SWITCH */
#define _GPIO_CDEVEN0SWITCH_RESETVALUE                  0x00000000UL                                     /**< Default value for GPIO_CDEVEN0SWITCH        */
#define _GPIO_CDEVEN0SWITCH_MASK                        0x0003000FUL                                     /**< Mask for GPIO_CDEVEN0SWITCH                 */
#define _GPIO_CDEVEN0SWITCH_CEVEN0SWITCH_SHIFT          0                                                /**< Shift value for GPIO_CEVEN0SWITCH           */
#define _GPIO_CDEVEN0SWITCH_CEVEN0SWITCH_MASK           0xFUL                                            /**< Bit mask for GPIO_CEVEN0SWITCH              */
#define _GPIO_CDEVEN0SWITCH_CEVEN0SWITCH_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for GPIO_CDEVEN0SWITCH         */
#define GPIO_CDEVEN0SWITCH_CEVEN0SWITCH_DEFAULT         (_GPIO_CDEVEN0SWITCH_CEVEN0SWITCH_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_CDEVEN0SWITCH */
#define _GPIO_CDEVEN0SWITCH_DEVEN0SWITCH_SHIFT          16                                               /**< Shift value for GPIO_DEVEN0SWITCH           */
#define _GPIO_CDEVEN0SWITCH_DEVEN0SWITCH_MASK           0x30000UL                                        /**< Bit mask for GPIO_DEVEN0SWITCH              */
#define _GPIO_CDEVEN0SWITCH_DEVEN0SWITCH_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for GPIO_CDEVEN0SWITCH         */
#define GPIO_CDEVEN0SWITCH_DEVEN0SWITCH_DEFAULT         (_GPIO_CDEVEN0SWITCH_DEVEN0SWITCH_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CDEVEN0SWITCH */

/* Bit fields for GPIO CDEVEN1SWITCH */
#define _GPIO_CDEVEN1SWITCH_RESETVALUE                  0x00000000UL                                     /**< Default value for GPIO_CDEVEN1SWITCH        */
#define _GPIO_CDEVEN1SWITCH_MASK                        0x0003000FUL                                     /**< Mask for GPIO_CDEVEN1SWITCH                 */
#define _GPIO_CDEVEN1SWITCH_CEVEN1SWITCH_SHIFT          0                                                /**< Shift value for GPIO_CEVEN1SWITCH           */
#define _GPIO_CDEVEN1SWITCH_CEVEN1SWITCH_MASK           0xFUL                                            /**< Bit mask for GPIO_CEVEN1SWITCH              */
#define _GPIO_CDEVEN1SWITCH_CEVEN1SWITCH_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for GPIO_CDEVEN1SWITCH         */
#define GPIO_CDEVEN1SWITCH_CEVEN1SWITCH_DEFAULT         (_GPIO_CDEVEN1SWITCH_CEVEN1SWITCH_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_CDEVEN1SWITCH */
#define _GPIO_CDEVEN1SWITCH_DEVEN1SWITCH_SHIFT          16                                               /**< Shift value for GPIO_DEVEN1SWITCH           */
#define _GPIO_CDEVEN1SWITCH_DEVEN1SWITCH_MASK           0x30000UL                                        /**< Bit mask for GPIO_DEVEN1SWITCH              */
#define _GPIO_CDEVEN1SWITCH_DEVEN1SWITCH_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for GPIO_CDEVEN1SWITCH         */
#define GPIO_CDEVEN1SWITCH_DEVEN1SWITCH_DEFAULT         (_GPIO_CDEVEN1SWITCH_DEVEN1SWITCH_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CDEVEN1SWITCH */

/* Bit fields for GPIO EXTIPSELL */
#define _GPIO_EXTIPSELL_RESETVALUE                      0x00000000UL                              /**< Default value for GPIO_EXTIPSELL            */
#define _GPIO_EXTIPSELL_MASK                            0x33333333UL                              /**< Mask for GPIO_EXTIPSELL                     */
#define _GPIO_EXTIPSELL_EXTIPSEL0_SHIFT                 0                                         /**< Shift value for GPIO_EXTIPSEL0              */
#define _GPIO_EXTIPSELL_EXTIPSEL0_MASK                  0x3UL                                     /**< Bit mask for GPIO_EXTIPSEL0                 */
#define _GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL0_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL0_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL0_PORTA << 0)    /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL0_PORTB << 0)    /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL0_PORTC << 0)    /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL0_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL0_PORTD << 0)    /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL1_SHIFT                 4                                         /**< Shift value for GPIO_EXTIPSEL1              */
#define _GPIO_EXTIPSELL_EXTIPSEL1_MASK                  0x30UL                                    /**< Bit mask for GPIO_EXTIPSEL1                 */
#define _GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL1_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL1_DEFAULT << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL1_PORTA << 4)    /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL1_PORTB << 4)    /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL1_PORTC << 4)    /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL1_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL1_PORTD << 4)    /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL2_SHIFT                 8                                         /**< Shift value for GPIO_EXTIPSEL2              */
#define _GPIO_EXTIPSELL_EXTIPSEL2_MASK                  0x300UL                                   /**< Bit mask for GPIO_EXTIPSEL2                 */
#define _GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL2_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL2_DEFAULT << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL2_PORTA << 8)    /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL2_PORTB << 8)    /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL2_PORTC << 8)    /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL2_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL2_PORTD << 8)    /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL3_SHIFT                 12                                        /**< Shift value for GPIO_EXTIPSEL3              */
#define _GPIO_EXTIPSELL_EXTIPSEL3_MASK                  0x3000UL                                  /**< Bit mask for GPIO_EXTIPSEL3                 */
#define _GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL3_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL3_DEFAULT << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL3_PORTA << 12)   /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL3_PORTB << 12)   /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL3_PORTC << 12)   /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL3_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL3_PORTD << 12)   /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL4_SHIFT                 16                                        /**< Shift value for GPIO_EXTIPSEL4              */
#define _GPIO_EXTIPSELL_EXTIPSEL4_MASK                  0x30000UL                                 /**< Bit mask for GPIO_EXTIPSEL4                 */
#define _GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL4_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL4_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL4_PORTA << 16)   /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL4_PORTB << 16)   /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL4_PORTC << 16)   /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL4_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL4_PORTD << 16)   /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL5_SHIFT                 20                                        /**< Shift value for GPIO_EXTIPSEL5              */
#define _GPIO_EXTIPSELL_EXTIPSEL5_MASK                  0x300000UL                                /**< Bit mask for GPIO_EXTIPSEL5                 */
#define _GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL5_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL5_DEFAULT << 20) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL5_PORTA << 20)   /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL5_PORTB << 20)   /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL5_PORTC << 20)   /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL5_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL5_PORTD << 20)   /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL6_SHIFT                 24                                        /**< Shift value for GPIO_EXTIPSEL6              */
#define _GPIO_EXTIPSELL_EXTIPSEL6_MASK                  0x3000000UL                               /**< Bit mask for GPIO_EXTIPSEL6                 */
#define _GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL6_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL6_DEFAULT << 24) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL6_PORTA << 24)   /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL6_PORTB << 24)   /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL6_PORTC << 24)   /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL6_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL6_PORTD << 24)   /**< Shifted mode PORTD for GPIO_EXTIPSELL       */
#define _GPIO_EXTIPSELL_EXTIPSEL7_SHIFT                 28                                        /**< Shift value for GPIO_EXTIPSEL7              */
#define _GPIO_EXTIPSELL_EXTIPSEL7_MASK                  0x30000000UL                              /**< Bit mask for GPIO_EXTIPSEL7                 */
#define _GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELL             */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELL               */
#define _GPIO_EXTIPSELL_EXTIPSEL7_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELL               */
#define GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT                (_GPIO_EXTIPSELL_EXTIPSEL7_DEFAULT << 28) /**< Shifted mode DEFAULT for GPIO_EXTIPSELL     */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTA                  (_GPIO_EXTIPSELL_EXTIPSEL7_PORTA << 28)   /**< Shifted mode PORTA for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTB                  (_GPIO_EXTIPSELL_EXTIPSEL7_PORTB << 28)   /**< Shifted mode PORTB for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTC                  (_GPIO_EXTIPSELL_EXTIPSEL7_PORTC << 28)   /**< Shifted mode PORTC for GPIO_EXTIPSELL       */
#define GPIO_EXTIPSELL_EXTIPSEL7_PORTD                  (_GPIO_EXTIPSELL_EXTIPSEL7_PORTD << 28)   /**< Shifted mode PORTD for GPIO_EXTIPSELL       */

/* Bit fields for GPIO EXTIPSELH */
#define _GPIO_EXTIPSELH_RESETVALUE                      0x00000000UL                              /**< Default value for GPIO_EXTIPSELH            */
#define _GPIO_EXTIPSELH_MASK                            0x00003333UL                              /**< Mask for GPIO_EXTIPSELH                     */
#define _GPIO_EXTIPSELH_EXTIPSEL0_SHIFT                 0                                         /**< Shift value for GPIO_EXTIPSEL0              */
#define _GPIO_EXTIPSELH_EXTIPSEL0_MASK                  0x3UL                                     /**< Bit mask for GPIO_EXTIPSEL0                 */
#define _GPIO_EXTIPSELH_EXTIPSEL0_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELH             */
#define _GPIO_EXTIPSELH_EXTIPSEL0_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL0_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL0_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL0_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELH               */
#define GPIO_EXTIPSELH_EXTIPSEL0_DEFAULT                (_GPIO_EXTIPSELH_EXTIPSEL0_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH     */
#define GPIO_EXTIPSELH_EXTIPSEL0_PORTA                  (_GPIO_EXTIPSELH_EXTIPSEL0_PORTA << 0)    /**< Shifted mode PORTA for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL0_PORTB                  (_GPIO_EXTIPSELH_EXTIPSEL0_PORTB << 0)    /**< Shifted mode PORTB for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL0_PORTC                  (_GPIO_EXTIPSELH_EXTIPSEL0_PORTC << 0)    /**< Shifted mode PORTC for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL0_PORTD                  (_GPIO_EXTIPSELH_EXTIPSEL0_PORTD << 0)    /**< Shifted mode PORTD for GPIO_EXTIPSELH       */
#define _GPIO_EXTIPSELH_EXTIPSEL1_SHIFT                 4                                         /**< Shift value for GPIO_EXTIPSEL1              */
#define _GPIO_EXTIPSELH_EXTIPSEL1_MASK                  0x30UL                                    /**< Bit mask for GPIO_EXTIPSEL1                 */
#define _GPIO_EXTIPSELH_EXTIPSEL1_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELH             */
#define _GPIO_EXTIPSELH_EXTIPSEL1_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL1_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL1_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL1_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELH               */
#define GPIO_EXTIPSELH_EXTIPSEL1_DEFAULT                (_GPIO_EXTIPSELH_EXTIPSEL1_DEFAULT << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH     */
#define GPIO_EXTIPSELH_EXTIPSEL1_PORTA                  (_GPIO_EXTIPSELH_EXTIPSEL1_PORTA << 4)    /**< Shifted mode PORTA for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL1_PORTB                  (_GPIO_EXTIPSELH_EXTIPSEL1_PORTB << 4)    /**< Shifted mode PORTB for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL1_PORTC                  (_GPIO_EXTIPSELH_EXTIPSEL1_PORTC << 4)    /**< Shifted mode PORTC for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL1_PORTD                  (_GPIO_EXTIPSELH_EXTIPSEL1_PORTD << 4)    /**< Shifted mode PORTD for GPIO_EXTIPSELH       */
#define _GPIO_EXTIPSELH_EXTIPSEL2_SHIFT                 8                                         /**< Shift value for GPIO_EXTIPSEL2              */
#define _GPIO_EXTIPSELH_EXTIPSEL2_MASK                  0x300UL                                   /**< Bit mask for GPIO_EXTIPSEL2                 */
#define _GPIO_EXTIPSELH_EXTIPSEL2_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELH             */
#define _GPIO_EXTIPSELH_EXTIPSEL2_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL2_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL2_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL2_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELH               */
#define GPIO_EXTIPSELH_EXTIPSEL2_DEFAULT                (_GPIO_EXTIPSELH_EXTIPSEL2_DEFAULT << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPSELH     */
#define GPIO_EXTIPSELH_EXTIPSEL2_PORTA                  (_GPIO_EXTIPSELH_EXTIPSEL2_PORTA << 8)    /**< Shifted mode PORTA for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL2_PORTB                  (_GPIO_EXTIPSELH_EXTIPSEL2_PORTB << 8)    /**< Shifted mode PORTB for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL2_PORTC                  (_GPIO_EXTIPSELH_EXTIPSEL2_PORTC << 8)    /**< Shifted mode PORTC for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL2_PORTD                  (_GPIO_EXTIPSELH_EXTIPSEL2_PORTD << 8)    /**< Shifted mode PORTD for GPIO_EXTIPSELH       */
#define _GPIO_EXTIPSELH_EXTIPSEL3_SHIFT                 12                                        /**< Shift value for GPIO_EXTIPSEL3              */
#define _GPIO_EXTIPSELH_EXTIPSEL3_MASK                  0x3000UL                                  /**< Bit mask for GPIO_EXTIPSEL3                 */
#define _GPIO_EXTIPSELH_EXTIPSEL3_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EXTIPSELH             */
#define _GPIO_EXTIPSELH_EXTIPSEL3_PORTA                 0x00000000UL                              /**< Mode PORTA for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL3_PORTB                 0x00000001UL                              /**< Mode PORTB for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL3_PORTC                 0x00000002UL                              /**< Mode PORTC for GPIO_EXTIPSELH               */
#define _GPIO_EXTIPSELH_EXTIPSEL3_PORTD                 0x00000003UL                              /**< Mode PORTD for GPIO_EXTIPSELH               */
#define GPIO_EXTIPSELH_EXTIPSEL3_DEFAULT                (_GPIO_EXTIPSELH_EXTIPSEL3_DEFAULT << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPSELH     */
#define GPIO_EXTIPSELH_EXTIPSEL3_PORTA                  (_GPIO_EXTIPSELH_EXTIPSEL3_PORTA << 12)   /**< Shifted mode PORTA for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL3_PORTB                  (_GPIO_EXTIPSELH_EXTIPSEL3_PORTB << 12)   /**< Shifted mode PORTB for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL3_PORTC                  (_GPIO_EXTIPSELH_EXTIPSEL3_PORTC << 12)   /**< Shifted mode PORTC for GPIO_EXTIPSELH       */
#define GPIO_EXTIPSELH_EXTIPSEL3_PORTD                  (_GPIO_EXTIPSELH_EXTIPSEL3_PORTD << 12)   /**< Shifted mode PORTD for GPIO_EXTIPSELH       */

/* Bit fields for GPIO EXTIPINSELL */
#define _GPIO_EXTIPINSELL_RESETVALUE                    0x00000000UL                                  /**< Default value for GPIO_EXTIPINSELL          */
#define _GPIO_EXTIPINSELL_MASK                          0x33333333UL                                  /**< Mask for GPIO_EXTIPINSELL                   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_SHIFT             0                                             /**< Shift value for GPIO_EXTIPINSEL0            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_MASK              0x3UL                                         /**< Bit mask for GPIO_EXTIPINSEL0               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL0_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL0_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET0 << 0)  /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET1 << 0)  /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET2 << 0)  /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL0_OFFSET3 << 0)  /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_SHIFT             4                                             /**< Shift value for GPIO_EXTIPINSEL1            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_MASK              0x30UL                                        /**< Bit mask for GPIO_EXTIPINSEL1               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL1_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL1_DEFAULT << 4)  /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET0 << 4)  /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET1 << 4)  /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET2 << 4)  /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL1_OFFSET3 << 4)  /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_SHIFT             8                                             /**< Shift value for GPIO_EXTIPINSEL2            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_MASK              0x300UL                                       /**< Bit mask for GPIO_EXTIPINSEL2               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL2_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL2_DEFAULT << 8)  /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET0 << 8)  /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET1 << 8)  /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET2 << 8)  /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL2_OFFSET3 << 8)  /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_SHIFT             12                                            /**< Shift value for GPIO_EXTIPINSEL3            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_MASK              0x3000UL                                      /**< Bit mask for GPIO_EXTIPINSEL3               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL3_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL3_DEFAULT << 12) /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET0 << 12) /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET1 << 12) /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET2 << 12) /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL3_OFFSET3 << 12) /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_SHIFT             16                                            /**< Shift value for GPIO_EXTIPINSEL4            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_MASK              0x30000UL                                     /**< Bit mask for GPIO_EXTIPINSEL4               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL4_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL4_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET0 << 16) /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET1 << 16) /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET2 << 16) /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL4_OFFSET3 << 16) /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_SHIFT             20                                            /**< Shift value for GPIO_EXTIPINSEL5            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_MASK              0x300000UL                                    /**< Bit mask for GPIO_EXTIPINSEL5               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL5_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL5_DEFAULT << 20) /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET0 << 20) /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET1 << 20) /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET2 << 20) /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL5_OFFSET3 << 20) /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_SHIFT             24                                            /**< Shift value for GPIO_EXTIPINSEL6            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_MASK              0x3000000UL                                   /**< Bit mask for GPIO_EXTIPINSEL6               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL6_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL6_DEFAULT << 24) /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET0 << 24) /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET1 << 24) /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET2 << 24) /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL6_OFFSET3 << 24) /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_SHIFT             28                                            /**< Shift value for GPIO_EXTIPINSEL7            */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_MASK              0x30000000UL                                  /**< Bit mask for GPIO_EXTIPINSEL7               */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET0           0x00000000UL                                  /**< Mode OFFSET0 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET1           0x00000001UL                                  /**< Mode OFFSET1 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET2           0x00000002UL                                  /**< Mode OFFSET2 for GPIO_EXTIPINSELL           */
#define _GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET3           0x00000003UL                                  /**< Mode OFFSET3 for GPIO_EXTIPINSELL           */
#define GPIO_EXTIPINSELL_EXTIPINSEL7_DEFAULT            (_GPIO_EXTIPINSELL_EXTIPINSEL7_DEFAULT << 28) /**< Shifted mode DEFAULT for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET0            (_GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET0 << 28) /**< Shifted mode OFFSET0 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET1            (_GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET1 << 28) /**< Shifted mode OFFSET1 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET2            (_GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET2 << 28) /**< Shifted mode OFFSET2 for GPIO_EXTIPINSELL   */
#define GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET3            (_GPIO_EXTIPINSELL_EXTIPINSEL7_OFFSET3 << 28) /**< Shifted mode OFFSET3 for GPIO_EXTIPINSELL   */

/* Bit fields for GPIO EXTIPINSELH */
#define _GPIO_EXTIPINSELH_RESETVALUE                    0x00000000UL                                   /**< Default value for GPIO_EXTIPINSELH          */
#define _GPIO_EXTIPINSELH_MASK                          0x00003333UL                                   /**< Mask for GPIO_EXTIPINSELH                   */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_SHIFT             0                                              /**< Shift value for GPIO_EXTIPINSEL0            */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_MASK              0x3UL                                          /**< Bit mask for GPIO_EXTIPINSEL0               */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_DEFAULT           0x00000000UL                                   /**< Mode DEFAULT for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET8           0x00000000UL                                   /**< Mode OFFSET8 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET9           0x00000001UL                                   /**< Mode OFFSET9 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET10          0x00000002UL                                   /**< Mode OFFSET10 for GPIO_EXTIPINSELH          */
#define _GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET11          0x00000003UL                                   /**< Mode OFFSET11 for GPIO_EXTIPINSELH          */
#define GPIO_EXTIPINSELH_EXTIPINSEL0_DEFAULT            (_GPIO_EXTIPINSELH_EXTIPINSEL0_DEFAULT << 0)   /**< Shifted mode DEFAULT for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET8            (_GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET8 << 0)   /**< Shifted mode OFFSET8 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET9            (_GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET9 << 0)   /**< Shifted mode OFFSET9 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET10           (_GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET10 << 0)  /**< Shifted mode OFFSET10 for GPIO_EXTIPINSELH  */
#define GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET11           (_GPIO_EXTIPINSELH_EXTIPINSEL0_OFFSET11 << 0)  /**< Shifted mode OFFSET11 for GPIO_EXTIPINSELH  */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_SHIFT             4                                              /**< Shift value for GPIO_EXTIPINSEL1            */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_MASK              0x30UL                                         /**< Bit mask for GPIO_EXTIPINSEL1               */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_DEFAULT           0x00000000UL                                   /**< Mode DEFAULT for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET8           0x00000000UL                                   /**< Mode OFFSET8 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET9           0x00000001UL                                   /**< Mode OFFSET9 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET10          0x00000002UL                                   /**< Mode OFFSET10 for GPIO_EXTIPINSELH          */
#define _GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET11          0x00000003UL                                   /**< Mode OFFSET11 for GPIO_EXTIPINSELH          */
#define GPIO_EXTIPINSELH_EXTIPINSEL1_DEFAULT            (_GPIO_EXTIPINSELH_EXTIPINSEL1_DEFAULT << 4)   /**< Shifted mode DEFAULT for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET8            (_GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET8 << 4)   /**< Shifted mode OFFSET8 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET9            (_GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET9 << 4)   /**< Shifted mode OFFSET9 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET10           (_GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET10 << 4)  /**< Shifted mode OFFSET10 for GPIO_EXTIPINSELH  */
#define GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET11           (_GPIO_EXTIPINSELH_EXTIPINSEL1_OFFSET11 << 4)  /**< Shifted mode OFFSET11 for GPIO_EXTIPINSELH  */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_SHIFT             8                                              /**< Shift value for GPIO_EXTIPINSEL2            */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_MASK              0x300UL                                        /**< Bit mask for GPIO_EXTIPINSEL2               */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_DEFAULT           0x00000000UL                                   /**< Mode DEFAULT for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET8           0x00000000UL                                   /**< Mode OFFSET8 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET9           0x00000001UL                                   /**< Mode OFFSET9 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET10          0x00000002UL                                   /**< Mode OFFSET10 for GPIO_EXTIPINSELH          */
#define _GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET11          0x00000003UL                                   /**< Mode OFFSET11 for GPIO_EXTIPINSELH          */
#define GPIO_EXTIPINSELH_EXTIPINSEL2_DEFAULT            (_GPIO_EXTIPINSELH_EXTIPINSEL2_DEFAULT << 8)   /**< Shifted mode DEFAULT for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET8            (_GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET8 << 8)   /**< Shifted mode OFFSET8 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET9            (_GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET9 << 8)   /**< Shifted mode OFFSET9 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET10           (_GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET10 << 8)  /**< Shifted mode OFFSET10 for GPIO_EXTIPINSELH  */
#define GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET11           (_GPIO_EXTIPINSELH_EXTIPINSEL2_OFFSET11 << 8)  /**< Shifted mode OFFSET11 for GPIO_EXTIPINSELH  */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_SHIFT             12                                             /**< Shift value for GPIO_EXTIPINSEL3            */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_MASK              0x3000UL                                       /**< Bit mask for GPIO_EXTIPINSEL3               */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_DEFAULT           0x00000000UL                                   /**< Mode DEFAULT for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET8           0x00000000UL                                   /**< Mode OFFSET8 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET9           0x00000001UL                                   /**< Mode OFFSET9 for GPIO_EXTIPINSELH           */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET10          0x00000002UL                                   /**< Mode OFFSET10 for GPIO_EXTIPINSELH          */
#define _GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET11          0x00000003UL                                   /**< Mode OFFSET11 for GPIO_EXTIPINSELH          */
#define GPIO_EXTIPINSELH_EXTIPINSEL3_DEFAULT            (_GPIO_EXTIPINSELH_EXTIPINSEL3_DEFAULT << 12)  /**< Shifted mode DEFAULT for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET8            (_GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET8 << 12)  /**< Shifted mode OFFSET8 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET9            (_GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET9 << 12)  /**< Shifted mode OFFSET9 for GPIO_EXTIPINSELH   */
#define GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET10           (_GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET10 << 12) /**< Shifted mode OFFSET10 for GPIO_EXTIPINSELH  */
#define GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET11           (_GPIO_EXTIPINSELH_EXTIPINSEL3_OFFSET11 << 12) /**< Shifted mode OFFSET11 for GPIO_EXTIPINSELH  */

/* Bit fields for GPIO EXTIRISE */
#define _GPIO_EXTIRISE_RESETVALUE                       0x00000000UL                           /**< Default value for GPIO_EXTIRISE             */
#define _GPIO_EXTIRISE_MASK                             0x00000FFFUL                           /**< Mask for GPIO_EXTIRISE                      */
#define _GPIO_EXTIRISE_EXTIRISE_SHIFT                   0                                      /**< Shift value for GPIO_EXTIRISE               */
#define _GPIO_EXTIRISE_EXTIRISE_MASK                    0xFFFUL                                /**< Bit mask for GPIO_EXTIRISE                  */
#define _GPIO_EXTIRISE_EXTIRISE_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for GPIO_EXTIRISE              */
#define GPIO_EXTIRISE_EXTIRISE_DEFAULT                  (_GPIO_EXTIRISE_EXTIRISE_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EXTIRISE      */

/* Bit fields for GPIO EXTIFALL */
#define _GPIO_EXTIFALL_RESETVALUE                       0x00000000UL                           /**< Default value for GPIO_EXTIFALL             */
#define _GPIO_EXTIFALL_MASK                             0x00000FFFUL                           /**< Mask for GPIO_EXTIFALL                      */
#define _GPIO_EXTIFALL_EXTIFALL_SHIFT                   0                                      /**< Shift value for GPIO_EXTIFALL               */
#define _GPIO_EXTIFALL_EXTIFALL_MASK                    0xFFFUL                                /**< Bit mask for GPIO_EXTIFALL                  */
#define _GPIO_EXTIFALL_EXTIFALL_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for GPIO_EXTIFALL              */
#define GPIO_EXTIFALL_EXTIFALL_DEFAULT                  (_GPIO_EXTIFALL_EXTIFALL_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EXTIFALL      */

/* Bit fields for GPIO IF */
#define _GPIO_IF_RESETVALUE                             0x00000000UL                       /**< Default value for GPIO_IF                   */
#define _GPIO_IF_MASK                                   0x0FFF0FFFUL                       /**< Mask for GPIO_IF                            */
#define GPIO_IF_EXTIF0                                  (0x1UL << 0)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF0_SHIFT                           0                                  /**< Shift value for GPIO_EXTIF0                 */
#define _GPIO_IF_EXTIF0_MASK                            0x1UL                              /**< Bit mask for GPIO_EXTIF0                    */
#define _GPIO_IF_EXTIF0_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF0_DEFAULT                          (_GPIO_IF_EXTIF0_DEFAULT << 0)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF1                                  (0x1UL << 1)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF1_SHIFT                           1                                  /**< Shift value for GPIO_EXTIF1                 */
#define _GPIO_IF_EXTIF1_MASK                            0x2UL                              /**< Bit mask for GPIO_EXTIF1                    */
#define _GPIO_IF_EXTIF1_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF1_DEFAULT                          (_GPIO_IF_EXTIF1_DEFAULT << 1)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF2                                  (0x1UL << 2)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF2_SHIFT                           2                                  /**< Shift value for GPIO_EXTIF2                 */
#define _GPIO_IF_EXTIF2_MASK                            0x4UL                              /**< Bit mask for GPIO_EXTIF2                    */
#define _GPIO_IF_EXTIF2_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF2_DEFAULT                          (_GPIO_IF_EXTIF2_DEFAULT << 2)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF3                                  (0x1UL << 3)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF3_SHIFT                           3                                  /**< Shift value for GPIO_EXTIF3                 */
#define _GPIO_IF_EXTIF3_MASK                            0x8UL                              /**< Bit mask for GPIO_EXTIF3                    */
#define _GPIO_IF_EXTIF3_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF3_DEFAULT                          (_GPIO_IF_EXTIF3_DEFAULT << 3)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF4                                  (0x1UL << 4)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF4_SHIFT                           4                                  /**< Shift value for GPIO_EXTIF4                 */
#define _GPIO_IF_EXTIF4_MASK                            0x10UL                             /**< Bit mask for GPIO_EXTIF4                    */
#define _GPIO_IF_EXTIF4_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF4_DEFAULT                          (_GPIO_IF_EXTIF4_DEFAULT << 4)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF5                                  (0x1UL << 5)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF5_SHIFT                           5                                  /**< Shift value for GPIO_EXTIF5                 */
#define _GPIO_IF_EXTIF5_MASK                            0x20UL                             /**< Bit mask for GPIO_EXTIF5                    */
#define _GPIO_IF_EXTIF5_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF5_DEFAULT                          (_GPIO_IF_EXTIF5_DEFAULT << 5)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF6                                  (0x1UL << 6)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF6_SHIFT                           6                                  /**< Shift value for GPIO_EXTIF6                 */
#define _GPIO_IF_EXTIF6_MASK                            0x40UL                             /**< Bit mask for GPIO_EXTIF6                    */
#define _GPIO_IF_EXTIF6_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF6_DEFAULT                          (_GPIO_IF_EXTIF6_DEFAULT << 6)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF7                                  (0x1UL << 7)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF7_SHIFT                           7                                  /**< Shift value for GPIO_EXTIF7                 */
#define _GPIO_IF_EXTIF7_MASK                            0x80UL                             /**< Bit mask for GPIO_EXTIF7                    */
#define _GPIO_IF_EXTIF7_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF7_DEFAULT                          (_GPIO_IF_EXTIF7_DEFAULT << 7)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF8                                  (0x1UL << 8)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF8_SHIFT                           8                                  /**< Shift value for GPIO_EXTIF8                 */
#define _GPIO_IF_EXTIF8_MASK                            0x100UL                            /**< Bit mask for GPIO_EXTIF8                    */
#define _GPIO_IF_EXTIF8_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF8_DEFAULT                          (_GPIO_IF_EXTIF8_DEFAULT << 8)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF9                                  (0x1UL << 9)                       /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF9_SHIFT                           9                                  /**< Shift value for GPIO_EXTIF9                 */
#define _GPIO_IF_EXTIF9_MASK                            0x200UL                            /**< Bit mask for GPIO_EXTIF9                    */
#define _GPIO_IF_EXTIF9_DEFAULT                         0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF9_DEFAULT                          (_GPIO_IF_EXTIF9_DEFAULT << 9)     /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF10                                 (0x1UL << 10)                      /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF10_SHIFT                          10                                 /**< Shift value for GPIO_EXTIF10                */
#define _GPIO_IF_EXTIF10_MASK                           0x400UL                            /**< Bit mask for GPIO_EXTIF10                   */
#define _GPIO_IF_EXTIF10_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF10_DEFAULT                         (_GPIO_IF_EXTIF10_DEFAULT << 10)   /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EXTIF11                                 (0x1UL << 11)                      /**< External Pin Flag                           */
#define _GPIO_IF_EXTIF11_SHIFT                          11                                 /**< Shift value for GPIO_EXTIF11                */
#define _GPIO_IF_EXTIF11_MASK                           0x800UL                            /**< Bit mask for GPIO_EXTIF11                   */
#define _GPIO_IF_EXTIF11_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EXTIF11_DEFAULT                         (_GPIO_IF_EXTIF11_DEFAULT << 11)   /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF0                                (0x1UL << 16)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF0_SHIFT                         16                                 /**< Shift value for GPIO_EM4WUIF0               */
#define _GPIO_IF_EM4WUIF0_MASK                          0x10000UL                          /**< Bit mask for GPIO_EM4WUIF0                  */
#define _GPIO_IF_EM4WUIF0_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF0_DEFAULT                        (_GPIO_IF_EM4WUIF0_DEFAULT << 16)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF1                                (0x1UL << 17)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF1_SHIFT                         17                                 /**< Shift value for GPIO_EM4WUIF1               */
#define _GPIO_IF_EM4WUIF1_MASK                          0x20000UL                          /**< Bit mask for GPIO_EM4WUIF1                  */
#define _GPIO_IF_EM4WUIF1_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF1_DEFAULT                        (_GPIO_IF_EM4WUIF1_DEFAULT << 17)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF2                                (0x1UL << 18)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF2_SHIFT                         18                                 /**< Shift value for GPIO_EM4WUIF2               */
#define _GPIO_IF_EM4WUIF2_MASK                          0x40000UL                          /**< Bit mask for GPIO_EM4WUIF2                  */
#define _GPIO_IF_EM4WUIF2_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF2_DEFAULT                        (_GPIO_IF_EM4WUIF2_DEFAULT << 18)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF3                                (0x1UL << 19)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF3_SHIFT                         19                                 /**< Shift value for GPIO_EM4WUIF3               */
#define _GPIO_IF_EM4WUIF3_MASK                          0x80000UL                          /**< Bit mask for GPIO_EM4WUIF3                  */
#define _GPIO_IF_EM4WUIF3_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF3_DEFAULT                        (_GPIO_IF_EM4WUIF3_DEFAULT << 19)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF4                                (0x1UL << 20)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF4_SHIFT                         20                                 /**< Shift value for GPIO_EM4WUIF4               */
#define _GPIO_IF_EM4WUIF4_MASK                          0x100000UL                         /**< Bit mask for GPIO_EM4WUIF4                  */
#define _GPIO_IF_EM4WUIF4_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF4_DEFAULT                        (_GPIO_IF_EM4WUIF4_DEFAULT << 20)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF5                                (0x1UL << 21)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF5_SHIFT                         21                                 /**< Shift value for GPIO_EM4WUIF5               */
#define _GPIO_IF_EM4WUIF5_MASK                          0x200000UL                         /**< Bit mask for GPIO_EM4WUIF5                  */
#define _GPIO_IF_EM4WUIF5_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF5_DEFAULT                        (_GPIO_IF_EM4WUIF5_DEFAULT << 21)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF6                                (0x1UL << 22)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF6_SHIFT                         22                                 /**< Shift value for GPIO_EM4WUIF6               */
#define _GPIO_IF_EM4WUIF6_MASK                          0x400000UL                         /**< Bit mask for GPIO_EM4WUIF6                  */
#define _GPIO_IF_EM4WUIF6_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF6_DEFAULT                        (_GPIO_IF_EM4WUIF6_DEFAULT << 22)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF7                                (0x1UL << 23)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF7_SHIFT                         23                                 /**< Shift value for GPIO_EM4WUIF7               */
#define _GPIO_IF_EM4WUIF7_MASK                          0x800000UL                         /**< Bit mask for GPIO_EM4WUIF7                  */
#define _GPIO_IF_EM4WUIF7_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF7_DEFAULT                        (_GPIO_IF_EM4WUIF7_DEFAULT << 23)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF8                                (0x1UL << 24)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF8_SHIFT                         24                                 /**< Shift value for GPIO_EM4WUIF8               */
#define _GPIO_IF_EM4WUIF8_MASK                          0x1000000UL                        /**< Bit mask for GPIO_EM4WUIF8                  */
#define _GPIO_IF_EM4WUIF8_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF8_DEFAULT                        (_GPIO_IF_EM4WUIF8_DEFAULT << 24)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF9                                (0x1UL << 25)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF9_SHIFT                         25                                 /**< Shift value for GPIO_EM4WUIF9               */
#define _GPIO_IF_EM4WUIF9_MASK                          0x2000000UL                        /**< Bit mask for GPIO_EM4WUIF9                  */
#define _GPIO_IF_EM4WUIF9_DEFAULT                       0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF9_DEFAULT                        (_GPIO_IF_EM4WUIF9_DEFAULT << 25)  /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF10                               (0x1UL << 26)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF10_SHIFT                        26                                 /**< Shift value for GPIO_EM4WUIF10              */
#define _GPIO_IF_EM4WUIF10_MASK                         0x4000000UL                        /**< Bit mask for GPIO_EM4WUIF10                 */
#define _GPIO_IF_EM4WUIF10_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF10_DEFAULT                       (_GPIO_IF_EM4WUIF10_DEFAULT << 26) /**< Shifted mode DEFAULT for GPIO_IF            */
#define GPIO_IF_EM4WUIF11                               (0x1UL << 27)                      /**< EM4 wake up                                 */
#define _GPIO_IF_EM4WUIF11_SHIFT                        27                                 /**< Shift value for GPIO_EM4WUIF11              */
#define _GPIO_IF_EM4WUIF11_MASK                         0x8000000UL                        /**< Bit mask for GPIO_EM4WUIF11                 */
#define _GPIO_IF_EM4WUIF11_DEFAULT                      0x00000000UL                       /**< Mode DEFAULT for GPIO_IF                    */
#define GPIO_IF_EM4WUIF11_DEFAULT                       (_GPIO_IF_EM4WUIF11_DEFAULT << 27) /**< Shifted mode DEFAULT for GPIO_IF            */

/* Bit fields for GPIO IEN */
#define _GPIO_IEN_RESETVALUE                            0x00000000UL                         /**< Default value for GPIO_IEN                  */
#define _GPIO_IEN_MASK                                  0x0FFF0FFFUL                         /**< Mask for GPIO_IEN                           */
#define GPIO_IEN_EXTIEN0                                (0x1UL << 0)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN0_SHIFT                         0                                    /**< Shift value for GPIO_EXTIEN0                */
#define _GPIO_IEN_EXTIEN0_MASK                          0x1UL                                /**< Bit mask for GPIO_EXTIEN0                   */
#define _GPIO_IEN_EXTIEN0_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN0_DEFAULT                        (_GPIO_IEN_EXTIEN0_DEFAULT << 0)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN1                                (0x1UL << 1)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN1_SHIFT                         1                                    /**< Shift value for GPIO_EXTIEN1                */
#define _GPIO_IEN_EXTIEN1_MASK                          0x2UL                                /**< Bit mask for GPIO_EXTIEN1                   */
#define _GPIO_IEN_EXTIEN1_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN1_DEFAULT                        (_GPIO_IEN_EXTIEN1_DEFAULT << 1)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN2                                (0x1UL << 2)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN2_SHIFT                         2                                    /**< Shift value for GPIO_EXTIEN2                */
#define _GPIO_IEN_EXTIEN2_MASK                          0x4UL                                /**< Bit mask for GPIO_EXTIEN2                   */
#define _GPIO_IEN_EXTIEN2_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN2_DEFAULT                        (_GPIO_IEN_EXTIEN2_DEFAULT << 2)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN3                                (0x1UL << 3)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN3_SHIFT                         3                                    /**< Shift value for GPIO_EXTIEN3                */
#define _GPIO_IEN_EXTIEN3_MASK                          0x8UL                                /**< Bit mask for GPIO_EXTIEN3                   */
#define _GPIO_IEN_EXTIEN3_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN3_DEFAULT                        (_GPIO_IEN_EXTIEN3_DEFAULT << 3)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN4                                (0x1UL << 4)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN4_SHIFT                         4                                    /**< Shift value for GPIO_EXTIEN4                */
#define _GPIO_IEN_EXTIEN4_MASK                          0x10UL                               /**< Bit mask for GPIO_EXTIEN4                   */
#define _GPIO_IEN_EXTIEN4_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN4_DEFAULT                        (_GPIO_IEN_EXTIEN4_DEFAULT << 4)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN5                                (0x1UL << 5)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN5_SHIFT                         5                                    /**< Shift value for GPIO_EXTIEN5                */
#define _GPIO_IEN_EXTIEN5_MASK                          0x20UL                               /**< Bit mask for GPIO_EXTIEN5                   */
#define _GPIO_IEN_EXTIEN5_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN5_DEFAULT                        (_GPIO_IEN_EXTIEN5_DEFAULT << 5)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN6                                (0x1UL << 6)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN6_SHIFT                         6                                    /**< Shift value for GPIO_EXTIEN6                */
#define _GPIO_IEN_EXTIEN6_MASK                          0x40UL                               /**< Bit mask for GPIO_EXTIEN6                   */
#define _GPIO_IEN_EXTIEN6_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN6_DEFAULT                        (_GPIO_IEN_EXTIEN6_DEFAULT << 6)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN7                                (0x1UL << 7)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN7_SHIFT                         7                                    /**< Shift value for GPIO_EXTIEN7                */
#define _GPIO_IEN_EXTIEN7_MASK                          0x80UL                               /**< Bit mask for GPIO_EXTIEN7                   */
#define _GPIO_IEN_EXTIEN7_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN7_DEFAULT                        (_GPIO_IEN_EXTIEN7_DEFAULT << 7)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN8                                (0x1UL << 8)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN8_SHIFT                         8                                    /**< Shift value for GPIO_EXTIEN8                */
#define _GPIO_IEN_EXTIEN8_MASK                          0x100UL                              /**< Bit mask for GPIO_EXTIEN8                   */
#define _GPIO_IEN_EXTIEN8_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN8_DEFAULT                        (_GPIO_IEN_EXTIEN8_DEFAULT << 8)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN9                                (0x1UL << 9)                         /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN9_SHIFT                         9                                    /**< Shift value for GPIO_EXTIEN9                */
#define _GPIO_IEN_EXTIEN9_MASK                          0x200UL                              /**< Bit mask for GPIO_EXTIEN9                   */
#define _GPIO_IEN_EXTIEN9_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN9_DEFAULT                        (_GPIO_IEN_EXTIEN9_DEFAULT << 9)     /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN10                               (0x1UL << 10)                        /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN10_SHIFT                        10                                   /**< Shift value for GPIO_EXTIEN10               */
#define _GPIO_IEN_EXTIEN10_MASK                         0x400UL                              /**< Bit mask for GPIO_EXTIEN10                  */
#define _GPIO_IEN_EXTIEN10_DEFAULT                      0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN10_DEFAULT                       (_GPIO_IEN_EXTIEN10_DEFAULT << 10)   /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EXTIEN11                               (0x1UL << 11)                        /**< External Pin Enable                         */
#define _GPIO_IEN_EXTIEN11_SHIFT                        11                                   /**< Shift value for GPIO_EXTIEN11               */
#define _GPIO_IEN_EXTIEN11_MASK                         0x800UL                              /**< Bit mask for GPIO_EXTIEN11                  */
#define _GPIO_IEN_EXTIEN11_DEFAULT                      0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EXTIEN11_DEFAULT                       (_GPIO_IEN_EXTIEN11_DEFAULT << 11)   /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN0                              (0x1UL << 16)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN0_SHIFT                       16                                   /**< Shift value for GPIO_EM4WUIEN0              */
#define _GPIO_IEN_EM4WUIEN0_MASK                        0x10000UL                            /**< Bit mask for GPIO_EM4WUIEN0                 */
#define _GPIO_IEN_EM4WUIEN0_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN0_DEFAULT                      (_GPIO_IEN_EM4WUIEN0_DEFAULT << 16)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN1                              (0x1UL << 17)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN1_SHIFT                       17                                   /**< Shift value for GPIO_EM4WUIEN1              */
#define _GPIO_IEN_EM4WUIEN1_MASK                        0x20000UL                            /**< Bit mask for GPIO_EM4WUIEN1                 */
#define _GPIO_IEN_EM4WUIEN1_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN1_DEFAULT                      (_GPIO_IEN_EM4WUIEN1_DEFAULT << 17)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN2                              (0x1UL << 18)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN2_SHIFT                       18                                   /**< Shift value for GPIO_EM4WUIEN2              */
#define _GPIO_IEN_EM4WUIEN2_MASK                        0x40000UL                            /**< Bit mask for GPIO_EM4WUIEN2                 */
#define _GPIO_IEN_EM4WUIEN2_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN2_DEFAULT                      (_GPIO_IEN_EM4WUIEN2_DEFAULT << 18)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN3                              (0x1UL << 19)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN3_SHIFT                       19                                   /**< Shift value for GPIO_EM4WUIEN3              */
#define _GPIO_IEN_EM4WUIEN3_MASK                        0x80000UL                            /**< Bit mask for GPIO_EM4WUIEN3                 */
#define _GPIO_IEN_EM4WUIEN3_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN3_DEFAULT                      (_GPIO_IEN_EM4WUIEN3_DEFAULT << 19)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN4                              (0x1UL << 20)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN4_SHIFT                       20                                   /**< Shift value for GPIO_EM4WUIEN4              */
#define _GPIO_IEN_EM4WUIEN4_MASK                        0x100000UL                           /**< Bit mask for GPIO_EM4WUIEN4                 */
#define _GPIO_IEN_EM4WUIEN4_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN4_DEFAULT                      (_GPIO_IEN_EM4WUIEN4_DEFAULT << 20)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN5                              (0x1UL << 21)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN5_SHIFT                       21                                   /**< Shift value for GPIO_EM4WUIEN5              */
#define _GPIO_IEN_EM4WUIEN5_MASK                        0x200000UL                           /**< Bit mask for GPIO_EM4WUIEN5                 */
#define _GPIO_IEN_EM4WUIEN5_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN5_DEFAULT                      (_GPIO_IEN_EM4WUIEN5_DEFAULT << 21)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN6                              (0x1UL << 22)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN6_SHIFT                       22                                   /**< Shift value for GPIO_EM4WUIEN6              */
#define _GPIO_IEN_EM4WUIEN6_MASK                        0x400000UL                           /**< Bit mask for GPIO_EM4WUIEN6                 */
#define _GPIO_IEN_EM4WUIEN6_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN6_DEFAULT                      (_GPIO_IEN_EM4WUIEN6_DEFAULT << 22)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN7                              (0x1UL << 23)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN7_SHIFT                       23                                   /**< Shift value for GPIO_EM4WUIEN7              */
#define _GPIO_IEN_EM4WUIEN7_MASK                        0x800000UL                           /**< Bit mask for GPIO_EM4WUIEN7                 */
#define _GPIO_IEN_EM4WUIEN7_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN7_DEFAULT                      (_GPIO_IEN_EM4WUIEN7_DEFAULT << 23)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN8                              (0x1UL << 24)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN8_SHIFT                       24                                   /**< Shift value for GPIO_EM4WUIEN8              */
#define _GPIO_IEN_EM4WUIEN8_MASK                        0x1000000UL                          /**< Bit mask for GPIO_EM4WUIEN8                 */
#define _GPIO_IEN_EM4WUIEN8_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN8_DEFAULT                      (_GPIO_IEN_EM4WUIEN8_DEFAULT << 24)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN9                              (0x1UL << 25)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN9_SHIFT                       25                                   /**< Shift value for GPIO_EM4WUIEN9              */
#define _GPIO_IEN_EM4WUIEN9_MASK                        0x2000000UL                          /**< Bit mask for GPIO_EM4WUIEN9                 */
#define _GPIO_IEN_EM4WUIEN9_DEFAULT                     0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN9_DEFAULT                      (_GPIO_IEN_EM4WUIEN9_DEFAULT << 25)  /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN10                             (0x1UL << 26)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN10_SHIFT                      26                                   /**< Shift value for GPIO_EM4WUIEN10             */
#define _GPIO_IEN_EM4WUIEN10_MASK                       0x4000000UL                          /**< Bit mask for GPIO_EM4WUIEN10                */
#define _GPIO_IEN_EM4WUIEN10_DEFAULT                    0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN10_DEFAULT                     (_GPIO_IEN_EM4WUIEN10_DEFAULT << 26) /**< Shifted mode DEFAULT for GPIO_IEN           */
#define GPIO_IEN_EM4WUIEN11                             (0x1UL << 27)                        /**< EM4 Wake Up Interrupt En                    */
#define _GPIO_IEN_EM4WUIEN11_SHIFT                      27                                   /**< Shift value for GPIO_EM4WUIEN11             */
#define _GPIO_IEN_EM4WUIEN11_MASK                       0x8000000UL                          /**< Bit mask for GPIO_EM4WUIEN11                */
#define _GPIO_IEN_EM4WUIEN11_DEFAULT                    0x00000000UL                         /**< Mode DEFAULT for GPIO_IEN                   */
#define GPIO_IEN_EM4WUIEN11_DEFAULT                     (_GPIO_IEN_EM4WUIEN11_DEFAULT << 27) /**< Shifted mode DEFAULT for GPIO_IEN           */

/* Bit fields for GPIO EM4WUEN */
#define _GPIO_EM4WUEN_RESETVALUE                        0x00000000UL                          /**< Default value for GPIO_EM4WUEN              */
#define _GPIO_EM4WUEN_MASK                              0x0FFF0000UL                          /**< Mask for GPIO_EM4WUEN                       */
#define _GPIO_EM4WUEN_EM4WUEN_SHIFT                     16                                    /**< Shift value for GPIO_EM4WUEN                */
#define _GPIO_EM4WUEN_EM4WUEN_MASK                      0xFFF0000UL                           /**< Bit mask for GPIO_EM4WUEN                   */
#define _GPIO_EM4WUEN_EM4WUEN_DEFAULT                   0x00000000UL                          /**< Mode DEFAULT for GPIO_EM4WUEN               */
#define GPIO_EM4WUEN_EM4WUEN_DEFAULT                    (_GPIO_EM4WUEN_EM4WUEN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EM4WUEN       */

/* Bit fields for GPIO EM4WUPOL */
#define _GPIO_EM4WUPOL_RESETVALUE                       0x00000000UL                            /**< Default value for GPIO_EM4WUPOL             */
#define _GPIO_EM4WUPOL_MASK                             0x0FFF0000UL                            /**< Mask for GPIO_EM4WUPOL                      */
#define _GPIO_EM4WUPOL_EM4WUPOL_SHIFT                   16                                      /**< Shift value for GPIO_EM4WUPOL               */
#define _GPIO_EM4WUPOL_EM4WUPOL_MASK                    0xFFF0000UL                             /**< Bit mask for GPIO_EM4WUPOL                  */
#define _GPIO_EM4WUPOL_EM4WUPOL_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_EM4WUPOL              */
#define GPIO_EM4WUPOL_EM4WUPOL_DEFAULT                  (_GPIO_EM4WUPOL_EM4WUPOL_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EM4WUPOL      */

/* Bit fields for GPIO DBGROUTEPEN */
#define _GPIO_DBGROUTEPEN_RESETVALUE                    0x0000000FUL                                 /**< Default value for GPIO_DBGROUTEPEN          */
#define _GPIO_DBGROUTEPEN_MASK                          0x0000000FUL                                 /**< Mask for GPIO_DBGROUTEPEN                   */
#define GPIO_DBGROUTEPEN_SWCLKTCKPEN                    (0x1UL << 0)                                 /**< Route Pin Enable                            */
#define _GPIO_DBGROUTEPEN_SWCLKTCKPEN_SHIFT             0                                            /**< Shift value for GPIO_SWCLKTCKPEN            */
#define _GPIO_DBGROUTEPEN_SWCLKTCKPEN_MASK              0x1UL                                        /**< Bit mask for GPIO_SWCLKTCKPEN               */
#define _GPIO_DBGROUTEPEN_SWCLKTCKPEN_DEFAULT           0x00000001UL                                 /**< Mode DEFAULT for GPIO_DBGROUTEPEN           */
#define GPIO_DBGROUTEPEN_SWCLKTCKPEN_DEFAULT            (_GPIO_DBGROUTEPEN_SWCLKTCKPEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_DBGROUTEPEN   */
#define GPIO_DBGROUTEPEN_SWDIOTMSPEN                    (0x1UL << 1)                                 /**< Route Location 0                            */
#define _GPIO_DBGROUTEPEN_SWDIOTMSPEN_SHIFT             1                                            /**< Shift value for GPIO_SWDIOTMSPEN            */
#define _GPIO_DBGROUTEPEN_SWDIOTMSPEN_MASK              0x2UL                                        /**< Bit mask for GPIO_SWDIOTMSPEN               */
#define _GPIO_DBGROUTEPEN_SWDIOTMSPEN_DEFAULT           0x00000001UL                                 /**< Mode DEFAULT for GPIO_DBGROUTEPEN           */
#define GPIO_DBGROUTEPEN_SWDIOTMSPEN_DEFAULT            (_GPIO_DBGROUTEPEN_SWDIOTMSPEN_DEFAULT << 1) /**< Shifted mode DEFAULT for GPIO_DBGROUTEPEN   */
#define GPIO_DBGROUTEPEN_TDOPEN                         (0x1UL << 2)                                 /**< JTAG Test Debug Output Pin Enable           */
#define _GPIO_DBGROUTEPEN_TDOPEN_SHIFT                  2                                            /**< Shift value for GPIO_TDOPEN                 */
#define _GPIO_DBGROUTEPEN_TDOPEN_MASK                   0x4UL                                        /**< Bit mask for GPIO_TDOPEN                    */
#define _GPIO_DBGROUTEPEN_TDOPEN_DEFAULT                0x00000001UL                                 /**< Mode DEFAULT for GPIO_DBGROUTEPEN           */
#define GPIO_DBGROUTEPEN_TDOPEN_DEFAULT                 (_GPIO_DBGROUTEPEN_TDOPEN_DEFAULT << 2)      /**< Shifted mode DEFAULT for GPIO_DBGROUTEPEN   */
#define GPIO_DBGROUTEPEN_TDIPEN                         (0x1UL << 3)                                 /**< JTAG Test Debug Input Pin Enable            */
#define _GPIO_DBGROUTEPEN_TDIPEN_SHIFT                  3                                            /**< Shift value for GPIO_TDIPEN                 */
#define _GPIO_DBGROUTEPEN_TDIPEN_MASK                   0x8UL                                        /**< Bit mask for GPIO_TDIPEN                    */
#define _GPIO_DBGROUTEPEN_TDIPEN_DEFAULT                0x00000001UL                                 /**< Mode DEFAULT for GPIO_DBGROUTEPEN           */
#define GPIO_DBGROUTEPEN_TDIPEN_DEFAULT                 (_GPIO_DBGROUTEPEN_TDIPEN_DEFAULT << 3)      /**< Shifted mode DEFAULT for GPIO_DBGROUTEPEN   */

/* Bit fields for GPIO TRACEROUTEPEN */
#define _GPIO_TRACEROUTEPEN_RESETVALUE                  0x00000000UL                                     /**< Default value for GPIO_TRACEROUTEPEN        */
#define _GPIO_TRACEROUTEPEN_MASK                        0x00000007UL                                     /**< Mask for GPIO_TRACEROUTEPEN                 */
#define GPIO_TRACEROUTEPEN_SWVPEN                       (0x1UL << 0)                                     /**< Serial Wire Viewer Output Pin Enable        */
#define _GPIO_TRACEROUTEPEN_SWVPEN_SHIFT                0                                                /**< Shift value for GPIO_SWVPEN                 */
#define _GPIO_TRACEROUTEPEN_SWVPEN_MASK                 0x1UL                                            /**< Bit mask for GPIO_SWVPEN                    */
#define _GPIO_TRACEROUTEPEN_SWVPEN_DEFAULT              0x00000000UL                                     /**< Mode DEFAULT for GPIO_TRACEROUTEPEN         */
#define GPIO_TRACEROUTEPEN_SWVPEN_DEFAULT               (_GPIO_TRACEROUTEPEN_SWVPEN_DEFAULT << 0)        /**< Shifted mode DEFAULT for GPIO_TRACEROUTEPEN */
#define GPIO_TRACEROUTEPEN_TRACECLKPEN                  (0x1UL << 1)                                     /**< Trace Clk Pin Enable                        */
#define _GPIO_TRACEROUTEPEN_TRACECLKPEN_SHIFT           1                                                /**< Shift value for GPIO_TRACECLKPEN            */
#define _GPIO_TRACEROUTEPEN_TRACECLKPEN_MASK            0x2UL                                            /**< Bit mask for GPIO_TRACECLKPEN               */
#define _GPIO_TRACEROUTEPEN_TRACECLKPEN_DEFAULT         0x00000000UL                                     /**< Mode DEFAULT for GPIO_TRACEROUTEPEN         */
#define GPIO_TRACEROUTEPEN_TRACECLKPEN_DEFAULT          (_GPIO_TRACEROUTEPEN_TRACECLKPEN_DEFAULT << 1)   /**< Shifted mode DEFAULT for GPIO_TRACEROUTEPEN */
#define GPIO_TRACEROUTEPEN_TRACEDATA0PEN                (0x1UL << 2)                                     /**< Trace Data0 Pin Enable                      */
#define _GPIO_TRACEROUTEPEN_TRACEDATA0PEN_SHIFT         2                                                /**< Shift value for GPIO_TRACEDATA0PEN          */
#define _GPIO_TRACEROUTEPEN_TRACEDATA0PEN_MASK          0x4UL                                            /**< Bit mask for GPIO_TRACEDATA0PEN             */
#define _GPIO_TRACEROUTEPEN_TRACEDATA0PEN_DEFAULT       0x00000000UL                                     /**< Mode DEFAULT for GPIO_TRACEROUTEPEN         */
#define GPIO_TRACEROUTEPEN_TRACEDATA0PEN_DEFAULT        (_GPIO_TRACEROUTEPEN_TRACEDATA0PEN_DEFAULT << 2) /**< Shifted mode DEFAULT for GPIO_TRACEROUTEPEN */

/* Bit fields for GPIO_CMU ROUTEEN */
#define _GPIO_CMU_ROUTEEN_RESETVALUE                    0x00000000UL                                /**< Default value for GPIO_CMU_ROUTEEN          */
#define _GPIO_CMU_ROUTEEN_MASK                          0x0000000FUL                                /**< Mask for GPIO_CMU_ROUTEEN                   */
#define GPIO_CMU_ROUTEEN_CLKOUT0PEN                     (0x1UL << 0)                                /**< CLKOUT0 pin enable control bit              */
#define _GPIO_CMU_ROUTEEN_CLKOUT0PEN_SHIFT              0                                           /**< Shift value for GPIO_CLKOUT0PEN             */
#define _GPIO_CMU_ROUTEEN_CLKOUT0PEN_MASK               0x1UL                                       /**< Bit mask for GPIO_CLKOUT0PEN                */
#define _GPIO_CMU_ROUTEEN_CLKOUT0PEN_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_CMU_ROUTEEN           */
#define GPIO_CMU_ROUTEEN_CLKOUT0PEN_DEFAULT             (_GPIO_CMU_ROUTEEN_CLKOUT0PEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_CMU_ROUTEEN   */
#define GPIO_CMU_ROUTEEN_CLKOUT1PEN                     (0x1UL << 1)                                /**< CLKOUT1 pin enable control bit              */
#define _GPIO_CMU_ROUTEEN_CLKOUT1PEN_SHIFT              1                                           /**< Shift value for GPIO_CLKOUT1PEN             */
#define _GPIO_CMU_ROUTEEN_CLKOUT1PEN_MASK               0x2UL                                       /**< Bit mask for GPIO_CLKOUT1PEN                */
#define _GPIO_CMU_ROUTEEN_CLKOUT1PEN_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_CMU_ROUTEEN           */
#define GPIO_CMU_ROUTEEN_CLKOUT1PEN_DEFAULT             (_GPIO_CMU_ROUTEEN_CLKOUT1PEN_DEFAULT << 1) /**< Shifted mode DEFAULT for GPIO_CMU_ROUTEEN   */
#define GPIO_CMU_ROUTEEN_CLKOUT2PEN                     (0x1UL << 2)                                /**< CLKOUT2 pin enable control bit              */
#define _GPIO_CMU_ROUTEEN_CLKOUT2PEN_SHIFT              2                                           /**< Shift value for GPIO_CLKOUT2PEN             */
#define _GPIO_CMU_ROUTEEN_CLKOUT2PEN_MASK               0x4UL                                       /**< Bit mask for GPIO_CLKOUT2PEN                */
#define _GPIO_CMU_ROUTEEN_CLKOUT2PEN_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_CMU_ROUTEEN           */
#define GPIO_CMU_ROUTEEN_CLKOUT2PEN_DEFAULT             (_GPIO_CMU_ROUTEEN_CLKOUT2PEN_DEFAULT << 2) /**< Shifted mode DEFAULT for GPIO_CMU_ROUTEEN   */

/* Bit fields for GPIO_CMU CLKIN0ROUTE */
#define _GPIO_CMU_CLKIN0ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_CMU_CLKIN0ROUTE      */
#define _GPIO_CMU_CLKIN0ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_CMU_CLKIN0ROUTE               */
#define _GPIO_CMU_CLKIN0ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_CMU_CLKIN0ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_CMU_CLKIN0ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_CMU_CLKIN0ROUTE       */
#define GPIO_CMU_CLKIN0ROUTE_PORT_DEFAULT               (_GPIO_CMU_CLKIN0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_CMU_CLKIN0ROUTE*/
#define _GPIO_CMU_CLKIN0ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_CMU_CLKIN0ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_CMU_CLKIN0ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_CMU_CLKIN0ROUTE       */
#define GPIO_CMU_CLKIN0ROUTE_PIN_DEFAULT                (_GPIO_CMU_CLKIN0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CMU_CLKIN0ROUTE*/

/* Bit fields for GPIO_CMU CLKOUT0ROUTE */
#define _GPIO_CMU_CLKOUT0ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_CMU_CLKOUT0ROUTE     */
#define _GPIO_CMU_CLKOUT0ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_CMU_CLKOUT0ROUTE              */
#define _GPIO_CMU_CLKOUT0ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_CMU_CLKOUT0ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_CMU_CLKOUT0ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_CMU_CLKOUT0ROUTE      */
#define GPIO_CMU_CLKOUT0ROUTE_PORT_DEFAULT              (_GPIO_CMU_CLKOUT0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_CMU_CLKOUT0ROUTE*/
#define _GPIO_CMU_CLKOUT0ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_CMU_CLKOUT0ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_CMU_CLKOUT0ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_CMU_CLKOUT0ROUTE      */
#define GPIO_CMU_CLKOUT0ROUTE_PIN_DEFAULT               (_GPIO_CMU_CLKOUT0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CMU_CLKOUT0ROUTE*/

/* Bit fields for GPIO_CMU CLKOUT1ROUTE */
#define _GPIO_CMU_CLKOUT1ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_CMU_CLKOUT1ROUTE     */
#define _GPIO_CMU_CLKOUT1ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_CMU_CLKOUT1ROUTE              */
#define _GPIO_CMU_CLKOUT1ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_CMU_CLKOUT1ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_CMU_CLKOUT1ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_CMU_CLKOUT1ROUTE      */
#define GPIO_CMU_CLKOUT1ROUTE_PORT_DEFAULT              (_GPIO_CMU_CLKOUT1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_CMU_CLKOUT1ROUTE*/
#define _GPIO_CMU_CLKOUT1ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_CMU_CLKOUT1ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_CMU_CLKOUT1ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_CMU_CLKOUT1ROUTE      */
#define GPIO_CMU_CLKOUT1ROUTE_PIN_DEFAULT               (_GPIO_CMU_CLKOUT1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CMU_CLKOUT1ROUTE*/

/* Bit fields for GPIO_CMU CLKOUT2ROUTE */
#define _GPIO_CMU_CLKOUT2ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_CMU_CLKOUT2ROUTE     */
#define _GPIO_CMU_CLKOUT2ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_CMU_CLKOUT2ROUTE              */
#define _GPIO_CMU_CLKOUT2ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_CMU_CLKOUT2ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_CMU_CLKOUT2ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_CMU_CLKOUT2ROUTE      */
#define GPIO_CMU_CLKOUT2ROUTE_PORT_DEFAULT              (_GPIO_CMU_CLKOUT2ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_CMU_CLKOUT2ROUTE*/
#define _GPIO_CMU_CLKOUT2ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_CMU_CLKOUT2ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_CMU_CLKOUT2ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_CMU_CLKOUT2ROUTE      */
#define GPIO_CMU_CLKOUT2ROUTE_PIN_DEFAULT               (_GPIO_CMU_CLKOUT2ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_CMU_CLKOUT2ROUTE*/

/* Bit fields for GPIO_DCDC ROUTEEN */
#define _GPIO_DCDC_ROUTEEN_RESETVALUE                   0x00000000UL                                        /**< Default value for GPIO_DCDC_ROUTEEN         */
#define _GPIO_DCDC_ROUTEEN_MASK                         0x00000003UL                                        /**< Mask for GPIO_DCDC_ROUTEEN                  */
#define GPIO_DCDC_ROUTEEN_DCDCCOREHIDDENPEN             (0x1UL << 0)                                        /**< DCDCCOREHIDDEN pin enable control bit       */
#define _GPIO_DCDC_ROUTEEN_DCDCCOREHIDDENPEN_SHIFT      0                                                   /**< Shift value for GPIO_DCDCCOREHIDDENPEN      */
#define _GPIO_DCDC_ROUTEEN_DCDCCOREHIDDENPEN_MASK       0x1UL                                               /**< Bit mask for GPIO_DCDCCOREHIDDENPEN         */
#define _GPIO_DCDC_ROUTEEN_DCDCCOREHIDDENPEN_DEFAULT    0x00000000UL                                        /**< Mode DEFAULT for GPIO_DCDC_ROUTEEN          */
#define GPIO_DCDC_ROUTEEN_DCDCCOREHIDDENPEN_DEFAULT     (_GPIO_DCDC_ROUTEEN_DCDCCOREHIDDENPEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_DCDC_ROUTEEN  */

/* Bit fields for GPIO_DCDC DCDCCOREHIDDENROUTE */
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_RESETVALUE       0x00000000UL                                       /**< Default value for GPIO_DCDC_DCDCCOREHIDDENROUTE*/
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_MASK             0x000F0003UL                                       /**< Mask for GPIO_DCDC_DCDCCOREHIDDENROUTE      */
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_PORT_SHIFT       0                                                  /**< Shift value for GPIO_PORT                   */
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_PORT_MASK        0x3UL                                              /**< Bit mask for GPIO_PORT                      */
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_PORT_DEFAULT     0x00000000UL                                       /**< Mode DEFAULT for GPIO_DCDC_DCDCCOREHIDDENROUTE*/
#define GPIO_DCDC_DCDCCOREHIDDENROUTE_PORT_DEFAULT      (_GPIO_DCDC_DCDCCOREHIDDENROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_DCDC_DCDCCOREHIDDENROUTE*/
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_PIN_SHIFT        16                                                 /**< Shift value for GPIO_PIN                    */
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_PIN_MASK         0xF0000UL                                          /**< Bit mask for GPIO_PIN                       */
#define _GPIO_DCDC_DCDCCOREHIDDENROUTE_PIN_DEFAULT      0x00000000UL                                       /**< Mode DEFAULT for GPIO_DCDC_DCDCCOREHIDDENROUTE*/
#define GPIO_DCDC_DCDCCOREHIDDENROUTE_PIN_DEFAULT       (_GPIO_DCDC_DCDCCOREHIDDENROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_DCDC_DCDCCOREHIDDENROUTE*/

/* Bit fields for GPIO_FRC ROUTEEN */
#define _GPIO_FRC_ROUTEEN_RESETVALUE                    0x00000000UL                               /**< Default value for GPIO_FRC_ROUTEEN          */
#define _GPIO_FRC_ROUTEEN_MASK                          0x00000007UL                               /**< Mask for GPIO_FRC_ROUTEEN                   */
#define GPIO_FRC_ROUTEEN_DCLKPEN                        (0x1UL << 0)                               /**< DCLK pin enable control bit                 */
#define _GPIO_FRC_ROUTEEN_DCLKPEN_SHIFT                 0                                          /**< Shift value for GPIO_DCLKPEN                */
#define _GPIO_FRC_ROUTEEN_DCLKPEN_MASK                  0x1UL                                      /**< Bit mask for GPIO_DCLKPEN                   */
#define _GPIO_FRC_ROUTEEN_DCLKPEN_DEFAULT               0x00000000UL                               /**< Mode DEFAULT for GPIO_FRC_ROUTEEN           */
#define GPIO_FRC_ROUTEEN_DCLKPEN_DEFAULT                (_GPIO_FRC_ROUTEEN_DCLKPEN_DEFAULT << 0)   /**< Shifted mode DEFAULT for GPIO_FRC_ROUTEEN   */
#define GPIO_FRC_ROUTEEN_DFRAMEPEN                      (0x1UL << 1)                               /**< DFRAME pin enable control bit               */
#define _GPIO_FRC_ROUTEEN_DFRAMEPEN_SHIFT               1                                          /**< Shift value for GPIO_DFRAMEPEN              */
#define _GPIO_FRC_ROUTEEN_DFRAMEPEN_MASK                0x2UL                                      /**< Bit mask for GPIO_DFRAMEPEN                 */
#define _GPIO_FRC_ROUTEEN_DFRAMEPEN_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_FRC_ROUTEEN           */
#define GPIO_FRC_ROUTEEN_DFRAMEPEN_DEFAULT              (_GPIO_FRC_ROUTEEN_DFRAMEPEN_DEFAULT << 1) /**< Shifted mode DEFAULT for GPIO_FRC_ROUTEEN   */
#define GPIO_FRC_ROUTEEN_DOUTPEN                        (0x1UL << 2)                               /**< DOUT pin enable control bit                 */
#define _GPIO_FRC_ROUTEEN_DOUTPEN_SHIFT                 2                                          /**< Shift value for GPIO_DOUTPEN                */
#define _GPIO_FRC_ROUTEEN_DOUTPEN_MASK                  0x4UL                                      /**< Bit mask for GPIO_DOUTPEN                   */
#define _GPIO_FRC_ROUTEEN_DOUTPEN_DEFAULT               0x00000000UL                               /**< Mode DEFAULT for GPIO_FRC_ROUTEEN           */
#define GPIO_FRC_ROUTEEN_DOUTPEN_DEFAULT                (_GPIO_FRC_ROUTEEN_DOUTPEN_DEFAULT << 2)   /**< Shifted mode DEFAULT for GPIO_FRC_ROUTEEN   */

/* Bit fields for GPIO_FRC DCLKROUTE */
#define _GPIO_FRC_DCLKROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_FRC_DCLKROUTE        */
#define _GPIO_FRC_DCLKROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_FRC_DCLKROUTE                 */
#define _GPIO_FRC_DCLKROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_FRC_DCLKROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_FRC_DCLKROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_FRC_DCLKROUTE         */
#define GPIO_FRC_DCLKROUTE_PORT_DEFAULT                 (_GPIO_FRC_DCLKROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_FRC_DCLKROUTE */
#define _GPIO_FRC_DCLKROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_FRC_DCLKROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_FRC_DCLKROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_FRC_DCLKROUTE         */
#define GPIO_FRC_DCLKROUTE_PIN_DEFAULT                  (_GPIO_FRC_DCLKROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_FRC_DCLKROUTE */

/* Bit fields for GPIO_FRC DFRAMEROUTE */
#define _GPIO_FRC_DFRAMEROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_FRC_DFRAMEROUTE      */
#define _GPIO_FRC_DFRAMEROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_FRC_DFRAMEROUTE               */
#define _GPIO_FRC_DFRAMEROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_FRC_DFRAMEROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_FRC_DFRAMEROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_FRC_DFRAMEROUTE       */
#define GPIO_FRC_DFRAMEROUTE_PORT_DEFAULT               (_GPIO_FRC_DFRAMEROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_FRC_DFRAMEROUTE*/
#define _GPIO_FRC_DFRAMEROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_FRC_DFRAMEROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_FRC_DFRAMEROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_FRC_DFRAMEROUTE       */
#define GPIO_FRC_DFRAMEROUTE_PIN_DEFAULT                (_GPIO_FRC_DFRAMEROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_FRC_DFRAMEROUTE*/

/* Bit fields for GPIO_FRC DOUTROUTE */
#define _GPIO_FRC_DOUTROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_FRC_DOUTROUTE        */
#define _GPIO_FRC_DOUTROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_FRC_DOUTROUTE                 */
#define _GPIO_FRC_DOUTROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_FRC_DOUTROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_FRC_DOUTROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_FRC_DOUTROUTE         */
#define GPIO_FRC_DOUTROUTE_PORT_DEFAULT                 (_GPIO_FRC_DOUTROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_FRC_DOUTROUTE */
#define _GPIO_FRC_DOUTROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_FRC_DOUTROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_FRC_DOUTROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_FRC_DOUTROUTE         */
#define GPIO_FRC_DOUTROUTE_PIN_DEFAULT                  (_GPIO_FRC_DOUTROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_FRC_DOUTROUTE */

/* Bit fields for GPIO_I2C ROUTEEN */
#define _GPIO_I2C_ROUTEEN_RESETVALUE                    0x00000000UL                            /**< Default value for GPIO_I2C_ROUTEEN          */
#define _GPIO_I2C_ROUTEEN_MASK                          0x00000003UL                            /**< Mask for GPIO_I2C_ROUTEEN                   */
#define GPIO_I2C_ROUTEEN_SCLPEN                         (0x1UL << 0)                            /**< SCL pin enable control bit                  */
#define _GPIO_I2C_ROUTEEN_SCLPEN_SHIFT                  0                                       /**< Shift value for GPIO_SCLPEN                 */
#define _GPIO_I2C_ROUTEEN_SCLPEN_MASK                   0x1UL                                   /**< Bit mask for GPIO_SCLPEN                    */
#define _GPIO_I2C_ROUTEEN_SCLPEN_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_I2C_ROUTEEN           */
#define GPIO_I2C_ROUTEEN_SCLPEN_DEFAULT                 (_GPIO_I2C_ROUTEEN_SCLPEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_I2C_ROUTEEN   */
#define GPIO_I2C_ROUTEEN_SDAPEN                         (0x1UL << 1)                            /**< SDA pin enable control bit                  */
#define _GPIO_I2C_ROUTEEN_SDAPEN_SHIFT                  1                                       /**< Shift value for GPIO_SDAPEN                 */
#define _GPIO_I2C_ROUTEEN_SDAPEN_MASK                   0x2UL                                   /**< Bit mask for GPIO_SDAPEN                    */
#define _GPIO_I2C_ROUTEEN_SDAPEN_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_I2C_ROUTEEN           */
#define GPIO_I2C_ROUTEEN_SDAPEN_DEFAULT                 (_GPIO_I2C_ROUTEEN_SDAPEN_DEFAULT << 1) /**< Shifted mode DEFAULT for GPIO_I2C_ROUTEEN   */

/* Bit fields for GPIO_I2C SCLROUTE */
#define _GPIO_I2C_SCLROUTE_RESETVALUE                   0x00000000UL                           /**< Default value for GPIO_I2C_SCLROUTE         */
#define _GPIO_I2C_SCLROUTE_MASK                         0x000F0003UL                           /**< Mask for GPIO_I2C_SCLROUTE                  */
#define _GPIO_I2C_SCLROUTE_PORT_SHIFT                   0                                      /**< Shift value for GPIO_PORT                   */
#define _GPIO_I2C_SCLROUTE_PORT_MASK                    0x3UL                                  /**< Bit mask for GPIO_PORT                      */
#define _GPIO_I2C_SCLROUTE_PORT_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for GPIO_I2C_SCLROUTE          */
#define GPIO_I2C_SCLROUTE_PORT_DEFAULT                  (_GPIO_I2C_SCLROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_I2C_SCLROUTE  */
#define _GPIO_I2C_SCLROUTE_PIN_SHIFT                    16                                     /**< Shift value for GPIO_PIN                    */
#define _GPIO_I2C_SCLROUTE_PIN_MASK                     0xF0000UL                              /**< Bit mask for GPIO_PIN                       */
#define _GPIO_I2C_SCLROUTE_PIN_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_I2C_SCLROUTE          */
#define GPIO_I2C_SCLROUTE_PIN_DEFAULT                   (_GPIO_I2C_SCLROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_I2C_SCLROUTE  */

/* Bit fields for GPIO_I2C SDAROUTE */
#define _GPIO_I2C_SDAROUTE_RESETVALUE                   0x00000000UL                           /**< Default value for GPIO_I2C_SDAROUTE         */
#define _GPIO_I2C_SDAROUTE_MASK                         0x000F0003UL                           /**< Mask for GPIO_I2C_SDAROUTE                  */
#define _GPIO_I2C_SDAROUTE_PORT_SHIFT                   0                                      /**< Shift value for GPIO_PORT                   */
#define _GPIO_I2C_SDAROUTE_PORT_MASK                    0x3UL                                  /**< Bit mask for GPIO_PORT                      */
#define _GPIO_I2C_SDAROUTE_PORT_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for GPIO_I2C_SDAROUTE          */
#define GPIO_I2C_SDAROUTE_PORT_DEFAULT                  (_GPIO_I2C_SDAROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_I2C_SDAROUTE  */
#define _GPIO_I2C_SDAROUTE_PIN_SHIFT                    16                                     /**< Shift value for GPIO_PIN                    */
#define _GPIO_I2C_SDAROUTE_PIN_MASK                     0xF0000UL                              /**< Bit mask for GPIO_PIN                       */
#define _GPIO_I2C_SDAROUTE_PIN_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_I2C_SDAROUTE          */
#define GPIO_I2C_SDAROUTE_PIN_DEFAULT                   (_GPIO_I2C_SDAROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_I2C_SDAROUTE  */

/* Bit fields for GPIO_LETIMER ROUTEEN */
#define _GPIO_LETIMER_ROUTEEN_RESETVALUE                0x00000000UL                                 /**< Default value for GPIO_LETIMER_ROUTEEN      */
#define _GPIO_LETIMER_ROUTEEN_MASK                      0x00000003UL                                 /**< Mask for GPIO_LETIMER_ROUTEEN               */
#define GPIO_LETIMER_ROUTEEN_OUT0PEN                    (0x1UL << 0)                                 /**< OUT0 pin enable control bit                 */
#define _GPIO_LETIMER_ROUTEEN_OUT0PEN_SHIFT             0                                            /**< Shift value for GPIO_OUT0PEN                */
#define _GPIO_LETIMER_ROUTEEN_OUT0PEN_MASK              0x1UL                                        /**< Bit mask for GPIO_OUT0PEN                   */
#define _GPIO_LETIMER_ROUTEEN_OUT0PEN_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_LETIMER_ROUTEEN       */
#define GPIO_LETIMER_ROUTEEN_OUT0PEN_DEFAULT            (_GPIO_LETIMER_ROUTEEN_OUT0PEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_LETIMER_ROUTEEN*/
#define GPIO_LETIMER_ROUTEEN_OUT1PEN                    (0x1UL << 1)                                 /**< OUT1 pin enable control bit                 */
#define _GPIO_LETIMER_ROUTEEN_OUT1PEN_SHIFT             1                                            /**< Shift value for GPIO_OUT1PEN                */
#define _GPIO_LETIMER_ROUTEEN_OUT1PEN_MASK              0x2UL                                        /**< Bit mask for GPIO_OUT1PEN                   */
#define _GPIO_LETIMER_ROUTEEN_OUT1PEN_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_LETIMER_ROUTEEN       */
#define GPIO_LETIMER_ROUTEEN_OUT1PEN_DEFAULT            (_GPIO_LETIMER_ROUTEEN_OUT1PEN_DEFAULT << 1) /**< Shifted mode DEFAULT for GPIO_LETIMER_ROUTEEN*/

/* Bit fields for GPIO_LETIMER OUT0ROUTE */
#define _GPIO_LETIMER_OUT0ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_LETIMER_OUT0ROUTE    */
#define _GPIO_LETIMER_OUT0ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_LETIMER_OUT0ROUTE             */
#define _GPIO_LETIMER_OUT0ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_LETIMER_OUT0ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_LETIMER_OUT0ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_LETIMER_OUT0ROUTE     */
#define GPIO_LETIMER_OUT0ROUTE_PORT_DEFAULT             (_GPIO_LETIMER_OUT0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_LETIMER_OUT0ROUTE*/
#define _GPIO_LETIMER_OUT0ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_LETIMER_OUT0ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_LETIMER_OUT0ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_LETIMER_OUT0ROUTE     */
#define GPIO_LETIMER_OUT0ROUTE_PIN_DEFAULT              (_GPIO_LETIMER_OUT0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_LETIMER_OUT0ROUTE*/

/* Bit fields for GPIO_LETIMER OUT1ROUTE */
#define _GPIO_LETIMER_OUT1ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_LETIMER_OUT1ROUTE    */
#define _GPIO_LETIMER_OUT1ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_LETIMER_OUT1ROUTE             */
#define _GPIO_LETIMER_OUT1ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_LETIMER_OUT1ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_LETIMER_OUT1ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_LETIMER_OUT1ROUTE     */
#define GPIO_LETIMER_OUT1ROUTE_PORT_DEFAULT             (_GPIO_LETIMER_OUT1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_LETIMER_OUT1ROUTE*/
#define _GPIO_LETIMER_OUT1ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_LETIMER_OUT1ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_LETIMER_OUT1ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_LETIMER_OUT1ROUTE     */
#define GPIO_LETIMER_OUT1ROUTE_PIN_DEFAULT              (_GPIO_LETIMER_OUT1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_LETIMER_OUT1ROUTE*/

/* Bit fields for GPIO_EUART ROUTEEN */
#define _GPIO_EUART_ROUTEEN_RESETVALUE                  0x00000000UL                              /**< Default value for GPIO_EUART_ROUTEEN        */
#define _GPIO_EUART_ROUTEEN_MASK                        0x00000003UL                              /**< Mask for GPIO_EUART_ROUTEEN                 */
#define GPIO_EUART_ROUTEEN_RTSPEN                       (0x1UL << 0)                              /**< RTS pin enable control bit                  */
#define _GPIO_EUART_ROUTEEN_RTSPEN_SHIFT                0                                         /**< Shift value for GPIO_RTSPEN                 */
#define _GPIO_EUART_ROUTEEN_RTSPEN_MASK                 0x1UL                                     /**< Bit mask for GPIO_RTSPEN                    */
#define _GPIO_EUART_ROUTEEN_RTSPEN_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_EUART_ROUTEEN         */
#define GPIO_EUART_ROUTEEN_RTSPEN_DEFAULT               (_GPIO_EUART_ROUTEEN_RTSPEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EUART_ROUTEEN */
#define GPIO_EUART_ROUTEEN_TXPEN                        (0x1UL << 1)                              /**< TX pin enable control bit                   */
#define _GPIO_EUART_ROUTEEN_TXPEN_SHIFT                 1                                         /**< Shift value for GPIO_TXPEN                  */
#define _GPIO_EUART_ROUTEEN_TXPEN_MASK                  0x2UL                                     /**< Bit mask for GPIO_TXPEN                     */
#define _GPIO_EUART_ROUTEEN_TXPEN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_EUART_ROUTEEN         */
#define GPIO_EUART_ROUTEEN_TXPEN_DEFAULT                (_GPIO_EUART_ROUTEEN_TXPEN_DEFAULT << 1)  /**< Shifted mode DEFAULT for GPIO_EUART_ROUTEEN */

/* Bit fields for GPIO_EUART CTSROUTE */
#define _GPIO_EUART_CTSROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_EUART_CTSROUTE       */
#define _GPIO_EUART_CTSROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_EUART_CTSROUTE                */
#define _GPIO_EUART_CTSROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_EUART_CTSROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_EUART_CTSROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_EUART_CTSROUTE        */
#define GPIO_EUART_CTSROUTE_PORT_DEFAULT                (_GPIO_EUART_CTSROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EUART_CTSROUTE*/
#define _GPIO_EUART_CTSROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_EUART_CTSROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_EUART_CTSROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_EUART_CTSROUTE        */
#define GPIO_EUART_CTSROUTE_PIN_DEFAULT                 (_GPIO_EUART_CTSROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EUART_CTSROUTE*/

/* Bit fields for GPIO_EUART RTSROUTE */
#define _GPIO_EUART_RTSROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_EUART_RTSROUTE       */
#define _GPIO_EUART_RTSROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_EUART_RTSROUTE                */
#define _GPIO_EUART_RTSROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_EUART_RTSROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_EUART_RTSROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_EUART_RTSROUTE        */
#define GPIO_EUART_RTSROUTE_PORT_DEFAULT                (_GPIO_EUART_RTSROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EUART_RTSROUTE*/
#define _GPIO_EUART_RTSROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_EUART_RTSROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_EUART_RTSROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_EUART_RTSROUTE        */
#define GPIO_EUART_RTSROUTE_PIN_DEFAULT                 (_GPIO_EUART_RTSROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EUART_RTSROUTE*/

/* Bit fields for GPIO_EUART RXROUTE */
#define _GPIO_EUART_RXROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_EUART_RXROUTE        */
#define _GPIO_EUART_RXROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_EUART_RXROUTE                 */
#define _GPIO_EUART_RXROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_EUART_RXROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_EUART_RXROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_EUART_RXROUTE         */
#define GPIO_EUART_RXROUTE_PORT_DEFAULT                 (_GPIO_EUART_RXROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EUART_RXROUTE */
#define _GPIO_EUART_RXROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_EUART_RXROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_EUART_RXROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_EUART_RXROUTE         */
#define GPIO_EUART_RXROUTE_PIN_DEFAULT                  (_GPIO_EUART_RXROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EUART_RXROUTE */

/* Bit fields for GPIO_EUART TXROUTE */
#define _GPIO_EUART_TXROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_EUART_TXROUTE        */
#define _GPIO_EUART_TXROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_EUART_TXROUTE                 */
#define _GPIO_EUART_TXROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_EUART_TXROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_EUART_TXROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_EUART_TXROUTE         */
#define GPIO_EUART_TXROUTE_PORT_DEFAULT                 (_GPIO_EUART_TXROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_EUART_TXROUTE */
#define _GPIO_EUART_TXROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_EUART_TXROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_EUART_TXROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_EUART_TXROUTE         */
#define GPIO_EUART_TXROUTE_PIN_DEFAULT                  (_GPIO_EUART_TXROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_EUART_TXROUTE */

/* Bit fields for GPIO_MODEM ROUTEEN */
#define _GPIO_MODEM_ROUTEEN_RESETVALUE                  0x00000000UL                                       /**< Default value for GPIO_MODEM_ROUTEEN        */
#define _GPIO_MODEM_ROUTEEN_MASK                        0x00007FFFUL                                       /**< Mask for GPIO_MODEM_ROUTEEN                 */
#define GPIO_MODEM_ROUTEEN_ANT0PEN                      (0x1UL << 0)                                       /**< ANT0 pin enable control bit                 */
#define _GPIO_MODEM_ROUTEEN_ANT0PEN_SHIFT               0                                                  /**< Shift value for GPIO_ANT0PEN                */
#define _GPIO_MODEM_ROUTEEN_ANT0PEN_MASK                0x1UL                                              /**< Bit mask for GPIO_ANT0PEN                   */
#define _GPIO_MODEM_ROUTEEN_ANT0PEN_DEFAULT             0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANT0PEN_DEFAULT              (_GPIO_MODEM_ROUTEEN_ANT0PEN_DEFAULT << 0)         /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANT1PEN                      (0x1UL << 1)                                       /**< ANT1 pin enable control bit                 */
#define _GPIO_MODEM_ROUTEEN_ANT1PEN_SHIFT               1                                                  /**< Shift value for GPIO_ANT1PEN                */
#define _GPIO_MODEM_ROUTEEN_ANT1PEN_MASK                0x2UL                                              /**< Bit mask for GPIO_ANT1PEN                   */
#define _GPIO_MODEM_ROUTEEN_ANT1PEN_DEFAULT             0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANT1PEN_DEFAULT              (_GPIO_MODEM_ROUTEEN_ANT1PEN_DEFAULT << 1)         /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTROLLOVERPEN               (0x1UL << 2)                                       /**< ANTROLLOVER pin enable control bit          */
#define _GPIO_MODEM_ROUTEEN_ANTROLLOVERPEN_SHIFT        2                                                  /**< Shift value for GPIO_ANTROLLOVERPEN         */
#define _GPIO_MODEM_ROUTEEN_ANTROLLOVERPEN_MASK         0x4UL                                              /**< Bit mask for GPIO_ANTROLLOVERPEN            */
#define _GPIO_MODEM_ROUTEEN_ANTROLLOVERPEN_DEFAULT      0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTROLLOVERPEN_DEFAULT       (_GPIO_MODEM_ROUTEEN_ANTROLLOVERPEN_DEFAULT << 2)  /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTRR0PEN                    (0x1UL << 3)                                       /**< ANTRR0 pin enable control bit               */
#define _GPIO_MODEM_ROUTEEN_ANTRR0PEN_SHIFT             3                                                  /**< Shift value for GPIO_ANTRR0PEN              */
#define _GPIO_MODEM_ROUTEEN_ANTRR0PEN_MASK              0x8UL                                              /**< Bit mask for GPIO_ANTRR0PEN                 */
#define _GPIO_MODEM_ROUTEEN_ANTRR0PEN_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTRR0PEN_DEFAULT            (_GPIO_MODEM_ROUTEEN_ANTRR0PEN_DEFAULT << 3)       /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTRR1PEN                    (0x1UL << 4)                                       /**< ANTRR1 pin enable control bit               */
#define _GPIO_MODEM_ROUTEEN_ANTRR1PEN_SHIFT             4                                                  /**< Shift value for GPIO_ANTRR1PEN              */
#define _GPIO_MODEM_ROUTEEN_ANTRR1PEN_MASK              0x10UL                                             /**< Bit mask for GPIO_ANTRR1PEN                 */
#define _GPIO_MODEM_ROUTEEN_ANTRR1PEN_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTRR1PEN_DEFAULT            (_GPIO_MODEM_ROUTEEN_ANTRR1PEN_DEFAULT << 4)       /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTRR2PEN                    (0x1UL << 5)                                       /**< ANTRR2 pin enable control bit               */
#define _GPIO_MODEM_ROUTEEN_ANTRR2PEN_SHIFT             5                                                  /**< Shift value for GPIO_ANTRR2PEN              */
#define _GPIO_MODEM_ROUTEEN_ANTRR2PEN_MASK              0x20UL                                             /**< Bit mask for GPIO_ANTRR2PEN                 */
#define _GPIO_MODEM_ROUTEEN_ANTRR2PEN_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTRR2PEN_DEFAULT            (_GPIO_MODEM_ROUTEEN_ANTRR2PEN_DEFAULT << 5)       /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTRR3PEN                    (0x1UL << 6)                                       /**< ANTRR3 pin enable control bit               */
#define _GPIO_MODEM_ROUTEEN_ANTRR3PEN_SHIFT             6                                                  /**< Shift value for GPIO_ANTRR3PEN              */
#define _GPIO_MODEM_ROUTEEN_ANTRR3PEN_MASK              0x40UL                                             /**< Bit mask for GPIO_ANTRR3PEN                 */
#define _GPIO_MODEM_ROUTEEN_ANTRR3PEN_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTRR3PEN_DEFAULT            (_GPIO_MODEM_ROUTEEN_ANTRR3PEN_DEFAULT << 6)       /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTRR4PEN                    (0x1UL << 7)                                       /**< ANTRR4 pin enable control bit               */
#define _GPIO_MODEM_ROUTEEN_ANTRR4PEN_SHIFT             7                                                  /**< Shift value for GPIO_ANTRR4PEN              */
#define _GPIO_MODEM_ROUTEEN_ANTRR4PEN_MASK              0x80UL                                             /**< Bit mask for GPIO_ANTRR4PEN                 */
#define _GPIO_MODEM_ROUTEEN_ANTRR4PEN_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTRR4PEN_DEFAULT            (_GPIO_MODEM_ROUTEEN_ANTRR4PEN_DEFAULT << 7)       /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTRR5PEN                    (0x1UL << 8)                                       /**< ANTRR5 pin enable control bit               */
#define _GPIO_MODEM_ROUTEEN_ANTRR5PEN_SHIFT             8                                                  /**< Shift value for GPIO_ANTRR5PEN              */
#define _GPIO_MODEM_ROUTEEN_ANTRR5PEN_MASK              0x100UL                                            /**< Bit mask for GPIO_ANTRR5PEN                 */
#define _GPIO_MODEM_ROUTEEN_ANTRR5PEN_DEFAULT           0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTRR5PEN_DEFAULT            (_GPIO_MODEM_ROUTEEN_ANTRR5PEN_DEFAULT << 8)       /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTSWENPEN                   (0x1UL << 9)                                       /**< ANTSWEN pin enable control bit              */
#define _GPIO_MODEM_ROUTEEN_ANTSWENPEN_SHIFT            9                                                  /**< Shift value for GPIO_ANTSWENPEN             */
#define _GPIO_MODEM_ROUTEEN_ANTSWENPEN_MASK             0x200UL                                            /**< Bit mask for GPIO_ANTSWENPEN                */
#define _GPIO_MODEM_ROUTEEN_ANTSWENPEN_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTSWENPEN_DEFAULT           (_GPIO_MODEM_ROUTEEN_ANTSWENPEN_DEFAULT << 9)      /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTSWUSPEN                   (0x1UL << 10)                                      /**< ANTSWUS pin enable control bit              */
#define _GPIO_MODEM_ROUTEEN_ANTSWUSPEN_SHIFT            10                                                 /**< Shift value for GPIO_ANTSWUSPEN             */
#define _GPIO_MODEM_ROUTEEN_ANTSWUSPEN_MASK             0x400UL                                            /**< Bit mask for GPIO_ANTSWUSPEN                */
#define _GPIO_MODEM_ROUTEEN_ANTSWUSPEN_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTSWUSPEN_DEFAULT           (_GPIO_MODEM_ROUTEEN_ANTSWUSPEN_DEFAULT << 10)     /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTTRIGPEN                   (0x1UL << 11)                                      /**< ANTTRIG pin enable control bit              */
#define _GPIO_MODEM_ROUTEEN_ANTTRIGPEN_SHIFT            11                                                 /**< Shift value for GPIO_ANTTRIGPEN             */
#define _GPIO_MODEM_ROUTEEN_ANTTRIGPEN_MASK             0x800UL                                            /**< Bit mask for GPIO_ANTTRIGPEN                */
#define _GPIO_MODEM_ROUTEEN_ANTTRIGPEN_DEFAULT          0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTTRIGPEN_DEFAULT           (_GPIO_MODEM_ROUTEEN_ANTTRIGPEN_DEFAULT << 11)     /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_ANTTRIGSTOPPEN               (0x1UL << 12)                                      /**< ANTTRIGSTOP pin enable control bit          */
#define _GPIO_MODEM_ROUTEEN_ANTTRIGSTOPPEN_SHIFT        12                                                 /**< Shift value for GPIO_ANTTRIGSTOPPEN         */
#define _GPIO_MODEM_ROUTEEN_ANTTRIGSTOPPEN_MASK         0x1000UL                                           /**< Bit mask for GPIO_ANTTRIGSTOPPEN            */
#define _GPIO_MODEM_ROUTEEN_ANTTRIGSTOPPEN_DEFAULT      0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_ANTTRIGSTOPPEN_DEFAULT       (_GPIO_MODEM_ROUTEEN_ANTTRIGSTOPPEN_DEFAULT << 12) /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_DCLKPEN                      (0x1UL << 13)                                      /**< DCLK pin enable control bit                 */
#define _GPIO_MODEM_ROUTEEN_DCLKPEN_SHIFT               13                                                 /**< Shift value for GPIO_DCLKPEN                */
#define _GPIO_MODEM_ROUTEEN_DCLKPEN_MASK                0x2000UL                                           /**< Bit mask for GPIO_DCLKPEN                   */
#define _GPIO_MODEM_ROUTEEN_DCLKPEN_DEFAULT             0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_DCLKPEN_DEFAULT              (_GPIO_MODEM_ROUTEEN_DCLKPEN_DEFAULT << 13)        /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */
#define GPIO_MODEM_ROUTEEN_DOUTPEN                      (0x1UL << 14)                                      /**< DOUT pin enable control bit                 */
#define _GPIO_MODEM_ROUTEEN_DOUTPEN_SHIFT               14                                                 /**< Shift value for GPIO_DOUTPEN                */
#define _GPIO_MODEM_ROUTEEN_DOUTPEN_MASK                0x4000UL                                           /**< Bit mask for GPIO_DOUTPEN                   */
#define _GPIO_MODEM_ROUTEEN_DOUTPEN_DEFAULT             0x00000000UL                                       /**< Mode DEFAULT for GPIO_MODEM_ROUTEEN         */
#define GPIO_MODEM_ROUTEEN_DOUTPEN_DEFAULT              (_GPIO_MODEM_ROUTEEN_DOUTPEN_DEFAULT << 14)        /**< Shifted mode DEFAULT for GPIO_MODEM_ROUTEEN */

/* Bit fields for GPIO_MODEM ANT0ROUTE */
#define _GPIO_MODEM_ANT0ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_MODEM_ANT0ROUTE      */
#define _GPIO_MODEM_ANT0ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_MODEM_ANT0ROUTE               */
#define _GPIO_MODEM_ANT0ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANT0ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANT0ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_ANT0ROUTE       */
#define GPIO_MODEM_ANT0ROUTE_PORT_DEFAULT               (_GPIO_MODEM_ANT0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANT0ROUTE*/
#define _GPIO_MODEM_ANT0ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANT0ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANT0ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_ANT0ROUTE       */
#define GPIO_MODEM_ANT0ROUTE_PIN_DEFAULT                (_GPIO_MODEM_ANT0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANT0ROUTE*/

/* Bit fields for GPIO_MODEM ANT1ROUTE */
#define _GPIO_MODEM_ANT1ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_MODEM_ANT1ROUTE      */
#define _GPIO_MODEM_ANT1ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_MODEM_ANT1ROUTE               */
#define _GPIO_MODEM_ANT1ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANT1ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANT1ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_ANT1ROUTE       */
#define GPIO_MODEM_ANT1ROUTE_PORT_DEFAULT               (_GPIO_MODEM_ANT1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANT1ROUTE*/
#define _GPIO_MODEM_ANT1ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANT1ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANT1ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_ANT1ROUTE       */
#define GPIO_MODEM_ANT1ROUTE_PIN_DEFAULT                (_GPIO_MODEM_ANT1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANT1ROUTE*/

/* Bit fields for GPIO_MODEM ANTROLLOVERROUTE */
#define _GPIO_MODEM_ANTROLLOVERROUTE_RESETVALUE         0x00000000UL                                     /**< Default value for GPIO_MODEM_ANTROLLOVERROUTE*/
#define _GPIO_MODEM_ANTROLLOVERROUTE_MASK               0x000F0003UL                                     /**< Mask for GPIO_MODEM_ANTROLLOVERROUTE        */
#define _GPIO_MODEM_ANTROLLOVERROUTE_PORT_SHIFT         0                                                /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTROLLOVERROUTE_PORT_MASK          0x3UL                                            /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTROLLOVERROUTE_PORT_DEFAULT       0x00000000UL                                     /**< Mode DEFAULT for GPIO_MODEM_ANTROLLOVERROUTE*/
#define GPIO_MODEM_ANTROLLOVERROUTE_PORT_DEFAULT        (_GPIO_MODEM_ANTROLLOVERROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTROLLOVERROUTE*/
#define _GPIO_MODEM_ANTROLLOVERROUTE_PIN_SHIFT          16                                               /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTROLLOVERROUTE_PIN_MASK           0xF0000UL                                        /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTROLLOVERROUTE_PIN_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for GPIO_MODEM_ANTROLLOVERROUTE*/
#define GPIO_MODEM_ANTROLLOVERROUTE_PIN_DEFAULT         (_GPIO_MODEM_ANTROLLOVERROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTROLLOVERROUTE*/

/* Bit fields for GPIO_MODEM ANTRR0ROUTE */
#define _GPIO_MODEM_ANTRR0ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_MODEM_ANTRR0ROUTE    */
#define _GPIO_MODEM_ANTRR0ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_MODEM_ANTRR0ROUTE             */
#define _GPIO_MODEM_ANTRR0ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTRR0ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTRR0ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR0ROUTE     */
#define GPIO_MODEM_ANTRR0ROUTE_PORT_DEFAULT             (_GPIO_MODEM_ANTRR0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR0ROUTE*/
#define _GPIO_MODEM_ANTRR0ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTRR0ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTRR0ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR0ROUTE     */
#define GPIO_MODEM_ANTRR0ROUTE_PIN_DEFAULT              (_GPIO_MODEM_ANTRR0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR0ROUTE*/

/* Bit fields for GPIO_MODEM ANTRR1ROUTE */
#define _GPIO_MODEM_ANTRR1ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_MODEM_ANTRR1ROUTE    */
#define _GPIO_MODEM_ANTRR1ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_MODEM_ANTRR1ROUTE             */
#define _GPIO_MODEM_ANTRR1ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTRR1ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTRR1ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR1ROUTE     */
#define GPIO_MODEM_ANTRR1ROUTE_PORT_DEFAULT             (_GPIO_MODEM_ANTRR1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR1ROUTE*/
#define _GPIO_MODEM_ANTRR1ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTRR1ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTRR1ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR1ROUTE     */
#define GPIO_MODEM_ANTRR1ROUTE_PIN_DEFAULT              (_GPIO_MODEM_ANTRR1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR1ROUTE*/

/* Bit fields for GPIO_MODEM ANTRR2ROUTE */
#define _GPIO_MODEM_ANTRR2ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_MODEM_ANTRR2ROUTE    */
#define _GPIO_MODEM_ANTRR2ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_MODEM_ANTRR2ROUTE             */
#define _GPIO_MODEM_ANTRR2ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTRR2ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTRR2ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR2ROUTE     */
#define GPIO_MODEM_ANTRR2ROUTE_PORT_DEFAULT             (_GPIO_MODEM_ANTRR2ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR2ROUTE*/
#define _GPIO_MODEM_ANTRR2ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTRR2ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTRR2ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR2ROUTE     */
#define GPIO_MODEM_ANTRR2ROUTE_PIN_DEFAULT              (_GPIO_MODEM_ANTRR2ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR2ROUTE*/

/* Bit fields for GPIO_MODEM ANTRR3ROUTE */
#define _GPIO_MODEM_ANTRR3ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_MODEM_ANTRR3ROUTE    */
#define _GPIO_MODEM_ANTRR3ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_MODEM_ANTRR3ROUTE             */
#define _GPIO_MODEM_ANTRR3ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTRR3ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTRR3ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR3ROUTE     */
#define GPIO_MODEM_ANTRR3ROUTE_PORT_DEFAULT             (_GPIO_MODEM_ANTRR3ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR3ROUTE*/
#define _GPIO_MODEM_ANTRR3ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTRR3ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTRR3ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR3ROUTE     */
#define GPIO_MODEM_ANTRR3ROUTE_PIN_DEFAULT              (_GPIO_MODEM_ANTRR3ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR3ROUTE*/

/* Bit fields for GPIO_MODEM ANTRR4ROUTE */
#define _GPIO_MODEM_ANTRR4ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_MODEM_ANTRR4ROUTE    */
#define _GPIO_MODEM_ANTRR4ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_MODEM_ANTRR4ROUTE             */
#define _GPIO_MODEM_ANTRR4ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTRR4ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTRR4ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR4ROUTE     */
#define GPIO_MODEM_ANTRR4ROUTE_PORT_DEFAULT             (_GPIO_MODEM_ANTRR4ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR4ROUTE*/
#define _GPIO_MODEM_ANTRR4ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTRR4ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTRR4ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR4ROUTE     */
#define GPIO_MODEM_ANTRR4ROUTE_PIN_DEFAULT              (_GPIO_MODEM_ANTRR4ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR4ROUTE*/

/* Bit fields for GPIO_MODEM ANTRR5ROUTE */
#define _GPIO_MODEM_ANTRR5ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_MODEM_ANTRR5ROUTE    */
#define _GPIO_MODEM_ANTRR5ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_MODEM_ANTRR5ROUTE             */
#define _GPIO_MODEM_ANTRR5ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTRR5ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTRR5ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR5ROUTE     */
#define GPIO_MODEM_ANTRR5ROUTE_PORT_DEFAULT             (_GPIO_MODEM_ANTRR5ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR5ROUTE*/
#define _GPIO_MODEM_ANTRR5ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTRR5ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTRR5ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_MODEM_ANTRR5ROUTE     */
#define GPIO_MODEM_ANTRR5ROUTE_PIN_DEFAULT              (_GPIO_MODEM_ANTRR5ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTRR5ROUTE*/

/* Bit fields for GPIO_MODEM ANTSWENROUTE */
#define _GPIO_MODEM_ANTSWENROUTE_RESETVALUE             0x00000000UL                                 /**< Default value for GPIO_MODEM_ANTSWENROUTE   */
#define _GPIO_MODEM_ANTSWENROUTE_MASK                   0x000F0003UL                                 /**< Mask for GPIO_MODEM_ANTSWENROUTE            */
#define _GPIO_MODEM_ANTSWENROUTE_PORT_SHIFT             0                                            /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTSWENROUTE_PORT_MASK              0x3UL                                        /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTSWENROUTE_PORT_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_MODEM_ANTSWENROUTE    */
#define GPIO_MODEM_ANTSWENROUTE_PORT_DEFAULT            (_GPIO_MODEM_ANTSWENROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTSWENROUTE*/
#define _GPIO_MODEM_ANTSWENROUTE_PIN_SHIFT              16                                           /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTSWENROUTE_PIN_MASK               0xF0000UL                                    /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTSWENROUTE_PIN_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for GPIO_MODEM_ANTSWENROUTE    */
#define GPIO_MODEM_ANTSWENROUTE_PIN_DEFAULT             (_GPIO_MODEM_ANTSWENROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTSWENROUTE*/

/* Bit fields for GPIO_MODEM ANTSWUSROUTE */
#define _GPIO_MODEM_ANTSWUSROUTE_RESETVALUE             0x00000000UL                                 /**< Default value for GPIO_MODEM_ANTSWUSROUTE   */
#define _GPIO_MODEM_ANTSWUSROUTE_MASK                   0x000F0003UL                                 /**< Mask for GPIO_MODEM_ANTSWUSROUTE            */
#define _GPIO_MODEM_ANTSWUSROUTE_PORT_SHIFT             0                                            /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTSWUSROUTE_PORT_MASK              0x3UL                                        /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTSWUSROUTE_PORT_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_MODEM_ANTSWUSROUTE    */
#define GPIO_MODEM_ANTSWUSROUTE_PORT_DEFAULT            (_GPIO_MODEM_ANTSWUSROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTSWUSROUTE*/
#define _GPIO_MODEM_ANTSWUSROUTE_PIN_SHIFT              16                                           /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTSWUSROUTE_PIN_MASK               0xF0000UL                                    /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTSWUSROUTE_PIN_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for GPIO_MODEM_ANTSWUSROUTE    */
#define GPIO_MODEM_ANTSWUSROUTE_PIN_DEFAULT             (_GPIO_MODEM_ANTSWUSROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTSWUSROUTE*/

/* Bit fields for GPIO_MODEM ANTTRIGROUTE */
#define _GPIO_MODEM_ANTTRIGROUTE_RESETVALUE             0x00000000UL                                 /**< Default value for GPIO_MODEM_ANTTRIGROUTE   */
#define _GPIO_MODEM_ANTTRIGROUTE_MASK                   0x000F0003UL                                 /**< Mask for GPIO_MODEM_ANTTRIGROUTE            */
#define _GPIO_MODEM_ANTTRIGROUTE_PORT_SHIFT             0                                            /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTTRIGROUTE_PORT_MASK              0x3UL                                        /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTTRIGROUTE_PORT_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for GPIO_MODEM_ANTTRIGROUTE    */
#define GPIO_MODEM_ANTTRIGROUTE_PORT_DEFAULT            (_GPIO_MODEM_ANTTRIGROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTTRIGROUTE*/
#define _GPIO_MODEM_ANTTRIGROUTE_PIN_SHIFT              16                                           /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTTRIGROUTE_PIN_MASK               0xF0000UL                                    /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTTRIGROUTE_PIN_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for GPIO_MODEM_ANTTRIGROUTE    */
#define GPIO_MODEM_ANTTRIGROUTE_PIN_DEFAULT             (_GPIO_MODEM_ANTTRIGROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTTRIGROUTE*/

/* Bit fields for GPIO_MODEM ANTTRIGSTOPROUTE */
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_RESETVALUE         0x00000000UL                                     /**< Default value for GPIO_MODEM_ANTTRIGSTOPROUTE*/
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_MASK               0x000F0003UL                                     /**< Mask for GPIO_MODEM_ANTTRIGSTOPROUTE        */
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_PORT_SHIFT         0                                                /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_PORT_MASK          0x3UL                                            /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_PORT_DEFAULT       0x00000000UL                                     /**< Mode DEFAULT for GPIO_MODEM_ANTTRIGSTOPROUTE*/
#define GPIO_MODEM_ANTTRIGSTOPROUTE_PORT_DEFAULT        (_GPIO_MODEM_ANTTRIGSTOPROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTTRIGSTOPROUTE*/
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_PIN_SHIFT          16                                               /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_PIN_MASK           0xF0000UL                                        /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_ANTTRIGSTOPROUTE_PIN_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for GPIO_MODEM_ANTTRIGSTOPROUTE*/
#define GPIO_MODEM_ANTTRIGSTOPROUTE_PIN_DEFAULT         (_GPIO_MODEM_ANTTRIGSTOPROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_ANTTRIGSTOPROUTE*/

/* Bit fields for GPIO_MODEM DCLKROUTE */
#define _GPIO_MODEM_DCLKROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_MODEM_DCLKROUTE      */
#define _GPIO_MODEM_DCLKROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_MODEM_DCLKROUTE               */
#define _GPIO_MODEM_DCLKROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_DCLKROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_DCLKROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_DCLKROUTE       */
#define GPIO_MODEM_DCLKROUTE_PORT_DEFAULT               (_GPIO_MODEM_DCLKROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_DCLKROUTE*/
#define _GPIO_MODEM_DCLKROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_DCLKROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_DCLKROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_DCLKROUTE       */
#define GPIO_MODEM_DCLKROUTE_PIN_DEFAULT                (_GPIO_MODEM_DCLKROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_DCLKROUTE*/

/* Bit fields for GPIO_MODEM DINROUTE */
#define _GPIO_MODEM_DINROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_MODEM_DINROUTE       */
#define _GPIO_MODEM_DINROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_MODEM_DINROUTE                */
#define _GPIO_MODEM_DINROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_DINROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_DINROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_MODEM_DINROUTE        */
#define GPIO_MODEM_DINROUTE_PORT_DEFAULT                (_GPIO_MODEM_DINROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_DINROUTE*/
#define _GPIO_MODEM_DINROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_DINROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_DINROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_MODEM_DINROUTE        */
#define GPIO_MODEM_DINROUTE_PIN_DEFAULT                 (_GPIO_MODEM_DINROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_DINROUTE*/

/* Bit fields for GPIO_MODEM DOUTROUTE */
#define _GPIO_MODEM_DOUTROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_MODEM_DOUTROUTE      */
#define _GPIO_MODEM_DOUTROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_MODEM_DOUTROUTE               */
#define _GPIO_MODEM_DOUTROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_MODEM_DOUTROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_MODEM_DOUTROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_DOUTROUTE       */
#define GPIO_MODEM_DOUTROUTE_PORT_DEFAULT               (_GPIO_MODEM_DOUTROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_MODEM_DOUTROUTE*/
#define _GPIO_MODEM_DOUTROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_MODEM_DOUTROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_MODEM_DOUTROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_MODEM_DOUTROUTE       */
#define GPIO_MODEM_DOUTROUTE_PIN_DEFAULT                (_GPIO_MODEM_DOUTROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_MODEM_DOUTROUTE*/

/* Bit fields for GPIO_PDM ROUTEEN */
#define _GPIO_PDM_ROUTEEN_RESETVALUE                    0x00000000UL                            /**< Default value for GPIO_PDM_ROUTEEN          */
#define _GPIO_PDM_ROUTEEN_MASK                          0x00000001UL                            /**< Mask for GPIO_PDM_ROUTEEN                   */
#define GPIO_PDM_ROUTEEN_CLKPEN                         (0x1UL << 0)                            /**< CLK pin enable control bit                  */
#define _GPIO_PDM_ROUTEEN_CLKPEN_SHIFT                  0                                       /**< Shift value for GPIO_CLKPEN                 */
#define _GPIO_PDM_ROUTEEN_CLKPEN_MASK                   0x1UL                                   /**< Bit mask for GPIO_CLKPEN                    */
#define _GPIO_PDM_ROUTEEN_CLKPEN_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_PDM_ROUTEEN           */
#define GPIO_PDM_ROUTEEN_CLKPEN_DEFAULT                 (_GPIO_PDM_ROUTEEN_CLKPEN_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PDM_ROUTEEN   */

/* Bit fields for GPIO_PDM CLKROUTE */
#define _GPIO_PDM_CLKROUTE_RESETVALUE                   0x00000000UL                           /**< Default value for GPIO_PDM_CLKROUTE         */
#define _GPIO_PDM_CLKROUTE_MASK                         0x000F0003UL                           /**< Mask for GPIO_PDM_CLKROUTE                  */
#define _GPIO_PDM_CLKROUTE_PORT_SHIFT                   0                                      /**< Shift value for GPIO_PORT                   */
#define _GPIO_PDM_CLKROUTE_PORT_MASK                    0x3UL                                  /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PDM_CLKROUTE_PORT_DEFAULT                 0x00000000UL                           /**< Mode DEFAULT for GPIO_PDM_CLKROUTE          */
#define GPIO_PDM_CLKROUTE_PORT_DEFAULT                  (_GPIO_PDM_CLKROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PDM_CLKROUTE  */
#define _GPIO_PDM_CLKROUTE_PIN_SHIFT                    16                                     /**< Shift value for GPIO_PIN                    */
#define _GPIO_PDM_CLKROUTE_PIN_MASK                     0xF0000UL                              /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PDM_CLKROUTE_PIN_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for GPIO_PDM_CLKROUTE          */
#define GPIO_PDM_CLKROUTE_PIN_DEFAULT                   (_GPIO_PDM_CLKROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PDM_CLKROUTE  */

/* Bit fields for GPIO_PDM DAT0ROUTE */
#define _GPIO_PDM_DAT0ROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_PDM_DAT0ROUTE        */
#define _GPIO_PDM_DAT0ROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_PDM_DAT0ROUTE                 */
#define _GPIO_PDM_DAT0ROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_PDM_DAT0ROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PDM_DAT0ROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_PDM_DAT0ROUTE         */
#define GPIO_PDM_DAT0ROUTE_PORT_DEFAULT                 (_GPIO_PDM_DAT0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PDM_DAT0ROUTE */
#define _GPIO_PDM_DAT0ROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_PDM_DAT0ROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PDM_DAT0ROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_PDM_DAT0ROUTE         */
#define GPIO_PDM_DAT0ROUTE_PIN_DEFAULT                  (_GPIO_PDM_DAT0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PDM_DAT0ROUTE */

/* Bit fields for GPIO_PDM DAT1ROUTE */
#define _GPIO_PDM_DAT1ROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_PDM_DAT1ROUTE        */
#define _GPIO_PDM_DAT1ROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_PDM_DAT1ROUTE                 */
#define _GPIO_PDM_DAT1ROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_PDM_DAT1ROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PDM_DAT1ROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_PDM_DAT1ROUTE         */
#define GPIO_PDM_DAT1ROUTE_PORT_DEFAULT                 (_GPIO_PDM_DAT1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PDM_DAT1ROUTE */
#define _GPIO_PDM_DAT1ROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_PDM_DAT1ROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PDM_DAT1ROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_PDM_DAT1ROUTE         */
#define GPIO_PDM_DAT1ROUTE_PIN_DEFAULT                  (_GPIO_PDM_DAT1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PDM_DAT1ROUTE */

/* Bit fields for GPIO_PRS ROUTEEN */
#define _GPIO_PRS_ROUTEEN_RESETVALUE                    0x00000000UL                                  /**< Default value for GPIO_PRS_ROUTEEN          */
#define _GPIO_PRS_ROUTEEN_MASK                          0x0000FFFFUL                                  /**< Mask for GPIO_PRS_ROUTEEN                   */
#define GPIO_PRS_ROUTEEN_ASYNCH0PEN                     (0x1UL << 0)                                  /**< ASYNCH0 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH0PEN_SHIFT              0                                             /**< Shift value for GPIO_ASYNCH0PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH0PEN_MASK               0x1UL                                         /**< Bit mask for GPIO_ASYNCH0PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH0PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH0PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH0PEN_DEFAULT << 0)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH1PEN                     (0x1UL << 1)                                  /**< ASYNCH1 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH1PEN_SHIFT              1                                             /**< Shift value for GPIO_ASYNCH1PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH1PEN_MASK               0x2UL                                         /**< Bit mask for GPIO_ASYNCH1PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH1PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH1PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH1PEN_DEFAULT << 1)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH2PEN                     (0x1UL << 2)                                  /**< ASYNCH2 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH2PEN_SHIFT              2                                             /**< Shift value for GPIO_ASYNCH2PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH2PEN_MASK               0x4UL                                         /**< Bit mask for GPIO_ASYNCH2PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH2PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH2PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH2PEN_DEFAULT << 2)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH3PEN                     (0x1UL << 3)                                  /**< ASYNCH3 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH3PEN_SHIFT              3                                             /**< Shift value for GPIO_ASYNCH3PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH3PEN_MASK               0x8UL                                         /**< Bit mask for GPIO_ASYNCH3PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH3PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH3PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH3PEN_DEFAULT << 3)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH4PEN                     (0x1UL << 4)                                  /**< ASYNCH4 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH4PEN_SHIFT              4                                             /**< Shift value for GPIO_ASYNCH4PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH4PEN_MASK               0x10UL                                        /**< Bit mask for GPIO_ASYNCH4PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH4PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH4PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH4PEN_DEFAULT << 4)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH5PEN                     (0x1UL << 5)                                  /**< ASYNCH5 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH5PEN_SHIFT              5                                             /**< Shift value for GPIO_ASYNCH5PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH5PEN_MASK               0x20UL                                        /**< Bit mask for GPIO_ASYNCH5PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH5PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH5PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH5PEN_DEFAULT << 5)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH6PEN                     (0x1UL << 6)                                  /**< ASYNCH6 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH6PEN_SHIFT              6                                             /**< Shift value for GPIO_ASYNCH6PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH6PEN_MASK               0x40UL                                        /**< Bit mask for GPIO_ASYNCH6PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH6PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH6PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH6PEN_DEFAULT << 6)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH7PEN                     (0x1UL << 7)                                  /**< ASYNCH7 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH7PEN_SHIFT              7                                             /**< Shift value for GPIO_ASYNCH7PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH7PEN_MASK               0x80UL                                        /**< Bit mask for GPIO_ASYNCH7PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH7PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH7PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH7PEN_DEFAULT << 7)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH8PEN                     (0x1UL << 8)                                  /**< ASYNCH8 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH8PEN_SHIFT              8                                             /**< Shift value for GPIO_ASYNCH8PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH8PEN_MASK               0x100UL                                       /**< Bit mask for GPIO_ASYNCH8PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH8PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH8PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH8PEN_DEFAULT << 8)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH9PEN                     (0x1UL << 9)                                  /**< ASYNCH9 pin enable control bit              */
#define _GPIO_PRS_ROUTEEN_ASYNCH9PEN_SHIFT              9                                             /**< Shift value for GPIO_ASYNCH9PEN             */
#define _GPIO_PRS_ROUTEEN_ASYNCH9PEN_MASK               0x200UL                                       /**< Bit mask for GPIO_ASYNCH9PEN                */
#define _GPIO_PRS_ROUTEEN_ASYNCH9PEN_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH9PEN_DEFAULT             (_GPIO_PRS_ROUTEEN_ASYNCH9PEN_DEFAULT << 9)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH10PEN                    (0x1UL << 10)                                 /**< ASYNCH10 pin enable control bit             */
#define _GPIO_PRS_ROUTEEN_ASYNCH10PEN_SHIFT             10                                            /**< Shift value for GPIO_ASYNCH10PEN            */
#define _GPIO_PRS_ROUTEEN_ASYNCH10PEN_MASK              0x400UL                                       /**< Bit mask for GPIO_ASYNCH10PEN               */
#define _GPIO_PRS_ROUTEEN_ASYNCH10PEN_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH10PEN_DEFAULT            (_GPIO_PRS_ROUTEEN_ASYNCH10PEN_DEFAULT << 10) /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_ASYNCH11PEN                    (0x1UL << 11)                                 /**< ASYNCH11 pin enable control bit             */
#define _GPIO_PRS_ROUTEEN_ASYNCH11PEN_SHIFT             11                                            /**< Shift value for GPIO_ASYNCH11PEN            */
#define _GPIO_PRS_ROUTEEN_ASYNCH11PEN_MASK              0x800UL                                       /**< Bit mask for GPIO_ASYNCH11PEN               */
#define _GPIO_PRS_ROUTEEN_ASYNCH11PEN_DEFAULT           0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_ASYNCH11PEN_DEFAULT            (_GPIO_PRS_ROUTEEN_ASYNCH11PEN_DEFAULT << 11) /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_SYNCH0PEN                      (0x1UL << 12)                                 /**< SYNCH0 pin enable control bit               */
#define _GPIO_PRS_ROUTEEN_SYNCH0PEN_SHIFT               12                                            /**< Shift value for GPIO_SYNCH0PEN              */
#define _GPIO_PRS_ROUTEEN_SYNCH0PEN_MASK                0x1000UL                                      /**< Bit mask for GPIO_SYNCH0PEN                 */
#define _GPIO_PRS_ROUTEEN_SYNCH0PEN_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_SYNCH0PEN_DEFAULT              (_GPIO_PRS_ROUTEEN_SYNCH0PEN_DEFAULT << 12)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_SYNCH1PEN                      (0x1UL << 13)                                 /**< SYNCH1 pin enable control bit               */
#define _GPIO_PRS_ROUTEEN_SYNCH1PEN_SHIFT               13                                            /**< Shift value for GPIO_SYNCH1PEN              */
#define _GPIO_PRS_ROUTEEN_SYNCH1PEN_MASK                0x2000UL                                      /**< Bit mask for GPIO_SYNCH1PEN                 */
#define _GPIO_PRS_ROUTEEN_SYNCH1PEN_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_SYNCH1PEN_DEFAULT              (_GPIO_PRS_ROUTEEN_SYNCH1PEN_DEFAULT << 13)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_SYNCH2PEN                      (0x1UL << 14)                                 /**< SYNCH2 pin enable control bit               */
#define _GPIO_PRS_ROUTEEN_SYNCH2PEN_SHIFT               14                                            /**< Shift value for GPIO_SYNCH2PEN              */
#define _GPIO_PRS_ROUTEEN_SYNCH2PEN_MASK                0x4000UL                                      /**< Bit mask for GPIO_SYNCH2PEN                 */
#define _GPIO_PRS_ROUTEEN_SYNCH2PEN_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_SYNCH2PEN_DEFAULT              (_GPIO_PRS_ROUTEEN_SYNCH2PEN_DEFAULT << 14)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */
#define GPIO_PRS_ROUTEEN_SYNCH3PEN                      (0x1UL << 15)                                 /**< SYNCH3 pin enable control bit               */
#define _GPIO_PRS_ROUTEEN_SYNCH3PEN_SHIFT               15                                            /**< Shift value for GPIO_SYNCH3PEN              */
#define _GPIO_PRS_ROUTEEN_SYNCH3PEN_MASK                0x8000UL                                      /**< Bit mask for GPIO_SYNCH3PEN                 */
#define _GPIO_PRS_ROUTEEN_SYNCH3PEN_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for GPIO_PRS_ROUTEEN           */
#define GPIO_PRS_ROUTEEN_SYNCH3PEN_DEFAULT              (_GPIO_PRS_ROUTEEN_SYNCH3PEN_DEFAULT << 15)   /**< Shifted mode DEFAULT for GPIO_PRS_ROUTEEN   */

/* Bit fields for GPIO_PRS ASYNCH0ROUTE */
#define _GPIO_PRS_ASYNCH0ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH0ROUTE     */
#define _GPIO_PRS_ASYNCH0ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH0ROUTE              */
#define _GPIO_PRS_ASYNCH0ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH0ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH0ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH0ROUTE      */
#define GPIO_PRS_ASYNCH0ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH0ROUTE*/
#define _GPIO_PRS_ASYNCH0ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH0ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH0ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH0ROUTE      */
#define GPIO_PRS_ASYNCH0ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH0ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH1ROUTE */
#define _GPIO_PRS_ASYNCH1ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH1ROUTE     */
#define _GPIO_PRS_ASYNCH1ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH1ROUTE              */
#define _GPIO_PRS_ASYNCH1ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH1ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH1ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH1ROUTE      */
#define GPIO_PRS_ASYNCH1ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH1ROUTE*/
#define _GPIO_PRS_ASYNCH1ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH1ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH1ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH1ROUTE      */
#define GPIO_PRS_ASYNCH1ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH1ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH2ROUTE */
#define _GPIO_PRS_ASYNCH2ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH2ROUTE     */
#define _GPIO_PRS_ASYNCH2ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH2ROUTE              */
#define _GPIO_PRS_ASYNCH2ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH2ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH2ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH2ROUTE      */
#define GPIO_PRS_ASYNCH2ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH2ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH2ROUTE*/
#define _GPIO_PRS_ASYNCH2ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH2ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH2ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH2ROUTE      */
#define GPIO_PRS_ASYNCH2ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH2ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH2ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH3ROUTE */
#define _GPIO_PRS_ASYNCH3ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH3ROUTE     */
#define _GPIO_PRS_ASYNCH3ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH3ROUTE              */
#define _GPIO_PRS_ASYNCH3ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH3ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH3ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH3ROUTE      */
#define GPIO_PRS_ASYNCH3ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH3ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH3ROUTE*/
#define _GPIO_PRS_ASYNCH3ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH3ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH3ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH3ROUTE      */
#define GPIO_PRS_ASYNCH3ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH3ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH3ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH4ROUTE */
#define _GPIO_PRS_ASYNCH4ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH4ROUTE     */
#define _GPIO_PRS_ASYNCH4ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH4ROUTE              */
#define _GPIO_PRS_ASYNCH4ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH4ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH4ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH4ROUTE      */
#define GPIO_PRS_ASYNCH4ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH4ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH4ROUTE*/
#define _GPIO_PRS_ASYNCH4ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH4ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH4ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH4ROUTE      */
#define GPIO_PRS_ASYNCH4ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH4ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH4ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH5ROUTE */
#define _GPIO_PRS_ASYNCH5ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH5ROUTE     */
#define _GPIO_PRS_ASYNCH5ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH5ROUTE              */
#define _GPIO_PRS_ASYNCH5ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH5ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH5ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH5ROUTE      */
#define GPIO_PRS_ASYNCH5ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH5ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH5ROUTE*/
#define _GPIO_PRS_ASYNCH5ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH5ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH5ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH5ROUTE      */
#define GPIO_PRS_ASYNCH5ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH5ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH5ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH6ROUTE */
#define _GPIO_PRS_ASYNCH6ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH6ROUTE     */
#define _GPIO_PRS_ASYNCH6ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH6ROUTE              */
#define _GPIO_PRS_ASYNCH6ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH6ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH6ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH6ROUTE      */
#define GPIO_PRS_ASYNCH6ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH6ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH6ROUTE*/
#define _GPIO_PRS_ASYNCH6ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH6ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH6ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH6ROUTE      */
#define GPIO_PRS_ASYNCH6ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH6ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH6ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH7ROUTE */
#define _GPIO_PRS_ASYNCH7ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH7ROUTE     */
#define _GPIO_PRS_ASYNCH7ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH7ROUTE              */
#define _GPIO_PRS_ASYNCH7ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH7ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH7ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH7ROUTE      */
#define GPIO_PRS_ASYNCH7ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH7ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH7ROUTE*/
#define _GPIO_PRS_ASYNCH7ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH7ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH7ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH7ROUTE      */
#define GPIO_PRS_ASYNCH7ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH7ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH7ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH8ROUTE */
#define _GPIO_PRS_ASYNCH8ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH8ROUTE     */
#define _GPIO_PRS_ASYNCH8ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH8ROUTE              */
#define _GPIO_PRS_ASYNCH8ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH8ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH8ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH8ROUTE      */
#define GPIO_PRS_ASYNCH8ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH8ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH8ROUTE*/
#define _GPIO_PRS_ASYNCH8ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH8ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH8ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH8ROUTE      */
#define GPIO_PRS_ASYNCH8ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH8ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH8ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH9ROUTE */
#define _GPIO_PRS_ASYNCH9ROUTE_RESETVALUE               0x00000000UL                               /**< Default value for GPIO_PRS_ASYNCH9ROUTE     */
#define _GPIO_PRS_ASYNCH9ROUTE_MASK                     0x000F0003UL                               /**< Mask for GPIO_PRS_ASYNCH9ROUTE              */
#define _GPIO_PRS_ASYNCH9ROUTE_PORT_SHIFT               0                                          /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH9ROUTE_PORT_MASK                0x3UL                                      /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH9ROUTE_PORT_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH9ROUTE      */
#define GPIO_PRS_ASYNCH9ROUTE_PORT_DEFAULT              (_GPIO_PRS_ASYNCH9ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH9ROUTE*/
#define _GPIO_PRS_ASYNCH9ROUTE_PIN_SHIFT                16                                         /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH9ROUTE_PIN_MASK                 0xF0000UL                                  /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH9ROUTE_PIN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_PRS_ASYNCH9ROUTE      */
#define GPIO_PRS_ASYNCH9ROUTE_PIN_DEFAULT               (_GPIO_PRS_ASYNCH9ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH9ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH10ROUTE */
#define _GPIO_PRS_ASYNCH10ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_PRS_ASYNCH10ROUTE    */
#define _GPIO_PRS_ASYNCH10ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_PRS_ASYNCH10ROUTE             */
#define _GPIO_PRS_ASYNCH10ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH10ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH10ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_PRS_ASYNCH10ROUTE     */
#define GPIO_PRS_ASYNCH10ROUTE_PORT_DEFAULT             (_GPIO_PRS_ASYNCH10ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH10ROUTE*/
#define _GPIO_PRS_ASYNCH10ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH10ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH10ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_PRS_ASYNCH10ROUTE     */
#define GPIO_PRS_ASYNCH10ROUTE_PIN_DEFAULT              (_GPIO_PRS_ASYNCH10ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH10ROUTE*/

/* Bit fields for GPIO_PRS ASYNCH11ROUTE */
#define _GPIO_PRS_ASYNCH11ROUTE_RESETVALUE              0x00000000UL                                /**< Default value for GPIO_PRS_ASYNCH11ROUTE    */
#define _GPIO_PRS_ASYNCH11ROUTE_MASK                    0x000F0003UL                                /**< Mask for GPIO_PRS_ASYNCH11ROUTE             */
#define _GPIO_PRS_ASYNCH11ROUTE_PORT_SHIFT              0                                           /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_ASYNCH11ROUTE_PORT_MASK               0x3UL                                       /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_ASYNCH11ROUTE_PORT_DEFAULT            0x00000000UL                                /**< Mode DEFAULT for GPIO_PRS_ASYNCH11ROUTE     */
#define GPIO_PRS_ASYNCH11ROUTE_PORT_DEFAULT             (_GPIO_PRS_ASYNCH11ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH11ROUTE*/
#define _GPIO_PRS_ASYNCH11ROUTE_PIN_SHIFT               16                                          /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_ASYNCH11ROUTE_PIN_MASK                0xF0000UL                                   /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_ASYNCH11ROUTE_PIN_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for GPIO_PRS_ASYNCH11ROUTE     */
#define GPIO_PRS_ASYNCH11ROUTE_PIN_DEFAULT              (_GPIO_PRS_ASYNCH11ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_ASYNCH11ROUTE*/

/* Bit fields for GPIO_PRS SYNCH0ROUTE */
#define _GPIO_PRS_SYNCH0ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_PRS_SYNCH0ROUTE      */
#define _GPIO_PRS_SYNCH0ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_PRS_SYNCH0ROUTE               */
#define _GPIO_PRS_SYNCH0ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_SYNCH0ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_SYNCH0ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH0ROUTE       */
#define GPIO_PRS_SYNCH0ROUTE_PORT_DEFAULT               (_GPIO_PRS_SYNCH0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH0ROUTE*/
#define _GPIO_PRS_SYNCH0ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_SYNCH0ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_SYNCH0ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH0ROUTE       */
#define GPIO_PRS_SYNCH0ROUTE_PIN_DEFAULT                (_GPIO_PRS_SYNCH0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH0ROUTE*/

/* Bit fields for GPIO_PRS SYNCH1ROUTE */
#define _GPIO_PRS_SYNCH1ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_PRS_SYNCH1ROUTE      */
#define _GPIO_PRS_SYNCH1ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_PRS_SYNCH1ROUTE               */
#define _GPIO_PRS_SYNCH1ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_SYNCH1ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_SYNCH1ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH1ROUTE       */
#define GPIO_PRS_SYNCH1ROUTE_PORT_DEFAULT               (_GPIO_PRS_SYNCH1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH1ROUTE*/
#define _GPIO_PRS_SYNCH1ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_SYNCH1ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_SYNCH1ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH1ROUTE       */
#define GPIO_PRS_SYNCH1ROUTE_PIN_DEFAULT                (_GPIO_PRS_SYNCH1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH1ROUTE*/

/* Bit fields for GPIO_PRS SYNCH2ROUTE */
#define _GPIO_PRS_SYNCH2ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_PRS_SYNCH2ROUTE      */
#define _GPIO_PRS_SYNCH2ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_PRS_SYNCH2ROUTE               */
#define _GPIO_PRS_SYNCH2ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_SYNCH2ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_SYNCH2ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH2ROUTE       */
#define GPIO_PRS_SYNCH2ROUTE_PORT_DEFAULT               (_GPIO_PRS_SYNCH2ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH2ROUTE*/
#define _GPIO_PRS_SYNCH2ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_SYNCH2ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_SYNCH2ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH2ROUTE       */
#define GPIO_PRS_SYNCH2ROUTE_PIN_DEFAULT                (_GPIO_PRS_SYNCH2ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH2ROUTE*/

/* Bit fields for GPIO_PRS SYNCH3ROUTE */
#define _GPIO_PRS_SYNCH3ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_PRS_SYNCH3ROUTE      */
#define _GPIO_PRS_SYNCH3ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_PRS_SYNCH3ROUTE               */
#define _GPIO_PRS_SYNCH3ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_PRS_SYNCH3ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_PRS_SYNCH3ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH3ROUTE       */
#define GPIO_PRS_SYNCH3ROUTE_PORT_DEFAULT               (_GPIO_PRS_SYNCH3ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH3ROUTE*/
#define _GPIO_PRS_SYNCH3ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_PRS_SYNCH3ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_PRS_SYNCH3ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_PRS_SYNCH3ROUTE       */
#define GPIO_PRS_SYNCH3ROUTE_PIN_DEFAULT                (_GPIO_PRS_SYNCH3ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_PRS_SYNCH3ROUTE*/

/* Bit fields for GPIO_TIMER ROUTEEN */
#define _GPIO_TIMER_ROUTEEN_RESETVALUE                  0x00000000UL                               /**< Default value for GPIO_TIMER_ROUTEEN        */
#define _GPIO_TIMER_ROUTEEN_MASK                        0x0000003FUL                               /**< Mask for GPIO_TIMER_ROUTEEN                 */
#define GPIO_TIMER_ROUTEEN_CC0PEN                       (0x1UL << 0)                               /**< CC0 pin enable control bit                  */
#define _GPIO_TIMER_ROUTEEN_CC0PEN_SHIFT                0                                          /**< Shift value for GPIO_CC0PEN                 */
#define _GPIO_TIMER_ROUTEEN_CC0PEN_MASK                 0x1UL                                      /**< Bit mask for GPIO_CC0PEN                    */
#define _GPIO_TIMER_ROUTEEN_CC0PEN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_TIMER_ROUTEEN         */
#define GPIO_TIMER_ROUTEEN_CC0PEN_DEFAULT               (_GPIO_TIMER_ROUTEEN_CC0PEN_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_TIMER_ROUTEEN */
#define GPIO_TIMER_ROUTEEN_CC1PEN                       (0x1UL << 1)                               /**< CC1 pin enable control bit                  */
#define _GPIO_TIMER_ROUTEEN_CC1PEN_SHIFT                1                                          /**< Shift value for GPIO_CC1PEN                 */
#define _GPIO_TIMER_ROUTEEN_CC1PEN_MASK                 0x2UL                                      /**< Bit mask for GPIO_CC1PEN                    */
#define _GPIO_TIMER_ROUTEEN_CC1PEN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_TIMER_ROUTEEN         */
#define GPIO_TIMER_ROUTEEN_CC1PEN_DEFAULT               (_GPIO_TIMER_ROUTEEN_CC1PEN_DEFAULT << 1)  /**< Shifted mode DEFAULT for GPIO_TIMER_ROUTEEN */
#define GPIO_TIMER_ROUTEEN_CC2PEN                       (0x1UL << 2)                               /**< CC2 pin enable control bit                  */
#define _GPIO_TIMER_ROUTEEN_CC2PEN_SHIFT                2                                          /**< Shift value for GPIO_CC2PEN                 */
#define _GPIO_TIMER_ROUTEEN_CC2PEN_MASK                 0x4UL                                      /**< Bit mask for GPIO_CC2PEN                    */
#define _GPIO_TIMER_ROUTEEN_CC2PEN_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for GPIO_TIMER_ROUTEEN         */
#define GPIO_TIMER_ROUTEEN_CC2PEN_DEFAULT               (_GPIO_TIMER_ROUTEEN_CC2PEN_DEFAULT << 2)  /**< Shifted mode DEFAULT for GPIO_TIMER_ROUTEEN */
#define GPIO_TIMER_ROUTEEN_CCC0PEN                      (0x1UL << 3)                               /**< CCC0 pin enable control bit                 */
#define _GPIO_TIMER_ROUTEEN_CCC0PEN_SHIFT               3                                          /**< Shift value for GPIO_CCC0PEN                */
#define _GPIO_TIMER_ROUTEEN_CCC0PEN_MASK                0x8UL                                      /**< Bit mask for GPIO_CCC0PEN                   */
#define _GPIO_TIMER_ROUTEEN_CCC0PEN_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_TIMER_ROUTEEN         */
#define GPIO_TIMER_ROUTEEN_CCC0PEN_DEFAULT              (_GPIO_TIMER_ROUTEEN_CCC0PEN_DEFAULT << 3) /**< Shifted mode DEFAULT for GPIO_TIMER_ROUTEEN */
#define GPIO_TIMER_ROUTEEN_CCC1PEN                      (0x1UL << 4)                               /**< CCC1 pin enable control bit                 */
#define _GPIO_TIMER_ROUTEEN_CCC1PEN_SHIFT               4                                          /**< Shift value for GPIO_CCC1PEN                */
#define _GPIO_TIMER_ROUTEEN_CCC1PEN_MASK                0x10UL                                     /**< Bit mask for GPIO_CCC1PEN                   */
#define _GPIO_TIMER_ROUTEEN_CCC1PEN_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_TIMER_ROUTEEN         */
#define GPIO_TIMER_ROUTEEN_CCC1PEN_DEFAULT              (_GPIO_TIMER_ROUTEEN_CCC1PEN_DEFAULT << 4) /**< Shifted mode DEFAULT for GPIO_TIMER_ROUTEEN */
#define GPIO_TIMER_ROUTEEN_CCC2PEN                      (0x1UL << 5)                               /**< CCC2 pin enable control bit                 */
#define _GPIO_TIMER_ROUTEEN_CCC2PEN_SHIFT               5                                          /**< Shift value for GPIO_CCC2PEN                */
#define _GPIO_TIMER_ROUTEEN_CCC2PEN_MASK                0x20UL                                     /**< Bit mask for GPIO_CCC2PEN                   */
#define _GPIO_TIMER_ROUTEEN_CCC2PEN_DEFAULT             0x00000000UL                               /**< Mode DEFAULT for GPIO_TIMER_ROUTEEN         */
#define GPIO_TIMER_ROUTEEN_CCC2PEN_DEFAULT              (_GPIO_TIMER_ROUTEEN_CCC2PEN_DEFAULT << 5) /**< Shifted mode DEFAULT for GPIO_TIMER_ROUTEEN */

/* Bit fields for GPIO_TIMER CC0ROUTE */
#define _GPIO_TIMER_CC0ROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_TIMER_CC0ROUTE       */
#define _GPIO_TIMER_CC0ROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_TIMER_CC0ROUTE                */
#define _GPIO_TIMER_CC0ROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_TIMER_CC0ROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_TIMER_CC0ROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_TIMER_CC0ROUTE        */
#define GPIO_TIMER_CC0ROUTE_PORT_DEFAULT                (_GPIO_TIMER_CC0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_TIMER_CC0ROUTE*/
#define _GPIO_TIMER_CC0ROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_TIMER_CC0ROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_TIMER_CC0ROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_TIMER_CC0ROUTE        */
#define GPIO_TIMER_CC0ROUTE_PIN_DEFAULT                 (_GPIO_TIMER_CC0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_TIMER_CC0ROUTE*/

/* Bit fields for GPIO_TIMER CC1ROUTE */
#define _GPIO_TIMER_CC1ROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_TIMER_CC1ROUTE       */
#define _GPIO_TIMER_CC1ROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_TIMER_CC1ROUTE                */
#define _GPIO_TIMER_CC1ROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_TIMER_CC1ROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_TIMER_CC1ROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_TIMER_CC1ROUTE        */
#define GPIO_TIMER_CC1ROUTE_PORT_DEFAULT                (_GPIO_TIMER_CC1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_TIMER_CC1ROUTE*/
#define _GPIO_TIMER_CC1ROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_TIMER_CC1ROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_TIMER_CC1ROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_TIMER_CC1ROUTE        */
#define GPIO_TIMER_CC1ROUTE_PIN_DEFAULT                 (_GPIO_TIMER_CC1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_TIMER_CC1ROUTE*/

/* Bit fields for GPIO_TIMER CC2ROUTE */
#define _GPIO_TIMER_CC2ROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_TIMER_CC2ROUTE       */
#define _GPIO_TIMER_CC2ROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_TIMER_CC2ROUTE                */
#define _GPIO_TIMER_CC2ROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_TIMER_CC2ROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_TIMER_CC2ROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_TIMER_CC2ROUTE        */
#define GPIO_TIMER_CC2ROUTE_PORT_DEFAULT                (_GPIO_TIMER_CC2ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_TIMER_CC2ROUTE*/
#define _GPIO_TIMER_CC2ROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_TIMER_CC2ROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_TIMER_CC2ROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_TIMER_CC2ROUTE        */
#define GPIO_TIMER_CC2ROUTE_PIN_DEFAULT                 (_GPIO_TIMER_CC2ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_TIMER_CC2ROUTE*/

/* Bit fields for GPIO_TIMER CCC0ROUTE */
#define _GPIO_TIMER_CCC0ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_TIMER_CCC0ROUTE      */
#define _GPIO_TIMER_CCC0ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_TIMER_CCC0ROUTE               */
#define _GPIO_TIMER_CCC0ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_TIMER_CCC0ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_TIMER_CCC0ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_TIMER_CCC0ROUTE       */
#define GPIO_TIMER_CCC0ROUTE_PORT_DEFAULT               (_GPIO_TIMER_CCC0ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_TIMER_CCC0ROUTE*/
#define _GPIO_TIMER_CCC0ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_TIMER_CCC0ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_TIMER_CCC0ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_TIMER_CCC0ROUTE       */
#define GPIO_TIMER_CCC0ROUTE_PIN_DEFAULT                (_GPIO_TIMER_CCC0ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_TIMER_CCC0ROUTE*/

/* Bit fields for GPIO_TIMER CCC1ROUTE */
#define _GPIO_TIMER_CCC1ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_TIMER_CCC1ROUTE      */
#define _GPIO_TIMER_CCC1ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_TIMER_CCC1ROUTE               */
#define _GPIO_TIMER_CCC1ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_TIMER_CCC1ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_TIMER_CCC1ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_TIMER_CCC1ROUTE       */
#define GPIO_TIMER_CCC1ROUTE_PORT_DEFAULT               (_GPIO_TIMER_CCC1ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_TIMER_CCC1ROUTE*/
#define _GPIO_TIMER_CCC1ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_TIMER_CCC1ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_TIMER_CCC1ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_TIMER_CCC1ROUTE       */
#define GPIO_TIMER_CCC1ROUTE_PIN_DEFAULT                (_GPIO_TIMER_CCC1ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_TIMER_CCC1ROUTE*/

/* Bit fields for GPIO_TIMER CCC2ROUTE */
#define _GPIO_TIMER_CCC2ROUTE_RESETVALUE                0x00000000UL                              /**< Default value for GPIO_TIMER_CCC2ROUTE      */
#define _GPIO_TIMER_CCC2ROUTE_MASK                      0x000F0003UL                              /**< Mask for GPIO_TIMER_CCC2ROUTE               */
#define _GPIO_TIMER_CCC2ROUTE_PORT_SHIFT                0                                         /**< Shift value for GPIO_PORT                   */
#define _GPIO_TIMER_CCC2ROUTE_PORT_MASK                 0x3UL                                     /**< Bit mask for GPIO_PORT                      */
#define _GPIO_TIMER_CCC2ROUTE_PORT_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_TIMER_CCC2ROUTE       */
#define GPIO_TIMER_CCC2ROUTE_PORT_DEFAULT               (_GPIO_TIMER_CCC2ROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_TIMER_CCC2ROUTE*/
#define _GPIO_TIMER_CCC2ROUTE_PIN_SHIFT                 16                                        /**< Shift value for GPIO_PIN                    */
#define _GPIO_TIMER_CCC2ROUTE_PIN_MASK                  0xF0000UL                                 /**< Bit mask for GPIO_PIN                       */
#define _GPIO_TIMER_CCC2ROUTE_PIN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_TIMER_CCC2ROUTE       */
#define GPIO_TIMER_CCC2ROUTE_PIN_DEFAULT                (_GPIO_TIMER_CCC2ROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_TIMER_CCC2ROUTE*/

/* Bit fields for GPIO_USART ROUTEEN */
#define _GPIO_USART_ROUTEEN_RESETVALUE                  0x00000000UL                              /**< Default value for GPIO_USART_ROUTEEN        */
#define _GPIO_USART_ROUTEEN_MASK                        0x0000001FUL                              /**< Mask for GPIO_USART_ROUTEEN                 */
#define GPIO_USART_ROUTEEN_CSPEN                        (0x1UL << 0)                              /**< CS pin enable control bit                   */
#define _GPIO_USART_ROUTEEN_CSPEN_SHIFT                 0                                         /**< Shift value for GPIO_CSPEN                  */
#define _GPIO_USART_ROUTEEN_CSPEN_MASK                  0x1UL                                     /**< Bit mask for GPIO_CSPEN                     */
#define _GPIO_USART_ROUTEEN_CSPEN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_USART_ROUTEEN         */
#define GPIO_USART_ROUTEEN_CSPEN_DEFAULT                (_GPIO_USART_ROUTEEN_CSPEN_DEFAULT << 0)  /**< Shifted mode DEFAULT for GPIO_USART_ROUTEEN */
#define GPIO_USART_ROUTEEN_RTSPEN                       (0x1UL << 1)                              /**< RTS pin enable control bit                  */
#define _GPIO_USART_ROUTEEN_RTSPEN_SHIFT                1                                         /**< Shift value for GPIO_RTSPEN                 */
#define _GPIO_USART_ROUTEEN_RTSPEN_MASK                 0x2UL                                     /**< Bit mask for GPIO_RTSPEN                    */
#define _GPIO_USART_ROUTEEN_RTSPEN_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_USART_ROUTEEN         */
#define GPIO_USART_ROUTEEN_RTSPEN_DEFAULT               (_GPIO_USART_ROUTEEN_RTSPEN_DEFAULT << 1) /**< Shifted mode DEFAULT for GPIO_USART_ROUTEEN */
#define GPIO_USART_ROUTEEN_RXPEN                        (0x1UL << 2)                              /**< RX pin enable control bit                   */
#define _GPIO_USART_ROUTEEN_RXPEN_SHIFT                 2                                         /**< Shift value for GPIO_RXPEN                  */
#define _GPIO_USART_ROUTEEN_RXPEN_MASK                  0x4UL                                     /**< Bit mask for GPIO_RXPEN                     */
#define _GPIO_USART_ROUTEEN_RXPEN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_USART_ROUTEEN         */
#define GPIO_USART_ROUTEEN_RXPEN_DEFAULT                (_GPIO_USART_ROUTEEN_RXPEN_DEFAULT << 2)  /**< Shifted mode DEFAULT for GPIO_USART_ROUTEEN */
#define GPIO_USART_ROUTEEN_CLKPEN                       (0x1UL << 3)                              /**< SCLK pin enable control bit                 */
#define _GPIO_USART_ROUTEEN_CLKPEN_SHIFT                3                                         /**< Shift value for GPIO_CLKPEN                 */
#define _GPIO_USART_ROUTEEN_CLKPEN_MASK                 0x8UL                                     /**< Bit mask for GPIO_CLKPEN                    */
#define _GPIO_USART_ROUTEEN_CLKPEN_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for GPIO_USART_ROUTEEN         */
#define GPIO_USART_ROUTEEN_CLKPEN_DEFAULT               (_GPIO_USART_ROUTEEN_CLKPEN_DEFAULT << 3) /**< Shifted mode DEFAULT for GPIO_USART_ROUTEEN */
#define GPIO_USART_ROUTEEN_TXPEN                        (0x1UL << 4)                              /**< TX pin enable control bit                   */
#define _GPIO_USART_ROUTEEN_TXPEN_SHIFT                 4                                         /**< Shift value for GPIO_TXPEN                  */
#define _GPIO_USART_ROUTEEN_TXPEN_MASK                  0x10UL                                    /**< Bit mask for GPIO_TXPEN                     */
#define _GPIO_USART_ROUTEEN_TXPEN_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for GPIO_USART_ROUTEEN         */
#define GPIO_USART_ROUTEEN_TXPEN_DEFAULT                (_GPIO_USART_ROUTEEN_TXPEN_DEFAULT << 4)  /**< Shifted mode DEFAULT for GPIO_USART_ROUTEEN */

/* Bit fields for GPIO_USART CSROUTE */
#define _GPIO_USART_CSROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_USART_CSROUTE        */
#define _GPIO_USART_CSROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_USART_CSROUTE                 */
#define _GPIO_USART_CSROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_USART_CSROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_USART_CSROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_USART_CSROUTE         */
#define GPIO_USART_CSROUTE_PORT_DEFAULT                 (_GPIO_USART_CSROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_USART_CSROUTE */
#define _GPIO_USART_CSROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_USART_CSROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_USART_CSROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_USART_CSROUTE         */
#define GPIO_USART_CSROUTE_PIN_DEFAULT                  (_GPIO_USART_CSROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_USART_CSROUTE */

/* Bit fields for GPIO_USART CTSROUTE */
#define _GPIO_USART_CTSROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_USART_CTSROUTE       */
#define _GPIO_USART_CTSROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_USART_CTSROUTE                */
#define _GPIO_USART_CTSROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_USART_CTSROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_USART_CTSROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_USART_CTSROUTE        */
#define GPIO_USART_CTSROUTE_PORT_DEFAULT                (_GPIO_USART_CTSROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_USART_CTSROUTE*/
#define _GPIO_USART_CTSROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_USART_CTSROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_USART_CTSROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_USART_CTSROUTE        */
#define GPIO_USART_CTSROUTE_PIN_DEFAULT                 (_GPIO_USART_CTSROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_USART_CTSROUTE*/

/* Bit fields for GPIO_USART RTSROUTE */
#define _GPIO_USART_RTSROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_USART_RTSROUTE       */
#define _GPIO_USART_RTSROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_USART_RTSROUTE                */
#define _GPIO_USART_RTSROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_USART_RTSROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_USART_RTSROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_USART_RTSROUTE        */
#define GPIO_USART_RTSROUTE_PORT_DEFAULT                (_GPIO_USART_RTSROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_USART_RTSROUTE*/
#define _GPIO_USART_RTSROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_USART_RTSROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_USART_RTSROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_USART_RTSROUTE        */
#define GPIO_USART_RTSROUTE_PIN_DEFAULT                 (_GPIO_USART_RTSROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_USART_RTSROUTE*/

/* Bit fields for GPIO_USART RXROUTE */
#define _GPIO_USART_RXROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_USART_RXROUTE        */
#define _GPIO_USART_RXROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_USART_RXROUTE                 */
#define _GPIO_USART_RXROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_USART_RXROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_USART_RXROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_USART_RXROUTE         */
#define GPIO_USART_RXROUTE_PORT_DEFAULT                 (_GPIO_USART_RXROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_USART_RXROUTE */
#define _GPIO_USART_RXROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_USART_RXROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_USART_RXROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_USART_RXROUTE         */
#define GPIO_USART_RXROUTE_PIN_DEFAULT                  (_GPIO_USART_RXROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_USART_RXROUTE */

/* Bit fields for GPIO_USART CLKROUTE */
#define _GPIO_USART_CLKROUTE_RESETVALUE                 0x00000000UL                             /**< Default value for GPIO_USART_CLKROUTE       */
#define _GPIO_USART_CLKROUTE_MASK                       0x000F0003UL                             /**< Mask for GPIO_USART_CLKROUTE                */
#define _GPIO_USART_CLKROUTE_PORT_SHIFT                 0                                        /**< Shift value for GPIO_PORT                   */
#define _GPIO_USART_CLKROUTE_PORT_MASK                  0x3UL                                    /**< Bit mask for GPIO_PORT                      */
#define _GPIO_USART_CLKROUTE_PORT_DEFAULT               0x00000000UL                             /**< Mode DEFAULT for GPIO_USART_CLKROUTE        */
#define GPIO_USART_CLKROUTE_PORT_DEFAULT                (_GPIO_USART_CLKROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_USART_CLKROUTE*/
#define _GPIO_USART_CLKROUTE_PIN_SHIFT                  16                                       /**< Shift value for GPIO_PIN                    */
#define _GPIO_USART_CLKROUTE_PIN_MASK                   0xF0000UL                                /**< Bit mask for GPIO_PIN                       */
#define _GPIO_USART_CLKROUTE_PIN_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for GPIO_USART_CLKROUTE        */
#define GPIO_USART_CLKROUTE_PIN_DEFAULT                 (_GPIO_USART_CLKROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_USART_CLKROUTE*/

/* Bit fields for GPIO_USART TXROUTE */
#define _GPIO_USART_TXROUTE_RESETVALUE                  0x00000000UL                            /**< Default value for GPIO_USART_TXROUTE        */
#define _GPIO_USART_TXROUTE_MASK                        0x000F0003UL                            /**< Mask for GPIO_USART_TXROUTE                 */
#define _GPIO_USART_TXROUTE_PORT_SHIFT                  0                                       /**< Shift value for GPIO_PORT                   */
#define _GPIO_USART_TXROUTE_PORT_MASK                   0x3UL                                   /**< Bit mask for GPIO_PORT                      */
#define _GPIO_USART_TXROUTE_PORT_DEFAULT                0x00000000UL                            /**< Mode DEFAULT for GPIO_USART_TXROUTE         */
#define GPIO_USART_TXROUTE_PORT_DEFAULT                 (_GPIO_USART_TXROUTE_PORT_DEFAULT << 0) /**< Shifted mode DEFAULT for GPIO_USART_TXROUTE */
#define _GPIO_USART_TXROUTE_PIN_SHIFT                   16                                      /**< Shift value for GPIO_PIN                    */
#define _GPIO_USART_TXROUTE_PIN_MASK                    0xF0000UL                               /**< Bit mask for GPIO_PIN                       */
#define _GPIO_USART_TXROUTE_PIN_DEFAULT                 0x00000000UL                            /**< Mode DEFAULT for GPIO_USART_TXROUTE         */
#define GPIO_USART_TXROUTE_PIN_DEFAULT                  (_GPIO_USART_TXROUTE_PIN_DEFAULT << 16) /**< Shifted mode DEFAULT for GPIO_USART_TXROUTE */
/** @} End of group Parts */
#endif /* EFR32MG22_GPIO_H */
