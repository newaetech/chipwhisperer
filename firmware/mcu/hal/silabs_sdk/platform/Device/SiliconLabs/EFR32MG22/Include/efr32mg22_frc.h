/**************************************************************************//**
 * @file
 * @brief EFR32MG22 FRC register and bit field definitions
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
#ifndef EFR32MG22_FRC_H
#define EFR32MG22_FRC_H
#define FRC_HAS_SET_CLEAR

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG22_FRC FRC
 * @{
 * @brief EFR32MG22 FRC Register Declaration.
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
  __IM uint32_t          OTACNT;                /**< Over the air number of bits counter                */
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
  uint32_t               RESERVED2[1U];         /**< Reserved for future use                            */
  __IOM uint32_t         SEQIF;                 /**< SEQ Frame Controller Interrupt Flags               */
  __IOM uint32_t         SEQIEN;                /**< SEQ Interrupt Enable Register                      */
  __IOM uint32_t         WCNTCMP3;              /**< Word Counter Compare 3                             */
  __IOM uint32_t         BOICTRL;               /**< Bit of Interest Control                            */
  __IOM uint32_t         DSLCTRL;               /**< Dynamic Supp Length Control                        */
  __IOM uint32_t         WCNTCMP4;              /**< Word Counter Compare 4                             */
  __IOM uint32_t         PKTBUFCTRL;            /**< Packet Capture Buffer Ctrl                         */
  __IM uint32_t          PKTBUFSTATUS;          /**< Packet Capture Buffer Status                       */
  __IM uint32_t          PKTBUF0;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF1;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF2;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF3;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF4;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF5;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF6;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF7;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF8;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF9;               /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF10;              /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF11;              /**< Packet Capture Data Buffer                         */
  FRC_FCD_TypeDef        FCD[4U];               /**< Frame Descriptors                                  */
  uint32_t               RESERVED3[3U];         /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT[16U];       /**< Interleaver element                                */
  uint32_t               RESERVED4[936U];       /**< Reserved for future use                            */
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
  __IM uint32_t          OTACNT_SET;            /**< Over the air number of bits counter                */
  uint32_t               RESERVED5[1U];         /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE_SET;        /**< FRC Buffer Control                                 */
  uint32_t               RESERVED6[2U];         /**< Reserved for future use                            */
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
  uint32_t               RESERVED7[1U];         /**< Reserved for future use                            */
  __IOM uint32_t         SEQIF_SET;             /**< SEQ Frame Controller Interrupt Flags               */
  __IOM uint32_t         SEQIEN_SET;            /**< SEQ Interrupt Enable Register                      */
  __IOM uint32_t         WCNTCMP3_SET;          /**< Word Counter Compare 3                             */
  __IOM uint32_t         BOICTRL_SET;           /**< Bit of Interest Control                            */
  __IOM uint32_t         DSLCTRL_SET;           /**< Dynamic Supp Length Control                        */
  __IOM uint32_t         WCNTCMP4_SET;          /**< Word Counter Compare 4                             */
  __IOM uint32_t         PKTBUFCTRL_SET;        /**< Packet Capture Buffer Ctrl                         */
  __IM uint32_t          PKTBUFSTATUS_SET;      /**< Packet Capture Buffer Status                       */
  __IM uint32_t          PKTBUF0_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF1_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF2_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF3_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF4_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF5_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF6_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF7_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF8_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF9_SET;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF10_SET;          /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF11_SET;          /**< Packet Capture Data Buffer                         */
  FRC_FCD_TypeDef        FCD_SET[4U];           /**< Frame Descriptors                                  */
  uint32_t               RESERVED8[3U];         /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT_SET[16U];   /**< Interleaver element                                */
  uint32_t               RESERVED9[936U];       /**< Reserved for future use                            */
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
  __IM uint32_t          OTACNT_CLR;            /**< Over the air number of bits counter                */
  uint32_t               RESERVED10[1U];        /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE_CLR;        /**< FRC Buffer Control                                 */
  uint32_t               RESERVED11[2U];        /**< Reserved for future use                            */
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
  uint32_t               RESERVED12[1U];        /**< Reserved for future use                            */
  __IOM uint32_t         SEQIF_CLR;             /**< SEQ Frame Controller Interrupt Flags               */
  __IOM uint32_t         SEQIEN_CLR;            /**< SEQ Interrupt Enable Register                      */
  __IOM uint32_t         WCNTCMP3_CLR;          /**< Word Counter Compare 3                             */
  __IOM uint32_t         BOICTRL_CLR;           /**< Bit of Interest Control                            */
  __IOM uint32_t         DSLCTRL_CLR;           /**< Dynamic Supp Length Control                        */
  __IOM uint32_t         WCNTCMP4_CLR;          /**< Word Counter Compare 4                             */
  __IOM uint32_t         PKTBUFCTRL_CLR;        /**< Packet Capture Buffer Ctrl                         */
  __IM uint32_t          PKTBUFSTATUS_CLR;      /**< Packet Capture Buffer Status                       */
  __IM uint32_t          PKTBUF0_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF1_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF2_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF3_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF4_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF5_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF6_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF7_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF8_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF9_CLR;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF10_CLR;          /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF11_CLR;          /**< Packet Capture Data Buffer                         */
  FRC_FCD_TypeDef        FCD_CLR[4U];           /**< Frame Descriptors                                  */
  uint32_t               RESERVED13[3U];        /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT_CLR[16U];   /**< Interleaver element                                */
  uint32_t               RESERVED14[936U];      /**< Reserved for future use                            */
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
  __IM uint32_t          OTACNT_TGL;            /**< Over the air number of bits counter                */
  uint32_t               RESERVED15[1U];        /**< Reserved for future use                            */
  __IOM uint32_t         BUFFERMODE_TGL;        /**< FRC Buffer Control                                 */
  uint32_t               RESERVED16[2U];        /**< Reserved for future use                            */
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
  uint32_t               RESERVED17[1U];        /**< Reserved for future use                            */
  __IOM uint32_t         SEQIF_TGL;             /**< SEQ Frame Controller Interrupt Flags               */
  __IOM uint32_t         SEQIEN_TGL;            /**< SEQ Interrupt Enable Register                      */
  __IOM uint32_t         WCNTCMP3_TGL;          /**< Word Counter Compare 3                             */
  __IOM uint32_t         BOICTRL_TGL;           /**< Bit of Interest Control                            */
  __IOM uint32_t         DSLCTRL_TGL;           /**< Dynamic Supp Length Control                        */
  __IOM uint32_t         WCNTCMP4_TGL;          /**< Word Counter Compare 4                             */
  __IOM uint32_t         PKTBUFCTRL_TGL;        /**< Packet Capture Buffer Ctrl                         */
  __IM uint32_t          PKTBUFSTATUS_TGL;      /**< Packet Capture Buffer Status                       */
  __IM uint32_t          PKTBUF0_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF1_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF2_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF3_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF4_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF5_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF6_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF7_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF8_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF9_TGL;           /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF10_TGL;          /**< Packet Capture Data Buffer                         */
  __IM uint32_t          PKTBUF11_TGL;          /**< Packet Capture Data Buffer                         */
  FRC_FCD_TypeDef        FCD_TGL[4U];           /**< Frame Descriptors                                  */
  uint32_t               RESERVED18[3U];        /**< Reserved for future use                            */
  FRC_INTELEMENT_TypeDef INTELEMENT_TGL[16U];   /**< Interleaver element                                */
} FRC_TypeDef;
/** @} End of group EFR32MG22_FRC */

/**************************************************************************//**
 * @addtogroup EFR32MG22_FRC
 * @{
 * @defgroup EFR32MG22_FRC_BitFields FRC Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for FRC IPVERSION */
#define _FRC_IPVERSION_RESETVALUE                          0x00000001UL                            /**< Default value for FRC_IPVERSION             */
#define _FRC_IPVERSION_MASK                                0xFFFFFFFFUL                            /**< Mask for FRC_IPVERSION                      */
#define _FRC_IPVERSION_IPVERSION_SHIFT                     0                                       /**< Shift value for FRC_IPVERSION               */
#define _FRC_IPVERSION_IPVERSION_MASK                      0xFFFFFFFFUL                            /**< Bit mask for FRC_IPVERSION                  */
#define _FRC_IPVERSION_IPVERSION_DEFAULT                   0x00000001UL                            /**< Mode DEFAULT for FRC_IPVERSION              */
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
#define _FRC_STATUS_MASK                                   0x01FFFFFFUL                                      /**< Mask for FRC_STATUS                         */
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
#define _FRC_STATUS_FSMSTATE_SHIFT                         20                                                /**< Shift value for FRC_FSMSTATE                */
#define _FRC_STATUS_FSMSTATE_MASK                          0x1F00000UL                                       /**< Bit mask for FRC_FSMSTATE                   */
#define _FRC_STATUS_FSMSTATE_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_IDLE                          0x00000000UL                                      /**< Mode IDLE for FRC_STATUS                    */
#define _FRC_STATUS_FSMSTATE_RX_INIT                       0x00000001UL                                      /**< Mode RX_INIT for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_RX_DATA                       0x00000002UL                                      /**< Mode RX_DATA for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_RX_CRC                        0x00000003UL                                      /**< Mode RX_CRC for FRC_STATUS                  */
#define _FRC_STATUS_FSMSTATE_RX_FCD_UPDATE                 0x00000004UL                                      /**< Mode RX_FCD_UPDATE for FRC_STATUS           */
#define _FRC_STATUS_FSMSTATE_RX_DISCARD                    0x00000005UL                                      /**< Mode RX_DISCARD for FRC_STATUS              */
#define _FRC_STATUS_FSMSTATE_RX_TRAIL                      0x00000006UL                                      /**< Mode RX_TRAIL for FRC_STATUS                */
#define _FRC_STATUS_FSMSTATE_RX_DONE                       0x00000007UL                                      /**< Mode RX_DONE for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_RX_PAUSE_INIT                 0x00000008UL                                      /**< Mode RX_PAUSE_INIT for FRC_STATUS           */
#define _FRC_STATUS_FSMSTATE_RX_PAUSED                     0x00000009UL                                      /**< Mode RX_PAUSED for FRC_STATUS               */
#define _FRC_STATUS_FSMSTATE_UNDEFINED1                    0x0000000AUL                                      /**< Mode UNDEFINED1 for FRC_STATUS              */
#define _FRC_STATUS_FSMSTATE_UNDEFINED2                    0x0000000BUL                                      /**< Mode UNDEFINED2 for FRC_STATUS              */
#define _FRC_STATUS_FSMSTATE_RX_CRC_ZEROCHECK              0x0000000CUL                                      /**< Mode RX_CRC_ZEROCHECK for FRC_STATUS        */
#define _FRC_STATUS_FSMSTATE_RX_SUP                        0x0000000DUL                                      /**< Mode RX_SUP for FRC_STATUS                  */
#define _FRC_STATUS_FSMSTATE_RX_WAITEOF                    0x0000000EUL                                      /**< Mode RX_WAITEOF for FRC_STATUS              */
#define _FRC_STATUS_FSMSTATE_UNDEFINED3                    0x0000000FUL                                      /**< Mode UNDEFINED3 for FRC_STATUS              */
#define _FRC_STATUS_FSMSTATE_TX_INIT                       0x00000010UL                                      /**< Mode TX_INIT for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_TX_DATA                       0x00000011UL                                      /**< Mode TX_DATA for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_TX_CRC                        0x00000012UL                                      /**< Mode TX_CRC for FRC_STATUS                  */
#define _FRC_STATUS_FSMSTATE_TX_FCD_UPDATE                 0x00000013UL                                      /**< Mode TX_FCD_UPDATE for FRC_STATUS           */
#define _FRC_STATUS_FSMSTATE_TX_TRAIL                      0x00000014UL                                      /**< Mode TX_TRAIL for FRC_STATUS                */
#define _FRC_STATUS_FSMSTATE_TX_FLUSH                      0x00000015UL                                      /**< Mode TX_FLUSH for FRC_STATUS                */
#define _FRC_STATUS_FSMSTATE_TX_DONE                       0x00000016UL                                      /**< Mode TX_DONE for FRC_STATUS                 */
#define _FRC_STATUS_FSMSTATE_TX_DONE_WAIT                  0x00000017UL                                      /**< Mode TX_DONE_WAIT for FRC_STATUS            */
#define _FRC_STATUS_FSMSTATE_TX_RAW                        0x00000018UL                                      /**< Mode TX_RAW for FRC_STATUS                  */
#define _FRC_STATUS_FSMSTATE_TX_PAUSEFLUSH                 0x00000019UL                                      /**< Mode TX_PAUSEFLUSH for FRC_STATUS           */
#define FRC_STATUS_FSMSTATE_DEFAULT                        (_FRC_STATUS_FSMSTATE_DEFAULT << 20)              /**< Shifted mode DEFAULT for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_IDLE                           (_FRC_STATUS_FSMSTATE_IDLE << 20)                 /**< Shifted mode IDLE for FRC_STATUS            */
#define FRC_STATUS_FSMSTATE_RX_INIT                        (_FRC_STATUS_FSMSTATE_RX_INIT << 20)              /**< Shifted mode RX_INIT for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_RX_DATA                        (_FRC_STATUS_FSMSTATE_RX_DATA << 20)              /**< Shifted mode RX_DATA for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_RX_CRC                         (_FRC_STATUS_FSMSTATE_RX_CRC << 20)               /**< Shifted mode RX_CRC for FRC_STATUS          */
#define FRC_STATUS_FSMSTATE_RX_FCD_UPDATE                  (_FRC_STATUS_FSMSTATE_RX_FCD_UPDATE << 20)        /**< Shifted mode RX_FCD_UPDATE for FRC_STATUS   */
#define FRC_STATUS_FSMSTATE_RX_DISCARD                     (_FRC_STATUS_FSMSTATE_RX_DISCARD << 20)           /**< Shifted mode RX_DISCARD for FRC_STATUS      */
#define FRC_STATUS_FSMSTATE_RX_TRAIL                       (_FRC_STATUS_FSMSTATE_RX_TRAIL << 20)             /**< Shifted mode RX_TRAIL for FRC_STATUS        */
#define FRC_STATUS_FSMSTATE_RX_DONE                        (_FRC_STATUS_FSMSTATE_RX_DONE << 20)              /**< Shifted mode RX_DONE for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_RX_PAUSE_INIT                  (_FRC_STATUS_FSMSTATE_RX_PAUSE_INIT << 20)        /**< Shifted mode RX_PAUSE_INIT for FRC_STATUS   */
#define FRC_STATUS_FSMSTATE_RX_PAUSED                      (_FRC_STATUS_FSMSTATE_RX_PAUSED << 20)            /**< Shifted mode RX_PAUSED for FRC_STATUS       */
#define FRC_STATUS_FSMSTATE_UNDEFINED1                     (_FRC_STATUS_FSMSTATE_UNDEFINED1 << 20)           /**< Shifted mode UNDEFINED1 for FRC_STATUS      */
#define FRC_STATUS_FSMSTATE_UNDEFINED2                     (_FRC_STATUS_FSMSTATE_UNDEFINED2 << 20)           /**< Shifted mode UNDEFINED2 for FRC_STATUS      */
#define FRC_STATUS_FSMSTATE_RX_CRC_ZEROCHECK               (_FRC_STATUS_FSMSTATE_RX_CRC_ZEROCHECK << 20)     /**< Shifted mode RX_CRC_ZEROCHECK for FRC_STATUS*/
#define FRC_STATUS_FSMSTATE_RX_SUP                         (_FRC_STATUS_FSMSTATE_RX_SUP << 20)               /**< Shifted mode RX_SUP for FRC_STATUS          */
#define FRC_STATUS_FSMSTATE_RX_WAITEOF                     (_FRC_STATUS_FSMSTATE_RX_WAITEOF << 20)           /**< Shifted mode RX_WAITEOF for FRC_STATUS      */
#define FRC_STATUS_FSMSTATE_UNDEFINED3                     (_FRC_STATUS_FSMSTATE_UNDEFINED3 << 20)           /**< Shifted mode UNDEFINED3 for FRC_STATUS      */
#define FRC_STATUS_FSMSTATE_TX_INIT                        (_FRC_STATUS_FSMSTATE_TX_INIT << 20)              /**< Shifted mode TX_INIT for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_TX_DATA                        (_FRC_STATUS_FSMSTATE_TX_DATA << 20)              /**< Shifted mode TX_DATA for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_TX_CRC                         (_FRC_STATUS_FSMSTATE_TX_CRC << 20)               /**< Shifted mode TX_CRC for FRC_STATUS          */
#define FRC_STATUS_FSMSTATE_TX_FCD_UPDATE                  (_FRC_STATUS_FSMSTATE_TX_FCD_UPDATE << 20)        /**< Shifted mode TX_FCD_UPDATE for FRC_STATUS   */
#define FRC_STATUS_FSMSTATE_TX_TRAIL                       (_FRC_STATUS_FSMSTATE_TX_TRAIL << 20)             /**< Shifted mode TX_TRAIL for FRC_STATUS        */
#define FRC_STATUS_FSMSTATE_TX_FLUSH                       (_FRC_STATUS_FSMSTATE_TX_FLUSH << 20)             /**< Shifted mode TX_FLUSH for FRC_STATUS        */
#define FRC_STATUS_FSMSTATE_TX_DONE                        (_FRC_STATUS_FSMSTATE_TX_DONE << 20)              /**< Shifted mode TX_DONE for FRC_STATUS         */
#define FRC_STATUS_FSMSTATE_TX_DONE_WAIT                   (_FRC_STATUS_FSMSTATE_TX_DONE_WAIT << 20)         /**< Shifted mode TX_DONE_WAIT for FRC_STATUS    */
#define FRC_STATUS_FSMSTATE_TX_RAW                         (_FRC_STATUS_FSMSTATE_TX_RAW << 20)               /**< Shifted mode TX_RAW for FRC_STATUS          */
#define FRC_STATUS_FSMSTATE_TX_PAUSEFLUSH                  (_FRC_STATUS_FSMSTATE_TX_PAUSEFLUSH << 20)        /**< Shifted mode TX_PAUSEFLUSH for FRC_STATUS   */

