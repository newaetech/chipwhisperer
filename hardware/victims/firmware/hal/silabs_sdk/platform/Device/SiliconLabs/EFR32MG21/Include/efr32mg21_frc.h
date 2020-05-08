/**************************************************************************//**
 * @file
 * @brief EFR32MG21 FRC register and bit field definitions
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
#ifndef EFR32MG21_FRC_H
#define EFR32MG21_FRC_H
#define FRC_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG21_FRC FRC
 * @{
 * @brief EFR32MG21 FRC Register Declaration.
 *****************************************************************************/

/** FRC FCD Register Group Declaration. */
typedef struct {
  __IOM uint32_t FCD;                                /**< Frame Control Descriptor                           */
} FRC_FCD_TypeDef;

/** FRC INTELEMENT Register Group Declaration. */
typedef struct {
  __IM uint32_t INTELEMENT;                          /**< Interleaver element value                          */
} FRC_INTELEMENT_TypeDef;

/** FRC Register Declaration. */
typedef struct {
  __IM uint32_t          IPVERSION;             /**< IP Version                                         */
  __IOM uint32_t         EN;                    /**< Enable peripheral clock to this module             */
  __IM uint32_t          STATUS;                /**< FRC Status                                         */
  __IOM uint32_t         DFLCTRL;               /**< Dynamic Frame Length Control                       */
  __IOM uint32_t         MAXLENGTH;             /**< Maximum Frame Length Register                      */
  __IOM uint32_t         ADDRFILTCTRL;          /**< Address Filter Control                             */
  __IOM uint32_t         DATABUFFER;            /**< Frame controller data buffer                       */
  __IM uint32_t          WCNT;                  /**< Word Counter Value Register                        */
  __IOM uint32_t         WCNTCMP0;              /**< Word Counter Compare 0                             */
  __IOM uint32_t         WCNTCMP1;              /**< Word Counter Compare 1                             */
  __IOM uint32_t         WCNTCMP2;              /**< Word Counter Compare 2                             */
  __IOM uint32_t         CMD;                   /**< FRC Commands                                       */
  __IOM uint32_t         WHITECTRL;             /**< Whitener Control                                   */
  __IOM uint32_t         WHITEPOLY;             /**< Whitener Polynomial                                */
  __IOM uint32_t         WHITEINIT;             /**< Whitener Initial Value                             */
  __IOM uint32_t         FECCTRL;               /**< Forward Error Correction Control                   */
  __IOM uint32_t         BLOCKRAMADDR;          /**< Block decoding RAM address register                */
  __IOM uint32_t         CONVRAMADDR;           /**< Convolutional decoding RAM address                 */
  __IOM uint32_t         CTRL;                  /**< Control Register                                   */
  __IOM uint32_t         RXCTRL;                /**< RX Control Register                                */
  __IOM uint32_t         TRAILTXDATACTRL;       /**< Trailing TX Data Control                           */
  __IOM uint32_t         TRAILRXDATA;           /**< Trailing RX Data                                   */
  __IM uint32_t          SCNT;                  /**< Sub-Frame Counter Value Register                   */
  __IOM uint32_t         CONVGENERATOR;         /**< Convolutional Coder Polynomials                    */
  __IOM uint32_t         PUNCTCTRL;             /**< Puncturing Control                                 */
  __IOM uint32_t         PAUSECTRL;             /**< Pause Control                                      */
  __IOM uint32_t         IF;                    /**< Frame Controller Interrupt Flags                   */
  __IOM uint32_t         IEN;                   /**< Interrupt Enable Register                          */
  __IOM uint32_t         MIRRORIF;              /**< FRC Interrupt Flag Mirror Register                 */
  uint32_t               RESERVED0[1U];         /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE;            /**< FRC Buffer Control                                 */
  uint32_t               RESERVED1[2U];         /**< Reserved for future use                            */
  __IOM uint32_t         SNIFFCTRL;             /**< FRC Sniffer Control Register                       */
  __IOM uint32_t         AUXDATA;               /**< Auxiliary sniffer data output register             */
  __IOM uint32_t         RAWCTRL;               /**< Raw data control                                   */
  __IM uint32_t          RXRAWDATA;             /**< Receiver RAW data                                  */
  __IM uint32_t          PAUSEDATA;             /**< Receiver pause data                                */
  __IM uint32_t          LIKELYCONVSTATE;       /**< Most likely convolutional decoder state            */
  __IM uint32_t          INTELEMENTNEXT;        /**< Interleaver element value                          */
  __IOM uint32_t         INTWRITEPOINT;         /**< Interleaver write pointer                          */
  __IOM uint32_t         INTREADPOINT;          /**< Interleaver read pointer                           */
  __IOM uint32_t         AUTOCG;                /**< Automatic clock gating                             */
  __IOM uint32_t         CGCLKSTOP;             /**< Automatic clock gating                             */
  __IOM uint32_t         RAMBASEADDR;           /**< RAM Base Address                                   */
  FRC_FCD_TypeDef        FCD[4U];               /**< Frame Descriptors                                  */
  uint32_t               RESERVED2[15U];        /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT[16U];       /**< Interleaver element                                */
  uint32_t               RESERVED3[944U];       /**< Reserved for future use                            */
  __IM uint32_t          IPVERSION_SET;         /**< IP Version                                         */
  __IOM uint32_t         EN_SET;                /**< Enable peripheral clock to this module             */
  __IM uint32_t          STATUS_SET;            /**< FRC Status                                         */
  __IOM uint32_t         DFLCTRL_SET;           /**< Dynamic Frame Length Control                       */
  __IOM uint32_t         MAXLENGTH_SET;         /**< Maximum Frame Length Register                      */
  __IOM uint32_t         ADDRFILTCTRL_SET;      /**< Address Filter Control                             */
  __IOM uint32_t         DATABUFFER_SET;        /**< Frame controller data buffer                       */
  __IM uint32_t          WCNT_SET;              /**< Word Counter Value Register                        */
  __IOM uint32_t         WCNTCMP0_SET;          /**< Word Counter Compare 0                             */
  __IOM uint32_t         WCNTCMP1_SET;          /**< Word Counter Compare 1                             */
  __IOM uint32_t         WCNTCMP2_SET;          /**< Word Counter Compare 2                             */
  __IOM uint32_t         CMD_SET;               /**< FRC Commands                                       */
  __IOM uint32_t         WHITECTRL_SET;         /**< Whitener Control                                   */
  __IOM uint32_t         WHITEPOLY_SET;         /**< Whitener Polynomial                                */
  __IOM uint32_t         WHITEINIT_SET;         /**< Whitener Initial Value                             */
  __IOM uint32_t         FECCTRL_SET;           /**< Forward Error Correction Control                   */
  __IOM uint32_t         BLOCKRAMADDR_SET;      /**< Block decoding RAM address register                */
  __IOM uint32_t         CONVRAMADDR_SET;       /**< Convolutional decoding RAM address                 */
  __IOM uint32_t         CTRL_SET;              /**< Control Register                                   */
  __IOM uint32_t         RXCTRL_SET;            /**< RX Control Register                                */
  __IOM uint32_t         TRAILTXDATACTRL_SET;   /**< Trailing TX Data Control                           */
  __IOM uint32_t         TRAILRXDATA_SET;       /**< Trailing RX Data                                   */
  __IM uint32_t          SCNT_SET;              /**< Sub-Frame Counter Value Register                   */
  __IOM uint32_t         CONVGENERATOR_SET;     /**< Convolutional Coder Polynomials                    */
  __IOM uint32_t         PUNCTCTRL_SET;         /**< Puncturing Control                                 */
  __IOM uint32_t         PAUSECTRL_SET;         /**< Pause Control                                      */
  __IOM uint32_t         IF_SET;                /**< Frame Controller Interrupt Flags                   */
  __IOM uint32_t         IEN_SET;               /**< Interrupt Enable Register                          */
  __IOM uint32_t         MIRRORIF_SET;          /**< FRC Interrupt Flag Mirror Register                 */
  uint32_t               RESERVED4[1U];         /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE_SET;        /**< FRC Buffer Control                                 */
  uint32_t               RESERVED5[2U];         /**< Reserved for future use                            */
  __IOM uint32_t         SNIFFCTRL_SET;         /**< FRC Sniffer Control Register                       */
  __IOM uint32_t         AUXDATA_SET;           /**< Auxiliary sniffer data output register             */
  __IOM uint32_t         RAWCTRL_SET;           /**< Raw data control                                   */
  __IM uint32_t          RXRAWDATA_SET;         /**< Receiver RAW data                                  */
  __IM uint32_t          PAUSEDATA_SET;         /**< Receiver pause data                                */
  __IM uint32_t          LIKELYCONVSTATE_SET;   /**< Most likely convolutional decoder state            */
  __IM uint32_t          INTELEMENTNEXT_SET;    /**< Interleaver element value                          */
  __IOM uint32_t         INTWRITEPOINT_SET;     /**< Interleaver write pointer                          */
  __IOM uint32_t         INTREADPOINT_SET;      /**< Interleaver read pointer                           */
  __IOM uint32_t         AUTOCG_SET;            /**< Automatic clock gating                             */
  __IOM uint32_t         CGCLKSTOP_SET;         /**< Automatic clock gating                             */
  __IOM uint32_t         RAMBASEADDR_SET;       /**< RAM Base Address                                   */
  FRC_FCD_TypeDef        FCD_SET[4U];           /**< Frame Descriptors                                  */
  uint32_t               RESERVED6[15U];        /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT_SET[16U];   /**< Interleaver element                                */
  uint32_t               RESERVED7[944U];       /**< Reserved for future use                            */
  __IM uint32_t          IPVERSION_CLR;         /**< IP Version                                         */
  __IOM uint32_t         EN_CLR;                /**< Enable peripheral clock to this module             */
  __IM uint32_t          STATUS_CLR;            /**< FRC Status                                         */
  __IOM uint32_t         DFLCTRL_CLR;           /**< Dynamic Frame Length Control                       */
  __IOM uint32_t         MAXLENGTH_CLR;         /**< Maximum Frame Length Register                      */
  __IOM uint32_t         ADDRFILTCTRL_CLR;      /**< Address Filter Control                             */
  __IOM uint32_t         DATABUFFER_CLR;        /**< Frame controller data buffer                       */
  __IM uint32_t          WCNT_CLR;              /**< Word Counter Value Register                        */
  __IOM uint32_t         WCNTCMP0_CLR;          /**< Word Counter Compare 0                             */
  __IOM uint32_t         WCNTCMP1_CLR;          /**< Word Counter Compare 1                             */
  __IOM uint32_t         WCNTCMP2_CLR;          /**< Word Counter Compare 2                             */
  __IOM uint32_t         CMD_CLR;               /**< FRC Commands                                       */
  __IOM uint32_t         WHITECTRL_CLR;         /**< Whitener Control                                   */
  __IOM uint32_t         WHITEPOLY_CLR;         /**< Whitener Polynomial                                */
  __IOM uint32_t         WHITEINIT_CLR;         /**< Whitener Initial Value                             */
  __IOM uint32_t         FECCTRL_CLR;           /**< Forward Error Correction Control                   */
  __IOM uint32_t         BLOCKRAMADDR_CLR;      /**< Block decoding RAM address register                */
  __IOM uint32_t         CONVRAMADDR_CLR;       /**< Convolutional decoding RAM address                 */
  __IOM uint32_t         CTRL_CLR;              /**< Control Register                                   */
  __IOM uint32_t         RXCTRL_CLR;            /**< RX Control Register                                */
  __IOM uint32_t         TRAILTXDATACTRL_CLR;   /**< Trailing TX Data Control                           */
  __IOM uint32_t         TRAILRXDATA_CLR;       /**< Trailing RX Data                                   */
  __IM uint32_t          SCNT_CLR;              /**< Sub-Frame Counter Value Register                   */
  __IOM uint32_t         CONVGENERATOR_CLR;     /**< Convolutional Coder Polynomials                    */
  __IOM uint32_t         PUNCTCTRL_CLR;         /**< Puncturing Control                                 */
  __IOM uint32_t         PAUSECTRL_CLR;         /**< Pause Control                                      */
  __IOM uint32_t         IF_CLR;                /**< Frame Controller Interrupt Flags                   */
  __IOM uint32_t         IEN_CLR;               /**< Interrupt Enable Register                          */
  __IOM uint32_t         MIRRORIF_CLR;          /**< FRC Interrupt Flag Mirror Register                 */
  uint32_t               RESERVED8[1U];         /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE_CLR;        /**< FRC Buffer Control                                 */
  uint32_t               RESERVED9[2U];         /**< Reserved for future use                            */
  __IOM uint32_t         SNIFFCTRL_CLR;         /**< FRC Sniffer Control Register                       */
  __IOM uint32_t         AUXDATA_CLR;           /**< Auxiliary sniffer data output register             */
  __IOM uint32_t         RAWCTRL_CLR;           /**< Raw data control                                   */
  __IM uint32_t          RXRAWDATA_CLR;         /**< Receiver RAW data                                  */
  __IM uint32_t          PAUSEDATA_CLR;         /**< Receiver pause data                                */
  __IM uint32_t          LIKELYCONVSTATE_CLR;   /**< Most likely convolutional decoder state            */
  __IM uint32_t          INTELEMENTNEXT_CLR;    /**< Interleaver element value                          */
  __IOM uint32_t         INTWRITEPOINT_CLR;     /**< Interleaver write pointer                          */
  __IOM uint32_t         INTREADPOINT_CLR;      /**< Interleaver read pointer                           */
  __IOM uint32_t         AUTOCG_CLR;            /**< Automatic clock gating                             */
  __IOM uint32_t         CGCLKSTOP_CLR;         /**< Automatic clock gating                             */
  __IOM uint32_t         RAMBASEADDR_CLR;       /**< RAM Base Address                                   */
  FRC_FCD_TypeDef        FCD_CLR[4U];           /**< Frame Descriptors                                  */
  uint32_t               RESERVED10[15U];       /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT_CLR[16U];   /**< Interleaver element                                */
  uint32_t               RESERVED11[944U];      /**< Reserved for future use                            */
  __IM uint32_t          IPVERSION_TGL;         /**< IP Version                                         */
  __IOM uint32_t         EN_TGL;                /**< Enable peripheral clock to this module             */
  __IM uint32_t          STATUS_TGL;            /**< FRC Status                                         */
  __IOM uint32_t         DFLCTRL_TGL;           /**< Dynamic Frame Length Control                       */
  __IOM uint32_t         MAXLENGTH_TGL;         /**< Maximum Frame Length Register                      */
  __IOM uint32_t         ADDRFILTCTRL_TGL;      /**< Address Filter Control                             */
  __IOM uint32_t         DATABUFFER_TGL;        /**< Frame controller data buffer                       */
  __IM uint32_t          WCNT_TGL;              /**< Word Counter Value Register                        */
  __IOM uint32_t         WCNTCMP0_TGL;          /**< Word Counter Compare 0                             */
  __IOM uint32_t         WCNTCMP1_TGL;          /**< Word Counter Compare 1                             */
  __IOM uint32_t         WCNTCMP2_TGL;          /**< Word Counter Compare 2                             */
  __IOM uint32_t         CMD_TGL;               /**< FRC Commands                                       */
  __IOM uint32_t         WHITECTRL_TGL;         /**< Whitener Control                                   */
  __IOM uint32_t         WHITEPOLY_TGL;         /**< Whitener Polynomial                                */
  __IOM uint32_t         WHITEINIT_TGL;         /**< Whitener Initial Value                             */
  __IOM uint32_t         FECCTRL_TGL;           /**< Forward Error Correction Control                   */
  __IOM uint32_t         BLOCKRAMADDR_TGL;      /**< Block decoding RAM address register                */
  __IOM uint32_t         CONVRAMADDR_TGL;       /**< Convolutional decoding RAM address                 */
  __IOM uint32_t         CTRL_TGL;              /**< Control Register                                   */
  __IOM uint32_t         RXCTRL_TGL;            /**< RX Control Register                                */
  __IOM uint32_t         TRAILTXDATACTRL_TGL;   /**< Trailing TX Data Control                           */
  __IOM uint32_t         TRAILRXDATA_TGL;       /**< Trailing RX Data                                   */
  __IM uint32_t          SCNT_TGL;              /**< Sub-Frame Counter Value Register                   */
  __IOM uint32_t         CONVGENERATOR_TGL;     /**< Convolutional Coder Polynomials                    */
  __IOM uint32_t         PUNCTCTRL_TGL;         /**< Puncturing Control                                 */
  __IOM uint32_t         PAUSECTRL_TGL;         /**< Pause Control                                      */
  __IOM uint32_t         IF_TGL;                /**< Frame Controller Interrupt Flags                   */
  __IOM uint32_t         IEN_TGL;               /**< Interrupt Enable Register                          */
  __IOM uint32_t         MIRRORIF_TGL;          /**< FRC Interrupt Flag Mirror Register                 */
  uint32_t               RESERVED12[1U];        /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE_TGL;        /**< FRC Buffer Control                                 */
  uint32_t               RESERVED13[2U];        /**< Reserved for future use                            */
  __IOM uint32_t         SNIFFCTRL_TGL;         /**< FRC Sniffer Control Register                       */
  __IOM uint32_t         AUXDATA_TGL;           /**< Auxiliary sniffer data output register             */
  __IOM uint32_t         RAWCTRL_TGL;           /**< Raw data control                                   */
  __IM uint32_t          RXRAWDATA_TGL;         /**< Receiver RAW data                                  */
  __IM uint32_t          PAUSEDATA_TGL;         /**< Receiver pause data                                */
  __IM uint32_t          LIKELYCONVSTATE_TGL;   /**< Most likely convolutional decoder state            */
  __IM uint32_t          INTELEMENTNEXT_TGL;    /**< Interleaver element value                          */
  __IOM uint32_t         INTWRITEPOINT_TGL;     /**< Interleaver write pointer                          */
  __IOM uint32_t         INTREADPOINT_TGL;      /**< Interleaver read pointer                           */
  __IOM uint32_t         AUTOCG_TGL;            /**< Automatic clock gating                             */
  __IOM uint32_t         CGCLKSTOP_TGL;         /**< Automatic clock gating                             */
  __IOM uint32_t         RAMBASEADDR_TGL;       /**< RAM Base Address                                   */
  FRC_FCD_TypeDef        FCD_TGL[4U];           /**< Frame Descriptors                                  */
  uint32_t               RESERVED14[15U];       /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT_TGL[16U];   /**< Interleaver element                                */
} FRC_TypeDef;
/** @} End of group EFR32MG21_FRC */

/**************************************************************************//**
 * @addtogroup EFR32MG21_FRC
 * @{
 * @defgroup EFR32MG21_FRC_BitFields FRC Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for FRC IPVERSION */
#define _FRC_IPVERSION_RESETVALUE                          0x00000000UL                            /**< Default value for FRC_IPVERSION             */
#define _FRC_IPVERSION_MASK                                0xFFFFFFFFUL                            /**< Mask for FRC_IPVERSION                      */
#define _FRC_IPVERSION_IPVERSION_SHIFT                     0                                       /**< Shift value for FRC_IPVERSION               */
#define _FRC_IPVERSION_IPVERSION_MASK                      0xFFFFFFFFUL                            /**< Bit mask for FRC_IPVERSION                  */
#define _FRC_IPVERSION_IPVERSION_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for FRC_IPVERSION              */
#define FRC_IPVERSION_IPVERSION_DEFAULT                    (_FRC_IPVERSION_IPVERSION_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_IPVERSION      */

/* Bit fields for FRC EN */
#define _FRC_EN_RESETVALUE                                 0x00000000UL                 /**< Default value for FRC_EN                    */
#define _FRC_EN_MASK                                       0x00000001UL                 /**< Mask for FRC_EN                             */
#define FRC_EN_EN                                          (0x1UL << 0)                 /**< Enable peripheral clock to this module      */
#define _FRC_EN_EN_SHIFT                                   0                            /**< Shift value for FRC_EN                      */
#define _FRC_EN_EN_MASK                                    0x1UL                        /**< Bit mask for FRC_EN                         */
#define _FRC_EN_EN_DEFAULT                                 0x00000000UL                 /**< Mode DEFAULT for FRC_EN                     */
#define FRC_EN_EN_DEFAULT                                  (_FRC_EN_EN_DEFAULT << 0)    /**< Shifted mode DEFAULT for FRC_EN             */

/* Bit fields for FRC STATUS */
#define _FRC_STATUS_RESETVALUE                             0x00000000UL                                      /**< Default value for FRC_STATUS                */
#define _FRC_STATUS_MASK                                   0x000FFFFFUL                                      /**< Mask for FRC_STATUS                         */
#define _FRC_STATUS_SNIFFDCOUNT_SHIFT                      0                                                 /**< Shift value for FRC_SNIFFDCOUNT             */
#define _FRC_STATUS_SNIFFDCOUNT_MASK                       0x1FUL                                            /**< Bit mask for FRC_SNIFFDCOUNT                */
#define _FRC_STATUS_SNIFFDCOUNT_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_SNIFFDCOUNT_DEFAULT                     (_FRC_STATUS_SNIFFDCOUNT_DEFAULT << 0)            /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_ACTIVETXFCD                             (0x1UL << 5)                                      /**< Active Transmit Frame Descriptor            */
#define _FRC_STATUS_ACTIVETXFCD_SHIFT                      5                                                 /**< Shift value for FRC_ACTIVETXFCD             */
#define _FRC_STATUS_ACTIVETXFCD_MASK                       0x20UL                                            /**< Bit mask for FRC_ACTIVETXFCD                */
#define _FRC_STATUS_ACTIVETXFCD_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define _FRC_STATUS_ACTIVETXFCD_FCD0                       0x00000000UL                                      /**< Mode FCD0 for FRC_STATUS                    */
#define _FRC_STATUS_ACTIVETXFCD_FCD1                       0x00000001UL                                      /**< Mode FCD1 for FRC_STATUS                    */
#define FRC_STATUS_ACTIVETXFCD_DEFAULT                     (_FRC_STATUS_ACTIVETXFCD_DEFAULT << 5)            /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_ACTIVETXFCD_FCD0                        (_FRC_STATUS_ACTIVETXFCD_FCD0 << 5)               /**< Shifted mode FCD0 for FRC_STATUS            */
#define FRC_STATUS_ACTIVETXFCD_FCD1                        (_FRC_STATUS_ACTIVETXFCD_FCD1 << 5)               /**< Shifted mode FCD1 for FRC_STATUS            */
#define FRC_STATUS_ACTIVERXFCD                             (0x1UL << 6)                                      /**< Active Receive Frame Descriptor             */
#define _FRC_STATUS_ACTIVERXFCD_SHIFT                      6                                                 /**< Shift value for FRC_ACTIVERXFCD             */
#define _FRC_STATUS_ACTIVERXFCD_MASK                       0x40UL                                            /**< Bit mask for FRC_ACTIVERXFCD                */
#define _FRC_STATUS_ACTIVERXFCD_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define _FRC_STATUS_ACTIVERXFCD_FCD2                       0x00000000UL                                      /**< Mode FCD2 for FRC_STATUS                    */
#define _FRC_STATUS_ACTIVERXFCD_FCD3                       0x00000001UL                                      /**< Mode FCD3 for FRC_STATUS                    */
#define FRC_STATUS_ACTIVERXFCD_DEFAULT                     (_FRC_STATUS_ACTIVERXFCD_DEFAULT << 6)            /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_ACTIVERXFCD_FCD2                        (_FRC_STATUS_ACTIVERXFCD_FCD2 << 6)               /**< Shifted mode FCD2 for FRC_STATUS            */
#define FRC_STATUS_ACTIVERXFCD_FCD3                        (_FRC_STATUS_ACTIVERXFCD_FCD3 << 6)               /**< Shifted mode FCD3 for FRC_STATUS            */
#define FRC_STATUS_SNIFFDFRAME                             (0x1UL << 7)                                      /**< Sniffer data frame active status            */
#define _FRC_STATUS_SNIFFDFRAME_SHIFT                      7                                                 /**< Shift value for FRC_SNIFFDFRAME             */
#define _FRC_STATUS_SNIFFDFRAME_MASK                       0x80UL                                            /**< Bit mask for FRC_SNIFFDFRAME                */
#define _FRC_STATUS_SNIFFDFRAME_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_SNIFFDFRAME_DEFAULT                     (_FRC_STATUS_SNIFFDFRAME_DEFAULT << 7)            /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_RXRAWBLOCKED                            (0x1UL << 8)                                      /**< Receiver raw trigger block is active        */
#define _FRC_STATUS_RXRAWBLOCKED_SHIFT                     8                                                 /**< Shift value for FRC_RXRAWBLOCKED            */
#define _FRC_STATUS_RXRAWBLOCKED_MASK                      0x100UL                                           /**< Bit mask for FRC_RXRAWBLOCKED               */
#define _FRC_STATUS_RXRAWBLOCKED_DEFAULT                   0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_RXRAWBLOCKED_DEFAULT                    (_FRC_STATUS_RXRAWBLOCKED_DEFAULT << 8)           /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_FRAMEOK                                 (0x1UL << 9)                                      /**< Frame valid                                 */
#define _FRC_STATUS_FRAMEOK_SHIFT                          9                                                 /**< Shift value for FRC_FRAMEOK                 */
#define _FRC_STATUS_FRAMEOK_MASK                           0x200UL                                           /**< Bit mask for FRC_FRAMEOK                    */
#define _FRC_STATUS_FRAMEOK_DEFAULT                        0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_FRAMEOK_DEFAULT                         (_FRC_STATUS_FRAMEOK_DEFAULT << 9)                /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_RXABORTINPROGRESS                       (0x1UL << 10)                                     /**< Receive aborted in progress status flag     */
#define _FRC_STATUS_RXABORTINPROGRESS_SHIFT                10                                                /**< Shift value for FRC_RXABORTINPROGRESS       */
#define _FRC_STATUS_RXABORTINPROGRESS_MASK                 0x400UL                                           /**< Bit mask for FRC_RXABORTINPROGRESS          */
#define _FRC_STATUS_RXABORTINPROGRESS_DEFAULT              0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_RXABORTINPROGRESS_DEFAULT               (_FRC_STATUS_RXABORTINPROGRESS_DEFAULT << 10)     /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_TXWORD                                  (0x1UL << 11)                                     /**< Transmit Word Flag                          */
#define _FRC_STATUS_TXWORD_SHIFT                           11                                                /**< Shift value for FRC_TXWORD                  */
#define _FRC_STATUS_TXWORD_MASK                            0x800UL                                           /**< Bit mask for FRC_TXWORD                     */
#define _FRC_STATUS_TXWORD_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_TXWORD_DEFAULT                          (_FRC_STATUS_TXWORD_DEFAULT << 11)                /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_RXWORD                                  (0x1UL << 12)                                     /**< Receive Word Flag                           */
#define _FRC_STATUS_RXWORD_SHIFT                           12                                                /**< Shift value for FRC_RXWORD                  */
#define _FRC_STATUS_RXWORD_MASK                            0x1000UL                                          /**< Bit mask for FRC_RXWORD                     */
#define _FRC_STATUS_RXWORD_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_RXWORD_DEFAULT                          (_FRC_STATUS_RXWORD_DEFAULT << 12)                /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_CONVPAUSED                              (0x1UL << 13)                                     /**< Convolutional coder pause event active      */
#define _FRC_STATUS_CONVPAUSED_SHIFT                       13                                                /**< Shift value for FRC_CONVPAUSED              */
#define _FRC_STATUS_CONVPAUSED_MASK                        0x2000UL                                          /**< Bit mask for FRC_CONVPAUSED                 */
#define _FRC_STATUS_CONVPAUSED_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_CONVPAUSED_DEFAULT                      (_FRC_STATUS_CONVPAUSED_DEFAULT << 13)            /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_TXSUBFRAMEPAUSED                        (0x1UL << 14)                                     /**< Transmit subframe pause event active        */
#define _FRC_STATUS_TXSUBFRAMEPAUSED_SHIFT                 14                                                /**< Shift value for FRC_TXSUBFRAMEPAUSED        */
#define _FRC_STATUS_TXSUBFRAMEPAUSED_MASK                  0x4000UL                                          /**< Bit mask for FRC_TXSUBFRAMEPAUSED           */
#define _FRC_STATUS_TXSUBFRAMEPAUSED_DEFAULT               0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_TXSUBFRAMEPAUSED_DEFAULT                (_FRC_STATUS_TXSUBFRAMEPAUSED_DEFAULT << 14)      /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_INTERLEAVEREADPAUSED                    (0x1UL << 15)                                     /**< Interleaver read pause event active         */
#define _FRC_STATUS_INTERLEAVEREADPAUSED_SHIFT             15                                                /**< Shift value for FRC_INTERLEAVEREADPAUSED    */
#define _FRC_STATUS_INTERLEAVEREADPAUSED_MASK              0x8000UL                                          /**< Bit mask for FRC_INTERLEAVEREADPAUSED       */
#define _FRC_STATUS_INTERLEAVEREADPAUSED_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_INTERLEAVEREADPAUSED_DEFAULT            (_FRC_STATUS_INTERLEAVEREADPAUSED_DEFAULT << 15)  /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_INTERLEAVEWRITEPAUSED                   (0x1UL << 16)                                     /**< Interleaver write pause event active        */
#define _FRC_STATUS_INTERLEAVEWRITEPAUSED_SHIFT            16                                                /**< Shift value for FRC_INTERLEAVEWRITEPAUSED   */
#define _FRC_STATUS_INTERLEAVEWRITEPAUSED_MASK             0x10000UL                                         /**< Bit mask for FRC_INTERLEAVEWRITEPAUSED      */
#define _FRC_STATUS_INTERLEAVEWRITEPAUSED_DEFAULT          0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_INTERLEAVEWRITEPAUSED_DEFAULT           (_FRC_STATUS_INTERLEAVEWRITEPAUSED_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_FRAMEDETPAUSED                          (0x1UL << 17)                                     /**< Frame detected pause event active           */
#define _FRC_STATUS_FRAMEDETPAUSED_SHIFT                   17                                                /**< Shift value for FRC_FRAMEDETPAUSED          */
#define _FRC_STATUS_FRAMEDETPAUSED_MASK                    0x20000UL                                         /**< Bit mask for FRC_FRAMEDETPAUSED             */
#define _FRC_STATUS_FRAMEDETPAUSED_DEFAULT                 0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_FRAMEDETPAUSED_DEFAULT                  (_FRC_STATUS_FRAMEDETPAUSED_DEFAULT << 17)        /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_FRAMELENGTHERROR                        (0x1UL << 18)                                     /**< Frame Length Error for RX and TX            */
#define _FRC_STATUS_FRAMELENGTHERROR_SHIFT                 18                                                /**< Shift value for FRC_FRAMELENGTHERROR        */
#define _FRC_STATUS_FRAMELENGTHERROR_MASK                  0x40000UL                                         /**< Bit mask for FRC_FRAMELENGTHERROR           */
#define _FRC_STATUS_FRAMELENGTHERROR_DEFAULT               0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_FRAMELENGTHERROR_DEFAULT                (_FRC_STATUS_FRAMELENGTHERROR_DEFAULT << 18)      /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_DEMODERROR                              (0x1UL << 19)                                     /**< Demod Error in RX                           */
#define _FRC_STATUS_DEMODERROR_SHIFT                       19                                                /**< Shift value for FRC_DEMODERROR              */
#define _FRC_STATUS_DEMODERROR_MASK                        0x80000UL                                         /**< Bit mask for FRC_DEMODERROR                 */
#define _FRC_STATUS_DEMODERROR_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define FRC_STATUS_DEMODERROR_DEFAULT                      (_FRC_STATUS_DEMODERROR_DEFAULT << 19)            /**< Shifted mode DEFAULT for FRC_STATUS         */

