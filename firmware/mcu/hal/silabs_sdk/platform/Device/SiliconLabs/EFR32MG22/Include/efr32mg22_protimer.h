/**************************************************************************//**
 * @file
 * @brief EFR32MG22 PROTIMER register and bit field definitions
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
#ifndef EFR32MG22_PROTIMER_H
#define EFR32MG22_PROTIMER_H
#define PROTIMER_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG22_PROTIMER PROTIMER
 * @{
 * @brief EFR32MG22 PROTIMER Register Declaration.
 *****************************************************************************/

/** PROTIMER CC Register Group Declaration. */
typedef struct {
  __IOM uint32_t CTRL;                               /**< CC Channel Control Register                        */
  __IOM uint32_t PRE;                                /**< CC Channel PRE Value Register                      */
  __IOM uint32_t BASE;                               /**< CC Channel BASE Value Register                     */
  __IOM uint32_t WRAP;                               /**< CC Channel WRAP Value Register                     */
} PROTIMER_CC_TypeDef;

/** PROTIMER Register Declaration. */
typedef struct {
  __IM uint32_t       IPVERSION;                /**< IPVERSION                                          */
  __IOM uint32_t      EN;                       /**< EN                                                 */
  __IOM uint32_t      CTRL;                     /**< Control Register                                   */
  __IOM uint32_t      CMD;                      /**< Command Register                                   */
  __IOM uint32_t      PRSCTRL;                  /**< PRS Channel selection                              */
  __IM uint32_t       STATUS;                   /**< Status Register                                    */
  __IOM uint32_t      PRECNT;                   /**< Pre Counter Value                                  */
  __IOM uint32_t      BASECNT;                  /**< Base Counter Value                                 */
  __IOM uint32_t      WRAPCNT;                  /**< Wrap Counter Value                                 */
  __IM uint32_t       BASEPRE;                  /**< Base and Pre counter values                        */
  __IM uint32_t       LWRAPCNT;                 /**< Latched Wrap Counter Value                         */
  __IOM uint32_t      PRECNTTOPADJ;             /**< PRECNT Top Adjust Value                            */
  __IOM uint32_t      PRECNTTOP;                /**< PRECNT Top Value                                   */
  __IOM uint32_t      BASECNTTOP;               /**< BASECNT Top Value                                  */
  __IOM uint32_t      WRAPCNTTOP;               /**< WRAPCNT Top Value Register                         */
  __IOM uint32_t      TOUT0CNT;                 /**< TOUT0CNT Value Register                            */
  __IOM uint32_t      TOUT0CNTTOP;              /**< TOUT0CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT0COMP;                /**< TOUT0COMP Register                                 */
  __IOM uint32_t      TOUT1CNT;                 /**< TOUT1CNT Value Register                            */
  __IOM uint32_t      TOUT1CNTTOP;              /**< TOUT1CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT1COMP;                /**< TOUT1COMP Register                                 */
  __IOM uint32_t      LBTCTRL;                  /**< Listen Before Talk Wait Control                    */
  __IOM uint32_t      LBTPRSCTRL;               /**< PRS Channel selection                              */
  __IOM uint32_t      LBTSTATE;                 /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOM;                   /**< Pseudo Random Generator Value Register             */
  __IOM uint32_t      IF;                       /**< Interrupt Flag Register                            */
  uint32_t            RESERVED0[2U];            /**< Reserved for future use                            */
  __IOM uint32_t      IEN;                      /**< Interrupt Enable Register                          */
  __IOM uint32_t      RXCTRL;                   /**< RX request signal from Protimer                    */
  __IOM uint32_t      TXCTRL;                   /**< TX request signal from Protimer                    */
  __IOM uint32_t      ETSI;                     /**< Support ETSI LBT                                   */
  __IOM uint32_t      LBTSTATE1;                /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOMFW0;                /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW1;                /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW2;                /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      SEQIF;                    /**< SEQ Interrupt Flagh Register                       */
  __IOM uint32_t      SEQIEN;                   /**< SEQ Interrupt Enable Register                      */
  uint32_t            RESERVED1[26U];           /**< Reserved for future use                            */
  PROTIMER_CC_TypeDef CC[8U];                   /**< Compare/Capture Channel                            */
  uint32_t            RESERVED2[928U];          /**< Reserved for future use                            */
  __IM uint32_t       IPVERSION_SET;            /**< IPVERSION                                          */
  __IOM uint32_t      EN_SET;                   /**< EN                                                 */
  __IOM uint32_t      CTRL_SET;                 /**< Control Register                                   */
  __IOM uint32_t      CMD_SET;                  /**< Command Register                                   */
  __IOM uint32_t      PRSCTRL_SET;              /**< PRS Channel selection                              */
  __IM uint32_t       STATUS_SET;               /**< Status Register                                    */
  __IOM uint32_t      PRECNT_SET;               /**< Pre Counter Value                                  */
  __IOM uint32_t      BASECNT_SET;              /**< Base Counter Value                                 */
  __IOM uint32_t      WRAPCNT_SET;              /**< Wrap Counter Value                                 */
  __IM uint32_t       BASEPRE_SET;              /**< Base and Pre counter values                        */
  __IM uint32_t       LWRAPCNT_SET;             /**< Latched Wrap Counter Value                         */
  __IOM uint32_t      PRECNTTOPADJ_SET;         /**< PRECNT Top Adjust Value                            */
  __IOM uint32_t      PRECNTTOP_SET;            /**< PRECNT Top Value                                   */
  __IOM uint32_t      BASECNTTOP_SET;           /**< BASECNT Top Value                                  */
  __IOM uint32_t      WRAPCNTTOP_SET;           /**< WRAPCNT Top Value Register                         */
  __IOM uint32_t      TOUT0CNT_SET;             /**< TOUT0CNT Value Register                            */
  __IOM uint32_t      TOUT0CNTTOP_SET;          /**< TOUT0CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT0COMP_SET;            /**< TOUT0COMP Register                                 */
  __IOM uint32_t      TOUT1CNT_SET;             /**< TOUT1CNT Value Register                            */
  __IOM uint32_t      TOUT1CNTTOP_SET;          /**< TOUT1CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT1COMP_SET;            /**< TOUT1COMP Register                                 */
  __IOM uint32_t      LBTCTRL_SET;              /**< Listen Before Talk Wait Control                    */
  __IOM uint32_t      LBTPRSCTRL_SET;           /**< PRS Channel selection                              */
  __IOM uint32_t      LBTSTATE_SET;             /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOM_SET;               /**< Pseudo Random Generator Value Register             */
  __IOM uint32_t      IF_SET;                   /**< Interrupt Flag Register                            */
  uint32_t            RESERVED3[2U];            /**< Reserved for future use                            */
  __IOM uint32_t      IEN_SET;                  /**< Interrupt Enable Register                          */
  __IOM uint32_t      RXCTRL_SET;               /**< RX request signal from Protimer                    */
  __IOM uint32_t      TXCTRL_SET;               /**< TX request signal from Protimer                    */
  __IOM uint32_t      ETSI_SET;                 /**< Support ETSI LBT                                   */
  __IOM uint32_t      LBTSTATE1_SET;            /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOMFW0_SET;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW1_SET;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW2_SET;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      SEQIF_SET;                /**< SEQ Interrupt Flagh Register                       */
  __IOM uint32_t      SEQIEN_SET;               /**< SEQ Interrupt Enable Register                      */
  uint32_t            RESERVED4[26U];           /**< Reserved for future use                            */
  PROTIMER_CC_TypeDef CC_SET[8U];               /**< Compare/Capture Channel                            */
  uint32_t            RESERVED5[928U];          /**< Reserved for future use                            */
  __IM uint32_t       IPVERSION_CLR;            /**< IPVERSION                                          */
  __IOM uint32_t      EN_CLR;                   /**< EN                                                 */
  __IOM uint32_t      CTRL_CLR;                 /**< Control Register                                   */
  __IOM uint32_t      CMD_CLR;                  /**< Command Register                                   */
  __IOM uint32_t      PRSCTRL_CLR;              /**< PRS Channel selection                              */
  __IM uint32_t       STATUS_CLR;               /**< Status Register                                    */
  __IOM uint32_t      PRECNT_CLR;               /**< Pre Counter Value                                  */
  __IOM uint32_t      BASECNT_CLR;              /**< Base Counter Value                                 */
  __IOM uint32_t      WRAPCNT_CLR;              /**< Wrap Counter Value                                 */
  __IM uint32_t       BASEPRE_CLR;              /**< Base and Pre counter values                        */
  __IM uint32_t       LWRAPCNT_CLR;             /**< Latched Wrap Counter Value                         */
  __IOM uint32_t      PRECNTTOPADJ_CLR;         /**< PRECNT Top Adjust Value                            */
  __IOM uint32_t      PRECNTTOP_CLR;            /**< PRECNT Top Value                                   */
  __IOM uint32_t      BASECNTTOP_CLR;           /**< BASECNT Top Value                                  */
  __IOM uint32_t      WRAPCNTTOP_CLR;           /**< WRAPCNT Top Value Register                         */
  __IOM uint32_t      TOUT0CNT_CLR;             /**< TOUT0CNT Value Register                            */
  __IOM uint32_t      TOUT0CNTTOP_CLR;          /**< TOUT0CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT0COMP_CLR;            /**< TOUT0COMP Register                                 */
  __IOM uint32_t      TOUT1CNT_CLR;             /**< TOUT1CNT Value Register                            */
  __IOM uint32_t      TOUT1CNTTOP_CLR;          /**< TOUT1CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT1COMP_CLR;            /**< TOUT1COMP Register                                 */
  __IOM uint32_t      LBTCTRL_CLR;              /**< Listen Before Talk Wait Control                    */
  __IOM uint32_t      LBTPRSCTRL_CLR;           /**< PRS Channel selection                              */
  __IOM uint32_t      LBTSTATE_CLR;             /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOM_CLR;               /**< Pseudo Random Generator Value Register             */
  __IOM uint32_t      IF_CLR;                   /**< Interrupt Flag Register                            */
  uint32_t            RESERVED6[2U];            /**< Reserved for future use                            */
  __IOM uint32_t      IEN_CLR;                  /**< Interrupt Enable Register                          */
  __IOM uint32_t      RXCTRL_CLR;               /**< RX request signal from Protimer                    */
  __IOM uint32_t      TXCTRL_CLR;               /**< TX request signal from Protimer                    */
  __IOM uint32_t      ETSI_CLR;                 /**< Support ETSI LBT                                   */
  __IOM uint32_t      LBTSTATE1_CLR;            /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOMFW0_CLR;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW1_CLR;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW2_CLR;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      SEQIF_CLR;                /**< SEQ Interrupt Flagh Register                       */
  __IOM uint32_t      SEQIEN_CLR;               /**< SEQ Interrupt Enable Register                      */
  uint32_t            RESERVED7[26U];           /**< Reserved for future use                            */
  PROTIMER_CC_TypeDef CC_CLR[8U];               /**< Compare/Capture Channel                            */
  uint32_t            RESERVED8[928U];          /**< Reserved for future use                            */
  __IM uint32_t       IPVERSION_TGL;            /**< IPVERSION                                          */
  __IOM uint32_t      EN_TGL;                   /**< EN                                                 */
  __IOM uint32_t      CTRL_TGL;                 /**< Control Register                                   */
  __IOM uint32_t      CMD_TGL;                  /**< Command Register                                   */
  __IOM uint32_t      PRSCTRL_TGL;              /**< PRS Channel selection                              */
  __IM uint32_t       STATUS_TGL;               /**< Status Register                                    */
  __IOM uint32_t      PRECNT_TGL;               /**< Pre Counter Value                                  */
  __IOM uint32_t      BASECNT_TGL;              /**< Base Counter Value                                 */
  __IOM uint32_t      WRAPCNT_TGL;              /**< Wrap Counter Value                                 */
  __IM uint32_t       BASEPRE_TGL;              /**< Base and Pre counter values                        */
  __IM uint32_t       LWRAPCNT_TGL;             /**< Latched Wrap Counter Value                         */
  __IOM uint32_t      PRECNTTOPADJ_TGL;         /**< PRECNT Top Adjust Value                            */
  __IOM uint32_t      PRECNTTOP_TGL;            /**< PRECNT Top Value                                   */
  __IOM uint32_t      BASECNTTOP_TGL;           /**< BASECNT Top Value                                  */
  __IOM uint32_t      WRAPCNTTOP_TGL;           /**< WRAPCNT Top Value Register                         */
  __IOM uint32_t      TOUT0CNT_TGL;             /**< TOUT0CNT Value Register                            */
  __IOM uint32_t      TOUT0CNTTOP_TGL;          /**< TOUT0CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT0COMP_TGL;            /**< TOUT0COMP Register                                 */
  __IOM uint32_t      TOUT1CNT_TGL;             /**< TOUT1CNT Value Register                            */
  __IOM uint32_t      TOUT1CNTTOP_TGL;          /**< TOUT1CNTTOP Value Register.                        */
  __IOM uint32_t      TOUT1COMP_TGL;            /**< TOUT1COMP Register                                 */
  __IOM uint32_t      LBTCTRL_TGL;              /**< Listen Before Talk Wait Control                    */
  __IOM uint32_t      LBTPRSCTRL_TGL;           /**< PRS Channel selection                              */
  __IOM uint32_t      LBTSTATE_TGL;             /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOM_TGL;               /**< Pseudo Random Generator Value Register             */
  __IOM uint32_t      IF_TGL;                   /**< Interrupt Flag Register                            */
  uint32_t            RESERVED9[2U];            /**< Reserved for future use                            */
  __IOM uint32_t      IEN_TGL;                  /**< Interrupt Enable Register                          */
  __IOM uint32_t      RXCTRL_TGL;               /**< RX request signal from Protimer                    */
  __IOM uint32_t      TXCTRL_TGL;               /**< TX request signal from Protimer                    */
  __IOM uint32_t      ETSI_TGL;                 /**< Support ETSI LBT                                   */
  __IOM uint32_t      LBTSTATE1_TGL;            /**< Listen Before Talk State                           */
  __IOM uint32_t      RANDOMFW0_TGL;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW1_TGL;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      RANDOMFW2_TGL;            /**< GENERATED LINEAR RANDOM VALUE                      */
  __IOM uint32_t      SEQIF_TGL;                /**< SEQ Interrupt Flagh Register                       */
  __IOM uint32_t      SEQIEN_TGL;               /**< SEQ Interrupt Enable Register                      */
  uint32_t            RESERVED10[26U];          /**< Reserved for future use                            */
  PROTIMER_CC_TypeDef CC_TGL[8U];               /**< Compare/Capture Channel                            */
} PROTIMER_TypeDef;
/** @} End of group EFR32MG22_PROTIMER */

/**************************************************************************//**
 * @addtogroup EFR32MG22_PROTIMER
 * @{
 * @defgroup EFR32MG22_PROTIMER_BitFields PROTIMER Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for PROTIMER IPVERSION */
#define _PROTIMER_IPVERSION_RESETVALUE                   0x00000001UL                                 /**< Default value for PROTIMER_IPVERSION        */
#define _PROTIMER_IPVERSION_MASK                         0xFFFFFFFFUL                                 /**< Mask for PROTIMER_IPVERSION                 */
#define _PROTIMER_IPVERSION_IPVERSION_SHIFT              0                                            /**< Shift value for PROTIMER_IPVERSION          */
#define _PROTIMER_IPVERSION_IPVERSION_MASK               0xFFFFFFFFUL                                 /**< Bit mask for PROTIMER_IPVERSION             */
#define _PROTIMER_IPVERSION_IPVERSION_DEFAULT            0x00000001UL                                 /**< Mode DEFAULT for PROTIMER_IPVERSION         */
#define PROTIMER_IPVERSION_IPVERSION_DEFAULT             (_PROTIMER_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_IPVERSION */

/* Bit fields for PROTIMER EN */
#define _PROTIMER_EN_RESETVALUE                          0x00000000UL                   /**< Default value for PROTIMER_EN               */
#define _PROTIMER_EN_MASK                                0x00000001UL                   /**< Mask for PROTIMER_EN                        */
#define PROTIMER_EN_EN                                   (0x1UL << 0)                   /**< EN                                          */
#define _PROTIMER_EN_EN_SHIFT                            0                              /**< Shift value for PROTIMER_EN                 */
#define _PROTIMER_EN_EN_MASK                             0x1UL                          /**< Bit mask for PROTIMER_EN                    */
#define _PROTIMER_EN_EN_DEFAULT                          0x00000000UL                   /**< Mode DEFAULT for PROTIMER_EN                */
#define PROTIMER_EN_EN_DEFAULT                           (_PROTIMER_EN_EN_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_EN        */

/* Bit fields for PROTIMER CTRL */
#define _PROTIMER_CTRL_RESETVALUE                        0x00000000UL                                  /**< Default value for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_MASK                              0x3FF33336UL                                  /**< Mask for PROTIMER_CTRL                      */
#define PROTIMER_CTRL_DEBUGRUN                           (0x1UL << 1)                                  /**< Debug Mode Run Enable                       */
#define _PROTIMER_CTRL_DEBUGRUN_SHIFT                    1                                             /**< Shift value for PROTIMER_DEBUGRUN           */
#define _PROTIMER_CTRL_DEBUGRUN_MASK                     0x2UL                                         /**< Bit mask for PROTIMER_DEBUGRUN              */
#define _PROTIMER_CTRL_DEBUGRUN_DEFAULT                  0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_DEBUGRUN_X0                       0x00000000UL                                  /**< Mode X0 for PROTIMER_CTRL                   */
#define _PROTIMER_CTRL_DEBUGRUN_X1                       0x00000001UL                                  /**< Mode X1 for PROTIMER_CTRL                   */
#define PROTIMER_CTRL_DEBUGRUN_DEFAULT                   (_PROTIMER_CTRL_DEBUGRUN_DEFAULT << 1)        /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_DEBUGRUN_X0                        (_PROTIMER_CTRL_DEBUGRUN_X0 << 1)             /**< Shifted mode X0 for PROTIMER_CTRL           */
#define PROTIMER_CTRL_DEBUGRUN_X1                        (_PROTIMER_CTRL_DEBUGRUN_X1 << 1)             /**< Shifted mode X1 for PROTIMER_CTRL           */
#define PROTIMER_CTRL_DMACLRACT                          (0x1UL << 2)                                  /**< DMA Request Clear on Active                 */
#define _PROTIMER_CTRL_DMACLRACT_SHIFT                   2                                             /**< Shift value for PROTIMER_DMACLRACT          */
#define _PROTIMER_CTRL_DMACLRACT_MASK                    0x4UL                                         /**< Bit mask for PROTIMER_DMACLRACT             */
#define _PROTIMER_CTRL_DMACLRACT_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define PROTIMER_CTRL_DMACLRACT_DEFAULT                  (_PROTIMER_CTRL_DMACLRACT_DEFAULT << 2)       /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_OSMEN                              (0x1UL << 4)                                  /**< One-Shot Mode Enable                        */
#define _PROTIMER_CTRL_OSMEN_SHIFT                       4                                             /**< Shift value for PROTIMER_OSMEN              */
#define _PROTIMER_CTRL_OSMEN_MASK                        0x10UL                                        /**< Bit mask for PROTIMER_OSMEN                 */
#define _PROTIMER_CTRL_OSMEN_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_OSMEN_X0                          0x00000000UL                                  /**< Mode X0 for PROTIMER_CTRL                   */
#define _PROTIMER_CTRL_OSMEN_X1                          0x00000001UL                                  /**< Mode X1 for PROTIMER_CTRL                   */
#define PROTIMER_CTRL_OSMEN_DEFAULT                      (_PROTIMER_CTRL_OSMEN_DEFAULT << 4)           /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_OSMEN_X0                           (_PROTIMER_CTRL_OSMEN_X0 << 4)                /**< Shifted mode X0 for PROTIMER_CTRL           */
#define PROTIMER_CTRL_OSMEN_X1                           (_PROTIMER_CTRL_OSMEN_X1 << 4)                /**< Shifted mode X1 for PROTIMER_CTRL           */
#define PROTIMER_CTRL_ZEROSTARTEN                        (0x1UL << 5)                                  /**< Start from zero enable                      */
#define _PROTIMER_CTRL_ZEROSTARTEN_SHIFT                 5                                             /**< Shift value for PROTIMER_ZEROSTARTEN        */
#define _PROTIMER_CTRL_ZEROSTARTEN_MASK                  0x20UL                                        /**< Bit mask for PROTIMER_ZEROSTARTEN           */
#define _PROTIMER_CTRL_ZEROSTARTEN_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_ZEROSTARTEN_X0                    0x00000000UL                                  /**< Mode X0 for PROTIMER_CTRL                   */
#define _PROTIMER_CTRL_ZEROSTARTEN_X1                    0x00000001UL                                  /**< Mode X1 for PROTIMER_CTRL                   */
#define PROTIMER_CTRL_ZEROSTARTEN_DEFAULT                (_PROTIMER_CTRL_ZEROSTARTEN_DEFAULT << 5)     /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_ZEROSTARTEN_X0                     (_PROTIMER_CTRL_ZEROSTARTEN_X0 << 5)          /**< Shifted mode X0 for PROTIMER_CTRL           */
#define PROTIMER_CTRL_ZEROSTARTEN_X1                     (_PROTIMER_CTRL_ZEROSTARTEN_X1 << 5)          /**< Shifted mode X1 for PROTIMER_CTRL           */
#define _PROTIMER_CTRL_PRECNTSRC_SHIFT                   8                                             /**< Shift value for PROTIMER_PRECNTSRC          */
#define _PROTIMER_CTRL_PRECNTSRC_MASK                    0x300UL                                       /**< Bit mask for PROTIMER_PRECNTSRC             */
#define _PROTIMER_CTRL_PRECNTSRC_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_PRECNTSRC_DISABLED                0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_PRECNTSRC_CLOCK                   0x00000001UL                                  /**< Mode CLOCK for PROTIMER_CTRL                */
#define _PROTIMER_CTRL_PRECNTSRC_UNUSED0                 0x00000002UL                                  /**< Mode UNUSED0 for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_PRECNTSRC_UNUSED1                 0x00000003UL                                  /**< Mode UNUSED1 for PROTIMER_CTRL              */
#define PROTIMER_CTRL_PRECNTSRC_DEFAULT                  (_PROTIMER_CTRL_PRECNTSRC_DEFAULT << 8)       /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_PRECNTSRC_DISABLED                 (_PROTIMER_CTRL_PRECNTSRC_DISABLED << 8)      /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_PRECNTSRC_CLOCK                    (_PROTIMER_CTRL_PRECNTSRC_CLOCK << 8)         /**< Shifted mode CLOCK for PROTIMER_CTRL        */
#define PROTIMER_CTRL_PRECNTSRC_UNUSED0                  (_PROTIMER_CTRL_PRECNTSRC_UNUSED0 << 8)       /**< Shifted mode UNUSED0 for PROTIMER_CTRL      */
#define PROTIMER_CTRL_PRECNTSRC_UNUSED1                  (_PROTIMER_CTRL_PRECNTSRC_UNUSED1 << 8)       /**< Shifted mode UNUSED1 for PROTIMER_CTRL      */
#define _PROTIMER_CTRL_BASECNTSRC_SHIFT                  12                                            /**< Shift value for PROTIMER_BASECNTSRC         */
#define _PROTIMER_CTRL_BASECNTSRC_MASK                   0x3000UL                                      /**< Bit mask for PROTIMER_BASECNTSRC            */
#define _PROTIMER_CTRL_BASECNTSRC_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_BASECNTSRC_DISABLED               0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_BASECNTSRC_PRECNTOF               0x00000001UL                                  /**< Mode PRECNTOF for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_BASECNTSRC_UNUSED0                0x00000002UL                                  /**< Mode UNUSED0 for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_BASECNTSRC_UNUSED1                0x00000003UL                                  /**< Mode UNUSED1 for PROTIMER_CTRL              */
#define PROTIMER_CTRL_BASECNTSRC_DEFAULT                 (_PROTIMER_CTRL_BASECNTSRC_DEFAULT << 12)     /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_BASECNTSRC_DISABLED                (_PROTIMER_CTRL_BASECNTSRC_DISABLED << 12)    /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_BASECNTSRC_PRECNTOF                (_PROTIMER_CTRL_BASECNTSRC_PRECNTOF << 12)    /**< Shifted mode PRECNTOF for PROTIMER_CTRL     */
#define PROTIMER_CTRL_BASECNTSRC_UNUSED0                 (_PROTIMER_CTRL_BASECNTSRC_UNUSED0 << 12)     /**< Shifted mode UNUSED0 for PROTIMER_CTRL      */
#define PROTIMER_CTRL_BASECNTSRC_UNUSED1                 (_PROTIMER_CTRL_BASECNTSRC_UNUSED1 << 12)     /**< Shifted mode UNUSED1 for PROTIMER_CTRL      */
#define _PROTIMER_CTRL_WRAPCNTSRC_SHIFT                  16                                            /**< Shift value for PROTIMER_WRAPCNTSRC         */
#define _PROTIMER_CTRL_WRAPCNTSRC_MASK                   0x30000UL                                     /**< Bit mask for PROTIMER_WRAPCNTSRC            */
#define _PROTIMER_CTRL_WRAPCNTSRC_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_WRAPCNTSRC_DISABLED               0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_WRAPCNTSRC_PRECNTOF               0x00000001UL                                  /**< Mode PRECNTOF for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_WRAPCNTSRC_BASECNTOF              0x00000002UL                                  /**< Mode BASECNTOF for PROTIMER_CTRL            */
#define _PROTIMER_CTRL_WRAPCNTSRC_UNUSED                 0x00000003UL                                  /**< Mode UNUSED for PROTIMER_CTRL               */
#define PROTIMER_CTRL_WRAPCNTSRC_DEFAULT                 (_PROTIMER_CTRL_WRAPCNTSRC_DEFAULT << 16)     /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_WRAPCNTSRC_DISABLED                (_PROTIMER_CTRL_WRAPCNTSRC_DISABLED << 16)    /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_WRAPCNTSRC_PRECNTOF                (_PROTIMER_CTRL_WRAPCNTSRC_PRECNTOF << 16)    /**< Shifted mode PRECNTOF for PROTIMER_CTRL     */
#define PROTIMER_CTRL_WRAPCNTSRC_BASECNTOF               (_PROTIMER_CTRL_WRAPCNTSRC_BASECNTOF << 16)   /**< Shifted mode BASECNTOF for PROTIMER_CTRL    */
#define PROTIMER_CTRL_WRAPCNTSRC_UNUSED                  (_PROTIMER_CTRL_WRAPCNTSRC_UNUSED << 16)      /**< Shifted mode UNUSED for PROTIMER_CTRL       */
#define _PROTIMER_CTRL_TOUT0SRC_SHIFT                    20                                            /**< Shift value for PROTIMER_TOUT0SRC           */
#define _PROTIMER_CTRL_TOUT0SRC_MASK                     0x300000UL                                    /**< Bit mask for PROTIMER_TOUT0SRC              */
#define _PROTIMER_CTRL_TOUT0SRC_DEFAULT                  0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_TOUT0SRC_DISABLED                 0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT0SRC_PRECNTOF                 0x00000001UL                                  /**< Mode PRECNTOF for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT0SRC_BASECNTOF                0x00000002UL                                  /**< Mode BASECNTOF for PROTIMER_CTRL            */
#define _PROTIMER_CTRL_TOUT0SRC_WRAPCNTOF                0x00000003UL                                  /**< Mode WRAPCNTOF for PROTIMER_CTRL            */
#define PROTIMER_CTRL_TOUT0SRC_DEFAULT                   (_PROTIMER_CTRL_TOUT0SRC_DEFAULT << 20)       /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT0SRC_DISABLED                  (_PROTIMER_CTRL_TOUT0SRC_DISABLED << 20)      /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT0SRC_PRECNTOF                  (_PROTIMER_CTRL_TOUT0SRC_PRECNTOF << 20)      /**< Shifted mode PRECNTOF for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT0SRC_BASECNTOF                 (_PROTIMER_CTRL_TOUT0SRC_BASECNTOF << 20)     /**< Shifted mode BASECNTOF for PROTIMER_CTRL    */
#define PROTIMER_CTRL_TOUT0SRC_WRAPCNTOF                 (_PROTIMER_CTRL_TOUT0SRC_WRAPCNTOF << 20)     /**< Shifted mode WRAPCNTOF for PROTIMER_CTRL    */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_SHIFT                22                                            /**< Shift value for PROTIMER_TOUT0SYNCSRC       */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_MASK                 0xC00000UL                                    /**< Bit mask for PROTIMER_TOUT0SYNCSRC          */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_DISABLED             0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_PRECNTOF             0x00000001UL                                  /**< Mode PRECNTOF for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_BASECNTOF            0x00000002UL                                  /**< Mode BASECNTOF for PROTIMER_CTRL            */
#define _PROTIMER_CTRL_TOUT0SYNCSRC_WRAPCNTOF            0x00000003UL                                  /**< Mode WRAPCNTOF for PROTIMER_CTRL            */
#define PROTIMER_CTRL_TOUT0SYNCSRC_DEFAULT               (_PROTIMER_CTRL_TOUT0SYNCSRC_DEFAULT << 22)   /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT0SYNCSRC_DISABLED              (_PROTIMER_CTRL_TOUT0SYNCSRC_DISABLED << 22)  /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT0SYNCSRC_PRECNTOF              (_PROTIMER_CTRL_TOUT0SYNCSRC_PRECNTOF << 22)  /**< Shifted mode PRECNTOF for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT0SYNCSRC_BASECNTOF             (_PROTIMER_CTRL_TOUT0SYNCSRC_BASECNTOF << 22) /**< Shifted mode BASECNTOF for PROTIMER_CTRL    */
#define PROTIMER_CTRL_TOUT0SYNCSRC_WRAPCNTOF             (_PROTIMER_CTRL_TOUT0SYNCSRC_WRAPCNTOF << 22) /**< Shifted mode WRAPCNTOF for PROTIMER_CTRL    */
#define _PROTIMER_CTRL_TOUT1SRC_SHIFT                    24                                            /**< Shift value for PROTIMER_TOUT1SRC           */
#define _PROTIMER_CTRL_TOUT1SRC_MASK                     0x3000000UL                                   /**< Bit mask for PROTIMER_TOUT1SRC              */
#define _PROTIMER_CTRL_TOUT1SRC_DEFAULT                  0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_TOUT1SRC_DISABLED                 0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT1SRC_PRECNTOF                 0x00000001UL                                  /**< Mode PRECNTOF for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT1SRC_BASECNTOF                0x00000002UL                                  /**< Mode BASECNTOF for PROTIMER_CTRL            */
#define _PROTIMER_CTRL_TOUT1SRC_WRAPCNTOF                0x00000003UL                                  /**< Mode WRAPCNTOF for PROTIMER_CTRL            */
#define PROTIMER_CTRL_TOUT1SRC_DEFAULT                   (_PROTIMER_CTRL_TOUT1SRC_DEFAULT << 24)       /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT1SRC_DISABLED                  (_PROTIMER_CTRL_TOUT1SRC_DISABLED << 24)      /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT1SRC_PRECNTOF                  (_PROTIMER_CTRL_TOUT1SRC_PRECNTOF << 24)      /**< Shifted mode PRECNTOF for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT1SRC_BASECNTOF                 (_PROTIMER_CTRL_TOUT1SRC_BASECNTOF << 24)     /**< Shifted mode BASECNTOF for PROTIMER_CTRL    */
#define PROTIMER_CTRL_TOUT1SRC_WRAPCNTOF                 (_PROTIMER_CTRL_TOUT1SRC_WRAPCNTOF << 24)     /**< Shifted mode WRAPCNTOF for PROTIMER_CTRL    */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_SHIFT                26                                            /**< Shift value for PROTIMER_TOUT1SYNCSRC       */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_MASK                 0xC000000UL                                   /**< Bit mask for PROTIMER_TOUT1SYNCSRC          */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_DISABLED             0x00000000UL                                  /**< Mode DISABLED for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_PRECNTOF             0x00000001UL                                  /**< Mode PRECNTOF for PROTIMER_CTRL             */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_BASECNTOF            0x00000002UL                                  /**< Mode BASECNTOF for PROTIMER_CTRL            */
#define _PROTIMER_CTRL_TOUT1SYNCSRC_WRAPCNTOF            0x00000003UL                                  /**< Mode WRAPCNTOF for PROTIMER_CTRL            */
#define PROTIMER_CTRL_TOUT1SYNCSRC_DEFAULT               (_PROTIMER_CTRL_TOUT1SYNCSRC_DEFAULT << 26)   /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT1SYNCSRC_DISABLED              (_PROTIMER_CTRL_TOUT1SYNCSRC_DISABLED << 26)  /**< Shifted mode DISABLED for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT1SYNCSRC_PRECNTOF              (_PROTIMER_CTRL_TOUT1SYNCSRC_PRECNTOF << 26)  /**< Shifted mode PRECNTOF for PROTIMER_CTRL     */
#define PROTIMER_CTRL_TOUT1SYNCSRC_BASECNTOF             (_PROTIMER_CTRL_TOUT1SYNCSRC_BASECNTOF << 26) /**< Shifted mode BASECNTOF for PROTIMER_CTRL    */
#define PROTIMER_CTRL_TOUT1SYNCSRC_WRAPCNTOF             (_PROTIMER_CTRL_TOUT1SYNCSRC_WRAPCNTOF << 26) /**< Shifted mode WRAPCNTOF for PROTIMER_CTRL    */
#define PROTIMER_CTRL_TOUT0MODE                          (0x1UL << 28)                                 /**< Repeat Mode                                 */
#define _PROTIMER_CTRL_TOUT0MODE_SHIFT                   28                                            /**< Shift value for PROTIMER_TOUT0MODE          */
#define _PROTIMER_CTRL_TOUT0MODE_MASK                    0x10000000UL                                  /**< Bit mask for PROTIMER_TOUT0MODE             */
#define _PROTIMER_CTRL_TOUT0MODE_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_TOUT0MODE_FREE                    0x00000000UL                                  /**< Mode FREE for PROTIMER_CTRL                 */
#define _PROTIMER_CTRL_TOUT0MODE_ONESHOT                 0x00000001UL                                  /**< Mode ONESHOT for PROTIMER_CTRL              */
#define PROTIMER_CTRL_TOUT0MODE_DEFAULT                  (_PROTIMER_CTRL_TOUT0MODE_DEFAULT << 28)      /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT0MODE_FREE                     (_PROTIMER_CTRL_TOUT0MODE_FREE << 28)         /**< Shifted mode FREE for PROTIMER_CTRL         */
#define PROTIMER_CTRL_TOUT0MODE_ONESHOT                  (_PROTIMER_CTRL_TOUT0MODE_ONESHOT << 28)      /**< Shifted mode ONESHOT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT1MODE                          (0x1UL << 29)                                 /**< Repeat Mode                                 */
#define _PROTIMER_CTRL_TOUT1MODE_SHIFT                   29                                            /**< Shift value for PROTIMER_TOUT1MODE          */
#define _PROTIMER_CTRL_TOUT1MODE_MASK                    0x20000000UL                                  /**< Bit mask for PROTIMER_TOUT1MODE             */
#define _PROTIMER_CTRL_TOUT1MODE_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_CTRL              */
#define _PROTIMER_CTRL_TOUT1MODE_FREE                    0x00000000UL                                  /**< Mode FREE for PROTIMER_CTRL                 */
#define _PROTIMER_CTRL_TOUT1MODE_ONESHOT                 0x00000001UL                                  /**< Mode ONESHOT for PROTIMER_CTRL              */
#define PROTIMER_CTRL_TOUT1MODE_DEFAULT                  (_PROTIMER_CTRL_TOUT1MODE_DEFAULT << 29)      /**< Shifted mode DEFAULT for PROTIMER_CTRL      */
#define PROTIMER_CTRL_TOUT1MODE_FREE                     (_PROTIMER_CTRL_TOUT1MODE_FREE << 29)         /**< Shifted mode FREE for PROTIMER_CTRL         */
#define PROTIMER_CTRL_TOUT1MODE_ONESHOT                  (_PROTIMER_CTRL_TOUT1MODE_ONESHOT << 29)      /**< Shifted mode ONESHOT for PROTIMER_CTRL      */