/* Bit fields for FRC DFLCTRL */
#define _FRC_DFLCTRL_RESETVALUE                            0x00000000UL                                 /**< Default value for FRC_DFLCTRL               */
#define _FRC_DFLCTRL_MASK                                  0x01FFFF7FUL                                 /**< Mask for FRC_DFLCTRL                        */
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
#define _FRC_DFLCTRL_DFLBOIOFFSET_SHIFT                    21                                           /**< Shift value for FRC_DFLBOIOFFSET            */
#define _FRC_DFLCTRL_DFLBOIOFFSET_MASK                     0x1E00000UL                                  /**< Bit mask for FRC_DFLBOIOFFSET               */
#define _FRC_DFLCTRL_DFLBOIOFFSET_DEFAULT                  0x00000000UL                                 /**< Mode DEFAULT for FRC_DFLCTRL                */
#define FRC_DFLCTRL_DFLBOIOFFSET_DEFAULT                   (_FRC_DFLCTRL_DFLBOIOFFSET_DEFAULT << 21)    /**< Shifted mode DEFAULT for FRC_DFLCTRL        */

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
#define _FRC_BLOCKRAMADDR_RESETVALUE                       0x00004000UL                                  /**< Default value for FRC_BLOCKRAMADDR          */
#define _FRC_BLOCKRAMADDR_MASK                             0xFFFFFFFCUL                                  /**< Mask for FRC_BLOCKRAMADDR                   */
#define _FRC_BLOCKRAMADDR_BLOCKRAMADDR_SHIFT               2                                             /**< Shift value for FRC_BLOCKRAMADDR            */
#define _FRC_BLOCKRAMADDR_BLOCKRAMADDR_MASK                0xFFFFFFFCUL                                  /**< Bit mask for FRC_BLOCKRAMADDR               */
#define _FRC_BLOCKRAMADDR_BLOCKRAMADDR_DEFAULT             0x00001000UL                                  /**< Mode DEFAULT for FRC_BLOCKRAMADDR           */
#define FRC_BLOCKRAMADDR_BLOCKRAMADDR_DEFAULT              (_FRC_BLOCKRAMADDR_BLOCKRAMADDR_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_BLOCKRAMADDR   */

/* Bit fields for FRC CONVRAMADDR */
#define _FRC_CONVRAMADDR_RESETVALUE                        0x00004000UL                                /**< Default value for FRC_CONVRAMADDR           */
#define _FRC_CONVRAMADDR_MASK                              0xFFFFFFFCUL                                /**< Mask for FRC_CONVRAMADDR                    */
#define _FRC_CONVRAMADDR_CONVRAMADDR_SHIFT                 2                                           /**< Shift value for FRC_CONVRAMADDR             */
#define _FRC_CONVRAMADDR_CONVRAMADDR_MASK                  0xFFFFFFFCUL                                /**< Bit mask for FRC_CONVRAMADDR                */
#define _FRC_CONVRAMADDR_CONVRAMADDR_DEFAULT               0x00001000UL                                /**< Mode DEFAULT for FRC_CONVRAMADDR            */
#define FRC_CONVRAMADDR_CONVRAMADDR_DEFAULT                (_FRC_CONVRAMADDR_CONVRAMADDR_DEFAULT << 2) /**< Shifted mode DEFAULT for FRC_CONVRAMADDR    */