/* Bit fields for FRC DFLCTRL */
#define _FRC_DFLCTRL_RESETVALUE                            0x00000000UL                                 /**< Default value for FRC_DFLCTRL               */
#define _FRC_DFLCTRL_MASK                                  0x001FFF7FUL                                 /**< Mask for FRC_DFLCTRL                        */
#define _FRC_DFLCTRL_DFLMODE_SHIFT                         0                                            /**< Shift value for FRC_DFLMODE                 */
#define _FRC_DFLCTRL_DFLMODE_MASK                          0x7UL                                        /**< Bit mask for FRC_DFLMODE                    */
#define _FRC_DFLCTRL_DFLMODE_DEFAULT                       0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define _FRC_DFLCTRL_DFLMODE_DISABLE                       0x00000000UL                                 /**< Mode DISABLE for FRC_DFLCTRL                */
#define _FRC_DFLCTRL_DFLMODE_SINGLEBYTE                    0x00000001UL                                 /**< Mode SINGLEBYTE for FRC_DFLCTRL             */
#define _FRC_DFLCTRL_DFLMODE_SINGLEBYTEMSB                 0x00000002UL                                 /**< Mode SINGLEBYTEMSB for FRC_DFLCTRL          */
#define _FRC_DFLCTRL_DFLMODE_DUALBYTELSBFIRST              0x00000003UL                                 /**< Mode DUALBYTELSBFIRST for FRC_DFLCTRL       */
#define _FRC_DFLCTRL_DFLMODE_DUALBYTEMSBFIRST              0x00000004UL                                 /**< Mode DUALBYTEMSBFIRST for FRC_DFLCTRL       */
#define _FRC_DFLCTRL_DFLMODE_INFINITE                      0x00000005UL                                 /**< Mode INFINITE for FRC_DFLCTRL               */
#define _FRC_DFLCTRL_DFLMODE_BLOCKERROR                    0x00000006UL                                 /**< Mode BLOCKERROR for FRC_DFLCTRL             */
#define FRC_DFLCTRL_DFLMODE_DEFAULT                        (_FRC_DFLCTRL_DFLMODE_DEFAULT << 0)          /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define FRC_DFLCTRL_DFLMODE_DISABLE                        (_FRC_DFLCTRL_DFLMODE_DISABLE << 0)          /**< Shifted mode DISABLE for FRC_DFLCTRL        */
#define FRC_DFLCTRL_DFLMODE_SINGLEBYTE                     (_FRC_DFLCTRL_DFLMODE_SINGLEBYTE << 0)       /**< Shifted mode SINGLEBYTE for FRC_DFLCTRL     */
#define FRC_DFLCTRL_DFLMODE_SINGLEBYTEMSB                  (_FRC_DFLCTRL_DFLMODE_SINGLEBYTEMSB << 0)    /**< Shifted mode SINGLEBYTEMSB for FRC_DFLCTRL  */
#define FRC_DFLCTRL_DFLMODE_DUALBYTELSBFIRST               (_FRC_DFLCTRL_DFLMODE_DUALBYTELSBFIRST << 0) /**< Shifted mode DUALBYTELSBFIRST for FRC_DFLCTRL*/
#define FRC_DFLCTRL_DFLMODE_DUALBYTEMSBFIRST               (_FRC_DFLCTRL_DFLMODE_DUALBYTEMSBFIRST << 0) /**< Shifted mode DUALBYTEMSBFIRST for FRC_DFLCTRL*/
#define FRC_DFLCTRL_DFLMODE_INFINITE                       (_FRC_DFLCTRL_DFLMODE_INFINITE << 0)         /**< Shifted mode INFINITE for FRC_DFLCTRL       */
#define FRC_DFLCTRL_DFLMODE_BLOCKERROR                     (_FRC_DFLCTRL_DFLMODE_BLOCKERROR << 0)       /**< Shifted mode BLOCKERROR for FRC_DFLCTRL     */
#define FRC_DFLCTRL_DFLBITORDER                            (0x1UL << 3)                                 /**< Dynamic Frame Length Bit order              */
#define _FRC_DFLCTRL_DFLBITORDER_SHIFT                     3                                            /**< Shift value for FRC_DFLBITORDER             */
#define _FRC_DFLCTRL_DFLBITORDER_MASK                      0x8UL                                        /**< Bit mask for FRC_DFLBITORDER                */
#define _FRC_DFLCTRL_DFLBITORDER_DEFAULT                   0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define _FRC_DFLCTRL_DFLBITORDER_NORMAL                    0x00000000UL                                 /**< Mode NORMAL for FRC_DFLCTRL                 */
#define _FRC_DFLCTRL_DFLBITORDER_REVERSE                   0x00000001UL                                 /**< Mode REVERSE for FRC_DFLCTRL                */
#define FRC_DFLCTRL_DFLBITORDER_DEFAULT                    (_FRC_DFLCTRL_DFLBITORDER_DEFAULT << 3)      /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define FRC_DFLCTRL_DFLBITORDER_NORMAL                     (_FRC_DFLCTRL_DFLBITORDER_NORMAL << 3)       /**< Shifted mode NORMAL for FRC_DFLCTRL         */
#define FRC_DFLCTRL_DFLBITORDER_REVERSE                    (_FRC_DFLCTRL_DFLBITORDER_REVERSE << 3)      /**< Shifted mode REVERSE for FRC_DFLCTRL        */
#define _FRC_DFLCTRL_DFLSHIFT_SHIFT                        4                                            /**< Shift value for FRC_DFLSHIFT                */
#define _FRC_DFLCTRL_DFLSHIFT_MASK                         0x70UL                                       /**< Bit mask for FRC_DFLSHIFT                   */
#define _FRC_DFLCTRL_DFLSHIFT_DEFAULT                      0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define FRC_DFLCTRL_DFLSHIFT_DEFAULT                       (_FRC_DFLCTRL_DFLSHIFT_DEFAULT << 4)         /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define _FRC_DFLCTRL_DFLOFFSET_SHIFT                       8                                            /**< Shift value for FRC_DFLOFFSET               */
#define _FRC_DFLCTRL_DFLOFFSET_MASK                        0xF00UL                                      /**< Bit mask for FRC_DFLOFFSET                  */
#define _FRC_DFLCTRL_DFLOFFSET_DEFAULT                     0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define FRC_DFLCTRL_DFLOFFSET_DEFAULT                      (_FRC_DFLCTRL_DFLOFFSET_DEFAULT << 8)        /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define _FRC_DFLCTRL_DFLBITS_SHIFT                         12                                           /**< Shift value for FRC_DFLBITS                 */
#define _FRC_DFLCTRL_DFLBITS_MASK                          0xF000UL                                     /**< Bit mask for FRC_DFLBITS                    */
#define _FRC_DFLCTRL_DFLBITS_DEFAULT                       0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define FRC_DFLCTRL_DFLBITS_DEFAULT                        (_FRC_DFLCTRL_DFLBITS_DEFAULT << 12)         /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define _FRC_DFLCTRL_MINLENGTH_SHIFT                       16                                           /**< Shift value for FRC_MINLENGTH               */
#define _FRC_DFLCTRL_MINLENGTH_MASK                        0xF0000UL                                    /**< Bit mask for FRC_MINLENGTH                  */
#define _FRC_DFLCTRL_MINLENGTH_DEFAULT                     0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define FRC_DFLCTRL_MINLENGTH_DEFAULT                      (_FRC_DFLCTRL_MINLENGTH_DEFAULT << 16)       /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define FRC_DFLCTRL_DFLINCLUDECRC                          (0x1UL << 20)                                /**< Length field includes CRC values or not     */
#define _FRC_DFLCTRL_DFLINCLUDECRC_SHIFT                   20                                           /**< Shift value for FRC_DFLINCLUDECRC           */
#define _FRC_DFLCTRL_DFLINCLUDECRC_MASK                    0x100000UL                                   /**< Bit mask for FRC_DFLINCLUDECRC              */
#define _FRC_DFLCTRL_DFLINCLUDECRC_DEFAULT                 0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define _FRC_DFLCTRL_DFLINCLUDECRC_X0                      0x00000000UL                                 /**< Mode X0 for FRC_DFLCTRL                     */
#define _FRC_DFLCTRL_DFLINCLUDECRC_X1                      0x00000001UL                                 /**< Mode X1 for FRC_DFLCTRL                     */
#define FRC_DFLCTRL_DFLINCLUDECRC_DEFAULT                  (_FRC_DFLCTRL_DFLINCLUDECRC_DEFAULT << 20)   /**< Shifted mode DEFAULT for FRC_DFLCTRL        */
#define FRC_DFLCTRL_DFLINCLUDECRC_X0                       (_FRC_DFLCTRL_DFLINCLUDECRC_X0 << 20)        /**< Shifted mode X0 for FRC_DFLCTRL             */
#define FRC_DFLCTRL_DFLINCLUDECRC_X1                       (_FRC_DFLCTRL_DFLINCLUDECRC_X1 << 20)        /**< Shifted mode X1 for FRC_DFLCTRL             */

/* Bit fields for FRC MAXLENGTH */
#define _FRC_MAXLENGTH_RESETVALUE                          0x00004FFFUL                             /**< Default value for FRC_MAXLENGTH             */
#define _FRC_MAXLENGTH_MASK                                0x0000FFFFUL                             /**< Mask for FRC_MAXLENGTH                      */
#define _FRC_MAXLENGTH_MAXLENGTH_SHIFT                     0                                        /**< Shift value for FRC_MAXLENGTH               */
#define _FRC_MAXLENGTH_MAXLENGTH_MASK                      0xFFFUL                                  /**< Bit mask for FRC_MAXLENGTH                  */
#define _FRC_MAXLENGTH_MAXLENGTH_DEFAULT                   0x00000FFFUL                             /**< Mode DEFAULT for FRC_MAXLENGTH              */
#define FRC_MAXLENGTH_MAXLENGTH_DEFAULT                    (_FRC_MAXLENGTH_MAXLENGTH_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_MAXLENGTH      */
#define _FRC_MAXLENGTH_INILENGTH_SHIFT                     12                                       /**< Shift value for FRC_INILENGTH               */
#define _FRC_MAXLENGTH_INILENGTH_MASK                      0xF000UL                                 /**< Bit mask for FRC_INILENGTH                  */
#define _FRC_MAXLENGTH_INILENGTH_DEFAULT                   0x00000004UL                             /**< Mode DEFAULT for FRC_MAXLENGTH              */
#define FRC_MAXLENGTH_INILENGTH_DEFAULT                    (_FRC_MAXLENGTH_INILENGTH_DEFAULT << 12) /**< Shifted mode DEFAULT for FRC_MAXLENGTH      */

/* Bit fields for FRC ADDRFILTCTRL */
#define _FRC_ADDRFILTCTRL_RESETVALUE                       0x00000000UL                                /**< Default value for FRC_ADDRFILTCTRL          */
#define _FRC_ADDRFILTCTRL_MASK                             0x0000FF07UL                                /**< Mask for FRC_ADDRFILTCTRL                   */
#define FRC_ADDRFILTCTRL_EN                                (0x1UL << 0)                                /**< Address Filter Enable                       */
#define _FRC_ADDRFILTCTRL_EN_SHIFT                         0                                           /**< Shift value for FRC_EN                      */
#define _FRC_ADDRFILTCTRL_EN_MASK                          0x1UL                                       /**< Bit mask for FRC_EN                         */
#define _FRC_ADDRFILTCTRL_EN_DEFAULT                       0x00000000UL                                /**< Mode DEFAULT for FRC_ADDRFILTCTRL           */
#define FRC_ADDRFILTCTRL_EN_DEFAULT                        (_FRC_ADDRFILTCTRL_EN_DEFAULT << 0)         /**< Shifted mode DEFAULT for FRC_ADDRFILTCTRL   */
#define FRC_ADDRFILTCTRL_BRDCST00EN                        (0x1UL << 1)                                /**< Broadcast Address 0x00 Enable               */
#define _FRC_ADDRFILTCTRL_BRDCST00EN_SHIFT                 1                                           /**< Shift value for FRC_BRDCST00EN              */
#define _FRC_ADDRFILTCTRL_BRDCST00EN_MASK                  0x2UL                                       /**< Bit mask for FRC_BRDCST00EN                 */
#define _FRC_ADDRFILTCTRL_BRDCST00EN_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for FRC_ADDRFILTCTRL           */
#define FRC_ADDRFILTCTRL_BRDCST00EN_DEFAULT                (_FRC_ADDRFILTCTRL_BRDCST00EN_DEFAULT << 1) /**< Shifted mode DEFAULT for FRC_ADDRFILTCTRL   */
#define FRC_ADDRFILTCTRL_BRDCSTFFEN                        (0x1UL << 2)                                /**< Broadcast Address 0xFF Enable               */
#define _FRC_ADDRFILTCTRL_BRDCSTFFEN_SHIFT                 2                                           /**< Shift value for FRC_BRDCSTFFEN              */
#define _FRC_ADDRFILTCTRL_BRDCSTFFEN_MASK                  0x4UL                                       /**< Bit mask for FRC_BRDCSTFFEN                 */
#define _FRC_ADDRFILTCTRL_BRDCSTFFEN_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for FRC_ADDRFILTCTRL           */
#define FRC_ADDRFILTCTRL_BRDCSTFFEN_DEFAULT                (_FRC_ADDRFILTCTRL_BRDCSTFFEN_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_ADDRFILTCTRL   */
#define _FRC_ADDRFILTCTRL_ADDRESS_SHIFT                    8                                           /**< Shift value for FRC_ADDRESS                 */
#define _FRC_ADDRFILTCTRL_ADDRESS_MASK                     0xFF00UL                                    /**< Bit mask for FRC_ADDRESS                    */
#define _FRC_ADDRFILTCTRL_ADDRESS_DEFAULT                  0x00000000UL                                /**< Mode DEFAULT for FRC_ADDRFILTCTRL           */
#define FRC_ADDRFILTCTRL_ADDRESS_DEFAULT                   (_FRC_ADDRFILTCTRL_ADDRESS_DEFAULT << 8)    /**< Shifted mode DEFAULT for FRC_ADDRFILTCTRL   */

/* Bit fields for FRC DATABUFFER */
#define _FRC_DATABUFFER_RESETVALUE                         0x00000000UL                              /**< Default value for FRC_DATABUFFER            */
#define _FRC_DATABUFFER_MASK                               0x000000FFUL                              /**< Mask for FRC_DATABUFFER                     */
#define _FRC_DATABUFFER_DATABUFFER_SHIFT                   0                                         /**< Shift value for FRC_DATABUFFER              */
#define _FRC_DATABUFFER_DATABUFFER_MASK                    0xFFUL                                    /**< Bit mask for FRC_DATABUFFER                 */
#define _FRC_DATABUFFER_DATABUFFER_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for FRC_DATABUFFER             */
#define FRC_DATABUFFER_DATABUFFER_DEFAULT                  (_FRC_DATABUFFER_DATABUFFER_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_DATABUFFER     */

/* Bit fields for FRC WCNT */
#define _FRC_WCNT_RESETVALUE                               0x00000000UL                  /**< Default value for FRC_WCNT                  */
#define _FRC_WCNT_MASK                                     0x00000FFFUL                  /**< Mask for FRC_WCNT                           */
#define _FRC_WCNT_WCNT_SHIFT                               0                             /**< Shift value for FRC_WCNT                    */
#define _FRC_WCNT_WCNT_MASK                                0xFFFUL                       /**< Bit mask for FRC_WCNT                       */
#define _FRC_WCNT_WCNT_DEFAULT                             0x00000000UL                  /**< Mode DEFAULT for FRC_WCNT                   */
#define FRC_WCNT_WCNT_DEFAULT                              (_FRC_WCNT_WCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WCNT           */

/* Bit fields for FRC WCNTCMP0 */
#define _FRC_WCNTCMP0_RESETVALUE                           0x00000000UL                             /**< Default value for FRC_WCNTCMP0              */
#define _FRC_WCNTCMP0_MASK                                 0x00000FFFUL                             /**< Mask for FRC_WCNTCMP0                       */
#define _FRC_WCNTCMP0_FRAMELENGTH_SHIFT                    0                                        /**< Shift value for FRC_FRAMELENGTH             */
#define _FRC_WCNTCMP0_FRAMELENGTH_MASK                     0xFFFUL                                  /**< Bit mask for FRC_FRAMELENGTH                */
#define _FRC_WCNTCMP0_FRAMELENGTH_DEFAULT                  0x00000000UL                             /**< Mode DEFAULT for FRC_WCNTCMP0               */
#define FRC_WCNTCMP0_FRAMELENGTH_DEFAULT                   (_FRC_WCNTCMP0_FRAMELENGTH_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WCNTCMP0       */

/* Bit fields for FRC WCNTCMP1 */
#define _FRC_WCNTCMP1_RESETVALUE                           0x00000000UL                                /**< Default value for FRC_WCNTCMP1              */
#define _FRC_WCNTCMP1_MASK                                 0x00000FFFUL                                /**< Mask for FRC_WCNTCMP1                       */
#define _FRC_WCNTCMP1_LENGTHFIELDLOC_SHIFT                 0                                           /**< Shift value for FRC_LENGTHFIELDLOC          */
#define _FRC_WCNTCMP1_LENGTHFIELDLOC_MASK                  0xFFFUL                                     /**< Bit mask for FRC_LENGTHFIELDLOC             */
#define _FRC_WCNTCMP1_LENGTHFIELDLOC_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for FRC_WCNTCMP1               */
#define FRC_WCNTCMP1_LENGTHFIELDLOC_DEFAULT                (_FRC_WCNTCMP1_LENGTHFIELDLOC_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WCNTCMP1       */

/* Bit fields for FRC WCNTCMP2 */
#define _FRC_WCNTCMP2_RESETVALUE                           0x00000000UL                              /**< Default value for FRC_WCNTCMP2              */
#define _FRC_WCNTCMP2_MASK                                 0x00000FFFUL                              /**< Mask for FRC_WCNTCMP2                       */
#define _FRC_WCNTCMP2_ADDRFIELDLOC_SHIFT                   0                                         /**< Shift value for FRC_ADDRFIELDLOC            */
#define _FRC_WCNTCMP2_ADDRFIELDLOC_MASK                    0xFFFUL                                   /**< Bit mask for FRC_ADDRFIELDLOC               */
#define _FRC_WCNTCMP2_ADDRFIELDLOC_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for FRC_WCNTCMP2               */
#define FRC_WCNTCMP2_ADDRFIELDLOC_DEFAULT                  (_FRC_WCNTCMP2_ADDRFIELDLOC_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WCNTCMP2       */

