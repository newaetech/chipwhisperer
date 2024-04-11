/**************************************************************************//**
 * @file
 * @brief EFR32MG22 CRYPTOACC register and bit field definitions
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
#ifndef EFR32MG22_CRYPTOACC_H
#define EFR32MG22_CRYPTOACC_H

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @defgroup EFR32MG22_CRYPTOACC CRYPTOACC
 * @{
 * @brief EFR32MG22 CRYPTOACC Register Declaration.
 *****************************************************************************/

/** CRYPTOACC Register Declaration. */
typedef struct {
  __IOM uint32_t FETCHADDR;                     /**< Fetcher Address                                    */
  uint32_t       RESERVED0[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t FETCHLEN;                      /**< Fetcher Length                                     */
  __IOM uint32_t FETCHTAG;                      /**< Fetcher Tag                                        */
  __IOM uint32_t PUSHADDR;                      /**< Pusher Address                                     */
  uint32_t       RESERVED1[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t PUSHLEN;                       /**< Pusher Length                                      */
  __IOM uint32_t IEN;                           /**< Interrupt Enable                                   */
  uint32_t       RESERVED2[2U];                 /**< Reserved for future use                            */
  __IM uint32_t  IF;                            /**< Interrupt Flags                                    */
  uint32_t       RESERVED3[1U];                 /**< Reserved for future use                            */
  __IOM uint32_t IF_CLR;                        /**< Interrupt status clear                             */
  __IOM uint32_t CTRL;                          /**< Control register                                   */
  __IOM uint32_t CMD;                           /**< Command register                                   */
  __IM uint32_t  STATUS;                        /**< Status register                                    */
  uint32_t       RESERVED4[240U];               /**< Reserved for future use                            */
  __IM uint32_t  INCL_IPS_HW_CFG;               /**< INCL_IPS_HW_CFG                                    */
  __IM uint32_t  BA411E_HW_CFG_1;               /**< BA411E_HW_CFG_1                                    */
  __IM uint32_t  BA411E_HW_CFG_2;               /**< BA411E_HW_CFG_2                                    */
  __IM uint32_t  BA413_HW_CFG;                  /**< BA413_HW_CFG                                       */
  __IM uint32_t  BA418_HW_CFG;                  /**< BA418_HW_CFG                                       */
  __IM uint32_t  BA419_HW_CFG;                  /**< BA419_HW_CFG                                       */
} CRYPTOACC_TypeDef;
/** @} End of group EFR32MG22_CRYPTOACC */

/**************************************************************************//**
 * @addtogroup EFR32MG22_CRYPTOACC
 * @{
 * @defgroup EFR32MG22_CRYPTOACC_BitFields CRYPTOACC Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for CRYPTOACC FETCHADDR */
#define _CRYPTOACC_FETCHADDR_RESETVALUE                           0x00000000UL                             /**< Default value for CRYPTOACC_FETCHADDR       */
#define _CRYPTOACC_FETCHADDR_MASK                                 0xFFFFFFFFUL                             /**< Mask for CRYPTOACC_FETCHADDR                */
#define _CRYPTOACC_FETCHADDR_ADDR_SHIFT                           0                                        /**< Shift value for CRYPTOACC_ADDR              */
#define _CRYPTOACC_FETCHADDR_ADDR_MASK                            0xFFFFFFFFUL                             /**< Bit mask for CRYPTOACC_ADDR                 */
#define _CRYPTOACC_FETCHADDR_ADDR_DEFAULT                         0x00000000UL                             /**< Mode DEFAULT for CRYPTOACC_FETCHADDR        */
#define CRYPTOACC_FETCHADDR_ADDR_DEFAULT                          (_CRYPTOACC_FETCHADDR_ADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_FETCHADDR*/

/* Bit fields for CRYPTOACC FETCHLEN */
#define _CRYPTOACC_FETCHLEN_RESETVALUE                            0x00000000UL                                  /**< Default value for CRYPTOACC_FETCHLEN        */
#define _CRYPTOACC_FETCHLEN_MASK                                  0x3FFFFFFFUL                                  /**< Mask for CRYPTOACC_FETCHLEN                 */
#define _CRYPTOACC_FETCHLEN_LENGTH_SHIFT                          0                                             /**< Shift value for CRYPTOACC_LENGTH            */
#define _CRYPTOACC_FETCHLEN_LENGTH_MASK                           0xFFFFFFFUL                                   /**< Bit mask for CRYPTOACC_LENGTH               */
#define _CRYPTOACC_FETCHLEN_LENGTH_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_FETCHLEN         */
#define CRYPTOACC_FETCHLEN_LENGTH_DEFAULT                         (_CRYPTOACC_FETCHLEN_LENGTH_DEFAULT << 0)     /**< Shifted mode DEFAULT for CRYPTOACC_FETCHLEN */
#define CRYPTOACC_FETCHLEN_CONSTADDR                              (0x1UL << 28)                                 /**< Constant address                            */
#define _CRYPTOACC_FETCHLEN_CONSTADDR_SHIFT                       28                                            /**< Shift value for CRYPTOACC_CONSTADDR         */
#define _CRYPTOACC_FETCHLEN_CONSTADDR_MASK                        0x10000000UL                                  /**< Bit mask for CRYPTOACC_CONSTADDR            */
#define _CRYPTOACC_FETCHLEN_CONSTADDR_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_FETCHLEN         */
#define CRYPTOACC_FETCHLEN_CONSTADDR_DEFAULT                      (_CRYPTOACC_FETCHLEN_CONSTADDR_DEFAULT << 28) /**< Shifted mode DEFAULT for CRYPTOACC_FETCHLEN */
#define CRYPTOACC_FETCHLEN_REALIGN                                (0x1UL << 29)                                 /**< Realign length                              */
#define _CRYPTOACC_FETCHLEN_REALIGN_SHIFT                         29                                            /**< Shift value for CRYPTOACC_REALIGN           */
#define _CRYPTOACC_FETCHLEN_REALIGN_MASK                          0x20000000UL                                  /**< Bit mask for CRYPTOACC_REALIGN              */
#define _CRYPTOACC_FETCHLEN_REALIGN_DEFAULT                       0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_FETCHLEN         */
#define CRYPTOACC_FETCHLEN_REALIGN_DEFAULT                        (_CRYPTOACC_FETCHLEN_REALIGN_DEFAULT << 29)   /**< Shifted mode DEFAULT for CRYPTOACC_FETCHLEN */

/* Bit fields for CRYPTOACC FETCHTAG */
#define _CRYPTOACC_FETCHTAG_RESETVALUE                            0x00000000UL                           /**< Default value for CRYPTOACC_FETCHTAG        */
#define _CRYPTOACC_FETCHTAG_MASK                                  0xFFFFFFFFUL                           /**< Mask for CRYPTOACC_FETCHTAG                 */
#define _CRYPTOACC_FETCHTAG_TAG_SHIFT                             0                                      /**< Shift value for CRYPTOACC_TAG               */
#define _CRYPTOACC_FETCHTAG_TAG_MASK                              0xFFFFFFFFUL                           /**< Bit mask for CRYPTOACC_TAG                  */
#define _CRYPTOACC_FETCHTAG_TAG_DEFAULT                           0x00000000UL                           /**< Mode DEFAULT for CRYPTOACC_FETCHTAG         */
#define CRYPTOACC_FETCHTAG_TAG_DEFAULT                            (_CRYPTOACC_FETCHTAG_TAG_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_FETCHTAG */

/* Bit fields for CRYPTOACC PUSHADDR */
#define _CRYPTOACC_PUSHADDR_RESETVALUE                            0x00000000UL                            /**< Default value for CRYPTOACC_PUSHADDR        */
#define _CRYPTOACC_PUSHADDR_MASK                                  0xFFFFFFFFUL                            /**< Mask for CRYPTOACC_PUSHADDR                 */
#define _CRYPTOACC_PUSHADDR_ADDR_SHIFT                            0                                       /**< Shift value for CRYPTOACC_ADDR              */
#define _CRYPTOACC_PUSHADDR_ADDR_MASK                             0xFFFFFFFFUL                            /**< Bit mask for CRYPTOACC_ADDR                 */
#define _CRYPTOACC_PUSHADDR_ADDR_DEFAULT                          0x00000000UL                            /**< Mode DEFAULT for CRYPTOACC_PUSHADDR         */
#define CRYPTOACC_PUSHADDR_ADDR_DEFAULT                           (_CRYPTOACC_PUSHADDR_ADDR_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_PUSHADDR */

/* Bit fields for CRYPTOACC PUSHLEN */
#define _CRYPTOACC_PUSHLEN_RESETVALUE                             0x00000000UL                                 /**< Default value for CRYPTOACC_PUSHLEN         */
#define _CRYPTOACC_PUSHLEN_MASK                                   0x7FFFFFFFUL                                 /**< Mask for CRYPTOACC_PUSHLEN                  */
#define _CRYPTOACC_PUSHLEN_LENGTH_SHIFT                           0                                            /**< Shift value for CRYPTOACC_LENGTH            */
#define _CRYPTOACC_PUSHLEN_LENGTH_MASK                            0xFFFFFFFUL                                  /**< Bit mask for CRYPTOACC_LENGTH               */
#define _CRYPTOACC_PUSHLEN_LENGTH_DEFAULT                         0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_PUSHLEN          */
#define CRYPTOACC_PUSHLEN_LENGTH_DEFAULT                          (_CRYPTOACC_PUSHLEN_LENGTH_DEFAULT << 0)     /**< Shifted mode DEFAULT for CRYPTOACC_PUSHLEN  */
#define CRYPTOACC_PUSHLEN_CONSTADDR                               (0x1UL << 28)                                /**< Constant address                            */
#define _CRYPTOACC_PUSHLEN_CONSTADDR_SHIFT                        28                                           /**< Shift value for CRYPTOACC_CONSTADDR         */
#define _CRYPTOACC_PUSHLEN_CONSTADDR_MASK                         0x10000000UL                                 /**< Bit mask for CRYPTOACC_CONSTADDR            */
#define _CRYPTOACC_PUSHLEN_CONSTADDR_DEFAULT                      0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_PUSHLEN          */
#define CRYPTOACC_PUSHLEN_CONSTADDR_DEFAULT                       (_CRYPTOACC_PUSHLEN_CONSTADDR_DEFAULT << 28) /**< Shifted mode DEFAULT for CRYPTOACC_PUSHLEN  */
#define CRYPTOACC_PUSHLEN_REALIGN                                 (0x1UL << 29)                                /**< Realign length                              */
#define _CRYPTOACC_PUSHLEN_REALIGN_SHIFT                          29                                           /**< Shift value for CRYPTOACC_REALIGN           */
#define _CRYPTOACC_PUSHLEN_REALIGN_MASK                           0x20000000UL                                 /**< Bit mask for CRYPTOACC_REALIGN              */
#define _CRYPTOACC_PUSHLEN_REALIGN_DEFAULT                        0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_PUSHLEN          */
#define CRYPTOACC_PUSHLEN_REALIGN_DEFAULT                         (_CRYPTOACC_PUSHLEN_REALIGN_DEFAULT << 29)   /**< Shifted mode DEFAULT for CRYPTOACC_PUSHLEN  */
#define CRYPTOACC_PUSHLEN_DISCARD                                 (0x1UL << 30)                                /**< Discard data                                */
#define _CRYPTOACC_PUSHLEN_DISCARD_SHIFT                          30                                           /**< Shift value for CRYPTOACC_DISCARD           */
#define _CRYPTOACC_PUSHLEN_DISCARD_MASK                           0x40000000UL                                 /**< Bit mask for CRYPTOACC_DISCARD              */
#define _CRYPTOACC_PUSHLEN_DISCARD_DEFAULT                        0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_PUSHLEN          */
#define CRYPTOACC_PUSHLEN_DISCARD_DEFAULT                         (_CRYPTOACC_PUSHLEN_DISCARD_DEFAULT << 30)   /**< Shifted mode DEFAULT for CRYPTOACC_PUSHLEN  */

/* Bit fields for CRYPTOACC IEN */
#define _CRYPTOACC_IEN_RESETVALUE                                 0x00000000UL                                       /**< Default value for CRYPTOACC_IEN             */
#define _CRYPTOACC_IEN_MASK                                       0x0000003FUL                                       /**< Mask for CRYPTOACC_IEN                      */
#define CRYPTOACC_IEN_FETCHERENDOFBLOCKIEN                        (0x1UL << 0)                                       /**< End of block interrupt enable               */
#define _CRYPTOACC_IEN_FETCHERENDOFBLOCKIEN_SHIFT                 0                                                  /**< Shift value for CRYPTOACC_FETCHERENDOFBLOCKIEN*/
#define _CRYPTOACC_IEN_FETCHERENDOFBLOCKIEN_MASK                  0x1UL                                              /**< Bit mask for CRYPTOACC_FETCHERENDOFBLOCKIEN */
#define _CRYPTOACC_IEN_FETCHERENDOFBLOCKIEN_DEFAULT               0x00000000UL                                       /**< Mode DEFAULT for CRYPTOACC_IEN              */
#define CRYPTOACC_IEN_FETCHERENDOFBLOCKIEN_DEFAULT                (_CRYPTOACC_IEN_FETCHERENDOFBLOCKIEN_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_IEN      */
#define CRYPTOACC_IEN_FETCHERSTOPPEDIEN                           (0x1UL << 1)                                       /**< Stopped interrupt enable                    */
#define _CRYPTOACC_IEN_FETCHERSTOPPEDIEN_SHIFT                    1                                                  /**< Shift value for CRYPTOACC_FETCHERSTOPPEDIEN */
#define _CRYPTOACC_IEN_FETCHERSTOPPEDIEN_MASK                     0x2UL                                              /**< Bit mask for CRYPTOACC_FETCHERSTOPPEDIEN    */
#define _CRYPTOACC_IEN_FETCHERSTOPPEDIEN_DEFAULT                  0x00000000UL                                       /**< Mode DEFAULT for CRYPTOACC_IEN              */
#define CRYPTOACC_IEN_FETCHERSTOPPEDIEN_DEFAULT                   (_CRYPTOACC_IEN_FETCHERSTOPPEDIEN_DEFAULT << 1)    /**< Shifted mode DEFAULT for CRYPTOACC_IEN      */
#define CRYPTOACC_IEN_FETCHERERRORIEN                             (0x1UL << 2)                                       /**< Error interrupt enable                      */
#define _CRYPTOACC_IEN_FETCHERERRORIEN_SHIFT                      2                                                  /**< Shift value for CRYPTOACC_FETCHERERRORIEN   */
#define _CRYPTOACC_IEN_FETCHERERRORIEN_MASK                       0x4UL                                              /**< Bit mask for CRYPTOACC_FETCHERERRORIEN      */
#define _CRYPTOACC_IEN_FETCHERERRORIEN_DEFAULT                    0x00000000UL                                       /**< Mode DEFAULT for CRYPTOACC_IEN              */
#define CRYPTOACC_IEN_FETCHERERRORIEN_DEFAULT                     (_CRYPTOACC_IEN_FETCHERERRORIEN_DEFAULT << 2)      /**< Shifted mode DEFAULT for CRYPTOACC_IEN      */
#define CRYPTOACC_IEN_PUSHERENDOFBLOCKIEN                         (0x1UL << 3)                                       /**< End of block interrupt enable               */
#define _CRYPTOACC_IEN_PUSHERENDOFBLOCKIEN_SHIFT                  3                                                  /**< Shift value for CRYPTOACC_PUSHERENDOFBLOCKIEN*/
#define _CRYPTOACC_IEN_PUSHERENDOFBLOCKIEN_MASK                   0x8UL                                              /**< Bit mask for CRYPTOACC_PUSHERENDOFBLOCKIEN  */
#define _CRYPTOACC_IEN_PUSHERENDOFBLOCKIEN_DEFAULT                0x00000000UL                                       /**< Mode DEFAULT for CRYPTOACC_IEN              */
#define CRYPTOACC_IEN_PUSHERENDOFBLOCKIEN_DEFAULT                 (_CRYPTOACC_IEN_PUSHERENDOFBLOCKIEN_DEFAULT << 3)  /**< Shifted mode DEFAULT for CRYPTOACC_IEN      */
#define CRYPTOACC_IEN_PUSHERSTOPPEDIEN                            (0x1UL << 4)                                       /**< Stopped interrupt enable                    */
#define _CRYPTOACC_IEN_PUSHERSTOPPEDIEN_SHIFT                     4                                                  /**< Shift value for CRYPTOACC_PUSHERSTOPPEDIEN  */
#define _CRYPTOACC_IEN_PUSHERSTOPPEDIEN_MASK                      0x10UL                                             /**< Bit mask for CRYPTOACC_PUSHERSTOPPEDIEN     */
#define _CRYPTOACC_IEN_PUSHERSTOPPEDIEN_DEFAULT                   0x00000000UL                                       /**< Mode DEFAULT for CRYPTOACC_IEN              */
#define CRYPTOACC_IEN_PUSHERSTOPPEDIEN_DEFAULT                    (_CRYPTOACC_IEN_PUSHERSTOPPEDIEN_DEFAULT << 4)     /**< Shifted mode DEFAULT for CRYPTOACC_IEN      */
#define CRYPTOACC_IEN_PUSHERERRORIEN                              (0x1UL << 5)                                       /**< Error interrupt enable                      */
#define _CRYPTOACC_IEN_PUSHERERRORIEN_SHIFT                       5                                                  /**< Shift value for CRYPTOACC_PUSHERERRORIEN    */
#define _CRYPTOACC_IEN_PUSHERERRORIEN_MASK                        0x20UL                                             /**< Bit mask for CRYPTOACC_PUSHERERRORIEN       */
#define _CRYPTOACC_IEN_PUSHERERRORIEN_DEFAULT                     0x00000000UL                                       /**< Mode DEFAULT for CRYPTOACC_IEN              */
#define CRYPTOACC_IEN_PUSHERERRORIEN_DEFAULT                      (_CRYPTOACC_IEN_PUSHERERRORIEN_DEFAULT << 5)       /**< Shifted mode DEFAULT for CRYPTOACC_IEN      */

/* Bit fields for CRYPTOACC IF */
#define _CRYPTOACC_IF_RESETVALUE                                  0x00000000UL                                     /**< Default value for CRYPTOACC_IF              */
#define _CRYPTOACC_IF_MASK                                        0x0000003FUL                                     /**< Mask for CRYPTOACC_IF                       */
#define CRYPTOACC_IF_FETCHERENDOFBLOCKIF                          (0x1UL << 0)                                     /**< End of block interrupt flag                 */
#define _CRYPTOACC_IF_FETCHERENDOFBLOCKIF_SHIFT                   0                                                /**< Shift value for CRYPTOACC_FETCHERENDOFBLOCKIF*/
#define _CRYPTOACC_IF_FETCHERENDOFBLOCKIF_MASK                    0x1UL                                            /**< Bit mask for CRYPTOACC_FETCHERENDOFBLOCKIF  */
#define _CRYPTOACC_IF_FETCHERENDOFBLOCKIF_DEFAULT                 0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_IF               */
#define CRYPTOACC_IF_FETCHERENDOFBLOCKIF_DEFAULT                  (_CRYPTOACC_IF_FETCHERENDOFBLOCKIF_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_IF       */
#define CRYPTOACC_IF_FETCHERSTOPPEDIF                             (0x1UL << 1)                                     /**< Stopped interrupt flag                      */
#define _CRYPTOACC_IF_FETCHERSTOPPEDIF_SHIFT                      1                                                /**< Shift value for CRYPTOACC_FETCHERSTOPPEDIF  */
#define _CRYPTOACC_IF_FETCHERSTOPPEDIF_MASK                       0x2UL                                            /**< Bit mask for CRYPTOACC_FETCHERSTOPPEDIF     */
#define _CRYPTOACC_IF_FETCHERSTOPPEDIF_DEFAULT                    0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_IF               */
#define CRYPTOACC_IF_FETCHERSTOPPEDIF_DEFAULT                     (_CRYPTOACC_IF_FETCHERSTOPPEDIF_DEFAULT << 1)    /**< Shifted mode DEFAULT for CRYPTOACC_IF       */
#define CRYPTOACC_IF_FETCHERERRORIF                               (0x1UL << 2)                                     /**< Error interrupt flag                        */
#define _CRYPTOACC_IF_FETCHERERRORIF_SHIFT                        2                                                /**< Shift value for CRYPTOACC_FETCHERERRORIF    */
#define _CRYPTOACC_IF_FETCHERERRORIF_MASK                         0x4UL                                            /**< Bit mask for CRYPTOACC_FETCHERERRORIF       */
#define _CRYPTOACC_IF_FETCHERERRORIF_DEFAULT                      0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_IF               */
#define CRYPTOACC_IF_FETCHERERRORIF_DEFAULT                       (_CRYPTOACC_IF_FETCHERERRORIF_DEFAULT << 2)      /**< Shifted mode DEFAULT for CRYPTOACC_IF       */
#define CRYPTOACC_IF_PUSHERENDOFBLOCKIF                           (0x1UL << 3)                                     /**< End of block interrupt flag                 */
#define _CRYPTOACC_IF_PUSHERENDOFBLOCKIF_SHIFT                    3                                                /**< Shift value for CRYPTOACC_PUSHERENDOFBLOCKIF*/
#define _CRYPTOACC_IF_PUSHERENDOFBLOCKIF_MASK                     0x8UL                                            /**< Bit mask for CRYPTOACC_PUSHERENDOFBLOCKIF   */
#define _CRYPTOACC_IF_PUSHERENDOFBLOCKIF_DEFAULT                  0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_IF               */
#define CRYPTOACC_IF_PUSHERENDOFBLOCKIF_DEFAULT                   (_CRYPTOACC_IF_PUSHERENDOFBLOCKIF_DEFAULT << 3)  /**< Shifted mode DEFAULT for CRYPTOACC_IF       */
#define CRYPTOACC_IF_PUSHERSTOPPEDIF                              (0x1UL << 4)                                     /**< Stopped interrupt flag                      */
#define _CRYPTOACC_IF_PUSHERSTOPPEDIF_SHIFT                       4                                                /**< Shift value for CRYPTOACC_PUSHERSTOPPEDIF   */
#define _CRYPTOACC_IF_PUSHERSTOPPEDIF_MASK                        0x10UL                                           /**< Bit mask for CRYPTOACC_PUSHERSTOPPEDIF      */
#define _CRYPTOACC_IF_PUSHERSTOPPEDIF_DEFAULT                     0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_IF               */
#define CRYPTOACC_IF_PUSHERSTOPPEDIF_DEFAULT                      (_CRYPTOACC_IF_PUSHERSTOPPEDIF_DEFAULT << 4)     /**< Shifted mode DEFAULT for CRYPTOACC_IF       */
#define CRYPTOACC_IF_PUSHERERRORIF                                (0x1UL << 5)                                     /**< Error interrupt flag                        */
#define _CRYPTOACC_IF_PUSHERERRORIF_SHIFT                         5                                                /**< Shift value for CRYPTOACC_PUSHERERRORIF     */
#define _CRYPTOACC_IF_PUSHERERRORIF_MASK                          0x20UL                                           /**< Bit mask for CRYPTOACC_PUSHERERRORIF        */
#define _CRYPTOACC_IF_PUSHERERRORIF_DEFAULT                       0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_IF               */
#define CRYPTOACC_IF_PUSHERERRORIF_DEFAULT                        (_CRYPTOACC_IF_PUSHERERRORIF_DEFAULT << 5)       /**< Shifted mode DEFAULT for CRYPTOACC_IF       */

/* Bit fields for CRYPTOACC IF_CLR */
#define _CRYPTOACC_IF_CLR_RESETVALUE                              0x00000000UL                                          /**< Default value for CRYPTOACC_IF_CLR          */
#define _CRYPTOACC_IF_CLR_MASK                                    0x0000003FUL                                          /**< Mask for CRYPTOACC_IF_CLR                   */
#define CRYPTOACC_IF_CLR_FETCHERENDOFBLOCKIFC                     (0x1UL << 0)                                          /**< End of block interrupt flag clear           */
#define _CRYPTOACC_IF_CLR_FETCHERENDOFBLOCKIFC_SHIFT              0                                                     /**< Shift value for CRYPTOACC_FETCHERENDOFBLOCKIFC*/
#define _CRYPTOACC_IF_CLR_FETCHERENDOFBLOCKIFC_MASK               0x1UL                                                 /**< Bit mask for CRYPTOACC_FETCHERENDOFBLOCKIFC */
#define _CRYPTOACC_IF_CLR_FETCHERENDOFBLOCKIFC_DEFAULT            0x00000000UL                                          /**< Mode DEFAULT for CRYPTOACC_IF_CLR           */
#define CRYPTOACC_IF_CLR_FETCHERENDOFBLOCKIFC_DEFAULT             (_CRYPTOACC_IF_CLR_FETCHERENDOFBLOCKIFC_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_IF_CLR   */
#define CRYPTOACC_IF_CLR_FETCHERSTOPPEDIFC                        (0x1UL << 1)                                          /**< Stopped interrupt flag clear                */
#define _CRYPTOACC_IF_CLR_FETCHERSTOPPEDIFC_SHIFT                 1                                                     /**< Shift value for CRYPTOACC_FETCHERSTOPPEDIFC */
#define _CRYPTOACC_IF_CLR_FETCHERSTOPPEDIFC_MASK                  0x2UL                                                 /**< Bit mask for CRYPTOACC_FETCHERSTOPPEDIFC    */
#define _CRYPTOACC_IF_CLR_FETCHERSTOPPEDIFC_DEFAULT               0x00000000UL                                          /**< Mode DEFAULT for CRYPTOACC_IF_CLR           */
#define CRYPTOACC_IF_CLR_FETCHERSTOPPEDIFC_DEFAULT                (_CRYPTOACC_IF_CLR_FETCHERSTOPPEDIFC_DEFAULT << 1)    /**< Shifted mode DEFAULT for CRYPTOACC_IF_CLR   */
#define CRYPTOACC_IF_CLR_FETCHERERRORIFC                          (0x1UL << 2)                                          /**< Error interrupt flag clear                  */
#define _CRYPTOACC_IF_CLR_FETCHERERRORIFC_SHIFT                   2                                                     /**< Shift value for CRYPTOACC_FETCHERERRORIFC   */
#define _CRYPTOACC_IF_CLR_FETCHERERRORIFC_MASK                    0x4UL                                                 /**< Bit mask for CRYPTOACC_FETCHERERRORIFC      */
#define _CRYPTOACC_IF_CLR_FETCHERERRORIFC_DEFAULT                 0x00000000UL                                          /**< Mode DEFAULT for CRYPTOACC_IF_CLR           */
#define CRYPTOACC_IF_CLR_FETCHERERRORIFC_DEFAULT                  (_CRYPTOACC_IF_CLR_FETCHERERRORIFC_DEFAULT << 2)      /**< Shifted mode DEFAULT for CRYPTOACC_IF_CLR   */
#define CRYPTOACC_IF_CLR_PUSHERENDOFBLOCKIFC                      (0x1UL << 3)                                          /**< End of block interrupt flag clear           */
#define _CRYPTOACC_IF_CLR_PUSHERENDOFBLOCKIFC_SHIFT               3                                                     /**< Shift value for CRYPTOACC_PUSHERENDOFBLOCKIFC*/
#define _CRYPTOACC_IF_CLR_PUSHERENDOFBLOCKIFC_MASK                0x8UL                                                 /**< Bit mask for CRYPTOACC_PUSHERENDOFBLOCKIFC  */
#define _CRYPTOACC_IF_CLR_PUSHERENDOFBLOCKIFC_DEFAULT             0x00000000UL                                          /**< Mode DEFAULT for CRYPTOACC_IF_CLR           */
#define CRYPTOACC_IF_CLR_PUSHERENDOFBLOCKIFC_DEFAULT              (_CRYPTOACC_IF_CLR_PUSHERENDOFBLOCKIFC_DEFAULT << 3)  /**< Shifted mode DEFAULT for CRYPTOACC_IF_CLR   */
#define CRYPTOACC_IF_CLR_PUSHERSTOPPEDIFC                         (0x1UL << 4)                                          /**< Stopped interrupt flag clear                */
#define _CRYPTOACC_IF_CLR_PUSHERSTOPPEDIFC_SHIFT                  4                                                     /**< Shift value for CRYPTOACC_PUSHERSTOPPEDIFC  */
#define _CRYPTOACC_IF_CLR_PUSHERSTOPPEDIFC_MASK                   0x10UL                                                /**< Bit mask for CRYPTOACC_PUSHERSTOPPEDIFC     */
#define _CRYPTOACC_IF_CLR_PUSHERSTOPPEDIFC_DEFAULT                0x00000000UL                                          /**< Mode DEFAULT for CRYPTOACC_IF_CLR           */
#define CRYPTOACC_IF_CLR_PUSHERSTOPPEDIFC_DEFAULT                 (_CRYPTOACC_IF_CLR_PUSHERSTOPPEDIFC_DEFAULT << 4)     /**< Shifted mode DEFAULT for CRYPTOACC_IF_CLR   */
#define CRYPTOACC_IF_CLR_PUSHERERRORIFC                           (0x1UL << 5)                                          /**< Error interrupt flag clear                  */
#define _CRYPTOACC_IF_CLR_PUSHERERRORIFC_SHIFT                    5                                                     /**< Shift value for CRYPTOACC_PUSHERERRORIFC    */
#define _CRYPTOACC_IF_CLR_PUSHERERRORIFC_MASK                     0x20UL                                                /**< Bit mask for CRYPTOACC_PUSHERERRORIFC       */
#define _CRYPTOACC_IF_CLR_PUSHERERRORIFC_DEFAULT                  0x00000000UL                                          /**< Mode DEFAULT for CRYPTOACC_IF_CLR           */
#define CRYPTOACC_IF_CLR_PUSHERERRORIFC_DEFAULT                   (_CRYPTOACC_IF_CLR_PUSHERERRORIFC_DEFAULT << 5)       /**< Shifted mode DEFAULT for CRYPTOACC_IF_CLR   */

/* Bit fields for CRYPTOACC CTRL */
#define _CRYPTOACC_CTRL_RESETVALUE                                0x00000000UL                                        /**< Default value for CRYPTOACC_CTRL            */
#define _CRYPTOACC_CTRL_MASK                                      0x0000001FUL                                        /**< Mask for CRYPTOACC_CTRL                     */
#define CRYPTOACC_CTRL_FETCHERSCATTERGATHER                       (0x1UL << 0)                                        /**< Fetcher scatter/gather                      */
#define _CRYPTOACC_CTRL_FETCHERSCATTERGATHER_SHIFT                0                                                   /**< Shift value for CRYPTOACC_FETCHERSCATTERGATHER*/
#define _CRYPTOACC_CTRL_FETCHERSCATTERGATHER_MASK                 0x1UL                                               /**< Bit mask for CRYPTOACC_FETCHERSCATTERGATHER */
#define _CRYPTOACC_CTRL_FETCHERSCATTERGATHER_DEFAULT              0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_CTRL             */
#define CRYPTOACC_CTRL_FETCHERSCATTERGATHER_DEFAULT               (_CRYPTOACC_CTRL_FETCHERSCATTERGATHER_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_CTRL     */
#define CRYPTOACC_CTRL_PUSHERSCATTERGATHER                        (0x1UL << 1)                                        /**< Pusher scatter/gather                       */
#define _CRYPTOACC_CTRL_PUSHERSCATTERGATHER_SHIFT                 1                                                   /**< Shift value for CRYPTOACC_PUSHERSCATTERGATHER*/
#define _CRYPTOACC_CTRL_PUSHERSCATTERGATHER_MASK                  0x2UL                                               /**< Bit mask for CRYPTOACC_PUSHERSCATTERGATHER  */
#define _CRYPTOACC_CTRL_PUSHERSCATTERGATHER_DEFAULT               0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_CTRL             */
#define CRYPTOACC_CTRL_PUSHERSCATTERGATHER_DEFAULT                (_CRYPTOACC_CTRL_PUSHERSCATTERGATHER_DEFAULT << 1)  /**< Shifted mode DEFAULT for CRYPTOACC_CTRL     */
#define CRYPTOACC_CTRL_STOPFETCHER                                (0x1UL << 2)                                        /**< Stop fetcher                                */
#define _CRYPTOACC_CTRL_STOPFETCHER_SHIFT                         2                                                   /**< Shift value for CRYPTOACC_STOPFETCHER       */
#define _CRYPTOACC_CTRL_STOPFETCHER_MASK                          0x4UL                                               /**< Bit mask for CRYPTOACC_STOPFETCHER          */
#define _CRYPTOACC_CTRL_STOPFETCHER_DEFAULT                       0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_CTRL             */
#define CRYPTOACC_CTRL_STOPFETCHER_DEFAULT                        (_CRYPTOACC_CTRL_STOPFETCHER_DEFAULT << 2)          /**< Shifted mode DEFAULT for CRYPTOACC_CTRL     */
#define CRYPTOACC_CTRL_STOPPUSHER                                 (0x1UL << 3)                                        /**< Stop pusher                                 */
#define _CRYPTOACC_CTRL_STOPPUSHER_SHIFT                          3                                                   /**< Shift value for CRYPTOACC_STOPPUSHER        */
#define _CRYPTOACC_CTRL_STOPPUSHER_MASK                           0x8UL                                               /**< Bit mask for CRYPTOACC_STOPPUSHER           */
#define _CRYPTOACC_CTRL_STOPPUSHER_DEFAULT                        0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_CTRL             */
#define CRYPTOACC_CTRL_STOPPUSHER_DEFAULT                         (_CRYPTOACC_CTRL_STOPPUSHER_DEFAULT << 3)           /**< Shifted mode DEFAULT for CRYPTOACC_CTRL     */
#define CRYPTOACC_CTRL_SWRESET                                    (0x1UL << 4)                                        /**< Software reset                              */
#define _CRYPTOACC_CTRL_SWRESET_SHIFT                             4                                                   /**< Shift value for CRYPTOACC_SWRESET           */
#define _CRYPTOACC_CTRL_SWRESET_MASK                              0x10UL                                              /**< Bit mask for CRYPTOACC_SWRESET              */
#define _CRYPTOACC_CTRL_SWRESET_DEFAULT                           0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_CTRL             */
#define CRYPTOACC_CTRL_SWRESET_DEFAULT                            (_CRYPTOACC_CTRL_SWRESET_DEFAULT << 4)              /**< Shifted mode DEFAULT for CRYPTOACC_CTRL     */

/* Bit fields for CRYPTOACC CMD */
#define _CRYPTOACC_CMD_RESETVALUE                                 0x00000000UL                               /**< Default value for CRYPTOACC_CMD             */
#define _CRYPTOACC_CMD_MASK                                       0x00000003UL                               /**< Mask for CRYPTOACC_CMD                      */
#define CRYPTOACC_CMD_STARTFETCHER                                (0x1UL << 0)                               /**< Start fetch                                 */
#define _CRYPTOACC_CMD_STARTFETCHER_SHIFT                         0                                          /**< Shift value for CRYPTOACC_STARTFETCHER      */
#define _CRYPTOACC_CMD_STARTFETCHER_MASK                          0x1UL                                      /**< Bit mask for CRYPTOACC_STARTFETCHER         */
#define _CRYPTOACC_CMD_STARTFETCHER_DEFAULT                       0x00000000UL                               /**< Mode DEFAULT for CRYPTOACC_CMD              */
#define CRYPTOACC_CMD_STARTFETCHER_DEFAULT                        (_CRYPTOACC_CMD_STARTFETCHER_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_CMD      */
#define CRYPTOACC_CMD_STARTPUSHER                                 (0x1UL << 1)                               /**< Start push                                  */
#define _CRYPTOACC_CMD_STARTPUSHER_SHIFT                          1                                          /**< Shift value for CRYPTOACC_STARTPUSHER       */
#define _CRYPTOACC_CMD_STARTPUSHER_MASK                           0x2UL                                      /**< Bit mask for CRYPTOACC_STARTPUSHER          */
#define _CRYPTOACC_CMD_STARTPUSHER_DEFAULT                        0x00000000UL                               /**< Mode DEFAULT for CRYPTOACC_CMD              */
#define CRYPTOACC_CMD_STARTPUSHER_DEFAULT                         (_CRYPTOACC_CMD_STARTPUSHER_DEFAULT << 1)  /**< Shifted mode DEFAULT for CRYPTOACC_CMD      */

/* Bit fields for CRYPTOACC STATUS */
#define _CRYPTOACC_STATUS_RESETVALUE                              0x00000000UL                                  /**< Default value for CRYPTOACC_STATUS          */
#define _CRYPTOACC_STATUS_MASK                                    0xFFFF0073UL                                  /**< Mask for CRYPTOACC_STATUS                   */
#define CRYPTOACC_STATUS_FETCHERBSY                               (0x1UL << 0)                                  /**< Fetcher busy                                */
#define _CRYPTOACC_STATUS_FETCHERBSY_SHIFT                        0                                             /**< Shift value for CRYPTOACC_FETCHERBSY        */
#define _CRYPTOACC_STATUS_FETCHERBSY_MASK                         0x1UL                                         /**< Bit mask for CRYPTOACC_FETCHERBSY           */
#define _CRYPTOACC_STATUS_FETCHERBSY_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_STATUS           */
#define CRYPTOACC_STATUS_FETCHERBSY_DEFAULT                       (_CRYPTOACC_STATUS_FETCHERBSY_DEFAULT << 0)   /**< Shifted mode DEFAULT for CRYPTOACC_STATUS   */
#define CRYPTOACC_STATUS_PUSHERBSY                                (0x1UL << 1)                                  /**< Pusher busy                                 */
#define _CRYPTOACC_STATUS_PUSHERBSY_SHIFT                         1                                             /**< Shift value for CRYPTOACC_PUSHERBSY         */
#define _CRYPTOACC_STATUS_PUSHERBSY_MASK                          0x2UL                                         /**< Bit mask for CRYPTOACC_PUSHERBSY            */
#define _CRYPTOACC_STATUS_PUSHERBSY_DEFAULT                       0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_STATUS           */
#define CRYPTOACC_STATUS_PUSHERBSY_DEFAULT                        (_CRYPTOACC_STATUS_PUSHERBSY_DEFAULT << 1)    /**< Shifted mode DEFAULT for CRYPTOACC_STATUS   */
#define CRYPTOACC_STATUS_NOTEMPTY                                 (0x1UL << 4)                                  /**< Not empty flag from input FIFO (fetcher)    */
#define _CRYPTOACC_STATUS_NOTEMPTY_SHIFT                          4                                             /**< Shift value for CRYPTOACC_NOTEMPTY          */
#define _CRYPTOACC_STATUS_NOTEMPTY_MASK                           0x10UL                                        /**< Bit mask for CRYPTOACC_NOTEMPTY             */
#define _CRYPTOACC_STATUS_NOTEMPTY_DEFAULT                        0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_STATUS           */
#define CRYPTOACC_STATUS_NOTEMPTY_DEFAULT                         (_CRYPTOACC_STATUS_NOTEMPTY_DEFAULT << 4)     /**< Shifted mode DEFAULT for CRYPTOACC_STATUS   */
#define CRYPTOACC_STATUS_WAITING                                  (0x1UL << 5)                                  /**< Pusher waiting for FIFO                     */
#define _CRYPTOACC_STATUS_WAITING_SHIFT                           5                                             /**< Shift value for CRYPTOACC_WAITING           */
#define _CRYPTOACC_STATUS_WAITING_MASK                            0x20UL                                        /**< Bit mask for CRYPTOACC_WAITING              */
#define _CRYPTOACC_STATUS_WAITING_DEFAULT                         0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_STATUS           */
#define CRYPTOACC_STATUS_WAITING_DEFAULT                          (_CRYPTOACC_STATUS_WAITING_DEFAULT << 5)      /**< Shifted mode DEFAULT for CRYPTOACC_STATUS   */
#define CRYPTOACC_STATUS_SOFTRSTBSY                               (0x1UL << 6)                                  /**< Software reset busy                         */
#define _CRYPTOACC_STATUS_SOFTRSTBSY_SHIFT                        6                                             /**< Shift value for CRYPTOACC_SOFTRSTBSY        */
#define _CRYPTOACC_STATUS_SOFTRSTBSY_MASK                         0x40UL                                        /**< Bit mask for CRYPTOACC_SOFTRSTBSY           */
#define _CRYPTOACC_STATUS_SOFTRSTBSY_DEFAULT                      0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_STATUS           */
#define CRYPTOACC_STATUS_SOFTRSTBSY_DEFAULT                       (_CRYPTOACC_STATUS_SOFTRSTBSY_DEFAULT << 6)   /**< Shifted mode DEFAULT for CRYPTOACC_STATUS   */
#define _CRYPTOACC_STATUS_FIFODATANUM_SHIFT                       16                                            /**< Shift value for CRYPTOACC_FIFODATANUM       */
#define _CRYPTOACC_STATUS_FIFODATANUM_MASK                        0xFFFF0000UL                                  /**< Bit mask for CRYPTOACC_FIFODATANUM          */
#define _CRYPTOACC_STATUS_FIFODATANUM_DEFAULT                     0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_STATUS           */
#define CRYPTOACC_STATUS_FIFODATANUM_DEFAULT                      (_CRYPTOACC_STATUS_FIFODATANUM_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_STATUS   */

/* Bit fields for CRYPTOACC INCL_IPS_HW_CFG */
#define _CRYPTOACC_INCL_IPS_HW_CFG_RESETVALUE                     0x00000611UL                                                  /**< Default value for CRYPTOACC_INCL_IPS_HW_CFG */
#define _CRYPTOACC_INCL_IPS_HW_CFG_MASK                           0x000007FFUL                                                  /**< Mask for CRYPTOACC_INCL_IPS_HW_CFG          */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAES                    (0x1UL << 0)                                                  /**< Generic g_IncludeAES value                  */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAES_SHIFT             0                                                             /**< Shift value for CRYPTOACC_g_IncludeAES      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAES_MASK              0x1UL                                                         /**< Bit mask for CRYPTOACC_g_IncludeAES         */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAES_DEFAULT           0x00000001UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAES_DEFAULT            (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAES_DEFAULT << 0)        /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESGCM                 (0x1UL << 1)                                                  /**< Generic g_IncludeAESGCM value               */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESGCM_SHIFT          1                                                             /**< Shift value for CRYPTOACC_g_IncludeAESGCM   */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESGCM_MASK           0x2UL                                                         /**< Bit mask for CRYPTOACC_g_IncludeAESGCM      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESGCM_DEFAULT        0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESGCM_DEFAULT         (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESGCM_DEFAULT << 1)     /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESXTS                 (0x1UL << 2)                                                  /**< Generic g_IncludeAESXTS value               */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESXTS_SHIFT          2                                                             /**< Shift value for CRYPTOACC_g_IncludeAESXTS   */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESXTS_MASK           0x4UL                                                         /**< Bit mask for CRYPTOACC_g_IncludeAESXTS      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESXTS_DEFAULT        0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESXTS_DEFAULT         (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeAESXTS_DEFAULT << 2)     /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeDES                    (0x1UL << 3)                                                  /**< Generic g_IncludeDES value                  */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeDES_SHIFT             3                                                             /**< Shift value for CRYPTOACC_g_IncludeDES      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeDES_MASK              0x8UL                                                         /**< Bit mask for CRYPTOACC_g_IncludeDES         */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeDES_DEFAULT           0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeDES_DEFAULT            (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeDES_DEFAULT << 3)        /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeHASH                   (0x1UL << 4)                                                  /**< Generic g_IncludeHASH value                 */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeHASH_SHIFT            4                                                             /**< Shift value for CRYPTOACC_g_IncludeHASH     */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeHASH_MASK             0x10UL                                                        /**< Bit mask for CRYPTOACC_g_IncludeHASH        */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeHASH_DEFAULT          0x00000001UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeHASH_DEFAULT           (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeHASH_DEFAULT << 4)       /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeChachaPoly             (0x1UL << 5)                                                  /**< Generic g_IncludeChachaPoly value           */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeChachaPoly_SHIFT      5                                                             /**< Shift value for CRYPTOACC_g_IncludeChachaPoly*/
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeChachaPoly_MASK       0x20UL                                                        /**< Bit mask for CRYPTOACC_g_IncludeChachaPoly  */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeChachaPoly_DEFAULT    0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeChachaPoly_DEFAULT     (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeChachaPoly_DEFAULT << 5) /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSHA3                   (0x1UL << 6)                                                  /**< Generic g_IncludeSHA3 value                 */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSHA3_SHIFT            6                                                             /**< Shift value for CRYPTOACC_g_IncludeSHA3     */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSHA3_MASK             0x40UL                                                        /**< Bit mask for CRYPTOACC_g_IncludeSHA3        */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSHA3_DEFAULT          0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSHA3_DEFAULT           (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSHA3_DEFAULT << 6)       /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeZUC                    (0x1UL << 7)                                                  /**< Generic g_IncludeZUC value                  */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeZUC_SHIFT             7                                                             /**< Shift value for CRYPTOACC_g_IncludeZUC      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeZUC_MASK              0x80UL                                                        /**< Bit mask for CRYPTOACC_g_IncludeZUC         */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeZUC_DEFAULT           0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeZUC_DEFAULT            (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeZUC_DEFAULT << 7)        /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSM4                    (0x1UL << 8)                                                  /**< Generic g_IncludeSM4 value                  */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSM4_SHIFT             8                                                             /**< Shift value for CRYPTOACC_g_IncludeSM4      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSM4_MASK              0x100UL                                                       /**< Bit mask for CRYPTOACC_g_IncludeSM4         */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSM4_DEFAULT           0x00000000UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSM4_DEFAULT            (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeSM4_DEFAULT << 8)        /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludePKE                    (0x1UL << 9)                                                  /**< Generic g_IncludePKE value                  */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludePKE_SHIFT             9                                                             /**< Shift value for CRYPTOACC_g_IncludePKE      */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludePKE_MASK              0x200UL                                                       /**< Bit mask for CRYPTOACC_g_IncludePKE         */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludePKE_DEFAULT           0x00000001UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludePKE_DEFAULT            (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludePKE_DEFAULT << 9)        /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeNDRNG                  (0x1UL << 10)                                                 /**< Generic g_IncludeNDRNG value                */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeNDRNG_SHIFT           10                                                            /**< Shift value for CRYPTOACC_g_IncludeNDRNG    */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeNDRNG_MASK            0x400UL                                                       /**< Bit mask for CRYPTOACC_g_IncludeNDRNG       */
#define _CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeNDRNG_DEFAULT         0x00000001UL                                                  /**< Mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG  */
#define CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeNDRNG_DEFAULT          (_CRYPTOACC_INCL_IPS_HW_CFG_g_IncludeNDRNG_DEFAULT << 10)     /**< Shifted mode DEFAULT for CRYPTOACC_INCL_IPS_HW_CFG*/

/* Bit fields for CRYPTOACC BA411E_HW_CFG_1 */
#define _CRYPTOACC_BA411E_HW_CFG_1_RESETVALUE                     0x0700017FUL                                             /**< Default value for CRYPTOACC_BA411E_HW_CFG_1 */
#define _CRYPTOACC_BA411E_HW_CFG_1_MASK                           0x070301FFUL                                             /**< Mask for CRYPTOACC_BA411E_HW_CFG_1          */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_AesModesPoss_SHIFT           0                                                        /**< Shift value for CRYPTOACC_g_AesModesPoss    */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_AesModesPoss_MASK            0x1FFUL                                                  /**< Bit mask for CRYPTOACC_g_AesModesPoss       */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_AesModesPoss_DEFAULT         0x0000017FUL                                             /**< Mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1  */
#define CRYPTOACC_BA411E_HW_CFG_1_g_AesModesPoss_DEFAULT          (_CRYPTOACC_BA411E_HW_CFG_1_g_AesModesPoss_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1*/
#define CRYPTOACC_BA411E_HW_CFG_1_g_CS                            (0x1UL << 16)                                            /**< Generic g_CS value                          */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_CS_SHIFT                     16                                                       /**< Shift value for CRYPTOACC_g_CS              */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_CS_MASK                      0x10000UL                                                /**< Bit mask for CRYPTOACC_g_CS                 */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_CS_DEFAULT                   0x00000000UL                                             /**< Mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1  */
#define CRYPTOACC_BA411E_HW_CFG_1_g_CS_DEFAULT                    (_CRYPTOACC_BA411E_HW_CFG_1_g_CS_DEFAULT << 16)          /**< Shifted mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1*/
#define CRYPTOACC_BA411E_HW_CFG_1_g_UseMasking                    (0x1UL << 17)                                            /**< Generic g_UseMasking value                  */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_UseMasking_SHIFT             17                                                       /**< Shift value for CRYPTOACC_g_UseMasking      */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_UseMasking_MASK              0x20000UL                                                /**< Bit mask for CRYPTOACC_g_UseMasking         */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_UseMasking_DEFAULT           0x00000000UL                                             /**< Mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1  */
#define CRYPTOACC_BA411E_HW_CFG_1_g_UseMasking_DEFAULT            (_CRYPTOACC_BA411E_HW_CFG_1_g_UseMasking_DEFAULT << 17)  /**< Shifted mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1*/
#define _CRYPTOACC_BA411E_HW_CFG_1_g_Keysize_SHIFT                24                                                       /**< Shift value for CRYPTOACC_g_Keysize         */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_Keysize_MASK                 0x7000000UL                                              /**< Bit mask for CRYPTOACC_g_Keysize            */
#define _CRYPTOACC_BA411E_HW_CFG_1_g_Keysize_DEFAULT              0x00000007UL                                             /**< Mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1  */
#define CRYPTOACC_BA411E_HW_CFG_1_g_Keysize_DEFAULT               (_CRYPTOACC_BA411E_HW_CFG_1_g_Keysize_DEFAULT << 24)     /**< Shifted mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_1*/

/* Bit fields for CRYPTOACC BA411E_HW_CFG_2 */
#define _CRYPTOACC_BA411E_HW_CFG_2_RESETVALUE                     0x00000080UL                                        /**< Default value for CRYPTOACC_BA411E_HW_CFG_2 */
#define _CRYPTOACC_BA411E_HW_CFG_2_MASK                           0x0000FFFFUL                                        /**< Mask for CRYPTOACC_BA411E_HW_CFG_2          */
#define _CRYPTOACC_BA411E_HW_CFG_2_g_CtrSize_SHIFT                0                                                   /**< Shift value for CRYPTOACC_g_CtrSize         */
#define _CRYPTOACC_BA411E_HW_CFG_2_g_CtrSize_MASK                 0xFFFFUL                                            /**< Bit mask for CRYPTOACC_g_CtrSize            */
#define _CRYPTOACC_BA411E_HW_CFG_2_g_CtrSize_DEFAULT              0x00000080UL                                        /**< Mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_2  */
#define CRYPTOACC_BA411E_HW_CFG_2_g_CtrSize_DEFAULT               (_CRYPTOACC_BA411E_HW_CFG_2_g_CtrSize_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_BA411E_HW_CFG_2*/

/* Bit fields for CRYPTOACC BA413_HW_CFG */
#define _CRYPTOACC_BA413_HW_CFG_RESETVALUE                        0x0003007FUL                                               /**< Default value for CRYPTOACC_BA413_HW_CFG    */
#define _CRYPTOACC_BA413_HW_CFG_MASK                              0x0007007FUL                                               /**< Mask for CRYPTOACC_BA413_HW_CFG             */
#define _CRYPTOACC_BA413_HW_CFG_g_HashMaskFunc_SHIFT              0                                                          /**< Shift value for CRYPTOACC_g_HashMaskFunc    */
#define _CRYPTOACC_BA413_HW_CFG_g_HashMaskFunc_MASK               0x7FUL                                                     /**< Bit mask for CRYPTOACC_g_HashMaskFunc       */
#define _CRYPTOACC_BA413_HW_CFG_g_HashMaskFunc_DEFAULT            0x0000007FUL                                               /**< Mode DEFAULT for CRYPTOACC_BA413_HW_CFG     */
#define CRYPTOACC_BA413_HW_CFG_g_HashMaskFunc_DEFAULT             (_CRYPTOACC_BA413_HW_CFG_g_HashMaskFunc_DEFAULT << 0)      /**< Shifted mode DEFAULT for CRYPTOACC_BA413_HW_CFG*/
#define CRYPTOACC_BA413_HW_CFG_g_HashPadding                      (0x1UL << 16)                                              /**< Generic g_HashPadding value                 */
#define _CRYPTOACC_BA413_HW_CFG_g_HashPadding_SHIFT               16                                                         /**< Shift value for CRYPTOACC_g_HashPadding     */
#define _CRYPTOACC_BA413_HW_CFG_g_HashPadding_MASK                0x10000UL                                                  /**< Bit mask for CRYPTOACC_g_HashPadding        */
#define _CRYPTOACC_BA413_HW_CFG_g_HashPadding_DEFAULT             0x00000001UL                                               /**< Mode DEFAULT for CRYPTOACC_BA413_HW_CFG     */
#define CRYPTOACC_BA413_HW_CFG_g_HashPadding_DEFAULT              (_CRYPTOACC_BA413_HW_CFG_g_HashPadding_DEFAULT << 16)      /**< Shifted mode DEFAULT for CRYPTOACC_BA413_HW_CFG*/
#define CRYPTOACC_BA413_HW_CFG_g_HMAC_enabled                     (0x1UL << 17)                                              /**< Generic g_HMAC_enabled value                */
#define _CRYPTOACC_BA413_HW_CFG_g_HMAC_enabled_SHIFT              17                                                         /**< Shift value for CRYPTOACC_g_HMAC_enabled    */
#define _CRYPTOACC_BA413_HW_CFG_g_HMAC_enabled_MASK               0x20000UL                                                  /**< Bit mask for CRYPTOACC_g_HMAC_enabled       */
#define _CRYPTOACC_BA413_HW_CFG_g_HMAC_enabled_DEFAULT            0x00000001UL                                               /**< Mode DEFAULT for CRYPTOACC_BA413_HW_CFG     */
#define CRYPTOACC_BA413_HW_CFG_g_HMAC_enabled_DEFAULT             (_CRYPTOACC_BA413_HW_CFG_g_HMAC_enabled_DEFAULT << 17)     /**< Shifted mode DEFAULT for CRYPTOACC_BA413_HW_CFG*/
#define CRYPTOACC_BA413_HW_CFG_g_HashVerifyDigest                 (0x1UL << 18)                                              /**< Generic g_HashVerifyDigest value            */
#define _CRYPTOACC_BA413_HW_CFG_g_HashVerifyDigest_SHIFT          18                                                         /**< Shift value for CRYPTOACC_g_HashVerifyDigest*/
#define _CRYPTOACC_BA413_HW_CFG_g_HashVerifyDigest_MASK           0x40000UL                                                  /**< Bit mask for CRYPTOACC_g_HashVerifyDigest   */
#define _CRYPTOACC_BA413_HW_CFG_g_HashVerifyDigest_DEFAULT        0x00000000UL                                               /**< Mode DEFAULT for CRYPTOACC_BA413_HW_CFG     */
#define CRYPTOACC_BA413_HW_CFG_g_HashVerifyDigest_DEFAULT         (_CRYPTOACC_BA413_HW_CFG_g_HashVerifyDigest_DEFAULT << 18) /**< Shifted mode DEFAULT for CRYPTOACC_BA413_HW_CFG*/

/* Bit fields for CRYPTOACC BA418_HW_CFG */
#define _CRYPTOACC_BA418_HW_CFG_RESETVALUE                        0x00000001UL                                        /**< Default value for CRYPTOACC_BA418_HW_CFG    */
#define _CRYPTOACC_BA418_HW_CFG_MASK                              0x00000001UL                                        /**< Mask for CRYPTOACC_BA418_HW_CFG             */
#define CRYPTOACC_BA418_HW_CFG_g_Sha3CtxtEn                       (0x1UL << 0)                                        /**< Generic g_Sha3CtxtEn value                  */
#define _CRYPTOACC_BA418_HW_CFG_g_Sha3CtxtEn_SHIFT                0                                                   /**< Shift value for CRYPTOACC_g_Sha3CtxtEn      */
#define _CRYPTOACC_BA418_HW_CFG_g_Sha3CtxtEn_MASK                 0x1UL                                               /**< Bit mask for CRYPTOACC_g_Sha3CtxtEn         */
#define _CRYPTOACC_BA418_HW_CFG_g_Sha3CtxtEn_DEFAULT              0x00000001UL                                        /**< Mode DEFAULT for CRYPTOACC_BA418_HW_CFG     */
#define CRYPTOACC_BA418_HW_CFG_g_Sha3CtxtEn_DEFAULT               (_CRYPTOACC_BA418_HW_CFG_g_Sha3CtxtEn_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_BA418_HW_CFG*/

/* Bit fields for CRYPTOACC BA419_HW_CFG */
#define _CRYPTOACC_BA419_HW_CFG_RESETVALUE                        0x0000005FUL                                          /**< Default value for CRYPTOACC_BA419_HW_CFG    */
#define _CRYPTOACC_BA419_HW_CFG_MASK                              0x0000007FUL                                          /**< Mask for CRYPTOACC_BA419_HW_CFG             */
#define _CRYPTOACC_BA419_HW_CFG_g_SM4ModesPoss_SHIFT              0                                                     /**< Shift value for CRYPTOACC_g_SM4ModesPoss    */
#define _CRYPTOACC_BA419_HW_CFG_g_SM4ModesPoss_MASK               0x7FUL                                                /**< Bit mask for CRYPTOACC_g_SM4ModesPoss       */
#define _CRYPTOACC_BA419_HW_CFG_g_SM4ModesPoss_DEFAULT            0x0000005FUL                                          /**< Mode DEFAULT for CRYPTOACC_BA419_HW_CFG     */
#define CRYPTOACC_BA419_HW_CFG_g_SM4ModesPoss_DEFAULT             (_CRYPTOACC_BA419_HW_CFG_g_SM4ModesPoss_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_BA419_HW_CFG*/

/** @} End of group EFR32MG22_CRYPTOACC_BitFields */
/** @} End of group EFR32MG22_CRYPTOACC */
/**************************************************************************//**
 * @defgroup EFR32MG22_CRYPTOACC_PKCTRL CRYPTOACC_PKCTRL
 * @{
 * @brief EFR32MG22 CRYPTOACC_PKCTRL Register Declaration.
 *****************************************************************************/

/** CRYPTOACC_PKCTRL Register Declaration. */
typedef struct {
  __IOM uint32_t POINTER;                            /**< Pointers                                           */
  __IOM uint32_t COMMAND;                            /**< Command                                            */
  __IOM uint32_t PKCTRL;                             /**< Control                                            */
  __IM uint32_t  PKSTATUS;                           /**< Status                                             */
  __IM uint32_t  VERSION;                            /**< Version                                            */
  __IM uint32_t  TIMER;                              /**< Timer                                              */
} CRYPTOACC_PKCTRL_TypeDef;
/** @} End of group EFR32MG22_CRYPTOACC_PKCTRL */

/**************************************************************************//**
 * @addtogroup EFR32MG22_CRYPTOACC_PKCTRL
 * @{
 * @defgroup EFR32MG22_CRYPTOACC_PKCTRL_BitFields CRYPTOACC_PKCTRL Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for CRYPTOACC POINTER */
#define _CRYPTOACC_POINTER_RESETVALUE                  0x00000000UL                              /**< Default value for CRYPTOACC_POINTER         */
#define _CRYPTOACC_POINTER_MASK                        0x0F0F0F0FUL                              /**< Mask for CRYPTOACC_POINTER                  */
#define _CRYPTOACC_POINTER_OPPTRA_SHIFT                0                                         /**< Shift value for CRYPTOACC_OPPTRA            */
#define _CRYPTOACC_POINTER_OPPTRA_MASK                 0xFUL                                     /**< Bit mask for CRYPTOACC_OPPTRA               */
#define _CRYPTOACC_POINTER_OPPTRA_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for CRYPTOACC_POINTER          */
#define CRYPTOACC_POINTER_OPPTRA_DEFAULT               (_CRYPTOACC_POINTER_OPPTRA_DEFAULT << 0)  /**< Shifted mode DEFAULT for CRYPTOACC_POINTER  */
#define _CRYPTOACC_POINTER_OPPTRB_SHIFT                8                                         /**< Shift value for CRYPTOACC_OPPTRB            */
#define _CRYPTOACC_POINTER_OPPTRB_MASK                 0xF00UL                                   /**< Bit mask for CRYPTOACC_OPPTRB               */
#define _CRYPTOACC_POINTER_OPPTRB_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for CRYPTOACC_POINTER          */
#define CRYPTOACC_POINTER_OPPTRB_DEFAULT               (_CRYPTOACC_POINTER_OPPTRB_DEFAULT << 8)  /**< Shifted mode DEFAULT for CRYPTOACC_POINTER  */
#define _CRYPTOACC_POINTER_OPPTRC_SHIFT                16                                        /**< Shift value for CRYPTOACC_OPPTRC            */
#define _CRYPTOACC_POINTER_OPPTRC_MASK                 0xF0000UL                                 /**< Bit mask for CRYPTOACC_OPPTRC               */
#define _CRYPTOACC_POINTER_OPPTRC_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for CRYPTOACC_POINTER          */
#define CRYPTOACC_POINTER_OPPTRC_DEFAULT               (_CRYPTOACC_POINTER_OPPTRC_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_POINTER  */
#define _CRYPTOACC_POINTER_OPPTRN_SHIFT                24                                        /**< Shift value for CRYPTOACC_OPPTRN            */
#define _CRYPTOACC_POINTER_OPPTRN_MASK                 0xF000000UL                               /**< Bit mask for CRYPTOACC_OPPTRN               */
#define _CRYPTOACC_POINTER_OPPTRN_DEFAULT              0x00000000UL                              /**< Mode DEFAULT for CRYPTOACC_POINTER          */
#define CRYPTOACC_POINTER_OPPTRN_DEFAULT               (_CRYPTOACC_POINTER_OPPTRN_DEFAULT << 24) /**< Shifted mode DEFAULT for CRYPTOACC_POINTER  */

/* Bit fields for CRYPTOACC COMMAND */
#define _CRYPTOACC_COMMAND_RESETVALUE                  0x00000000UL                                 /**< Default value for CRYPTOACC_COMMAND         */
#define _CRYPTOACC_COMMAND_MASK                        0xFC77FFFFUL                                 /**< Mask for CRYPTOACC_COMMAND                  */
#define _CRYPTOACC_COMMAND_OPERATION_SHIFT             0                                            /**< Shift value for CRYPTOACC_OPERATION         */
#define _CRYPTOACC_COMMAND_OPERATION_MASK              0x7FUL                                       /**< Bit mask for CRYPTOACC_OPERATION            */
#define _CRYPTOACC_COMMAND_OPERATION_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define CRYPTOACC_COMMAND_OPERATION_DEFAULT            (_CRYPTOACC_COMMAND_OPERATION_DEFAULT << 0)  /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_FIELD                        (0x1UL << 7)                                 /**< Field                                       */
#define _CRYPTOACC_COMMAND_FIELD_SHIFT                 7                                            /**< Shift value for CRYPTOACC_FIELD             */
#define _CRYPTOACC_COMMAND_FIELD_MASK                  0x80UL                                       /**< Bit mask for CRYPTOACC_FIELD                */
#define _CRYPTOACC_COMMAND_FIELD_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define _CRYPTOACC_COMMAND_FIELD_GFP                   0x00000000UL                                 /**< Mode GFP for CRYPTOACC_COMMAND              */
#define _CRYPTOACC_COMMAND_FIELD_GF2M                  0x00000001UL                                 /**< Mode GF2M for CRYPTOACC_COMMAND             */
#define CRYPTOACC_COMMAND_FIELD_DEFAULT                (_CRYPTOACC_COMMAND_FIELD_DEFAULT << 7)      /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_FIELD_GFP                    (_CRYPTOACC_COMMAND_FIELD_GFP << 7)          /**< Shifted mode GFP for CRYPTOACC_COMMAND      */
#define CRYPTOACC_COMMAND_FIELD_GF2M                   (_CRYPTOACC_COMMAND_FIELD_GF2M << 7)         /**< Shifted mode GF2M for CRYPTOACC_COMMAND     */
#define _CRYPTOACC_COMMAND_SIZE_SHIFT                  8                                            /**< Shift value for CRYPTOACC_SIZE              */
#define _CRYPTOACC_COMMAND_SIZE_MASK                   0x7FF00UL                                    /**< Bit mask for CRYPTOACC_SIZE                 */
#define _CRYPTOACC_COMMAND_SIZE_DEFAULT                0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define CRYPTOACC_COMMAND_SIZE_DEFAULT                 (_CRYPTOACC_COMMAND_SIZE_DEFAULT << 8)       /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define _CRYPTOACC_COMMAND_SELCURVE_SHIFT              20                                           /**< Shift value for CRYPTOACC_SELCURVE          */
#define _CRYPTOACC_COMMAND_SELCURVE_MASK               0x700000UL                                   /**< Bit mask for CRYPTOACC_SELCURVE             */
#define _CRYPTOACC_COMMAND_SELCURVE_DEFAULT            0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define _CRYPTOACC_COMMAND_SELCURVE_NONE               0x00000000UL                                 /**< Mode NONE for CRYPTOACC_COMMAND             */
#define _CRYPTOACC_COMMAND_SELCURVE_P256               0x00000001UL                                 /**< Mode P256 for CRYPTOACC_COMMAND             */
#define _CRYPTOACC_COMMAND_SELCURVE_P384               0x00000002UL                                 /**< Mode P384 for CRYPTOACC_COMMAND             */
#define _CRYPTOACC_COMMAND_SELCURVE_P521               0x00000003UL                                 /**< Mode P521 for CRYPTOACC_COMMAND             */
#define _CRYPTOACC_COMMAND_SELCURVE_P192               0x00000004UL                                 /**< Mode P192 for CRYPTOACC_COMMAND             */
#define _CRYPTOACC_COMMAND_SELCURVE_C25519             0x00000005UL                                 /**< Mode C25519 for CRYPTOACC_COMMAND           */
#define CRYPTOACC_COMMAND_SELCURVE_DEFAULT             (_CRYPTOACC_COMMAND_SELCURVE_DEFAULT << 20)  /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_SELCURVE_NONE                (_CRYPTOACC_COMMAND_SELCURVE_NONE << 20)     /**< Shifted mode NONE for CRYPTOACC_COMMAND     */
#define CRYPTOACC_COMMAND_SELCURVE_P256                (_CRYPTOACC_COMMAND_SELCURVE_P256 << 20)     /**< Shifted mode P256 for CRYPTOACC_COMMAND     */
#define CRYPTOACC_COMMAND_SELCURVE_P384                (_CRYPTOACC_COMMAND_SELCURVE_P384 << 20)     /**< Shifted mode P384 for CRYPTOACC_COMMAND     */
#define CRYPTOACC_COMMAND_SELCURVE_P521                (_CRYPTOACC_COMMAND_SELCURVE_P521 << 20)     /**< Shifted mode P521 for CRYPTOACC_COMMAND     */
#define CRYPTOACC_COMMAND_SELCURVE_P192                (_CRYPTOACC_COMMAND_SELCURVE_P192 << 20)     /**< Shifted mode P192 for CRYPTOACC_COMMAND     */
#define CRYPTOACC_COMMAND_SELCURVE_C25519              (_CRYPTOACC_COMMAND_SELCURVE_C25519 << 20)   /**< Shifted mode C25519 for CRYPTOACC_COMMAND   */
#define CRYPTOACC_COMMAND_EDWARDS                      (0x1UL << 26)                                /**< Edwards Curve Enable                        */
#define _CRYPTOACC_COMMAND_EDWARDS_SHIFT               26                                           /**< Shift value for CRYPTOACC_EDWARDS           */
#define _CRYPTOACC_COMMAND_EDWARDS_MASK                0x4000000UL                                  /**< Bit mask for CRYPTOACC_EDWARDS              */
#define _CRYPTOACC_COMMAND_EDWARDS_DEFAULT             0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define CRYPTOACC_COMMAND_EDWARDS_DEFAULT              (_CRYPTOACC_COMMAND_EDWARDS_DEFAULT << 26)   /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_BUFSEL                       (0x1UL << 27)                                /**< Buffer Select                               */
#define _CRYPTOACC_COMMAND_BUFSEL_SHIFT                27                                           /**< Shift value for CRYPTOACC_BUFSEL            */
#define _CRYPTOACC_COMMAND_BUFSEL_MASK                 0x8000000UL                                  /**< Bit mask for CRYPTOACC_BUFSEL               */
#define _CRYPTOACC_COMMAND_BUFSEL_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define _CRYPTOACC_COMMAND_BUFSEL_MEM0                 0x00000000UL                                 /**< Mode MEM0 for CRYPTOACC_COMMAND             */
#define CRYPTOACC_COMMAND_BUFSEL_DEFAULT               (_CRYPTOACC_COMMAND_BUFSEL_DEFAULT << 27)    /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_BUFSEL_MEM0                  (_CRYPTOACC_COMMAND_BUFSEL_MEM0 << 27)       /**< Shifted mode MEM0 for CRYPTOACC_COMMAND     */
#define CRYPTOACC_COMMAND_SWAPBYTES                    (0x1UL << 28)                                /**< Swap bytes                                  */
#define _CRYPTOACC_COMMAND_SWAPBYTES_SHIFT             28                                           /**< Shift value for CRYPTOACC_SWAPBYTES         */
#define _CRYPTOACC_COMMAND_SWAPBYTES_MASK              0x10000000UL                                 /**< Bit mask for CRYPTOACC_SWAPBYTES            */
#define _CRYPTOACC_COMMAND_SWAPBYTES_DEFAULT           0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define _CRYPTOACC_COMMAND_SWAPBYTES_NATIVE            0x00000000UL                                 /**< Mode NATIVE for CRYPTOACC_COMMAND           */
#define _CRYPTOACC_COMMAND_SWAPBYTES_SWAPPED           0x00000001UL                                 /**< Mode SWAPPED for CRYPTOACC_COMMAND          */
#define CRYPTOACC_COMMAND_SWAPBYTES_DEFAULT            (_CRYPTOACC_COMMAND_SWAPBYTES_DEFAULT << 28) /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_SWAPBYTES_NATIVE             (_CRYPTOACC_COMMAND_SWAPBYTES_NATIVE << 28)  /**< Shifted mode NATIVE for CRYPTOACC_COMMAND   */
#define CRYPTOACC_COMMAND_SWAPBYTES_SWAPPED            (_CRYPTOACC_COMMAND_SWAPBYTES_SWAPPED << 28) /**< Shifted mode SWAPPED for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_FLAGA                        (0x1UL << 29)                                /**< Flag A                                      */
#define _CRYPTOACC_COMMAND_FLAGA_SHIFT                 29                                           /**< Shift value for CRYPTOACC_FLAGA             */
#define _CRYPTOACC_COMMAND_FLAGA_MASK                  0x20000000UL                                 /**< Bit mask for CRYPTOACC_FLAGA                */
#define _CRYPTOACC_COMMAND_FLAGA_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define CRYPTOACC_COMMAND_FLAGA_DEFAULT                (_CRYPTOACC_COMMAND_FLAGA_DEFAULT << 29)     /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_FLAGB                        (0x1UL << 30)                                /**< Flag B                                      */
#define _CRYPTOACC_COMMAND_FLAGB_SHIFT                 30                                           /**< Shift value for CRYPTOACC_FLAGB             */
#define _CRYPTOACC_COMMAND_FLAGB_MASK                  0x40000000UL                                 /**< Bit mask for CRYPTOACC_FLAGB                */
#define _CRYPTOACC_COMMAND_FLAGB_DEFAULT               0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define CRYPTOACC_COMMAND_FLAGB_DEFAULT                (_CRYPTOACC_COMMAND_FLAGB_DEFAULT << 30)     /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_CALCR2                       (0x1UL << 31)                                /**< Calculate R2                                */
#define _CRYPTOACC_COMMAND_CALCR2_SHIFT                31                                           /**< Shift value for CRYPTOACC_CALCR2            */
#define _CRYPTOACC_COMMAND_CALCR2_MASK                 0x80000000UL                                 /**< Bit mask for CRYPTOACC_CALCR2               */
#define _CRYPTOACC_COMMAND_CALCR2_DEFAULT              0x00000000UL                                 /**< Mode DEFAULT for CRYPTOACC_COMMAND          */
#define _CRYPTOACC_COMMAND_CALCR2_FALSE                0x00000000UL                                 /**< Mode FALSE for CRYPTOACC_COMMAND            */
#define _CRYPTOACC_COMMAND_CALCR2_TRUE                 0x00000001UL                                 /**< Mode TRUE for CRYPTOACC_COMMAND             */
#define CRYPTOACC_COMMAND_CALCR2_DEFAULT               (_CRYPTOACC_COMMAND_CALCR2_DEFAULT << 31)    /**< Shifted mode DEFAULT for CRYPTOACC_COMMAND  */
#define CRYPTOACC_COMMAND_CALCR2_FALSE                 (_CRYPTOACC_COMMAND_CALCR2_FALSE << 31)      /**< Shifted mode FALSE for CRYPTOACC_COMMAND    */
#define CRYPTOACC_COMMAND_CALCR2_TRUE                  (_CRYPTOACC_COMMAND_CALCR2_TRUE << 31)       /**< Shifted mode TRUE for CRYPTOACC_COMMAND     */

/* Bit fields for CRYPTOACC PKCTRL */
#define _CRYPTOACC_PKCTRL_RESETVALUE                   0x00000000UL                             /**< Default value for CRYPTOACC_PKCTRL          */
#define _CRYPTOACC_PKCTRL_MASK                         0x00000003UL                             /**< Mask for CRYPTOACC_PKCTRL                   */
#define CRYPTOACC_PKCTRL_PKSTART                       (0x1UL << 0)                             /**< PK Start                                    */
#define _CRYPTOACC_PKCTRL_PKSTART_SHIFT                0                                        /**< Shift value for CRYPTOACC_PKSTART           */
#define _CRYPTOACC_PKCTRL_PKSTART_MASK                 0x1UL                                    /**< Bit mask for CRYPTOACC_PKSTART              */
#define _CRYPTOACC_PKCTRL_PKSTART_DEFAULT              0x00000000UL                             /**< Mode DEFAULT for CRYPTOACC_PKCTRL           */
#define CRYPTOACC_PKCTRL_PKSTART_DEFAULT               (_CRYPTOACC_PKCTRL_PKSTART_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_PKCTRL   */
#define CRYPTOACC_PKCTRL_IFC                           (0x1UL << 1)                             /**< ClearIRQ                                    */
#define _CRYPTOACC_PKCTRL_IFC_SHIFT                    1                                        /**< Shift value for CRYPTOACC_IFC               */
#define _CRYPTOACC_PKCTRL_IFC_MASK                     0x2UL                                    /**< Bit mask for CRYPTOACC_IFC                  */
#define _CRYPTOACC_PKCTRL_IFC_DEFAULT                  0x00000000UL                             /**< Mode DEFAULT for CRYPTOACC_PKCTRL           */
#define CRYPTOACC_PKCTRL_IFC_DEFAULT                   (_CRYPTOACC_PKCTRL_IFC_DEFAULT << 1)     /**< Shifted mode DEFAULT for CRYPTOACC_PKCTRL   */

/* Bit fields for CRYPTOACC PKSTATUS */
#define _CRYPTOACC_PKSTATUS_RESETVALUE                 0x00000000UL                                        /**< Default value for CRYPTOACC_PKSTATUS        */
#define _CRYPTOACC_PKSTATUS_MASK                       0x00033FFFUL                                        /**< Mask for CRYPTOACC_PKSTATUS                 */
#define _CRYPTOACC_PKSTATUS_FAILADDR_SHIFT             0                                                   /**< Shift value for CRYPTOACC_FAILADDR          */
#define _CRYPTOACC_PKSTATUS_FAILADDR_MASK              0xFUL                                               /**< Bit mask for CRYPTOACC_FAILADDR             */
#define _CRYPTOACC_PKSTATUS_FAILADDR_DEFAULT           0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_FAILADDR_DEFAULT            (_CRYPTOACC_PKSTATUS_FAILADDR_DEFAULT << 0)         /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_NOTONCURVE                  (0x1UL << 4)                                        /**< Point Px not on curve                       */
#define _CRYPTOACC_PKSTATUS_NOTONCURVE_SHIFT           4                                                   /**< Shift value for CRYPTOACC_NOTONCURVE        */
#define _CRYPTOACC_PKSTATUS_NOTONCURVE_MASK            0x10UL                                              /**< Bit mask for CRYPTOACC_NOTONCURVE           */
#define _CRYPTOACC_PKSTATUS_NOTONCURVE_DEFAULT         0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_NOTONCURVE_DEFAULT          (_CRYPTOACC_PKSTATUS_NOTONCURVE_DEFAULT << 4)       /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_ATINFINITY                  (0x1UL << 5)                                        /**< Point Px at infinity                        */
#define _CRYPTOACC_PKSTATUS_ATINFINITY_SHIFT           5                                                   /**< Shift value for CRYPTOACC_ATINFINITY        */
#define _CRYPTOACC_PKSTATUS_ATINFINITY_MASK            0x20UL                                              /**< Bit mask for CRYPTOACC_ATINFINITY           */
#define _CRYPTOACC_PKSTATUS_ATINFINITY_DEFAULT         0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_ATINFINITY_DEFAULT          (_CRYPTOACC_PKSTATUS_ATINFINITY_DEFAULT << 5)       /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_COUPLENOTVALID              (0x1UL << 6)                                        /**< Couple not valid                            */
#define _CRYPTOACC_PKSTATUS_COUPLENOTVALID_SHIFT       6                                                   /**< Shift value for CRYPTOACC_COUPLENOTVALID    */
#define _CRYPTOACC_PKSTATUS_COUPLENOTVALID_MASK        0x40UL                                              /**< Bit mask for CRYPTOACC_COUPLENOTVALID       */
#define _CRYPTOACC_PKSTATUS_COUPLENOTVALID_DEFAULT     0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_COUPLENOTVALID_DEFAULT      (_CRYPTOACC_PKSTATUS_COUPLENOTVALID_DEFAULT << 6)   /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_PARAMNNOTVALID              (0x1UL << 7)                                        /**< Param n not valid                           */
#define _CRYPTOACC_PKSTATUS_PARAMNNOTVALID_SHIFT       7                                                   /**< Shift value for CRYPTOACC_PARAMNNOTVALID    */
#define _CRYPTOACC_PKSTATUS_PARAMNNOTVALID_MASK        0x80UL                                              /**< Bit mask for CRYPTOACC_PARAMNNOTVALID       */
#define _CRYPTOACC_PKSTATUS_PARAMNNOTVALID_DEFAULT     0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_PARAMNNOTVALID_DEFAULT      (_CRYPTOACC_PKSTATUS_PARAMNNOTVALID_DEFAULT << 7)   /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_NOTIMPLEMENTED              (0x1UL << 8)                                        /**< Not implemented                             */
#define _CRYPTOACC_PKSTATUS_NOTIMPLEMENTED_SHIFT       8                                                   /**< Shift value for CRYPTOACC_NOTIMPLEMENTED    */
#define _CRYPTOACC_PKSTATUS_NOTIMPLEMENTED_MASK        0x100UL                                             /**< Bit mask for CRYPTOACC_NOTIMPLEMENTED       */
#define _CRYPTOACC_PKSTATUS_NOTIMPLEMENTED_DEFAULT     0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_NOTIMPLEMENTED_DEFAULT      (_CRYPTOACC_PKSTATUS_NOTIMPLEMENTED_DEFAULT << 8)   /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_SIGNOTVALID                 (0x1UL << 9)                                        /**< Signature not valid                         */
#define _CRYPTOACC_PKSTATUS_SIGNOTVALID_SHIFT          9                                                   /**< Shift value for CRYPTOACC_SIGNOTVALID       */
#define _CRYPTOACC_PKSTATUS_SIGNOTVALID_MASK           0x200UL                                             /**< Bit mask for CRYPTOACC_SIGNOTVALID          */
#define _CRYPTOACC_PKSTATUS_SIGNOTVALID_DEFAULT        0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_SIGNOTVALID_DEFAULT         (_CRYPTOACC_PKSTATUS_SIGNOTVALID_DEFAULT << 9)      /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_PARAMABNOTVALID             (0x1UL << 10)                                       /**< Param AB not valid                          */
#define _CRYPTOACC_PKSTATUS_PARAMABNOTVALID_SHIFT      10                                                  /**< Shift value for CRYPTOACC_PARAMABNOTVALID   */
#define _CRYPTOACC_PKSTATUS_PARAMABNOTVALID_MASK       0x400UL                                             /**< Bit mask for CRYPTOACC_PARAMABNOTVALID      */
#define _CRYPTOACC_PKSTATUS_PARAMABNOTVALID_DEFAULT    0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_PARAMABNOTVALID_DEFAULT     (_CRYPTOACC_PKSTATUS_PARAMABNOTVALID_DEFAULT << 10) /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_NOTINVERTIBLE               (0x1UL << 11)                                       /**< Not invertible                              */
#define _CRYPTOACC_PKSTATUS_NOTINVERTIBLE_SHIFT        11                                                  /**< Shift value for CRYPTOACC_NOTINVERTIBLE     */
#define _CRYPTOACC_PKSTATUS_NOTINVERTIBLE_MASK         0x800UL                                             /**< Bit mask for CRYPTOACC_NOTINVERTIBLE        */
#define _CRYPTOACC_PKSTATUS_NOTINVERTIBLE_DEFAULT      0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_NOTINVERTIBLE_DEFAULT       (_CRYPTOACC_PKSTATUS_NOTINVERTIBLE_DEFAULT << 11)   /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_COMPOSITE                   (0x1UL << 12)                                       /**< Composite                                   */
#define _CRYPTOACC_PKSTATUS_COMPOSITE_SHIFT            12                                                  /**< Shift value for CRYPTOACC_COMPOSITE         */
#define _CRYPTOACC_PKSTATUS_COMPOSITE_MASK             0x1000UL                                            /**< Bit mask for CRYPTOACC_COMPOSITE            */
#define _CRYPTOACC_PKSTATUS_COMPOSITE_DEFAULT          0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define _CRYPTOACC_PKSTATUS_COMPOSITE_FALSE            0x00000000UL                                        /**< Mode FALSE for CRYPTOACC_PKSTATUS           */
#define _CRYPTOACC_PKSTATUS_COMPOSITE_TRUE             0x00000001UL                                        /**< Mode TRUE for CRYPTOACC_PKSTATUS            */
#define CRYPTOACC_PKSTATUS_COMPOSITE_DEFAULT           (_CRYPTOACC_PKSTATUS_COMPOSITE_DEFAULT << 12)       /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_COMPOSITE_FALSE             (_CRYPTOACC_PKSTATUS_COMPOSITE_FALSE << 12)         /**< Shifted mode FALSE for CRYPTOACC_PKSTATUS   */
#define CRYPTOACC_PKSTATUS_COMPOSITE_TRUE              (_CRYPTOACC_PKSTATUS_COMPOSITE_TRUE << 12)          /**< Shifted mode TRUE for CRYPTOACC_PKSTATUS    */
#define CRYPTOACC_PKSTATUS_NOTQUAD                     (0x1UL << 13)                                       /**< Not quadratic residue                       */
#define _CRYPTOACC_PKSTATUS_NOTQUAD_SHIFT              13                                                  /**< Shift value for CRYPTOACC_NOTQUAD           */
#define _CRYPTOACC_PKSTATUS_NOTQUAD_MASK               0x2000UL                                            /**< Bit mask for CRYPTOACC_NOTQUAD              */
#define _CRYPTOACC_PKSTATUS_NOTQUAD_DEFAULT            0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_NOTQUAD_DEFAULT             (_CRYPTOACC_PKSTATUS_NOTQUAD_DEFAULT << 13)         /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_PKBUSY                      (0x1UL << 16)                                       /**< PK busy                                     */
#define _CRYPTOACC_PKSTATUS_PKBUSY_SHIFT               16                                                  /**< Shift value for CRYPTOACC_PKBUSY            */
#define _CRYPTOACC_PKSTATUS_PKBUSY_MASK                0x10000UL                                           /**< Bit mask for CRYPTOACC_PKBUSY               */
#define _CRYPTOACC_PKSTATUS_PKBUSY_DEFAULT             0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_PKBUSY_DEFAULT              (_CRYPTOACC_PKSTATUS_PKBUSY_DEFAULT << 16)          /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */
#define CRYPTOACC_PKSTATUS_PKIF                        (0x1UL << 17)                                       /**< Interrupt status                            */
#define _CRYPTOACC_PKSTATUS_PKIF_SHIFT                 17                                                  /**< Shift value for CRYPTOACC_PKIF              */
#define _CRYPTOACC_PKSTATUS_PKIF_MASK                  0x20000UL                                           /**< Bit mask for CRYPTOACC_PKIF                 */
#define _CRYPTOACC_PKSTATUS_PKIF_DEFAULT               0x00000000UL                                        /**< Mode DEFAULT for CRYPTOACC_PKSTATUS         */
#define CRYPTOACC_PKSTATUS_PKIF_DEFAULT                (_CRYPTOACC_PKSTATUS_PKIF_DEFAULT << 17)            /**< Shifted mode DEFAULT for CRYPTOACC_PKSTATUS */

/* Bit fields for CRYPTOACC VERSION */
#define _CRYPTOACC_VERSION_RESETVALUE                  0x00000000UL                         /**< Default value for CRYPTOACC_VERSION         */
#define _CRYPTOACC_VERSION_MASK                        0x0000FFFFUL                         /**< Mask for CRYPTOACC_VERSION                  */
#define _CRYPTOACC_VERSION_SW_SHIFT                    0                                    /**< Shift value for CRYPTOACC_SW                */
#define _CRYPTOACC_VERSION_SW_MASK                     0xFFUL                               /**< Bit mask for CRYPTOACC_SW                   */
#define _CRYPTOACC_VERSION_SW_DEFAULT                  0x00000000UL                         /**< Mode DEFAULT for CRYPTOACC_VERSION          */
#define CRYPTOACC_VERSION_SW_DEFAULT                   (_CRYPTOACC_VERSION_SW_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_VERSION  */
#define _CRYPTOACC_VERSION_HW_SHIFT                    8                                    /**< Shift value for CRYPTOACC_HW                */
#define _CRYPTOACC_VERSION_HW_MASK                     0xFF00UL                             /**< Bit mask for CRYPTOACC_HW                   */
#define _CRYPTOACC_VERSION_HW_DEFAULT                  0x00000000UL                         /**< Mode DEFAULT for CRYPTOACC_VERSION          */
#define CRYPTOACC_VERSION_HW_DEFAULT                   (_CRYPTOACC_VERSION_HW_DEFAULT << 8) /**< Shifted mode DEFAULT for CRYPTOACC_VERSION  */

/* Bit fields for CRYPTOACC TIMER */
#define _CRYPTOACC_TIMER_RESETVALUE                    0x00000000UL                          /**< Default value for CRYPTOACC_TIMER           */
#define _CRYPTOACC_TIMER_MASK                          0xFFFFFFFFUL                          /**< Mask for CRYPTOACC_TIMER                    */
#define _CRYPTOACC_TIMER_TIMER_SHIFT                   0                                     /**< Shift value for CRYPTOACC_TIMER             */
#define _CRYPTOACC_TIMER_TIMER_MASK                    0xFFFFFFFFUL                          /**< Bit mask for CRYPTOACC_TIMER                */
#define _CRYPTOACC_TIMER_TIMER_DEFAULT                 0x00000000UL                          /**< Mode DEFAULT for CRYPTOACC_TIMER            */
#define CRYPTOACC_TIMER_TIMER_DEFAULT                  (_CRYPTOACC_TIMER_TIMER_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_TIMER    */

/** @} End of group EFR32MG22_CRYPTOACC_PKCTRL_BitFields */
/** @} End of group EFR32MG22_CRYPTOACC_PKCTRL */
/**************************************************************************//**
 * @defgroup EFR32MG22_CRYPTOACC_RNGCTRL CRYPTOACC_RNGCTRL
 * @{
 * @brief EFR32MG22 CRYPTOACC_RNGCTRL Register Declaration.
 *****************************************************************************/

/** CRYPTOACC_RNGCTRL KEYS Register Group Declaration. */
typedef struct {
  __IOM uint32_t KEY;                                /**< Key Register                                       */
} CRYPTOACC_KEYS_TypeDef;

/** CRYPTOACC_RNGCTRL Register Declaration. */
typedef struct {
  __IOM uint32_t         RNGCTRL;                 /**< RNG Control Register                               */
  __IM uint32_t          FIFOLEVEL;               /**< FIFO Level Register                                */
  __IM uint32_t          FIFOTHRESH;              /**< FIFO Threshold Register                            */
  __IM uint32_t          FIFODEPTH;               /**< FIFO Depth Register                                */
  CRYPTOACC_KEYS_TypeDef KEYS[4U];                /**<                                                    */
  __IOM uint32_t         TESTDATA;                /**< Test Data Register                                 */
  uint32_t               RESERVED0[3U];           /**< Reserved for future use                            */
  __IOM uint32_t         RNGSTATUS;               /**< RNG Status Register                                */
  __IOM uint32_t         INITWAITVAL;             /**< Initial Wait Counter                               */
  uint32_t               RESERVED1[2U];           /**< Reserved for future use                            */
  __IOM uint32_t         SWOFFTMRVAL;             /**< Switch off timer value                             */
  __IOM uint32_t         CLKDIV;                  /**< Sample clock divider                               */
  __IOM uint32_t         AIS31CONF0;              /**< AIS31 configuration 0 register                     */
  __IOM uint32_t         AIS31CONF1;              /**< AIS31 configuration 1 register                     */
  __IOM uint32_t         AIS31CONF2;              /**< AIS31 configuration 2 register                     */
  __IOM uint32_t         AIS31STATUS;             /**< AIS31 status register                              */
} CRYPTOACC_RNGCTRL_TypeDef;
/** @} End of group EFR32MG22_CRYPTOACC_RNGCTRL */

/**************************************************************************//**
 * @addtogroup EFR32MG22_CRYPTOACC_RNGCTRL
 * @{
 * @defgroup EFR32MG22_CRYPTOACC_RNGCTRL_BitFields CRYPTOACC_RNGCTRL Bit Fields
 * @{
 *****************************************************************************/

/* Bit fields for CRYPTOACC RNGCTRL */
#define _CRYPTOACC_RNGCTRL_RESETVALUE                         0x00040000UL                                      /**< Default value for CRYPTOACC_RNGCTRL         */
#define _CRYPTOACC_RNGCTRL_MASK                               0x001FFFFFUL                                      /**< Mask for CRYPTOACC_RNGCTRL                  */
#define CRYPTOACC_RNGCTRL_ENABLE                              (0x1UL << 0)                                      /**< TRNG Module Enable                          */
#define _CRYPTOACC_RNGCTRL_ENABLE_SHIFT                       0                                                 /**< Shift value for CRYPTOACC_ENABLE            */
#define _CRYPTOACC_RNGCTRL_ENABLE_MASK                        0x1UL                                             /**< Bit mask for CRYPTOACC_ENABLE               */
#define _CRYPTOACC_RNGCTRL_ENABLE_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_ENABLE_DISABLED                    0x00000000UL                                      /**< Mode DISABLED for CRYPTOACC_RNGCTRL         */
#define _CRYPTOACC_RNGCTRL_ENABLE_ENABLED                     0x00000001UL                                      /**< Mode ENABLED for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_ENABLE_DEFAULT                      (_CRYPTOACC_RNGCTRL_ENABLE_DEFAULT << 0)          /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_ENABLE_DISABLED                     (_CRYPTOACC_RNGCTRL_ENABLE_DISABLED << 0)         /**< Shifted mode DISABLED for CRYPTOACC_RNGCTRL */
#define CRYPTOACC_RNGCTRL_ENABLE_ENABLED                      (_CRYPTOACC_RNGCTRL_ENABLE_ENABLED << 0)          /**< Shifted mode ENABLED for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_TESTEN                              (0x1UL << 2)                                      /**< Test Enable                                 */
#define _CRYPTOACC_RNGCTRL_TESTEN_SHIFT                       2                                                 /**< Shift value for CRYPTOACC_TESTEN            */
#define _CRYPTOACC_RNGCTRL_TESTEN_MASK                        0x4UL                                             /**< Bit mask for CRYPTOACC_TESTEN               */
#define _CRYPTOACC_RNGCTRL_TESTEN_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_TESTEN_NOISE                       0x00000000UL                                      /**< Mode NOISE for CRYPTOACC_RNGCTRL            */
#define _CRYPTOACC_RNGCTRL_TESTEN_TESTDATA                    0x00000001UL                                      /**< Mode TESTDATA for CRYPTOACC_RNGCTRL         */
#define CRYPTOACC_RNGCTRL_TESTEN_DEFAULT                      (_CRYPTOACC_RNGCTRL_TESTEN_DEFAULT << 2)          /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_TESTEN_NOISE                        (_CRYPTOACC_RNGCTRL_TESTEN_NOISE << 2)            /**< Shifted mode NOISE for CRYPTOACC_RNGCTRL    */
#define CRYPTOACC_RNGCTRL_TESTEN_TESTDATA                     (_CRYPTOACC_RNGCTRL_TESTEN_TESTDATA << 2)         /**< Shifted mode TESTDATA for CRYPTOACC_RNGCTRL */
#define CRYPTOACC_RNGCTRL_CONDBYPASS                          (0x1UL << 3)                                      /**< Conditioning Bypass                         */
#define _CRYPTOACC_RNGCTRL_CONDBYPASS_SHIFT                   3                                                 /**< Shift value for CRYPTOACC_CONDBYPASS        */
#define _CRYPTOACC_RNGCTRL_CONDBYPASS_MASK                    0x8UL                                             /**< Bit mask for CRYPTOACC_CONDBYPASS           */
#define _CRYPTOACC_RNGCTRL_CONDBYPASS_DEFAULT                 0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_CONDBYPASS_NORMAL                  0x00000000UL                                      /**< Mode NORMAL for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_CONDBYPASS_BYPASS                  0x00000001UL                                      /**< Mode BYPASS for CRYPTOACC_RNGCTRL           */
#define CRYPTOACC_RNGCTRL_CONDBYPASS_DEFAULT                  (_CRYPTOACC_RNGCTRL_CONDBYPASS_DEFAULT << 3)      /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_CONDBYPASS_NORMAL                   (_CRYPTOACC_RNGCTRL_CONDBYPASS_NORMAL << 3)       /**< Shifted mode NORMAL for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_CONDBYPASS_BYPASS                   (_CRYPTOACC_RNGCTRL_CONDBYPASS_BYPASS << 3)       /**< Shifted mode BYPASS for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_REPCOUNTIEN                         (0x1UL << 4)                                      /**< IRQ enable for Repetition Count Test        */
#define _CRYPTOACC_RNGCTRL_REPCOUNTIEN_SHIFT                  4                                                 /**< Shift value for CRYPTOACC_REPCOUNTIEN       */
#define _CRYPTOACC_RNGCTRL_REPCOUNTIEN_MASK                   0x10UL                                            /**< Bit mask for CRYPTOACC_REPCOUNTIEN          */
#define _CRYPTOACC_RNGCTRL_REPCOUNTIEN_DEFAULT                0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_REPCOUNTIEN_DEFAULT                 (_CRYPTOACC_RNGCTRL_REPCOUNTIEN_DEFAULT << 4)     /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_APT64IEN                            (0x1UL << 5)                                      /**< IRQ enable for APT64IF                      */
#define _CRYPTOACC_RNGCTRL_APT64IEN_SHIFT                     5                                                 /**< Shift value for CRYPTOACC_APT64IEN          */
#define _CRYPTOACC_RNGCTRL_APT64IEN_MASK                      0x20UL                                            /**< Bit mask for CRYPTOACC_APT64IEN             */
#define _CRYPTOACC_RNGCTRL_APT64IEN_DEFAULT                   0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_APT64IEN_DEFAULT                    (_CRYPTOACC_RNGCTRL_APT64IEN_DEFAULT << 5)        /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_APT4096IEN                          (0x1UL << 6)                                      /**< IRQ enable for APT4096IF                    */
#define _CRYPTOACC_RNGCTRL_APT4096IEN_SHIFT                   6                                                 /**< Shift value for CRYPTOACC_APT4096IEN        */
#define _CRYPTOACC_RNGCTRL_APT4096IEN_MASK                    0x40UL                                            /**< Bit mask for CRYPTOACC_APT4096IEN           */
#define _CRYPTOACC_RNGCTRL_APT4096IEN_DEFAULT                 0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_APT4096IEN_DEFAULT                  (_CRYPTOACC_RNGCTRL_APT4096IEN_DEFAULT << 6)      /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_FULLIEN                             (0x1UL << 7)                                      /**< IRQ enable for FIFO full                    */
#define _CRYPTOACC_RNGCTRL_FULLIEN_SHIFT                      7                                                 /**< Shift value for CRYPTOACC_FULLIEN           */
#define _CRYPTOACC_RNGCTRL_FULLIEN_MASK                       0x80UL                                            /**< Bit mask for CRYPTOACC_FULLIEN              */
#define _CRYPTOACC_RNGCTRL_FULLIEN_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_FULLIEN_DEFAULT                     (_CRYPTOACC_RNGCTRL_FULLIEN_DEFAULT << 7)         /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_SOFTRESET                           (0x1UL << 8)                                      /**< Software Reset                              */
#define _CRYPTOACC_RNGCTRL_SOFTRESET_SHIFT                    8                                                 /**< Shift value for CRYPTOACC_SOFTRESET         */
#define _CRYPTOACC_RNGCTRL_SOFTRESET_MASK                     0x100UL                                           /**< Bit mask for CRYPTOACC_SOFTRESET            */
#define _CRYPTOACC_RNGCTRL_SOFTRESET_DEFAULT                  0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_SOFTRESET_NORMAL                   0x00000000UL                                      /**< Mode NORMAL for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_SOFTRESET_RESET                    0x00000001UL                                      /**< Mode RESET for CRYPTOACC_RNGCTRL            */
#define CRYPTOACC_RNGCTRL_SOFTRESET_DEFAULT                   (_CRYPTOACC_RNGCTRL_SOFTRESET_DEFAULT << 8)       /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_SOFTRESET_NORMAL                    (_CRYPTOACC_RNGCTRL_SOFTRESET_NORMAL << 8)        /**< Shifted mode NORMAL for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_SOFTRESET_RESET                     (_CRYPTOACC_RNGCTRL_SOFTRESET_RESET << 8)         /**< Shifted mode RESET for CRYPTOACC_RNGCTRL    */
#define CRYPTOACC_RNGCTRL_PREIEN                              (0x1UL << 9)                                      /**< IRQ enable for AIS31 prelim. noise alarm    */
#define _CRYPTOACC_RNGCTRL_PREIEN_SHIFT                       9                                                 /**< Shift value for CRYPTOACC_PREIEN            */
#define _CRYPTOACC_RNGCTRL_PREIEN_MASK                        0x200UL                                           /**< Bit mask for CRYPTOACC_PREIEN               */
#define _CRYPTOACC_RNGCTRL_PREIEN_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_PREIEN_DEFAULT                      (_CRYPTOACC_RNGCTRL_PREIEN_DEFAULT << 9)          /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_ALMIEN                              (0x1UL << 10)                                     /**< IRQ enable for AIS31 noise alarm            */
#define _CRYPTOACC_RNGCTRL_ALMIEN_SHIFT                       10                                                /**< Shift value for CRYPTOACC_ALMIEN            */
#define _CRYPTOACC_RNGCTRL_ALMIEN_MASK                        0x400UL                                           /**< Bit mask for CRYPTOACC_ALMIEN               */
#define _CRYPTOACC_RNGCTRL_ALMIEN_DEFAULT                     0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_ALMIEN_DEFAULT                      (_CRYPTOACC_RNGCTRL_ALMIEN_DEFAULT << 10)         /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_FORCERUN                            (0x1UL << 11)                                     /**< Oscillator Force Run                        */
#define _CRYPTOACC_RNGCTRL_FORCERUN_SHIFT                     11                                                /**< Shift value for CRYPTOACC_FORCERUN          */
#define _CRYPTOACC_RNGCTRL_FORCERUN_MASK                      0x800UL                                           /**< Bit mask for CRYPTOACC_FORCERUN             */
#define _CRYPTOACC_RNGCTRL_FORCERUN_DEFAULT                   0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_FORCERUN_NORMAL                    0x00000000UL                                      /**< Mode NORMAL for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_FORCERUN_RUN                       0x00000001UL                                      /**< Mode RUN for CRYPTOACC_RNGCTRL              */
#define CRYPTOACC_RNGCTRL_FORCERUN_DEFAULT                    (_CRYPTOACC_RNGCTRL_FORCERUN_DEFAULT << 11)       /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_FORCERUN_NORMAL                     (_CRYPTOACC_RNGCTRL_FORCERUN_NORMAL << 11)        /**< Shifted mode NORMAL for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_FORCERUN_RUN                        (_CRYPTOACC_RNGCTRL_FORCERUN_RUN << 11)           /**< Shifted mode RUN for CRYPTOACC_RNGCTRL      */
#define CRYPTOACC_RNGCTRL_BYPNIST                             (0x1UL << 12)                                     /**< NIST Start-up Test Bypass.                  */
#define _CRYPTOACC_RNGCTRL_BYPNIST_SHIFT                      12                                                /**< Shift value for CRYPTOACC_BYPNIST           */
#define _CRYPTOACC_RNGCTRL_BYPNIST_MASK                       0x1000UL                                          /**< Bit mask for CRYPTOACC_BYPNIST              */
#define _CRYPTOACC_RNGCTRL_BYPNIST_DEFAULT                    0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_BYPNIST_NORMAL                     0x00000000UL                                      /**< Mode NORMAL for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_BYPNIST_BYPASS                     0x00000001UL                                      /**< Mode BYPASS for CRYPTOACC_RNGCTRL           */
#define CRYPTOACC_RNGCTRL_BYPNIST_DEFAULT                     (_CRYPTOACC_RNGCTRL_BYPNIST_DEFAULT << 12)        /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_BYPNIST_NORMAL                      (_CRYPTOACC_RNGCTRL_BYPNIST_NORMAL << 12)         /**< Shifted mode NORMAL for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_BYPNIST_BYPASS                      (_CRYPTOACC_RNGCTRL_BYPNIST_BYPASS << 12)         /**< Shifted mode BYPASS for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_BYPAIS31                            (0x1UL << 13)                                     /**< AIS31 Start-up Test Bypass.                 */
#define _CRYPTOACC_RNGCTRL_BYPAIS31_SHIFT                     13                                                /**< Shift value for CRYPTOACC_BYPAIS31          */
#define _CRYPTOACC_RNGCTRL_BYPAIS31_MASK                      0x2000UL                                          /**< Bit mask for CRYPTOACC_BYPAIS31             */
#define _CRYPTOACC_RNGCTRL_BYPAIS31_DEFAULT                   0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_BYPAIS31_NORMAL                    0x00000000UL                                      /**< Mode NORMAL for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_BYPAIS31_BYPASS                    0x00000001UL                                      /**< Mode BYPASS for CRYPTOACC_RNGCTRL           */
#define CRYPTOACC_RNGCTRL_BYPAIS31_DEFAULT                    (_CRYPTOACC_RNGCTRL_BYPAIS31_DEFAULT << 13)       /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_BYPAIS31_NORMAL                     (_CRYPTOACC_RNGCTRL_BYPAIS31_NORMAL << 13)        /**< Shifted mode NORMAL for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_BYPAIS31_BYPASS                     (_CRYPTOACC_RNGCTRL_BYPAIS31_BYPASS << 13)        /**< Shifted mode BYPASS for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_HEALTHTESTSEL                       (0x1UL << 14)                                     /**< Health test input select                    */
#define _CRYPTOACC_RNGCTRL_HEALTHTESTSEL_SHIFT                14                                                /**< Shift value for CRYPTOACC_HEALTHTESTSEL     */
#define _CRYPTOACC_RNGCTRL_HEALTHTESTSEL_MASK                 0x4000UL                                          /**< Bit mask for CRYPTOACC_HEALTHTESTSEL        */
#define _CRYPTOACC_RNGCTRL_HEALTHTESTSEL_DEFAULT              0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_HEALTHTESTSEL_BEFORE               0x00000000UL                                      /**< Mode BEFORE for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_HEALTHTESTSEL_AFTER                0x00000001UL                                      /**< Mode AFTER for CRYPTOACC_RNGCTRL            */
#define CRYPTOACC_RNGCTRL_HEALTHTESTSEL_DEFAULT               (_CRYPTOACC_RNGCTRL_HEALTHTESTSEL_DEFAULT << 14)  /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_HEALTHTESTSEL_BEFORE                (_CRYPTOACC_RNGCTRL_HEALTHTESTSEL_BEFORE << 14)   /**< Shifted mode BEFORE for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_HEALTHTESTSEL_AFTER                 (_CRYPTOACC_RNGCTRL_HEALTHTESTSEL_AFTER << 14)    /**< Shifted mode AFTER for CRYPTOACC_RNGCTRL    */
#define CRYPTOACC_RNGCTRL_AIS31TESTSEL                        (0x1UL << 15)                                     /**< AIS31 test input select                     */
#define _CRYPTOACC_RNGCTRL_AIS31TESTSEL_SHIFT                 15                                                /**< Shift value for CRYPTOACC_AIS31TESTSEL      */
#define _CRYPTOACC_RNGCTRL_AIS31TESTSEL_MASK                  0x8000UL                                          /**< Bit mask for CRYPTOACC_AIS31TESTSEL         */
#define _CRYPTOACC_RNGCTRL_AIS31TESTSEL_DEFAULT               0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define _CRYPTOACC_RNGCTRL_AIS31TESTSEL_BEFORE                0x00000000UL                                      /**< Mode BEFORE for CRYPTOACC_RNGCTRL           */
#define _CRYPTOACC_RNGCTRL_AIS31TESTSEL_AFTER                 0x00000001UL                                      /**< Mode AFTER for CRYPTOACC_RNGCTRL            */
#define CRYPTOACC_RNGCTRL_AIS31TESTSEL_DEFAULT                (_CRYPTOACC_RNGCTRL_AIS31TESTSEL_DEFAULT << 15)   /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_AIS31TESTSEL_BEFORE                 (_CRYPTOACC_RNGCTRL_AIS31TESTSEL_BEFORE << 15)    /**< Shifted mode BEFORE for CRYPTOACC_RNGCTRL   */
#define CRYPTOACC_RNGCTRL_AIS31TESTSEL_AFTER                  (_CRYPTOACC_RNGCTRL_AIS31TESTSEL_AFTER << 15)     /**< Shifted mode AFTER for CRYPTOACC_RNGCTRL    */
#define _CRYPTOACC_RNGCTRL_NB128BITBLOCKS_SHIFT               16                                                /**< Shift value for CRYPTOACC_NB128BITBLOCKS    */
#define _CRYPTOACC_RNGCTRL_NB128BITBLOCKS_MASK                0xF0000UL                                         /**< Bit mask for CRYPTOACC_NB128BITBLOCKS       */
#define _CRYPTOACC_RNGCTRL_NB128BITBLOCKS_DEFAULT             0x00000004UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_NB128BITBLOCKS_DEFAULT              (_CRYPTOACC_RNGCTRL_NB128BITBLOCKS_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */
#define CRYPTOACC_RNGCTRL_FIFOWRSTARTUP                       (0x1UL << 20)                                     /**< Fifo Write Start Up                         */
#define _CRYPTOACC_RNGCTRL_FIFOWRSTARTUP_SHIFT                20                                                /**< Shift value for CRYPTOACC_FIFOWRSTARTUP     */
#define _CRYPTOACC_RNGCTRL_FIFOWRSTARTUP_MASK                 0x100000UL                                        /**< Bit mask for CRYPTOACC_FIFOWRSTARTUP        */
#define _CRYPTOACC_RNGCTRL_FIFOWRSTARTUP_DEFAULT              0x00000000UL                                      /**< Mode DEFAULT for CRYPTOACC_RNGCTRL          */
#define CRYPTOACC_RNGCTRL_FIFOWRSTARTUP_DEFAULT               (_CRYPTOACC_RNGCTRL_FIFOWRSTARTUP_DEFAULT << 20)  /**< Shifted mode DEFAULT for CRYPTOACC_RNGCTRL  */

/* Bit fields for CRYPTOACC FIFOLEVEL */
#define _CRYPTOACC_FIFOLEVEL_RESETVALUE                       0x00000000UL                                  /**< Default value for CRYPTOACC_FIFOLEVEL       */
#define _CRYPTOACC_FIFOLEVEL_MASK                             0xFFFFFFFFUL                                  /**< Mask for CRYPTOACC_FIFOLEVEL                */
#define _CRYPTOACC_FIFOLEVEL_FIFOLEVEL_SHIFT                  0                                             /**< Shift value for CRYPTOACC_FIFOLEVEL         */
#define _CRYPTOACC_FIFOLEVEL_FIFOLEVEL_MASK                   0xFFFFFFFFUL                                  /**< Bit mask for CRYPTOACC_FIFOLEVEL            */
#define _CRYPTOACC_FIFOLEVEL_FIFOLEVEL_DEFAULT                0x00000000UL                                  /**< Mode DEFAULT for CRYPTOACC_FIFOLEVEL        */
#define CRYPTOACC_FIFOLEVEL_FIFOLEVEL_DEFAULT                 (_CRYPTOACC_FIFOLEVEL_FIFOLEVEL_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_FIFOLEVEL*/

/* Bit fields for CRYPTOACC FIFOTHRESH */
#define _CRYPTOACC_FIFOTHRESH_RESETVALUE                      0x0000003FUL                                    /**< Default value for CRYPTOACC_FIFOTHRESH      */
#define _CRYPTOACC_FIFOTHRESH_MASK                            0xFFFFFFFFUL                                    /**< Mask for CRYPTOACC_FIFOTHRESH               */
#define _CRYPTOACC_FIFOTHRESH_FIFOTHRESH_SHIFT                0                                               /**< Shift value for CRYPTOACC_FIFOTHRESH        */
#define _CRYPTOACC_FIFOTHRESH_FIFOTHRESH_MASK                 0xFFFFFFFFUL                                    /**< Bit mask for CRYPTOACC_FIFOTHRESH           */
#define _CRYPTOACC_FIFOTHRESH_FIFOTHRESH_DEFAULT              0x0000003FUL                                    /**< Mode DEFAULT for CRYPTOACC_FIFOTHRESH       */
#define CRYPTOACC_FIFOTHRESH_FIFOTHRESH_DEFAULT               (_CRYPTOACC_FIFOTHRESH_FIFOTHRESH_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_FIFOTHRESH*/

/* Bit fields for CRYPTOACC FIFODEPTH */
#define _CRYPTOACC_FIFODEPTH_RESETVALUE                       0x00000040UL                                  /**< Default value for CRYPTOACC_FIFODEPTH       */
#define _CRYPTOACC_FIFODEPTH_MASK                             0xFFFFFFFFUL                                  /**< Mask for CRYPTOACC_FIFODEPTH                */
#define _CRYPTOACC_FIFODEPTH_FIFODEPTH_SHIFT                  0                                             /**< Shift value for CRYPTOACC_FIFODEPTH         */
#define _CRYPTOACC_FIFODEPTH_FIFODEPTH_MASK                   0xFFFFFFFFUL                                  /**< Bit mask for CRYPTOACC_FIFODEPTH            */
#define _CRYPTOACC_FIFODEPTH_FIFODEPTH_DEFAULT                0x00000040UL                                  /**< Mode DEFAULT for CRYPTOACC_FIFODEPTH        */
#define CRYPTOACC_FIFODEPTH_FIFODEPTH_DEFAULT                 (_CRYPTOACC_FIFODEPTH_FIFODEPTH_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_FIFODEPTH*/

/* Bit fields for CRYPTOACC KEY */
#define _CRYPTOACC_KEY_RESETVALUE                             0x00000000UL                      /**< Default value for CRYPTOACC_KEY             */
#define _CRYPTOACC_KEY_MASK                                   0xFFFFFFFFUL                      /**< Mask for CRYPTOACC_KEY                      */
#define _CRYPTOACC_KEY_KEY_SHIFT                              0                                 /**< Shift value for CRYPTOACC_KEY               */
#define _CRYPTOACC_KEY_KEY_MASK                               0xFFFFFFFFUL                      /**< Bit mask for CRYPTOACC_KEY                  */
#define _CRYPTOACC_KEY_KEY_DEFAULT                            0x00000000UL                      /**< Mode DEFAULT for CRYPTOACC_KEY              */
#define CRYPTOACC_KEY_KEY_DEFAULT                             (_CRYPTOACC_KEY_KEY_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_KEY      */

/* Bit fields for CRYPTOACC TESTDATA */
#define _CRYPTOACC_TESTDATA_RESETVALUE                        0x00000000UL                             /**< Default value for CRYPTOACC_TESTDATA        */
#define _CRYPTOACC_TESTDATA_MASK                              0xFFFFFFFFUL                             /**< Mask for CRYPTOACC_TESTDATA                 */
#define _CRYPTOACC_TESTDATA_VALUE_SHIFT                       0                                        /**< Shift value for CRYPTOACC_VALUE             */
#define _CRYPTOACC_TESTDATA_VALUE_MASK                        0xFFFFFFFFUL                             /**< Bit mask for CRYPTOACC_VALUE                */
#define _CRYPTOACC_TESTDATA_VALUE_DEFAULT                     0x00000000UL                             /**< Mode DEFAULT for CRYPTOACC_TESTDATA         */
#define CRYPTOACC_TESTDATA_VALUE_DEFAULT                      (_CRYPTOACC_TESTDATA_VALUE_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_TESTDATA */

/* Bit fields for CRYPTOACC RNGSTATUS */
#define _CRYPTOACC_RNGSTATUS_RESETVALUE                       0x00000000UL                                     /**< Default value for CRYPTOACC_RNGSTATUS       */
#define _CRYPTOACC_RNGSTATUS_MASK                             0x000007FFUL                                     /**< Mask for CRYPTOACC_RNGSTATUS                */
#define CRYPTOACC_RNGSTATUS_TESTDATABUSY                      (0x1UL << 0)                                     /**< Test Data Busy                              */
#define _CRYPTOACC_RNGSTATUS_TESTDATABUSY_SHIFT               0                                                /**< Shift value for CRYPTOACC_TESTDATABUSY      */
#define _CRYPTOACC_RNGSTATUS_TESTDATABUSY_MASK                0x1UL                                            /**< Bit mask for CRYPTOACC_TESTDATABUSY         */
#define _CRYPTOACC_RNGSTATUS_TESTDATABUSY_DEFAULT             0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define _CRYPTOACC_RNGSTATUS_TESTDATABUSY_IDLE                0x00000000UL                                     /**< Mode IDLE for CRYPTOACC_RNGSTATUS           */
#define _CRYPTOACC_RNGSTATUS_TESTDATABUSY_BUSY                0x00000001UL                                     /**< Mode BUSY for CRYPTOACC_RNGSTATUS           */
#define CRYPTOACC_RNGSTATUS_TESTDATABUSY_DEFAULT              (_CRYPTOACC_RNGSTATUS_TESTDATABUSY_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_TESTDATABUSY_IDLE                 (_CRYPTOACC_RNGSTATUS_TESTDATABUSY_IDLE << 0)    /**< Shifted mode IDLE for CRYPTOACC_RNGSTATUS   */
#define CRYPTOACC_RNGSTATUS_TESTDATABUSY_BUSY                 (_CRYPTOACC_RNGSTATUS_TESTDATABUSY_BUSY << 0)    /**< Shifted mode BUSY for CRYPTOACC_RNGSTATUS   */
#define _CRYPTOACC_RNGSTATUS_STATE_SHIFT                      1                                                /**< Shift value for CRYPTOACC_STATE             */
#define _CRYPTOACC_RNGSTATUS_STATE_MASK                       0xEUL                                            /**< Bit mask for CRYPTOACC_STATE                */
#define _CRYPTOACC_RNGSTATUS_STATE_DEFAULT                    0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define _CRYPTOACC_RNGSTATUS_STATE_RESET                      0x00000000UL                                     /**< Mode RESET for CRYPTOACC_RNGSTATUS          */
#define _CRYPTOACC_RNGSTATUS_STATE_STARTUP                    0x00000001UL                                     /**< Mode STARTUP for CRYPTOACC_RNGSTATUS        */
#define _CRYPTOACC_RNGSTATUS_STATE_FIFOFULLON                 0x00000002UL                                     /**< Mode FIFOFULLON for CRYPTOACC_RNGSTATUS     */
#define _CRYPTOACC_RNGSTATUS_STATE_FIFOFULLOFF                0x00000003UL                                     /**< Mode FIFOFULLOFF for CRYPTOACC_RNGSTATUS    */
#define _CRYPTOACC_RNGSTATUS_STATE_RUNNING                    0x00000004UL                                     /**< Mode RUNNING for CRYPTOACC_RNGSTATUS        */
#define _CRYPTOACC_RNGSTATUS_STATE_ERROR                      0x00000005UL                                     /**< Mode ERROR for CRYPTOACC_RNGSTATUS          */
#define _CRYPTOACC_RNGSTATUS_STATE_UNUSED_6                   0x00000006UL                                     /**< Mode UNUSED_6 for CRYPTOACC_RNGSTATUS       */
#define _CRYPTOACC_RNGSTATUS_STATE_UNUSED_7                   0x00000007UL                                     /**< Mode UNUSED_7 for CRYPTOACC_RNGSTATUS       */
#define CRYPTOACC_RNGSTATUS_STATE_DEFAULT                     (_CRYPTOACC_RNGSTATUS_STATE_DEFAULT << 1)        /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_STATE_RESET                       (_CRYPTOACC_RNGSTATUS_STATE_RESET << 1)          /**< Shifted mode RESET for CRYPTOACC_RNGSTATUS  */
#define CRYPTOACC_RNGSTATUS_STATE_STARTUP                     (_CRYPTOACC_RNGSTATUS_STATE_STARTUP << 1)        /**< Shifted mode STARTUP for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_STATE_FIFOFULLON                  (_CRYPTOACC_RNGSTATUS_STATE_FIFOFULLON << 1)     /**< Shifted mode FIFOFULLON for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_STATE_FIFOFULLOFF                 (_CRYPTOACC_RNGSTATUS_STATE_FIFOFULLOFF << 1)    /**< Shifted mode FIFOFULLOFF for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_STATE_RUNNING                     (_CRYPTOACC_RNGSTATUS_STATE_RUNNING << 1)        /**< Shifted mode RUNNING for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_STATE_ERROR                       (_CRYPTOACC_RNGSTATUS_STATE_ERROR << 1)          /**< Shifted mode ERROR for CRYPTOACC_RNGSTATUS  */
#define CRYPTOACC_RNGSTATUS_STATE_UNUSED_6                    (_CRYPTOACC_RNGSTATUS_STATE_UNUSED_6 << 1)       /**< Shifted mode UNUSED_6 for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_STATE_UNUSED_7                    (_CRYPTOACC_RNGSTATUS_STATE_UNUSED_7 << 1)       /**< Shifted mode UNUSED_7 for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_REPCOUNTIF                        (0x1UL << 4)                                     /**< Repetition Count Test interrupt status      */
#define _CRYPTOACC_RNGSTATUS_REPCOUNTIF_SHIFT                 4                                                /**< Shift value for CRYPTOACC_REPCOUNTIF        */
#define _CRYPTOACC_RNGSTATUS_REPCOUNTIF_MASK                  0x10UL                                           /**< Bit mask for CRYPTOACC_REPCOUNTIF           */
#define _CRYPTOACC_RNGSTATUS_REPCOUNTIF_DEFAULT               0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define CRYPTOACC_RNGSTATUS_REPCOUNTIF_DEFAULT                (_CRYPTOACC_RNGSTATUS_REPCOUNTIF_DEFAULT << 4)   /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_APT64IF                           (0x1UL << 5)                                     /**< 64-sample window Adaptive Proportion IF     */
#define _CRYPTOACC_RNGSTATUS_APT64IF_SHIFT                    5                                                /**< Shift value for CRYPTOACC_APT64IF           */
#define _CRYPTOACC_RNGSTATUS_APT64IF_MASK                     0x20UL                                           /**< Bit mask for CRYPTOACC_APT64IF              */
#define _CRYPTOACC_RNGSTATUS_APT64IF_DEFAULT                  0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define CRYPTOACC_RNGSTATUS_APT64IF_DEFAULT                   (_CRYPTOACC_RNGSTATUS_APT64IF_DEFAULT << 5)      /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_APT4096IF                         (0x1UL << 6)                                     /**< 4096-sample window Adaptive Prop. IF        */
#define _CRYPTOACC_RNGSTATUS_APT4096IF_SHIFT                  6                                                /**< Shift value for CRYPTOACC_APT4096IF         */
#define _CRYPTOACC_RNGSTATUS_APT4096IF_MASK                   0x40UL                                           /**< Bit mask for CRYPTOACC_APT4096IF            */
#define _CRYPTOACC_RNGSTATUS_APT4096IF_DEFAULT                0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define CRYPTOACC_RNGSTATUS_APT4096IF_DEFAULT                 (_CRYPTOACC_RNGSTATUS_APT4096IF_DEFAULT << 6)    /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_FULLIF                            (0x1UL << 7)                                     /**< FIFO full interrupt status                  */
#define _CRYPTOACC_RNGSTATUS_FULLIF_SHIFT                     7                                                /**< Shift value for CRYPTOACC_FULLIF            */
#define _CRYPTOACC_RNGSTATUS_FULLIF_MASK                      0x80UL                                           /**< Bit mask for CRYPTOACC_FULLIF               */
#define _CRYPTOACC_RNGSTATUS_FULLIF_DEFAULT                   0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define CRYPTOACC_RNGSTATUS_FULLIF_DEFAULT                    (_CRYPTOACC_RNGSTATUS_FULLIF_DEFAULT << 7)       /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_PREIF                             (0x1UL << 8)                                     /**< AIS31 Preliminary Noise Alarm IF            */
#define _CRYPTOACC_RNGSTATUS_PREIF_SHIFT                      8                                                /**< Shift value for CRYPTOACC_PREIF             */
#define _CRYPTOACC_RNGSTATUS_PREIF_MASK                       0x100UL                                          /**< Bit mask for CRYPTOACC_PREIF                */
#define _CRYPTOACC_RNGSTATUS_PREIF_DEFAULT                    0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define CRYPTOACC_RNGSTATUS_PREIF_DEFAULT                     (_CRYPTOACC_RNGSTATUS_PREIF_DEFAULT << 8)        /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/
#define CRYPTOACC_RNGSTATUS_ALMIF                             (0x1UL << 9)                                     /**< AIS31 Noise Alarm interrupt status          */
#define _CRYPTOACC_RNGSTATUS_ALMIF_SHIFT                      9                                                /**< Shift value for CRYPTOACC_ALMIF             */
#define _CRYPTOACC_RNGSTATUS_ALMIF_MASK                       0x200UL                                          /**< Bit mask for CRYPTOACC_ALMIF                */
#define _CRYPTOACC_RNGSTATUS_ALMIF_DEFAULT                    0x00000000UL                                     /**< Mode DEFAULT for CRYPTOACC_RNGSTATUS        */
#define CRYPTOACC_RNGSTATUS_ALMIF_DEFAULT                     (_CRYPTOACC_RNGSTATUS_ALMIF_DEFAULT << 9)        /**< Shifted mode DEFAULT for CRYPTOACC_RNGSTATUS*/

/* Bit fields for CRYPTOACC INITWAITVAL */
#define _CRYPTOACC_INITWAITVAL_RESETVALUE                     0x0000FFFFUL                                      /**< Default value for CRYPTOACC_INITWAITVAL     */
#define _CRYPTOACC_INITWAITVAL_MASK                           0x0000FFFFUL                                      /**< Mask for CRYPTOACC_INITWAITVAL              */
#define _CRYPTOACC_INITWAITVAL_INITWAITVAL_SHIFT              0                                                 /**< Shift value for CRYPTOACC_INITWAITVAL       */
#define _CRYPTOACC_INITWAITVAL_INITWAITVAL_MASK               0xFFFFUL                                          /**< Bit mask for CRYPTOACC_INITWAITVAL          */
#define _CRYPTOACC_INITWAITVAL_INITWAITVAL_DEFAULT            0x0000FFFFUL                                      /**< Mode DEFAULT for CRYPTOACC_INITWAITVAL      */
#define CRYPTOACC_INITWAITVAL_INITWAITVAL_DEFAULT             (_CRYPTOACC_INITWAITVAL_INITWAITVAL_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_INITWAITVAL*/

/* Bit fields for CRYPTOACC SWOFFTMRVAL */
#define _CRYPTOACC_SWOFFTMRVAL_RESETVALUE                     0x0000FFFFUL                                      /**< Default value for CRYPTOACC_SWOFFTMRVAL     */
#define _CRYPTOACC_SWOFFTMRVAL_MASK                           0x0000FFFFUL                                      /**< Mask for CRYPTOACC_SWOFFTMRVAL              */
#define _CRYPTOACC_SWOFFTMRVAL_SWOFFTMRVAL_SHIFT              0                                                 /**< Shift value for CRYPTOACC_SWOFFTMRVAL       */
#define _CRYPTOACC_SWOFFTMRVAL_SWOFFTMRVAL_MASK               0xFFFFUL                                          /**< Bit mask for CRYPTOACC_SWOFFTMRVAL          */
#define _CRYPTOACC_SWOFFTMRVAL_SWOFFTMRVAL_DEFAULT            0x0000FFFFUL                                      /**< Mode DEFAULT for CRYPTOACC_SWOFFTMRVAL      */
#define CRYPTOACC_SWOFFTMRVAL_SWOFFTMRVAL_DEFAULT             (_CRYPTOACC_SWOFFTMRVAL_SWOFFTMRVAL_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_SWOFFTMRVAL*/

/* Bit fields for CRYPTOACC CLKDIV */
#define _CRYPTOACC_CLKDIV_RESETVALUE                          0x00000000UL                           /**< Default value for CRYPTOACC_CLKDIV          */
#define _CRYPTOACC_CLKDIV_MASK                                0x000000FFUL                           /**< Mask for CRYPTOACC_CLKDIV                   */
#define _CRYPTOACC_CLKDIV_VALUE_SHIFT                         0                                      /**< Shift value for CRYPTOACC_VALUE             */
#define _CRYPTOACC_CLKDIV_VALUE_MASK                          0xFFUL                                 /**< Bit mask for CRYPTOACC_VALUE                */
#define _CRYPTOACC_CLKDIV_VALUE_DEFAULT                       0x00000000UL                           /**< Mode DEFAULT for CRYPTOACC_CLKDIV           */
#define CRYPTOACC_CLKDIV_VALUE_DEFAULT                        (_CRYPTOACC_CLKDIV_VALUE_DEFAULT << 0) /**< Shifted mode DEFAULT for CRYPTOACC_CLKDIV   */

/* Bit fields for CRYPTOACC AIS31CONF0 */
#define _CRYPTOACC_AIS31CONF0_RESETVALUE                      0x43401040UL                                       /**< Default value for CRYPTOACC_AIS31CONF0      */
#define _CRYPTOACC_AIS31CONF0_MASK                            0x7FFF7FFFUL                                       /**< Mask for CRYPTOACC_AIS31CONF0               */
#define _CRYPTOACC_AIS31CONF0_STARTUPTHRES_SHIFT              0                                                  /**< Shift value for CRYPTOACC_STARTUPTHRES      */
#define _CRYPTOACC_AIS31CONF0_STARTUPTHRES_MASK               0x7FFFUL                                           /**< Bit mask for CRYPTOACC_STARTUPTHRES         */
#define _CRYPTOACC_AIS31CONF0_STARTUPTHRES_DEFAULT            0x00001040UL                                       /**< Mode DEFAULT for CRYPTOACC_AIS31CONF0       */
#define CRYPTOACC_AIS31CONF0_STARTUPTHRES_DEFAULT             (_CRYPTOACC_AIS31CONF0_STARTUPTHRES_DEFAULT << 0)  /**< Shifted mode DEFAULT for CRYPTOACC_AIS31CONF0*/
#define _CRYPTOACC_AIS31CONF0_ONLINETHRESH_SHIFT              16                                                 /**< Shift value for CRYPTOACC_ONLINETHRESH      */
#define _CRYPTOACC_AIS31CONF0_ONLINETHRESH_MASK               0x7FFF0000UL                                       /**< Bit mask for CRYPTOACC_ONLINETHRESH         */
#define _CRYPTOACC_AIS31CONF0_ONLINETHRESH_DEFAULT            0x00004340UL                                       /**< Mode DEFAULT for CRYPTOACC_AIS31CONF0       */
#define CRYPTOACC_AIS31CONF0_ONLINETHRESH_DEFAULT             (_CRYPTOACC_AIS31CONF0_ONLINETHRESH_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_AIS31CONF0*/

/* Bit fields for CRYPTOACC AIS31CONF1 */
#define _CRYPTOACC_AIS31CONF1_RESETVALUE                      0x03C00680UL                                          /**< Default value for CRYPTOACC_AIS31CONF1      */
#define _CRYPTOACC_AIS31CONF1_MASK                            0x7FFF7FFFUL                                          /**< Mask for CRYPTOACC_AIS31CONF1               */
#define _CRYPTOACC_AIS31CONF1_HEXPECTEDVALUE_SHIFT            0                                                     /**< Shift value for CRYPTOACC_HEXPECTEDVALUE    */
#define _CRYPTOACC_AIS31CONF1_HEXPECTEDVALUE_MASK             0x7FFFUL                                              /**< Bit mask for CRYPTOACC_HEXPECTEDVALUE       */
#define _CRYPTOACC_AIS31CONF1_HEXPECTEDVALUE_DEFAULT          0x00000680UL                                          /**< Mode DEFAULT for CRYPTOACC_AIS31CONF1       */
#define CRYPTOACC_AIS31CONF1_HEXPECTEDVALUE_DEFAULT           (_CRYPTOACC_AIS31CONF1_HEXPECTEDVALUE_DEFAULT << 0)   /**< Shifted mode DEFAULT for CRYPTOACC_AIS31CONF1*/
#define _CRYPTOACC_AIS31CONF1_ONLINEREPTHRESH_SHIFT           16                                                    /**< Shift value for CRYPTOACC_ONLINEREPTHRESH   */
#define _CRYPTOACC_AIS31CONF1_ONLINEREPTHRESH_MASK            0x7FFF0000UL                                          /**< Bit mask for CRYPTOACC_ONLINEREPTHRESH      */
#define _CRYPTOACC_AIS31CONF1_ONLINEREPTHRESH_DEFAULT         0x000003C0UL                                          /**< Mode DEFAULT for CRYPTOACC_AIS31CONF1       */
#define CRYPTOACC_AIS31CONF1_ONLINEREPTHRESH_DEFAULT          (_CRYPTOACC_AIS31CONF1_ONLINEREPTHRESH_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_AIS31CONF1*/

/* Bit fields for CRYPTOACC AIS31CONF2 */
#define _CRYPTOACC_AIS31CONF2_RESETVALUE                      0x04400340UL                               /**< Default value for CRYPTOACC_AIS31CONF2      */
#define _CRYPTOACC_AIS31CONF2_MASK                            0x7FFF7FFFUL                               /**< Mask for CRYPTOACC_AIS31CONF2               */
#define _CRYPTOACC_AIS31CONF2_HMIN_SHIFT                      0                                          /**< Shift value for CRYPTOACC_HMIN              */
#define _CRYPTOACC_AIS31CONF2_HMIN_MASK                       0x7FFFUL                                   /**< Bit mask for CRYPTOACC_HMIN                 */
#define _CRYPTOACC_AIS31CONF2_HMIN_DEFAULT                    0x00000340UL                               /**< Mode DEFAULT for CRYPTOACC_AIS31CONF2       */
#define CRYPTOACC_AIS31CONF2_HMIN_DEFAULT                     (_CRYPTOACC_AIS31CONF2_HMIN_DEFAULT << 0)  /**< Shifted mode DEFAULT for CRYPTOACC_AIS31CONF2*/
#define _CRYPTOACC_AIS31CONF2_HMAX_SHIFT                      16                                         /**< Shift value for CRYPTOACC_HMAX              */
#define _CRYPTOACC_AIS31CONF2_HMAX_MASK                       0x7FFF0000UL                               /**< Bit mask for CRYPTOACC_HMAX                 */
#define _CRYPTOACC_AIS31CONF2_HMAX_DEFAULT                    0x00000440UL                               /**< Mode DEFAULT for CRYPTOACC_AIS31CONF2       */
#define CRYPTOACC_AIS31CONF2_HMAX_DEFAULT                     (_CRYPTOACC_AIS31CONF2_HMAX_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_AIS31CONF2*/

/* Bit fields for CRYPTOACC AIS31STATUS */
#define _CRYPTOACC_AIS31STATUS_RESETVALUE                     0x00000000UL                                               /**< Default value for CRYPTOACC_AIS31STATUS     */
#define _CRYPTOACC_AIS31STATUS_MASK                           0x0003FFFFUL                                               /**< Mask for CRYPTOACC_AIS31STATUS              */
#define _CRYPTOACC_AIS31STATUS_NUMPRELIMALARMS_SHIFT          0                                                          /**< Shift value for CRYPTOACC_NUMPRELIMALARMS   */
#define _CRYPTOACC_AIS31STATUS_NUMPRELIMALARMS_MASK           0xFFFFUL                                                   /**< Bit mask for CRYPTOACC_NUMPRELIMALARMS      */
#define _CRYPTOACC_AIS31STATUS_NUMPRELIMALARMS_DEFAULT        0x00000000UL                                               /**< Mode DEFAULT for CRYPTOACC_AIS31STATUS      */
#define CRYPTOACC_AIS31STATUS_NUMPRELIMALARMS_DEFAULT         (_CRYPTOACC_AIS31STATUS_NUMPRELIMALARMS_DEFAULT << 0)      /**< Shifted mode DEFAULT for CRYPTOACC_AIS31STATUS*/
#define CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMRNG             (0x1UL << 16)                                              /**< Preliminary noise alarm RNG                 */
#define _CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMRNG_SHIFT      16                                                         /**< Shift value for CRYPTOACC_PRELIMNOISEALARMRNG*/
#define _CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMRNG_MASK       0x10000UL                                                  /**< Bit mask for CRYPTOACC_PRELIMNOISEALARMRNG  */
#define _CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMRNG_DEFAULT    0x00000000UL                                               /**< Mode DEFAULT for CRYPTOACC_AIS31STATUS      */
#define CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMRNG_DEFAULT     (_CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMRNG_DEFAULT << 16) /**< Shifted mode DEFAULT for CRYPTOACC_AIS31STATUS*/
#define CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMREP             (0x1UL << 17)                                              /**< Preliminary noise alarm Rep                 */
#define _CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMREP_SHIFT      17                                                         /**< Shift value for CRYPTOACC_PRELIMNOISEALARMREP*/
#define _CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMREP_MASK       0x20000UL                                                  /**< Bit mask for CRYPTOACC_PRELIMNOISEALARMREP  */
#define _CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMREP_DEFAULT    0x00000000UL                                               /**< Mode DEFAULT for CRYPTOACC_AIS31STATUS      */
#define CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMREP_DEFAULT     (_CRYPTOACC_AIS31STATUS_PRELIMNOISEALARMREP_DEFAULT << 17) /**< Shifted mode DEFAULT for CRYPTOACC_AIS31STATUS*/

/** @} End of group EFR32MG22_CRYPTOACC_RNGCTRL_BitFields */
/** @} End of group EFR32MG22_CRYPTOACC_RNGCTRL */
/** @} End of group Parts */
#endif /* EFR32MG22_CRYPTOACC_H */