/* Bit fields for FRC CTRL */
#define _FRC_CTRL_RESETVALUE                               0x00000700UL                               /**< Default value for FRC_CTRL                  */
#define _FRC_CTRL_MASK                                     0x001F3FF7UL                               /**< Mask for FRC_CTRL                           */
#define FRC_CTRL_RANDOMTX                                  (0x1UL << 0)                               /**< Random TX Mode                              */
#define _FRC_CTRL_RANDOMTX_SHIFT                           0                                          /**< Shift value for FRC_RANDOMTX                */
#define _FRC_CTRL_RANDOMTX_MASK                            0x1UL                                      /**< Bit mask for FRC_RANDOMTX                   */
#define _FRC_CTRL_RANDOMTX_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_RANDOMTX_DEFAULT                          (_FRC_CTRL_RANDOMTX_DEFAULT << 0)          /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_UARTMODE                                  (0x1UL << 1)                               /**< Data Uart Mode                              */
#define _FRC_CTRL_UARTMODE_SHIFT                           1                                          /**< Shift value for FRC_UARTMODE                */
#define _FRC_CTRL_UARTMODE_MASK                            0x2UL                                      /**< Bit mask for FRC_UARTMODE                   */
#define _FRC_CTRL_UARTMODE_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_UARTMODE_DEFAULT                          (_FRC_CTRL_UARTMODE_DEFAULT << 1)          /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_BITORDER                                  (0x1UL << 2)                               /**< Data Bit Order.                             */
#define _FRC_CTRL_BITORDER_SHIFT                           2                                          /**< Shift value for FRC_BITORDER                */
#define _FRC_CTRL_BITORDER_MASK                            0x4UL                                      /**< Bit mask for FRC_BITORDER                   */
#define _FRC_CTRL_BITORDER_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_BITORDER_LSBFIRST                        0x00000000UL                               /**< Mode LSBFIRST for FRC_CTRL                  */
#define _FRC_CTRL_BITORDER_MSBFIRST                        0x00000001UL                               /**< Mode MSBFIRST for FRC_CTRL                  */
#define FRC_CTRL_BITORDER_DEFAULT                          (_FRC_CTRL_BITORDER_DEFAULT << 2)          /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_BITORDER_LSBFIRST                         (_FRC_CTRL_BITORDER_LSBFIRST << 2)         /**< Shifted mode LSBFIRST for FRC_CTRL          */
#define FRC_CTRL_BITORDER_MSBFIRST                         (_FRC_CTRL_BITORDER_MSBFIRST << 2)         /**< Shifted mode MSBFIRST for FRC_CTRL          */
#define _FRC_CTRL_TXFCDMODE_SHIFT                          4                                          /**< Shift value for FRC_TXFCDMODE               */
#define _FRC_CTRL_TXFCDMODE_MASK                           0x30UL                                     /**< Bit mask for FRC_TXFCDMODE                  */
#define _FRC_CTRL_TXFCDMODE_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_TXFCDMODE_FCDMODE0                       0x00000000UL                               /**< Mode FCDMODE0 for FRC_CTRL                  */
#define _FRC_CTRL_TXFCDMODE_FCDMODE1                       0x00000001UL                               /**< Mode FCDMODE1 for FRC_CTRL                  */
#define _FRC_CTRL_TXFCDMODE_FCDMODE2                       0x00000002UL                               /**< Mode FCDMODE2 for FRC_CTRL                  */
#define _FRC_CTRL_TXFCDMODE_FCDMODE3                       0x00000003UL                               /**< Mode FCDMODE3 for FRC_CTRL                  */
#define FRC_CTRL_TXFCDMODE_DEFAULT                         (_FRC_CTRL_TXFCDMODE_DEFAULT << 4)         /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_TXFCDMODE_FCDMODE0                        (_FRC_CTRL_TXFCDMODE_FCDMODE0 << 4)        /**< Shifted mode FCDMODE0 for FRC_CTRL          */
#define FRC_CTRL_TXFCDMODE_FCDMODE1                        (_FRC_CTRL_TXFCDMODE_FCDMODE1 << 4)        /**< Shifted mode FCDMODE1 for FRC_CTRL          */
#define FRC_CTRL_TXFCDMODE_FCDMODE2                        (_FRC_CTRL_TXFCDMODE_FCDMODE2 << 4)        /**< Shifted mode FCDMODE2 for FRC_CTRL          */
#define FRC_CTRL_TXFCDMODE_FCDMODE3                        (_FRC_CTRL_TXFCDMODE_FCDMODE3 << 4)        /**< Shifted mode FCDMODE3 for FRC_CTRL          */
#define _FRC_CTRL_RXFCDMODE_SHIFT                          6                                          /**< Shift value for FRC_RXFCDMODE               */
#define _FRC_CTRL_RXFCDMODE_MASK                           0xC0UL                                     /**< Bit mask for FRC_RXFCDMODE                  */
#define _FRC_CTRL_RXFCDMODE_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_RXFCDMODE_FCDMODE0                       0x00000000UL                               /**< Mode FCDMODE0 for FRC_CTRL                  */
#define _FRC_CTRL_RXFCDMODE_FCDMODE1                       0x00000001UL                               /**< Mode FCDMODE1 for FRC_CTRL                  */
#define _FRC_CTRL_RXFCDMODE_FCDMODE2                       0x00000002UL                               /**< Mode FCDMODE2 for FRC_CTRL                  */
#define _FRC_CTRL_RXFCDMODE_FCDMODE3                       0x00000003UL                               /**< Mode FCDMODE3 for FRC_CTRL                  */
#define FRC_CTRL_RXFCDMODE_DEFAULT                         (_FRC_CTRL_RXFCDMODE_DEFAULT << 6)         /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_RXFCDMODE_FCDMODE0                        (_FRC_CTRL_RXFCDMODE_FCDMODE0 << 6)        /**< Shifted mode FCDMODE0 for FRC_CTRL          */
#define FRC_CTRL_RXFCDMODE_FCDMODE1                        (_FRC_CTRL_RXFCDMODE_FCDMODE1 << 6)        /**< Shifted mode FCDMODE1 for FRC_CTRL          */
#define FRC_CTRL_RXFCDMODE_FCDMODE2                        (_FRC_CTRL_RXFCDMODE_FCDMODE2 << 6)        /**< Shifted mode FCDMODE2 for FRC_CTRL          */
#define FRC_CTRL_RXFCDMODE_FCDMODE3                        (_FRC_CTRL_RXFCDMODE_FCDMODE3 << 6)        /**< Shifted mode FCDMODE3 for FRC_CTRL          */
#define _FRC_CTRL_BITSPERWORD_SHIFT                        8                                          /**< Shift value for FRC_BITSPERWORD             */
#define _FRC_CTRL_BITSPERWORD_MASK                         0x700UL                                    /**< Bit mask for FRC_BITSPERWORD                */
#define _FRC_CTRL_BITSPERWORD_DEFAULT                      0x00000007UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_BITSPERWORD_DEFAULT                       (_FRC_CTRL_BITSPERWORD_DEFAULT << 8)       /**< Shifted mode DEFAULT for FRC_CTRL           */
#define _FRC_CTRL_RATESELECT_SHIFT                         11                                         /**< Shift value for FRC_RATESELECT              */
#define _FRC_CTRL_RATESELECT_MASK                          0x1800UL                                   /**< Bit mask for FRC_RATESELECT                 */
#define _FRC_CTRL_RATESELECT_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_RATESELECT_DEFAULT                        (_FRC_CTRL_RATESELECT_DEFAULT << 11)       /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_TXPREFETCH                                (0x1UL << 13)                              /**< Transmit prefetch data                      */
#define _FRC_CTRL_TXPREFETCH_SHIFT                         13                                         /**< Shift value for FRC_TXPREFETCH              */
#define _FRC_CTRL_TXPREFETCH_MASK                          0x2000UL                                   /**< Bit mask for FRC_TXPREFETCH                 */
#define _FRC_CTRL_TXPREFETCH_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_TXPREFETCH_X0                            0x00000000UL                               /**< Mode X0 for FRC_CTRL                        */
#define _FRC_CTRL_TXPREFETCH_X1                            0x00000001UL                               /**< Mode X1 for FRC_CTRL                        */
#define FRC_CTRL_TXPREFETCH_DEFAULT                        (_FRC_CTRL_TXPREFETCH_DEFAULT << 13)       /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_TXPREFETCH_X0                             (_FRC_CTRL_TXPREFETCH_X0 << 13)            /**< Shifted mode X0 for FRC_CTRL                */
#define FRC_CTRL_TXPREFETCH_X1                             (_FRC_CTRL_TXPREFETCH_X1 << 13)            /**< Shifted mode X1 for FRC_CTRL                */
#define FRC_CTRL_SEQHANDSHAKE                              (0x1UL << 16)                              /**< Sequencer data handshake                    */
#define _FRC_CTRL_SEQHANDSHAKE_SHIFT                       16                                         /**< Shift value for FRC_SEQHANDSHAKE            */
#define _FRC_CTRL_SEQHANDSHAKE_MASK                        0x10000UL                                  /**< Bit mask for FRC_SEQHANDSHAKE               */
#define _FRC_CTRL_SEQHANDSHAKE_DEFAULT                     0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define _FRC_CTRL_SEQHANDSHAKE_X0                          0x00000000UL                               /**< Mode X0 for FRC_CTRL                        */
#define _FRC_CTRL_SEQHANDSHAKE_X1                          0x00000001UL                               /**< Mode X1 for FRC_CTRL                        */
#define FRC_CTRL_SEQHANDSHAKE_DEFAULT                      (_FRC_CTRL_SEQHANDSHAKE_DEFAULT << 16)     /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_SEQHANDSHAKE_X0                           (_FRC_CTRL_SEQHANDSHAKE_X0 << 16)          /**< Shifted mode X0 for FRC_CTRL                */
#define FRC_CTRL_SEQHANDSHAKE_X1                           (_FRC_CTRL_SEQHANDSHAKE_X1 << 16)          /**< Shifted mode X1 for FRC_CTRL                */
#define FRC_CTRL_PRBSTEST                                  (0x1UL << 17)                              /**< Pseudo-Random Bit Sequence Testmode         */
#define _FRC_CTRL_PRBSTEST_SHIFT                           17                                         /**< Shift value for FRC_PRBSTEST                */
#define _FRC_CTRL_PRBSTEST_MASK                            0x20000UL                                  /**< Bit mask for FRC_PRBSTEST                   */
#define _FRC_CTRL_PRBSTEST_DEFAULT                         0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_PRBSTEST_DEFAULT                          (_FRC_CTRL_PRBSTEST_DEFAULT << 17)         /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_LPMODEDIS                                 (0x1UL << 18)                              /**< Disable FRC low power                       */
#define _FRC_CTRL_LPMODEDIS_SHIFT                          18                                         /**< Shift value for FRC_LPMODEDIS               */
#define _FRC_CTRL_LPMODEDIS_MASK                           0x40000UL                                  /**< Bit mask for FRC_LPMODEDIS                  */
#define _FRC_CTRL_LPMODEDIS_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_LPMODEDIS_DEFAULT                         (_FRC_CTRL_LPMODEDIS_DEFAULT << 18)        /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_WAITEOFEN                                 (0x1UL << 19)                              /**< Enable STATE_TX_WAITEOF                     */
#define _FRC_CTRL_WAITEOFEN_SHIFT                          19                                         /**< Shift value for FRC_WAITEOFEN               */
#define _FRC_CTRL_WAITEOFEN_MASK                           0x80000UL                                  /**< Bit mask for FRC_WAITEOFEN                  */
#define _FRC_CTRL_WAITEOFEN_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_WAITEOFEN_DEFAULT                         (_FRC_CTRL_WAITEOFEN_DEFAULT << 19)        /**< Shifted mode DEFAULT for FRC_CTRL           */
#define FRC_CTRL_RXABORTIGNOREDIS                          (0x1UL << 20)                              /**< Disable ignoring CMD_RXABORT                */
#define _FRC_CTRL_RXABORTIGNOREDIS_SHIFT                   20                                         /**< Shift value for FRC_RXABORTIGNOREDIS        */
#define _FRC_CTRL_RXABORTIGNOREDIS_MASK                    0x100000UL                                 /**< Bit mask for FRC_RXABORTIGNOREDIS           */
#define _FRC_CTRL_RXABORTIGNOREDIS_DEFAULT                 0x00000000UL                               /**< Mode DEFAULT for FRC_CTRL                   */
#define FRC_CTRL_RXABORTIGNOREDIS_DEFAULT                  (_FRC_CTRL_RXABORTIGNOREDIS_DEFAULT << 20) /**< Shifted mode DEFAULT for FRC_CTRL           */

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
#define _FRC_TRAILTXDATACTRL_MASK                          0x007FFFFFUL                                          /**< Mask for FRC_TRAILTXDATACTRL                */
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
#define _FRC_TRAILTXDATACTRL_TRAILTXREPLEN_SHIFT           12                                                    /**< Shift value for FRC_TRAILTXREPLEN           */
#define _FRC_TRAILTXDATACTRL_TRAILTXREPLEN_MASK            0x3FF000UL                                            /**< Bit mask for FRC_TRAILTXREPLEN              */
#define _FRC_TRAILTXDATACTRL_TRAILTXREPLEN_DEFAULT         0x00000000UL                                          /**< Mode DEFAULT for FRC_TRAILTXDATACTRL        */
#define FRC_TRAILTXDATACTRL_TRAILTXREPLEN_DEFAULT          (_FRC_TRAILTXDATACTRL_TRAILTXREPLEN_DEFAULT << 12)    /**< Shifted mode DEFAULT for FRC_TRAILTXDATACTRL*/
#define FRC_TRAILTXDATACTRL_TXSUPPLENOVERIDE               (0x1UL << 22)                                         /**< TX Sup Len Override                         */
#define _FRC_TRAILTXDATACTRL_TXSUPPLENOVERIDE_SHIFT        22                                                    /**< Shift value for FRC_TXSUPPLENOVERIDE        */
#define _FRC_TRAILTXDATACTRL_TXSUPPLENOVERIDE_MASK         0x400000UL                                            /**< Bit mask for FRC_TXSUPPLENOVERIDE           */
#define _FRC_TRAILTXDATACTRL_TXSUPPLENOVERIDE_DEFAULT      0x00000000UL                                          /**< Mode DEFAULT for FRC_TRAILTXDATACTRL        */
#define FRC_TRAILTXDATACTRL_TXSUPPLENOVERIDE_DEFAULT       (_FRC_TRAILTXDATACTRL_TXSUPPLENOVERIDE_DEFAULT << 22) /**< Shifted mode DEFAULT for FRC_TRAILTXDATACTRL*/

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
#define _FRC_IF_MASK                                       0x7F7FFFFFUL                                  /**< Mask for FRC_IF                             */
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
#define FRC_IF_WCNTCMP3                                    (0x1UL << 17)                                 /**< Word Counter Compare 3 Event                */
#define _FRC_IF_WCNTCMP3_SHIFT                             17                                            /**< Shift value for FRC_WCNTCMP3                */
#define _FRC_IF_WCNTCMP3_MASK                              0x20000UL                                     /**< Bit mask for FRC_WCNTCMP3                   */
#define _FRC_IF_WCNTCMP3_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_WCNTCMP3_DEFAULT                            (_FRC_IF_WCNTCMP3_DEFAULT << 17)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_WCNTCMP4                                    (0x1UL << 18)                                 /**< Word Counter Compare 4 Event                */
#define _FRC_IF_WCNTCMP4_SHIFT                             18                                            /**< Shift value for FRC_WCNTCMP4                */
#define _FRC_IF_WCNTCMP4_MASK                              0x40000UL                                     /**< Bit mask for FRC_WCNTCMP4                   */
#define _FRC_IF_WCNTCMP4_DEFAULT                           0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_WCNTCMP4_DEFAULT                            (_FRC_IF_WCNTCMP4_DEFAULT << 18)              /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_BOISET                                      (0x1UL << 19)                                 /**< BOI SET                                     */
#define _FRC_IF_BOISET_SHIFT                               19                                            /**< Shift value for FRC_BOISET                  */
#define _FRC_IF_BOISET_MASK                                0x80000UL                                     /**< Bit mask for FRC_BOISET                     */
#define _FRC_IF_BOISET_DEFAULT                             0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_BOISET_DEFAULT                              (_FRC_IF_BOISET_DEFAULT << 19)                /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_PKTBUFSTART                                 (0x1UL << 20)                                 /**< Packet Buffer Start                         */
#define _FRC_IF_PKTBUFSTART_SHIFT                          20                                            /**< Shift value for FRC_PKTBUFSTART             */
#define _FRC_IF_PKTBUFSTART_MASK                           0x100000UL                                    /**< Bit mask for FRC_PKTBUFSTART                */
#define _FRC_IF_PKTBUFSTART_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_PKTBUFSTART_DEFAULT                         (_FRC_IF_PKTBUFSTART_DEFAULT << 20)           /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_PKTBUFTHRESHOLD                             (0x1UL << 21)                                 /**< Packet Buffer Threshold                     */
#define _FRC_IF_PKTBUFTHRESHOLD_SHIFT                      21                                            /**< Shift value for FRC_PKTBUFTHRESHOLD         */
#define _FRC_IF_PKTBUFTHRESHOLD_MASK                       0x200000UL                                    /**< Bit mask for FRC_PKTBUFTHRESHOLD            */
#define _FRC_IF_PKTBUFTHRESHOLD_DEFAULT                    0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_PKTBUFTHRESHOLD_DEFAULT                     (_FRC_IF_PKTBUFTHRESHOLD_DEFAULT << 21)       /**< Shifted mode DEFAULT for FRC_IF             */
#define FRC_IF_RXRAWOF                                     (0x1UL << 22)                                 /**< RX raw FIFO overflow                        */
#define _FRC_IF_RXRAWOF_SHIFT                              22                                            /**< Shift value for FRC_RXRAWOF                 */
#define _FRC_IF_RXRAWOF_MASK                               0x400000UL                                    /**< Bit mask for FRC_RXRAWOF                    */
#define _FRC_IF_RXRAWOF_DEFAULT                            0x00000000UL                                  /**< Mode DEFAULT for FRC_IF                     */
#define FRC_IF_RXRAWOF_DEFAULT                             (_FRC_IF_RXRAWOF_DEFAULT << 22)               /**< Shifted mode DEFAULT for FRC_IF             */
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
#define _FRC_IEN_MASK                                      0x7F7FFFFFUL                                   /**< Mask for FRC_IEN                            */
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
#define FRC_IEN_WCNTCMP3                                   (0x1UL << 17)                                  /**< Word Counter Compare 3 Enable               */
#define _FRC_IEN_WCNTCMP3_SHIFT                            17                                             /**< Shift value for FRC_WCNTCMP3                */
#define _FRC_IEN_WCNTCMP3_MASK                             0x20000UL                                      /**< Bit mask for FRC_WCNTCMP3                   */
#define _FRC_IEN_WCNTCMP3_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_WCNTCMP3_DEFAULT                           (_FRC_IEN_WCNTCMP3_DEFAULT << 17)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_WCNTCMP4                                   (0x1UL << 18)                                  /**< Word Counter Compare 4 Enable               */
#define _FRC_IEN_WCNTCMP4_SHIFT                            18                                             /**< Shift value for FRC_WCNTCMP4                */
#define _FRC_IEN_WCNTCMP4_MASK                             0x40000UL                                      /**< Bit mask for FRC_WCNTCMP4                   */
#define _FRC_IEN_WCNTCMP4_DEFAULT                          0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_WCNTCMP4_DEFAULT                           (_FRC_IEN_WCNTCMP4_DEFAULT << 18)              /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_BOISET                                     (0x1UL << 19)                                  /**< BOISET                                      */
#define _FRC_IEN_BOISET_SHIFT                              19                                             /**< Shift value for FRC_BOISET                  */
#define _FRC_IEN_BOISET_MASK                               0x80000UL                                      /**< Bit mask for FRC_BOISET                     */
#define _FRC_IEN_BOISET_DEFAULT                            0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_BOISET_DEFAULT                             (_FRC_IEN_BOISET_DEFAULT << 19)                /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_PKTBUFSTART                                (0x1UL << 20)                                  /**< PKTBUFSTART Enable                          */
#define _FRC_IEN_PKTBUFSTART_SHIFT                         20                                             /**< Shift value for FRC_PKTBUFSTART             */
#define _FRC_IEN_PKTBUFSTART_MASK                          0x100000UL                                     /**< Bit mask for FRC_PKTBUFSTART                */
#define _FRC_IEN_PKTBUFSTART_DEFAULT                       0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_PKTBUFSTART_DEFAULT                        (_FRC_IEN_PKTBUFSTART_DEFAULT << 20)           /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_PKTBUFTHRESHOLD                            (0x1UL << 21)                                  /**< PKTBUFTHRESHOLD Enable                      */
#define _FRC_IEN_PKTBUFTHRESHOLD_SHIFT                     21                                             /**< Shift value for FRC_PKTBUFTHRESHOLD         */
#define _FRC_IEN_PKTBUFTHRESHOLD_MASK                      0x200000UL                                     /**< Bit mask for FRC_PKTBUFTHRESHOLD            */
#define _FRC_IEN_PKTBUFTHRESHOLD_DEFAULT                   0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_PKTBUFTHRESHOLD_DEFAULT                    (_FRC_IEN_PKTBUFTHRESHOLD_DEFAULT << 21)       /**< Shifted mode DEFAULT for FRC_IEN            */
#define FRC_IEN_RXRAWOF                                    (0x1UL << 22)                                  /**< RXRAWOF Enable                              */
#define _FRC_IEN_RXRAWOF_SHIFT                             22                                             /**< Shift value for FRC_RXRAWOF                 */
#define _FRC_IEN_RXRAWOF_MASK                              0x400000UL                                     /**< Bit mask for FRC_RXRAWOF                    */
#define _FRC_IEN_RXRAWOF_DEFAULT                           0x00000000UL                                   /**< Mode DEFAULT for FRC_IEN                    */
#define FRC_IEN_RXRAWOF_DEFAULT                            (_FRC_IEN_RXRAWOF_DEFAULT << 22)               /**< Shifted mode DEFAULT for FRC_IEN            */
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

/* Bit fields for FRC OTACNT */
#define _FRC_OTACNT_RESETVALUE                             0x00000000UL                         /**< Default value for FRC_OTACNT                */
#define _FRC_OTACNT_MASK                                   0xFFFFFFFFUL                         /**< Mask for FRC_OTACNT                         */
#define _FRC_OTACNT_OTARXCNT_SHIFT                         0                                    /**< Shift value for FRC_OTARXCNT                */
#define _FRC_OTACNT_OTARXCNT_MASK                          0xFFFFUL                             /**< Bit mask for FRC_OTARXCNT                   */
#define _FRC_OTACNT_OTARXCNT_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_OTACNT                 */
#define FRC_OTACNT_OTARXCNT_DEFAULT                        (_FRC_OTACNT_OTARXCNT_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_OTACNT         */
#define _FRC_OTACNT_OTATXCNT_SHIFT                         16                                   /**< Shift value for FRC_OTATXCNT                */
#define _FRC_OTACNT_OTATXCNT_MASK                          0xFFFF0000UL                         /**< Bit mask for FRC_OTATXCNT                   */
#define _FRC_OTACNT_OTATXCNT_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_OTACNT                 */
#define FRC_OTACNT_OTATXCNT_DEFAULT                        (_FRC_OTACNT_OTATXCNT_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_OTACNT         */

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
#define _FRC_RAWCTRL_MASK                                  0x000021BFUL                                          /**< Mask for FRC_RAWCTRL                        */
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
#define _FRC_RAWCTRL_RXRAWTRIGGER_SHIFT                    7                                                     /**< Shift value for FRC_RXRAWTRIGGER            */
#define _FRC_RAWCTRL_RXRAWTRIGGER_MASK                     0x180UL                                               /**< Bit mask for FRC_RXRAWTRIGGER               */
#define _FRC_RAWCTRL_RXRAWTRIGGER_DEFAULT                  0x00000000UL                                          /**< Mode DEFAULT for FRC_RAWCTRL                */
#define _FRC_RAWCTRL_RXRAWTRIGGER_IMMEDIATE                0x00000000UL                                          /**< Mode IMMEDIATE for FRC_RAWCTRL              */
#define _FRC_RAWCTRL_RXRAWTRIGGER_PRS                      0x00000001UL                                          /**< Mode PRS for FRC_RAWCTRL                    */
#define _FRC_RAWCTRL_RXRAWTRIGGER_INTERNALSIG              0x00000002UL                                          /**< Mode INTERNALSIG for FRC_RAWCTRL            */
#define FRC_RAWCTRL_RXRAWTRIGGER_DEFAULT                   (_FRC_RAWCTRL_RXRAWTRIGGER_DEFAULT << 7)              /**< Shifted mode DEFAULT for FRC_RAWCTRL        */
#define FRC_RAWCTRL_RXRAWTRIGGER_IMMEDIATE                 (_FRC_RAWCTRL_RXRAWTRIGGER_IMMEDIATE << 7)            /**< Shifted mode IMMEDIATE for FRC_RAWCTRL      */
#define FRC_RAWCTRL_RXRAWTRIGGER_PRS                       (_FRC_RAWCTRL_RXRAWTRIGGER_PRS << 7)                  /**< Shifted mode PRS for FRC_RAWCTRL            */
#define FRC_RAWCTRL_RXRAWTRIGGER_INTERNALSIG               (_FRC_RAWCTRL_RXRAWTRIGGER_INTERNALSIG << 7)          /**< Shifted mode INTERNALSIG for FRC_RAWCTRL    */
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