/* Bit fields for FRC CMD */
#define _FRC_CMD_RESETVALUE                                0x00000000UL                                  /**< Default value for FRC_CMD                   */
#define _FRC_CMD_MASK                                      0x00001FFFUL                                  /**< Mask for FRC_CMD                            */
#define FRC_CMD_RXABORT                                    (0x1UL << 0)                                  /**< RX Abort                                    */
#define _FRC_CMD_RXABORT_SHIFT                             0                                             /**< Shift value for FRC_RXABORT                 */
#define _FRC_CMD_RXABORT_MASK                              0x1UL                                         /**< Bit mask for FRC_RXABORT                    */
#define _FRC_CMD_RXABORT_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_RXABORT_DEFAULT                            (_FRC_CMD_RXABORT_DEFAULT << 0)               /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_FRAMEDETRESUME                             (0x1UL << 1)                                  /**< FRAMEDET resume                             */
#define _FRC_CMD_FRAMEDETRESUME_SHIFT                      1                                             /**< Shift value for FRC_FRAMEDETRESUME          */
#define _FRC_CMD_FRAMEDETRESUME_MASK                       0x2UL                                         /**< Bit mask for FRC_FRAMEDETRESUME             */
#define _FRC_CMD_FRAMEDETRESUME_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_FRAMEDETRESUME_DEFAULT                     (_FRC_CMD_FRAMEDETRESUME_DEFAULT << 1)        /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_INTERLEAVEWRITERESUME                      (0x1UL << 2)                                  /**< Interleaver write resume                    */
#define _FRC_CMD_INTERLEAVEWRITERESUME_SHIFT               2                                             /**< Shift value for FRC_INTERLEAVEWRITERESUME   */
#define _FRC_CMD_INTERLEAVEWRITERESUME_MASK                0x4UL                                         /**< Bit mask for FRC_INTERLEAVEWRITERESUME      */
#define _FRC_CMD_INTERLEAVEWRITERESUME_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_INTERLEAVEWRITERESUME_DEFAULT              (_FRC_CMD_INTERLEAVEWRITERESUME_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_INTERLEAVEREADRESUME                       (0x1UL << 3)                                  /**< Interleaver read resume                     */
#define _FRC_CMD_INTERLEAVEREADRESUME_SHIFT                3                                             /**< Shift value for FRC_INTERLEAVEREADRESUME    */
#define _FRC_CMD_INTERLEAVEREADRESUME_MASK                 0x8UL                                         /**< Bit mask for FRC_INTERLEAVEREADRESUME       */
#define _FRC_CMD_INTERLEAVEREADRESUME_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_INTERLEAVEREADRESUME_DEFAULT               (_FRC_CMD_INTERLEAVEREADRESUME_DEFAULT << 3)  /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_CONVRESUME                                 (0x1UL << 4)                                  /**< Convolutional coder resume                  */
#define _FRC_CMD_CONVRESUME_SHIFT                          4                                             /**< Shift value for FRC_CONVRESUME              */
#define _FRC_CMD_CONVRESUME_MASK                           0x10UL                                        /**< Bit mask for FRC_CONVRESUME                 */
#define _FRC_CMD_CONVRESUME_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_CONVRESUME_DEFAULT                         (_FRC_CMD_CONVRESUME_DEFAULT << 4)            /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_CONVTERMINATE                              (0x1UL << 5)                                  /**< Convolutional coder termination             */
#define _FRC_CMD_CONVTERMINATE_SHIFT                       5                                             /**< Shift value for FRC_CONVTERMINATE           */
#define _FRC_CMD_CONVTERMINATE_MASK                        0x20UL                                        /**< Bit mask for FRC_CONVTERMINATE              */
#define _FRC_CMD_CONVTERMINATE_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_CONVTERMINATE_DEFAULT                      (_FRC_CMD_CONVTERMINATE_DEFAULT << 5)         /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_TXSUBFRAMERESUME                           (0x1UL << 6)                                  /**< TX subframe resume                          */
#define _FRC_CMD_TXSUBFRAMERESUME_SHIFT                    6                                             /**< Shift value for FRC_TXSUBFRAMERESUME        */
#define _FRC_CMD_TXSUBFRAMERESUME_MASK                     0x40UL                                        /**< Bit mask for FRC_TXSUBFRAMERESUME           */
#define _FRC_CMD_TXSUBFRAMERESUME_DEFAULT                  0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_TXSUBFRAMERESUME_DEFAULT                   (_FRC_CMD_TXSUBFRAMERESUME_DEFAULT << 6)      /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_INTERLEAVEINIT                             (0x1UL << 7)                                  /**< Interleaver initialization                  */
#define _FRC_CMD_INTERLEAVEINIT_SHIFT                      7                                             /**< Shift value for FRC_INTERLEAVEINIT          */
#define _FRC_CMD_INTERLEAVEINIT_MASK                       0x80UL                                        /**< Bit mask for FRC_INTERLEAVEINIT             */
#define _FRC_CMD_INTERLEAVEINIT_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_INTERLEAVEINIT_DEFAULT                     (_FRC_CMD_INTERLEAVEINIT_DEFAULT << 7)        /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_INTERLEAVECNTCLEAR                         (0x1UL << 8)                                  /**< Interleaver counter clear                   */
#define _FRC_CMD_INTERLEAVECNTCLEAR_SHIFT                  8                                             /**< Shift value for FRC_INTERLEAVECNTCLEAR      */
#define _FRC_CMD_INTERLEAVECNTCLEAR_MASK                   0x100UL                                       /**< Bit mask for FRC_INTERLEAVECNTCLEAR         */
#define _FRC_CMD_INTERLEAVECNTCLEAR_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_INTERLEAVECNTCLEAR_DEFAULT                 (_FRC_CMD_INTERLEAVECNTCLEAR_DEFAULT << 8)    /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_CONVINIT                                   (0x1UL << 9)                                  /**< Convolutional coder initialize              */
#define _FRC_CMD_CONVINIT_SHIFT                            9                                             /**< Shift value for FRC_CONVINIT                */
#define _FRC_CMD_CONVINIT_MASK                             0x200UL                                       /**< Bit mask for FRC_CONVINIT                   */
#define _FRC_CMD_CONVINIT_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_CONVINIT_DEFAULT                           (_FRC_CMD_CONVINIT_DEFAULT << 9)              /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_BLOCKINIT                                  (0x1UL << 10)                                 /**< Block coder initialize                      */
#define _FRC_CMD_BLOCKINIT_SHIFT                           10                                            /**< Shift value for FRC_BLOCKINIT               */
#define _FRC_CMD_BLOCKINIT_MASK                            0x400UL                                       /**< Bit mask for FRC_BLOCKINIT                  */
#define _FRC_CMD_BLOCKINIT_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_BLOCKINIT_DEFAULT                          (_FRC_CMD_BLOCKINIT_DEFAULT << 10)            /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_STATEINIT                                  (0x1UL << 11)                                 /**< FRC State initialize                        */
#define _FRC_CMD_STATEINIT_SHIFT                           11                                            /**< Shift value for FRC_STATEINIT               */
#define _FRC_CMD_STATEINIT_MASK                            0x800UL                                       /**< Bit mask for FRC_STATEINIT                  */
#define _FRC_CMD_STATEINIT_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_STATEINIT_DEFAULT                          (_FRC_CMD_STATEINIT_DEFAULT << 11)            /**< Shifted mode DEFAULT for FRC_CMD            */
#define FRC_CMD_RXRAWUNBLOCK                               (0x1UL << 12)                                 /**< Clear RXRAWBLOCKED status flag              */
#define _FRC_CMD_RXRAWUNBLOCK_SHIFT                        12                                            /**< Shift value for FRC_RXRAWUNBLOCK            */
#define _FRC_CMD_RXRAWUNBLOCK_MASK                         0x1000UL                                      /**< Bit mask for FRC_RXRAWUNBLOCK               */
#define _FRC_CMD_RXRAWUNBLOCK_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for FRC_CMD                    */
#define FRC_CMD_RXRAWUNBLOCK_DEFAULT                       (_FRC_CMD_RXRAWUNBLOCK_DEFAULT << 12)         /**< Shifted mode DEFAULT for FRC_CMD            */

/* Bit fields for FRC WHITECTRL */
#define _FRC_WHITECTRL_RESETVALUE                          0x00000000UL                                     /**< Default value for FRC_WHITECTRL             */
#define _FRC_WHITECTRL_MASK                                0x00001F7FUL                                     /**< Mask for FRC_WHITECTRL                      */
#define _FRC_WHITECTRL_FEEDBACKSEL_SHIFT                   0                                                /**< Shift value for FRC_FEEDBACKSEL             */
#define _FRC_WHITECTRL_FEEDBACKSEL_MASK                    0x1FUL                                           /**< Bit mask for FRC_FEEDBACKSEL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_DEFAULT                 0x00000000UL                                     /**< Mode DEFAULT for FRC_WHITECTRL              */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT0                    0x00000000UL                                     /**< Mode BIT0 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT1                    0x00000001UL                                     /**< Mode BIT1 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT2                    0x00000002UL                                     /**< Mode BIT2 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT3                    0x00000003UL                                     /**< Mode BIT3 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT4                    0x00000004UL                                     /**< Mode BIT4 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT5                    0x00000005UL                                     /**< Mode BIT5 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT6                    0x00000006UL                                     /**< Mode BIT6 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT7                    0x00000007UL                                     /**< Mode BIT7 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT8                    0x00000008UL                                     /**< Mode BIT8 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT9                    0x00000009UL                                     /**< Mode BIT9 for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT10                   0x0000000AUL                                     /**< Mode BIT10 for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT11                   0x0000000BUL                                     /**< Mode BIT11 for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT12                   0x0000000CUL                                     /**< Mode BIT12 for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT13                   0x0000000DUL                                     /**< Mode BIT13 for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT14                   0x0000000EUL                                     /**< Mode BIT14 for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_BIT15                   0x0000000FUL                                     /**< Mode BIT15 for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_INPUT                   0x00000010UL                                     /**< Mode INPUT for FRC_WHITECTRL                */
#define _FRC_WHITECTRL_FEEDBACKSEL_ZERO                    0x00000011UL                                     /**< Mode ZERO for FRC_WHITECTRL                 */
#define _FRC_WHITECTRL_FEEDBACKSEL_ONE                     0x00000012UL                                     /**< Mode ONE for FRC_WHITECTRL                  */
#define _FRC_WHITECTRL_FEEDBACKSEL_TXLASTWORD              0x00000013UL                                     /**< Mode TXLASTWORD for FRC_WHITECTRL           */
#define FRC_WHITECTRL_FEEDBACKSEL_DEFAULT                  (_FRC_WHITECTRL_FEEDBACKSEL_DEFAULT << 0)        /**< Shifted mode DEFAULT for FRC_WHITECTRL      */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT0                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT0 << 0)           /**< Shifted mode BIT0 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT1                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT1 << 0)           /**< Shifted mode BIT1 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT2                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT2 << 0)           /**< Shifted mode BIT2 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT3                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT3 << 0)           /**< Shifted mode BIT3 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT4                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT4 << 0)           /**< Shifted mode BIT4 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT5                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT5 << 0)           /**< Shifted mode BIT5 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT6                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT6 << 0)           /**< Shifted mode BIT6 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT7                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT7 << 0)           /**< Shifted mode BIT7 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT8                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT8 << 0)           /**< Shifted mode BIT8 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT9                     (_FRC_WHITECTRL_FEEDBACKSEL_BIT9 << 0)           /**< Shifted mode BIT9 for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT10                    (_FRC_WHITECTRL_FEEDBACKSEL_BIT10 << 0)          /**< Shifted mode BIT10 for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT11                    (_FRC_WHITECTRL_FEEDBACKSEL_BIT11 << 0)          /**< Shifted mode BIT11 for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT12                    (_FRC_WHITECTRL_FEEDBACKSEL_BIT12 << 0)          /**< Shifted mode BIT12 for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT13                    (_FRC_WHITECTRL_FEEDBACKSEL_BIT13 << 0)          /**< Shifted mode BIT13 for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT14                    (_FRC_WHITECTRL_FEEDBACKSEL_BIT14 << 0)          /**< Shifted mode BIT14 for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_BIT15                    (_FRC_WHITECTRL_FEEDBACKSEL_BIT15 << 0)          /**< Shifted mode BIT15 for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_INPUT                    (_FRC_WHITECTRL_FEEDBACKSEL_INPUT << 0)          /**< Shifted mode INPUT for FRC_WHITECTRL        */
#define FRC_WHITECTRL_FEEDBACKSEL_ZERO                     (_FRC_WHITECTRL_FEEDBACKSEL_ZERO << 0)           /**< Shifted mode ZERO for FRC_WHITECTRL         */
#define FRC_WHITECTRL_FEEDBACKSEL_ONE                      (_FRC_WHITECTRL_FEEDBACKSEL_ONE << 0)            /**< Shifted mode ONE for FRC_WHITECTRL          */
#define FRC_WHITECTRL_FEEDBACKSEL_TXLASTWORD               (_FRC_WHITECTRL_FEEDBACKSEL_TXLASTWORD << 0)     /**< Shifted mode TXLASTWORD for FRC_WHITECTRL   */
#define _FRC_WHITECTRL_XORFEEDBACK_SHIFT                   5                                                /**< Shift value for FRC_XORFEEDBACK             */
#define _FRC_WHITECTRL_XORFEEDBACK_MASK                    0x60UL                                           /**< Bit mask for FRC_XORFEEDBACK                */
#define _FRC_WHITECTRL_XORFEEDBACK_DEFAULT                 0x00000000UL                                     /**< Mode DEFAULT for FRC_WHITECTRL              */
#define _FRC_WHITECTRL_XORFEEDBACK_DIRECT                  0x00000000UL                                     /**< Mode DIRECT for FRC_WHITECTRL               */
#define _FRC_WHITECTRL_XORFEEDBACK_XOR                     0x00000001UL                                     /**< Mode XOR for FRC_WHITECTRL                  */
#define _FRC_WHITECTRL_XORFEEDBACK_ZERO                    0x00000002UL                                     /**< Mode ZERO for FRC_WHITECTRL                 */
#define FRC_WHITECTRL_XORFEEDBACK_DEFAULT                  (_FRC_WHITECTRL_XORFEEDBACK_DEFAULT << 5)        /**< Shifted mode DEFAULT for FRC_WHITECTRL      */
#define FRC_WHITECTRL_XORFEEDBACK_DIRECT                   (_FRC_WHITECTRL_XORFEEDBACK_DIRECT << 5)         /**< Shifted mode DIRECT for FRC_WHITECTRL       */
#define FRC_WHITECTRL_XORFEEDBACK_XOR                      (_FRC_WHITECTRL_XORFEEDBACK_XOR << 5)            /**< Shifted mode XOR for FRC_WHITECTRL          */
#define FRC_WHITECTRL_XORFEEDBACK_ZERO                     (_FRC_WHITECTRL_XORFEEDBACK_ZERO << 5)           /**< Shifted mode ZERO for FRC_WHITECTRL         */
#define _FRC_WHITECTRL_SHROUTPUTSEL_SHIFT                  8                                                /**< Shift value for FRC_SHROUTPUTSEL            */
#define _FRC_WHITECTRL_SHROUTPUTSEL_MASK                   0xF00UL                                          /**< Bit mask for FRC_SHROUTPUTSEL               */
#define _FRC_WHITECTRL_SHROUTPUTSEL_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for FRC_WHITECTRL              */
#define FRC_WHITECTRL_SHROUTPUTSEL_DEFAULT                 (_FRC_WHITECTRL_SHROUTPUTSEL_DEFAULT << 8)       /**< Shifted mode DEFAULT for FRC_WHITECTRL      */
#define FRC_WHITECTRL_BLOCKERRORCORRECT                    (0x1UL << 12)                                    /**< Block Errors Correction enable              */
#define _FRC_WHITECTRL_BLOCKERRORCORRECT_SHIFT             12                                               /**< Shift value for FRC_BLOCKERRORCORRECT       */
#define _FRC_WHITECTRL_BLOCKERRORCORRECT_MASK              0x1000UL                                         /**< Bit mask for FRC_BLOCKERRORCORRECT          */
#define _FRC_WHITECTRL_BLOCKERRORCORRECT_DEFAULT           0x00000000UL                                     /**< Mode DEFAULT for FRC_WHITECTRL              */
#define _FRC_WHITECTRL_BLOCKERRORCORRECT_X0                0x00000000UL                                     /**< Mode X0 for FRC_WHITECTRL                   */
#define _FRC_WHITECTRL_BLOCKERRORCORRECT_X1                0x00000001UL                                     /**< Mode X1 for FRC_WHITECTRL                   */
#define FRC_WHITECTRL_BLOCKERRORCORRECT_DEFAULT            (_FRC_WHITECTRL_BLOCKERRORCORRECT_DEFAULT << 12) /**< Shifted mode DEFAULT for FRC_WHITECTRL      */
#define FRC_WHITECTRL_BLOCKERRORCORRECT_X0                 (_FRC_WHITECTRL_BLOCKERRORCORRECT_X0 << 12)      /**< Shifted mode X0 for FRC_WHITECTRL           */
#define FRC_WHITECTRL_BLOCKERRORCORRECT_X1                 (_FRC_WHITECTRL_BLOCKERRORCORRECT_X1 << 12)      /**< Shifted mode X1 for FRC_WHITECTRL           */

/* Bit fields for FRC WHITEPOLY */
#define _FRC_WHITEPOLY_RESETVALUE                          0x00000000UL                       /**< Default value for FRC_WHITEPOLY             */
#define _FRC_WHITEPOLY_MASK                                0x0000FFFFUL                       /**< Mask for FRC_WHITEPOLY                      */
#define _FRC_WHITEPOLY_POLY_SHIFT                          0                                  /**< Shift value for FRC_POLY                    */
#define _FRC_WHITEPOLY_POLY_MASK                           0xFFFFUL                           /**< Bit mask for FRC_POLY                       */
#define _FRC_WHITEPOLY_POLY_DEFAULT                        0x00000000UL                       /**< Mode DEFAULT for FRC_WHITEPOLY              */
#define FRC_WHITEPOLY_POLY_DEFAULT                         (_FRC_WHITEPOLY_POLY_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WHITEPOLY      */

/* Bit fields for FRC WHITEINIT */
#define _FRC_WHITEINIT_RESETVALUE                          0x00000000UL                            /**< Default value for FRC_WHITEINIT             */
#define _FRC_WHITEINIT_MASK                                0x0000FFFFUL                            /**< Mask for FRC_WHITEINIT                      */
#define _FRC_WHITEINIT_WHITEINIT_SHIFT                     0                                       /**< Shift value for FRC_WHITEINIT               */
#define _FRC_WHITEINIT_WHITEINIT_MASK                      0xFFFFUL                                /**< Bit mask for FRC_WHITEINIT                  */
#define _FRC_WHITEINIT_WHITEINIT_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for FRC_WHITEINIT              */
#define FRC_WHITEINIT_WHITEINIT_DEFAULT                    (_FRC_WHITEINIT_WHITEINIT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WHITEINIT      */