/* Bit fields for PROTIMER CMD */
#define _PROTIMER_CMD_RESETVALUE                         0x00000000UL                              /**< Default value for PROTIMER_CMD              */
#define _PROTIMER_CMD_MASK                               0x000707F7UL                              /**< Mask for PROTIMER_CMD                       */
#define PROTIMER_CMD_START                               (0x1UL << 0)                              /**< Start PROTIMER                              */
#define _PROTIMER_CMD_START_SHIFT                        0                                         /**< Shift value for PROTIMER_START              */
#define _PROTIMER_CMD_START_MASK                         0x1UL                                     /**< Bit mask for PROTIMER_START                 */
#define _PROTIMER_CMD_START_DEFAULT                      0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_START_DEFAULT                       (_PROTIMER_CMD_START_DEFAULT << 0)        /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_RTCSYNCSTART                        (0x1UL << 1)                              /**< Start PROTIMER Synchronized with RTCC       */
#define _PROTIMER_CMD_RTCSYNCSTART_SHIFT                 1                                         /**< Shift value for PROTIMER_RTCSYNCSTART       */
#define _PROTIMER_CMD_RTCSYNCSTART_MASK                  0x2UL                                     /**< Bit mask for PROTIMER_RTCSYNCSTART          */
#define _PROTIMER_CMD_RTCSYNCSTART_DEFAULT               0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_RTCSYNCSTART_DEFAULT                (_PROTIMER_CMD_RTCSYNCSTART_DEFAULT << 1) /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_STOP                                (0x1UL << 2)                              /**< Stop PROTIMER                               */
#define _PROTIMER_CMD_STOP_SHIFT                         2                                         /**< Shift value for PROTIMER_STOP               */
#define _PROTIMER_CMD_STOP_MASK                          0x4UL                                     /**< Bit mask for PROTIMER_STOP                  */
#define _PROTIMER_CMD_STOP_DEFAULT                       0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_STOP_DEFAULT                        (_PROTIMER_CMD_STOP_DEFAULT << 2)         /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_TOUT0START                          (0x1UL << 4)                              /**< Start Timeout counter 0                     */
#define _PROTIMER_CMD_TOUT0START_SHIFT                   4                                         /**< Shift value for PROTIMER_TOUT0START         */
#define _PROTIMER_CMD_TOUT0START_MASK                    0x10UL                                    /**< Bit mask for PROTIMER_TOUT0START            */
#define _PROTIMER_CMD_TOUT0START_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_TOUT0START_DEFAULT                  (_PROTIMER_CMD_TOUT0START_DEFAULT << 4)   /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_TOUT0STOP                           (0x1UL << 5)                              /**< Stop Timeout counter 0                      */
#define _PROTIMER_CMD_TOUT0STOP_SHIFT                    5                                         /**< Shift value for PROTIMER_TOUT0STOP          */
#define _PROTIMER_CMD_TOUT0STOP_MASK                     0x20UL                                    /**< Bit mask for PROTIMER_TOUT0STOP             */
#define _PROTIMER_CMD_TOUT0STOP_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_TOUT0STOP_DEFAULT                   (_PROTIMER_CMD_TOUT0STOP_DEFAULT << 5)    /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_TOUT1START                          (0x1UL << 6)                              /**< Start Timeout counter 1                     */
#define _PROTIMER_CMD_TOUT1START_SHIFT                   6                                         /**< Shift value for PROTIMER_TOUT1START         */
#define _PROTIMER_CMD_TOUT1START_MASK                    0x40UL                                    /**< Bit mask for PROTIMER_TOUT1START            */
#define _PROTIMER_CMD_TOUT1START_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_TOUT1START_DEFAULT                  (_PROTIMER_CMD_TOUT1START_DEFAULT << 6)   /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_TOUT1STOP                           (0x1UL << 7)                              /**< Stop Timeout counter 0                      */
#define _PROTIMER_CMD_TOUT1STOP_SHIFT                    7                                         /**< Shift value for PROTIMER_TOUT1STOP          */
#define _PROTIMER_CMD_TOUT1STOP_MASK                     0x80UL                                    /**< Bit mask for PROTIMER_TOUT1STOP             */
#define _PROTIMER_CMD_TOUT1STOP_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_TOUT1STOP_DEFAULT                   (_PROTIMER_CMD_TOUT1STOP_DEFAULT << 7)    /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_FORCETXIDLE                         (0x1UL << 8)                              /**< Force to Idle state of tx_state             */
#define _PROTIMER_CMD_FORCETXIDLE_SHIFT                  8                                         /**< Shift value for PROTIMER_FORCETXIDLE        */
#define _PROTIMER_CMD_FORCETXIDLE_MASK                   0x100UL                                   /**< Bit mask for PROTIMER_FORCETXIDLE           */
#define _PROTIMER_CMD_FORCETXIDLE_DEFAULT                0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_FORCETXIDLE_DEFAULT                 (_PROTIMER_CMD_FORCETXIDLE_DEFAULT << 8)  /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_FORCERXIDLE                         (0x1UL << 9)                              /**< Force to Idle state of rx_state             */
#define _PROTIMER_CMD_FORCERXIDLE_SHIFT                  9                                         /**< Shift value for PROTIMER_FORCERXIDLE        */
#define _PROTIMER_CMD_FORCERXIDLE_MASK                   0x200UL                                   /**< Bit mask for PROTIMER_FORCERXIDLE           */
#define _PROTIMER_CMD_FORCERXIDLE_DEFAULT                0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_FORCERXIDLE_DEFAULT                 (_PROTIMER_CMD_FORCERXIDLE_DEFAULT << 9)  /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_FORCERXRX                           (0x1UL << 10)                             /**< Force to Rx state of rx_state               */
#define _PROTIMER_CMD_FORCERXRX_SHIFT                    10                                        /**< Shift value for PROTIMER_FORCERXRX          */
#define _PROTIMER_CMD_FORCERXRX_MASK                     0x400UL                                   /**< Bit mask for PROTIMER_FORCERXRX             */
#define _PROTIMER_CMD_FORCERXRX_DEFAULT                  0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_FORCERXRX_DEFAULT                   (_PROTIMER_CMD_FORCERXRX_DEFAULT << 10)   /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_LBTSTART                            (0x1UL << 16)                             /**< LBT sequence start                          */
#define _PROTIMER_CMD_LBTSTART_SHIFT                     16                                        /**< Shift value for PROTIMER_LBTSTART           */
#define _PROTIMER_CMD_LBTSTART_MASK                      0x10000UL                                 /**< Bit mask for PROTIMER_LBTSTART              */
#define _PROTIMER_CMD_LBTSTART_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_LBTSTART_DEFAULT                    (_PROTIMER_CMD_LBTSTART_DEFAULT << 16)    /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_LBTPAUSE                            (0x1UL << 17)                             /**< Pause LBT sequence                          */
#define _PROTIMER_CMD_LBTPAUSE_SHIFT                     17                                        /**< Shift value for PROTIMER_LBTPAUSE           */
#define _PROTIMER_CMD_LBTPAUSE_MASK                      0x20000UL                                 /**< Bit mask for PROTIMER_LBTPAUSE              */
#define _PROTIMER_CMD_LBTPAUSE_DEFAULT                   0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_LBTPAUSE_DEFAULT                    (_PROTIMER_CMD_LBTPAUSE_DEFAULT << 17)    /**< Shifted mode DEFAULT for PROTIMER_CMD       */
#define PROTIMER_CMD_LBTSTOP                             (0x1UL << 18)                             /**< LBT sequence stop                           */
#define _PROTIMER_CMD_LBTSTOP_SHIFT                      18                                        /**< Shift value for PROTIMER_LBTSTOP            */
#define _PROTIMER_CMD_LBTSTOP_MASK                       0x40000UL                                 /**< Bit mask for PROTIMER_LBTSTOP               */
#define _PROTIMER_CMD_LBTSTOP_DEFAULT                    0x00000000UL                              /**< Mode DEFAULT for PROTIMER_CMD               */
#define PROTIMER_CMD_LBTSTOP_DEFAULT                     (_PROTIMER_CMD_LBTSTOP_DEFAULT << 18)     /**< Shifted mode DEFAULT for PROTIMER_CMD       */

/* Bit fields for PROTIMER PRSCTRL */
#define _PROTIMER_PRSCTRL_RESETVALUE                     0x00000000UL                                       /**< Default value for PROTIMER_PRSCTRL          */
#define _PROTIMER_PRSCTRL_MASK                           0x000E0E0EUL                                       /**< Mask for PROTIMER_PRSCTRL                   */
#define PROTIMER_PRSCTRL_STARTPRSEN                      (0x1UL << 1)                                       /**< Enable Protimer start commands from PRS.    */
#define _PROTIMER_PRSCTRL_STARTPRSEN_SHIFT               1                                                  /**< Shift value for PROTIMER_STARTPRSEN         */
#define _PROTIMER_PRSCTRL_STARTPRSEN_MASK                0x2UL                                              /**< Bit mask for PROTIMER_STARTPRSEN            */
#define _PROTIMER_PRSCTRL_STARTPRSEN_DEFAULT             0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRSCTRL           */
#define PROTIMER_PRSCTRL_STARTPRSEN_DEFAULT              (_PROTIMER_PRSCTRL_STARTPRSEN_DEFAULT << 1)        /**< Shifted mode DEFAULT for PROTIMER_PRSCTRL   */
#define _PROTIMER_PRSCTRL_STARTEDGE_SHIFT                2                                                  /**< Shift value for PROTIMER_STARTEDGE          */
#define _PROTIMER_PRSCTRL_STARTEDGE_MASK                 0xCUL                                              /**< Bit mask for PROTIMER_STARTEDGE             */
#define _PROTIMER_PRSCTRL_STARTEDGE_DEFAULT              0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRSCTRL           */
#define _PROTIMER_PRSCTRL_STARTEDGE_RISING               0x00000000UL                                       /**< Mode RISING for PROTIMER_PRSCTRL            */
#define _PROTIMER_PRSCTRL_STARTEDGE_FALLING              0x00000001UL                                       /**< Mode FALLING for PROTIMER_PRSCTRL           */
#define _PROTIMER_PRSCTRL_STARTEDGE_BOTH                 0x00000002UL                                       /**< Mode BOTH for PROTIMER_PRSCTRL              */
#define _PROTIMER_PRSCTRL_STARTEDGE_DISABLED             0x00000003UL                                       /**< Mode DISABLED for PROTIMER_PRSCTRL          */
#define PROTIMER_PRSCTRL_STARTEDGE_DEFAULT               (_PROTIMER_PRSCTRL_STARTEDGE_DEFAULT << 2)         /**< Shifted mode DEFAULT for PROTIMER_PRSCTRL   */
#define PROTIMER_PRSCTRL_STARTEDGE_RISING                (_PROTIMER_PRSCTRL_STARTEDGE_RISING << 2)          /**< Shifted mode RISING for PROTIMER_PRSCTRL    */
#define PROTIMER_PRSCTRL_STARTEDGE_FALLING               (_PROTIMER_PRSCTRL_STARTEDGE_FALLING << 2)         /**< Shifted mode FALLING for PROTIMER_PRSCTRL   */
#define PROTIMER_PRSCTRL_STARTEDGE_BOTH                  (_PROTIMER_PRSCTRL_STARTEDGE_BOTH << 2)            /**< Shifted mode BOTH for PROTIMER_PRSCTRL      */
#define PROTIMER_PRSCTRL_STARTEDGE_DISABLED              (_PROTIMER_PRSCTRL_STARTEDGE_DISABLED << 2)        /**< Shifted mode DISABLED for PROTIMER_PRSCTRL  */
#define PROTIMER_PRSCTRL_STOPPRSEN                       (0x1UL << 9)                                       /**< Enable Protimer stop commands from PRS.     */
#define _PROTIMER_PRSCTRL_STOPPRSEN_SHIFT                9                                                  /**< Shift value for PROTIMER_STOPPRSEN          */
#define _PROTIMER_PRSCTRL_STOPPRSEN_MASK                 0x200UL                                            /**< Bit mask for PROTIMER_STOPPRSEN             */
#define _PROTIMER_PRSCTRL_STOPPRSEN_DEFAULT              0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRSCTRL           */
#define PROTIMER_PRSCTRL_STOPPRSEN_DEFAULT               (_PROTIMER_PRSCTRL_STOPPRSEN_DEFAULT << 9)         /**< Shifted mode DEFAULT for PROTIMER_PRSCTRL   */
#define _PROTIMER_PRSCTRL_STOPEDGE_SHIFT                 10                                                 /**< Shift value for PROTIMER_STOPEDGE           */
#define _PROTIMER_PRSCTRL_STOPEDGE_MASK                  0xC00UL                                            /**< Bit mask for PROTIMER_STOPEDGE              */
#define _PROTIMER_PRSCTRL_STOPEDGE_DEFAULT               0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRSCTRL           */
#define _PROTIMER_PRSCTRL_STOPEDGE_RISING                0x00000000UL                                       /**< Mode RISING for PROTIMER_PRSCTRL            */
#define _PROTIMER_PRSCTRL_STOPEDGE_FALLING               0x00000001UL                                       /**< Mode FALLING for PROTIMER_PRSCTRL           */
#define _PROTIMER_PRSCTRL_STOPEDGE_BOTH                  0x00000002UL                                       /**< Mode BOTH for PROTIMER_PRSCTRL              */
#define _PROTIMER_PRSCTRL_STOPEDGE_DISABLED              0x00000003UL                                       /**< Mode DISABLED for PROTIMER_PRSCTRL          */
#define PROTIMER_PRSCTRL_STOPEDGE_DEFAULT                (_PROTIMER_PRSCTRL_STOPEDGE_DEFAULT << 10)         /**< Shifted mode DEFAULT for PROTIMER_PRSCTRL   */
#define PROTIMER_PRSCTRL_STOPEDGE_RISING                 (_PROTIMER_PRSCTRL_STOPEDGE_RISING << 10)          /**< Shifted mode RISING for PROTIMER_PRSCTRL    */
#define PROTIMER_PRSCTRL_STOPEDGE_FALLING                (_PROTIMER_PRSCTRL_STOPEDGE_FALLING << 10)         /**< Shifted mode FALLING for PROTIMER_PRSCTRL   */
#define PROTIMER_PRSCTRL_STOPEDGE_BOTH                   (_PROTIMER_PRSCTRL_STOPEDGE_BOTH << 10)            /**< Shifted mode BOTH for PROTIMER_PRSCTRL      */
#define PROTIMER_PRSCTRL_STOPEDGE_DISABLED               (_PROTIMER_PRSCTRL_STOPEDGE_DISABLED << 10)        /**< Shifted mode DISABLED for PROTIMER_PRSCTRL  */
#define PROTIMER_PRSCTRL_RTCCTRIGGERPRSEN                (0x1UL << 17)                                      /**< Enable RTCC Trigger from PRS.               */
#define _PROTIMER_PRSCTRL_RTCCTRIGGERPRSEN_SHIFT         17                                                 /**< Shift value for PROTIMER_RTCCTRIGGERPRSEN   */
#define _PROTIMER_PRSCTRL_RTCCTRIGGERPRSEN_MASK          0x20000UL                                          /**< Bit mask for PROTIMER_RTCCTRIGGERPRSEN      */
#define _PROTIMER_PRSCTRL_RTCCTRIGGERPRSEN_DEFAULT       0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRSCTRL           */
#define PROTIMER_PRSCTRL_RTCCTRIGGERPRSEN_DEFAULT        (_PROTIMER_PRSCTRL_RTCCTRIGGERPRSEN_DEFAULT << 17) /**< Shifted mode DEFAULT for PROTIMER_PRSCTRL   */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_SHIFT          18                                                 /**< Shift value for PROTIMER_RTCCTRIGGEREDGE    */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_MASK           0xC0000UL                                          /**< Bit mask for PROTIMER_RTCCTRIGGEREDGE       */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_DEFAULT        0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRSCTRL           */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_RISING         0x00000000UL                                       /**< Mode RISING for PROTIMER_PRSCTRL            */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_FALLING        0x00000001UL                                       /**< Mode FALLING for PROTIMER_PRSCTRL           */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_BOTH           0x00000002UL                                       /**< Mode BOTH for PROTIMER_PRSCTRL              */
#define _PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_DISABLED       0x00000003UL                                       /**< Mode DISABLED for PROTIMER_PRSCTRL          */
#define PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_DEFAULT         (_PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_DEFAULT << 18)  /**< Shifted mode DEFAULT for PROTIMER_PRSCTRL   */
#define PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_RISING          (_PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_RISING << 18)   /**< Shifted mode RISING for PROTIMER_PRSCTRL    */
#define PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_FALLING         (_PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_FALLING << 18)  /**< Shifted mode FALLING for PROTIMER_PRSCTRL   */
#define PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_BOTH            (_PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_BOTH << 18)     /**< Shifted mode BOTH for PROTIMER_PRSCTRL      */
#define PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_DISABLED        (_PROTIMER_PRSCTRL_RTCCTRIGGEREDGE_DISABLED << 18) /**< Shifted mode DISABLED for PROTIMER_PRSCTRL  */