/* Bit fields for FRC SEQIF */
#define _FRC_SEQIF_RESETVALUE                              0x00000000UL                                     /**< Default value for FRC_SEQIF                 */
#define _FRC_SEQIF_MASK                                    0x7F7FFFFFUL                                     /**< Mask for FRC_SEQIF                          */
#define FRC_SEQIF_TXDONE                                   (0x1UL << 0)                                     /**< TX Done Interrupt Flag                      */
#define _FRC_SEQIF_TXDONE_SHIFT                            0                                                /**< Shift value for FRC_TXDONE                  */
#define _FRC_SEQIF_TXDONE_MASK                             0x1UL                                            /**< Bit mask for FRC_TXDONE                     */
#define _FRC_SEQIF_TXDONE_DEFAULT                          0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXDONE_DEFAULT                           (_FRC_SEQIF_TXDONE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_TXAFTERFRAMEDONE                         (0x1UL << 1)                                     /**< TX after frame Done Interrupt Flag          */
#define _FRC_SEQIF_TXAFTERFRAMEDONE_SHIFT                  1                                                /**< Shift value for FRC_TXAFTERFRAMEDONE        */
#define _FRC_SEQIF_TXAFTERFRAMEDONE_MASK                   0x2UL                                            /**< Bit mask for FRC_TXAFTERFRAMEDONE           */
#define _FRC_SEQIF_TXAFTERFRAMEDONE_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXAFTERFRAMEDONE_DEFAULT                 (_FRC_SEQIF_TXAFTERFRAMEDONE_DEFAULT << 1)       /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_TXABORTED                                (0x1UL << 2)                                     /**< Transmit Aborted Interrupt Flag             */
#define _FRC_SEQIF_TXABORTED_SHIFT                         2                                                /**< Shift value for FRC_TXABORTED               */
#define _FRC_SEQIF_TXABORTED_MASK                          0x4UL                                            /**< Bit mask for FRC_TXABORTED                  */
#define _FRC_SEQIF_TXABORTED_DEFAULT                       0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXABORTED_DEFAULT                        (_FRC_SEQIF_TXABORTED_DEFAULT << 2)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_TXUF                                     (0x1UL << 3)                                     /**< Transmit Underflow Interrupt Flag           */
#define _FRC_SEQIF_TXUF_SHIFT                              3                                                /**< Shift value for FRC_TXUF                    */
#define _FRC_SEQIF_TXUF_MASK                               0x8UL                                            /**< Bit mask for FRC_TXUF                       */
#define _FRC_SEQIF_TXUF_DEFAULT                            0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXUF_DEFAULT                             (_FRC_SEQIF_TXUF_DEFAULT << 3)                   /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_RXDONE                                   (0x1UL << 4)                                     /**< RX Done Interrupt Flag                      */
#define _FRC_SEQIF_RXDONE_SHIFT                            4                                                /**< Shift value for FRC_RXDONE                  */
#define _FRC_SEQIF_RXDONE_MASK                             0x10UL                                           /**< Bit mask for FRC_RXDONE                     */
#define _FRC_SEQIF_RXDONE_DEFAULT                          0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_RXDONE_DEFAULT                           (_FRC_SEQIF_RXDONE_DEFAULT << 4)                 /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_RXABORTED                                (0x1UL << 5)                                     /**< RX Aborted Interrupt Flag                   */
#define _FRC_SEQIF_RXABORTED_SHIFT                         5                                                /**< Shift value for FRC_RXABORTED               */
#define _FRC_SEQIF_RXABORTED_MASK                          0x20UL                                           /**< Bit mask for FRC_RXABORTED                  */
#define _FRC_SEQIF_RXABORTED_DEFAULT                       0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_RXABORTED_DEFAULT                        (_FRC_SEQIF_RXABORTED_DEFAULT << 5)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_FRAMEERROR                               (0x1UL << 6)                                     /**< Frame Error Interrupt Flag                  */
#define _FRC_SEQIF_FRAMEERROR_SHIFT                        6                                                /**< Shift value for FRC_FRAMEERROR              */
#define _FRC_SEQIF_FRAMEERROR_MASK                         0x40UL                                           /**< Bit mask for FRC_FRAMEERROR                 */
#define _FRC_SEQIF_FRAMEERROR_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_FRAMEERROR_DEFAULT                       (_FRC_SEQIF_FRAMEERROR_DEFAULT << 6)             /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_BLOCKERROR                               (0x1UL << 7)                                     /**< Block Error Interrupt Flag                  */
#define _FRC_SEQIF_BLOCKERROR_SHIFT                        7                                                /**< Shift value for FRC_BLOCKERROR              */
#define _FRC_SEQIF_BLOCKERROR_MASK                         0x80UL                                           /**< Bit mask for FRC_BLOCKERROR                 */
#define _FRC_SEQIF_BLOCKERROR_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_BLOCKERROR_DEFAULT                       (_FRC_SEQIF_BLOCKERROR_DEFAULT << 7)             /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_RXOF                                     (0x1UL << 8)                                     /**< Receive Overflow Interrupt Flag             */
#define _FRC_SEQIF_RXOF_SHIFT                              8                                                /**< Shift value for FRC_RXOF                    */
#define _FRC_SEQIF_RXOF_MASK                               0x100UL                                          /**< Bit mask for FRC_RXOF                       */
#define _FRC_SEQIF_RXOF_DEFAULT                            0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_RXOF_DEFAULT                             (_FRC_SEQIF_RXOF_DEFAULT << 8)                   /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_WCNTCMP0                                 (0x1UL << 9)                                     /**< Word Counter Compare 0 Event                */
#define _FRC_SEQIF_WCNTCMP0_SHIFT                          9                                                /**< Shift value for FRC_WCNTCMP0                */
#define _FRC_SEQIF_WCNTCMP0_MASK                           0x200UL                                          /**< Bit mask for FRC_WCNTCMP0                   */
#define _FRC_SEQIF_WCNTCMP0_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_WCNTCMP0_DEFAULT                         (_FRC_SEQIF_WCNTCMP0_DEFAULT << 9)               /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_WCNTCMP1                                 (0x1UL << 10)                                    /**< Word Counter Compare 1 Event                */
#define _FRC_SEQIF_WCNTCMP1_SHIFT                          10                                               /**< Shift value for FRC_WCNTCMP1                */
#define _FRC_SEQIF_WCNTCMP1_MASK                           0x400UL                                          /**< Bit mask for FRC_WCNTCMP1                   */
#define _FRC_SEQIF_WCNTCMP1_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_WCNTCMP1_DEFAULT                         (_FRC_SEQIF_WCNTCMP1_DEFAULT << 10)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_WCNTCMP2                                 (0x1UL << 11)                                    /**< Word Counter Compare 2 Event                */
#define _FRC_SEQIF_WCNTCMP2_SHIFT                          11                                               /**< Shift value for FRC_WCNTCMP2                */
#define _FRC_SEQIF_WCNTCMP2_MASK                           0x800UL                                          /**< Bit mask for FRC_WCNTCMP2                   */
#define _FRC_SEQIF_WCNTCMP2_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_WCNTCMP2_DEFAULT                         (_FRC_SEQIF_WCNTCMP2_DEFAULT << 11)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_ADDRERROR                                (0x1UL << 12)                                    /**< Receive address error event                 */
#define _FRC_SEQIF_ADDRERROR_SHIFT                         12                                               /**< Shift value for FRC_ADDRERROR               */
#define _FRC_SEQIF_ADDRERROR_MASK                          0x1000UL                                         /**< Bit mask for FRC_ADDRERROR                  */
#define _FRC_SEQIF_ADDRERROR_DEFAULT                       0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_ADDRERROR_DEFAULT                        (_FRC_SEQIF_ADDRERROR_DEFAULT << 12)             /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_BUSERROR                                 (0x1UL << 13)                                    /**< A bus error event occurred                  */
#define _FRC_SEQIF_BUSERROR_SHIFT                          13                                               /**< Shift value for FRC_BUSERROR                */
#define _FRC_SEQIF_BUSERROR_MASK                           0x2000UL                                         /**< Bit mask for FRC_BUSERROR                   */
#define _FRC_SEQIF_BUSERROR_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_BUSERROR_DEFAULT                         (_FRC_SEQIF_BUSERROR_DEFAULT << 13)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_RXRAWEVENT                               (0x1UL << 14)                                    /**< Receiver raw data event                     */
#define _FRC_SEQIF_RXRAWEVENT_SHIFT                        14                                               /**< Shift value for FRC_RXRAWEVENT              */
#define _FRC_SEQIF_RXRAWEVENT_MASK                         0x4000UL                                         /**< Bit mask for FRC_RXRAWEVENT                 */
#define _FRC_SEQIF_RXRAWEVENT_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_RXRAWEVENT_DEFAULT                       (_FRC_SEQIF_RXRAWEVENT_DEFAULT << 14)            /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_TXRAWEVENT                               (0x1UL << 15)                                    /**< Transmit raw data event                     */
#define _FRC_SEQIF_TXRAWEVENT_SHIFT                        15                                               /**< Shift value for FRC_TXRAWEVENT              */
#define _FRC_SEQIF_TXRAWEVENT_MASK                         0x8000UL                                         /**< Bit mask for FRC_TXRAWEVENT                 */
#define _FRC_SEQIF_TXRAWEVENT_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXRAWEVENT_DEFAULT                       (_FRC_SEQIF_TXRAWEVENT_DEFAULT << 15)            /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_SNIFFOF                                  (0x1UL << 16)                                    /**< Data sniffer overflow                       */
#define _FRC_SEQIF_SNIFFOF_SHIFT                           16                                               /**< Shift value for FRC_SNIFFOF                 */
#define _FRC_SEQIF_SNIFFOF_MASK                            0x10000UL                                        /**< Bit mask for FRC_SNIFFOF                    */
#define _FRC_SEQIF_SNIFFOF_DEFAULT                         0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_SNIFFOF_DEFAULT                          (_FRC_SEQIF_SNIFFOF_DEFAULT << 16)               /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_WCNTCMP3                                 (0x1UL << 17)                                    /**< Word Counter Compare 3 Event                */
#define _FRC_SEQIF_WCNTCMP3_SHIFT                          17                                               /**< Shift value for FRC_WCNTCMP3                */
#define _FRC_SEQIF_WCNTCMP3_MASK                           0x20000UL                                        /**< Bit mask for FRC_WCNTCMP3                   */
#define _FRC_SEQIF_WCNTCMP3_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_WCNTCMP3_DEFAULT                         (_FRC_SEQIF_WCNTCMP3_DEFAULT << 17)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_WCNTCMP4                                 (0x1UL << 18)                                    /**< Word Counter Compare 4 Event                */
#define _FRC_SEQIF_WCNTCMP4_SHIFT                          18                                               /**< Shift value for FRC_WCNTCMP4                */
#define _FRC_SEQIF_WCNTCMP4_MASK                           0x40000UL                                        /**< Bit mask for FRC_WCNTCMP4                   */
#define _FRC_SEQIF_WCNTCMP4_DEFAULT                        0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_WCNTCMP4_DEFAULT                         (_FRC_SEQIF_WCNTCMP4_DEFAULT << 18)              /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_BOISET                                   (0x1UL << 19)                                    /**< BOISET Event                                */
#define _FRC_SEQIF_BOISET_SHIFT                            19                                               /**< Shift value for FRC_BOISET                  */
#define _FRC_SEQIF_BOISET_MASK                             0x80000UL                                        /**< Bit mask for FRC_BOISET                     */
#define _FRC_SEQIF_BOISET_DEFAULT                          0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_BOISET_DEFAULT                           (_FRC_SEQIF_BOISET_DEFAULT << 19)                /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_PKTBUFSTART                              (0x1UL << 20)                                    /**< Packet Buffer Start                         */
#define _FRC_SEQIF_PKTBUFSTART_SHIFT                       20                                               /**< Shift value for FRC_PKTBUFSTART             */
#define _FRC_SEQIF_PKTBUFSTART_MASK                        0x100000UL                                       /**< Bit mask for FRC_PKTBUFSTART                */
#define _FRC_SEQIF_PKTBUFSTART_DEFAULT                     0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_PKTBUFSTART_DEFAULT                      (_FRC_SEQIF_PKTBUFSTART_DEFAULT << 20)           /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_PKTBUFTHRESHOLD                          (0x1UL << 21)                                    /**< Packet Buffer Threshold                     */
#define _FRC_SEQIF_PKTBUFTHRESHOLD_SHIFT                   21                                               /**< Shift value for FRC_PKTBUFTHRESHOLD         */
#define _FRC_SEQIF_PKTBUFTHRESHOLD_MASK                    0x200000UL                                       /**< Bit mask for FRC_PKTBUFTHRESHOLD            */
#define _FRC_SEQIF_PKTBUFTHRESHOLD_DEFAULT                 0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_PKTBUFTHRESHOLD_DEFAULT                  (_FRC_SEQIF_PKTBUFTHRESHOLD_DEFAULT << 21)       /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_RXRAWOF                                  (0x1UL << 22)                                    /**< RX raw FIFO overflow                        */
#define _FRC_SEQIF_RXRAWOF_SHIFT                           22                                               /**< Shift value for FRC_RXRAWOF                 */
#define _FRC_SEQIF_RXRAWOF_MASK                            0x400000UL                                       /**< Bit mask for FRC_RXRAWOF                    */
#define _FRC_SEQIF_RXRAWOF_DEFAULT                         0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_RXRAWOF_DEFAULT                          (_FRC_SEQIF_RXRAWOF_DEFAULT << 22)               /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_FRAMEDETPAUSED                           (0x1UL << 24)                                    /**< Frame detected pause event active           */
#define _FRC_SEQIF_FRAMEDETPAUSED_SHIFT                    24                                               /**< Shift value for FRC_FRAMEDETPAUSED          */
#define _FRC_SEQIF_FRAMEDETPAUSED_MASK                     0x1000000UL                                      /**< Bit mask for FRC_FRAMEDETPAUSED             */
#define _FRC_SEQIF_FRAMEDETPAUSED_DEFAULT                  0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_FRAMEDETPAUSED_DEFAULT                   (_FRC_SEQIF_FRAMEDETPAUSED_DEFAULT << 24)        /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_INTERLEAVEWRITEPAUSED                    (0x1UL << 25)                                    /**< Interleaver write pause event active        */
#define _FRC_SEQIF_INTERLEAVEWRITEPAUSED_SHIFT             25                                               /**< Shift value for FRC_INTERLEAVEWRITEPAUSED   */
#define _FRC_SEQIF_INTERLEAVEWRITEPAUSED_MASK              0x2000000UL                                      /**< Bit mask for FRC_INTERLEAVEWRITEPAUSED      */
#define _FRC_SEQIF_INTERLEAVEWRITEPAUSED_DEFAULT           0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_INTERLEAVEWRITEPAUSED_DEFAULT            (_FRC_SEQIF_INTERLEAVEWRITEPAUSED_DEFAULT << 25) /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_INTERLEAVEREADPAUSED                     (0x1UL << 26)                                    /**< Interleaver read pause event active         */
#define _FRC_SEQIF_INTERLEAVEREADPAUSED_SHIFT              26                                               /**< Shift value for FRC_INTERLEAVEREADPAUSED    */
#define _FRC_SEQIF_INTERLEAVEREADPAUSED_MASK               0x4000000UL                                      /**< Bit mask for FRC_INTERLEAVEREADPAUSED       */
#define _FRC_SEQIF_INTERLEAVEREADPAUSED_DEFAULT            0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_INTERLEAVEREADPAUSED_DEFAULT             (_FRC_SEQIF_INTERLEAVEREADPAUSED_DEFAULT << 26)  /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_TXSUBFRAMEPAUSED                         (0x1UL << 27)                                    /**< Transmit subframe pause event active        */
#define _FRC_SEQIF_TXSUBFRAMEPAUSED_SHIFT                  27                                               /**< Shift value for FRC_TXSUBFRAMEPAUSED        */
#define _FRC_SEQIF_TXSUBFRAMEPAUSED_MASK                   0x8000000UL                                      /**< Bit mask for FRC_TXSUBFRAMEPAUSED           */
#define _FRC_SEQIF_TXSUBFRAMEPAUSED_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXSUBFRAMEPAUSED_DEFAULT                 (_FRC_SEQIF_TXSUBFRAMEPAUSED_DEFAULT << 27)      /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_CONVPAUSED                               (0x1UL << 28)                                    /**< Convolutional coder pause event active      */
#define _FRC_SEQIF_CONVPAUSED_SHIFT                        28                                               /**< Shift value for FRC_CONVPAUSED              */
#define _FRC_SEQIF_CONVPAUSED_MASK                         0x10000000UL                                     /**< Bit mask for FRC_CONVPAUSED                 */
#define _FRC_SEQIF_CONVPAUSED_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_CONVPAUSED_DEFAULT                       (_FRC_SEQIF_CONVPAUSED_DEFAULT << 28)            /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_RXWORD                                   (0x1UL << 29)                                    /**< Receive Word Interrupt Flag                 */
#define _FRC_SEQIF_RXWORD_SHIFT                            29                                               /**< Shift value for FRC_RXWORD                  */
#define _FRC_SEQIF_RXWORD_MASK                             0x20000000UL                                     /**< Bit mask for FRC_RXWORD                     */
#define _FRC_SEQIF_RXWORD_DEFAULT                          0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_RXWORD_DEFAULT                           (_FRC_SEQIF_RXWORD_DEFAULT << 29)                /**< Shifted mode DEFAULT for FRC_SEQIF          */
#define FRC_SEQIF_TXWORD                                   (0x1UL << 30)                                    /**< Transmit Word Interrupt Flag                */
#define _FRC_SEQIF_TXWORD_SHIFT                            30                                               /**< Shift value for FRC_TXWORD                  */
#define _FRC_SEQIF_TXWORD_MASK                             0x40000000UL                                     /**< Bit mask for FRC_TXWORD                     */
#define _FRC_SEQIF_TXWORD_DEFAULT                          0x00000000UL                                     /**< Mode DEFAULT for FRC_SEQIF                  */
#define FRC_SEQIF_TXWORD_DEFAULT                           (_FRC_SEQIF_TXWORD_DEFAULT << 30)                /**< Shifted mode DEFAULT for FRC_SEQIF          */