/* Bit fields for FRC FECCTRL */
#define _FRC_FECCTRL_RESETVALUE                            0x00000000UL                                         /**< Default value for FRC_FECCTRL               */
#define _FRC_FECCTRL_MASK                                  0x003FFFF7UL                                         /**< Mask for FRC_FECCTRL                        */
#define _FRC_FECCTRL_BLOCKWHITEMODE_SHIFT                  0                                                    /**< Shift value for FRC_BLOCKWHITEMODE          */
#define _FRC_FECCTRL_BLOCKWHITEMODE_MASK                   0x7UL                                                /**< Bit mask for FRC_BLOCKWHITEMODE             */
#define _FRC_FECCTRL_BLOCKWHITEMODE_DEFAULT                0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_BLOCKWHITEMODE_DIRECT                 0x00000000UL                                         /**< Mode DIRECT for FRC_FECCTRL                 */
#define _FRC_FECCTRL_BLOCKWHITEMODE_WHITE                  0x00000001UL                                         /**< Mode WHITE for FRC_FECCTRL                  */
#define _FRC_FECCTRL_BLOCKWHITEMODE_BYTEWHITE              0x00000002UL                                         /**< Mode BYTEWHITE for FRC_FECCTRL              */
#define _FRC_FECCTRL_BLOCKWHITEMODE_INTERLEAVEDWHITE0      0x00000003UL                                         /**< Mode INTERLEAVEDWHITE0 for FRC_FECCTRL      */
#define _FRC_FECCTRL_BLOCKWHITEMODE_INTERLEAVEDWHITE1      0x00000004UL                                         /**< Mode INTERLEAVEDWHITE1 for FRC_FECCTRL      */
#define _FRC_FECCTRL_BLOCKWHITEMODE_BLOCKCODEINSERT        0x00000005UL                                         /**< Mode BLOCKCODEINSERT for FRC_FECCTRL        */
#define _FRC_FECCTRL_BLOCKWHITEMODE_BLOCKCODEREPLACE       0x00000006UL                                         /**< Mode BLOCKCODEREPLACE for FRC_FECCTRL       */
#define _FRC_FECCTRL_BLOCKWHITEMODE_BLOCKLOOKUP            0x00000007UL                                         /**< Mode BLOCKLOOKUP for FRC_FECCTRL            */
#define FRC_FECCTRL_BLOCKWHITEMODE_DEFAULT                 (_FRC_FECCTRL_BLOCKWHITEMODE_DEFAULT << 0)           /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_BLOCKWHITEMODE_DIRECT                  (_FRC_FECCTRL_BLOCKWHITEMODE_DIRECT << 0)            /**< Shifted mode DIRECT for FRC_FECCTRL         */
#define FRC_FECCTRL_BLOCKWHITEMODE_WHITE                   (_FRC_FECCTRL_BLOCKWHITEMODE_WHITE << 0)             /**< Shifted mode WHITE for FRC_FECCTRL          */
#define FRC_FECCTRL_BLOCKWHITEMODE_BYTEWHITE               (_FRC_FECCTRL_BLOCKWHITEMODE_BYTEWHITE << 0)         /**< Shifted mode BYTEWHITE for FRC_FECCTRL      */
#define FRC_FECCTRL_BLOCKWHITEMODE_INTERLEAVEDWHITE0       (_FRC_FECCTRL_BLOCKWHITEMODE_INTERLEAVEDWHITE0 << 0) /**< Shifted mode INTERLEAVEDWHITE0 for FRC_FECCTRL*/
#define FRC_FECCTRL_BLOCKWHITEMODE_INTERLEAVEDWHITE1       (_FRC_FECCTRL_BLOCKWHITEMODE_INTERLEAVEDWHITE1 << 0) /**< Shifted mode INTERLEAVEDWHITE1 for FRC_FECCTRL*/
#define FRC_FECCTRL_BLOCKWHITEMODE_BLOCKCODEINSERT         (_FRC_FECCTRL_BLOCKWHITEMODE_BLOCKCODEINSERT << 0)   /**< Shifted mode BLOCKCODEINSERT for FRC_FECCTRL*/
#define FRC_FECCTRL_BLOCKWHITEMODE_BLOCKCODEREPLACE        (_FRC_FECCTRL_BLOCKWHITEMODE_BLOCKCODEREPLACE << 0)  /**< Shifted mode BLOCKCODEREPLACE for FRC_FECCTRL*/
#define FRC_FECCTRL_BLOCKWHITEMODE_BLOCKLOOKUP             (_FRC_FECCTRL_BLOCKWHITEMODE_BLOCKLOOKUP << 0)       /**< Shifted mode BLOCKLOOKUP for FRC_FECCTRL    */
#define _FRC_FECCTRL_CONVMODE_SHIFT                        4                                                    /**< Shift value for FRC_CONVMODE                */
#define _FRC_FECCTRL_CONVMODE_MASK                         0x30UL                                               /**< Bit mask for FRC_CONVMODE                   */
#define _FRC_FECCTRL_CONVMODE_DEFAULT                      0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_CONVMODE_DISABLE                      0x00000000UL                                         /**< Mode DISABLE for FRC_FECCTRL                */
#define _FRC_FECCTRL_CONVMODE_CONVOLUTIONAL                0x00000001UL                                         /**< Mode CONVOLUTIONAL for FRC_FECCTRL          */
#define _FRC_FECCTRL_CONVMODE_REPEAT                       0x00000002UL                                         /**< Mode REPEAT for FRC_FECCTRL                 */
#define FRC_FECCTRL_CONVMODE_DEFAULT                       (_FRC_FECCTRL_CONVMODE_DEFAULT << 4)                 /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVMODE_DISABLE                       (_FRC_FECCTRL_CONVMODE_DISABLE << 4)                 /**< Shifted mode DISABLE for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVMODE_CONVOLUTIONAL                 (_FRC_FECCTRL_CONVMODE_CONVOLUTIONAL << 4)           /**< Shifted mode CONVOLUTIONAL for FRC_FECCTRL  */
#define FRC_FECCTRL_CONVMODE_REPEAT                        (_FRC_FECCTRL_CONVMODE_REPEAT << 4)                  /**< Shifted mode REPEAT for FRC_FECCTRL         */
#define FRC_FECCTRL_CONVDECODEMODE                         (0x1UL << 6)                                         /**< Convolutional decoding mode setting.        */
#define _FRC_FECCTRL_CONVDECODEMODE_SHIFT                  6                                                    /**< Shift value for FRC_CONVDECODEMODE          */
#define _FRC_FECCTRL_CONVDECODEMODE_MASK                   0x40UL                                               /**< Bit mask for FRC_CONVDECODEMODE             */
#define _FRC_FECCTRL_CONVDECODEMODE_DEFAULT                0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_CONVDECODEMODE_SOFT                   0x00000000UL                                         /**< Mode SOFT for FRC_FECCTRL                   */
#define _FRC_FECCTRL_CONVDECODEMODE_HARD                   0x00000001UL                                         /**< Mode HARD for FRC_FECCTRL                   */
#define FRC_FECCTRL_CONVDECODEMODE_DEFAULT                 (_FRC_FECCTRL_CONVDECODEMODE_DEFAULT << 6)           /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVDECODEMODE_SOFT                    (_FRC_FECCTRL_CONVDECODEMODE_SOFT << 6)              /**< Shifted mode SOFT for FRC_FECCTRL           */
#define FRC_FECCTRL_CONVDECODEMODE_HARD                    (_FRC_FECCTRL_CONVDECODEMODE_HARD << 6)              /**< Shifted mode HARD for FRC_FECCTRL           */
#define FRC_FECCTRL_CONVTRACEBACKDISABLE                   (0x1UL << 7)                                         /**< Convolutional traceback disabling           */
#define _FRC_FECCTRL_CONVTRACEBACKDISABLE_SHIFT            7                                                    /**< Shift value for FRC_CONVTRACEBACKDISABLE    */
#define _FRC_FECCTRL_CONVTRACEBACKDISABLE_MASK             0x80UL                                               /**< Bit mask for FRC_CONVTRACEBACKDISABLE       */
#define _FRC_FECCTRL_CONVTRACEBACKDISABLE_DEFAULT          0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_CONVTRACEBACKDISABLE_X0               0x00000000UL                                         /**< Mode X0 for FRC_FECCTRL                     */
#define _FRC_FECCTRL_CONVTRACEBACKDISABLE_X1               0x00000001UL                                         /**< Mode X1 for FRC_FECCTRL                     */
#define FRC_FECCTRL_CONVTRACEBACKDISABLE_DEFAULT           (_FRC_FECCTRL_CONVTRACEBACKDISABLE_DEFAULT << 7)     /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVTRACEBACKDISABLE_X0                (_FRC_FECCTRL_CONVTRACEBACKDISABLE_X0 << 7)          /**< Shifted mode X0 for FRC_FECCTRL             */
#define FRC_FECCTRL_CONVTRACEBACKDISABLE_X1                (_FRC_FECCTRL_CONVTRACEBACKDISABLE_X1 << 7)          /**< Shifted mode X1 for FRC_FECCTRL             */
#define _FRC_FECCTRL_CONVINV_SHIFT                         8                                                    /**< Shift value for FRC_CONVINV                 */
#define _FRC_FECCTRL_CONVINV_MASK                          0x300UL                                              /**< Bit mask for FRC_CONVINV                    */
#define _FRC_FECCTRL_CONVINV_DEFAULT                       0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define FRC_FECCTRL_CONVINV_DEFAULT                        (_FRC_FECCTRL_CONVINV_DEFAULT << 8)                  /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define _FRC_FECCTRL_INTERLEAVEMODE_SHIFT                  10                                                   /**< Shift value for FRC_INTERLEAVEMODE          */
#define _FRC_FECCTRL_INTERLEAVEMODE_MASK                   0xC00UL                                              /**< Bit mask for FRC_INTERLEAVEMODE             */
#define _FRC_FECCTRL_INTERLEAVEMODE_DEFAULT                0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_INTERLEAVEMODE_DISABLE                0x00000000UL                                         /**< Mode DISABLE for FRC_FECCTRL                */
#define _FRC_FECCTRL_INTERLEAVEMODE_ENABLE                 0x00000001UL                                         /**< Mode ENABLE for FRC_FECCTRL                 */
#define _FRC_FECCTRL_INTERLEAVEMODE_RXBUFFER               0x00000002UL                                         /**< Mode RXBUFFER for FRC_FECCTRL               */
#define _FRC_FECCTRL_INTERLEAVEMODE_RXTXBUFFER             0x00000003UL                                         /**< Mode RXTXBUFFER for FRC_FECCTRL             */
#define FRC_FECCTRL_INTERLEAVEMODE_DEFAULT                 (_FRC_FECCTRL_INTERLEAVEMODE_DEFAULT << 10)          /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_INTERLEAVEMODE_DISABLE                 (_FRC_FECCTRL_INTERLEAVEMODE_DISABLE << 10)          /**< Shifted mode DISABLE for FRC_FECCTRL        */
#define FRC_FECCTRL_INTERLEAVEMODE_ENABLE                  (_FRC_FECCTRL_INTERLEAVEMODE_ENABLE << 10)           /**< Shifted mode ENABLE for FRC_FECCTRL         */
#define FRC_FECCTRL_INTERLEAVEMODE_RXBUFFER                (_FRC_FECCTRL_INTERLEAVEMODE_RXBUFFER << 10)         /**< Shifted mode RXBUFFER for FRC_FECCTRL       */
#define FRC_FECCTRL_INTERLEAVEMODE_RXTXBUFFER              (_FRC_FECCTRL_INTERLEAVEMODE_RXTXBUFFER << 10)       /**< Shifted mode RXTXBUFFER for FRC_FECCTRL     */
#define _FRC_FECCTRL_INTERLEAVEFIRSTINDEX_SHIFT            12                                                   /**< Shift value for FRC_INTERLEAVEFIRSTINDEX    */
#define _FRC_FECCTRL_INTERLEAVEFIRSTINDEX_MASK             0xF000UL                                             /**< Bit mask for FRC_INTERLEAVEFIRSTINDEX       */
#define _FRC_FECCTRL_INTERLEAVEFIRSTINDEX_DEFAULT          0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define FRC_FECCTRL_INTERLEAVEFIRSTINDEX_DEFAULT           (_FRC_FECCTRL_INTERLEAVEFIRSTINDEX_DEFAULT << 12)    /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_INTERLEAVEWIDTH                        (0x1UL << 16)                                        /**< Interleave symbol width.                    */
#define _FRC_FECCTRL_INTERLEAVEWIDTH_SHIFT                 16                                                   /**< Shift value for FRC_INTERLEAVEWIDTH         */
#define _FRC_FECCTRL_INTERLEAVEWIDTH_MASK                  0x10000UL                                            /**< Bit mask for FRC_INTERLEAVEWIDTH            */
#define _FRC_FECCTRL_INTERLEAVEWIDTH_DEFAULT               0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_INTERLEAVEWIDTH_ONE                   0x00000000UL                                         /**< Mode ONE for FRC_FECCTRL                    */
#define _FRC_FECCTRL_INTERLEAVEWIDTH_TWO                   0x00000001UL                                         /**< Mode TWO for FRC_FECCTRL                    */
#define FRC_FECCTRL_INTERLEAVEWIDTH_DEFAULT                (_FRC_FECCTRL_INTERLEAVEWIDTH_DEFAULT << 16)         /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_INTERLEAVEWIDTH_ONE                    (_FRC_FECCTRL_INTERLEAVEWIDTH_ONE << 16)             /**< Shifted mode ONE for FRC_FECCTRL            */
#define FRC_FECCTRL_INTERLEAVEWIDTH_TWO                    (_FRC_FECCTRL_INTERLEAVEWIDTH_TWO << 16)             /**< Shifted mode TWO for FRC_FECCTRL            */
#define FRC_FECCTRL_CONVBUSLOCK                            (0x1UL << 17)                                        /**< Convolutional decoding bus lock             */
#define _FRC_FECCTRL_CONVBUSLOCK_SHIFT                     17                                                   /**< Shift value for FRC_CONVBUSLOCK             */
#define _FRC_FECCTRL_CONVBUSLOCK_MASK                      0x20000UL                                            /**< Bit mask for FRC_CONVBUSLOCK                */
#define _FRC_FECCTRL_CONVBUSLOCK_DEFAULT                   0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define FRC_FECCTRL_CONVBUSLOCK_DEFAULT                    (_FRC_FECCTRL_CONVBUSLOCK_DEFAULT << 17)             /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVSUBFRAMETERMINATE                  (0x1UL << 18)                                        /**< Enable trellis termination for subframes    */
#define _FRC_FECCTRL_CONVSUBFRAMETERMINATE_SHIFT           18                                                   /**< Shift value for FRC_CONVSUBFRAMETERMINATE   */
#define _FRC_FECCTRL_CONVSUBFRAMETERMINATE_MASK            0x40000UL                                            /**< Bit mask for FRC_CONVSUBFRAMETERMINATE      */
#define _FRC_FECCTRL_CONVSUBFRAMETERMINATE_DEFAULT         0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_CONVSUBFRAMETERMINATE_X0              0x00000000UL                                         /**< Mode X0 for FRC_FECCTRL                     */
#define _FRC_FECCTRL_CONVSUBFRAMETERMINATE_X1              0x00000001UL                                         /**< Mode X1 for FRC_FECCTRL                     */
#define FRC_FECCTRL_CONVSUBFRAMETERMINATE_DEFAULT          (_FRC_FECCTRL_CONVSUBFRAMETERMINATE_DEFAULT << 18)   /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVSUBFRAMETERMINATE_X0               (_FRC_FECCTRL_CONVSUBFRAMETERMINATE_X0 << 18)        /**< Shifted mode X0 for FRC_FECCTRL             */
#define FRC_FECCTRL_CONVSUBFRAMETERMINATE_X1               (_FRC_FECCTRL_CONVSUBFRAMETERMINATE_X1 << 18)        /**< Shifted mode X1 for FRC_FECCTRL             */
#define FRC_FECCTRL_SINGLEBLOCK                            (0x1UL << 19)                                        /**< Single block code per frame                 */
#define _FRC_FECCTRL_SINGLEBLOCK_SHIFT                     19                                                   /**< Shift value for FRC_SINGLEBLOCK             */
#define _FRC_FECCTRL_SINGLEBLOCK_MASK                      0x80000UL                                            /**< Bit mask for FRC_SINGLEBLOCK                */
#define _FRC_FECCTRL_SINGLEBLOCK_DEFAULT                   0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define FRC_FECCTRL_SINGLEBLOCK_DEFAULT                    (_FRC_FECCTRL_SINGLEBLOCK_DEFAULT << 19)             /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_FORCE2FSK                              (0x1UL << 20)                                        /**< Force use of 2-FSK                          */
#define _FRC_FECCTRL_FORCE2FSK_SHIFT                       20                                                   /**< Shift value for FRC_FORCE2FSK               */
#define _FRC_FECCTRL_FORCE2FSK_MASK                        0x100000UL                                           /**< Bit mask for FRC_FORCE2FSK                  */
#define _FRC_FECCTRL_FORCE2FSK_DEFAULT                     0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define FRC_FECCTRL_FORCE2FSK_DEFAULT                      (_FRC_FECCTRL_FORCE2FSK_DEFAULT << 20)               /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVHARDERROR                          (0x1UL << 21)                                        /**< Enable convolutional decoding hard error    */
#define _FRC_FECCTRL_CONVHARDERROR_SHIFT                   21                                                   /**< Shift value for FRC_CONVHARDERROR           */
#define _FRC_FECCTRL_CONVHARDERROR_MASK                    0x200000UL                                           /**< Bit mask for FRC_CONVHARDERROR              */
#define _FRC_FECCTRL_CONVHARDERROR_DEFAULT                 0x00000000UL                                         /**< Mode DEFAULT for FRC_FECCTRL                */
#define _FRC_FECCTRL_CONVHARDERROR_X0                      0x00000000UL                                         /**< Mode X0 for FRC_FECCTRL                     */
#define _FRC_FECCTRL_CONVHARDERROR_X1                      0x00000001UL                                         /**< Mode X1 for FRC_FECCTRL                     */
#define FRC_FECCTRL_CONVHARDERROR_DEFAULT                  (_FRC_FECCTRL_CONVHARDERROR_DEFAULT << 21)           /**< Shifted mode DEFAULT for FRC_FECCTRL        */
#define FRC_FECCTRL_CONVHARDERROR_X0                       (_FRC_FECCTRL_CONVHARDERROR_X0 << 21)                /**< Shifted mode X0 for FRC_FECCTRL             */
#define FRC_FECCTRL_CONVHARDERROR_X1                       (_FRC_FECCTRL_CONVHARDERROR_X1 << 21)                /**< Shifted mode X1 for FRC_FECCTRL             */

/* Bit fields for FRC BLOCKRAMADDR */
#define _FRC_BLOCKRAMADDR_RESETVALUE                       0x00000000UL                                  /**< Default value for FRC_BLOCKRAMADDR          */
#define _FRC_BLOCKRAMADDR_MASK                             0x0007FFFCUL                                  /**< Mask for FRC_BLOCKRAMADDR                   */
#define _FRC_BLOCKRAMADDR_BLOCKRAMADDR_SHIFT               2                                             /**< Shift value for FRC_BLOCKRAMADDR            */
#define _FRC_BLOCKRAMADDR_BLOCKRAMADDR_MASK                0x7FFFCUL                                     /**< Bit mask for FRC_BLOCKRAMADDR               */
#define _FRC_BLOCKRAMADDR_BLOCKRAMADDR_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for FRC_BLOCKRAMADDR           */
#define FRC_BLOCKRAMADDR_BLOCKRAMADDR_DEFAULT              (_FRC_BLOCKRAMADDR_BLOCKRAMADDR_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_BLOCKRAMADDR   */

/* Bit fields for FRC CONVRAMADDR */
#define _FRC_CONVRAMADDR_RESETVALUE                        0x00000000UL                                /**< Default value for FRC_CONVRAMADDR           */
#define _FRC_CONVRAMADDR_MASK                              0x0007FFFCUL                                /**< Mask for FRC_CONVRAMADDR                    */
#define _FRC_CONVRAMADDR_CONVRAMADDR_SHIFT                 2                                           /**< Shift value for FRC_CONVRAMADDR             */
#define _FRC_CONVRAMADDR_CONVRAMADDR_MASK                  0x7FFFCUL                                   /**< Bit mask for FRC_CONVRAMADDR                */
#define _FRC_CONVRAMADDR_CONVRAMADDR_DEFAULT               0x00000000UL                                /**< Mode DEFAULT for FRC_CONVRAMADDR            */
#define FRC_CONVRAMADDR_CONVRAMADDR_DEFAULT                (_FRC_CONVRAMADDR_CONVRAMADDR_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_CONVRAMADDR    */

/* Bit fields for FRC CTRL */
#define _FRC_CTRL_RESETVALUE                               0x00000700UL                           /**< Default value for FRC_CTRL                  */
#define _FRC_CTRL_MASK                                     0x00033FF7UL                           /**< Mask for FRC_CTRL                           */
#define FRC_CTRL_RANDOMTX                                  (0x1UL << 0)                           /**< Random TX Mode                              */
#define _FRC_CTRL_RANDOMTX_SHIFT                           0                                      /**< Shift value for FRC_RANDOMTX                */
#define _FRC_CTRL_RANDOMTX_MASK                            0x1UL                                  /**< Bit mask for FRC_RANDOMTX                   */
#define _FRC_CTRL_RANDOMTX_DEFAULT                         0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_RANDOMTX_DEFAULT                          (_FRC_CTRL_RANDOMTX_DEFAULT << 0)      /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_UARTMODE                                  (0x1UL << 1)                           /**< Data Uart Mode                              */
#define _FRC_CTRL_UARTMODE_SHIFT                           1                                      /**< Shift value for FRC_UARTMODE                */
#define _FRC_CTRL_UARTMODE_MASK                            0x2UL                                  /**< Bit mask for FRC_UARTMODE                   */
#define _FRC_CTRL_UARTMODE_DEFAULT                         0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_UARTMODE_DEFAULT                          (_FRC_CTRL_UARTMODE_DEFAULT << 1)      /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_BITORDER                                  (0x1UL << 2)                           /**< Data Bit Order.                             */
#define _FRC_CTRL_BITORDER_SHIFT                           2                                      /**< Shift value for FRC_BITORDER                */
#define _FRC_CTRL_BITORDER_MASK                            0x4UL                                  /**< Bit mask for FRC_BITORDER                   */
#define _FRC_CTRL_BITORDER_DEFAULT                         0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_BITORDER_LSBFIRST                        0x00000000UL                           /**< Mode LSBFIRST for FRC_CTRL                  */
#define _FRC_CTRL_BITORDER_MSBFIRST                        0x00000001UL                           /**< Mode MSBFIRST for FRC_CTRL                  */
#define FRC_CTRL_BITORDER_DEFAULT                          (_FRC_CTRL_BITORDER_DEFAULT << 2)      /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_BITORDER_LSBFIRST                         (_FRC_CTRL_BITORDER_LSBFIRST << 2)     /**< Shifted mode LSBFIRST for FRC_CTRL          */
#define FRC_CTRL_BITORDER_MSBFIRST                         (_FRC_CTRL_BITORDER_MSBFIRST << 2)     /**< Shifted mode MSBFIRST for FRC_CTRL          */
#define _FRC_CTRL_TXFCDMODE_SHIFT                          4                                      /**< Shift value for FRC_TXFCDMODE               */
#define _FRC_CTRL_TXFCDMODE_MASK                           0x30UL                                 /**< Bit mask for FRC_TXFCDMODE                  */
#define _FRC_CTRL_TXFCDMODE_DEFAULT                        0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_TXFCDMODE_FCDMODE0                       0x00000000UL                           /**< Mode FCDMODE0 for FRC_CTRL                  */
#define _FRC_CTRL_TXFCDMODE_FCDMODE1                       0x00000001UL                           /**< Mode FCDMODE1 for FRC_CTRL                  */
#define _FRC_CTRL_TXFCDMODE_FCDMODE2                       0x00000002UL                           /**< Mode FCDMODE2 for FRC_CTRL                  */
#define _FRC_CTRL_TXFCDMODE_FCDMODE3                       0x00000003UL                           /**< Mode FCDMODE3 for FRC_CTRL                  */
#define FRC_CTRL_TXFCDMODE_DEFAULT                         (_FRC_CTRL_TXFCDMODE_DEFAULT << 4)     /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_TXFCDMODE_FCDMODE0                        (_FRC_CTRL_TXFCDMODE_FCDMODE0 << 4)    /**< Shifted mode FCDMODE0 for FRC_CTRL          */
#define FRC_CTRL_TXFCDMODE_FCDMODE1                        (_FRC_CTRL_TXFCDMODE_FCDMODE1 << 4)    /**< Shifted mode FCDMODE1 for FRC_CTRL          */
#define FRC_CTRL_TXFCDMODE_FCDMODE2                        (_FRC_CTRL_TXFCDMODE_FCDMODE2 << 4)    /**< Shifted mode FCDMODE2 for FRC_CTRL          */
#define FRC_CTRL_TXFCDMODE_FCDMODE3                        (_FRC_CTRL_TXFCDMODE_FCDMODE3 << 4)    /**< Shifted mode FCDMODE3 for FRC_CTRL          */
#define _FRC_CTRL_RXFCDMODE_SHIFT                          6                                      /**< Shift value for FRC_RXFCDMODE               */
#define _FRC_CTRL_RXFCDMODE_MASK                           0xC0UL                                 /**< Bit mask for FRC_RXFCDMODE                  */
#define _FRC_CTRL_RXFCDMODE_DEFAULT                        0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_RXFCDMODE_FCDMODE0                       0x00000000UL                           /**< Mode FCDMODE0 for FRC_CTRL                  */
#define _FRC_CTRL_RXFCDMODE_FCDMODE1                       0x00000001UL                           /**< Mode FCDMODE1 for FRC_CTRL                  */
#define _FRC_CTRL_RXFCDMODE_FCDMODE2                       0x00000002UL                           /**< Mode FCDMODE2 for FRC_CTRL                  */
#define _FRC_CTRL_RXFCDMODE_FCDMODE3                       0x00000003UL                           /**< Mode FCDMODE3 for FRC_CTRL                  */
#define FRC_CTRL_RXFCDMODE_DEFAULT                         (_FRC_CTRL_RXFCDMODE_DEFAULT << 6)     /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_RXFCDMODE_FCDMODE0                        (_FRC_CTRL_RXFCDMODE_FCDMODE0 << 6)    /**< Shifted mode FCDMODE0 for FRC_CTRL          */
#define FRC_CTRL_RXFCDMODE_FCDMODE1                        (_FRC_CTRL_RXFCDMODE_FCDMODE1 << 6)    /**< Shifted mode FCDMODE1 for FRC_CTRL          */
#define FRC_CTRL_RXFCDMODE_FCDMODE2                        (_FRC_CTRL_RXFCDMODE_FCDMODE2 << 6)    /**< Shifted mode FCDMODE2 for FRC_CTRL          */
#define FRC_CTRL_RXFCDMODE_FCDMODE3                        (_FRC_CTRL_RXFCDMODE_FCDMODE3 << 6)    /**< Shifted mode FCDMODE3 for FRC_CTRL          */
#define _FRC_CTRL_BITSPERWORD_SHIFT                        8                                      /**< Shift value for FRC_BITSPERWORD             */
#define _FRC_CTRL_BITSPERWORD_MASK                         0x700UL                                /**< Bit mask for FRC_BITSPERWORD                */
#define _FRC_CTRL_BITSPERWORD_DEFAULT                      0x00000007UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_BITSPERWORD_DEFAULT                       (_FRC_CTRL_BITSPERWORD_DEFAULT << 8)   /**< Shifted mode DEFAULT for FRC_CTRL           */
#define _FRC_CTRL_RATESELECT_SHIFT                         11                                     /**< Shift value for FRC_RATESELECT              */
#define _FRC_CTRL_RATESELECT_MASK                          0x1800UL                               /**< Bit mask for FRC_RATESELECT                 */
#define _FRC_CTRL_RATESELECT_DEFAULT                       0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_RATESELECT_DEFAULT                        (_FRC_CTRL_RATESELECT_DEFAULT << 11)   /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_TXPREFETCH                                (0x1UL << 13)                          /**< Transmit prefetch data                      */
#define _FRC_CTRL_TXPREFETCH_SHIFT                         13                                     /**< Shift value for FRC_TXPREFETCH              */
#define _FRC_CTRL_TXPREFETCH_MASK                          0x2000UL                               /**< Bit mask for FRC_TXPREFETCH                 */
#define _FRC_CTRL_TXPREFETCH_DEFAULT                       0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_TXPREFETCH_X0                            0x00000000UL                           /**< Mode X0 for FRC_CTRL                        */
#define _FRC_CTRL_TXPREFETCH_X1                            0x00000001UL                           /**< Mode X1 for FRC_CTRL                        */
#define FRC_CTRL_TXPREFETCH_DEFAULT                        (_FRC_CTRL_TXPREFETCH_DEFAULT << 13)   /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_TXPREFETCH_X0                             (_FRC_CTRL_TXPREFETCH_X0 << 13)        /**< Shifted mode X0 for FRC_CTRL                */
#define FRC_CTRL_TXPREFETCH_X1                             (_FRC_CTRL_TXPREFETCH_X1 << 13)        /**< Shifted mode X1 for FRC_CTRL                */
#define FRC_CTRL_SEQHANDSHAKE                              (0x1UL << 16)                          /**< Sequencer data handshake                    */
#define _FRC_CTRL_SEQHANDSHAKE_SHIFT                       16                                     /**< Shift value for FRC_SEQHANDSHAKE            */
#define _FRC_CTRL_SEQHANDSHAKE_MASK                        0x10000UL                              /**< Bit mask for FRC_SEQHANDSHAKE               */
#define _FRC_CTRL_SEQHANDSHAKE_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_SEQHANDSHAKE_X0                          0x00000000UL                           /**< Mode X0 for FRC_CTRL                        */
#define _FRC_CTRL_SEQHANDSHAKE_X1                          0x00000001UL                           /**< Mode X1 for FRC_CTRL                        */
#define FRC_CTRL_SEQHANDSHAKE_DEFAULT                      (_FRC_CTRL_SEQHANDSHAKE_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_SEQHANDSHAKE_X0                           (_FRC_CTRL_SEQHANDSHAKE_X0 << 16)      /**< Shifted mode X0 for FRC_CTRL                */
#define FRC_CTRL_SEQHANDSHAKE_X1                           (_FRC_CTRL_SEQHANDSHAKE_X1 << 16)      /**< Shifted mode X1 for FRC_CTRL                */
#define FRC_CTRL_PRBSTEST                                  (0x1UL << 17)                          /**< Pseudo-Random Bit Sequence Testmode         */
#define _FRC_CTRL_PRBSTEST_SHIFT                           17                                     /**< Shift value for FRC_PRBSTEST                */
#define _FRC_CTRL_PRBSTEST_MASK                            0x20000UL                              /**< Bit mask for FRC_PRBSTEST                   */
#define _FRC_CTRL_PRBSTEST_DEFAULT                         0x00000000UL                           /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_PRBSTEST_DEFAULT                          (_FRC_CTRL_PRBSTEST_DEFAULT << 17)     /**< Shifted mode DEFAULT for FRC_CTRL           */