/* Bit fields for PROTIMER STATUS */
#define _PROTIMER_STATUS_RESETVALUE                      0x00000000UL                                 /**< Default value for PROTIMER_STATUS           */
#define _PROTIMER_STATUS_MASK                            0x0000FFFFUL                                 /**< Mask for PROTIMER_STATUS                    */
#define PROTIMER_STATUS_RUNNING                          (0x1UL << 0)                                 /**< Running                                     */
#define _PROTIMER_STATUS_RUNNING_SHIFT                   0                                            /**< Shift value for PROTIMER_RUNNING            */
#define _PROTIMER_STATUS_RUNNING_MASK                    0x1UL                                        /**< Bit mask for PROTIMER_RUNNING               */
#define _PROTIMER_STATUS_RUNNING_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_RUNNING_DEFAULT                  (_PROTIMER_STATUS_RUNNING_DEFAULT << 0)      /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_LBTSYNC                          (0x1UL << 1)                                 /**< LBT Synchronizing                           */
#define _PROTIMER_STATUS_LBTSYNC_SHIFT                   1                                            /**< Shift value for PROTIMER_LBTSYNC            */
#define _PROTIMER_STATUS_LBTSYNC_MASK                    0x2UL                                        /**< Bit mask for PROTIMER_LBTSYNC               */
#define _PROTIMER_STATUS_LBTSYNC_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_LBTSYNC_DEFAULT                  (_PROTIMER_STATUS_LBTSYNC_DEFAULT << 1)      /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_LBTRUNNING                       (0x1UL << 2)                                 /**< LBT Running                                 */
#define _PROTIMER_STATUS_LBTRUNNING_SHIFT                2                                            /**< Shift value for PROTIMER_LBTRUNNING         */
#define _PROTIMER_STATUS_LBTRUNNING_MASK                 0x4UL                                        /**< Bit mask for PROTIMER_LBTRUNNING            */
#define _PROTIMER_STATUS_LBTRUNNING_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_LBTRUNNING_DEFAULT               (_PROTIMER_STATUS_LBTRUNNING_DEFAULT << 2)   /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_LBTPAUSED                        (0x1UL << 3)                                 /**< LBT has been paused.                        */
#define _PROTIMER_STATUS_LBTPAUSED_SHIFT                 3                                            /**< Shift value for PROTIMER_LBTPAUSED          */
#define _PROTIMER_STATUS_LBTPAUSED_MASK                  0x8UL                                        /**< Bit mask for PROTIMER_LBTPAUSED             */
#define _PROTIMER_STATUS_LBTPAUSED_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_LBTPAUSED_DEFAULT                (_PROTIMER_STATUS_LBTPAUSED_DEFAULT << 3)    /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_TOUT0RUNNING                     (0x1UL << 4)                                 /**< Timeout Counter 0 Running                   */
#define _PROTIMER_STATUS_TOUT0RUNNING_SHIFT              4                                            /**< Shift value for PROTIMER_TOUT0RUNNING       */
#define _PROTIMER_STATUS_TOUT0RUNNING_MASK               0x10UL                                       /**< Bit mask for PROTIMER_TOUT0RUNNING          */
#define _PROTIMER_STATUS_TOUT0RUNNING_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_TOUT0RUNNING_DEFAULT             (_PROTIMER_STATUS_TOUT0RUNNING_DEFAULT << 4) /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_TOUT0SYNC                        (0x1UL << 5)                                 /**< Timeout Counter 0 Synchronizing             */
#define _PROTIMER_STATUS_TOUT0SYNC_SHIFT                 5                                            /**< Shift value for PROTIMER_TOUT0SYNC          */
#define _PROTIMER_STATUS_TOUT0SYNC_MASK                  0x20UL                                       /**< Bit mask for PROTIMER_TOUT0SYNC             */
#define _PROTIMER_STATUS_TOUT0SYNC_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_TOUT0SYNC_DEFAULT                (_PROTIMER_STATUS_TOUT0SYNC_DEFAULT << 5)    /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_TOUT1RUNNING                     (0x1UL << 6)                                 /**< Timeout Counter 1 Running                   */
#define _PROTIMER_STATUS_TOUT1RUNNING_SHIFT              6                                            /**< Shift value for PROTIMER_TOUT1RUNNING       */
#define _PROTIMER_STATUS_TOUT1RUNNING_MASK               0x40UL                                       /**< Bit mask for PROTIMER_TOUT1RUNNING          */
#define _PROTIMER_STATUS_TOUT1RUNNING_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_TOUT1RUNNING_DEFAULT             (_PROTIMER_STATUS_TOUT1RUNNING_DEFAULT << 6) /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_TOUT1SYNC                        (0x1UL << 7)                                 /**< Timeout Counter 1 Synchronizing             */
#define _PROTIMER_STATUS_TOUT1SYNC_SHIFT                 7                                            /**< Shift value for PROTIMER_TOUT1SYNC          */
#define _PROTIMER_STATUS_TOUT1SYNC_MASK                  0x80UL                                       /**< Bit mask for PROTIMER_TOUT1SYNC             */
#define _PROTIMER_STATUS_TOUT1SYNC_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_TOUT1SYNC_DEFAULT                (_PROTIMER_STATUS_TOUT1SYNC_DEFAULT << 7)    /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV0                             (0x1UL << 8)                                 /**< CC0 Capture Valid                           */
#define _PROTIMER_STATUS_ICV0_SHIFT                      8                                            /**< Shift value for PROTIMER_ICV0               */
#define _PROTIMER_STATUS_ICV0_MASK                       0x100UL                                      /**< Bit mask for PROTIMER_ICV0                  */
#define _PROTIMER_STATUS_ICV0_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define _PROTIMER_STATUS_ICV0_X0                         0x00000000UL                                 /**< Mode X0 for PROTIMER_STATUS                 */
#define _PROTIMER_STATUS_ICV0_X1                         0x00000001UL                                 /**< Mode X1 for PROTIMER_STATUS                 */
#define PROTIMER_STATUS_ICV0_DEFAULT                     (_PROTIMER_STATUS_ICV0_DEFAULT << 8)         /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV0_X0                          (_PROTIMER_STATUS_ICV0_X0 << 8)              /**< Shifted mode X0 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV0_X1                          (_PROTIMER_STATUS_ICV0_X1 << 8)              /**< Shifted mode X1 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV1                             (0x1UL << 9)                                 /**< CC1 Capture Valid                           */
#define _PROTIMER_STATUS_ICV1_SHIFT                      9                                            /**< Shift value for PROTIMER_ICV1               */
#define _PROTIMER_STATUS_ICV1_MASK                       0x200UL                                      /**< Bit mask for PROTIMER_ICV1                  */
#define _PROTIMER_STATUS_ICV1_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define _PROTIMER_STATUS_ICV1_X0                         0x00000000UL                                 /**< Mode X0 for PROTIMER_STATUS                 */
#define _PROTIMER_STATUS_ICV1_X1                         0x00000001UL                                 /**< Mode X1 for PROTIMER_STATUS                 */
#define PROTIMER_STATUS_ICV1_DEFAULT                     (_PROTIMER_STATUS_ICV1_DEFAULT << 9)         /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV1_X0                          (_PROTIMER_STATUS_ICV1_X0 << 9)              /**< Shifted mode X0 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV1_X1                          (_PROTIMER_STATUS_ICV1_X1 << 9)              /**< Shifted mode X1 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV2                             (0x1UL << 10)                                /**< CC2 Capture Valid                           */
#define _PROTIMER_STATUS_ICV2_SHIFT                      10                                           /**< Shift value for PROTIMER_ICV2               */
#define _PROTIMER_STATUS_ICV2_MASK                       0x400UL                                      /**< Bit mask for PROTIMER_ICV2                  */
#define _PROTIMER_STATUS_ICV2_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define _PROTIMER_STATUS_ICV2_X0                         0x00000000UL                                 /**< Mode X0 for PROTIMER_STATUS                 */
#define _PROTIMER_STATUS_ICV2_X1                         0x00000001UL                                 /**< Mode X1 for PROTIMER_STATUS                 */
#define PROTIMER_STATUS_ICV2_DEFAULT                     (_PROTIMER_STATUS_ICV2_DEFAULT << 10)        /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV2_X0                          (_PROTIMER_STATUS_ICV2_X0 << 10)             /**< Shifted mode X0 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV2_X1                          (_PROTIMER_STATUS_ICV2_X1 << 10)             /**< Shifted mode X1 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV3                             (0x1UL << 11)                                /**< CC3 Capture Valid                           */
#define _PROTIMER_STATUS_ICV3_SHIFT                      11                                           /**< Shift value for PROTIMER_ICV3               */
#define _PROTIMER_STATUS_ICV3_MASK                       0x800UL                                      /**< Bit mask for PROTIMER_ICV3                  */
#define _PROTIMER_STATUS_ICV3_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define _PROTIMER_STATUS_ICV3_X0                         0x00000000UL                                 /**< Mode X0 for PROTIMER_STATUS                 */
#define _PROTIMER_STATUS_ICV3_X1                         0x00000001UL                                 /**< Mode X1 for PROTIMER_STATUS                 */
#define PROTIMER_STATUS_ICV3_DEFAULT                     (_PROTIMER_STATUS_ICV3_DEFAULT << 11)        /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV3_X0                          (_PROTIMER_STATUS_ICV3_X0 << 11)             /**< Shifted mode X0 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV3_X1                          (_PROTIMER_STATUS_ICV3_X1 << 11)             /**< Shifted mode X1 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV4                             (0x1UL << 12)                                /**< CC4 Capture Valid                           */
#define _PROTIMER_STATUS_ICV4_SHIFT                      12                                           /**< Shift value for PROTIMER_ICV4               */
#define _PROTIMER_STATUS_ICV4_MASK                       0x1000UL                                     /**< Bit mask for PROTIMER_ICV4                  */
#define _PROTIMER_STATUS_ICV4_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define _PROTIMER_STATUS_ICV4_X0                         0x00000000UL                                 /**< Mode X0 for PROTIMER_STATUS                 */
#define _PROTIMER_STATUS_ICV4_X1                         0x00000001UL                                 /**< Mode X1 for PROTIMER_STATUS                 */
#define PROTIMER_STATUS_ICV4_DEFAULT                     (_PROTIMER_STATUS_ICV4_DEFAULT << 12)        /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV4_X0                          (_PROTIMER_STATUS_ICV4_X0 << 12)             /**< Shifted mode X0 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV4_X1                          (_PROTIMER_STATUS_ICV4_X1 << 12)             /**< Shifted mode X1 for PROTIMER_STATUS         */
#define PROTIMER_STATUS_ICV5                             (0x1UL << 13)                                /**< CC5 Capture Valid                           */
#define _PROTIMER_STATUS_ICV5_SHIFT                      13                                           /**< Shift value for PROTIMER_ICV5               */
#define _PROTIMER_STATUS_ICV5_MASK                       0x2000UL                                     /**< Bit mask for PROTIMER_ICV5                  */
#define _PROTIMER_STATUS_ICV5_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_ICV5_DEFAULT                     (_PROTIMER_STATUS_ICV5_DEFAULT << 13)        /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV6                             (0x1UL << 14)                                /**< CC6 Capture Valid                           */
#define _PROTIMER_STATUS_ICV6_SHIFT                      14                                           /**< Shift value for PROTIMER_ICV6               */
#define _PROTIMER_STATUS_ICV6_MASK                       0x4000UL                                     /**< Bit mask for PROTIMER_ICV6                  */
#define _PROTIMER_STATUS_ICV6_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_ICV6_DEFAULT                     (_PROTIMER_STATUS_ICV6_DEFAULT << 14)        /**< Shifted mode DEFAULT for PROTIMER_STATUS    */
#define PROTIMER_STATUS_ICV7                             (0x1UL << 15)                                /**< CC7 Capture Valid                           */
#define _PROTIMER_STATUS_ICV7_SHIFT                      15                                           /**< Shift value for PROTIMER_ICV7               */
#define _PROTIMER_STATUS_ICV7_MASK                       0x8000UL                                     /**< Bit mask for PROTIMER_ICV7                  */
#define _PROTIMER_STATUS_ICV7_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_STATUS            */
#define PROTIMER_STATUS_ICV7_DEFAULT                     (_PROTIMER_STATUS_ICV7_DEFAULT << 15)        /**< Shifted mode DEFAULT for PROTIMER_STATUS    */

/* Bit fields for PROTIMER PRECNT */
#define _PROTIMER_PRECNT_RESETVALUE                      0x00000000UL                           /**< Default value for PROTIMER_PRECNT           */
#define _PROTIMER_PRECNT_MASK                            0x0000FFFFUL                           /**< Mask for PROTIMER_PRECNT                    */
#define _PROTIMER_PRECNT_PRECNT_SHIFT                    0                                      /**< Shift value for PROTIMER_PRECNT             */
#define _PROTIMER_PRECNT_PRECNT_MASK                     0xFFFFUL                               /**< Bit mask for PROTIMER_PRECNT                */
#define _PROTIMER_PRECNT_PRECNT_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for PROTIMER_PRECNT            */
#define PROTIMER_PRECNT_PRECNT_DEFAULT                   (_PROTIMER_PRECNT_PRECNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_PRECNT    */

/* Bit fields for PROTIMER BASECNT */
#define _PROTIMER_BASECNT_RESETVALUE                     0x00000000UL                             /**< Default value for PROTIMER_BASECNT          */
#define _PROTIMER_BASECNT_MASK                           0x0000FFFFUL                             /**< Mask for PROTIMER_BASECNT                   */
#define _PROTIMER_BASECNT_BASECNT_SHIFT                  0                                        /**< Shift value for PROTIMER_BASECNT            */
#define _PROTIMER_BASECNT_BASECNT_MASK                   0xFFFFUL                                 /**< Bit mask for PROTIMER_BASECNT               */
#define _PROTIMER_BASECNT_BASECNT_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for PROTIMER_BASECNT           */
#define PROTIMER_BASECNT_BASECNT_DEFAULT                 (_PROTIMER_BASECNT_BASECNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_BASECNT   */

/* Bit fields for PROTIMER WRAPCNT */
#define _PROTIMER_WRAPCNT_RESETVALUE                     0x00000000UL                             /**< Default value for PROTIMER_WRAPCNT          */
#define _PROTIMER_WRAPCNT_MASK                           0xFFFFFFFFUL                             /**< Mask for PROTIMER_WRAPCNT                   */
#define _PROTIMER_WRAPCNT_WRAPCNT_SHIFT                  0                                        /**< Shift value for PROTIMER_WRAPCNT            */
#define _PROTIMER_WRAPCNT_WRAPCNT_MASK                   0xFFFFFFFFUL                             /**< Bit mask for PROTIMER_WRAPCNT               */
#define _PROTIMER_WRAPCNT_WRAPCNT_DEFAULT                0x00000000UL                             /**< Mode DEFAULT for PROTIMER_WRAPCNT           */
#define PROTIMER_WRAPCNT_WRAPCNT_DEFAULT                 (_PROTIMER_WRAPCNT_WRAPCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_WRAPCNT   */

/* Bit fields for PROTIMER BASEPRE */
#define _PROTIMER_BASEPRE_RESETVALUE                     0x00000000UL                               /**< Default value for PROTIMER_BASEPRE          */
#define _PROTIMER_BASEPRE_MASK                           0xFFFFFFFFUL                               /**< Mask for PROTIMER_BASEPRE                   */
#define _PROTIMER_BASEPRE_PRECNTV_SHIFT                  0                                          /**< Shift value for PROTIMER_PRECNTV            */
#define _PROTIMER_BASEPRE_PRECNTV_MASK                   0xFFFFUL                                   /**< Bit mask for PROTIMER_PRECNTV               */
#define _PROTIMER_BASEPRE_PRECNTV_DEFAULT                0x00000000UL                               /**< Mode DEFAULT for PROTIMER_BASEPRE           */
#define PROTIMER_BASEPRE_PRECNTV_DEFAULT                 (_PROTIMER_BASEPRE_PRECNTV_DEFAULT << 0)   /**< Shifted mode DEFAULT for PROTIMER_BASEPRE   */
#define _PROTIMER_BASEPRE_BASECNTV_SHIFT                 16                                         /**< Shift value for PROTIMER_BASECNTV           */
#define _PROTIMER_BASEPRE_BASECNTV_MASK                  0xFFFF0000UL                               /**< Bit mask for PROTIMER_BASECNTV              */
#define _PROTIMER_BASEPRE_BASECNTV_DEFAULT               0x00000000UL                               /**< Mode DEFAULT for PROTIMER_BASEPRE           */
#define PROTIMER_BASEPRE_BASECNTV_DEFAULT                (_PROTIMER_BASEPRE_BASECNTV_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_BASEPRE   */

/* Bit fields for PROTIMER LWRAPCNT */
#define _PROTIMER_LWRAPCNT_RESETVALUE                    0x00000000UL                               /**< Default value for PROTIMER_LWRAPCNT         */
#define _PROTIMER_LWRAPCNT_MASK                          0xFFFFFFFFUL                               /**< Mask for PROTIMER_LWRAPCNT                  */
#define _PROTIMER_LWRAPCNT_LWRAPCNT_SHIFT                0                                          /**< Shift value for PROTIMER_LWRAPCNT           */
#define _PROTIMER_LWRAPCNT_LWRAPCNT_MASK                 0xFFFFFFFFUL                               /**< Bit mask for PROTIMER_LWRAPCNT              */
#define _PROTIMER_LWRAPCNT_LWRAPCNT_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for PROTIMER_LWRAPCNT          */
#define PROTIMER_LWRAPCNT_LWRAPCNT_DEFAULT               (_PROTIMER_LWRAPCNT_LWRAPCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_LWRAPCNT  */

/* Bit fields for PROTIMER PRECNTTOPADJ */
#define _PROTIMER_PRECNTTOPADJ_RESETVALUE                0x00000000UL                                       /**< Default value for PROTIMER_PRECNTTOPADJ     */
#define _PROTIMER_PRECNTTOPADJ_MASK                      0x0000FFFFUL                                       /**< Mask for PROTIMER_PRECNTTOPADJ              */
#define _PROTIMER_PRECNTTOPADJ_PRECNTTOPADJ_SHIFT        0                                                  /**< Shift value for PROTIMER_PRECNTTOPADJ       */
#define _PROTIMER_PRECNTTOPADJ_PRECNTTOPADJ_MASK         0xFFFFUL                                           /**< Bit mask for PROTIMER_PRECNTTOPADJ          */
#define _PROTIMER_PRECNTTOPADJ_PRECNTTOPADJ_DEFAULT      0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_PRECNTTOPADJ      */
#define PROTIMER_PRECNTTOPADJ_PRECNTTOPADJ_DEFAULT       (_PROTIMER_PRECNTTOPADJ_PRECNTTOPADJ_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_PRECNTTOPADJ*/

/* Bit fields for PROTIMER PRECNTTOP */
#define _PROTIMER_PRECNTTOP_RESETVALUE                   0x00FFFF00UL                                     /**< Default value for PROTIMER_PRECNTTOP        */
#define _PROTIMER_PRECNTTOP_MASK                         0x00FFFFFFUL                                     /**< Mask for PROTIMER_PRECNTTOP                 */
#define _PROTIMER_PRECNTTOP_PRECNTTOPFRAC_SHIFT          0                                                /**< Shift value for PROTIMER_PRECNTTOPFRAC      */
#define _PROTIMER_PRECNTTOP_PRECNTTOPFRAC_MASK           0xFFUL                                           /**< Bit mask for PROTIMER_PRECNTTOPFRAC         */
#define _PROTIMER_PRECNTTOP_PRECNTTOPFRAC_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for PROTIMER_PRECNTTOP         */
#define PROTIMER_PRECNTTOP_PRECNTTOPFRAC_DEFAULT         (_PROTIMER_PRECNTTOP_PRECNTTOPFRAC_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_PRECNTTOP */
#define _PROTIMER_PRECNTTOP_PRECNTTOP_SHIFT              8                                                /**< Shift value for PROTIMER_PRECNTTOP          */
#define _PROTIMER_PRECNTTOP_PRECNTTOP_MASK               0xFFFF00UL                                       /**< Bit mask for PROTIMER_PRECNTTOP             */
#define _PROTIMER_PRECNTTOP_PRECNTTOP_DEFAULT            0x0000FFFFUL                                     /**< Mode DEFAULT for PROTIMER_PRECNTTOP         */
#define PROTIMER_PRECNTTOP_PRECNTTOP_DEFAULT             (_PROTIMER_PRECNTTOP_PRECNTTOP_DEFAULT << 8)     /**< Shifted mode DEFAULT for PROTIMER_PRECNTTOP */

/* Bit fields for PROTIMER BASECNTTOP */
#define _PROTIMER_BASECNTTOP_RESETVALUE                  0x0000FFFFUL                                   /**< Default value for PROTIMER_BASECNTTOP       */
#define _PROTIMER_BASECNTTOP_MASK                        0x0000FFFFUL                                   /**< Mask for PROTIMER_BASECNTTOP                */
#define _PROTIMER_BASECNTTOP_BASECNTTOP_SHIFT            0                                              /**< Shift value for PROTIMER_BASECNTTOP         */
#define _PROTIMER_BASECNTTOP_BASECNTTOP_MASK             0xFFFFUL                                       /**< Bit mask for PROTIMER_BASECNTTOP            */
#define _PROTIMER_BASECNTTOP_BASECNTTOP_DEFAULT          0x0000FFFFUL                                   /**< Mode DEFAULT for PROTIMER_BASECNTTOP        */
#define PROTIMER_BASECNTTOP_BASECNTTOP_DEFAULT           (_PROTIMER_BASECNTTOP_BASECNTTOP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_BASECNTTOP*/

/* Bit fields for PROTIMER WRAPCNTTOP */
#define _PROTIMER_WRAPCNTTOP_RESETVALUE                  0xFFFFFFFFUL                                   /**< Default value for PROTIMER_WRAPCNTTOP       */
#define _PROTIMER_WRAPCNTTOP_MASK                        0xFFFFFFFFUL                                   /**< Mask for PROTIMER_WRAPCNTTOP                */
#define _PROTIMER_WRAPCNTTOP_WRAPCNTTOP_SHIFT            0                                              /**< Shift value for PROTIMER_WRAPCNTTOP         */
#define _PROTIMER_WRAPCNTTOP_WRAPCNTTOP_MASK             0xFFFFFFFFUL                                   /**< Bit mask for PROTIMER_WRAPCNTTOP            */
#define _PROTIMER_WRAPCNTTOP_WRAPCNTTOP_DEFAULT          0xFFFFFFFFUL                                   /**< Mode DEFAULT for PROTIMER_WRAPCNTTOP        */
#define PROTIMER_WRAPCNTTOP_WRAPCNTTOP_DEFAULT           (_PROTIMER_WRAPCNTTOP_WRAPCNTTOP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_WRAPCNTTOP*/

/* Bit fields for PROTIMER TOUT0CNT */
#define _PROTIMER_TOUT0CNT_RESETVALUE                    0x00000000UL                                /**< Default value for PROTIMER_TOUT0CNT         */
#define _PROTIMER_TOUT0CNT_MASK                          0xFFFFFFFFUL                                /**< Mask for PROTIMER_TOUT0CNT                  */
#define _PROTIMER_TOUT0CNT_TOUT0PCNT_SHIFT               0                                           /**< Shift value for PROTIMER_TOUT0PCNT          */
#define _PROTIMER_TOUT0CNT_TOUT0PCNT_MASK                0xFFFFUL                                    /**< Bit mask for PROTIMER_TOUT0PCNT             */
#define _PROTIMER_TOUT0CNT_TOUT0PCNT_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for PROTIMER_TOUT0CNT          */
#define PROTIMER_TOUT0CNT_TOUT0PCNT_DEFAULT              (_PROTIMER_TOUT0CNT_TOUT0PCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_TOUT0CNT  */
#define _PROTIMER_TOUT0CNT_TOUT0CNT_SHIFT                16                                          /**< Shift value for PROTIMER_TOUT0CNT           */
#define _PROTIMER_TOUT0CNT_TOUT0CNT_MASK                 0xFFFF0000UL                                /**< Bit mask for PROTIMER_TOUT0CNT              */
#define _PROTIMER_TOUT0CNT_TOUT0CNT_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_TOUT0CNT          */
#define PROTIMER_TOUT0CNT_TOUT0CNT_DEFAULT               (_PROTIMER_TOUT0CNT_TOUT0CNT_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_TOUT0CNT  */

/* Bit fields for PROTIMER TOUT0CNTTOP */
#define _PROTIMER_TOUT0CNTTOP_RESETVALUE                 0x00FF00FFUL                                      /**< Default value for PROTIMER_TOUT0CNTTOP      */
#define _PROTIMER_TOUT0CNTTOP_MASK                       0xFFFFFFFFUL                                      /**< Mask for PROTIMER_TOUT0CNTTOP               */
#define _PROTIMER_TOUT0CNTTOP_TOUT0PCNTTOP_SHIFT         0                                                 /**< Shift value for PROTIMER_TOUT0PCNTTOP       */
#define _PROTIMER_TOUT0CNTTOP_TOUT0PCNTTOP_MASK          0xFFFFUL                                          /**< Bit mask for PROTIMER_TOUT0PCNTTOP          */
#define _PROTIMER_TOUT0CNTTOP_TOUT0PCNTTOP_DEFAULT       0x000000FFUL                                      /**< Mode DEFAULT for PROTIMER_TOUT0CNTTOP       */
#define PROTIMER_TOUT0CNTTOP_TOUT0PCNTTOP_DEFAULT        (_PROTIMER_TOUT0CNTTOP_TOUT0PCNTTOP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_TOUT0CNTTOP*/
#define _PROTIMER_TOUT0CNTTOP_TOUT0CNTTOP_SHIFT          16                                                /**< Shift value for PROTIMER_TOUT0CNTTOP        */
#define _PROTIMER_TOUT0CNTTOP_TOUT0CNTTOP_MASK           0xFFFF0000UL                                      /**< Bit mask for PROTIMER_TOUT0CNTTOP           */
#define _PROTIMER_TOUT0CNTTOP_TOUT0CNTTOP_DEFAULT        0x000000FFUL                                      /**< Mode DEFAULT for PROTIMER_TOUT0CNTTOP       */
#define PROTIMER_TOUT0CNTTOP_TOUT0CNTTOP_DEFAULT         (_PROTIMER_TOUT0CNTTOP_TOUT0CNTTOP_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_TOUT0CNTTOP*/

/* Bit fields for PROTIMER TOUT0COMP */
#define _PROTIMER_TOUT0COMP_RESETVALUE                   0x00000000UL                                     /**< Default value for PROTIMER_TOUT0COMP        */
#define _PROTIMER_TOUT0COMP_MASK                         0xFFFFFFFFUL                                     /**< Mask for PROTIMER_TOUT0COMP                 */
#define _PROTIMER_TOUT0COMP_TOUT0PCNTCOMP_SHIFT          0                                                /**< Shift value for PROTIMER_TOUT0PCNTCOMP      */
#define _PROTIMER_TOUT0COMP_TOUT0PCNTCOMP_MASK           0xFFFFUL                                         /**< Bit mask for PROTIMER_TOUT0PCNTCOMP         */
#define _PROTIMER_TOUT0COMP_TOUT0PCNTCOMP_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for PROTIMER_TOUT0COMP         */
#define PROTIMER_TOUT0COMP_TOUT0PCNTCOMP_DEFAULT         (_PROTIMER_TOUT0COMP_TOUT0PCNTCOMP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_TOUT0COMP */
#define _PROTIMER_TOUT0COMP_TOUT0CNTCOMP_SHIFT           16                                               /**< Shift value for PROTIMER_TOUT0CNTCOMP       */
#define _PROTIMER_TOUT0COMP_TOUT0CNTCOMP_MASK            0xFFFF0000UL                                     /**< Bit mask for PROTIMER_TOUT0CNTCOMP          */
#define _PROTIMER_TOUT0COMP_TOUT0CNTCOMP_DEFAULT         0x00000000UL                                     /**< Mode DEFAULT for PROTIMER_TOUT0COMP         */
#define PROTIMER_TOUT0COMP_TOUT0CNTCOMP_DEFAULT          (_PROTIMER_TOUT0COMP_TOUT0CNTCOMP_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_TOUT0COMP */

/* Bit fields for PROTIMER TOUT1CNT */
#define _PROTIMER_TOUT1CNT_RESETVALUE                    0x00000000UL                                /**< Default value for PROTIMER_TOUT1CNT         */
#define _PROTIMER_TOUT1CNT_MASK                          0xFFFFFFFFUL                                /**< Mask for PROTIMER_TOUT1CNT                  */
#define _PROTIMER_TOUT1CNT_TOUT1PCNT_SHIFT               0                                           /**< Shift value for PROTIMER_TOUT1PCNT          */
#define _PROTIMER_TOUT1CNT_TOUT1PCNT_MASK                0xFFFFUL                                    /**< Bit mask for PROTIMER_TOUT1PCNT             */
#define _PROTIMER_TOUT1CNT_TOUT1PCNT_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for PROTIMER_TOUT1CNT          */
#define PROTIMER_TOUT1CNT_TOUT1PCNT_DEFAULT              (_PROTIMER_TOUT1CNT_TOUT1PCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_TOUT1CNT  */
#define _PROTIMER_TOUT1CNT_TOUT1CNT_SHIFT                16                                          /**< Shift value for PROTIMER_TOUT1CNT           */
#define _PROTIMER_TOUT1CNT_TOUT1CNT_MASK                 0xFFFF0000UL                                /**< Bit mask for PROTIMER_TOUT1CNT              */
#define _PROTIMER_TOUT1CNT_TOUT1CNT_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_TOUT1CNT          */
#define PROTIMER_TOUT1CNT_TOUT1CNT_DEFAULT               (_PROTIMER_TOUT1CNT_TOUT1CNT_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_TOUT1CNT  */

/* Bit fields for PROTIMER TOUT1CNTTOP */
#define _PROTIMER_TOUT1CNTTOP_RESETVALUE                 0x00FF00FFUL                                      /**< Default value for PROTIMER_TOUT1CNTTOP      */
#define _PROTIMER_TOUT1CNTTOP_MASK                       0xFFFFFFFFUL                                      /**< Mask for PROTIMER_TOUT1CNTTOP               */
#define _PROTIMER_TOUT1CNTTOP_TOUT1PCNTTOP_SHIFT         0                                                 /**< Shift value for PROTIMER_TOUT1PCNTTOP       */
#define _PROTIMER_TOUT1CNTTOP_TOUT1PCNTTOP_MASK          0xFFFFUL                                          /**< Bit mask for PROTIMER_TOUT1PCNTTOP          */
#define _PROTIMER_TOUT1CNTTOP_TOUT1PCNTTOP_DEFAULT       0x000000FFUL                                      /**< Mode DEFAULT for PROTIMER_TOUT1CNTTOP       */
#define PROTIMER_TOUT1CNTTOP_TOUT1PCNTTOP_DEFAULT        (_PROTIMER_TOUT1CNTTOP_TOUT1PCNTTOP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_TOUT1CNTTOP*/
#define _PROTIMER_TOUT1CNTTOP_TOUT1CNTTOP_SHIFT          16                                                /**< Shift value for PROTIMER_TOUT1CNTTOP        */
#define _PROTIMER_TOUT1CNTTOP_TOUT1CNTTOP_MASK           0xFFFF0000UL                                      /**< Bit mask for PROTIMER_TOUT1CNTTOP           */
#define _PROTIMER_TOUT1CNTTOP_TOUT1CNTTOP_DEFAULT        0x000000FFUL                                      /**< Mode DEFAULT for PROTIMER_TOUT1CNTTOP       */
#define PROTIMER_TOUT1CNTTOP_TOUT1CNTTOP_DEFAULT         (_PROTIMER_TOUT1CNTTOP_TOUT1CNTTOP_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_TOUT1CNTTOP*/