/* Bit fields for FRC SEQIEN */
#define _FRC_SEQIEN_RESETVALUE                             0x00000000UL                                      /**< Default value for FRC_SEQIEN                */
#define _FRC_SEQIEN_MASK                                   0x7F7FFFFFUL                                      /**< Mask for FRC_SEQIEN                         */
#define FRC_SEQIEN_TXDONE                                  (0x1UL << 0)                                      /**< TX Done Interrupt Enable                    */
#define _FRC_SEQIEN_TXDONE_SHIFT                           0                                                 /**< Shift value for FRC_TXDONE                  */
#define _FRC_SEQIEN_TXDONE_MASK                            0x1UL                                             /**< Bit mask for FRC_TXDONE                     */
#define _FRC_SEQIEN_TXDONE_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXDONE_DEFAULT                          (_FRC_SEQIEN_TXDONE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_TXAFTERFRAMEDONE                        (0x1UL << 1)                                      /**< TX after frame Done Interrupt Enable        */
#define _FRC_SEQIEN_TXAFTERFRAMEDONE_SHIFT                 1                                                 /**< Shift value for FRC_TXAFTERFRAMEDONE        */
#define _FRC_SEQIEN_TXAFTERFRAMEDONE_MASK                  0x2UL                                             /**< Bit mask for FRC_TXAFTERFRAMEDONE           */
#define _FRC_SEQIEN_TXAFTERFRAMEDONE_DEFAULT               0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXAFTERFRAMEDONE_DEFAULT                (_FRC_SEQIEN_TXAFTERFRAMEDONE_DEFAULT << 1)       /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_TXABORTED                               (0x1UL << 2)                                      /**< Transmit Aborted Interrupt Enable           */
#define _FRC_SEQIEN_TXABORTED_SHIFT                        2                                                 /**< Shift value for FRC_TXABORTED               */
#define _FRC_SEQIEN_TXABORTED_MASK                         0x4UL                                             /**< Bit mask for FRC_TXABORTED                  */
#define _FRC_SEQIEN_TXABORTED_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXABORTED_DEFAULT                       (_FRC_SEQIEN_TXABORTED_DEFAULT << 2)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_TXUF                                    (0x1UL << 3)                                      /**< Transmit Underflow Interrupt Enable         */
#define _FRC_SEQIEN_TXUF_SHIFT                             3                                                 /**< Shift value for FRC_TXUF                    */
#define _FRC_SEQIEN_TXUF_MASK                              0x8UL                                             /**< Bit mask for FRC_TXUF                       */
#define _FRC_SEQIEN_TXUF_DEFAULT                           0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXUF_DEFAULT                            (_FRC_SEQIEN_TXUF_DEFAULT << 3)                   /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_RXDONE                                  (0x1UL << 4)                                      /**< RX Done Interrupt Enable                    */
#define _FRC_SEQIEN_RXDONE_SHIFT                           4                                                 /**< Shift value for FRC_RXDONE                  */
#define _FRC_SEQIEN_RXDONE_MASK                            0x10UL                                            /**< Bit mask for FRC_RXDONE                     */
#define _FRC_SEQIEN_RXDONE_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_RXDONE_DEFAULT                          (_FRC_SEQIEN_RXDONE_DEFAULT << 4)                 /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_RXABORTED                               (0x1UL << 5)                                      /**< RX Aborted Interrupt Enable                 */
#define _FRC_SEQIEN_RXABORTED_SHIFT                        5                                                 /**< Shift value for FRC_RXABORTED               */
#define _FRC_SEQIEN_RXABORTED_MASK                         0x20UL                                            /**< Bit mask for FRC_RXABORTED                  */
#define _FRC_SEQIEN_RXABORTED_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_RXABORTED_DEFAULT                       (_FRC_SEQIEN_RXABORTED_DEFAULT << 5)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_FRAMEERROR                              (0x1UL << 6)                                      /**< Frame Error Interrupt Enable                */
#define _FRC_SEQIEN_FRAMEERROR_SHIFT                       6                                                 /**< Shift value for FRC_FRAMEERROR              */
#define _FRC_SEQIEN_FRAMEERROR_MASK                        0x40UL                                            /**< Bit mask for FRC_FRAMEERROR                 */
#define _FRC_SEQIEN_FRAMEERROR_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_FRAMEERROR_DEFAULT                      (_FRC_SEQIEN_FRAMEERROR_DEFAULT << 6)             /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_BLOCKERROR                              (0x1UL << 7)                                      /**< Block Error Interrupt Enable                */
#define _FRC_SEQIEN_BLOCKERROR_SHIFT                       7                                                 /**< Shift value for FRC_BLOCKERROR              */
#define _FRC_SEQIEN_BLOCKERROR_MASK                        0x80UL                                            /**< Bit mask for FRC_BLOCKERROR                 */
#define _FRC_SEQIEN_BLOCKERROR_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_BLOCKERROR_DEFAULT                      (_FRC_SEQIEN_BLOCKERROR_DEFAULT << 7)             /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_RXOF                                    (0x1UL << 8)                                      /**< Receive Overflow Interrupt Enable           */
#define _FRC_SEQIEN_RXOF_SHIFT                             8                                                 /**< Shift value for FRC_RXOF                    */
#define _FRC_SEQIEN_RXOF_MASK                              0x100UL                                           /**< Bit mask for FRC_RXOF                       */
#define _FRC_SEQIEN_RXOF_DEFAULT                           0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_RXOF_DEFAULT                            (_FRC_SEQIEN_RXOF_DEFAULT << 8)                   /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_WCNTCMP0                                (0x1UL << 9)                                      /**< Word Counter Compare 0 Enable               */
#define _FRC_SEQIEN_WCNTCMP0_SHIFT                         9                                                 /**< Shift value for FRC_WCNTCMP0                */
#define _FRC_SEQIEN_WCNTCMP0_MASK                          0x200UL                                           /**< Bit mask for FRC_WCNTCMP0                   */
#define _FRC_SEQIEN_WCNTCMP0_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_WCNTCMP0_DEFAULT                        (_FRC_SEQIEN_WCNTCMP0_DEFAULT << 9)               /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_WCNTCMP1                                (0x1UL << 10)                                     /**< Word Counter Compare 1 Enable               */
#define _FRC_SEQIEN_WCNTCMP1_SHIFT                         10                                                /**< Shift value for FRC_WCNTCMP1                */
#define _FRC_SEQIEN_WCNTCMP1_MASK                          0x400UL                                           /**< Bit mask for FRC_WCNTCMP1                   */
#define _FRC_SEQIEN_WCNTCMP1_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_WCNTCMP1_DEFAULT                        (_FRC_SEQIEN_WCNTCMP1_DEFAULT << 10)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_WCNTCMP2                                (0x1UL << 11)                                     /**< Word Counter Compare 2 Enable               */
#define _FRC_SEQIEN_WCNTCMP2_SHIFT                         11                                                /**< Shift value for FRC_WCNTCMP2                */
#define _FRC_SEQIEN_WCNTCMP2_MASK                          0x800UL                                           /**< Bit mask for FRC_WCNTCMP2                   */
#define _FRC_SEQIEN_WCNTCMP2_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_WCNTCMP2_DEFAULT                        (_FRC_SEQIEN_WCNTCMP2_DEFAULT << 11)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_ADDRERROR                               (0x1UL << 12)                                     /**< Receive address error enable                */
#define _FRC_SEQIEN_ADDRERROR_SHIFT                        12                                                /**< Shift value for FRC_ADDRERROR               */
#define _FRC_SEQIEN_ADDRERROR_MASK                         0x1000UL                                          /**< Bit mask for FRC_ADDRERROR                  */
#define _FRC_SEQIEN_ADDRERROR_DEFAULT                      0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_ADDRERROR_DEFAULT                       (_FRC_SEQIEN_ADDRERROR_DEFAULT << 12)             /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_BUSERROR                                (0x1UL << 13)                                     /**< Bus error enable                            */
#define _FRC_SEQIEN_BUSERROR_SHIFT                         13                                                /**< Shift value for FRC_BUSERROR                */
#define _FRC_SEQIEN_BUSERROR_MASK                          0x2000UL                                          /**< Bit mask for FRC_BUSERROR                   */
#define _FRC_SEQIEN_BUSERROR_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_BUSERROR_DEFAULT                        (_FRC_SEQIEN_BUSERROR_DEFAULT << 13)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_RXRAWEVENT                              (0x1UL << 14)                                     /**< Receiver raw data enable                    */
#define _FRC_SEQIEN_RXRAWEVENT_SHIFT                       14                                                /**< Shift value for FRC_RXRAWEVENT              */
#define _FRC_SEQIEN_RXRAWEVENT_MASK                        0x4000UL                                          /**< Bit mask for FRC_RXRAWEVENT                 */
#define _FRC_SEQIEN_RXRAWEVENT_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_RXRAWEVENT_DEFAULT                      (_FRC_SEQIEN_RXRAWEVENT_DEFAULT << 14)            /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_TXRAWEVENT                              (0x1UL << 15)                                     /**< Transmit raw data enable                    */
#define _FRC_SEQIEN_TXRAWEVENT_SHIFT                       15                                                /**< Shift value for FRC_TXRAWEVENT              */
#define _FRC_SEQIEN_TXRAWEVENT_MASK                        0x8000UL                                          /**< Bit mask for FRC_TXRAWEVENT                 */
#define _FRC_SEQIEN_TXRAWEVENT_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXRAWEVENT_DEFAULT                      (_FRC_SEQIEN_TXRAWEVENT_DEFAULT << 15)            /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_SNIFFOF                                 (0x1UL << 16)                                     /**< Data sniffer overflow enable                */
#define _FRC_SEQIEN_SNIFFOF_SHIFT                          16                                                /**< Shift value for FRC_SNIFFOF                 */
#define _FRC_SEQIEN_SNIFFOF_MASK                           0x10000UL                                         /**< Bit mask for FRC_SNIFFOF                    */
#define _FRC_SEQIEN_SNIFFOF_DEFAULT                        0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_SNIFFOF_DEFAULT                         (_FRC_SEQIEN_SNIFFOF_DEFAULT << 16)               /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_WCNTCMP3                                (0x1UL << 17)                                     /**< Word Counter Compare 2 Enable               */
#define _FRC_SEQIEN_WCNTCMP3_SHIFT                         17                                                /**< Shift value for FRC_WCNTCMP3                */
#define _FRC_SEQIEN_WCNTCMP3_MASK                          0x20000UL                                         /**< Bit mask for FRC_WCNTCMP3                   */
#define _FRC_SEQIEN_WCNTCMP3_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_WCNTCMP3_DEFAULT                        (_FRC_SEQIEN_WCNTCMP3_DEFAULT << 17)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_WCNTCMP4                                (0x1UL << 18)                                     /**< Word Counter Compare 2 Enable               */
#define _FRC_SEQIEN_WCNTCMP4_SHIFT                         18                                                /**< Shift value for FRC_WCNTCMP4                */
#define _FRC_SEQIEN_WCNTCMP4_MASK                          0x40000UL                                         /**< Bit mask for FRC_WCNTCMP4                   */
#define _FRC_SEQIEN_WCNTCMP4_DEFAULT                       0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_WCNTCMP4_DEFAULT                        (_FRC_SEQIEN_WCNTCMP4_DEFAULT << 18)              /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_BOISET                                  (0x1UL << 19)                                     /**< Word Counter Compare 2 Enable               */
#define _FRC_SEQIEN_BOISET_SHIFT                           19                                                /**< Shift value for FRC_BOISET                  */
#define _FRC_SEQIEN_BOISET_MASK                            0x80000UL                                         /**< Bit mask for FRC_BOISET                     */
#define _FRC_SEQIEN_BOISET_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_BOISET_DEFAULT                          (_FRC_SEQIEN_BOISET_DEFAULT << 19)                /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_PKTBUFSTART                             (0x1UL << 20)                                     /**< PKTBUFSTART Enable                          */
#define _FRC_SEQIEN_PKTBUFSTART_SHIFT                      20                                                /**< Shift value for FRC_PKTBUFSTART             */
#define _FRC_SEQIEN_PKTBUFSTART_MASK                       0x100000UL                                        /**< Bit mask for FRC_PKTBUFSTART                */
#define _FRC_SEQIEN_PKTBUFSTART_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_PKTBUFSTART_DEFAULT                     (_FRC_SEQIEN_PKTBUFSTART_DEFAULT << 20)           /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_PKTBUFTHRESHOLD                         (0x1UL << 21)                                     /**< PKTBUFTHRESHOLD Enable                      */
#define _FRC_SEQIEN_PKTBUFTHRESHOLD_SHIFT                  21                                                /**< Shift value for FRC_PKTBUFTHRESHOLD         */
#define _FRC_SEQIEN_PKTBUFTHRESHOLD_MASK                   0x200000UL                                        /**< Bit mask for FRC_PKTBUFTHRESHOLD            */
#define _FRC_SEQIEN_PKTBUFTHRESHOLD_DEFAULT                0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_PKTBUFTHRESHOLD_DEFAULT                 (_FRC_SEQIEN_PKTBUFTHRESHOLD_DEFAULT << 21)       /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_RXRAWOF                                 (0x1UL << 22)                                     /**< RXRAWOF Enable                              */
#define _FRC_SEQIEN_RXRAWOF_SHIFT                          22                                                /**< Shift value for FRC_RXRAWOF                 */
#define _FRC_SEQIEN_RXRAWOF_MASK                           0x400000UL                                        /**< Bit mask for FRC_RXRAWOF                    */
#define _FRC_SEQIEN_RXRAWOF_DEFAULT                        0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_RXRAWOF_DEFAULT                         (_FRC_SEQIEN_RXRAWOF_DEFAULT << 22)               /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_FRAMEDETPAUSED                          (0x1UL << 24)                                     /**< Frame detected pause event enable           */
#define _FRC_SEQIEN_FRAMEDETPAUSED_SHIFT                   24                                                /**< Shift value for FRC_FRAMEDETPAUSED          */
#define _FRC_SEQIEN_FRAMEDETPAUSED_MASK                    0x1000000UL                                       /**< Bit mask for FRC_FRAMEDETPAUSED             */
#define _FRC_SEQIEN_FRAMEDETPAUSED_DEFAULT                 0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_FRAMEDETPAUSED_DEFAULT                  (_FRC_SEQIEN_FRAMEDETPAUSED_DEFAULT << 24)        /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_INTERLEAVEWRITEPAUSED                   (0x1UL << 25)                                     /**< Interleaver write pause event enable        */
#define _FRC_SEQIEN_INTERLEAVEWRITEPAUSED_SHIFT            25                                                /**< Shift value for FRC_INTERLEAVEWRITEPAUSED   */
#define _FRC_SEQIEN_INTERLEAVEWRITEPAUSED_MASK             0x2000000UL                                       /**< Bit mask for FRC_INTERLEAVEWRITEPAUSED      */
#define _FRC_SEQIEN_INTERLEAVEWRITEPAUSED_DEFAULT          0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_INTERLEAVEWRITEPAUSED_DEFAULT           (_FRC_SEQIEN_INTERLEAVEWRITEPAUSED_DEFAULT << 25) /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_INTERLEAVEREADPAUSED                    (0x1UL << 26)                                     /**< Interleaver read pause event enable         */
#define _FRC_SEQIEN_INTERLEAVEREADPAUSED_SHIFT             26                                                /**< Shift value for FRC_INTERLEAVEREADPAUSED    */
#define _FRC_SEQIEN_INTERLEAVEREADPAUSED_MASK              0x4000000UL                                       /**< Bit mask for FRC_INTERLEAVEREADPAUSED       */
#define _FRC_SEQIEN_INTERLEAVEREADPAUSED_DEFAULT           0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_INTERLEAVEREADPAUSED_DEFAULT            (_FRC_SEQIEN_INTERLEAVEREADPAUSED_DEFAULT << 26)  /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_TXSUBFRAMEPAUSED                        (0x1UL << 27)                                     /**< Transmit subframe pause event enable        */
#define _FRC_SEQIEN_TXSUBFRAMEPAUSED_SHIFT                 27                                                /**< Shift value for FRC_TXSUBFRAMEPAUSED        */
#define _FRC_SEQIEN_TXSUBFRAMEPAUSED_MASK                  0x8000000UL                                       /**< Bit mask for FRC_TXSUBFRAMEPAUSED           */
#define _FRC_SEQIEN_TXSUBFRAMEPAUSED_DEFAULT               0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXSUBFRAMEPAUSED_DEFAULT                (_FRC_SEQIEN_TXSUBFRAMEPAUSED_DEFAULT << 27)      /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_CONVPAUSED                              (0x1UL << 28)                                     /**< Convolutional coder pause event enable      */
#define _FRC_SEQIEN_CONVPAUSED_SHIFT                       28                                                /**< Shift value for FRC_CONVPAUSED              */
#define _FRC_SEQIEN_CONVPAUSED_MASK                        0x10000000UL                                      /**< Bit mask for FRC_CONVPAUSED                 */
#define _FRC_SEQIEN_CONVPAUSED_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_CONVPAUSED_DEFAULT                      (_FRC_SEQIEN_CONVPAUSED_DEFAULT << 28)            /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_RXWORD                                  (0x1UL << 29)                                     /**< Receive Word Interrupt Enable               */
#define _FRC_SEQIEN_RXWORD_SHIFT                           29                                                /**< Shift value for FRC_RXWORD                  */
#define _FRC_SEQIEN_RXWORD_MASK                            0x20000000UL                                      /**< Bit mask for FRC_RXWORD                     */
#define _FRC_SEQIEN_RXWORD_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_RXWORD_DEFAULT                          (_FRC_SEQIEN_RXWORD_DEFAULT << 29)                /**< Shifted mode DEFAULT for FRC_SEQIEN         */
#define FRC_SEQIEN_TXWORD                                  (0x1UL << 30)                                     /**< Transmit Word Interrupt Enable              */
#define _FRC_SEQIEN_TXWORD_SHIFT                           30                                                /**< Shift value for FRC_TXWORD                  */
#define _FRC_SEQIEN_TXWORD_MASK                            0x40000000UL                                      /**< Bit mask for FRC_TXWORD                     */
#define _FRC_SEQIEN_TXWORD_DEFAULT                         0x00000000UL                                      /**< Mode DEFAULT for FRC_SEQIEN                 */
#define FRC_SEQIEN_TXWORD_DEFAULT                          (_FRC_SEQIEN_TXWORD_DEFAULT << 30)                /**< Shifted mode DEFAULT for FRC_SEQIEN         */