/* Bit fields for FRC RXCTRL */
#define _FRC_RXCTRL_RESETVALUE                             0x00000000UL                                    /**< Default value for FRC_RXCTRL                */
#define _FRC_RXCTRL_MASK                                   0x000007FFUL                                    /**< Mask for FRC_RXCTRL                         */
#define FRC_RXCTRL_STORECRC                                (0x1UL << 0)                                    /**< Store CRC value.                            */
#define _FRC_RXCTRL_STORECRC_SHIFT                         0                                               /**< Shift value for FRC_STORECRC                */
#define _FRC_RXCTRL_STORECRC_MASK                          0x1UL                                           /**< Bit mask for FRC_STORECRC                   */
#define _FRC_RXCTRL_STORECRC_DEFAULT                       0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define FRC_RXCTRL_STORECRC_DEFAULT                        (_FRC_RXCTRL_STORECRC_DEFAULT << 0)             /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define FRC_RXCTRL_ACCEPTCRCERRORS                         (0x1UL << 1)                                    /**< Accept CRC Errors.                          */
#define _FRC_RXCTRL_ACCEPTCRCERRORS_SHIFT                  1                                               /**< Shift value for FRC_ACCEPTCRCERRORS         */
#define _FRC_RXCTRL_ACCEPTCRCERRORS_MASK                   0x2UL                                           /**< Bit mask for FRC_ACCEPTCRCERRORS            */
#define _FRC_RXCTRL_ACCEPTCRCERRORS_DEFAULT                0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define _FRC_RXCTRL_ACCEPTCRCERRORS_REJECT                 0x00000000UL                                    /**< Mode REJECT for FRC_RXCTRL                  */
#define _FRC_RXCTRL_ACCEPTCRCERRORS_ACCEPT                 0x00000001UL                                    /**< Mode ACCEPT for FRC_RXCTRL                  */
#define FRC_RXCTRL_ACCEPTCRCERRORS_DEFAULT                 (_FRC_RXCTRL_ACCEPTCRCERRORS_DEFAULT << 1)      /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define FRC_RXCTRL_ACCEPTCRCERRORS_REJECT                  (_FRC_RXCTRL_ACCEPTCRCERRORS_REJECT << 1)       /**< Shifted mode REJECT for FRC_RXCTRL          */
#define FRC_RXCTRL_ACCEPTCRCERRORS_ACCEPT                  (_FRC_RXCTRL_ACCEPTCRCERRORS_ACCEPT << 1)       /**< Shifted mode ACCEPT for FRC_RXCTRL          */
#define FRC_RXCTRL_ACCEPTBLOCKERRORS                       (0x1UL << 2)                                    /**< Accept Block Decoding Errors.               */
#define _FRC_RXCTRL_ACCEPTBLOCKERRORS_SHIFT                2                                               /**< Shift value for FRC_ACCEPTBLOCKERRORS       */
#define _FRC_RXCTRL_ACCEPTBLOCKERRORS_MASK                 0x4UL                                           /**< Bit mask for FRC_ACCEPTBLOCKERRORS          */
#define _FRC_RXCTRL_ACCEPTBLOCKERRORS_DEFAULT              0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define _FRC_RXCTRL_ACCEPTBLOCKERRORS_REJECT               0x00000000UL                                    /**< Mode REJECT for FRC_RXCTRL                  */
#define _FRC_RXCTRL_ACCEPTBLOCKERRORS_ACCEPT               0x00000001UL                                    /**< Mode ACCEPT for FRC_RXCTRL                  */
#define FRC_RXCTRL_ACCEPTBLOCKERRORS_DEFAULT               (_FRC_RXCTRL_ACCEPTBLOCKERRORS_DEFAULT << 2)    /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define FRC_RXCTRL_ACCEPTBLOCKERRORS_REJECT                (_FRC_RXCTRL_ACCEPTBLOCKERRORS_REJECT << 2)     /**< Shifted mode REJECT for FRC_RXCTRL          */
#define FRC_RXCTRL_ACCEPTBLOCKERRORS_ACCEPT                (_FRC_RXCTRL_ACCEPTBLOCKERRORS_ACCEPT << 2)     /**< Shifted mode ACCEPT for FRC_RXCTRL          */
#define FRC_RXCTRL_TRACKABFRAME                            (0x1UL << 3)                                    /**< Track Aborted RX Frame                      */
#define _FRC_RXCTRL_TRACKABFRAME_SHIFT                     3                                               /**< Shift value for FRC_TRACKABFRAME            */
#define _FRC_RXCTRL_TRACKABFRAME_MASK                      0x8UL                                           /**< Bit mask for FRC_TRACKABFRAME               */
#define _FRC_RXCTRL_TRACKABFRAME_DEFAULT                   0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define _FRC_RXCTRL_TRACKABFRAME_X0                        0x00000000UL                                    /**< Mode X0 for FRC_RXCTRL                      */
#define _FRC_RXCTRL_TRACKABFRAME_X1                        0x00000001UL                                    /**< Mode X1 for FRC_RXCTRL                      */
#define FRC_RXCTRL_TRACKABFRAME_DEFAULT                    (_FRC_RXCTRL_TRACKABFRAME_DEFAULT << 3)         /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define FRC_RXCTRL_TRACKABFRAME_X0                         (_FRC_RXCTRL_TRACKABFRAME_X0 << 3)              /**< Shifted mode X0 for FRC_RXCTRL              */
#define FRC_RXCTRL_TRACKABFRAME_X1                         (_FRC_RXCTRL_TRACKABFRAME_X1 << 3)              /**< Shifted mode X1 for FRC_RXCTRL              */
#define FRC_RXCTRL_BUFCLEAR                                (0x1UL << 4)                                    /**< Buffer Clear                                */
#define _FRC_RXCTRL_BUFCLEAR_SHIFT                         4                                               /**< Shift value for FRC_BUFCLEAR                */
#define _FRC_RXCTRL_BUFCLEAR_MASK                          0x10UL                                          /**< Bit mask for FRC_BUFCLEAR                   */
#define _FRC_RXCTRL_BUFCLEAR_DEFAULT                       0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define FRC_RXCTRL_BUFCLEAR_DEFAULT                        (_FRC_RXCTRL_BUFCLEAR_DEFAULT << 4)             /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define FRC_RXCTRL_BUFRESTOREFRAMEERROR                    (0x1UL << 5)                                    /**< Buffer restore on frame error               */
#define _FRC_RXCTRL_BUFRESTOREFRAMEERROR_SHIFT             5                                               /**< Shift value for FRC_BUFRESTOREFRAMEERROR    */
#define _FRC_RXCTRL_BUFRESTOREFRAMEERROR_MASK              0x20UL                                          /**< Bit mask for FRC_BUFRESTOREFRAMEERROR       */
#define _FRC_RXCTRL_BUFRESTOREFRAMEERROR_DEFAULT           0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define FRC_RXCTRL_BUFRESTOREFRAMEERROR_DEFAULT            (_FRC_RXCTRL_BUFRESTOREFRAMEERROR_DEFAULT << 5) /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define FRC_RXCTRL_BUFRESTORERXABORTED                     (0x1UL << 6)                                    /**< Buffer restore on RXABORTED                 */
#define _FRC_RXCTRL_BUFRESTORERXABORTED_SHIFT              6                                               /**< Shift value for FRC_BUFRESTORERXABORTED     */
#define _FRC_RXCTRL_BUFRESTORERXABORTED_MASK               0x40UL                                          /**< Bit mask for FRC_BUFRESTORERXABORTED        */
#define _FRC_RXCTRL_BUFRESTORERXABORTED_DEFAULT            0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define FRC_RXCTRL_BUFRESTORERXABORTED_DEFAULT             (_FRC_RXCTRL_BUFRESTORERXABORTED_DEFAULT << 6)  /**< Shifted mode DEFAULT for FRC_RXCTRL         */
#define _FRC_RXCTRL_RXFRAMEENDAHEADBYTES_SHIFT             7                                               /**< Shift value for FRC_RXFRAMEENDAHEADBYTES    */
#define _FRC_RXCTRL_RXFRAMEENDAHEADBYTES_MASK              0x780UL                                         /**< Bit mask for FRC_RXFRAMEENDAHEADBYTES       */
#define _FRC_RXCTRL_RXFRAMEENDAHEADBYTES_DEFAULT           0x00000000UL                                    /**< Mode DEFAULT for FRC_RXCTRL                 */
#define FRC_RXCTRL_RXFRAMEENDAHEADBYTES_DEFAULT            (_FRC_RXCTRL_RXFRAMEENDAHEADBYTES_DEFAULT << 7) /**< Shifted mode DEFAULT for FRC_RXCTRL         */

/* Bit fields for FRC TRAILTXDATACTRL */
#define _FRC_TRAILTXDATACTRL_RESETVALUE                    0x00000000UL                                          /**< Default value for FRC_TRAILTXDATACTRL       */
#define _FRC_TRAILTXDATACTRL_MASK                          0x00000FFFUL                                          /**< Mask for FRC_TRAILTXDATACTRL                */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATA_SHIFT             0                                                     /**< Shift value for FRC_TRAILTXDATA             */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATA_MASK              0xFFUL                                                /**< Bit mask for FRC_TRAILTXDATA                */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATA_DEFAULT           0x00000000UL                                          /**< Mode DEFAULT for FRC_TRAILTXDATACTRL        */
#define FRC_TRAILTXDATACTRL_TRAILTXDATA_DEFAULT            (_FRC_TRAILTXDATACTRL_TRAILTXDATA_DEFAULT << 0)       /**< Shifted mode DEFAULT for FRC_TRAILTXDATACTRL*/
#define _FRC_TRAILTXDATACTRL_TRAILTXDATACNT_SHIFT          8                                                     /**< Shift value for FRC_TRAILTXDATACNT          */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATACNT_MASK           0x700UL                                               /**< Bit mask for FRC_TRAILTXDATACNT             */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATACNT_DEFAULT        0x00000000UL                                          /**< Mode DEFAULT for FRC_TRAILTXDATACTRL        */
#define FRC_TRAILTXDATACTRL_TRAILTXDATACNT_DEFAULT         (_FRC_TRAILTXDATACTRL_TRAILTXDATACNT_DEFAULT << 8)    /**< Shifted mode DEFAULT for FRC_TRAILTXDATACTRL*/
#define FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE               (0x1UL << 11)                                         /**< Force trailing TX data insertion            */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_SHIFT        11                                                    /**< Shift value for FRC_TRAILTXDATAFORCE        */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_MASK         0x800UL                                               /**< Bit mask for FRC_TRAILTXDATAFORCE           */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_DEFAULT      0x00000000UL                                          /**< Mode DEFAULT for FRC_TRAILTXDATACTRL        */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_X0           0x00000000UL                                          /**< Mode X0 for FRC_TRAILTXDATACTRL             */
#define _FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_X1           0x00000001UL                                          /**< Mode X1 for FRC_TRAILTXDATACTRL             */
#define FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_DEFAULT       (_FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_DEFAULT << 11) /**< Shifted mode DEFAULT for FRC_TRAILTXDATACTRL*/
#define FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_X0            (_FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_X0 << 11)      /**< Shifted mode X0 for FRC_TRAILTXDATACTRL     */
#define FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_X1            (_FRC_TRAILTXDATACTRL_TRAILTXDATAFORCE_X1 << 11)      /**< Shifted mode X1 for FRC_TRAILTXDATACTRL     */

/* Bit fields for FRC TRAILRXDATA */
#define _FRC_TRAILRXDATA_RESETVALUE                        0x00000000UL                                     /**< Default value for FRC_TRAILRXDATA           */
#define _FRC_TRAILRXDATA_MASK                              0x0000003FUL                                     /**< Mask for FRC_TRAILRXDATA                    */
#define FRC_TRAILRXDATA_RSSI                               (0x1UL << 0)                                     /**< Append RSSI                                 */
#define _FRC_TRAILRXDATA_RSSI_SHIFT                        0                                                /**< Shift value for FRC_RSSI                    */
#define _FRC_TRAILRXDATA_RSSI_MASK                         0x1UL                                            /**< Bit mask for FRC_RSSI                       */
#define _FRC_TRAILRXDATA_RSSI_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for FRC_TRAILRXDATA            */
#define FRC_TRAILRXDATA_RSSI_DEFAULT                       (_FRC_TRAILRXDATA_RSSI_DEFAULT << 0)             /**< Shifted mode DEFAULT for FRC_TRAILRXDATA    */
#define FRC_TRAILRXDATA_CRCOK                              (0x1UL << 1)                                     /**< Append CRC OK Indicator                     */
#define _FRC_TRAILRXDATA_CRCOK_SHIFT                       1                                                /**< Shift value for FRC_CRCOK                   */
#define _FRC_TRAILRXDATA_CRCOK_MASK                        0x2UL                                            /**< Bit mask for FRC_CRCOK                      */
#define _FRC_TRAILRXDATA_CRCOK_DEFAULT                     0x00000000UL                                     /**< Mode DEFAULT for FRC_TRAILRXDATA            */
#define FRC_TRAILRXDATA_CRCOK_DEFAULT                      (_FRC_TRAILRXDATA_CRCOK_DEFAULT << 1)            /**< Shifted mode DEFAULT for FRC_TRAILRXDATA    */
#define FRC_TRAILRXDATA_PROTIMERCC0BASE                    (0x1UL << 2)                                     /**< PROTIMER Capture Compare channel 0 Base     */
#define _FRC_TRAILRXDATA_PROTIMERCC0BASE_SHIFT             2                                                /**< Shift value for FRC_PROTIMERCC0BASE         */
#define _FRC_TRAILRXDATA_PROTIMERCC0BASE_MASK              0x4UL                                            /**< Bit mask for FRC_PROTIMERCC0BASE            */
#define _FRC_TRAILRXDATA_PROTIMERCC0BASE_DEFAULT           0x00000000UL                                     /**< Mode DEFAULT for FRC_TRAILRXDATA            */
#define FRC_TRAILRXDATA_PROTIMERCC0BASE_DEFAULT            (_FRC_TRAILRXDATA_PROTIMERCC0BASE_DEFAULT << 2)  /**< Shifted mode DEFAULT for FRC_TRAILRXDATA    */
#define FRC_TRAILRXDATA_PROTIMERCC0WRAPL                   (0x1UL << 3)                                     /**< PROTIMER Capture Compare channel 0 WrapL    */
#define _FRC_TRAILRXDATA_PROTIMERCC0WRAPL_SHIFT            3                                                /**< Shift value for FRC_PROTIMERCC0WRAPL        */
#define _FRC_TRAILRXDATA_PROTIMERCC0WRAPL_MASK             0x8UL                                            /**< Bit mask for FRC_PROTIMERCC0WRAPL           */
#define _FRC_TRAILRXDATA_PROTIMERCC0WRAPL_DEFAULT          0x00000000UL                                     /**< Mode DEFAULT for FRC_TRAILRXDATA            */
#define FRC_TRAILRXDATA_PROTIMERCC0WRAPL_DEFAULT           (_FRC_TRAILRXDATA_PROTIMERCC0WRAPL_DEFAULT << 3) /**< Shifted mode DEFAULT for FRC_TRAILRXDATA    */
#define FRC_TRAILRXDATA_PROTIMERCC0WRAPH                   (0x1UL << 4)                                     /**< PROTIMER Capture Compare channel 0 WrapH    */
#define _FRC_TRAILRXDATA_PROTIMERCC0WRAPH_SHIFT            4                                                /**< Shift value for FRC_PROTIMERCC0WRAPH        */
#define _FRC_TRAILRXDATA_PROTIMERCC0WRAPH_MASK             0x10UL                                           /**< Bit mask for FRC_PROTIMERCC0WRAPH           */
#define _FRC_TRAILRXDATA_PROTIMERCC0WRAPH_DEFAULT          0x00000000UL                                     /**< Mode DEFAULT for FRC_TRAILRXDATA            */
#define FRC_TRAILRXDATA_PROTIMERCC0WRAPH_DEFAULT           (_FRC_TRAILRXDATA_PROTIMERCC0WRAPH_DEFAULT << 4) /**< Shifted mode DEFAULT for FRC_TRAILRXDATA    */
#define FRC_TRAILRXDATA_RTCSTAMP                           (0x1UL << 5)                                     /**< RTCC Time Stamp                             */
#define _FRC_TRAILRXDATA_RTCSTAMP_SHIFT                    5                                                /**< Shift value for FRC_RTCSTAMP                */
#define _FRC_TRAILRXDATA_RTCSTAMP_MASK                     0x20UL                                           /**< Bit mask for FRC_RTCSTAMP                   */
#define _FRC_TRAILRXDATA_RTCSTAMP_DEFAULT                  0x00000000UL                                     /**< Mode DEFAULT for FRC_TRAILRXDATA            */
#define FRC_TRAILRXDATA_RTCSTAMP_DEFAULT                   (_FRC_TRAILRXDATA_RTCSTAMP_DEFAULT << 5)         /**< Shifted mode DEFAULT for FRC_TRAILRXDATA    */

/* Bit fields for FRC SCNT */
#define _FRC_SCNT_RESETVALUE                               0x00000000UL                  /**< Default value for FRC_SCNT                  */
#define _FRC_SCNT_MASK                                     0x000000FFUL                  /**< Mask for FRC_SCNT                           */
#define _FRC_SCNT_SCNT_SHIFT                               0                             /**< Shift value for FRC_SCNT                    */
#define _FRC_SCNT_SCNT_MASK                                0xFFUL                        /**< Bit mask for FRC_SCNT                       */
#define _FRC_SCNT_SCNT_DEFAULT                             0x00000000UL                  /**< Mode DEFAULT for FRC_SCNT                   */
#define FRC_SCNT_SCNT_DEFAULT                              (_FRC_SCNT_SCNT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_SCNT           */

/* Bit fields for FRC CONVGENERATOR */
#define _FRC_CONVGENERATOR_RESETVALUE                      0x00000000UL                                     /**< Default value for FRC_CONVGENERATOR         */
#define _FRC_CONVGENERATOR_MASK                            0x00037F7FUL                                     /**< Mask for FRC_CONVGENERATOR                  */
#define _FRC_CONVGENERATOR_GENERATOR0_SHIFT                0                                                /**< Shift value for FRC_GENERATOR0              */
#define _FRC_CONVGENERATOR_GENERATOR0_MASK                 0x7FUL                                           /**< Bit mask for FRC_GENERATOR0                 */
#define _FRC_CONVGENERATOR_GENERATOR0_DEFAULT              0x00000000UL                                     /**< Mode DEFAULT for FRC_CONVGENERATOR          */
#define FRC_CONVGENERATOR_GENERATOR0_DEFAULT               (_FRC_CONVGENERATOR_GENERATOR0_DEFAULT << 0)     /**< Shifted mode DEFAULT for FRC_CONVGENERATOR  */
#define _FRC_CONVGENERATOR_GENERATOR1_SHIFT                8                                                /**< Shift value for FRC_GENERATOR1              */
#define _FRC_CONVGENERATOR_GENERATOR1_MASK                 0x7F00UL                                         /**< Bit mask for FRC_GENERATOR1                 */
#define _FRC_CONVGENERATOR_GENERATOR1_DEFAULT              0x00000000UL                                     /**< Mode DEFAULT for FRC_CONVGENERATOR          */
#define FRC_CONVGENERATOR_GENERATOR1_DEFAULT               (_FRC_CONVGENERATOR_GENERATOR1_DEFAULT << 8)     /**< Shifted mode DEFAULT for FRC_CONVGENERATOR  */
#define FRC_CONVGENERATOR_RECURSIVE                        (0x1UL << 16)                                    /**< Convolutional encoding                      */
#define _FRC_CONVGENERATOR_RECURSIVE_SHIFT                 16                                               /**< Shift value for FRC_RECURSIVE               */
#define _FRC_CONVGENERATOR_RECURSIVE_MASK                  0x10000UL                                        /**< Bit mask for FRC_RECURSIVE                  */
#define _FRC_CONVGENERATOR_RECURSIVE_DEFAULT               0x00000000UL                                     /**< Mode DEFAULT for FRC_CONVGENERATOR          */
#define _FRC_CONVGENERATOR_RECURSIVE_X0                    0x00000000UL                                     /**< Mode X0 for FRC_CONVGENERATOR               */
#define _FRC_CONVGENERATOR_RECURSIVE_X1                    0x00000001UL                                     /**< Mode X1 for FRC_CONVGENERATOR               */
#define FRC_CONVGENERATOR_RECURSIVE_DEFAULT                (_FRC_CONVGENERATOR_RECURSIVE_DEFAULT << 16)     /**< Shifted mode DEFAULT for FRC_CONVGENERATOR  */
#define FRC_CONVGENERATOR_RECURSIVE_X0                     (_FRC_CONVGENERATOR_RECURSIVE_X0 << 16)          /**< Shifted mode X0 for FRC_CONVGENERATOR       */
#define FRC_CONVGENERATOR_RECURSIVE_X1                     (_FRC_CONVGENERATOR_RECURSIVE_X1 << 16)          /**< Shifted mode X1 for FRC_CONVGENERATOR       */
#define FRC_CONVGENERATOR_NONSYSTEMATIC                    (0x1UL << 17)                                    /**< Non systematic recursive code               */
#define _FRC_CONVGENERATOR_NONSYSTEMATIC_SHIFT             17                                               /**< Shift value for FRC_NONSYSTEMATIC           */
#define _FRC_CONVGENERATOR_NONSYSTEMATIC_MASK              0x20000UL                                        /**< Bit mask for FRC_NONSYSTEMATIC              */
#define _FRC_CONVGENERATOR_NONSYSTEMATIC_DEFAULT           0x00000000UL                                     /**< Mode DEFAULT for FRC_CONVGENERATOR          */
#define _FRC_CONVGENERATOR_NONSYSTEMATIC_X0                0x00000000UL                                     /**< Mode X0 for FRC_CONVGENERATOR               */
#define _FRC_CONVGENERATOR_NONSYSTEMATIC_X1                0x00000001UL                                     /**< Mode X1 for FRC_CONVGENERATOR               */
#define FRC_CONVGENERATOR_NONSYSTEMATIC_DEFAULT            (_FRC_CONVGENERATOR_NONSYSTEMATIC_DEFAULT << 17) /**< Shifted mode DEFAULT for FRC_CONVGENERATOR  */
#define FRC_CONVGENERATOR_NONSYSTEMATIC_X0                 (_FRC_CONVGENERATOR_NONSYSTEMATIC_X0 << 17)      /**< Shifted mode X0 for FRC_CONVGENERATOR       */
#define FRC_CONVGENERATOR_NONSYSTEMATIC_X1                 (_FRC_CONVGENERATOR_NONSYSTEMATIC_X1 << 17)      /**< Shifted mode X1 for FRC_CONVGENERATOR       */

/* Bit fields for FRC PUNCTCTRL */
#define _FRC_PUNCTCTRL_RESETVALUE                          0x00000101UL                         /**< Default value for FRC_PUNCTCTRL             */
#define _FRC_PUNCTCTRL_MASK                                0x00007F7FUL                         /**< Mask for FRC_PUNCTCTRL                      */
#define _FRC_PUNCTCTRL_PUNCT0_SHIFT                        0                                    /**< Shift value for FRC_PUNCT0                  */
#define _FRC_PUNCTCTRL_PUNCT0_MASK                         0x7FUL                               /**< Bit mask for FRC_PUNCT0                     */
#define _FRC_PUNCTCTRL_PUNCT0_DEFAULT                      0x00000001UL                         /**< Mode DEFAULT for FRC_PUNCTCTRL              */
#define FRC_PUNCTCTRL_PUNCT0_DEFAULT                       (_FRC_PUNCTCTRL_PUNCT0_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_PUNCTCTRL      */
#define _FRC_PUNCTCTRL_PUNCT1_SHIFT                        8                                    /**< Shift value for FRC_PUNCT1                  */
#define _FRC_PUNCTCTRL_PUNCT1_MASK                         0x7F00UL                             /**< Bit mask for FRC_PUNCT1                     */
#define _FRC_PUNCTCTRL_PUNCT1_DEFAULT                      0x00000001UL                         /**< Mode DEFAULT for FRC_PUNCTCTRL              */
#define FRC_PUNCTCTRL_PUNCT1_DEFAULT                       (_FRC_PUNCTCTRL_PUNCT1_DEFAULT << 8) /**< Shifted mode DEFAULT for FRC_PUNCTCTRL      */

/* Bit fields for FRC PAUSECTRL */
#define _FRC_PAUSECTRL_RESETVALUE                          0x00000000UL                                           /**< Default value for FRC_PAUSECTRL             */
#define _FRC_PAUSECTRL_MASK                                0x001FFFFFUL                                           /**< Mask for FRC_PAUSECTRL                      */
#define FRC_PAUSECTRL_FRAMEDETPAUSEEN                      (0x1UL << 0)                                           /**< Frame detect pause enable                   */
#define _FRC_PAUSECTRL_FRAMEDETPAUSEEN_SHIFT               0                                                      /**< Shift value for FRC_FRAMEDETPAUSEEN         */
#define _FRC_PAUSECTRL_FRAMEDETPAUSEEN_MASK                0x1UL                                                  /**< Bit mask for FRC_FRAMEDETPAUSEEN            */
#define _FRC_PAUSECTRL_FRAMEDETPAUSEEN_DEFAULT             0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_FRAMEDETPAUSEEN_DEFAULT              (_FRC_PAUSECTRL_FRAMEDETPAUSEEN_DEFAULT << 0)          /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define FRC_PAUSECTRL_TXINTERLEAVEWRITEPAUSEEN             (0x1UL << 1)                                           /**< Transmit interleaver write pause enable     */
#define _FRC_PAUSECTRL_TXINTERLEAVEWRITEPAUSEEN_SHIFT      1                                                      /**< Shift value for FRC_TXINTERLEAVEWRITEPAUSEEN*/
#define _FRC_PAUSECTRL_TXINTERLEAVEWRITEPAUSEEN_MASK       0x2UL                                                  /**< Bit mask for FRC_TXINTERLEAVEWRITEPAUSEEN   */
#define _FRC_PAUSECTRL_TXINTERLEAVEWRITEPAUSEEN_DEFAULT    0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_TXINTERLEAVEWRITEPAUSEEN_DEFAULT     (_FRC_PAUSECTRL_TXINTERLEAVEWRITEPAUSEEN_DEFAULT << 1) /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define FRC_PAUSECTRL_RXINTERLEAVEWRITEPAUSEEN             (0x1UL << 2)                                           /**< Receive interleaver write pause enable      */
#define _FRC_PAUSECTRL_RXINTERLEAVEWRITEPAUSEEN_SHIFT      2                                                      /**< Shift value for FRC_RXINTERLEAVEWRITEPAUSEEN*/
#define _FRC_PAUSECTRL_RXINTERLEAVEWRITEPAUSEEN_MASK       0x4UL                                                  /**< Bit mask for FRC_RXINTERLEAVEWRITEPAUSEEN   */
#define _FRC_PAUSECTRL_RXINTERLEAVEWRITEPAUSEEN_DEFAULT    0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_RXINTERLEAVEWRITEPAUSEEN_DEFAULT     (_FRC_PAUSECTRL_RXINTERLEAVEWRITEPAUSEEN_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define FRC_PAUSECTRL_INTERLEAVEREADPAUSEEN                (0x1UL << 3)                                           /**< Interleaver read pause enable               */
#define _FRC_PAUSECTRL_INTERLEAVEREADPAUSEEN_SHIFT         3                                                      /**< Shift value for FRC_INTERLEAVEREADPAUSEEN   */
#define _FRC_PAUSECTRL_INTERLEAVEREADPAUSEEN_MASK          0x8UL                                                  /**< Bit mask for FRC_INTERLEAVEREADPAUSEEN      */
#define _FRC_PAUSECTRL_INTERLEAVEREADPAUSEEN_DEFAULT       0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_INTERLEAVEREADPAUSEEN_DEFAULT        (_FRC_PAUSECTRL_INTERLEAVEREADPAUSEEN_DEFAULT << 3)    /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define FRC_PAUSECTRL_TXSUBFRAMEPAUSEEN                    (0x1UL << 4)                                           /**< Transmit subframe pause enable              */
#define _FRC_PAUSECTRL_TXSUBFRAMEPAUSEEN_SHIFT             4                                                      /**< Shift value for FRC_TXSUBFRAMEPAUSEEN       */
#define _FRC_PAUSECTRL_TXSUBFRAMEPAUSEEN_MASK              0x10UL                                                 /**< Bit mask for FRC_TXSUBFRAMEPAUSEEN          */
#define _FRC_PAUSECTRL_TXSUBFRAMEPAUSEEN_DEFAULT           0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_TXSUBFRAMEPAUSEEN_DEFAULT            (_FRC_PAUSECTRL_TXSUBFRAMEPAUSEEN_DEFAULT << 4)        /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define _FRC_PAUSECTRL_CONVPAUSECNT_SHIFT                  5                                                      /**< Shift value for FRC_CONVPAUSECNT            */
#define _FRC_PAUSECTRL_CONVPAUSECNT_MASK                   0x7E0UL                                                /**< Bit mask for FRC_CONVPAUSECNT               */
#define _FRC_PAUSECTRL_CONVPAUSECNT_DEFAULT                0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_CONVPAUSECNT_DEFAULT                 (_FRC_PAUSECTRL_CONVPAUSECNT_DEFAULT << 5)             /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define _FRC_PAUSECTRL_INTERLEAVEWRITEPAUSECNT_SHIFT       11                                                     /**< Shift value for FRC_INTERLEAVEWRITEPAUSECNT */
#define _FRC_PAUSECTRL_INTERLEAVEWRITEPAUSECNT_MASK        0xF800UL                                               /**< Bit mask for FRC_INTERLEAVEWRITEPAUSECNT    */
#define _FRC_PAUSECTRL_INTERLEAVEWRITEPAUSECNT_DEFAULT     0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_INTERLEAVEWRITEPAUSECNT_DEFAULT      (_FRC_PAUSECTRL_INTERLEAVEWRITEPAUSECNT_DEFAULT << 11) /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */
#define _FRC_PAUSECTRL_INTERLEAVEREADPAUSECNT_SHIFT        16                                                     /**< Shift value for FRC_INTERLEAVEREADPAUSECNT  */
#define _FRC_PAUSECTRL_INTERLEAVEREADPAUSECNT_MASK         0x1F0000UL                                             /**< Bit mask for FRC_INTERLEAVEREADPAUSECNT     */
#define _FRC_PAUSECTRL_INTERLEAVEREADPAUSECNT_DEFAULT      0x00000000UL                                           /**< Mode DEFAULT for FRC_PAUSECTRL              */
#define FRC_PAUSECTRL_INTERLEAVEREADPAUSECNT_DEFAULT       (_FRC_PAUSECTRL_INTERLEAVEREADPAUSECNT_DEFAULT << 16)  /**< Shifted mode DEFAULT for FRC_PAUSECTRL      */