/* Bit fields for PROTIMER TOUT1COMP */
#define _PROTIMER_TOUT1COMP_RESETVALUE                   0x00000000UL                                     /**< Default value for PROTIMER_TOUT1COMP        */
#define _PROTIMER_TOUT1COMP_MASK                         0xFFFFFFFFUL                                     /**< Mask for PROTIMER_TOUT1COMP                 */
#define _PROTIMER_TOUT1COMP_TOUT1PCNTCOMP_SHIFT          0                                                /**< Shift value for PROTIMER_TOUT1PCNTCOMP      */
#define _PROTIMER_TOUT1COMP_TOUT1PCNTCOMP_MASK           0xFFFFUL                                         /**< Bit mask for PROTIMER_TOUT1PCNTCOMP         */
#define _PROTIMER_TOUT1COMP_TOUT1PCNTCOMP_DEFAULT        0x00000000UL                                     /**< Mode DEFAULT for PROTIMER_TOUT1COMP         */
#define PROTIMER_TOUT1COMP_TOUT1PCNTCOMP_DEFAULT         (_PROTIMER_TOUT1COMP_TOUT1PCNTCOMP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_TOUT1COMP */
#define _PROTIMER_TOUT1COMP_TOUT1CNTCOMP_SHIFT           16                                               /**< Shift value for PROTIMER_TOUT1CNTCOMP       */
#define _PROTIMER_TOUT1COMP_TOUT1CNTCOMP_MASK            0xFFFF0000UL                                     /**< Bit mask for PROTIMER_TOUT1CNTCOMP          */
#define _PROTIMER_TOUT1COMP_TOUT1CNTCOMP_DEFAULT         0x00000000UL                                     /**< Mode DEFAULT for PROTIMER_TOUT1COMP         */
#define PROTIMER_TOUT1COMP_TOUT1CNTCOMP_DEFAULT          (_PROTIMER_TOUT1COMP_TOUT1CNTCOMP_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_TOUT1COMP */

/* Bit fields for PROTIMER LBTCTRL */
#define _PROTIMER_LBTCTRL_RESETVALUE                     0x00000000UL                                   /**< Default value for PROTIMER_LBTCTRL          */
#define _PROTIMER_LBTCTRL_MASK                           0x0F1F1FFFUL                                   /**< Mask for PROTIMER_LBTCTRL                   */
#define _PROTIMER_LBTCTRL_STARTEXP_SHIFT                 0                                              /**< Shift value for PROTIMER_STARTEXP           */
#define _PROTIMER_LBTCTRL_STARTEXP_MASK                  0xFUL                                          /**< Bit mask for PROTIMER_STARTEXP              */
#define _PROTIMER_LBTCTRL_STARTEXP_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_LBTCTRL           */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP0                  0x00000000UL                                   /**< Mode EXP0 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP1                  0x00000001UL                                   /**< Mode EXP1 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP2                  0x00000002UL                                   /**< Mode EXP2 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP3                  0x00000003UL                                   /**< Mode EXP3 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP4                  0x00000004UL                                   /**< Mode EXP4 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP5                  0x00000005UL                                   /**< Mode EXP5 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP6                  0x00000006UL                                   /**< Mode EXP6 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP7                  0x00000007UL                                   /**< Mode EXP7 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_STARTEXP_EXP8                  0x00000008UL                                   /**< Mode EXP8 for PROTIMER_LBTCTRL              */
#define PROTIMER_LBTCTRL_STARTEXP_DEFAULT                (_PROTIMER_LBTCTRL_STARTEXP_DEFAULT << 0)      /**< Shifted mode DEFAULT for PROTIMER_LBTCTRL   */
#define PROTIMER_LBTCTRL_STARTEXP_EXP0                   (_PROTIMER_LBTCTRL_STARTEXP_EXP0 << 0)         /**< Shifted mode EXP0 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP1                   (_PROTIMER_LBTCTRL_STARTEXP_EXP1 << 0)         /**< Shifted mode EXP1 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP2                   (_PROTIMER_LBTCTRL_STARTEXP_EXP2 << 0)         /**< Shifted mode EXP2 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP3                   (_PROTIMER_LBTCTRL_STARTEXP_EXP3 << 0)         /**< Shifted mode EXP3 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP4                   (_PROTIMER_LBTCTRL_STARTEXP_EXP4 << 0)         /**< Shifted mode EXP4 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP5                   (_PROTIMER_LBTCTRL_STARTEXP_EXP5 << 0)         /**< Shifted mode EXP5 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP6                   (_PROTIMER_LBTCTRL_STARTEXP_EXP6 << 0)         /**< Shifted mode EXP6 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP7                   (_PROTIMER_LBTCTRL_STARTEXP_EXP7 << 0)         /**< Shifted mode EXP7 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_STARTEXP_EXP8                   (_PROTIMER_LBTCTRL_STARTEXP_EXP8 << 0)         /**< Shifted mode EXP8 for PROTIMER_LBTCTRL      */
#define _PROTIMER_LBTCTRL_MAXEXP_SHIFT                   4                                              /**< Shift value for PROTIMER_MAXEXP             */
#define _PROTIMER_LBTCTRL_MAXEXP_MASK                    0xF0UL                                         /**< Bit mask for PROTIMER_MAXEXP                */
#define _PROTIMER_LBTCTRL_MAXEXP_DEFAULT                 0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_LBTCTRL           */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP0                    0x00000000UL                                   /**< Mode EXP0 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP1                    0x00000001UL                                   /**< Mode EXP1 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP2                    0x00000002UL                                   /**< Mode EXP2 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP3                    0x00000003UL                                   /**< Mode EXP3 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP4                    0x00000004UL                                   /**< Mode EXP4 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP5                    0x00000005UL                                   /**< Mode EXP5 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP6                    0x00000006UL                                   /**< Mode EXP6 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP7                    0x00000007UL                                   /**< Mode EXP7 for PROTIMER_LBTCTRL              */
#define _PROTIMER_LBTCTRL_MAXEXP_EXP8                    0x00000008UL                                   /**< Mode EXP8 for PROTIMER_LBTCTRL              */
#define PROTIMER_LBTCTRL_MAXEXP_DEFAULT                  (_PROTIMER_LBTCTRL_MAXEXP_DEFAULT << 4)        /**< Shifted mode DEFAULT for PROTIMER_LBTCTRL   */
#define PROTIMER_LBTCTRL_MAXEXP_EXP0                     (_PROTIMER_LBTCTRL_MAXEXP_EXP0 << 4)           /**< Shifted mode EXP0 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP1                     (_PROTIMER_LBTCTRL_MAXEXP_EXP1 << 4)           /**< Shifted mode EXP1 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP2                     (_PROTIMER_LBTCTRL_MAXEXP_EXP2 << 4)           /**< Shifted mode EXP2 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP3                     (_PROTIMER_LBTCTRL_MAXEXP_EXP3 << 4)           /**< Shifted mode EXP3 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP4                     (_PROTIMER_LBTCTRL_MAXEXP_EXP4 << 4)           /**< Shifted mode EXP4 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP5                     (_PROTIMER_LBTCTRL_MAXEXP_EXP5 << 4)           /**< Shifted mode EXP5 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP6                     (_PROTIMER_LBTCTRL_MAXEXP_EXP6 << 4)           /**< Shifted mode EXP6 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP7                     (_PROTIMER_LBTCTRL_MAXEXP_EXP7 << 4)           /**< Shifted mode EXP7 for PROTIMER_LBTCTRL      */
#define PROTIMER_LBTCTRL_MAXEXP_EXP8                     (_PROTIMER_LBTCTRL_MAXEXP_EXP8 << 4)           /**< Shifted mode EXP8 for PROTIMER_LBTCTRL      */
#define _PROTIMER_LBTCTRL_CCADELAY_SHIFT                 8                                              /**< Shift value for PROTIMER_CCADELAY           */
#define _PROTIMER_LBTCTRL_CCADELAY_MASK                  0x1F00UL                                       /**< Bit mask for PROTIMER_CCADELAY              */
#define _PROTIMER_LBTCTRL_CCADELAY_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_LBTCTRL           */
#define PROTIMER_LBTCTRL_CCADELAY_DEFAULT                (_PROTIMER_LBTCTRL_CCADELAY_DEFAULT << 8)      /**< Shifted mode DEFAULT for PROTIMER_LBTCTRL   */
#define _PROTIMER_LBTCTRL_CCAREPEAT_SHIFT                16                                             /**< Shift value for PROTIMER_CCAREPEAT          */
#define _PROTIMER_LBTCTRL_CCAREPEAT_MASK                 0xF0000UL                                      /**< Bit mask for PROTIMER_CCAREPEAT             */
#define _PROTIMER_LBTCTRL_CCAREPEAT_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_LBTCTRL           */
#define PROTIMER_LBTCTRL_CCAREPEAT_DEFAULT               (_PROTIMER_LBTCTRL_CCAREPEAT_DEFAULT << 16)    /**< Shifted mode DEFAULT for PROTIMER_LBTCTRL   */
#define PROTIMER_LBTCTRL_FIXEDBACKOFF                    (0x1UL << 20)                                  /**< Fixed backoff                               */
#define _PROTIMER_LBTCTRL_FIXEDBACKOFF_SHIFT             20                                             /**< Shift value for PROTIMER_FIXEDBACKOFF       */
#define _PROTIMER_LBTCTRL_FIXEDBACKOFF_MASK              0x100000UL                                     /**< Bit mask for PROTIMER_FIXEDBACKOFF          */
#define _PROTIMER_LBTCTRL_FIXEDBACKOFF_DEFAULT           0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_LBTCTRL           */
#define PROTIMER_LBTCTRL_FIXEDBACKOFF_DEFAULT            (_PROTIMER_LBTCTRL_FIXEDBACKOFF_DEFAULT << 20) /**< Shifted mode DEFAULT for PROTIMER_LBTCTRL   */
#define _PROTIMER_LBTCTRL_RETRYLIMIT_SHIFT               24                                             /**< Shift value for PROTIMER_RETRYLIMIT         */
#define _PROTIMER_LBTCTRL_RETRYLIMIT_MASK                0xF000000UL                                    /**< Bit mask for PROTIMER_RETRYLIMIT            */
#define _PROTIMER_LBTCTRL_RETRYLIMIT_DEFAULT             0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_LBTCTRL           */
#define PROTIMER_LBTCTRL_RETRYLIMIT_DEFAULT              (_PROTIMER_LBTCTRL_RETRYLIMIT_DEFAULT << 24)   /**< Shifted mode DEFAULT for PROTIMER_LBTCTRL   */

/* Bit fields for PROTIMER LBTPRSCTRL */
#define _PROTIMER_LBTPRSCTRL_RESETVALUE                  0x00000000UL                                       /**< Default value for PROTIMER_LBTPRSCTRL       */
#define _PROTIMER_LBTPRSCTRL_MASK                        0x01010100UL                                       /**< Mask for PROTIMER_LBTPRSCTRL                */
#define PROTIMER_LBTPRSCTRL_LBTSTARTPRSEN                (0x1UL << 8)                                       /**< Enable LBT start commands from PRS.         */
#define _PROTIMER_LBTPRSCTRL_LBTSTARTPRSEN_SHIFT         8                                                  /**< Shift value for PROTIMER_LBTSTARTPRSEN      */
#define _PROTIMER_LBTPRSCTRL_LBTSTARTPRSEN_MASK          0x100UL                                            /**< Bit mask for PROTIMER_LBTSTARTPRSEN         */
#define _PROTIMER_LBTPRSCTRL_LBTSTARTPRSEN_DEFAULT       0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_LBTPRSCTRL        */
#define PROTIMER_LBTPRSCTRL_LBTSTARTPRSEN_DEFAULT        (_PROTIMER_LBTPRSCTRL_LBTSTARTPRSEN_DEFAULT << 8)  /**< Shifted mode DEFAULT for PROTIMER_LBTPRSCTRL*/
#define PROTIMER_LBTPRSCTRL_LBTPAUSEPRSEN                (0x1UL << 16)                                      /**< Enable LBT pause commands from PRS.         */
#define _PROTIMER_LBTPRSCTRL_LBTPAUSEPRSEN_SHIFT         16                                                 /**< Shift value for PROTIMER_LBTPAUSEPRSEN      */
#define _PROTIMER_LBTPRSCTRL_LBTPAUSEPRSEN_MASK          0x10000UL                                          /**< Bit mask for PROTIMER_LBTPAUSEPRSEN         */
#define _PROTIMER_LBTPRSCTRL_LBTPAUSEPRSEN_DEFAULT       0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_LBTPRSCTRL        */
#define PROTIMER_LBTPRSCTRL_LBTPAUSEPRSEN_DEFAULT        (_PROTIMER_LBTPRSCTRL_LBTPAUSEPRSEN_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_LBTPRSCTRL*/
#define PROTIMER_LBTPRSCTRL_LBTSTOPPRSEN                 (0x1UL << 24)                                      /**< Enable LBT stop commands from PRS.          */
#define _PROTIMER_LBTPRSCTRL_LBTSTOPPRSEN_SHIFT          24                                                 /**< Shift value for PROTIMER_LBTSTOPPRSEN       */
#define _PROTIMER_LBTPRSCTRL_LBTSTOPPRSEN_MASK           0x1000000UL                                        /**< Bit mask for PROTIMER_LBTSTOPPRSEN          */
#define _PROTIMER_LBTPRSCTRL_LBTSTOPPRSEN_DEFAULT        0x00000000UL                                       /**< Mode DEFAULT for PROTIMER_LBTPRSCTRL        */
#define PROTIMER_LBTPRSCTRL_LBTSTOPPRSEN_DEFAULT         (_PROTIMER_LBTPRSCTRL_LBTSTOPPRSEN_DEFAULT << 24)  /**< Shifted mode DEFAULT for PROTIMER_LBTPRSCTRL*/

/* Bit fields for PROTIMER LBTSTATE */
#define _PROTIMER_LBTSTATE_RESETVALUE                    0x00000000UL                                /**< Default value for PROTIMER_LBTSTATE         */
#define _PROTIMER_LBTSTATE_MASK                          0xFFFFFFFFUL                                /**< Mask for PROTIMER_LBTSTATE                  */
#define _PROTIMER_LBTSTATE_TOUT0PCNT_SHIFT               0                                           /**< Shift value for PROTIMER_TOUT0PCNT          */
#define _PROTIMER_LBTSTATE_TOUT0PCNT_MASK                0xFFFFUL                                    /**< Bit mask for PROTIMER_TOUT0PCNT             */
#define _PROTIMER_LBTSTATE_TOUT0PCNT_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for PROTIMER_LBTSTATE          */
#define PROTIMER_LBTSTATE_TOUT0PCNT_DEFAULT              (_PROTIMER_LBTSTATE_TOUT0PCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_LBTSTATE  */
#define _PROTIMER_LBTSTATE_TOUT0CNT_SHIFT                16                                          /**< Shift value for PROTIMER_TOUT0CNT           */
#define _PROTIMER_LBTSTATE_TOUT0CNT_MASK                 0xFFFF0000UL                                /**< Bit mask for PROTIMER_TOUT0CNT              */
#define _PROTIMER_LBTSTATE_TOUT0CNT_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_LBTSTATE          */
#define PROTIMER_LBTSTATE_TOUT0CNT_DEFAULT               (_PROTIMER_LBTSTATE_TOUT0CNT_DEFAULT << 16) /**< Shifted mode DEFAULT for PROTIMER_LBTSTATE  */

/* Bit fields for PROTIMER RANDOM */
#define _PROTIMER_RANDOM_RESETVALUE                      0x00000000UL                           /**< Default value for PROTIMER_RANDOM           */
#define _PROTIMER_RANDOM_MASK                            0x0000FFFFUL                           /**< Mask for PROTIMER_RANDOM                    */
#define _PROTIMER_RANDOM_RANDOM_SHIFT                    0                                      /**< Shift value for PROTIMER_RANDOM             */
#define _PROTIMER_RANDOM_RANDOM_MASK                     0xFFFFUL                               /**< Bit mask for PROTIMER_RANDOM                */
#define _PROTIMER_RANDOM_RANDOM_DEFAULT                  0x00000000UL                           /**< Mode DEFAULT for PROTIMER_RANDOM            */
#define PROTIMER_RANDOM_RANDOM_DEFAULT                   (_PROTIMER_RANDOM_RANDOM_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_RANDOM    */

/* Bit fields for PROTIMER IF */
#define _PROTIMER_IF_RESETVALUE                          0x00000000UL                               /**< Default value for PROTIMER_IF               */
#define _PROTIMER_IF_MASK                                0x3FFFFFF7UL                               /**< Mask for PROTIMER_IF                        */
#define PROTIMER_IF_PRECNTOF                             (0x1UL << 0)                               /**< PRECNT Overflow Interrupt Flag              */
#define _PROTIMER_IF_PRECNTOF_SHIFT                      0                                          /**< Shift value for PROTIMER_PRECNTOF           */
#define _PROTIMER_IF_PRECNTOF_MASK                       0x1UL                                      /**< Bit mask for PROTIMER_PRECNTOF              */
#define _PROTIMER_IF_PRECNTOF_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_PRECNTOF_DEFAULT                     (_PROTIMER_IF_PRECNTOF_DEFAULT << 0)       /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_BASECNTOF                            (0x1UL << 1)                               /**< BASECNT Overflow Interrupt Flag             */
#define _PROTIMER_IF_BASECNTOF_SHIFT                     1                                          /**< Shift value for PROTIMER_BASECNTOF          */
#define _PROTIMER_IF_BASECNTOF_MASK                      0x2UL                                      /**< Bit mask for PROTIMER_BASECNTOF             */
#define _PROTIMER_IF_BASECNTOF_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_BASECNTOF_DEFAULT                    (_PROTIMER_IF_BASECNTOF_DEFAULT << 1)      /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_WRAPCNTOF                            (0x1UL << 2)                               /**< WRAPCNT Overflow Interrupt Flag             */
#define _PROTIMER_IF_WRAPCNTOF_SHIFT                     2                                          /**< Shift value for PROTIMER_WRAPCNTOF          */
#define _PROTIMER_IF_WRAPCNTOF_MASK                      0x4UL                                      /**< Bit mask for PROTIMER_WRAPCNTOF             */
#define _PROTIMER_IF_WRAPCNTOF_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_WRAPCNTOF_DEFAULT                    (_PROTIMER_IF_WRAPCNTOF_DEFAULT << 2)      /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_TOUT0                                (0x1UL << 4)                               /**< TOUT0 underflow interrupt flag              */
#define _PROTIMER_IF_TOUT0_SHIFT                         4                                          /**< Shift value for PROTIMER_TOUT0              */
#define _PROTIMER_IF_TOUT0_MASK                          0x10UL                                     /**< Bit mask for PROTIMER_TOUT0                 */
#define _PROTIMER_IF_TOUT0_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_TOUT0_DEFAULT                        (_PROTIMER_IF_TOUT0_DEFAULT << 4)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_TOUT1                                (0x1UL << 5)                               /**< TOUT1 underflow interrupt flag              */
#define _PROTIMER_IF_TOUT1_SHIFT                         5                                          /**< Shift value for PROTIMER_TOUT1              */
#define _PROTIMER_IF_TOUT1_MASK                          0x20UL                                     /**< Bit mask for PROTIMER_TOUT1                 */
#define _PROTIMER_IF_TOUT1_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_TOUT1_DEFAULT                        (_PROTIMER_IF_TOUT1_DEFAULT << 5)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_TOUT0MATCH                           (0x1UL << 6)                               /**< TOUT0 compare match interrupt flag          */
#define _PROTIMER_IF_TOUT0MATCH_SHIFT                    6                                          /**< Shift value for PROTIMER_TOUT0MATCH         */
#define _PROTIMER_IF_TOUT0MATCH_MASK                     0x40UL                                     /**< Bit mask for PROTIMER_TOUT0MATCH            */
#define _PROTIMER_IF_TOUT0MATCH_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_TOUT0MATCH_DEFAULT                   (_PROTIMER_IF_TOUT0MATCH_DEFAULT << 6)     /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_TOUT1MATCH                           (0x1UL << 7)                               /**< TOUT1 compare match interrupt flag          */
#define _PROTIMER_IF_TOUT1MATCH_SHIFT                    7                                          /**< Shift value for PROTIMER_TOUT1MATCH         */
#define _PROTIMER_IF_TOUT1MATCH_MASK                     0x80UL                                     /**< Bit mask for PROTIMER_TOUT1MATCH            */
#define _PROTIMER_IF_TOUT1MATCH_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_TOUT1MATCH_DEFAULT                   (_PROTIMER_IF_TOUT1MATCH_DEFAULT << 7)     /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC0                                  (0x1UL << 8)                               /**< CC Channel 0 Interrupt Flag                 */
#define _PROTIMER_IF_CC0_SHIFT                           8                                          /**< Shift value for PROTIMER_CC0                */
#define _PROTIMER_IF_CC0_MASK                            0x100UL                                    /**< Bit mask for PROTIMER_CC0                   */
#define _PROTIMER_IF_CC0_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC0_DEFAULT                          (_PROTIMER_IF_CC0_DEFAULT << 8)            /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC1                                  (0x1UL << 9)                               /**< CC Channel 1 Interrupt Flag                 */
#define _PROTIMER_IF_CC1_SHIFT                           9                                          /**< Shift value for PROTIMER_CC1                */
#define _PROTIMER_IF_CC1_MASK                            0x200UL                                    /**< Bit mask for PROTIMER_CC1                   */
#define _PROTIMER_IF_CC1_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC1_DEFAULT                          (_PROTIMER_IF_CC1_DEFAULT << 9)            /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC2                                  (0x1UL << 10)                              /**< CC Channel 2 Interrupt Flag                 */
#define _PROTIMER_IF_CC2_SHIFT                           10                                         /**< Shift value for PROTIMER_CC2                */
#define _PROTIMER_IF_CC2_MASK                            0x400UL                                    /**< Bit mask for PROTIMER_CC2                   */
#define _PROTIMER_IF_CC2_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC2_DEFAULT                          (_PROTIMER_IF_CC2_DEFAULT << 10)           /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC3                                  (0x1UL << 11)                              /**< CC Channel 3 Interrupt Flag                 */
#define _PROTIMER_IF_CC3_SHIFT                           11                                         /**< Shift value for PROTIMER_CC3                */
#define _PROTIMER_IF_CC3_MASK                            0x800UL                                    /**< Bit mask for PROTIMER_CC3                   */
#define _PROTIMER_IF_CC3_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC3_DEFAULT                          (_PROTIMER_IF_CC3_DEFAULT << 11)           /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC4                                  (0x1UL << 12)                              /**< CC Channel 4 Interrupt Flag                 */
#define _PROTIMER_IF_CC4_SHIFT                           12                                         /**< Shift value for PROTIMER_CC4                */
#define _PROTIMER_IF_CC4_MASK                            0x1000UL                                   /**< Bit mask for PROTIMER_CC4                   */
#define _PROTIMER_IF_CC4_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC4_DEFAULT                          (_PROTIMER_IF_CC4_DEFAULT << 12)           /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC5                                  (0x1UL << 13)                              /**< CC Channel 5 Interrupt Flag                 */
#define _PROTIMER_IF_CC5_SHIFT                           13                                         /**< Shift value for PROTIMER_CC5                */
#define _PROTIMER_IF_CC5_MASK                            0x2000UL                                   /**< Bit mask for PROTIMER_CC5                   */
#define _PROTIMER_IF_CC5_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC5_DEFAULT                          (_PROTIMER_IF_CC5_DEFAULT << 13)           /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC6                                  (0x1UL << 14)                              /**< CC Channel 6 Interrupt Flag                 */
#define _PROTIMER_IF_CC6_SHIFT                           14                                         /**< Shift value for PROTIMER_CC6                */
#define _PROTIMER_IF_CC6_MASK                            0x4000UL                                   /**< Bit mask for PROTIMER_CC6                   */
#define _PROTIMER_IF_CC6_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC6_DEFAULT                          (_PROTIMER_IF_CC6_DEFAULT << 14)           /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_CC7                                  (0x1UL << 15)                              /**< CC Channel 7 Interrupt Flag                 */
#define _PROTIMER_IF_CC7_SHIFT                           15                                         /**< Shift value for PROTIMER_CC7                */
#define _PROTIMER_IF_CC7_MASK                            0x8000UL                                   /**< Bit mask for PROTIMER_CC7                   */
#define _PROTIMER_IF_CC7_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_CC7_DEFAULT                          (_PROTIMER_IF_CC7_DEFAULT << 15)           /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF0                                 (0x1UL << 16)                              /**< CC Channel 0 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF0_SHIFT                          16                                         /**< Shift value for PROTIMER_COF0               */
#define _PROTIMER_IF_COF0_MASK                           0x10000UL                                  /**< Bit mask for PROTIMER_COF0                  */
#define _PROTIMER_IF_COF0_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF0_DEFAULT                         (_PROTIMER_IF_COF0_DEFAULT << 16)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF1                                 (0x1UL << 17)                              /**< CC Channel 1 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF1_SHIFT                          17                                         /**< Shift value for PROTIMER_COF1               */
#define _PROTIMER_IF_COF1_MASK                           0x20000UL                                  /**< Bit mask for PROTIMER_COF1                  */
#define _PROTIMER_IF_COF1_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF1_DEFAULT                         (_PROTIMER_IF_COF1_DEFAULT << 17)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF2                                 (0x1UL << 18)                              /**< CC Channel 2 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF2_SHIFT                          18                                         /**< Shift value for PROTIMER_COF2               */
#define _PROTIMER_IF_COF2_MASK                           0x40000UL                                  /**< Bit mask for PROTIMER_COF2                  */
#define _PROTIMER_IF_COF2_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF2_DEFAULT                         (_PROTIMER_IF_COF2_DEFAULT << 18)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF3                                 (0x1UL << 19)                              /**< CC Channel 3 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF3_SHIFT                          19                                         /**< Shift value for PROTIMER_COF3               */
#define _PROTIMER_IF_COF3_MASK                           0x80000UL                                  /**< Bit mask for PROTIMER_COF3                  */
#define _PROTIMER_IF_COF3_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF3_DEFAULT                         (_PROTIMER_IF_COF3_DEFAULT << 19)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF4                                 (0x1UL << 20)                              /**< CC Channel 4 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF4_SHIFT                          20                                         /**< Shift value for PROTIMER_COF4               */
#define _PROTIMER_IF_COF4_MASK                           0x100000UL                                 /**< Bit mask for PROTIMER_COF4                  */
#define _PROTIMER_IF_COF4_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF4_DEFAULT                         (_PROTIMER_IF_COF4_DEFAULT << 20)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF5                                 (0x1UL << 21)                              /**< CC Channel 5 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF5_SHIFT                          21                                         /**< Shift value for PROTIMER_COF5               */
#define _PROTIMER_IF_COF5_MASK                           0x200000UL                                 /**< Bit mask for PROTIMER_COF5                  */
#define _PROTIMER_IF_COF5_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF5_DEFAULT                         (_PROTIMER_IF_COF5_DEFAULT << 21)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF6                                 (0x1UL << 22)                              /**< CC Channel 6 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF6_SHIFT                          22                                         /**< Shift value for PROTIMER_COF6               */
#define _PROTIMER_IF_COF6_MASK                           0x400000UL                                 /**< Bit mask for PROTIMER_COF6                  */
#define _PROTIMER_IF_COF6_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF6_DEFAULT                         (_PROTIMER_IF_COF6_DEFAULT << 22)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_COF7                                 (0x1UL << 23)                              /**< CC Channel 7 Overflow Interrupt Flag        */
#define _PROTIMER_IF_COF7_SHIFT                          23                                         /**< Shift value for PROTIMER_COF7               */
#define _PROTIMER_IF_COF7_MASK                           0x800000UL                                 /**< Bit mask for PROTIMER_COF7                  */
#define _PROTIMER_IF_COF7_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_COF7_DEFAULT                         (_PROTIMER_IF_COF7_DEFAULT << 23)          /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_LBTSUCCESS                           (0x1UL << 24)                              /**< Listen Before Talk Success                  */
#define _PROTIMER_IF_LBTSUCCESS_SHIFT                    24                                         /**< Shift value for PROTIMER_LBTSUCCESS         */
#define _PROTIMER_IF_LBTSUCCESS_MASK                     0x1000000UL                                /**< Bit mask for PROTIMER_LBTSUCCESS            */
#define _PROTIMER_IF_LBTSUCCESS_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_LBTSUCCESS_DEFAULT                   (_PROTIMER_IF_LBTSUCCESS_DEFAULT << 24)    /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_LBTFAILURE                           (0x1UL << 25)                              /**< Listen Before Talk Failure                  */
#define _PROTIMER_IF_LBTFAILURE_SHIFT                    25                                         /**< Shift value for PROTIMER_LBTFAILURE         */
#define _PROTIMER_IF_LBTFAILURE_MASK                     0x2000000UL                                /**< Bit mask for PROTIMER_LBTFAILURE            */
#define _PROTIMER_IF_LBTFAILURE_DEFAULT                  0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_LBTFAILURE_DEFAULT                   (_PROTIMER_IF_LBTFAILURE_DEFAULT << 25)    /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_LBTPAUSED                            (0x1UL << 26)                              /**< Listen Before Talk Paused                   */
#define _PROTIMER_IF_LBTPAUSED_SHIFT                     26                                         /**< Shift value for PROTIMER_LBTPAUSED          */
#define _PROTIMER_IF_LBTPAUSED_MASK                      0x4000000UL                                /**< Bit mask for PROTIMER_LBTPAUSED             */
#define _PROTIMER_IF_LBTPAUSED_DEFAULT                   0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_LBTPAUSED_DEFAULT                    (_PROTIMER_IF_LBTPAUSED_DEFAULT << 26)     /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_LBTRETRY                             (0x1UL << 27)                              /**< Listen Before Talk Retry                    */
#define _PROTIMER_IF_LBTRETRY_SHIFT                      27                                         /**< Shift value for PROTIMER_LBTRETRY           */
#define _PROTIMER_IF_LBTRETRY_MASK                       0x8000000UL                                /**< Bit mask for PROTIMER_LBTRETRY              */
#define _PROTIMER_IF_LBTRETRY_DEFAULT                    0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_LBTRETRY_DEFAULT                     (_PROTIMER_IF_LBTRETRY_DEFAULT << 27)      /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_RTCCSYNCHED                          (0x1UL << 28)                              /**< PROTIMER synchronized with the RTCC         */
#define _PROTIMER_IF_RTCCSYNCHED_SHIFT                   28                                         /**< Shift value for PROTIMER_RTCCSYNCHED        */
#define _PROTIMER_IF_RTCCSYNCHED_MASK                    0x10000000UL                               /**< Bit mask for PROTIMER_RTCCSYNCHED           */
#define _PROTIMER_IF_RTCCSYNCHED_DEFAULT                 0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_RTCCSYNCHED_DEFAULT                  (_PROTIMER_IF_RTCCSYNCHED_DEFAULT << 28)   /**< Shifted mode DEFAULT for PROTIMER_IF        */
#define PROTIMER_IF_TOUT0MATCHLBT                        (0x1UL << 29)                              /**< TOUT0 compare match interrupt flag          */
#define _PROTIMER_IF_TOUT0MATCHLBT_SHIFT                 29                                         /**< Shift value for PROTIMER_TOUT0MATCHLBT      */
#define _PROTIMER_IF_TOUT0MATCHLBT_MASK                  0x20000000UL                               /**< Bit mask for PROTIMER_TOUT0MATCHLBT         */
#define _PROTIMER_IF_TOUT0MATCHLBT_DEFAULT               0x00000000UL                               /**< Mode DEFAULT for PROTIMER_IF                */
#define PROTIMER_IF_TOUT0MATCHLBT_DEFAULT                (_PROTIMER_IF_TOUT0MATCHLBT_DEFAULT << 29) /**< Shifted mode DEFAULT for PROTIMER_IF        */