/* Bit fields for FRC WCNTCMP3 */
#define _FRC_WCNTCMP3_RESETVALUE                           0x00000000UL                                 /**< Default value for FRC_WCNTCMP3              */
#define _FRC_WCNTCMP3_MASK                                 0x00000FFFUL                                 /**< Mask for FRC_WCNTCMP3                       */
#define _FRC_WCNTCMP3_SUPPLENFIELDLOC_SHIFT                0                                            /**< Shift value for FRC_SUPPLENFIELDLOC         */
#define _FRC_WCNTCMP3_SUPPLENFIELDLOC_MASK                 0xFFFUL                                      /**< Bit mask for FRC_SUPPLENFIELDLOC            */
#define _FRC_WCNTCMP3_SUPPLENFIELDLOC_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for FRC_WCNTCMP3               */
#define FRC_WCNTCMP3_SUPPLENFIELDLOC_DEFAULT               (_FRC_WCNTCMP3_SUPPLENFIELDLOC_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WCNTCMP3       */

/* Bit fields for FRC BOICTRL */
#define _FRC_BOICTRL_RESETVALUE                            0x00000000UL                             /**< Default value for FRC_BOICTRL               */
#define _FRC_BOICTRL_MASK                                  0x0001FFFFUL                             /**< Mask for FRC_BOICTRL                        */
#define FRC_BOICTRL_BOIEN                                  (0x1UL << 0)                             /**< BOI EN                                      */
#define _FRC_BOICTRL_BOIEN_SHIFT                           0                                        /**< Shift value for FRC_BOIEN                   */
#define _FRC_BOICTRL_BOIEN_MASK                            0x1UL                                    /**< Bit mask for FRC_BOIEN                      */
#define _FRC_BOICTRL_BOIEN_DEFAULT                         0x00000000UL                             /**< Mode DEFAULT for FRC_BOICTRL                */
#define FRC_BOICTRL_BOIEN_DEFAULT                          (_FRC_BOICTRL_BOIEN_DEFAULT << 0)        /**< Shifted mode DEFAULT for FRC_BOICTRL        */
#define _FRC_BOICTRL_BOIFIELDLOC_SHIFT                     1                                        /**< Shift value for FRC_BOIFIELDLOC             */
#define _FRC_BOICTRL_BOIFIELDLOC_MASK                      0x1FFEUL                                 /**< Bit mask for FRC_BOIFIELDLOC                */
#define _FRC_BOICTRL_BOIFIELDLOC_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for FRC_BOICTRL                */
#define FRC_BOICTRL_BOIFIELDLOC_DEFAULT                    (_FRC_BOICTRL_BOIFIELDLOC_DEFAULT << 1)  /**< Shifted mode DEFAULT for FRC_BOICTRL        */
#define _FRC_BOICTRL_BOIBITPOS_SHIFT                       13                                       /**< Shift value for FRC_BOIBITPOS               */
#define _FRC_BOICTRL_BOIBITPOS_MASK                        0xE000UL                                 /**< Bit mask for FRC_BOIBITPOS                  */
#define _FRC_BOICTRL_BOIBITPOS_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for FRC_BOICTRL                */
#define FRC_BOICTRL_BOIBITPOS_DEFAULT                      (_FRC_BOICTRL_BOIBITPOS_DEFAULT << 13)   /**< Shifted mode DEFAULT for FRC_BOICTRL        */
#define FRC_BOICTRL_BOIMATCHVAL                            (0x1UL << 16)                            /**< BOI match value                             */
#define _FRC_BOICTRL_BOIMATCHVAL_SHIFT                     16                                       /**< Shift value for FRC_BOIMATCHVAL             */
#define _FRC_BOICTRL_BOIMATCHVAL_MASK                      0x10000UL                                /**< Bit mask for FRC_BOIMATCHVAL                */
#define _FRC_BOICTRL_BOIMATCHVAL_DEFAULT                   0x00000000UL                             /**< Mode DEFAULT for FRC_BOICTRL                */
#define FRC_BOICTRL_BOIMATCHVAL_DEFAULT                    (_FRC_BOICTRL_BOIMATCHVAL_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_BOICTRL        */

/* Bit fields for FRC DSLCTRL */
#define _FRC_DSLCTRL_RESETVALUE                            0x00000000UL                                        /**< Default value for FRC_DSLCTRL               */
#define _FRC_DSLCTRL_MASK                                  0x7FFFFF7FUL                                        /**< Mask for FRC_DSLCTRL                        */
#define _FRC_DSLCTRL_DSLMODE_SHIFT                         0                                                   /**< Shift value for FRC_DSLMODE                 */
#define _FRC_DSLCTRL_DSLMODE_MASK                          0x7UL                                               /**< Bit mask for FRC_DSLMODE                    */
#define _FRC_DSLCTRL_DSLMODE_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define _FRC_DSLCTRL_DSLMODE_DISABLE                       0x00000000UL                                        /**< Mode DISABLE for FRC_DSLCTRL                */
#define _FRC_DSLCTRL_DSLMODE_SINGLEBYTE                    0x00000001UL                                        /**< Mode SINGLEBYTE for FRC_DSLCTRL             */
#define _FRC_DSLCTRL_DSLMODE_SINGLEBYTEMSB                 0x00000002UL                                        /**< Mode SINGLEBYTEMSB for FRC_DSLCTRL          */
#define _FRC_DSLCTRL_DSLMODE_DUALBYTELSBFIRST              0x00000003UL                                        /**< Mode DUALBYTELSBFIRST for FRC_DSLCTRL       */
#define _FRC_DSLCTRL_DSLMODE_DUALBYTEMSBFIRST              0x00000004UL                                        /**< Mode DUALBYTEMSBFIRST for FRC_DSLCTRL       */
#define _FRC_DSLCTRL_DSLMODE_INFINITE                      0x00000005UL                                        /**< Mode INFINITE for FRC_DSLCTRL               */
#define _FRC_DSLCTRL_DSLMODE_BLOCKERROR                    0x00000006UL                                        /**< Mode BLOCKERROR for FRC_DSLCTRL             */
#define FRC_DSLCTRL_DSLMODE_DEFAULT                        (_FRC_DSLCTRL_DSLMODE_DEFAULT << 0)                 /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define FRC_DSLCTRL_DSLMODE_DISABLE                        (_FRC_DSLCTRL_DSLMODE_DISABLE << 0)                 /**< Shifted mode DISABLE for FRC_DSLCTRL        */
#define FRC_DSLCTRL_DSLMODE_SINGLEBYTE                     (_FRC_DSLCTRL_DSLMODE_SINGLEBYTE << 0)              /**< Shifted mode SINGLEBYTE for FRC_DSLCTRL     */
#define FRC_DSLCTRL_DSLMODE_SINGLEBYTEMSB                  (_FRC_DSLCTRL_DSLMODE_SINGLEBYTEMSB << 0)           /**< Shifted mode SINGLEBYTEMSB for FRC_DSLCTRL  */
#define FRC_DSLCTRL_DSLMODE_DUALBYTELSBFIRST               (_FRC_DSLCTRL_DSLMODE_DUALBYTELSBFIRST << 0)        /**< Shifted mode DUALBYTELSBFIRST for FRC_DSLCTRL*/
#define FRC_DSLCTRL_DSLMODE_DUALBYTEMSBFIRST               (_FRC_DSLCTRL_DSLMODE_DUALBYTEMSBFIRST << 0)        /**< Shifted mode DUALBYTEMSBFIRST for FRC_DSLCTRL*/
#define FRC_DSLCTRL_DSLMODE_INFINITE                       (_FRC_DSLCTRL_DSLMODE_INFINITE << 0)                /**< Shifted mode INFINITE for FRC_DSLCTRL       */
#define FRC_DSLCTRL_DSLMODE_BLOCKERROR                     (_FRC_DSLCTRL_DSLMODE_BLOCKERROR << 0)              /**< Shifted mode BLOCKERROR for FRC_DSLCTRL     */
#define FRC_DSLCTRL_DSLBITORDER                            (0x1UL << 3)                                        /**< Dynamic Frame Length Bit order              */
#define _FRC_DSLCTRL_DSLBITORDER_SHIFT                     3                                                   /**< Shift value for FRC_DSLBITORDER             */
#define _FRC_DSLCTRL_DSLBITORDER_MASK                      0x8UL                                               /**< Bit mask for FRC_DSLBITORDER                */
#define _FRC_DSLCTRL_DSLBITORDER_DEFAULT                   0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define _FRC_DSLCTRL_DSLBITORDER_NORMAL                    0x00000000UL                                        /**< Mode NORMAL for FRC_DSLCTRL                 */
#define _FRC_DSLCTRL_DSLBITORDER_REVERSE                   0x00000001UL                                        /**< Mode REVERSE for FRC_DSLCTRL                */
#define FRC_DSLCTRL_DSLBITORDER_DEFAULT                    (_FRC_DSLCTRL_DSLBITORDER_DEFAULT << 3)             /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define FRC_DSLCTRL_DSLBITORDER_NORMAL                     (_FRC_DSLCTRL_DSLBITORDER_NORMAL << 3)              /**< Shifted mode NORMAL for FRC_DSLCTRL         */
#define FRC_DSLCTRL_DSLBITORDER_REVERSE                    (_FRC_DSLCTRL_DSLBITORDER_REVERSE << 3)             /**< Shifted mode REVERSE for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_DSLSHIFT_SHIFT                        4                                                   /**< Shift value for FRC_DSLSHIFT                */
#define _FRC_DSLCTRL_DSLSHIFT_MASK                         0x70UL                                              /**< Bit mask for FRC_DSLSHIFT                   */
#define _FRC_DSLCTRL_DSLSHIFT_DEFAULT                      0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define FRC_DSLCTRL_DSLSHIFT_DEFAULT                       (_FRC_DSLCTRL_DSLSHIFT_DEFAULT << 4)                /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_DSLOFFSET_SHIFT                       8                                                   /**< Shift value for FRC_DSLOFFSET               */
#define _FRC_DSLCTRL_DSLOFFSET_MASK                        0xFF00UL                                            /**< Bit mask for FRC_DSLOFFSET                  */
#define _FRC_DSLCTRL_DSLOFFSET_DEFAULT                     0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define FRC_DSLCTRL_DSLOFFSET_DEFAULT                      (_FRC_DSLCTRL_DSLOFFSET_DEFAULT << 8)               /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_DSLBITS_SHIFT                         16                                                  /**< Shift value for FRC_DSLBITS                 */
#define _FRC_DSLCTRL_DSLBITS_MASK                          0xF0000UL                                           /**< Bit mask for FRC_DSLBITS                    */
#define _FRC_DSLCTRL_DSLBITS_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define FRC_DSLCTRL_DSLBITS_DEFAULT                        (_FRC_DSLCTRL_DSLBITS_DEFAULT << 16)                /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_DSLMINLENGTH_SHIFT                    20                                                  /**< Shift value for FRC_DSLMINLENGTH            */
#define _FRC_DSLCTRL_DSLMINLENGTH_MASK                     0xF00000UL                                          /**< Bit mask for FRC_DSLMINLENGTH               */
#define _FRC_DSLCTRL_DSLMINLENGTH_DEFAULT                  0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define FRC_DSLCTRL_DSLMINLENGTH_DEFAULT                   (_FRC_DSLCTRL_DSLMINLENGTH_DEFAULT << 20)           /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_SHIFT                  24                                                  /**< Shift value for FRC_RXSUPRECEPMODE          */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_MASK                   0x7000000UL                                         /**< Bit mask for FRC_RXSUPRECEPMODE             */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_DEFAULT                0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_NOSUP                  0x00000000UL                                        /**< Mode NOSUP for FRC_DSLCTRL                  */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_BOIDSLBASED            0x00000001UL                                        /**< Mode BOIDSLBASED for FRC_DSLCTRL            */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_BOIFIXEDSLBASED        0x00000002UL                                        /**< Mode BOIFIXEDSLBASED for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_DSLBASED               0x00000003UL                                        /**< Mode DSLBASED for FRC_DSLCTRL               */
#define _FRC_DSLCTRL_RXSUPRECEPMODE_FIXEDSLBASED           0x00000004UL                                        /**< Mode FIXEDSLBASED for FRC_DSLCTRL           */
#define FRC_DSLCTRL_RXSUPRECEPMODE_DEFAULT                 (_FRC_DSLCTRL_RXSUPRECEPMODE_DEFAULT << 24)         /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define FRC_DSLCTRL_RXSUPRECEPMODE_NOSUP                   (_FRC_DSLCTRL_RXSUPRECEPMODE_NOSUP << 24)           /**< Shifted mode NOSUP for FRC_DSLCTRL          */
#define FRC_DSLCTRL_RXSUPRECEPMODE_BOIDSLBASED             (_FRC_DSLCTRL_RXSUPRECEPMODE_BOIDSLBASED << 24)     /**< Shifted mode BOIDSLBASED for FRC_DSLCTRL    */
#define FRC_DSLCTRL_RXSUPRECEPMODE_BOIFIXEDSLBASED         (_FRC_DSLCTRL_RXSUPRECEPMODE_BOIFIXEDSLBASED << 24) /**< Shifted mode BOIFIXEDSLBASED for FRC_DSLCTRL*/
#define FRC_DSLCTRL_RXSUPRECEPMODE_DSLBASED                (_FRC_DSLCTRL_RXSUPRECEPMODE_DSLBASED << 24)        /**< Shifted mode DSLBASED for FRC_DSLCTRL       */
#define FRC_DSLCTRL_RXSUPRECEPMODE_FIXEDSLBASED            (_FRC_DSLCTRL_RXSUPRECEPMODE_FIXEDSLBASED << 24)    /**< Shifted mode FIXEDSLBASED for FRC_DSLCTRL   */
#define FRC_DSLCTRL_STORESUP                               (0x1UL << 27)                                       /**< Store SUPP in BUFC                          */
#define _FRC_DSLCTRL_STORESUP_SHIFT                        27                                                  /**< Shift value for FRC_STORESUP                */
#define _FRC_DSLCTRL_STORESUP_MASK                         0x8000000UL                                         /**< Bit mask for FRC_STORESUP                   */
#define _FRC_DSLCTRL_STORESUP_DEFAULT                      0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define FRC_DSLCTRL_STORESUP_DEFAULT                       (_FRC_DSLCTRL_STORESUP_DEFAULT << 27)               /**< Shifted mode DEFAULT for FRC_DSLCTRL        */
#define _FRC_DSLCTRL_SUPSHFFACTOR_SHIFT                    28                                                  /**< Shift value for FRC_SUPSHFFACTOR            */
#define _FRC_DSLCTRL_SUPSHFFACTOR_MASK                     0x70000000UL                                        /**< Bit mask for FRC_SUPSHFFACTOR               */
#define _FRC_DSLCTRL_SUPSHFFACTOR_DEFAULT                  0x00000000UL                                        /**< Mode DEFAULT for FRC_DSLCTRL                */
#define FRC_DSLCTRL_SUPSHFFACTOR_DEFAULT                   (_FRC_DSLCTRL_SUPSHFFACTOR_DEFAULT << 28)           /**< Shifted mode DEFAULT for FRC_DSLCTRL        */