/* Bit fields for FRC IF */
#define _FRC_IF_RESETVALUE                                 0x00000000UL                                  /**< Default value for FRC_IF                    */
#define _FRC_IF_MASK                                       0x7F01FFFFUL                                  /**< Mask for FRC_IF                             */
#define FRC_IF_TXDONE                                      (0x1UL << 0)                                  /**< TX Done Interrupt Flag                      */
#define _FRC_IF_TXDONE_SHIFT                               0                                             /**< Shift value for FRC_TXDONE                  */
#define _FRC_IF_TXDONE_MASK                                0x1UL                                         /**< Bit mask for FRC_TXDONE                     */
#define _FRC_IF_TXDONE_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXDONE_DEFAULT                              (_FRC_IF_TXDONE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_TXAFTERFRAMEDONE                            (0x1UL << 1)                                  /**< TX after frame Done Interrupt Flag          */
#define _FRC_IF_TXAFTERFRAMEDONE_SHIFT                     1                                             /**< Shift value for FRC_TXAFTERFRAMEDONE        */
#define _FRC_IF_TXAFTERFRAMEDONE_MASK                      0x2UL                                         /**< Bit mask for FRC_TXAFTERFRAMEDONE           */
#define _FRC_IF_TXAFTERFRAMEDONE_DEFAULT                   0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXAFTERFRAMEDONE_DEFAULT                    (_FRC_IF_TXAFTERFRAMEDONE_DEFAULT << 1)       /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_TXABORTED                                   (0x1UL << 2)                                  /**< Transmit Aborted Interrupt Flag             */
#define _FRC_IF_TXABORTED_SHIFT                            2                                             /**< Shift value for FRC_TXABORTED               */
#define _FRC_IF_TXABORTED_MASK                             0x4UL                                         /**< Bit mask for FRC_TXABORTED                  */
#define _FRC_IF_TXABORTED_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXABORTED_DEFAULT                           (_FRC_IF_TXABORTED_DEFAULT << 2)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_TXUF                                        (0x1UL << 3)                                  /**< Transmit Underflow Interrupt Flag           */
#define _FRC_IF_TXUF_SHIFT                                 3                                             /**< Shift value for FRC_TXUF                    */
#define _FRC_IF_TXUF_MASK                                  0x8UL                                         /**< Bit mask for FRC_TXUF                       */
#define _FRC_IF_TXUF_DEFAULT                               0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXUF_DEFAULT                                (_FRC_IF_TXUF_DEFAULT << 3)                   /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_RXDONE                                      (0x1UL << 4)                                  /**< RX Done Interrupt Flag                      */
#define _FRC_IF_RXDONE_SHIFT                               4                                             /**< Shift value for FRC_RXDONE                  */
#define _FRC_IF_RXDONE_MASK                                0x10UL                                        /**< Bit mask for FRC_RXDONE                     */
#define _FRC_IF_RXDONE_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_RXDONE_DEFAULT                              (_FRC_IF_RXDONE_DEFAULT << 4)                 /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_RXABORTED                                   (0x1UL << 5)                                  /**< RX Aborted Interrupt Flag                   */
#define _FRC_IF_RXABORTED_SHIFT                            5                                             /**< Shift value for FRC_RXABORTED               */
#define _FRC_IF_RXABORTED_MASK                             0x20UL                                        /**< Bit mask for FRC_RXABORTED                  */
#define _FRC_IF_RXABORTED_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_RXABORTED_DEFAULT                           (_FRC_IF_RXABORTED_DEFAULT << 5)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_FRAMEERROR                                  (0x1UL << 6)                                  /**< Frame Error Interrupt Flag                  */
#define _FRC_IF_FRAMEERROR_SHIFT                           6                                             /**< Shift value for FRC_FRAMEERROR              */
#define _FRC_IF_FRAMEERROR_MASK                            0x40UL                                        /**< Bit mask for FRC_FRAMEERROR                 */
#define _FRC_IF_FRAMEERROR_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_FRAMEERROR_DEFAULT                          (_FRC_IF_FRAMEERROR_DEFAULT << 6)             /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_BLOCKERROR                                  (0x1UL << 7)                                  /**< Block Error Interrupt Flag                  */
#define _FRC_IF_BLOCKERROR_SHIFT                           7                                             /**< Shift value for FRC_BLOCKERROR              */
#define _FRC_IF_BLOCKERROR_MASK                            0x80UL                                        /**< Bit mask for FRC_BLOCKERROR                 */
#define _FRC_IF_BLOCKERROR_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_BLOCKERROR_DEFAULT                          (_FRC_IF_BLOCKERROR_DEFAULT << 7)             /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_RXOF                                        (0x1UL << 8)                                  /**< Receive Overflow Interrupt Flag             */
#define _FRC_IF_RXOF_SHIFT                                 8                                             /**< Shift value for FRC_RXOF                    */
#define _FRC_IF_RXOF_MASK                                  0x100UL                                       /**< Bit mask for FRC_RXOF                       */
#define _FRC_IF_RXOF_DEFAULT                               0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_RXOF_DEFAULT                                (_FRC_IF_RXOF_DEFAULT << 8)                   /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_WCNTCMP0                                    (0x1UL << 9)                                  /**< Word Counter Compare 0 Event                */
#define _FRC_IF_WCNTCMP0_SHIFT                             9                                             /**< Shift value for FRC_WCNTCMP0                */
#define _FRC_IF_WCNTCMP0_MASK                              0x200UL                                       /**< Bit mask for FRC_WCNTCMP0                   */
#define _FRC_IF_WCNTCMP0_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_WCNTCMP0_DEFAULT                            (_FRC_IF_WCNTCMP0_DEFAULT << 9)               /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_WCNTCMP1                                    (0x1UL << 10)                                 /**< Word Counter Compare 1 Event                */
#define _FRC_IF_WCNTCMP1_SHIFT                             10                                            /**< Shift value for FRC_WCNTCMP1                */
#define _FRC_IF_WCNTCMP1_MASK                              0x400UL                                       /**< Bit mask for FRC_WCNTCMP1                   */
#define _FRC_IF_WCNTCMP1_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_WCNTCMP1_DEFAULT                            (_FRC_IF_WCNTCMP1_DEFAULT << 10)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_WCNTCMP2                                    (0x1UL << 11)                                 /**< Word Counter Compare 2 Event                */
#define _FRC_IF_WCNTCMP2_SHIFT                             11                                            /**< Shift value for FRC_WCNTCMP2                */
#define _FRC_IF_WCNTCMP2_MASK                              0x800UL                                       /**< Bit mask for FRC_WCNTCMP2                   */
#define _FRC_IF_WCNTCMP2_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_WCNTCMP2_DEFAULT                            (_FRC_IF_WCNTCMP2_DEFAULT << 11)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_ADDRERROR                                   (0x1UL << 12)                                 /**< Receive address error event                 */
#define _FRC_IF_ADDRERROR_SHIFT                            12                                            /**< Shift value for FRC_ADDRERROR               */
#define _FRC_IF_ADDRERROR_MASK                             0x1000UL                                      /**< Bit mask for FRC_ADDRERROR                  */
#define _FRC_IF_ADDRERROR_DEFAULT                          0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_ADDRERROR_DEFAULT                           (_FRC_IF_ADDRERROR_DEFAULT << 12)             /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_BUSERROR                                    (0x1UL << 13)                                 /**< A bus error event occurred                  */
#define _FRC_IF_BUSERROR_SHIFT                             13                                            /**< Shift value for FRC_BUSERROR                */
#define _FRC_IF_BUSERROR_MASK                              0x2000UL                                      /**< Bit mask for FRC_BUSERROR                   */
#define _FRC_IF_BUSERROR_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_BUSERROR_DEFAULT                            (_FRC_IF_BUSERROR_DEFAULT << 13)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_RXRAWEVENT                                  (0x1UL << 14)                                 /**< Receiver raw data event                     */
#define _FRC_IF_RXRAWEVENT_SHIFT                           14                                            /**< Shift value for FRC_RXRAWEVENT              */
#define _FRC_IF_RXRAWEVENT_MASK                            0x4000UL                                      /**< Bit mask for FRC_RXRAWEVENT                 */
#define _FRC_IF_RXRAWEVENT_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_RXRAWEVENT_DEFAULT                          (_FRC_IF_RXRAWEVENT_DEFAULT << 14)            /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_TXRAWEVENT                                  (0x1UL << 15)                                 /**< Transmit raw data event                     */
#define _FRC_IF_TXRAWEVENT_SHIFT                           15                                            /**< Shift value for FRC_TXRAWEVENT              */
#define _FRC_IF_TXRAWEVENT_MASK                            0x8000UL                                      /**< Bit mask for FRC_TXRAWEVENT                 */
#define _FRC_IF_TXRAWEVENT_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXRAWEVENT_DEFAULT                          (_FRC_IF_TXRAWEVENT_DEFAULT << 15)            /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_SNIFFOF                                     (0x1UL << 16)                                 /**< Data sniffer overflow                       */
#define _FRC_IF_SNIFFOF_SHIFT                              16                                            /**< Shift value for FRC_SNIFFOF                 */
#define _FRC_IF_SNIFFOF_MASK                               0x10000UL                                     /**< Bit mask for FRC_SNIFFOF                    */
#define _FRC_IF_SNIFFOF_DEFAULT                            0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_SNIFFOF_DEFAULT                             (_FRC_IF_SNIFFOF_DEFAULT << 16)               /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_FRAMEDETPAUSED                              (0x1UL << 24)                                 /**< Frame detected pause event active           */
#define _FRC_IF_FRAMEDETPAUSED_SHIFT                       24                                            /**< Shift value for FRC_FRAMEDETPAUSED          */
#define _FRC_IF_FRAMEDETPAUSED_MASK                        0x1000000UL                                   /**< Bit mask for FRC_FRAMEDETPAUSED             */
#define _FRC_IF_FRAMEDETPAUSED_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_FRAMEDETPAUSED_DEFAULT                      (_FRC_IF_FRAMEDETPAUSED_DEFAULT << 24)        /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_INTERLEAVEWRITEPAUSED                       (0x1UL << 25)                                 /**< Interleaver write pause event active        */
#define _FRC_IF_INTERLEAVEWRITEPAUSED_SHIFT                25                                            /**< Shift value for FRC_INTERLEAVEWRITEPAUSED   */
#define _FRC_IF_INTERLEAVEWRITEPAUSED_MASK                 0x2000000UL                                   /**< Bit mask for FRC_INTERLEAVEWRITEPAUSED      */
#define _FRC_IF_INTERLEAVEWRITEPAUSED_DEFAULT              0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_INTERLEAVEWRITEPAUSED_DEFAULT               (_FRC_IF_INTERLEAVEWRITEPAUSED_DEFAULT << 25) /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_INTERLEAVEREADPAUSED                        (0x1UL << 26)                                 /**< Interleaver read pause event active         */
#define _FRC_IF_INTERLEAVEREADPAUSED_SHIFT                 26                                            /**< Shift value for FRC_INTERLEAVEREADPAUSED    */
#define _FRC_IF_INTERLEAVEREADPAUSED_MASK                  0x4000000UL                                   /**< Bit mask for FRC_INTERLEAVEREADPAUSED       */
#define _FRC_IF_INTERLEAVEREADPAUSED_DEFAULT               0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_INTERLEAVEREADPAUSED_DEFAULT                (_FRC_IF_INTERLEAVEREADPAUSED_DEFAULT << 26)  /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_TXSUBFRAMEPAUSED                            (0x1UL << 27)                                 /**< Transmit subframe pause event active        */
#define _FRC_IF_TXSUBFRAMEPAUSED_SHIFT                     27                                            /**< Shift value for FRC_TXSUBFRAMEPAUSED        */
#define _FRC_IF_TXSUBFRAMEPAUSED_MASK                      0x8000000UL                                   /**< Bit mask for FRC_TXSUBFRAMEPAUSED           */
#define _FRC_IF_TXSUBFRAMEPAUSED_DEFAULT                   0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXSUBFRAMEPAUSED_DEFAULT                    (_FRC_IF_TXSUBFRAMEPAUSED_DEFAULT << 27)      /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_CONVPAUSED                                  (0x1UL << 28)                                 /**< Convolutional coder pause event active      */
#define _FRC_IF_CONVPAUSED_SHIFT                           28                                            /**< Shift value for FRC_CONVPAUSED              */
#define _FRC_IF_CONVPAUSED_MASK                            0x10000000UL                                  /**< Bit mask for FRC_CONVPAUSED                 */
#define _FRC_IF_CONVPAUSED_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_CONVPAUSED_DEFAULT                          (_FRC_IF_CONVPAUSED_DEFAULT << 28)            /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_RXWORD                                      (0x1UL << 29)                                 /**< Receive Word Interrupt Flag                 */
#define _FRC_IF_RXWORD_SHIFT                               29                                            /**< Shift value for FRC_RXWORD                  */
#define _FRC_IF_RXWORD_MASK                                0x20000000UL                                  /**< Bit mask for FRC_RXWORD                     */
#define _FRC_IF_RXWORD_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_RXWORD_DEFAULT                              (_FRC_IF_RXWORD_DEFAULT << 29)                /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_TXWORD                                      (0x1UL << 30)                                 /**< Transmit Word Interrupt Flag                */
#define _FRC_IF_TXWORD_SHIFT                               30                                            /**< Shift value for FRC_TXWORD                  */
#define _FRC_IF_TXWORD_MASK                                0x40000000UL                                  /**< Bit mask for FRC_TXWORD                     */
#define _FRC_IF_TXWORD_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_TXWORD_DEFAULT                              (_FRC_IF_TXWORD_DEFAULT << 30)                /**< Shifted mode DEFAULT for FRC_IF             */

/* Bit fields for FRC IEN */
#define _FRC_IEN_RESETVALUE                                0x00000000UL                                   /**< Default value for FRC_IEN                   */
#define _FRC_IEN_MASK                                      0x7F01FFFFUL                                   /**< Mask for FRC_IEN                            */
#define FRC_IEN_TXDONE                                     (0x1UL << 0)                                   /**< TX Done Interrupt Enable                    */
#define _FRC_IEN_TXDONE_SHIFT                              0                                              /**< Shift value for FRC_TXDONE                  */
#define _FRC_IEN_TXDONE_MASK                               0x1UL                                          /**< Bit mask for FRC_TXDONE                     */
#define _FRC_IEN_TXDONE_DEFAULT                            0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXDONE_DEFAULT                             (_FRC_IEN_TXDONE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_TXAFTERFRAMEDONE                           (0x1UL << 1)                                   /**< TX after frame Done Interrupt Enable        */
#define _FRC_IEN_TXAFTERFRAMEDONE_SHIFT                    1                                              /**< Shift value for FRC_TXAFTERFRAMEDONE        */
#define _FRC_IEN_TXAFTERFRAMEDONE_MASK                     0x2UL                                          /**< Bit mask for FRC_TXAFTERFRAMEDONE           */
#define _FRC_IEN_TXAFTERFRAMEDONE_DEFAULT                  0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXAFTERFRAMEDONE_DEFAULT                   (_FRC_IEN_TXAFTERFRAMEDONE_DEFAULT << 1)       /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_TXABORTED                                  (0x1UL << 2)                                   /**< Transmit Aborted Interrupt Enable           */
#define _FRC_IEN_TXABORTED_SHIFT                           2                                              /**< Shift value for FRC_TXABORTED               */
#define _FRC_IEN_TXABORTED_MASK                            0x4UL                                          /**< Bit mask for FRC_TXABORTED                  */
#define _FRC_IEN_TXABORTED_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXABORTED_DEFAULT                          (_FRC_IEN_TXABORTED_DEFAULT << 2)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_TXUF                                       (0x1UL << 3)                                   /**< Transmit Underflow Interrupt Enable         */
#define _FRC_IEN_TXUF_SHIFT                                3                                              /**< Shift value for FRC_TXUF                    */
#define _FRC_IEN_TXUF_MASK                                 0x8UL                                          /**< Bit mask for FRC_TXUF                       */
#define _FRC_IEN_TXUF_DEFAULT                              0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXUF_DEFAULT                               (_FRC_IEN_TXUF_DEFAULT << 3)                   /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_RXDONE                                     (0x1UL << 4)                                   /**< RX Done Interrupt Enable                    */
#define _FRC_IEN_RXDONE_SHIFT                              4                                              /**< Shift value for FRC_RXDONE                  */
#define _FRC_IEN_RXDONE_MASK                               0x10UL                                         /**< Bit mask for FRC_RXDONE                     */
#define _FRC_IEN_RXDONE_DEFAULT                            0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_RXDONE_DEFAULT                             (_FRC_IEN_RXDONE_DEFAULT << 4)                 /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_RXABORTED                                  (0x1UL << 5)                                   /**< RX Aborted Interrupt Enable                 */
#define _FRC_IEN_RXABORTED_SHIFT                           5                                              /**< Shift value for FRC_RXABORTED               */
#define _FRC_IEN_RXABORTED_MASK                            0x20UL                                         /**< Bit mask for FRC_RXABORTED                  */
#define _FRC_IEN_RXABORTED_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_RXABORTED_DEFAULT                          (_FRC_IEN_RXABORTED_DEFAULT << 5)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_FRAMEERROR                                 (0x1UL << 6)                                   /**< Frame Error Interrupt Enable                */
#define _FRC_IEN_FRAMEERROR_SHIFT                          6                                              /**< Shift value for FRC_FRAMEERROR              */
#define _FRC_IEN_FRAMEERROR_MASK                           0x40UL                                         /**< Bit mask for FRC_FRAMEERROR                 */
#define _FRC_IEN_FRAMEERROR_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_FRAMEERROR_DEFAULT                         (_FRC_IEN_FRAMEERROR_DEFAULT << 6)             /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_BLOCKERROR                                 (0x1UL << 7)                                   /**< Block Error Interrupt Enable                */
#define _FRC_IEN_BLOCKERROR_SHIFT                          7                                              /**< Shift value for FRC_BLOCKERROR              */
#define _FRC_IEN_BLOCKERROR_MASK                           0x80UL                                         /**< Bit mask for FRC_BLOCKERROR                 */
#define _FRC_IEN_BLOCKERROR_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_BLOCKERROR_DEFAULT                         (_FRC_IEN_BLOCKERROR_DEFAULT << 7)             /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_RXOF                                       (0x1UL << 8)                                   /**< Receive Overflow Interrupt Enable           */
#define _FRC_IEN_RXOF_SHIFT                                8                                              /**< Shift value for FRC_RXOF                    */
#define _FRC_IEN_RXOF_MASK                                 0x100UL                                        /**< Bit mask for FRC_RXOF                       */
#define _FRC_IEN_RXOF_DEFAULT                              0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_RXOF_DEFAULT                               (_FRC_IEN_RXOF_DEFAULT << 8)                   /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_WCNTCMP0                                   (0x1UL << 9)                                   /**< Word Counter Compare 0 Enable               */
#define _FRC_IEN_WCNTCMP0_SHIFT                            9                                              /**< Shift value for FRC_WCNTCMP0                */
#define _FRC_IEN_WCNTCMP0_MASK                             0x200UL                                        /**< Bit mask for FRC_WCNTCMP0                   */
#define _FRC_IEN_WCNTCMP0_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_WCNTCMP0_DEFAULT                           (_FRC_IEN_WCNTCMP0_DEFAULT << 9)               /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_WCNTCMP1                                   (0x1UL << 10)                                  /**< Word Counter Compare 1 Enable               */
#define _FRC_IEN_WCNTCMP1_SHIFT                            10                                             /**< Shift value for FRC_WCNTCMP1                */
#define _FRC_IEN_WCNTCMP1_MASK                             0x400UL                                        /**< Bit mask for FRC_WCNTCMP1                   */
#define _FRC_IEN_WCNTCMP1_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_WCNTCMP1_DEFAULT                           (_FRC_IEN_WCNTCMP1_DEFAULT << 10)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_WCNTCMP2                                   (0x1UL << 11)                                  /**< Word Counter Compare 2 Enable               */
#define _FRC_IEN_WCNTCMP2_SHIFT                            11                                             /**< Shift value for FRC_WCNTCMP2                */
#define _FRC_IEN_WCNTCMP2_MASK                             0x800UL                                        /**< Bit mask for FRC_WCNTCMP2                   */
#define _FRC_IEN_WCNTCMP2_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_WCNTCMP2_DEFAULT                           (_FRC_IEN_WCNTCMP2_DEFAULT << 11)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_ADDRERROR                                  (0x1UL << 12)                                  /**< Receive address error enable                */
#define _FRC_IEN_ADDRERROR_SHIFT                           12                                             /**< Shift value for FRC_ADDRERROR               */
#define _FRC_IEN_ADDRERROR_MASK                            0x1000UL                                       /**< Bit mask for FRC_ADDRERROR                  */
#define _FRC_IEN_ADDRERROR_DEFAULT                         0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_ADDRERROR_DEFAULT                          (_FRC_IEN_ADDRERROR_DEFAULT << 12)             /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_BUSERROR                                   (0x1UL << 13)                                  /**< Bus error enable                            */
#define _FRC_IEN_BUSERROR_SHIFT                            13                                             /**< Shift value for FRC_BUSERROR                */
#define _FRC_IEN_BUSERROR_MASK                             0x2000UL                                       /**< Bit mask for FRC_BUSERROR                   */
#define _FRC_IEN_BUSERROR_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_BUSERROR_DEFAULT                           (_FRC_IEN_BUSERROR_DEFAULT << 13)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_RXRAWEVENT                                 (0x1UL << 14)                                  /**< Receiver raw data enable                    */
#define _FRC_IEN_RXRAWEVENT_SHIFT                          14                                             /**< Shift value for FRC_RXRAWEVENT              */
#define _FRC_IEN_RXRAWEVENT_MASK                           0x4000UL                                       /**< Bit mask for FRC_RXRAWEVENT                 */
#define _FRC_IEN_RXRAWEVENT_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_RXRAWEVENT_DEFAULT                         (_FRC_IEN_RXRAWEVENT_DEFAULT << 14)            /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_TXRAWEVENT                                 (0x1UL << 15)                                  /**< Transmit raw data enable                    */
#define _FRC_IEN_TXRAWEVENT_SHIFT                          15                                             /**< Shift value for FRC_TXRAWEVENT              */
#define _FRC_IEN_TXRAWEVENT_MASK                           0x8000UL                                       /**< Bit mask for FRC_TXRAWEVENT                 */
#define _FRC_IEN_TXRAWEVENT_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXRAWEVENT_DEFAULT                         (_FRC_IEN_TXRAWEVENT_DEFAULT << 15)            /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_SNIFFOF                                    (0x1UL << 16)                                  /**< Data sniffer overflow enable                */
#define _FRC_IEN_SNIFFOF_SHIFT                             16                                             /**< Shift value for FRC_SNIFFOF                 */
#define _FRC_IEN_SNIFFOF_MASK                              0x10000UL                                      /**< Bit mask for FRC_SNIFFOF                    */
#define _FRC_IEN_SNIFFOF_DEFAULT                           0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_SNIFFOF_DEFAULT                            (_FRC_IEN_SNIFFOF_DEFAULT << 16)               /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_FRAMEDETPAUSED                             (0x1UL << 24)                                  /**< Frame detected pause event enable           */
#define _FRC_IEN_FRAMEDETPAUSED_SHIFT                      24                                             /**< Shift value for FRC_FRAMEDETPAUSED          */
#define _FRC_IEN_FRAMEDETPAUSED_MASK                       0x1000000UL                                    /**< Bit mask for FRC_FRAMEDETPAUSED             */
#define _FRC_IEN_FRAMEDETPAUSED_DEFAULT                    0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_FRAMEDETPAUSED_DEFAULT                     (_FRC_IEN_FRAMEDETPAUSED_DEFAULT << 24)        /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_INTERLEAVEWRITEPAUSED                      (0x1UL << 25)                                  /**< Interleaver write pause event enable        */
#define _FRC_IEN_INTERLEAVEWRITEPAUSED_SHIFT               25                                             /**< Shift value for FRC_INTERLEAVEWRITEPAUSED   */
#define _FRC_IEN_INTERLEAVEWRITEPAUSED_MASK                0x2000000UL                                    /**< Bit mask for FRC_INTERLEAVEWRITEPAUSED      */
#define _FRC_IEN_INTERLEAVEWRITEPAUSED_DEFAULT             0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_INTERLEAVEWRITEPAUSED_DEFAULT              (_FRC_IEN_INTERLEAVEWRITEPAUSED_DEFAULT << 25) /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_INTERLEAVEREADPAUSED                       (0x1UL << 26)                                  /**< Interleaver read pause event enable         */
#define _FRC_IEN_INTERLEAVEREADPAUSED_SHIFT                26                                             /**< Shift value for FRC_INTERLEAVEREADPAUSED    */
#define _FRC_IEN_INTERLEAVEREADPAUSED_MASK                 0x4000000UL                                    /**< Bit mask for FRC_INTERLEAVEREADPAUSED       */
#define _FRC_IEN_INTERLEAVEREADPAUSED_DEFAULT              0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_INTERLEAVEREADPAUSED_DEFAULT               (_FRC_IEN_INTERLEAVEREADPAUSED_DEFAULT << 26)  /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_TXSUBFRAMEPAUSED                           (0x1UL << 27)                                  /**< Transmit subframe pause event enable        */
#define _FRC_IEN_TXSUBFRAMEPAUSED_SHIFT                    27                                             /**< Shift value for FRC_TXSUBFRAMEPAUSED        */
#define _FRC_IEN_TXSUBFRAMEPAUSED_MASK                     0x8000000UL                                    /**< Bit mask for FRC_TXSUBFRAMEPAUSED           */
#define _FRC_IEN_TXSUBFRAMEPAUSED_DEFAULT                  0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXSUBFRAMEPAUSED_DEFAULT                   (_FRC_IEN_TXSUBFRAMEPAUSED_DEFAULT << 27)      /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_CONVPAUSED                                 (0x1UL << 28)                                  /**< Convolutional coder pause event enable      */
#define _FRC_IEN_CONVPAUSED_SHIFT                          28                                             /**< Shift value for FRC_CONVPAUSED              */
#define _FRC_IEN_CONVPAUSED_MASK                           0x10000000UL                                   /**< Bit mask for FRC_CONVPAUSED                 */
#define _FRC_IEN_CONVPAUSED_DEFAULT                        0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_CONVPAUSED_DEFAULT                         (_FRC_IEN_CONVPAUSED_DEFAULT << 28)            /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_RXWORD                                     (0x1UL << 29)                                  /**< Receive Word Interrupt Enable               */
#define _FRC_IEN_RXWORD_SHIFT                              29                                             /**< Shift value for FRC_RXWORD                  */
#define _FRC_IEN_RXWORD_MASK                               0x20000000UL                                   /**< Bit mask for FRC_RXWORD                     */
#define _FRC_IEN_RXWORD_DEFAULT                            0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_RXWORD_DEFAULT                             (_FRC_IEN_RXWORD_DEFAULT << 29)                /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_TXWORD                                     (0x1UL << 30)                                  /**< Transmit Word Interrupt Enable              */
#define _FRC_IEN_TXWORD_SHIFT                              30                                             /**< Shift value for FRC_TXWORD                  */
#define _FRC_IEN_TXWORD_MASK                               0x40000000UL                                   /**< Bit mask for FRC_TXWORD                     */
#define _FRC_IEN_TXWORD_DEFAULT                            0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_TXWORD_DEFAULT                             (_FRC_IEN_TXWORD_DEFAULT << 30)                /**< Shifted mode DEFAULT for FRC_IEN            */