/* Bit fields for PROTIMER IEN */
#define _PROTIMER_IEN_RESETVALUE                         0x00000000UL                                /**< Default value for PROTIMER_IEN              */
#define _PROTIMER_IEN_MASK                               0x3FFFFFF7UL                                /**< Mask for PROTIMER_IEN                       */
#define PROTIMER_IEN_PRECNTOF                            (0x1UL << 0)                                /**< PRECNTOF Interrupt Enable                   */
#define _PROTIMER_IEN_PRECNTOF_SHIFT                     0                                           /**< Shift value for PROTIMER_PRECNTOF           */
#define _PROTIMER_IEN_PRECNTOF_MASK                      0x1UL                                       /**< Bit mask for PROTIMER_PRECNTOF              */
#define _PROTIMER_IEN_PRECNTOF_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_PRECNTOF_DEFAULT                    (_PROTIMER_IEN_PRECNTOF_DEFAULT << 0)       /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_BASECNTOF                           (0x1UL << 1)                                /**< BASECNTOF Interrupt Enable                  */
#define _PROTIMER_IEN_BASECNTOF_SHIFT                    1                                           /**< Shift value for PROTIMER_BASECNTOF          */
#define _PROTIMER_IEN_BASECNTOF_MASK                     0x2UL                                       /**< Bit mask for PROTIMER_BASECNTOF             */
#define _PROTIMER_IEN_BASECNTOF_DEFAULT                  0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_BASECNTOF_DEFAULT                   (_PROTIMER_IEN_BASECNTOF_DEFAULT << 1)      /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_WRAPCNTOF                           (0x1UL << 2)                                /**< WRAPCNTOF Interrupt Enable                  */
#define _PROTIMER_IEN_WRAPCNTOF_SHIFT                    2                                           /**< Shift value for PROTIMER_WRAPCNTOF          */
#define _PROTIMER_IEN_WRAPCNTOF_MASK                     0x4UL                                       /**< Bit mask for PROTIMER_WRAPCNTOF             */
#define _PROTIMER_IEN_WRAPCNTOF_DEFAULT                  0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_WRAPCNTOF_DEFAULT                   (_PROTIMER_IEN_WRAPCNTOF_DEFAULT << 2)      /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_TOUT0                               (0x1UL << 4)                                /**< TOUT0 Interrupt Enable                      */
#define _PROTIMER_IEN_TOUT0_SHIFT                        4                                           /**< Shift value for PROTIMER_TOUT0              */
#define _PROTIMER_IEN_TOUT0_MASK                         0x10UL                                      /**< Bit mask for PROTIMER_TOUT0                 */
#define _PROTIMER_IEN_TOUT0_DEFAULT                      0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_TOUT0_DEFAULT                       (_PROTIMER_IEN_TOUT0_DEFAULT << 4)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_TOUT1                               (0x1UL << 5)                                /**< TOUT1 Interrupt Enable                      */
#define _PROTIMER_IEN_TOUT1_SHIFT                        5                                           /**< Shift value for PROTIMER_TOUT1              */
#define _PROTIMER_IEN_TOUT1_MASK                         0x20UL                                      /**< Bit mask for PROTIMER_TOUT1                 */
#define _PROTIMER_IEN_TOUT1_DEFAULT                      0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_TOUT1_DEFAULT                       (_PROTIMER_IEN_TOUT1_DEFAULT << 5)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_TOUT0MATCH                          (0x1UL << 6)                                /**< TOUT0MATCH Interrupt Enable                 */
#define _PROTIMER_IEN_TOUT0MATCH_SHIFT                   6                                           /**< Shift value for PROTIMER_TOUT0MATCH         */
#define _PROTIMER_IEN_TOUT0MATCH_MASK                    0x40UL                                      /**< Bit mask for PROTIMER_TOUT0MATCH            */
#define _PROTIMER_IEN_TOUT0MATCH_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_TOUT0MATCH_DEFAULT                  (_PROTIMER_IEN_TOUT0MATCH_DEFAULT << 6)     /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_TOUT1MATCH                          (0x1UL << 7)                                /**< TOUT1MATCH Interrupt Enable                 */
#define _PROTIMER_IEN_TOUT1MATCH_SHIFT                   7                                           /**< Shift value for PROTIMER_TOUT1MATCH         */
#define _PROTIMER_IEN_TOUT1MATCH_MASK                    0x80UL                                      /**< Bit mask for PROTIMER_TOUT1MATCH            */
#define _PROTIMER_IEN_TOUT1MATCH_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_TOUT1MATCH_DEFAULT                  (_PROTIMER_IEN_TOUT1MATCH_DEFAULT << 7)     /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC0                                 (0x1UL << 8)                                /**< CC0 Interrupt Enable                        */
#define _PROTIMER_IEN_CC0_SHIFT                          8                                           /**< Shift value for PROTIMER_CC0                */
#define _PROTIMER_IEN_CC0_MASK                           0x100UL                                     /**< Bit mask for PROTIMER_CC0                   */
#define _PROTIMER_IEN_CC0_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC0_DEFAULT                         (_PROTIMER_IEN_CC0_DEFAULT << 8)            /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC1                                 (0x1UL << 9)                                /**< CC1 Interrupt Enable                        */
#define _PROTIMER_IEN_CC1_SHIFT                          9                                           /**< Shift value for PROTIMER_CC1                */
#define _PROTIMER_IEN_CC1_MASK                           0x200UL                                     /**< Bit mask for PROTIMER_CC1                   */
#define _PROTIMER_IEN_CC1_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC1_DEFAULT                         (_PROTIMER_IEN_CC1_DEFAULT << 9)            /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC2                                 (0x1UL << 10)                               /**< CC2 Interrupt Enable                        */
#define _PROTIMER_IEN_CC2_SHIFT                          10                                          /**< Shift value for PROTIMER_CC2                */
#define _PROTIMER_IEN_CC2_MASK                           0x400UL                                     /**< Bit mask for PROTIMER_CC2                   */
#define _PROTIMER_IEN_CC2_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC2_DEFAULT                         (_PROTIMER_IEN_CC2_DEFAULT << 10)           /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC3                                 (0x1UL << 11)                               /**< CC3 Interrupt Enable                        */
#define _PROTIMER_IEN_CC3_SHIFT                          11                                          /**< Shift value for PROTIMER_CC3                */
#define _PROTIMER_IEN_CC3_MASK                           0x800UL                                     /**< Bit mask for PROTIMER_CC3                   */
#define _PROTIMER_IEN_CC3_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC3_DEFAULT                         (_PROTIMER_IEN_CC3_DEFAULT << 11)           /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC4                                 (0x1UL << 12)                               /**< CC4 Interrupt Enable                        */
#define _PROTIMER_IEN_CC4_SHIFT                          12                                          /**< Shift value for PROTIMER_CC4                */
#define _PROTIMER_IEN_CC4_MASK                           0x1000UL                                    /**< Bit mask for PROTIMER_CC4                   */
#define _PROTIMER_IEN_CC4_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC4_DEFAULT                         (_PROTIMER_IEN_CC4_DEFAULT << 12)           /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC5                                 (0x1UL << 13)                               /**< CC5 Interrupt Enable                        */
#define _PROTIMER_IEN_CC5_SHIFT                          13                                          /**< Shift value for PROTIMER_CC5                */
#define _PROTIMER_IEN_CC5_MASK                           0x2000UL                                    /**< Bit mask for PROTIMER_CC5                   */
#define _PROTIMER_IEN_CC5_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC5_DEFAULT                         (_PROTIMER_IEN_CC5_DEFAULT << 13)           /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC6                                 (0x1UL << 14)                               /**< CC6 Interrupt Enable                        */
#define _PROTIMER_IEN_CC6_SHIFT                          14                                          /**< Shift value for PROTIMER_CC6                */
#define _PROTIMER_IEN_CC6_MASK                           0x4000UL                                    /**< Bit mask for PROTIMER_CC6                   */
#define _PROTIMER_IEN_CC6_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC6_DEFAULT                         (_PROTIMER_IEN_CC6_DEFAULT << 14)           /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_CC7                                 (0x1UL << 15)                               /**< CC7 Interrupt Enable                        */
#define _PROTIMER_IEN_CC7_SHIFT                          15                                          /**< Shift value for PROTIMER_CC7                */
#define _PROTIMER_IEN_CC7_MASK                           0x8000UL                                    /**< Bit mask for PROTIMER_CC7                   */
#define _PROTIMER_IEN_CC7_DEFAULT                        0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_CC7_DEFAULT                         (_PROTIMER_IEN_CC7_DEFAULT << 15)           /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF0                                (0x1UL << 16)                               /**< COF0 Interrupt Enable                       */
#define _PROTIMER_IEN_COF0_SHIFT                         16                                          /**< Shift value for PROTIMER_COF0               */
#define _PROTIMER_IEN_COF0_MASK                          0x10000UL                                   /**< Bit mask for PROTIMER_COF0                  */
#define _PROTIMER_IEN_COF0_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF0_DEFAULT                        (_PROTIMER_IEN_COF0_DEFAULT << 16)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF1                                (0x1UL << 17)                               /**< COF1 Interrupt Enable                       */
#define _PROTIMER_IEN_COF1_SHIFT                         17                                          /**< Shift value for PROTIMER_COF1               */
#define _PROTIMER_IEN_COF1_MASK                          0x20000UL                                   /**< Bit mask for PROTIMER_COF1                  */
#define _PROTIMER_IEN_COF1_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF1_DEFAULT                        (_PROTIMER_IEN_COF1_DEFAULT << 17)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF2                                (0x1UL << 18)                               /**< COF2 Interrupt Enable                       */
#define _PROTIMER_IEN_COF2_SHIFT                         18                                          /**< Shift value for PROTIMER_COF2               */
#define _PROTIMER_IEN_COF2_MASK                          0x40000UL                                   /**< Bit mask for PROTIMER_COF2                  */
#define _PROTIMER_IEN_COF2_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF2_DEFAULT                        (_PROTIMER_IEN_COF2_DEFAULT << 18)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF3                                (0x1UL << 19)                               /**< COF3 Interrupt Enable                       */
#define _PROTIMER_IEN_COF3_SHIFT                         19                                          /**< Shift value for PROTIMER_COF3               */
#define _PROTIMER_IEN_COF3_MASK                          0x80000UL                                   /**< Bit mask for PROTIMER_COF3                  */
#define _PROTIMER_IEN_COF3_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF3_DEFAULT                        (_PROTIMER_IEN_COF3_DEFAULT << 19)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF4                                (0x1UL << 20)                               /**< COF4 Interrupt Enable                       */
#define _PROTIMER_IEN_COF4_SHIFT                         20                                          /**< Shift value for PROTIMER_COF4               */
#define _PROTIMER_IEN_COF4_MASK                          0x100000UL                                  /**< Bit mask for PROTIMER_COF4                  */
#define _PROTIMER_IEN_COF4_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF4_DEFAULT                        (_PROTIMER_IEN_COF4_DEFAULT << 20)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF5                                (0x1UL << 21)                               /**< COF5 Interrupt Enable                       */
#define _PROTIMER_IEN_COF5_SHIFT                         21                                          /**< Shift value for PROTIMER_COF5               */
#define _PROTIMER_IEN_COF5_MASK                          0x200000UL                                  /**< Bit mask for PROTIMER_COF5                  */
#define _PROTIMER_IEN_COF5_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF5_DEFAULT                        (_PROTIMER_IEN_COF5_DEFAULT << 21)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF6                                (0x1UL << 22)                               /**< COF6 Interrupt Enable                       */
#define _PROTIMER_IEN_COF6_SHIFT                         22                                          /**< Shift value for PROTIMER_COF6               */
#define _PROTIMER_IEN_COF6_MASK                          0x400000UL                                  /**< Bit mask for PROTIMER_COF6                  */
#define _PROTIMER_IEN_COF6_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF6_DEFAULT                        (_PROTIMER_IEN_COF6_DEFAULT << 22)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_COF7                                (0x1UL << 23)                               /**< COF7 Interrupt Enable                       */
#define _PROTIMER_IEN_COF7_SHIFT                         23                                          /**< Shift value for PROTIMER_COF7               */
#define _PROTIMER_IEN_COF7_MASK                          0x800000UL                                  /**< Bit mask for PROTIMER_COF7                  */
#define _PROTIMER_IEN_COF7_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_COF7_DEFAULT                        (_PROTIMER_IEN_COF7_DEFAULT << 23)          /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_LBTSUCCESS                          (0x1UL << 24)                               /**< LBTSUCCESS Interrupt Enable                 */
#define _PROTIMER_IEN_LBTSUCCESS_SHIFT                   24                                          /**< Shift value for PROTIMER_LBTSUCCESS         */
#define _PROTIMER_IEN_LBTSUCCESS_MASK                    0x1000000UL                                 /**< Bit mask for PROTIMER_LBTSUCCESS            */
#define _PROTIMER_IEN_LBTSUCCESS_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_LBTSUCCESS_DEFAULT                  (_PROTIMER_IEN_LBTSUCCESS_DEFAULT << 24)    /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_LBTFAILURE                          (0x1UL << 25)                               /**< LBTFAILURE Interrupt Enable                 */
#define _PROTIMER_IEN_LBTFAILURE_SHIFT                   25                                          /**< Shift value for PROTIMER_LBTFAILURE         */
#define _PROTIMER_IEN_LBTFAILURE_MASK                    0x2000000UL                                 /**< Bit mask for PROTIMER_LBTFAILURE            */
#define _PROTIMER_IEN_LBTFAILURE_DEFAULT                 0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_LBTFAILURE_DEFAULT                  (_PROTIMER_IEN_LBTFAILURE_DEFAULT << 25)    /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_LBTPAUSED                           (0x1UL << 26)                               /**< LBTPAUSED Interrupt Enable                  */
#define _PROTIMER_IEN_LBTPAUSED_SHIFT                    26                                          /**< Shift value for PROTIMER_LBTPAUSED          */
#define _PROTIMER_IEN_LBTPAUSED_MASK                     0x4000000UL                                 /**< Bit mask for PROTIMER_LBTPAUSED             */
#define _PROTIMER_IEN_LBTPAUSED_DEFAULT                  0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_LBTPAUSED_DEFAULT                   (_PROTIMER_IEN_LBTPAUSED_DEFAULT << 26)     /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_LBTRETRY                            (0x1UL << 27)                               /**< LBTRETRY Interrupt Enable                   */
#define _PROTIMER_IEN_LBTRETRY_SHIFT                     27                                          /**< Shift value for PROTIMER_LBTRETRY           */
#define _PROTIMER_IEN_LBTRETRY_MASK                      0x8000000UL                                 /**< Bit mask for PROTIMER_LBTRETRY              */
#define _PROTIMER_IEN_LBTRETRY_DEFAULT                   0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_LBTRETRY_DEFAULT                    (_PROTIMER_IEN_LBTRETRY_DEFAULT << 27)      /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_RTCCSYNCHED                         (0x1UL << 28)                               /**< RTCCSYNCHED Interrupt Enable                */
#define _PROTIMER_IEN_RTCCSYNCHED_SHIFT                  28                                          /**< Shift value for PROTIMER_RTCCSYNCHED        */
#define _PROTIMER_IEN_RTCCSYNCHED_MASK                   0x10000000UL                                /**< Bit mask for PROTIMER_RTCCSYNCHED           */
#define _PROTIMER_IEN_RTCCSYNCHED_DEFAULT                0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_RTCCSYNCHED_DEFAULT                 (_PROTIMER_IEN_RTCCSYNCHED_DEFAULT << 28)   /**< Shifted mode DEFAULT for PROTIMER_IEN       */
#define PROTIMER_IEN_TOUT0MATCHLBT                       (0x1UL << 29)                               /**< TOUT0MATCHLBT Interrupt Enable              */
#define _PROTIMER_IEN_TOUT0MATCHLBT_SHIFT                29                                          /**< Shift value for PROTIMER_TOUT0MATCHLBT      */
#define _PROTIMER_IEN_TOUT0MATCHLBT_MASK                 0x20000000UL                                /**< Bit mask for PROTIMER_TOUT0MATCHLBT         */
#define _PROTIMER_IEN_TOUT0MATCHLBT_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_IEN               */
#define PROTIMER_IEN_TOUT0MATCHLBT_DEFAULT               (_PROTIMER_IEN_TOUT0MATCHLBT_DEFAULT << 29) /**< Shifted mode DEFAULT for PROTIMER_IEN       */

/* Bit fields for PROTIMER RXCTRL */
#define _PROTIMER_RXCTRL_RESETVALUE                      0x00000000UL                                      /**< Default value for PROTIMER_RXCTRL           */
#define _PROTIMER_RXCTRL_MASK                            0x1F1F1F1FUL                                      /**< Mask for PROTIMER_RXCTRL                    */
#define _PROTIMER_RXCTRL_RXSETEVENT1_SHIFT               0                                                 /**< Shift value for PROTIMER_RXSETEVENT1        */
#define _PROTIMER_RXCTRL_RXSETEVENT1_MASK                0x1FUL                                            /**< Bit mask for PROTIMER_RXSETEVENT1           */
#define _PROTIMER_RXCTRL_RXSETEVENT1_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for PROTIMER_RXCTRL            */
#define _PROTIMER_RXCTRL_RXSETEVENT1_DISABLED            0x00000000UL                                      /**< Mode DISABLED for PROTIMER_RXCTRL           */
#define _PROTIMER_RXCTRL_RXSETEVENT1_ALWAYS              0x00000001UL                                      /**< Mode ALWAYS for PROTIMER_RXCTRL             */
#define _PROTIMER_RXCTRL_RXSETEVENT1_PRECNTOF            0x00000002UL                                      /**< Mode PRECNTOF for PROTIMER_RXCTRL           */
#define _PROTIMER_RXCTRL_RXSETEVENT1_BASECNTOF           0x00000003UL                                      /**< Mode BASECNTOF for PROTIMER_RXCTRL          */
#define _PROTIMER_RXCTRL_RXSETEVENT1_WRAPCNTOF           0x00000004UL                                      /**< Mode WRAPCNTOF for PROTIMER_RXCTRL          */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TOUT0UF             0x00000005UL                                      /**< Mode TOUT0UF for PROTIMER_RXCTRL            */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TOUT1UF             0x00000006UL                                      /**< Mode TOUT1UF for PROTIMER_RXCTRL            */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TOUT0MATCH          0x00000007UL                                      /**< Mode TOUT0MATCH for PROTIMER_RXCTRL         */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TOUT1MATCH          0x00000008UL                                      /**< Mode TOUT1MATCH for PROTIMER_RXCTRL         */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CC0                 0x00000009UL                                      /**< Mode CC0 for PROTIMER_RXCTRL                */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CC1                 0x0000000AUL                                      /**< Mode CC1 for PROTIMER_RXCTRL                */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CC2                 0x0000000BUL                                      /**< Mode CC2 for PROTIMER_RXCTRL                */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CC3                 0x0000000CUL                                      /**< Mode CC3 for PROTIMER_RXCTRL                */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CC4                 0x0000000DUL                                      /**< Mode CC4 for PROTIMER_RXCTRL                */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TXDONE              0x0000000EUL                                      /**< Mode TXDONE for PROTIMER_RXCTRL             */
#define _PROTIMER_RXCTRL_RXSETEVENT1_RXDONE              0x0000000FUL                                      /**< Mode RXDONE for PROTIMER_RXCTRL             */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TXORRXDONE          0x00000010UL                                      /**< Mode TXORRXDONE for PROTIMER_RXCTRL         */
#define _PROTIMER_RXCTRL_RXSETEVENT1_FDET0               0x00000011UL                                      /**< Mode FDET0 for PROTIMER_RXCTRL              */
#define _PROTIMER_RXCTRL_RXSETEVENT1_FDET1               0x00000012UL                                      /**< Mode FDET1 for PROTIMER_RXCTRL              */
#define _PROTIMER_RXCTRL_RXSETEVENT1_FDET0OR1            0x00000013UL                                      /**< Mode FDET0OR1 for PROTIMER_RXCTRL           */
#define _PROTIMER_RXCTRL_RXSETEVENT1_LBTSUCCESS          0x00000014UL                                      /**< Mode LBTSUCCESS for PROTIMER_RXCTRL         */
#define _PROTIMER_RXCTRL_RXSETEVENT1_LBTRETRY            0x00000015UL                                      /**< Mode LBTRETRY for PROTIMER_RXCTRL           */
#define _PROTIMER_RXCTRL_RXSETEVENT1_LBTFAILURE          0x00000016UL                                      /**< Mode LBTFAILURE for PROTIMER_RXCTRL         */
#define _PROTIMER_RXCTRL_RXSETEVENT1_ANYLBT              0x00000017UL                                      /**< Mode ANYLBT for PROTIMER_RXCTRL             */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CCAACK              0x00000018UL                                      /**< Mode CCAACK for PROTIMER_RXCTRL             */
#define _PROTIMER_RXCTRL_RXSETEVENT1_CCA                 0x00000019UL                                      /**< Mode CCA for PROTIMER_RXCTRL                */
#define _PROTIMER_RXCTRL_RXSETEVENT1_NOTCCA              0x0000001AUL                                      /**< Mode NOTCCA for PROTIMER_RXCTRL             */
#define _PROTIMER_RXCTRL_RXSETEVENT1_TOUT0MATCHLBT       0x0000001BUL                                      /**< Mode TOUT0MATCHLBT for PROTIMER_RXCTRL      */
#define PROTIMER_RXCTRL_RXSETEVENT1_DEFAULT              (_PROTIMER_RXCTRL_RXSETEVENT1_DEFAULT << 0)       /**< Shifted mode DEFAULT for PROTIMER_RXCTRL    */
#define PROTIMER_RXCTRL_RXSETEVENT1_DISABLED             (_PROTIMER_RXCTRL_RXSETEVENT1_DISABLED << 0)      /**< Shifted mode DISABLED for PROTIMER_RXCTRL   */
#define PROTIMER_RXCTRL_RXSETEVENT1_ALWAYS               (_PROTIMER_RXCTRL_RXSETEVENT1_ALWAYS << 0)        /**< Shifted mode ALWAYS for PROTIMER_RXCTRL     */
#define PROTIMER_RXCTRL_RXSETEVENT1_PRECNTOF             (_PROTIMER_RXCTRL_RXSETEVENT1_PRECNTOF << 0)      /**< Shifted mode PRECNTOF for PROTIMER_RXCTRL   */
#define PROTIMER_RXCTRL_RXSETEVENT1_BASECNTOF            (_PROTIMER_RXCTRL_RXSETEVENT1_BASECNTOF << 0)     /**< Shifted mode BASECNTOF for PROTIMER_RXCTRL  */
#define PROTIMER_RXCTRL_RXSETEVENT1_WRAPCNTOF            (_PROTIMER_RXCTRL_RXSETEVENT1_WRAPCNTOF << 0)     /**< Shifted mode WRAPCNTOF for PROTIMER_RXCTRL  */
#define PROTIMER_RXCTRL_RXSETEVENT1_TOUT0UF              (_PROTIMER_RXCTRL_RXSETEVENT1_TOUT0UF << 0)       /**< Shifted mode TOUT0UF for PROTIMER_RXCTRL    */
#define PROTIMER_RXCTRL_RXSETEVENT1_TOUT1UF              (_PROTIMER_RXCTRL_RXSETEVENT1_TOUT1UF << 0)       /**< Shifted mode TOUT1UF for PROTIMER_RXCTRL    */
#define PROTIMER_RXCTRL_RXSETEVENT1_TOUT0MATCH           (_PROTIMER_RXCTRL_RXSETEVENT1_TOUT0MATCH << 0)    /**< Shifted mode TOUT0MATCH for PROTIMER_RXCTRL */
#define PROTIMER_RXCTRL_RXSETEVENT1_TOUT1MATCH           (_PROTIMER_RXCTRL_RXSETEVENT1_TOUT1MATCH << 0)    /**< Shifted mode TOUT1MATCH for PROTIMER_RXCTRL */
#define PROTIMER_RXCTRL_RXSETEVENT1_CC0                  (_PROTIMER_RXCTRL_RXSETEVENT1_CC0 << 0)           /**< Shifted mode CC0 for PROTIMER_RXCTRL        */
#define PROTIMER_RXCTRL_RXSETEVENT1_CC1                  (_PROTIMER_RXCTRL_RXSETEVENT1_CC1 << 0)           /**< Shifted mode CC1 for PROTIMER_RXCTRL        */
#define PROTIMER_RXCTRL_RXSETEVENT1_CC2                  (_PROTIMER_RXCTRL_RXSETEVENT1_CC2 << 0)           /**< Shifted mode CC2 for PROTIMER_RXCTRL        */
#define PROTIMER_RXCTRL_RXSETEVENT1_CC3                  (_PROTIMER_RXCTRL_RXSETEVENT1_CC3 << 0)           /**< Shifted mode CC3 for PROTIMER_RXCTRL        */
#define PROTIMER_RXCTRL_RXSETEVENT1_CC4                  (_PROTIMER_RXCTRL_RXSETEVENT1_CC4 << 0)           /**< Shifted mode CC4 for PROTIMER_RXCTRL        */
#define PROTIMER_RXCTRL_RXSETEVENT1_TXDONE               (_PROTIMER_RXCTRL_RXSETEVENT1_TXDONE << 0)        /**< Shifted mode TXDONE for PROTIMER_RXCTRL     */
#define PROTIMER_RXCTRL_RXSETEVENT1_RXDONE               (_PROTIMER_RXCTRL_RXSETEVENT1_RXDONE << 0)        /**< Shifted mode RXDONE for PROTIMER_RXCTRL     */
#define PROTIMER_RXCTRL_RXSETEVENT1_TXORRXDONE           (_PROTIMER_RXCTRL_RXSETEVENT1_TXORRXDONE << 0)    /**< Shifted mode TXORRXDONE for PROTIMER_RXCTRL */
#define PROTIMER_RXCTRL_RXSETEVENT1_FDET0                (_PROTIMER_RXCTRL_RXSETEVENT1_FDET0 << 0)         /**< Shifted mode FDET0 for PROTIMER_RXCTRL      */
#define PROTIMER_RXCTRL_RXSETEVENT1_FDET1                (_PROTIMER_RXCTRL_RXSETEVENT1_FDET1 << 0)         /**< Shifted mode FDET1 for PROTIMER_RXCTRL      */
#define PROTIMER_RXCTRL_RXSETEVENT1_FDET0OR1             (_PROTIMER_RXCTRL_RXSETEVENT1_FDET0OR1 << 0)      /**< Shifted mode FDET0OR1 for PROTIMER_RXCTRL   */
#define PROTIMER_RXCTRL_RXSETEVENT1_LBTSUCCESS           (_PROTIMER_RXCTRL_RXSETEVENT1_LBTSUCCESS << 0)    /**< Shifted mode LBTSUCCESS for PROTIMER_RXCTRL */
#define PROTIMER_RXCTRL_RXSETEVENT1_LBTRETRY             (_PROTIMER_RXCTRL_RXSETEVENT1_LBTRETRY << 0)      /**< Shifted mode LBTRETRY for PROTIMER_RXCTRL   */
#define PROTIMER_RXCTRL_RXSETEVENT1_LBTFAILURE           (_PROTIMER_RXCTRL_RXSETEVENT1_LBTFAILURE << 0)    /**< Shifted mode LBTFAILURE for PROTIMER_RXCTRL */
#define PROTIMER_RXCTRL_RXSETEVENT1_ANYLBT               (_PROTIMER_RXCTRL_RXSETEVENT1_ANYLBT << 0)        /**< Shifted mode ANYLBT for PROTIMER_RXCTRL     */
#define PROTIMER_RXCTRL_RXSETEVENT1_CCAACK               (_PROTIMER_RXCTRL_RXSETEVENT1_CCAACK << 0)        /**< Shifted mode CCAACK for PROTIMER_RXCTRL     */
#define PROTIMER_RXCTRL_RXSETEVENT1_CCA                  (_PROTIMER_RXCTRL_RXSETEVENT1_CCA << 0)           /**< Shifted mode CCA for PROTIMER_RXCTRL        */
#define PROTIMER_RXCTRL_RXSETEVENT1_NOTCCA               (_PROTIMER_RXCTRL_RXSETEVENT1_NOTCCA << 0)        /**< Shifted mode NOTCCA for PROTIMER_RXCTRL     */
#define PROTIMER_RXCTRL_RXSETEVENT1_TOUT0MATCHLBT        (_PROTIMER_RXCTRL_RXSETEVENT1_TOUT0MATCHLBT << 0) /**< Shifted mode TOUT0MATCHLBT for PROTIMER_RXCTRL*/
#define _PROTIMER_RXCTRL_RXSETEVENT2_SHIFT               8                                                 /**< Shift value for PROTIMER_RXSETEVENT2        */
#define _PROTIMER_RXCTRL_RXSETEVENT2_MASK                0x1F00UL                                          /**< Bit mask for PROTIMER_RXSETEVENT2           */
#define _PROTIMER_RXCTRL_RXSETEVENT2_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for PROTIMER_RXCTRL            */
#define PROTIMER_RXCTRL_RXSETEVENT2_DEFAULT              (_PROTIMER_RXCTRL_RXSETEVENT2_DEFAULT << 8)       /**< Shifted mode DEFAULT for PROTIMER_RXCTRL    */
#define _PROTIMER_RXCTRL_RXCLREVENT1_SHIFT               16                                                /**< Shift value for PROTIMER_RXCLREVENT1        */
#define _PROTIMER_RXCTRL_RXCLREVENT1_MASK                0x1F0000UL                                        /**< Bit mask for PROTIMER_RXCLREVENT1           */
#define _PROTIMER_RXCTRL_RXCLREVENT1_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for PROTIMER_RXCTRL            */
#define PROTIMER_RXCTRL_RXCLREVENT1_DEFAULT              (_PROTIMER_RXCTRL_RXCLREVENT1_DEFAULT << 16)      /**< Shifted mode DEFAULT for PROTIMER_RXCTRL    */
#define _PROTIMER_RXCTRL_RXCLREVENT2_SHIFT               24                                                /**< Shift value for PROTIMER_RXCLREVENT2        */
#define _PROTIMER_RXCTRL_RXCLREVENT2_MASK                0x1F000000UL                                      /**< Bit mask for PROTIMER_RXCLREVENT2           */
#define _PROTIMER_RXCTRL_RXCLREVENT2_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for PROTIMER_RXCTRL            */
#define PROTIMER_RXCTRL_RXCLREVENT2_DEFAULT              (_PROTIMER_RXCTRL_RXCLREVENT2_DEFAULT << 24)      /**< Shifted mode DEFAULT for PROTIMER_RXCTRL    */