/* Bit fields for FRC WCNTCMP4 */
#define _FRC_WCNTCMP4_RESETVALUE                           0x00000000UL                            /**< Default value for FRC_WCNTCMP4              */
#define _FRC_WCNTCMP4_MASK                                 0x00000FFFUL                            /**< Mask for FRC_WCNTCMP4                       */
#define _FRC_WCNTCMP4_SUPPLENGTH_SHIFT                     0                                       /**< Shift value for FRC_SUPPLENGTH              */
#define _FRC_WCNTCMP4_SUPPLENGTH_MASK                      0xFFFUL                                 /**< Bit mask for FRC_SUPPLENGTH                 */
#define _FRC_WCNTCMP4_SUPPLENGTH_DEFAULT                   0x00000000UL                            /**< Mode DEFAULT for FRC_WCNTCMP4               */
#define FRC_WCNTCMP4_SUPPLENGTH_DEFAULT                    (_FRC_WCNTCMP4_SUPPLENGTH_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_WCNTCMP4       */

/* Bit fields for FRC PKTBUFCTRL */
#define _FRC_PKTBUFCTRL_RESETVALUE                         0x00000000UL                                      /**< Default value for FRC_PKTBUFCTRL            */
#define _FRC_PKTBUFCTRL_MASK                               0x0103FFFFUL                                      /**< Mask for FRC_PKTBUFCTRL                     */
#define _FRC_PKTBUFCTRL_PKTBUFSTARTLOC_SHIFT               0                                                 /**< Shift value for FRC_PKTBUFSTARTLOC          */
#define _FRC_PKTBUFCTRL_PKTBUFSTARTLOC_MASK                0xFFFUL                                           /**< Bit mask for FRC_PKTBUFSTARTLOC             */
#define _FRC_PKTBUFCTRL_PKTBUFSTARTLOC_DEFAULT             0x00000000UL                                      /**< Mode DEFAULT for FRC_PKTBUFCTRL             */
#define FRC_PKTBUFCTRL_PKTBUFSTARTLOC_DEFAULT              (_FRC_PKTBUFCTRL_PKTBUFSTARTLOC_DEFAULT << 0)     /**< Shifted mode DEFAULT for FRC_PKTBUFCTRL     */
#define _FRC_PKTBUFCTRL_PKTBUFTHRESHOLD_SHIFT              12                                                /**< Shift value for FRC_PKTBUFTHRESHOLD         */
#define _FRC_PKTBUFCTRL_PKTBUFTHRESHOLD_MASK               0x3F000UL                                         /**< Bit mask for FRC_PKTBUFTHRESHOLD            */
#define _FRC_PKTBUFCTRL_PKTBUFTHRESHOLD_DEFAULT            0x00000000UL                                      /**< Mode DEFAULT for FRC_PKTBUFCTRL             */
#define FRC_PKTBUFCTRL_PKTBUFTHRESHOLD_DEFAULT             (_FRC_PKTBUFCTRL_PKTBUFTHRESHOLD_DEFAULT << 12)   /**< Shifted mode DEFAULT for FRC_PKTBUFCTRL     */
#define FRC_PKTBUFCTRL_PKTBUFTHRESHOLDEN                   (0x1UL << 24)                                     /**< Packet Buffer Threshold Enable              */
#define _FRC_PKTBUFCTRL_PKTBUFTHRESHOLDEN_SHIFT            24                                                /**< Shift value for FRC_PKTBUFTHRESHOLDEN       */
#define _FRC_PKTBUFCTRL_PKTBUFTHRESHOLDEN_MASK             0x1000000UL                                       /**< Bit mask for FRC_PKTBUFTHRESHOLDEN          */
#define _FRC_PKTBUFCTRL_PKTBUFTHRESHOLDEN_DEFAULT          0x00000000UL                                      /**< Mode DEFAULT for FRC_PKTBUFCTRL             */
#define FRC_PKTBUFCTRL_PKTBUFTHRESHOLDEN_DEFAULT           (_FRC_PKTBUFCTRL_PKTBUFTHRESHOLDEN_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUFCTRL     */

/* Bit fields for FRC PKTBUFSTATUS */
#define _FRC_PKTBUFSTATUS_RESETVALUE                       0x00000000UL                                 /**< Default value for FRC_PKTBUFSTATUS          */
#define _FRC_PKTBUFSTATUS_MASK                             0x0000003FUL                                 /**< Mask for FRC_PKTBUFSTATUS                   */
#define _FRC_PKTBUFSTATUS_PKTBUFCOUNT_SHIFT                0                                            /**< Shift value for FRC_PKTBUFCOUNT             */
#define _FRC_PKTBUFSTATUS_PKTBUFCOUNT_MASK                 0x3FUL                                       /**< Bit mask for FRC_PKTBUFCOUNT                */
#define _FRC_PKTBUFSTATUS_PKTBUFCOUNT_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for FRC_PKTBUFSTATUS           */
#define FRC_PKTBUFSTATUS_PKTBUFCOUNT_DEFAULT               (_FRC_PKTBUFSTATUS_PKTBUFCOUNT_DEFAULT << 0) /**< Shifted mode DEFAULT for FRC_PKTBUFSTATUS   */

/* Bit fields for FRC PKTBUF0 */
#define _FRC_PKTBUF0_RESETVALUE                            0x00000000UL                         /**< Default value for FRC_PKTBUF0               */
#define _FRC_PKTBUF0_MASK                                  0xFFFFFFFFUL                         /**< Mask for FRC_PKTBUF0                        */
#define _FRC_PKTBUF0_PKTBUF0_SHIFT                         0                                    /**< Shift value for FRC_PKTBUF0                 */
#define _FRC_PKTBUF0_PKTBUF0_MASK                          0xFFUL                               /**< Bit mask for FRC_PKTBUF0                    */
#define _FRC_PKTBUF0_PKTBUF0_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF0                */
#define FRC_PKTBUF0_PKTBUF0_DEFAULT                        (_FRC_PKTBUF0_PKTBUF0_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF0        */
#define _FRC_PKTBUF0_PKTBUF1_SHIFT                         8                                    /**< Shift value for FRC_PKTBUF1                 */
#define _FRC_PKTBUF0_PKTBUF1_MASK                          0xFF00UL                             /**< Bit mask for FRC_PKTBUF1                    */
#define _FRC_PKTBUF0_PKTBUF1_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF0                */
#define FRC_PKTBUF0_PKTBUF1_DEFAULT                        (_FRC_PKTBUF0_PKTBUF1_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF0        */
#define _FRC_PKTBUF0_PKTBUF2_SHIFT                         16                                   /**< Shift value for FRC_PKTBUF2                 */
#define _FRC_PKTBUF0_PKTBUF2_MASK                          0xFF0000UL                           /**< Bit mask for FRC_PKTBUF2                    */
#define _FRC_PKTBUF0_PKTBUF2_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF0                */
#define FRC_PKTBUF0_PKTBUF2_DEFAULT                        (_FRC_PKTBUF0_PKTBUF2_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF0        */
#define _FRC_PKTBUF0_PKTBUF3_SHIFT                         24                                   /**< Shift value for FRC_PKTBUF3                 */
#define _FRC_PKTBUF0_PKTBUF3_MASK                          0xFF000000UL                         /**< Bit mask for FRC_PKTBUF3                    */
#define _FRC_PKTBUF0_PKTBUF3_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF0                */
#define FRC_PKTBUF0_PKTBUF3_DEFAULT                        (_FRC_PKTBUF0_PKTBUF3_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF0        */

/* Bit fields for FRC PKTBUF1 */
#define _FRC_PKTBUF1_RESETVALUE                            0x00000000UL                         /**< Default value for FRC_PKTBUF1               */
#define _FRC_PKTBUF1_MASK                                  0xFFFFFFFFUL                         /**< Mask for FRC_PKTBUF1                        */
#define _FRC_PKTBUF1_PKTBUF4_SHIFT                         0                                    /**< Shift value for FRC_PKTBUF4                 */
#define _FRC_PKTBUF1_PKTBUF4_MASK                          0xFFUL                               /**< Bit mask for FRC_PKTBUF4                    */
#define _FRC_PKTBUF1_PKTBUF4_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF1                */
#define FRC_PKTBUF1_PKTBUF4_DEFAULT                        (_FRC_PKTBUF1_PKTBUF4_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF1        */
#define _FRC_PKTBUF1_PKTBUF5_SHIFT                         8                                    /**< Shift value for FRC_PKTBUF5                 */
#define _FRC_PKTBUF1_PKTBUF5_MASK                          0xFF00UL                             /**< Bit mask for FRC_PKTBUF5                    */
#define _FRC_PKTBUF1_PKTBUF5_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF1                */
#define FRC_PKTBUF1_PKTBUF5_DEFAULT                        (_FRC_PKTBUF1_PKTBUF5_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF1        */
#define _FRC_PKTBUF1_PKTBUF6_SHIFT                         16                                   /**< Shift value for FRC_PKTBUF6                 */
#define _FRC_PKTBUF1_PKTBUF6_MASK                          0xFF0000UL                           /**< Bit mask for FRC_PKTBUF6                    */
#define _FRC_PKTBUF1_PKTBUF6_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF1                */
#define FRC_PKTBUF1_PKTBUF6_DEFAULT                        (_FRC_PKTBUF1_PKTBUF6_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF1        */
#define _FRC_PKTBUF1_PKTBUF7_SHIFT                         24                                   /**< Shift value for FRC_PKTBUF7                 */
#define _FRC_PKTBUF1_PKTBUF7_MASK                          0xFF000000UL                         /**< Bit mask for FRC_PKTBUF7                    */
#define _FRC_PKTBUF1_PKTBUF7_DEFAULT                       0x00000000UL                         /**< Mode DEFAULT for FRC_PKTBUF1                */
#define FRC_PKTBUF1_PKTBUF7_DEFAULT                        (_FRC_PKTBUF1_PKTBUF7_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF1        */

/* Bit fields for FRC PKTBUF2 */
#define _FRC_PKTBUF2_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF2               */
#define _FRC_PKTBUF2_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF2                        */
#define _FRC_PKTBUF2_PKTBUF8_SHIFT                         0                                     /**< Shift value for FRC_PKTBUF8                 */
#define _FRC_PKTBUF2_PKTBUF8_MASK                          0xFFUL                                /**< Bit mask for FRC_PKTBUF8                    */
#define _FRC_PKTBUF2_PKTBUF8_DEFAULT                       0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF2                */
#define FRC_PKTBUF2_PKTBUF8_DEFAULT                        (_FRC_PKTBUF2_PKTBUF8_DEFAULT << 0)   /**< Shifted mode DEFAULT for FRC_PKTBUF2        */
#define _FRC_PKTBUF2_PKTBUF9_SHIFT                         8                                     /**< Shift value for FRC_PKTBUF9                 */
#define _FRC_PKTBUF2_PKTBUF9_MASK                          0xFF00UL                              /**< Bit mask for FRC_PKTBUF9                    */
#define _FRC_PKTBUF2_PKTBUF9_DEFAULT                       0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF2                */
#define FRC_PKTBUF2_PKTBUF9_DEFAULT                        (_FRC_PKTBUF2_PKTBUF9_DEFAULT << 8)   /**< Shifted mode DEFAULT for FRC_PKTBUF2        */
#define _FRC_PKTBUF2_PKTBUF10_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF10                */
#define _FRC_PKTBUF2_PKTBUF10_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF10                   */
#define _FRC_PKTBUF2_PKTBUF10_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF2                */
#define FRC_PKTBUF2_PKTBUF10_DEFAULT                       (_FRC_PKTBUF2_PKTBUF10_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF2        */
#define _FRC_PKTBUF2_PKTBUF11_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF11                */
#define _FRC_PKTBUF2_PKTBUF11_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF11                   */
#define _FRC_PKTBUF2_PKTBUF11_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF2                */
#define FRC_PKTBUF2_PKTBUF11_DEFAULT                       (_FRC_PKTBUF2_PKTBUF11_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF2        */

/* Bit fields for FRC PKTBUF3 */
#define _FRC_PKTBUF3_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF3               */
#define _FRC_PKTBUF3_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF3                        */
#define _FRC_PKTBUF3_PKTBUF12_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF12                */
#define _FRC_PKTBUF3_PKTBUF12_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF12                   */
#define _FRC_PKTBUF3_PKTBUF12_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF3                */
#define FRC_PKTBUF3_PKTBUF12_DEFAULT                       (_FRC_PKTBUF3_PKTBUF12_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF3        */
#define _FRC_PKTBUF3_PKTBUF13_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF13                */
#define _FRC_PKTBUF3_PKTBUF13_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF13                   */
#define _FRC_PKTBUF3_PKTBUF13_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF3                */
#define FRC_PKTBUF3_PKTBUF13_DEFAULT                       (_FRC_PKTBUF3_PKTBUF13_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF3        */
#define _FRC_PKTBUF3_PKTBUF14_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF14                */
#define _FRC_PKTBUF3_PKTBUF14_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF14                   */
#define _FRC_PKTBUF3_PKTBUF14_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF3                */
#define FRC_PKTBUF3_PKTBUF14_DEFAULT                       (_FRC_PKTBUF3_PKTBUF14_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF3        */
#define _FRC_PKTBUF3_PKTBUF15_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF15                */
#define _FRC_PKTBUF3_PKTBUF15_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF15                   */
#define _FRC_PKTBUF3_PKTBUF15_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF3                */
#define FRC_PKTBUF3_PKTBUF15_DEFAULT                       (_FRC_PKTBUF3_PKTBUF15_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF3        */