/* Bit fields for FRC MIRRORIF */
#define _FRC_MIRRORIF_RESETVALUE                           0x00000000UL                                        /**< Default value for FRC_MIRRORIF              */
#define _FRC_MIRRORIF_MASK                                 0x0003FFFFUL                                        /**< Mask for FRC_MIRRORIF                       */
#define FRC_MIRRORIF_TXDONE                                (0x1UL << 0)                                        /**< TX Done Interrupt Flag                      */
#define _FRC_MIRRORIF_TXDONE_SHIFT                         0                                                   /**< Shift value for FRC_TXDONE                  */
#define _FRC_MIRRORIF_TXDONE_MASK                          0x1UL                                               /**< Bit mask for FRC_TXDONE                     */
#define _FRC_MIRRORIF_TXDONE_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_TXDONE_DEFAULT                        (_FRC_MIRRORIF_TXDONE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_TXAFTERFRAMEDONE                      (0x1UL << 1)                                        /**< TX after frame Done Interrupt Flag          */
#define _FRC_MIRRORIF_TXAFTERFRAMEDONE_SHIFT               1                                                   /**< Shift value for FRC_TXAFTERFRAMEDONE        */
#define _FRC_MIRRORIF_TXAFTERFRAMEDONE_MASK                0x2UL                                               /**< Bit mask for FRC_TXAFTERFRAMEDONE           */
#define _FRC_MIRRORIF_TXAFTERFRAMEDONE_DEFAULT             0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_TXAFTERFRAMEDONE_DEFAULT              (_FRC_MIRRORIF_TXAFTERFRAMEDONE_DEFAULT << 1)       /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_TXABORTED                             (0x1UL << 2)                                        /**< Transmit Aborted Interrupt Flag             */
#define _FRC_MIRRORIF_TXABORTED_SHIFT                      2                                                   /**< Shift value for FRC_TXABORTED               */
#define _FRC_MIRRORIF_TXABORTED_MASK                       0x4UL                                               /**< Bit mask for FRC_TXABORTED                  */
#define _FRC_MIRRORIF_TXABORTED_DEFAULT                    0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_TXABORTED_DEFAULT                     (_FRC_MIRRORIF_TXABORTED_DEFAULT << 2)              /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_TXUF                                  (0x1UL << 3)                                        /**< Transmit Underflow Interrupt Flag           */
#define _FRC_MIRRORIF_TXUF_SHIFT                           3                                                   /**< Shift value for FRC_TXUF                    */
#define _FRC_MIRRORIF_TXUF_MASK                            0x8UL                                               /**< Bit mask for FRC_TXUF                       */
#define _FRC_MIRRORIF_TXUF_DEFAULT                         0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_TXUF_DEFAULT                          (_FRC_MIRRORIF_TXUF_DEFAULT << 3)                   /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_RXDONE                                (0x1UL << 4)                                        /**< RX Done Interrupt Flag                      */
#define _FRC_MIRRORIF_RXDONE_SHIFT                         4                                                   /**< Shift value for FRC_RXDONE                  */
#define _FRC_MIRRORIF_RXDONE_MASK                          0x10UL                                              /**< Bit mask for FRC_RXDONE                     */
#define _FRC_MIRRORIF_RXDONE_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_RXDONE_DEFAULT                        (_FRC_MIRRORIF_RXDONE_DEFAULT << 4)                 /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_RXABORTED                             (0x1UL << 5)                                        /**< RX Aborted Interrupt Flag                   */
#define _FRC_MIRRORIF_RXABORTED_SHIFT                      5                                                   /**< Shift value for FRC_RXABORTED               */
#define _FRC_MIRRORIF_RXABORTED_MASK                       0x20UL                                              /**< Bit mask for FRC_RXABORTED                  */
#define _FRC_MIRRORIF_RXABORTED_DEFAULT                    0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_RXABORTED_DEFAULT                     (_FRC_MIRRORIF_RXABORTED_DEFAULT << 5)              /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_FRAMEERROR                            (0x1UL << 6)                                        /**< Frame Error Interrupt Flag                  */
#define _FRC_MIRRORIF_FRAMEERROR_SHIFT                     6                                                   /**< Shift value for FRC_FRAMEERROR              */
#define _FRC_MIRRORIF_FRAMEERROR_MASK                      0x40UL                                              /**< Bit mask for FRC_FRAMEERROR                 */
#define _FRC_MIRRORIF_FRAMEERROR_DEFAULT                   0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_FRAMEERROR_DEFAULT                    (_FRC_MIRRORIF_FRAMEERROR_DEFAULT << 6)             /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_BLOCKERROR                            (0x1UL << 7)                                        /**< Block Error Interrupt Flag                  */
#define _FRC_MIRRORIF_BLOCKERROR_SHIFT                     7                                                   /**< Shift value for FRC_BLOCKERROR              */
#define _FRC_MIRRORIF_BLOCKERROR_MASK                      0x80UL                                              /**< Bit mask for FRC_BLOCKERROR                 */
#define _FRC_MIRRORIF_BLOCKERROR_DEFAULT                   0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_BLOCKERROR_DEFAULT                    (_FRC_MIRRORIF_BLOCKERROR_DEFAULT << 7)             /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_RXOF                                  (0x1UL << 8)                                        /**< Receive Overflow Interrupt Flag             */
#define _FRC_MIRRORIF_RXOF_SHIFT                           8                                                   /**< Shift value for FRC_RXOF                    */
#define _FRC_MIRRORIF_RXOF_MASK                            0x100UL                                             /**< Bit mask for FRC_RXOF                       */
#define _FRC_MIRRORIF_RXOF_DEFAULT                         0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_RXOF_DEFAULT                          (_FRC_MIRRORIF_RXOF_DEFAULT << 8)                   /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_ADDRERROR                             (0x1UL << 9)                                        /**< Receive address error event                 */
#define _FRC_MIRRORIF_ADDRERROR_SHIFT                      9                                                   /**< Shift value for FRC_ADDRERROR               */
#define _FRC_MIRRORIF_ADDRERROR_MASK                       0x200UL                                             /**< Bit mask for FRC_ADDRERROR                  */
#define _FRC_MIRRORIF_ADDRERROR_DEFAULT                    0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_ADDRERROR_DEFAULT                     (_FRC_MIRRORIF_ADDRERROR_DEFAULT << 9)              /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_BUSERROR                              (0x1UL << 10)                                       /**< A bus error event occurred                  */
#define _FRC_MIRRORIF_BUSERROR_SHIFT                       10                                                  /**< Shift value for FRC_BUSERROR                */
#define _FRC_MIRRORIF_BUSERROR_MASK                        0x400UL                                             /**< Bit mask for FRC_BUSERROR                   */
#define _FRC_MIRRORIF_BUSERROR_DEFAULT                     0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_BUSERROR_DEFAULT                      (_FRC_MIRRORIF_BUSERROR_DEFAULT << 10)              /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_SNIFFOF                               (0x1UL << 11)                                       /**< Data sniffer overflow                       */
#define _FRC_MIRRORIF_SNIFFOF_SHIFT                        11                                                  /**< Shift value for FRC_SNIFFOF                 */
#define _FRC_MIRRORIF_SNIFFOF_MASK                         0x800UL                                             /**< Bit mask for FRC_SNIFFOF                    */
#define _FRC_MIRRORIF_SNIFFOF_DEFAULT                      0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_SNIFFOF_DEFAULT                       (_FRC_MIRRORIF_SNIFFOF_DEFAULT << 11)               /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_FRAMEDETPAUSED                        (0x1UL << 12)                                       /**< Frame detected pause event active           */
#define _FRC_MIRRORIF_FRAMEDETPAUSED_SHIFT                 12                                                  /**< Shift value for FRC_FRAMEDETPAUSED          */
#define _FRC_MIRRORIF_FRAMEDETPAUSED_MASK                  0x1000UL                                            /**< Bit mask for FRC_FRAMEDETPAUSED             */
#define _FRC_MIRRORIF_FRAMEDETPAUSED_DEFAULT               0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_FRAMEDETPAUSED_DEFAULT                (_FRC_MIRRORIF_FRAMEDETPAUSED_DEFAULT << 12)        /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_INTERLEAVEWRITEPAUSED                 (0x1UL << 13)                                       /**< Interleaver write pause event active        */
#define _FRC_MIRRORIF_INTERLEAVEWRITEPAUSED_SHIFT          13                                                  /**< Shift value for FRC_INTERLEAVEWRITEPAUSED   */
#define _FRC_MIRRORIF_INTERLEAVEWRITEPAUSED_MASK           0x2000UL                                            /**< Bit mask for FRC_INTERLEAVEWRITEPAUSED      */
#define _FRC_MIRRORIF_INTERLEAVEWRITEPAUSED_DEFAULT        0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_INTERLEAVEWRITEPAUSED_DEFAULT         (_FRC_MIRRORIF_INTERLEAVEWRITEPAUSED_DEFAULT << 13) /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_INTERLEAVEREADPAUSED                  (0x1UL << 14)                                       /**< Interleaver read pause event active         */
#define _FRC_MIRRORIF_INTERLEAVEREADPAUSED_SHIFT           14                                                  /**< Shift value for FRC_INTERLEAVEREADPAUSED    */
#define _FRC_MIRRORIF_INTERLEAVEREADPAUSED_MASK            0x4000UL                                            /**< Bit mask for FRC_INTERLEAVEREADPAUSED       */
#define _FRC_MIRRORIF_INTERLEAVEREADPAUSED_DEFAULT         0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_INTERLEAVEREADPAUSED_DEFAULT          (_FRC_MIRRORIF_INTERLEAVEREADPAUSED_DEFAULT << 14)  /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_TXSUBFRAMEPAUSED                      (0x1UL << 15)                                       /**< Transmit subframe pause event active        */
#define _FRC_MIRRORIF_TXSUBFRAMEPAUSED_SHIFT               15                                                  /**< Shift value for FRC_TXSUBFRAMEPAUSED        */
#define _FRC_MIRRORIF_TXSUBFRAMEPAUSED_MASK                0x8000UL                                            /**< Bit mask for FRC_TXSUBFRAMEPAUSED           */
#define _FRC_MIRRORIF_TXSUBFRAMEPAUSED_DEFAULT             0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_TXSUBFRAMEPAUSED_DEFAULT              (_FRC_MIRRORIF_TXSUBFRAMEPAUSED_DEFAULT << 15)      /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_CONVPAUSED                            (0x1UL << 16)                                       /**< Convolutional coder pause event active      */
#define _FRC_MIRRORIF_CONVPAUSED_SHIFT                     16                                                  /**< Shift value for FRC_CONVPAUSED              */
#define _FRC_MIRRORIF_CONVPAUSED_MASK                      0x10000UL                                           /**< Bit mask for FRC_CONVPAUSED                 */
#define _FRC_MIRRORIF_CONVPAUSED_DEFAULT                   0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_CONVPAUSED_DEFAULT                    (_FRC_MIRRORIF_CONVPAUSED_DEFAULT << 16)            /**< Shifted mode DEFAULT for FRC_MIRRORIF       */
#define FRC_MIRRORIF_IFMIRRORCLEAR                         (0x1UL << 17)                                       /**< Clear bit for the FRC IF MIRROR Register    */
#define _FRC_MIRRORIF_IFMIRRORCLEAR_SHIFT                  17                                                  /**< Shift value for FRC_IFMIRRORCLEAR           */
#define _FRC_MIRRORIF_IFMIRRORCLEAR_MASK                   0x20000UL                                           /**< Bit mask for FRC_IFMIRRORCLEAR              */
#define _FRC_MIRRORIF_IFMIRRORCLEAR_DEFAULT                0x00000000UL                                        /**< Mode DEFAULT for FRC_MIRRORIF               */
#define FRC_MIRRORIF_IFMIRRORCLEAR_DEFAULT                 (_FRC_MIRRORIF_IFMIRRORCLEAR_DEFAULT << 17)         /**< Shifted mode DEFAULT for FRC_MIRRORIF       */

/* Bit fields for FRC BUFFERMODE */
#define _FRC_BUFFERMODE_RESETVALUE                         0x00000000UL                                 /**< Default value for FRC_BUFFERMODE            */
#define _FRC_BUFFERMODE_MASK                               0x0000000FUL                                 /**< Mask for FRC_BUFFERMODE                     */
#define FRC_BUFFERMODE_TXBUFFERMODE                        (0x1UL << 0)                                 /**< Transmit Buffer Mode                        */
#define _FRC_BUFFERMODE_TXBUFFERMODE_SHIFT                 0                                            /**< Shift value for FRC_TXBUFFERMODE            */
#define _FRC_BUFFERMODE_TXBUFFERMODE_MASK                  0x1UL                                        /**< Bit mask for FRC_TXBUFFERMODE               */
#define _FRC_BUFFERMODE_TXBUFFERMODE_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for FRC_BUFFERMODE             */
#define _FRC_BUFFERMODE_TXBUFFERMODE_BUFC                  0x00000000UL                                 /**< Mode BUFC for FRC_BUFFERMODE                */
#define _FRC_BUFFERMODE_TXBUFFERMODE_REGISTER              0x00000001UL                                 /**< Mode REGISTER for FRC_BUFFERMODE            */
#define FRC_BUFFERMODE_TXBUFFERMODE_DEFAULT                (_FRC_BUFFERMODE_TXBUFFERMODE_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_BUFFERMODE     */
#define FRC_BUFFERMODE_TXBUFFERMODE_BUFC                   (_FRC_BUFFERMODE_TXBUFFERMODE_BUFC << 0)     /**< Shifted mode BUFC for FRC_BUFFERMODE        */
#define FRC_BUFFERMODE_TXBUFFERMODE_REGISTER               (_FRC_BUFFERMODE_TXBUFFERMODE_REGISTER << 0) /**< Shifted mode REGISTER for FRC_BUFFERMODE    */
#define _FRC_BUFFERMODE_RXBUFFERMODE_SHIFT                 1                                            /**< Shift value for FRC_RXBUFFERMODE            */
#define _FRC_BUFFERMODE_RXBUFFERMODE_MASK                  0x6UL                                        /**< Bit mask for FRC_RXBUFFERMODE               */
#define _FRC_BUFFERMODE_RXBUFFERMODE_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for FRC_BUFFERMODE             */
#define _FRC_BUFFERMODE_RXBUFFERMODE_BUFC                  0x00000000UL                                 /**< Mode BUFC for FRC_BUFFERMODE                */
#define _FRC_BUFFERMODE_RXBUFFERMODE_REGISTER              0x00000001UL                                 /**< Mode REGISTER for FRC_BUFFERMODE            */
#define _FRC_BUFFERMODE_RXBUFFERMODE_DISABLE               0x00000002UL                                 /**< Mode DISABLE for FRC_BUFFERMODE             */
#define FRC_BUFFERMODE_RXBUFFERMODE_DEFAULT                (_FRC_BUFFERMODE_RXBUFFERMODE_DEFAULT << 1)  /**< Shifted mode DEFAULT for FRC_BUFFERMODE     */
#define FRC_BUFFERMODE_RXBUFFERMODE_BUFC                   (_FRC_BUFFERMODE_RXBUFFERMODE_BUFC << 1)     /**< Shifted mode BUFC for FRC_BUFFERMODE        */
#define FRC_BUFFERMODE_RXBUFFERMODE_REGISTER               (_FRC_BUFFERMODE_RXBUFFERMODE_REGISTER << 1) /**< Shifted mode REGISTER for FRC_BUFFERMODE    */
#define FRC_BUFFERMODE_RXBUFFERMODE_DISABLE                (_FRC_BUFFERMODE_RXBUFFERMODE_DISABLE << 1)  /**< Shifted mode DISABLE for FRC_BUFFERMODE     */
#define FRC_BUFFERMODE_RXFRCBUFMUX                         (0x1UL << 3)                                 /**< RX FRC Buffer Mux                           */
#define _FRC_BUFFERMODE_RXFRCBUFMUX_SHIFT                  3                                            /**< Shift value for FRC_RXFRCBUFMUX             */
#define _FRC_BUFFERMODE_RXFRCBUFMUX_MASK                   0x8UL                                        /**< Bit mask for FRC_RXFRCBUFMUX                */
#define _FRC_BUFFERMODE_RXFRCBUFMUX_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for FRC_BUFFERMODE             */
#define FRC_BUFFERMODE_RXFRCBUFMUX_DEFAULT                 (_FRC_BUFFERMODE_RXFRCBUFMUX_DEFAULT << 3)   /**< Shifted mode DEFAULT for FRC_BUFFERMODE     */

/* Bit fields for FRC SNIFFCTRL */
#define _FRC_SNIFFCTRL_RESETVALUE                          0x000007FCUL                                 /**< Default value for FRC_SNIFFCTRL             */
#define _FRC_SNIFFCTRL_MASK                                0x0003FFFFUL                                 /**< Mask for FRC_SNIFFCTRL                      */
#define _FRC_SNIFFCTRL_SNIFFMODE_SHIFT                     0                                            /**< Shift value for FRC_SNIFFMODE               */
#define _FRC_SNIFFCTRL_SNIFFMODE_MASK                      0x3UL                                        /**< Bit mask for FRC_SNIFFMODE                  */
#define _FRC_SNIFFCTRL_SNIFFMODE_DEFAULT                   0x00000000UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define _FRC_SNIFFCTRL_SNIFFMODE_OFF                       0x00000000UL                                 /**< Mode OFF for FRC_SNIFFCTRL                  */
#define _FRC_SNIFFCTRL_SNIFFMODE_UART                      0x00000001UL                                 /**< Mode UART for FRC_SNIFFCTRL                 */
#define _FRC_SNIFFCTRL_SNIFFMODE_SPI                       0x00000002UL                                 /**< Mode SPI for FRC_SNIFFCTRL                  */
#define FRC_SNIFFCTRL_SNIFFMODE_DEFAULT                    (_FRC_SNIFFCTRL_SNIFFMODE_DEFAULT << 0)      /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFMODE_OFF                        (_FRC_SNIFFCTRL_SNIFFMODE_OFF << 0)          /**< Shifted mode OFF for FRC_SNIFFCTRL          */
#define FRC_SNIFFCTRL_SNIFFMODE_UART                       (_FRC_SNIFFCTRL_SNIFFMODE_UART << 0)         /**< Shifted mode UART for FRC_SNIFFCTRL         */
#define FRC_SNIFFCTRL_SNIFFMODE_SPI                        (_FRC_SNIFFCTRL_SNIFFMODE_SPI << 0)          /**< Shifted mode SPI for FRC_SNIFFCTRL          */
#define FRC_SNIFFCTRL_SNIFFBITS                            (0x1UL << 2)                                 /**< Data sniff data bits                        */
#define _FRC_SNIFFCTRL_SNIFFBITS_SHIFT                     2                                            /**< Shift value for FRC_SNIFFBITS               */
#define _FRC_SNIFFCTRL_SNIFFBITS_MASK                      0x4UL                                        /**< Bit mask for FRC_SNIFFBITS                  */
#define _FRC_SNIFFCTRL_SNIFFBITS_DEFAULT                   0x00000001UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define _FRC_SNIFFCTRL_SNIFFBITS_EIGHT                     0x00000000UL                                 /**< Mode EIGHT for FRC_SNIFFCTRL                */
#define _FRC_SNIFFCTRL_SNIFFBITS_NINE                      0x00000001UL                                 /**< Mode NINE for FRC_SNIFFCTRL                 */
#define FRC_SNIFFCTRL_SNIFFBITS_DEFAULT                    (_FRC_SNIFFCTRL_SNIFFBITS_DEFAULT << 2)      /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFBITS_EIGHT                      (_FRC_SNIFFCTRL_SNIFFBITS_EIGHT << 2)        /**< Shifted mode EIGHT for FRC_SNIFFCTRL        */
#define FRC_SNIFFCTRL_SNIFFBITS_NINE                       (_FRC_SNIFFCTRL_SNIFFBITS_NINE << 2)         /**< Shifted mode NINE for FRC_SNIFFCTRL         */
#define FRC_SNIFFCTRL_SNIFFRXDATA                          (0x1UL << 3)                                 /**< Enable sniffing of received data.           */
#define _FRC_SNIFFCTRL_SNIFFRXDATA_SHIFT                   3                                            /**< Shift value for FRC_SNIFFRXDATA             */
#define _FRC_SNIFFCTRL_SNIFFRXDATA_MASK                    0x8UL                                        /**< Bit mask for FRC_SNIFFRXDATA                */
#define _FRC_SNIFFCTRL_SNIFFRXDATA_DEFAULT                 0x00000001UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFRXDATA_DEFAULT                  (_FRC_SNIFFCTRL_SNIFFRXDATA_DEFAULT << 3)    /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFTXDATA                          (0x1UL << 4)                                 /**< Enable sniffing of transmitted data.        */
#define _FRC_SNIFFCTRL_SNIFFTXDATA_SHIFT                   4                                            /**< Shift value for FRC_SNIFFTXDATA             */
#define _FRC_SNIFFCTRL_SNIFFTXDATA_MASK                    0x10UL                                       /**< Bit mask for FRC_SNIFFTXDATA                */
#define _FRC_SNIFFCTRL_SNIFFTXDATA_DEFAULT                 0x00000001UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFTXDATA_DEFAULT                  (_FRC_SNIFFCTRL_SNIFFTXDATA_DEFAULT << 4)    /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFRSSI                            (0x1UL << 5)                                 /**< Enable sniffing of RSSI                     */
#define _FRC_SNIFFCTRL_SNIFFRSSI_SHIFT                     5                                            /**< Shift value for FRC_SNIFFRSSI               */
#define _FRC_SNIFFCTRL_SNIFFRSSI_MASK                      0x20UL                                       /**< Bit mask for FRC_SNIFFRSSI                  */
#define _FRC_SNIFFCTRL_SNIFFRSSI_DEFAULT                   0x00000001UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFRSSI_DEFAULT                    (_FRC_SNIFFCTRL_SNIFFRSSI_DEFAULT << 5)      /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFSTATE                           (0x1UL << 6)                                 /**< Enable sniffing of state information        */
#define _FRC_SNIFFCTRL_SNIFFSTATE_SHIFT                    6                                            /**< Shift value for FRC_SNIFFSTATE              */
#define _FRC_SNIFFCTRL_SNIFFSTATE_MASK                     0x40UL                                       /**< Bit mask for FRC_SNIFFSTATE                 */
#define _FRC_SNIFFCTRL_SNIFFSTATE_DEFAULT                  0x00000001UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFSTATE_DEFAULT                   (_FRC_SNIFFCTRL_SNIFFSTATE_DEFAULT << 6)     /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFAUXDATA                         (0x1UL << 7)                                 /**< Enable sniffing of auxiliary data           */
#define _FRC_SNIFFCTRL_SNIFFAUXDATA_SHIFT                  7                                            /**< Shift value for FRC_SNIFFAUXDATA            */
#define _FRC_SNIFFCTRL_SNIFFAUXDATA_MASK                   0x80UL                                       /**< Bit mask for FRC_SNIFFAUXDATA               */
#define _FRC_SNIFFCTRL_SNIFFAUXDATA_DEFAULT                0x00000001UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFAUXDATA_DEFAULT                 (_FRC_SNIFFCTRL_SNIFFAUXDATA_DEFAULT << 7)   /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define _FRC_SNIFFCTRL_SNIFFBR_SHIFT                       8                                            /**< Shift value for FRC_SNIFFBR                 */
#define _FRC_SNIFFCTRL_SNIFFBR_MASK                        0xFF00UL                                     /**< Bit mask for FRC_SNIFFBR                    */
#define _FRC_SNIFFCTRL_SNIFFBR_DEFAULT                     0x00000007UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFBR_DEFAULT                      (_FRC_SNIFFCTRL_SNIFFBR_DEFAULT << 8)        /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */
#define FRC_SNIFFCTRL_SNIFFSYNCWORD                        (0x1UL << 17)                                /**< Sniffer baudrate setting                    */
#define _FRC_SNIFFCTRL_SNIFFSYNCWORD_SHIFT                 17                                           /**< Shift value for FRC_SNIFFSYNCWORD           */
#define _FRC_SNIFFCTRL_SNIFFSYNCWORD_MASK                  0x20000UL                                    /**< Bit mask for FRC_SNIFFSYNCWORD              */
#define _FRC_SNIFFCTRL_SNIFFSYNCWORD_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for FRC_SNIFFCTRL              */
#define FRC_SNIFFCTRL_SNIFFSYNCWORD_DEFAULT                (_FRC_SNIFFCTRL_SNIFFSYNCWORD_DEFAULT << 17) /**< Shifted mode DEFAULT for FRC_SNIFFCTRL      */