/* Bit fields for PROTIMER TXCTRL */
#define _PROTIMER_TXCTRL_RESETVALUE                      0x00000000UL                                      /**< Default value for PROTIMER_TXCTRL           */
#define _PROTIMER_TXCTRL_MASK                            0x00001F1FUL                                      /**< Mask for PROTIMER_TXCTRL                    */
#define _PROTIMER_TXCTRL_TXSETEVENT1_SHIFT               0                                                 /**< Shift value for PROTIMER_TXSETEVENT1        */
#define _PROTIMER_TXCTRL_TXSETEVENT1_MASK                0x1FUL                                            /**< Bit mask for PROTIMER_TXSETEVENT1           */
#define _PROTIMER_TXCTRL_TXSETEVENT1_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for PROTIMER_TXCTRL            */
#define _PROTIMER_TXCTRL_TXSETEVENT1_DISABLED            0x00000000UL                                      /**< Mode DISABLED for PROTIMER_TXCTRL           */
#define _PROTIMER_TXCTRL_TXSETEVENT1_ALWAYS              0x00000001UL                                      /**< Mode ALWAYS for PROTIMER_TXCTRL             */
#define _PROTIMER_TXCTRL_TXSETEVENT1_PRECNTOF            0x00000002UL                                      /**< Mode PRECNTOF for PROTIMER_TXCTRL           */
#define _PROTIMER_TXCTRL_TXSETEVENT1_BASECNTOF           0x00000003UL                                      /**< Mode BASECNTOF for PROTIMER_TXCTRL          */
#define _PROTIMER_TXCTRL_TXSETEVENT1_WRAPCNTOF           0x00000004UL                                      /**< Mode WRAPCNTOF for PROTIMER_TXCTRL          */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TOUT0UF             0x00000005UL                                      /**< Mode TOUT0UF for PROTIMER_TXCTRL            */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TOUT1UF             0x00000006UL                                      /**< Mode TOUT1UF for PROTIMER_TXCTRL            */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TOUT0MATCH          0x00000007UL                                      /**< Mode TOUT0MATCH for PROTIMER_TXCTRL         */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TOUT1MATCH          0x00000008UL                                      /**< Mode TOUT1MATCH for PROTIMER_TXCTRL         */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CC0                 0x00000009UL                                      /**< Mode CC0 for PROTIMER_TXCTRL                */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CC1                 0x0000000AUL                                      /**< Mode CC1 for PROTIMER_TXCTRL                */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CC2                 0x0000000BUL                                      /**< Mode CC2 for PROTIMER_TXCTRL                */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CC3                 0x0000000CUL                                      /**< Mode CC3 for PROTIMER_TXCTRL                */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CC4                 0x0000000DUL                                      /**< Mode CC4 for PROTIMER_TXCTRL                */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TXDONE              0x0000000EUL                                      /**< Mode TXDONE for PROTIMER_TXCTRL             */
#define _PROTIMER_TXCTRL_TXSETEVENT1_RXDONE              0x0000000FUL                                      /**< Mode RXDONE for PROTIMER_TXCTRL             */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TXORRXDONE          0x00000010UL                                      /**< Mode TXORRXDONE for PROTIMER_TXCTRL         */
#define _PROTIMER_TXCTRL_TXSETEVENT1_FDET0               0x00000011UL                                      /**< Mode FDET0 for PROTIMER_TXCTRL              */
#define _PROTIMER_TXCTRL_TXSETEVENT1_FDET1               0x00000012UL                                      /**< Mode FDET1 for PROTIMER_TXCTRL              */
#define _PROTIMER_TXCTRL_TXSETEVENT1_FDET0OR1            0x00000013UL                                      /**< Mode FDET0OR1 for PROTIMER_TXCTRL           */
#define _PROTIMER_TXCTRL_TXSETEVENT1_LBTSUCCESS          0x00000014UL                                      /**< Mode LBTSUCCESS for PROTIMER_TXCTRL         */
#define _PROTIMER_TXCTRL_TXSETEVENT1_LBTRETRY            0x00000015UL                                      /**< Mode LBTRETRY for PROTIMER_TXCTRL           */
#define _PROTIMER_TXCTRL_TXSETEVENT1_LBTFAILURE          0x00000016UL                                      /**< Mode LBTFAILURE for PROTIMER_TXCTRL         */
#define _PROTIMER_TXCTRL_TXSETEVENT1_ANYLBT              0x00000017UL                                      /**< Mode ANYLBT for PROTIMER_TXCTRL             */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CCAACK              0x00000018UL                                      /**< Mode CCAACK for PROTIMER_TXCTRL             */
#define _PROTIMER_TXCTRL_TXSETEVENT1_CCA                 0x00000019UL                                      /**< Mode CCA for PROTIMER_TXCTRL                */
#define _PROTIMER_TXCTRL_TXSETEVENT1_NOTCCA              0x0000001AUL                                      /**< Mode NOTCCA for PROTIMER_TXCTRL             */
#define _PROTIMER_TXCTRL_TXSETEVENT1_TOUT0MATCHLBT       0x0000001BUL                                      /**< Mode TOUT0MATCHLBT for PROTIMER_TXCTRL      */
#define PROTIMER_TXCTRL_TXSETEVENT1_DEFAULT              (_PROTIMER_TXCTRL_TXSETEVENT1_DEFAULT << 0)       /**< Shifted mode DEFAULT for PROTIMER_TXCTRL    */
#define PROTIMER_TXCTRL_TXSETEVENT1_DISABLED             (_PROTIMER_TXCTRL_TXSETEVENT1_DISABLED << 0)      /**< Shifted mode DISABLED for PROTIMER_TXCTRL   */
#define PROTIMER_TXCTRL_TXSETEVENT1_ALWAYS               (_PROTIMER_TXCTRL_TXSETEVENT1_ALWAYS << 0)        /**< Shifted mode ALWAYS for PROTIMER_TXCTRL     */
#define PROTIMER_TXCTRL_TXSETEVENT1_PRECNTOF             (_PROTIMER_TXCTRL_TXSETEVENT1_PRECNTOF << 0)      /**< Shifted mode PRECNTOF for PROTIMER_TXCTRL   */
#define PROTIMER_TXCTRL_TXSETEVENT1_BASECNTOF            (_PROTIMER_TXCTRL_TXSETEVENT1_BASECNTOF << 0)     /**< Shifted mode BASECNTOF for PROTIMER_TXCTRL  */
#define PROTIMER_TXCTRL_TXSETEVENT1_WRAPCNTOF            (_PROTIMER_TXCTRL_TXSETEVENT1_WRAPCNTOF << 0)     /**< Shifted mode WRAPCNTOF for PROTIMER_TXCTRL  */
#define PROTIMER_TXCTRL_TXSETEVENT1_TOUT0UF              (_PROTIMER_TXCTRL_TXSETEVENT1_TOUT0UF << 0)       /**< Shifted mode TOUT0UF for PROTIMER_TXCTRL    */
#define PROTIMER_TXCTRL_TXSETEVENT1_TOUT1UF              (_PROTIMER_TXCTRL_TXSETEVENT1_TOUT1UF << 0)       /**< Shifted mode TOUT1UF for PROTIMER_TXCTRL    */
#define PROTIMER_TXCTRL_TXSETEVENT1_TOUT0MATCH           (_PROTIMER_TXCTRL_TXSETEVENT1_TOUT0MATCH << 0)    /**< Shifted mode TOUT0MATCH for PROTIMER_TXCTRL */
#define PROTIMER_TXCTRL_TXSETEVENT1_TOUT1MATCH           (_PROTIMER_TXCTRL_TXSETEVENT1_TOUT1MATCH << 0)    /**< Shifted mode TOUT1MATCH for PROTIMER_TXCTRL */
#define PROTIMER_TXCTRL_TXSETEVENT1_CC0                  (_PROTIMER_TXCTRL_TXSETEVENT1_CC0 << 0)           /**< Shifted mode CC0 for PROTIMER_TXCTRL        */
#define PROTIMER_TXCTRL_TXSETEVENT1_CC1                  (_PROTIMER_TXCTRL_TXSETEVENT1_CC1 << 0)           /**< Shifted mode CC1 for PROTIMER_TXCTRL        */
#define PROTIMER_TXCTRL_TXSETEVENT1_CC2                  (_PROTIMER_TXCTRL_TXSETEVENT1_CC2 << 0)           /**< Shifted mode CC2 for PROTIMER_TXCTRL        */
#define PROTIMER_TXCTRL_TXSETEVENT1_CC3                  (_PROTIMER_TXCTRL_TXSETEVENT1_CC3 << 0)           /**< Shifted mode CC3 for PROTIMER_TXCTRL        */
#define PROTIMER_TXCTRL_TXSETEVENT1_CC4                  (_PROTIMER_TXCTRL_TXSETEVENT1_CC4 << 0)           /**< Shifted mode CC4 for PROTIMER_TXCTRL        */
#define PROTIMER_TXCTRL_TXSETEVENT1_TXDONE               (_PROTIMER_TXCTRL_TXSETEVENT1_TXDONE << 0)        /**< Shifted mode TXDONE for PROTIMER_TXCTRL     */
#define PROTIMER_TXCTRL_TXSETEVENT1_RXDONE               (_PROTIMER_TXCTRL_TXSETEVENT1_RXDONE << 0)        /**< Shifted mode RXDONE for PROTIMER_TXCTRL     */
#define PROTIMER_TXCTRL_TXSETEVENT1_TXORRXDONE           (_PROTIMER_TXCTRL_TXSETEVENT1_TXORRXDONE << 0)    /**< Shifted mode TXORRXDONE for PROTIMER_TXCTRL */
#define PROTIMER_TXCTRL_TXSETEVENT1_FDET0                (_PROTIMER_TXCTRL_TXSETEVENT1_FDET0 << 0)         /**< Shifted mode FDET0 for PROTIMER_TXCTRL      */
#define PROTIMER_TXCTRL_TXSETEVENT1_FDET1                (_PROTIMER_TXCTRL_TXSETEVENT1_FDET1 << 0)         /**< Shifted mode FDET1 for PROTIMER_TXCTRL      */
#define PROTIMER_TXCTRL_TXSETEVENT1_FDET0OR1             (_PROTIMER_TXCTRL_TXSETEVENT1_FDET0OR1 << 0)      /**< Shifted mode FDET0OR1 for PROTIMER_TXCTRL   */
#define PROTIMER_TXCTRL_TXSETEVENT1_LBTSUCCESS           (_PROTIMER_TXCTRL_TXSETEVENT1_LBTSUCCESS << 0)    /**< Shifted mode LBTSUCCESS for PROTIMER_TXCTRL */
#define PROTIMER_TXCTRL_TXSETEVENT1_LBTRETRY             (_PROTIMER_TXCTRL_TXSETEVENT1_LBTRETRY << 0)      /**< Shifted mode LBTRETRY for PROTIMER_TXCTRL   */
#define PROTIMER_TXCTRL_TXSETEVENT1_LBTFAILURE           (_PROTIMER_TXCTRL_TXSETEVENT1_LBTFAILURE << 0)    /**< Shifted mode LBTFAILURE for PROTIMER_TXCTRL */
#define PROTIMER_TXCTRL_TXSETEVENT1_ANYLBT               (_PROTIMER_TXCTRL_TXSETEVENT1_ANYLBT << 0)        /**< Shifted mode ANYLBT for PROTIMER_TXCTRL     */
#define PROTIMER_TXCTRL_TXSETEVENT1_CCAACK               (_PROTIMER_TXCTRL_TXSETEVENT1_CCAACK << 0)        /**< Shifted mode CCAACK for PROTIMER_TXCTRL     */
#define PROTIMER_TXCTRL_TXSETEVENT1_CCA                  (_PROTIMER_TXCTRL_TXSETEVENT1_CCA << 0)           /**< Shifted mode CCA for PROTIMER_TXCTRL        */
#define PROTIMER_TXCTRL_TXSETEVENT1_NOTCCA               (_PROTIMER_TXCTRL_TXSETEVENT1_NOTCCA << 0)        /**< Shifted mode NOTCCA for PROTIMER_TXCTRL     */
#define PROTIMER_TXCTRL_TXSETEVENT1_TOUT0MATCHLBT        (_PROTIMER_TXCTRL_TXSETEVENT1_TOUT0MATCHLBT << 0) /**< Shifted mode TOUT0MATCHLBT for PROTIMER_TXCTRL*/
#define _PROTIMER_TXCTRL_TXSETEVENT2_SHIFT               8                                                 /**< Shift value for PROTIMER_TXSETEVENT2        */
#define _PROTIMER_TXCTRL_TXSETEVENT2_MASK                0x1F00UL                                          /**< Bit mask for PROTIMER_TXSETEVENT2           */
#define _PROTIMER_TXCTRL_TXSETEVENT2_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for PROTIMER_TXCTRL            */
#define PROTIMER_TXCTRL_TXSETEVENT2_DEFAULT              (_PROTIMER_TXCTRL_TXSETEVENT2_DEFAULT << 8)       /**< Shifted mode DEFAULT for PROTIMER_TXCTRL    */

/* Bit fields for PROTIMER ETSI */
#define _PROTIMER_ETSI_RESETVALUE                        0x00000000UL                                         /**< Default value for PROTIMER_ETSI             */
#define _PROTIMER_ETSI_MASK                              0x03FFFFFFUL                                         /**< Mask for PROTIMER_ETSI                      */
#define PROTIMER_ETSI_ETSIEN                             (0x1UL << 0)                                         /**< ETSI LBT enabling                           */
#define _PROTIMER_ETSI_ETSIEN_SHIFT                      0                                                    /**< Shift value for PROTIMER_ETSIEN             */
#define _PROTIMER_ETSI_ETSIEN_MASK                       0x1UL                                                /**< Bit mask for PROTIMER_ETSIEN                */
#define _PROTIMER_ETSI_ETSIEN_DEFAULT                    0x00000000UL                                         /**< Mode DEFAULT for PROTIMER_ETSI              */
#define PROTIMER_ETSI_ETSIEN_DEFAULT                     (_PROTIMER_ETSI_ETSIEN_DEFAULT << 0)                 /**< Shifted mode DEFAULT for PROTIMER_ETSI      */
#define PROTIMER_ETSI_GRANULARLESSTHANRXWARM             (0x1UL << 1)                                         /**< Granular less than RXWARM                   */
#define _PROTIMER_ETSI_GRANULARLESSTHANRXWARM_SHIFT      1                                                    /**< Shift value for PROTIMER_GRANULARLESSTHANRXWARM*/
#define _PROTIMER_ETSI_GRANULARLESSTHANRXWARM_MASK       0x2UL                                                /**< Bit mask for PROTIMER_GRANULARLESSTHANRXWARM*/
#define _PROTIMER_ETSI_GRANULARLESSTHANRXWARM_DEFAULT    0x00000000UL                                         /**< Mode DEFAULT for PROTIMER_ETSI              */
#define PROTIMER_ETSI_GRANULARLESSTHANRXWARM_DEFAULT     (_PROTIMER_ETSI_GRANULARLESSTHANRXWARM_DEFAULT << 1) /**< Shifted mode DEFAULT for PROTIMER_ETSI      */
#define _PROTIMER_ETSI_RXWARMTHLD_SHIFT                  2                                                    /**< Shift value for PROTIMER_RXWARMTHLD         */
#define _PROTIMER_ETSI_RXWARMTHLD_MASK                   0x3FCUL                                              /**< Bit mask for PROTIMER_RXWARMTHLD            */
#define _PROTIMER_ETSI_RXWARMTHLD_DEFAULT                0x00000000UL                                         /**< Mode DEFAULT for PROTIMER_ETSI              */
#define PROTIMER_ETSI_RXWARMTHLD_DEFAULT                 (_PROTIMER_ETSI_RXWARMTHLD_DEFAULT << 2)             /**< Shifted mode DEFAULT for PROTIMER_ETSI      */
#define _PROTIMER_ETSI_CCAFIXED_SHIFT                    10                                                   /**< Shift value for PROTIMER_CCAFIXED           */
#define _PROTIMER_ETSI_CCAFIXED_MASK                     0x3FFFC00UL                                          /**< Bit mask for PROTIMER_CCAFIXED              */
#define _PROTIMER_ETSI_CCAFIXED_DEFAULT                  0x00000000UL                                         /**< Mode DEFAULT for PROTIMER_ETSI              */
#define PROTIMER_ETSI_CCAFIXED_DEFAULT                   (_PROTIMER_ETSI_CCAFIXED_DEFAULT << 10)              /**< Shifted mode DEFAULT for PROTIMER_ETSI      */

/* Bit fields for PROTIMER LBTSTATE1 */
#define _PROTIMER_LBTSTATE1_RESETVALUE                   0x00000000UL                                /**< Default value for PROTIMER_LBTSTATE1        */
#define _PROTIMER_LBTSTATE1_MASK                         0x00000FFFUL                                /**< Mask for PROTIMER_LBTSTATE1                 */
#define _PROTIMER_LBTSTATE1_CCACNT_SHIFT                 0                                           /**< Shift value for PROTIMER_CCACNT             */
#define _PROTIMER_LBTSTATE1_CCACNT_MASK                  0xFUL                                       /**< Bit mask for PROTIMER_CCACNT                */
#define _PROTIMER_LBTSTATE1_CCACNT_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for PROTIMER_LBTSTATE1         */
#define PROTIMER_LBTSTATE1_CCACNT_DEFAULT                (_PROTIMER_LBTSTATE1_CCACNT_DEFAULT << 0)   /**< Shifted mode DEFAULT for PROTIMER_LBTSTATE1 */
#define _PROTIMER_LBTSTATE1_EXP_SHIFT                    4                                           /**< Shift value for PROTIMER_EXP                */
#define _PROTIMER_LBTSTATE1_EXP_MASK                     0xF0UL                                      /**< Bit mask for PROTIMER_EXP                   */
#define _PROTIMER_LBTSTATE1_EXP_DEFAULT                  0x00000000UL                                /**< Mode DEFAULT for PROTIMER_LBTSTATE1         */
#define PROTIMER_LBTSTATE1_EXP_DEFAULT                   (_PROTIMER_LBTSTATE1_EXP_DEFAULT << 4)      /**< Shifted mode DEFAULT for PROTIMER_LBTSTATE1 */
#define _PROTIMER_LBTSTATE1_RETRYCNT_SHIFT               8                                           /**< Shift value for PROTIMER_RETRYCNT           */
#define _PROTIMER_LBTSTATE1_RETRYCNT_MASK                0xF00UL                                     /**< Bit mask for PROTIMER_RETRYCNT              */
#define _PROTIMER_LBTSTATE1_RETRYCNT_DEFAULT             0x00000000UL                                /**< Mode DEFAULT for PROTIMER_LBTSTATE1         */
#define PROTIMER_LBTSTATE1_RETRYCNT_DEFAULT              (_PROTIMER_LBTSTATE1_RETRYCNT_DEFAULT << 8) /**< Shifted mode DEFAULT for PROTIMER_LBTSTATE1 */

/* Bit fields for PROTIMER RANDOMFW0 */
#define _PROTIMER_RANDOMFW0_RESETVALUE                   0x00000000UL                                /**< Default value for PROTIMER_RANDOMFW0        */
#define _PROTIMER_RANDOMFW0_MASK                         0x07FFFFFFUL                                /**< Mask for PROTIMER_RANDOMFW0                 */
#define _PROTIMER_RANDOMFW0_RANDOM0_SHIFT                0                                           /**< Shift value for PROTIMER_RANDOM0            */
#define _PROTIMER_RANDOMFW0_RANDOM0_MASK                 0x1FFUL                                     /**< Bit mask for PROTIMER_RANDOM0               */
#define _PROTIMER_RANDOMFW0_RANDOM0_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_RANDOMFW0         */
#define PROTIMER_RANDOMFW0_RANDOM0_DEFAULT               (_PROTIMER_RANDOMFW0_RANDOM0_DEFAULT << 0)  /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW0 */
#define _PROTIMER_RANDOMFW0_RANDOM1_SHIFT                9                                           /**< Shift value for PROTIMER_RANDOM1            */
#define _PROTIMER_RANDOMFW0_RANDOM1_MASK                 0x3FE00UL                                   /**< Bit mask for PROTIMER_RANDOM1               */
#define _PROTIMER_RANDOMFW0_RANDOM1_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_RANDOMFW0         */
#define PROTIMER_RANDOMFW0_RANDOM1_DEFAULT               (_PROTIMER_RANDOMFW0_RANDOM1_DEFAULT << 9)  /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW0 */
#define _PROTIMER_RANDOMFW0_RANDOM2_SHIFT                18                                          /**< Shift value for PROTIMER_RANDOM2            */
#define _PROTIMER_RANDOMFW0_RANDOM2_MASK                 0x7FC0000UL                                 /**< Bit mask for PROTIMER_RANDOM2               */
#define _PROTIMER_RANDOMFW0_RANDOM2_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_RANDOMFW0         */
#define PROTIMER_RANDOMFW0_RANDOM2_DEFAULT               (_PROTIMER_RANDOMFW0_RANDOM2_DEFAULT << 18) /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW0 */

/* Bit fields for PROTIMER RANDOMFW1 */
#define _PROTIMER_RANDOMFW1_RESETVALUE                   0x00000000UL                                /**< Default value for PROTIMER_RANDOMFW1        */
#define _PROTIMER_RANDOMFW1_MASK                         0x07FFFFFFUL                                /**< Mask for PROTIMER_RANDOMFW1                 */
#define _PROTIMER_RANDOMFW1_RANDOM3_SHIFT                0                                           /**< Shift value for PROTIMER_RANDOM3            */
#define _PROTIMER_RANDOMFW1_RANDOM3_MASK                 0x1FFUL                                     /**< Bit mask for PROTIMER_RANDOM3               */
#define _PROTIMER_RANDOMFW1_RANDOM3_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_RANDOMFW1         */
#define PROTIMER_RANDOMFW1_RANDOM3_DEFAULT               (_PROTIMER_RANDOMFW1_RANDOM3_DEFAULT << 0)  /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW1 */
#define _PROTIMER_RANDOMFW1_RANDOM4_SHIFT                9                                           /**< Shift value for PROTIMER_RANDOM4            */
#define _PROTIMER_RANDOMFW1_RANDOM4_MASK                 0x3FE00UL                                   /**< Bit mask for PROTIMER_RANDOM4               */
#define _PROTIMER_RANDOMFW1_RANDOM4_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_RANDOMFW1         */
#define PROTIMER_RANDOMFW1_RANDOM4_DEFAULT               (_PROTIMER_RANDOMFW1_RANDOM4_DEFAULT << 9)  /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW1 */
#define _PROTIMER_RANDOMFW1_RANDOM5_SHIFT                18                                          /**< Shift value for PROTIMER_RANDOM5            */
#define _PROTIMER_RANDOMFW1_RANDOM5_MASK                 0x7FC0000UL                                 /**< Bit mask for PROTIMER_RANDOM5               */
#define _PROTIMER_RANDOMFW1_RANDOM5_DEFAULT              0x00000000UL                                /**< Mode DEFAULT for PROTIMER_RANDOMFW1         */
#define PROTIMER_RANDOMFW1_RANDOM5_DEFAULT               (_PROTIMER_RANDOMFW1_RANDOM5_DEFAULT << 18) /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW1 */