/* Bit fields for FRC PKTBUF4 */
#define _FRC_PKTBUF4_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF4               */
#define _FRC_PKTBUF4_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF4                        */
#define _FRC_PKTBUF4_PKTBUF16_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF16                */
#define _FRC_PKTBUF4_PKTBUF16_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF16                   */
#define _FRC_PKTBUF4_PKTBUF16_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF4                */
#define FRC_PKTBUF4_PKTBUF16_DEFAULT                       (_FRC_PKTBUF4_PKTBUF16_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF4        */
#define _FRC_PKTBUF4_PKTBUF17_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF17                */
#define _FRC_PKTBUF4_PKTBUF17_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF17                   */
#define _FRC_PKTBUF4_PKTBUF17_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF4                */
#define FRC_PKTBUF4_PKTBUF17_DEFAULT                       (_FRC_PKTBUF4_PKTBUF17_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF4        */
#define _FRC_PKTBUF4_PKTBUF18_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF18                */
#define _FRC_PKTBUF4_PKTBUF18_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF18                   */
#define _FRC_PKTBUF4_PKTBUF18_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF4                */
#define FRC_PKTBUF4_PKTBUF18_DEFAULT                       (_FRC_PKTBUF4_PKTBUF18_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF4        */
#define _FRC_PKTBUF4_PKTBUF19_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF19                */
#define _FRC_PKTBUF4_PKTBUF19_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF19                   */
#define _FRC_PKTBUF4_PKTBUF19_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF4                */
#define FRC_PKTBUF4_PKTBUF19_DEFAULT                       (_FRC_PKTBUF4_PKTBUF19_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF4        */

/* Bit fields for FRC PKTBUF5 */
#define _FRC_PKTBUF5_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF5               */
#define _FRC_PKTBUF5_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF5                        */
#define _FRC_PKTBUF5_PKTBUF20_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF20                */
#define _FRC_PKTBUF5_PKTBUF20_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF20                   */
#define _FRC_PKTBUF5_PKTBUF20_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF5                */
#define FRC_PKTBUF5_PKTBUF20_DEFAULT                       (_FRC_PKTBUF5_PKTBUF20_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF5        */
#define _FRC_PKTBUF5_PKTBUF21_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF21                */
#define _FRC_PKTBUF5_PKTBUF21_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF21                   */
#define _FRC_PKTBUF5_PKTBUF21_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF5                */
#define FRC_PKTBUF5_PKTBUF21_DEFAULT                       (_FRC_PKTBUF5_PKTBUF21_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF5        */
#define _FRC_PKTBUF5_PKTBUF22_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF22                */
#define _FRC_PKTBUF5_PKTBUF22_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF22                   */
#define _FRC_PKTBUF5_PKTBUF22_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF5                */
#define FRC_PKTBUF5_PKTBUF22_DEFAULT                       (_FRC_PKTBUF5_PKTBUF22_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF5        */
#define _FRC_PKTBUF5_PKTBUF23_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF23                */
#define _FRC_PKTBUF5_PKTBUF23_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF23                   */
#define _FRC_PKTBUF5_PKTBUF23_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF5                */
#define FRC_PKTBUF5_PKTBUF23_DEFAULT                       (_FRC_PKTBUF5_PKTBUF23_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF5        */

/* Bit fields for FRC PKTBUF6 */
#define _FRC_PKTBUF6_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF6               */
#define _FRC_PKTBUF6_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF6                        */
#define _FRC_PKTBUF6_PKTBUF24_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF24                */
#define _FRC_PKTBUF6_PKTBUF24_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF24                   */
#define _FRC_PKTBUF6_PKTBUF24_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF6                */
#define FRC_PKTBUF6_PKTBUF24_DEFAULT                       (_FRC_PKTBUF6_PKTBUF24_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF6        */
#define _FRC_PKTBUF6_PKTBUF25_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF25                */
#define _FRC_PKTBUF6_PKTBUF25_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF25                   */
#define _FRC_PKTBUF6_PKTBUF25_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF6                */
#define FRC_PKTBUF6_PKTBUF25_DEFAULT                       (_FRC_PKTBUF6_PKTBUF25_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF6        */
#define _FRC_PKTBUF6_PKTBUF26_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF26                */
#define _FRC_PKTBUF6_PKTBUF26_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF26                   */
#define _FRC_PKTBUF6_PKTBUF26_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF6                */
#define FRC_PKTBUF6_PKTBUF26_DEFAULT                       (_FRC_PKTBUF6_PKTBUF26_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF6        */
#define _FRC_PKTBUF6_PKTBUF27_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF27                */
#define _FRC_PKTBUF6_PKTBUF27_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF27                   */
#define _FRC_PKTBUF6_PKTBUF27_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF6                */
#define FRC_PKTBUF6_PKTBUF27_DEFAULT                       (_FRC_PKTBUF6_PKTBUF27_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF6        */

/* Bit fields for FRC PKTBUF7 */
#define _FRC_PKTBUF7_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF7               */
#define _FRC_PKTBUF7_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF7                        */
#define _FRC_PKTBUF7_PKTBUF28_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF28                */
#define _FRC_PKTBUF7_PKTBUF28_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF28                   */
#define _FRC_PKTBUF7_PKTBUF28_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF7                */
#define FRC_PKTBUF7_PKTBUF28_DEFAULT                       (_FRC_PKTBUF7_PKTBUF28_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF7        */
#define _FRC_PKTBUF7_PKTBUF29_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF29                */
#define _FRC_PKTBUF7_PKTBUF29_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF29                   */
#define _FRC_PKTBUF7_PKTBUF29_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF7                */
#define FRC_PKTBUF7_PKTBUF29_DEFAULT                       (_FRC_PKTBUF7_PKTBUF29_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF7        */
#define _FRC_PKTBUF7_PKTBUF30_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF30                */
#define _FRC_PKTBUF7_PKTBUF30_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF30                   */
#define _FRC_PKTBUF7_PKTBUF30_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF7                */
#define FRC_PKTBUF7_PKTBUF30_DEFAULT                       (_FRC_PKTBUF7_PKTBUF30_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF7        */
#define _FRC_PKTBUF7_PKTBUF31_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF31                */
#define _FRC_PKTBUF7_PKTBUF31_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF31                   */
#define _FRC_PKTBUF7_PKTBUF31_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF7                */
#define FRC_PKTBUF7_PKTBUF31_DEFAULT                       (_FRC_PKTBUF7_PKTBUF31_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF7        */

/* Bit fields for FRC PKTBUF8 */
#define _FRC_PKTBUF8_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF8               */
#define _FRC_PKTBUF8_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF8                        */
#define _FRC_PKTBUF8_PKTBUF32_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF32                */
#define _FRC_PKTBUF8_PKTBUF32_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF32                   */
#define _FRC_PKTBUF8_PKTBUF32_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF8                */
#define FRC_PKTBUF8_PKTBUF32_DEFAULT                       (_FRC_PKTBUF8_PKTBUF32_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF8        */
#define _FRC_PKTBUF8_PKTBUF33_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF33                */
#define _FRC_PKTBUF8_PKTBUF33_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF33                   */
#define _FRC_PKTBUF8_PKTBUF33_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF8                */
#define FRC_PKTBUF8_PKTBUF33_DEFAULT                       (_FRC_PKTBUF8_PKTBUF33_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF8        */
#define _FRC_PKTBUF8_PKTBUF34_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF34                */
#define _FRC_PKTBUF8_PKTBUF34_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF34                   */
#define _FRC_PKTBUF8_PKTBUF34_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF8                */
#define FRC_PKTBUF8_PKTBUF34_DEFAULT                       (_FRC_PKTBUF8_PKTBUF34_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF8        */
#define _FRC_PKTBUF8_PKTBUF35_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF35                */
#define _FRC_PKTBUF8_PKTBUF35_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF35                   */
#define _FRC_PKTBUF8_PKTBUF35_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF8                */
#define FRC_PKTBUF8_PKTBUF35_DEFAULT                       (_FRC_PKTBUF8_PKTBUF35_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF8        */

/* Bit fields for FRC PKTBUF9 */
#define _FRC_PKTBUF9_RESETVALUE                            0x00000000UL                          /**< Default value for FRC_PKTBUF9               */
#define _FRC_PKTBUF9_MASK                                  0xFFFFFFFFUL                          /**< Mask for FRC_PKTBUF9                        */
#define _FRC_PKTBUF9_PKTBUF36_SHIFT                        0                                     /**< Shift value for FRC_PKTBUF36                */
#define _FRC_PKTBUF9_PKTBUF36_MASK                         0xFFUL                                /**< Bit mask for FRC_PKTBUF36                   */
#define _FRC_PKTBUF9_PKTBUF36_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF9                */
#define FRC_PKTBUF9_PKTBUF36_DEFAULT                       (_FRC_PKTBUF9_PKTBUF36_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF9        */
#define _FRC_PKTBUF9_PKTBUF37_SHIFT                        8                                     /**< Shift value for FRC_PKTBUF37                */
#define _FRC_PKTBUF9_PKTBUF37_MASK                         0xFF00UL                              /**< Bit mask for FRC_PKTBUF37                   */
#define _FRC_PKTBUF9_PKTBUF37_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF9                */
#define FRC_PKTBUF9_PKTBUF37_DEFAULT                       (_FRC_PKTBUF9_PKTBUF37_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF9        */
#define _FRC_PKTBUF9_PKTBUF38_SHIFT                        16                                    /**< Shift value for FRC_PKTBUF38                */
#define _FRC_PKTBUF9_PKTBUF38_MASK                         0xFF0000UL                            /**< Bit mask for FRC_PKTBUF38                   */
#define _FRC_PKTBUF9_PKTBUF38_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF9                */
#define FRC_PKTBUF9_PKTBUF38_DEFAULT                       (_FRC_PKTBUF9_PKTBUF38_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF9        */
#define _FRC_PKTBUF9_PKTBUF39_SHIFT                        24                                    /**< Shift value for FRC_PKTBUF39                */
#define _FRC_PKTBUF9_PKTBUF39_MASK                         0xFF000000UL                          /**< Bit mask for FRC_PKTBUF39                   */
#define _FRC_PKTBUF9_PKTBUF39_DEFAULT                      0x00000000UL                          /**< Mode DEFAULT for FRC_PKTBUF9                */
#define FRC_PKTBUF9_PKTBUF39_DEFAULT                       (_FRC_PKTBUF9_PKTBUF39_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF9        */

/* Bit fields for FRC PKTBUF10 */
#define _FRC_PKTBUF10_RESETVALUE                           0x00000000UL                           /**< Default value for FRC_PKTBUF10              */
#define _FRC_PKTBUF10_MASK                                 0xFFFFFFFFUL                           /**< Mask for FRC_PKTBUF10                       */
#define _FRC_PKTBUF10_PKTBUF40_SHIFT                       0                                      /**< Shift value for FRC_PKTBUF40                */
#define _FRC_PKTBUF10_PKTBUF40_MASK                        0xFFUL                                 /**< Bit mask for FRC_PKTBUF40                   */
#define _FRC_PKTBUF10_PKTBUF40_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF10               */
#define FRC_PKTBUF10_PKTBUF40_DEFAULT                      (_FRC_PKTBUF10_PKTBUF40_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF10       */
#define _FRC_PKTBUF10_PKTBUF41_SHIFT                       8                                      /**< Shift value for FRC_PKTBUF41                */
#define _FRC_PKTBUF10_PKTBUF41_MASK                        0xFF00UL                               /**< Bit mask for FRC_PKTBUF41                   */
#define _FRC_PKTBUF10_PKTBUF41_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF10               */
#define FRC_PKTBUF10_PKTBUF41_DEFAULT                      (_FRC_PKTBUF10_PKTBUF41_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF10       */
#define _FRC_PKTBUF10_PKTBUF42_SHIFT                       16                                     /**< Shift value for FRC_PKTBUF42                */
#define _FRC_PKTBUF10_PKTBUF42_MASK                        0xFF0000UL                             /**< Bit mask for FRC_PKTBUF42                   */
#define _FRC_PKTBUF10_PKTBUF42_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF10               */
#define FRC_PKTBUF10_PKTBUF42_DEFAULT                      (_FRC_PKTBUF10_PKTBUF42_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF10       */
#define _FRC_PKTBUF10_PKTBUF43_SHIFT                       24                                     /**< Shift value for FRC_PKTBUF43                */
#define _FRC_PKTBUF10_PKTBUF43_MASK                        0xFF000000UL                           /**< Bit mask for FRC_PKTBUF43                   */
#define _FRC_PKTBUF10_PKTBUF43_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF10               */
#define FRC_PKTBUF10_PKTBUF43_DEFAULT                      (_FRC_PKTBUF10_PKTBUF43_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF10       */

/* Bit fields for FRC PKTBUF11 */
#define _FRC_PKTBUF11_RESETVALUE                           0x00000000UL                           /**< Default value for FRC_PKTBUF11              */
#define _FRC_PKTBUF11_MASK                                 0xFFFFFFFFUL                           /**< Mask for FRC_PKTBUF11                       */
#define _FRC_PKTBUF11_PKTBUF44_SHIFT                       0                                      /**< Shift value for FRC_PKTBUF44                */
#define _FRC_PKTBUF11_PKTBUF44_MASK                        0xFFUL                                 /**< Bit mask for FRC_PKTBUF44                   */
#define _FRC_PKTBUF11_PKTBUF44_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF11               */
#define FRC_PKTBUF11_PKTBUF44_DEFAULT                      (_FRC_PKTBUF11_PKTBUF44_DEFAULT << 0)  /**< Shifted mode DEFAULT for FRC_PKTBUF11       */
#define _FRC_PKTBUF11_PKTBUF45_SHIFT                       8                                      /**< Shift value for FRC_PKTBUF45                */
#define _FRC_PKTBUF11_PKTBUF45_MASK                        0xFF00UL                               /**< Bit mask for FRC_PKTBUF45                   */
#define _FRC_PKTBUF11_PKTBUF45_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF11               */
#define FRC_PKTBUF11_PKTBUF45_DEFAULT                      (_FRC_PKTBUF11_PKTBUF45_DEFAULT << 8)  /**< Shifted mode DEFAULT for FRC_PKTBUF11       */
#define _FRC_PKTBUF11_PKTBUF46_SHIFT                       16                                     /**< Shift value for FRC_PKTBUF46                */
#define _FRC_PKTBUF11_PKTBUF46_MASK                        0xFF0000UL                             /**< Bit mask for FRC_PKTBUF46                   */
#define _FRC_PKTBUF11_PKTBUF46_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF11               */
#define FRC_PKTBUF11_PKTBUF46_DEFAULT                      (_FRC_PKTBUF11_PKTBUF46_DEFAULT << 16) /**< Shifted mode DEFAULT for FRC_PKTBUF11       */
#define _FRC_PKTBUF11_PKTBUF47_SHIFT                       24                                     /**< Shift value for FRC_PKTBUF47                */
#define _FRC_PKTBUF11_PKTBUF47_MASK                        0xFF000000UL                           /**< Bit mask for FRC_PKTBUF47                   */
#define _FRC_PKTBUF11_PKTBUF47_DEFAULT                     0x00000000UL                           /**< Mode DEFAULT for FRC_PKTBUF11               */
#define FRC_PKTBUF11_PKTBUF47_DEFAULT                      (_FRC_PKTBUF11_PKTBUF47_DEFAULT << 24) /**< Shifted mode DEFAULT for FRC_PKTBUF11       */

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

/** @} End of group EFR32MG22_FRC_BitFields */
/** @} End of group EFR32MG22_FRC */
/** @} End of group Parts */
#endif /* EFR32MG22_FRC_H */