/* Bit fields for FRC AUXDATA */
#define _FRC_AUXDATA_RESETVALUE                            0x00000000UL                        /**< Default value for FRC_AUXDATA               */
#define _FRC_AUXDATA_MASK                                  0x000001FFUL                        /**< Mask for FRC_AUXDATA                        */
#define _FRC_AUXDATA_AUXDATA_SHIFT                         0                                   /**< Shift value for FRC_AUXDATA                 */
#define _FRC_AUXDATA_AUXDATA_MASK                          0x1FFUL                             /**< Bit mask for FRC_AUXDATA                    */
#define _FRC_AUXDATA_AUXDATA_DEFAULT                       0x00000000UL                        /**< Mode DEFAULT for FRC_AUXDATA                */
#define FRC_AUXDATA_AUXDATA_DEFAULT                        (_FRC_AUXDATA_AUXDATA_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_AUXDATA        */

/* Bit fields for FRC RAWCTRL */
#define _FRC_RAWCTRL_RESETVALUE                            0x00000000UL                                          /**< Default value for FRC_RAWCTRL               */
#define _FRC_RAWCTRL_MASK                                  0x000020BFUL                                          /**< Mask for FRC_RAWCTRL                        */
#define _FRC_RAWCTRL_TXRAWMODE_SHIFT                       0                                                     /**< Shift value for FRC_TXRAWMODE               */
#define _FRC_RAWCTRL_TXRAWMODE_MASK                        0x3UL                                                 /**< Bit mask for FRC_TXRAWMODE                  */
#define _FRC_RAWCTRL_TXRAWMODE_DEFAULT                     0x00000000UL                                          /**< Mode DEFAULT for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_TXRAWMODE_DISABLE                     0x00000000UL                                          /**< Mode DISABLE for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_TXRAWMODE_SINGLEBUFFER                0x00000001UL                                          /**< Mode SINGLEBUFFER for FRC_RAWCTRL           */
#define _FRC_RAWCTRL_TXRAWMODE_REPEATBUFFER                0x00000002UL                                          /**< Mode REPEATBUFFER for FRC_RAWCTRL           */
#define FRC_RAWCTRL_TXRAWMODE_DEFAULT                      (_FRC_RAWCTRL_TXRAWMODE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_RAWCTRL        */
#define FRC_RAWCTRL_TXRAWMODE_DISABLE                      (_FRC_RAWCTRL_TXRAWMODE_DISABLE << 0)                 /**< Shifted mode DISABLE for FRC_RAWCTRL        */
#define FRC_RAWCTRL_TXRAWMODE_SINGLEBUFFER                 (_FRC_RAWCTRL_TXRAWMODE_SINGLEBUFFER << 0)            /**< Shifted mode SINGLEBUFFER for FRC_RAWCTRL   */
#define FRC_RAWCTRL_TXRAWMODE_REPEATBUFFER                 (_FRC_RAWCTRL_TXRAWMODE_REPEATBUFFER << 0)            /**< Shifted mode REPEATBUFFER for FRC_RAWCTRL   */
#define _FRC_RAWCTRL_RXRAWMODE_SHIFT                       2                                                     /**< Shift value for FRC_RXRAWMODE               */
#define _FRC_RAWCTRL_RXRAWMODE_MASK                        0x1CUL                                                /**< Bit mask for FRC_RXRAWMODE                  */
#define _FRC_RAWCTRL_RXRAWMODE_DEFAULT                     0x00000000UL                                          /**< Mode DEFAULT for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_RXRAWMODE_DISABLE                     0x00000000UL                                          /**< Mode DISABLE for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_RXRAWMODE_SINGLEITEM                  0x00000001UL                                          /**< Mode SINGLEITEM for FRC_RAWCTRL             */
#define _FRC_RAWCTRL_RXRAWMODE_SINGLEBUFFER                0x00000002UL                                          /**< Mode SINGLEBUFFER for FRC_RAWCTRL           */
#define _FRC_RAWCTRL_RXRAWMODE_SINGLEBUFFERFRAME           0x00000003UL                                          /**< Mode SINGLEBUFFERFRAME for FRC_RAWCTRL      */
#define _FRC_RAWCTRL_RXRAWMODE_REPEATBUFFER                0x00000004UL                                          /**< Mode REPEATBUFFER for FRC_RAWCTRL           */
#define FRC_RAWCTRL_RXRAWMODE_DEFAULT                      (_FRC_RAWCTRL_RXRAWMODE_DEFAULT << 2)                 /**< Shifted mode DEFAULT for FRC_RAWCTRL        */
#define FRC_RAWCTRL_RXRAWMODE_DISABLE                      (_FRC_RAWCTRL_RXRAWMODE_DISABLE << 2)                 /**< Shifted mode DISABLE for FRC_RAWCTRL        */
#define FRC_RAWCTRL_RXRAWMODE_SINGLEITEM                   (_FRC_RAWCTRL_RXRAWMODE_SINGLEITEM << 2)              /**< Shifted mode SINGLEITEM for FRC_RAWCTRL     */
#define FRC_RAWCTRL_RXRAWMODE_SINGLEBUFFER                 (_FRC_RAWCTRL_RXRAWMODE_SINGLEBUFFER << 2)            /**< Shifted mode SINGLEBUFFER for FRC_RAWCTRL   */
#define FRC_RAWCTRL_RXRAWMODE_SINGLEBUFFERFRAME            (_FRC_RAWCTRL_RXRAWMODE_SINGLEBUFFERFRAME << 2)       /**< Shifted mode SINGLEBUFFERFRAME for FRC_RAWCTRL*/
#define FRC_RAWCTRL_RXRAWMODE_REPEATBUFFER                 (_FRC_RAWCTRL_RXRAWMODE_REPEATBUFFER << 2)            /**< Shifted mode REPEATBUFFER for FRC_RAWCTRL   */
#define FRC_RAWCTRL_RXRAWRANDOM                            (0x1UL << 5)                                          /**< Receive raw data random number generator    */
#define _FRC_RAWCTRL_RXRAWRANDOM_SHIFT                     5                                                     /**< Shift value for FRC_RXRAWRANDOM             */
#define _FRC_RAWCTRL_RXRAWRANDOM_MASK                      0x20UL                                                /**< Bit mask for FRC_RXRAWRANDOM                */
#define _FRC_RAWCTRL_RXRAWRANDOM_DEFAULT                   0x00000000UL                                          /**< Mode DEFAULT for FRC_RAWCTRL                */
#define FRC_RAWCTRL_RXRAWRANDOM_DEFAULT                    (_FRC_RAWCTRL_RXRAWRANDOM_DEFAULT << 5)               /**< Shifted mode DEFAULT for FRC_RAWCTRL        */
#define FRC_RAWCTRL_RXRAWTRIGGER                           (0x1UL << 7)                                          /**< Receiver raw data trigger setting           */
#define _FRC_RAWCTRL_RXRAWTRIGGER_SHIFT                    7                                                     /**< Shift value for FRC_RXRAWTRIGGER            */
#define _FRC_RAWCTRL_RXRAWTRIGGER_MASK                     0x80UL                                                /**< Bit mask for FRC_RXRAWTRIGGER               */
#define _FRC_RAWCTRL_RXRAWTRIGGER_DEFAULT                  0x00000000UL                                          /**< Mode DEFAULT for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_RXRAWTRIGGER_IMMEDIATE                0x00000000UL                                          /**< Mode IMMEDIATE for FRC_RAWCTRL              */
#define _FRC_RAWCTRL_RXRAWTRIGGER_PRS                      0x00000001UL                                          /**< Mode PRS for FRC_RAWCTRL                    */
#define FRC_RAWCTRL_RXRAWTRIGGER_DEFAULT                   (_FRC_RAWCTRL_RXRAWTRIGGER_DEFAULT << 7)              /**< Shifted mode DEFAULT for FRC_RAWCTRL        */
#define FRC_RAWCTRL_RXRAWTRIGGER_IMMEDIATE                 (_FRC_RAWCTRL_RXRAWTRIGGER_IMMEDIATE << 7)            /**< Shifted mode IMMEDIATE for FRC_RAWCTRL      */
#define FRC_RAWCTRL_RXRAWTRIGGER_PRS                       (_FRC_RAWCTRL_RXRAWTRIGGER_PRS << 7)                  /**< Shifted mode PRS for FRC_RAWCTRL            */
#define FRC_RAWCTRL_DEMODRAWDATAMUX                        (0x1UL << 13)                                         /**< Raw data mux control                        */
#define _FRC_RAWCTRL_DEMODRAWDATAMUX_SHIFT                 13                                                    /**< Shift value for FRC_DEMODRAWDATAMUX         */
#define _FRC_RAWCTRL_DEMODRAWDATAMUX_MASK                  0x2000UL                                              /**< Bit mask for FRC_DEMODRAWDATAMUX            */
#define _FRC_RAWCTRL_DEMODRAWDATAMUX_DEFAULT               0x00000000UL                                          /**< Mode DEFAULT for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_DEMODRAWDATAMUX_DEMODRAWDATASEL       0x00000000UL                                          /**< Mode DEMODRAWDATASEL for FRC_RAWCTRL        */
#define _FRC_RAWCTRL_DEMODRAWDATAMUX_DEMODRAWDATASEL2      0x00000001UL                                          /**< Mode DEMODRAWDATASEL2 for FRC_RAWCTRL       */
#define FRC_RAWCTRL_DEMODRAWDATAMUX_DEFAULT                (_FRC_RAWCTRL_DEMODRAWDATAMUX_DEFAULT << 13)          /**< Shifted mode DEFAULT for FRC_RAWCTRL        */
#define FRC_RAWCTRL_DEMODRAWDATAMUX_DEMODRAWDATASEL        (_FRC_RAWCTRL_DEMODRAWDATAMUX_DEMODRAWDATASEL << 13)  /**< Shifted mode DEMODRAWDATASEL for FRC_RAWCTRL*/
#define FRC_RAWCTRL_DEMODRAWDATAMUX_DEMODRAWDATASEL2       (_FRC_RAWCTRL_DEMODRAWDATAMUX_DEMODRAWDATASEL2 << 13) /**< Shifted mode DEMODRAWDATASEL2 for FRC_RAWCTRL*/

/* Bit fields for FRC RXRAWDATA */
#define _FRC_RXRAWDATA_RESETVALUE                          0x00000000UL                            /**< Default value for FRC_RXRAWDATA             */
#define _FRC_RXRAWDATA_MASK                                0xFFFFFFFFUL                            /**< Mask for FRC_RXRAWDATA                      */
#define _FRC_RXRAWDATA_RXRAWDATA_SHIFT                     0                                       /**< Shift value for FRC_RXRAWDATA               */
#define _FRC_RXRAWDATA_RXRAWDATA_MASK                      0xFFFFFFFFUL                            /**< Bit mask for FRC_RXRAWDATA                  */
#define _FRC_RXRAWDATA_RXRAWDATA_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for FRC_RXRAWDATA              */
#define FRC_RXRAWDATA_RXRAWDATA_DEFAULT                    (_FRC_RXRAWDATA_RXRAWDATA_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_RXRAWDATA      */

/* Bit fields for FRC PAUSEDATA */
#define _FRC_PAUSEDATA_RESETVALUE                          0x00000000UL                            /**< Default value for FRC_PAUSEDATA             */
#define _FRC_PAUSEDATA_MASK                                0xFFFFFFFFUL                            /**< Mask for FRC_PAUSEDATA                      */
#define _FRC_PAUSEDATA_PAUSEDATA_SHIFT                     0                                       /**< Shift value for FRC_PAUSEDATA               */
#define _FRC_PAUSEDATA_PAUSEDATA_MASK                      0xFFFFFFFFUL                            /**< Bit mask for FRC_PAUSEDATA                  */
#define _FRC_PAUSEDATA_PAUSEDATA_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for FRC_PAUSEDATA              */
#define FRC_PAUSEDATA_PAUSEDATA_DEFAULT                    (_FRC_PAUSEDATA_PAUSEDATA_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_PAUSEDATA      */

/* Bit fields for FRC LIKELYCONVSTATE */
#define _FRC_LIKELYCONVSTATE_RESETVALUE                    0x00000000UL                                        /**< Default value for FRC_LIKELYCONVSTATE       */
#define _FRC_LIKELYCONVSTATE_MASK                          0x0000003FUL                                        /**< Mask for FRC_LIKELYCONVSTATE                */
#define _FRC_LIKELYCONVSTATE_LIKELYCONVSTATE_SHIFT         0                                                   /**< Shift value for FRC_LIKELYCONVSTATE         */
#define _FRC_LIKELYCONVSTATE_LIKELYCONVSTATE_MASK          0x3FUL                                              /**< Bit mask for FRC_LIKELYCONVSTATE            */
#define _FRC_LIKELYCONVSTATE_LIKELYCONVSTATE_DEFAULT       0x00000000UL                                        /**< Mode DEFAULT for FRC_LIKELYCONVSTATE        */
#define FRC_LIKELYCONVSTATE_LIKELYCONVSTATE_DEFAULT        (_FRC_LIKELYCONVSTATE_LIKELYCONVSTATE_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_LIKELYCONVSTATE*/

/* Bit fields for FRC INTELEMENTNEXT */
#define _FRC_INTELEMENTNEXT_RESETVALUE                     0x00000000UL                                      /**< Default value for FRC_INTELEMENTNEXT        */
#define _FRC_INTELEMENTNEXT_MASK                           0x000000FFUL                                      /**< Mask for FRC_INTELEMENTNEXT                 */
#define _FRC_INTELEMENTNEXT_INTELEMENTNEXT_SHIFT           0                                                 /**< Shift value for FRC_INTELEMENTNEXT          */
#define _FRC_INTELEMENTNEXT_INTELEMENTNEXT_MASK            0xFFUL                                            /**< Bit mask for FRC_INTELEMENTNEXT             */
#define _FRC_INTELEMENTNEXT_INTELEMENTNEXT_DEFAULT         0x00000000UL                                      /**< Mode DEFAULT for FRC_INTELEMENTNEXT         */
#define FRC_INTELEMENTNEXT_INTELEMENTNEXT_DEFAULT          (_FRC_INTELEMENTNEXT_INTELEMENTNEXT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_INTELEMENTNEXT */

/* Bit fields for FRC INTWRITEPOINT */
#define _FRC_INTWRITEPOINT_RESETVALUE                      0x00000000UL                                    /**< Default value for FRC_INTWRITEPOINT         */
#define _FRC_INTWRITEPOINT_MASK                            0x0000001FUL                                    /**< Mask for FRC_INTWRITEPOINT                  */
#define _FRC_INTWRITEPOINT_INTWRITEPOINT_SHIFT             0                                               /**< Shift value for FRC_INTWRITEPOINT           */
#define _FRC_INTWRITEPOINT_INTWRITEPOINT_MASK              0x1FUL                                          /**< Bit mask for FRC_INTWRITEPOINT              */
#define _FRC_INTWRITEPOINT_INTWRITEPOINT_DEFAULT           0x00000000UL                                    /**< Mode DEFAULT for FRC_INTWRITEPOINT          */
#define FRC_INTWRITEPOINT_INTWRITEPOINT_DEFAULT            (_FRC_INTWRITEPOINT_INTWRITEPOINT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_INTWRITEPOINT  */

/* Bit fields for FRC INTREADPOINT */
#define _FRC_INTREADPOINT_RESETVALUE                       0x00000000UL                                  /**< Default value for FRC_INTREADPOINT          */
#define _FRC_INTREADPOINT_MASK                             0x0000001FUL                                  /**< Mask for FRC_INTREADPOINT                   */
#define _FRC_INTREADPOINT_INTREADPOINT_SHIFT               0                                             /**< Shift value for FRC_INTREADPOINT            */
#define _FRC_INTREADPOINT_INTREADPOINT_MASK                0x1FUL                                        /**< Bit mask for FRC_INTREADPOINT               */
#define _FRC_INTREADPOINT_INTREADPOINT_DEFAULT             0x00000000UL                                  /**< Mode DEFAULT for FRC_INTREADPOINT           */
#define FRC_INTREADPOINT_INTREADPOINT_DEFAULT              (_FRC_INTREADPOINT_INTREADPOINT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_INTREADPOINT   */

/* Bit fields for FRC AUTOCG */
#define _FRC_AUTOCG_RESETVALUE                             0x00000000UL                        /**< Default value for FRC_AUTOCG                */
#define _FRC_AUTOCG_MASK                                   0x0000FFFFUL                        /**< Mask for FRC_AUTOCG                         */
#define _FRC_AUTOCG_AUTOCGEN_SHIFT                         0                                   /**< Shift value for FRC_AUTOCGEN                */
#define _FRC_AUTOCG_AUTOCGEN_MASK                          0xFFFFUL                            /**< Bit mask for FRC_AUTOCGEN                   */
#define _FRC_AUTOCG_AUTOCGEN_DEFAULT                       0x00000000UL                        /**< Mode DEFAULT for FRC_AUTOCG                 */
#define FRC_AUTOCG_AUTOCGEN_DEFAULT                        (_FRC_AUTOCG_AUTOCGEN_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_AUTOCG         */

/* Bit fields for FRC CGCLKSTOP */
#define _FRC_CGCLKSTOP_RESETVALUE                          0x00000000UL                           /**< Default value for FRC_CGCLKSTOP             */
#define _FRC_CGCLKSTOP_MASK                                0x0000FFFFUL                           /**< Mask for FRC_CGCLKSTOP                      */
#define _FRC_CGCLKSTOP_FORCEOFF_SHIFT                      0                                      /**< Shift value for FRC_FORCEOFF                */
#define _FRC_CGCLKSTOP_FORCEOFF_MASK                       0xFFFFUL                               /**< Bit mask for FRC_FORCEOFF                   */
#define _FRC_CGCLKSTOP_FORCEOFF_DEFAULT                    0x00000000UL                           /**< Mode DEFAULT for FRC_CGCLKSTOP              */
#define FRC_CGCLKSTOP_FORCEOFF_DEFAULT                     (_FRC_CGCLKSTOP_FORCEOFF_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_CGCLKSTOP      */

/* Bit fields for FRC RAMBASEADDR */
#define _FRC_RAMBASEADDR_RESETVALUE                        0xA0002000UL                                 /**< Default value for FRC_RAMBASEADDR           */
#define _FRC_RAMBASEADDR_MASK                              0xFFFFF000UL                                 /**< Mask for FRC_RAMBASEADDR                    */
#define _FRC_RAMBASEADDR_RAMBASEADDR_SHIFT                 12                                           /**< Shift value for FRC_RAMBASEADDR             */
#define _FRC_RAMBASEADDR_RAMBASEADDR_MASK                  0xFFFFF000UL                                 /**< Bit mask for FRC_RAMBASEADDR                */
#define _FRC_RAMBASEADDR_RAMBASEADDR_DEFAULT               0x000A0002UL                                 /**< Mode DEFAULT for FRC_RAMBASEADDR            */
#define FRC_RAMBASEADDR_RAMBASEADDR_DEFAULT                (_FRC_RAMBASEADDR_RAMBASEADDR_DEFAULT << 12) /**< Shifted mode DEFAULT for FRC_RAMBASEADDR    */

/* Bit fields for FRC FCD */
#define _FRC_FCD_RESETVALUE                                0x000000FFUL                                 /**< Default value for FRC_FCD                   */
#define _FRC_FCD_MASK                                      0x0001FFFFUL                                 /**< Mask for FRC_FCD                            */
#define _FRC_FCD_WORDS_SHIFT                               0                                            /**< Shift value for FRC_WORDS                   */
#define _FRC_FCD_WORDS_MASK                                0xFFUL                                       /**< Bit mask for FRC_WORDS                      */
#define _FRC_FCD_WORDS_DEFAULT                             0x000000FFUL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_WORDS_DEFAULT                              (_FRC_FCD_WORDS_DEFAULT << 0)                /**< Shifted mode DEFAULT for FRC_FCD            */
#define _FRC_FCD_BUFFER_SHIFT                              8                                            /**< Shift value for FRC_BUFFER                  */
#define _FRC_FCD_BUFFER_MASK                               0x300UL                                      /**< Bit mask for FRC_BUFFER                     */
#define _FRC_FCD_BUFFER_DEFAULT                            0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_BUFFER_DEFAULT                             (_FRC_FCD_BUFFER_DEFAULT << 8)               /**< Shifted mode DEFAULT for FRC_FCD            */
#define FRC_FCD_INCLUDECRC                                 (0x1UL << 10)                                /**< Include CRC                                 */
#define _FRC_FCD_INCLUDECRC_SHIFT                          10                                           /**< Shift value for FRC_INCLUDECRC              */
#define _FRC_FCD_INCLUDECRC_MASK                           0x400UL                                      /**< Bit mask for FRC_INCLUDECRC                 */
#define _FRC_FCD_INCLUDECRC_DEFAULT                        0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_INCLUDECRC_DEFAULT                         (_FRC_FCD_INCLUDECRC_DEFAULT << 10)          /**< Shifted mode DEFAULT for FRC_FCD            */
#define FRC_FCD_CALCCRC                                    (0x1UL << 11)                                /**< Calculate CRC                               */
#define _FRC_FCD_CALCCRC_SHIFT                             11                                           /**< Shift value for FRC_CALCCRC                 */
#define _FRC_FCD_CALCCRC_MASK                              0x800UL                                      /**< Bit mask for FRC_CALCCRC                    */
#define _FRC_FCD_CALCCRC_DEFAULT                           0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_CALCCRC_DEFAULT                            (_FRC_FCD_CALCCRC_DEFAULT << 11)             /**< Shifted mode DEFAULT for FRC_FCD            */
#define _FRC_FCD_SKIPCRC_SHIFT                             12                                           /**< Shift value for FRC_SKIPCRC                 */
#define _FRC_FCD_SKIPCRC_MASK                              0x3000UL                                     /**< Bit mask for FRC_SKIPCRC                    */
#define _FRC_FCD_SKIPCRC_DEFAULT                           0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_SKIPCRC_DEFAULT                            (_FRC_FCD_SKIPCRC_DEFAULT << 12)             /**< Shifted mode DEFAULT for FRC_FCD            */
#define FRC_FCD_SKIPWHITE                                  (0x1UL << 14)                                /**< Skip data whitening in this subframe        */
#define _FRC_FCD_SKIPWHITE_SHIFT                           14                                           /**< Shift value for FRC_SKIPWHITE               */
#define _FRC_FCD_SKIPWHITE_MASK                            0x4000UL                                     /**< Bit mask for FRC_SKIPWHITE                  */
#define _FRC_FCD_SKIPWHITE_DEFAULT                         0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_SKIPWHITE_DEFAULT                          (_FRC_FCD_SKIPWHITE_DEFAULT << 14)           /**< Shifted mode DEFAULT for FRC_FCD            */
#define FRC_FCD_ADDTRAILTXDATA                             (0x1UL << 15)                                /**< Add trailing TX data in this subframe       */
#define _FRC_FCD_ADDTRAILTXDATA_SHIFT                      15                                           /**< Shift value for FRC_ADDTRAILTXDATA          */
#define _FRC_FCD_ADDTRAILTXDATA_MASK                       0x8000UL                                     /**< Bit mask for FRC_ADDTRAILTXDATA             */
#define _FRC_FCD_ADDTRAILTXDATA_DEFAULT                    0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_ADDTRAILTXDATA_DEFAULT                     (_FRC_FCD_ADDTRAILTXDATA_DEFAULT << 15)      /**< Shifted mode DEFAULT for FRC_FCD            */
#define FRC_FCD_EXCLUDESUBFRAMEWCNT                        (0x1UL << 16)                                /**< Exclude subframe from WCNT                  */
#define _FRC_FCD_EXCLUDESUBFRAMEWCNT_SHIFT                 16                                           /**< Shift value for FRC_EXCLUDESUBFRAMEWCNT     */
#define _FRC_FCD_EXCLUDESUBFRAMEWCNT_MASK                  0x10000UL                                    /**< Bit mask for FRC_EXCLUDESUBFRAMEWCNT        */
#define _FRC_FCD_EXCLUDESUBFRAMEWCNT_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for FRC_FCD                    */
#define FRC_FCD_EXCLUDESUBFRAMEWCNT_DEFAULT                (_FRC_FCD_EXCLUDESUBFRAMEWCNT_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_FCD            */

/* Bit fields for FRC INTELEMENT */
#define _FRC_INTELEMENT_RESETVALUE                         0x00000000UL                              /**< Default value for FRC_INTELEMENT            */
#define _FRC_INTELEMENT_MASK                               0x000000FFUL                              /**< Mask for FRC_INTELEMENT                     */
#define _FRC_INTELEMENT_INTELEMENT_SHIFT                   0                                         /**< Shift value for FRC_INTELEMENT              */
#define _FRC_INTELEMENT_INTELEMENT_MASK                    0xFFUL                                    /**< Bit mask for FRC_INTELEMENT                 */
#define _FRC_INTELEMENT_INTELEMENT_DEFAULT                 0x00000000UL                              /**< Mode DEFAULT for FRC_INTELEMENT             */
#define FRC_INTELEMENT_INTELEMENT_DEFAULT                  (_FRC_INTELEMENT_INTELEMENT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_INTELEMENT     */

/** @} End of group EFR32MG21_FRC_BitFields */
/** @} End of group EFR32MG21_FRC */
/** @} End of group Parts */
#endif /* EFR32MG21_FRC_H */