/* Bit fields for PROTIMER RANDOMFW2 */
#define _PROTIMER_RANDOMFW2_RESETVALUE                   0x00000000UL                               /**< Default value for PROTIMER_RANDOMFW2        */
#define _PROTIMER_RANDOMFW2_MASK                         0x0003FFFFUL                               /**< Mask for PROTIMER_RANDOMFW2                 */
#define _PROTIMER_RANDOMFW2_RANDOM6_SHIFT                0                                          /**< Shift value for PROTIMER_RANDOM6            */
#define _PROTIMER_RANDOMFW2_RANDOM6_MASK                 0x1FFUL                                    /**< Bit mask for PROTIMER_RANDOM6               */
#define _PROTIMER_RANDOMFW2_RANDOM6_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for PROTIMER_RANDOMFW2         */
#define PROTIMER_RANDOMFW2_RANDOM6_DEFAULT               (_PROTIMER_RANDOMFW2_RANDOM6_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW2 */
#define _PROTIMER_RANDOMFW2_RANDOM7_SHIFT                9                                          /**< Shift value for PROTIMER_RANDOM7            */
#define _PROTIMER_RANDOMFW2_RANDOM7_MASK                 0x3FE00UL                                  /**< Bit mask for PROTIMER_RANDOM7               */
#define _PROTIMER_RANDOMFW2_RANDOM7_DEFAULT              0x00000000UL                               /**< Mode DEFAULT for PROTIMER_RANDOMFW2         */
#define PROTIMER_RANDOMFW2_RANDOM7_DEFAULT               (_PROTIMER_RANDOMFW2_RANDOM7_DEFAULT << 9) /**< Shifted mode DEFAULT for PROTIMER_RANDOMFW2 */

/* Bit fields for PROTIMER SEQIF */
#define _PROTIMER_SEQIF_RESETVALUE                       0x00000000UL                                  /**< Default value for PROTIMER_SEQIF            */
#define _PROTIMER_SEQIF_MASK                             0x3FFFFFF7UL                                  /**< Mask for PROTIMER_SEQIF                     */
#define PROTIMER_SEQIF_PRECNTOF                          (0x1UL << 0)                                  /**< PRECNT Overflow Interrupt Flag              */
#define _PROTIMER_SEQIF_PRECNTOF_SHIFT                   0                                             /**< Shift value for PROTIMER_PRECNTOF           */
#define _PROTIMER_SEQIF_PRECNTOF_MASK                    0x1UL                                         /**< Bit mask for PROTIMER_PRECNTOF              */
#define _PROTIMER_SEQIF_PRECNTOF_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_PRECNTOF_DEFAULT                  (_PROTIMER_SEQIF_PRECNTOF_DEFAULT << 0)       /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_BASECNTOF                         (0x1UL << 1)                                  /**< BASECNT Overflow Interrupt Flag             */
#define _PROTIMER_SEQIF_BASECNTOF_SHIFT                  1                                             /**< Shift value for PROTIMER_BASECNTOF          */
#define _PROTIMER_SEQIF_BASECNTOF_MASK                   0x2UL                                         /**< Bit mask for PROTIMER_BASECNTOF             */
#define _PROTIMER_SEQIF_BASECNTOF_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_BASECNTOF_DEFAULT                 (_PROTIMER_SEQIF_BASECNTOF_DEFAULT << 1)      /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_WRAPCNTOF                         (0x1UL << 2)                                  /**< WRAPCNT Overflow Interrupt Flag             */
#define _PROTIMER_SEQIF_WRAPCNTOF_SHIFT                  2                                             /**< Shift value for PROTIMER_WRAPCNTOF          */
#define _PROTIMER_SEQIF_WRAPCNTOF_MASK                   0x4UL                                         /**< Bit mask for PROTIMER_WRAPCNTOF             */
#define _PROTIMER_SEQIF_WRAPCNTOF_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_WRAPCNTOF_DEFAULT                 (_PROTIMER_SEQIF_WRAPCNTOF_DEFAULT << 2)      /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_TOUT0                             (0x1UL << 4)                                  /**< TOUT0 underflow interrupt flag              */
#define _PROTIMER_SEQIF_TOUT0_SHIFT                      4                                             /**< Shift value for PROTIMER_TOUT0              */
#define _PROTIMER_SEQIF_TOUT0_MASK                       0x10UL                                        /**< Bit mask for PROTIMER_TOUT0                 */
#define _PROTIMER_SEQIF_TOUT0_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_TOUT0_DEFAULT                     (_PROTIMER_SEQIF_TOUT0_DEFAULT << 4)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_TOUT1                             (0x1UL << 5)                                  /**< TOUT1 underflow interrupt flag              */
#define _PROTIMER_SEQIF_TOUT1_SHIFT                      5                                             /**< Shift value for PROTIMER_TOUT1              */
#define _PROTIMER_SEQIF_TOUT1_MASK                       0x20UL                                        /**< Bit mask for PROTIMER_TOUT1                 */
#define _PROTIMER_SEQIF_TOUT1_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_TOUT1_DEFAULT                     (_PROTIMER_SEQIF_TOUT1_DEFAULT << 5)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_TOUT0MATCH                        (0x1UL << 6)                                  /**< TOUT0 compare match interrupt flag          */
#define _PROTIMER_SEQIF_TOUT0MATCH_SHIFT                 6                                             /**< Shift value for PROTIMER_TOUT0MATCH         */
#define _PROTIMER_SEQIF_TOUT0MATCH_MASK                  0x40UL                                        /**< Bit mask for PROTIMER_TOUT0MATCH            */
#define _PROTIMER_SEQIF_TOUT0MATCH_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_TOUT0MATCH_DEFAULT                (_PROTIMER_SEQIF_TOUT0MATCH_DEFAULT << 6)     /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_TOUT1MATCH                        (0x1UL << 7)                                  /**< TOUT1 compare match interrupt flag          */
#define _PROTIMER_SEQIF_TOUT1MATCH_SHIFT                 7                                             /**< Shift value for PROTIMER_TOUT1MATCH         */
#define _PROTIMER_SEQIF_TOUT1MATCH_MASK                  0x80UL                                        /**< Bit mask for PROTIMER_TOUT1MATCH            */
#define _PROTIMER_SEQIF_TOUT1MATCH_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_TOUT1MATCH_DEFAULT                (_PROTIMER_SEQIF_TOUT1MATCH_DEFAULT << 7)     /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC0                               (0x1UL << 8)                                  /**< CC Channel 0 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC0_SHIFT                        8                                             /**< Shift value for PROTIMER_CC0                */
#define _PROTIMER_SEQIF_CC0_MASK                         0x100UL                                       /**< Bit mask for PROTIMER_CC0                   */
#define _PROTIMER_SEQIF_CC0_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC0_DEFAULT                       (_PROTIMER_SEQIF_CC0_DEFAULT << 8)            /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC1                               (0x1UL << 9)                                  /**< CC Channel 1 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC1_SHIFT                        9                                             /**< Shift value for PROTIMER_CC1                */
#define _PROTIMER_SEQIF_CC1_MASK                         0x200UL                                       /**< Bit mask for PROTIMER_CC1                   */
#define _PROTIMER_SEQIF_CC1_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC1_DEFAULT                       (_PROTIMER_SEQIF_CC1_DEFAULT << 9)            /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC2                               (0x1UL << 10)                                 /**< CC Channel 2 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC2_SHIFT                        10                                            /**< Shift value for PROTIMER_CC2                */
#define _PROTIMER_SEQIF_CC2_MASK                         0x400UL                                       /**< Bit mask for PROTIMER_CC2                   */
#define _PROTIMER_SEQIF_CC2_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC2_DEFAULT                       (_PROTIMER_SEQIF_CC2_DEFAULT << 10)           /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC3                               (0x1UL << 11)                                 /**< CC Channel 3 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC3_SHIFT                        11                                            /**< Shift value for PROTIMER_CC3                */
#define _PROTIMER_SEQIF_CC3_MASK                         0x800UL                                       /**< Bit mask for PROTIMER_CC3                   */
#define _PROTIMER_SEQIF_CC3_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC3_DEFAULT                       (_PROTIMER_SEQIF_CC3_DEFAULT << 11)           /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC4                               (0x1UL << 12)                                 /**< CC Channel 4 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC4_SHIFT                        12                                            /**< Shift value for PROTIMER_CC4                */
#define _PROTIMER_SEQIF_CC4_MASK                         0x1000UL                                      /**< Bit mask for PROTIMER_CC4                   */
#define _PROTIMER_SEQIF_CC4_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC4_DEFAULT                       (_PROTIMER_SEQIF_CC4_DEFAULT << 12)           /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC5                               (0x1UL << 13)                                 /**< CC Channel 5 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC5_SHIFT                        13                                            /**< Shift value for PROTIMER_CC5                */
#define _PROTIMER_SEQIF_CC5_MASK                         0x2000UL                                      /**< Bit mask for PROTIMER_CC5                   */
#define _PROTIMER_SEQIF_CC5_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC5_DEFAULT                       (_PROTIMER_SEQIF_CC5_DEFAULT << 13)           /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC6                               (0x1UL << 14)                                 /**< CC Channel 6 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC6_SHIFT                        14                                            /**< Shift value for PROTIMER_CC6                */
#define _PROTIMER_SEQIF_CC6_MASK                         0x4000UL                                      /**< Bit mask for PROTIMER_CC6                   */
#define _PROTIMER_SEQIF_CC6_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC6_DEFAULT                       (_PROTIMER_SEQIF_CC6_DEFAULT << 14)           /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_CC7                               (0x1UL << 15)                                 /**< CC Channel 7 Interrupt Flag                 */
#define _PROTIMER_SEQIF_CC7_SHIFT                        15                                            /**< Shift value for PROTIMER_CC7                */
#define _PROTIMER_SEQIF_CC7_MASK                         0x8000UL                                      /**< Bit mask for PROTIMER_CC7                   */
#define _PROTIMER_SEQIF_CC7_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_CC7_DEFAULT                       (_PROTIMER_SEQIF_CC7_DEFAULT << 15)           /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF0                              (0x1UL << 16)                                 /**< CC Channel 0 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF0_SHIFT                       16                                            /**< Shift value for PROTIMER_COF0               */
#define _PROTIMER_SEQIF_COF0_MASK                        0x10000UL                                     /**< Bit mask for PROTIMER_COF0                  */
#define _PROTIMER_SEQIF_COF0_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF0_DEFAULT                      (_PROTIMER_SEQIF_COF0_DEFAULT << 16)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF1                              (0x1UL << 17)                                 /**< CC Channel 1 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF1_SHIFT                       17                                            /**< Shift value for PROTIMER_COF1               */
#define _PROTIMER_SEQIF_COF1_MASK                        0x20000UL                                     /**< Bit mask for PROTIMER_COF1                  */
#define _PROTIMER_SEQIF_COF1_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF1_DEFAULT                      (_PROTIMER_SEQIF_COF1_DEFAULT << 17)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF2                              (0x1UL << 18)                                 /**< CC Channel 2 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF2_SHIFT                       18                                            /**< Shift value for PROTIMER_COF2               */
#define _PROTIMER_SEQIF_COF2_MASK                        0x40000UL                                     /**< Bit mask for PROTIMER_COF2                  */
#define _PROTIMER_SEQIF_COF2_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF2_DEFAULT                      (_PROTIMER_SEQIF_COF2_DEFAULT << 18)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF3                              (0x1UL << 19)                                 /**< CC Channel 3 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF3_SHIFT                       19                                            /**< Shift value for PROTIMER_COF3               */
#define _PROTIMER_SEQIF_COF3_MASK                        0x80000UL                                     /**< Bit mask for PROTIMER_COF3                  */
#define _PROTIMER_SEQIF_COF3_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF3_DEFAULT                      (_PROTIMER_SEQIF_COF3_DEFAULT << 19)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF4                              (0x1UL << 20)                                 /**< CC Channel 4 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF4_SHIFT                       20                                            /**< Shift value for PROTIMER_COF4               */
#define _PROTIMER_SEQIF_COF4_MASK                        0x100000UL                                    /**< Bit mask for PROTIMER_COF4                  */
#define _PROTIMER_SEQIF_COF4_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF4_DEFAULT                      (_PROTIMER_SEQIF_COF4_DEFAULT << 20)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF5                              (0x1UL << 21)                                 /**< CC Channel 5 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF5_SHIFT                       21                                            /**< Shift value for PROTIMER_COF5               */
#define _PROTIMER_SEQIF_COF5_MASK                        0x200000UL                                    /**< Bit mask for PROTIMER_COF5                  */
#define _PROTIMER_SEQIF_COF5_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF5_DEFAULT                      (_PROTIMER_SEQIF_COF5_DEFAULT << 21)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF6                              (0x1UL << 22)                                 /**< CC Channel 6 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF6_SHIFT                       22                                            /**< Shift value for PROTIMER_COF6               */
#define _PROTIMER_SEQIF_COF6_MASK                        0x400000UL                                    /**< Bit mask for PROTIMER_COF6                  */
#define _PROTIMER_SEQIF_COF6_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF6_DEFAULT                      (_PROTIMER_SEQIF_COF6_DEFAULT << 22)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_COF7                              (0x1UL << 23)                                 /**< CC Channel 7 Overflow Interrupt Flag        */
#define _PROTIMER_SEQIF_COF7_SHIFT                       23                                            /**< Shift value for PROTIMER_COF7               */
#define _PROTIMER_SEQIF_COF7_MASK                        0x800000UL                                    /**< Bit mask for PROTIMER_COF7                  */
#define _PROTIMER_SEQIF_COF7_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_COF7_DEFAULT                      (_PROTIMER_SEQIF_COF7_DEFAULT << 23)          /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_LBTSUCCESS                        (0x1UL << 24)                                 /**< Listen Before Talk Success                  */
#define _PROTIMER_SEQIF_LBTSUCCESS_SHIFT                 24                                            /**< Shift value for PROTIMER_LBTSUCCESS         */
#define _PROTIMER_SEQIF_LBTSUCCESS_MASK                  0x1000000UL                                   /**< Bit mask for PROTIMER_LBTSUCCESS            */
#define _PROTIMER_SEQIF_LBTSUCCESS_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_LBTSUCCESS_DEFAULT                (_PROTIMER_SEQIF_LBTSUCCESS_DEFAULT << 24)    /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_LBTFAILURE                        (0x1UL << 25)                                 /**< Listen Before Talk Failure                  */
#define _PROTIMER_SEQIF_LBTFAILURE_SHIFT                 25                                            /**< Shift value for PROTIMER_LBTFAILURE         */
#define _PROTIMER_SEQIF_LBTFAILURE_MASK                  0x2000000UL                                   /**< Bit mask for PROTIMER_LBTFAILURE            */
#define _PROTIMER_SEQIF_LBTFAILURE_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_LBTFAILURE_DEFAULT                (_PROTIMER_SEQIF_LBTFAILURE_DEFAULT << 25)    /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_LBTPAUSED                         (0x1UL << 26)                                 /**< Listen Before Talk Paused                   */
#define _PROTIMER_SEQIF_LBTPAUSED_SHIFT                  26                                            /**< Shift value for PROTIMER_LBTPAUSED          */
#define _PROTIMER_SEQIF_LBTPAUSED_MASK                   0x4000000UL                                   /**< Bit mask for PROTIMER_LBTPAUSED             */
#define _PROTIMER_SEQIF_LBTPAUSED_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_LBTPAUSED_DEFAULT                 (_PROTIMER_SEQIF_LBTPAUSED_DEFAULT << 26)     /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_LBTRETRY                          (0x1UL << 27)                                 /**< Listen Before Talk Retry                    */
#define _PROTIMER_SEQIF_LBTRETRY_SHIFT                   27                                            /**< Shift value for PROTIMER_LBTRETRY           */
#define _PROTIMER_SEQIF_LBTRETRY_MASK                    0x8000000UL                                   /**< Bit mask for PROTIMER_LBTRETRY              */
#define _PROTIMER_SEQIF_LBTRETRY_DEFAULT                 0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_LBTRETRY_DEFAULT                  (_PROTIMER_SEQIF_LBTRETRY_DEFAULT << 27)      /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_RTCCSYNCHED                       (0x1UL << 28)                                 /**< PROTIMER synchronized with the RTCC         */
#define _PROTIMER_SEQIF_RTCCSYNCHED_SHIFT                28                                            /**< Shift value for PROTIMER_RTCCSYNCHED        */
#define _PROTIMER_SEQIF_RTCCSYNCHED_MASK                 0x10000000UL                                  /**< Bit mask for PROTIMER_RTCCSYNCHED           */
#define _PROTIMER_SEQIF_RTCCSYNCHED_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_RTCCSYNCHED_DEFAULT               (_PROTIMER_SEQIF_RTCCSYNCHED_DEFAULT << 28)   /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */
#define PROTIMER_SEQIF_TOUT0MATCHLBT                     (0x1UL << 29)                                 /**< TOUT0 compare match interrupt flag          */
#define _PROTIMER_SEQIF_TOUT0MATCHLBT_SHIFT              29                                            /**< Shift value for PROTIMER_TOUT0MATCHLBT      */
#define _PROTIMER_SEQIF_TOUT0MATCHLBT_MASK               0x20000000UL                                  /**< Bit mask for PROTIMER_TOUT0MATCHLBT         */
#define _PROTIMER_SEQIF_TOUT0MATCHLBT_DEFAULT            0x00000000UL                                  /**< Mode DEFAULT for PROTIMER_SEQIF             */
#define PROTIMER_SEQIF_TOUT0MATCHLBT_DEFAULT             (_PROTIMER_SEQIF_TOUT0MATCHLBT_DEFAULT << 29) /**< Shifted mode DEFAULT for PROTIMER_SEQIF     */

/* Bit fields for PROTIMER SEQIEN */
#define _PROTIMER_SEQIEN_RESETVALUE                      0x00000000UL                                   /**< Default value for PROTIMER_SEQIEN           */
#define _PROTIMER_SEQIEN_MASK                            0x3FFFFFF7UL                                   /**< Mask for PROTIMER_SEQIEN                    */
#define PROTIMER_SEQIEN_PRECNTOF                         (0x1UL << 0)                                   /**< PRECNTOF Interrupt Enable                   */
#define _PROTIMER_SEQIEN_PRECNTOF_SHIFT                  0                                              /**< Shift value for PROTIMER_PRECNTOF           */
#define _PROTIMER_SEQIEN_PRECNTOF_MASK                   0x1UL                                          /**< Bit mask for PROTIMER_PRECNTOF              */
#define _PROTIMER_SEQIEN_PRECNTOF_DEFAULT                0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_PRECNTOF_DEFAULT                 (_PROTIMER_SEQIEN_PRECNTOF_DEFAULT << 0)       /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_BASECNTOF                        (0x1UL << 1)                                   /**< BASECNTOF Interrupt Enable                  */
#define _PROTIMER_SEQIEN_BASECNTOF_SHIFT                 1                                              /**< Shift value for PROTIMER_BASECNTOF          */
#define _PROTIMER_SEQIEN_BASECNTOF_MASK                  0x2UL                                          /**< Bit mask for PROTIMER_BASECNTOF             */
#define _PROTIMER_SEQIEN_BASECNTOF_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_BASECNTOF_DEFAULT                (_PROTIMER_SEQIEN_BASECNTOF_DEFAULT << 1)      /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_WRAPCNTOF                        (0x1UL << 2)                                   /**< WRAPCNTOF Interrupt Enable                  */
#define _PROTIMER_SEQIEN_WRAPCNTOF_SHIFT                 2                                              /**< Shift value for PROTIMER_WRAPCNTOF          */
#define _PROTIMER_SEQIEN_WRAPCNTOF_MASK                  0x4UL                                          /**< Bit mask for PROTIMER_WRAPCNTOF             */
#define _PROTIMER_SEQIEN_WRAPCNTOF_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_WRAPCNTOF_DEFAULT                (_PROTIMER_SEQIEN_WRAPCNTOF_DEFAULT << 2)      /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_TOUT0                            (0x1UL << 4)                                   /**< TOUT0 Interrupt Enable                      */
#define _PROTIMER_SEQIEN_TOUT0_SHIFT                     4                                              /**< Shift value for PROTIMER_TOUT0              */
#define _PROTIMER_SEQIEN_TOUT0_MASK                      0x10UL                                         /**< Bit mask for PROTIMER_TOUT0                 */
#define _PROTIMER_SEQIEN_TOUT0_DEFAULT                   0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_TOUT0_DEFAULT                    (_PROTIMER_SEQIEN_TOUT0_DEFAULT << 4)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_TOUT1                            (0x1UL << 5)                                   /**< TOUT1 Interrupt Enable                      */
#define _PROTIMER_SEQIEN_TOUT1_SHIFT                     5                                              /**< Shift value for PROTIMER_TOUT1              */
#define _PROTIMER_SEQIEN_TOUT1_MASK                      0x20UL                                         /**< Bit mask for PROTIMER_TOUT1                 */
#define _PROTIMER_SEQIEN_TOUT1_DEFAULT                   0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_TOUT1_DEFAULT                    (_PROTIMER_SEQIEN_TOUT1_DEFAULT << 5)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_TOUT0MATCH                       (0x1UL << 6)                                   /**< TOUT0MATCH Interrupt Enable                 */
#define _PROTIMER_SEQIEN_TOUT0MATCH_SHIFT                6                                              /**< Shift value for PROTIMER_TOUT0MATCH         */
#define _PROTIMER_SEQIEN_TOUT0MATCH_MASK                 0x40UL                                         /**< Bit mask for PROTIMER_TOUT0MATCH            */
#define _PROTIMER_SEQIEN_TOUT0MATCH_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_TOUT0MATCH_DEFAULT               (_PROTIMER_SEQIEN_TOUT0MATCH_DEFAULT << 6)     /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_TOUT1MATCH                       (0x1UL << 7)                                   /**< TOUT1MATCH Interrupt Enable                 */
#define _PROTIMER_SEQIEN_TOUT1MATCH_SHIFT                7                                              /**< Shift value for PROTIMER_TOUT1MATCH         */
#define _PROTIMER_SEQIEN_TOUT1MATCH_MASK                 0x80UL                                         /**< Bit mask for PROTIMER_TOUT1MATCH            */
#define _PROTIMER_SEQIEN_TOUT1MATCH_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_TOUT1MATCH_DEFAULT               (_PROTIMER_SEQIEN_TOUT1MATCH_DEFAULT << 7)     /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC0                              (0x1UL << 8)                                   /**< CC0 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC0_SHIFT                       8                                              /**< Shift value for PROTIMER_CC0                */
#define _PROTIMER_SEQIEN_CC0_MASK                        0x100UL                                        /**< Bit mask for PROTIMER_CC0                   */
#define _PROTIMER_SEQIEN_CC0_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC0_DEFAULT                      (_PROTIMER_SEQIEN_CC0_DEFAULT << 8)            /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC1                              (0x1UL << 9)                                   /**< CC1 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC1_SHIFT                       9                                              /**< Shift value for PROTIMER_CC1                */
#define _PROTIMER_SEQIEN_CC1_MASK                        0x200UL                                        /**< Bit mask for PROTIMER_CC1                   */
#define _PROTIMER_SEQIEN_CC1_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC1_DEFAULT                      (_PROTIMER_SEQIEN_CC1_DEFAULT << 9)            /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC2                              (0x1UL << 10)                                  /**< CC2 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC2_SHIFT                       10                                             /**< Shift value for PROTIMER_CC2                */
#define _PROTIMER_SEQIEN_CC2_MASK                        0x400UL                                        /**< Bit mask for PROTIMER_CC2                   */
#define _PROTIMER_SEQIEN_CC2_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC2_DEFAULT                      (_PROTIMER_SEQIEN_CC2_DEFAULT << 10)           /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC3                              (0x1UL << 11)                                  /**< CC3 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC3_SHIFT                       11                                             /**< Shift value for PROTIMER_CC3                */
#define _PROTIMER_SEQIEN_CC3_MASK                        0x800UL                                        /**< Bit mask for PROTIMER_CC3                   */
#define _PROTIMER_SEQIEN_CC3_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC3_DEFAULT                      (_PROTIMER_SEQIEN_CC3_DEFAULT << 11)           /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC4                              (0x1UL << 12)                                  /**< CC4 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC4_SHIFT                       12                                             /**< Shift value for PROTIMER_CC4                */
#define _PROTIMER_SEQIEN_CC4_MASK                        0x1000UL                                       /**< Bit mask for PROTIMER_CC4                   */
#define _PROTIMER_SEQIEN_CC4_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC4_DEFAULT                      (_PROTIMER_SEQIEN_CC4_DEFAULT << 12)           /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC5                              (0x1UL << 13)                                  /**< CC5 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC5_SHIFT                       13                                             /**< Shift value for PROTIMER_CC5                */
#define _PROTIMER_SEQIEN_CC5_MASK                        0x2000UL                                       /**< Bit mask for PROTIMER_CC5                   */
#define _PROTIMER_SEQIEN_CC5_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC5_DEFAULT                      (_PROTIMER_SEQIEN_CC5_DEFAULT << 13)           /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC6                              (0x1UL << 14)                                  /**< CC6 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC6_SHIFT                       14                                             /**< Shift value for PROTIMER_CC6                */
#define _PROTIMER_SEQIEN_CC6_MASK                        0x4000UL                                       /**< Bit mask for PROTIMER_CC6                   */
#define _PROTIMER_SEQIEN_CC6_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC6_DEFAULT                      (_PROTIMER_SEQIEN_CC6_DEFAULT << 14)           /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_CC7                              (0x1UL << 15)                                  /**< CC7 Interrupt Enable                        */
#define _PROTIMER_SEQIEN_CC7_SHIFT                       15                                             /**< Shift value for PROTIMER_CC7                */
#define _PROTIMER_SEQIEN_CC7_MASK                        0x8000UL                                       /**< Bit mask for PROTIMER_CC7                   */
#define _PROTIMER_SEQIEN_CC7_DEFAULT                     0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_CC7_DEFAULT                      (_PROTIMER_SEQIEN_CC7_DEFAULT << 15)           /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF0                             (0x1UL << 16)                                  /**< COF0 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF0_SHIFT                      16                                             /**< Shift value for PROTIMER_COF0               */
#define _PROTIMER_SEQIEN_COF0_MASK                       0x10000UL                                      /**< Bit mask for PROTIMER_COF0                  */
#define _PROTIMER_SEQIEN_COF0_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF0_DEFAULT                     (_PROTIMER_SEQIEN_COF0_DEFAULT << 16)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF1                             (0x1UL << 17)                                  /**< COF1 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF1_SHIFT                      17                                             /**< Shift value for PROTIMER_COF1               */
#define _PROTIMER_SEQIEN_COF1_MASK                       0x20000UL                                      /**< Bit mask for PROTIMER_COF1                  */
#define _PROTIMER_SEQIEN_COF1_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF1_DEFAULT                     (_PROTIMER_SEQIEN_COF1_DEFAULT << 17)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF2                             (0x1UL << 18)                                  /**< COF2 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF2_SHIFT                      18                                             /**< Shift value for PROTIMER_COF2               */
#define _PROTIMER_SEQIEN_COF2_MASK                       0x40000UL                                      /**< Bit mask for PROTIMER_COF2                  */
#define _PROTIMER_SEQIEN_COF2_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF2_DEFAULT                     (_PROTIMER_SEQIEN_COF2_DEFAULT << 18)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF3                             (0x1UL << 19)                                  /**< COF3 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF3_SHIFT                      19                                             /**< Shift value for PROTIMER_COF3               */
#define _PROTIMER_SEQIEN_COF3_MASK                       0x80000UL                                      /**< Bit mask for PROTIMER_COF3                  */
#define _PROTIMER_SEQIEN_COF3_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF3_DEFAULT                     (_PROTIMER_SEQIEN_COF3_DEFAULT << 19)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF4                             (0x1UL << 20)                                  /**< COF4 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF4_SHIFT                      20                                             /**< Shift value for PROTIMER_COF4               */
#define _PROTIMER_SEQIEN_COF4_MASK                       0x100000UL                                     /**< Bit mask for PROTIMER_COF4                  */
#define _PROTIMER_SEQIEN_COF4_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF4_DEFAULT                     (_PROTIMER_SEQIEN_COF4_DEFAULT << 20)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF5                             (0x1UL << 21)                                  /**< COF5 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF5_SHIFT                      21                                             /**< Shift value for PROTIMER_COF5               */
#define _PROTIMER_SEQIEN_COF5_MASK                       0x200000UL                                     /**< Bit mask for PROTIMER_COF5                  */
#define _PROTIMER_SEQIEN_COF5_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF5_DEFAULT                     (_PROTIMER_SEQIEN_COF5_DEFAULT << 21)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF6                             (0x1UL << 22)                                  /**< COF6 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF6_SHIFT                      22                                             /**< Shift value for PROTIMER_COF6               */
#define _PROTIMER_SEQIEN_COF6_MASK                       0x400000UL                                     /**< Bit mask for PROTIMER_COF6                  */
#define _PROTIMER_SEQIEN_COF6_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF6_DEFAULT                     (_PROTIMER_SEQIEN_COF6_DEFAULT << 22)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_COF7                             (0x1UL << 23)                                  /**< COF7 Interrupt Enable                       */
#define _PROTIMER_SEQIEN_COF7_SHIFT                      23                                             /**< Shift value for PROTIMER_COF7               */
#define _PROTIMER_SEQIEN_COF7_MASK                       0x800000UL                                     /**< Bit mask for PROTIMER_COF7                  */
#define _PROTIMER_SEQIEN_COF7_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_COF7_DEFAULT                     (_PROTIMER_SEQIEN_COF7_DEFAULT << 23)          /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_LBTSUCCESS                       (0x1UL << 24)                                  /**< LBTSUCCESS Interrupt Enable                 */
#define _PROTIMER_SEQIEN_LBTSUCCESS_SHIFT                24                                             /**< Shift value for PROTIMER_LBTSUCCESS         */
#define _PROTIMER_SEQIEN_LBTSUCCESS_MASK                 0x1000000UL                                    /**< Bit mask for PROTIMER_LBTSUCCESS            */
#define _PROTIMER_SEQIEN_LBTSUCCESS_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_LBTSUCCESS_DEFAULT               (_PROTIMER_SEQIEN_LBTSUCCESS_DEFAULT << 24)    /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_LBTFAILURE                       (0x1UL << 25)                                  /**< LBTFAILURE Interrupt Enable                 */
#define _PROTIMER_SEQIEN_LBTFAILURE_SHIFT                25                                             /**< Shift value for PROTIMER_LBTFAILURE         */
#define _PROTIMER_SEQIEN_LBTFAILURE_MASK                 0x2000000UL                                    /**< Bit mask for PROTIMER_LBTFAILURE            */
#define _PROTIMER_SEQIEN_LBTFAILURE_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_LBTFAILURE_DEFAULT               (_PROTIMER_SEQIEN_LBTFAILURE_DEFAULT << 25)    /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_LBTPAUSED                        (0x1UL << 26)                                  /**< LBTPAUSED Interrupt Enable                  */
#define _PROTIMER_SEQIEN_LBTPAUSED_SHIFT                 26                                             /**< Shift value for PROTIMER_LBTPAUSED          */
#define _PROTIMER_SEQIEN_LBTPAUSED_MASK                  0x4000000UL                                    /**< Bit mask for PROTIMER_LBTPAUSED             */
#define _PROTIMER_SEQIEN_LBTPAUSED_DEFAULT               0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_LBTPAUSED_DEFAULT                (_PROTIMER_SEQIEN_LBTPAUSED_DEFAULT << 26)     /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_LBTRETRY                         (0x1UL << 27)                                  /**< LBTRETRY Interrupt Enable                   */
#define _PROTIMER_SEQIEN_LBTRETRY_SHIFT                  27                                             /**< Shift value for PROTIMER_LBTRETRY           */
#define _PROTIMER_SEQIEN_LBTRETRY_MASK                   0x8000000UL                                    /**< Bit mask for PROTIMER_LBTRETRY              */
#define _PROTIMER_SEQIEN_LBTRETRY_DEFAULT                0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_LBTRETRY_DEFAULT                 (_PROTIMER_SEQIEN_LBTRETRY_DEFAULT << 27)      /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_RTCCSYNCHED                      (0x1UL << 28)                                  /**< RTCCSYNCHED Interrupt Enable                */
#define _PROTIMER_SEQIEN_RTCCSYNCHED_SHIFT               28                                             /**< Shift value for PROTIMER_RTCCSYNCHED        */
#define _PROTIMER_SEQIEN_RTCCSYNCHED_MASK                0x10000000UL                                   /**< Bit mask for PROTIMER_RTCCSYNCHED           */
#define _PROTIMER_SEQIEN_RTCCSYNCHED_DEFAULT             0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_RTCCSYNCHED_DEFAULT              (_PROTIMER_SEQIEN_RTCCSYNCHED_DEFAULT << 28)   /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */
#define PROTIMER_SEQIEN_TOUT0MATCHLBT                    (0x1UL << 29)                                  /**< TOUT0MATCHLBT Interrupt Enable              */
#define _PROTIMER_SEQIEN_TOUT0MATCHLBT_SHIFT             29                                             /**< Shift value for PROTIMER_TOUT0MATCHLBT      */
#define _PROTIMER_SEQIEN_TOUT0MATCHLBT_MASK              0x20000000UL                                   /**< Bit mask for PROTIMER_TOUT0MATCHLBT         */
#define _PROTIMER_SEQIEN_TOUT0MATCHLBT_DEFAULT           0x00000000UL                                   /**< Mode DEFAULT for PROTIMER_SEQIEN            */
#define PROTIMER_SEQIEN_TOUT0MATCHLBT_DEFAULT            (_PROTIMER_SEQIEN_TOUT0MATCHLBT_DEFAULT << 29) /**< Shifted mode DEFAULT for PROTIMER_SEQIEN    */

/* Bit fields for PROTIMER CC_CTRL */
#define _PROTIMER_CC_CTRL_RESETVALUE                     0x00000000UL                                 /**< Default value for PROTIMER_CC_CTRL          */
#define _PROTIMER_CC_CTRL_MASK                           0x07E07F7FUL                                 /**< Mask for PROTIMER_CC_CTRL                   */
#define PROTIMER_CC_CTRL_ENABLE                          (0x1UL << 0)                                 /**< Channel Enable                              */
#define _PROTIMER_CC_CTRL_ENABLE_SHIFT                   0                                            /**< Shift value for PROTIMER_ENABLE             */
#define _PROTIMER_CC_CTRL_ENABLE_MASK                    0x1UL                                        /**< Bit mask for PROTIMER_ENABLE                */
#define _PROTIMER_CC_CTRL_ENABLE_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_ENABLE_DEFAULT                  (_PROTIMER_CC_CTRL_ENABLE_DEFAULT << 0)      /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_CCMODE                          (0x1UL << 1)                                 /**< Compare/Capture mode                        */
#define _PROTIMER_CC_CTRL_CCMODE_SHIFT                   1                                            /**< Shift value for PROTIMER_CCMODE             */
#define _PROTIMER_CC_CTRL_CCMODE_MASK                    0x2UL                                        /**< Bit mask for PROTIMER_CCMODE                */
#define _PROTIMER_CC_CTRL_CCMODE_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_CCMODE_COMPARE                 0x00000000UL                                 /**< Mode COMPARE for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_CCMODE_CAPTURE                 0x00000001UL                                 /**< Mode CAPTURE for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_CCMODE_DEFAULT                  (_PROTIMER_CC_CTRL_CCMODE_DEFAULT << 1)      /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_CCMODE_COMPARE                  (_PROTIMER_CC_CTRL_CCMODE_COMPARE << 1)      /**< Shifted mode COMPARE for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_CCMODE_CAPTURE                  (_PROTIMER_CC_CTRL_CCMODE_CAPTURE << 1)      /**< Shifted mode CAPTURE for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_PREMATCHEN                      (0x1UL << 2)                                 /**< Enable PRECNT matching                      */
#define _PROTIMER_CC_CTRL_PREMATCHEN_SHIFT               2                                            /**< Shift value for PROTIMER_PREMATCHEN         */
#define _PROTIMER_CC_CTRL_PREMATCHEN_MASK                0x4UL                                        /**< Bit mask for PROTIMER_PREMATCHEN            */
#define _PROTIMER_CC_CTRL_PREMATCHEN_DEFAULT             0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_PREMATCHEN_DEFAULT              (_PROTIMER_CC_CTRL_PREMATCHEN_DEFAULT << 2)  /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_BASEMATCHEN                     (0x1UL << 3)                                 /**< Enable BASECNT matching                     */
#define _PROTIMER_CC_CTRL_BASEMATCHEN_SHIFT              3                                            /**< Shift value for PROTIMER_BASEMATCHEN        */
#define _PROTIMER_CC_CTRL_BASEMATCHEN_MASK               0x8UL                                        /**< Bit mask for PROTIMER_BASEMATCHEN           */
#define _PROTIMER_CC_CTRL_BASEMATCHEN_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_BASEMATCHEN_DEFAULT             (_PROTIMER_CC_CTRL_BASEMATCHEN_DEFAULT << 3) /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_WRAPMATCHEN                     (0x1UL << 4)                                 /**< Enable WRAPCNT matching                     */
#define _PROTIMER_CC_CTRL_WRAPMATCHEN_SHIFT              4                                            /**< Shift value for PROTIMER_WRAPMATCHEN        */
#define _PROTIMER_CC_CTRL_WRAPMATCHEN_MASK               0x10UL                                       /**< Bit mask for PROTIMER_WRAPMATCHEN           */
#define _PROTIMER_CC_CTRL_WRAPMATCHEN_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_WRAPMATCHEN_DEFAULT             (_PROTIMER_CC_CTRL_WRAPMATCHEN_DEFAULT << 4) /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_OIST                            (0x1UL << 5)                                 /**< Output Initial State                        */
#define _PROTIMER_CC_CTRL_OIST_SHIFT                     5                                            /**< Shift value for PROTIMER_OIST               */
#define _PROTIMER_CC_CTRL_OIST_MASK                      0x20UL                                       /**< Bit mask for PROTIMER_OIST                  */
#define _PROTIMER_CC_CTRL_OIST_DEFAULT                   0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_OIST_DEFAULT                    (_PROTIMER_CC_CTRL_OIST_DEFAULT << 5)        /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_OUTINV                          (0x1UL << 6)                                 /**< Output Invert                               */
#define _PROTIMER_CC_CTRL_OUTINV_SHIFT                   6                                            /**< Shift value for PROTIMER_OUTINV             */
#define _PROTIMER_CC_CTRL_OUTINV_MASK                    0x40UL                                       /**< Bit mask for PROTIMER_OUTINV                */
#define _PROTIMER_CC_CTRL_OUTINV_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_OUTINV_DEFAULT                  (_PROTIMER_CC_CTRL_OUTINV_DEFAULT << 6)      /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define _PROTIMER_CC_CTRL_MOA_SHIFT                      8                                            /**< Shift value for PROTIMER_MOA                */
#define _PROTIMER_CC_CTRL_MOA_MASK                       0x300UL                                      /**< Bit mask for PROTIMER_MOA                   */
#define _PROTIMER_CC_CTRL_MOA_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_MOA_DISABLED                   0x00000000UL                                 /**< Mode DISABLED for PROTIMER_CC_CTRL          */
#define _PROTIMER_CC_CTRL_MOA_TOGGLE                     0x00000001UL                                 /**< Mode TOGGLE for PROTIMER_CC_CTRL            */
#define _PROTIMER_CC_CTRL_MOA_CLEAR                      0x00000002UL                                 /**< Mode CLEAR for PROTIMER_CC_CTRL             */
#define _PROTIMER_CC_CTRL_MOA_SET                        0x00000003UL                                 /**< Mode SET for PROTIMER_CC_CTRL               */
#define PROTIMER_CC_CTRL_MOA_DEFAULT                     (_PROTIMER_CC_CTRL_MOA_DEFAULT << 8)         /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_MOA_DISABLED                    (_PROTIMER_CC_CTRL_MOA_DISABLED << 8)        /**< Shifted mode DISABLED for PROTIMER_CC_CTRL  */
#define PROTIMER_CC_CTRL_MOA_TOGGLE                      (_PROTIMER_CC_CTRL_MOA_TOGGLE << 8)          /**< Shifted mode TOGGLE for PROTIMER_CC_CTRL    */
#define PROTIMER_CC_CTRL_MOA_CLEAR                       (_PROTIMER_CC_CTRL_MOA_CLEAR << 8)           /**< Shifted mode CLEAR for PROTIMER_CC_CTRL     */
#define PROTIMER_CC_CTRL_MOA_SET                         (_PROTIMER_CC_CTRL_MOA_SET << 8)             /**< Shifted mode SET for PROTIMER_CC_CTRL       */
#define _PROTIMER_CC_CTRL_OFOA_SHIFT                     10                                           /**< Shift value for PROTIMER_OFOA               */
#define _PROTIMER_CC_CTRL_OFOA_MASK                      0xC00UL                                      /**< Bit mask for PROTIMER_OFOA                  */
#define _PROTIMER_CC_CTRL_OFOA_DEFAULT                   0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_OFOA_DISABLED                  0x00000000UL                                 /**< Mode DISABLED for PROTIMER_CC_CTRL          */
#define _PROTIMER_CC_CTRL_OFOA_TOGGLE                    0x00000001UL                                 /**< Mode TOGGLE for PROTIMER_CC_CTRL            */
#define _PROTIMER_CC_CTRL_OFOA_CLEAR                     0x00000002UL                                 /**< Mode CLEAR for PROTIMER_CC_CTRL             */
#define _PROTIMER_CC_CTRL_OFOA_SET                       0x00000003UL                                 /**< Mode SET for PROTIMER_CC_CTRL               */
#define PROTIMER_CC_CTRL_OFOA_DEFAULT                    (_PROTIMER_CC_CTRL_OFOA_DEFAULT << 10)       /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_OFOA_DISABLED                   (_PROTIMER_CC_CTRL_OFOA_DISABLED << 10)      /**< Shifted mode DISABLED for PROTIMER_CC_CTRL  */
#define PROTIMER_CC_CTRL_OFOA_TOGGLE                     (_PROTIMER_CC_CTRL_OFOA_TOGGLE << 10)        /**< Shifted mode TOGGLE for PROTIMER_CC_CTRL    */
#define PROTIMER_CC_CTRL_OFOA_CLEAR                      (_PROTIMER_CC_CTRL_OFOA_CLEAR << 10)         /**< Shifted mode CLEAR for PROTIMER_CC_CTRL     */
#define PROTIMER_CC_CTRL_OFOA_SET                        (_PROTIMER_CC_CTRL_OFOA_SET << 10)           /**< Shifted mode SET for PROTIMER_CC_CTRL       */
#define _PROTIMER_CC_CTRL_OFSEL_SHIFT                    12                                           /**< Shift value for PROTIMER_OFSEL              */
#define _PROTIMER_CC_CTRL_OFSEL_MASK                     0x3000UL                                     /**< Bit mask for PROTIMER_OFSEL                 */
#define _PROTIMER_CC_CTRL_OFSEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_OFSEL_PRECNT                   0x00000000UL                                 /**< Mode PRECNT for PROTIMER_CC_CTRL            */
#define _PROTIMER_CC_CTRL_OFSEL_BASECNT                  0x00000001UL                                 /**< Mode BASECNT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_OFSEL_WRAPCNT                  0x00000002UL                                 /**< Mode WRAPCNT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_OFSEL_DISABLED                 0x00000003UL                                 /**< Mode DISABLED for PROTIMER_CC_CTRL          */
#define PROTIMER_CC_CTRL_OFSEL_DEFAULT                   (_PROTIMER_CC_CTRL_OFSEL_DEFAULT << 12)      /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_OFSEL_PRECNT                    (_PROTIMER_CC_CTRL_OFSEL_PRECNT << 12)       /**< Shifted mode PRECNT for PROTIMER_CC_CTRL    */
#define PROTIMER_CC_CTRL_OFSEL_BASECNT                   (_PROTIMER_CC_CTRL_OFSEL_BASECNT << 12)      /**< Shifted mode BASECNT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_OFSEL_WRAPCNT                   (_PROTIMER_CC_CTRL_OFSEL_WRAPCNT << 12)      /**< Shifted mode WRAPCNT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_OFSEL_DISABLED                  (_PROTIMER_CC_CTRL_OFSEL_DISABLED << 12)     /**< Shifted mode DISABLED for PROTIMER_CC_CTRL  */
#define PROTIMER_CC_CTRL_PRSCONF                         (0x1UL << 14)                                /**< PRS Configuration                           */
#define _PROTIMER_CC_CTRL_PRSCONF_SHIFT                  14                                           /**< Shift value for PROTIMER_PRSCONF            */
#define _PROTIMER_CC_CTRL_PRSCONF_MASK                   0x4000UL                                     /**< Bit mask for PROTIMER_PRSCONF               */
#define _PROTIMER_CC_CTRL_PRSCONF_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_PRSCONF_PULSE                  0x00000000UL                                 /**< Mode PULSE for PROTIMER_CC_CTRL             */
#define _PROTIMER_CC_CTRL_PRSCONF_LEVEL                  0x00000001UL                                 /**< Mode LEVEL for PROTIMER_CC_CTRL             */
#define PROTIMER_CC_CTRL_PRSCONF_DEFAULT                 (_PROTIMER_CC_CTRL_PRSCONF_DEFAULT << 14)    /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_PRSCONF_PULSE                   (_PROTIMER_CC_CTRL_PRSCONF_PULSE << 14)      /**< Shifted mode PULSE for PROTIMER_CC_CTRL     */
#define PROTIMER_CC_CTRL_PRSCONF_LEVEL                   (_PROTIMER_CC_CTRL_PRSCONF_LEVEL << 14)      /**< Shifted mode LEVEL for PROTIMER_CC_CTRL     */
#define _PROTIMER_CC_CTRL_INSEL_SHIFT                    21                                           /**< Shift value for PROTIMER_INSEL              */
#define _PROTIMER_CC_CTRL_INSEL_MASK                     0x1E00000UL                                  /**< Bit mask for PROTIMER_INSEL                 */
#define _PROTIMER_CC_CTRL_INSEL_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_INSEL_PRS                      0x00000000UL                                 /**< Mode PRS for PROTIMER_CC_CTRL               */
#define _PROTIMER_CC_CTRL_INSEL_TXDONE                   0x00000001UL                                 /**< Mode TXDONE for PROTIMER_CC_CTRL            */
#define _PROTIMER_CC_CTRL_INSEL_RXDONE                   0x00000002UL                                 /**< Mode RXDONE for PROTIMER_CC_CTRL            */
#define _PROTIMER_CC_CTRL_INSEL_TXORRXDONE               0x00000003UL                                 /**< Mode TXORRXDONE for PROTIMER_CC_CTRL        */
#define _PROTIMER_CC_CTRL_INSEL_FRAMEDET0                0x00000004UL                                 /**< Mode FRAMEDET0 for PROTIMER_CC_CTRL         */
#define _PROTIMER_CC_CTRL_INSEL_FRAMEDET1                0x00000005UL                                 /**< Mode FRAMEDET1 for PROTIMER_CC_CTRL         */
#define _PROTIMER_CC_CTRL_INSEL_FDET0OR1                 0x00000006UL                                 /**< Mode FDET0OR1 for PROTIMER_CC_CTRL          */
#define _PROTIMER_CC_CTRL_INSEL_MODSYNCSENT              0x00000007UL                                 /**< Mode MODSYNCSENT for PROTIMER_CC_CTRL       */
#define _PROTIMER_CC_CTRL_INSEL_RXEOF                    0x00000008UL                                 /**< Mode RXEOF for PROTIMER_CC_CTRL             */
#define _PROTIMER_CC_CTRL_INSEL_PRORTC0                  0x00000009UL                                 /**< Mode PRORTC0 for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_INSEL_PRORTC1                  0x0000000AUL                                 /**< Mode PRORTC1 for PROTIMER_CC_CTRL           */
#define PROTIMER_CC_CTRL_INSEL_DEFAULT                   (_PROTIMER_CC_CTRL_INSEL_DEFAULT << 21)      /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_INSEL_PRS                       (_PROTIMER_CC_CTRL_INSEL_PRS << 21)          /**< Shifted mode PRS for PROTIMER_CC_CTRL       */
#define PROTIMER_CC_CTRL_INSEL_TXDONE                    (_PROTIMER_CC_CTRL_INSEL_TXDONE << 21)       /**< Shifted mode TXDONE for PROTIMER_CC_CTRL    */
#define PROTIMER_CC_CTRL_INSEL_RXDONE                    (_PROTIMER_CC_CTRL_INSEL_RXDONE << 21)       /**< Shifted mode RXDONE for PROTIMER_CC_CTRL    */
#define PROTIMER_CC_CTRL_INSEL_TXORRXDONE                (_PROTIMER_CC_CTRL_INSEL_TXORRXDONE << 21)   /**< Shifted mode TXORRXDONE for PROTIMER_CC_CTRL*/
#define PROTIMER_CC_CTRL_INSEL_FRAMEDET0                 (_PROTIMER_CC_CTRL_INSEL_FRAMEDET0 << 21)    /**< Shifted mode FRAMEDET0 for PROTIMER_CC_CTRL */
#define PROTIMER_CC_CTRL_INSEL_FRAMEDET1                 (_PROTIMER_CC_CTRL_INSEL_FRAMEDET1 << 21)    /**< Shifted mode FRAMEDET1 for PROTIMER_CC_CTRL */
#define PROTIMER_CC_CTRL_INSEL_FDET0OR1                  (_PROTIMER_CC_CTRL_INSEL_FDET0OR1 << 21)     /**< Shifted mode FDET0OR1 for PROTIMER_CC_CTRL  */
#define PROTIMER_CC_CTRL_INSEL_MODSYNCSENT               (_PROTIMER_CC_CTRL_INSEL_MODSYNCSENT << 21)  /**< Shifted mode MODSYNCSENT for PROTIMER_CC_CTRL*/
#define PROTIMER_CC_CTRL_INSEL_RXEOF                     (_PROTIMER_CC_CTRL_INSEL_RXEOF << 21)        /**< Shifted mode RXEOF for PROTIMER_CC_CTRL     */
#define PROTIMER_CC_CTRL_INSEL_PRORTC0                   (_PROTIMER_CC_CTRL_INSEL_PRORTC0 << 21)      /**< Shifted mode PRORTC0 for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_INSEL_PRORTC1                   (_PROTIMER_CC_CTRL_INSEL_PRORTC1 << 21)      /**< Shifted mode PRORTC1 for PROTIMER_CC_CTRL   */
#define _PROTIMER_CC_CTRL_ICEDGE_SHIFT                   25                                           /**< Shift value for PROTIMER_ICEDGE             */
#define _PROTIMER_CC_CTRL_ICEDGE_MASK                    0x6000000UL                                  /**< Bit mask for PROTIMER_ICEDGE                */
#define _PROTIMER_CC_CTRL_ICEDGE_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_ICEDGE_RISING                  0x00000000UL                                 /**< Mode RISING for PROTIMER_CC_CTRL            */
#define _PROTIMER_CC_CTRL_ICEDGE_FALLING                 0x00000001UL                                 /**< Mode FALLING for PROTIMER_CC_CTRL           */
#define _PROTIMER_CC_CTRL_ICEDGE_BOTH                    0x00000002UL                                 /**< Mode BOTH for PROTIMER_CC_CTRL              */
#define _PROTIMER_CC_CTRL_ICEDGE_DISABLED                0x00000003UL                                 /**< Mode DISABLED for PROTIMER_CC_CTRL          */
#define PROTIMER_CC_CTRL_ICEDGE_DEFAULT                  (_PROTIMER_CC_CTRL_ICEDGE_DEFAULT << 25)     /**< Shifted mode DEFAULT for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_ICEDGE_RISING                   (_PROTIMER_CC_CTRL_ICEDGE_RISING << 25)      /**< Shifted mode RISING for PROTIMER_CC_CTRL    */
#define PROTIMER_CC_CTRL_ICEDGE_FALLING                  (_PROTIMER_CC_CTRL_ICEDGE_FALLING << 25)     /**< Shifted mode FALLING for PROTIMER_CC_CTRL   */
#define PROTIMER_CC_CTRL_ICEDGE_BOTH                     (_PROTIMER_CC_CTRL_ICEDGE_BOTH << 25)        /**< Shifted mode BOTH for PROTIMER_CC_CTRL      */
#define PROTIMER_CC_CTRL_ICEDGE_DISABLED                 (_PROTIMER_CC_CTRL_ICEDGE_DISABLED << 25)    /**< Shifted mode DISABLED for PROTIMER_CC_CTRL  */

/* Bit fields for PROTIMER CC_PRE */
#define _PROTIMER_CC_PRE_RESETVALUE                      0x00000000UL                        /**< Default value for PROTIMER_CC_PRE           */
#define _PROTIMER_CC_PRE_MASK                            0x0000FFFFUL                        /**< Mask for PROTIMER_CC_PRE                    */
#define _PROTIMER_CC_PRE_PRE_SHIFT                       0                                   /**< Shift value for PROTIMER_PRE                */
#define _PROTIMER_CC_PRE_PRE_MASK                        0xFFFFUL                            /**< Bit mask for PROTIMER_PRE                   */
#define _PROTIMER_CC_PRE_PRE_DEFAULT                     0x00000000UL                        /**< Mode DEFAULT for PROTIMER_CC_PRE            */
#define PROTIMER_CC_PRE_PRE_DEFAULT                      (_PROTIMER_CC_PRE_PRE_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_CC_PRE    */

/* Bit fields for PROTIMER CC_BASE */
#define _PROTIMER_CC_BASE_RESETVALUE                     0x00000000UL                          /**< Default value for PROTIMER_CC_BASE          */
#define _PROTIMER_CC_BASE_MASK                           0x0000FFFFUL                          /**< Mask for PROTIMER_CC_BASE                   */
#define _PROTIMER_CC_BASE_BASE_SHIFT                     0                                     /**< Shift value for PROTIMER_BASE               */
#define _PROTIMER_CC_BASE_BASE_MASK                      0xFFFFUL                              /**< Bit mask for PROTIMER_BASE                  */
#define _PROTIMER_CC_BASE_BASE_DEFAULT                   0x00000000UL                          /**< Mode DEFAULT for PROTIMER_CC_BASE           */
#define PROTIMER_CC_BASE_BASE_DEFAULT                    (_PROTIMER_CC_BASE_BASE_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_CC_BASE   */

/* Bit fields for PROTIMER CC_WRAP */
#define _PROTIMER_CC_WRAP_RESETVALUE                     0x00000000UL                          /**< Default value for PROTIMER_CC_WRAP          */
#define _PROTIMER_CC_WRAP_MASK                           0xFFFFFFFFUL                          /**< Mask for PROTIMER_CC_WRAP                   */
#define _PROTIMER_CC_WRAP_WRAP_SHIFT                     0                                     /**< Shift value for PROTIMER_WRAP               */
#define _PROTIMER_CC_WRAP_WRAP_MASK                      0xFFFFFFFFUL                          /**< Bit mask for PROTIMER_WRAP                  */
#define _PROTIMER_CC_WRAP_WRAP_DEFAULT                   0x00000000UL                          /**< Mode DEFAULT for PROTIMER_CC_WRAP           */
#define PROTIMER_CC_WRAP_WRAP_DEFAULT                    (_PROTIMER_CC_WRAP_WRAP_DEFAULT << 0) /**< Shifted mode DEFAULT for PROTIMER_CC_WRAP   */

/** @} End of group EFR32MG22_PROTIMER_BitFields */
/** @} End of group EFR32MG22_PROTIMER */
/** @} End of group Parts */
#endif /* EFR32MG22_PROTIMER_H */
