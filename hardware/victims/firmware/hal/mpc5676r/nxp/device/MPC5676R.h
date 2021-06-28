/**************************************************************************/
/* FILE NAME: mpc567xR_c.h                   COPYRIGHT (c) Freescale 2011 */
/* VERSION:  1.0c                                 All Rights Reserved     */
/*                                                                        */
/* DESCRIPTION:                                                           */
/* This file contains all of the register and bit field definitions for   */
/* MPC567xR with modifications and conditional definitions to support     */
/* Monaco header file version 1.6. A #define COMP_TO_MPC5634M_V1_6_ON     */
/* must be added to enable the Monaco V1.6 compatibility.                 */
/*========================================================================*/
/* UPDATE HISTORY                                                         */
/* REV     AUTHOR      DATE      DESCRIPTION OF CHANGE                    */
/* ---  -----------  ---------   ---------------------                    */
/* 0.1  R. Dees      08/Jan/2010 Split from revision 1.03 of the          */
/*                               MPC5674F.h. Added DTS module             */
/*                               Added SIU Core MMU PID Control Registers */
/* 0.2  D. Erazmus   18/Jun/2010 Merged updates from revision 1.08 of     */
/*                               MPC5674f.h.                              */
/* 0.3  D. Erazmus   02/Nov/2010 Merged updates from revision 1.09 of     */
/*                               MPC5674f.h                               */
/*                               - Added FlexCAN RXFIFO structure.	      */
/*                               - Added CLKCFG_DIS field to ESYNCR2      */
/* 0.4  D. Erazmus   09/Dec/2010 Initial complete MPC567xR header file.   */
/* 0.5  D. Erazmus   03/Mar/2011 Updated Flexray ECC and buffer regs.     */
/* 0.6  D. Erazmus   24/Mar/2011 Added EDMA GWRH/GWRL                     */
/* 0.7  D. Erazmus   31/Mar/2011 Reversed bit-field order in SIU.DECFIL   */
/*                               registers due to reference manual errata.*/
/* 0.8  D. Erazmus   05/Apr/2011 Fixed BIUCR3 M1PFE field. Removed M0PFE. */
/* 0.8c D. Erazmus   05/Apr/2011 Added MPC5634M compatibility with #define*/
/*                               Branches from standard MPC5676R header   */
/*                               file starting at rev 0.8.                */
/* 0.9c D. Erazmus   26/May/2011 Added missing fields to MPU RGD and      */
/*                               RDGAAC registers.                        */
/* 1.0c D. Erazmus   18/Jul/2011 Fixed ETPU_DATA_RAM_END.  It is 6k total */
/*                               for ETPUA and ETPUB (3k per engine).     */
/*                               Fixed definition of flash registers HLR  */
/*                               and HSR.  HBLOCK and HBSEL fields are 10 */
/*                               bits wide for MPC5676R.                  */                                  
/**************************************************************************/

#ifndef _MPC567xR_H_
#define _MPC567xR_H_

#include "../util/typedefs.h"
#include "s32_core_e200.h"
#ifdef  __cplusplus
extern "C" {
#endif

#ifdef __MWERKS__
#pragma push
#pragma ANSI_strict off
#endif

/* ----------------------------------------------------------------------------
   -- Generic macros
   ---------------------------------------------------------------------------- */

/* IO definitions (access restrictions to peripheral registers) */
/**
*   IO Type Qualifiers are used
*   \li to specify the access to peripheral variables.
*   \li for automatic generation of peripheral register debug information.
*/
#ifndef __IO
#ifdef __cplusplus
  #define   __I     volatile             /*!< Defines 'read only' permissions                 */
#else
  #define   __I     volatile const       /*!< Defines 'read only' permissions                 */
#endif
#define     __O     volatile             /*!< Defines 'write only' permissions                */
#define     __IO    volatile             /*!< Defines 'read / write' permissions              */
#endif


#define MPC5676R_SERIES

/* ----------------------------------------------------------------------------
   -- Interrupt vector numbers for MPC5777C
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup Interrupt_vector_numbers_MPC5777C Interrupt vector numbers for MPC5777C
 * @{
 */

/** Interrupt Number Definitions */
#define NUMBER_OF_INT_VECTORS 512u               /**< Number of interrupts in the Vector table */

/**
 * @brief Defines the Interrupt Numbers definitions
 *
 * This enumeration is used to configure the interrupts.
 *
 * Implements : IRQn_Type_Class
 */
typedef enum
{
  /* Auxiliary constants */
  NotAvail_IRQn                = -128,             /**< Not available device specific interrupt */

  /* Core interrupts */

  /* Device specific interrupts */
  SS0_IRQn                     = 0u,               /**< Software setable flag 0 SSCIR0[CLR0] */
  SS1_IRQn                     = 1u,               /**< Software setable flag 1 SSCIR0[CLR1] */
  SS2_IRQn                     = 2u,               /**< Software setable flag 2 SSCIR0[CLR2] */
  SS3_IRQn                     = 3u,               /**< Software setable flag 3 SSCIR0[CLR3] */
  SS4_IRQn                     = 4u,               /**< Software setable flag 4 SSCIR0[CLR4] */
  SS5_IRQn                     = 5u,               /**< Software setable flag 5 SSCIR0[CLR5] */
  SS6_IRQn                     = 6u,               /**< Software setable flag 6 SSCIR0[CLR6] */
  SS7_IRQn                     = 7u,               /**< Software setable flag 7 SSCIR0[CLR7] */
  SWT0_IRQn                    = 8u,               /**< Software Watchdog 0 Interrupt flag */
  FCCU_MISC_IRQn               = 9u,               /**< FCCU ALARM state entry | FCCU CONFIG state watchdog timeout */
  DMA0_ERR0_31_IRQn            = 10u,              /**< eDMA0 channel Error flags 0-31 */
  DMA0_0_IRQn                  = 11u,              /**< eDMA0 channel Interrupt 0 */
  DMA0_1_IRQn                  = 12u,              /**< eDMA0 channel Interrupt 1 */
  DMA0_2_IRQn                  = 13u,              /**< eDMA0 channel Interrupt 2 */
  DMA0_3_IRQn                  = 14u,              /**< eDMA0 channel Interrupt 3 */
  DMA0_4_IRQn                  = 15u,              /**< eDMA0 channel Interrupt 4 */
  DMA0_5_IRQn                  = 16u,              /**< eDMA0 channel Interrupt 5 */
  DMA0_6_IRQn                  = 17u,              /**< eDMA0 channel Interrupt 6 */
  DMA0_7_IRQn                  = 18u,              /**< eDMA0 channel Interrupt 7 */
  DMA0_8_IRQn                  = 19u,              /**< eDMA0 channel Interrupt 8 */
  DMA0_9_IRQn                  = 20u,              /**< eDMA0 channel Interrupt 9 */
  DMA0_10_IRQn                 = 21u,              /**< eDMA0 channel Interrupt 10 */
  DMA0_11_IRQn                 = 22u,              /**< eDMA0 channel Interrupt 11 */
  DMA0_12_IRQn                 = 23u,              /**< eDMA0 channel Interrupt 12 */
  DMA0_13_IRQn                 = 24u,              /**< eDMA0 channel Interrupt 13 */
  DMA0_14_IRQn                 = 25u,              /**< eDMA0 channel Interrupt 14 */
  DMA0_15_IRQn                 = 26u,              /**< eDMA0 channel Interrupt 15 */
  DMA0_16_IRQn                 = 27u,              /**< eDMA0 channel Interrupt 16 */
  DMA0_17_IRQn                 = 28u,              /**< eDMA0 channel Interrupt 17 */
  DMA0_18_IRQn                 = 29u,              /**< eDMA0 channel Interrupt 18 */
  DMA0_19_IRQn                 = 30u,              /**< eDMA0 channel Interrupt 19 */
  DMA0_20_IRQn                 = 31u,              /**< eDMA0 channel Interrupt 20 */
  DMA0_21_IRQn                 = 32u,              /**< eDMA0 channel Interrupt 21 */
  DMA0_22_IRQn                 = 33u,              /**< eDMA0 channel Interrupt 22 */
  DMA0_23_IRQn                 = 34u,              /**< eDMA0 channel Interrupt 23 */
  DMA0_24_IRQn                 = 35u,              /**< eDMA0 channel Interrupt 24 */
  DMA0_25_IRQn                 = 36u,              /**< eDMA0 channel Interrupt 25 */
  DMA0_26_IRQn                 = 37u,              /**< eDMA0 channel Interrupt 26 */
  DMA0_27_IRQn                 = 38u,              /**< eDMA0 channel Interrupt 27 */
  DMA0_28_IRQn                 = 39u,              /**< eDMA0 channel Interrupt 28 */
  DMA0_29_IRQn                 = 40u,              /**< eDMA0 channel Interrupt 29 */
  DMA0_30_IRQn                 = 41u,              /**< eDMA0 channel Interrupt 30 */
  DMA0_31_IRQn                 = 42u,              /**< eDMA0 channel Interrupt 31 */
  PCS_IRQn                     = 43u,              /**< Progressive Clock Switch Interrupt SIU_PCSIFR[PCSI] */
  PLL_IRQn                     = 44u,              /**< PLL Loss of Lock Flags PLL0_SR[LOLF] | PLL1_SR[LOLF] */
  SIU_OVF_IRQn                 = 45u,              /**< SIU combined overrun interrupt requests of the external interrupt Overrun Flags */
  SIU_0_IRQn                   = 46u,              /**< SIU External Interrupt Flag 0 SIU_EIISR[EIF0] */
  SIU_1_IRQn                   = 47u,              /**< SIU External Interrupt Flag 1 SIU_EIISR[EIF1] */
  SIU_2_IRQn                   = 48u,              /**< SIU External Interrupt Flag 2 SIU_EIISR[EIF2] */
  SIU_3_IRQn                   = 49u,              /**< SIU External Interrupt Flag 3 SIU_EIISR[EIF3] */
  SIU_4_15_IRQn                = 50u,              /**< SIU External Interrupt Flag 15-4 SIU_EIISR[EIF15:EIF4] */
  EMIOS0_F0_IRQn               = 51u,              /**< eMIOS_0 channel 0 Flag */
  EMIOS0_F1_IRQn               = 52u,              /**< eMIOS_0 channel 1 Flag */
  EMIOS0_F2_IRQn               = 53u,              /**< eMIOS_0 channel 2 Flag */
  EMIOS0_F3_IRQn               = 54u,              /**< eMIOS_0 channel 3 Flag */
  EMIOS0_F4_IRQn               = 55u,              /**< eMIOS_0 channel 4 Flag */
  EMIOS0_F5_IRQn               = 56u,              /**< eMIOS_0 channel 5 Flag */
  EMIOS0_F6_IRQn               = 57u,              /**< eMIOS_0 channel 6 Flag */
  EMIOS0_F7_IRQn               = 58u,              /**< eMIOS_0 channel 7 Flag */
  EMIOS1_F0_IRQn               = 59u,              /**< eMIOS_1 channel 0 Flag */
  EMIOS1_F1_IRQn               = 60u,              /**< eMIOS_1 channel 1 Flag */
  EMIOS1_F2_IRQn               = 61u,              /**< eMIOS_1 channel 2 Flag */
  EMIOS1_F3_IRQn               = 62u,              /**< eMIOS_1 channel 3 Flag */
  EMIOS1_F4_IRQn               = 63u,              /**< eMIOS_1 channel 4 Flag */
  EMIOS1_F5_IRQn               = 64u,              /**< eMIOS_1 channel 5 Flag */
  EMIOS1_F6_IRQn               = 65u,              /**< eMIOS_1 channel 6 Flag */
  EMIOS1_F7_IRQn               = 66u,              /**< eMIOS_1 channel 7 Flag */
  ETPU01_GE_IRQn               = 67u,              /**< eTPU Engine 0 and 1 Global Exception */
  ETPU0_CIS0_IRQn              = 68u,              /**< eTPU Engine 0 Channel 0 Interrupt Status */
  ETPU0_CIS1_IRQn              = 69u,              /**< eTPU Engine 0 Channel 1 Interrupt Status */
  ETPU0_CIS2_IRQn              = 70u,              /**< eTPU Engine 0 Channel 2 Interrupt Status */
  ETPU0_CIS3_IRQn              = 71u,              /**< eTPU Engine 0 Channel 3 Interrupt Status */
  ETPU0_CIS4_IRQn              = 72u,              /**< eTPU Engine 0 Channel 4 Interrupt Status */
  ETPU0_CIS5_IRQn              = 73u,              /**< eTPU Engine 0 Channel 5 Interrupt Status */
  ETPU0_CIS6_IRQn              = 74u,              /**< eTPU Engine 0 Channel 6 Interrupt Status */
  ETPU0_CIS7_IRQn              = 75u,              /**< eTPU Engine 0 Channel 7 Interrupt Status */
  ETPU0_CIS8_IRQn              = 76u,              /**< eTPU Engine 0 Channel 8 Interrupt Status */
  ETPU0_CIS9_IRQn              = 77u,              /**< eTPU Engine 0 Channel 9 Interrupt Status */
  ETPU0_CIS10_IRQn             = 78u,              /**< eTPU Engine 0 Channel 10 Interrupt Status */
  ETPU0_CIS11_IRQn             = 79u,              /**< eTPU Engine 0 Channel 11 Interrupt Status */
  ETPU0_CIS12_IRQn             = 80u,              /**< eTPU Engine 0 Channel 12 Interrupt Status */
  ETPU0_CIS13_IRQn             = 81u,              /**< eTPU Engine 0 Channel 13 Interrupt Status */
  ETPU0_CIS14_IRQn             = 82u,              /**< eTPU Engine 0 Channel 14 Interrupt Status */
  ETPU0_CIS15_IRQn             = 83u,              /**< eTPU Engine 0 Channel 15 Interrupt Status */
  ETPU0_CIS16_IRQn             = 84u,              /**< eTPU Engine 0 Channel 16 Interrupt Status */
  ETPU0_CIS17_IRQn             = 85u,              /**< eTPU Engine 0 Channel 17 Interrupt Status */
  ETPU0_CIS18_IRQn             = 86u,              /**< eTPU Engine 0 Channel 18 Interrupt Status */
  ETPU0_CIS19_IRQn             = 87u,              /**< eTPU Engine 0 Channel 19 Interrupt Status */
  ETPU0_CIS20_IRQn             = 88u,              /**< eTPU Engine 0 Channel 20 Interrupt Status */
  ETPU0_CIS21_IRQn             = 89u,              /**< eTPU Engine 0 Channel 21 Interrupt Status */
  ETPU0_CIS22_IRQn             = 90u,              /**< eTPU Engine 0 Channel 22 Interrupt Status */
  ETPU0_CIS23_IRQn             = 91u,              /**< eTPU Engine 0 Channel 23 Interrupt Status */
  ETPU0_CIS24_IRQn             = 92u,              /**< eTPU Engine 0 Channel 24 Interrupt Status */
  ETPU0_CIS25_IRQn             = 93u,              /**< eTPU Engine 0 Channel 25 Interrupt Status */
  ETPU0_CIS26_IRQn             = 94u,              /**< eTPU Engine 0 Channel 26 Interrupt Status */
  ETPU0_CIS27_IRQn             = 95u,              /**< eTPU Engine 0 Channel 27 Interrupt Status */
  ETPU0_CIS28_IRQn             = 96u,              /**< eTPU Engine 0 Channel 28 Interrupt Status */
  ETPU0_CIS29_IRQn             = 97u,              /**< eTPU Engine 0 Channel 29 Interrupt Status */
  ETPU0_CIS30_IRQn             = 98u,              /**< eTPU Engine 0 Channel 30 Interrupt Status */
  ETPU0_CIS31_IRQn             = 99u,              /**< eTPU Engine 0 Channel 31 Interrupt Status */
  EQADC0_OVRx_IRQn             = 100u,             /**< eQADC combined overrun interrupt requests from all of the FIFOs: Trigger Overrun, Receive FIFO Overflow and command FIFO Underflow */
  EQADC0_FIFO0_NCF_IRQn        = 101u,             /**< eQADC command FIFO 0 Non-Coherency Flag */
  EQADC0_FIFO0_PF_IRQn         = 102u,             /**< eQADC command FIFO 0 Pause Flag */
  EQADC0_FIFO0_EOQF_IRQn       = 103u,             /**< eQADC command FIFO 0 command queue End of Queue Flag */
  EQADC0_FIFO0_CFFF_IRQn       = 104u,             /**< eQADC Command FIFO 0 Fill Flag */
  EQADC0_FIFO0_RFDF_IRQn       = 105u,             /**< eQADC Receive FIFO 0 Drain Flag */
  EQADC0_FIFO1_NCF_IRQn        = 106u,             /**< eQADC command FIFO 1 Non-Coherency Flag */
  EQADC0_FIFO1_PF_IRQn         = 107u,             /**< eQADC command FIFO 1 Pause Flag */
  EQADC0_FIFO1_EOQF_IRQn       = 108u,             /**< eQADC command FIFO 1 command queue End of Queue Flag */
  EQADC0_FIFO1_CFFF_IRQn       = 109u,             /**< eQADC Command FIFO 1 Fill Flag */
  EQADC0_FIFO1_RFDF_IRQn       = 110u,             /**< eQADC Receive FIFO 1 Drain Flag */
  EQADC0_FIFO2_NCF_IRQn        = 111u,             /**< eQADC command FIFO 2 Non-Coherency Flag */
  EQADC0_FIFO2_PF_IRQn         = 112u,             /**< eQADC command FIFO 2 Pause Flag */
  EQADC0_FIFO2_EOQF_IRQn       = 113u,             /**< eQADC command FIFO 2 command queue End of Queue Flag */
  EQADC0_FIFO2_CFFF_IRQn       = 114u,             /**< eQADC Command FIFO 2 Fill Flag */
  EQADC0_FIFO2_RFDF_IRQn       = 115u,             /**< eQADC Receive FIFO 2 Drain Flag */
  EQADC0_FIFO3_NCF_IRQn        = 116u,             /**< eQADC command FIFO 3 Non-Coherency Flag */
  EQADC0_FIFO3_PF_IRQn         = 117u,             /**< eQADC command FIFO 3 Pause Flag */
  EQADC0_FIFO3_EOQF_IRQn       = 118u,             /**< eQADC command FIFO 3 command queue End of Queue Flag */
  EQADC0_FIFO3_CFFF_IRQn       = 119u,             /**< eQADC Command FIFO 3 Fill Flag */
  EQADC0_FIFO3_RFDF_IRQn       = 120u,             /**< eQADC Receive FIFO 3 Drain Flag */
  EQADC0_FIFO4_NCF_IRQn        = 121u,             /**< eQADC command FIFO 4 Non-Coherency Flag */
  EQADC0_FIFO4_PF_IRQn         = 122u,             /**< eQADC command FIFO 4 Pause Flag */
  EQADC0_FIFO4_EOQF_IRQn       = 123u,             /**< eQADC command FIFO 4 command queue End of Queue Flag */
  EQADC0_FIFO4_CFFF_IRQn       = 124u,             /**< eQADC Command FIFO 4 Fill Flag */
  EQADC0_FIFO4_RFDF_IRQn       = 125u,             /**< eQADC Receive FIFO 4 Drain Flag */
  EQADC0_FIFO5_NCF_IRQn        = 126u,             /**< eQADC command FIFO 5 Non-Coherency Flag */
  EQADC0_FIFO5_PF_IRQn         = 127u,             /**< eQADC command FIFO 5 Pause Flag */
  EQADC0_FIFO5_EOQF_IRQn       = 128u,             /**< eQADC command FIFO 5 command queue End of Queue Flag */
  EQADC0_FIFO5_CFFF_IRQn       = 129u,             /**< eQADC Command FIFO 5 Fill Flag */
  EQADC0_FIFO5_RFDF_IRQn       = 130u,             /**< eQADC Receive FIFO 5 Drain Flag */
  DSPI1_ERR_IRQn               = 131u,             /**< DSPI_1 combined overrun and parity error interrupt requests: Transmit FIFO Underflow/Receive FIFO Overflow SPI Parity Error/DSI Parity Error */
  DSPI1_TXFIFO_EOQF_IRQn       = 132u,             /**< DSPI_1 transmit FIFO End of Queue Flag */
  DSPI1_TXFIFO_TFFF_IRQn       = 133u,             /**< DSPI_1 Transmit FIFO Fill Flag */
  DSPI1_TCF_IRQn               = 134u,             /**< DSPI_1 Transfer Complete/DSI Data Match Flag */
  DSPI1_RXFIFO_RFDF_IRQn       = 135u,             /**< DSPI_1 Receive FIFO Drain Flag */
  DSPI2_ERR_IRQn               = 136u,             /**< DSPI_2 combined overrun and parity error interrupt requests: Transmit FIFO Underflow/Receive FIFO Overflow SPI Parity Error/DSI Parity Error */
  DSPI2_TXFIFO_EOQF_IRQn       = 137u,             /**< DSPI_2 transmit FIFO End of Queue Flag */
  DSPI2_TXFIFO_TFFF_IRQn       = 138u,             /**< DSPI_2 Transmit FIFO Fill Flag */
  DSPI2_TCF_IRQn               = 139u,             /**< DSPI_2 Transfer Complete/DSI Data Match Flag */
  DSPI2_RXFIFO_RFDF_IRQn       = 140u,             /**< DSPI_2 Receive FIFO Drain Flag */
  DSPI3_ERR_IRQn               = 141u,             /**< DSPI_3 combined overrun and parity error interrupt requests: Transmit FIFO Underflow/Receive FIFO Overflow SPI Parity Error/DSI Parity Error */
  DSPI3_TXFIFO_EOQF_IRQn       = 142u,             /**< DSPI_3 transmit FIFO End of Queue Flag */
  DSPI3_TXFIFO_TFFF_IRQn       = 143u,             /**< DSPI_3 Transmit FIFO Fill Flag */
  DSPI3_TCF_IRQn               = 144u,             /**< DSPI_3 Transfer Complete/DSI Data Match Flag */
  DSPI3_RXFIFO_RFDF_IRQn       = 145u,             /**< DSPI_3 Receive FIFO Drain Flag */
  ESCI0_CIR_IRQn               = 146u,             /**< Combined Interrupt Requests of ESCI Module 0 */
  PCU_MASTER0_IRQn             = 147u,             /**< PCU_IR0[OIF] | PCU_IR0[EIF] */
  PCU_MASTER1_IRQn             = 148u,             /**< PCU_IR1[OIF] | PCU_IR1[EIF] */
  ESCI1_CIR_IRQn               = 149u,             /**< Combined Interrupt Requests of ESCI Module 1 */
  PSI50_SDOE_IRQn              = 150u,             /**< PSI5_0 DMA Status, New data, OverWrite, Error interrupts */
  PSI51_SDOE_IRQn              = 151u,             /**< PSI5_1 DMA Status, New data, OverWrite, Error interrupts */
  CAN0_ESR1_IRQn               = 152u,             /**< FlexCAN_0 Bus Off, Transmit Warning, Receive Warning */
  CAN0_ESR2_IRQn               = 153u,             /**< FlexCAN_0 Error, FlexCAN_0 ECC Correctable Error, FlexCAN_0 ECC Host Access Non-Correctable Error, FlexCAN_0 ECC CAN Access Non-Correctable Error */
  CAN0_BUF0_IRQn               = 155u,             /**< FlexCAN_0 Buffer 0 Interrupt */
  CAN0_BUF1_IRQn               = 156u,             /**< FlexCAN_0 Buffer 1 Interrupt */
  CAN0_BUF2_IRQn               = 157u,             /**< FlexCAN_0 Buffer 2 Interrupt */
  CAN0_BUF3_IRQn               = 158u,             /**< FlexCAN_0 Buffer 3 Interrupt */
  CAN0_BUF4_IRQn               = 159u,             /**< FlexCAN_0 Buffer 4 Interrupt */
  CAN0_BUF5_IRQn               = 160u,             /**< FlexCAN_0 Buffer 5 Interrupt */
  CAN0_BUF6_IRQn               = 161u,             /**< FlexCAN_0 Buffer 6 Interrupt */
  CAN0_BUF7_IRQn               = 162u,             /**< FlexCAN_0 Buffer 7 Interrupt */
  CAN0_BUF8_IRQn               = 163u,             /**< FlexCAN_0 Buffer 8 Interrupt */
  CAN0_BUF9_IRQn               = 164u,             /**< FlexCAN_0 Buffer 9 Interrupt */
  CAN0_BUF10_IRQn              = 165u,             /**< FlexCAN_0 Buffer 10 Interrupt */
  CAN0_BUF11_IRQn              = 166u,             /**< FlexCAN_0 Buffer 11 Interrupt */
  CAN0_BUF12_IRQn              = 167u,             /**< FlexCAN_0 Buffer 12 Interrupt */
  CAN0_BUF13_IRQn              = 168u,             /**< FlexCAN_0 Buffer 13 Interrupt */
  CAN0_BUF14_IRQn              = 169u,             /**< FlexCAN_0 Buffer 14 Interrupt */
  CAN0_BUF15_IRQn              = 170u,             /**< FlexCAN_0 Buffer 15 Interrupt */
  CAN0_BUF16_31_IRQn           = 171u,             /**< FlexCAN_0 Buffers 31-16 Interrupts */
  CAN0_BUF32_63_IRQn           = 172u,             /**< FlexCAN_0 Buffers 63-32 Interrupts */
  CAN2_ESR1_IRQn               = 173u,             /**< FlexCAN_2 Bus Off, Transmit Warning, Receive Warning */
  CAN2_ESR2_IRQn               = 174u,             /**< FlexCAN_2 Error, FlexCAN_2 ECC Correctable Error, FlexCAN_2 ECC Host Access Non-Correctable Error, FlexCAN_2 ECC CAN Access Non-Correctable Error */
  CAN2_BUF0_IRQn               = 176u,             /**< FlexCAN_2 Buffer 0 Interrupt */
  CAN2_BUF1_IRQn               = 177u,             /**< FlexCAN_2 Buffer 1 Interrupt */
  CAN2_BUF2_IRQn               = 178u,             /**< FlexCAN_2 Buffer 2 Interrupt */
  CAN2_BUF3_IRQn               = 179u,             /**< FlexCAN_2 Buffer 3 Interrupt */
  CAN2_BUF4_IRQn               = 180u,             /**< FlexCAN_2 Buffer 4 Interrupt */
  CAN2_BUF5_IRQn               = 181u,             /**< FlexCAN_2 Buffer 5 Interrupt */
  CAN2_BUF6_IRQn               = 182u,             /**< FlexCAN_2 Buffer 6 Interrupt */
  CAN2_BUF7_IRQn               = 183u,             /**< FlexCAN_2 Buffer 7 Interrupt */
  CAN2_BUF8_IRQn               = 184u,             /**< FlexCAN_2 Buffer 8 Interrupt */
  CAN2_BUF9_IRQn               = 185u,             /**< FlexCAN_2 Buffer 9 Interrupt */
  CAN2_BUF10_IRQn              = 186u,             /**< FlexCAN_2 Buffer 10 Interrupt */
  CAN2_BUF11_IRQn              = 187u,             /**< FlexCAN_2 Buffer 11 Interrupt */
  CAN2_BUF12_IRQn              = 188u,             /**< FlexCAN_2 Buffer 12 Interrupt */
  CAN2_BUF13_IRQn              = 189u,             /**< FlexCAN_2 Buffer 13 Interrupt */
  CAN2_BUF14_IRQn              = 190u,             /**< FlexCAN_2 Buffer 14 Interrupt */
  CAN2_BUF15_IRQn              = 191u,             /**< FlexCAN_2 Buffer 15 Interrupt */
  CAN2_BUF16_31_IRQn           = 192u,             /**< FlexCAN_2 Buffers 31-16 Interrupts */
  CAN2_BUF32_63_IRQn           = 193u,             /**< FlexCAN_2 Buffers 63-32 Interrupts */
  FEC_TXF_IRQn                 = 194u,             /**< FEC Transmit Frame flag */
  FEC_RXF_IRQn                 = 195u,             /**< FEC Receive Frame flag */
  FEC_ERR_IRQn                 = 196u,             /**< Combined Interrupt Requests of the FEC Ethernet Interrupt Event Register */
  DEC0_IDF_IRQn                = 197u,             /**< Decimation 0 Input (Fill) */
  DEC0_OD_SD_IRQn              = 198u,             /**< Decimation 0 Output/Integ (Drain/Integ) */
  DEC0_ERR_IRQn                = 199u,             /**< Decimation 0 Error */
  STM_Ch0_IRQn                 = 200u,             /**< System Timer Module Interrupt 0 */
  STM_Ch123_IRQn               = 201u,             /**< System Timer Module Interrupts 1, 2, 3 */
  EMIOS0_CH16_IRQn             = 202u,             /**< eMIOS_0 channel 16 Flag */
  EMIOS0_CH17_IRQn             = 203u,             /**< eMIOS_0 channel 17 Flag */
  EMIOS0_CH18_IRQn             = 204u,             /**< eMIOS_0 channel 18 Flag */
  EMIOS0_CH19_IRQn             = 205u,             /**< eMIOS_0 channel 19 Flag */
  EMIOS0_CH20_IRQn             = 206u,             /**< eMIOS_0 channel 20 Flag */
  EMIOS0_CH21_IRQn             = 207u,             /**< eMIOS_0 channel 21 Flag */
  EMIOS0_CH22_IRQn             = 208u,             /**< eMIOS_0 channel 22 Flag */
  EMIOS0_CH23_IRQn             = 209u,             /**< eMIOS_0 channel 23 Flag */
  DMA0_ERR32_63_IRQn           = 210u,             /**< eDMA0 channel Error flags 32-63 */
  DMA0_32_IRQn                 = 211u,             /**< eDMA0 channel Interrupt 32 */
  DMA0_33_IRQn                 = 212u,             /**< eDMA0 channel Interrupt 33 */
  DMA0_34_IRQn                 = 213u,             /**< eDMA0 channel Interrupt 34 */
  DMA0_35_IRQn                 = 214u,             /**< eDMA0 channel Interrupt 35 */
  DMA0_36_IRQn                 = 215u,             /**< eDMA0 channel Interrupt 36 */
  DMA0_37_IRQn                 = 216u,             /**< eDMA0 channel Interrupt 37 */
  DMA0_38_IRQn                 = 217u,             /**< eDMA0 channel Interrupt 38 */
  DMA0_39_IRQn                 = 218u,             /**< eDMA0 channel Interrupt 39 */
  DMA0_40_IRQn                 = 219u,             /**< eDMA0 channel Interrupt 40 */
  DMA0_41_IRQn                 = 220u,             /**< eDMA0 channel Interrupt 41 */
  DMA0_42_IRQn                 = 221u,             /**< eDMA0 channel Interrupt 42 */
  DMA0_43_IRQn                 = 222u,             /**< eDMA0 channel Interrupt 43 */
  DMA0_44_IRQn                 = 223u,             /**< eDMA0 channel Interrupt 44 */
  DMA0_45_IRQn                 = 224u,             /**< eDMA0 channel Interrupt 45 */
  DMA0_46_IRQn                 = 225u,             /**< eDMA0 channel Interrupt 46 */
  DMA0_47_IRQn                 = 226u,             /**< eDMA0 channel Interrupt 47 */
  DMA0_48_IRQn                 = 227u,             /**< eDMA0 channel Interrupt 48 */
  DMA0_49_IRQn                 = 228u,             /**< eDMA0 channel Interrupt 49 */
  DMA0_50_IRQn                 = 229u,             /**< eDMA0 channel Interrupt 50 */
  DMA0_51_IRQn                 = 230u,             /**< eDMA0 channel Interrupt 51 */
  DMA0_52_IRQn                 = 231u,             /**< eDMA0 channel Interrupt 52 */
  DMA0_53_IRQn                 = 232u,             /**< eDMA0 channel Interrupt 53 */
  DMA0_54_IRQn                 = 233u,             /**< eDMA0 channel Interrupt 54 */
  DMA0_55_IRQn                 = 234u,             /**< eDMA0 channel Interrupt 55 */
  DMA0_56_IRQn                 = 235u,             /**< eDMA0 channel Interrupt 56 */
  DMA0_57_IRQn                 = 236u,             /**< eDMA0 channel Interrupt 57 */
  DMA0_58_IRQn                 = 237u,             /**< eDMA0 channel Interrupt 58 */
  DMA0_59_IRQn                 = 238u,             /**< eDMA0 channel Interrupt 59 */
  DMA0_60_IRQn                 = 239u,             /**< eDMA0 channel Interrupt 60 */
  DMA0_61_IRQn                 = 240u,             /**< eDMA0 channel Interrupt 61 */
  DMA0_62_IRQn                 = 241u,             /**< eDMA0 channel Interrupt 62 */
  DMA0_63_IRQn                 = 242u,             /**< eDMA0 channel Interrupt 63 */
  ETPU1_CIS0_IRQn              = 243u,             /**< eTPU Engine 1 Channel 0 Interrupt Status */
  ETPU1_CIS1_IRQn              = 244u,             /**< eTPU Engine 1 Channel 1 Interrupt Status */
  ETPU1_CIS2_IRQn              = 245u,             /**< eTPU Engine 1 Channel 2 Interrupt Status */
  ETPU1_CIS3_IRQn              = 246u,             /**< eTPU Engine 1 Channel 3 Interrupt Status */
  ETPU1_CIS4_IRQn              = 247u,             /**< eTPU Engine 1 Channel 4 Interrupt Status */
  ETPU1_CIS5_IRQn              = 248u,             /**< eTPU Engine 1 Channel 5 Interrupt Status */
  ETPU1_CIS6_IRQn              = 249u,             /**< eTPU Engine 1 Channel 6 Interrupt Status */
  ETPU1_CIS7_IRQn              = 250u,             /**< eTPU Engine 1 Channel 7 Interrupt Status */
  ETPU1_CIS8_IRQn              = 251u,             /**< eTPU Engine 1 Channel 8 Interrupt Status */
  ETPU1_CIS9_IRQn              = 252u,             /**< eTPU Engine 1 Channel 9 Interrupt Status */
  ETPU1_CIS10_IRQn             = 253u,             /**< eTPU Engine 1 Channel 10 Interrupt Status */
  ETPU1_CIS11_IRQn             = 254u,             /**< eTPU Engine 1 Channel 11 Interrupt Status */
  ETPU1_CIS12_IRQn             = 255u,             /**< eTPU Engine 1 Channel 12 Interrupt Status */
  ETPU1_CIS13_IRQn             = 256u,             /**< eTPU Engine 1 Channel 13 Interrupt Status */
  ETPU1_CIS14_IRQn             = 257u,             /**< eTPU Engine 1 Channel 14 Interrupt Status */
  ETPU1_CIS15_IRQn             = 258u,             /**< eTPU Engine 1 Channel 15 Interrupt Status */
  ETPU1_CIS16_IRQn             = 259u,             /**< eTPU Engine 1 Channel 16 Interrupt Status */
  ETPU1_CIS17_IRQn             = 260u,             /**< eTPU Engine 1 Channel 17 Interrupt Status */
  ETPU1_CIS18_IRQn             = 261u,             /**< eTPU Engine 1 Channel 18 Interrupt Status */
  ETPU1_CIS19_IRQn             = 262u,             /**< eTPU Engine 1 Channel 19 Interrupt Status */
  ETPU1_CIS20_IRQn             = 263u,             /**< eTPU Engine 1 Channel 20 Interrupt Status */
  ETPU1_CIS21_IRQn             = 264u,             /**< eTPU Engine 1 Channel 21 Interrupt Status */
  ETPU1_CIS22_IRQn             = 265u,             /**< eTPU Engine 1 Channel 22 Interrupt Status */
  ETPU1_CIS23_IRQn             = 266u,             /**< eTPU Engine 1 Channel 23 Interrupt Status */
  ETPU1_CIS24_IRQn             = 267u,             /**< eTPU Engine 1 Channel 24 Interrupt Status */
  ETPU1_CIS25_IRQn             = 268u,             /**< eTPU Engine 1 Channel 25 Interrupt Status */
  ETPU1_CIS26_IRQn             = 269u,             /**< eTPU Engine 1 Channel 26 Interrupt Status */
  ETPU1_CIS27_IRQn             = 270u,             /**< eTPU Engine 1 Channel 27 Interrupt Status */
  ETPU1_CIS28_IRQn             = 271u,             /**< eTPU Engine 1 Channel 28 Interrupt Status */
  ETPU1_CIS29_IRQn             = 272u,             /**< eTPU Engine 1 Channel 29 Interrupt Status */
  ETPU1_CIS30_IRQn             = 273u,             /**< eTPU Engine 1 Channel 30 Interrupt Status */
  ETPU1_CIS31_IRQn             = 274u,             /**< eTPU Engine 1 Channel 31 Interrupt Status */
  DSPI0_ERR_IRQn               = 275u,             /**< DSPI_0 combined overrun and parity error interrupt requests: Transmit FIFO Underflow/Receive FIFO Overflow SPI Parity Error/DSI Parity Error */
  DSPI0_TXFIFO_EOQF_IRQn       = 276u,             /**< DSPI_0 transmit FIFO End of Queue Flag */
  DSPI0_TXFIFO_TFFF_IRQn       = 277u,             /**< DSPI_0 Transmit FIFO Fill Flag */
  DSPI0_TCF_IRQn               = 278u,             /**< DSPI_0 Transfer Complete/DSI Data Match Flag */
  DSPI0_RXFIFO_RFDF_IRQn       = 279u,             /**< DSPI_0 Receive FIFO Drain Flag */
  CAN1_ESR1_IRQn               = 280u,             /**< FlexCAN_1 Bus Off, Transmit Warning, Receive Warning */
  CAN1_ESR2_IRQn               = 281u,             /**< FlexCAN_1 Error, FlexCAN_1 ECC Correctable Error, FlexCAN_1 ECC Host Access Non-Correctable Error, FlexCAN_1 ECC CAN Access Non-Correctable Error */
  CAN1_BUF0_IRQn               = 283u,             /**< FlexCAN_1 Buffer 0 Interrupt */
  CAN1_BUF1_IRQn               = 284u,             /**< FlexCAN_1 Buffer 1 Interrupt */
  CAN1_BUF2_IRQn               = 285u,             /**< FlexCAN_1 Buffer 2 Interrupt */
  CAN1_BUF3_IRQn               = 286u,             /**< FlexCAN_1 Buffer 3 Interrupt */
  CAN1_BUF4_IRQn               = 287u,             /**< FlexCAN_1 Buffer 4 Interrupt */
  CAN1_BUF5_IRQn               = 288u,             /**< FlexCAN_1 Buffer 5 Interrupt */
  CAN1_BUF6_IRQn               = 289u,             /**< FlexCAN_1 Buffer 6 Interrupt */
  CAN1_BUF7_IRQn               = 290u,             /**< FlexCAN_1 Buffer 7 Interrupt */
  CAN1_BUF8_IRQn               = 291u,             /**< FlexCAN_1 Buffer 8 Interrupt */
  CAN1_BUF9_IRQn               = 292u,             /**< FlexCAN_1 Buffer 9 Interrupt */
  CAN1_BUF10_IRQn              = 293u,             /**< FlexCAN_1 Buffer 10 Interrupt */
  CAN1_BUF11_IRQn              = 294u,             /**< FlexCAN_1 Buffer 11 Interrupt */
  CAN1_BUF12_IRQn              = 295u,             /**< FlexCAN_1 Buffer 12 Interrupt */
  CAN1_BUF13_IRQn              = 296u,             /**< FlexCAN_1 Buffer 13 Interrupt */
  CAN1_BUF14_IRQn              = 297u,             /**< FlexCAN_1 Buffer 14 Interrupt */
  CAN1_BUF15_IRQn              = 298u,             /**< FlexCAN_1 Buffer 15 Interrupt */
  CAN1_BUF16_31_IRQn           = 299u,             /**< FlexCAN_1 Buffers 31-16 Interrupts */
  CAN1_BUF32_63_IRQn           = 300u,             /**< FlexCAN_1 Buffers 63-32 Interrupts */
  PIT_RTI0_IRQn                = 301u,             /**< Periodic Interrupt Timer Interrupt 0 */
  PIT_RTI1_IRQn                = 302u,             /**< Periodic Interrupt Timer Interrupt 1 */
  PIT_RTI2_IRQn                = 303u,             /**< Periodic Interrupt Timer Interrupt 2 */
  PIT_RTI3_IRQn                = 304u,             /**< Periodic Interrupt Timer Interrupt 3 */
  PIT_RTIINT_IRQn              = 305u,             /**< Real Time Interrupt Interrupt */
  FMC_Done_IRQn                = 307u,             /**< Flash memory program/erase complete */
  CAN3_ESR1_IRQn               = 308u,             /**< FlexCAN_3 Bus Off, Transmit Warning, Receive Warning */
  CAN3_ESR2_IRQn               = 309u,             /**< FlexCAN_3 Error, FlexCAN_3 ECC Correctable Error, FlexCAN_3 ECC Host Access Non-Correctable Error, FlexCAN_3 ECC CAN Access Non-Correctable Error */
  CAN3_BUF0_IRQn               = 311u,             /**< FlexCAN_3 Buffer 0 Interrupt */
  CAN3_BUF1_IRQn               = 312u,             /**< FlexCAN_3 Buffer 1 Interrupt */
  CAN3_BUF2_IRQn               = 313u,             /**< FlexCAN_3 Buffer 2 Interrupt */
  CAN3_BUF3_IRQn               = 314u,             /**< FlexCAN_3 Buffer 3 Interrupt */
  CAN3_BUF4_IRQn               = 315u,             /**< FlexCAN_3 Buffer 4 Interrupt */
  CAN3_BUF5_IRQn               = 316u,             /**< FlexCAN_3 Buffer 5 Interrupt */
  CAN3_BUF6_IRQn               = 317u,             /**< FlexCAN_3 Buffer 6 Interrupt */
  CAN3_BUF7_IRQn               = 318u,             /**< FlexCAN_3 Buffer 7 Interrupt */
  CAN3_BUF8_IRQn               = 319u,             /**< FlexCAN_3 Buffer 8 Interrupt */
  CAN3_BUF9_IRQn               = 320u,             /**< FlexCAN_3 Buffer 9 Interrupt */
  CAN3_BUF10_IRQn              = 321u,             /**< FlexCAN_3 Buffer 10 Interrupt */
  CAN3_BUF11_IRQn              = 322u,             /**< FlexCAN_3 Buffer 11 Interrupt */
  CAN3_BUF12_IRQn              = 323u,             /**< FlexCAN_3 Buffer 12 Interrupt */
  CAN3_BUF13_IRQn              = 324u,             /**< FlexCAN_3 Buffer 13 Interrupt */
  CAN3_BUF14_IRQn              = 325u,             /**< FlexCAN_3 Buffer 14 Interrupt */
  CAN3_BUF15_IRQn              = 326u,             /**< FlexCAN_3 Buffer 15 Interrupt */
  CAN3_BUF16_31_IRQn           = 327u,             /**< FlexCAN_3 Buffers 31-16 Interrupts */
  CAN3_BUF32_63_IRQn           = 328u,             /**< FlexCAN_3 Buffers 63-32 Interrupts */
  SRX0_GBL_STATUS_IRQn         = 329u,             /**< SENT_0 Module Interrupts */
  SRX0_CH0_IRQn                = 330u,             /**< SENT_0_CH0 Interrupts */
  SRX0_CH1_IRQn                = 331u,             /**< SENT_0_CH1 Interrupts */
  SRX0_CH2_IRQn                = 332u,             /**< SENT_0_CH2 Interrupts */
  SRX0_CH3_IRQn                = 333u,             /**< SENT_0_CH3 Interrupts */
  SRX0_CH4_IRQn                = 334u,             /**< SENT_0_CH4 Interrupts */
  SRX0_CH5_IRQn                = 335u,             /**< SENT_0_CH5 Interrupts */
  SRX1_GBL_STATUS_IRQn         = 336u,             /**< SENT_1 Module Interrupts */
  SRX1_CH0_IRQn                = 337u,             /**< SENT_1_CH0 Interrupts */
  SRX1_CH1_IRQn                = 338u,             /**< SENT_1_CH1 Interrupts */
  SRX1_CH2_IRQn                = 339u,             /**< SENT_1_CH2 Interrupts */
  SRX1_CH3_IRQn                = 340u,             /**< SENT_1_CH3 Interrupts */
  SRX1_CH4_IRQn                = 341u,             /**< SENT_1_CH4 Interrupts */
  SRX1_CH5_IRQn                = 342u,             /**< SENT_1_CH5 Interrupts */
  PMC_IRQn                     = 343u,             /**< Power Management Controller Interrupts */
  PMC_TEMP_IRQn                = 344u,             /**< Temperature Sensor Interrupts: TEMP0_0, TEMP0_2, TEMP0_3, TEMP1_0, TEMP1_2, TEMP1_3 of PMC_ESR_TD */
  JDC_IRQn                     = 345u,             /**< JDC Interrupts: JDC_MSR[JIN_INT] | JDC_MSR[JOUT_INT] */
  SIPI0_IRQn                   = 346u,             /**< SIPI Combined Interrupts: SIPI_ERR | SIPI_SR | SIPI_CSR0 */
  LFAST_IRQn                   = 347u,             /**< LFAST Combined Interrupts */
  MCAN_IRQn                    = 348u,             /**< M_CAN0_0, M_CAN0_1, M_CAN1_0, M_CAN1_1 Combined Interrupts */
  ERM_IRQn                     = 349u,             /**< ERM Combined Interrupts: Single bit Correction | Multi bit Detection */
  CMU01_IRQn                   = 350u,             /**< CMU_0, CMU_1 Clock Error Interrupts */
  CMU23_IRQn                   = 351u,             /**< CMU_2, CMU_3 Clock Error Interrupts */
  CMU45_IRQn                   = 352u,             /**< CMU_4, CMU_5 Clock Error Interrupts */
  CMU67_IRQn                   = 353u,             /**< CMU_6, CMU_7 Clock Error Interrupts */
  CMU8_IRQn                    = 354u,             /**< CMU_8 Clock Error Interrupts */
  CMU_RSV0_IRQn                = 355u,             /**< CMU_RSV0 */
  CMU_RSV1_IRQn                = 356u,             /**< CMU_RSV1 */
  CMU_RSV2_IRQn                = 357u,             /**< CMU_RSV2 */
  REACM_GBL_IRQn               = 358u,             /**< Reaction Module Global Interrupt: REACM_GEFR[OVR|EF7:0] */
  REACM_CH01_IRQn              = 359u,             /**< Reaction Channel 0 and Reaction Channel 1 Combined Interrupts */
  REACM_CH23_IRQn              = 360u,             /**< Reaction Channel 2 and Reaction Channel 3 Combined Interrupts */
  REACM_CH45_IRQn              = 361u,             /**< Reaction Channel 4 and Reaction Channel 5 Combined Interrupts */
  REACM_CH67_IRQn              = 362u,             /**< Reaction Channel 6 and Reaction Channel 7 Combined Interrupts */
  REACM_CH89_IRQn              = 363u,             /**< Reaction Channel 8 and Reaction Channel 9 Combined Interrupts */
  REACM_RSV0_IRQn              = 364u,             /**< REACM_RSV0 */
  REACM_RSV1_IRQn              = 365u,             /**< REACM_RSV1 */
  DEC1_IDF_IRQn                = 366u,             /**< Decimation 1 Input (Fill) */
  DEC1_OD_SD_IRQn              = 367u,             /**< Decimation 1 Output/Integ (Drain/Integ) */
  DEC1_ERR_IRQn                = 368u,             /**< Decimation 1 Error */
  ETPU2_GE_IRQn                = 369u,             /**< eTPU Engine 2 and 1 Global Exception */
  ETPU2_CIS0_IRQn              = 370u,             /**< eTPU Engine 2 Channel 0 Interrupt Status */
  ETPU2_CIS1_IRQn              = 371u,             /**< eTPU Engine 2 Channel 1 Interrupt Status */
  ETPU2_CIS2_IRQn              = 372u,             /**< eTPU Engine 2 Channel 2 Interrupt Status */
  ETPU2_CIS3_IRQn              = 373u,             /**< eTPU Engine 2 Channel 3 Interrupt Status */
  ETPU2_CIS4_IRQn              = 374u,             /**< eTPU Engine 2 Channel 4 Interrupt Status */
  ETPU2_CIS5_IRQn              = 375u,             /**< eTPU Engine 2 Channel 5 Interrupt Status */
  ETPU2_CIS6_IRQn              = 376u,             /**< eTPU Engine 2 Channel 6 Interrupt Status */
  ETPU2_CIS7_IRQn              = 377u,             /**< eTPU Engine 2 Channel 7 Interrupt Status */
  ETPU2_CIS8_IRQn              = 378u,             /**< eTPU Engine 2 Channel 8 Interrupt Status */
  ETPU2_CIS9_IRQn              = 379u,             /**< eTPU Engine 2 Channel 9 Interrupt Status */
  ETPU2_CIS10_IRQn             = 380u,             /**< eTPU Engine 2 Channel 10 Interrupt Status */
  ETPU2_CIS11_IRQn             = 381u,             /**< eTPU Engine 2 Channel 11 Interrupt Status */
  ETPU2_CIS12_IRQn             = 382u,             /**< eTPU Engine 2 Channel 12 Interrupt Status */
  ETPU2_CIS13_IRQn             = 383u,             /**< eTPU Engine 2 Channel 13 Interrupt Status */
  ETPU2_CIS14_IRQn             = 384u,             /**< eTPU Engine 2 Channel 14 Interrupt Status */
  ETPU2_CIS15_IRQn             = 385u,             /**< eTPU Engine 2 Channel 15 Interrupt Status */
  ETPU2_CIS16_IRQn             = 386u,             /**< eTPU Engine 2 Channel 16 Interrupt Status */
  ETPU2_CIS17_IRQn             = 387u,             /**< eTPU Engine 2 Channel 17 Interrupt Status */
  ETPU2_CIS18_IRQn             = 388u,             /**< eTPU Engine 2 Channel 18 Interrupt Status */
  ETPU2_CIS19_IRQn             = 389u,             /**< eTPU Engine 2 Channel 19 Interrupt Status */
  ETPU2_CIS20_IRQn             = 390u,             /**< eTPU Engine 2 Channel 20 Interrupt Status */
  ETPU2_CIS21_IRQn             = 391u,             /**< eTPU Engine 2 Channel 21 Interrupt Status */
  ETPU2_CIS22_IRQn             = 392u,             /**< eTPU Engine 2 Channel 22 Interrupt Status */
  ETPU2_CIS23_IRQn             = 393u,             /**< eTPU Engine 2 Channel 23 Interrupt Status */
  EQADC1_OVRx_IRQn             = 394u,             /**< eQADC combined overrun interrupt requests from all of the FIFOs: Trigger Overrun, Receive FIFO Overflow and command FIFO Underflow */
  EQADC1_FIFO0_NCF_IRQn        = 395u,             /**< eQADC command FIFO 0 Non-Coherency Flag */
  EQADC1_FIFO0_PF_IRQn         = 396u,             /**< eQADC command FIFO 0 Pause Flag */
  EQADC1_FIFO0_EOQF_IRQn       = 397u,             /**< eQADC command FIFO 0 command queue End of Queue Flag */
  EQADC1_FIFO0_CFFF_IRQn       = 398u,             /**< eQADC Command FIFO 0 Fill Flag */
  EQADC1_FIFO0_RFDF_IRQn       = 399u,             /**< eQADC Receive FIFO 0 Drain Flag */
  EQADC1_FIFO1_NCF_IRQn        = 400u,             /**< eQADC command FIFO 1 Non-Coherency Flag */
  EQADC1_FIFO1_PF_IRQn         = 401u,             /**< eQADC command FIFO 1 Pause Flag */
  EQADC1_FIFO1_EOQF_IRQn       = 402u,             /**< eQADC command FIFO 1 command queue End of Queue Flag */
  EQADC1_FIFO1_CFFF_IRQn       = 403u,             /**< eQADC Command FIFO 1 Fill Flag */
  EQADC1_FIFO1_RFDF_IRQn       = 404u,             /**< eQADC Receive FIFO 1 Drain Flag */
  EQADC1_FIFO2_NCF_IRQn        = 405u,             /**< eQADC command FIFO 2 Non-Coherency Flag */
  EQADC1_FIFO2_PF_IRQn         = 406u,             /**< eQADC command FIFO 2 Pause Flag */
  EQADC1_FIFO2_EOQF_IRQn       = 407u,             /**< eQADC command FIFO 2 command queue End of Queue Flag */
  EQADC1_FIFO2_CFFF_IRQn       = 408u,             /**< eQADC Command FIFO 2 Fill Flag */
  EQADC1_FIFO2_RFDF_IRQn       = 409u,             /**< eQADC Receive FIFO 2 Drain Flag */
  EQADC1_FIFO3_NCF_IRQn        = 410u,             /**< eQADC command FIFO 3 Non-Coherency Flag */
  EQADC1_FIFO3_PF_IRQn         = 411u,             /**< eQADC command FIFO 3 Pause Flag */
  EQADC1_FIFO3_EOQF_IRQn       = 412u,             /**< eQADC command FIFO 3 command queue End of Queue Flag */
  EQADC1_FIFO3_CFFF_IRQn       = 413u,             /**< eQADC Command FIFO 3 Fill Flag */
  EQADC1_FIFO3_RFDF_IRQn       = 414u,             /**< eQADC Receive FIFO 3 Drain Flag */
  EQADC1_FIFO4_NCF_IRQn        = 415u,             /**< eQADC command FIFO 4 Non-Coherency Flag */
  EQADC1_FIFO4_PF_IRQn         = 416u,             /**< eQADC command FIFO 4 Pause Flag */
  EQADC1_FIFO4_EOQF_IRQn       = 417u,             /**< eQADC command FIFO 4 command queue End of Queue Flag */
  EQADC1_FIFO4_CFFF_IRQn       = 418u,             /**< eQADC Command FIFO 4 Fill Flag */
  EQADC1_FIFO4_RFDF_IRQn       = 419u,             /**< eQADC Receive FIFO 4 Drain Flag */
  EQADC1_FIFO5_NCF_IRQn        = 420u,             /**< eQADC command FIFO 5 Non-Coherency Flag */
  EQADC1_FIFO5_PF_IRQn         = 421u,             /**< eQADC command FIFO 5 Pause Flag */
  EQADC1_FIFO5_EOQF_IRQn       = 422u,             /**< eQADC command FIFO 5 command queue End of Queue Flag */
  EQADC1_FIFO5_CFFF_IRQn       = 423u,             /**< eQADC Command FIFO 5 Fill Flag */
  EQADC1_FIFO5_RFDF_IRQn       = 424u,             /**< eQADC Receive FIFO 5 Drain Flag */
  DMA1_ERR0_31_IRQn            = 425u,             /**< eDMA1 channel Error flags 0-31 */
  DMA1_0_IRQn                  = 426u,             /**< eDMA1 channel Interrupt 0 */
  DMA1_1_IRQn                  = 427u,             /**< eDMA1 channel Interrupt 1 */
  DMA1_2_IRQn                  = 428u,             /**< eDMA1 channel Interrupt 2 */
  DMA1_3_IRQn                  = 429u,             /**< eDMA1 channel Interrupt 3 */
  DMA1_4_IRQn                  = 430u,             /**< eDMA1 channel Interrupt 4 */
  DMA1_5_IRQn                  = 431u,             /**< eDMA1 channel Interrupt 5 */
  DMA1_6_IRQn                  = 432u,             /**< eDMA1 channel Interrupt 6 */
  DMA1_7_IRQn                  = 433u,             /**< eDMA1 channel Interrupt 7 */
  DMA1_8_IRQn                  = 434u,             /**< eDMA1 channel Interrupt 8 */
  DMA1_9_IRQn                  = 435u,             /**< eDMA1 channel Interrupt 9 */
  DMA1_10_IRQn                 = 436u,             /**< eDMA1 channel Interrupt 10 */
  DMA1_11_IRQn                 = 437u,             /**< eDMA1 channel Interrupt 11 */
  DMA1_12_IRQn                 = 438u,             /**< eDMA1 channel Interrupt 12 */
  DMA1_13_IRQn                 = 439u,             /**< eDMA1 channel Interrupt 13 */
  DMA1_14_IRQn                 = 440u,             /**< eDMA1 channel Interrupt 14 */
  DMA1_15_IRQn                 = 441u,             /**< eDMA1 channel Interrupt 15 */
  DMA1_16_IRQn                 = 442u,             /**< eDMA1 channel Interrupt 16 */
  DMA1_17_IRQn                 = 443u,             /**< eDMA1 channel Interrupt 17 */
  DMA1_18_IRQn                 = 444u,             /**< eDMA1 channel Interrupt 18 */
  DMA1_19_IRQn                 = 445u,             /**< eDMA1 channel Interrupt 19 */
  DMA1_20_IRQn                 = 446u,             /**< eDMA1 channel Interrupt 20 */
  DMA1_21_IRQn                 = 447u,             /**< eDMA1 channel Interrupt 21 */
  DMA1_22_IRQn                 = 448u,             /**< eDMA1 channel Interrupt 22 */
  DMA1_23_IRQn                 = 449u,             /**< eDMA1 channel Interrupt 23 */
  DMA1_24_IRQn                 = 450u,             /**< eDMA1 channel Interrupt 24 */
  DMA1_25_IRQn                 = 451u,             /**< eDMA1 channel Interrupt 25 */
  DMA1_26_IRQn                 = 452u,             /**< eDMA1 channel Interrupt 26 */
  DMA1_27_IRQn                 = 453u,             /**< eDMA1 channel Interrupt 27 */
  DMA1_28_IRQn                 = 454u,             /**< eDMA1 channel Interrupt 28 */
  DMA1_29_IRQn                 = 455u,             /**< eDMA1 channel Interrupt 29 */
  DMA1_30_IRQn                 = 456u,             /**< eDMA1 channel Interrupt 30 */
  DMA1_31_IRQn                 = 457u,             /**< eDMA1 channel Interrupt 31 */
  SDADC1234_IRQn               = 458u,             /**< SDADC1 to SDADC4 Interrupts */
  EMIOS1_CH16_IRQn             = 459u,             /**< eMIOS_1 channel 16 Flag */
  EMIOS1_CH17_IRQn             = 460u,             /**< eMIOS_1 channel 17 Flag */
  EMIOS1_CH18_IRQn             = 461u,             /**< eMIOS_1 channel 18 Flag */
  EMIOS1_CH19_IRQn             = 462u,             /**< eMIOS_1 channel 19 Flag */
  EMIOS1_CH20_IRQn             = 463u,             /**< eMIOS_1 channel 20 Flag */
  EMIOS1_CH21_IRQn             = 464u,             /**< eMIOS_1 channel 21 Flag */
  EMIOS1_CH22_IRQn             = 465u,             /**< eMIOS_1 channel 22 Flag */
  EMIOS1_CH23_IRQn             = 466u,             /**< eMIOS_1 channel 23 Flag */
  DEC2_IDF_IRQn                = 467u,             /**< Decimation 2 Input (Fill) */
  DEC2_OD_SD_IRQn              = 468u,             /**< Decimation 2 Output/Integ (Drain/Integ) */
  DEC2_ERR_IRQn                = 469u,             /**< Decimation 2 Error */
  DEC3_IDF_IRQn                = 470u,             /**< Decimation 3 Input (Fill) */
  DEC3_OD_SD_IRQn              = 471u,             /**< Decimation 3 Output/Integ (Drain/Integ) */
  DEC3_ERR_IRQn                = 472u,             /**< Decimation 3 Error */
  ESCI2_CIR_IRQn               = 473u,             /**< Combined Interrupt Requests of ESCI Module 2 */
  ESCI3_CIR_IRQn               = 474u,             /**< Combined Interrupt Requests of ESCI Module 3 */
  ESCI4_CIR_IRQn               = 475u,             /**< Combined Interrupt Requests of ESCI Module 4 */
  DECFILTER4_IRQn              = 476u,             /**< Decimation Filter 4 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER5_IRQn              = 477u,             /**< Decimation Filter 5 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER6_IRQn              = 478u,             /**< Decimation Filter 6 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER7_IRQn              = 479u,             /**< Decimation Filter 7 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER8_IRQn              = 480u,             /**< Decimation Filter 8 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER9_IRQn              = 481u,             /**< Decimation Filter 9 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER10_IRQn             = 482u,             /**< Decimation Filter 10 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DECFILTER11_IRQn             = 483u,             /**< Decimation Filter 11 Input/Output/Err/Intg (Fill/Drain/Error/Intg) */
  DMA1_ERR32_63_IRQn           = 488u,             /**< eDMA1 channel Error flags 32-63 */
  DMA1_32_39_IRQn              = 489u,             /**< eDMA1 channel Interrupts 32-39 */
  DMA1_40_47_IRQn              = 490u,             /**< eDMA1 channel Interrupts 40-47 */
  DMA1_48_55_IRQn              = 491u,             /**< eDMA1 channel Interrupts 48-55 */
  DMA1_56_63_IRQn              = 492u,             /**< eDMA1 channel Interrupts 56-63 */
  ETPU2_CIS24_IRQn             = 493u,             /**< eTPU Engine 2 Channel 24 Interrupt Status */
  ETPU2_CIS25_IRQn             = 494u,             /**< eTPU Engine 2 Channel 25 Interrupt Status */
  ETPU2_CIS26_IRQn             = 495u,             /**< eTPU Engine 2 Channel 26 Interrupt Status */
  ETPU2_CIS27_IRQn             = 496u,             /**< eTPU Engine 2 Channel 27 Interrupt Status */
  ETPU2_CIS28_IRQn             = 497u,             /**< eTPU Engine 2 Channel 28 Interrupt Status */
  ETPU2_CIS29_IRQn             = 498u,             /**< eTPU Engine 2 Channel 29 Interrupt Status */
  ETPU2_CIS30_IRQn             = 499u,             /**< eTPU Engine 2 Channel 30 Interrupt Status */
  ETPU2_CIS31_IRQn             = 500u,             /**< eTPU Engine 2 Channel 31 Interrupt Status */
  SWT1_IRQn                    = 501u,             /**< Software Watchdog 1 Interrupt flag */
  SEMA4_CORE0_IRQn             = 502u,             /**< Core 0 requested semaphore has unlocked */
  SEMA4_CORE1_IRQn             = 503u,             /**< Core 1 requested semaphore has unlocked */
  CSE_IRQ_IRQn                 = 504u,             /**< CSE Interrupt */
  ESCI5_CIR_IRQn               = 505u,             /**< Combined Interrupt Requests of ESCI Module 5 */
  DSPI4_ERR_IRQn               = 506u,             /**< DSPI_4 combined overrun and parity error interrupt requests: Transmit FIFO Underflow/Receive FIFO Overflow SPI Parity Error/DSI Parity Error */
  DSPI4_TXFIFO_EOQF_IRQn       = 507u,             /**< DSPI_4 transmit FIFO End of Queue Flag */
  DSPI4_TXFIFO_TFFF_IRQn       = 508u,             /**< DSPI_4 Transmit FIFO Fill Flag */
  DSPI4_TCF_IRQn               = 509u,             /**< DSPI_4 Transfer Complete/DSI Data Match Flag */
  DSPI4_RXFIFO_RFDF_IRQn       = 510u,             /**< DSPI_4 Receive FIFO Drain Flag */
  STCU_IRQn                    = 511u              /**< MBIST interrupt */
} IRQn_Type;

/*!
 * @}
 */ /* end of group Interrupt_vector_numbers_MPC5777C */


/* ---------------------------------------------------------------*/


/****************************************************************************/
/*                     MODULE : FMPLL                                       */
/****************************************************************************/

    struct FMPLL_tag {
    
        uint32_t FMPLL_reserved0000;  /* 0x0000-0x0003 */
        
        union {                 /* FMPLL Synthesizer Status Register */
            vuint32_t R;
            struct {
                vuint32_t:22;
                vuint32_t LOLF:1;
                vuint32_t LOC:1;
                vuint32_t MODE:1;
                vuint32_t PLLSEL:1;
                vuint32_t PLLREF:1;
                vuint32_t LOCKS:1;
                vuint32_t LOCK:1;
                vuint32_t LOCF:1;
                vuint32_t :2;
            } B;
        } SYNSR;
        
        union {                 /* FMPLL Enhanced Synthesizer Control Register 1 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t CLKCFG:3;
                vuint32_t:8;
                vuint32_t EPREDIV:4;
                vuint32_t :8;
                vuint32_t EMFD:8;
            } B;
        } ESYNCR1;
        
        union {                 /* FMPLL Enhanced Synthesizer Control Register 2 */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t LOCEN:1;
                vuint32_t LOLRE:1;
                vuint32_t LOCRE:1;
                vuint32_t LOLIRQ:1;
                vuint32_t LOCIRQ:1;
                vuint32_t:1;
                vuint32_t ERATE:2;
                vuint32_t CLKCFG_DIS:1;
                vuint32_t:4;
                vuint32_t EDEPTH:3;
                vuint32_t:2;
                vuint32_t ERFD:6;
            } B;
        } ESYNCR2;
        
        uint32_t FMPLL_reserved0010[4];  /* 0x0010-0x001C */
        
		union {                 /* FMPLL Synthesizer FM Control Register */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t FMDAC_EN:1;
                vuint32_t:9;
                vuint32_t FMDAC_CTL:5;
                vuint32_t :16;
            } B;
        } SYNFMCR;
        
        uint32_t FMPLL_reserved0024[4090];  /* 0x0024-0x3FFF */
        
    
    };

/****************************************************************************/
/*                     MODULE : External Bus Interface (EBI)                */
/****************************************************************************/

    struct CAL_CS_tag {
        union {                 /* Calibration Base Register Bank */
            vuint32_t R;
            struct {
                vuint32_t BA:17;
                vuint32_t:2;
                vuint32_t LWRN:1;
                vuint32_t PS:1;
                vuint32_t EOE:2;
                vuint32_t SBL:1;
                vuint32_t AD_MUX:1;
                vuint32_t BL:1;
                vuint32_t WEBS:1;
                vuint32_t TBDIP:1;
                vuint32_t GCSN:1;
                vuint32_t SETA:1;
                vuint32_t BI:1;
                vuint32_t V:1;
            } B;
        } BR;
        
        union {                 /* Calibration Option Register Bank */
            vuint32_t R;
            struct {
                vuint32_t AM:17;
                vuint32_t:7;
                vuint32_t SCY:4;
                vuint32_t:1;
                vuint32_t BSCY:2;
                vuint32_t:1;
            } B;
        } OR;
    };

    struct EBI_tag {
    
        union {                 /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t ACGE:1;
                vuint32_t:8;
                vuint32_t MDIS:1;
                vuint32_t:3;
                vuint32_t D16_31:1;
                vuint32_t AD_MUX:1;
                vuint32_t DBM:1;
            } B;
        } MCR;
        
        uint32_t EBI_reserved0004;  /* 0x0004-0x0007 */
        
        union {                 /* Transfer Error Status Register */
            vuint32_t R;
            struct {
                vuint32_t:30;
                vuint32_t TEAF:1;
                vuint32_t BMTF:1;
            } B;
        } TESR;
        
        union {                 /* Bus Monitor Control Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t BMT:8;
                vuint32_t BME:1;
                  vuint32_t:7;
            } B;
        } BMCR;
        
        /* Base/Option registers */
        uint32_t EBI_reserved0010[8];  /* 0x0010-0x002F */
        
        uint32_t EBI_reserved0030[4];  /* 0x0030-0x003F */
        
        /* Calibration registers */
        struct CAL_CS_tag CS[4];
        
        uint32_t EBI_reserved0060[4000];  /* 0x0060-0x3FFF */
    
    };

/****************************************************************************/
/*                     MODULE : FLASH                                       */
/****************************************************************************/

    struct FLASH_tag {
    
        union {                 /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t:5;
                vuint32_t SIZE:3;
                vuint32_t:1;
                vuint32_t LAS:3;
                vuint32_t:3;
                vuint32_t MAS:1;
                vuint32_t EER:1;
                vuint32_t RWE:1;
                vuint32_t SBC:1;
                vuint32_t:1;
                vuint32_t PEAS:1;
                vuint32_t DONE:1;
                vuint32_t PEG:1;
                vuint32_t:4;
                vuint32_t PGM:1;
                vuint32_t PSUS:1;
                vuint32_t ERS:1;
                vuint32_t ESUS:1;
                vuint32_t EHV:1;
            } B;
        } MCR;
        
        union {                 /* Low/Mid Address Space Block Locking Register */
            vuint32_t R;
            struct {
                vuint32_t LME:1;
                vuint32_t:10;
                vuint32_t SLOCK:1;
                vuint32_t:2;
                vuint32_t MLOCK:2;
                vuint32_t:6;
                vuint32_t LLOCK:10;
            } B;
        } LMLR; /* Legacy naming - refer to LML in Reference Manual */
        
        union {                 /* High Address Space Block Locking Register */
            vuint32_t R;
            struct {
                vuint32_t HBE:1;
                vuint32_t:21;
                vuint32_t HBLOCK:10; /* Legacy naming - refer to HLOCK in Reference Manual */
            } B;
        } HLR; /* Legacy naming - refer to HBL in Reference Manual */
        
        union {                 /* Secondary Low/Mid Block Locking Register */
            vuint32_t R;
            struct {
                vuint32_t SLE:1;
                vuint32_t:10;
                vuint32_t SSLOCK:1;
                vuint32_t:2;
                vuint32_t SMLOCK:2;
                vuint32_t:6;
                vuint32_t SLLOCK:10;
            } B;
        } SLMLR; /* Legacy naming - refer to SLL in Reference Manual */
        
        union {                 /* Low/Mid Address Space Block Select Register */
            vuint32_t R;
            struct {
                vuint32_t:14;
                vuint32_t MSEL:2;
                vuint32_t:6;
                vuint32_t LSEL:10;
            } B;
        } LMSR; /* Legacy naming - refer to LMS in Reference Manual */
        
        union {                 /* High Address Space Block Select Register */
            vuint32_t R;
            struct {
                vuint32_t:22;
                vuint32_t HBSEL:10; /* Legacy naming - refer to HSEL in Reference Manual */
            } B;
        } HSR; /* Legacy naming - refer to HBS in Reference Manual */
        
        union {                 /* Address Register */
            vuint32_t R;
            struct {
                vuint32_t SAD:1;
                vuint32_t:13;
                vuint32_t ADDR:15;
                vuint32_t:3;
            } B;
        } AR; /* Legacy naming - refer to ADR in Reference Manual */
        
        union {                 /* Platform Flash Configuration Register 1 */
            vuint32_t R;
            struct {
                vuint32_t:7;
#ifdef COMP_TO_MPC5634M_V1_6_ON
				vuint32_t GCE:1;
#else
                vuint32_t M8PFE:1;     /* Core 0 Nexus */
#endif
                vuint32_t:1;           /* EBI Testing - Reserved */
                vuint32_t:1;           /* Reserved */
                vuint32_t:1;           /* Reserved */
                vuint32_t:1;           /* Reserved */
                vuint32_t:1;           /* Reserved */
                vuint32_t:1;           /* Reserved */
                vuint32_t:1;           /* Reserved */
                vuint32_t M0PFE:1;     /* Core 0 */
                vuint32_t APC:3;
                vuint32_t WWSC:2;
                vuint32_t RWSC:3;
                vuint32_t:1;
                vuint32_t DPFEN:1;
                vuint32_t ARB:1;
                vuint32_t IPFEN:1;
                vuint32_t PRI:1;
                vuint32_t PFLIM:2;
                vuint32_t BFEN:1;
            } B;
        } BIUCR; /* Legacy naming - PFCR1 */
        
        union {                 /*Platform Flash Access Protection Register */
            vuint32_t R;
            struct {
                vuint32_t:12;
                vuint32_t M9AP:2;     /* Core 1 Nexus */
                vuint32_t M8AP:2;     /* Core 0 Nexus */
                vuint32_t:2;          /* EBI Testing - Reserved */
                vuint32_t M6AP:2;     /* FlexRay  */
                vuint32_t M5AP:2;     /* eDMA_B   */
                vuint32_t M4AP:2;     /* eDMA_A   */
                vuint32_t:2;          /* Reserved */
                vuint32_t:2;          /* Reserved */
                vuint32_t M1AP:2;     /* Core 1 */
                vuint32_t M0AP:2;     /* Core 0 */
            } B;
        } BIUAPR; /* Legacy naming - refer to PFAPR in Reference Manual */
        
        union {                 /* Platform Flash Configuration Register 2 */
            vuint32_t R;
            struct {
                vuint32_t LBCFG_P0:2;
                vuint32_t LBCFG_P1:2;
                vuint32_t:28;
            } B;
        } BIUCR2;
        
        union {                 /* Platform Flash Configuration Register 3 */
            vuint32_t R;
            struct {
                vuint32_t:6;
                vuint32_t M9PFE:1;
                vuint32_t:2;
                vuint32_t M6PFE:1;
                vuint32_t M5PFE:1;
                vuint32_t M4PFE:1;
                vuint32_t:2;
                vuint32_t M1PFE:1;
                vuint32_t:10;
                vuint32_t DPFEN:1;
                vuint32_t:1;
                vuint32_t IPFEN:1;
                vuint32_t:1;
                vuint32_t PFLIM:2;
                vuint32_t BFEN:1;
            } B;
        } BIUCR3;

        uint32_t FLASH_reserved002C[4];  /* 0x002C-0x003B */

        union {                 /* User Test Register 0 */
            vuint32_t R;
            struct {
                vuint32_t UTE:1;
                vuint32_t SCBE:1;
                vuint32_t:6;
                vuint32_t DSI:8;
                vuint32_t:8;
                vuint32_t EA:1;
                vuint32_t:1;
                vuint32_t MRE:1;
                vuint32_t MRV:1;
                vuint32_t EIE:1;
                vuint32_t AIS:1;
                vuint32_t AIE:1;
                vuint32_t AID:1;
            } B;
        } UT0;

        union {                 /* User Test Register 1 */
            vuint32_t R;
            struct {
                vuint32_t DAI:32;
            } B;
        } UT1;

        union {                 /* User Test Register 2 */
            vuint32_t R;
            struct {
                vuint32_t DAI:32;
            } B;
        } UT2;

        uint32_t FLASH_reserved0048[4078];  /* 0x0048-0x3FFF */
    };

/****************************************************************************/
/*                     MODULE : SIU                                         */
/****************************************************************************/

/* ----------------------------------------------------------------------------
   -- SIU Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIU_Peripheral_Access_Layer SIU Peripheral Access Layer
 * @{
 */


/** SIU - Size of Registers Arrays */
#define SIU_PCR_COUNT                            512u
#define SIU_GPDO_COUNT                           512u
#define SIU_GPDIL_COUNT                          256u
#define SIU_TBG_CR_A_COUNT                       6u
#define SIU_TBG_CR_B_COUNT                       6u
#define SIU_PGPDO_COUNT                          16u
#define SIU_PGPDI_COUNT                          16u
#define SIU_MPGPDO_COUNT                         32u
#define SIU_DSPIx_COUNT                          4u
#define SIU_GPDI_COUNT                           512u

/** SIU - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[4];
  __I  uint32_t MIDR;                              /**< MCU Identification Register, offset: 0x4 */
       uint8_t RESERVED_1[4];
  __IO uint32_t RSR;                               /**< Reset Status Register, offset: 0xC */
  __IO uint32_t SRCR;                              /**< System Reset Control Register, offset: 0x10 */
  __IO uint32_t EISR;                              /**< External IRQ Status Register, offset: 0x14 */
  __IO uint32_t DIRER;                             /**< DMA/Interrupt Request Enable Register, offset: 0x18 */
  __IO uint32_t DIRSR;                             /**< DMA/Interrupt Request Select Register, offset: 0x1C */
  __IO uint32_t OSR;                               /**< Overrun Status Register, offset: 0x20 */
  __IO uint32_t ORER;                              /**< Overrun Request Enable Register, offset: 0x24 */
  __IO uint32_t IREER;                             /**< IRQ Rising-Edge Event Enable Register, offset: 0x28 */
  __IO uint32_t IFEER;                             /**< IRQ Falling-Edge Event Enable Register, offset: 0x2C */
  __IO uint32_t IDFR;                              /**< IRQ Digital Filter Register, offset: 0x30 */
  __I  uint32_t IFIR;                              /**< IRQ Filtered Input Register, offset: 0x34 */
       uint8_t RESERVED_2[8];
  __IO uint16_t PCR[SIU_PCR_COUNT];                /**< Pad Configuration Register, array offset: 0x40, array step: 0x2 */
       uint8_t RESERVED_3[448];
  __IO uint8_t GPDO[SIU_GPDO_COUNT];               /**< GPIO Pin Data Output Register, array offset: 0x600, array step: 0x1 */
  __I  uint8_t GPDIL[SIU_GPDIL_COUNT];             /**< GPIO Pin Data Input Register (legacy), array offset: 0x800, array step: 0x1 */
       uint8_t RESERVED_4[4];
  __IO uint32_t EIISR;                             /**< External IRQ Input Select Register, offset: 0x904 */
  __IO uint32_t DISR;                              /**< DSPI Input Select Register, offset: 0x908 */
       uint8_t RESERVED_5[4];
  __IO uint32_t ISEL4;                             /**< eQADC Command FIFO Trigger Source Registers, offset: 0x910 */
  __IO uint32_t ISEL5;                             /**< eQADC Command FIFO Trigger Source Registers, offset: 0x914 */
  __IO uint32_t ISEL6;                             /**< eQADC Command FIFO Trigger Source Registers, offset: 0x918 */
  __IO uint32_t ISEL7;                             /**< eQADC Command FIFO Trigger Source Registers, offset: 0x91C */
  __IO uint32_t ISEL8;                             /**< eTPU_A Input Select Register, offset: 0x920 */
  __IO uint32_t ISEL9;                             /**< eQADC Advance Trigger Source Register, offset: 0x924 */
  __IO uint32_t DECFIL1;                           /**< Decimation Filter Register 1, offset: 0x928 */
  __IO uint32_t DECFIL2;                           /**< Decimation Filter Register 2, offset: 0x92C */
  __IO uint32_t DECFIL3;                           /**< Decimation Filter Register 3, offset: 0x930 */
  __IO uint32_t DECFIL4;                           /**< Decimation Filter Register 4, offset: 0x934 */
  __IO uint32_t DECFIL5;                           /**< Decimation Filter Register 5, offset: 0x938 */
       uint32_t RESERVED_6[20];
  __IO uint32_t CCR;                               /**< Chip Configuration Register, offset: 0x980 */
  __IO uint32_t ECCR;                              /**< External Clock Control Register, offset: 0x984 */
       uint8_t RESERVED_7[12];
  __IO uint32_t SYSDIV;                            /**< System Clock Register, offset: 0x9A0 */
  __IO uint32_t HLT1;                              /**< Halt Register 1, offset: 0x9A4 */
  __I  uint32_t HLTACK1;                           /**< Halt Acknowledge Register 1, offset: 0x9A8 */
  __IO uint32_t RSTVEC0;                           /**< Core0 Reset Vector Register, offset: 0x9AC */
  __IO uint32_t RSTVEC1;                           /**< Core1 Reset Vector Register, offset: 0x9B0 */
  __IO uint32_t C0PID;                             /**< Core0 PID mapping control register, offset: 0x9B4 */
  __IO uint32_t C1PID;                             /**< Core1 PID mapping control register, offset: 0x9B8 */
       uint32_t RESERVED_8[145];
  __IO uint32_t PGPDO[SIU_PGPDO_COUNT];            /**< Parallel GPIO Pin Data Output Registers, array offset: 0xC00, array step: 0x4 */
  __I  uint32_t PGPDI[SIU_PGPDI_COUNT];            /**< Parallel GPIO Pin Data Input Registers, array offset: 0xC40, array step: 0x4 */
  __O  uint32_t MPGPDO[SIU_MPGPDO_COUNT];          /**< Masked Parallel GPIO Pin Data Output Registers, array offset: 0xC80, array step: 0x4 */
  struct {                                         /* offset: 0xD00, array step: 0x8 */
    __IO uint32_t DSPIH;                             /**< Mask-Output High Register, array offset: 0xD00, array step: 0x8 */
    __IO uint32_t DSPIL;                             /**< Mask-Output Low Register, array offset: 0xD04, array step: 0x8 */
  } DSPIx[SIU_DSPIx_COUNT];
       uint8_t RESERVED_9[32];
  __IO uint32_t ETPUBA;                            /**< Serialized Output Signal Selection Register for DSPI_A, offset: 0xD40 */
  __IO uint32_t EMIOSA;                            /**< Serialized Output Signal Selection Register for DSPI_A, offset: 0xD44 */
  __IO uint32_t DSPIAHLA;                          /**< Serialized Output Signal Selection Register for DSPI_A, offset: 0xD48 */
       uint8_t RESERVED_10[4];
  __IO uint32_t ETPUAB;                            /**< Serialized Output Signal Selection Register for DSPI_B, offset: 0xD50 */
  __IO uint32_t EMIOSB;                            /**< Serialized Output Signal Selection Register for DSPI_B, offset: 0xD54 */
  __IO uint32_t DSPIBHLB;                          /**< Serialized Output Signal Selection Register for DSPI_B, offset: 0xD58 */
       uint8_t RESERVED_11[4];
  __IO uint32_t ETPUAC;                            /**< Serialized Output Signal Selection Register for DSPI_C, offset: 0xD60 */
  __IO uint32_t EMIOSC;                            /**< Serialized Output Signal Selection Register for DSPI_C, offset: 0xD64 */
  __IO uint32_t DSPICHLC;                          /**< Serialized Output Signal Selection Register for DSPI_C, offset: 0xD68 */
  __IO uint32_t ETPUBC;                            /**< Serialized Output Signal Selection Register for DSPI_C, offset: 0xD6C */
  __IO uint32_t ETPUBD;                            /**< Serialized Output Signal Selection Register for DSPI_D, offset: 0xD70 */
  __IO uint32_t EMIOSD;                            /**< Serialized Output Signal Selection Register for DSPI_D, offset: 0xD74 */
  __IO uint32_t DSPIDHLD;                          /**< Serialized Output Signal Selection Register for DSPI_D, offset: 0xD78 */
       uint8_t RESERVED_12[132];
  __I  uint8_t GPDI[SIU_GPDI_COUNT];               /**< GPIO Pin Data Input Register, array offset: 0xE00, array step: 0x1 */
       uint32_t RESERVED_13[512];
} SIU_Type, *SIU_MemMapPtr;

 /** Number of instances of the SIU module. */
#define SIU_INSTANCE_COUNT                       (1u)


/* SIU - Peripheral instance base addresses */
/** Peripheral SIU base address */
#define SIU_BASE                                 (0xC3F90000u)
/** Peripheral SIU base pointer */
#define SIU                                      ((SIU_Type *)SIU_BASE)
/** Array initializer of SIU peripheral base addresses */
#define SIU_BASE_ADDRS                           { SIU_BASE }
/** Array initializer of SIU peripheral base pointers */
#define SIU_BASE_PTRS                            { SIU }

/* ----------------------------------------------------------------------------
   -- SIU Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIU_Register_Masks SIU Register Masks
 * @{
 */

/* MIDR Bit Fields */
#define SIU_MIDR_MASKNUM_MINOR_MASK              0xFu
#define SIU_MIDR_MASKNUM_MINOR_SHIFT             0u
#define SIU_MIDR_MASKNUM_MINOR_WIDTH             4u
#define SIU_MIDR_MASKNUM_MINOR(x)                (((uint32_t)(((uint32_t)(x))<<SIU_MIDR_MASKNUM_MINOR_SHIFT))&SIU_MIDR_MASKNUM_MINOR_MASK)
#define SIU_MIDR_MASKNUM_MAJOR_MASK              0xF0u
#define SIU_MIDR_MASKNUM_MAJOR_SHIFT             4u
#define SIU_MIDR_MASKNUM_MAJOR_WIDTH             4u
#define SIU_MIDR_MASKNUM_MAJOR(x)                (((uint32_t)(((uint32_t)(x))<<SIU_MIDR_MASKNUM_MAJOR_SHIFT))&SIU_MIDR_MASKNUM_MAJOR_MASK)
#define SIU_MIDR_PKG_MASK                        0xF000u
#define SIU_MIDR_PKG_SHIFT                       12u
#define SIU_MIDR_PKG_WIDTH                       4u
#define SIU_MIDR_PKG(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_MIDR_PKG_SHIFT))&SIU_MIDR_PKG_MASK)
#define SIU_MIDR_PARTNUM_MASK                    0xFFFF0000u
#define SIU_MIDR_PARTNUM_SHIFT                   16u
#define SIU_MIDR_PARTNUM_WIDTH                   16u
#define SIU_MIDR_PARTNUM(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MIDR_PARTNUM_SHIFT))&SIU_MIDR_PARTNUM_MASK)
/* RSR Bit Fields */
#define SIU_RSR_RGF_MASK                         0x1u
#define SIU_RSR_RGF_SHIFT                        0u
#define SIU_RSR_RGF_WIDTH                        1u
#define SIU_RSR_RGF(x)                           (((uint32_t)(((uint32_t)(x))<<SIU_RSR_RGF_SHIFT))&SIU_RSR_RGF_MASK)
#define SIU_RSR_BOOTCFG_MASK                     0x6u
#define SIU_RSR_BOOTCFG_SHIFT                    1u
#define SIU_RSR_BOOTCFG_WIDTH                    2u
#define SIU_RSR_BOOTCFG(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_RSR_BOOTCFG_SHIFT))&SIU_RSR_BOOTCFG_MASK)
#define SIU_RSR_ABR_MASK                         0x8u
#define SIU_RSR_ABR_SHIFT                        3u
#define SIU_RSR_ABR_WIDTH                        1u
#define SIU_RSR_ABR(x)                           (((uint32_t)(((uint32_t)(x))<<SIU_RSR_ABR_SHIFT))&SIU_RSR_ABR_MASK)
#define SIU_RSR_XOSCHIGH_MASK                    0x10u
#define SIU_RSR_XOSCHIGH_SHIFT                   4u
#define SIU_RSR_XOSCHIGH_WIDTH                   1u
#define SIU_RSR_XOSCHIGH(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_RSR_XOSCHIGH_SHIFT))&SIU_RSR_XOSCHIGH_MASK)
#define SIU_RSR_XOSC_MASK                        0x80u
#define SIU_RSR_XOSC_SHIFT                       7u
#define SIU_RSR_XOSC_WIDTH                       1u
#define SIU_RSR_XOSC(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_RSR_XOSC_SHIFT))&SIU_RSR_XOSC_MASK)
#define SIU_RSR_WKPCFG_MASK                      0x8000u
#define SIU_RSR_WKPCFG_SHIFT                     15u
#define SIU_RSR_WKPCFG_WIDTH                     1u
#define SIU_RSR_WKPCFG(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_RSR_WKPCFG_SHIFT))&SIU_RSR_WKPCFG_MASK)
#define SIU_RSR_SERF_MASK                        0x10000u
#define SIU_RSR_SERF_SHIFT                       16u
#define SIU_RSR_SERF_WIDTH                       1u
#define SIU_RSR_SERF(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_RSR_SERF_SHIFT))&SIU_RSR_SERF_MASK)
#define SIU_RSR_SSRS_MASK                        0x20000u
#define SIU_RSR_SSRS_SHIFT                       17u
#define SIU_RSR_SSRS_WIDTH                       1u
#define SIU_RSR_SSRS(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_RSR_SSRS_SHIFT))&SIU_RSR_SSRS_MASK)
#define SIU_RSR_STCURS_MASK                      0x40000u
#define SIU_RSR_STCURS_SHIFT                     18u
#define SIU_RSR_STCURS_WIDTH                     1u
#define SIU_RSR_STCURS(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_RSR_STCURS_SHIFT))&SIU_RSR_STCURS_MASK)
#define SIU_RSR_FCCURS_MASK                      0x80000u
#define SIU_RSR_FCCURS_SHIFT                     19u
#define SIU_RSR_FCCURS_WIDTH                     1u
#define SIU_RSR_FCCURS(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_RSR_FCCURS_SHIFT))&SIU_RSR_FCCURS_MASK)
#define SIU_RSR_FOSURS_MASK                      0x100000u
#define SIU_RSR_FOSURS_SHIFT                     20u
#define SIU_RSR_FOSURS_WIDTH                     1u
#define SIU_RSR_FOSURS(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_RSR_FOSURS_SHIFT))&SIU_RSR_FOSURS_MASK)
#define SIU_RSR_CPURS_MASK                       0x400000u
#define SIU_RSR_CPURS_SHIFT                      22u
#define SIU_RSR_CPURS_WIDTH                      1u
#define SIU_RSR_CPURS(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_RSR_CPURS_SHIFT))&SIU_RSR_CPURS_MASK)
#define SIU_RSR_ERS_MASK                         0x40000000u
#define SIU_RSR_ERS_SHIFT                        30u
#define SIU_RSR_ERS_WIDTH                        1u
#define SIU_RSR_ERS(x)                           (((uint32_t)(((uint32_t)(x))<<SIU_RSR_ERS_SHIFT))&SIU_RSR_ERS_MASK)
#define SIU_RSR_PORS_MASK                        0x80000000u
#define SIU_RSR_PORS_SHIFT                       31u
#define SIU_RSR_PORS_WIDTH                       1u
#define SIU_RSR_PORS(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_RSR_PORS_SHIFT))&SIU_RSR_PORS_MASK)
/* SRCR Bit Fields */
#define SIU_SRCR_SER_MASK                        0x40000000u
#define SIU_SRCR_SER_SHIFT                       30u
#define SIU_SRCR_SER_WIDTH                       1u
#define SIU_SRCR_SER(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_SRCR_SER_SHIFT))&SIU_SRCR_SER_MASK)
#define SIU_SRCR_SSR_MASK                        0x80000000u
#define SIU_SRCR_SSR_SHIFT                       31u
#define SIU_SRCR_SSR_WIDTH                       1u
#define SIU_SRCR_SSR(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_SRCR_SSR_SHIFT))&SIU_SRCR_SSR_MASK)
/* EISR Bit Fields */
#define SIU_EISR_EIF0_MASK                       0x1u
#define SIU_EISR_EIF0_SHIFT                      0u
#define SIU_EISR_EIF0_WIDTH                      1u
#define SIU_EISR_EIF0(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF0_SHIFT))&SIU_EISR_EIF0_MASK)
#define SIU_EISR_EIF1_MASK                       0x2u
#define SIU_EISR_EIF1_SHIFT                      1u
#define SIU_EISR_EIF1_WIDTH                      1u
#define SIU_EISR_EIF1(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF1_SHIFT))&SIU_EISR_EIF1_MASK)
#define SIU_EISR_EIF2_MASK                       0x4u
#define SIU_EISR_EIF2_SHIFT                      2u
#define SIU_EISR_EIF2_WIDTH                      1u
#define SIU_EISR_EIF2(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF2_SHIFT))&SIU_EISR_EIF2_MASK)
#define SIU_EISR_EIF3_MASK                       0x8u
#define SIU_EISR_EIF3_SHIFT                      3u
#define SIU_EISR_EIF3_WIDTH                      1u
#define SIU_EISR_EIF3(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF3_SHIFT))&SIU_EISR_EIF3_MASK)
#define SIU_EISR_EIF4_MASK                       0x10u
#define SIU_EISR_EIF4_SHIFT                      4u
#define SIU_EISR_EIF4_WIDTH                      1u
#define SIU_EISR_EIF4(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF4_SHIFT))&SIU_EISR_EIF4_MASK)
#define SIU_EISR_EIF5_MASK                       0x20u
#define SIU_EISR_EIF5_SHIFT                      5u
#define SIU_EISR_EIF5_WIDTH                      1u
#define SIU_EISR_EIF5(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF5_SHIFT))&SIU_EISR_EIF5_MASK)
#define SIU_EISR_EIF6_MASK                       0x40u
#define SIU_EISR_EIF6_SHIFT                      6u
#define SIU_EISR_EIF6_WIDTH                      1u
#define SIU_EISR_EIF6(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF6_SHIFT))&SIU_EISR_EIF6_MASK)
#define SIU_EISR_EIF7_MASK                       0x80u
#define SIU_EISR_EIF7_SHIFT                      7u
#define SIU_EISR_EIF7_WIDTH                      1u
#define SIU_EISR_EIF7(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF7_SHIFT))&SIU_EISR_EIF7_MASK)
#define SIU_EISR_EIF8_MASK                       0x100u
#define SIU_EISR_EIF8_SHIFT                      8u
#define SIU_EISR_EIF8_WIDTH                      1u
#define SIU_EISR_EIF8(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF8_SHIFT))&SIU_EISR_EIF8_MASK)
#define SIU_EISR_EIF9_MASK                       0x200u
#define SIU_EISR_EIF9_SHIFT                      9u
#define SIU_EISR_EIF9_WIDTH                      1u
#define SIU_EISR_EIF9(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF9_SHIFT))&SIU_EISR_EIF9_MASK)
#define SIU_EISR_EIF10_MASK                      0x400u
#define SIU_EISR_EIF10_SHIFT                     10u
#define SIU_EISR_EIF10_WIDTH                     1u
#define SIU_EISR_EIF10(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF10_SHIFT))&SIU_EISR_EIF10_MASK)
#define SIU_EISR_EIF11_MASK                      0x800u
#define SIU_EISR_EIF11_SHIFT                     11u
#define SIU_EISR_EIF11_WIDTH                     1u
#define SIU_EISR_EIF11(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF11_SHIFT))&SIU_EISR_EIF11_MASK)
#define SIU_EISR_EIF12_MASK                      0x1000u
#define SIU_EISR_EIF12_SHIFT                     12u
#define SIU_EISR_EIF12_WIDTH                     1u
#define SIU_EISR_EIF12(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF12_SHIFT))&SIU_EISR_EIF12_MASK)
#define SIU_EISR_EIF13_MASK                      0x2000u
#define SIU_EISR_EIF13_SHIFT                     13u
#define SIU_EISR_EIF13_WIDTH                     1u
#define SIU_EISR_EIF13(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF13_SHIFT))&SIU_EISR_EIF13_MASK)
#define SIU_EISR_EIF14_MASK                      0x4000u
#define SIU_EISR_EIF14_SHIFT                     14u
#define SIU_EISR_EIF14_WIDTH                     1u
#define SIU_EISR_EIF14(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF14_SHIFT))&SIU_EISR_EIF14_MASK)
#define SIU_EISR_EIF15_MASK                      0x8000u
#define SIU_EISR_EIF15_SHIFT                     15u
#define SIU_EISR_EIF15_WIDTH                     1u
#define SIU_EISR_EIF15(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_EISR_EIF15_SHIFT))&SIU_EISR_EIF15_MASK)
#define SIU_EISR_NMI1_MASK                       0x40000000u
#define SIU_EISR_NMI1_SHIFT                      30u
#define SIU_EISR_NMI1_WIDTH                      1u
#define SIU_EISR_NMI1(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_NMI1_SHIFT))&SIU_EISR_NMI1_MASK)
#define SIU_EISR_NMI0_MASK                       0x80000000u
#define SIU_EISR_NMI0_SHIFT                      31u
#define SIU_EISR_NMI0_WIDTH                      1u
#define SIU_EISR_NMI0(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_EISR_NMI0_SHIFT))&SIU_EISR_NMI0_MASK)
/* DIRER Bit Fields */
#define SIU_DIRER_EIRE0_MASK                     0x1u
#define SIU_DIRER_EIRE0_SHIFT                    0u
#define SIU_DIRER_EIRE0_WIDTH                    1u
#define SIU_DIRER_EIRE0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE0_SHIFT))&SIU_DIRER_EIRE0_MASK)
#define SIU_DIRER_EIRE1_MASK                     0x2u
#define SIU_DIRER_EIRE1_SHIFT                    1u
#define SIU_DIRER_EIRE1_WIDTH                    1u
#define SIU_DIRER_EIRE1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE1_SHIFT))&SIU_DIRER_EIRE1_MASK)
#define SIU_DIRER_EIRE2_MASK                     0x4u
#define SIU_DIRER_EIRE2_SHIFT                    2u
#define SIU_DIRER_EIRE2_WIDTH                    1u
#define SIU_DIRER_EIRE2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE2_SHIFT))&SIU_DIRER_EIRE2_MASK)
#define SIU_DIRER_EIRE3_MASK                     0x8u
#define SIU_DIRER_EIRE3_SHIFT                    3u
#define SIU_DIRER_EIRE3_WIDTH                    1u
#define SIU_DIRER_EIRE3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE3_SHIFT))&SIU_DIRER_EIRE3_MASK)
#define SIU_DIRER_EIRE4_MASK                     0x10u
#define SIU_DIRER_EIRE4_SHIFT                    4u
#define SIU_DIRER_EIRE4_WIDTH                    1u
#define SIU_DIRER_EIRE4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE4_SHIFT))&SIU_DIRER_EIRE4_MASK)
#define SIU_DIRER_EIRE5_MASK                     0x20u
#define SIU_DIRER_EIRE5_SHIFT                    5u
#define SIU_DIRER_EIRE5_WIDTH                    1u
#define SIU_DIRER_EIRE5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE5_SHIFT))&SIU_DIRER_EIRE5_MASK)
#define SIU_DIRER_EIRE6_MASK                     0x40u
#define SIU_DIRER_EIRE6_SHIFT                    6u
#define SIU_DIRER_EIRE6_WIDTH                    1u
#define SIU_DIRER_EIRE6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE6_SHIFT))&SIU_DIRER_EIRE6_MASK)
#define SIU_DIRER_EIRE7_MASK                     0x80u
#define SIU_DIRER_EIRE7_SHIFT                    7u
#define SIU_DIRER_EIRE7_WIDTH                    1u
#define SIU_DIRER_EIRE7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE7_SHIFT))&SIU_DIRER_EIRE7_MASK)
#define SIU_DIRER_EIRE8_MASK                     0x100u
#define SIU_DIRER_EIRE8_SHIFT                    8u
#define SIU_DIRER_EIRE8_WIDTH                    1u
#define SIU_DIRER_EIRE8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE8_SHIFT))&SIU_DIRER_EIRE8_MASK)
#define SIU_DIRER_EIRE9_MASK                     0x200u
#define SIU_DIRER_EIRE9_SHIFT                    9u
#define SIU_DIRER_EIRE9_WIDTH                    1u
#define SIU_DIRER_EIRE9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE9_SHIFT))&SIU_DIRER_EIRE9_MASK)
#define SIU_DIRER_EIRE10_MASK                    0x400u
#define SIU_DIRER_EIRE10_SHIFT                   10u
#define SIU_DIRER_EIRE10_WIDTH                   1u
#define SIU_DIRER_EIRE10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE10_SHIFT))&SIU_DIRER_EIRE10_MASK)
#define SIU_DIRER_EIRE11_MASK                    0x800u
#define SIU_DIRER_EIRE11_SHIFT                   11u
#define SIU_DIRER_EIRE11_WIDTH                   1u
#define SIU_DIRER_EIRE11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE11_SHIFT))&SIU_DIRER_EIRE11_MASK)
#define SIU_DIRER_EIRE12_MASK                    0x1000u
#define SIU_DIRER_EIRE12_SHIFT                   12u
#define SIU_DIRER_EIRE12_WIDTH                   1u
#define SIU_DIRER_EIRE12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE12_SHIFT))&SIU_DIRER_EIRE12_MASK)
#define SIU_DIRER_EIRE13_MASK                    0x2000u
#define SIU_DIRER_EIRE13_SHIFT                   13u
#define SIU_DIRER_EIRE13_WIDTH                   1u
#define SIU_DIRER_EIRE13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE13_SHIFT))&SIU_DIRER_EIRE13_MASK)
#define SIU_DIRER_EIRE14_MASK                    0x4000u
#define SIU_DIRER_EIRE14_SHIFT                   14u
#define SIU_DIRER_EIRE14_WIDTH                   1u
#define SIU_DIRER_EIRE14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE14_SHIFT))&SIU_DIRER_EIRE14_MASK)
#define SIU_DIRER_EIRE15_MASK                    0x8000u
#define SIU_DIRER_EIRE15_SHIFT                   15u
#define SIU_DIRER_EIRE15_WIDTH                   1u
#define SIU_DIRER_EIRE15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_EIRE15_SHIFT))&SIU_DIRER_EIRE15_MASK)
#define SIU_DIRER_NMISEL1_MASK                   0x400000u
#define SIU_DIRER_NMISEL1_SHIFT                  22u
#define SIU_DIRER_NMISEL1_WIDTH                  1u
#define SIU_DIRER_NMISEL1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_NMISEL1_SHIFT))&SIU_DIRER_NMISEL1_MASK)
#define SIU_DIRER_NMISEL0_MASK                   0x800000u
#define SIU_DIRER_NMISEL0_SHIFT                  23u
#define SIU_DIRER_NMISEL0_WIDTH                  1u
#define SIU_DIRER_NMISEL0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_NMISEL0_SHIFT))&SIU_DIRER_NMISEL0_MASK)
#define SIU_DIRER_NMISEL7_MASK                   0x40000000u
#define SIU_DIRER_NMISEL7_SHIFT                  30u
#define SIU_DIRER_NMISEL7_WIDTH                  1u
#define SIU_DIRER_NMISEL7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_NMISEL7_SHIFT))&SIU_DIRER_NMISEL7_MASK)
#define SIU_DIRER_NMISEL8_MASK                   0x80000000u
#define SIU_DIRER_NMISEL8_SHIFT                  31u
#define SIU_DIRER_NMISEL8_WIDTH                  1u
#define SIU_DIRER_NMISEL8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DIRER_NMISEL8_SHIFT))&SIU_DIRER_NMISEL8_MASK)
/* DIRSR Bit Fields */
#define SIU_DIRSR_DIRS0_MASK                     0x1u
#define SIU_DIRSR_DIRS0_SHIFT                    0u
#define SIU_DIRSR_DIRS0_WIDTH                    1u
#define SIU_DIRSR_DIRS0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRSR_DIRS0_SHIFT))&SIU_DIRSR_DIRS0_MASK)
#define SIU_DIRSR_DIRS1_MASK                     0x2u
#define SIU_DIRSR_DIRS1_SHIFT                    1u
#define SIU_DIRSR_DIRS1_WIDTH                    1u
#define SIU_DIRSR_DIRS1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRSR_DIRS1_SHIFT))&SIU_DIRSR_DIRS1_MASK)
#define SIU_DIRSR_DIRS2_MASK                     0x4u
#define SIU_DIRSR_DIRS2_SHIFT                    2u
#define SIU_DIRSR_DIRS2_WIDTH                    1u
#define SIU_DIRSR_DIRS2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRSR_DIRS2_SHIFT))&SIU_DIRSR_DIRS2_MASK)
#define SIU_DIRSR_DIRS3_MASK                     0x8u
#define SIU_DIRSR_DIRS3_SHIFT                    3u
#define SIU_DIRSR_DIRS3_WIDTH                    1u
#define SIU_DIRSR_DIRS3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DIRSR_DIRS3_SHIFT))&SIU_DIRSR_DIRS3_MASK)
/* OSR Bit Fields */
#define SIU_OSR_OVF0_MASK                        0x1u
#define SIU_OSR_OVF0_SHIFT                       0u
#define SIU_OSR_OVF0_WIDTH                       1u
#define SIU_OSR_OVF0(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF0_SHIFT))&SIU_OSR_OVF0_MASK)
#define SIU_OSR_OVF1_MASK                        0x2u
#define SIU_OSR_OVF1_SHIFT                       1u
#define SIU_OSR_OVF1_WIDTH                       1u
#define SIU_OSR_OVF1(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF1_SHIFT))&SIU_OSR_OVF1_MASK)
#define SIU_OSR_OVF2_MASK                        0x4u
#define SIU_OSR_OVF2_SHIFT                       2u
#define SIU_OSR_OVF2_WIDTH                       1u
#define SIU_OSR_OVF2(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF2_SHIFT))&SIU_OSR_OVF2_MASK)
#define SIU_OSR_OVF3_MASK                        0x8u
#define SIU_OSR_OVF3_SHIFT                       3u
#define SIU_OSR_OVF3_WIDTH                       1u
#define SIU_OSR_OVF3(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF3_SHIFT))&SIU_OSR_OVF3_MASK)
#define SIU_OSR_OVF4_MASK                        0x10u
#define SIU_OSR_OVF4_SHIFT                       4u
#define SIU_OSR_OVF4_WIDTH                       1u
#define SIU_OSR_OVF4(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF4_SHIFT))&SIU_OSR_OVF4_MASK)
#define SIU_OSR_OVF5_MASK                        0x20u
#define SIU_OSR_OVF5_SHIFT                       5u
#define SIU_OSR_OVF5_WIDTH                       1u
#define SIU_OSR_OVF5(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF5_SHIFT))&SIU_OSR_OVF5_MASK)
#define SIU_OSR_OVF6_MASK                        0x40u
#define SIU_OSR_OVF6_SHIFT                       6u
#define SIU_OSR_OVF6_WIDTH                       1u
#define SIU_OSR_OVF6(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF6_SHIFT))&SIU_OSR_OVF6_MASK)
#define SIU_OSR_OVF7_MASK                        0x80u
#define SIU_OSR_OVF7_SHIFT                       7u
#define SIU_OSR_OVF7_WIDTH                       1u
#define SIU_OSR_OVF7(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF7_SHIFT))&SIU_OSR_OVF7_MASK)
#define SIU_OSR_OVF8_MASK                        0x100u
#define SIU_OSR_OVF8_SHIFT                       8u
#define SIU_OSR_OVF8_WIDTH                       1u
#define SIU_OSR_OVF8(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF8_SHIFT))&SIU_OSR_OVF8_MASK)
#define SIU_OSR_OVF9_MASK                        0x200u
#define SIU_OSR_OVF9_SHIFT                       9u
#define SIU_OSR_OVF9_WIDTH                       1u
#define SIU_OSR_OVF9(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF9_SHIFT))&SIU_OSR_OVF9_MASK)
#define SIU_OSR_OVF10_MASK                       0x400u
#define SIU_OSR_OVF10_SHIFT                      10u
#define SIU_OSR_OVF10_WIDTH                      1u
#define SIU_OSR_OVF10(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF10_SHIFT))&SIU_OSR_OVF10_MASK)
#define SIU_OSR_OVF11_MASK                       0x800u
#define SIU_OSR_OVF11_SHIFT                      11u
#define SIU_OSR_OVF11_WIDTH                      1u
#define SIU_OSR_OVF11(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF11_SHIFT))&SIU_OSR_OVF11_MASK)
#define SIU_OSR_OVF12_MASK                       0x1000u
#define SIU_OSR_OVF12_SHIFT                      12u
#define SIU_OSR_OVF12_WIDTH                      1u
#define SIU_OSR_OVF12(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF12_SHIFT))&SIU_OSR_OVF12_MASK)
#define SIU_OSR_OVF13_MASK                       0x2000u
#define SIU_OSR_OVF13_SHIFT                      13u
#define SIU_OSR_OVF13_WIDTH                      1u
#define SIU_OSR_OVF13(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF13_SHIFT))&SIU_OSR_OVF13_MASK)
#define SIU_OSR_OVF14_MASK                       0x4000u
#define SIU_OSR_OVF14_SHIFT                      14u
#define SIU_OSR_OVF14_WIDTH                      1u
#define SIU_OSR_OVF14(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF14_SHIFT))&SIU_OSR_OVF14_MASK)
#define SIU_OSR_OVF15_MASK                       0x8000u
#define SIU_OSR_OVF15_SHIFT                      15u
#define SIU_OSR_OVF15_WIDTH                      1u
#define SIU_OSR_OVF15(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_OSR_OVF15_SHIFT))&SIU_OSR_OVF15_MASK)
/* ORER Bit Fields */
#define SIU_ORER_ORE0_MASK                       0x1u
#define SIU_ORER_ORE0_SHIFT                      0u
#define SIU_ORER_ORE0_WIDTH                      1u
#define SIU_ORER_ORE0(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE0_SHIFT))&SIU_ORER_ORE0_MASK)
#define SIU_ORER_ORE1_MASK                       0x2u
#define SIU_ORER_ORE1_SHIFT                      1u
#define SIU_ORER_ORE1_WIDTH                      1u
#define SIU_ORER_ORE1(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE1_SHIFT))&SIU_ORER_ORE1_MASK)
#define SIU_ORER_ORE2_MASK                       0x4u
#define SIU_ORER_ORE2_SHIFT                      2u
#define SIU_ORER_ORE2_WIDTH                      1u
#define SIU_ORER_ORE2(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE2_SHIFT))&SIU_ORER_ORE2_MASK)
#define SIU_ORER_ORE3_MASK                       0x8u
#define SIU_ORER_ORE3_SHIFT                      3u
#define SIU_ORER_ORE3_WIDTH                      1u
#define SIU_ORER_ORE3(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE3_SHIFT))&SIU_ORER_ORE3_MASK)
#define SIU_ORER_ORE4_MASK                       0x10u
#define SIU_ORER_ORE4_SHIFT                      4u
#define SIU_ORER_ORE4_WIDTH                      1u
#define SIU_ORER_ORE4(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE4_SHIFT))&SIU_ORER_ORE4_MASK)
#define SIU_ORER_ORE5_MASK                       0x20u
#define SIU_ORER_ORE5_SHIFT                      5u
#define SIU_ORER_ORE5_WIDTH                      1u
#define SIU_ORER_ORE5(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE5_SHIFT))&SIU_ORER_ORE5_MASK)
#define SIU_ORER_ORE6_MASK                       0x40u
#define SIU_ORER_ORE6_SHIFT                      6u
#define SIU_ORER_ORE6_WIDTH                      1u
#define SIU_ORER_ORE6(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE6_SHIFT))&SIU_ORER_ORE6_MASK)
#define SIU_ORER_ORE7_MASK                       0x80u
#define SIU_ORER_ORE7_SHIFT                      7u
#define SIU_ORER_ORE7_WIDTH                      1u
#define SIU_ORER_ORE7(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE7_SHIFT))&SIU_ORER_ORE7_MASK)
#define SIU_ORER_ORE8_MASK                       0x100u
#define SIU_ORER_ORE8_SHIFT                      8u
#define SIU_ORER_ORE8_WIDTH                      1u
#define SIU_ORER_ORE8(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE8_SHIFT))&SIU_ORER_ORE8_MASK)
#define SIU_ORER_ORE9_MASK                       0x200u
#define SIU_ORER_ORE9_SHIFT                      9u
#define SIU_ORER_ORE9_WIDTH                      1u
#define SIU_ORER_ORE9(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE9_SHIFT))&SIU_ORER_ORE9_MASK)
#define SIU_ORER_ORE10_MASK                      0x400u
#define SIU_ORER_ORE10_SHIFT                     10u
#define SIU_ORER_ORE10_WIDTH                     1u
#define SIU_ORER_ORE10(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE10_SHIFT))&SIU_ORER_ORE10_MASK)
#define SIU_ORER_ORE11_MASK                      0x800u
#define SIU_ORER_ORE11_SHIFT                     11u
#define SIU_ORER_ORE11_WIDTH                     1u
#define SIU_ORER_ORE11(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE11_SHIFT))&SIU_ORER_ORE11_MASK)
#define SIU_ORER_ORE12_MASK                      0x1000u
#define SIU_ORER_ORE12_SHIFT                     12u
#define SIU_ORER_ORE12_WIDTH                     1u
#define SIU_ORER_ORE12(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE12_SHIFT))&SIU_ORER_ORE12_MASK)
#define SIU_ORER_ORE13_MASK                      0x2000u
#define SIU_ORER_ORE13_SHIFT                     13u
#define SIU_ORER_ORE13_WIDTH                     1u
#define SIU_ORER_ORE13(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE13_SHIFT))&SIU_ORER_ORE13_MASK)
#define SIU_ORER_ORE14_MASK                      0x4000u
#define SIU_ORER_ORE14_SHIFT                     14u
#define SIU_ORER_ORE14_WIDTH                     1u
#define SIU_ORER_ORE14(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE14_SHIFT))&SIU_ORER_ORE14_MASK)
#define SIU_ORER_ORE15_MASK                      0x8000u
#define SIU_ORER_ORE15_SHIFT                     15u
#define SIU_ORER_ORE15_WIDTH                     1u
#define SIU_ORER_ORE15(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_ORER_ORE15_SHIFT))&SIU_ORER_ORE15_MASK)
/* IREER Bit Fields */
#define SIU_IREER_IREE0_MASK                     0x1u
#define SIU_IREER_IREE0_SHIFT                    0u
#define SIU_IREER_IREE0_WIDTH                    1u
#define SIU_IREER_IREE0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE0_SHIFT))&SIU_IREER_IREE0_MASK)
#define SIU_IREER_IREE1_MASK                     0x2u
#define SIU_IREER_IREE1_SHIFT                    1u
#define SIU_IREER_IREE1_WIDTH                    1u
#define SIU_IREER_IREE1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE1_SHIFT))&SIU_IREER_IREE1_MASK)
#define SIU_IREER_IREE2_MASK                     0x4u
#define SIU_IREER_IREE2_SHIFT                    2u
#define SIU_IREER_IREE2_WIDTH                    1u
#define SIU_IREER_IREE2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE2_SHIFT))&SIU_IREER_IREE2_MASK)
#define SIU_IREER_IREE3_MASK                     0x8u
#define SIU_IREER_IREE3_SHIFT                    3u
#define SIU_IREER_IREE3_WIDTH                    1u
#define SIU_IREER_IREE3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE3_SHIFT))&SIU_IREER_IREE3_MASK)
#define SIU_IREER_IREE4_MASK                     0x10u
#define SIU_IREER_IREE4_SHIFT                    4u
#define SIU_IREER_IREE4_WIDTH                    1u
#define SIU_IREER_IREE4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE4_SHIFT))&SIU_IREER_IREE4_MASK)
#define SIU_IREER_IREE5_MASK                     0x20u
#define SIU_IREER_IREE5_SHIFT                    5u
#define SIU_IREER_IREE5_WIDTH                    1u
#define SIU_IREER_IREE5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE5_SHIFT))&SIU_IREER_IREE5_MASK)
#define SIU_IREER_IREE6_MASK                     0x40u
#define SIU_IREER_IREE6_SHIFT                    6u
#define SIU_IREER_IREE6_WIDTH                    1u
#define SIU_IREER_IREE6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE6_SHIFT))&SIU_IREER_IREE6_MASK)
#define SIU_IREER_IREE7_MASK                     0x80u
#define SIU_IREER_IREE7_SHIFT                    7u
#define SIU_IREER_IREE7_WIDTH                    1u
#define SIU_IREER_IREE7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE7_SHIFT))&SIU_IREER_IREE7_MASK)
#define SIU_IREER_IREE8_MASK                     0x100u
#define SIU_IREER_IREE8_SHIFT                    8u
#define SIU_IREER_IREE8_WIDTH                    1u
#define SIU_IREER_IREE8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE8_SHIFT))&SIU_IREER_IREE8_MASK)
#define SIU_IREER_IREE9_MASK                     0x200u
#define SIU_IREER_IREE9_SHIFT                    9u
#define SIU_IREER_IREE9_WIDTH                    1u
#define SIU_IREER_IREE9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE9_SHIFT))&SIU_IREER_IREE9_MASK)
#define SIU_IREER_IREE10_MASK                    0x400u
#define SIU_IREER_IREE10_SHIFT                   10u
#define SIU_IREER_IREE10_WIDTH                   1u
#define SIU_IREER_IREE10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE10_SHIFT))&SIU_IREER_IREE10_MASK)
#define SIU_IREER_IREE11_MASK                    0x800u
#define SIU_IREER_IREE11_SHIFT                   11u
#define SIU_IREER_IREE11_WIDTH                   1u
#define SIU_IREER_IREE11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE11_SHIFT))&SIU_IREER_IREE11_MASK)
#define SIU_IREER_IREE12_MASK                    0x1000u
#define SIU_IREER_IREE12_SHIFT                   12u
#define SIU_IREER_IREE12_WIDTH                   1u
#define SIU_IREER_IREE12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE12_SHIFT))&SIU_IREER_IREE12_MASK)
#define SIU_IREER_IREE13_MASK                    0x2000u
#define SIU_IREER_IREE13_SHIFT                   13u
#define SIU_IREER_IREE13_WIDTH                   1u
#define SIU_IREER_IREE13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE13_SHIFT))&SIU_IREER_IREE13_MASK)
#define SIU_IREER_IREE14_MASK                    0x4000u
#define SIU_IREER_IREE14_SHIFT                   14u
#define SIU_IREER_IREE14_WIDTH                   1u
#define SIU_IREER_IREE14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE14_SHIFT))&SIU_IREER_IREE14_MASK)
#define SIU_IREER_IREE15_MASK                    0x8000u
#define SIU_IREER_IREE15_SHIFT                   15u
#define SIU_IREER_IREE15_WIDTH                   1u
#define SIU_IREER_IREE15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE15_SHIFT))&SIU_IREER_IREE15_MASK)
#define SIU_IREER_IREE_NMI7_MASK                 0x40000000u
#define SIU_IREER_IREE_NMI7_SHIFT                30u
#define SIU_IREER_IREE_NMI7_WIDTH                1u
#define SIU_IREER_IREE_NMI7(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE_NMI7_SHIFT))&SIU_IREER_IREE_NMI7_MASK)
#define SIU_IREER_IREE_NMI8_MASK                 0x80000000u
#define SIU_IREER_IREE_NMI8_SHIFT                31u
#define SIU_IREER_IREE_NMI8_WIDTH                1u
#define SIU_IREER_IREE_NMI8(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IREER_IREE_NMI8_SHIFT))&SIU_IREER_IREE_NMI8_MASK)
/* IFEER Bit Fields */
#define SIU_IFEER_IFEEN0_MASK                    0x1u
#define SIU_IFEER_IFEEN0_SHIFT                   0u
#define SIU_IFEER_IFEEN0_WIDTH                   1u
#define SIU_IFEER_IFEEN0(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN0_SHIFT))&SIU_IFEER_IFEEN0_MASK)
#define SIU_IFEER_IFEEN1_MASK                    0x2u
#define SIU_IFEER_IFEEN1_SHIFT                   1u
#define SIU_IFEER_IFEEN1_WIDTH                   1u
#define SIU_IFEER_IFEEN1(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN1_SHIFT))&SIU_IFEER_IFEEN1_MASK)
#define SIU_IFEER_IFEEN2_MASK                    0x4u
#define SIU_IFEER_IFEEN2_SHIFT                   2u
#define SIU_IFEER_IFEEN2_WIDTH                   1u
#define SIU_IFEER_IFEEN2(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN2_SHIFT))&SIU_IFEER_IFEEN2_MASK)
#define SIU_IFEER_IFEEN3_MASK                    0x8u
#define SIU_IFEER_IFEEN3_SHIFT                   3u
#define SIU_IFEER_IFEEN3_WIDTH                   1u
#define SIU_IFEER_IFEEN3(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN3_SHIFT))&SIU_IFEER_IFEEN3_MASK)
#define SIU_IFEER_IFEEN4_MASK                    0x10u
#define SIU_IFEER_IFEEN4_SHIFT                   4u
#define SIU_IFEER_IFEEN4_WIDTH                   1u
#define SIU_IFEER_IFEEN4(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN4_SHIFT))&SIU_IFEER_IFEEN4_MASK)
#define SIU_IFEER_IFEEN5_MASK                    0x20u
#define SIU_IFEER_IFEEN5_SHIFT                   5u
#define SIU_IFEER_IFEEN5_WIDTH                   1u
#define SIU_IFEER_IFEEN5(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN5_SHIFT))&SIU_IFEER_IFEEN5_MASK)
#define SIU_IFEER_IFEEN6_MASK                    0x40u
#define SIU_IFEER_IFEEN6_SHIFT                   6u
#define SIU_IFEER_IFEEN6_WIDTH                   1u
#define SIU_IFEER_IFEEN6(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN6_SHIFT))&SIU_IFEER_IFEEN6_MASK)
#define SIU_IFEER_IFEEN7_MASK                    0x80u
#define SIU_IFEER_IFEEN7_SHIFT                   7u
#define SIU_IFEER_IFEEN7_WIDTH                   1u
#define SIU_IFEER_IFEEN7(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN7_SHIFT))&SIU_IFEER_IFEEN7_MASK)
#define SIU_IFEER_IFEEN8_MASK                    0x100u
#define SIU_IFEER_IFEEN8_SHIFT                   8u
#define SIU_IFEER_IFEEN8_WIDTH                   1u
#define SIU_IFEER_IFEEN8(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN8_SHIFT))&SIU_IFEER_IFEEN8_MASK)
#define SIU_IFEER_IFEEN9_MASK                    0x200u
#define SIU_IFEER_IFEEN9_SHIFT                   9u
#define SIU_IFEER_IFEEN9_WIDTH                   1u
#define SIU_IFEER_IFEEN9(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN9_SHIFT))&SIU_IFEER_IFEEN9_MASK)
#define SIU_IFEER_IFEEN10_MASK                   0x400u
#define SIU_IFEER_IFEEN10_SHIFT                  10u
#define SIU_IFEER_IFEEN10_WIDTH                  1u
#define SIU_IFEER_IFEEN10(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN10_SHIFT))&SIU_IFEER_IFEEN10_MASK)
#define SIU_IFEER_IFEEN11_MASK                   0x800u
#define SIU_IFEER_IFEEN11_SHIFT                  11u
#define SIU_IFEER_IFEEN11_WIDTH                  1u
#define SIU_IFEER_IFEEN11(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN11_SHIFT))&SIU_IFEER_IFEEN11_MASK)
#define SIU_IFEER_IFEEN12_MASK                   0x1000u
#define SIU_IFEER_IFEEN12_SHIFT                  12u
#define SIU_IFEER_IFEEN12_WIDTH                  1u
#define SIU_IFEER_IFEEN12(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN12_SHIFT))&SIU_IFEER_IFEEN12_MASK)
#define SIU_IFEER_IFEEN13_MASK                   0x2000u
#define SIU_IFEER_IFEEN13_SHIFT                  13u
#define SIU_IFEER_IFEEN13_WIDTH                  1u
#define SIU_IFEER_IFEEN13(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN13_SHIFT))&SIU_IFEER_IFEEN13_MASK)
#define SIU_IFEER_IFEEN14_MASK                   0x4000u
#define SIU_IFEER_IFEEN14_SHIFT                  14u
#define SIU_IFEER_IFEEN14_WIDTH                  1u
#define SIU_IFEER_IFEEN14(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN14_SHIFT))&SIU_IFEER_IFEEN14_MASK)
#define SIU_IFEER_IFEEN15_MASK                   0x8000u
#define SIU_IFEER_IFEEN15_SHIFT                  15u
#define SIU_IFEER_IFEEN15_WIDTH                  1u
#define SIU_IFEER_IFEEN15(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEEN15_SHIFT))&SIU_IFEER_IFEEN15_MASK)
#define SIU_IFEER_IFEE_NMI7_MASK                 0x40000000u
#define SIU_IFEER_IFEE_NMI7_SHIFT                30u
#define SIU_IFEER_IFEE_NMI7_WIDTH                1u
#define SIU_IFEER_IFEE_NMI7(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEE_NMI7_SHIFT))&SIU_IFEER_IFEE_NMI7_MASK)
#define SIU_IFEER_IFEE_NMI8_MASK                 0x80000000u
#define SIU_IFEER_IFEE_NMI8_SHIFT                31u
#define SIU_IFEER_IFEE_NMI8_WIDTH                1u
#define SIU_IFEER_IFEE_NMI8(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IFEER_IFEE_NMI8_SHIFT))&SIU_IFEER_IFEE_NMI8_MASK)
/* IDFR Bit Fields */
#define SIU_IDFR_DFL_MASK                        0xFu
#define SIU_IDFR_DFL_SHIFT                       0u
#define SIU_IDFR_DFL_WIDTH                       4u
#define SIU_IDFR_DFL(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_IDFR_DFL_SHIFT))&SIU_IDFR_DFL_MASK)
/* IFIR Bit Fields */
#define SIU_IFIR_IFI0_MASK                       0x1u
#define SIU_IFIR_IFI0_SHIFT                      0u
#define SIU_IFIR_IFI0_WIDTH                      1u
#define SIU_IFIR_IFI0(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI0_SHIFT))&SIU_IFIR_IFI0_MASK)
#define SIU_IFIR_IFI1_MASK                       0x2u
#define SIU_IFIR_IFI1_SHIFT                      1u
#define SIU_IFIR_IFI1_WIDTH                      1u
#define SIU_IFIR_IFI1(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI1_SHIFT))&SIU_IFIR_IFI1_MASK)
#define SIU_IFIR_IFI2_MASK                       0x4u
#define SIU_IFIR_IFI2_SHIFT                      2u
#define SIU_IFIR_IFI2_WIDTH                      1u
#define SIU_IFIR_IFI2(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI2_SHIFT))&SIU_IFIR_IFI2_MASK)
#define SIU_IFIR_IFI3_MASK                       0x8u
#define SIU_IFIR_IFI3_SHIFT                      3u
#define SIU_IFIR_IFI3_WIDTH                      1u
#define SIU_IFIR_IFI3(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI3_SHIFT))&SIU_IFIR_IFI3_MASK)
#define SIU_IFIR_IFI4_MASK                       0x10u
#define SIU_IFIR_IFI4_SHIFT                      4u
#define SIU_IFIR_IFI4_WIDTH                      1u
#define SIU_IFIR_IFI4(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI4_SHIFT))&SIU_IFIR_IFI4_MASK)
#define SIU_IFIR_IFI5_MASK                       0x20u
#define SIU_IFIR_IFI5_SHIFT                      5u
#define SIU_IFIR_IFI5_WIDTH                      1u
#define SIU_IFIR_IFI5(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI5_SHIFT))&SIU_IFIR_IFI5_MASK)
#define SIU_IFIR_IFI6_MASK                       0x40u
#define SIU_IFIR_IFI6_SHIFT                      6u
#define SIU_IFIR_IFI6_WIDTH                      1u
#define SIU_IFIR_IFI6(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI6_SHIFT))&SIU_IFIR_IFI6_MASK)
#define SIU_IFIR_IFI7_MASK                       0x80u
#define SIU_IFIR_IFI7_SHIFT                      7u
#define SIU_IFIR_IFI7_WIDTH                      1u
#define SIU_IFIR_IFI7(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI7_SHIFT))&SIU_IFIR_IFI7_MASK)
#define SIU_IFIR_IFI8_MASK                       0x100u
#define SIU_IFIR_IFI8_SHIFT                      8u
#define SIU_IFIR_IFI8_WIDTH                      1u
#define SIU_IFIR_IFI8(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI8_SHIFT))&SIU_IFIR_IFI8_MASK)
#define SIU_IFIR_IFI9_MASK                       0x200u
#define SIU_IFIR_IFI9_SHIFT                      9u
#define SIU_IFIR_IFI9_WIDTH                      1u
#define SIU_IFIR_IFI9(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI9_SHIFT))&SIU_IFIR_IFI9_MASK)
#define SIU_IFIR_IFI10_MASK                      0x400u
#define SIU_IFIR_IFI10_SHIFT                     10u
#define SIU_IFIR_IFI10_WIDTH                     1u
#define SIU_IFIR_IFI10(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI10_SHIFT))&SIU_IFIR_IFI10_MASK)
#define SIU_IFIR_IFI11_MASK                      0x800u
#define SIU_IFIR_IFI11_SHIFT                     11u
#define SIU_IFIR_IFI11_WIDTH                     1u
#define SIU_IFIR_IFI11(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI11_SHIFT))&SIU_IFIR_IFI11_MASK)
#define SIU_IFIR_IFI12_MASK                      0x1000u
#define SIU_IFIR_IFI12_SHIFT                     12u
#define SIU_IFIR_IFI12_WIDTH                     1u
#define SIU_IFIR_IFI12(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI12_SHIFT))&SIU_IFIR_IFI12_MASK)
#define SIU_IFIR_IFI13_MASK                      0x2000u
#define SIU_IFIR_IFI13_SHIFT                     13u
#define SIU_IFIR_IFI13_WIDTH                     1u
#define SIU_IFIR_IFI13(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI13_SHIFT))&SIU_IFIR_IFI13_MASK)
#define SIU_IFIR_IFI14_MASK                      0x4000u
#define SIU_IFIR_IFI14_SHIFT                     14u
#define SIU_IFIR_IFI14_WIDTH                     1u
#define SIU_IFIR_IFI14(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI14_SHIFT))&SIU_IFIR_IFI14_MASK)
#define SIU_IFIR_IFI15_MASK                      0x8000u
#define SIU_IFIR_IFI15_SHIFT                     15u
#define SIU_IFIR_IFI15_WIDTH                     1u
#define SIU_IFIR_IFI15(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI15_SHIFT))&SIU_IFIR_IFI15_MASK)
#define SIU_IFIR_IFI_NMI7_MASK                   0x40000000u
#define SIU_IFIR_IFI_NMI7_SHIFT                  30u
#define SIU_IFIR_IFI_NMI7_WIDTH                  1u
#define SIU_IFIR_IFI_NMI7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI_NMI7_SHIFT))&SIU_IFIR_IFI_NMI7_MASK)
#define SIU_IFIR_IFI_NMI8_MASK                   0x80000000u
#define SIU_IFIR_IFI_NMI8_SHIFT                  31u
#define SIU_IFIR_IFI_NMI8_WIDTH                  1u
#define SIU_IFIR_IFI_NMI8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IFIR_IFI_NMI8_SHIFT))&SIU_IFIR_IFI_NMI8_MASK)
/* PCR Bit Fields */
#define SIU_PCR_WPS_MASK                         0x1u
#define SIU_PCR_WPS_SHIFT                        0u
#define SIU_PCR_WPS_WIDTH                        1u
#define SIU_PCR_WPS(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_WPS_SHIFT))&SIU_PCR_WPS_MASK)
#define SIU_PCR_WPE_MASK                         0x2u
#define SIU_PCR_WPE_SHIFT                        1u
#define SIU_PCR_WPE_WIDTH                        1u
#define SIU_PCR_WPE(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_WPE_SHIFT))&SIU_PCR_WPE_MASK)
#define SIU_PCR_SRC_MASK                         0xCu
#define SIU_PCR_SRC_SHIFT                        2u
#define SIU_PCR_SRC_WIDTH                        2u
#define SIU_PCR_SRC(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_SRC_SHIFT))&SIU_PCR_SRC_MASK)
#define SIU_PCR_HYS_MASK                         0x10u
#define SIU_PCR_HYS_SHIFT                        4u
#define SIU_PCR_HYS_WIDTH                        1u
#define SIU_PCR_HYS(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_HYS_SHIFT))&SIU_PCR_HYS_MASK)
#define SIU_PCR_ODE_MASK                         0x20u
#define SIU_PCR_ODE_SHIFT                        5u
#define SIU_PCR_ODE_WIDTH                        1u
#define SIU_PCR_ODE(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_ODE_SHIFT))&SIU_PCR_ODE_MASK)
#define SIU_PCR_DSC_MASK                         0xC0u
#define SIU_PCR_DSC_SHIFT                        6u
#define SIU_PCR_DSC_WIDTH                        2u
#define SIU_PCR_DSC(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_DSC_SHIFT))&SIU_PCR_DSC_MASK)
#define SIU_PCR_IBE_MASK                         0x100u
#define SIU_PCR_IBE_SHIFT                        8u
#define SIU_PCR_IBE_WIDTH                        1u
#define SIU_PCR_IBE(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_IBE_SHIFT))&SIU_PCR_IBE_MASK)
#define SIU_PCR_OBE_MASK                         0x200u
#define SIU_PCR_OBE_SHIFT                        9u
#define SIU_PCR_OBE_WIDTH                        1u
#define SIU_PCR_OBE(x)                           (((uint16_t)(((uint16_t)(x))<<SIU_PCR_OBE_SHIFT))&SIU_PCR_OBE_MASK)
#define SIU_PCR_PA_MASK                          0x1C00u
#define SIU_PCR_PA_SHIFT                         10u
#define SIU_PCR_PA_WIDTH                         3u
#define SIU_PCR_PA(x)                            (((uint16_t)(((uint16_t)(x))<<SIU_PCR_PA_SHIFT))&SIU_PCR_PA_MASK)
/* GPDO Bit Fields */
#define SIU_GPDO_PDOn_MASK                       0x1u
#define SIU_GPDO_PDOn_SHIFT                      0u
#define SIU_GPDO_PDOn_WIDTH                      1u
#define SIU_GPDO_PDOn(x)                         (((uint8_t)(((uint8_t)(x))<<SIU_GPDO_PDOn_SHIFT))&SIU_GPDO_PDOn_MASK)
/* GPDIL Bit Fields */
#define SIU_GPDIL_PDIn_MASK                      0x1u
#define SIU_GPDIL_PDIn_SHIFT                     0u
#define SIU_GPDIL_PDIn_WIDTH                     1u
#define SIU_GPDIL_PDIn(x)                        (((uint8_t)(((uint8_t)(x))<<SIU_GPDIL_PDIn_SHIFT))&SIU_GPDIL_PDIn_MASK)
/* EIISR Bit Fields */
#define SIU_EIISR_ESEL0_MASK                     0x3u
#define SIU_EIISR_ESEL0_SHIFT                    0u
#define SIU_EIISR_ESEL0_WIDTH                    2u
#define SIU_EIISR_ESEL0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL0_SHIFT))&SIU_EIISR_ESEL0_MASK)
#define SIU_EIISR_ESEL1_MASK                     0xCu
#define SIU_EIISR_ESEL1_SHIFT                    2u
#define SIU_EIISR_ESEL1_WIDTH                    2u
#define SIU_EIISR_ESEL1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL1_SHIFT))&SIU_EIISR_ESEL1_MASK)
#define SIU_EIISR_ESEL2_MASK                     0x30u
#define SIU_EIISR_ESEL2_SHIFT                    4u
#define SIU_EIISR_ESEL2_WIDTH                    2u
#define SIU_EIISR_ESEL2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL2_SHIFT))&SIU_EIISR_ESEL2_MASK)
#define SIU_EIISR_ESEL3_MASK                     0xC0u
#define SIU_EIISR_ESEL3_SHIFT                    6u
#define SIU_EIISR_ESEL3_WIDTH                    2u
#define SIU_EIISR_ESEL3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL3_SHIFT))&SIU_EIISR_ESEL3_MASK)
#define SIU_EIISR_ESEL4_MASK                     0x300u
#define SIU_EIISR_ESEL4_SHIFT                    8u
#define SIU_EIISR_ESEL4_WIDTH                    2u
#define SIU_EIISR_ESEL4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL4_SHIFT))&SIU_EIISR_ESEL4_MASK)
#define SIU_EIISR_ESEL5_MASK                     0xC00u
#define SIU_EIISR_ESEL5_SHIFT                    10u
#define SIU_EIISR_ESEL5_WIDTH                    2u
#define SIU_EIISR_ESEL5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL5_SHIFT))&SIU_EIISR_ESEL5_MASK)
#define SIU_EIISR_ESEL6_MASK                     0x3000u
#define SIU_EIISR_ESEL6_SHIFT                    12u
#define SIU_EIISR_ESEL6_WIDTH                    2u
#define SIU_EIISR_ESEL6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL6_SHIFT))&SIU_EIISR_ESEL6_MASK)
#define SIU_EIISR_ESEL7_MASK                     0xC000u
#define SIU_EIISR_ESEL7_SHIFT                    14u
#define SIU_EIISR_ESEL7_WIDTH                    2u
#define SIU_EIISR_ESEL7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL7_SHIFT))&SIU_EIISR_ESEL7_MASK)
#define SIU_EIISR_ESEL8_MASK                     0x30000u
#define SIU_EIISR_ESEL8_SHIFT                    16u
#define SIU_EIISR_ESEL8_WIDTH                    2u
#define SIU_EIISR_ESEL8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL8_SHIFT))&SIU_EIISR_ESEL8_MASK)
#define SIU_EIISR_ESEL9_MASK                     0xC0000u
#define SIU_EIISR_ESEL9_SHIFT                    18u
#define SIU_EIISR_ESEL9_WIDTH                    2u
#define SIU_EIISR_ESEL9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL9_SHIFT))&SIU_EIISR_ESEL9_MASK)
#define SIU_EIISR_ESEL10_MASK                    0x300000u
#define SIU_EIISR_ESEL10_SHIFT                   20u
#define SIU_EIISR_ESEL10_WIDTH                   2u
#define SIU_EIISR_ESEL10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL10_SHIFT))&SIU_EIISR_ESEL10_MASK)
#define SIU_EIISR_ESEL11_MASK                    0xC00000u
#define SIU_EIISR_ESEL11_SHIFT                   22u
#define SIU_EIISR_ESEL11_WIDTH                   2u
#define SIU_EIISR_ESEL11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL11_SHIFT))&SIU_EIISR_ESEL11_MASK)
#define SIU_EIISR_ESEL12_MASK                    0x3000000u
#define SIU_EIISR_ESEL12_SHIFT                   24u
#define SIU_EIISR_ESEL12_WIDTH                   2u
#define SIU_EIISR_ESEL12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL12_SHIFT))&SIU_EIISR_ESEL12_MASK)
#define SIU_EIISR_ESEL13_MASK                    0xC000000u
#define SIU_EIISR_ESEL13_SHIFT                   26u
#define SIU_EIISR_ESEL13_WIDTH                   2u
#define SIU_EIISR_ESEL13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL13_SHIFT))&SIU_EIISR_ESEL13_MASK)
#define SIU_EIISR_ESEL14_MASK                    0x30000000u
#define SIU_EIISR_ESEL14_SHIFT                   28u
#define SIU_EIISR_ESEL14_WIDTH                   2u
#define SIU_EIISR_ESEL14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL14_SHIFT))&SIU_EIISR_ESEL14_MASK)
#define SIU_EIISR_ESEL15_MASK                    0xC0000000u
#define SIU_EIISR_ESEL15_SHIFT                   30u
#define SIU_EIISR_ESEL15_WIDTH                   2u
#define SIU_EIISR_ESEL15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_EIISR_ESEL15_SHIFT))&SIU_EIISR_ESEL15_MASK)
/* DISR Bit Fields */
#define SIU_DISR_SCKSELD_MASK                    0xCu
#define SIU_DISR_SCKSELD_SHIFT                   2u
#define SIU_DISR_SCKSELD_WIDTH                   2u
#define SIU_DISR_SCKSELD(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SCKSELD_SHIFT))&SIU_DISR_SCKSELD_MASK)
#define SIU_DISR_SSSELD_MASK                     0x30u
#define SIU_DISR_SSSELD_SHIFT                    4u
#define SIU_DISR_SSSELD_WIDTH                    2u
#define SIU_DISR_SSSELD(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SSSELD_SHIFT))&SIU_DISR_SSSELD_MASK)
#define SIU_DISR_SINSELD_MASK                    0xC0u
#define SIU_DISR_SINSELD_SHIFT                   6u
#define SIU_DISR_SINSELD_WIDTH                   2u
#define SIU_DISR_SINSELD(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SINSELD_SHIFT))&SIU_DISR_SINSELD_MASK)
#define SIU_DISR_SCKSELC_MASK                    0xC00u
#define SIU_DISR_SCKSELC_SHIFT                   10u
#define SIU_DISR_SCKSELC_WIDTH                   2u
#define SIU_DISR_SCKSELC(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SCKSELC_SHIFT))&SIU_DISR_SCKSELC_MASK)
#define SIU_DISR_SSSELC_MASK                     0x3000u
#define SIU_DISR_SSSELC_SHIFT                    12u
#define SIU_DISR_SSSELC_WIDTH                    2u
#define SIU_DISR_SSSELC(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SSSELC_SHIFT))&SIU_DISR_SSSELC_MASK)
#define SIU_DISR_SINSELC_MASK                    0xC000u
#define SIU_DISR_SINSELC_SHIFT                   14u
#define SIU_DISR_SINSELC_WIDTH                   2u
#define SIU_DISR_SINSELC(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SINSELC_SHIFT))&SIU_DISR_SINSELC_MASK)
#define SIU_DISR_SCKSELB_MASK                    0xC0000u
#define SIU_DISR_SCKSELB_SHIFT                   18u
#define SIU_DISR_SCKSELB_WIDTH                   2u
#define SIU_DISR_SCKSELB(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SCKSELB_SHIFT))&SIU_DISR_SCKSELB_MASK)
#define SIU_DISR_SSSELB_MASK                     0x300000u
#define SIU_DISR_SSSELB_SHIFT                    20u
#define SIU_DISR_SSSELB_WIDTH                    2u
#define SIU_DISR_SSSELB(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SSSELB_SHIFT))&SIU_DISR_SSSELB_MASK)
#define SIU_DISR_SINSELB_MASK                    0xC00000u
#define SIU_DISR_SINSELB_SHIFT                   22u
#define SIU_DISR_SINSELB_WIDTH                   2u
#define SIU_DISR_SINSELB(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SINSELB_SHIFT))&SIU_DISR_SINSELB_MASK)
#define SIU_DISR_SCKSELA_MASK                    0xC000000u
#define SIU_DISR_SCKSELA_SHIFT                   26u
#define SIU_DISR_SCKSELA_WIDTH                   2u
#define SIU_DISR_SCKSELA(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SCKSELA_SHIFT))&SIU_DISR_SCKSELA_MASK)
#define SIU_DISR_SSSELA_MASK                     0x30000000u
#define SIU_DISR_SSSELA_SHIFT                    28u
#define SIU_DISR_SSSELA_WIDTH                    2u
#define SIU_DISR_SSSELA(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SSSELA_SHIFT))&SIU_DISR_SSSELA_MASK)
#define SIU_DISR_SINSELA_MASK                    0xC0000000u
#define SIU_DISR_SINSELA_SHIFT                   30u
#define SIU_DISR_SINSELA_WIDTH                   2u
#define SIU_DISR_SINSELA(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DISR_SINSELA_SHIFT))&SIU_DISR_SINSELA_MASK)
/* ISEL4 Bit Fields */
#define SIU_ISEL4_CTSEL2_A_MASK                  0x7Fu
#define SIU_ISEL4_CTSEL2_A_SHIFT                 0u
#define SIU_ISEL4_CTSEL2_A_WIDTH                 7u
#define SIU_ISEL4_CTSEL2_A(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL4_CTSEL2_A_SHIFT))&SIU_ISEL4_CTSEL2_A_MASK)
#define SIU_ISEL4_CTSEL3_A_MASK                  0x7F00u
#define SIU_ISEL4_CTSEL3_A_SHIFT                 8u
#define SIU_ISEL4_CTSEL3_A_WIDTH                 7u
#define SIU_ISEL4_CTSEL3_A(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL4_CTSEL3_A_SHIFT))&SIU_ISEL4_CTSEL3_A_MASK)
#define SIU_ISEL4_CTSEL4_A_MASK                  0x7F0000u
#define SIU_ISEL4_CTSEL4_A_SHIFT                 16u
#define SIU_ISEL4_CTSEL4_A_WIDTH                 7u
#define SIU_ISEL4_CTSEL4_A(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL4_CTSEL4_A_SHIFT))&SIU_ISEL4_CTSEL4_A_MASK)
#define SIU_ISEL4_CTSEL5_A_MASK                  0x7F000000u
#define SIU_ISEL4_CTSEL5_A_SHIFT                 24u
#define SIU_ISEL4_CTSEL5_A_WIDTH                 7u
#define SIU_ISEL4_CTSEL5_A(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL4_CTSEL5_A_SHIFT))&SIU_ISEL4_CTSEL5_A_MASK)
/* ISEL5 Bit Fields */
#define SIU_ISEL5_CTSEL0_A_MASK                  0x7F0000u
#define SIU_ISEL5_CTSEL0_A_SHIFT                 16u
#define SIU_ISEL5_CTSEL0_A_WIDTH                 7u
#define SIU_ISEL5_CTSEL0_A(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL5_CTSEL0_A_SHIFT))&SIU_ISEL5_CTSEL0_A_MASK)
#define SIU_ISEL5_CTSEL1_A_MASK                  0x7F000000u
#define SIU_ISEL5_CTSEL1_A_SHIFT                 24u
#define SIU_ISEL5_CTSEL1_A_WIDTH                 7u
#define SIU_ISEL5_CTSEL1_A(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL5_CTSEL1_A_SHIFT))&SIU_ISEL5_CTSEL1_A_MASK)
/* ISEL6 Bit Fields */
#define SIU_ISEL6_CTSEL2_B_MASK                  0x7Fu
#define SIU_ISEL6_CTSEL2_B_SHIFT                 0u
#define SIU_ISEL6_CTSEL2_B_WIDTH                 7u
#define SIU_ISEL6_CTSEL2_B(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL6_CTSEL2_B_SHIFT))&SIU_ISEL6_CTSEL2_B_MASK)
#define SIU_ISEL6_CTSEL3_B_MASK                  0x7F00u
#define SIU_ISEL6_CTSEL3_B_SHIFT                 8u
#define SIU_ISEL6_CTSEL3_B_WIDTH                 7u
#define SIU_ISEL6_CTSEL3_B(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL6_CTSEL3_B_SHIFT))&SIU_ISEL6_CTSEL3_B_MASK)
#define SIU_ISEL6_CTSEL4_B_MASK                  0x7F0000u
#define SIU_ISEL6_CTSEL4_B_SHIFT                 16u
#define SIU_ISEL6_CTSEL4_B_WIDTH                 7u
#define SIU_ISEL6_CTSEL4_B(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL6_CTSEL4_B_SHIFT))&SIU_ISEL6_CTSEL4_B_MASK)
#define SIU_ISEL6_CTSEL5_B_MASK                  0x7F000000u
#define SIU_ISEL6_CTSEL5_B_SHIFT                 24u
#define SIU_ISEL6_CTSEL5_B_WIDTH                 7u
#define SIU_ISEL6_CTSEL5_B(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL6_CTSEL5_B_SHIFT))&SIU_ISEL6_CTSEL5_B_MASK)
/* ISEL7 Bit Fields */
#define SIU_ISEL7_CTSEL0_B_MASK                  0x7F0000u
#define SIU_ISEL7_CTSEL0_B_SHIFT                 16u
#define SIU_ISEL7_CTSEL0_B_WIDTH                 7u
#define SIU_ISEL7_CTSEL0_B(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL7_CTSEL0_B_SHIFT))&SIU_ISEL7_CTSEL0_B_MASK)
#define SIU_ISEL7_CTSEL1_B_MASK                  0x7F000000u
#define SIU_ISEL7_CTSEL1_B_SHIFT                 24u
#define SIU_ISEL7_CTSEL1_B_WIDTH                 7u
#define SIU_ISEL7_CTSEL1_B(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ISEL7_CTSEL1_B_SHIFT))&SIU_ISEL7_CTSEL1_B_MASK)
/* ISEL8 Bit Fields */
#define SIU_ISEL8_ETPU24_MASK                    0x1u
#define SIU_ISEL8_ETPU24_SHIFT                   0u
#define SIU_ISEL8_ETPU24_WIDTH                   1u
#define SIU_ISEL8_ETPU24(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_ISEL8_ETPU24_SHIFT))&SIU_ISEL8_ETPU24_MASK)
#define SIU_ISEL8_ETPU25_MASK                    0x10u
#define SIU_ISEL8_ETPU25_SHIFT                   4u
#define SIU_ISEL8_ETPU25_WIDTH                   1u
#define SIU_ISEL8_ETPU25(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_ISEL8_ETPU25_SHIFT))&SIU_ISEL8_ETPU25_MASK)
#define SIU_ISEL8_ETPU26_MASK                    0x100u
#define SIU_ISEL8_ETPU26_SHIFT                   8u
#define SIU_ISEL8_ETPU26_WIDTH                   1u
#define SIU_ISEL8_ETPU26(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_ISEL8_ETPU26_SHIFT))&SIU_ISEL8_ETPU26_MASK)
#define SIU_ISEL8_ETPU27_MASK                    0x1000u
#define SIU_ISEL8_ETPU27_SHIFT                   12u
#define SIU_ISEL8_ETPU27_WIDTH                   1u
#define SIU_ISEL8_ETPU27(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_ISEL8_ETPU27_SHIFT))&SIU_ISEL8_ETPU27_MASK)
#define SIU_ISEL8_ETPU28_MASK                    0x10000u
#define SIU_ISEL8_ETPU28_SHIFT                   16u
#define SIU_ISEL8_ETPU28_WIDTH                   1u
#define SIU_ISEL8_ETPU28(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_ISEL8_ETPU28_SHIFT))&SIU_ISEL8_ETPU28_MASK)
#define SIU_ISEL8_ETPU29_MASK                    0x100000u
#define SIU_ISEL8_ETPU29_SHIFT                   20u
#define SIU_ISEL8_ETPU29_WIDTH                   1u
#define SIU_ISEL8_ETPU29(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_ISEL8_ETPU29_SHIFT))&SIU_ISEL8_ETPU29_MASK)
/* ISEL9 Bit Fields */
#define SIU_ISEL9_EETSEL0ADV_B_MASK              0x1Fu
#define SIU_ISEL9_EETSEL0ADV_B_SHIFT             0u
#define SIU_ISEL9_EETSEL0ADV_B_WIDTH             5u
#define SIU_ISEL9_EETSEL0ADV_B(x)                (((uint32_t)(((uint32_t)(x))<<SIU_ISEL9_EETSEL0ADV_B_SHIFT))&SIU_ISEL9_EETSEL0ADV_B_MASK)
#define SIU_ISEL9_EETSEL0ADV_A_MASK              0x1F0000u
#define SIU_ISEL9_EETSEL0ADV_A_SHIFT             16u
#define SIU_ISEL9_EETSEL0ADV_A_WIDTH             5u
#define SIU_ISEL9_EETSEL0ADV_A(x)                (((uint32_t)(((uint32_t)(x))<<SIU_ISEL9_EETSEL0ADV_A_SHIFT))&SIU_ISEL9_EETSEL0ADV_A_MASK)
/* DECFIL1 Bit Fields */
#define SIU_DECFIL1_ZSELA_MASK                   0xFu
#define SIU_DECFIL1_ZSELA_SHIFT                  0u
#define SIU_DECFIL1_ZSELA_WIDTH                  4u
#define SIU_DECFIL1_ZSELA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_ZSELA_SHIFT))&SIU_DECFIL1_ZSELA_MASK)
#define SIU_DECFIL1_HSELA_MASK                   0xF0u
#define SIU_DECFIL1_HSELA_SHIFT                  4u
#define SIU_DECFIL1_HSELA_WIDTH                  4u
#define SIU_DECFIL1_HSELA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_HSELA_SHIFT))&SIU_DECFIL1_HSELA_MASK)
#define SIU_DECFIL1_ZSELB_MASK                   0xF00u
#define SIU_DECFIL1_ZSELB_SHIFT                  8u
#define SIU_DECFIL1_ZSELB_WIDTH                  4u
#define SIU_DECFIL1_ZSELB(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_ZSELB_SHIFT))&SIU_DECFIL1_ZSELB_MASK)
#define SIU_DECFIL1_HSELB_MASK                   0xF000u
#define SIU_DECFIL1_HSELB_SHIFT                  12u
#define SIU_DECFIL1_HSELB_WIDTH                  4u
#define SIU_DECFIL1_HSELB(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_HSELB_SHIFT))&SIU_DECFIL1_HSELB_MASK)
#define SIU_DECFIL1_ZSELC_MASK                   0xF0000u
#define SIU_DECFIL1_ZSELC_SHIFT                  16u
#define SIU_DECFIL1_ZSELC_WIDTH                  4u
#define SIU_DECFIL1_ZSELC(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_ZSELC_SHIFT))&SIU_DECFIL1_ZSELC_MASK)
#define SIU_DECFIL1_HSELC_MASK                   0xF00000u
#define SIU_DECFIL1_HSELC_SHIFT                  20u
#define SIU_DECFIL1_HSELC_WIDTH                  4u
#define SIU_DECFIL1_HSELC(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_HSELC_SHIFT))&SIU_DECFIL1_HSELC_MASK)
#define SIU_DECFIL1_ZSELD_MASK                   0xF000000u
#define SIU_DECFIL1_ZSELD_SHIFT                  24u
#define SIU_DECFIL1_ZSELD_WIDTH                  4u
#define SIU_DECFIL1_ZSELD(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_ZSELD_SHIFT))&SIU_DECFIL1_ZSELD_MASK)
#define SIU_DECFIL1_HSELD_MASK                   0xF0000000u
#define SIU_DECFIL1_HSELD_SHIFT                  28u
#define SIU_DECFIL1_HSELD_WIDTH                  4u
#define SIU_DECFIL1_HSELD(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL1_HSELD_SHIFT))&SIU_DECFIL1_HSELD_MASK)
/* DECFIL2 Bit Fields */
#define SIU_DECFIL2_ZSELE_MASK                   0xFu
#define SIU_DECFIL2_ZSELE_SHIFT                  0u
#define SIU_DECFIL2_ZSELE_WIDTH                  4u
#define SIU_DECFIL2_ZSELE(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_ZSELE_SHIFT))&SIU_DECFIL2_ZSELE_MASK)
#define SIU_DECFIL2_HSELE_MASK                   0xF0u
#define SIU_DECFIL2_HSELE_SHIFT                  4u
#define SIU_DECFIL2_HSELE_WIDTH                  4u
#define SIU_DECFIL2_HSELE(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_HSELE_SHIFT))&SIU_DECFIL2_HSELE_MASK)
#define SIU_DECFIL2_ZSELF_MASK                   0xF00u
#define SIU_DECFIL2_ZSELF_SHIFT                  8u
#define SIU_DECFIL2_ZSELF_WIDTH                  4u
#define SIU_DECFIL2_ZSELF(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_ZSELF_SHIFT))&SIU_DECFIL2_ZSELF_MASK)
#define SIU_DECFIL2_HSELF_MASK                   0xF000u
#define SIU_DECFIL2_HSELF_SHIFT                  12u
#define SIU_DECFIL2_HSELF_WIDTH                  4u
#define SIU_DECFIL2_HSELF(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_HSELF_SHIFT))&SIU_DECFIL2_HSELF_MASK)
#define SIU_DECFIL2_ZSELG_MASK                   0xF0000u
#define SIU_DECFIL2_ZSELG_SHIFT                  16u
#define SIU_DECFIL2_ZSELG_WIDTH                  4u
#define SIU_DECFIL2_ZSELG(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_ZSELG_SHIFT))&SIU_DECFIL2_ZSELG_MASK)
#define SIU_DECFIL2_HSELG_MASK                   0xF00000u
#define SIU_DECFIL2_HSELG_SHIFT                  20u
#define SIU_DECFIL2_HSELG_WIDTH                  4u
#define SIU_DECFIL2_HSELG(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_HSELG_SHIFT))&SIU_DECFIL2_HSELG_MASK)
#define SIU_DECFIL2_ZSELH_MASK                   0xF000000u
#define SIU_DECFIL2_ZSELH_SHIFT                  24u
#define SIU_DECFIL2_ZSELH_WIDTH                  4u
#define SIU_DECFIL2_ZSELH(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_ZSELH_SHIFT))&SIU_DECFIL2_ZSELH_MASK)
#define SIU_DECFIL2_HSELH_MASK                   0xF0000000u
#define SIU_DECFIL2_HSELH_SHIFT                  28u
#define SIU_DECFIL2_HSELH_WIDTH                  4u
#define SIU_DECFIL2_HSELH(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL2_HSELH_SHIFT))&SIU_DECFIL2_HSELH_MASK)
/* DECFIL3 Bit Fields */
#define SIU_DECFIL3_ZSELI_MASK                   0xFu
#define SIU_DECFIL3_ZSELI_SHIFT                  0u
#define SIU_DECFIL3_ZSELI_WIDTH                  4u
#define SIU_DECFIL3_ZSELI(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_ZSELI_SHIFT))&SIU_DECFIL3_ZSELI_MASK)
#define SIU_DECFIL3_HSELI_MASK                   0xF0u
#define SIU_DECFIL3_HSELI_SHIFT                  4u
#define SIU_DECFIL3_HSELI_WIDTH                  4u
#define SIU_DECFIL3_HSELI(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_HSELI_SHIFT))&SIU_DECFIL3_HSELI_MASK)
#define SIU_DECFIL3_ZSELJ_MASK                   0xF00u
#define SIU_DECFIL3_ZSELJ_SHIFT                  8u
#define SIU_DECFIL3_ZSELJ_WIDTH                  4u
#define SIU_DECFIL3_ZSELJ(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_ZSELJ_SHIFT))&SIU_DECFIL3_ZSELJ_MASK)
#define SIU_DECFIL3_HSELJ_MASK                   0xF000u
#define SIU_DECFIL3_HSELJ_SHIFT                  12u
#define SIU_DECFIL3_HSELJ_WIDTH                  4u
#define SIU_DECFIL3_HSELJ(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_HSELJ_SHIFT))&SIU_DECFIL3_HSELJ_MASK)
#define SIU_DECFIL3_ZSELK_MASK                   0xF0000u
#define SIU_DECFIL3_ZSELK_SHIFT                  16u
#define SIU_DECFIL3_ZSELK_WIDTH                  4u
#define SIU_DECFIL3_ZSELK(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_ZSELK_SHIFT))&SIU_DECFIL3_ZSELK_MASK)
#define SIU_DECFIL3_HSELK_MASK                   0xF00000u
#define SIU_DECFIL3_HSELK_SHIFT                  20u
#define SIU_DECFIL3_HSELK_WIDTH                  4u
#define SIU_DECFIL3_HSELK(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_HSELK_SHIFT))&SIU_DECFIL3_HSELK_MASK)
#define SIU_DECFIL3_ZSELL_MASK                   0xF000000u
#define SIU_DECFIL3_ZSELL_SHIFT                  24u
#define SIU_DECFIL3_ZSELL_WIDTH                  4u
#define SIU_DECFIL3_ZSELL(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_ZSELL_SHIFT))&SIU_DECFIL3_ZSELL_MASK)
#define SIU_DECFIL3_HSELL_MASK                   0xF0000000u
#define SIU_DECFIL3_HSELL_SHIFT                  28u
#define SIU_DECFIL3_HSELL_WIDTH                  4u
#define SIU_DECFIL3_HSELL(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL3_HSELL_SHIFT))&SIU_DECFIL3_HSELL_MASK)
/* DECFIL4 Bit Fields */
#define SIU_DECFIL4_TRIG_SRCA_MASK               0xFu
#define SIU_DECFIL4_TRIG_SRCA_SHIFT              0u
#define SIU_DECFIL4_TRIG_SRCA_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCA(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCA_SHIFT))&SIU_DECFIL4_TRIG_SRCA_MASK)
#define SIU_DECFIL4_TRIG_SRCB_MASK               0xF0u
#define SIU_DECFIL4_TRIG_SRCB_SHIFT              4u
#define SIU_DECFIL4_TRIG_SRCB_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCB(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCB_SHIFT))&SIU_DECFIL4_TRIG_SRCB_MASK)
#define SIU_DECFIL4_TRIG_SRCC_MASK               0xF00u
#define SIU_DECFIL4_TRIG_SRCC_SHIFT              8u
#define SIU_DECFIL4_TRIG_SRCC_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCC(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCC_SHIFT))&SIU_DECFIL4_TRIG_SRCC_MASK)
#define SIU_DECFIL4_TRIG_SRCD_MASK               0xF000u
#define SIU_DECFIL4_TRIG_SRCD_SHIFT              12u
#define SIU_DECFIL4_TRIG_SRCD_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCD(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCD_SHIFT))&SIU_DECFIL4_TRIG_SRCD_MASK)
#define SIU_DECFIL4_TRIG_SRCE_MASK               0xF0000u
#define SIU_DECFIL4_TRIG_SRCE_SHIFT              16u
#define SIU_DECFIL4_TRIG_SRCE_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCE(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCE_SHIFT))&SIU_DECFIL4_TRIG_SRCE_MASK)
#define SIU_DECFIL4_TRIG_SRCF_MASK               0xF00000u
#define SIU_DECFIL4_TRIG_SRCF_SHIFT              20u
#define SIU_DECFIL4_TRIG_SRCF_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCF(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCF_SHIFT))&SIU_DECFIL4_TRIG_SRCF_MASK)
#define SIU_DECFIL4_TRIG_SRCG_MASK               0xF000000u
#define SIU_DECFIL4_TRIG_SRCG_SHIFT              24u
#define SIU_DECFIL4_TRIG_SRCG_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCG(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCG_SHIFT))&SIU_DECFIL4_TRIG_SRCG_MASK)
#define SIU_DECFIL4_TRIG_SRCH_MASK               0xF0000000u
#define SIU_DECFIL4_TRIG_SRCH_SHIFT              28u
#define SIU_DECFIL4_TRIG_SRCH_WIDTH              4u
#define SIU_DECFIL4_TRIG_SRCH(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL4_TRIG_SRCH_SHIFT))&SIU_DECFIL4_TRIG_SRCH_MASK)
/* DECFIL5 Bit Fields */
#define SIU_DECFIL5_TRIG_SRCI_MASK               0xF0000u
#define SIU_DECFIL5_TRIG_SRCI_SHIFT              16u
#define SIU_DECFIL5_TRIG_SRCI_WIDTH              4u
#define SIU_DECFIL5_TRIG_SRCI(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL5_TRIG_SRCI_SHIFT))&SIU_DECFIL5_TRIG_SRCI_MASK)
#define SIU_DECFIL5_TRIG_SRCJ_MASK               0xF00000u
#define SIU_DECFIL5_TRIG_SRCJ_SHIFT              20u
#define SIU_DECFIL5_TRIG_SRCJ_WIDTH              4u
#define SIU_DECFIL5_TRIG_SRCJ(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL5_TRIG_SRCJ_SHIFT))&SIU_DECFIL5_TRIG_SRCJ_MASK)
#define SIU_DECFIL5_TRIG_SRCK_MASK               0xF000000u
#define SIU_DECFIL5_TRIG_SRCK_SHIFT              24u
#define SIU_DECFIL5_TRIG_SRCK_WIDTH              4u
#define SIU_DECFIL5_TRIG_SRCK(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL5_TRIG_SRCK_SHIFT))&SIU_DECFIL5_TRIG_SRCK_MASK)
#define SIU_DECFIL5_TRIG_SRCL_MASK               0xF0000000u
#define SIU_DECFIL5_TRIG_SRCL_SHIFT              28u
#define SIU_DECFIL5_TRIG_SRCL_WIDTH              4u
#define SIU_DECFIL5_TRIG_SRCL(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DECFIL5_TRIG_SRCL_SHIFT))&SIU_DECFIL5_TRIG_SRCL_MASK)
/* REACTSR Bit Fields */
#define SIU_REACTSR_TS0_MASK                     0x3u
#define SIU_REACTSR_TS0_SHIFT                    0u
#define SIU_REACTSR_TS0_WIDTH                    2u
#define SIU_REACTSR_TS0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS0_SHIFT))&SIU_REACTSR_TS0_MASK)
#define SIU_REACTSR_TS1_MASK                     0xCu
#define SIU_REACTSR_TS1_SHIFT                    2u
#define SIU_REACTSR_TS1_WIDTH                    2u
#define SIU_REACTSR_TS1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS1_SHIFT))&SIU_REACTSR_TS1_MASK)
#define SIU_REACTSR_TS2_MASK                     0x30u
#define SIU_REACTSR_TS2_SHIFT                    4u
#define SIU_REACTSR_TS2_WIDTH                    2u
#define SIU_REACTSR_TS2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS2_SHIFT))&SIU_REACTSR_TS2_MASK)
#define SIU_REACTSR_TS3_MASK                     0xC0u
#define SIU_REACTSR_TS3_SHIFT                    6u
#define SIU_REACTSR_TS3_WIDTH                    2u
#define SIU_REACTSR_TS3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS3_SHIFT))&SIU_REACTSR_TS3_MASK)
#define SIU_REACTSR_TS4_MASK                     0x300u
#define SIU_REACTSR_TS4_SHIFT                    8u
#define SIU_REACTSR_TS4_WIDTH                    2u
#define SIU_REACTSR_TS4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS4_SHIFT))&SIU_REACTSR_TS4_MASK)
#define SIU_REACTSR_TS5_MASK                     0xC00u
#define SIU_REACTSR_TS5_SHIFT                    10u
#define SIU_REACTSR_TS5_WIDTH                    2u
#define SIU_REACTSR_TS5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS5_SHIFT))&SIU_REACTSR_TS5_MASK)
#define SIU_REACTSR_TS6_MASK                     0x3000u
#define SIU_REACTSR_TS6_SHIFT                    12u
#define SIU_REACTSR_TS6_WIDTH                    2u
#define SIU_REACTSR_TS6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS6_SHIFT))&SIU_REACTSR_TS6_MASK)
#define SIU_REACTSR_TS7_MASK                     0xC000u
#define SIU_REACTSR_TS7_SHIFT                    14u
#define SIU_REACTSR_TS7_WIDTH                    2u
#define SIU_REACTSR_TS7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS7_SHIFT))&SIU_REACTSR_TS7_MASK)
#define SIU_REACTSR_TS8_MASK                     0x30000u
#define SIU_REACTSR_TS8_SHIFT                    16u
#define SIU_REACTSR_TS8_WIDTH                    2u
#define SIU_REACTSR_TS8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS8_SHIFT))&SIU_REACTSR_TS8_MASK)
#define SIU_REACTSR_TS9_MASK                     0xC0000u
#define SIU_REACTSR_TS9_SHIFT                    18u
#define SIU_REACTSR_TS9_WIDTH                    2u
#define SIU_REACTSR_TS9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS9_SHIFT))&SIU_REACTSR_TS9_MASK)
#define SIU_REACTSR_TS10_MASK                    0x300000u
#define SIU_REACTSR_TS10_SHIFT                   20u
#define SIU_REACTSR_TS10_WIDTH                   2u
#define SIU_REACTSR_TS10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS10_SHIFT))&SIU_REACTSR_TS10_MASK)
#define SIU_REACTSR_TS11_MASK                    0xC00000u
#define SIU_REACTSR_TS11_SHIFT                   22u
#define SIU_REACTSR_TS11_WIDTH                   2u
#define SIU_REACTSR_TS11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS11_SHIFT))&SIU_REACTSR_TS11_MASK)
#define SIU_REACTSR_TS12_MASK                    0x3000000u
#define SIU_REACTSR_TS12_SHIFT                   24u
#define SIU_REACTSR_TS12_WIDTH                   2u
#define SIU_REACTSR_TS12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS12_SHIFT))&SIU_REACTSR_TS12_MASK)
#define SIU_REACTSR_TS13_MASK                    0xC000000u
#define SIU_REACTSR_TS13_SHIFT                   26u
#define SIU_REACTSR_TS13_WIDTH                   2u
#define SIU_REACTSR_TS13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS13_SHIFT))&SIU_REACTSR_TS13_MASK)
#define SIU_REACTSR_TS14_MASK                    0x30000000u
#define SIU_REACTSR_TS14_SHIFT                   28u
#define SIU_REACTSR_TS14_WIDTH                   2u
#define SIU_REACTSR_TS14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS14_SHIFT))&SIU_REACTSR_TS14_MASK)
#define SIU_REACTSR_TS15_MASK                    0xC0000000u
#define SIU_REACTSR_TS15_SHIFT                   30u
#define SIU_REACTSR_TS15_WIDTH                   2u
#define SIU_REACTSR_TS15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_REACTSR_TS15_SHIFT))&SIU_REACTSR_TS15_MASK)
/* SDGATE_SEL Bit Fields */
#define SIU_SDGATE_SEL_SD_A_GATE_SEL_MASK        0xFu
#define SIU_SDGATE_SEL_SD_A_GATE_SEL_SHIFT       0u
#define SIU_SDGATE_SEL_SD_A_GATE_SEL_WIDTH       4u
#define SIU_SDGATE_SEL_SD_A_GATE_SEL(x)          (((uint32_t)(((uint32_t)(x))<<SIU_SDGATE_SEL_SD_A_GATE_SEL_SHIFT))&SIU_SDGATE_SEL_SD_A_GATE_SEL_MASK)
#define SIU_SDGATE_SEL_SD_B_GATE_SEL_MASK        0xF0u
#define SIU_SDGATE_SEL_SD_B_GATE_SEL_SHIFT       4u
#define SIU_SDGATE_SEL_SD_B_GATE_SEL_WIDTH       4u
#define SIU_SDGATE_SEL_SD_B_GATE_SEL(x)          (((uint32_t)(((uint32_t)(x))<<SIU_SDGATE_SEL_SD_B_GATE_SEL_SHIFT))&SIU_SDGATE_SEL_SD_B_GATE_SEL_MASK)
#define SIU_SDGATE_SEL_SD_C_GATE_SEL_MASK        0xF00u
#define SIU_SDGATE_SEL_SD_C_GATE_SEL_SHIFT       8u
#define SIU_SDGATE_SEL_SD_C_GATE_SEL_WIDTH       4u
#define SIU_SDGATE_SEL_SD_C_GATE_SEL(x)          (((uint32_t)(((uint32_t)(x))<<SIU_SDGATE_SEL_SD_C_GATE_SEL_SHIFT))&SIU_SDGATE_SEL_SD_C_GATE_SEL_MASK)
#define SIU_SDGATE_SEL_SD_D_GATE_SEL_MASK        0xF000u
#define SIU_SDGATE_SEL_SD_D_GATE_SEL_SHIFT       12u
#define SIU_SDGATE_SEL_SD_D_GATE_SEL_WIDTH       4u
#define SIU_SDGATE_SEL_SD_D_GATE_SEL(x)          (((uint32_t)(((uint32_t)(x))<<SIU_SDGATE_SEL_SD_D_GATE_SEL_SHIFT))&SIU_SDGATE_SEL_SD_D_GATE_SEL_MASK)
/* SDETPUA Bit Fields */
#define SIU_SDETPUA_CH30_MASK                    0x2u
#define SIU_SDETPUA_CH30_SHIFT                   1u
#define SIU_SDETPUA_CH30_WIDTH                   1u
#define SIU_SDETPUA_CH30(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH30_SHIFT))&SIU_SDETPUA_CH30_MASK)
#define SIU_SDETPUA_CH19_MASK                    0x1000u
#define SIU_SDETPUA_CH19_SHIFT                   12u
#define SIU_SDETPUA_CH19_WIDTH                   1u
#define SIU_SDETPUA_CH19(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH19_SHIFT))&SIU_SDETPUA_CH19_MASK)
#define SIU_SDETPUA_CH17_MASK                    0x4000u
#define SIU_SDETPUA_CH17_SHIFT                   14u
#define SIU_SDETPUA_CH17_WIDTH                   1u
#define SIU_SDETPUA_CH17(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH17_SHIFT))&SIU_SDETPUA_CH17_MASK)
#define SIU_SDETPUA_CH16_MASK                    0x8000u
#define SIU_SDETPUA_CH16_SHIFT                   15u
#define SIU_SDETPUA_CH16_WIDTH                   1u
#define SIU_SDETPUA_CH16(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH16_SHIFT))&SIU_SDETPUA_CH16_MASK)
#define SIU_SDETPUA_CH15_MASK                    0x10000u
#define SIU_SDETPUA_CH15_SHIFT                   16u
#define SIU_SDETPUA_CH15_WIDTH                   1u
#define SIU_SDETPUA_CH15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH15_SHIFT))&SIU_SDETPUA_CH15_MASK)
#define SIU_SDETPUA_CH14_MASK                    0x20000u
#define SIU_SDETPUA_CH14_SHIFT                   17u
#define SIU_SDETPUA_CH14_WIDTH                   1u
#define SIU_SDETPUA_CH14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH14_SHIFT))&SIU_SDETPUA_CH14_MASK)
#define SIU_SDETPUA_CH12_MASK                    0x80000u
#define SIU_SDETPUA_CH12_SHIFT                   19u
#define SIU_SDETPUA_CH12_WIDTH                   1u
#define SIU_SDETPUA_CH12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH12_SHIFT))&SIU_SDETPUA_CH12_MASK)
#define SIU_SDETPUA_CH11_MASK                    0x100000u
#define SIU_SDETPUA_CH11_SHIFT                   20u
#define SIU_SDETPUA_CH11_WIDTH                   1u
#define SIU_SDETPUA_CH11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH11_SHIFT))&SIU_SDETPUA_CH11_MASK)
#define SIU_SDETPUA_CH10_MASK                    0x200000u
#define SIU_SDETPUA_CH10_SHIFT                   21u
#define SIU_SDETPUA_CH10_WIDTH                   1u
#define SIU_SDETPUA_CH10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH10_SHIFT))&SIU_SDETPUA_CH10_MASK)
#define SIU_SDETPUA_CH9_MASK                     0x400000u
#define SIU_SDETPUA_CH9_SHIFT                    22u
#define SIU_SDETPUA_CH9_WIDTH                    1u
#define SIU_SDETPUA_CH9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH9_SHIFT))&SIU_SDETPUA_CH9_MASK)
#define SIU_SDETPUA_CH7_MASK                     0x1000000u
#define SIU_SDETPUA_CH7_SHIFT                    24u
#define SIU_SDETPUA_CH7_WIDTH                    1u
#define SIU_SDETPUA_CH7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH7_SHIFT))&SIU_SDETPUA_CH7_MASK)
#define SIU_SDETPUA_CH6_MASK                     0x2000000u
#define SIU_SDETPUA_CH6_SHIFT                    25u
#define SIU_SDETPUA_CH6_WIDTH                    1u
#define SIU_SDETPUA_CH6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH6_SHIFT))&SIU_SDETPUA_CH6_MASK)
#define SIU_SDETPUA_CH5_MASK                     0x4000000u
#define SIU_SDETPUA_CH5_SHIFT                    26u
#define SIU_SDETPUA_CH5_WIDTH                    1u
#define SIU_SDETPUA_CH5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH5_SHIFT))&SIU_SDETPUA_CH5_MASK)
#define SIU_SDETPUA_CH4_MASK                     0x8000000u
#define SIU_SDETPUA_CH4_SHIFT                    27u
#define SIU_SDETPUA_CH4_WIDTH                    1u
#define SIU_SDETPUA_CH4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH4_SHIFT))&SIU_SDETPUA_CH4_MASK)
#define SIU_SDETPUA_CH2_MASK                     0x20000000u
#define SIU_SDETPUA_CH2_SHIFT                    29u
#define SIU_SDETPUA_CH2_WIDTH                    1u
#define SIU_SDETPUA_CH2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH2_SHIFT))&SIU_SDETPUA_CH2_MASK)
#define SIU_SDETPUA_CH1_MASK                     0x40000000u
#define SIU_SDETPUA_CH1_SHIFT                    30u
#define SIU_SDETPUA_CH1_WIDTH                    1u
#define SIU_SDETPUA_CH1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUA_CH1_SHIFT))&SIU_SDETPUA_CH1_MASK)
/* SDETPUB Bit Fields */
#define SIU_SDETPUB_CH30_MASK                    0x2u
#define SIU_SDETPUB_CH30_SHIFT                   1u
#define SIU_SDETPUB_CH30_WIDTH                   1u
#define SIU_SDETPUB_CH30(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH30_SHIFT))&SIU_SDETPUB_CH30_MASK)
#define SIU_SDETPUB_CH19_MASK                    0x1000u
#define SIU_SDETPUB_CH19_SHIFT                   12u
#define SIU_SDETPUB_CH19_WIDTH                   1u
#define SIU_SDETPUB_CH19(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH19_SHIFT))&SIU_SDETPUB_CH19_MASK)
#define SIU_SDETPUB_CH17_MASK                    0x4000u
#define SIU_SDETPUB_CH17_SHIFT                   14u
#define SIU_SDETPUB_CH17_WIDTH                   1u
#define SIU_SDETPUB_CH17(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH17_SHIFT))&SIU_SDETPUB_CH17_MASK)
#define SIU_SDETPUB_CH16_MASK                    0x8000u
#define SIU_SDETPUB_CH16_SHIFT                   15u
#define SIU_SDETPUB_CH16_WIDTH                   1u
#define SIU_SDETPUB_CH16(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH16_SHIFT))&SIU_SDETPUB_CH16_MASK)
#define SIU_SDETPUB_CH15_MASK                    0x10000u
#define SIU_SDETPUB_CH15_SHIFT                   16u
#define SIU_SDETPUB_CH15_WIDTH                   1u
#define SIU_SDETPUB_CH15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH15_SHIFT))&SIU_SDETPUB_CH15_MASK)
#define SIU_SDETPUB_CH14_MASK                    0x20000u
#define SIU_SDETPUB_CH14_SHIFT                   17u
#define SIU_SDETPUB_CH14_WIDTH                   1u
#define SIU_SDETPUB_CH14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH14_SHIFT))&SIU_SDETPUB_CH14_MASK)
#define SIU_SDETPUB_CH12_MASK                    0x80000u
#define SIU_SDETPUB_CH12_SHIFT                   19u
#define SIU_SDETPUB_CH12_WIDTH                   1u
#define SIU_SDETPUB_CH12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH12_SHIFT))&SIU_SDETPUB_CH12_MASK)
#define SIU_SDETPUB_CH11_MASK                    0x100000u
#define SIU_SDETPUB_CH11_SHIFT                   20u
#define SIU_SDETPUB_CH11_WIDTH                   1u
#define SIU_SDETPUB_CH11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH11_SHIFT))&SIU_SDETPUB_CH11_MASK)
#define SIU_SDETPUB_CH10_MASK                    0x200000u
#define SIU_SDETPUB_CH10_SHIFT                   21u
#define SIU_SDETPUB_CH10_WIDTH                   1u
#define SIU_SDETPUB_CH10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH10_SHIFT))&SIU_SDETPUB_CH10_MASK)
#define SIU_SDETPUB_CH9_MASK                     0x400000u
#define SIU_SDETPUB_CH9_SHIFT                    22u
#define SIU_SDETPUB_CH9_WIDTH                    1u
#define SIU_SDETPUB_CH9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH9_SHIFT))&SIU_SDETPUB_CH9_MASK)
#define SIU_SDETPUB_CH7_MASK                     0x1000000u
#define SIU_SDETPUB_CH7_SHIFT                    24u
#define SIU_SDETPUB_CH7_WIDTH                    1u
#define SIU_SDETPUB_CH7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH7_SHIFT))&SIU_SDETPUB_CH7_MASK)
#define SIU_SDETPUB_CH6_MASK                     0x2000000u
#define SIU_SDETPUB_CH6_SHIFT                    25u
#define SIU_SDETPUB_CH6_WIDTH                    1u
#define SIU_SDETPUB_CH6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH6_SHIFT))&SIU_SDETPUB_CH6_MASK)
#define SIU_SDETPUB_CH5_MASK                     0x4000000u
#define SIU_SDETPUB_CH5_SHIFT                    26u
#define SIU_SDETPUB_CH5_WIDTH                    1u
#define SIU_SDETPUB_CH5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH5_SHIFT))&SIU_SDETPUB_CH5_MASK)
#define SIU_SDETPUB_CH4_MASK                     0x8000000u
#define SIU_SDETPUB_CH4_SHIFT                    27u
#define SIU_SDETPUB_CH4_WIDTH                    1u
#define SIU_SDETPUB_CH4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH4_SHIFT))&SIU_SDETPUB_CH4_MASK)
#define SIU_SDETPUB_CH2_MASK                     0x20000000u
#define SIU_SDETPUB_CH2_SHIFT                    29u
#define SIU_SDETPUB_CH2_WIDTH                    1u
#define SIU_SDETPUB_CH2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH2_SHIFT))&SIU_SDETPUB_CH2_MASK)
#define SIU_SDETPUB_CH1_MASK                     0x40000000u
#define SIU_SDETPUB_CH1_SHIFT                    30u
#define SIU_SDETPUB_CH1_WIDTH                    1u
#define SIU_SDETPUB_CH1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUB_CH1_SHIFT))&SIU_SDETPUB_CH1_MASK)
/* SDETPUC Bit Fields */
#define SIU_SDETPUC_CH30_MASK                    0x2u
#define SIU_SDETPUC_CH30_SHIFT                   1u
#define SIU_SDETPUC_CH30_WIDTH                   1u
#define SIU_SDETPUC_CH30(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH30_SHIFT))&SIU_SDETPUC_CH30_MASK)
#define SIU_SDETPUC_CH29_MASK                    0x4u
#define SIU_SDETPUC_CH29_SHIFT                   2u
#define SIU_SDETPUC_CH29_WIDTH                   1u
#define SIU_SDETPUC_CH29(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH29_SHIFT))&SIU_SDETPUC_CH29_MASK)
#define SIU_SDETPUC_CH28_MASK                    0x8u
#define SIU_SDETPUC_CH28_SHIFT                   3u
#define SIU_SDETPUC_CH28_WIDTH                   1u
#define SIU_SDETPUC_CH28(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH28_SHIFT))&SIU_SDETPUC_CH28_MASK)
#define SIU_SDETPUC_CH27_MASK                    0x10u
#define SIU_SDETPUC_CH27_SHIFT                   4u
#define SIU_SDETPUC_CH27_WIDTH                   1u
#define SIU_SDETPUC_CH27(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH27_SHIFT))&SIU_SDETPUC_CH27_MASK)
#define SIU_SDETPUC_CH25_MASK                    0x40u
#define SIU_SDETPUC_CH25_SHIFT                   6u
#define SIU_SDETPUC_CH25_WIDTH                   1u
#define SIU_SDETPUC_CH25(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH25_SHIFT))&SIU_SDETPUC_CH25_MASK)
#define SIU_SDETPUC_CH14_MASK                    0x20000u
#define SIU_SDETPUC_CH14_SHIFT                   17u
#define SIU_SDETPUC_CH14_WIDTH                   1u
#define SIU_SDETPUC_CH14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH14_SHIFT))&SIU_SDETPUC_CH14_MASK)
#define SIU_SDETPUC_CH13_MASK                    0x40000u
#define SIU_SDETPUC_CH13_SHIFT                   18u
#define SIU_SDETPUC_CH13_WIDTH                   1u
#define SIU_SDETPUC_CH13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH13_SHIFT))&SIU_SDETPUC_CH13_MASK)
#define SIU_SDETPUC_CH12_MASK                    0x80000u
#define SIU_SDETPUC_CH12_SHIFT                   19u
#define SIU_SDETPUC_CH12_WIDTH                   1u
#define SIU_SDETPUC_CH12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH12_SHIFT))&SIU_SDETPUC_CH12_MASK)
#define SIU_SDETPUC_CH10_MASK                    0x200000u
#define SIU_SDETPUC_CH10_SHIFT                   21u
#define SIU_SDETPUC_CH10_WIDTH                   1u
#define SIU_SDETPUC_CH10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH10_SHIFT))&SIU_SDETPUC_CH10_MASK)
#define SIU_SDETPUC_CH9_MASK                     0x400000u
#define SIU_SDETPUC_CH9_SHIFT                    22u
#define SIU_SDETPUC_CH9_WIDTH                    1u
#define SIU_SDETPUC_CH9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH9_SHIFT))&SIU_SDETPUC_CH9_MASK)
#define SIU_SDETPUC_CH8_MASK                     0x800000u
#define SIU_SDETPUC_CH8_SHIFT                    23u
#define SIU_SDETPUC_CH8_WIDTH                    1u
#define SIU_SDETPUC_CH8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH8_SHIFT))&SIU_SDETPUC_CH8_MASK)
#define SIU_SDETPUC_CH7_MASK                     0x1000000u
#define SIU_SDETPUC_CH7_SHIFT                    24u
#define SIU_SDETPUC_CH7_WIDTH                    1u
#define SIU_SDETPUC_CH7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH7_SHIFT))&SIU_SDETPUC_CH7_MASK)
#define SIU_SDETPUC_CH5_MASK                     0x4000000u
#define SIU_SDETPUC_CH5_SHIFT                    26u
#define SIU_SDETPUC_CH5_WIDTH                    1u
#define SIU_SDETPUC_CH5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH5_SHIFT))&SIU_SDETPUC_CH5_MASK)
#define SIU_SDETPUC_CH4_MASK                     0x8000000u
#define SIU_SDETPUC_CH4_SHIFT                    27u
#define SIU_SDETPUC_CH4_WIDTH                    1u
#define SIU_SDETPUC_CH4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH4_SHIFT))&SIU_SDETPUC_CH4_MASK)
#define SIU_SDETPUC_CH3_MASK                     0x10000000u
#define SIU_SDETPUC_CH3_SHIFT                    28u
#define SIU_SDETPUC_CH3_WIDTH                    1u
#define SIU_SDETPUC_CH3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH3_SHIFT))&SIU_SDETPUC_CH3_MASK)
#define SIU_SDETPUC_CH2_MASK                     0x20000000u
#define SIU_SDETPUC_CH2_SHIFT                    29u
#define SIU_SDETPUC_CH2_WIDTH                    1u
#define SIU_SDETPUC_CH2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_SDETPUC_CH2_SHIFT))&SIU_SDETPUC_CH2_MASK)
/* TBG_CR_A Bit Fields */
#define SIU_TBG_CR_A_TRIGPER_MASK                0xFFFFFFu
#define SIU_TBG_CR_A_TRIGPER_SHIFT               0u
#define SIU_TBG_CR_A_TRIGPER_WIDTH               24u
#define SIU_TBG_CR_A_TRIGPER(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_TBG_CR_A_TRIGPER_SHIFT))&SIU_TBG_CR_A_TRIGPER_MASK)
#define SIU_TBG_CR_A_CLKSEL_MASK                 0xC000000u
#define SIU_TBG_CR_A_CLKSEL_SHIFT                26u
#define SIU_TBG_CR_A_CLKSEL_WIDTH                2u
#define SIU_TBG_CR_A_CLKSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_TBG_CR_A_CLKSEL_SHIFT))&SIU_TBG_CR_A_CLKSEL_MASK)
#define SIU_TBG_CR_A_GEN_MASK                    0x80000000u
#define SIU_TBG_CR_A_GEN_SHIFT                   31u
#define SIU_TBG_CR_A_GEN_WIDTH                   1u
#define SIU_TBG_CR_A_GEN(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_TBG_CR_A_GEN_SHIFT))&SIU_TBG_CR_A_GEN_MASK)
/* TBG_CR_B Bit Fields */
#define SIU_TBG_CR_B_TRIGPER_MASK                0xFFFFFFu
#define SIU_TBG_CR_B_TRIGPER_SHIFT               0u
#define SIU_TBG_CR_B_TRIGPER_WIDTH               24u
#define SIU_TBG_CR_B_TRIGPER(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_TBG_CR_B_TRIGPER_SHIFT))&SIU_TBG_CR_B_TRIGPER_MASK)
#define SIU_TBG_CR_B_CLKSEL_MASK                 0xC000000u
#define SIU_TBG_CR_B_CLKSEL_SHIFT                26u
#define SIU_TBG_CR_B_CLKSEL_WIDTH                2u
#define SIU_TBG_CR_B_CLKSEL(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_TBG_CR_B_CLKSEL_SHIFT))&SIU_TBG_CR_B_CLKSEL_MASK)
#define SIU_TBG_CR_B_GEN_MASK                    0x80000000u
#define SIU_TBG_CR_B_GEN_SHIFT                   31u
#define SIU_TBG_CR_B_GEN_WIDTH                   1u
#define SIU_TBG_CR_B_GEN(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_TBG_CR_B_GEN_SHIFT))&SIU_TBG_CR_B_GEN_MASK)
/* ECCR Bit Fields */
#define SIU_ECCR_EBDF_MASK                       0x3u
#define SIU_ECCR_EBDF_SHIFT                      0u
#define SIU_ECCR_EBDF_WIDTH                      2u
#define SIU_ECCR_EBDF(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ECCR_EBDF_SHIFT))&SIU_ECCR_EBDF_MASK)
#define SIU_ECCR_EBTS_MASK                       0x8u
#define SIU_ECCR_EBTS_SHIFT                      3u
#define SIU_ECCR_EBTS_WIDTH                      1u
#define SIU_ECCR_EBTS(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ECCR_EBTS_SHIFT))&SIU_ECCR_EBTS_MASK)
#define SIU_ECCR_ECCS_MASK                       0x80u
#define SIU_ECCR_ECCS_SHIFT                      7u
#define SIU_ECCR_ECCS_WIDTH                      1u
#define SIU_ECCR_ECCS(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_ECCR_ECCS_SHIFT))&SIU_ECCR_ECCS_MASK)
#define SIU_ECCR_ENGDIV_MASK                     0xFF00u
#define SIU_ECCR_ENGDIV_SHIFT                    8u
#define SIU_ECCR_ENGDIV_WIDTH                    8u
#define SIU_ECCR_ENGDIV(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_ECCR_ENGDIV_SHIFT))&SIU_ECCR_ENGDIV_MASK)
/* SYSDIV Bit Fields */
#define SIU_SYSDIV_PCSEN_MASK                    0x1u
#define SIU_SYSDIV_PCSEN_SHIFT                   0u
#define SIU_SYSDIV_PCSEN_WIDTH                   1u
#define SIU_SYSDIV_PCSEN(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_PCSEN_SHIFT))&SIU_SYSDIV_PCSEN_MASK)
#define SIU_SYSDIV_SYSCLKDIV_MASK                0x1Cu
#define SIU_SYSDIV_SYSCLKDIV_SHIFT               2u
#define SIU_SYSDIV_SYSCLKDIV_WIDTH               3u
#define SIU_SYSDIV_SYSCLKDIV(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_SYSCLKDIV_SHIFT))&SIU_SYSDIV_SYSCLKDIV_MASK)
#define SIU_SYSDIV_ETPUDIV_MASK                  0x100u
#define SIU_SYSDIV_ETPUDIV_SHIFT                 8u
#define SIU_SYSDIV_ETPUDIV_WIDTH                 1u
#define SIU_SYSDIV_ETPUDIV(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_ETPUDIV_SHIFT))&SIU_SYSDIV_ETPUDIV_MASK)
#define SIU_SYSDIV_SYSCLKSEL_MASK                0x3000u
#define SIU_SYSDIV_SYSCLKSEL_SHIFT               12u
#define SIU_SYSDIV_SYSCLKSEL_WIDTH               2u
#define SIU_SYSDIV_SYSCLKSEL(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_SYSCLKSEL_SHIFT))&SIU_SYSDIV_SYSCLKSEL_MASK)
#define SIU_SYSDIV_MCANSEL_MASK                  0x8000u
#define SIU_SYSDIV_MCANSEL_SHIFT                 15u
#define SIU_SYSDIV_MCANSEL_WIDTH                 1u
#define SIU_SYSDIV_MCANSEL(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_MCANSEL_SHIFT))&SIU_SYSDIV_MCANSEL_MASK)
#define SIU_SYSDIV_PERDIV_MASK                   0x30000u
#define SIU_SYSDIV_PERDIV_SHIFT                  16u
#define SIU_SYSDIV_PERDIV_WIDTH                  2u
#define SIU_SYSDIV_PERDIV(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_PERDIV_SHIFT))&SIU_SYSDIV_PERDIV_MASK)
#define SIU_SYSDIV_FMPERDIV_MASK                 0x300000u
#define SIU_SYSDIV_FMPERDIV_SHIFT                20u
#define SIU_SYSDIV_FMPERDIV_WIDTH                2u
#define SIU_SYSDIV_FMPERDIV(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_FMPERDIV_SHIFT))&SIU_SYSDIV_FMPERDIV_MASK)
#define SIU_SYSDIV_PERCLKSEL_MASK                0x1000000u
#define SIU_SYSDIV_PERCLKSEL_SHIFT               24u
#define SIU_SYSDIV_PERCLKSEL_WIDTH               1u
#define SIU_SYSDIV_PERCLKSEL(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_PERCLKSEL_SHIFT))&SIU_SYSDIV_PERCLKSEL_MASK)
#define SIU_SYSDIV_PLL1SEL_MASK                  0x4000000u
#define SIU_SYSDIV_PLL1SEL_SHIFT                 26u
#define SIU_SYSDIV_PLL1SEL_WIDTH                 1u
#define SIU_SYSDIV_PLL1SEL(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_PLL1SEL_SHIFT))&SIU_SYSDIV_PLL1SEL_MASK)
#define SIU_SYSDIV_PLL0SEL_MASK                  0x10000000u
#define SIU_SYSDIV_PLL0SEL_SHIFT                 28u
#define SIU_SYSDIV_PLL0SEL_WIDTH                 1u
#define SIU_SYSDIV_PLL0SEL(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_PLL0SEL_SHIFT))&SIU_SYSDIV_PLL0SEL_MASK)
#define SIU_SYSDIV_LCK_MASK                      0x80000000u
#define SIU_SYSDIV_LCK_SHIFT                     31u
#define SIU_SYSDIV_LCK_WIDTH                     1u
#define SIU_SYSDIV_LCK(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_LCK_SHIFT))&SIU_SYSDIV_LCK_MASK)
#define SIU_SYSDIV_BYPASS_MASK                   0x8000000u
#define SIU_SYSDIV_BYPASS_SHIFT                  27u
#define SIU_SYSDIV_BYPASS_WIDTH                  1u
#define SIU_SYSDIV_BYPASS(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_SYSDIV_BYPASS_SHIFT))&SIU_SYSDIV_BYPASS_MASK)                   
/* HLT1 Bit Fields */
#define SIU_HLT1_ESCIA_MASK                      0x1u
#define SIU_HLT1_ESCIA_SHIFT                     0u
#define SIU_HLT1_ESCIA_WIDTH                     1u
#define SIU_HLT1_ESCIA(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ESCIA_SHIFT))&SIU_HLT1_ESCIA_MASK)
#define SIU_HLT1_ESCIB_MASK                      0x2u
#define SIU_HLT1_ESCIB_SHIFT                     1u
#define SIU_HLT1_ESCIB_WIDTH                     1u
#define SIU_HLT1_ESCIB(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ESCIB_SHIFT))&SIU_HLT1_ESCIB_MASK)
#define SIU_HLT1_ESCIC_MASK                      0x4u
#define SIU_HLT1_ESCIC_SHIFT                     2u
#define SIU_HLT1_ESCIC_WIDTH                     1u
#define SIU_HLT1_ESCIC(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ESCIC_SHIFT))&SIU_HLT1_ESCIC_MASK)
#define SIU_HLT1_ESCID_MASK                      0x8u
#define SIU_HLT1_ESCID_SHIFT                     3u
#define SIU_HLT1_ESCID_WIDTH                     1u
#define SIU_HLT1_ESCID(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ESCID_SHIFT))&SIU_HLT1_ESCID_MASK)
#define SIU_HLT1_ESCIE_MASK                      0x10u
#define SIU_HLT1_ESCIE_SHIFT                     4u
#define SIU_HLT1_ESCIE_WIDTH                     1u
#define SIU_HLT1_ESCIE(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ESCIE_SHIFT))&SIU_HLT1_ESCIE_MASK)
#define SIU_HLT1_ESCIF_MASK                      0x20u
#define SIU_HLT1_ESCIF_SHIFT                     5u
#define SIU_HLT1_ESCIF_WIDTH                     1u
#define SIU_HLT1_ESCIF(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ESCIF_SHIFT))&SIU_HLT1_ESCIF_MASK)
#define SIU_HLT1_DSPIE_MASK                      0x80u
#define SIU_HLT1_DSPIE_SHIFT                     7u
#define SIU_HLT1_DSPIE_WIDTH                     1u
#define SIU_HLT1_DSPIE(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_DSPIE_SHIFT))&SIU_HLT1_DSPIE_MASK)
#define SIU_HLT1_DSPIA_MASK                      0x100u
#define SIU_HLT1_DSPIA_SHIFT                     8u
#define SIU_HLT1_DSPIA_WIDTH                     1u
#define SIU_HLT1_DSPIA(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_DSPIA_SHIFT))&SIU_HLT1_DSPIA_MASK)
#define SIU_HLT1_DSPIB_MASK                      0x200u
#define SIU_HLT1_DSPIB_SHIFT                     9u
#define SIU_HLT1_DSPIB_WIDTH                     1u
#define SIU_HLT1_DSPIB(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_DSPIB_SHIFT))&SIU_HLT1_DSPIB_MASK)
#define SIU_HLT1_DSPIC_MASK                      0x400u
#define SIU_HLT1_DSPIC_SHIFT                     10u
#define SIU_HLT1_DSPIC_WIDTH                     1u
#define SIU_HLT1_DSPIC(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_DSPIC_SHIFT))&SIU_HLT1_DSPIC_MASK)
#define SIU_HLT1_DSPID_MASK                      0x800u
#define SIU_HLT1_DSPID_SHIFT                     11u
#define SIU_HLT1_DSPID_WIDTH                     1u
#define SIU_HLT1_DSPID(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_DSPID_SHIFT))&SIU_HLT1_DSPID_MASK)
#define SIU_HLT1_FLEXCANA_MASK                   0x1000u
#define SIU_HLT1_FLEXCANA_SHIFT                  12u
#define SIU_HLT1_FLEXCANA_WIDTH                  1u
#define SIU_HLT1_FLEXCANA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_FLEXCANA_SHIFT))&SIU_HLT1_FLEXCANA_MASK)
#define SIU_HLT1_FLEXCANB_MASK                   0x2000u
#define SIU_HLT1_FLEXCANB_SHIFT                  13u
#define SIU_HLT1_FLEXCANB_WIDTH                  1u
#define SIU_HLT1_FLEXCANB(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_FLEXCANB_SHIFT))&SIU_HLT1_FLEXCANB_MASK)
#define SIU_HLT1_FLEXCANC_MASK                   0x4000u
#define SIU_HLT1_FLEXCANC_SHIFT                  14u
#define SIU_HLT1_FLEXCANC_WIDTH                  1u
#define SIU_HLT1_FLEXCANC(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_FLEXCANC_SHIFT))&SIU_HLT1_FLEXCANC_MASK)
#define SIU_HLT1_FLEXCAND_MASK                   0x8000u
#define SIU_HLT1_FLEXCAND_SHIFT                  15u
#define SIU_HLT1_FLEXCAND_WIDTH                  1u
#define SIU_HLT1_FLEXCAND(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_FLEXCAND_SHIFT))&SIU_HLT1_FLEXCAND_MASK)
#define SIU_HLT1_PIT_MASK                        0x40000u
#define SIU_HLT1_PIT_SHIFT                       18u
#define SIU_HLT1_PIT_WIDTH                       1u
#define SIU_HLT1_PIT(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_PIT_SHIFT))&SIU_HLT1_PIT_MASK)
#define SIU_HLT1_EMIOS1_MASK                     0x80000u
#define SIU_HLT1_EMIOS1_SHIFT                    19u
#define SIU_HLT1_EMIOS1_WIDTH                    1u
#define SIU_HLT1_EMIOS1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_EMIOS1_SHIFT))&SIU_HLT1_EMIOS1_MASK)
#define SIU_HLT1_DECFIL_MASK                     0x100000u
#define SIU_HLT1_DECFIL_SHIFT                    20u
#define SIU_HLT1_DECFIL_WIDTH                    1u
#define SIU_HLT1_DECFIL(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_DECFIL_SHIFT))&SIU_HLT1_DECFIL_MASK)
#define SIU_HLT1_EMIOS0_MASK                     0x200000u
#define SIU_HLT1_EMIOS0_SHIFT                    21u
#define SIU_HLT1_EMIOS0_WIDTH                    1u
#define SIU_HLT1_EMIOS0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_EMIOS0_SHIFT))&SIU_HLT1_EMIOS0_MASK)
#define SIU_HLT1_EQADCA_MASK                     0x400000u
#define SIU_HLT1_EQADCA_SHIFT                    22u
#define SIU_HLT1_EQADCA_WIDTH                    1u
#define SIU_HLT1_EQADCA(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_EQADCA_SHIFT))&SIU_HLT1_EQADCA_MASK)
#define SIU_HLT1_EQADCB_MASK                     0x800000u
#define SIU_HLT1_EQADCB_SHIFT                    23u
#define SIU_HLT1_EQADCB_WIDTH                    1u
#define SIU_HLT1_EQADCB(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_EQADCB_SHIFT))&SIU_HLT1_EQADCB_MASK)
#define SIU_HLT1_EBI_MASK                        0x1000000u
#define SIU_HLT1_EBI_SHIFT                       24u
#define SIU_HLT1_EBI_WIDTH                       1u
#define SIU_HLT1_EBI(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_EBI_SHIFT))&SIU_HLT1_EBI_MASK)
#define SIU_HLT1_NPC_MASK                        0x2000000u
#define SIU_HLT1_NPC_SHIFT                       25u
#define SIU_HLT1_NPC_WIDTH                       1u
#define SIU_HLT1_NPC(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_NPC_SHIFT))&SIU_HLT1_NPC_MASK)
#define SIU_HLT1_ETPUA_MASK                      0x4000000u
#define SIU_HLT1_ETPUA_SHIFT                     26u
#define SIU_HLT1_ETPUA_WIDTH                     1u
#define SIU_HLT1_ETPUA(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ETPUA_SHIFT))&SIU_HLT1_ETPUA_MASK)
#define SIU_HLT1_ETPUC_MASK                      0x8000000u
#define SIU_HLT1_ETPUC_SHIFT                     27u
#define SIU_HLT1_ETPUC_WIDTH                     1u
#define SIU_HLT1_ETPUC(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_ETPUC_SHIFT))&SIU_HLT1_ETPUC_MASK)
#define SIU_HLT1_CSE_MASK                        0x10000000u
#define SIU_HLT1_CSE_SHIFT                       28u
#define SIU_HLT1_CSE_WIDTH                       1u
#define SIU_HLT1_CSE(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_CSE_SHIFT))&SIU_HLT1_CSE_MASK)
#define SIU_HLT1_CORE1_MASK                      0x40000000u
#define SIU_HLT1_CORE1_SHIFT                     30u
#define SIU_HLT1_CORE1_WIDTH                     1u
#define SIU_HLT1_CORE1(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_CORE1_SHIFT))&SIU_HLT1_CORE1_MASK)
#define SIU_HLT1_CORE0_MASK                      0x80000000u
#define SIU_HLT1_CORE0_SHIFT                     31u
#define SIU_HLT1_CORE0_WIDTH                     1u
#define SIU_HLT1_CORE0(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT1_CORE0_SHIFT))&SIU_HLT1_CORE0_MASK)
/* HLTACK1 Bit Fields */
#define SIU_HLTACK1_ESCIA_MASK                   0x1u
#define SIU_HLTACK1_ESCIA_SHIFT                  0u
#define SIU_HLTACK1_ESCIA_WIDTH                  1u
#define SIU_HLTACK1_ESCIA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ESCIA_SHIFT))&SIU_HLTACK1_ESCIA_MASK)
#define SIU_HLTACK1_ESCIB_MASK                   0x2u
#define SIU_HLTACK1_ESCIB_SHIFT                  1u
#define SIU_HLTACK1_ESCIB_WIDTH                  1u
#define SIU_HLTACK1_ESCIB(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ESCIB_SHIFT))&SIU_HLTACK1_ESCIB_MASK)
#define SIU_HLTACK1_ESCIC_MASK                   0x4u
#define SIU_HLTACK1_ESCIC_SHIFT                  2u
#define SIU_HLTACK1_ESCIC_WIDTH                  1u
#define SIU_HLTACK1_ESCIC(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ESCIC_SHIFT))&SIU_HLTACK1_ESCIC_MASK)
#define SIU_HLTACK1_ESCID_MASK                   0x8u
#define SIU_HLTACK1_ESCID_SHIFT                  3u
#define SIU_HLTACK1_ESCID_WIDTH                  1u
#define SIU_HLTACK1_ESCID(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ESCID_SHIFT))&SIU_HLTACK1_ESCID_MASK)
#define SIU_HLTACK1_ESCIE_MASK                   0x10u
#define SIU_HLTACK1_ESCIE_SHIFT                  4u
#define SIU_HLTACK1_ESCIE_WIDTH                  1u
#define SIU_HLTACK1_ESCIE(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ESCIE_SHIFT))&SIU_HLTACK1_ESCIE_MASK)
#define SIU_HLTACK1_ESCIF_MASK                   0x20u
#define SIU_HLTACK1_ESCIF_SHIFT                  5u
#define SIU_HLTACK1_ESCIF_WIDTH                  1u
#define SIU_HLTACK1_ESCIF(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ESCIF_SHIFT))&SIU_HLTACK1_ESCIF_MASK)
#define SIU_HLTACK1_DSPIE_MASK                   0x80u
#define SIU_HLTACK1_DSPIE_SHIFT                  7u
#define SIU_HLTACK1_DSPIE_WIDTH                  1u
#define SIU_HLTACK1_DSPIE(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_DSPIE_SHIFT))&SIU_HLTACK1_DSPIE_MASK)
#define SIU_HLTACK1_DSPIA_MASK                   0x100u
#define SIU_HLTACK1_DSPIA_SHIFT                  8u
#define SIU_HLTACK1_DSPIA_WIDTH                  1u
#define SIU_HLTACK1_DSPIA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_DSPIA_SHIFT))&SIU_HLTACK1_DSPIA_MASK)
#define SIU_HLTACK1_DSPIB_MASK                   0x200u
#define SIU_HLTACK1_DSPIB_SHIFT                  9u
#define SIU_HLTACK1_DSPIB_WIDTH                  1u
#define SIU_HLTACK1_DSPIB(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_DSPIB_SHIFT))&SIU_HLTACK1_DSPIB_MASK)
#define SIU_HLTACK1_DSPIC_MASK                   0x400u
#define SIU_HLTACK1_DSPIC_SHIFT                  10u
#define SIU_HLTACK1_DSPIC_WIDTH                  1u
#define SIU_HLTACK1_DSPIC(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_DSPIC_SHIFT))&SIU_HLTACK1_DSPIC_MASK)
#define SIU_HLTACK1_DSPID_MASK                   0x800u
#define SIU_HLTACK1_DSPID_SHIFT                  11u
#define SIU_HLTACK1_DSPID_WIDTH                  1u
#define SIU_HLTACK1_DSPID(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_DSPID_SHIFT))&SIU_HLTACK1_DSPID_MASK)
#define SIU_HLTACK1_FLEXCANA_MASK                0x1000u
#define SIU_HLTACK1_FLEXCANA_SHIFT               12u
#define SIU_HLTACK1_FLEXCANA_WIDTH               1u
#define SIU_HLTACK1_FLEXCANA(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_FLEXCANA_SHIFT))&SIU_HLTACK1_FLEXCANA_MASK)
#define SIU_HLTACK1_FLEXCANB_MASK                0x2000u
#define SIU_HLTACK1_FLEXCANB_SHIFT               13u
#define SIU_HLTACK1_FLEXCANB_WIDTH               1u
#define SIU_HLTACK1_FLEXCANB(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_FLEXCANB_SHIFT))&SIU_HLTACK1_FLEXCANB_MASK)
#define SIU_HLTACK1_FLEXCANC_MASK                0x4000u
#define SIU_HLTACK1_FLEXCANC_SHIFT               14u
#define SIU_HLTACK1_FLEXCANC_WIDTH               1u
#define SIU_HLTACK1_FLEXCANC(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_FLEXCANC_SHIFT))&SIU_HLTACK1_FLEXCANC_MASK)
#define SIU_HLTACK1_FLEXCAND_MASK                0x8000u
#define SIU_HLTACK1_FLEXCAND_SHIFT               15u
#define SIU_HLTACK1_FLEXCAND_WIDTH               1u
#define SIU_HLTACK1_FLEXCAND(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_FLEXCAND_SHIFT))&SIU_HLTACK1_FLEXCAND_MASK)
#define SIU_HLTACK1_PIT_MASK                     0x40000u
#define SIU_HLTACK1_PIT_SHIFT                    18u
#define SIU_HLTACK1_PIT_WIDTH                    1u
#define SIU_HLTACK1_PIT(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_PIT_SHIFT))&SIU_HLTACK1_PIT_MASK)
#define SIU_HLTACK1_EMIOS1_MASK                  0x80000u
#define SIU_HLTACK1_EMIOS1_SHIFT                 19u
#define SIU_HLTACK1_EMIOS1_WIDTH                 1u
#define SIU_HLTACK1_EMIOS1(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_EMIOS1_SHIFT))&SIU_HLTACK1_EMIOS1_MASK)
#define SIU_HLTACK1_DECFIL_MASK                  0x100000u
#define SIU_HLTACK1_DECFIL_SHIFT                 20u
#define SIU_HLTACK1_DECFIL_WIDTH                 1u
#define SIU_HLTACK1_DECFIL(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_DECFIL_SHIFT))&SIU_HLTACK1_DECFIL_MASK)
#define SIU_HLTACK1_EMIOS0_MASK                  0x200000u
#define SIU_HLTACK1_EMIOS0_SHIFT                 21u
#define SIU_HLTACK1_EMIOS0_WIDTH                 1u
#define SIU_HLTACK1_EMIOS0(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_EMIOS0_SHIFT))&SIU_HLTACK1_EMIOS0_MASK)
#define SIU_HLTACK1_EQADCA_MASK                  0x400000u
#define SIU_HLTACK1_EQADCA_SHIFT                 22u
#define SIU_HLTACK1_EQADCA_WIDTH                 1u
#define SIU_HLTACK1_EQADCA(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_EQADCA_SHIFT))&SIU_HLTACK1_EQADCA_MASK)
#define SIU_HLTACK1_EQADCB_MASK                  0x800000u
#define SIU_HLTACK1_EQADCB_SHIFT                 23u
#define SIU_HLTACK1_EQADCB_WIDTH                 1u
#define SIU_HLTACK1_EQADCB(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_EQADCB_SHIFT))&SIU_HLTACK1_EQADCB_MASK)
#define SIU_HLTACK1_EBI_MASK                     0x1000000u
#define SIU_HLTACK1_EBI_SHIFT                    24u
#define SIU_HLTACK1_EBI_WIDTH                    1u
#define SIU_HLTACK1_EBI(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_EBI_SHIFT))&SIU_HLTACK1_EBI_MASK)
#define SIU_HLTACK1_NPC_MASK                     0x2000000u
#define SIU_HLTACK1_NPC_SHIFT                    25u
#define SIU_HLTACK1_NPC_WIDTH                    1u
#define SIU_HLTACK1_NPC(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_NPC_SHIFT))&SIU_HLTACK1_NPC_MASK)
#define SIU_HLTACK1_ETPUA_MASK                   0x4000000u
#define SIU_HLTACK1_ETPUA_SHIFT                  26u
#define SIU_HLTACK1_ETPUA_WIDTH                  1u
#define SIU_HLTACK1_ETPUA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ETPUA_SHIFT))&SIU_HLTACK1_ETPUA_MASK)
#define SIU_HLTACK1_ETPUC_MASK                   0x8000000u
#define SIU_HLTACK1_ETPUC_SHIFT                  27u
#define SIU_HLTACK1_ETPUC_WIDTH                  1u
#define SIU_HLTACK1_ETPUC(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_ETPUC_SHIFT))&SIU_HLTACK1_ETPUC_MASK)
#define SIU_HLTACK1_CSE_MASK                     0x10000000u
#define SIU_HLTACK1_CSE_SHIFT                    28u
#define SIU_HLTACK1_CSE_WIDTH                    1u
#define SIU_HLTACK1_CSE(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_CSE_SHIFT))&SIU_HLTACK1_CSE_MASK)
#define SIU_HLTACK1_CORE1_MASK                   0x40000000u
#define SIU_HLTACK1_CORE1_SHIFT                  30u
#define SIU_HLTACK1_CORE1_WIDTH                  1u
#define SIU_HLTACK1_CORE1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_CORE1_SHIFT))&SIU_HLTACK1_CORE1_MASK)
#define SIU_HLTACK1_CORE0_MASK                   0x80000000u
#define SIU_HLTACK1_CORE0_SHIFT                  31u
#define SIU_HLTACK1_CORE0_WIDTH                  1u
#define SIU_HLTACK1_CORE0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK1_CORE0_SHIFT))&SIU_HLTACK1_CORE0_MASK)
/* RSTVEC0 Bit Fields */
#define SIU_RSTVEC0_VLE_MASK                     0x1u
#define SIU_RSTVEC0_VLE_SHIFT                    0u
#define SIU_RSTVEC0_VLE_WIDTH                    1u
#define SIU_RSTVEC0_VLE(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_RSTVEC0_VLE_SHIFT))&SIU_RSTVEC0_VLE_MASK)
#define SIU_RSTVEC0_RST_MASK                     0x2u
#define SIU_RSTVEC0_RST_SHIFT                    1u
#define SIU_RSTVEC0_RST_WIDTH                    1u
#define SIU_RSTVEC0_RST(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_RSTVEC0_RST_SHIFT))&SIU_RSTVEC0_RST_MASK)
#define SIU_RSTVEC0_RSTVEC_MASK                  0xFFFFFFFCu
#define SIU_RSTVEC0_RSTVEC_SHIFT                 2u
#define SIU_RSTVEC0_RSTVEC_WIDTH                 30u
#define SIU_RSTVEC0_RSTVEC(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_RSTVEC0_RSTVEC_SHIFT))&SIU_RSTVEC0_RSTVEC_MASK)
/* RSTVEC1 Bit Fields */
#define SIU_RSTVEC1_VLE_MASK                     0x1u
#define SIU_RSTVEC1_VLE_SHIFT                    0u
#define SIU_RSTVEC1_VLE_WIDTH                    1u
#define SIU_RSTVEC1_VLE(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_RSTVEC1_VLE_SHIFT))&SIU_RSTVEC1_VLE_MASK)
#define SIU_RSTVEC1_RST_MASK                     0x2u
#define SIU_RSTVEC1_RST_SHIFT                    1u
#define SIU_RSTVEC1_RST_WIDTH                    1u
#define SIU_RSTVEC1_RST(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_RSTVEC1_RST_SHIFT))&SIU_RSTVEC1_RST_MASK)
#define SIU_RSTVEC1_RSTVEC_MASK                  0xFFFFFFFCu
#define SIU_RSTVEC1_RSTVEC_SHIFT                 2u
#define SIU_RSTVEC1_RSTVEC_WIDTH                 30u
#define SIU_RSTVEC1_RSTVEC(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_RSTVEC1_RSTVEC_SHIFT))&SIU_RSTVEC1_RSTVEC_MASK)
/* C0PID Bit Fields */
#define SIU_C0PID_EXT_PID_MASK                   0x3u
#define SIU_C0PID_EXT_PID_SHIFT                  0u
#define SIU_C0PID_EXT_PID_WIDTH                  2u
#define SIU_C0PID_EXT_PID(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_C0PID_EXT_PID_SHIFT))&SIU_C0PID_EXT_PID_MASK)
#define SIU_C0PID_EXT_PID_SYNC_MASK              0x40000000u
#define SIU_C0PID_EXT_PID_SYNC_SHIFT             30u
#define SIU_C0PID_EXT_PID_SYNC_WIDTH             1u
#define SIU_C0PID_EXT_PID_SYNC(x)                (((uint32_t)(((uint32_t)(x))<<SIU_C0PID_EXT_PID_SYNC_SHIFT))&SIU_C0PID_EXT_PID_SYNC_MASK)
#define SIU_C0PID_EXT_PID_EN_MASK                0x80000000u
#define SIU_C0PID_EXT_PID_EN_SHIFT               31u
#define SIU_C0PID_EXT_PID_EN_WIDTH               1u
#define SIU_C0PID_EXT_PID_EN(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_C0PID_EXT_PID_EN_SHIFT))&SIU_C0PID_EXT_PID_EN_MASK)
/* C1PID Bit Fields */
#define SIU_C1PID_EXT_PID_MASK                   0x3u
#define SIU_C1PID_EXT_PID_SHIFT                  0u
#define SIU_C1PID_EXT_PID_WIDTH                  2u
#define SIU_C1PID_EXT_PID(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_C1PID_EXT_PID_SHIFT))&SIU_C1PID_EXT_PID_MASK)
#define SIU_C1PID_EXT_PID_SYNC_MASK              0x40000000u
#define SIU_C1PID_EXT_PID_SYNC_SHIFT             30u
#define SIU_C1PID_EXT_PID_SYNC_WIDTH             1u
#define SIU_C1PID_EXT_PID_SYNC(x)                (((uint32_t)(((uint32_t)(x))<<SIU_C1PID_EXT_PID_SYNC_SHIFT))&SIU_C1PID_EXT_PID_SYNC_MASK)
#define SIU_C1PID_EXT_PID_EN_MASK                0x80000000u
#define SIU_C1PID_EXT_PID_EN_SHIFT               31u
#define SIU_C1PID_EXT_PID_EN_WIDTH               1u
#define SIU_C1PID_EXT_PID_EN(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_C1PID_EXT_PID_EN_SHIFT))&SIU_C1PID_EXT_PID_EN_MASK)
/* HLT2 Bit Fields */
#define SIU_HLT2_MCANA_MASK                      0x1u
#define SIU_HLT2_MCANA_SHIFT                     0u
#define SIU_HLT2_MCANA_WIDTH                     1u
#define SIU_HLT2_MCANA(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_MCANA_SHIFT))&SIU_HLT2_MCANA_MASK)
#define SIU_HLT2_MCANB_MASK                      0x2u
#define SIU_HLT2_MCANB_SHIFT                     1u
#define SIU_HLT2_MCANB_WIDTH                     1u
#define SIU_HLT2_MCANB(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_MCANB_SHIFT))&SIU_HLT2_MCANB_MASK)
#define SIU_HLT2_PSI5A_MASK                      0x10u
#define SIU_HLT2_PSI5A_SHIFT                     4u
#define SIU_HLT2_PSI5A_WIDTH                     1u
#define SIU_HLT2_PSI5A(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_PSI5A_SHIFT))&SIU_HLT2_PSI5A_MASK)
#define SIU_HLT2_PSI5B_MASK                      0x20u
#define SIU_HLT2_PSI5B_SHIFT                     5u
#define SIU_HLT2_PSI5B_WIDTH                     1u
#define SIU_HLT2_PSI5B(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_PSI5B_SHIFT))&SIU_HLT2_PSI5B_MASK)
#define SIU_HLT2_SRX0_MASK                       0x100u
#define SIU_HLT2_SRX0_SHIFT                      8u
#define SIU_HLT2_SRX0_WIDTH                      1u
#define SIU_HLT2_SRX0(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SRX0_SHIFT))&SIU_HLT2_SRX0_MASK)
#define SIU_HLT2_SRX1_MASK                       0x200u
#define SIU_HLT2_SRX1_SHIFT                      9u
#define SIU_HLT2_SRX1_WIDTH                      1u
#define SIU_HLT2_SRX1(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SRX1_SHIFT))&SIU_HLT2_SRX1_MASK)
#define SIU_HLT2_STCU_MASK                       0x2000u
#define SIU_HLT2_STCU_SHIFT                      13u
#define SIU_HLT2_STCU_WIDTH                      1u
#define SIU_HLT2_STCU(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_STCU_SHIFT))&SIU_HLT2_STCU_MASK)
#define SIU_HLT2_CRC_MASK                        0x4000u
#define SIU_HLT2_CRC_SHIFT                       14u
#define SIU_HLT2_CRC_WIDTH                       1u
#define SIU_HLT2_CRC(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_CRC_SHIFT))&SIU_HLT2_CRC_MASK)
#define SIU_HLT2_SIPI_MASK                       0x8000u
#define SIU_HLT2_SIPI_SHIFT                      15u
#define SIU_HLT2_SIPI_WIDTH                      1u
#define SIU_HLT2_SIPI(x)                         (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SIPI_SHIFT))&SIU_HLT2_SIPI_MASK)
#define SIU_HLT2_SDA_MASK                        0x10000u
#define SIU_HLT2_SDA_SHIFT                       16u
#define SIU_HLT2_SDA_WIDTH                       1u
#define SIU_HLT2_SDA(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SDA_SHIFT))&SIU_HLT2_SDA_MASK)
#define SIU_HLT2_SDB_MASK                        0x20000u
#define SIU_HLT2_SDB_SHIFT                       17u
#define SIU_HLT2_SDB_WIDTH                       1u
#define SIU_HLT2_SDB(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SDB_SHIFT))&SIU_HLT2_SDB_MASK)
#define SIU_HLT2_SDC_MASK                        0x40000u
#define SIU_HLT2_SDC_SHIFT                       18u
#define SIU_HLT2_SDC_WIDTH                       1u
#define SIU_HLT2_SDC(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SDC_SHIFT))&SIU_HLT2_SDC_MASK)
#define SIU_HLT2_SDD_MASK                        0x80000u
#define SIU_HLT2_SDD_SHIFT                       19u
#define SIU_HLT2_SDD_WIDTH                       1u
#define SIU_HLT2_SDD(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_SDD_SHIFT))&SIU_HLT2_SDD_MASK)
#define SIU_HLT2_FEC_MASK                        0x80000000u
#define SIU_HLT2_FEC_SHIFT                       31u
#define SIU_HLT2_FEC_WIDTH                       1u
#define SIU_HLT2_FEC(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_HLT2_FEC_SHIFT))&SIU_HLT2_FEC_MASK)
/* HLTACK2 Bit Fields */
#define SIU_HLTACK2_MCANA_MASK                   0x1u
#define SIU_HLTACK2_MCANA_SHIFT                  0u
#define SIU_HLTACK2_MCANA_WIDTH                  1u
#define SIU_HLTACK2_MCANA(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_MCANA_SHIFT))&SIU_HLTACK2_MCANA_MASK)
#define SIU_HLTACK2_MCANB_MASK                   0x2u
#define SIU_HLTACK2_MCANB_SHIFT                  1u
#define SIU_HLTACK2_MCANB_WIDTH                  1u
#define SIU_HLTACK2_MCANB(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_MCANB_SHIFT))&SIU_HLTACK2_MCANB_MASK)
#define SIU_HLTACK2_PSI5A_MASK                   0x10u
#define SIU_HLTACK2_PSI5A_SHIFT                  4u
#define SIU_HLTACK2_PSI5A_WIDTH                  1u
#define SIU_HLTACK2_PSI5A(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_PSI5A_SHIFT))&SIU_HLTACK2_PSI5A_MASK)
#define SIU_HLTACK2_PSI5B_MASK                   0x20u
#define SIU_HLTACK2_PSI5B_SHIFT                  5u
#define SIU_HLTACK2_PSI5B_WIDTH                  1u
#define SIU_HLTACK2_PSI5B(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_PSI5B_SHIFT))&SIU_HLTACK2_PSI5B_MASK)
#define SIU_HLTACK2_SRX0_MASK                    0x100u
#define SIU_HLTACK2_SRX0_SHIFT                   8u
#define SIU_HLTACK2_SRX0_WIDTH                   1u
#define SIU_HLTACK2_SRX0(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SRX0_SHIFT))&SIU_HLTACK2_SRX0_MASK)
#define SIU_HLTACK2_SRX1_MASK                    0x200u
#define SIU_HLTACK2_SRX1_SHIFT                   9u
#define SIU_HLTACK2_SRX1_WIDTH                   1u
#define SIU_HLTACK2_SRX1(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SRX1_SHIFT))&SIU_HLTACK2_SRX1_MASK)
#define SIU_HLTACK2_STCU_MASK                    0x2000u
#define SIU_HLTACK2_STCU_SHIFT                   13u
#define SIU_HLTACK2_STCU_WIDTH                   1u
#define SIU_HLTACK2_STCU(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_STCU_SHIFT))&SIU_HLTACK2_STCU_MASK)
#define SIU_HLTACK2_CRC_MASK                     0x4000u
#define SIU_HLTACK2_CRC_SHIFT                    14u
#define SIU_HLTACK2_CRC_WIDTH                    1u
#define SIU_HLTACK2_CRC(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_CRC_SHIFT))&SIU_HLTACK2_CRC_MASK)
#define SIU_HLTACK2_SIPI_MASK                    0x8000u
#define SIU_HLTACK2_SIPI_SHIFT                   15u
#define SIU_HLTACK2_SIPI_WIDTH                   1u
#define SIU_HLTACK2_SIPI(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SIPI_SHIFT))&SIU_HLTACK2_SIPI_MASK)
#define SIU_HLTACK2_SDA_MASK                     0x10000u
#define SIU_HLTACK2_SDA_SHIFT                    16u
#define SIU_HLTACK2_SDA_WIDTH                    1u
#define SIU_HLTACK2_SDA(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SDA_SHIFT))&SIU_HLTACK2_SDA_MASK)
#define SIU_HLTACK2_SDB_MASK                     0x20000u
#define SIU_HLTACK2_SDB_SHIFT                    17u
#define SIU_HLTACK2_SDB_WIDTH                    1u
#define SIU_HLTACK2_SDB(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SDB_SHIFT))&SIU_HLTACK2_SDB_MASK)
#define SIU_HLTACK2_SDC_MASK                     0x40000u
#define SIU_HLTACK2_SDC_SHIFT                    18u
#define SIU_HLTACK2_SDC_WIDTH                    1u
#define SIU_HLTACK2_SDC(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SDC_SHIFT))&SIU_HLTACK2_SDC_MASK)
#define SIU_HLTACK2_SDD_MASK                     0x80000u
#define SIU_HLTACK2_SDD_SHIFT                    19u
#define SIU_HLTACK2_SDD_WIDTH                    1u
#define SIU_HLTACK2_SDD(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_SDD_SHIFT))&SIU_HLTACK2_SDD_MASK)
#define SIU_HLTACK2_FEC_MASK                     0x80000000u
#define SIU_HLTACK2_FEC_SHIFT                    31u
#define SIU_HLTACK2_FEC_WIDTH                    1u
#define SIU_HLTACK2_FEC(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_HLTACK2_FEC_SHIFT))&SIU_HLTACK2_FEC_MASK)
/* SDCLKCFG Bit Fields */
#define SIU_SDCLKCFG_SDDIV_MASK                  0x7Fu
#define SIU_SDCLKCFG_SDDIV_SHIFT                 0u
#define SIU_SDCLKCFG_SDDIV_WIDTH                 7u
#define SIU_SDCLKCFG_SDDIV(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_SDCLKCFG_SDDIV_SHIFT))&SIU_SDCLKCFG_SDDIV_MASK)
#define SIU_SDCLKCFG_LCK_MASK                    0x80000000u
#define SIU_SDCLKCFG_LCK_SHIFT                   31u
#define SIU_SDCLKCFG_LCK_WIDTH                   1u
#define SIU_SDCLKCFG_LCK(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_SDCLKCFG_LCK_SHIFT))&SIU_SDCLKCFG_LCK_MASK)
/* LFCLKCFG Bit Fields */
#define SIU_LFCLKCFG_LFDIV_MASK                  0x7Fu
#define SIU_LFCLKCFG_LFDIV_SHIFT                 0u
#define SIU_LFCLKCFG_LFDIV_WIDTH                 7u
#define SIU_LFCLKCFG_LFDIV(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_LFCLKCFG_LFDIV_SHIFT))&SIU_LFCLKCFG_LFDIV_MASK)
#define SIU_LFCLKCFG_LFCLKSEL_MASK               0x3000u
#define SIU_LFCLKCFG_LFCLKSEL_SHIFT              12u
#define SIU_LFCLKCFG_LFCLKSEL_WIDTH              2u
#define SIU_LFCLKCFG_LFCLKSEL(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_LFCLKCFG_LFCLKSEL_SHIFT))&SIU_LFCLKCFG_LFCLKSEL_MASK)
#define SIU_LFCLKCFG_LCK_MASK                    0x80000000u
#define SIU_LFCLKCFG_LCK_SHIFT                   31u
#define SIU_LFCLKCFG_LCK_WIDTH                   1u
#define SIU_LFCLKCFG_LCK(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_LFCLKCFG_LCK_SHIFT))&SIU_LFCLKCFG_LCK_MASK)
/* PSCLKCFG Bit Fields */
#define SIU_PSCLKCFG_PSDIV1M_MASK                0x3FFu
#define SIU_PSCLKCFG_PSDIV1M_SHIFT               0u
#define SIU_PSCLKCFG_PSDIV1M_WIDTH               10u
#define SIU_PSCLKCFG_PSDIV1M(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_PSCLKCFG_PSDIV1M_SHIFT))&SIU_PSCLKCFG_PSDIV1M_MASK)
#define SIU_PSCLKCFG_PSDIV_MASK                  0xFF0000u
#define SIU_PSCLKCFG_PSDIV_SHIFT                 16u
#define SIU_PSCLKCFG_PSDIV_WIDTH                 8u
#define SIU_PSCLKCFG_PSDIV(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_PSCLKCFG_PSDIV_SHIFT))&SIU_PSCLKCFG_PSDIV_MASK)
#define SIU_PSCLKCFG_LCK_MASK                    0x80000000u
#define SIU_PSCLKCFG_LCK_SHIFT                   31u
#define SIU_PSCLKCFG_LCK_WIDTH                   1u
#define SIU_PSCLKCFG_LCK(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PSCLKCFG_LCK_SHIFT))&SIU_PSCLKCFG_LCK_MASK)
/* RCR Bit Fields */
#define SIU_RCR_RET_MASK                         0xFu
#define SIU_RCR_RET_SHIFT                        0u
#define SIU_RCR_RET_WIDTH                        4u
#define SIU_RCR_RET(x)                           (((uint32_t)(((uint32_t)(x))<<SIU_RCR_RET_SHIFT))&SIU_RCR_RET_MASK)
/* LOCKSTEP Bit Fields */
#define SIU_LOCKSTEP_LSE_MASK                    0x1u
#define SIU_LOCKSTEP_LSE_SHIFT                   0u
#define SIU_LOCKSTEP_LSE_WIDTH                   1u
#define SIU_LOCKSTEP_LSE(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_LOCKSTEP_LSE_SHIFT))&SIU_LOCKSTEP_LSE_MASK)
/* PCSER Bit Fields */
#define SIU_PCSER_PCSE_MASK                      0x1u
#define SIU_PCSER_PCSE_SHIFT                     0u
#define SIU_PCSER_PCSE_WIDTH                     1u
#define SIU_PCSER_PCSE(x)                        (((uint32_t)(((uint32_t)(x))<<SIU_PCSER_PCSE_SHIFT))&SIU_PCSER_PCSE_MASK)
/* PCSIFR Bit Fields */
#define SIU_PCSIFR_PCSI_MASK                     0x1u
#define SIU_PCSIFR_PCSI_SHIFT                    0u
#define SIU_PCSIFR_PCSI_WIDTH                    1u
#define SIU_PCSIFR_PCSI(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_PCSIFR_PCSI_SHIFT))&SIU_PCSIFR_PCSI_MASK)
#define SIU_PCSIFR_PCSMS_MASK                    0x6u
#define SIU_PCSIFR_PCSMS_SHIFT                   1u
#define SIU_PCSIFR_PCSMS_WIDTH                   2u
#define SIU_PCSIFR_PCSMS(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PCSIFR_PCSMS_SHIFT))&SIU_PCSIFR_PCSMS_MASK)
/* FECCR Bit Fields */
#define SIU_FECCR_FM_MASK                        0x1u
#define SIU_FECCR_FM_SHIFT                       0u
#define SIU_FECCR_FM_WIDTH                       1u
#define SIU_FECCR_FM(x)                          (((uint32_t)(((uint32_t)(x))<<SIU_FECCR_FM_SHIFT))&SIU_FECCR_FM_MASK)
/* ECCEIR Bit Fields */
#define SIU_ECCEIR_CHKINVM_MASK                  0x7Fu
#define SIU_ECCEIR_CHKINVM_SHIFT                 0u
#define SIU_ECCEIR_CHKINVM_WIDTH                 7u
#define SIU_ECCEIR_CHKINVM(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ECCEIR_CHKINVM_SHIFT))&SIU_ECCEIR_CHKINVM_MASK)
#define SIU_ECCEIR_INVC_MASK                     0x80u
#define SIU_ECCEIR_INVC_SHIFT                    7u
#define SIU_ECCEIR_INVC_WIDTH                    1u
#define SIU_ECCEIR_INVC(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_ECCEIR_INVC_SHIFT))&SIU_ECCEIR_INVC_MASK)
/* PGPDO Bit Fields */
#define SIU_PGPDO_PGPDO31_MASK                   0x1u
#define SIU_PGPDO_PGPDO31_SHIFT                  0u
#define SIU_PGPDO_PGPDO31_WIDTH                  1u
#define SIU_PGPDO_PGPDO31(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO31_SHIFT))&SIU_PGPDO_PGPDO31_MASK)
#define SIU_PGPDO_PGPDO30_MASK                   0x2u
#define SIU_PGPDO_PGPDO30_SHIFT                  1u
#define SIU_PGPDO_PGPDO30_WIDTH                  1u
#define SIU_PGPDO_PGPDO30(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO30_SHIFT))&SIU_PGPDO_PGPDO30_MASK)
#define SIU_PGPDO_PGPDO29_MASK                   0x4u
#define SIU_PGPDO_PGPDO29_SHIFT                  2u
#define SIU_PGPDO_PGPDO29_WIDTH                  1u
#define SIU_PGPDO_PGPDO29(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO29_SHIFT))&SIU_PGPDO_PGPDO29_MASK)
#define SIU_PGPDO_PGPDO28_MASK                   0x8u
#define SIU_PGPDO_PGPDO28_SHIFT                  3u
#define SIU_PGPDO_PGPDO28_WIDTH                  1u
#define SIU_PGPDO_PGPDO28(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO28_SHIFT))&SIU_PGPDO_PGPDO28_MASK)
#define SIU_PGPDO_PGPDO27_MASK                   0x10u
#define SIU_PGPDO_PGPDO27_SHIFT                  4u
#define SIU_PGPDO_PGPDO27_WIDTH                  1u
#define SIU_PGPDO_PGPDO27(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO27_SHIFT))&SIU_PGPDO_PGPDO27_MASK)
#define SIU_PGPDO_PGPDO26_MASK                   0x20u
#define SIU_PGPDO_PGPDO26_SHIFT                  5u
#define SIU_PGPDO_PGPDO26_WIDTH                  1u
#define SIU_PGPDO_PGPDO26(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO26_SHIFT))&SIU_PGPDO_PGPDO26_MASK)
#define SIU_PGPDO_PGPDO25_MASK                   0x40u
#define SIU_PGPDO_PGPDO25_SHIFT                  6u
#define SIU_PGPDO_PGPDO25_WIDTH                  1u
#define SIU_PGPDO_PGPDO25(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO25_SHIFT))&SIU_PGPDO_PGPDO25_MASK)
#define SIU_PGPDO_PGPDO24_MASK                   0x80u
#define SIU_PGPDO_PGPDO24_SHIFT                  7u
#define SIU_PGPDO_PGPDO24_WIDTH                  1u
#define SIU_PGPDO_PGPDO24(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO24_SHIFT))&SIU_PGPDO_PGPDO24_MASK)
#define SIU_PGPDO_PGPDO23_MASK                   0x100u
#define SIU_PGPDO_PGPDO23_SHIFT                  8u
#define SIU_PGPDO_PGPDO23_WIDTH                  1u
#define SIU_PGPDO_PGPDO23(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO23_SHIFT))&SIU_PGPDO_PGPDO23_MASK)
#define SIU_PGPDO_PGPDO22_MASK                   0x200u
#define SIU_PGPDO_PGPDO22_SHIFT                  9u
#define SIU_PGPDO_PGPDO22_WIDTH                  1u
#define SIU_PGPDO_PGPDO22(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO22_SHIFT))&SIU_PGPDO_PGPDO22_MASK)
#define SIU_PGPDO_PGPDO21_MASK                   0x400u
#define SIU_PGPDO_PGPDO21_SHIFT                  10u
#define SIU_PGPDO_PGPDO21_WIDTH                  1u
#define SIU_PGPDO_PGPDO21(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO21_SHIFT))&SIU_PGPDO_PGPDO21_MASK)
#define SIU_PGPDO_PGPDO20_MASK                   0x800u
#define SIU_PGPDO_PGPDO20_SHIFT                  11u
#define SIU_PGPDO_PGPDO20_WIDTH                  1u
#define SIU_PGPDO_PGPDO20(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO20_SHIFT))&SIU_PGPDO_PGPDO20_MASK)
#define SIU_PGPDO_PGPDO19_MASK                   0x1000u
#define SIU_PGPDO_PGPDO19_SHIFT                  12u
#define SIU_PGPDO_PGPDO19_WIDTH                  1u
#define SIU_PGPDO_PGPDO19(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO19_SHIFT))&SIU_PGPDO_PGPDO19_MASK)
#define SIU_PGPDO_PGPDO18_MASK                   0x2000u
#define SIU_PGPDO_PGPDO18_SHIFT                  13u
#define SIU_PGPDO_PGPDO18_WIDTH                  1u
#define SIU_PGPDO_PGPDO18(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO18_SHIFT))&SIU_PGPDO_PGPDO18_MASK)
#define SIU_PGPDO_PGPDO17_MASK                   0x4000u
#define SIU_PGPDO_PGPDO17_SHIFT                  14u
#define SIU_PGPDO_PGPDO17_WIDTH                  1u
#define SIU_PGPDO_PGPDO17(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO17_SHIFT))&SIU_PGPDO_PGPDO17_MASK)
#define SIU_PGPDO_PGPDO16_MASK                   0x8000u
#define SIU_PGPDO_PGPDO16_SHIFT                  15u
#define SIU_PGPDO_PGPDO16_WIDTH                  1u
#define SIU_PGPDO_PGPDO16(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO16_SHIFT))&SIU_PGPDO_PGPDO16_MASK)
#define SIU_PGPDO_PGPDO15_MASK                   0x10000u
#define SIU_PGPDO_PGPDO15_SHIFT                  16u
#define SIU_PGPDO_PGPDO15_WIDTH                  1u
#define SIU_PGPDO_PGPDO15(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO15_SHIFT))&SIU_PGPDO_PGPDO15_MASK)
#define SIU_PGPDO_PGPDO14_MASK                   0x20000u
#define SIU_PGPDO_PGPDO14_SHIFT                  17u
#define SIU_PGPDO_PGPDO14_WIDTH                  1u
#define SIU_PGPDO_PGPDO14(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO14_SHIFT))&SIU_PGPDO_PGPDO14_MASK)
#define SIU_PGPDO_PGPDO13_MASK                   0x40000u
#define SIU_PGPDO_PGPDO13_SHIFT                  18u
#define SIU_PGPDO_PGPDO13_WIDTH                  1u
#define SIU_PGPDO_PGPDO13(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO13_SHIFT))&SIU_PGPDO_PGPDO13_MASK)
#define SIU_PGPDO_PGPDO12_MASK                   0x80000u
#define SIU_PGPDO_PGPDO12_SHIFT                  19u
#define SIU_PGPDO_PGPDO12_WIDTH                  1u
#define SIU_PGPDO_PGPDO12(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO12_SHIFT))&SIU_PGPDO_PGPDO12_MASK)
#define SIU_PGPDO_PGPDO11_MASK                   0x100000u
#define SIU_PGPDO_PGPDO11_SHIFT                  20u
#define SIU_PGPDO_PGPDO11_WIDTH                  1u
#define SIU_PGPDO_PGPDO11(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO11_SHIFT))&SIU_PGPDO_PGPDO11_MASK)
#define SIU_PGPDO_PGPDO10_MASK                   0x200000u
#define SIU_PGPDO_PGPDO10_SHIFT                  21u
#define SIU_PGPDO_PGPDO10_WIDTH                  1u
#define SIU_PGPDO_PGPDO10(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO10_SHIFT))&SIU_PGPDO_PGPDO10_MASK)
#define SIU_PGPDO_PGPDO9_MASK                    0x400000u
#define SIU_PGPDO_PGPDO9_SHIFT                   22u
#define SIU_PGPDO_PGPDO9_WIDTH                   1u
#define SIU_PGPDO_PGPDO9(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO9_SHIFT))&SIU_PGPDO_PGPDO9_MASK)
#define SIU_PGPDO_PGPDO8_MASK                    0x800000u
#define SIU_PGPDO_PGPDO8_SHIFT                   23u
#define SIU_PGPDO_PGPDO8_WIDTH                   1u
#define SIU_PGPDO_PGPDO8(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO8_SHIFT))&SIU_PGPDO_PGPDO8_MASK)
#define SIU_PGPDO_PGPDO7_MASK                    0x1000000u
#define SIU_PGPDO_PGPDO7_SHIFT                   24u
#define SIU_PGPDO_PGPDO7_WIDTH                   1u
#define SIU_PGPDO_PGPDO7(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO7_SHIFT))&SIU_PGPDO_PGPDO7_MASK)
#define SIU_PGPDO_PGPDO6_MASK                    0x2000000u
#define SIU_PGPDO_PGPDO6_SHIFT                   25u
#define SIU_PGPDO_PGPDO6_WIDTH                   1u
#define SIU_PGPDO_PGPDO6(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO6_SHIFT))&SIU_PGPDO_PGPDO6_MASK)
#define SIU_PGPDO_PGPDO5_MASK                    0x4000000u
#define SIU_PGPDO_PGPDO5_SHIFT                   26u
#define SIU_PGPDO_PGPDO5_WIDTH                   1u
#define SIU_PGPDO_PGPDO5(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO5_SHIFT))&SIU_PGPDO_PGPDO5_MASK)
#define SIU_PGPDO_PGPDO4_MASK                    0x8000000u
#define SIU_PGPDO_PGPDO4_SHIFT                   27u
#define SIU_PGPDO_PGPDO4_WIDTH                   1u
#define SIU_PGPDO_PGPDO4(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO4_SHIFT))&SIU_PGPDO_PGPDO4_MASK)
#define SIU_PGPDO_PGPDO3_MASK                    0x10000000u
#define SIU_PGPDO_PGPDO3_SHIFT                   28u
#define SIU_PGPDO_PGPDO3_WIDTH                   1u
#define SIU_PGPDO_PGPDO3(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO3_SHIFT))&SIU_PGPDO_PGPDO3_MASK)
#define SIU_PGPDO_PGPDO2_MASK                    0x20000000u
#define SIU_PGPDO_PGPDO2_SHIFT                   29u
#define SIU_PGPDO_PGPDO2_WIDTH                   1u
#define SIU_PGPDO_PGPDO2(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO2_SHIFT))&SIU_PGPDO_PGPDO2_MASK)
#define SIU_PGPDO_PGPDO1_MASK                    0x40000000u
#define SIU_PGPDO_PGPDO1_SHIFT                   30u
#define SIU_PGPDO_PGPDO1_WIDTH                   1u
#define SIU_PGPDO_PGPDO1(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO1_SHIFT))&SIU_PGPDO_PGPDO1_MASK)
#define SIU_PGPDO_PGPDO0_MASK                    0x80000000u
#define SIU_PGPDO_PGPDO0_SHIFT                   31u
#define SIU_PGPDO_PGPDO0_WIDTH                   1u
#define SIU_PGPDO_PGPDO0(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDO_PGPDO0_SHIFT))&SIU_PGPDO_PGPDO0_MASK)
/* PGPDI Bit Fields */
#define SIU_PGPDI_PGPDI31_MASK                   0x1u
#define SIU_PGPDI_PGPDI31_SHIFT                  0u
#define SIU_PGPDI_PGPDI31_WIDTH                  1u
#define SIU_PGPDI_PGPDI31(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI31_SHIFT))&SIU_PGPDI_PGPDI31_MASK)
#define SIU_PGPDI_PGPDI30_MASK                   0x2u
#define SIU_PGPDI_PGPDI30_SHIFT                  1u
#define SIU_PGPDI_PGPDI30_WIDTH                  1u
#define SIU_PGPDI_PGPDI30(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI30_SHIFT))&SIU_PGPDI_PGPDI30_MASK)
#define SIU_PGPDI_PGPDI29_MASK                   0x4u
#define SIU_PGPDI_PGPDI29_SHIFT                  2u
#define SIU_PGPDI_PGPDI29_WIDTH                  1u
#define SIU_PGPDI_PGPDI29(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI29_SHIFT))&SIU_PGPDI_PGPDI29_MASK)
#define SIU_PGPDI_PGPDI28_MASK                   0x8u
#define SIU_PGPDI_PGPDI28_SHIFT                  3u
#define SIU_PGPDI_PGPDI28_WIDTH                  1u
#define SIU_PGPDI_PGPDI28(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI28_SHIFT))&SIU_PGPDI_PGPDI28_MASK)
#define SIU_PGPDI_PGPDI27_MASK                   0x10u
#define SIU_PGPDI_PGPDI27_SHIFT                  4u
#define SIU_PGPDI_PGPDI27_WIDTH                  1u
#define SIU_PGPDI_PGPDI27(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI27_SHIFT))&SIU_PGPDI_PGPDI27_MASK)
#define SIU_PGPDI_PGPDI26_MASK                   0x20u
#define SIU_PGPDI_PGPDI26_SHIFT                  5u
#define SIU_PGPDI_PGPDI26_WIDTH                  1u
#define SIU_PGPDI_PGPDI26(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI26_SHIFT))&SIU_PGPDI_PGPDI26_MASK)
#define SIU_PGPDI_PGPDI25_MASK                   0x40u
#define SIU_PGPDI_PGPDI25_SHIFT                  6u
#define SIU_PGPDI_PGPDI25_WIDTH                  1u
#define SIU_PGPDI_PGPDI25(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI25_SHIFT))&SIU_PGPDI_PGPDI25_MASK)
#define SIU_PGPDI_PGPDI24_MASK                   0x80u
#define SIU_PGPDI_PGPDI24_SHIFT                  7u
#define SIU_PGPDI_PGPDI24_WIDTH                  1u
#define SIU_PGPDI_PGPDI24(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI24_SHIFT))&SIU_PGPDI_PGPDI24_MASK)
#define SIU_PGPDI_PGPDI23_MASK                   0x100u
#define SIU_PGPDI_PGPDI23_SHIFT                  8u
#define SIU_PGPDI_PGPDI23_WIDTH                  1u
#define SIU_PGPDI_PGPDI23(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI23_SHIFT))&SIU_PGPDI_PGPDI23_MASK)
#define SIU_PGPDI_PGPDI22_MASK                   0x200u
#define SIU_PGPDI_PGPDI22_SHIFT                  9u
#define SIU_PGPDI_PGPDI22_WIDTH                  1u
#define SIU_PGPDI_PGPDI22(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI22_SHIFT))&SIU_PGPDI_PGPDI22_MASK)
#define SIU_PGPDI_PGPDI21_MASK                   0x400u
#define SIU_PGPDI_PGPDI21_SHIFT                  10u
#define SIU_PGPDI_PGPDI21_WIDTH                  1u
#define SIU_PGPDI_PGPDI21(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI21_SHIFT))&SIU_PGPDI_PGPDI21_MASK)
#define SIU_PGPDI_PGPDI20_MASK                   0x800u
#define SIU_PGPDI_PGPDI20_SHIFT                  11u
#define SIU_PGPDI_PGPDI20_WIDTH                  1u
#define SIU_PGPDI_PGPDI20(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI20_SHIFT))&SIU_PGPDI_PGPDI20_MASK)
#define SIU_PGPDI_PGPDI19_MASK                   0x1000u
#define SIU_PGPDI_PGPDI19_SHIFT                  12u
#define SIU_PGPDI_PGPDI19_WIDTH                  1u
#define SIU_PGPDI_PGPDI19(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI19_SHIFT))&SIU_PGPDI_PGPDI19_MASK)
#define SIU_PGPDI_PGPDI18_MASK                   0x2000u
#define SIU_PGPDI_PGPDI18_SHIFT                  13u
#define SIU_PGPDI_PGPDI18_WIDTH                  1u
#define SIU_PGPDI_PGPDI18(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI18_SHIFT))&SIU_PGPDI_PGPDI18_MASK)
#define SIU_PGPDI_PGPDI17_MASK                   0x4000u
#define SIU_PGPDI_PGPDI17_SHIFT                  14u
#define SIU_PGPDI_PGPDI17_WIDTH                  1u
#define SIU_PGPDI_PGPDI17(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI17_SHIFT))&SIU_PGPDI_PGPDI17_MASK)
#define SIU_PGPDI_PGPDI16_MASK                   0x8000u
#define SIU_PGPDI_PGPDI16_SHIFT                  15u
#define SIU_PGPDI_PGPDI16_WIDTH                  1u
#define SIU_PGPDI_PGPDI16(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI16_SHIFT))&SIU_PGPDI_PGPDI16_MASK)
#define SIU_PGPDI_PGPDI15_MASK                   0x10000u
#define SIU_PGPDI_PGPDI15_SHIFT                  16u
#define SIU_PGPDI_PGPDI15_WIDTH                  1u
#define SIU_PGPDI_PGPDI15(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI15_SHIFT))&SIU_PGPDI_PGPDI15_MASK)
#define SIU_PGPDI_PGPDI14_MASK                   0x20000u
#define SIU_PGPDI_PGPDI14_SHIFT                  17u
#define SIU_PGPDI_PGPDI14_WIDTH                  1u
#define SIU_PGPDI_PGPDI14(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI14_SHIFT))&SIU_PGPDI_PGPDI14_MASK)
#define SIU_PGPDI_PGPDI13_MASK                   0x40000u
#define SIU_PGPDI_PGPDI13_SHIFT                  18u
#define SIU_PGPDI_PGPDI13_WIDTH                  1u
#define SIU_PGPDI_PGPDI13(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI13_SHIFT))&SIU_PGPDI_PGPDI13_MASK)
#define SIU_PGPDI_PGPDI12_MASK                   0x80000u
#define SIU_PGPDI_PGPDI12_SHIFT                  19u
#define SIU_PGPDI_PGPDI12_WIDTH                  1u
#define SIU_PGPDI_PGPDI12(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI12_SHIFT))&SIU_PGPDI_PGPDI12_MASK)
#define SIU_PGPDI_PGPDI11_MASK                   0x100000u
#define SIU_PGPDI_PGPDI11_SHIFT                  20u
#define SIU_PGPDI_PGPDI11_WIDTH                  1u
#define SIU_PGPDI_PGPDI11(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI11_SHIFT))&SIU_PGPDI_PGPDI11_MASK)
#define SIU_PGPDI_PGPDI10_MASK                   0x200000u
#define SIU_PGPDI_PGPDI10_SHIFT                  21u
#define SIU_PGPDI_PGPDI10_WIDTH                  1u
#define SIU_PGPDI_PGPDI10(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI10_SHIFT))&SIU_PGPDI_PGPDI10_MASK)
#define SIU_PGPDI_PGPDI9_MASK                    0x400000u
#define SIU_PGPDI_PGPDI9_SHIFT                   22u
#define SIU_PGPDI_PGPDI9_WIDTH                   1u
#define SIU_PGPDI_PGPDI9(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI9_SHIFT))&SIU_PGPDI_PGPDI9_MASK)
#define SIU_PGPDI_PGPDI8_MASK                    0x800000u
#define SIU_PGPDI_PGPDI8_SHIFT                   23u
#define SIU_PGPDI_PGPDI8_WIDTH                   1u
#define SIU_PGPDI_PGPDI8(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI8_SHIFT))&SIU_PGPDI_PGPDI8_MASK)
#define SIU_PGPDI_PGPDI7_MASK                    0x1000000u
#define SIU_PGPDI_PGPDI7_SHIFT                   24u
#define SIU_PGPDI_PGPDI7_WIDTH                   1u
#define SIU_PGPDI_PGPDI7(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI7_SHIFT))&SIU_PGPDI_PGPDI7_MASK)
#define SIU_PGPDI_PGPDI6_MASK                    0x2000000u
#define SIU_PGPDI_PGPDI6_SHIFT                   25u
#define SIU_PGPDI_PGPDI6_WIDTH                   1u
#define SIU_PGPDI_PGPDI6(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI6_SHIFT))&SIU_PGPDI_PGPDI6_MASK)
#define SIU_PGPDI_PGPDI5_MASK                    0x4000000u
#define SIU_PGPDI_PGPDI5_SHIFT                   26u
#define SIU_PGPDI_PGPDI5_WIDTH                   1u
#define SIU_PGPDI_PGPDI5(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI5_SHIFT))&SIU_PGPDI_PGPDI5_MASK)
#define SIU_PGPDI_PGPDI4_MASK                    0x8000000u
#define SIU_PGPDI_PGPDI4_SHIFT                   27u
#define SIU_PGPDI_PGPDI4_WIDTH                   1u
#define SIU_PGPDI_PGPDI4(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI4_SHIFT))&SIU_PGPDI_PGPDI4_MASK)
#define SIU_PGPDI_PGPDI3_MASK                    0x10000000u
#define SIU_PGPDI_PGPDI3_SHIFT                   28u
#define SIU_PGPDI_PGPDI3_WIDTH                   1u
#define SIU_PGPDI_PGPDI3(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI3_SHIFT))&SIU_PGPDI_PGPDI3_MASK)
#define SIU_PGPDI_PGPDI2_MASK                    0x20000000u
#define SIU_PGPDI_PGPDI2_SHIFT                   29u
#define SIU_PGPDI_PGPDI2_WIDTH                   1u
#define SIU_PGPDI_PGPDI2(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI2_SHIFT))&SIU_PGPDI_PGPDI2_MASK)
#define SIU_PGPDI_PGPDI1_MASK                    0x40000000u
#define SIU_PGPDI_PGPDI1_SHIFT                   30u
#define SIU_PGPDI_PGPDI1_WIDTH                   1u
#define SIU_PGPDI_PGPDI1(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI1_SHIFT))&SIU_PGPDI_PGPDI1_MASK)
#define SIU_PGPDI_PGPDI0_MASK                    0x80000000u
#define SIU_PGPDI_PGPDI0_SHIFT                   31u
#define SIU_PGPDI_PGPDI0_WIDTH                   1u
#define SIU_PGPDI_PGPDI0(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_PGPDI_PGPDI0_SHIFT))&SIU_PGPDI_PGPDI0_MASK)
/* MPGPDO Bit Fields */
#define SIU_MPGPDO_DATA15_MASK                   0x1u
#define SIU_MPGPDO_DATA15_SHIFT                  0u
#define SIU_MPGPDO_DATA15_WIDTH                  1u
#define SIU_MPGPDO_DATA15(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA15_SHIFT))&SIU_MPGPDO_DATA15_MASK)
#define SIU_MPGPDO_DATA14_MASK                   0x2u
#define SIU_MPGPDO_DATA14_SHIFT                  1u
#define SIU_MPGPDO_DATA14_WIDTH                  1u
#define SIU_MPGPDO_DATA14(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA14_SHIFT))&SIU_MPGPDO_DATA14_MASK)
#define SIU_MPGPDO_DATA13_MASK                   0x4u
#define SIU_MPGPDO_DATA13_SHIFT                  2u
#define SIU_MPGPDO_DATA13_WIDTH                  1u
#define SIU_MPGPDO_DATA13(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA13_SHIFT))&SIU_MPGPDO_DATA13_MASK)
#define SIU_MPGPDO_DATA12_MASK                   0x8u
#define SIU_MPGPDO_DATA12_SHIFT                  3u
#define SIU_MPGPDO_DATA12_WIDTH                  1u
#define SIU_MPGPDO_DATA12(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA12_SHIFT))&SIU_MPGPDO_DATA12_MASK)
#define SIU_MPGPDO_DATA11_MASK                   0x10u
#define SIU_MPGPDO_DATA11_SHIFT                  4u
#define SIU_MPGPDO_DATA11_WIDTH                  1u
#define SIU_MPGPDO_DATA11(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA11_SHIFT))&SIU_MPGPDO_DATA11_MASK)
#define SIU_MPGPDO_DATA10_MASK                   0x20u
#define SIU_MPGPDO_DATA10_SHIFT                  5u
#define SIU_MPGPDO_DATA10_WIDTH                  1u
#define SIU_MPGPDO_DATA10(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA10_SHIFT))&SIU_MPGPDO_DATA10_MASK)
#define SIU_MPGPDO_DATA9_MASK                    0x40u
#define SIU_MPGPDO_DATA9_SHIFT                   6u
#define SIU_MPGPDO_DATA9_WIDTH                   1u
#define SIU_MPGPDO_DATA9(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA9_SHIFT))&SIU_MPGPDO_DATA9_MASK)
#define SIU_MPGPDO_DATA8_MASK                    0x80u
#define SIU_MPGPDO_DATA8_SHIFT                   7u
#define SIU_MPGPDO_DATA8_WIDTH                   1u
#define SIU_MPGPDO_DATA8(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA8_SHIFT))&SIU_MPGPDO_DATA8_MASK)
#define SIU_MPGPDO_DATA7_MASK                    0x100u
#define SIU_MPGPDO_DATA7_SHIFT                   8u
#define SIU_MPGPDO_DATA7_WIDTH                   1u
#define SIU_MPGPDO_DATA7(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA7_SHIFT))&SIU_MPGPDO_DATA7_MASK)
#define SIU_MPGPDO_DATA6_MASK                    0x200u
#define SIU_MPGPDO_DATA6_SHIFT                   9u
#define SIU_MPGPDO_DATA6_WIDTH                   1u
#define SIU_MPGPDO_DATA6(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA6_SHIFT))&SIU_MPGPDO_DATA6_MASK)
#define SIU_MPGPDO_DATA5_MASK                    0x400u
#define SIU_MPGPDO_DATA5_SHIFT                   10u
#define SIU_MPGPDO_DATA5_WIDTH                   1u
#define SIU_MPGPDO_DATA5(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA5_SHIFT))&SIU_MPGPDO_DATA5_MASK)
#define SIU_MPGPDO_DATA4_MASK                    0x800u
#define SIU_MPGPDO_DATA4_SHIFT                   11u
#define SIU_MPGPDO_DATA4_WIDTH                   1u
#define SIU_MPGPDO_DATA4(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA4_SHIFT))&SIU_MPGPDO_DATA4_MASK)
#define SIU_MPGPDO_DATA3_MASK                    0x1000u
#define SIU_MPGPDO_DATA3_SHIFT                   12u
#define SIU_MPGPDO_DATA3_WIDTH                   1u
#define SIU_MPGPDO_DATA3(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA3_SHIFT))&SIU_MPGPDO_DATA3_MASK)
#define SIU_MPGPDO_DATA2_MASK                    0x2000u
#define SIU_MPGPDO_DATA2_SHIFT                   13u
#define SIU_MPGPDO_DATA2_WIDTH                   1u
#define SIU_MPGPDO_DATA2(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA2_SHIFT))&SIU_MPGPDO_DATA2_MASK)
#define SIU_MPGPDO_DATA1_MASK                    0x4000u
#define SIU_MPGPDO_DATA1_SHIFT                   14u
#define SIU_MPGPDO_DATA1_WIDTH                   1u
#define SIU_MPGPDO_DATA1(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA1_SHIFT))&SIU_MPGPDO_DATA1_MASK)
#define SIU_MPGPDO_DATA0_MASK                    0x8000u
#define SIU_MPGPDO_DATA0_SHIFT                   15u
#define SIU_MPGPDO_DATA0_WIDTH                   1u
#define SIU_MPGPDO_DATA0(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_DATA0_SHIFT))&SIU_MPGPDO_DATA0_MASK)
#define SIU_MPGPDO_MASK15_MASK                   0x10000u
#define SIU_MPGPDO_MASK15_SHIFT                  16u
#define SIU_MPGPDO_MASK15_WIDTH                  1u
#define SIU_MPGPDO_MASK15(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK15_SHIFT))&SIU_MPGPDO_MASK15_MASK)
#define SIU_MPGPDO_MASK14_MASK                   0x20000u
#define SIU_MPGPDO_MASK14_SHIFT                  17u
#define SIU_MPGPDO_MASK14_WIDTH                  1u
#define SIU_MPGPDO_MASK14(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK14_SHIFT))&SIU_MPGPDO_MASK14_MASK)
#define SIU_MPGPDO_MASK13_MASK                   0x40000u
#define SIU_MPGPDO_MASK13_SHIFT                  18u
#define SIU_MPGPDO_MASK13_WIDTH                  1u
#define SIU_MPGPDO_MASK13(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK13_SHIFT))&SIU_MPGPDO_MASK13_MASK)
#define SIU_MPGPDO_MASK12_MASK                   0x80000u
#define SIU_MPGPDO_MASK12_SHIFT                  19u
#define SIU_MPGPDO_MASK12_WIDTH                  1u
#define SIU_MPGPDO_MASK12(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK12_SHIFT))&SIU_MPGPDO_MASK12_MASK)
#define SIU_MPGPDO_MASK11_MASK                   0x100000u
#define SIU_MPGPDO_MASK11_SHIFT                  20u
#define SIU_MPGPDO_MASK11_WIDTH                  1u
#define SIU_MPGPDO_MASK11(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK11_SHIFT))&SIU_MPGPDO_MASK11_MASK)
#define SIU_MPGPDO_MASK10_MASK                   0x200000u
#define SIU_MPGPDO_MASK10_SHIFT                  21u
#define SIU_MPGPDO_MASK10_WIDTH                  1u
#define SIU_MPGPDO_MASK10(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK10_SHIFT))&SIU_MPGPDO_MASK10_MASK)
#define SIU_MPGPDO_MASK9_MASK                    0x400000u
#define SIU_MPGPDO_MASK9_SHIFT                   22u
#define SIU_MPGPDO_MASK9_WIDTH                   1u
#define SIU_MPGPDO_MASK9(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK9_SHIFT))&SIU_MPGPDO_MASK9_MASK)
#define SIU_MPGPDO_MASK8_MASK                    0x800000u
#define SIU_MPGPDO_MASK8_SHIFT                   23u
#define SIU_MPGPDO_MASK8_WIDTH                   1u
#define SIU_MPGPDO_MASK8(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK8_SHIFT))&SIU_MPGPDO_MASK8_MASK)
#define SIU_MPGPDO_MASK7_MASK                    0x1000000u
#define SIU_MPGPDO_MASK7_SHIFT                   24u
#define SIU_MPGPDO_MASK7_WIDTH                   1u
#define SIU_MPGPDO_MASK7(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK7_SHIFT))&SIU_MPGPDO_MASK7_MASK)
#define SIU_MPGPDO_MASK6_MASK                    0x2000000u
#define SIU_MPGPDO_MASK6_SHIFT                   25u
#define SIU_MPGPDO_MASK6_WIDTH                   1u
#define SIU_MPGPDO_MASK6(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK6_SHIFT))&SIU_MPGPDO_MASK6_MASK)
#define SIU_MPGPDO_MASK5_MASK                    0x4000000u
#define SIU_MPGPDO_MASK5_SHIFT                   26u
#define SIU_MPGPDO_MASK5_WIDTH                   1u
#define SIU_MPGPDO_MASK5(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK5_SHIFT))&SIU_MPGPDO_MASK5_MASK)
#define SIU_MPGPDO_MASK4_MASK                    0x8000000u
#define SIU_MPGPDO_MASK4_SHIFT                   27u
#define SIU_MPGPDO_MASK4_WIDTH                   1u
#define SIU_MPGPDO_MASK4(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK4_SHIFT))&SIU_MPGPDO_MASK4_MASK)
#define SIU_MPGPDO_MASK3_MASK                    0x10000000u
#define SIU_MPGPDO_MASK3_SHIFT                   28u
#define SIU_MPGPDO_MASK3_WIDTH                   1u
#define SIU_MPGPDO_MASK3(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK3_SHIFT))&SIU_MPGPDO_MASK3_MASK)
#define SIU_MPGPDO_MASK2_MASK                    0x20000000u
#define SIU_MPGPDO_MASK2_SHIFT                   29u
#define SIU_MPGPDO_MASK2_WIDTH                   1u
#define SIU_MPGPDO_MASK2(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK2_SHIFT))&SIU_MPGPDO_MASK2_MASK)
#define SIU_MPGPDO_MASK1_MASK                    0x40000000u
#define SIU_MPGPDO_MASK1_SHIFT                   30u
#define SIU_MPGPDO_MASK1_WIDTH                   1u
#define SIU_MPGPDO_MASK1(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK1_SHIFT))&SIU_MPGPDO_MASK1_MASK)
#define SIU_MPGPDO_MASK0_MASK                    0x80000000u
#define SIU_MPGPDO_MASK0_SHIFT                   31u
#define SIU_MPGPDO_MASK0_WIDTH                   1u
#define SIU_MPGPDO_MASK0(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_MPGPDO_MASK0_SHIFT))&SIU_MPGPDO_MASK0_MASK)
/* DSPIH Bit Fields */
#define SIU_DSPIH_DATA15_MASK                    0x1u
#define SIU_DSPIH_DATA15_SHIFT                   0u
#define SIU_DSPIH_DATA15_WIDTH                   1u
#define SIU_DSPIH_DATA15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA15_SHIFT))&SIU_DSPIH_DATA15_MASK)
#define SIU_DSPIH_DATA14_MASK                    0x2u
#define SIU_DSPIH_DATA14_SHIFT                   1u
#define SIU_DSPIH_DATA14_WIDTH                   1u
#define SIU_DSPIH_DATA14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA14_SHIFT))&SIU_DSPIH_DATA14_MASK)
#define SIU_DSPIH_DATA13_MASK                    0x4u
#define SIU_DSPIH_DATA13_SHIFT                   2u
#define SIU_DSPIH_DATA13_WIDTH                   1u
#define SIU_DSPIH_DATA13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA13_SHIFT))&SIU_DSPIH_DATA13_MASK)
#define SIU_DSPIH_DATA12_MASK                    0x8u
#define SIU_DSPIH_DATA12_SHIFT                   3u
#define SIU_DSPIH_DATA12_WIDTH                   1u
#define SIU_DSPIH_DATA12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA12_SHIFT))&SIU_DSPIH_DATA12_MASK)
#define SIU_DSPIH_DATA11_MASK                    0x10u
#define SIU_DSPIH_DATA11_SHIFT                   4u
#define SIU_DSPIH_DATA11_WIDTH                   1u
#define SIU_DSPIH_DATA11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA11_SHIFT))&SIU_DSPIH_DATA11_MASK)
#define SIU_DSPIH_DATA10_MASK                    0x20u
#define SIU_DSPIH_DATA10_SHIFT                   5u
#define SIU_DSPIH_DATA10_WIDTH                   1u
#define SIU_DSPIH_DATA10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA10_SHIFT))&SIU_DSPIH_DATA10_MASK)
#define SIU_DSPIH_DATA9_MASK                     0x40u
#define SIU_DSPIH_DATA9_SHIFT                    6u
#define SIU_DSPIH_DATA9_WIDTH                    1u
#define SIU_DSPIH_DATA9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA9_SHIFT))&SIU_DSPIH_DATA9_MASK)
#define SIU_DSPIH_DATA8_MASK                     0x80u
#define SIU_DSPIH_DATA8_SHIFT                    7u
#define SIU_DSPIH_DATA8_WIDTH                    1u
#define SIU_DSPIH_DATA8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA8_SHIFT))&SIU_DSPIH_DATA8_MASK)
#define SIU_DSPIH_DATA7_MASK                     0x100u
#define SIU_DSPIH_DATA7_SHIFT                    8u
#define SIU_DSPIH_DATA7_WIDTH                    1u
#define SIU_DSPIH_DATA7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA7_SHIFT))&SIU_DSPIH_DATA7_MASK)
#define SIU_DSPIH_DATA6_MASK                     0x200u
#define SIU_DSPIH_DATA6_SHIFT                    9u
#define SIU_DSPIH_DATA6_WIDTH                    1u
#define SIU_DSPIH_DATA6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA6_SHIFT))&SIU_DSPIH_DATA6_MASK)
#define SIU_DSPIH_DATA5_MASK                     0x400u
#define SIU_DSPIH_DATA5_SHIFT                    10u
#define SIU_DSPIH_DATA5_WIDTH                    1u
#define SIU_DSPIH_DATA5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA5_SHIFT))&SIU_DSPIH_DATA5_MASK)
#define SIU_DSPIH_DATA4_MASK                     0x800u
#define SIU_DSPIH_DATA4_SHIFT                    11u
#define SIU_DSPIH_DATA4_WIDTH                    1u
#define SIU_DSPIH_DATA4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA4_SHIFT))&SIU_DSPIH_DATA4_MASK)
#define SIU_DSPIH_DATA3_MASK                     0x1000u
#define SIU_DSPIH_DATA3_SHIFT                    12u
#define SIU_DSPIH_DATA3_WIDTH                    1u
#define SIU_DSPIH_DATA3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA3_SHIFT))&SIU_DSPIH_DATA3_MASK)
#define SIU_DSPIH_DATA2_MASK                     0x2000u
#define SIU_DSPIH_DATA2_SHIFT                    13u
#define SIU_DSPIH_DATA2_WIDTH                    1u
#define SIU_DSPIH_DATA2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA2_SHIFT))&SIU_DSPIH_DATA2_MASK)
#define SIU_DSPIH_DATA1_MASK                     0x4000u
#define SIU_DSPIH_DATA1_SHIFT                    14u
#define SIU_DSPIH_DATA1_WIDTH                    1u
#define SIU_DSPIH_DATA1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA1_SHIFT))&SIU_DSPIH_DATA1_MASK)
#define SIU_DSPIH_DATA0_MASK                     0x8000u
#define SIU_DSPIH_DATA0_SHIFT                    15u
#define SIU_DSPIH_DATA0_WIDTH                    1u
#define SIU_DSPIH_DATA0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_DATA0_SHIFT))&SIU_DSPIH_DATA0_MASK)
#define SIU_DSPIH_MASK15_MASK                    0x10000u
#define SIU_DSPIH_MASK15_SHIFT                   16u
#define SIU_DSPIH_MASK15_WIDTH                   1u
#define SIU_DSPIH_MASK15(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK15_SHIFT))&SIU_DSPIH_MASK15_MASK)
#define SIU_DSPIH_MASK14_MASK                    0x20000u
#define SIU_DSPIH_MASK14_SHIFT                   17u
#define SIU_DSPIH_MASK14_WIDTH                   1u
#define SIU_DSPIH_MASK14(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK14_SHIFT))&SIU_DSPIH_MASK14_MASK)
#define SIU_DSPIH_MASK13_MASK                    0x40000u
#define SIU_DSPIH_MASK13_SHIFT                   18u
#define SIU_DSPIH_MASK13_WIDTH                   1u
#define SIU_DSPIH_MASK13(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK13_SHIFT))&SIU_DSPIH_MASK13_MASK)
#define SIU_DSPIH_MASK12_MASK                    0x80000u
#define SIU_DSPIH_MASK12_SHIFT                   19u
#define SIU_DSPIH_MASK12_WIDTH                   1u
#define SIU_DSPIH_MASK12(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK12_SHIFT))&SIU_DSPIH_MASK12_MASK)
#define SIU_DSPIH_MASK11_MASK                    0x100000u
#define SIU_DSPIH_MASK11_SHIFT                   20u
#define SIU_DSPIH_MASK11_WIDTH                   1u
#define SIU_DSPIH_MASK11(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK11_SHIFT))&SIU_DSPIH_MASK11_MASK)
#define SIU_DSPIH_MASK10_MASK                    0x200000u
#define SIU_DSPIH_MASK10_SHIFT                   21u
#define SIU_DSPIH_MASK10_WIDTH                   1u
#define SIU_DSPIH_MASK10(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK10_SHIFT))&SIU_DSPIH_MASK10_MASK)
#define SIU_DSPIH_MASK9_MASK                     0x400000u
#define SIU_DSPIH_MASK9_SHIFT                    22u
#define SIU_DSPIH_MASK9_WIDTH                    1u
#define SIU_DSPIH_MASK9(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK9_SHIFT))&SIU_DSPIH_MASK9_MASK)
#define SIU_DSPIH_MASK8_MASK                     0x800000u
#define SIU_DSPIH_MASK8_SHIFT                    23u
#define SIU_DSPIH_MASK8_WIDTH                    1u
#define SIU_DSPIH_MASK8(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK8_SHIFT))&SIU_DSPIH_MASK8_MASK)
#define SIU_DSPIH_MASK7_MASK                     0x1000000u
#define SIU_DSPIH_MASK7_SHIFT                    24u
#define SIU_DSPIH_MASK7_WIDTH                    1u
#define SIU_DSPIH_MASK7(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK7_SHIFT))&SIU_DSPIH_MASK7_MASK)
#define SIU_DSPIH_MASK6_MASK                     0x2000000u
#define SIU_DSPIH_MASK6_SHIFT                    25u
#define SIU_DSPIH_MASK6_WIDTH                    1u
#define SIU_DSPIH_MASK6(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK6_SHIFT))&SIU_DSPIH_MASK6_MASK)
#define SIU_DSPIH_MASK5_MASK                     0x4000000u
#define SIU_DSPIH_MASK5_SHIFT                    26u
#define SIU_DSPIH_MASK5_WIDTH                    1u
#define SIU_DSPIH_MASK5(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK5_SHIFT))&SIU_DSPIH_MASK5_MASK)
#define SIU_DSPIH_MASK4_MASK                     0x8000000u
#define SIU_DSPIH_MASK4_SHIFT                    27u
#define SIU_DSPIH_MASK4_WIDTH                    1u
#define SIU_DSPIH_MASK4(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK4_SHIFT))&SIU_DSPIH_MASK4_MASK)
#define SIU_DSPIH_MASK3_MASK                     0x10000000u
#define SIU_DSPIH_MASK3_SHIFT                    28u
#define SIU_DSPIH_MASK3_WIDTH                    1u
#define SIU_DSPIH_MASK3(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK3_SHIFT))&SIU_DSPIH_MASK3_MASK)
#define SIU_DSPIH_MASK2_MASK                     0x20000000u
#define SIU_DSPIH_MASK2_SHIFT                    29u
#define SIU_DSPIH_MASK2_WIDTH                    1u
#define SIU_DSPIH_MASK2(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK2_SHIFT))&SIU_DSPIH_MASK2_MASK)
#define SIU_DSPIH_MASK1_MASK                     0x40000000u
#define SIU_DSPIH_MASK1_SHIFT                    30u
#define SIU_DSPIH_MASK1_WIDTH                    1u
#define SIU_DSPIH_MASK1(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK1_SHIFT))&SIU_DSPIH_MASK1_MASK)
#define SIU_DSPIH_MASK0_MASK                     0x80000000u
#define SIU_DSPIH_MASK0_SHIFT                    31u
#define SIU_DSPIH_MASK0_WIDTH                    1u
#define SIU_DSPIH_MASK0(x)                       (((uint32_t)(((uint32_t)(x))<<SIU_DSPIH_MASK0_SHIFT))&SIU_DSPIH_MASK0_MASK)
/* DSPIL Bit Fields */
#define SIU_DSPIL_DATA31_MASK                    0x1u
#define SIU_DSPIL_DATA31_SHIFT                   0u
#define SIU_DSPIL_DATA31_WIDTH                   1u
#define SIU_DSPIL_DATA31(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA31_SHIFT))&SIU_DSPIL_DATA31_MASK)
#define SIU_DSPIL_DATA30_MASK                    0x2u
#define SIU_DSPIL_DATA30_SHIFT                   1u
#define SIU_DSPIL_DATA30_WIDTH                   1u
#define SIU_DSPIL_DATA30(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA30_SHIFT))&SIU_DSPIL_DATA30_MASK)
#define SIU_DSPIL_DATA29_MASK                    0x4u
#define SIU_DSPIL_DATA29_SHIFT                   2u
#define SIU_DSPIL_DATA29_WIDTH                   1u
#define SIU_DSPIL_DATA29(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA29_SHIFT))&SIU_DSPIL_DATA29_MASK)
#define SIU_DSPIL_DATA28_MASK                    0x8u
#define SIU_DSPIL_DATA28_SHIFT                   3u
#define SIU_DSPIL_DATA28_WIDTH                   1u
#define SIU_DSPIL_DATA28(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA28_SHIFT))&SIU_DSPIL_DATA28_MASK)
#define SIU_DSPIL_DATA27_MASK                    0x10u
#define SIU_DSPIL_DATA27_SHIFT                   4u
#define SIU_DSPIL_DATA27_WIDTH                   1u
#define SIU_DSPIL_DATA27(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA27_SHIFT))&SIU_DSPIL_DATA27_MASK)
#define SIU_DSPIL_DATA26_MASK                    0x20u
#define SIU_DSPIL_DATA26_SHIFT                   5u
#define SIU_DSPIL_DATA26_WIDTH                   1u
#define SIU_DSPIL_DATA26(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA26_SHIFT))&SIU_DSPIL_DATA26_MASK)
#define SIU_DSPIL_DATA25_MASK                    0x40u
#define SIU_DSPIL_DATA25_SHIFT                   6u
#define SIU_DSPIL_DATA25_WIDTH                   1u
#define SIU_DSPIL_DATA25(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA25_SHIFT))&SIU_DSPIL_DATA25_MASK)
#define SIU_DSPIL_DATA24_MASK                    0x80u
#define SIU_DSPIL_DATA24_SHIFT                   7u
#define SIU_DSPIL_DATA24_WIDTH                   1u
#define SIU_DSPIL_DATA24(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA24_SHIFT))&SIU_DSPIL_DATA24_MASK)
#define SIU_DSPIL_DATA23_MASK                    0x100u
#define SIU_DSPIL_DATA23_SHIFT                   8u
#define SIU_DSPIL_DATA23_WIDTH                   1u
#define SIU_DSPIL_DATA23(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA23_SHIFT))&SIU_DSPIL_DATA23_MASK)
#define SIU_DSPIL_DATA22_MASK                    0x200u
#define SIU_DSPIL_DATA22_SHIFT                   9u
#define SIU_DSPIL_DATA22_WIDTH                   1u
#define SIU_DSPIL_DATA22(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA22_SHIFT))&SIU_DSPIL_DATA22_MASK)
#define SIU_DSPIL_DATA21_MASK                    0x400u
#define SIU_DSPIL_DATA21_SHIFT                   10u
#define SIU_DSPIL_DATA21_WIDTH                   1u
#define SIU_DSPIL_DATA21(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA21_SHIFT))&SIU_DSPIL_DATA21_MASK)
#define SIU_DSPIL_DATA20_MASK                    0x800u
#define SIU_DSPIL_DATA20_SHIFT                   11u
#define SIU_DSPIL_DATA20_WIDTH                   1u
#define SIU_DSPIL_DATA20(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA20_SHIFT))&SIU_DSPIL_DATA20_MASK)
#define SIU_DSPIL_DATA19_MASK                    0x1000u
#define SIU_DSPIL_DATA19_SHIFT                   12u
#define SIU_DSPIL_DATA19_WIDTH                   1u
#define SIU_DSPIL_DATA19(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA19_SHIFT))&SIU_DSPIL_DATA19_MASK)
#define SIU_DSPIL_DATA18_MASK                    0x2000u
#define SIU_DSPIL_DATA18_SHIFT                   13u
#define SIU_DSPIL_DATA18_WIDTH                   1u
#define SIU_DSPIL_DATA18(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA18_SHIFT))&SIU_DSPIL_DATA18_MASK)
#define SIU_DSPIL_DATA17_MASK                    0x4000u
#define SIU_DSPIL_DATA17_SHIFT                   14u
#define SIU_DSPIL_DATA17_WIDTH                   1u
#define SIU_DSPIL_DATA17(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA17_SHIFT))&SIU_DSPIL_DATA17_MASK)
#define SIU_DSPIL_DATA16_MASK                    0x8000u
#define SIU_DSPIL_DATA16_SHIFT                   15u
#define SIU_DSPIL_DATA16_WIDTH                   1u
#define SIU_DSPIL_DATA16(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_DATA16_SHIFT))&SIU_DSPIL_DATA16_MASK)
#define SIU_DSPIL_MASK31_MASK                    0x10000u
#define SIU_DSPIL_MASK31_SHIFT                   16u
#define SIU_DSPIL_MASK31_WIDTH                   1u
#define SIU_DSPIL_MASK31(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK31_SHIFT))&SIU_DSPIL_MASK31_MASK)
#define SIU_DSPIL_MASK30_MASK                    0x20000u
#define SIU_DSPIL_MASK30_SHIFT                   17u
#define SIU_DSPIL_MASK30_WIDTH                   1u
#define SIU_DSPIL_MASK30(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK30_SHIFT))&SIU_DSPIL_MASK30_MASK)
#define SIU_DSPIL_MASK29_MASK                    0x40000u
#define SIU_DSPIL_MASK29_SHIFT                   18u
#define SIU_DSPIL_MASK29_WIDTH                   1u
#define SIU_DSPIL_MASK29(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK29_SHIFT))&SIU_DSPIL_MASK29_MASK)
#define SIU_DSPIL_MASK28_MASK                    0x80000u
#define SIU_DSPIL_MASK28_SHIFT                   19u
#define SIU_DSPIL_MASK28_WIDTH                   1u
#define SIU_DSPIL_MASK28(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK28_SHIFT))&SIU_DSPIL_MASK28_MASK)
#define SIU_DSPIL_MASK27_MASK                    0x100000u
#define SIU_DSPIL_MASK27_SHIFT                   20u
#define SIU_DSPIL_MASK27_WIDTH                   1u
#define SIU_DSPIL_MASK27(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK27_SHIFT))&SIU_DSPIL_MASK27_MASK)
#define SIU_DSPIL_MASK26_MASK                    0x200000u
#define SIU_DSPIL_MASK26_SHIFT                   21u
#define SIU_DSPIL_MASK26_WIDTH                   1u
#define SIU_DSPIL_MASK26(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK26_SHIFT))&SIU_DSPIL_MASK26_MASK)
#define SIU_DSPIL_MASK25_MASK                    0x400000u
#define SIU_DSPIL_MASK25_SHIFT                   22u
#define SIU_DSPIL_MASK25_WIDTH                   1u
#define SIU_DSPIL_MASK25(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK25_SHIFT))&SIU_DSPIL_MASK25_MASK)
#define SIU_DSPIL_MASK24_MASK                    0x800000u
#define SIU_DSPIL_MASK24_SHIFT                   23u
#define SIU_DSPIL_MASK24_WIDTH                   1u
#define SIU_DSPIL_MASK24(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK24_SHIFT))&SIU_DSPIL_MASK24_MASK)
#define SIU_DSPIL_MASK23_MASK                    0x1000000u
#define SIU_DSPIL_MASK23_SHIFT                   24u
#define SIU_DSPIL_MASK23_WIDTH                   1u
#define SIU_DSPIL_MASK23(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK23_SHIFT))&SIU_DSPIL_MASK23_MASK)
#define SIU_DSPIL_MASK22_MASK                    0x2000000u
#define SIU_DSPIL_MASK22_SHIFT                   25u
#define SIU_DSPIL_MASK22_WIDTH                   1u
#define SIU_DSPIL_MASK22(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK22_SHIFT))&SIU_DSPIL_MASK22_MASK)
#define SIU_DSPIL_MASK21_MASK                    0x4000000u
#define SIU_DSPIL_MASK21_SHIFT                   26u
#define SIU_DSPIL_MASK21_WIDTH                   1u
#define SIU_DSPIL_MASK21(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK21_SHIFT))&SIU_DSPIL_MASK21_MASK)
#define SIU_DSPIL_MASK20_MASK                    0x8000000u
#define SIU_DSPIL_MASK20_SHIFT                   27u
#define SIU_DSPIL_MASK20_WIDTH                   1u
#define SIU_DSPIL_MASK20(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK20_SHIFT))&SIU_DSPIL_MASK20_MASK)
#define SIU_DSPIL_MASK19_MASK                    0x10000000u
#define SIU_DSPIL_MASK19_SHIFT                   28u
#define SIU_DSPIL_MASK19_WIDTH                   1u
#define SIU_DSPIL_MASK19(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK19_SHIFT))&SIU_DSPIL_MASK19_MASK)
#define SIU_DSPIL_MASK18_MASK                    0x20000000u
#define SIU_DSPIL_MASK18_SHIFT                   29u
#define SIU_DSPIL_MASK18_WIDTH                   1u
#define SIU_DSPIL_MASK18(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK18_SHIFT))&SIU_DSPIL_MASK18_MASK)
#define SIU_DSPIL_MASK17_MASK                    0x40000000u
#define SIU_DSPIL_MASK17_SHIFT                   30u
#define SIU_DSPIL_MASK17_WIDTH                   1u
#define SIU_DSPIL_MASK17(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK17_SHIFT))&SIU_DSPIL_MASK17_MASK)
#define SIU_DSPIL_MASK16_MASK                    0x80000000u
#define SIU_DSPIL_MASK16_SHIFT                   31u
#define SIU_DSPIL_MASK16_WIDTH                   1u
#define SIU_DSPIL_MASK16(x)                      (((uint32_t)(((uint32_t)(x))<<SIU_DSPIL_MASK16_SHIFT))&SIU_DSPIL_MASK16_MASK)
/* ETPUBA Bit Fields */
#define SIU_ETPUBA_ETPUB16_MASK                  0x1u
#define SIU_ETPUBA_ETPUB16_SHIFT                 0u
#define SIU_ETPUBA_ETPUB16_WIDTH                 1u
#define SIU_ETPUBA_ETPUB16(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB16_SHIFT))&SIU_ETPUBA_ETPUB16_MASK)
#define SIU_ETPUBA_ETPUB17_MASK                  0x2u
#define SIU_ETPUBA_ETPUB17_SHIFT                 1u
#define SIU_ETPUBA_ETPUB17_WIDTH                 1u
#define SIU_ETPUBA_ETPUB17(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB17_SHIFT))&SIU_ETPUBA_ETPUB17_MASK)
#define SIU_ETPUBA_ETPUB18_MASK                  0x4u
#define SIU_ETPUBA_ETPUB18_SHIFT                 2u
#define SIU_ETPUBA_ETPUB18_WIDTH                 1u
#define SIU_ETPUBA_ETPUB18(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB18_SHIFT))&SIU_ETPUBA_ETPUB18_MASK)
#define SIU_ETPUBA_ETPUB19_MASK                  0x8u
#define SIU_ETPUBA_ETPUB19_SHIFT                 3u
#define SIU_ETPUBA_ETPUB19_WIDTH                 1u
#define SIU_ETPUBA_ETPUB19(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB19_SHIFT))&SIU_ETPUBA_ETPUB19_MASK)
#define SIU_ETPUBA_ETPUB20_MASK                  0x10u
#define SIU_ETPUBA_ETPUB20_SHIFT                 4u
#define SIU_ETPUBA_ETPUB20_WIDTH                 1u
#define SIU_ETPUBA_ETPUB20(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB20_SHIFT))&SIU_ETPUBA_ETPUB20_MASK)
#define SIU_ETPUBA_ETPUB21_MASK                  0x20u
#define SIU_ETPUBA_ETPUB21_SHIFT                 5u
#define SIU_ETPUBA_ETPUB21_WIDTH                 1u
#define SIU_ETPUBA_ETPUB21(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB21_SHIFT))&SIU_ETPUBA_ETPUB21_MASK)
#define SIU_ETPUBA_ETPUB22_MASK                  0x40u
#define SIU_ETPUBA_ETPUB22_SHIFT                 6u
#define SIU_ETPUBA_ETPUB22_WIDTH                 1u
#define SIU_ETPUBA_ETPUB22(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB22_SHIFT))&SIU_ETPUBA_ETPUB22_MASK)
#define SIU_ETPUBA_ETPUB23_MASK                  0x80u
#define SIU_ETPUBA_ETPUB23_SHIFT                 7u
#define SIU_ETPUBA_ETPUB23_WIDTH                 1u
#define SIU_ETPUBA_ETPUB23(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB23_SHIFT))&SIU_ETPUBA_ETPUB23_MASK)
#define SIU_ETPUBA_ETPUB24_MASK                  0x100u
#define SIU_ETPUBA_ETPUB24_SHIFT                 8u
#define SIU_ETPUBA_ETPUB24_WIDTH                 1u
#define SIU_ETPUBA_ETPUB24(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB24_SHIFT))&SIU_ETPUBA_ETPUB24_MASK)
#define SIU_ETPUBA_ETPUB25_MASK                  0x200u
#define SIU_ETPUBA_ETPUB25_SHIFT                 9u
#define SIU_ETPUBA_ETPUB25_WIDTH                 1u
#define SIU_ETPUBA_ETPUB25(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB25_SHIFT))&SIU_ETPUBA_ETPUB25_MASK)
#define SIU_ETPUBA_ETPUB26_MASK                  0x400u
#define SIU_ETPUBA_ETPUB26_SHIFT                 10u
#define SIU_ETPUBA_ETPUB26_WIDTH                 1u
#define SIU_ETPUBA_ETPUB26(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB26_SHIFT))&SIU_ETPUBA_ETPUB26_MASK)
#define SIU_ETPUBA_ETPUB27_MASK                  0x800u
#define SIU_ETPUBA_ETPUB27_SHIFT                 11u
#define SIU_ETPUBA_ETPUB27_WIDTH                 1u
#define SIU_ETPUBA_ETPUB27(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB27_SHIFT))&SIU_ETPUBA_ETPUB27_MASK)
#define SIU_ETPUBA_ETPUB28_MASK                  0x1000u
#define SIU_ETPUBA_ETPUB28_SHIFT                 12u
#define SIU_ETPUBA_ETPUB28_WIDTH                 1u
#define SIU_ETPUBA_ETPUB28(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB28_SHIFT))&SIU_ETPUBA_ETPUB28_MASK)
#define SIU_ETPUBA_ETPUB29_MASK                  0x2000u
#define SIU_ETPUBA_ETPUB29_SHIFT                 13u
#define SIU_ETPUBA_ETPUB29_WIDTH                 1u
#define SIU_ETPUBA_ETPUB29(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB29_SHIFT))&SIU_ETPUBA_ETPUB29_MASK)
#define SIU_ETPUBA_ETPUB30_MASK                  0x4000u
#define SIU_ETPUBA_ETPUB30_SHIFT                 14u
#define SIU_ETPUBA_ETPUB30_WIDTH                 1u
#define SIU_ETPUBA_ETPUB30(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB30_SHIFT))&SIU_ETPUBA_ETPUB30_MASK)
#define SIU_ETPUBA_ETPUB31_MASK                  0x8000u
#define SIU_ETPUBA_ETPUB31_SHIFT                 15u
#define SIU_ETPUBA_ETPUB31_WIDTH                 1u
#define SIU_ETPUBA_ETPUB31(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB31_SHIFT))&SIU_ETPUBA_ETPUB31_MASK)
#define SIU_ETPUBA_ETPUB0_MASK                   0x10000u
#define SIU_ETPUBA_ETPUB0_SHIFT                  16u
#define SIU_ETPUBA_ETPUB0_WIDTH                  1u
#define SIU_ETPUBA_ETPUB0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB0_SHIFT))&SIU_ETPUBA_ETPUB0_MASK)
#define SIU_ETPUBA_ETPUB1_MASK                   0x20000u
#define SIU_ETPUBA_ETPUB1_SHIFT                  17u
#define SIU_ETPUBA_ETPUB1_WIDTH                  1u
#define SIU_ETPUBA_ETPUB1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB1_SHIFT))&SIU_ETPUBA_ETPUB1_MASK)
#define SIU_ETPUBA_ETPUB2_MASK                   0x40000u
#define SIU_ETPUBA_ETPUB2_SHIFT                  18u
#define SIU_ETPUBA_ETPUB2_WIDTH                  1u
#define SIU_ETPUBA_ETPUB2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB2_SHIFT))&SIU_ETPUBA_ETPUB2_MASK)
#define SIU_ETPUBA_ETPUB3_MASK                   0x80000u
#define SIU_ETPUBA_ETPUB3_SHIFT                  19u
#define SIU_ETPUBA_ETPUB3_WIDTH                  1u
#define SIU_ETPUBA_ETPUB3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB3_SHIFT))&SIU_ETPUBA_ETPUB3_MASK)
#define SIU_ETPUBA_ETPUB4_MASK                   0x100000u
#define SIU_ETPUBA_ETPUB4_SHIFT                  20u
#define SIU_ETPUBA_ETPUB4_WIDTH                  1u
#define SIU_ETPUBA_ETPUB4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB4_SHIFT))&SIU_ETPUBA_ETPUB4_MASK)
#define SIU_ETPUBA_ETPUB5_MASK                   0x200000u
#define SIU_ETPUBA_ETPUB5_SHIFT                  21u
#define SIU_ETPUBA_ETPUB5_WIDTH                  1u
#define SIU_ETPUBA_ETPUB5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB5_SHIFT))&SIU_ETPUBA_ETPUB5_MASK)
#define SIU_ETPUBA_ETPUB6_MASK                   0x400000u
#define SIU_ETPUBA_ETPUB6_SHIFT                  22u
#define SIU_ETPUBA_ETPUB6_WIDTH                  1u
#define SIU_ETPUBA_ETPUB6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB6_SHIFT))&SIU_ETPUBA_ETPUB6_MASK)
#define SIU_ETPUBA_ETPUB7_MASK                   0x800000u
#define SIU_ETPUBA_ETPUB7_SHIFT                  23u
#define SIU_ETPUBA_ETPUB7_WIDTH                  1u
#define SIU_ETPUBA_ETPUB7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB7_SHIFT))&SIU_ETPUBA_ETPUB7_MASK)
#define SIU_ETPUBA_ETPUB8_MASK                   0x1000000u
#define SIU_ETPUBA_ETPUB8_SHIFT                  24u
#define SIU_ETPUBA_ETPUB8_WIDTH                  1u
#define SIU_ETPUBA_ETPUB8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB8_SHIFT))&SIU_ETPUBA_ETPUB8_MASK)
#define SIU_ETPUBA_ETPUB9_MASK                   0x2000000u
#define SIU_ETPUBA_ETPUB9_SHIFT                  25u
#define SIU_ETPUBA_ETPUB9_WIDTH                  1u
#define SIU_ETPUBA_ETPUB9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB9_SHIFT))&SIU_ETPUBA_ETPUB9_MASK)
#define SIU_ETPUBA_ETPUB10_MASK                  0x4000000u
#define SIU_ETPUBA_ETPUB10_SHIFT                 26u
#define SIU_ETPUBA_ETPUB10_WIDTH                 1u
#define SIU_ETPUBA_ETPUB10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB10_SHIFT))&SIU_ETPUBA_ETPUB10_MASK)
#define SIU_ETPUBA_ETPUB11_MASK                  0x8000000u
#define SIU_ETPUBA_ETPUB11_SHIFT                 27u
#define SIU_ETPUBA_ETPUB11_WIDTH                 1u
#define SIU_ETPUBA_ETPUB11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB11_SHIFT))&SIU_ETPUBA_ETPUB11_MASK)
#define SIU_ETPUBA_ETPUB12_MASK                  0x10000000u
#define SIU_ETPUBA_ETPUB12_SHIFT                 28u
#define SIU_ETPUBA_ETPUB12_WIDTH                 1u
#define SIU_ETPUBA_ETPUB12(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB12_SHIFT))&SIU_ETPUBA_ETPUB12_MASK)
#define SIU_ETPUBA_ETPUB13_MASK                  0x20000000u
#define SIU_ETPUBA_ETPUB13_SHIFT                 29u
#define SIU_ETPUBA_ETPUB13_WIDTH                 1u
#define SIU_ETPUBA_ETPUB13(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB13_SHIFT))&SIU_ETPUBA_ETPUB13_MASK)
#define SIU_ETPUBA_ETPUB14_MASK                  0x40000000u
#define SIU_ETPUBA_ETPUB14_SHIFT                 30u
#define SIU_ETPUBA_ETPUB14_WIDTH                 1u
#define SIU_ETPUBA_ETPUB14(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB14_SHIFT))&SIU_ETPUBA_ETPUB14_MASK)
#define SIU_ETPUBA_ETPUB15_MASK                  0x80000000u
#define SIU_ETPUBA_ETPUB15_SHIFT                 31u
#define SIU_ETPUBA_ETPUB15_WIDTH                 1u
#define SIU_ETPUBA_ETPUB15(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBA_ETPUB15_SHIFT))&SIU_ETPUBA_ETPUB15_MASK)
/* EMIOSA Bit Fields */
#define SIU_EMIOSA_EMIOS0_7_OUT31_MASK           0x1u
#define SIU_EMIOSA_EMIOS0_7_OUT31_SHIFT          0u
#define SIU_EMIOSA_EMIOS0_7_OUT31_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_7_OUT31(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_7_OUT31_SHIFT))&SIU_EMIOSA_EMIOS0_7_OUT31_MASK)
#define SIU_EMIOSA_EMIOS0_6_OUT30_MASK           0x2u
#define SIU_EMIOSA_EMIOS0_6_OUT30_SHIFT          1u
#define SIU_EMIOSA_EMIOS0_6_OUT30_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_6_OUT30(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_6_OUT30_SHIFT))&SIU_EMIOSA_EMIOS0_6_OUT30_MASK)
#define SIU_EMIOSA_EMIOS0_5_OUT29_MASK           0x4u
#define SIU_EMIOSA_EMIOS0_5_OUT29_SHIFT          2u
#define SIU_EMIOSA_EMIOS0_5_OUT29_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_5_OUT29(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_5_OUT29_SHIFT))&SIU_EMIOSA_EMIOS0_5_OUT29_MASK)
#define SIU_EMIOSA_EMIOS0_4_OUT28_MASK           0x8u
#define SIU_EMIOSA_EMIOS0_4_OUT28_SHIFT          3u
#define SIU_EMIOSA_EMIOS0_4_OUT28_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_4_OUT28(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_4_OUT28_SHIFT))&SIU_EMIOSA_EMIOS0_4_OUT28_MASK)
#define SIU_EMIOSA_EMIOS0_3_OUT27_MASK           0x10u
#define SIU_EMIOSA_EMIOS0_3_OUT27_SHIFT          4u
#define SIU_EMIOSA_EMIOS0_3_OUT27_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_3_OUT27(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_3_OUT27_SHIFT))&SIU_EMIOSA_EMIOS0_3_OUT27_MASK)
#define SIU_EMIOSA_EMIOS0_2_OUT26_MASK           0x20u
#define SIU_EMIOSA_EMIOS0_2_OUT26_SHIFT          5u
#define SIU_EMIOSA_EMIOS0_2_OUT26_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_2_OUT26(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_2_OUT26_SHIFT))&SIU_EMIOSA_EMIOS0_2_OUT26_MASK)
#define SIU_EMIOSA_EMIOS0_1_OUT25_MASK           0x40u
#define SIU_EMIOSA_EMIOS0_1_OUT25_SHIFT          6u
#define SIU_EMIOSA_EMIOS0_1_OUT25_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_1_OUT25(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_1_OUT25_SHIFT))&SIU_EMIOSA_EMIOS0_1_OUT25_MASK)
#define SIU_EMIOSA_EMIOS0_0_OUT24_MASK           0x80u
#define SIU_EMIOSA_EMIOS0_0_OUT24_SHIFT          7u
#define SIU_EMIOSA_EMIOS0_0_OUT24_WIDTH          1u
#define SIU_EMIOSA_EMIOS0_0_OUT24(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_0_OUT24_SHIFT))&SIU_EMIOSA_EMIOS0_0_OUT24_MASK)
#define SIU_EMIOSA_EMIOS0_23_OUT23_MASK          0x100u
#define SIU_EMIOSA_EMIOS0_23_OUT23_SHIFT         8u
#define SIU_EMIOSA_EMIOS0_23_OUT23_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_23_OUT23(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_23_OUT23_SHIFT))&SIU_EMIOSA_EMIOS0_23_OUT23_MASK)
#define SIU_EMIOSA_EMIOS0_22_OUT22_MASK          0x200u
#define SIU_EMIOSA_EMIOS0_22_OUT22_SHIFT         9u
#define SIU_EMIOSA_EMIOS0_22_OUT22_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_22_OUT22(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_22_OUT22_SHIFT))&SIU_EMIOSA_EMIOS0_22_OUT22_MASK)
#define SIU_EMIOSA_EMIOS0_21_OUT21_MASK          0x400u
#define SIU_EMIOSA_EMIOS0_21_OUT21_SHIFT         10u
#define SIU_EMIOSA_EMIOS0_21_OUT21_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_21_OUT21(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_21_OUT21_SHIFT))&SIU_EMIOSA_EMIOS0_21_OUT21_MASK)
#define SIU_EMIOSA_EMIOS0_20_OUT20_MASK          0x800u
#define SIU_EMIOSA_EMIOS0_20_OUT20_SHIFT         11u
#define SIU_EMIOSA_EMIOS0_20_OUT20_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_20_OUT20(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_20_OUT20_SHIFT))&SIU_EMIOSA_EMIOS0_20_OUT20_MASK)
#define SIU_EMIOSA_EMIOS0_19_OUT19_MASK          0x1000u
#define SIU_EMIOSA_EMIOS0_19_OUT19_SHIFT         12u
#define SIU_EMIOSA_EMIOS0_19_OUT19_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_19_OUT19(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_19_OUT19_SHIFT))&SIU_EMIOSA_EMIOS0_19_OUT19_MASK)
#define SIU_EMIOSA_EMIOS0_18_OUT18_MASK          0x2000u
#define SIU_EMIOSA_EMIOS0_18_OUT18_SHIFT         13u
#define SIU_EMIOSA_EMIOS0_18_OUT18_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_18_OUT18(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_18_OUT18_SHIFT))&SIU_EMIOSA_EMIOS0_18_OUT18_MASK)
#define SIU_EMIOSA_EMIOS0_17_OUT17_MASK          0x4000u
#define SIU_EMIOSA_EMIOS0_17_OUT17_SHIFT         14u
#define SIU_EMIOSA_EMIOS0_17_OUT17_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_17_OUT17(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_17_OUT17_SHIFT))&SIU_EMIOSA_EMIOS0_17_OUT17_MASK)
#define SIU_EMIOSA_EMIOS0_16_OUT16_MASK          0x8000u
#define SIU_EMIOSA_EMIOS0_16_OUT16_SHIFT         15u
#define SIU_EMIOSA_EMIOS0_16_OUT16_WIDTH         1u
#define SIU_EMIOSA_EMIOS0_16_OUT16(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_16_OUT16_SHIFT))&SIU_EMIOSA_EMIOS0_16_OUT16_MASK)
#define SIU_EMIOSA_EMIOS1_7_OUT15_MASK           0x10000u
#define SIU_EMIOSA_EMIOS1_7_OUT15_SHIFT          16u
#define SIU_EMIOSA_EMIOS1_7_OUT15_WIDTH          1u
#define SIU_EMIOSA_EMIOS1_7_OUT15(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_7_OUT15_SHIFT))&SIU_EMIOSA_EMIOS1_7_OUT15_MASK)
#define SIU_EMIOSA_EMIOS1_6_OUT14_MASK           0x20000u
#define SIU_EMIOSA_EMIOS1_6_OUT14_SHIFT          17u
#define SIU_EMIOSA_EMIOS1_6_OUT14_WIDTH          1u
#define SIU_EMIOSA_EMIOS1_6_OUT14(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_6_OUT14_SHIFT))&SIU_EMIOSA_EMIOS1_6_OUT14_MASK)
#define SIU_EMIOSA_EMIOS1_5_OUT13_MASK           0x40000u
#define SIU_EMIOSA_EMIOS1_5_OUT13_SHIFT          18u
#define SIU_EMIOSA_EMIOS1_5_OUT13_WIDTH          1u
#define SIU_EMIOSA_EMIOS1_5_OUT13(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_5_OUT13_SHIFT))&SIU_EMIOSA_EMIOS1_5_OUT13_MASK)
#define SIU_EMIOSA_EMIOS1_4_OUT12_MASK           0x80000u
#define SIU_EMIOSA_EMIOS1_4_OUT12_SHIFT          19u
#define SIU_EMIOSA_EMIOS1_4_OUT12_WIDTH          1u
#define SIU_EMIOSA_EMIOS1_4_OUT12(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_4_OUT12_SHIFT))&SIU_EMIOSA_EMIOS1_4_OUT12_MASK)
#define SIU_EMIOSA_EMIOS1_3_OUT11_MASK           0x100000u
#define SIU_EMIOSA_EMIOS1_3_OUT11_SHIFT          20u
#define SIU_EMIOSA_EMIOS1_3_OUT11_WIDTH          1u
#define SIU_EMIOSA_EMIOS1_3_OUT11(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_3_OUT11_SHIFT))&SIU_EMIOSA_EMIOS1_3_OUT11_MASK)
#define SIU_EMIOSA_EMIOS1_2_OUT10_MASK           0x200000u
#define SIU_EMIOSA_EMIOS1_2_OUT10_SHIFT          21u
#define SIU_EMIOSA_EMIOS1_2_OUT10_WIDTH          1u
#define SIU_EMIOSA_EMIOS1_2_OUT10(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_2_OUT10_SHIFT))&SIU_EMIOSA_EMIOS1_2_OUT10_MASK)
#define SIU_EMIOSA_EMIOS1_1_OUT9_MASK            0x400000u
#define SIU_EMIOSA_EMIOS1_1_OUT9_SHIFT           22u
#define SIU_EMIOSA_EMIOS1_1_OUT9_WIDTH           1u
#define SIU_EMIOSA_EMIOS1_1_OUT9(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_1_OUT9_SHIFT))&SIU_EMIOSA_EMIOS1_1_OUT9_MASK)
#define SIU_EMIOSA_EMIOS1_0_OUT8_MASK            0x800000u
#define SIU_EMIOSA_EMIOS1_0_OUT8_SHIFT           23u
#define SIU_EMIOSA_EMIOS1_0_OUT8_WIDTH           1u
#define SIU_EMIOSA_EMIOS1_0_OUT8(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS1_0_OUT8_SHIFT))&SIU_EMIOSA_EMIOS1_0_OUT8_MASK)
#define SIU_EMIOSA_EMIOS0_0_OUT7_MASK            0x1000000u
#define SIU_EMIOSA_EMIOS0_0_OUT7_SHIFT           24u
#define SIU_EMIOSA_EMIOS0_0_OUT7_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_0_OUT7(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_0_OUT7_SHIFT))&SIU_EMIOSA_EMIOS0_0_OUT7_MASK)
#define SIU_EMIOSA_EMIOS0_1_OUT6_MASK            0x2000000u
#define SIU_EMIOSA_EMIOS0_1_OUT6_SHIFT           25u
#define SIU_EMIOSA_EMIOS0_1_OUT6_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_1_OUT6(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_1_OUT6_SHIFT))&SIU_EMIOSA_EMIOS0_1_OUT6_MASK)
#define SIU_EMIOSA_EMIOS0_2_OUT5_MASK            0x4000000u
#define SIU_EMIOSA_EMIOS0_2_OUT5_SHIFT           26u
#define SIU_EMIOSA_EMIOS0_2_OUT5_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_2_OUT5(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_2_OUT5_SHIFT))&SIU_EMIOSA_EMIOS0_2_OUT5_MASK)
#define SIU_EMIOSA_EMIOS0_3_OUT4_MASK            0x8000000u
#define SIU_EMIOSA_EMIOS0_3_OUT4_SHIFT           27u
#define SIU_EMIOSA_EMIOS0_3_OUT4_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_3_OUT4(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_3_OUT4_SHIFT))&SIU_EMIOSA_EMIOS0_3_OUT4_MASK)
#define SIU_EMIOSA_EMIOS0_4_OUT3_MASK            0x10000000u
#define SIU_EMIOSA_EMIOS0_4_OUT3_SHIFT           28u
#define SIU_EMIOSA_EMIOS0_4_OUT3_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_4_OUT3(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_4_OUT3_SHIFT))&SIU_EMIOSA_EMIOS0_4_OUT3_MASK)
#define SIU_EMIOSA_EMIOS0_5_OUT2_MASK            0x20000000u
#define SIU_EMIOSA_EMIOS0_5_OUT2_SHIFT           29u
#define SIU_EMIOSA_EMIOS0_5_OUT2_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_5_OUT2(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_5_OUT2_SHIFT))&SIU_EMIOSA_EMIOS0_5_OUT2_MASK)
#define SIU_EMIOSA_EMIOS0_6_OUT1_MASK            0x40000000u
#define SIU_EMIOSA_EMIOS0_6_OUT1_SHIFT           30u
#define SIU_EMIOSA_EMIOS0_6_OUT1_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_6_OUT1(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_6_OUT1_SHIFT))&SIU_EMIOSA_EMIOS0_6_OUT1_MASK)
#define SIU_EMIOSA_EMIOS0_7_OUT0_MASK            0x80000000u
#define SIU_EMIOSA_EMIOS0_7_OUT0_SHIFT           31u
#define SIU_EMIOSA_EMIOS0_7_OUT0_WIDTH           1u
#define SIU_EMIOSA_EMIOS0_7_OUT0(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSA_EMIOS0_7_OUT0_SHIFT))&SIU_EMIOSA_EMIOS0_7_OUT0_MASK)
/* DSPIAHLA Bit Fields */
#define SIU_DSPIAHLA_DSPIAL31_MASK               0x1u
#define SIU_DSPIAHLA_DSPIAL31_SHIFT              0u
#define SIU_DSPIAHLA_DSPIAL31_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL31(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL31_SHIFT))&SIU_DSPIAHLA_DSPIAL31_MASK)
#define SIU_DSPIAHLA_DSPIAL30_MASK               0x2u
#define SIU_DSPIAHLA_DSPIAL30_SHIFT              1u
#define SIU_DSPIAHLA_DSPIAL30_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL30(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL30_SHIFT))&SIU_DSPIAHLA_DSPIAL30_MASK)
#define SIU_DSPIAHLA_DSPIAL29_MASK               0x4u
#define SIU_DSPIAHLA_DSPIAL29_SHIFT              2u
#define SIU_DSPIAHLA_DSPIAL29_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL29(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL29_SHIFT))&SIU_DSPIAHLA_DSPIAL29_MASK)
#define SIU_DSPIAHLA_DSPIAL28_MASK               0x8u
#define SIU_DSPIAHLA_DSPIAL28_SHIFT              3u
#define SIU_DSPIAHLA_DSPIAL28_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL28(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL28_SHIFT))&SIU_DSPIAHLA_DSPIAL28_MASK)
#define SIU_DSPIAHLA_DSPIAL27_MASK               0x10u
#define SIU_DSPIAHLA_DSPIAL27_SHIFT              4u
#define SIU_DSPIAHLA_DSPIAL27_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL27(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL27_SHIFT))&SIU_DSPIAHLA_DSPIAL27_MASK)
#define SIU_DSPIAHLA_DSPIAL26_MASK               0x20u
#define SIU_DSPIAHLA_DSPIAL26_SHIFT              5u
#define SIU_DSPIAHLA_DSPIAL26_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL26(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL26_SHIFT))&SIU_DSPIAHLA_DSPIAL26_MASK)
#define SIU_DSPIAHLA_DSPIAL25_MASK               0x40u
#define SIU_DSPIAHLA_DSPIAL25_SHIFT              6u
#define SIU_DSPIAHLA_DSPIAL25_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL25(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL25_SHIFT))&SIU_DSPIAHLA_DSPIAL25_MASK)
#define SIU_DSPIAHLA_DSPIAL24_MASK               0x80u
#define SIU_DSPIAHLA_DSPIAL24_SHIFT              7u
#define SIU_DSPIAHLA_DSPIAL24_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL24(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL24_SHIFT))&SIU_DSPIAHLA_DSPIAL24_MASK)
#define SIU_DSPIAHLA_DSPIAL23_MASK               0x100u
#define SIU_DSPIAHLA_DSPIAL23_SHIFT              8u
#define SIU_DSPIAHLA_DSPIAL23_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL23(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL23_SHIFT))&SIU_DSPIAHLA_DSPIAL23_MASK)
#define SIU_DSPIAHLA_DSPIAL22_MASK               0x200u
#define SIU_DSPIAHLA_DSPIAL22_SHIFT              9u
#define SIU_DSPIAHLA_DSPIAL22_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL22(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL22_SHIFT))&SIU_DSPIAHLA_DSPIAL22_MASK)
#define SIU_DSPIAHLA_DSPIAL21_MASK               0x400u
#define SIU_DSPIAHLA_DSPIAL21_SHIFT              10u
#define SIU_DSPIAHLA_DSPIAL21_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL21(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL21_SHIFT))&SIU_DSPIAHLA_DSPIAL21_MASK)
#define SIU_DSPIAHLA_DSPIAL20_MASK               0x800u
#define SIU_DSPIAHLA_DSPIAL20_SHIFT              11u
#define SIU_DSPIAHLA_DSPIAL20_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL20(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL20_SHIFT))&SIU_DSPIAHLA_DSPIAL20_MASK)
#define SIU_DSPIAHLA_DSPIAL19_MASK               0x1000u
#define SIU_DSPIAHLA_DSPIAL19_SHIFT              12u
#define SIU_DSPIAHLA_DSPIAL19_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL19(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL19_SHIFT))&SIU_DSPIAHLA_DSPIAL19_MASK)
#define SIU_DSPIAHLA_DSPIAL18_MASK               0x2000u
#define SIU_DSPIAHLA_DSPIAL18_SHIFT              13u
#define SIU_DSPIAHLA_DSPIAL18_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL18(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL18_SHIFT))&SIU_DSPIAHLA_DSPIAL18_MASK)
#define SIU_DSPIAHLA_DSPIAL17_MASK               0x4000u
#define SIU_DSPIAHLA_DSPIAL17_SHIFT              14u
#define SIU_DSPIAHLA_DSPIAL17_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL17(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL17_SHIFT))&SIU_DSPIAHLA_DSPIAL17_MASK)
#define SIU_DSPIAHLA_DSPIAL16_MASK               0x8000u
#define SIU_DSPIAHLA_DSPIAL16_SHIFT              15u
#define SIU_DSPIAHLA_DSPIAL16_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAL16(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAL16_SHIFT))&SIU_DSPIAHLA_DSPIAL16_MASK)
#define SIU_DSPIAHLA_DSPIAH15_MASK               0x10000u
#define SIU_DSPIAHLA_DSPIAH15_SHIFT              16u
#define SIU_DSPIAHLA_DSPIAH15_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAH15(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH15_SHIFT))&SIU_DSPIAHLA_DSPIAH15_MASK)
#define SIU_DSPIAHLA_DSPIAH14_MASK               0x20000u
#define SIU_DSPIAHLA_DSPIAH14_SHIFT              17u
#define SIU_DSPIAHLA_DSPIAH14_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAH14(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH14_SHIFT))&SIU_DSPIAHLA_DSPIAH14_MASK)
#define SIU_DSPIAHLA_DSPIAH13_MASK               0x40000u
#define SIU_DSPIAHLA_DSPIAH13_SHIFT              18u
#define SIU_DSPIAHLA_DSPIAH13_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAH13(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH13_SHIFT))&SIU_DSPIAHLA_DSPIAH13_MASK)
#define SIU_DSPIAHLA_DSPIAH12_MASK               0x80000u
#define SIU_DSPIAHLA_DSPIAH12_SHIFT              19u
#define SIU_DSPIAHLA_DSPIAH12_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAH12(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH12_SHIFT))&SIU_DSPIAHLA_DSPIAH12_MASK)
#define SIU_DSPIAHLA_DSPIAH11_MASK               0x100000u
#define SIU_DSPIAHLA_DSPIAH11_SHIFT              20u
#define SIU_DSPIAHLA_DSPIAH11_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAH11(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH11_SHIFT))&SIU_DSPIAHLA_DSPIAH11_MASK)
#define SIU_DSPIAHLA_DSPIAH10_MASK               0x200000u
#define SIU_DSPIAHLA_DSPIAH10_SHIFT              21u
#define SIU_DSPIAHLA_DSPIAH10_WIDTH              1u
#define SIU_DSPIAHLA_DSPIAH10(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH10_SHIFT))&SIU_DSPIAHLA_DSPIAH10_MASK)
#define SIU_DSPIAHLA_DSPIAH9_MASK                0x400000u
#define SIU_DSPIAHLA_DSPIAH9_SHIFT               22u
#define SIU_DSPIAHLA_DSPIAH9_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH9(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH9_SHIFT))&SIU_DSPIAHLA_DSPIAH9_MASK)
#define SIU_DSPIAHLA_DSPIAH8_MASK                0x800000u
#define SIU_DSPIAHLA_DSPIAH8_SHIFT               23u
#define SIU_DSPIAHLA_DSPIAH8_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH8(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH8_SHIFT))&SIU_DSPIAHLA_DSPIAH8_MASK)
#define SIU_DSPIAHLA_DSPIAH7_MASK                0x1000000u
#define SIU_DSPIAHLA_DSPIAH7_SHIFT               24u
#define SIU_DSPIAHLA_DSPIAH7_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH7(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH7_SHIFT))&SIU_DSPIAHLA_DSPIAH7_MASK)
#define SIU_DSPIAHLA_DSPIAH6_MASK                0x2000000u
#define SIU_DSPIAHLA_DSPIAH6_SHIFT               25u
#define SIU_DSPIAHLA_DSPIAH6_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH6(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH6_SHIFT))&SIU_DSPIAHLA_DSPIAH6_MASK)
#define SIU_DSPIAHLA_DSPIAH5_MASK                0x4000000u
#define SIU_DSPIAHLA_DSPIAH5_SHIFT               26u
#define SIU_DSPIAHLA_DSPIAH5_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH5(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH5_SHIFT))&SIU_DSPIAHLA_DSPIAH5_MASK)
#define SIU_DSPIAHLA_DSPIAH4_MASK                0x8000000u
#define SIU_DSPIAHLA_DSPIAH4_SHIFT               27u
#define SIU_DSPIAHLA_DSPIAH4_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH4(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH4_SHIFT))&SIU_DSPIAHLA_DSPIAH4_MASK)
#define SIU_DSPIAHLA_DSPIAH3_MASK                0x10000000u
#define SIU_DSPIAHLA_DSPIAH3_SHIFT               28u
#define SIU_DSPIAHLA_DSPIAH3_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH3(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH3_SHIFT))&SIU_DSPIAHLA_DSPIAH3_MASK)
#define SIU_DSPIAHLA_DSPIAH2_MASK                0x20000000u
#define SIU_DSPIAHLA_DSPIAH2_SHIFT               29u
#define SIU_DSPIAHLA_DSPIAH2_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH2(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH2_SHIFT))&SIU_DSPIAHLA_DSPIAH2_MASK)
#define SIU_DSPIAHLA_DSPIAH1_MASK                0x40000000u
#define SIU_DSPIAHLA_DSPIAH1_SHIFT               30u
#define SIU_DSPIAHLA_DSPIAH1_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH1(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH1_SHIFT))&SIU_DSPIAHLA_DSPIAH1_MASK)
#define SIU_DSPIAHLA_DSPIAH0_MASK                0x80000000u
#define SIU_DSPIAHLA_DSPIAH0_SHIFT               31u
#define SIU_DSPIAHLA_DSPIAH0_WIDTH               1u
#define SIU_DSPIAHLA_DSPIAH0(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIAHLA_DSPIAH0_SHIFT))&SIU_DSPIAHLA_DSPIAH0_MASK)
/* ETPUAB Bit Fields */
#define SIU_ETPUAB_ETPUA11_MASK                  0x1u
#define SIU_ETPUAB_ETPUA11_SHIFT                 0u
#define SIU_ETPUAB_ETPUA11_WIDTH                 1u
#define SIU_ETPUAB_ETPUA11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA11_SHIFT))&SIU_ETPUAB_ETPUA11_MASK)
#define SIU_ETPUAB_ETPUA10_MASK                  0x2u
#define SIU_ETPUAB_ETPUA10_SHIFT                 1u
#define SIU_ETPUAB_ETPUA10_WIDTH                 1u
#define SIU_ETPUAB_ETPUA10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA10_SHIFT))&SIU_ETPUAB_ETPUA10_MASK)
#define SIU_ETPUAB_ETPUA9_MASK                   0x4u
#define SIU_ETPUAB_ETPUA9_SHIFT                  2u
#define SIU_ETPUAB_ETPUA9_WIDTH                  1u
#define SIU_ETPUAB_ETPUA9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA9_SHIFT))&SIU_ETPUAB_ETPUA9_MASK)
#define SIU_ETPUAB_ETPUA8_MASK                   0x8u
#define SIU_ETPUAB_ETPUA8_SHIFT                  3u
#define SIU_ETPUAB_ETPUA8_WIDTH                  1u
#define SIU_ETPUAB_ETPUA8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA8_SHIFT))&SIU_ETPUAB_ETPUA8_MASK)
#define SIU_ETPUAB_ETPUA7_MASK                   0x10u
#define SIU_ETPUAB_ETPUA7_SHIFT                  4u
#define SIU_ETPUAB_ETPUA7_WIDTH                  1u
#define SIU_ETPUAB_ETPUA7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA7_SHIFT))&SIU_ETPUAB_ETPUA7_MASK)
#define SIU_ETPUAB_ETPUA6_MASK                   0x20u
#define SIU_ETPUAB_ETPUA6_SHIFT                  5u
#define SIU_ETPUAB_ETPUA6_WIDTH                  1u
#define SIU_ETPUAB_ETPUA6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA6_SHIFT))&SIU_ETPUAB_ETPUA6_MASK)
#define SIU_ETPUAB_ETPUA5_MASK                   0x40u
#define SIU_ETPUAB_ETPUA5_SHIFT                  6u
#define SIU_ETPUAB_ETPUA5_WIDTH                  1u
#define SIU_ETPUAB_ETPUA5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA5_SHIFT))&SIU_ETPUAB_ETPUA5_MASK)
#define SIU_ETPUAB_ETPUA4_MASK                   0x80u
#define SIU_ETPUAB_ETPUA4_SHIFT                  7u
#define SIU_ETPUAB_ETPUA4_WIDTH                  1u
#define SIU_ETPUAB_ETPUA4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA4_SHIFT))&SIU_ETPUAB_ETPUA4_MASK)
#define SIU_ETPUAB_ETPUA3_MASK                   0x100u
#define SIU_ETPUAB_ETPUA3_SHIFT                  8u
#define SIU_ETPUAB_ETPUA3_WIDTH                  1u
#define SIU_ETPUAB_ETPUA3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA3_SHIFT))&SIU_ETPUAB_ETPUA3_MASK)
#define SIU_ETPUAB_ETPUA2_MASK                   0x200u
#define SIU_ETPUAB_ETPUA2_SHIFT                  9u
#define SIU_ETPUAB_ETPUA2_WIDTH                  1u
#define SIU_ETPUAB_ETPUA2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA2_SHIFT))&SIU_ETPUAB_ETPUA2_MASK)
#define SIU_ETPUAB_ETPUA1_MASK                   0x400u
#define SIU_ETPUAB_ETPUA1_SHIFT                  10u
#define SIU_ETPUAB_ETPUA1_WIDTH                  1u
#define SIU_ETPUAB_ETPUA1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA1_SHIFT))&SIU_ETPUAB_ETPUA1_MASK)
#define SIU_ETPUAB_ETPUA0_MASK                   0x800u
#define SIU_ETPUAB_ETPUA0_SHIFT                  11u
#define SIU_ETPUAB_ETPUA0_WIDTH                  1u
#define SIU_ETPUAB_ETPUA0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA0_SHIFT))&SIU_ETPUAB_ETPUA0_MASK)
#define SIU_ETPUAB_ETPUA15_MASK                  0x1000u
#define SIU_ETPUAB_ETPUA15_SHIFT                 12u
#define SIU_ETPUAB_ETPUA15_WIDTH                 1u
#define SIU_ETPUAB_ETPUA15(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA15_SHIFT))&SIU_ETPUAB_ETPUA15_MASK)
#define SIU_ETPUAB_ETPUA14_MASK                  0x2000u
#define SIU_ETPUAB_ETPUA14_SHIFT                 13u
#define SIU_ETPUAB_ETPUA14_WIDTH                 1u
#define SIU_ETPUAB_ETPUA14(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA14_SHIFT))&SIU_ETPUAB_ETPUA14_MASK)
#define SIU_ETPUAB_ETPUA13_MASK                  0x4000u
#define SIU_ETPUAB_ETPUA13_SHIFT                 14u
#define SIU_ETPUAB_ETPUA13_WIDTH                 1u
#define SIU_ETPUAB_ETPUA13(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA13_SHIFT))&SIU_ETPUAB_ETPUA13_MASK)
#define SIU_ETPUAB_ETPUA12_MASK                  0x8000u
#define SIU_ETPUAB_ETPUA12_SHIFT                 15u
#define SIU_ETPUAB_ETPUA12_WIDTH                 1u
#define SIU_ETPUAB_ETPUA12(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA12_SHIFT))&SIU_ETPUAB_ETPUA12_MASK)
#define SIU_ETPUAB_ETPUA30_MASK                  0x10000u
#define SIU_ETPUAB_ETPUA30_SHIFT                 16u
#define SIU_ETPUAB_ETPUA30_WIDTH                 1u
#define SIU_ETPUAB_ETPUA30(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA30_SHIFT))&SIU_ETPUAB_ETPUA30_MASK)
#define SIU_ETPUAB_ETPUA31_MASK                  0x20000u
#define SIU_ETPUAB_ETPUA31_SHIFT                 17u
#define SIU_ETPUAB_ETPUA31_WIDTH                 1u
#define SIU_ETPUAB_ETPUA31(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA31_SHIFT))&SIU_ETPUAB_ETPUA31_MASK)
#define SIU_ETPUAB_ETPUA24_MASK                  0x40000u
#define SIU_ETPUAB_ETPUA24_SHIFT                 18u
#define SIU_ETPUAB_ETPUA24_WIDTH                 1u
#define SIU_ETPUAB_ETPUA24(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA24_SHIFT))&SIU_ETPUAB_ETPUA24_MASK)
#define SIU_ETPUAB_ETPUA25_MASK                  0x80000u
#define SIU_ETPUAB_ETPUA25_SHIFT                 19u
#define SIU_ETPUAB_ETPUA25_WIDTH                 1u
#define SIU_ETPUAB_ETPUA25(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA25_SHIFT))&SIU_ETPUAB_ETPUA25_MASK)
#define SIU_ETPUAB_ETPUA26_MASK                  0x100000u
#define SIU_ETPUAB_ETPUA26_SHIFT                 20u
#define SIU_ETPUAB_ETPUA26_WIDTH                 1u
#define SIU_ETPUAB_ETPUA26(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA26_SHIFT))&SIU_ETPUAB_ETPUA26_MASK)
#define SIU_ETPUAB_ETPUA27_MASK                  0x200000u
#define SIU_ETPUAB_ETPUA27_SHIFT                 21u
#define SIU_ETPUAB_ETPUA27_WIDTH                 1u
#define SIU_ETPUAB_ETPUA27(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA27_SHIFT))&SIU_ETPUAB_ETPUA27_MASK)
#define SIU_ETPUAB_ETPUA28_MASK                  0x400000u
#define SIU_ETPUAB_ETPUA28_SHIFT                 22u
#define SIU_ETPUAB_ETPUA28_WIDTH                 1u
#define SIU_ETPUAB_ETPUA28(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA28_SHIFT))&SIU_ETPUAB_ETPUA28_MASK)
#define SIU_ETPUAB_ETPUA29_MASK                  0x800000u
#define SIU_ETPUAB_ETPUA29_SHIFT                 23u
#define SIU_ETPUAB_ETPUA29_WIDTH                 1u
#define SIU_ETPUAB_ETPUA29(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA29_SHIFT))&SIU_ETPUAB_ETPUA29_MASK)
#define SIU_ETPUAB_ETPUA16_MASK                  0x1000000u
#define SIU_ETPUAB_ETPUA16_SHIFT                 24u
#define SIU_ETPUAB_ETPUA16_WIDTH                 1u
#define SIU_ETPUAB_ETPUA16(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA16_SHIFT))&SIU_ETPUAB_ETPUA16_MASK)
#define SIU_ETPUAB_ETPUA17_MASK                  0x2000000u
#define SIU_ETPUAB_ETPUA17_SHIFT                 25u
#define SIU_ETPUAB_ETPUA17_WIDTH                 1u
#define SIU_ETPUAB_ETPUA17(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA17_SHIFT))&SIU_ETPUAB_ETPUA17_MASK)
#define SIU_ETPUAB_ETPUA18_MASK                  0x4000000u
#define SIU_ETPUAB_ETPUA18_SHIFT                 26u
#define SIU_ETPUAB_ETPUA18_WIDTH                 1u
#define SIU_ETPUAB_ETPUA18(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA18_SHIFT))&SIU_ETPUAB_ETPUA18_MASK)
#define SIU_ETPUAB_ETPUA19_MASK                  0x8000000u
#define SIU_ETPUAB_ETPUA19_SHIFT                 27u
#define SIU_ETPUAB_ETPUA19_WIDTH                 1u
#define SIU_ETPUAB_ETPUA19(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA19_SHIFT))&SIU_ETPUAB_ETPUA19_MASK)
#define SIU_ETPUAB_ETPUA20_MASK                  0x10000000u
#define SIU_ETPUAB_ETPUA20_SHIFT                 28u
#define SIU_ETPUAB_ETPUA20_WIDTH                 1u
#define SIU_ETPUAB_ETPUA20(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA20_SHIFT))&SIU_ETPUAB_ETPUA20_MASK)
#define SIU_ETPUAB_ETPUA21_MASK                  0x20000000u
#define SIU_ETPUAB_ETPUA21_SHIFT                 29u
#define SIU_ETPUAB_ETPUA21_WIDTH                 1u
#define SIU_ETPUAB_ETPUA21(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA21_SHIFT))&SIU_ETPUAB_ETPUA21_MASK)
#define SIU_ETPUAB_ETPUA22_MASK                  0x40000000u
#define SIU_ETPUAB_ETPUA22_SHIFT                 30u
#define SIU_ETPUAB_ETPUA22_WIDTH                 1u
#define SIU_ETPUAB_ETPUA22(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA22_SHIFT))&SIU_ETPUAB_ETPUA22_MASK)
#define SIU_ETPUAB_ETPUA23_MASK                  0x80000000u
#define SIU_ETPUAB_ETPUA23_SHIFT                 31u
#define SIU_ETPUAB_ETPUA23_WIDTH                 1u
#define SIU_ETPUAB_ETPUA23(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAB_ETPUA23_SHIFT))&SIU_ETPUAB_ETPUA23_MASK)
/* EMIOSB Bit Fields */
#define SIU_EMIOSB_EMIOS0_0_OUT31_MASK           0x1u
#define SIU_EMIOSB_EMIOS0_0_OUT31_SHIFT          0u
#define SIU_EMIOSB_EMIOS0_0_OUT31_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_0_OUT31(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_0_OUT31_SHIFT))&SIU_EMIOSB_EMIOS0_0_OUT31_MASK)
#define SIU_EMIOSB_EMIOS0_1_OUT30_MASK           0x2u
#define SIU_EMIOSB_EMIOS0_1_OUT30_SHIFT          1u
#define SIU_EMIOSB_EMIOS0_1_OUT30_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_1_OUT30(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_1_OUT30_SHIFT))&SIU_EMIOSB_EMIOS0_1_OUT30_MASK)
#define SIU_EMIOSB_EMIOS0_2_OUT29_MASK           0x4u
#define SIU_EMIOSB_EMIOS0_2_OUT29_SHIFT          2u
#define SIU_EMIOSB_EMIOS0_2_OUT29_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_2_OUT29(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_2_OUT29_SHIFT))&SIU_EMIOSB_EMIOS0_2_OUT29_MASK)
#define SIU_EMIOSB_EMIOS0_3_OUT28_MASK           0x8u
#define SIU_EMIOSB_EMIOS0_3_OUT28_SHIFT          3u
#define SIU_EMIOSB_EMIOS0_3_OUT28_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_3_OUT28(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_3_OUT28_SHIFT))&SIU_EMIOSB_EMIOS0_3_OUT28_MASK)
#define SIU_EMIOSB_EMIOS0_4_OUT27_MASK           0x10u
#define SIU_EMIOSB_EMIOS0_4_OUT27_SHIFT          4u
#define SIU_EMIOSB_EMIOS0_4_OUT27_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_4_OUT27(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_4_OUT27_SHIFT))&SIU_EMIOSB_EMIOS0_4_OUT27_MASK)
#define SIU_EMIOSB_EMIOS0_5_OUT26_MASK           0x20u
#define SIU_EMIOSB_EMIOS0_5_OUT26_SHIFT          5u
#define SIU_EMIOSB_EMIOS0_5_OUT26_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_5_OUT26(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_5_OUT26_SHIFT))&SIU_EMIOSB_EMIOS0_5_OUT26_MASK)
#define SIU_EMIOSB_EMIOS0_6_OUT25_MASK           0x40u
#define SIU_EMIOSB_EMIOS0_6_OUT25_SHIFT          6u
#define SIU_EMIOSB_EMIOS0_6_OUT25_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_6_OUT25(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_6_OUT25_SHIFT))&SIU_EMIOSB_EMIOS0_6_OUT25_MASK)
#define SIU_EMIOSB_EMIOS1_0_OUT24_MASK           0x80u
#define SIU_EMIOSB_EMIOS1_0_OUT24_SHIFT          7u
#define SIU_EMIOSB_EMIOS1_0_OUT24_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_0_OUT24(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_0_OUT24_SHIFT))&SIU_EMIOSB_EMIOS1_0_OUT24_MASK)
#define SIU_EMIOSB_EMIOS1_1_OUT23_MASK           0x100u
#define SIU_EMIOSB_EMIOS1_1_OUT23_SHIFT          8u
#define SIU_EMIOSB_EMIOS1_1_OUT23_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_1_OUT23(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_1_OUT23_SHIFT))&SIU_EMIOSB_EMIOS1_1_OUT23_MASK)
#define SIU_EMIOSB_EMIOS1_2_OUT22_MASK           0x200u
#define SIU_EMIOSB_EMIOS1_2_OUT22_SHIFT          9u
#define SIU_EMIOSB_EMIOS1_2_OUT22_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_2_OUT22(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_2_OUT22_SHIFT))&SIU_EMIOSB_EMIOS1_2_OUT22_MASK)
#define SIU_EMIOSB_EMIOS1_3_OUT21_MASK           0x400u
#define SIU_EMIOSB_EMIOS1_3_OUT21_SHIFT          10u
#define SIU_EMIOSB_EMIOS1_3_OUT21_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_3_OUT21(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_3_OUT21_SHIFT))&SIU_EMIOSB_EMIOS1_3_OUT21_MASK)
#define SIU_EMIOSB_EMIOS1_4_OUT20_MASK           0x800u
#define SIU_EMIOSB_EMIOS1_4_OUT20_SHIFT          11u
#define SIU_EMIOSB_EMIOS1_4_OUT20_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_4_OUT20(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_4_OUT20_SHIFT))&SIU_EMIOSB_EMIOS1_4_OUT20_MASK)
#define SIU_EMIOSB_EMIOS1_5_OUT19_MASK           0x1000u
#define SIU_EMIOSB_EMIOS1_5_OUT19_SHIFT          12u
#define SIU_EMIOSB_EMIOS1_5_OUT19_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_5_OUT19(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_5_OUT19_SHIFT))&SIU_EMIOSB_EMIOS1_5_OUT19_MASK)
#define SIU_EMIOSB_EMIOS1_6_OUT18_MASK           0x2000u
#define SIU_EMIOSB_EMIOS1_6_OUT18_SHIFT          13u
#define SIU_EMIOSB_EMIOS1_6_OUT18_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_6_OUT18(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_6_OUT18_SHIFT))&SIU_EMIOSB_EMIOS1_6_OUT18_MASK)
#define SIU_EMIOSB_EMIOS1_7_OUT17_MASK           0x4000u
#define SIU_EMIOSB_EMIOS1_7_OUT17_SHIFT          14u
#define SIU_EMIOSB_EMIOS1_7_OUT17_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_7_OUT17(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_7_OUT17_SHIFT))&SIU_EMIOSB_EMIOS1_7_OUT17_MASK)
#define SIU_EMIOSB_EMIOS0_23_OUT16_MASK          0x8000u
#define SIU_EMIOSB_EMIOS0_23_OUT16_SHIFT         15u
#define SIU_EMIOSB_EMIOS0_23_OUT16_WIDTH         1u
#define SIU_EMIOSB_EMIOS0_23_OUT16(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_23_OUT16_SHIFT))&SIU_EMIOSB_EMIOS0_23_OUT16_MASK)
#define SIU_EMIOSB_EMIOS1_4_OUT15_MASK           0x10000u
#define SIU_EMIOSB_EMIOS1_4_OUT15_SHIFT          16u
#define SIU_EMIOSB_EMIOS1_4_OUT15_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_4_OUT15(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_4_OUT15_SHIFT))&SIU_EMIOSB_EMIOS1_4_OUT15_MASK)
#define SIU_EMIOSB_EMIOS1_5_OUT14_MASK           0x20000u
#define SIU_EMIOSB_EMIOS1_5_OUT14_SHIFT          17u
#define SIU_EMIOSB_EMIOS1_5_OUT14_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_5_OUT14(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_5_OUT14_SHIFT))&SIU_EMIOSB_EMIOS1_5_OUT14_MASK)
#define SIU_EMIOSB_EMIOS1_6_OUT13_MASK           0x40000u
#define SIU_EMIOSB_EMIOS1_6_OUT13_SHIFT          18u
#define SIU_EMIOSB_EMIOS1_6_OUT13_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_6_OUT13(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_6_OUT13_SHIFT))&SIU_EMIOSB_EMIOS1_6_OUT13_MASK)
#define SIU_EMIOSB_EMIOS1_7_OUT12_MASK           0x80000u
#define SIU_EMIOSB_EMIOS1_7_OUT12_SHIFT          19u
#define SIU_EMIOSB_EMIOS1_7_OUT12_WIDTH          1u
#define SIU_EMIOSB_EMIOS1_7_OUT12(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_7_OUT12_SHIFT))&SIU_EMIOSB_EMIOS1_7_OUT12_MASK)
#define SIU_EMIOSB_EMIOS0_23_OUT11_MASK          0x100000u
#define SIU_EMIOSB_EMIOS0_23_OUT11_SHIFT         20u
#define SIU_EMIOSB_EMIOS0_23_OUT11_WIDTH         1u
#define SIU_EMIOSB_EMIOS0_23_OUT11(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_23_OUT11_SHIFT))&SIU_EMIOSB_EMIOS0_23_OUT11_MASK)
#define SIU_EMIOSB_EMIOS0_0_OUT10_MASK           0x200000u
#define SIU_EMIOSB_EMIOS0_0_OUT10_SHIFT          21u
#define SIU_EMIOSB_EMIOS0_0_OUT10_WIDTH          1u
#define SIU_EMIOSB_EMIOS0_0_OUT10(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_0_OUT10_SHIFT))&SIU_EMIOSB_EMIOS0_0_OUT10_MASK)
#define SIU_EMIOSB_EMIOS0_1_OUT9_MASK            0x400000u
#define SIU_EMIOSB_EMIOS0_1_OUT9_SHIFT           22u
#define SIU_EMIOSB_EMIOS0_1_OUT9_WIDTH           1u
#define SIU_EMIOSB_EMIOS0_1_OUT9(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_1_OUT9_SHIFT))&SIU_EMIOSB_EMIOS0_1_OUT9_MASK)
#define SIU_EMIOSB_EMIOS0_2_OUT8_MASK            0x800000u
#define SIU_EMIOSB_EMIOS0_2_OUT8_SHIFT           23u
#define SIU_EMIOSB_EMIOS0_2_OUT8_WIDTH           1u
#define SIU_EMIOSB_EMIOS0_2_OUT8(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_2_OUT8_SHIFT))&SIU_EMIOSB_EMIOS0_2_OUT8_MASK)
#define SIU_EMIOSB_EMIOS0_3_OUT7_MASK            0x1000000u
#define SIU_EMIOSB_EMIOS0_3_OUT7_SHIFT           24u
#define SIU_EMIOSB_EMIOS0_3_OUT7_WIDTH           1u
#define SIU_EMIOSB_EMIOS0_3_OUT7(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_3_OUT7_SHIFT))&SIU_EMIOSB_EMIOS0_3_OUT7_MASK)
#define SIU_EMIOSB_EMIOS0_4_OUT6_MASK            0x2000000u
#define SIU_EMIOSB_EMIOS0_4_OUT6_SHIFT           25u
#define SIU_EMIOSB_EMIOS0_4_OUT6_WIDTH           1u
#define SIU_EMIOSB_EMIOS0_4_OUT6(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_4_OUT6_SHIFT))&SIU_EMIOSB_EMIOS0_4_OUT6_MASK)
#define SIU_EMIOSB_EMIOS0_5_OUT5_MASK            0x4000000u
#define SIU_EMIOSB_EMIOS0_5_OUT5_SHIFT           26u
#define SIU_EMIOSB_EMIOS0_5_OUT5_WIDTH           1u
#define SIU_EMIOSB_EMIOS0_5_OUT5(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_5_OUT5_SHIFT))&SIU_EMIOSB_EMIOS0_5_OUT5_MASK)
#define SIU_EMIOSB_EMIOS0_6_OUT4_MASK            0x8000000u
#define SIU_EMIOSB_EMIOS0_6_OUT4_SHIFT           27u
#define SIU_EMIOSB_EMIOS0_6_OUT4_WIDTH           1u
#define SIU_EMIOSB_EMIOS0_6_OUT4(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS0_6_OUT4_SHIFT))&SIU_EMIOSB_EMIOS0_6_OUT4_MASK)
#define SIU_EMIOSB_EMIOS1_0_OUT3_MASK            0x10000000u
#define SIU_EMIOSB_EMIOS1_0_OUT3_SHIFT           28u
#define SIU_EMIOSB_EMIOS1_0_OUT3_WIDTH           1u
#define SIU_EMIOSB_EMIOS1_0_OUT3(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_0_OUT3_SHIFT))&SIU_EMIOSB_EMIOS1_0_OUT3_MASK)
#define SIU_EMIOSB_EMIOS1_1_OUT2_MASK            0x20000000u
#define SIU_EMIOSB_EMIOS1_1_OUT2_SHIFT           29u
#define SIU_EMIOSB_EMIOS1_1_OUT2_WIDTH           1u
#define SIU_EMIOSB_EMIOS1_1_OUT2(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_1_OUT2_SHIFT))&SIU_EMIOSB_EMIOS1_1_OUT2_MASK)
#define SIU_EMIOSB_EMIOS1_2_OUT1_MASK            0x40000000u
#define SIU_EMIOSB_EMIOS1_2_OUT1_SHIFT           30u
#define SIU_EMIOSB_EMIOS1_2_OUT1_WIDTH           1u
#define SIU_EMIOSB_EMIOS1_2_OUT1(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_2_OUT1_SHIFT))&SIU_EMIOSB_EMIOS1_2_OUT1_MASK)
#define SIU_EMIOSB_EMIOS1_3_OUT0_MASK            0x80000000u
#define SIU_EMIOSB_EMIOS1_3_OUT0_SHIFT           31u
#define SIU_EMIOSB_EMIOS1_3_OUT0_WIDTH           1u
#define SIU_EMIOSB_EMIOS1_3_OUT0(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSB_EMIOS1_3_OUT0_SHIFT))&SIU_EMIOSB_EMIOS1_3_OUT0_MASK)
/* DSPIBHLB Bit Fields */
#define SIU_DSPIBHLB_DSPIBL31_MASK               0x1u
#define SIU_DSPIBHLB_DSPIBL31_SHIFT              0u
#define SIU_DSPIBHLB_DSPIBL31_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL31(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL31_SHIFT))&SIU_DSPIBHLB_DSPIBL31_MASK)
#define SIU_DSPIBHLB_DSPIBL30_MASK               0x2u
#define SIU_DSPIBHLB_DSPIBL30_SHIFT              1u
#define SIU_DSPIBHLB_DSPIBL30_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL30(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL30_SHIFT))&SIU_DSPIBHLB_DSPIBL30_MASK)
#define SIU_DSPIBHLB_DSPIBL29_MASK               0x4u
#define SIU_DSPIBHLB_DSPIBL29_SHIFT              2u
#define SIU_DSPIBHLB_DSPIBL29_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL29(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL29_SHIFT))&SIU_DSPIBHLB_DSPIBL29_MASK)
#define SIU_DSPIBHLB_DSPIBL28_MASK               0x8u
#define SIU_DSPIBHLB_DSPIBL28_SHIFT              3u
#define SIU_DSPIBHLB_DSPIBL28_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL28(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL28_SHIFT))&SIU_DSPIBHLB_DSPIBL28_MASK)
#define SIU_DSPIBHLB_DSPIBL27_MASK               0x10u
#define SIU_DSPIBHLB_DSPIBL27_SHIFT              4u
#define SIU_DSPIBHLB_DSPIBL27_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL27(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL27_SHIFT))&SIU_DSPIBHLB_DSPIBL27_MASK)
#define SIU_DSPIBHLB_DSPIBL26_MASK               0x20u
#define SIU_DSPIBHLB_DSPIBL26_SHIFT              5u
#define SIU_DSPIBHLB_DSPIBL26_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL26(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL26_SHIFT))&SIU_DSPIBHLB_DSPIBL26_MASK)
#define SIU_DSPIBHLB_DSPIBL25_MASK               0x40u
#define SIU_DSPIBHLB_DSPIBL25_SHIFT              6u
#define SIU_DSPIBHLB_DSPIBL25_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL25(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL25_SHIFT))&SIU_DSPIBHLB_DSPIBL25_MASK)
#define SIU_DSPIBHLB_DSPIBL24_MASK               0x80u
#define SIU_DSPIBHLB_DSPIBL24_SHIFT              7u
#define SIU_DSPIBHLB_DSPIBL24_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL24(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL24_SHIFT))&SIU_DSPIBHLB_DSPIBL24_MASK)
#define SIU_DSPIBHLB_DSPIBL23_MASK               0x100u
#define SIU_DSPIBHLB_DSPIBL23_SHIFT              8u
#define SIU_DSPIBHLB_DSPIBL23_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL23(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL23_SHIFT))&SIU_DSPIBHLB_DSPIBL23_MASK)
#define SIU_DSPIBHLB_DSPIBL22_MASK               0x200u
#define SIU_DSPIBHLB_DSPIBL22_SHIFT              9u
#define SIU_DSPIBHLB_DSPIBL22_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL22(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL22_SHIFT))&SIU_DSPIBHLB_DSPIBL22_MASK)
#define SIU_DSPIBHLB_DSPIBL21_MASK               0x400u
#define SIU_DSPIBHLB_DSPIBL21_SHIFT              10u
#define SIU_DSPIBHLB_DSPIBL21_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL21(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL21_SHIFT))&SIU_DSPIBHLB_DSPIBL21_MASK)
#define SIU_DSPIBHLB_DSPIBL20_MASK               0x800u
#define SIU_DSPIBHLB_DSPIBL20_SHIFT              11u
#define SIU_DSPIBHLB_DSPIBL20_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL20(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL20_SHIFT))&SIU_DSPIBHLB_DSPIBL20_MASK)
#define SIU_DSPIBHLB_DSPIBL19_MASK               0x1000u
#define SIU_DSPIBHLB_DSPIBL19_SHIFT              12u
#define SIU_DSPIBHLB_DSPIBL19_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL19(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL19_SHIFT))&SIU_DSPIBHLB_DSPIBL19_MASK)
#define SIU_DSPIBHLB_DSPIBL18_MASK               0x2000u
#define SIU_DSPIBHLB_DSPIBL18_SHIFT              13u
#define SIU_DSPIBHLB_DSPIBL18_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL18(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL18_SHIFT))&SIU_DSPIBHLB_DSPIBL18_MASK)
#define SIU_DSPIBHLB_DSPIBL17_MASK               0x4000u
#define SIU_DSPIBHLB_DSPIBL17_SHIFT              14u
#define SIU_DSPIBHLB_DSPIBL17_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL17(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL17_SHIFT))&SIU_DSPIBHLB_DSPIBL17_MASK)
#define SIU_DSPIBHLB_DSPIBL16_MASK               0x8000u
#define SIU_DSPIBHLB_DSPIBL16_SHIFT              15u
#define SIU_DSPIBHLB_DSPIBL16_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBL16(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBL16_SHIFT))&SIU_DSPIBHLB_DSPIBL16_MASK)
#define SIU_DSPIBHLB_DSPIBH15_MASK               0x10000u
#define SIU_DSPIBHLB_DSPIBH15_SHIFT              16u
#define SIU_DSPIBHLB_DSPIBH15_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBH15(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH15_SHIFT))&SIU_DSPIBHLB_DSPIBH15_MASK)
#define SIU_DSPIBHLB_DSPIBH14_MASK               0x20000u
#define SIU_DSPIBHLB_DSPIBH14_SHIFT              17u
#define SIU_DSPIBHLB_DSPIBH14_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBH14(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH14_SHIFT))&SIU_DSPIBHLB_DSPIBH14_MASK)
#define SIU_DSPIBHLB_DSPIBH13_MASK               0x40000u
#define SIU_DSPIBHLB_DSPIBH13_SHIFT              18u
#define SIU_DSPIBHLB_DSPIBH13_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBH13(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH13_SHIFT))&SIU_DSPIBHLB_DSPIBH13_MASK)
#define SIU_DSPIBHLB_DSPIBH12_MASK               0x80000u
#define SIU_DSPIBHLB_DSPIBH12_SHIFT              19u
#define SIU_DSPIBHLB_DSPIBH12_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBH12(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH12_SHIFT))&SIU_DSPIBHLB_DSPIBH12_MASK)
#define SIU_DSPIBHLB_DSPIBH11_MASK               0x100000u
#define SIU_DSPIBHLB_DSPIBH11_SHIFT              20u
#define SIU_DSPIBHLB_DSPIBH11_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBH11(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH11_SHIFT))&SIU_DSPIBHLB_DSPIBH11_MASK)
#define SIU_DSPIBHLB_DSPIBH10_MASK               0x200000u
#define SIU_DSPIBHLB_DSPIBH10_SHIFT              21u
#define SIU_DSPIBHLB_DSPIBH10_WIDTH              1u
#define SIU_DSPIBHLB_DSPIBH10(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH10_SHIFT))&SIU_DSPIBHLB_DSPIBH10_MASK)
#define SIU_DSPIBHLB_DSPIBH9_MASK                0x400000u
#define SIU_DSPIBHLB_DSPIBH9_SHIFT               22u
#define SIU_DSPIBHLB_DSPIBH9_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH9(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH9_SHIFT))&SIU_DSPIBHLB_DSPIBH9_MASK)
#define SIU_DSPIBHLB_DSPIBH8_MASK                0x800000u
#define SIU_DSPIBHLB_DSPIBH8_SHIFT               23u
#define SIU_DSPIBHLB_DSPIBH8_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH8(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH8_SHIFT))&SIU_DSPIBHLB_DSPIBH8_MASK)
#define SIU_DSPIBHLB_DSPIBH7_MASK                0x1000000u
#define SIU_DSPIBHLB_DSPIBH7_SHIFT               24u
#define SIU_DSPIBHLB_DSPIBH7_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH7(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH7_SHIFT))&SIU_DSPIBHLB_DSPIBH7_MASK)
#define SIU_DSPIBHLB_DSPIBH6_MASK                0x2000000u
#define SIU_DSPIBHLB_DSPIBH6_SHIFT               25u
#define SIU_DSPIBHLB_DSPIBH6_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH6(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH6_SHIFT))&SIU_DSPIBHLB_DSPIBH6_MASK)
#define SIU_DSPIBHLB_DSPIBH5_MASK                0x4000000u
#define SIU_DSPIBHLB_DSPIBH5_SHIFT               26u
#define SIU_DSPIBHLB_DSPIBH5_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH5(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH5_SHIFT))&SIU_DSPIBHLB_DSPIBH5_MASK)
#define SIU_DSPIBHLB_DSPIBH4_MASK                0x8000000u
#define SIU_DSPIBHLB_DSPIBH4_SHIFT               27u
#define SIU_DSPIBHLB_DSPIBH4_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH4(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH4_SHIFT))&SIU_DSPIBHLB_DSPIBH4_MASK)
#define SIU_DSPIBHLB_DSPIBH3_MASK                0x10000000u
#define SIU_DSPIBHLB_DSPIBH3_SHIFT               28u
#define SIU_DSPIBHLB_DSPIBH3_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH3(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH3_SHIFT))&SIU_DSPIBHLB_DSPIBH3_MASK)
#define SIU_DSPIBHLB_DSPIBH2_MASK                0x20000000u
#define SIU_DSPIBHLB_DSPIBH2_SHIFT               29u
#define SIU_DSPIBHLB_DSPIBH2_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH2(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH2_SHIFT))&SIU_DSPIBHLB_DSPIBH2_MASK)
#define SIU_DSPIBHLB_DSPIBH1_MASK                0x40000000u
#define SIU_DSPIBHLB_DSPIBH1_SHIFT               30u
#define SIU_DSPIBHLB_DSPIBH1_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH1(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH1_SHIFT))&SIU_DSPIBHLB_DSPIBH1_MASK)
#define SIU_DSPIBHLB_DSPIBH0_MASK                0x80000000u
#define SIU_DSPIBHLB_DSPIBH0_SHIFT               31u
#define SIU_DSPIBHLB_DSPIBH0_WIDTH               1u
#define SIU_DSPIBHLB_DSPIBH0(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIBHLB_DSPIBH0_SHIFT))&SIU_DSPIBHLB_DSPIBH0_MASK)
/* ETPUAC Bit Fields */
#define SIU_ETPUAC_ETPUA30_MASK                  0x1u
#define SIU_ETPUAC_ETPUA30_SHIFT                 0u
#define SIU_ETPUAC_ETPUA30_WIDTH                 1u
#define SIU_ETPUAC_ETPUA30(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA30_SHIFT))&SIU_ETPUAC_ETPUA30_MASK)
#define SIU_ETPUAC_ETPUA31_MASK                  0x2u
#define SIU_ETPUAC_ETPUA31_SHIFT                 1u
#define SIU_ETPUAC_ETPUA31_WIDTH                 1u
#define SIU_ETPUAC_ETPUA31(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA31_SHIFT))&SIU_ETPUAC_ETPUA31_MASK)
#define SIU_ETPUAC_ETPUA24_MASK                  0x4u
#define SIU_ETPUAC_ETPUA24_SHIFT                 2u
#define SIU_ETPUAC_ETPUA24_WIDTH                 1u
#define SIU_ETPUAC_ETPUA24(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA24_SHIFT))&SIU_ETPUAC_ETPUA24_MASK)
#define SIU_ETPUAC_ETPUA25_MASK                  0x8u
#define SIU_ETPUAC_ETPUA25_SHIFT                 3u
#define SIU_ETPUAC_ETPUA25_WIDTH                 1u
#define SIU_ETPUAC_ETPUA25(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA25_SHIFT))&SIU_ETPUAC_ETPUA25_MASK)
#define SIU_ETPUAC_ETPUA26_MASK                  0x10u
#define SIU_ETPUAC_ETPUA26_SHIFT                 4u
#define SIU_ETPUAC_ETPUA26_WIDTH                 1u
#define SIU_ETPUAC_ETPUA26(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA26_SHIFT))&SIU_ETPUAC_ETPUA26_MASK)
#define SIU_ETPUAC_ETPUA27_MASK                  0x20u
#define SIU_ETPUAC_ETPUA27_SHIFT                 5u
#define SIU_ETPUAC_ETPUA27_WIDTH                 1u
#define SIU_ETPUAC_ETPUA27(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA27_SHIFT))&SIU_ETPUAC_ETPUA27_MASK)
#define SIU_ETPUAC_ETPUA28_MASK                  0x40u
#define SIU_ETPUAC_ETPUA28_SHIFT                 6u
#define SIU_ETPUAC_ETPUA28_WIDTH                 1u
#define SIU_ETPUAC_ETPUA28(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA28_SHIFT))&SIU_ETPUAC_ETPUA28_MASK)
#define SIU_ETPUAC_ETPUA29_MASK                  0x80u
#define SIU_ETPUAC_ETPUA29_SHIFT                 7u
#define SIU_ETPUAC_ETPUA29_WIDTH                 1u
#define SIU_ETPUAC_ETPUA29(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA29_SHIFT))&SIU_ETPUAC_ETPUA29_MASK)
#define SIU_ETPUAC_ETPUA16_MASK                  0x100u
#define SIU_ETPUAC_ETPUA16_SHIFT                 8u
#define SIU_ETPUAC_ETPUA16_WIDTH                 1u
#define SIU_ETPUAC_ETPUA16(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA16_SHIFT))&SIU_ETPUAC_ETPUA16_MASK)
#define SIU_ETPUAC_ETPUA17_MASK                  0x200u
#define SIU_ETPUAC_ETPUA17_SHIFT                 9u
#define SIU_ETPUAC_ETPUA17_WIDTH                 1u
#define SIU_ETPUAC_ETPUA17(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA17_SHIFT))&SIU_ETPUAC_ETPUA17_MASK)
#define SIU_ETPUAC_ETPUA18_MASK                  0x400u
#define SIU_ETPUAC_ETPUA18_SHIFT                 10u
#define SIU_ETPUAC_ETPUA18_WIDTH                 1u
#define SIU_ETPUAC_ETPUA18(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA18_SHIFT))&SIU_ETPUAC_ETPUA18_MASK)
#define SIU_ETPUAC_ETPUA19_MASK                  0x800u
#define SIU_ETPUAC_ETPUA19_SHIFT                 11u
#define SIU_ETPUAC_ETPUA19_WIDTH                 1u
#define SIU_ETPUAC_ETPUA19(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA19_SHIFT))&SIU_ETPUAC_ETPUA19_MASK)
#define SIU_ETPUAC_ETPUA20_MASK                  0x1000u
#define SIU_ETPUAC_ETPUA20_SHIFT                 12u
#define SIU_ETPUAC_ETPUA20_WIDTH                 1u
#define SIU_ETPUAC_ETPUA20(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA20_SHIFT))&SIU_ETPUAC_ETPUA20_MASK)
#define SIU_ETPUAC_ETPUA21_MASK                  0x2000u
#define SIU_ETPUAC_ETPUA21_SHIFT                 13u
#define SIU_ETPUAC_ETPUA21_WIDTH                 1u
#define SIU_ETPUAC_ETPUA21(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA21_SHIFT))&SIU_ETPUAC_ETPUA21_MASK)
#define SIU_ETPUAC_ETPUA22_MASK                  0x4000u
#define SIU_ETPUAC_ETPUA22_SHIFT                 14u
#define SIU_ETPUAC_ETPUA22_WIDTH                 1u
#define SIU_ETPUAC_ETPUA22(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA22_SHIFT))&SIU_ETPUAC_ETPUA22_MASK)
#define SIU_ETPUAC_ETPUA23_MASK                  0x8000u
#define SIU_ETPUAC_ETPUA23_SHIFT                 15u
#define SIU_ETPUAC_ETPUA23_WIDTH                 1u
#define SIU_ETPUAC_ETPUA23(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA23_SHIFT))&SIU_ETPUAC_ETPUA23_MASK)
#define SIU_ETPUAC_ETPUA11_MASK                  0x10000u
#define SIU_ETPUAC_ETPUA11_SHIFT                 16u
#define SIU_ETPUAC_ETPUA11_WIDTH                 1u
#define SIU_ETPUAC_ETPUA11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA11_SHIFT))&SIU_ETPUAC_ETPUA11_MASK)
#define SIU_ETPUAC_ETPUA10_MASK                  0x20000u
#define SIU_ETPUAC_ETPUA10_SHIFT                 17u
#define SIU_ETPUAC_ETPUA10_WIDTH                 1u
#define SIU_ETPUAC_ETPUA10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA10_SHIFT))&SIU_ETPUAC_ETPUA10_MASK)
#define SIU_ETPUAC_ETPUA9_MASK                   0x40000u
#define SIU_ETPUAC_ETPUA9_SHIFT                  18u
#define SIU_ETPUAC_ETPUA9_WIDTH                  1u
#define SIU_ETPUAC_ETPUA9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA9_SHIFT))&SIU_ETPUAC_ETPUA9_MASK)
#define SIU_ETPUAC_ETPUA8_MASK                   0x80000u
#define SIU_ETPUAC_ETPUA8_SHIFT                  19u
#define SIU_ETPUAC_ETPUA8_WIDTH                  1u
#define SIU_ETPUAC_ETPUA8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA8_SHIFT))&SIU_ETPUAC_ETPUA8_MASK)
#define SIU_ETPUAC_ETPUA7_MASK                   0x100000u
#define SIU_ETPUAC_ETPUA7_SHIFT                  20u
#define SIU_ETPUAC_ETPUA7_WIDTH                  1u
#define SIU_ETPUAC_ETPUA7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA7_SHIFT))&SIU_ETPUAC_ETPUA7_MASK)
#define SIU_ETPUAC_ETPUA6_MASK                   0x200000u
#define SIU_ETPUAC_ETPUA6_SHIFT                  21u
#define SIU_ETPUAC_ETPUA6_WIDTH                  1u
#define SIU_ETPUAC_ETPUA6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA6_SHIFT))&SIU_ETPUAC_ETPUA6_MASK)
#define SIU_ETPUAC_ETPUA5_MASK                   0x400000u
#define SIU_ETPUAC_ETPUA5_SHIFT                  22u
#define SIU_ETPUAC_ETPUA5_WIDTH                  1u
#define SIU_ETPUAC_ETPUA5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA5_SHIFT))&SIU_ETPUAC_ETPUA5_MASK)
#define SIU_ETPUAC_ETPUA4_MASK                   0x800000u
#define SIU_ETPUAC_ETPUA4_SHIFT                  23u
#define SIU_ETPUAC_ETPUA4_WIDTH                  1u
#define SIU_ETPUAC_ETPUA4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA4_SHIFT))&SIU_ETPUAC_ETPUA4_MASK)
#define SIU_ETPUAC_ETPUA3_MASK                   0x1000000u
#define SIU_ETPUAC_ETPUA3_SHIFT                  24u
#define SIU_ETPUAC_ETPUA3_WIDTH                  1u
#define SIU_ETPUAC_ETPUA3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA3_SHIFT))&SIU_ETPUAC_ETPUA3_MASK)
#define SIU_ETPUAC_ETPUA2_MASK                   0x2000000u
#define SIU_ETPUAC_ETPUA2_SHIFT                  25u
#define SIU_ETPUAC_ETPUA2_WIDTH                  1u
#define SIU_ETPUAC_ETPUA2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA2_SHIFT))&SIU_ETPUAC_ETPUA2_MASK)
#define SIU_ETPUAC_ETPUA1_MASK                   0x4000000u
#define SIU_ETPUAC_ETPUA1_SHIFT                  26u
#define SIU_ETPUAC_ETPUA1_WIDTH                  1u
#define SIU_ETPUAC_ETPUA1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA1_SHIFT))&SIU_ETPUAC_ETPUA1_MASK)
#define SIU_ETPUAC_ETPUA0_MASK                   0x8000000u
#define SIU_ETPUAC_ETPUA0_SHIFT                  27u
#define SIU_ETPUAC_ETPUA0_WIDTH                  1u
#define SIU_ETPUAC_ETPUA0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA0_SHIFT))&SIU_ETPUAC_ETPUA0_MASK)
#define SIU_ETPUAC_ETPUA15_MASK                  0x10000000u
#define SIU_ETPUAC_ETPUA15_SHIFT                 28u
#define SIU_ETPUAC_ETPUA15_WIDTH                 1u
#define SIU_ETPUAC_ETPUA15(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA15_SHIFT))&SIU_ETPUAC_ETPUA15_MASK)
#define SIU_ETPUAC_ETPUA14_MASK                  0x20000000u
#define SIU_ETPUAC_ETPUA14_SHIFT                 29u
#define SIU_ETPUAC_ETPUA14_WIDTH                 1u
#define SIU_ETPUAC_ETPUA14(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA14_SHIFT))&SIU_ETPUAC_ETPUA14_MASK)
#define SIU_ETPUAC_ETPUA13_MASK                  0x40000000u
#define SIU_ETPUAC_ETPUA13_SHIFT                 30u
#define SIU_ETPUAC_ETPUA13_WIDTH                 1u
#define SIU_ETPUAC_ETPUA13(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA13_SHIFT))&SIU_ETPUAC_ETPUA13_MASK)
#define SIU_ETPUAC_ETPUA12_MASK                  0x80000000u
#define SIU_ETPUAC_ETPUA12_SHIFT                 31u
#define SIU_ETPUAC_ETPUA12_WIDTH                 1u
#define SIU_ETPUAC_ETPUA12(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUAC_ETPUA12_SHIFT))&SIU_ETPUAC_ETPUA12_MASK)
/* EMIOSC Bit Fields */
#define SIU_EMIOSC_EMIOS0_23_OUT31_MASK          0x1u
#define SIU_EMIOSC_EMIOS0_23_OUT31_SHIFT         0u
#define SIU_EMIOSC_EMIOS0_23_OUT31_WIDTH         1u
#define SIU_EMIOSC_EMIOS0_23_OUT31(x)            (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_23_OUT31_SHIFT))&SIU_EMIOSC_EMIOS0_23_OUT31_MASK)
#define SIU_EMIOSC_EMIOS1_7_OUT30_MASK           0x2u
#define SIU_EMIOSC_EMIOS1_7_OUT30_SHIFT          1u
#define SIU_EMIOSC_EMIOS1_7_OUT30_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_7_OUT30(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_7_OUT30_SHIFT))&SIU_EMIOSC_EMIOS1_7_OUT30_MASK)
#define SIU_EMIOSC_EMIOS1_6_OUT29_MASK           0x4u
#define SIU_EMIOSC_EMIOS1_6_OUT29_SHIFT          2u
#define SIU_EMIOSC_EMIOS1_6_OUT29_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_6_OUT29(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_6_OUT29_SHIFT))&SIU_EMIOSC_EMIOS1_6_OUT29_MASK)
#define SIU_EMIOSC_EMIOS1_5_OUT28_MASK           0x8u
#define SIU_EMIOSC_EMIOS1_5_OUT28_SHIFT          3u
#define SIU_EMIOSC_EMIOS1_5_OUT28_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_5_OUT28(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_5_OUT28_SHIFT))&SIU_EMIOSC_EMIOS1_5_OUT28_MASK)
#define SIU_EMIOSC_EMIOS1_4_OUT27_MASK           0x10u
#define SIU_EMIOSC_EMIOS1_4_OUT27_SHIFT          4u
#define SIU_EMIOSC_EMIOS1_4_OUT27_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_4_OUT27(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_4_OUT27_SHIFT))&SIU_EMIOSC_EMIOS1_4_OUT27_MASK)
#define SIU_EMIOSC_EMIOS1_3_OUT26_MASK           0x20u
#define SIU_EMIOSC_EMIOS1_3_OUT26_SHIFT          5u
#define SIU_EMIOSC_EMIOS1_3_OUT26_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_3_OUT26(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_3_OUT26_SHIFT))&SIU_EMIOSC_EMIOS1_3_OUT26_MASK)
#define SIU_EMIOSC_EMIOS1_2_OUT25_MASK           0x40u
#define SIU_EMIOSC_EMIOS1_2_OUT25_SHIFT          6u
#define SIU_EMIOSC_EMIOS1_2_OUT25_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_2_OUT25(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_2_OUT25_SHIFT))&SIU_EMIOSC_EMIOS1_2_OUT25_MASK)
#define SIU_EMIOSC_EMIOS1_1_OUT24_MASK           0x80u
#define SIU_EMIOSC_EMIOS1_1_OUT24_SHIFT          7u
#define SIU_EMIOSC_EMIOS1_1_OUT24_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_1_OUT24(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_1_OUT24_SHIFT))&SIU_EMIOSC_EMIOS1_1_OUT24_MASK)
#define SIU_EMIOSC_EMIOS1_0_OUT23_MASK           0x100u
#define SIU_EMIOSC_EMIOS1_0_OUT23_SHIFT          8u
#define SIU_EMIOSC_EMIOS1_0_OUT23_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_0_OUT23(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_0_OUT23_SHIFT))&SIU_EMIOSC_EMIOS1_0_OUT23_MASK)
#define SIU_EMIOSC_EMIOS0_6_OUT22_MASK           0x200u
#define SIU_EMIOSC_EMIOS0_6_OUT22_SHIFT          9u
#define SIU_EMIOSC_EMIOS0_6_OUT22_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_6_OUT22(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_6_OUT22_SHIFT))&SIU_EMIOSC_EMIOS0_6_OUT22_MASK)
#define SIU_EMIOSC_EMIOS0_5_OUT21_MASK           0x400u
#define SIU_EMIOSC_EMIOS0_5_OUT21_SHIFT          10u
#define SIU_EMIOSC_EMIOS0_5_OUT21_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_5_OUT21(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_5_OUT21_SHIFT))&SIU_EMIOSC_EMIOS0_5_OUT21_MASK)
#define SIU_EMIOSC_EMIOS0_4_OUT20_MASK           0x800u
#define SIU_EMIOSC_EMIOS0_4_OUT20_SHIFT          11u
#define SIU_EMIOSC_EMIOS0_4_OUT20_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_4_OUT20(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_4_OUT20_SHIFT))&SIU_EMIOSC_EMIOS0_4_OUT20_MASK)
#define SIU_EMIOSC_EMIOS0_3_OUT19_MASK           0x1000u
#define SIU_EMIOSC_EMIOS0_3_OUT19_SHIFT          12u
#define SIU_EMIOSC_EMIOS0_3_OUT19_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_3_OUT19(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_3_OUT19_SHIFT))&SIU_EMIOSC_EMIOS0_3_OUT19_MASK)
#define SIU_EMIOSC_EMIOS0_2_OUT18_MASK           0x2000u
#define SIU_EMIOSC_EMIOS0_2_OUT18_SHIFT          13u
#define SIU_EMIOSC_EMIOS0_2_OUT18_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_2_OUT18(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_2_OUT18_SHIFT))&SIU_EMIOSC_EMIOS0_2_OUT18_MASK)
#define SIU_EMIOSC_EMIOS0_1_OUT17_MASK           0x4000u
#define SIU_EMIOSC_EMIOS0_1_OUT17_SHIFT          14u
#define SIU_EMIOSC_EMIOS0_1_OUT17_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_1_OUT17(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_1_OUT17_SHIFT))&SIU_EMIOSC_EMIOS0_1_OUT17_MASK)
#define SIU_EMIOSC_EMIOS0_0_OUT16_MASK           0x8000u
#define SIU_EMIOSC_EMIOS0_0_OUT16_SHIFT          15u
#define SIU_EMIOSC_EMIOS0_0_OUT16_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_0_OUT16(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_0_OUT16_SHIFT))&SIU_EMIOSC_EMIOS0_0_OUT16_MASK)
#define SIU_EMIOSC_EMIOS1_3_OUT15_MASK           0x10000u
#define SIU_EMIOSC_EMIOS1_3_OUT15_SHIFT          16u
#define SIU_EMIOSC_EMIOS1_3_OUT15_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_3_OUT15(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_3_OUT15_SHIFT))&SIU_EMIOSC_EMIOS1_3_OUT15_MASK)
#define SIU_EMIOSC_EMIOS1_2_OUT14_MASK           0x20000u
#define SIU_EMIOSC_EMIOS1_2_OUT14_SHIFT          17u
#define SIU_EMIOSC_EMIOS1_2_OUT14_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_2_OUT14(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_2_OUT14_SHIFT))&SIU_EMIOSC_EMIOS1_2_OUT14_MASK)
#define SIU_EMIOSC_EMIOS1_1_OUT13_MASK           0x40000u
#define SIU_EMIOSC_EMIOS1_1_OUT13_SHIFT          18u
#define SIU_EMIOSC_EMIOS1_1_OUT13_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_1_OUT13(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_1_OUT13_SHIFT))&SIU_EMIOSC_EMIOS1_1_OUT13_MASK)
#define SIU_EMIOSC_EMIOS1_0_OUT12_MASK           0x80000u
#define SIU_EMIOSC_EMIOS1_0_OUT12_SHIFT          19u
#define SIU_EMIOSC_EMIOS1_0_OUT12_WIDTH          1u
#define SIU_EMIOSC_EMIOS1_0_OUT12(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_0_OUT12_SHIFT))&SIU_EMIOSC_EMIOS1_0_OUT12_MASK)
#define SIU_EMIOSC_EMIOS0_6_OUT11_MASK           0x100000u
#define SIU_EMIOSC_EMIOS0_6_OUT11_SHIFT          20u
#define SIU_EMIOSC_EMIOS0_6_OUT11_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_6_OUT11(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_6_OUT11_SHIFT))&SIU_EMIOSC_EMIOS0_6_OUT11_MASK)
#define SIU_EMIOSC_EMIOS0_5_OUT10_MASK           0x200000u
#define SIU_EMIOSC_EMIOS0_5_OUT10_SHIFT          21u
#define SIU_EMIOSC_EMIOS0_5_OUT10_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_5_OUT10(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_5_OUT10_SHIFT))&SIU_EMIOSC_EMIOS0_5_OUT10_MASK)
#define SIU_EMIOSC_EMIOS0_4_OUT9_MASK            0x400000u
#define SIU_EMIOSC_EMIOS0_4_OUT9_SHIFT           22u
#define SIU_EMIOSC_EMIOS0_4_OUT9_WIDTH           1u
#define SIU_EMIOSC_EMIOS0_4_OUT9(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_4_OUT9_SHIFT))&SIU_EMIOSC_EMIOS0_4_OUT9_MASK)
#define SIU_EMIOSC_EMIOS0_3_OUT8_MASK            0x800000u
#define SIU_EMIOSC_EMIOS0_3_OUT8_SHIFT           23u
#define SIU_EMIOSC_EMIOS0_3_OUT8_WIDTH           1u
#define SIU_EMIOSC_EMIOS0_3_OUT8(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_3_OUT8_SHIFT))&SIU_EMIOSC_EMIOS0_3_OUT8_MASK)
#define SIU_EMIOSC_EMIOS0_2_OUT7_MASK            0x1000000u
#define SIU_EMIOSC_EMIOS0_2_OUT7_SHIFT           24u
#define SIU_EMIOSC_EMIOS0_2_OUT7_WIDTH           1u
#define SIU_EMIOSC_EMIOS0_2_OUT7(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_2_OUT7_SHIFT))&SIU_EMIOSC_EMIOS0_2_OUT7_MASK)
#define SIU_EMIOSC_EMIOS0_1_OUT6_MASK            0x2000000u
#define SIU_EMIOSC_EMIOS0_1_OUT6_SHIFT           25u
#define SIU_EMIOSC_EMIOS0_1_OUT6_WIDTH           1u
#define SIU_EMIOSC_EMIOS0_1_OUT6(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_1_OUT6_SHIFT))&SIU_EMIOSC_EMIOS0_1_OUT6_MASK)
#define SIU_EMIOSC_EMIOS0_0_OUT5_MASK            0x4000000u
#define SIU_EMIOSC_EMIOS0_0_OUT5_SHIFT           26u
#define SIU_EMIOSC_EMIOS0_0_OUT5_WIDTH           1u
#define SIU_EMIOSC_EMIOS0_0_OUT5(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_0_OUT5_SHIFT))&SIU_EMIOSC_EMIOS0_0_OUT5_MASK)
#define SIU_EMIOSC_EMIOS0_23_OUT4_MASK           0x8000000u
#define SIU_EMIOSC_EMIOS0_23_OUT4_SHIFT          27u
#define SIU_EMIOSC_EMIOS0_23_OUT4_WIDTH          1u
#define SIU_EMIOSC_EMIOS0_23_OUT4(x)             (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS0_23_OUT4_SHIFT))&SIU_EMIOSC_EMIOS0_23_OUT4_MASK)
#define SIU_EMIOSC_EMIOS1_7_OUT3_MASK            0x10000000u
#define SIU_EMIOSC_EMIOS1_7_OUT3_SHIFT           28u
#define SIU_EMIOSC_EMIOS1_7_OUT3_WIDTH           1u
#define SIU_EMIOSC_EMIOS1_7_OUT3(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_7_OUT3_SHIFT))&SIU_EMIOSC_EMIOS1_7_OUT3_MASK)
#define SIU_EMIOSC_EMIOS1_6_OUT2_MASK            0x20000000u
#define SIU_EMIOSC_EMIOS1_6_OUT2_SHIFT           29u
#define SIU_EMIOSC_EMIOS1_6_OUT2_WIDTH           1u
#define SIU_EMIOSC_EMIOS1_6_OUT2(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_6_OUT2_SHIFT))&SIU_EMIOSC_EMIOS1_6_OUT2_MASK)
#define SIU_EMIOSC_EMIOS1_5_OUT1_MASK            0x40000000u
#define SIU_EMIOSC_EMIOS1_5_OUT1_SHIFT           30u
#define SIU_EMIOSC_EMIOS1_5_OUT1_WIDTH           1u
#define SIU_EMIOSC_EMIOS1_5_OUT1(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_5_OUT1_SHIFT))&SIU_EMIOSC_EMIOS1_5_OUT1_MASK)
#define SIU_EMIOSC_EMIOS1_4_OUT0_MASK            0x80000000u
#define SIU_EMIOSC_EMIOS1_4_OUT0_SHIFT           31u
#define SIU_EMIOSC_EMIOS1_4_OUT0_WIDTH           1u
#define SIU_EMIOSC_EMIOS1_4_OUT0(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSC_EMIOS1_4_OUT0_SHIFT))&SIU_EMIOSC_EMIOS1_4_OUT0_MASK)
/* DSPICHLC Bit Fields */
#define SIU_DSPICHLC_DSPICL31_MASK               0x1u
#define SIU_DSPICHLC_DSPICL31_SHIFT              0u
#define SIU_DSPICHLC_DSPICL31_WIDTH              1u
#define SIU_DSPICHLC_DSPICL31(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL31_SHIFT))&SIU_DSPICHLC_DSPICL31_MASK)
#define SIU_DSPICHLC_DSPICL30_MASK               0x2u
#define SIU_DSPICHLC_DSPICL30_SHIFT              1u
#define SIU_DSPICHLC_DSPICL30_WIDTH              1u
#define SIU_DSPICHLC_DSPICL30(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL30_SHIFT))&SIU_DSPICHLC_DSPICL30_MASK)
#define SIU_DSPICHLC_DSPICL29_MASK               0x4u
#define SIU_DSPICHLC_DSPICL29_SHIFT              2u
#define SIU_DSPICHLC_DSPICL29_WIDTH              1u
#define SIU_DSPICHLC_DSPICL29(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL29_SHIFT))&SIU_DSPICHLC_DSPICL29_MASK)
#define SIU_DSPICHLC_DSPICL28_MASK               0x8u
#define SIU_DSPICHLC_DSPICL28_SHIFT              3u
#define SIU_DSPICHLC_DSPICL28_WIDTH              1u
#define SIU_DSPICHLC_DSPICL28(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL28_SHIFT))&SIU_DSPICHLC_DSPICL28_MASK)
#define SIU_DSPICHLC_DSPICL27_MASK               0x10u
#define SIU_DSPICHLC_DSPICL27_SHIFT              4u
#define SIU_DSPICHLC_DSPICL27_WIDTH              1u
#define SIU_DSPICHLC_DSPICL27(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL27_SHIFT))&SIU_DSPICHLC_DSPICL27_MASK)
#define SIU_DSPICHLC_DSPICL26_MASK               0x20u
#define SIU_DSPICHLC_DSPICL26_SHIFT              5u
#define SIU_DSPICHLC_DSPICL26_WIDTH              1u
#define SIU_DSPICHLC_DSPICL26(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL26_SHIFT))&SIU_DSPICHLC_DSPICL26_MASK)
#define SIU_DSPICHLC_DSPICL25_MASK               0x40u
#define SIU_DSPICHLC_DSPICL25_SHIFT              6u
#define SIU_DSPICHLC_DSPICL25_WIDTH              1u
#define SIU_DSPICHLC_DSPICL25(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL25_SHIFT))&SIU_DSPICHLC_DSPICL25_MASK)
#define SIU_DSPICHLC_DSPICL24_MASK               0x80u
#define SIU_DSPICHLC_DSPICL24_SHIFT              7u
#define SIU_DSPICHLC_DSPICL24_WIDTH              1u
#define SIU_DSPICHLC_DSPICL24(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL24_SHIFT))&SIU_DSPICHLC_DSPICL24_MASK)
#define SIU_DSPICHLC_DSPICL23_MASK               0x100u
#define SIU_DSPICHLC_DSPICL23_SHIFT              8u
#define SIU_DSPICHLC_DSPICL23_WIDTH              1u
#define SIU_DSPICHLC_DSPICL23(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL23_SHIFT))&SIU_DSPICHLC_DSPICL23_MASK)
#define SIU_DSPICHLC_DSPICL22_MASK               0x200u
#define SIU_DSPICHLC_DSPICL22_SHIFT              9u
#define SIU_DSPICHLC_DSPICL22_WIDTH              1u
#define SIU_DSPICHLC_DSPICL22(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL22_SHIFT))&SIU_DSPICHLC_DSPICL22_MASK)
#define SIU_DSPICHLC_DSPICL21_MASK               0x400u
#define SIU_DSPICHLC_DSPICL21_SHIFT              10u
#define SIU_DSPICHLC_DSPICL21_WIDTH              1u
#define SIU_DSPICHLC_DSPICL21(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL21_SHIFT))&SIU_DSPICHLC_DSPICL21_MASK)
#define SIU_DSPICHLC_DSPICL20_MASK               0x800u
#define SIU_DSPICHLC_DSPICL20_SHIFT              11u
#define SIU_DSPICHLC_DSPICL20_WIDTH              1u
#define SIU_DSPICHLC_DSPICL20(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL20_SHIFT))&SIU_DSPICHLC_DSPICL20_MASK)
#define SIU_DSPICHLC_DSPICL19_MASK               0x1000u
#define SIU_DSPICHLC_DSPICL19_SHIFT              12u
#define SIU_DSPICHLC_DSPICL19_WIDTH              1u
#define SIU_DSPICHLC_DSPICL19(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL19_SHIFT))&SIU_DSPICHLC_DSPICL19_MASK)
#define SIU_DSPICHLC_DSPICL18_MASK               0x2000u
#define SIU_DSPICHLC_DSPICL18_SHIFT              13u
#define SIU_DSPICHLC_DSPICL18_WIDTH              1u
#define SIU_DSPICHLC_DSPICL18(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL18_SHIFT))&SIU_DSPICHLC_DSPICL18_MASK)
#define SIU_DSPICHLC_DSPICL17_MASK               0x4000u
#define SIU_DSPICHLC_DSPICL17_SHIFT              14u
#define SIU_DSPICHLC_DSPICL17_WIDTH              1u
#define SIU_DSPICHLC_DSPICL17(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL17_SHIFT))&SIU_DSPICHLC_DSPICL17_MASK)
#define SIU_DSPICHLC_DSPICL16_MASK               0x8000u
#define SIU_DSPICHLC_DSPICL16_SHIFT              15u
#define SIU_DSPICHLC_DSPICL16_WIDTH              1u
#define SIU_DSPICHLC_DSPICL16(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICL16_SHIFT))&SIU_DSPICHLC_DSPICL16_MASK)
#define SIU_DSPICHLC_DSPICH15_MASK               0x10000u
#define SIU_DSPICHLC_DSPICH15_SHIFT              16u
#define SIU_DSPICHLC_DSPICH15_WIDTH              1u
#define SIU_DSPICHLC_DSPICH15(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH15_SHIFT))&SIU_DSPICHLC_DSPICH15_MASK)
#define SIU_DSPICHLC_DSPICH14_MASK               0x20000u
#define SIU_DSPICHLC_DSPICH14_SHIFT              17u
#define SIU_DSPICHLC_DSPICH14_WIDTH              1u
#define SIU_DSPICHLC_DSPICH14(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH14_SHIFT))&SIU_DSPICHLC_DSPICH14_MASK)
#define SIU_DSPICHLC_DSPICH13_MASK               0x40000u
#define SIU_DSPICHLC_DSPICH13_SHIFT              18u
#define SIU_DSPICHLC_DSPICH13_WIDTH              1u
#define SIU_DSPICHLC_DSPICH13(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH13_SHIFT))&SIU_DSPICHLC_DSPICH13_MASK)
#define SIU_DSPICHLC_DSPICH12_MASK               0x80000u
#define SIU_DSPICHLC_DSPICH12_SHIFT              19u
#define SIU_DSPICHLC_DSPICH12_WIDTH              1u
#define SIU_DSPICHLC_DSPICH12(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH12_SHIFT))&SIU_DSPICHLC_DSPICH12_MASK)
#define SIU_DSPICHLC_DSPICH11_MASK               0x100000u
#define SIU_DSPICHLC_DSPICH11_SHIFT              20u
#define SIU_DSPICHLC_DSPICH11_WIDTH              1u
#define SIU_DSPICHLC_DSPICH11(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH11_SHIFT))&SIU_DSPICHLC_DSPICH11_MASK)
#define SIU_DSPICHLC_DSPICH10_MASK               0x200000u
#define SIU_DSPICHLC_DSPICH10_SHIFT              21u
#define SIU_DSPICHLC_DSPICH10_WIDTH              1u
#define SIU_DSPICHLC_DSPICH10(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH10_SHIFT))&SIU_DSPICHLC_DSPICH10_MASK)
#define SIU_DSPICHLC_DSPICH9_MASK                0x400000u
#define SIU_DSPICHLC_DSPICH9_SHIFT               22u
#define SIU_DSPICHLC_DSPICH9_WIDTH               1u
#define SIU_DSPICHLC_DSPICH9(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH9_SHIFT))&SIU_DSPICHLC_DSPICH9_MASK)
#define SIU_DSPICHLC_DSPICH8_MASK                0x800000u
#define SIU_DSPICHLC_DSPICH8_SHIFT               23u
#define SIU_DSPICHLC_DSPICH8_WIDTH               1u
#define SIU_DSPICHLC_DSPICH8(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH8_SHIFT))&SIU_DSPICHLC_DSPICH8_MASK)
#define SIU_DSPICHLC_DSPICH7_MASK                0x1000000u
#define SIU_DSPICHLC_DSPICH7_SHIFT               24u
#define SIU_DSPICHLC_DSPICH7_WIDTH               1u
#define SIU_DSPICHLC_DSPICH7(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH7_SHIFT))&SIU_DSPICHLC_DSPICH7_MASK)
#define SIU_DSPICHLC_DSPICH6_MASK                0x2000000u
#define SIU_DSPICHLC_DSPICH6_SHIFT               25u
#define SIU_DSPICHLC_DSPICH6_WIDTH               1u
#define SIU_DSPICHLC_DSPICH6(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH6_SHIFT))&SIU_DSPICHLC_DSPICH6_MASK)
#define SIU_DSPICHLC_DSPICH5_MASK                0x4000000u
#define SIU_DSPICHLC_DSPICH5_SHIFT               26u
#define SIU_DSPICHLC_DSPICH5_WIDTH               1u
#define SIU_DSPICHLC_DSPICH5(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH5_SHIFT))&SIU_DSPICHLC_DSPICH5_MASK)
#define SIU_DSPICHLC_DSPICH4_MASK                0x8000000u
#define SIU_DSPICHLC_DSPICH4_SHIFT               27u
#define SIU_DSPICHLC_DSPICH4_WIDTH               1u
#define SIU_DSPICHLC_DSPICH4(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH4_SHIFT))&SIU_DSPICHLC_DSPICH4_MASK)
#define SIU_DSPICHLC_DSPICH3_MASK                0x10000000u
#define SIU_DSPICHLC_DSPICH3_SHIFT               28u
#define SIU_DSPICHLC_DSPICH3_WIDTH               1u
#define SIU_DSPICHLC_DSPICH3(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH3_SHIFT))&SIU_DSPICHLC_DSPICH3_MASK)
#define SIU_DSPICHLC_DSPICH2_MASK                0x20000000u
#define SIU_DSPICHLC_DSPICH2_SHIFT               29u
#define SIU_DSPICHLC_DSPICH2_WIDTH               1u
#define SIU_DSPICHLC_DSPICH2(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH2_SHIFT))&SIU_DSPICHLC_DSPICH2_MASK)
#define SIU_DSPICHLC_DSPICH1_MASK                0x40000000u
#define SIU_DSPICHLC_DSPICH1_SHIFT               30u
#define SIU_DSPICHLC_DSPICH1_WIDTH               1u
#define SIU_DSPICHLC_DSPICH1(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH1_SHIFT))&SIU_DSPICHLC_DSPICH1_MASK)
#define SIU_DSPICHLC_DSPICH0_MASK                0x80000000u
#define SIU_DSPICHLC_DSPICH0_SHIFT               31u
#define SIU_DSPICHLC_DSPICH0_WIDTH               1u
#define SIU_DSPICHLC_DSPICH0(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPICHLC_DSPICH0_SHIFT))&SIU_DSPICHLC_DSPICH0_MASK)
/* ETPUBC Bit Fields */
#define SIU_ETPUBC_ETPUB16_MASK                  0x1u
#define SIU_ETPUBC_ETPUB16_SHIFT                 0u
#define SIU_ETPUBC_ETPUB16_WIDTH                 1u
#define SIU_ETPUBC_ETPUB16(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB16_SHIFT))&SIU_ETPUBC_ETPUB16_MASK)
#define SIU_ETPUBC_ETPUB17_MASK                  0x2u
#define SIU_ETPUBC_ETPUB17_SHIFT                 1u
#define SIU_ETPUBC_ETPUB17_WIDTH                 1u
#define SIU_ETPUBC_ETPUB17(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB17_SHIFT))&SIU_ETPUBC_ETPUB17_MASK)
#define SIU_ETPUBC_ETPUB18_MASK                  0x4u
#define SIU_ETPUBC_ETPUB18_SHIFT                 2u
#define SIU_ETPUBC_ETPUB18_WIDTH                 1u
#define SIU_ETPUBC_ETPUB18(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB18_SHIFT))&SIU_ETPUBC_ETPUB18_MASK)
#define SIU_ETPUBC_ETPUB19_MASK                  0x8u
#define SIU_ETPUBC_ETPUB19_SHIFT                 3u
#define SIU_ETPUBC_ETPUB19_WIDTH                 1u
#define SIU_ETPUBC_ETPUB19(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB19_SHIFT))&SIU_ETPUBC_ETPUB19_MASK)
#define SIU_ETPUBC_ETPUB20_MASK                  0x10u
#define SIU_ETPUBC_ETPUB20_SHIFT                 4u
#define SIU_ETPUBC_ETPUB20_WIDTH                 1u
#define SIU_ETPUBC_ETPUB20(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB20_SHIFT))&SIU_ETPUBC_ETPUB20_MASK)
#define SIU_ETPUBC_ETPUB21_MASK                  0x20u
#define SIU_ETPUBC_ETPUB21_SHIFT                 5u
#define SIU_ETPUBC_ETPUB21_WIDTH                 1u
#define SIU_ETPUBC_ETPUB21(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB21_SHIFT))&SIU_ETPUBC_ETPUB21_MASK)
#define SIU_ETPUBC_ETPUB22_MASK                  0x40u
#define SIU_ETPUBC_ETPUB22_SHIFT                 6u
#define SIU_ETPUBC_ETPUB22_WIDTH                 1u
#define SIU_ETPUBC_ETPUB22(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB22_SHIFT))&SIU_ETPUBC_ETPUB22_MASK)
#define SIU_ETPUBC_ETPUB23_MASK                  0x80u
#define SIU_ETPUBC_ETPUB23_SHIFT                 7u
#define SIU_ETPUBC_ETPUB23_WIDTH                 1u
#define SIU_ETPUBC_ETPUB23(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB23_SHIFT))&SIU_ETPUBC_ETPUB23_MASK)
#define SIU_ETPUBC_ETPUB24_MASK                  0x100u
#define SIU_ETPUBC_ETPUB24_SHIFT                 8u
#define SIU_ETPUBC_ETPUB24_WIDTH                 1u
#define SIU_ETPUBC_ETPUB24(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB24_SHIFT))&SIU_ETPUBC_ETPUB24_MASK)
#define SIU_ETPUBC_ETPUB25_MASK                  0x200u
#define SIU_ETPUBC_ETPUB25_SHIFT                 9u
#define SIU_ETPUBC_ETPUB25_WIDTH                 1u
#define SIU_ETPUBC_ETPUB25(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB25_SHIFT))&SIU_ETPUBC_ETPUB25_MASK)
#define SIU_ETPUBC_ETPUB26_MASK                  0x400u
#define SIU_ETPUBC_ETPUB26_SHIFT                 10u
#define SIU_ETPUBC_ETPUB26_WIDTH                 1u
#define SIU_ETPUBC_ETPUB26(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB26_SHIFT))&SIU_ETPUBC_ETPUB26_MASK)
#define SIU_ETPUBC_ETPUB27_MASK                  0x800u
#define SIU_ETPUBC_ETPUB27_SHIFT                 11u
#define SIU_ETPUBC_ETPUB27_WIDTH                 1u
#define SIU_ETPUBC_ETPUB27(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB27_SHIFT))&SIU_ETPUBC_ETPUB27_MASK)
#define SIU_ETPUBC_ETPUB28_MASK                  0x1000u
#define SIU_ETPUBC_ETPUB28_SHIFT                 12u
#define SIU_ETPUBC_ETPUB28_WIDTH                 1u
#define SIU_ETPUBC_ETPUB28(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB28_SHIFT))&SIU_ETPUBC_ETPUB28_MASK)
#define SIU_ETPUBC_ETPUB29_MASK                  0x2000u
#define SIU_ETPUBC_ETPUB29_SHIFT                 13u
#define SIU_ETPUBC_ETPUB29_WIDTH                 1u
#define SIU_ETPUBC_ETPUB29(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB29_SHIFT))&SIU_ETPUBC_ETPUB29_MASK)
#define SIU_ETPUBC_ETPUB30_MASK                  0x4000u
#define SIU_ETPUBC_ETPUB30_SHIFT                 14u
#define SIU_ETPUBC_ETPUB30_WIDTH                 1u
#define SIU_ETPUBC_ETPUB30(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB30_SHIFT))&SIU_ETPUBC_ETPUB30_MASK)
#define SIU_ETPUBC_ETPUB31_MASK                  0x8000u
#define SIU_ETPUBC_ETPUB31_SHIFT                 15u
#define SIU_ETPUBC_ETPUB31_WIDTH                 1u
#define SIU_ETPUBC_ETPUB31(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB31_SHIFT))&SIU_ETPUBC_ETPUB31_MASK)
#define SIU_ETPUBC_ETPUB0_MASK                   0x10000u
#define SIU_ETPUBC_ETPUB0_SHIFT                  16u
#define SIU_ETPUBC_ETPUB0_WIDTH                  1u
#define SIU_ETPUBC_ETPUB0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB0_SHIFT))&SIU_ETPUBC_ETPUB0_MASK)
#define SIU_ETPUBC_ETPUB1_MASK                   0x20000u
#define SIU_ETPUBC_ETPUB1_SHIFT                  17u
#define SIU_ETPUBC_ETPUB1_WIDTH                  1u
#define SIU_ETPUBC_ETPUB1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB1_SHIFT))&SIU_ETPUBC_ETPUB1_MASK)
#define SIU_ETPUBC_ETPUB2_MASK                   0x40000u
#define SIU_ETPUBC_ETPUB2_SHIFT                  18u
#define SIU_ETPUBC_ETPUB2_WIDTH                  1u
#define SIU_ETPUBC_ETPUB2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB2_SHIFT))&SIU_ETPUBC_ETPUB2_MASK)
#define SIU_ETPUBC_ETPUB3_MASK                   0x80000u
#define SIU_ETPUBC_ETPUB3_SHIFT                  19u
#define SIU_ETPUBC_ETPUB3_WIDTH                  1u
#define SIU_ETPUBC_ETPUB3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB3_SHIFT))&SIU_ETPUBC_ETPUB3_MASK)
#define SIU_ETPUBC_ETPUB4_MASK                   0x100000u
#define SIU_ETPUBC_ETPUB4_SHIFT                  20u
#define SIU_ETPUBC_ETPUB4_WIDTH                  1u
#define SIU_ETPUBC_ETPUB4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB4_SHIFT))&SIU_ETPUBC_ETPUB4_MASK)
#define SIU_ETPUBC_ETPUB5_MASK                   0x200000u
#define SIU_ETPUBC_ETPUB5_SHIFT                  21u
#define SIU_ETPUBC_ETPUB5_WIDTH                  1u
#define SIU_ETPUBC_ETPUB5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB5_SHIFT))&SIU_ETPUBC_ETPUB5_MASK)
#define SIU_ETPUBC_ETPUB6_MASK                   0x400000u
#define SIU_ETPUBC_ETPUB6_SHIFT                  22u
#define SIU_ETPUBC_ETPUB6_WIDTH                  1u
#define SIU_ETPUBC_ETPUB6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB6_SHIFT))&SIU_ETPUBC_ETPUB6_MASK)
#define SIU_ETPUBC_ETPUB7_MASK                   0x800000u
#define SIU_ETPUBC_ETPUB7_SHIFT                  23u
#define SIU_ETPUBC_ETPUB7_WIDTH                  1u
#define SIU_ETPUBC_ETPUB7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB7_SHIFT))&SIU_ETPUBC_ETPUB7_MASK)
#define SIU_ETPUBC_ETPUB8_MASK                   0x1000000u
#define SIU_ETPUBC_ETPUB8_SHIFT                  24u
#define SIU_ETPUBC_ETPUB8_WIDTH                  1u
#define SIU_ETPUBC_ETPUB8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB8_SHIFT))&SIU_ETPUBC_ETPUB8_MASK)
#define SIU_ETPUBC_ETPUB9_MASK                   0x2000000u
#define SIU_ETPUBC_ETPUB9_SHIFT                  25u
#define SIU_ETPUBC_ETPUB9_WIDTH                  1u
#define SIU_ETPUBC_ETPUB9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB9_SHIFT))&SIU_ETPUBC_ETPUB9_MASK)
#define SIU_ETPUBC_ETPUB10_MASK                  0x4000000u
#define SIU_ETPUBC_ETPUB10_SHIFT                 26u
#define SIU_ETPUBC_ETPUB10_WIDTH                 1u
#define SIU_ETPUBC_ETPUB10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB10_SHIFT))&SIU_ETPUBC_ETPUB10_MASK)
#define SIU_ETPUBC_ETPUB11_MASK                  0x8000000u
#define SIU_ETPUBC_ETPUB11_SHIFT                 27u
#define SIU_ETPUBC_ETPUB11_WIDTH                 1u
#define SIU_ETPUBC_ETPUB11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB11_SHIFT))&SIU_ETPUBC_ETPUB11_MASK)
#define SIU_ETPUBC_ETPUB12_MASK                  0x10000000u
#define SIU_ETPUBC_ETPUB12_SHIFT                 28u
#define SIU_ETPUBC_ETPUB12_WIDTH                 1u
#define SIU_ETPUBC_ETPUB12(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB12_SHIFT))&SIU_ETPUBC_ETPUB12_MASK)
#define SIU_ETPUBC_ETPUB13_MASK                  0x20000000u
#define SIU_ETPUBC_ETPUB13_SHIFT                 29u
#define SIU_ETPUBC_ETPUB13_WIDTH                 1u
#define SIU_ETPUBC_ETPUB13(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB13_SHIFT))&SIU_ETPUBC_ETPUB13_MASK)
#define SIU_ETPUBC_ETPUB14_MASK                  0x40000000u
#define SIU_ETPUBC_ETPUB14_SHIFT                 30u
#define SIU_ETPUBC_ETPUB14_WIDTH                 1u
#define SIU_ETPUBC_ETPUB14(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB14_SHIFT))&SIU_ETPUBC_ETPUB14_MASK)
#define SIU_ETPUBC_ETPUB15_MASK                  0x80000000u
#define SIU_ETPUBC_ETPUB15_SHIFT                 31u
#define SIU_ETPUBC_ETPUB15_WIDTH                 1u
#define SIU_ETPUBC_ETPUB15(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBC_ETPUB15_SHIFT))&SIU_ETPUBC_ETPUB15_MASK)
/* ETPUBD Bit Fields */
#define SIU_ETPUBD_ETPUB24_MASK                  0x10000u
#define SIU_ETPUBD_ETPUB24_SHIFT                 16u
#define SIU_ETPUBD_ETPUB24_WIDTH                 1u
#define SIU_ETPUBD_ETPUB24(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB24_SHIFT))&SIU_ETPUBD_ETPUB24_MASK)
#define SIU_ETPUBD_ETPUB25_MASK                  0x20000u
#define SIU_ETPUBD_ETPUB25_SHIFT                 17u
#define SIU_ETPUBD_ETPUB25_WIDTH                 1u
#define SIU_ETPUBD_ETPUB25(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB25_SHIFT))&SIU_ETPUBD_ETPUB25_MASK)
#define SIU_ETPUBD_ETPUB26_MASK                  0x40000u
#define SIU_ETPUBD_ETPUB26_SHIFT                 18u
#define SIU_ETPUBD_ETPUB26_WIDTH                 1u
#define SIU_ETPUBD_ETPUB26(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB26_SHIFT))&SIU_ETPUBD_ETPUB26_MASK)
#define SIU_ETPUBD_ETPUB27_MASK                  0x80000u
#define SIU_ETPUBD_ETPUB27_SHIFT                 19u
#define SIU_ETPUBD_ETPUB27_WIDTH                 1u
#define SIU_ETPUBD_ETPUB27(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB27_SHIFT))&SIU_ETPUBD_ETPUB27_MASK)
#define SIU_ETPUBD_ETPUB28_MASK                  0x100000u
#define SIU_ETPUBD_ETPUB28_SHIFT                 20u
#define SIU_ETPUBD_ETPUB28_WIDTH                 1u
#define SIU_ETPUBD_ETPUB28(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB28_SHIFT))&SIU_ETPUBD_ETPUB28_MASK)
#define SIU_ETPUBD_ETPUB29_MASK                  0x200000u
#define SIU_ETPUBD_ETPUB29_SHIFT                 21u
#define SIU_ETPUBD_ETPUB29_WIDTH                 1u
#define SIU_ETPUBD_ETPUB29(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB29_SHIFT))&SIU_ETPUBD_ETPUB29_MASK)
#define SIU_ETPUBD_ETPUB16_MASK                  0x4000000u
#define SIU_ETPUBD_ETPUB16_SHIFT                 26u
#define SIU_ETPUBD_ETPUB16_WIDTH                 1u
#define SIU_ETPUBD_ETPUB16(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB16_SHIFT))&SIU_ETPUBD_ETPUB16_MASK)
#define SIU_ETPUBD_ETPUB17_MASK                  0x8000000u
#define SIU_ETPUBD_ETPUB17_SHIFT                 27u
#define SIU_ETPUBD_ETPUB17_WIDTH                 1u
#define SIU_ETPUBD_ETPUB17(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB17_SHIFT))&SIU_ETPUBD_ETPUB17_MASK)
#define SIU_ETPUBD_ETPUB18_MASK                  0x10000000u
#define SIU_ETPUBD_ETPUB18_SHIFT                 28u
#define SIU_ETPUBD_ETPUB18_WIDTH                 1u
#define SIU_ETPUBD_ETPUB18(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB18_SHIFT))&SIU_ETPUBD_ETPUB18_MASK)
#define SIU_ETPUBD_ETPUB19_MASK                  0x20000000u
#define SIU_ETPUBD_ETPUB19_SHIFT                 29u
#define SIU_ETPUBD_ETPUB19_WIDTH                 1u
#define SIU_ETPUBD_ETPUB19(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB19_SHIFT))&SIU_ETPUBD_ETPUB19_MASK)
#define SIU_ETPUBD_ETPUB20_MASK                  0x40000000u
#define SIU_ETPUBD_ETPUB20_SHIFT                 30u
#define SIU_ETPUBD_ETPUB20_WIDTH                 1u
#define SIU_ETPUBD_ETPUB20(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB20_SHIFT))&SIU_ETPUBD_ETPUB20_MASK)
#define SIU_ETPUBD_ETPUB21_MASK                  0x80000000u
#define SIU_ETPUBD_ETPUB21_SHIFT                 31u
#define SIU_ETPUBD_ETPUB21_WIDTH                 1u
#define SIU_ETPUBD_ETPUB21(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_ETPUBD_ETPUB21_SHIFT))&SIU_ETPUBD_ETPUB21_MASK)
/* EMIOSD Bit Fields */
#define SIU_EMIOSD_EMIOS1_4_OUT9_MASK            0x400000u
#define SIU_EMIOSD_EMIOS1_4_OUT9_SHIFT           22u
#define SIU_EMIOSD_EMIOS1_4_OUT9_WIDTH           1u
#define SIU_EMIOSD_EMIOS1_4_OUT9(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSD_EMIOS1_4_OUT9_SHIFT))&SIU_EMIOSD_EMIOS1_4_OUT9_MASK)
#define SIU_EMIOSD_EMIOS1_5_OUT8_MASK            0x800000u
#define SIU_EMIOSD_EMIOS1_5_OUT8_SHIFT           23u
#define SIU_EMIOSD_EMIOS1_5_OUT8_WIDTH           1u
#define SIU_EMIOSD_EMIOS1_5_OUT8(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSD_EMIOS1_5_OUT8_SHIFT))&SIU_EMIOSD_EMIOS1_5_OUT8_MASK)
#define SIU_EMIOSD_EMIOS1_2_OUT7_MASK            0x1000000u
#define SIU_EMIOSD_EMIOS1_2_OUT7_SHIFT           24u
#define SIU_EMIOSD_EMIOS1_2_OUT7_WIDTH           1u
#define SIU_EMIOSD_EMIOS1_2_OUT7(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSD_EMIOS1_2_OUT7_SHIFT))&SIU_EMIOSD_EMIOS1_2_OUT7_MASK)
#define SIU_EMIOSD_EMIOS1_3_OUT6_MASK            0x2000000u
#define SIU_EMIOSD_EMIOS1_3_OUT6_SHIFT           25u
#define SIU_EMIOSD_EMIOS1_3_OUT6_WIDTH           1u
#define SIU_EMIOSD_EMIOS1_3_OUT6(x)              (((uint32_t)(((uint32_t)(x))<<SIU_EMIOSD_EMIOS1_3_OUT6_SHIFT))&SIU_EMIOSD_EMIOS1_3_OUT6_MASK)
/* DSPIDHLD Bit Fields */
#define SIU_DSPIDHLD_DSPIDL31_MASK               0x1u
#define SIU_DSPIDHLD_DSPIDL31_SHIFT              0u
#define SIU_DSPIDHLD_DSPIDL31_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL31(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL31_SHIFT))&SIU_DSPIDHLD_DSPIDL31_MASK)
#define SIU_DSPIDHLD_DSPIDL30_MASK               0x2u
#define SIU_DSPIDHLD_DSPIDL30_SHIFT              1u
#define SIU_DSPIDHLD_DSPIDL30_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL30(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL30_SHIFT))&SIU_DSPIDHLD_DSPIDL30_MASK)
#define SIU_DSPIDHLD_DSPIDL29_MASK               0x4u
#define SIU_DSPIDHLD_DSPIDL29_SHIFT              2u
#define SIU_DSPIDHLD_DSPIDL29_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL29(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL29_SHIFT))&SIU_DSPIDHLD_DSPIDL29_MASK)
#define SIU_DSPIDHLD_DSPIDL28_MASK               0x8u
#define SIU_DSPIDHLD_DSPIDL28_SHIFT              3u
#define SIU_DSPIDHLD_DSPIDL28_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL28(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL28_SHIFT))&SIU_DSPIDHLD_DSPIDL28_MASK)
#define SIU_DSPIDHLD_DSPIDL27_MASK               0x10u
#define SIU_DSPIDHLD_DSPIDL27_SHIFT              4u
#define SIU_DSPIDHLD_DSPIDL27_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL27(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL27_SHIFT))&SIU_DSPIDHLD_DSPIDL27_MASK)
#define SIU_DSPIDHLD_DSPIDL26_MASK               0x20u
#define SIU_DSPIDHLD_DSPIDL26_SHIFT              5u
#define SIU_DSPIDHLD_DSPIDL26_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL26(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL26_SHIFT))&SIU_DSPIDHLD_DSPIDL26_MASK)
#define SIU_DSPIDHLD_DSPIDL25_MASK               0x40u
#define SIU_DSPIDHLD_DSPIDL25_SHIFT              6u
#define SIU_DSPIDHLD_DSPIDL25_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL25(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL25_SHIFT))&SIU_DSPIDHLD_DSPIDL25_MASK)
#define SIU_DSPIDHLD_DSPIDL24_MASK               0x80u
#define SIU_DSPIDHLD_DSPIDL24_SHIFT              7u
#define SIU_DSPIDHLD_DSPIDL24_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL24(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL24_SHIFT))&SIU_DSPIDHLD_DSPIDL24_MASK)
#define SIU_DSPIDHLD_DSPIDL23_MASK               0x100u
#define SIU_DSPIDHLD_DSPIDL23_SHIFT              8u
#define SIU_DSPIDHLD_DSPIDL23_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL23(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL23_SHIFT))&SIU_DSPIDHLD_DSPIDL23_MASK)
#define SIU_DSPIDHLD_DSPIDL22_MASK               0x200u
#define SIU_DSPIDHLD_DSPIDL22_SHIFT              9u
#define SIU_DSPIDHLD_DSPIDL22_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL22(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL22_SHIFT))&SIU_DSPIDHLD_DSPIDL22_MASK)
#define SIU_DSPIDHLD_DSPIDL21_MASK               0x400u
#define SIU_DSPIDHLD_DSPIDL21_SHIFT              10u
#define SIU_DSPIDHLD_DSPIDL21_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL21(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL21_SHIFT))&SIU_DSPIDHLD_DSPIDL21_MASK)
#define SIU_DSPIDHLD_DSPIDL20_MASK               0x800u
#define SIU_DSPIDHLD_DSPIDL20_SHIFT              11u
#define SIU_DSPIDHLD_DSPIDL20_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL20(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL20_SHIFT))&SIU_DSPIDHLD_DSPIDL20_MASK)
#define SIU_DSPIDHLD_DSPIDL19_MASK               0x1000u
#define SIU_DSPIDHLD_DSPIDL19_SHIFT              12u
#define SIU_DSPIDHLD_DSPIDL19_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL19(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL19_SHIFT))&SIU_DSPIDHLD_DSPIDL19_MASK)
#define SIU_DSPIDHLD_DSPIDL18_MASK               0x2000u
#define SIU_DSPIDHLD_DSPIDL18_SHIFT              13u
#define SIU_DSPIDHLD_DSPIDL18_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL18(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL18_SHIFT))&SIU_DSPIDHLD_DSPIDL18_MASK)
#define SIU_DSPIDHLD_DSPIDL17_MASK               0x4000u
#define SIU_DSPIDHLD_DSPIDL17_SHIFT              14u
#define SIU_DSPIDHLD_DSPIDL17_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL17(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL17_SHIFT))&SIU_DSPIDHLD_DSPIDL17_MASK)
#define SIU_DSPIDHLD_DSPIDL16_MASK               0x8000u
#define SIU_DSPIDHLD_DSPIDL16_SHIFT              15u
#define SIU_DSPIDHLD_DSPIDL16_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDL16(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDL16_SHIFT))&SIU_DSPIDHLD_DSPIDL16_MASK)
#define SIU_DSPIDHLD_DSPIDH15_MASK               0x10000u
#define SIU_DSPIDHLD_DSPIDH15_SHIFT              16u
#define SIU_DSPIDHLD_DSPIDH15_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDH15(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH15_SHIFT))&SIU_DSPIDHLD_DSPIDH15_MASK)
#define SIU_DSPIDHLD_DSPIDH14_MASK               0x20000u
#define SIU_DSPIDHLD_DSPIDH14_SHIFT              17u
#define SIU_DSPIDHLD_DSPIDH14_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDH14(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH14_SHIFT))&SIU_DSPIDHLD_DSPIDH14_MASK)
#define SIU_DSPIDHLD_DSPIDH13_MASK               0x40000u
#define SIU_DSPIDHLD_DSPIDH13_SHIFT              18u
#define SIU_DSPIDHLD_DSPIDH13_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDH13(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH13_SHIFT))&SIU_DSPIDHLD_DSPIDH13_MASK)
#define SIU_DSPIDHLD_DSPIDH12_MASK               0x80000u
#define SIU_DSPIDHLD_DSPIDH12_SHIFT              19u
#define SIU_DSPIDHLD_DSPIDH12_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDH12(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH12_SHIFT))&SIU_DSPIDHLD_DSPIDH12_MASK)
#define SIU_DSPIDHLD_DSPIDH11_MASK               0x100000u
#define SIU_DSPIDHLD_DSPIDH11_SHIFT              20u
#define SIU_DSPIDHLD_DSPIDH11_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDH11(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH11_SHIFT))&SIU_DSPIDHLD_DSPIDH11_MASK)
#define SIU_DSPIDHLD_DSPIDH10_MASK               0x200000u
#define SIU_DSPIDHLD_DSPIDH10_SHIFT              21u
#define SIU_DSPIDHLD_DSPIDH10_WIDTH              1u
#define SIU_DSPIDHLD_DSPIDH10(x)                 (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH10_SHIFT))&SIU_DSPIDHLD_DSPIDH10_MASK)
#define SIU_DSPIDHLD_DSPIDH9_MASK                0x400000u
#define SIU_DSPIDHLD_DSPIDH9_SHIFT               22u
#define SIU_DSPIDHLD_DSPIDH9_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH9(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH9_SHIFT))&SIU_DSPIDHLD_DSPIDH9_MASK)
#define SIU_DSPIDHLD_DSPIDH8_MASK                0x800000u
#define SIU_DSPIDHLD_DSPIDH8_SHIFT               23u
#define SIU_DSPIDHLD_DSPIDH8_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH8(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH8_SHIFT))&SIU_DSPIDHLD_DSPIDH8_MASK)
#define SIU_DSPIDHLD_DSPIDH7_MASK                0x1000000u
#define SIU_DSPIDHLD_DSPIDH7_SHIFT               24u
#define SIU_DSPIDHLD_DSPIDH7_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH7(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH7_SHIFT))&SIU_DSPIDHLD_DSPIDH7_MASK)
#define SIU_DSPIDHLD_DSPIDH6_MASK                0x2000000u
#define SIU_DSPIDHLD_DSPIDH6_SHIFT               25u
#define SIU_DSPIDHLD_DSPIDH6_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH6(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH6_SHIFT))&SIU_DSPIDHLD_DSPIDH6_MASK)
#define SIU_DSPIDHLD_DSPIDH5_MASK                0x4000000u
#define SIU_DSPIDHLD_DSPIDH5_SHIFT               26u
#define SIU_DSPIDHLD_DSPIDH5_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH5(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH5_SHIFT))&SIU_DSPIDHLD_DSPIDH5_MASK)
#define SIU_DSPIDHLD_DSPIDH4_MASK                0x8000000u
#define SIU_DSPIDHLD_DSPIDH4_SHIFT               27u
#define SIU_DSPIDHLD_DSPIDH4_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH4(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH4_SHIFT))&SIU_DSPIDHLD_DSPIDH4_MASK)
#define SIU_DSPIDHLD_DSPIDH3_MASK                0x10000000u
#define SIU_DSPIDHLD_DSPIDH3_SHIFT               28u
#define SIU_DSPIDHLD_DSPIDH3_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH3(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH3_SHIFT))&SIU_DSPIDHLD_DSPIDH3_MASK)
#define SIU_DSPIDHLD_DSPIDH2_MASK                0x20000000u
#define SIU_DSPIDHLD_DSPIDH2_SHIFT               29u
#define SIU_DSPIDHLD_DSPIDH2_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH2(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH2_SHIFT))&SIU_DSPIDHLD_DSPIDH2_MASK)
#define SIU_DSPIDHLD_DSPIDH1_MASK                0x40000000u
#define SIU_DSPIDHLD_DSPIDH1_SHIFT               30u
#define SIU_DSPIDHLD_DSPIDH1_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH1(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH1_SHIFT))&SIU_DSPIDHLD_DSPIDH1_MASK)
#define SIU_DSPIDHLD_DSPIDH0_MASK                0x80000000u
#define SIU_DSPIDHLD_DSPIDH0_SHIFT               31u
#define SIU_DSPIDHLD_DSPIDH0_WIDTH               1u
#define SIU_DSPIDHLD_DSPIDH0(x)                  (((uint32_t)(((uint32_t)(x))<<SIU_DSPIDHLD_DSPIDH0_SHIFT))&SIU_DSPIDHLD_DSPIDH0_MASK)
/* GPDI Bit Fields */
#define SIU_GPDI_PDIn_MASK                       0x1u
#define SIU_GPDI_PDIn_SHIFT                      0u
#define SIU_GPDI_PDIn_WIDTH                      1u
#define SIU_GPDI_PDIn(x)                         (((uint8_t)(((uint8_t)(x))<<SIU_GPDI_PDIn_SHIFT))&SIU_GPDI_PDIn_MASK)
/* IMUX0 Bit Fields */
#define SIU_IMUX0_MUXSEL0_MASK                   0x3u
#define SIU_IMUX0_MUXSEL0_SHIFT                  0u
#define SIU_IMUX0_MUXSEL0_WIDTH                  2u
#define SIU_IMUX0_MUXSEL0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL0_SHIFT))&SIU_IMUX0_MUXSEL0_MASK)
#define SIU_IMUX0_MUXSEL1_MASK                   0xCu
#define SIU_IMUX0_MUXSEL1_SHIFT                  2u
#define SIU_IMUX0_MUXSEL1_WIDTH                  2u
#define SIU_IMUX0_MUXSEL1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL1_SHIFT))&SIU_IMUX0_MUXSEL1_MASK)
#define SIU_IMUX0_MUXSEL2_MASK                   0x30u
#define SIU_IMUX0_MUXSEL2_SHIFT                  4u
#define SIU_IMUX0_MUXSEL2_WIDTH                  2u
#define SIU_IMUX0_MUXSEL2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL2_SHIFT))&SIU_IMUX0_MUXSEL2_MASK)
#define SIU_IMUX0_MUXSEL3_MASK                   0xC0u
#define SIU_IMUX0_MUXSEL3_SHIFT                  6u
#define SIU_IMUX0_MUXSEL3_WIDTH                  2u
#define SIU_IMUX0_MUXSEL3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL3_SHIFT))&SIU_IMUX0_MUXSEL3_MASK)
#define SIU_IMUX0_MUXSEL4_MASK                   0x300u
#define SIU_IMUX0_MUXSEL4_SHIFT                  8u
#define SIU_IMUX0_MUXSEL4_WIDTH                  2u
#define SIU_IMUX0_MUXSEL4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL4_SHIFT))&SIU_IMUX0_MUXSEL4_MASK)
#define SIU_IMUX0_MUXSEL5_MASK                   0xC00u
#define SIU_IMUX0_MUXSEL5_SHIFT                  10u
#define SIU_IMUX0_MUXSEL5_WIDTH                  2u
#define SIU_IMUX0_MUXSEL5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL5_SHIFT))&SIU_IMUX0_MUXSEL5_MASK)
#define SIU_IMUX0_MUXSEL6_MASK                   0x3000u
#define SIU_IMUX0_MUXSEL6_SHIFT                  12u
#define SIU_IMUX0_MUXSEL6_WIDTH                  2u
#define SIU_IMUX0_MUXSEL6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL6_SHIFT))&SIU_IMUX0_MUXSEL6_MASK)
#define SIU_IMUX0_MUXSEL7_MASK                   0xC000u
#define SIU_IMUX0_MUXSEL7_SHIFT                  14u
#define SIU_IMUX0_MUXSEL7_WIDTH                  2u
#define SIU_IMUX0_MUXSEL7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL7_SHIFT))&SIU_IMUX0_MUXSEL7_MASK)
#define SIU_IMUX0_MUXSEL8_MASK                   0x30000u
#define SIU_IMUX0_MUXSEL8_SHIFT                  16u
#define SIU_IMUX0_MUXSEL8_WIDTH                  2u
#define SIU_IMUX0_MUXSEL8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL8_SHIFT))&SIU_IMUX0_MUXSEL8_MASK)
#define SIU_IMUX0_MUXSEL9_MASK                   0xC0000u
#define SIU_IMUX0_MUXSEL9_SHIFT                  18u
#define SIU_IMUX0_MUXSEL9_WIDTH                  2u
#define SIU_IMUX0_MUXSEL9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL9_SHIFT))&SIU_IMUX0_MUXSEL9_MASK)
#define SIU_IMUX0_MUXSEL10_MASK                  0x300000u
#define SIU_IMUX0_MUXSEL10_SHIFT                 20u
#define SIU_IMUX0_MUXSEL10_WIDTH                 2u
#define SIU_IMUX0_MUXSEL10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL10_SHIFT))&SIU_IMUX0_MUXSEL10_MASK)
#define SIU_IMUX0_MUXSEL11_MASK                  0xC00000u
#define SIU_IMUX0_MUXSEL11_SHIFT                 22u
#define SIU_IMUX0_MUXSEL11_WIDTH                 2u
#define SIU_IMUX0_MUXSEL11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX0_MUXSEL11_SHIFT))&SIU_IMUX0_MUXSEL11_MASK)
/* IMUX1 Bit Fields */
#define SIU_IMUX1_MUXSEL0_MASK                   0x3u
#define SIU_IMUX1_MUXSEL0_SHIFT                  0u
#define SIU_IMUX1_MUXSEL0_WIDTH                  2u
#define SIU_IMUX1_MUXSEL0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX1_MUXSEL0_SHIFT))&SIU_IMUX1_MUXSEL0_MASK)
#define SIU_IMUX1_MUXSEL1_MASK                   0xCu
#define SIU_IMUX1_MUXSEL1_SHIFT                  2u
#define SIU_IMUX1_MUXSEL1_WIDTH                  2u
#define SIU_IMUX1_MUXSEL1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX1_MUXSEL1_SHIFT))&SIU_IMUX1_MUXSEL1_MASK)
#define SIU_IMUX1_MUXSEL5_MASK                   0xC00u
#define SIU_IMUX1_MUXSEL5_SHIFT                  10u
#define SIU_IMUX1_MUXSEL5_WIDTH                  2u
#define SIU_IMUX1_MUXSEL5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX1_MUXSEL5_SHIFT))&SIU_IMUX1_MUXSEL5_MASK)
/* IMUX2 Bit Fields */
#define SIU_IMUX2_MUXSEL5_MASK                   0xC00u
#define SIU_IMUX2_MUXSEL5_SHIFT                  10u
#define SIU_IMUX2_MUXSEL5_WIDTH                  2u
#define SIU_IMUX2_MUXSEL5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL5_SHIFT))&SIU_IMUX2_MUXSEL5_MASK)
#define SIU_IMUX2_MUXSEL6_MASK                   0x3000u
#define SIU_IMUX2_MUXSEL6_SHIFT                  12u
#define SIU_IMUX2_MUXSEL6_WIDTH                  2u
#define SIU_IMUX2_MUXSEL6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL6_SHIFT))&SIU_IMUX2_MUXSEL6_MASK)
#define SIU_IMUX2_MUXSEL7_MASK                   0xC000u
#define SIU_IMUX2_MUXSEL7_SHIFT                  14u
#define SIU_IMUX2_MUXSEL7_WIDTH                  2u
#define SIU_IMUX2_MUXSEL7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL7_SHIFT))&SIU_IMUX2_MUXSEL7_MASK)
#define SIU_IMUX2_MUXSEL8_MASK                   0x30000u
#define SIU_IMUX2_MUXSEL8_SHIFT                  16u
#define SIU_IMUX2_MUXSEL8_WIDTH                  2u
#define SIU_IMUX2_MUXSEL8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL8_SHIFT))&SIU_IMUX2_MUXSEL8_MASK)
#define SIU_IMUX2_MUXSEL9_MASK                   0xC0000u
#define SIU_IMUX2_MUXSEL9_SHIFT                  18u
#define SIU_IMUX2_MUXSEL9_WIDTH                  2u
#define SIU_IMUX2_MUXSEL9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL9_SHIFT))&SIU_IMUX2_MUXSEL9_MASK)
#define SIU_IMUX2_MUXSEL10_MASK                  0x300000u
#define SIU_IMUX2_MUXSEL10_SHIFT                 20u
#define SIU_IMUX2_MUXSEL10_WIDTH                 2u
#define SIU_IMUX2_MUXSEL10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL10_SHIFT))&SIU_IMUX2_MUXSEL10_MASK)
#define SIU_IMUX2_MUXSEL11_MASK                  0xC00000u
#define SIU_IMUX2_MUXSEL11_SHIFT                 22u
#define SIU_IMUX2_MUXSEL11_WIDTH                 2u
#define SIU_IMUX2_MUXSEL11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX2_MUXSEL11_SHIFT))&SIU_IMUX2_MUXSEL11_MASK)
/* IMUX3 Bit Fields */
#define SIU_IMUX3_MUXSEL0_MASK                   0x3u
#define SIU_IMUX3_MUXSEL0_SHIFT                  0u
#define SIU_IMUX3_MUXSEL0_WIDTH                  2u
#define SIU_IMUX3_MUXSEL0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL0_SHIFT))&SIU_IMUX3_MUXSEL0_MASK)
#define SIU_IMUX3_MUXSEL1_MASK                   0xCu
#define SIU_IMUX3_MUXSEL1_SHIFT                  2u
#define SIU_IMUX3_MUXSEL1_WIDTH                  2u
#define SIU_IMUX3_MUXSEL1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL1_SHIFT))&SIU_IMUX3_MUXSEL1_MASK)
#define SIU_IMUX3_MUXSEL2_MASK                   0x30u
#define SIU_IMUX3_MUXSEL2_SHIFT                  4u
#define SIU_IMUX3_MUXSEL2_WIDTH                  2u
#define SIU_IMUX3_MUXSEL2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL2_SHIFT))&SIU_IMUX3_MUXSEL2_MASK)
#define SIU_IMUX3_MUXSEL3_MASK                   0xC0u
#define SIU_IMUX3_MUXSEL3_SHIFT                  6u
#define SIU_IMUX3_MUXSEL3_WIDTH                  2u
#define SIU_IMUX3_MUXSEL3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL3_SHIFT))&SIU_IMUX3_MUXSEL3_MASK)
#define SIU_IMUX3_MUXSEL4_MASK                   0x300u
#define SIU_IMUX3_MUXSEL4_SHIFT                  8u
#define SIU_IMUX3_MUXSEL4_WIDTH                  2u
#define SIU_IMUX3_MUXSEL4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL4_SHIFT))&SIU_IMUX3_MUXSEL4_MASK)
#define SIU_IMUX3_MUXSEL5_MASK                   0xC00u
#define SIU_IMUX3_MUXSEL5_SHIFT                  10u
#define SIU_IMUX3_MUXSEL5_WIDTH                  2u
#define SIU_IMUX3_MUXSEL5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL5_SHIFT))&SIU_IMUX3_MUXSEL5_MASK)
#define SIU_IMUX3_MUXSEL6_MASK                   0x3000u
#define SIU_IMUX3_MUXSEL6_SHIFT                  12u
#define SIU_IMUX3_MUXSEL6_WIDTH                  2u
#define SIU_IMUX3_MUXSEL6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX3_MUXSEL6_SHIFT))&SIU_IMUX3_MUXSEL6_MASK)
/* IMUX4 Bit Fields */
#define SIU_IMUX4_MUXSEL0_MASK                   0x3u
#define SIU_IMUX4_MUXSEL0_SHIFT                  0u
#define SIU_IMUX4_MUXSEL0_WIDTH                  2u
#define SIU_IMUX4_MUXSEL0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX4_MUXSEL0_SHIFT))&SIU_IMUX4_MUXSEL0_MASK)
#define SIU_IMUX4_MUXSEL1_MASK                   0xCu
#define SIU_IMUX4_MUXSEL1_SHIFT                  2u
#define SIU_IMUX4_MUXSEL1_WIDTH                  2u
#define SIU_IMUX4_MUXSEL1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX4_MUXSEL1_SHIFT))&SIU_IMUX4_MUXSEL1_MASK)
#define SIU_IMUX4_MUXSEL2_MASK                   0x30u
#define SIU_IMUX4_MUXSEL2_SHIFT                  4u
#define SIU_IMUX4_MUXSEL2_WIDTH                  2u
#define SIU_IMUX4_MUXSEL2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX4_MUXSEL2_SHIFT))&SIU_IMUX4_MUXSEL2_MASK)
#define SIU_IMUX4_MUXSEL3_MASK                   0xC0u
#define SIU_IMUX4_MUXSEL3_SHIFT                  6u
#define SIU_IMUX4_MUXSEL3_WIDTH                  2u
#define SIU_IMUX4_MUXSEL3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX4_MUXSEL3_SHIFT))&SIU_IMUX4_MUXSEL3_MASK)
#define SIU_IMUX4_MUXSEL8_MASK                   0x30000u
#define SIU_IMUX4_MUXSEL8_SHIFT                  16u
#define SIU_IMUX4_MUXSEL8_WIDTH                  2u
#define SIU_IMUX4_MUXSEL8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX4_MUXSEL8_SHIFT))&SIU_IMUX4_MUXSEL8_MASK)
/* IMUX5 Bit Fields */
#define SIU_IMUX5_MUXSEL0_MASK                   0x3u
#define SIU_IMUX5_MUXSEL0_SHIFT                  0u
#define SIU_IMUX5_MUXSEL0_WIDTH                  2u
#define SIU_IMUX5_MUXSEL0(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL0_SHIFT))&SIU_IMUX5_MUXSEL0_MASK)
#define SIU_IMUX5_MUXSEL1_MASK                   0xCu
#define SIU_IMUX5_MUXSEL1_SHIFT                  2u
#define SIU_IMUX5_MUXSEL1_WIDTH                  2u
#define SIU_IMUX5_MUXSEL1(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL1_SHIFT))&SIU_IMUX5_MUXSEL1_MASK)
#define SIU_IMUX5_MUXSEL2_MASK                   0x30u
#define SIU_IMUX5_MUXSEL2_SHIFT                  4u
#define SIU_IMUX5_MUXSEL2_WIDTH                  2u
#define SIU_IMUX5_MUXSEL2(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL2_SHIFT))&SIU_IMUX5_MUXSEL2_MASK)
#define SIU_IMUX5_MUXSEL3_MASK                   0xC0u
#define SIU_IMUX5_MUXSEL3_SHIFT                  6u
#define SIU_IMUX5_MUXSEL3_WIDTH                  2u
#define SIU_IMUX5_MUXSEL3(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL3_SHIFT))&SIU_IMUX5_MUXSEL3_MASK)
#define SIU_IMUX5_MUXSEL4_MASK                   0x300u
#define SIU_IMUX5_MUXSEL4_SHIFT                  8u
#define SIU_IMUX5_MUXSEL4_WIDTH                  2u
#define SIU_IMUX5_MUXSEL4(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL4_SHIFT))&SIU_IMUX5_MUXSEL4_MASK)
#define SIU_IMUX5_MUXSEL5_MASK                   0xC00u
#define SIU_IMUX5_MUXSEL5_SHIFT                  10u
#define SIU_IMUX5_MUXSEL5_WIDTH                  2u
#define SIU_IMUX5_MUXSEL5(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL5_SHIFT))&SIU_IMUX5_MUXSEL5_MASK)
#define SIU_IMUX5_MUXSEL6_MASK                   0x3000u
#define SIU_IMUX5_MUXSEL6_SHIFT                  12u
#define SIU_IMUX5_MUXSEL6_WIDTH                  2u
#define SIU_IMUX5_MUXSEL6(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL6_SHIFT))&SIU_IMUX5_MUXSEL6_MASK)
#define SIU_IMUX5_MUXSEL7_MASK                   0xC000u
#define SIU_IMUX5_MUXSEL7_SHIFT                  14u
#define SIU_IMUX5_MUXSEL7_WIDTH                  2u
#define SIU_IMUX5_MUXSEL7(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL7_SHIFT))&SIU_IMUX5_MUXSEL7_MASK)
#define SIU_IMUX5_MUXSEL8_MASK                   0x30000u
#define SIU_IMUX5_MUXSEL8_SHIFT                  16u
#define SIU_IMUX5_MUXSEL8_WIDTH                  2u
#define SIU_IMUX5_MUXSEL8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL8_SHIFT))&SIU_IMUX5_MUXSEL8_MASK)
#define SIU_IMUX5_MUXSEL9_MASK                   0xC0000u
#define SIU_IMUX5_MUXSEL9_SHIFT                  18u
#define SIU_IMUX5_MUXSEL9_WIDTH                  2u
#define SIU_IMUX5_MUXSEL9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL9_SHIFT))&SIU_IMUX5_MUXSEL9_MASK)
#define SIU_IMUX5_MUXSEL10_MASK                  0x300000u
#define SIU_IMUX5_MUXSEL10_SHIFT                 20u
#define SIU_IMUX5_MUXSEL10_WIDTH                 2u
#define SIU_IMUX5_MUXSEL10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL10_SHIFT))&SIU_IMUX5_MUXSEL10_MASK)
#define SIU_IMUX5_MUXSEL11_MASK                  0xC00000u
#define SIU_IMUX5_MUXSEL11_SHIFT                 22u
#define SIU_IMUX5_MUXSEL11_WIDTH                 2u
#define SIU_IMUX5_MUXSEL11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL11_SHIFT))&SIU_IMUX5_MUXSEL11_MASK)
#define SIU_IMUX5_MUXSEL12_MASK                  0x3000000u
#define SIU_IMUX5_MUXSEL12_SHIFT                 24u
#define SIU_IMUX5_MUXSEL12_WIDTH                 2u
#define SIU_IMUX5_MUXSEL12(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL12_SHIFT))&SIU_IMUX5_MUXSEL12_MASK)
#define SIU_IMUX5_MUXSEL13_MASK                  0xC000000u
#define SIU_IMUX5_MUXSEL13_SHIFT                 26u
#define SIU_IMUX5_MUXSEL13_WIDTH                 2u
#define SIU_IMUX5_MUXSEL13(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL13_SHIFT))&SIU_IMUX5_MUXSEL13_MASK)
#define SIU_IMUX5_MUXSEL14_MASK                  0x30000000u
#define SIU_IMUX5_MUXSEL14_SHIFT                 28u
#define SIU_IMUX5_MUXSEL14_WIDTH                 2u
#define SIU_IMUX5_MUXSEL14(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL14_SHIFT))&SIU_IMUX5_MUXSEL14_MASK)
#define SIU_IMUX5_MUXSEL15_MASK                  0xC0000000u
#define SIU_IMUX5_MUXSEL15_SHIFT                 30u
#define SIU_IMUX5_MUXSEL15_WIDTH                 2u
#define SIU_IMUX5_MUXSEL15(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX5_MUXSEL15_SHIFT))&SIU_IMUX5_MUXSEL15_MASK)
/* IMUX7 Bit Fields */
#define SIU_IMUX7_MUXSEL8_MASK                   0x30000u
#define SIU_IMUX7_MUXSEL8_SHIFT                  16u
#define SIU_IMUX7_MUXSEL8_WIDTH                  2u
#define SIU_IMUX7_MUXSEL8(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL8_SHIFT))&SIU_IMUX7_MUXSEL8_MASK)
#define SIU_IMUX7_MUXSEL9_MASK                   0xC0000u
#define SIU_IMUX7_MUXSEL9_SHIFT                  18u
#define SIU_IMUX7_MUXSEL9_WIDTH                  2u
#define SIU_IMUX7_MUXSEL9(x)                     (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL9_SHIFT))&SIU_IMUX7_MUXSEL9_MASK)
#define SIU_IMUX7_MUXSEL10_MASK                  0x300000u
#define SIU_IMUX7_MUXSEL10_SHIFT                 20u
#define SIU_IMUX7_MUXSEL10_WIDTH                 2u
#define SIU_IMUX7_MUXSEL10(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL10_SHIFT))&SIU_IMUX7_MUXSEL10_MASK)
#define SIU_IMUX7_MUXSEL11_MASK                  0xC00000u
#define SIU_IMUX7_MUXSEL11_SHIFT                 22u
#define SIU_IMUX7_MUXSEL11_WIDTH                 2u
#define SIU_IMUX7_MUXSEL11(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL11_SHIFT))&SIU_IMUX7_MUXSEL11_MASK)
#define SIU_IMUX7_MUXSEL12_MASK                  0x3000000u
#define SIU_IMUX7_MUXSEL12_SHIFT                 24u
#define SIU_IMUX7_MUXSEL12_WIDTH                 2u
#define SIU_IMUX7_MUXSEL12(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL12_SHIFT))&SIU_IMUX7_MUXSEL12_MASK)
#define SIU_IMUX7_MUXSEL13_MASK                  0xC000000u
#define SIU_IMUX7_MUXSEL13_SHIFT                 26u
#define SIU_IMUX7_MUXSEL13_WIDTH                 2u
#define SIU_IMUX7_MUXSEL13(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL13_SHIFT))&SIU_IMUX7_MUXSEL13_MASK)
#define SIU_IMUX7_MUXSEL14_MASK                  0x30000000u
#define SIU_IMUX7_MUXSEL14_SHIFT                 28u
#define SIU_IMUX7_MUXSEL14_WIDTH                 2u
#define SIU_IMUX7_MUXSEL14(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL14_SHIFT))&SIU_IMUX7_MUXSEL14_MASK)
#define SIU_IMUX7_MUXSEL15_MASK                  0xC0000000u
#define SIU_IMUX7_MUXSEL15_SHIFT                 30u
#define SIU_IMUX7_MUXSEL15_WIDTH                 2u
#define SIU_IMUX7_MUXSEL15(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX7_MUXSEL15_SHIFT))&SIU_IMUX7_MUXSEL15_MASK)
/* IMUX10 Bit Fields */
#define SIU_IMUX10_MUXSEL0_MASK                  0x3u
#define SIU_IMUX10_MUXSEL0_SHIFT                 0u
#define SIU_IMUX10_MUXSEL0_WIDTH                 2u
#define SIU_IMUX10_MUXSEL0(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL0_SHIFT))&SIU_IMUX10_MUXSEL0_MASK)
#define SIU_IMUX10_MUXSEL1_MASK                  0xCu
#define SIU_IMUX10_MUXSEL1_SHIFT                 2u
#define SIU_IMUX10_MUXSEL1_WIDTH                 2u
#define SIU_IMUX10_MUXSEL1(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL1_SHIFT))&SIU_IMUX10_MUXSEL1_MASK)
#define SIU_IMUX10_MUXSEL3_MASK                  0xC0u
#define SIU_IMUX10_MUXSEL3_SHIFT                 6u
#define SIU_IMUX10_MUXSEL3_WIDTH                 2u
#define SIU_IMUX10_MUXSEL3(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL3_SHIFT))&SIU_IMUX10_MUXSEL3_MASK)
#define SIU_IMUX10_MUXSEL8_MASK                  0x30000u
#define SIU_IMUX10_MUXSEL8_SHIFT                 16u
#define SIU_IMUX10_MUXSEL8_WIDTH                 2u
#define SIU_IMUX10_MUXSEL8(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL8_SHIFT))&SIU_IMUX10_MUXSEL8_MASK)
#define SIU_IMUX10_MUXSEL9_MASK                  0xC0000u
#define SIU_IMUX10_MUXSEL9_SHIFT                 18u
#define SIU_IMUX10_MUXSEL9_WIDTH                 2u
#define SIU_IMUX10_MUXSEL9(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL9_SHIFT))&SIU_IMUX10_MUXSEL9_MASK)
#define SIU_IMUX10_MUXSEL10_MASK                 0x300000u
#define SIU_IMUX10_MUXSEL10_SHIFT                20u
#define SIU_IMUX10_MUXSEL10_WIDTH                2u
#define SIU_IMUX10_MUXSEL10(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL10_SHIFT))&SIU_IMUX10_MUXSEL10_MASK)
#define SIU_IMUX10_MUXSEL11_MASK                 0xC00000u
#define SIU_IMUX10_MUXSEL11_SHIFT                22u
#define SIU_IMUX10_MUXSEL11_WIDTH                2u
#define SIU_IMUX10_MUXSEL11(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL11_SHIFT))&SIU_IMUX10_MUXSEL11_MASK)
#define SIU_IMUX10_MUXSEL12_MASK                 0x3000000u
#define SIU_IMUX10_MUXSEL12_SHIFT                24u
#define SIU_IMUX10_MUXSEL12_WIDTH                2u
#define SIU_IMUX10_MUXSEL12(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL12_SHIFT))&SIU_IMUX10_MUXSEL12_MASK)
#define SIU_IMUX10_MUXSEL13_MASK                 0xC000000u
#define SIU_IMUX10_MUXSEL13_SHIFT                26u
#define SIU_IMUX10_MUXSEL13_WIDTH                2u
#define SIU_IMUX10_MUXSEL13(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL13_SHIFT))&SIU_IMUX10_MUXSEL13_MASK)
#define SIU_IMUX10_MUXSEL14_MASK                 0x30000000u
#define SIU_IMUX10_MUXSEL14_SHIFT                28u
#define SIU_IMUX10_MUXSEL14_WIDTH                2u
#define SIU_IMUX10_MUXSEL14(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL14_SHIFT))&SIU_IMUX10_MUXSEL14_MASK)
#define SIU_IMUX10_MUXSEL15_MASK                 0xC0000000u
#define SIU_IMUX10_MUXSEL15_SHIFT                30u
#define SIU_IMUX10_MUXSEL15_WIDTH                2u
#define SIU_IMUX10_MUXSEL15(x)                   (((uint32_t)(((uint32_t)(x))<<SIU_IMUX10_MUXSEL15_SHIFT))&SIU_IMUX10_MUXSEL15_MASK)
/* IMUX12 Bit Fields */
#define SIU_IMUX12_MUXSEL2_MASK                  0x30u
#define SIU_IMUX12_MUXSEL2_SHIFT                 4u
#define SIU_IMUX12_MUXSEL2_WIDTH                 2u
#define SIU_IMUX12_MUXSEL2(x)                    (((uint32_t)(((uint32_t)(x))<<SIU_IMUX12_MUXSEL2_SHIFT))&SIU_IMUX12_MUXSEL2_MASK)

/*!
 * @}
 */ /* end of group SIU_Register_Masks */


/*!
 * @}
 */ /* end of group SIU_Peripheral_Access_Layer */


/* ----------------------------------------------------------------------------
   -- SIU_B Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIU_B_Peripheral_Access_Layer SIU_B Peripheral Access Layer
 * @{
 */


/** SIU_B - Size of Registers Arrays */
#define SIU_B_PCRM_COUNT                         4u
#define SIU_B_GPDOM_COUNT                        4u
#define SIU_B_GPDIM_COUNT                        4u

/** SIU_B - Register Layout Typedef */
typedef struct {
       uint8_t RESERVED_0[544];
  __IO uint16_t PCRM[SIU_B_PCRM_COUNT];            /**< Pad Configuration Register Mirrored, array offset: 0x220, array step: 0x2 */
       uint8_t RESERVED_1[1224];
  __IO uint8_t GPDOM[SIU_B_GPDOM_COUNT];           /**< GPIO Pin Data Output Register Mirrored, array offset: 0x6F0, array step: 0x1 */
       uint8_t RESERVED_2[508];
  __I  uint8_t GPDIM[SIU_B_GPDIM_COUNT];           /**< GPIO Pin Data Input Register Mirrored, array offset: 0x8F0, array step: 0x1 */
} SIU_B_Type, *SIU_B_MemMapPtr;

 /** Number of instances of the SIU_B module. */
#define SIU_B_INSTANCE_COUNT                     (1u)


/* SIU_B - Peripheral instance base addresses */
/** Peripheral SIU_B base address */
#define SIU_B_BASE                               (0xC3F98000u)
/** Peripheral SIU_B base pointer */
#define SIU_B                                    ((SIU_B_Type *)SIU_B_BASE)
/** Array initializer of SIU_B peripheral base addresses */
#define SIU_B_BASE_ADDRS                         { SIU_B_BASE }
/** Array initializer of SIU_B peripheral base pointers */
#define SIU_B_BASE_PTRS                          { SIU_B }

/* ----------------------------------------------------------------------------
   -- SIU_B Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SIU_B_Register_Masks SIU_B Register Masks
 * @{
 */

/* PCRM Bit Fields */
#define SIU_B_PCRM_WPS_MASK                      0x1u
#define SIU_B_PCRM_WPS_SHIFT                     0u
#define SIU_B_PCRM_WPS_WIDTH                     1u
#define SIU_B_PCRM_WPS(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_WPS_SHIFT))&SIU_B_PCRM_WPS_MASK)
#define SIU_B_PCRM_WPE_MASK                      0x2u
#define SIU_B_PCRM_WPE_SHIFT                     1u
#define SIU_B_PCRM_WPE_WIDTH                     1u
#define SIU_B_PCRM_WPE(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_WPE_SHIFT))&SIU_B_PCRM_WPE_MASK)
#define SIU_B_PCRM_SRC_MASK                      0xCu
#define SIU_B_PCRM_SRC_SHIFT                     2u
#define SIU_B_PCRM_SRC_WIDTH                     2u
#define SIU_B_PCRM_SRC(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_SRC_SHIFT))&SIU_B_PCRM_SRC_MASK)
#define SIU_B_PCRM_HYS_MASK                      0x10u
#define SIU_B_PCRM_HYS_SHIFT                     4u
#define SIU_B_PCRM_HYS_WIDTH                     1u
#define SIU_B_PCRM_HYS(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_HYS_SHIFT))&SIU_B_PCRM_HYS_MASK)
#define SIU_B_PCRM_ODE_MASK                      0x20u
#define SIU_B_PCRM_ODE_SHIFT                     5u
#define SIU_B_PCRM_ODE_WIDTH                     1u
#define SIU_B_PCRM_ODE(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_ODE_SHIFT))&SIU_B_PCRM_ODE_MASK)
#define SIU_B_PCRM_DSC_MASK                      0xC0u
#define SIU_B_PCRM_DSC_SHIFT                     6u
#define SIU_B_PCRM_DSC_WIDTH                     2u
#define SIU_B_PCRM_DSC(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_DSC_SHIFT))&SIU_B_PCRM_DSC_MASK)
#define SIU_B_PCRM_IBE_MASK                      0x100u
#define SIU_B_PCRM_IBE_SHIFT                     8u
#define SIU_B_PCRM_IBE_WIDTH                     1u
#define SIU_B_PCRM_IBE(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_IBE_SHIFT))&SIU_B_PCRM_IBE_MASK)
#define SIU_B_PCRM_OBE_MASK                      0x200u
#define SIU_B_PCRM_OBE_SHIFT                     9u
#define SIU_B_PCRM_OBE_WIDTH                     1u
#define SIU_B_PCRM_OBE(x)                        (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_OBE_SHIFT))&SIU_B_PCRM_OBE_MASK)
#define SIU_B_PCRM_PA_MASK                       0x1C00u
#define SIU_B_PCRM_PA_SHIFT                      10u
#define SIU_B_PCRM_PA_WIDTH                      3u
#define SIU_B_PCRM_PA(x)                         (((uint16_t)(((uint16_t)(x))<<SIU_B_PCRM_PA_SHIFT))&SIU_B_PCRM_PA_MASK)
/* GPDOM Bit Fields */
#define SIU_B_GPDOM_PDOn_MASK                    0x1u
#define SIU_B_GPDOM_PDOn_SHIFT                   0u
#define SIU_B_GPDOM_PDOn_WIDTH                   1u
#define SIU_B_GPDOM_PDOn(x)                      (((uint8_t)(((uint8_t)(x))<<SIU_B_GPDOM_PDOn_SHIFT))&SIU_B_GPDOM_PDOn_MASK)
/* GPDIM Bit Fields */
#define SIU_B_GPDIM_PDIn_MASK                    0x1u
#define SIU_B_GPDIM_PDIn_SHIFT                   0u
#define SIU_B_GPDIM_PDIn_WIDTH                   1u
#define SIU_B_GPDIM_PDIn(x)                      (((uint8_t)(((uint8_t)(x))<<SIU_B_GPDIM_PDIn_SHIFT))&SIU_B_GPDIM_PDIn_MASK)

/*!
 * @}
 */ /* end of group SIU_B_Register_Masks */


/*!
 * @}
 */ /* end of group SIU_B_Peripheral_Access_Layer */

/****************************************************************************/
/*                          MODULE : EMIOS                                  */
/****************************************************************************/

    struct EMIOS_tag {
    
        union {                  /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MDIS:1;
                vuint32_t FRZ:1;
                vuint32_t GTBE:1;
                vuint32_t ETB:1;
                vuint32_t GPREN:1;
                vuint32_t:6;
                vuint32_t SRV:4;
                vuint32_t GPRE:8;
                vuint32_t:8;
            } B;
        } MCR;
        
        union {                  /* Global FLAG Register */
            vuint32_t R;
            struct {
                vuint32_t F31:1;
                vuint32_t F30:1;
                vuint32_t F29:1;
                vuint32_t F28:1;
                vuint32_t F27:1;
                vuint32_t F26:1;
                vuint32_t F25:1;
                vuint32_t F24:1;
                vuint32_t F23:1;
                vuint32_t F22:1;
                vuint32_t F21:1;
                vuint32_t F20:1;
                vuint32_t F19:1;
                vuint32_t F18:1;
                vuint32_t F17:1;
                vuint32_t F16:1;
                vuint32_t F15:1;
                vuint32_t F14:1;
                vuint32_t F13:1;
                vuint32_t F12:1;
                vuint32_t F11:1;
                vuint32_t F10:1;
                vuint32_t F9:1;
                vuint32_t F8:1;
                vuint32_t F7:1;
                vuint32_t F6:1;
                vuint32_t F5:1;
                vuint32_t F4:1;
                vuint32_t F3:1;
                vuint32_t F2:1;
                vuint32_t F1:1;
                vuint32_t F0:1;
            } B;
        } GFR;
        
        union {                 /* Output Update Disable Register */
            vuint32_t R;
            struct {
                vuint32_t OU31:1;
                vuint32_t OU30:1;
                vuint32_t OU29:1;
                vuint32_t OU28:1;
                vuint32_t OU27:1;
                vuint32_t OU26:1;
                vuint32_t OU25:1;
                vuint32_t OU24:1;
                vuint32_t OU23:1;
                vuint32_t OU22:1;
                vuint32_t OU21:1;
                vuint32_t OU20:1;
                vuint32_t OU19:1;
                vuint32_t OU18:1;
                vuint32_t OU17:1;
                vuint32_t OU16:1;
                vuint32_t OU15:1;
                vuint32_t OU14:1;
                vuint32_t OU13:1;
                vuint32_t OU12:1;
                vuint32_t OU11:1;
                vuint32_t OU10:1;
                vuint32_t OU9:1;
                vuint32_t OU8:1;
                vuint32_t OU7:1;
                vuint32_t OU6:1;
                vuint32_t OU5:1;
                vuint32_t OU4:1;
                vuint32_t OU3:1;
                vuint32_t OU2:1;
                vuint32_t OU1:1;
                vuint32_t OU0:1;
            } B;
        } OUDR;
        
        uint32_t eMIOS_reserved000C[5]; /* 0x000C-0x001F */
        
        struct {
            union {              /* Channel A Data Register */
                vuint32_t R;
            } CADR;
            
            union {              /* Channel B Data Register */
                vuint32_t R;
            } CBDR;
            
            union {              /* Channel Counter Register */
                vuint32_t R;
            } CCNTR;
            
            union {              /* Channel Control Register */
                vuint32_t R;
                struct {
                    vuint32_t FREN:1;
                    vuint32_t ODIS:1;
                    vuint32_t ODISSL:2;
                    vuint32_t UCPRE:2;
                    vuint32_t UCPREN:1;
                    vuint32_t DMA:1;
                    vuint32_t:1;
                    vuint32_t IF:4;
                    vuint32_t FCK:1;
                    vuint32_t FEN:1;
                    vuint32_t:3;
                    vuint32_t FORCMA:1;
                    vuint32_t FORCMB:1;
                    vuint32_t:1;
                    vuint32_t BSL:2;
                    vuint32_t EDSEL:1;
                    vuint32_t EDPOL:1;
                    vuint32_t MODE:7;
                } B;
            } CCR;
            
            union {              /* Channel Status Register */
                vuint32_t R;
                struct {
                    vuint32_t OVR:1;
                    vuint32_t:15;
                    vuint32_t OVFL:1;
                    vuint32_t:12;
                    vuint32_t UCIN:1;
                    vuint32_t UCOUT:1;
                    vuint32_t FLAG:1;
                } B;
            } CSR;
            
            union {              /* Alternate Channel A Data Register */
                vuint32_t R;
            } ALTA;
            
            uint32_t eMIOS_channel_reserved0018[2];  /* 0x0018-0x001F */
            
        } CH[32];
        
        uint32_t eMIOS_reserved0420[3832];  /* 0x0420-0x3FFF */
    
    };

/****************************************************************************/
/*                          MODULE : PMC                                    */
/****************************************************************************/

    struct PMC_tag {
    
        union {
            vuint32_t R;
            struct {
                vuint32_t LVRER:1;
                vuint32_t LVREH:1;
                vuint32_t LVRE50:1;
                vuint32_t LVRE33:1;
                vuint32_t LVREC:1;
                vuint32_t LVREA:1;
                vuint32_t:1;
                vuint32_t:1;
                vuint32_t LVIER:1;
                vuint32_t LVIEH:1;
                vuint32_t LVIE50:1;
                vuint32_t LVIE33:1;
#ifdef COMP_TO_MPC5634M_V1_6_ON
				vuint32_t LVIC:1;
#else
                vuint32_t LVIEC:1;
#endif
                vuint32_t LVIEA:1;
                vuint32_t:1;
                vuint32_t TLK:1;
                vuint32_t:16;
            } B;
        } MCR;                  /* Module Configuration Register */
        
        union {
            vuint32_t R;
            struct {
                vuint32_t :8;
                vuint32_t LVDATRIM:4;
                vuint32_t LVDREGTRIM:4;
                vuint32_t VDD33TRIM:4;
                vuint32_t LVD33TRIM:4;
                vuint32_t VDDCTRIM:4;
                vuint32_t LVDCTRIM:4;
            } B;
        } TRIMR;                /* Trimming register */
        
        union {
            vuint32_t R;
            struct {
                vuint32_t :5;
                vuint32_t LVFSTBY:1;
                vuint32_t BGRDY:1;
                vuint32_t BGTS:1;
                vuint32_t :5;
                vuint32_t LVFCSTBY:1;
                vuint32_t :2;
                vuint32_t LVFCR:1;
                vuint32_t LVFCH:1;
                vuint32_t LVFC50:1;
                vuint32_t LVFC33:1;
                vuint32_t LVFCC:1;
                vuint32_t LVFCA:1;
                vuint32_t :2;
                vuint32_t LVFR:1;
                vuint32_t LVFH:1;
                vuint32_t LVF50:1;
                vuint32_t LVF33:1;
                vuint32_t LVFC:1;
                vuint32_t LVFA:1;
                vuint32_t :2;
            } B;
        } SR;                /* status register */
        
        uint32_t PMC_reserved000C[4093];  /* 0x000C-0x3FFF */
    };

/****************************************************************************/
/*                              MODULE :ETPU                                */
/****************************************************************************/
/***************************Configuration Registers**************************/

    struct ETPU_tag {
        union {                 /* MODULE CONFIGURATION REGISTER */
            vuint32_t R;
            struct {
                vuint32_t GEC:1;        /* Global Exception Clear */
                vuint32_t SDMERR:1;     /* SDM Read Error */
                vuint32_t WDTOA:1;      /* Watchdog Timeout-eTPU_A (WDTO1 in reference manual) */
                vuint32_t WDTOB:1;      /* Watchdog Timeout-eTPU_B (WDTO2 in reference manual) */
                vuint32_t MGE1:1;       /* Microcode Global Exception-ETPU_A */
                vuint32_t MGE2:1;       /* Microcode Global Exception-ETPU_B */
                vuint32_t ILF1:1;       /* Illegal Instruction Flag-ETPU_A */
                vuint32_t ILF2:1;       /* Illegal Instruction Flag-ETPU_B */
                vuint32_t:3;
                vuint32_t SCMSIZE:5;    /* Shared Code Memory size */
                vuint32_t:4;
                vuint32_t SCMMISC:1;    /* SCM MISC Complete/Clear */
                vuint32_t SCMMISF:1;    /* SCM MISC Flag */
                vuint32_t SCMMISEN:1;   /* SCM MISC Enable */
                vuint32_t:2;
                vuint32_t VIS:1;        /* SCM Visability */
                vuint32_t:5;
                vuint32_t GTBE:1;       /* Global Time Base Enable */
            } B;
        } MCR;
        
        union {                 /* COHERENT DUAL-PARAMETER CONTROL */
            vuint32_t R;
            struct {
                vuint32_t STS:1;        /* Start Status bit */
                vuint32_t CTBASE:5;     /* Channel Transfer Base */
                vuint32_t PBASE:10;     /* Parameter Buffer Base Address (PBBASE in reference manual) */
                vuint32_t PWIDTH:1;     /* Parameter Width */
                vuint32_t PARAM0:7;     /* Channel Parameter 0 */
                vuint32_t WR:1;         /* Read/Write selection */
                vuint32_t PARAM1:7;     /* Channel Parameter 1 */
            } B;
        } CDCR;
        
        uint32_t eTPU_reserved0008;  /* 0x0008-0x000B */
        
        union {                 /* MISC Compare Register */
            uint32_t R;
            struct {
                vuint32_t ETPUMISCCMP:32;   
            } B;
        } MISCCMPR;
        
        union {                 /* SCM off-range Date Register */
            uint32_t R;
            struct {
                vuint32_t ETPUSCMOFFDATA:32;   
            } B;
        } SCMOFFDATAR;
        
        union {                 /* ETPU_A Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t FEND:1;       /* Force END */
                vuint32_t MDIS:1;       /* Low power Stop */
                vuint32_t:1;
                vuint32_t STF:1;        /* Stop Flag */
                vuint32_t:4;
                vuint32_t HLTF:1;       /* Halt Mode Flag */
                vuint32_t:3;
                vuint32_t FCSS:1;       /* Filter Clock Source Select */
                vuint32_t FPSCK:3;      /* Filter Prescaler Clock Control */
                vuint32_t CDFC:2;
                vuint32_t:1;
                vuint32_t ERBA:5;       /* Engine Relative Base Address */
                vuint32_t SPPDIS:1;     /* Schedule Priority Passing Disable */
                vuint32_t:2;
                vuint32_t ETB:5;        /* Entry Table Base */
            } B;
        } ECR_A;
        
        union {                 /* ETPU_B Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t FEND:1;       /* Force END */
                vuint32_t MDIS:1;       /* Low power Stop */
                vuint32_t:1;
                vuint32_t STF:1;        /* Stop Flag */
                vuint32_t:4;
                vuint32_t HLTF:1;       /* Halt Mode Flag */
                vuint32_t:3;
                vuint32_t FCSS:1;       /* Filter Clock Source Select */
                vuint32_t FPSCK:3;      /* Filter Prescaler Clock Control */
                vuint32_t CDFC:2;
                vuint32_t:1;
                vuint32_t ERBA:5;       /* Engine Relative Base Address */
                vuint32_t SPPDIS:1;     /* Schedule Priority Passing Disable */
                vuint32_t:2;
                vuint32_t ETB:5;        /* Entry Table Base */
            } B;
        } ECR_B;
        
        uint32_t eTPU_reserved001C;  /* 0x001C-0x001F */
        
        union {                 /* ETPU_A Timebase Configuration Register */
            uint32_t R;
            struct {
                vuint32_t TCR2CTL:3;     /* TCR2 Clock/Gate Control */
                vuint32_t TCRCF:2;       /* TCRCLK Signal Filter Control */
                vuint32_t AM:2;          /* Angle Mode */
                vuint32_t:3;
                vuint32_t TCR2P:6;       /* TCR2 Prescaler Control */
                vuint32_t TCR1CTL:2;     /* TCR1 Clock/Gate Control */
                vuint32_t TCR1CS:1;      /* TCR1 Clock Source */ 
                vuint32_t:5;
                vuint32_t TCR1P:8;       /* TCR1 Prescaler Control */
            } B;
        } TBCR_A;

        union {                 /* ETPU_A TCR1 Visibility Register */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t TCR1:24;
            } B;
        } TB1R_A;
        
        union {                 /* ETPU_A TCR2 Visibility Register */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t TCR2:24;
            } B;
        } TB2R_A;
        
        union {                 /* ETPU_A STAC Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t REN1:1;       /* Resource Enable TCR1 */
                vuint32_t RSC1:1;       /* Resource Control TCR1 */
                vuint32_t:2;
                vuint32_t SERVER_ID1:4;   /* TCR1 Server ID */
                vuint32_t:4;
                vuint32_t SRV1:4;       /* Resource Server Slot */
                vuint32_t REN2:1;       /* Resource Enable TCR2 */
                vuint32_t RSC2:1;       /* Resource Control TCR2 */
                vuint32_t:2;
                vuint32_t SERVER_ID2:4;   /* TCR2 Server ID */
                vuint32_t:4;
                vuint32_t SRV2:4;       /* Resource Server Slot */
            } B;
        } REDCR_A;
        
        uint32_t eTPU_reserved0030[4];  /* 0x0030-0x003F */
        
        union {                 /* ETPU_B Timebase Configuration Register */
            uint32_t R;
            struct {
                vuint32_t TCR2CTL:3;     /* TCR2 Clock/Gate Control */
                vuint32_t TCRCF:2;       /* TCRCLK Signal Filter Control */
                vuint32_t AM:2;          /* Angle Mode */
                vuint32_t:3;
                vuint32_t TCR2P:6;       /* TCR2 Prescaler Control */
                vuint32_t TCR1CTL:2;     /* TCR1 Clock/Gate Control */
                vuint32_t TCR1CS:1;      /* TCR1 Clock Source */ 
                vuint32_t:5;
                vuint32_t TCR1P:8;       /* TCR1 Prescaler Control */
            } B;
        } TBCR_B;
        
        union {                 /* ETPU_B TCR1 Visibility Register */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t TCR1:24;
            } B;
        } TB1R_B;
        
        union {                 /* ETPU_B TCR2 Visibility Register */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t TCR2:24;
            } B;
        } TB2R_B;
        
        union {                 /* ETPU_B STAC Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t REN1:1;       /* Resource Enable TCR1 */
                vuint32_t RSC1:1;       /* Resource Control TCR1 */
                vuint32_t:2;
                vuint32_t SERVER_ID1:4;   /* TCR1 Server ID */
                vuint32_t:4;
                vuint32_t SRV1:4;       /* Resource Server Slot */
                vuint32_t REN2:1;       /* Resource Enable TCR2 */
                vuint32_t RSC2:1;       /* Resource Control TCR2 */
                vuint32_t:2;
                vuint32_t SERVER_ID2:4;   /* TCR2 Server ID */
                vuint32_t:4;
                vuint32_t SRV2:4;       /* Resource Server Slot */
            } B;
        } REDCR_B;
        
        uint32_t eTPU_reserved0050[4];  /* 0x0050-0x005F */
        
        union {                 /* Watchdog Timer Register A */
            vuint32_t R;
            struct {
                vuint32_t WDM:2;          /* Watchdog Mode */
                vuint32_t:14;
                vuint32_t WDCNT:16;       /* Watchdog Count */
            } B;
        } WDTR_A;
        
        uint32_t eTPU_reserved0064;  /* 0x0064-0x0067 */
        
        union {                 /* Idle Counter Register A*/
            vuint32_t R;
            struct {
                vuint32_t IDLE_CNT:31;
                vuint32_t ICLR:1;       /* Idle Clear */
            } B;
            
        } IDLE_A;
        
        uint32_t eTPU_reserved006C;  /* 0x006C-0x006F */
        
        union {                 /* Watchdog Timer Register B */
            vuint32_t R;
            struct {
                vuint32_t WDM:2;          /* Watchdog Mode */
                vuint32_t:14;
                vuint32_t WDCNT:16;       /* Watchdog Count */
            } B;
        } WDTR_B;
        
        uint32_t eTPU_reserved0074;  /* 0x0074-0x0077 */
        
        union {                 /* Idle Counter Register B*/
            vuint32_t R;
            struct {
                vuint32_t IDLE_CNT:31;
                vuint32_t ICLR:1;       /* Idle Clear */
            } B;
        } IDLE_B;
        
        uint32_t eTPU_reserved007C;  /* 0x007C-0x007F */
        
        uint32_t eTPU_reserved0080[32];  /* 0x0080-0x00FF */

        union {                 /* Error Correction Status and Control Register */
            vuint32_t R;
            struct {
                vuint32_t DCERR:1;
                vuint32_t DNCERR:1;
                vuint32_t:12;
                vuint32_t CCERR:1;
                vuint32_t CNCERR:1;
                vuint32_t HDEIE:1;
                vuint32_t MDEIE:1;
                vuint32_t:13;
                vuint32_t CEIE:1;
            } B;
        } ECSCR;

        union {                 /* Data Error Injection Address Register */
            vuint32_t R;
            struct {
                vuint32_t:18;
                vuint32_t INJ_ADDR:12;
                vuint32_t:2;
            } B;
        } DEIAR;

        union {                 /* Data Error Injection Data Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t DFLIP:32;
            } B;
        } DEIDPR;

        union {                 /* Data Error Injection Parity Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t:3;
                vuint32_t PFLIP3:5;
                vuint32_t:3;
                vuint32_t PFLIP2:5;
                vuint32_t:3;
                vuint32_t PFLIP1:5;
                vuint32_t:3;
                vuint32_t PFLIP0:5;
            } B;
        } DEIPPR;

        union {                 /* Data Error Report Address Register */
            vuint32_t R;
            struct {
                vuint32_t:18;
                vuint32_t ERR_ADDR:12;
                vuint32_t:2;
            } B;
        } DERAR;

        union {                 /* Data Error Report Data Register */
            vuint32_t R;
            struct {
                vuint32_t DATA:32;
            } B;
        } DERDR;

        union {                 /* Data Error Report Syndrome Register */
            vuint32_t R;
            struct {
                vuint32_t:3;
                vuint32_t SYND3:5;
                vuint32_t:3;
                vuint32_t SYND2:5;
                vuint32_t:3;
                vuint32_t SYND1:5;
                vuint32_t:3;
                vuint32_t SYND0:5;
            } B;
        } DERSR;

        uint32_t eTPU_reserved011C[2];  /* 0x011C-0x0123 */

        union {                 /* Code Error Injection Address Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t INJ_ADDR:14;
                vuint32_t:2;
            } B;
        } CEIAR;

        union {                 /* Code Error Injection Data Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t DFLIP:32;
            } B;
        } CEIDPR;

        union {                 /* Code Error Injection Parity Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t:25;
                vuint32_t PFLIP:7;
            } B;
        } CEIPPR;

        union {                 /* Code Error Report Address Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t ERR_ADDR:14;
                vuint32_t:2;
            } B;
        } CERAR;

        union {                 /* Code Error Report Data Register */
            vuint32_t R;
            struct {
                vuint32_t DATA:32;
            } B;
        } CERDR;

        union {                 /* Code Error Report Syndrome Register */
            vuint32_t R;
            struct {
                vuint32_t:25;
                vuint32_t SYND:7;
            } B;
        } CERSR;

        uint32_t eTPU_reserved013C[49];  /* 0x013C-0x01FF */

/*****************************Status and Control Registers**************************/

        union {                 /* ETPU_A Channel Interrut Status */
            vuint32_t R;
            struct {
                vuint32_t CIS31:1;      /* Channel 31 Interrut Status */
                vuint32_t CIS30:1;      /* Channel 30 Interrut Status */
                vuint32_t CIS29:1;      /* Channel 29 Interrut Status */
                vuint32_t CIS28:1;      /* Channel 28 Interrut Status */
                vuint32_t CIS27:1;      /* Channel 27 Interrut Status */
                vuint32_t CIS26:1;      /* Channel 26 Interrut Status */
                vuint32_t CIS25:1;      /* Channel 25 Interrut Status */
                vuint32_t CIS24:1;      /* Channel 24 Interrut Status */
                vuint32_t CIS23:1;      /* Channel 23 Interrut Status */
                vuint32_t CIS22:1;      /* Channel 22 Interrut Status */
                vuint32_t CIS21:1;      /* Channel 21 Interrut Status */
                vuint32_t CIS20:1;      /* Channel 20 Interrut Status */
                vuint32_t CIS19:1;      /* Channel 19 Interrut Status */
                vuint32_t CIS18:1;      /* Channel 18 Interrut Status */
                vuint32_t CIS17:1;      /* Channel 17 Interrut Status */
                vuint32_t CIS16:1;      /* Channel 16 Interrut Status */
                vuint32_t CIS15:1;      /* Channel 15 Interrut Status */
                vuint32_t CIS14:1;      /* Channel 14 Interrut Status */
                vuint32_t CIS13:1;      /* Channel 13 Interrut Status */
                vuint32_t CIS12:1;      /* Channel 12 Interrut Status */
                vuint32_t CIS11:1;      /* Channel 11 Interrut Status */
                vuint32_t CIS10:1;      /* Channel 10 Interrut Status */
                vuint32_t CIS9:1;       /* Channel 9 Interrut Status */
                vuint32_t CIS8:1;       /* Channel 8 Interrut Status */
                vuint32_t CIS7:1;       /* Channel 7 Interrut Status */
                vuint32_t CIS6:1;       /* Channel 6 Interrut Status */
                vuint32_t CIS5:1;       /* Channel 5 Interrut Status */
                vuint32_t CIS4:1;       /* Channel 4 Interrut Status */
                vuint32_t CIS3:1;       /* Channel 3 Interrut Status */
                vuint32_t CIS2:1;       /* Channel 2 Interrut Status */
                vuint32_t CIS1:1;       /* Channel 1 Interrut Status */
                vuint32_t CIS0:1;       /* Channel 0 Interrut Status */
            } B;
        } CISR_A;
        
        union {                 /* ETPU_B Channel Interruput Status */
            vuint32_t R;
            struct {
                vuint32_t CIS31:1;      /* Channel 31 Interrut Status */
                vuint32_t CIS30:1;      /* Channel 30 Interrut Status */
                vuint32_t CIS29:1;      /* Channel 29 Interrut Status */
                vuint32_t CIS28:1;      /* Channel 28 Interrut Status */
                vuint32_t CIS27:1;      /* Channel 27 Interrut Status */
                vuint32_t CIS26:1;      /* Channel 26 Interrut Status */
                vuint32_t CIS25:1;      /* Channel 25 Interrut Status */
                vuint32_t CIS24:1;      /* Channel 24 Interrut Status */
                vuint32_t CIS23:1;      /* Channel 23 Interrut Status */
                vuint32_t CIS22:1;      /* Channel 22 Interrut Status */
                vuint32_t CIS21:1;      /* Channel 21 Interrut Status */
                vuint32_t CIS20:1;      /* Channel 20 Interrut Status */
                vuint32_t CIS19:1;      /* Channel 19 Interrut Status */
                vuint32_t CIS18:1;      /* Channel 18 Interrut Status */
                vuint32_t CIS17:1;      /* Channel 17 Interrut Status */
                vuint32_t CIS16:1;      /* Channel 16 Interrut Status */
                vuint32_t CIS15:1;      /* Channel 15 Interrut Status */
                vuint32_t CIS14:1;      /* Channel 14 Interrut Status */
                vuint32_t CIS13:1;      /* Channel 13 Interrut Status */
                vuint32_t CIS12:1;      /* Channel 12 Interrut Status */
                vuint32_t CIS11:1;      /* Channel 11 Interrut Status */
                vuint32_t CIS10:1;      /* Channel 10 Interrut Status */
                vuint32_t CIS9:1;       /* Channel 9 Interrut Status */
                vuint32_t CIS8:1;       /* Channel 8 Interrut Status */
                vuint32_t CIS7:1;       /* Channel 7 Interrut Status */
                vuint32_t CIS6:1;       /* Channel 6 Interrut Status */
                vuint32_t CIS5:1;       /* Channel 5 Interrut Status */
                vuint32_t CIS4:1;       /* Channel 4 Interrut Status */
                vuint32_t CIS3:1;       /* Channel 3 Interrut Status */
                vuint32_t CIS2:1;       /* Channel 2 Interrut Status */
                vuint32_t CIS1:1;       /* Channel 1 Interrupt Status */
                vuint32_t CIS0:1;       /* Channel 0 Interrupt Status */
            } B;
        } CISR_B;
        
        uint32_t eTPU_reserved0208[2];  /* 0x0208-0x020F */
        
        union {                 /* ETPU_A Data Transfer Request Status */
            vuint32_t R;
            struct {
                vuint32_t DTRS31:1;     /* Channel 31 Data Transfer Request Status */
                vuint32_t DTRS30:1;     /* Channel 30 Data Transfer Request Status */
                vuint32_t DTRS29:1;     /* Channel 29 Data Transfer Request Status */
                vuint32_t DTRS28:1;     /* Channel 28 Data Transfer Request Status */
                vuint32_t DTRS27:1;     /* Channel 27 Data Transfer Request Status */
                vuint32_t DTRS26:1;     /* Channel 26 Data Transfer Request Status */
                vuint32_t DTRS25:1;     /* Channel 25 Data Transfer Request Status */
                vuint32_t DTRS24:1;     /* Channel 24 Data Transfer Request Status */
                vuint32_t DTRS23:1;     /* Channel 23 Data Transfer Request Status */
                vuint32_t DTRS22:1;     /* Channel 22 Data Transfer Request Status */
                vuint32_t DTRS21:1;     /* Channel 21 Data Transfer Request Status */
                vuint32_t DTRS20:1;     /* Channel 20 Data Transfer Request Status */
                vuint32_t DTRS19:1;     /* Channel 19 Data Transfer Request Status */
                vuint32_t DTRS18:1;     /* Channel 18 Data Transfer Request Status */
                vuint32_t DTRS17:1;     /* Channel 17 Data Transfer Request Status */
                vuint32_t DTRS16:1;     /* Channel 16 Data Transfer Request Status */
                vuint32_t DTRS15:1;     /* Channel 15 Data Transfer Request Status */
                vuint32_t DTRS14:1;     /* Channel 14 Data Transfer Request Status */
                vuint32_t DTRS13:1;     /* Channel 13 Data Transfer Request Status */
                vuint32_t DTRS12:1;     /* Channel 12 Data Transfer Request Status */
                vuint32_t DTRS11:1;     /* Channel 11 Data Transfer Request Status */
                vuint32_t DTRS10:1;     /* Channel 10 Data Transfer Request Status */
                vuint32_t DTRS9:1;      /* Channel 9 Data Transfer Request Status */
                vuint32_t DTRS8:1;      /* Channel 8 Data Transfer Request Status */
                vuint32_t DTRS7:1;      /* Channel 7 Data Transfer Request Status */
                vuint32_t DTRS6:1;      /* Channel 6 Data Transfer Request Status */
                vuint32_t DTRS5:1;      /* Channel 5 Data Transfer Request Status */
                vuint32_t DTRS4:1;      /* Channel 4 Data Transfer Request Status */
                vuint32_t DTRS3:1;      /* Channel 3 Data Transfer Request Status */
                vuint32_t DTRS2:1;      /* Channel 2 Data Transfer Request Status */
                vuint32_t DTRS1:1;      /* Channel 1 Data Transfer Request Status */
                vuint32_t DTRS0:1;      /* Channel 0 Data Transfer Request Status */
            } B;
        } CDTRSR_A;
        
        union {                 /* ETPU_B Data Transfer Request Status */
            vuint32_t R;
            struct {
                vuint32_t DTRS31:1;     /* Channel 31 Data Transfer Request Status */
                vuint32_t DTRS30:1;     /* Channel 30 Data Transfer Request Status */
                vuint32_t DTRS29:1;     /* Channel 29 Data Transfer Request Status */
                vuint32_t DTRS28:1;     /* Channel 28 Data Transfer Request Status */
                vuint32_t DTRS27:1;     /* Channel 27 Data Transfer Request Status */
                vuint32_t DTRS26:1;     /* Channel 26 Data Transfer Request Status */
                vuint32_t DTRS25:1;     /* Channel 25 Data Transfer Request Status */
                vuint32_t DTRS24:1;     /* Channel 24 Data Transfer Request Status */
                vuint32_t DTRS23:1;     /* Channel 23 Data Transfer Request Status */
                vuint32_t DTRS22:1;     /* Channel 22 Data Transfer Request Status */
                vuint32_t DTRS21:1;     /* Channel 21 Data Transfer Request Status */
                vuint32_t DTRS20:1;     /* Channel 20 Data Transfer Request Status */
                vuint32_t DTRS19:1;     /* Channel 19 Data Transfer Request Status */
                vuint32_t DTRS18:1;     /* Channel 18 Data Transfer Request Status */
                vuint32_t DTRS17:1;     /* Channel 17 Data Transfer Request Status */
                vuint32_t DTRS16:1;     /* Channel 16 Data Transfer Request Status */
                vuint32_t DTRS15:1;     /* Channel 15 Data Transfer Request Status */
                vuint32_t DTRS14:1;     /* Channel 14 Data Transfer Request Status */
                vuint32_t DTRS13:1;     /* Channel 13 Data Transfer Request Status */
                vuint32_t DTRS12:1;     /* Channel 12 Data Transfer Request Status */
                vuint32_t DTRS11:1;     /* Channel 11 Data Transfer Request Status */
                vuint32_t DTRS10:1;     /* Channel 10 Data Transfer Request Status */
                vuint32_t DTRS9:1;      /* Channel 9 Data Transfer Request Status */
                vuint32_t DTRS8:1;      /* Channel 8 Data Transfer Request Status */
                vuint32_t DTRS7:1;      /* Channel 7 Data Transfer Request Status */
                vuint32_t DTRS6:1;      /* Channel 6 Data Transfer Request Status */
                vuint32_t DTRS5:1;      /* Channel 5 Data Transfer Request Status */
                vuint32_t DTRS4:1;      /* Channel 4 Data Transfer Request Status */
                vuint32_t DTRS3:1;      /* Channel 3 Data Transfer Request Status */
                vuint32_t DTRS2:1;      /* Channel 2 Data Transfer Request Status */
                vuint32_t DTRS1:1;      /* Channel 1 Data Transfer Request Status */
                vuint32_t DTRS0:1;      /* Channel 0 Data Transfer Request Status */
            } B;
        } CDTRSR_B;
        
        uint32_t eTPU_reserved0218[2];  /* 0x0218-0x021F */
        
        union {                 /* ETPU_A Interruput Overflow Status */
            vuint32_t R;
            struct {
                vuint32_t CIOS31:1;     /* Channel 31 Interruput Overflow Status */
                vuint32_t CIOS30:1;     /* Channel 30 Interruput Overflow Status */
                vuint32_t CIOS29:1;     /* Channel 29 Interruput Overflow Status */
                vuint32_t CIOS28:1;     /* Channel 28 Interruput Overflow Status */
                vuint32_t CIOS27:1;     /* Channel 27 Interruput Overflow Status */
                vuint32_t CIOS26:1;     /* Channel 26 Interruput Overflow Status */
                vuint32_t CIOS25:1;     /* Channel 25 Interruput Overflow Status */
                vuint32_t CIOS24:1;     /* Channel 24 Interruput Overflow Status */
                vuint32_t CIOS23:1;     /* Channel 23 Interruput Overflow Status */
                vuint32_t CIOS22:1;     /* Channel 22 Interruput Overflow Status */
                vuint32_t CIOS21:1;     /* Channel 21 Interruput Overflow Status */
                vuint32_t CIOS20:1;     /* Channel 20 Interruput Overflow Status */
                vuint32_t CIOS19:1;     /* Channel 19 Interruput Overflow Status */
                vuint32_t CIOS18:1;     /* Channel 18 Interruput Overflow Status */
                vuint32_t CIOS17:1;     /* Channel 17 Interruput Overflow Status */
                vuint32_t CIOS16:1;     /* Channel 16 Interruput Overflow Status */
                vuint32_t CIOS15:1;     /* Channel 15 Interruput Overflow Status */
                vuint32_t CIOS14:1;     /* Channel 14 Interruput Overflow Status */
                vuint32_t CIOS13:1;     /* Channel 13 Interruput Overflow Status */
                vuint32_t CIOS12:1;     /* Channel 12 Interruput Overflow Status */
                vuint32_t CIOS11:1;     /* Channel 11 Interruput Overflow Status */
                vuint32_t CIOS10:1;     /* Channel 10 Interruput Overflow Status */
                vuint32_t CIOS9:1;      /* Channel 9 Interruput Overflow Status */
                vuint32_t CIOS8:1;      /* Channel 8 Interruput Overflow Status */
                vuint32_t CIOS7:1;      /* Channel 7 Interruput Overflow Status */
                vuint32_t CIOS6:1;      /* Channel 6 Interruput Overflow Status */
                vuint32_t CIOS5:1;      /* Channel 5 Interruput Overflow Status */
                vuint32_t CIOS4:1;      /* Channel 4 Interruput Overflow Status */
                vuint32_t CIOS3:1;      /* Channel 3 Interruput Overflow Status */
                vuint32_t CIOS2:1;      /* Channel 2 Interruput Overflow Status */
                vuint32_t CIOS1:1;      /* Channel 1 Interruput Overflow Status */
                vuint32_t CIOS0:1;      /* Channel 0 Interruput Overflow Status */
            } B;
        } CIOSR_A;
        
        union {                 /* ETPU_B Interruput Overflow Status */
            vuint32_t R;
            struct {
                vuint32_t CIOS31:1;     /* Channel 31 Interruput Overflow Status */
                vuint32_t CIOS30:1;     /* Channel 30 Interruput Overflow Status */
                vuint32_t CIOS29:1;     /* Channel 29 Interruput Overflow Status */
                vuint32_t CIOS28:1;     /* Channel 28 Interruput Overflow Status */
                vuint32_t CIOS27:1;     /* Channel 27 Interruput Overflow Status */
                vuint32_t CIOS26:1;     /* Channel 26 Interruput Overflow Status */
                vuint32_t CIOS25:1;     /* Channel 25 Interruput Overflow Status */
                vuint32_t CIOS24:1;     /* Channel 24 Interruput Overflow Status */
                vuint32_t CIOS23:1;     /* Channel 23 Interruput Overflow Status */
                vuint32_t CIOS22:1;     /* Channel 22 Interruput Overflow Status */
                vuint32_t CIOS21:1;     /* Channel 21 Interruput Overflow Status */
                vuint32_t CIOS20:1;     /* Channel 20 Interruput Overflow Status */
                vuint32_t CIOS19:1;     /* Channel 19 Interruput Overflow Status */
                vuint32_t CIOS18:1;     /* Channel 18 Interruput Overflow Status */
                vuint32_t CIOS17:1;     /* Channel 17 Interruput Overflow Status */
                vuint32_t CIOS16:1;     /* Channel 16 Interruput Overflow Status */
                vuint32_t CIOS15:1;     /* Channel 15 Interruput Overflow Status */
                vuint32_t CIOS14:1;     /* Channel 14 Interruput Overflow Status */
                vuint32_t CIOS13:1;     /* Channel 13 Interruput Overflow Status */
                vuint32_t CIOS12:1;     /* Channel 12 Interruput Overflow Status */
                vuint32_t CIOS11:1;     /* Channel 11 Interruput Overflow Status */
                vuint32_t CIOS10:1;     /* Channel 10 Interruput Overflow Status */
                vuint32_t CIOS9:1;      /* Channel 9 Interruput Overflow Status */
                vuint32_t CIOS8:1;      /* Channel 8 Interruput Overflow Status */
                vuint32_t CIOS7:1;      /* Channel 7 Interruput Overflow Status */
                vuint32_t CIOS6:1;      /* Channel 6 Interruput Overflow Status */
                vuint32_t CIOS5:1;      /* Channel 5 Interruput Overflow Status */
                vuint32_t CIOS4:1;      /* Channel 4 Interruput Overflow Status */
                vuint32_t CIOS3:1;      /* Channel 3 Interruput Overflow Status */
                vuint32_t CIOS2:1;      /* Channel 2 Interruput Overflow Status */
                vuint32_t CIOS1:1;      /* Channel 1 Interruput Overflow Status */
                vuint32_t CIOS0:1;      /* Channel 0 Interruput Overflow Status */
            } B;
        } CIOSR_B;
        
        uint32_t eTPU_reserved0228[2];  /* 0x0228-0x022F */
        
        union {                 /* ETPU_A Data Transfer Overflow Status */
            vuint32_t R;
            struct {
                vuint32_t DTROS31:1;    /* Channel 31 Data Transfer Overflow Status */
                vuint32_t DTROS30:1;    /* Channel 30 Data Transfer Overflow Status */
                vuint32_t DTROS29:1;    /* Channel 29 Data Transfer Overflow Status */
                vuint32_t DTROS28:1;    /* Channel 28 Data Transfer Overflow Status */
                vuint32_t DTROS27:1;    /* Channel 27 Data Transfer Overflow Status */
                vuint32_t DTROS26:1;    /* Channel 26 Data Transfer Overflow Status */
                vuint32_t DTROS25:1;    /* Channel 25 Data Transfer Overflow Status */
                vuint32_t DTROS24:1;    /* Channel 24 Data Transfer Overflow Status */
                vuint32_t DTROS23:1;    /* Channel 23 Data Transfer Overflow Status */
                vuint32_t DTROS22:1;    /* Channel 22 Data Transfer Overflow Status */
                vuint32_t DTROS21:1;    /* Channel 21 Data Transfer Overflow Status */
                vuint32_t DTROS20:1;    /* Channel 20 Data Transfer Overflow Status */
                vuint32_t DTROS19:1;    /* Channel 19 Data Transfer Overflow Status */
                vuint32_t DTROS18:1;    /* Channel 18 Data Transfer Overflow Status */
                vuint32_t DTROS17:1;    /* Channel 17 Data Transfer Overflow Status */
                vuint32_t DTROS16:1;    /* Channel 16 Data Transfer Overflow Status */
                vuint32_t DTROS15:1;    /* Channel 15 Data Transfer Overflow Status */
                vuint32_t DTROS14:1;    /* Channel 14 Data Transfer Overflow Status */
                vuint32_t DTROS13:1;    /* Channel 13 Data Transfer Overflow Status */
                vuint32_t DTROS12:1;    /* Channel 12 Data Transfer Overflow Status */
                vuint32_t DTROS11:1;    /* Channel 11 Data Transfer Overflow Status */
                vuint32_t DTROS10:1;    /* Channel 10 Data Transfer Overflow Status */
                vuint32_t DTROS9:1;     /* Channel 9 Data Transfer Overflow Status */
                vuint32_t DTROS8:1;     /* Channel 8 Data Transfer Overflow Status */
                vuint32_t DTROS7:1;     /* Channel 7 Data Transfer Overflow Status */
                vuint32_t DTROS6:1;     /* Channel 6 Data Transfer Overflow Status */
                vuint32_t DTROS5:1;     /* Channel 5 Data Transfer Overflow Status */
                vuint32_t DTROS4:1;     /* Channel 4 Data Transfer Overflow Status */
                vuint32_t DTROS3:1;     /* Channel 3 Data Transfer Overflow Status */
                vuint32_t DTROS2:1;     /* Channel 2 Data Transfer Overflow Status */
                vuint32_t DTROS1:1;     /* Channel 1 Data Transfer Overflow Status */
                vuint32_t DTROS0:1;     /* Channel 0 Data Transfer Overflow Status */
            } B;
        } CDTROSR_A;
        
        union {                 /* ETPU_B Data Transfer Overflow Status */
            vuint32_t R;
            struct {
                vuint32_t DTROS31:1;    /* Channel 31 Data Transfer Overflow Status */
                vuint32_t DTROS30:1;    /* Channel 30 Data Transfer Overflow Status */
                vuint32_t DTROS29:1;    /* Channel 29 Data Transfer Overflow Status */
                vuint32_t DTROS28:1;    /* Channel 28 Data Transfer Overflow Status */
                vuint32_t DTROS27:1;    /* Channel 27 Data Transfer Overflow Status */
                vuint32_t DTROS26:1;    /* Channel 26 Data Transfer Overflow Status */
                vuint32_t DTROS25:1;    /* Channel 25 Data Transfer Overflow Status */
                vuint32_t DTROS24:1;    /* Channel 24 Data Transfer Overflow Status */
                vuint32_t DTROS23:1;    /* Channel 23 Data Transfer Overflow Status */
                vuint32_t DTROS22:1;    /* Channel 22 Data Transfer Overflow Status */
                vuint32_t DTROS21:1;    /* Channel 21 Data Transfer Overflow Status */
                vuint32_t DTROS20:1;    /* Channel 20 Data Transfer Overflow Status */
                vuint32_t DTROS19:1;    /* Channel 19 Data Transfer Overflow Status */
                vuint32_t DTROS18:1;    /* Channel 18 Data Transfer Overflow Status */
                vuint32_t DTROS17:1;    /* Channel 17 Data Transfer Overflow Status */
                vuint32_t DTROS16:1;    /* Channel 16 Data Transfer Overflow Status */
                vuint32_t DTROS15:1;    /* Channel 15 Data Transfer Overflow Status */
                vuint32_t DTROS14:1;    /* Channel 14 Data Transfer Overflow Status */
                vuint32_t DTROS13:1;    /* Channel 13 Data Transfer Overflow Status */
                vuint32_t DTROS12:1;    /* Channel 12 Data Transfer Overflow Status */
                vuint32_t DTROS11:1;    /* Channel 11 Data Transfer Overflow Status */
                vuint32_t DTROS10:1;    /* Channel 10 Data Transfer Overflow Status */
                vuint32_t DTROS9:1;     /* Channel 9 Data Transfer Overflow Status */
                vuint32_t DTROS8:1;     /* Channel 8 Data Transfer Overflow Status */
                vuint32_t DTROS7:1;     /* Channel 7 Data Transfer Overflow Status */
                vuint32_t DTROS6:1;     /* Channel 6 Data Transfer Overflow Status */
                vuint32_t DTROS5:1;     /* Channel 5 Data Transfer Overflow Status */
                vuint32_t DTROS4:1;     /* Channel 4 Data Transfer Overflow Status */
                vuint32_t DTROS3:1;     /* Channel 3 Data Transfer Overflow Status */
                vuint32_t DTROS2:1;     /* Channel 2 Data Transfer Overflow Status */
                vuint32_t DTROS1:1;     /* Channel 1 Data Transfer Overflow Status */
                vuint32_t DTROS0:1;     /* Channel 0 Data Transfer Overflow Status */
            } B;
        } CDTROSR_B;
        
        uint32_t eTPU_reserved0238[2];  /* 0x0238-0x023F */
        
        union {                 /* ETPU_A Channel Interruput Enable */
            vuint32_t R;
            struct {
                vuint32_t CIE31:1;      /* Channel 31 Interruput Enable */
                vuint32_t CIE30:1;      /* Channel 30 Interruput Enable */
                vuint32_t CIE29:1;      /* Channel 29 Interruput Enable */
                vuint32_t CIE28:1;      /* Channel 28 Interruput Enable */
                vuint32_t CIE27:1;      /* Channel 27 Interruput Enable */
                vuint32_t CIE26:1;      /* Channel 26 Interruput Enable */
                vuint32_t CIE25:1;      /* Channel 25 Interruput Enable */
                vuint32_t CIE24:1;      /* Channel 24 Interruput Enable */
                vuint32_t CIE23:1;      /* Channel 23 Interruput Enable */
                vuint32_t CIE22:1;      /* Channel 22 Interruput Enable */
                vuint32_t CIE21:1;      /* Channel 21 Interruput Enable */
                vuint32_t CIE20:1;      /* Channel 20 Interruput Enable */
                vuint32_t CIE19:1;      /* Channel 19 Interruput Enable */
                vuint32_t CIE18:1;      /* Channel 18 Interruput Enable */
                vuint32_t CIE17:1;      /* Channel 17 Interruput Enable */
                vuint32_t CIE16:1;      /* Channel 16 Interruput Enable */
                vuint32_t CIE15:1;      /* Channel 15 Interruput Enable */
                vuint32_t CIE14:1;      /* Channel 14 Interruput Enable */
                vuint32_t CIE13:1;      /* Channel 13 Interruput Enable */
                vuint32_t CIE12:1;      /* Channel 12 Interruput Enable */
                vuint32_t CIE11:1;      /* Channel 11 Interruput Enable */
                vuint32_t CIE10:1;      /* Channel 10 Interruput Enable */
                vuint32_t CIE9:1;       /* Channel 9 Interruput Enable */
                vuint32_t CIE8:1;       /* Channel 8 Interruput Enable */
                vuint32_t CIE7:1;       /* Channel 7 Interruput Enable */
                vuint32_t CIE6:1;       /* Channel 6 Interruput Enable */
                vuint32_t CIE5:1;       /* Channel 5 Interruput Enable */
                vuint32_t CIE4:1;       /* Channel 4 Interruput Enable */
                vuint32_t CIE3:1;       /* Channel 3 Interruput Enable */
                vuint32_t CIE2:1;       /* Channel 2 Interruput Enable */
                vuint32_t CIE1:1;       /* Channel 1 Interruput Enable */
                vuint32_t CIE0:1;       /* Channel 0 Interruput Enable */
            } B;
        } CIER_A;
        
        union {                 /* ETPU_B Channel Interruput Enable */
            vuint32_t R;
            struct {
                vuint32_t CIE31:1;      /* Channel 31 Interruput Enable */
                vuint32_t CIE30:1;      /* Channel 30 Interruput Enable */
                vuint32_t CIE29:1;      /* Channel 29 Interruput Enable */
                vuint32_t CIE28:1;      /* Channel 28 Interruput Enable */
                vuint32_t CIE27:1;      /* Channel 27 Interruput Enable */
                vuint32_t CIE26:1;      /* Channel 26 Interruput Enable */
                vuint32_t CIE25:1;      /* Channel 25 Interruput Enable */
                vuint32_t CIE24:1;      /* Channel 24 Interruput Enable */
                vuint32_t CIE23:1;      /* Channel 23 Interruput Enable */
                vuint32_t CIE22:1;      /* Channel 22 Interruput Enable */
                vuint32_t CIE21:1;      /* Channel 21 Interruput Enable */
                vuint32_t CIE20:1;      /* Channel 20 Interruput Enable */
                vuint32_t CIE19:1;      /* Channel 19 Interruput Enable */
                vuint32_t CIE18:1;      /* Channel 18 Interruput Enable */
                vuint32_t CIE17:1;      /* Channel 17 Interruput Enable */
                vuint32_t CIE16:1;      /* Channel 16 Interruput Enable */
                vuint32_t CIE15:1;      /* Channel 15 Interruput Enable */
                vuint32_t CIE14:1;      /* Channel 14 Interruput Enable */
                vuint32_t CIE13:1;      /* Channel 13 Interruput Enable */
                vuint32_t CIE12:1;      /* Channel 12 Interruput Enable */
                vuint32_t CIE11:1;      /* Channel 11 Interruput Enable */
                vuint32_t CIE10:1;      /* Channel 10 Interruput Enable */
                vuint32_t CIE9:1;       /* Channel 9 Interruput Enable */
                vuint32_t CIE8:1;       /* Channel 8 Interruput Enable */
                vuint32_t CIE7:1;       /* Channel 7 Interruput Enable */
                vuint32_t CIE6:1;       /* Channel 6 Interruput Enable */
                vuint32_t CIE5:1;       /* Channel 5 Interruput Enable */
                vuint32_t CIE4:1;       /* Channel 4 Interruput Enable */
                vuint32_t CIE3:1;       /* Channel 3 Interruput Enable */
                vuint32_t CIE2:1;       /* Channel 2 Interruput Enable */
                vuint32_t CIE1:1;       /* Channel 1 Interruput Enable */
                vuint32_t CIE0:1;       /* Channel 0 Interruput Enable */
            } B;
        } CIER_B;
        
        uint32_t eTPU_reserved0248[2];  /* 0x0248-0x024F */
        
        union {                 /* ETPU_A Channel Data Transfer Request Enable */
            vuint32_t R;
            struct {
                vuint32_t DTRE31:1;     /* Channel 31 Data Transfer Request Enable */
                vuint32_t DTRE30:1;     /* Channel 30 Data Transfer Request Enable */
                vuint32_t DTRE29:1;     /* Channel 29 Data Transfer Request Enable */
                vuint32_t DTRE28:1;     /* Channel 28 Data Transfer Request Enable */
                vuint32_t DTRE27:1;     /* Channel 27 Data Transfer Request Enable */
                vuint32_t DTRE26:1;     /* Channel 26 Data Transfer Request Enable */
                vuint32_t DTRE25:1;     /* Channel 25 Data Transfer Request Enable */
                vuint32_t DTRE24:1;     /* Channel 24 Data Transfer Request Enable */
                vuint32_t DTRE23:1;     /* Channel 23 Data Transfer Request Enable */
                vuint32_t DTRE22:1;     /* Channel 22 Data Transfer Request Enable */
                vuint32_t DTRE21:1;     /* Channel 21 Data Transfer Request Enable */
                vuint32_t DTRE20:1;     /* Channel 20 Data Transfer Request Enable */
                vuint32_t DTRE19:1;     /* Channel 19 Data Transfer Request Enable */
                vuint32_t DTRE18:1;     /* Channel 18 Data Transfer Request Enable */
                vuint32_t DTRE17:1;     /* Channel 17 Data Transfer Request Enable */
                vuint32_t DTRE16:1;     /* Channel 16 Data Transfer Request Enable */
                vuint32_t DTRE15:1;     /* Channel 15 Data Transfer Request Enable */
                vuint32_t DTRE14:1;     /* Channel 14 Data Transfer Request Enable */
                vuint32_t DTRE13:1;     /* Channel 13 Data Transfer Request Enable */
                vuint32_t DTRE12:1;     /* Channel 12 Data Transfer Request Enable */
                vuint32_t DTRE11:1;     /* Channel 11 Data Transfer Request Enable */
                vuint32_t DTRE10:1;     /* Channel 10 Data Transfer Request Enable */
                vuint32_t DTRE9:1;      /* Channel 9 Data Transfer Request Enable */
                vuint32_t DTRE8:1;      /* Channel 8 Data Transfer Request Enable */
                vuint32_t DTRE7:1;      /* Channel 7 Data Transfer Request Enable */
                vuint32_t DTRE6:1;      /* Channel 6 Data Transfer Request Enable */
                vuint32_t DTRE5:1;      /* Channel 5 Data Transfer Request Enable */
                vuint32_t DTRE4:1;      /* Channel 4 Data Transfer Request Enable */
                vuint32_t DTRE3:1;      /* Channel 3 Data Transfer Request Enable */
                vuint32_t DTRE2:1;      /* Channel 2 Data Transfer Request Enable */
                vuint32_t DTRE1:1;      /* Channel 1 Data Transfer Request Enable */
                vuint32_t DTRE0:1;      /* Channel 0 Data Transfer Request Enable */
            } B;
        } CDTRER_A;
        
        union {                 /* ETPU_B Channel Data Transfer Request Enable */
            vuint32_t R;
            struct {
                vuint32_t DTRE31:1;     /* Channel 31 Data Transfer Request Enable */
                vuint32_t DTRE30:1;     /* Channel 30 Data Transfer Request Enable */
                vuint32_t DTRE29:1;     /* Channel 29 Data Transfer Request Enable */
                vuint32_t DTRE28:1;     /* Channel 28 Data Transfer Request Enable */
                vuint32_t DTRE27:1;     /* Channel 27 Data Transfer Request Enable */
                vuint32_t DTRE26:1;     /* Channel 26 Data Transfer Request Enable */
                vuint32_t DTRE25:1;     /* Channel 25 Data Transfer Request Enable */
                vuint32_t DTRE24:1;     /* Channel 24 Data Transfer Request Enable */
                vuint32_t DTRE23:1;     /* Channel 23 Data Transfer Request Enable */
                vuint32_t DTRE22:1;     /* Channel 22 Data Transfer Request Enable */
                vuint32_t DTRE21:1;     /* Channel 21 Data Transfer Request Enable */
                vuint32_t DTRE20:1;     /* Channel 20 Data Transfer Request Enable */
                vuint32_t DTRE19:1;     /* Channel 19 Data Transfer Request Enable */
                vuint32_t DTRE18:1;     /* Channel 18 Data Transfer Request Enable */
                vuint32_t DTRE17:1;     /* Channel 17 Data Transfer Request Enable */
                vuint32_t DTRE16:1;     /* Channel 16 Data Transfer Request Enable */
                vuint32_t DTRE15:1;     /* Channel 15 Data Transfer Request Enable */
                vuint32_t DTRE14:1;     /* Channel 14 Data Transfer Request Enable */
                vuint32_t DTRE13:1;     /* Channel 13 Data Transfer Request Enable */
                vuint32_t DTRE12:1;     /* Channel 12 Data Transfer Request Enable */
                vuint32_t DTRE11:1;     /* Channel 11 Data Transfer Request Enable */
                vuint32_t DTRE10:1;     /* Channel 10 Data Transfer Request Enable */
                vuint32_t DTRE9:1;      /* Channel 9 Data Transfer Request Enable */
                vuint32_t DTRE8:1;      /* Channel 8 Data Transfer Request Enable */
                vuint32_t DTRE7:1;      /* Channel 7 Data Transfer Request Enable */
                vuint32_t DTRE6:1;      /* Channel 6 Data Transfer Request Enable */
                vuint32_t DTRE5:1;      /* Channel 5 Data Transfer Request Enable */
                vuint32_t DTRE4:1;      /* Channel 4 Data Transfer Request Enable */
                vuint32_t DTRE3:1;      /* Channel 3 Data Transfer Request Enable */
                vuint32_t DTRE2:1;      /* Channel 2 Data Transfer Request Enable */
                vuint32_t DTRE1:1;      /* Channel 1 Data Transfer Request Enable */
                vuint32_t DTRE0:1;      /* Channel 0 Data Transfer Request Enable */
            } B;
        } CDTRER_B;
        
        uint32_t eTPU_reserved0258[2];  /* 0x0258-0x025F */
        
        union {                 /* Watchdog Status Register A */
            vuint32_t R;
            struct {
                vuint32_t WDS31:1;
                vuint32_t WDS30:1;
                vuint32_t WDS29:1;
                vuint32_t WDS28:1;
                vuint32_t WDS27:1;
                vuint32_t WDS26:1;
                vuint32_t WDS25:1;
                vuint32_t WDS24:1;
                vuint32_t WDS23:1;
                vuint32_t WDS22:1;
                vuint32_t WDS21:1;
                vuint32_t WDS20:1;
                vuint32_t WDS19:1;
                vuint32_t WDS18:1;
                vuint32_t WDS17:1;
                vuint32_t WDS16:1;
                vuint32_t WDS15:1;
                vuint32_t WDS14:1;
                vuint32_t WDS13:1;
                vuint32_t WDS12:1;
                vuint32_t WDS11:1;
                vuint32_t WDS10:1;
                vuint32_t WDS9:1;
                vuint32_t WDS8:1;
                vuint32_t WDS7:1;
                vuint32_t WDS6:1;
                vuint32_t WDS5:1;
                vuint32_t WDS4:1;
                vuint32_t WDS3:1;
                vuint32_t WDS2:1;
                vuint32_t WDS1:1;
                vuint32_t WDS0:1;
            } B;
        } WDSR_A;
        
        union {                 /* Watchdog Status Register B */
            vuint32_t R;
            struct {
                vuint32_t WDS31:1;
                vuint32_t WDS30:1;
                vuint32_t WDS29:1;
                vuint32_t WDS28:1;
                vuint32_t WDS27:1;
                vuint32_t WDS26:1;
                vuint32_t WDS25:1;
                vuint32_t WDS24:1;
                vuint32_t WDS23:1;
                vuint32_t WDS22:1;
                vuint32_t WDS21:1;
                vuint32_t WDS20:1;
                vuint32_t WDS19:1;
                vuint32_t WDS18:1;
                vuint32_t WDS17:1;
                vuint32_t WDS16:1;
                vuint32_t WDS15:1;
                vuint32_t WDS14:1;
                vuint32_t WDS13:1;
                vuint32_t WDS12:1;
                vuint32_t WDS11:1;
                vuint32_t WDS10:1;
                vuint32_t WDS9:1;
                vuint32_t WDS8:1;
                vuint32_t WDS7:1;
                vuint32_t WDS6:1;
                vuint32_t WDS5:1;
                vuint32_t WDS4:1;
                vuint32_t WDS3:1;
                vuint32_t WDS2:1;
                vuint32_t WDS1:1;
                vuint32_t WDS0:1;
            } B;
        } WDSR_B;
        
        uint32_t eTPU_reserved0268[6];  /* 0x0268-0x027F */
        
        union {                 /* ETPU_A Channel Pending Service Status */
            vuint32_t R;
            struct {
                vuint32_t SR31:1;       /* Channel 31 Pending Service Status */
                vuint32_t SR30:1;       /* Channel 30 Pending Service Status */
                vuint32_t SR29:1;       /* Channel 29 Pending Service Status */
                vuint32_t SR28:1;       /* Channel 28 Pending Service Status */
                vuint32_t SR27:1;       /* Channel 27 Pending Service Status */
                vuint32_t SR26:1;       /* Channel 26 Pending Service Status */
                vuint32_t SR25:1;       /* Channel 25 Pending Service Status */
                vuint32_t SR24:1;       /* Channel 24 Pending Service Status */
                vuint32_t SR23:1;       /* Channel 23 Pending Service Status */
                vuint32_t SR22:1;       /* Channel 22 Pending Service Status */
                vuint32_t SR21:1;       /* Channel 21 Pending Service Status */
                vuint32_t SR20:1;       /* Channel 20 Pending Service Status */
                vuint32_t SR19:1;       /* Channel 19 Pending Service Status */
                vuint32_t SR18:1;       /* Channel 18 Pending Service Status */
                vuint32_t SR17:1;       /* Channel 17 Pending Service Status */
                vuint32_t SR16:1;       /* Channel 16 Pending Service Status */
                vuint32_t SR15:1;       /* Channel 15 Pending Service Status */
                vuint32_t SR14:1;       /* Channel 14 Pending Service Status */
                vuint32_t SR13:1;       /* Channel 13 Pending Service Status */
                vuint32_t SR12:1;       /* Channel 12 Pending Service Status */
                vuint32_t SR11:1;       /* Channel 11 Pending Service Status */
                vuint32_t SR10:1;       /* Channel 10 Pending Service Status */
                vuint32_t SR9:1;        /* Channel 9 Pending Service Status */
                vuint32_t SR8:1;        /* Channel 8 Pending Service Status */
                vuint32_t SR7:1;        /* Channel 7 Pending Service Status */
                vuint32_t SR6:1;        /* Channel 6 Pending Service Status */
                vuint32_t SR5:1;        /* Channel 5 Pending Service Status */
                vuint32_t SR4:1;        /* Channel 4 Pending Service Status */
                vuint32_t SR3:1;        /* Channel 3 Pending Service Status */
                vuint32_t SR2:1;        /* Channel 2 Pending Service Status */
                vuint32_t SR1:1;        /* Channel 1 Pending Service Status */
                vuint32_t SR0:1;        /* Channel 0 Pending Service Status */
            } B;
        } CPSSR_A;
        
        union {                 /* ETPU_B Channel Pending Service Status */
            vuint32_t R;
            struct {
                vuint32_t SR31:1;       /* Channel 31 Pending Service Status */
                vuint32_t SR30:1;       /* Channel 30 Pending Service Status */
                vuint32_t SR29:1;       /* Channel 29 Pending Service Status */
                vuint32_t SR28:1;       /* Channel 28 Pending Service Status */
                vuint32_t SR27:1;       /* Channel 27 Pending Service Status */
                vuint32_t SR26:1;       /* Channel 26 Pending Service Status */
                vuint32_t SR25:1;       /* Channel 25 Pending Service Status */
                vuint32_t SR24:1;       /* Channel 24 Pending Service Status */
                vuint32_t SR23:1;       /* Channel 23 Pending Service Status */
                vuint32_t SR22:1;       /* Channel 22 Pending Service Status */
                vuint32_t SR21:1;       /* Channel 21 Pending Service Status */
                vuint32_t SR20:1;       /* Channel 20 Pending Service Status */
                vuint32_t SR19:1;       /* Channel 19 Pending Service Status */
                vuint32_t SR18:1;       /* Channel 18 Pending Service Status */
                vuint32_t SR17:1;       /* Channel 17 Pending Service Status */
                vuint32_t SR16:1;       /* Channel 16 Pending Service Status */
                vuint32_t SR15:1;       /* Channel 15 Pending Service Status */
                vuint32_t SR14:1;       /* Channel 14 Pending Service Status */
                vuint32_t SR13:1;       /* Channel 13 Pending Service Status */
                vuint32_t SR12:1;       /* Channel 12 Pending Service Status */
                vuint32_t SR11:1;       /* Channel 11 Pending Service Status */
                vuint32_t SR10:1;       /* Channel 10 Pending Service Status */
                vuint32_t SR9:1;        /* Channel 9 Pending Service Status */
                vuint32_t SR8:1;        /* Channel 8 Pending Service Status */
                vuint32_t SR7:1;        /* Channel 7 Pending Service Status */
                vuint32_t SR6:1;        /* Channel 6 Pending Service Status */
                vuint32_t SR5:1;        /* Channel 5 Pending Service Status */
                vuint32_t SR4:1;        /* Channel 4 Pending Service Status */
                vuint32_t SR3:1;        /* Channel 3 Pending Service Status */
                vuint32_t SR2:1;        /* Channel 2 Pending Service Status */
                vuint32_t SR1:1;        /* Channel 1 Pending Service Status */
                vuint32_t SR0:1;        /* Channel 0 Pending Service Status */
            } B;
        } CPSSR_B;
        
        uint32_t eTPU_reserved0288[2];  /* 0x0288-0x028F */
        
        union {                 /* ETPU_A Channel Service Status */
            vuint32_t R;
            struct {
                vuint32_t SS31:1;       /* Channel 31 Service Status */
                vuint32_t SS30:1;       /* Channel 30 Service Status */
                vuint32_t SS29:1;       /* Channel 29 Service Status */
                vuint32_t SS28:1;       /* Channel 28 Service Status */
                vuint32_t SS27:1;       /* Channel 27 Service Status */
                vuint32_t SS26:1;       /* Channel 26 Service Status */
                vuint32_t SS25:1;       /* Channel 25 Service Status */
                vuint32_t SS24:1;       /* Channel 24 Service Status */
                vuint32_t SS23:1;       /* Channel 23 Service Status */
                vuint32_t SS22:1;       /* Channel 22 Service Status */
                vuint32_t SS21:1;       /* Channel 21 Service Status */
                vuint32_t SS20:1;       /* Channel 20 Service Status */
                vuint32_t SS19:1;       /* Channel 19 Service Status */
                vuint32_t SS18:1;       /* Channel 18 Service Status */
                vuint32_t SS17:1;       /* Channel 17 Service Status */
                vuint32_t SS16:1;       /* Channel 16 Service Status */
                vuint32_t SS15:1;       /* Channel 15 Service Status */
                vuint32_t SS14:1;       /* Channel 14 Service Status */
                vuint32_t SS13:1;       /* Channel 13 Service Status */
                vuint32_t SS12:1;       /* Channel 12 Service Status */
                vuint32_t SS11:1;       /* Channel 11 Service Status */
                vuint32_t SS10:1;       /* Channel 10 Service Status */
                vuint32_t SS9:1;        /* Channel 9 Service Status */
                vuint32_t SS8:1;        /* Channel 8 Service Status */
                vuint32_t SS7:1;        /* Channel 7 Service Status */
                vuint32_t SS6:1;        /* Channel 6 Service Status */
                vuint32_t SS5:1;        /* Channel 5 Service Status */
                vuint32_t SS4:1;        /* Channel 4 Service Status */
                vuint32_t SS3:1;        /* Channel 3 Service Status */
                vuint32_t SS2:1;        /* Channel 2 Service Status */
                vuint32_t SS1:1;        /* Channel 1 Service Status */
                vuint32_t SS0:1;        /* Channel 0 Service Status */
            } B;
        } CSSR_A;
        
        union {                 /* ETPU_B Channel Service Status */
            vuint32_t R;
            struct {
                vuint32_t SS31:1;       /* Channel 31 Service Status */
                vuint32_t SS30:1;       /* Channel 30 Service Status */
                vuint32_t SS29:1;       /* Channel 29 Service Status */
                vuint32_t SS28:1;       /* Channel 28 Service Status */
                vuint32_t SS27:1;       /* Channel 27 Service Status */
                vuint32_t SS26:1;       /* Channel 26 Service Status */
                vuint32_t SS25:1;       /* Channel 25 Service Status */
                vuint32_t SS24:1;       /* Channel 24 Service Status */
                vuint32_t SS23:1;       /* Channel 23 Service Status */
                vuint32_t SS22:1;       /* Channel 22 Service Status */
                vuint32_t SS21:1;       /* Channel 21 Service Status */
                vuint32_t SS20:1;       /* Channel 20 Service Status */
                vuint32_t SS19:1;       /* Channel 19 Service Status */
                vuint32_t SS18:1;       /* Channel 18 Service Status */
                vuint32_t SS17:1;       /* Channel 17 Service Status */
                vuint32_t SS16:1;       /* Channel 16 Service Status */
                vuint32_t SS15:1;       /* Channel 15 Service Status */
                vuint32_t SS14:1;       /* Channel 14 Service Status */
                vuint32_t SS13:1;       /* Channel 13 Service Status */
                vuint32_t SS12:1;       /* Channel 12 Service Status */
                vuint32_t SS11:1;       /* Channel 11 Service Status */
                vuint32_t SS10:1;       /* Channel 10 Service Status */
                vuint32_t SS9:1;        /* Channel 9 Service Status */
                vuint32_t SS8:1;        /* Channel 8 Service Status */
                vuint32_t SS7:1;        /* Channel 7 Service Status */
                vuint32_t SS6:1;        /* Channel 6 Service Status */
                vuint32_t SS5:1;        /* Channel 5 Service Status */
                vuint32_t SS4:1;        /* Channel 4 Service Status */
                vuint32_t SS3:1;        /* Channel 3 Service Status */
                vuint32_t SS2:1;        /* Channel 2 Service Status */
                vuint32_t SS1:1;        /* Channel 1 Service Status */
                vuint32_t SS0:1;        /* Channel 0 Service Status */
            } B;
        } CSSR_B;
        
        uint32_t eTPU_reserved0298[2];  /* 0x0298-0x029F */
        
        uint32_t eTPU_reserved02A0[88];  /* 0x02A0-0x03FF */

/*****************************Channels********************************/

        struct {
            union {    /* Channel Configuration Register */
                vuint32_t R;
                struct {
                    vuint32_t CIE:1;    /* Channel Interruput Enable */
                    vuint32_t DTRE:1;   /* Data Transfer Request Enable */
                    vuint32_t CPR:2;    /* Channel Priority */
                    vuint32_t:2;
                    vuint32_t ETPD:1;
                    vuint32_t ETCS:1;   /* Entry Table Condition Select */
                    vuint32_t:3;
                    vuint32_t CFS:5;    /* Channel Function Select */
                    vuint32_t ODIS:1;   /* Output disable */
                    vuint32_t OPOL:1;   /* output polarity */
                    vuint32_t:3;
                    vuint32_t CPBA:11;  /* Channel Parameter Base Address */
                } B;
            } CR;
            
            union {    /* Channel Status Control Register */
                vuint32_t R;
                struct {
                    vuint32_t CIS:1;    /* Channel Interruput Status */
                    vuint32_t CIOS:1;   /* Channel Interruput Overflow Status */
                    vuint32_t:6;
                    vuint32_t DTRS:1;   /* Data Transfer Status */
                    vuint32_t DTROS:1;  /* Data Transfer Overflow Status */
                    vuint32_t:6;
                    vuint32_t IPS:1;    /* Input Pin State */
                    vuint32_t OPS:1;    /* Output Pin State */
                    vuint32_t OBE:1;    /* Output Buffer Enable */
                    vuint32_t:11;
                    vuint32_t FM1:1;    /* Function mode */
                    vuint32_t FM0:1;    /* Function mode */
                } B;
            } SCR;
            
            union {    /* Channel Host Service Request Register */
                vuint32_t R;
                struct {
                    vuint32_t:29;       /* Host Service Request */
                    vuint32_t HSR:3;
                } B;
            } HSRR;
            
            uint32_t eTPU_ch_reserved00C;  /* channel offset 0x00C-0x00F */
            
        } CHAN[127];
        
        uint32_t eTPU_reserved1000[7168];  /* 0x1000-0x7FFF */
        
    };
    
/****************************************************************************/
/*                              MODULE :ETPU_C                              */
/****************************************************************************/

/***************************Configuration Registers**************************/

    struct ETPU_C_tag {
        union {                 /* MODULE CONFIGURATION REGISTER */
            vuint32_t R;
            struct {
                vuint32_t GEC:1;        /* Global Exception Clear */
                vuint32_t SDMERR:1;     /* SDM Read Error */
                vuint32_t WDTOC:1;      /* Watchdog Timeout-eTPU_C (WDTO1 in reference manual) */
                vuint32_t:1;
                vuint32_t MGE1:1;       /* Microcode Global Exception-ETPU_C */
                vuint32_t:1;
                vuint32_t ILF1:1;       /* Illegal Instruction Flag-ETPU_C */
                vuint32_t:1;
                vuint32_t SCMERR:1;     /* SCM Read Error */
                vuint32_t:2;
                vuint32_t SCMSIZE:5;    /* Shared Code Memory size */
                vuint32_t:4;
                vuint32_t SCMMISC:1;    /* SCM MISC Complete/Clear */
                vuint32_t SCMMISF:1;    /* SCM MISC Flag */
                vuint32_t SCMMISEN:1;   /* SCM MISC Enable */
                vuint32_t:2;
                vuint32_t VIS:1;        /* SCM Visability */
                vuint32_t:5;
                vuint32_t GTBE:1;       /* Global Time Base Enable */
            } B;
        } MCR;
        
        union {                 /* COHERENT DUAL-PARAMETER CONTROL */
            vuint32_t R;
            struct {
                vuint32_t STS:1;        /* Start Status bit */
                vuint32_t CTBASE:5;     /* Channel Transfer Base */
                vuint32_t PBASE:10;     /* Parameter Buffer Base Address (PBBASE in reference manual) */
                vuint32_t PWIDTH:1;     /* Parameter Width */
                vuint32_t PARAM0:7;     /* Channel Parameter 0 */
                vuint32_t WR:1;         /* Read/Write selection */
                vuint32_t PARAM1:7;     /* Channel Parameter 1 */
            } B;
        } CDCR;
        
        uint32_t eTPU_C_reserved0008;  /* 0x0008-0x000B */
        
        union {                 /* MISC Compare Register */
            uint32_t R;
            struct {
                vuint32_t ETPUMISCCMP:32;   
            } B;
        } MISCCMPR;
        
        union {                 /* SCM off-range Date Register */
            uint32_t R;
            struct {
                vuint32_t ETPUSCMOFFDATA:32;   
            } B;
        } SCMOFFDATAR;
        
        union {                 /* ETPU_C Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t FEND:1;       /* Force END */
                vuint32_t MDIS:1;       /* Low power Stop */
                vuint32_t:1;
                vuint32_t STF:1;        /* Stop Flag */
                vuint32_t:4;
                vuint32_t HLTF:1;       /* Halt Mode Flag */
                vuint32_t:3;
                vuint32_t FCSS:1;       /* Filter Clock Source Select */
                vuint32_t FPSCK:3;      /* Filter Prescaler Clock Control */
                vuint32_t CDFC:2;
                vuint32_t:1;
                vuint32_t ERBA:5;       /* Engine Relative Base Address */
                vuint32_t SPPDIS:1;     /* Schedule Priority Passing Disable */
                vuint32_t:2;
                vuint32_t ETB:5;        /* Entry Table Base */
            } B;
        } ECR_C;
        uint32_t eTPU_C_reserved0018;  /* 0x0018-0x001B */

        uint32_t eTPU_C_reserved001C;  /* 0x001C-0x001F */

        union {                 /* ETPU_C Timebase Configuration Register */
            uint32_t R;
            struct {
                vuint32_t TCR2CTL:3;     /* TCR2 Clock/Gate Control */
                vuint32_t TCRCF:2;       /* TCRCLK Signal Filter Control */
                vuint32_t AM:2;          /* Angle Mode */
                vuint32_t:3;
                vuint32_t TCR2P:6;       /* TCR2 Prescaler Control */
                vuint32_t TCR1CTL:2;     /* TCR1 Clock/Gate Control */
                vuint32_t TCR1CS:1;      /* TCR1 Clock Source */ 
                vuint32_t:5;
                vuint32_t TCR1P:8;       /* TCR1 Prescaler Control */
            } B;
        } TBCR_C;

        union {                 /* ETPU_C TCR1 Visibility Register */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t TCR1:24;
            } B;
        } TB1R_C;
        
        union {                 /* ETPU_C TCR2 Visibility Register */
            vuint32_t R;
            struct {
                vuint32_t:8;
                vuint32_t TCR2:24;
            } B;
        } TB2R_C;
        
        union {                 /* ETPU_C STAC Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t REN1:1;       /* Resource Enable TCR1 */
                vuint32_t RSC1:1;       /* Resource Control TCR1 */
                vuint32_t:2;
                vuint32_t SERVER_ID1:4;   /* TCR1 Server ID */
                vuint32_t:4;
                vuint32_t SRV1:4;       /* Resource Server Slot */
                vuint32_t REN2:1;       /* Resource Enable TCR2 */
                vuint32_t RSC2:1;       /* Resource Control TCR2 */
                vuint32_t:2;
                vuint32_t SERVER_ID2:4;   /* TCR2 Server ID */
                vuint32_t:4;
                vuint32_t SRV2:4;       /* Resource Server Slot */
            } B;
        } REDCR_C;

        uint32_t eTPU_C_reserved0030[4];  /* 0x0030-0x003F */
        uint32_t etpu_C_reserved0040[4];  /* 0x0040-0x004F */

        uint32_t eTPU_C_reserved0050[4];  /* 0x0050-0x005F */
        
        union {                 /* Watchdog Timer Register A */
            vuint32_t R;
            struct {
                vuint32_t WDM:2;          /* Watchdog Mode */
                vuint32_t:14;
                vuint32_t WDCNT:16;       /* Watchdog Count */
            } B;
        } WDTR_C;
        
        uint32_t eTPU_C_reserved0064;  /* 0x0064-0x0067 */
        
        union {                 /* Idle Counter Register A*/
            vuint32_t R;
            struct {
                vuint32_t IDLE_CNT:31;
                vuint32_t ICLR:1;       /* Idle Clear */
            } B;
            
        } IDLE_C;
        
        uint32_t eTPU_C_reserved006C;     /* 0x006C-0x006F */
        uint32_t eTPU_C_reserved0070[4];  /* 0x0070-0x007F */
        uint32_t eTPU_C_reserved0080[32]; /* 0x0080-0x00FF */
		
        union {                 /* Error Correction Status and Control Register */
            vuint32_t R;
            struct {
                vuint32_t DCERR:1;
                vuint32_t DNCERR:1;
                vuint32_t:12;
                vuint32_t CCERR:1;
                vuint32_t CNCERR:1;
                vuint32_t HDEIE:1;
                vuint32_t MDEIE:1;
                vuint32_t:13;
                vuint32_t CEIE:1;
            } B;
        } ECSCR;

        union {                 /* Data Error Injection Address Register */
            vuint32_t R;
            struct {
                vuint32_t:18;
                vuint32_t INJ_ADDR:12;
                vuint32_t:2;
            } B;
        } DEIAR;

        union {                 /* Data Error Injection Data Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t DFLIP:32;
            } B;
        } DEIDPR;

        union {                 /* Data Error Injection Parity Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t:3;
                vuint32_t PFLIP3:5;
                vuint32_t:3;
                vuint32_t PFLIP2:5;
                vuint32_t:3;
                vuint32_t PFLIP1:5;
                vuint32_t:3;
                vuint32_t PFLIP0:5;
            } B;
        } DEIPPR;

        union {                 /* Data Error Report Address Register */
            vuint32_t R;
            struct {
                vuint32_t:18;
                vuint32_t ERR_ADDR:12;
                vuint32_t:2;
            } B;
        } DERAR;

        union {                 /* Data Error Report Data Register */
            vuint32_t R;
            struct {
                vuint32_t DATA:32;
            } B;
        } DERDR;

        union {                 /* Data Error Report Syndrome Register */
            vuint32_t R;
            struct {
                vuint32_t:3;
                vuint32_t SYND3:5;
                vuint32_t:3;
                vuint32_t SYND2:5;
                vuint32_t:3;
                vuint32_t SYND1:5;
                vuint32_t:3;
                vuint32_t SYND0:5;
            } B;
        } DERSR;

        uint32_t eTPU_C_reserved011C[2];  /* 0x011C-0x0123 */

        union {                 /* Code Error Injection Address Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t INJ_ADDR:14;
                vuint32_t:2;
            } B;
        } CEIAR;

        union {                 /* Code Error Injection Data Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t DFLIP:32;
            } B;
        } CEIDPR;

        union {                 /* Code Error Injection Parity Pattern Register */
            vuint32_t R;
            struct {
                vuint32_t:25;
                vuint32_t PFLIP:7;
            } B;
        } CEIPPR;

        union {                 /* Code Error Report Address Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t ERR_ADDR:14;
                vuint32_t:2;
            } B;
        } CERAR;

        union {                 /* Code Error Report Data Register */
            vuint32_t R;
            struct {
                vuint32_t DATA:32;
            } B;
        } CERDR;

        union {                 /* Code Error Report Syndrome Register */
            vuint32_t R;
            struct {
                vuint32_t:25;
                vuint32_t SYND:7;
            } B;
        } CERSR;

        uint32_t eTPU_C_reserved013C[49];  /* 0x013C-0x01FF */

/*****************************Status and Control Registers**************************/

        union {                 /* ETPU_C Channel Interrut Status */
            vuint32_t R;
            struct {
                vuint32_t CIS31:1;      /* Channel 31 Interrut Status */
                vuint32_t CIS30:1;      /* Channel 30 Interrut Status */
                vuint32_t CIS29:1;      /* Channel 29 Interrut Status */
                vuint32_t CIS28:1;      /* Channel 28 Interrut Status */
                vuint32_t CIS27:1;      /* Channel 27 Interrut Status */
                vuint32_t CIS26:1;      /* Channel 26 Interrut Status */
                vuint32_t CIS25:1;      /* Channel 25 Interrut Status */
                vuint32_t CIS24:1;      /* Channel 24 Interrut Status */
                vuint32_t CIS23:1;      /* Channel 23 Interrut Status */
                vuint32_t CIS22:1;      /* Channel 22 Interrut Status */
                vuint32_t CIS21:1;      /* Channel 21 Interrut Status */
                vuint32_t CIS20:1;      /* Channel 20 Interrut Status */
                vuint32_t CIS19:1;      /* Channel 19 Interrut Status */
                vuint32_t CIS18:1;      /* Channel 18 Interrut Status */
                vuint32_t CIS17:1;      /* Channel 17 Interrut Status */
                vuint32_t CIS16:1;      /* Channel 16 Interrut Status */
                vuint32_t CIS15:1;      /* Channel 15 Interrut Status */
                vuint32_t CIS14:1;      /* Channel 14 Interrut Status */
                vuint32_t CIS13:1;      /* Channel 13 Interrut Status */
                vuint32_t CIS12:1;      /* Channel 12 Interrut Status */
                vuint32_t CIS11:1;      /* Channel 11 Interrut Status */
                vuint32_t CIS10:1;      /* Channel 10 Interrut Status */
                vuint32_t CIS9:1;       /* Channel 9 Interrut Status */
                vuint32_t CIS8:1;       /* Channel 8 Interrut Status */
                vuint32_t CIS7:1;       /* Channel 7 Interrut Status */
                vuint32_t CIS6:1;       /* Channel 6 Interrut Status */
                vuint32_t CIS5:1;       /* Channel 5 Interrut Status */
                vuint32_t CIS4:1;       /* Channel 4 Interrut Status */
                vuint32_t CIS3:1;       /* Channel 3 Interrut Status */
                vuint32_t CIS2:1;       /* Channel 2 Interrut Status */
                vuint32_t CIS1:1;       /* Channel 1 Interrut Status */
                vuint32_t CIS0:1;       /* Channel 0 Interrut Status */
            } B;
        } CISR_C;
        uint32_t eTPU_C_reserved0204;     /* 0x0204-0x0207 */

        uint32_t eTPU_C_reserved0208[2];  /* 0x0208-0x020F */
        
        union {                 /* ETPU_C Data Transfer Request Status */
            vuint32_t R;
            struct {
                vuint32_t DTRS31:1;     /* Channel 31 Data Transfer Request Status */
                vuint32_t DTRS30:1;     /* Channel 30 Data Transfer Request Status */
                vuint32_t DTRS29:1;     /* Channel 29 Data Transfer Request Status */
                vuint32_t DTRS28:1;     /* Channel 28 Data Transfer Request Status */
                vuint32_t DTRS27:1;     /* Channel 27 Data Transfer Request Status */
                vuint32_t DTRS26:1;     /* Channel 26 Data Transfer Request Status */
                vuint32_t DTRS25:1;     /* Channel 25 Data Transfer Request Status */
                vuint32_t DTRS24:1;     /* Channel 24 Data Transfer Request Status */
                vuint32_t DTRS23:1;     /* Channel 23 Data Transfer Request Status */
                vuint32_t DTRS22:1;     /* Channel 22 Data Transfer Request Status */
                vuint32_t DTRS21:1;     /* Channel 21 Data Transfer Request Status */
                vuint32_t DTRS20:1;     /* Channel 20 Data Transfer Request Status */
                vuint32_t DTRS19:1;     /* Channel 19 Data Transfer Request Status */
                vuint32_t DTRS18:1;     /* Channel 18 Data Transfer Request Status */
                vuint32_t DTRS17:1;     /* Channel 17 Data Transfer Request Status */
                vuint32_t DTRS16:1;     /* Channel 16 Data Transfer Request Status */
                vuint32_t DTRS15:1;     /* Channel 15 Data Transfer Request Status */
                vuint32_t DTRS14:1;     /* Channel 14 Data Transfer Request Status */
                vuint32_t DTRS13:1;     /* Channel 13 Data Transfer Request Status */
                vuint32_t DTRS12:1;     /* Channel 12 Data Transfer Request Status */
                vuint32_t DTRS11:1;     /* Channel 11 Data Transfer Request Status */
                vuint32_t DTRS10:1;     /* Channel 10 Data Transfer Request Status */
                vuint32_t DTRS9:1;      /* Channel 9 Data Transfer Request Status */
                vuint32_t DTRS8:1;      /* Channel 8 Data Transfer Request Status */
                vuint32_t DTRS7:1;      /* Channel 7 Data Transfer Request Status */
                vuint32_t DTRS6:1;      /* Channel 6 Data Transfer Request Status */
                vuint32_t DTRS5:1;      /* Channel 5 Data Transfer Request Status */
                vuint32_t DTRS4:1;      /* Channel 4 Data Transfer Request Status */
                vuint32_t DTRS3:1;      /* Channel 3 Data Transfer Request Status */
                vuint32_t DTRS2:1;      /* Channel 2 Data Transfer Request Status */
                vuint32_t DTRS1:1;      /* Channel 1 Data Transfer Request Status */
                vuint32_t DTRS0:1;      /* Channel 0 Data Transfer Request Status */
            } B;
        } CDTRSR_C;
        uint32_t eTPU_C_reserved0214;     /* 0x0214-0x0217 */

        uint32_t eTPU_C_reserved0218[2];  /* 0x0218-0x021F */
        
        union {                 /* ETPU_C Interruput Overflow Status */
            vuint32_t R;
            struct {
                vuint32_t CIOS31:1;     /* Channel 31 Interruput Overflow Status */
                vuint32_t CIOS30:1;     /* Channel 30 Interruput Overflow Status */
                vuint32_t CIOS29:1;     /* Channel 29 Interruput Overflow Status */
                vuint32_t CIOS28:1;     /* Channel 28 Interruput Overflow Status */
                vuint32_t CIOS27:1;     /* Channel 27 Interruput Overflow Status */
                vuint32_t CIOS26:1;     /* Channel 26 Interruput Overflow Status */
                vuint32_t CIOS25:1;     /* Channel 25 Interruput Overflow Status */
                vuint32_t CIOS24:1;     /* Channel 24 Interruput Overflow Status */
                vuint32_t CIOS23:1;     /* Channel 23 Interruput Overflow Status */
                vuint32_t CIOS22:1;     /* Channel 22 Interruput Overflow Status */
                vuint32_t CIOS21:1;     /* Channel 21 Interruput Overflow Status */
                vuint32_t CIOS20:1;     /* Channel 20 Interruput Overflow Status */
                vuint32_t CIOS19:1;     /* Channel 19 Interruput Overflow Status */
                vuint32_t CIOS18:1;     /* Channel 18 Interruput Overflow Status */
                vuint32_t CIOS17:1;     /* Channel 17 Interruput Overflow Status */
                vuint32_t CIOS16:1;     /* Channel 16 Interruput Overflow Status */
                vuint32_t CIOS15:1;     /* Channel 15 Interruput Overflow Status */
                vuint32_t CIOS14:1;     /* Channel 14 Interruput Overflow Status */
                vuint32_t CIOS13:1;     /* Channel 13 Interruput Overflow Status */
                vuint32_t CIOS12:1;     /* Channel 12 Interruput Overflow Status */
                vuint32_t CIOS11:1;     /* Channel 11 Interruput Overflow Status */
                vuint32_t CIOS10:1;     /* Channel 10 Interruput Overflow Status */
                vuint32_t CIOS9:1;      /* Channel 9 Interruput Overflow Status */
                vuint32_t CIOS8:1;      /* Channel 8 Interruput Overflow Status */
                vuint32_t CIOS7:1;      /* Channel 7 Interruput Overflow Status */
                vuint32_t CIOS6:1;      /* Channel 6 Interruput Overflow Status */
                vuint32_t CIOS5:1;      /* Channel 5 Interruput Overflow Status */
                vuint32_t CIOS4:1;      /* Channel 4 Interruput Overflow Status */
                vuint32_t CIOS3:1;      /* Channel 3 Interruput Overflow Status */
                vuint32_t CIOS2:1;      /* Channel 2 Interruput Overflow Status */
                vuint32_t CIOS1:1;      /* Channel 1 Interruput Overflow Status */
                vuint32_t CIOS0:1;      /* Channel 0 Interruput Overflow Status */
            } B;
        } CIOSR_C;
        uint32_t eTPU_C_reserved0224;     /* 0x0224-0x0227 */

        uint32_t eTPU_C_reserved0228[2];  /* 0x0228-0x022F */
        
        union {                 /* ETPU_C Data Transfer Overflow Status */
            vuint32_t R;
            struct {
                vuint32_t DTROS31:1;    /* Channel 31 Data Transfer Overflow Status */
                vuint32_t DTROS30:1;    /* Channel 30 Data Transfer Overflow Status */
                vuint32_t DTROS29:1;    /* Channel 29 Data Transfer Overflow Status */
                vuint32_t DTROS28:1;    /* Channel 28 Data Transfer Overflow Status */
                vuint32_t DTROS27:1;    /* Channel 27 Data Transfer Overflow Status */
                vuint32_t DTROS26:1;    /* Channel 26 Data Transfer Overflow Status */
                vuint32_t DTROS25:1;    /* Channel 25 Data Transfer Overflow Status */
                vuint32_t DTROS24:1;    /* Channel 24 Data Transfer Overflow Status */
                vuint32_t DTROS23:1;    /* Channel 23 Data Transfer Overflow Status */
                vuint32_t DTROS22:1;    /* Channel 22 Data Transfer Overflow Status */
                vuint32_t DTROS21:1;    /* Channel 21 Data Transfer Overflow Status */
                vuint32_t DTROS20:1;    /* Channel 20 Data Transfer Overflow Status */
                vuint32_t DTROS19:1;    /* Channel 19 Data Transfer Overflow Status */
                vuint32_t DTROS18:1;    /* Channel 18 Data Transfer Overflow Status */
                vuint32_t DTROS17:1;    /* Channel 17 Data Transfer Overflow Status */
                vuint32_t DTROS16:1;    /* Channel 16 Data Transfer Overflow Status */
                vuint32_t DTROS15:1;    /* Channel 15 Data Transfer Overflow Status */
                vuint32_t DTROS14:1;    /* Channel 14 Data Transfer Overflow Status */
                vuint32_t DTROS13:1;    /* Channel 13 Data Transfer Overflow Status */
                vuint32_t DTROS12:1;    /* Channel 12 Data Transfer Overflow Status */
                vuint32_t DTROS11:1;    /* Channel 11 Data Transfer Overflow Status */
                vuint32_t DTROS10:1;    /* Channel 10 Data Transfer Overflow Status */
                vuint32_t DTROS9:1;     /* Channel 9 Data Transfer Overflow Status */
                vuint32_t DTROS8:1;     /* Channel 8 Data Transfer Overflow Status */
                vuint32_t DTROS7:1;     /* Channel 7 Data Transfer Overflow Status */
                vuint32_t DTROS6:1;     /* Channel 6 Data Transfer Overflow Status */
                vuint32_t DTROS5:1;     /* Channel 5 Data Transfer Overflow Status */
                vuint32_t DTROS4:1;     /* Channel 4 Data Transfer Overflow Status */
                vuint32_t DTROS3:1;     /* Channel 3 Data Transfer Overflow Status */
                vuint32_t DTROS2:1;     /* Channel 2 Data Transfer Overflow Status */
                vuint32_t DTROS1:1;     /* Channel 1 Data Transfer Overflow Status */
                vuint32_t DTROS0:1;     /* Channel 0 Data Transfer Overflow Status */
            } B;
        } CDTROSR_C;
        uint32_t eTPU_C_reserved0234;     /* 0x0234-0x0237 */

        uint32_t eTPU_C_reserved0238[2];  /* 0x0238-0x023F */
        
        union {                 /* ETPU_C Channel Interruput Enable */
            vuint32_t R;
            struct {
                vuint32_t CIE31:1;      /* Channel 31 Interruput Enable */
                vuint32_t CIE30:1;      /* Channel 30 Interruput Enable */
                vuint32_t CIE29:1;      /* Channel 29 Interruput Enable */
                vuint32_t CIE28:1;      /* Channel 28 Interruput Enable */
                vuint32_t CIE27:1;      /* Channel 27 Interruput Enable */
                vuint32_t CIE26:1;      /* Channel 26 Interruput Enable */
                vuint32_t CIE25:1;      /* Channel 25 Interruput Enable */
                vuint32_t CIE24:1;      /* Channel 24 Interruput Enable */
                vuint32_t CIE23:1;      /* Channel 23 Interruput Enable */
                vuint32_t CIE22:1;      /* Channel 22 Interruput Enable */
                vuint32_t CIE21:1;      /* Channel 21 Interruput Enable */
                vuint32_t CIE20:1;      /* Channel 20 Interruput Enable */
                vuint32_t CIE19:1;      /* Channel 19 Interruput Enable */
                vuint32_t CIE18:1;      /* Channel 18 Interruput Enable */
                vuint32_t CIE17:1;      /* Channel 17 Interruput Enable */
                vuint32_t CIE16:1;      /* Channel 16 Interruput Enable */
                vuint32_t CIE15:1;      /* Channel 15 Interruput Enable */
                vuint32_t CIE14:1;      /* Channel 14 Interruput Enable */
                vuint32_t CIE13:1;      /* Channel 13 Interruput Enable */
                vuint32_t CIE12:1;      /* Channel 12 Interruput Enable */
                vuint32_t CIE11:1;      /* Channel 11 Interruput Enable */
                vuint32_t CIE10:1;      /* Channel 10 Interruput Enable */
                vuint32_t CIE9:1;       /* Channel 9 Interruput Enable */
                vuint32_t CIE8:1;       /* Channel 8 Interruput Enable */
                vuint32_t CIE7:1;       /* Channel 7 Interruput Enable */
                vuint32_t CIE6:1;       /* Channel 6 Interruput Enable */
                vuint32_t CIE5:1;       /* Channel 5 Interruput Enable */
                vuint32_t CIE4:1;       /* Channel 4 Interruput Enable */
                vuint32_t CIE3:1;       /* Channel 3 Interruput Enable */
                vuint32_t CIE2:1;       /* Channel 2 Interruput Enable */
                vuint32_t CIE1:1;       /* Channel 1 Interruput Enable */
                vuint32_t CIE0:1;       /* Channel 0 Interruput Enable */
            } B;
        } CIER_C;
        uint32_t eTPU_C_reserved0244;     /* 0x0244-0x0247 */

        uint32_t eTPU_C_reserved0248[2];  /* 0x0248-0x024F */
        
        union {                 /* ETPU_C Channel Data Transfer Request Enable */
            vuint32_t R;
            struct {
                vuint32_t DTRE31:1;     /* Channel 31 Data Transfer Request Enable */
                vuint32_t DTRE30:1;     /* Channel 30 Data Transfer Request Enable */
                vuint32_t DTRE29:1;     /* Channel 29 Data Transfer Request Enable */
                vuint32_t DTRE28:1;     /* Channel 28 Data Transfer Request Enable */
                vuint32_t DTRE27:1;     /* Channel 27 Data Transfer Request Enable */
                vuint32_t DTRE26:1;     /* Channel 26 Data Transfer Request Enable */
                vuint32_t DTRE25:1;     /* Channel 25 Data Transfer Request Enable */
                vuint32_t DTRE24:1;     /* Channel 24 Data Transfer Request Enable */
                vuint32_t DTRE23:1;     /* Channel 23 Data Transfer Request Enable */
                vuint32_t DTRE22:1;     /* Channel 22 Data Transfer Request Enable */
                vuint32_t DTRE21:1;     /* Channel 21 Data Transfer Request Enable */
                vuint32_t DTRE20:1;     /* Channel 20 Data Transfer Request Enable */
                vuint32_t DTRE19:1;     /* Channel 19 Data Transfer Request Enable */
                vuint32_t DTRE18:1;     /* Channel 18 Data Transfer Request Enable */
                vuint32_t DTRE17:1;     /* Channel 17 Data Transfer Request Enable */
                vuint32_t DTRE16:1;     /* Channel 16 Data Transfer Request Enable */
                vuint32_t DTRE15:1;     /* Channel 15 Data Transfer Request Enable */
                vuint32_t DTRE14:1;     /* Channel 14 Data Transfer Request Enable */
                vuint32_t DTRE13:1;     /* Channel 13 Data Transfer Request Enable */
                vuint32_t DTRE12:1;     /* Channel 12 Data Transfer Request Enable */
                vuint32_t DTRE11:1;     /* Channel 11 Data Transfer Request Enable */
                vuint32_t DTRE10:1;     /* Channel 10 Data Transfer Request Enable */
                vuint32_t DTRE9:1;      /* Channel 9 Data Transfer Request Enable */
                vuint32_t DTRE8:1;      /* Channel 8 Data Transfer Request Enable */
                vuint32_t DTRE7:1;      /* Channel 7 Data Transfer Request Enable */
                vuint32_t DTRE6:1;      /* Channel 6 Data Transfer Request Enable */
                vuint32_t DTRE5:1;      /* Channel 5 Data Transfer Request Enable */
                vuint32_t DTRE4:1;      /* Channel 4 Data Transfer Request Enable */
                vuint32_t DTRE3:1;      /* Channel 3 Data Transfer Request Enable */
                vuint32_t DTRE2:1;      /* Channel 2 Data Transfer Request Enable */
                vuint32_t DTRE1:1;      /* Channel 1 Data Transfer Request Enable */
                vuint32_t DTRE0:1;      /* Channel 0 Data Transfer Request Enable */
            } B;
        } CDTRER_C;
        uint32_t etpu_C_reserved0254;     /* 0x0254-0x0257 */

        uint32_t eTPU_C_reserved0258[2];  /* 0x0258-0x025F */
        
        union {                 /* Watchdog Status Register A */
            vuint32_t R;
            struct {
                vuint32_t WDS31:1;
                vuint32_t WDS30:1;
                vuint32_t WDS29:1;
                vuint32_t WDS28:1;
                vuint32_t WDS27:1;
                vuint32_t WDS26:1;
                vuint32_t WDS25:1;
                vuint32_t WDS24:1;
                vuint32_t WDS23:1;
                vuint32_t WDS22:1;
                vuint32_t WDS21:1;
                vuint32_t WDS20:1;
                vuint32_t WDS19:1;
                vuint32_t WDS18:1;
                vuint32_t WDS17:1;
                vuint32_t WDS16:1;
                vuint32_t WDS15:1;
                vuint32_t WDS14:1;
                vuint32_t WDS13:1;
                vuint32_t WDS12:1;
                vuint32_t WDS11:1;
                vuint32_t WDS10:1;
                vuint32_t WDS9:1;
                vuint32_t WDS8:1;
                vuint32_t WDS7:1;
                vuint32_t WDS6:1;
                vuint32_t WDS5:1;
                vuint32_t WDS4:1;
                vuint32_t WDS3:1;
                vuint32_t WDS2:1;
                vuint32_t WDS1:1;
                vuint32_t WDS0:1;
            } B;
        } WDSR_C;
        
        uint32_t eTPU_C_reserved0264;     /* 0x0264-0x0267 */
        
        uint32_t eTPU_C_reserved0268[6];  /* 0x0268-0x027F */
        
        union {                 /* ETPU_C Channel Pending Service Status */
            vuint32_t R;
            struct {
                vuint32_t SR31:1;       /* Channel 31 Pending Service Status */
                vuint32_t SR30:1;       /* Channel 30 Pending Service Status */
                vuint32_t SR29:1;       /* Channel 29 Pending Service Status */
                vuint32_t SR28:1;       /* Channel 28 Pending Service Status */
                vuint32_t SR27:1;       /* Channel 27 Pending Service Status */
                vuint32_t SR26:1;       /* Channel 26 Pending Service Status */
                vuint32_t SR25:1;       /* Channel 25 Pending Service Status */
                vuint32_t SR24:1;       /* Channel 24 Pending Service Status */
                vuint32_t SR23:1;       /* Channel 23 Pending Service Status */
                vuint32_t SR22:1;       /* Channel 22 Pending Service Status */
                vuint32_t SR21:1;       /* Channel 21 Pending Service Status */
                vuint32_t SR20:1;       /* Channel 20 Pending Service Status */
                vuint32_t SR19:1;       /* Channel 19 Pending Service Status */
                vuint32_t SR18:1;       /* Channel 18 Pending Service Status */
                vuint32_t SR17:1;       /* Channel 17 Pending Service Status */
                vuint32_t SR16:1;       /* Channel 16 Pending Service Status */
                vuint32_t SR15:1;       /* Channel 15 Pending Service Status */
                vuint32_t SR14:1;       /* Channel 14 Pending Service Status */
                vuint32_t SR13:1;       /* Channel 13 Pending Service Status */
                vuint32_t SR12:1;       /* Channel 12 Pending Service Status */
                vuint32_t SR11:1;       /* Channel 11 Pending Service Status */
                vuint32_t SR10:1;       /* Channel 10 Pending Service Status */
                vuint32_t SR9:1;        /* Channel 9 Pending Service Status */
                vuint32_t SR8:1;        /* Channel 8 Pending Service Status */
                vuint32_t SR7:1;        /* Channel 7 Pending Service Status */
                vuint32_t SR6:1;        /* Channel 6 Pending Service Status */
                vuint32_t SR5:1;        /* Channel 5 Pending Service Status */
                vuint32_t SR4:1;        /* Channel 4 Pending Service Status */
                vuint32_t SR3:1;        /* Channel 3 Pending Service Status */
                vuint32_t SR2:1;        /* Channel 2 Pending Service Status */
                vuint32_t SR1:1;        /* Channel 1 Pending Service Status */
                vuint32_t SR0:1;        /* Channel 0 Pending Service Status */
            } B;
        } CPSSR_C;
        uint32_t eTPU_C_reserved0284;     /* 0x0284-0x0287 */

        uint32_t eTPU_C_reserved0288[2];  /* 0x0288-0x028F */
        
        union {                 /* ETPU_C Channel Service Status */
            vuint32_t R;
            struct {
                vuint32_t SS31:1;       /* Channel 31 Service Status */
                vuint32_t SS30:1;       /* Channel 30 Service Status */
                vuint32_t SS29:1;       /* Channel 29 Service Status */
                vuint32_t SS28:1;       /* Channel 28 Service Status */
                vuint32_t SS27:1;       /* Channel 27 Service Status */
                vuint32_t SS26:1;       /* Channel 26 Service Status */
                vuint32_t SS25:1;       /* Channel 25 Service Status */
                vuint32_t SS24:1;       /* Channel 24 Service Status */
                vuint32_t SS23:1;       /* Channel 23 Service Status */
                vuint32_t SS22:1;       /* Channel 22 Service Status */
                vuint32_t SS21:1;       /* Channel 21 Service Status */
                vuint32_t SS20:1;       /* Channel 20 Service Status */
                vuint32_t SS19:1;       /* Channel 19 Service Status */
                vuint32_t SS18:1;       /* Channel 18 Service Status */
                vuint32_t SS17:1;       /* Channel 17 Service Status */
                vuint32_t SS16:1;       /* Channel 16 Service Status */
                vuint32_t SS15:1;       /* Channel 15 Service Status */
                vuint32_t SS14:1;       /* Channel 14 Service Status */
                vuint32_t SS13:1;       /* Channel 13 Service Status */
                vuint32_t SS12:1;       /* Channel 12 Service Status */
                vuint32_t SS11:1;       /* Channel 11 Service Status */
                vuint32_t SS10:1;       /* Channel 10 Service Status */
                vuint32_t SS9:1;        /* Channel 9 Service Status */
                vuint32_t SS8:1;        /* Channel 8 Service Status */
                vuint32_t SS7:1;        /* Channel 7 Service Status */
                vuint32_t SS6:1;        /* Channel 6 Service Status */
                vuint32_t SS5:1;        /* Channel 5 Service Status */
                vuint32_t SS4:1;        /* Channel 4 Service Status */
                vuint32_t SS3:1;        /* Channel 3 Service Status */
                vuint32_t SS2:1;        /* Channel 2 Service Status */
                vuint32_t SS1:1;        /* Channel 1 Service Status */
                vuint32_t SS0:1;        /* Channel 0 Service Status */
            } B;
        } CSSR_C;
        uint32_t eTPU_C_reserved0294;     /* 0x0294-0x0297 */

        uint32_t eTPU_C_reserved0298[2];  /* 0x0298-0x029F */
        
        uint32_t eTPU_C_reserved02A0[88];  /* 0x02A0-0x03FF */

/*****************************Channels********************************/

        struct {
            union {    /* Channel Configuration Register */
                vuint32_t R;
                struct {
                    vuint32_t CIE:1;    /* Channel Interruput Enable */
                    vuint32_t DTRE:1;   /* Data Transfer Request Enable */
                    vuint32_t CPR:2;    /* Channel Priority */
                    vuint32_t:2;
                    vuint32_t ETPD:1;
                    vuint32_t ETCS:1;   /* Entry Table Condition Select */
                    vuint32_t:3;
                    vuint32_t CFS:5;    /* Channel Function Select */
                    vuint32_t ODIS:1;   /* Output disable */
                    vuint32_t OPOL:1;   /* output polarity */
                    vuint32_t:3;
                    vuint32_t CPBA:11;  /* Channel Parameter Base Address */
                } B;
            } CR;
            
            union {    /* Channel Status Control Register */
                vuint32_t R;
                struct {
                    vuint32_t CIS:1;    /* Channel Interruput Status */
                    vuint32_t CIOS:1;   /* Channel Interruput Overflow Status */
                    vuint32_t:6;
                    vuint32_t DTRS:1;   /* Data Transfer Status */
                    vuint32_t DTROS:1;  /* Data Transfer Overflow Status */
                    vuint32_t:6;
                    vuint32_t IPS:1;    /* Input Pin State */
                    vuint32_t OPS:1;    /* Output Pin State */
                    vuint32_t OBE:1;    /* Output Buffer Enable */
                    vuint32_t:11;
                    vuint32_t FM1:1;    /* Function mode */
                    vuint32_t FM0:1;    /* Function mode */
                } B;
            } SCR;
            
            union {    /* Channel Host Service Request Register */
                vuint32_t R;
                struct {
                    vuint32_t:29;       /* Host Service Request */
                    vuint32_t HSR:3;
                } B;
            } HSRR;
            
            uint32_t eTPU_C_ch_reserved00C;  /* channel offset 0x00C-0x00F */
            
        } CHAN[127];
        
        uint32_t eTPU_C_reserved1000[7168];  /* 0x1000-0x7FFF */
        
    };
    

/* ----------------------------------------------------------------------------
   -- PIT Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PIT_Peripheral_Access_Layer PIT Peripheral Access Layer
 * @{
 */


/** PIT - Size of Registers Arrays */
#define PIT_TIMER_COUNT                          4u

/** PIT - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< PIT Module Control Register, offset: 0x0 */
       uint32_t RESERVED_0[63];
  struct {                                         /* offset: 0x100, array step: 0x10 */
    __IO uint32_t LDVAL;                             /**< Timer Load Value Register, array offset: 0x100, array step: 0x10 */
    __I  uint32_t CVAL;                              /**< Current Timer Value Register, array offset: 0x104, array step: 0x10 */
    __IO uint32_t TCTRL;                             /**< Timer Control Register, array offset: 0x108, array step: 0x10 */
    __IO uint32_t TFLG;                              /**< Timer Flag Register, array offset: 0x10C, array step: 0x10 */
  } TIMER[PIT_TIMER_COUNT];
} PIT_Type, *PIT_MemMapPtr;

 /** Number of instances of the PIT module. */
#define PIT_INSTANCE_COUNT                       (1u)


/* PIT - Peripheral instance base addresses */
/** Peripheral PIT base address */
#define PIT_BASE                                 (0xC3FF0000u)
/** Peripheral PIT base pointer */
#define PIT                                      ((PIT_Type *)PIT_BASE)
/** Array initializer of PIT peripheral base addresses */
#define PIT_BASE_ADDRS                           { PIT_BASE }
/** Array initializer of PIT peripheral base pointers */
#define PIT_BASE_PTRS                            { PIT }
/** Number of interrupt vector arrays for the PIT module. */
#define PIT_IRQS_ARR_COUNT                       (1u)
/** Number of interrupt channels for the PIT module. */
#define PIT_IRQS_CH_COUNT                        (5u)
/** Interrupt vectors for the PIT peripheral type */
#define PIT_IRQS                                 { { PIT_RTI0_IRQn, PIT_RTI1_IRQn, PIT_RTI2_IRQn, PIT_RTI3_IRQn, PIT_RTIINT_IRQn } }
/* ----------------------------------------------------------------------------
   -- PIT Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup PIT_Register_Masks PIT Register Masks
 * @{
 */

/* MCR Bit Fields */
#define PIT_MCR_FRZ_MASK                         0x1u
#define PIT_MCR_FRZ_SHIFT                        0u
#define PIT_MCR_FRZ_WIDTH                        1u
#define PIT_MCR_FRZ(x)                           (((uint32_t)(((uint32_t)(x))<<PIT_MCR_FRZ_SHIFT))&PIT_MCR_FRZ_MASK)
#define PIT_MCR_MDIS_MASK                        0x2u
#define PIT_MCR_MDIS_SHIFT                       1u
#define PIT_MCR_MDIS_WIDTH                       1u
#define PIT_MCR_MDIS(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_MCR_MDIS_SHIFT))&PIT_MCR_MDIS_MASK)
#define PIT_MCR_MDIS_RTI_MASK                    0x4u
#define PIT_MCR_MDIS_RTI_SHIFT                   2u
#define PIT_MCR_MDIS_RTI_WIDTH                   1u
#define PIT_MCR_MDIS_RTI(x)                      (((uint32_t)(((uint32_t)(x))<<PIT_MCR_MDIS_RTI_SHIFT))&PIT_MCR_MDIS_RTI_MASK)
/* LTMR64H Bit Fields */
#define PIT_LTMR64H_LTH_MASK                     0xFFFFFFFFu
#define PIT_LTMR64H_LTH_SHIFT                    0u
#define PIT_LTMR64H_LTH_WIDTH                    32u
#define PIT_LTMR64H_LTH(x)                       (((uint32_t)(((uint32_t)(x))<<PIT_LTMR64H_LTH_SHIFT))&PIT_LTMR64H_LTH_MASK)
/* LTMR64L Bit Fields */
#define PIT_LTMR64L_LTL_MASK                     0xFFFFFFFFu
#define PIT_LTMR64L_LTL_SHIFT                    0u
#define PIT_LTMR64L_LTL_WIDTH                    32u
#define PIT_LTMR64L_LTL(x)                       (((uint32_t)(((uint32_t)(x))<<PIT_LTMR64L_LTL_SHIFT))&PIT_LTMR64L_LTL_MASK)
/* RTI_LDVAL Bit Fields */
#define PIT_RTI_LDVAL_TSV_MASK                   0xFFFFFFFFu
#define PIT_RTI_LDVAL_TSV_SHIFT                  0u
#define PIT_RTI_LDVAL_TSV_WIDTH                  32u
#define PIT_RTI_LDVAL_TSV(x)                     (((uint32_t)(((uint32_t)(x))<<PIT_RTI_LDVAL_TSV_SHIFT))&PIT_RTI_LDVAL_TSV_MASK)
/* RTI_CVAL Bit Fields */
#define PIT_RTI_CVAL_TVL_MASK                    0xFFFFFFFFu
#define PIT_RTI_CVAL_TVL_SHIFT                   0u
#define PIT_RTI_CVAL_TVL_WIDTH                   32u
#define PIT_RTI_CVAL_TVL(x)                      (((uint32_t)(((uint32_t)(x))<<PIT_RTI_CVAL_TVL_SHIFT))&PIT_RTI_CVAL_TVL_MASK)
/* RTI_TCTRL Bit Fields */
#define PIT_RTI_TCTRL_TEN_MASK                   0x1u
#define PIT_RTI_TCTRL_TEN_SHIFT                  0u
#define PIT_RTI_TCTRL_TEN_WIDTH                  1u
#define PIT_RTI_TCTRL_TEN(x)                     (((uint32_t)(((uint32_t)(x))<<PIT_RTI_TCTRL_TEN_SHIFT))&PIT_RTI_TCTRL_TEN_MASK)
#define PIT_RTI_TCTRL_TIE_MASK                   0x2u
#define PIT_RTI_TCTRL_TIE_SHIFT                  1u
#define PIT_RTI_TCTRL_TIE_WIDTH                  1u
#define PIT_RTI_TCTRL_TIE(x)                     (((uint32_t)(((uint32_t)(x))<<PIT_RTI_TCTRL_TIE_SHIFT))&PIT_RTI_TCTRL_TIE_MASK)
/* RTI_TFLG Bit Fields */
#define PIT_RTI_TFLG_TIF_MASK                    0x1u
#define PIT_RTI_TFLG_TIF_SHIFT                   0u
#define PIT_RTI_TFLG_TIF_WIDTH                   1u
#define PIT_RTI_TFLG_TIF(x)                      (((uint32_t)(((uint32_t)(x))<<PIT_RTI_TFLG_TIF_SHIFT))&PIT_RTI_TFLG_TIF_MASK)
/* LDVAL Bit Fields */
#define PIT_LDVAL_TSV_MASK                       0xFFFFFFFFu
#define PIT_LDVAL_TSV_SHIFT                      0u
#define PIT_LDVAL_TSV_WIDTH                      32u
#define PIT_LDVAL_TSV(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_LDVAL_TSV_SHIFT))&PIT_LDVAL_TSV_MASK)
/* CVAL Bit Fields */
#define PIT_CVAL_TVL_MASK                        0xFFFFFFFFu
#define PIT_CVAL_TVL_SHIFT                       0u
#define PIT_CVAL_TVL_WIDTH                       32u
#define PIT_CVAL_TVL(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_CVAL_TVL_SHIFT))&PIT_CVAL_TVL_MASK)
/* TCTRL Bit Fields */
#define PIT_TCTRL_TEN_MASK                       0x1u
#define PIT_TCTRL_TEN_SHIFT                      0u
#define PIT_TCTRL_TEN_WIDTH                      1u
#define PIT_TCTRL_TEN(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_TCTRL_TEN_SHIFT))&PIT_TCTRL_TEN_MASK)
#define PIT_TCTRL_TIE_MASK                       0x2u
#define PIT_TCTRL_TIE_SHIFT                      1u
#define PIT_TCTRL_TIE_WIDTH                      1u
#define PIT_TCTRL_TIE(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_TCTRL_TIE_SHIFT))&PIT_TCTRL_TIE_MASK)
#define PIT_TCTRL_CHN_MASK                       0x4u
#define PIT_TCTRL_CHN_SHIFT                      2u
#define PIT_TCTRL_CHN_WIDTH                      1u
#define PIT_TCTRL_CHN(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_TCTRL_CHN_SHIFT))&PIT_TCTRL_CHN_MASK)
/* TFLG Bit Fields */
#define PIT_TFLG_TIF_MASK                        0x1u
#define PIT_TFLG_TIF_SHIFT                       0u
#define PIT_TFLG_TIF_WIDTH                       1u
#define PIT_TFLG_TIF(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_TFLG_TIF_SHIFT))&PIT_TFLG_TIF_MASK)

/*!
 * @}
 */ /* end of group PIT_Register_Masks */


/*!
 * @}
 */ /* end of group PIT_Peripheral_Access_Layer */

/****************************************************************************/
/*                          MODULE : XBAR CrossBar                          */
/****************************************************************************/

    struct XBAR_tag {
    
        union {                 /* Master Priority Register for Slave Port 0 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MSTR7:3; /* EBI (development bus) */
                vuint32_t:1;
                vuint32_t MSTR6:3; /* FlexRay */
                vuint32_t:1;
                vuint32_t MSTR5:3; /* eDMA_B */
                vuint32_t:1;
                vuint32_t MSTR4:3; /* eDMA_A */
                vuint32_t:1;
                vuint32_t MSTR3:3; /* e200z7 core 1 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR2:3; /* e200z7 core 1 CPU Instruction */
                vuint32_t:1;
                vuint32_t MSTR1:3; /* e200z7 core 0 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR0:3; /* e200z7 core 0 CPU Instruction */
            } B;
        } MPR0;
        
        uint32_t XBAR_reserved0004[3];  /* 0x0004-0x000F */
        
        union {               /* General Purpose Control Register for Slave Port 0 */
            vuint32_t R;
            struct {
                vuint32_t RO:1;
                vuint32_t:21;
                vuint32_t ARB:2;
                vuint32_t:2;
                vuint32_t PCTL:2;
                vuint32_t:1;
                vuint32_t PARK:3;
            } B;
        } SGPCR0;
        
        uint32_t XBAR_reserved0014[59];  /* 0x0014-0x00FF */
        
        union {                 /* Master Priority Register for Slave Port 1 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MSTR7:3; /* EBI (development bus) */
                vuint32_t:1;
                vuint32_t MSTR6:3; /* FlexRay */
                vuint32_t:1;
                vuint32_t MSTR5:3; /* eDMA_B */
                vuint32_t:1;
                vuint32_t MSTR4:3; /* eDMA_A */
                vuint32_t:1;
                vuint32_t MSTR3:3; /* e200z7 core 1 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR2:3; /* e200z7 core 1 CPU Instruction */
                vuint32_t:1;
                vuint32_t MSTR1:3; /* e200z7 core 0 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR0:3; /* e200z7 core 0 CPU Instruction */
            } B;
        } MPR1;
        
        uint32_t XBAR_reserved0104[3];  /* 0x0104-0x010F */
        
        union {               /* General Purpose Control Register for Slave Port 1 */
            vuint32_t R;
            struct {
                vuint32_t RO:1;
                vuint32_t:21;
                vuint32_t ARB:2;
                vuint32_t:2;
                vuint32_t PCTL:2;
                vuint32_t:1;
                vuint32_t PARK:3;
            } B;
        } SGPCR1;
        
        uint32_t XBAR_reserved0114[59];  /* 0x0114-0x01FF */
        
        union {                 /* Master Priority Register for Slave Port 2 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MSTR7:3; /* EBI (development bus) */
                vuint32_t:1;
                vuint32_t MSTR6:3; /* FlexRay */
                vuint32_t:1;
                vuint32_t MSTR5:3; /* eDMA_B */
                vuint32_t:1;
                vuint32_t MSTR4:3; /* eDMA_A */
                vuint32_t:1;
                vuint32_t MSTR3:3; /* e200z7 core 1 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR2:3; /* e200z7 core 1 CPU Instruction */
                vuint32_t:1;
                vuint32_t MSTR1:3; /* e200z7 core 0 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR0:3; /* e200z7 core 0 CPU Instruction */
            } B;
        } MPR2;
        
        uint32_t XBAR_reserved0204[3];  /* 0x0204-0x020F */
        
        union {               /* General Purpose Control Register for Slave Port 2 */
            vuint32_t R;
            struct {
                vuint32_t RO:1;
                vuint32_t:21;
                vuint32_t ARB:2;
                vuint32_t:2;
                vuint32_t PCTL:2;
                vuint32_t:1;
                vuint32_t PARK:3;
            } B;
        } SGPCR2;
        
        uint32_t XBAR_reserved0214[59];  /* 0x0214-0x02FF */
        
        union {                 /* Master Priority Register for Slave Port 3 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MSTR7:3; /* EBI (development bus) */
                vuint32_t:1;
                vuint32_t MSTR6:3; /* FlexRay */
                vuint32_t:1;
                vuint32_t MSTR5:3; /* eDMA_B */
                vuint32_t:1;
                vuint32_t MSTR4:3; /* eDMA_A */
                vuint32_t:1;
                vuint32_t MSTR3:3; /* e200z7 core 1 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR2:3; /* e200z7 core 1 CPU Instruction */
                vuint32_t:1;
                vuint32_t MSTR1:3; /* e200z7 core 0 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR0:3; /* e200z7 core 0 CPU Instruction */
            } B;
        } MPR3;
        
        uint32_t XBAR_reserved0304[3];  /* 0x0304-0x030F */
        
        union {               /* General Purpose Control Register for Slave Port 3 */
            vuint32_t R;
            struct {
                vuint32_t RO:1;
                vuint32_t:21;
                vuint32_t ARB:2;
                vuint32_t:2;
                vuint32_t PCTL:2;
                vuint32_t:1;
                vuint32_t PARK:3;
            } B;
        } SGPCR3;
        
        uint32_t XBAR_reserved0314[59];  /* 0x0314-0x03FF */
        
        uint32_t XBAR_reserved0400[64];  /* 0x0400-0x04FF */
        
        uint32_t XBAR_reserved0500[64];  /* 0x0500-0x05FF */
        
        union {                 /* Master Priority Register for Slave Port 6 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MSTR7:3; /* EBI (development bus) */
                vuint32_t:1;
                vuint32_t MSTR6:3; /* FlexRay */
                vuint32_t:1;
                vuint32_t MSTR5:3; /* eDMA_B */
                vuint32_t:1;
                vuint32_t MSTR4:3; /* eDMA_A */
                vuint32_t:1;
                vuint32_t MSTR3:3; /* e200z7 core 1 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR2:3; /* e200z7 core 1 CPU Instruction */
                vuint32_t:1;
                vuint32_t MSTR1:3; /* e200z7 core 0 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR0:3; /* e200z7 core 0 CPU Instruction */
            } B;
        } MPR6;
        
        uint32_t XBAR_reserved604[3];  /* 0x0604-0x060F */
        
        union {               /* General Purpose Control Register for Slave Port 6 */
            vuint32_t R;
            struct {
                vuint32_t RO:1;
                vuint32_t:21;
                vuint32_t ARB:2;
                vuint32_t:2;
                vuint32_t PCTL:2;
                vuint32_t:1;
                vuint32_t PARK:3;
            } B;
        } SGPCR6;
        
        uint32_t XBAR_reserved0614[59];  /* 0x0614-0x06FF */
        
        union {                 /* Master Priority Register for Slave Port 7 */
            vuint32_t R;
            struct {
                vuint32_t:1;
                vuint32_t MSTR7:3; /* EBI (development bus) */
                vuint32_t:1;
                vuint32_t MSTR6:3; /* FlexRay */
                vuint32_t:1;
                vuint32_t MSTR5:3; /* eDMA_B */
                vuint32_t:1;
                vuint32_t MSTR4:3; /* eDMA_A */
                vuint32_t:1;
                vuint32_t MSTR3:3; /* e200z7 core 1 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR2:3; /* e200z7 core 1 CPU Instruction */
                vuint32_t:1;
                vuint32_t MSTR1:3; /* e200z7 core 0 Data, and Nexus 3 */
                vuint32_t:1;
                vuint32_t MSTR0:3; /* e200z7 core 0 CPU Instruction */
            } B;
        } MPR7;
        
        uint32_t XBAR_reserved704[3];  /* 0x0704-0x070F */
        
        union {
            vuint32_t R;
            struct {
                vuint32_t RO:1;
                  vuint32_t:21;
                vuint32_t ARB:2;
                  vuint32_t:2;
                vuint32_t PCTL:2;
                  vuint32_t:1;
                vuint32_t PARK:3;
            } B;
        } SGPCR7;               /* General Purpose Control Register for Slave Port 7 */
        
        uint32_t XBAR_reserved0714[59];  /* 0x0714-0x07FF */
        
        uint32_t XBAR_reserved0800[3584];  /* 0x0800-0x3FFF */
    };

/****************************************************************************/
/*                          MODULE : MPU                                    */
/****************************************************************************/

    struct MPU_tag {
    
        union {                 /* Module Control/Error Status Register */
            vuint32_t R;
            struct {
                vuint32_t SPERR:8;
                  vuint32_t:4;
                vuint32_t HRL:4;
                vuint32_t NSP:4;
                vuint32_t NRGD:4;
                  vuint32_t:7;
                vuint32_t VLD:1;
            } B;
        } CESR;
        
        uint32_t MPU_reserved0004[3]; /* 0x0004-0x000F */
        
        struct {
            union {             /* MPU Error Address Registers */
                vuint32_t R;
                struct {
                    vuint32_t EADDR:32;
                } B;
            } EAR;
            
            union {             /* MPU Error Detail Registers */
                vuint32_t R;
                struct {
                    vuint32_t EACD:16;
                    vuint32_t EPID:8;
                    vuint32_t EMN:4;
                    vuint32_t EATTR:3;
                    vuint32_t ERW:1;
                } B;
            } EDR;
        } PORT[4];
        
        uint32_t MPU_reserved0030[244];  /* 0x0028-0x03FF */
        
        struct {
            union {            /* Region Descriptor n Word 0 */
                vuint32_t R;
                struct {
                    vuint32_t SRTADDR:27;
                    vuint32_t:5;
                } B;
            } WORD0;
            
            union {            /* Region Descriptor n Word 1 */
                vuint32_t R;
                struct {
                    vuint32_t ENDADDR:27;
                    vuint32_t:5;
                } B;
            } WORD1;
            
            union {            /* Region Descriptor n Word 2 */
                vuint32_t R;
                struct {
                    vuint32_t M7RE:1;   /* Reserved */
                    vuint32_t M7WE:1;   /* Reserved */
                    vuint32_t M6RE:1;   /* FlexRay Read Enable */
                    vuint32_t M6WE:1;   /* FlexRay Write Enable */
                    vuint32_t M5RE:1;   /* eDMA_B Read Enable */
                    vuint32_t M5WE:1;   /* eDMA_B Write Enable */
                    vuint32_t M4RE:1;   /* eDMA_A Read Enable */
                    vuint32_t M4WE:1;   /* eDMA_A Write Enable */
                    vuint32_t M3PE:1;   /* Reserved */
                    vuint32_t M3SM:2;   /* Reserved */
                    vuint32_t M3UM:3;   /* Reserved */
                    vuint32_t M2PE:1;   /* Reserved */
                    vuint32_t M2SM:2;   /* Reserved */
                    vuint32_t M2UM:3;   /* Reserved */
                    vuint32_t M1PE:1;   /* Core 1 PID Enable */
                    vuint32_t M1SM:2;   /* Core 1 Supervisor Mode Access */
                    vuint32_t M1UM:3;   /* Core 1 User Mode Access */
                    vuint32_t M0PE:1;   /* Core 0 PID Enable */
                    vuint32_t M0SM:2;   /* Core 0 Supervisor Mode Access */
                    vuint32_t M0UM:3;   /* Core 0 User Mode Access */
                } B;
            } WORD2;
            
            union {            /* Region Descriptor n Word 3 */
                vuint32_t R;
                struct {
                    vuint32_t PID:8;
                    vuint32_t PIDMASK:8;
                      vuint32_t:15;
                    vuint32_t VLD:1;
                } B;
            } WORD3;
        } RGD[16];
        
        uint32_t MPU_reserved0500[192];  /* 0x0500-0x07FF */
        
        union {           /* Region Descriptor Alternate Access Control n */
            vuint32_t R;
            struct {
                vuint32_t M7RE:1;   /* Reserved */
                vuint32_t M7WE:1;   /* Reserved */
                vuint32_t M6RE:1;   /* FlexRay Read Enable */
                vuint32_t M6WE:1;   /* FlexRay Write Enable */
                vuint32_t M5RE:1;   /* eDMA_B Read Enable */
                vuint32_t M5WE:1;   /* eDMA_B Write Enable */
                vuint32_t M4RE:1;   /* eDMA_A Read Enable */
                vuint32_t M4WE:1;   /* eDMA_A Write Enable */
                vuint32_t M3PE:1;   /* Reserved */
                vuint32_t M3SM:2;   /* Reserved */
                vuint32_t M3UM:3;   /* Reserved */
                vuint32_t M2PE:1;   /* Reserved */
                vuint32_t M2SM:2;   /* Reserved */
                vuint32_t M2UM:3;   /* Reserved */
                vuint32_t M1PE:1;   /* Core 1 PID Enable */
                vuint32_t M1SM:2;   /* Core 1 Supervisor Mode Access */
                vuint32_t M1UM:3;   /* Core 1 User Mode Access */
                vuint32_t M0PE:1;   /* Core 0 PID Enable */
                vuint32_t M0SM:2;   /* Core 0 Supervisor Mode Access */
                vuint32_t M0UM:3;   /* Core 0 User Mode Access */
            } B;
        } RGDAAC[16];
        
        uint32_t MPU_reserved0840[3568];  /* 0x0840-0x3FFF */
    
    };

/****************************************************************************/
/*                     MODULE : SWT                                         */
/****************************************************************************/

    struct SWT_tag {
    
        union {                  /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t MAP0:1;
                vuint32_t MAP1:1;
                vuint32_t:1;
                vuint32_t:1;
                vuint32_t MAP4:1;
                vuint32_t MAP5:1;
                vuint32_t MAP6:1;
                vuint32_t MAP7:1;
                vuint32_t:14;
                vuint32_t KEY:1;
                vuint32_t RIA:1;
                vuint32_t WND:1;
                vuint32_t ITR:1;
                vuint32_t HLK:1;
                vuint32_t SLK:1;
                vuint32_t CSL:1;
                vuint32_t STP:1;
                vuint32_t FRZ:1;
                vuint32_t WEN:1;
            } B;
        } MCR;
        
        union {                /* Interrupt register */
            vuint32_t R;
            struct {
                vuint32_t :31;
                vuint32_t TIF:1;
            } B;
        } IR;
        
        union {                /* Timeout register */
            vuint32_t R;
            struct {
                vuint32_t WTO:32;
            } B;
        } TO;
        
        union {                /* Window register */
            vuint32_t R;
            struct {
                vuint32_t WST:32;
            } B;
        } WN;
        
        union {                /* Service register */
            vuint32_t R;
            struct {
                vuint32_t :16;
                vuint32_t WSC:16;
            } B;
        } SR;
        
        union {                /* Counter output register */
            vuint32_t R;
            struct {
                vuint32_t CNT:32;
            } B;
        } CO;
        
        union {                /* Service key register */
            vuint32_t R;
            struct {
                vuint32_t :16;
                vuint32_t SK:16;
            } B;
        } SK;
        
        uint32_t SWT_reserved001C[4089]; /* 0x001C-0x3FFF */
    
    };

/****************************************************************************/
/*                     MODULE : STM                                         */
/****************************************************************************/

    struct STM_tag {
    
        union {                  /* Control Register */
            vuint32_t R;
            struct {
                vuint32_t :16;
                vuint32_t CPS:8;
                vuint32_t :6;
                vuint32_t FRZ:1;
                vuint32_t TEN:1;
            } B;
        } CR;
        
        union {                /* STM Counter */
            vuint32_t R;
        } CNT;
        
        uint32_t STM_reserved0008[2];  /* 0x0008-0x000F */
        
        /* channel 0 registers */
		    union {
            vuint32_t R;
            struct {
                vuint32_t :31;
             	vuint32_t CEN:1;   			
            } B;
        } CCR0;                /* Chan 0 Control Register */
        
        union {
    	    vuint32_t R;
            struct {
                vuint32_t :31;
                vuint32_t CIF:1;
        	} B;
        } CIR0;                /* Chan 0 Interrupt Register */
	
		    union {
    	    vuint32_t R;
        } CMP0;                /* Chan 0 Compare Register */

		    uint32_t STM_reserved2[1];
	
        /* channel 1 registers */
		    union {
            vuint32_t R;
            struct {
                vuint32_t :31;
             	vuint32_t CEN:1;   			
            } B;
        } CCR1;                /* Chan 1 Control Register */
        
        union {
    	    vuint32_t R;
            struct {
                vuint32_t :31;
                vuint32_t CIF:1;
        	} B;
        } CIR1;                /* Chan 1 Interrupt Register */
	
		    union {
    	    vuint32_t R;
        } CMP1;                /* Chan 1 Compare Register */

		    uint32_t STM_reserved3[1];
        
        /* channel 2 registers */
		    union {
            vuint32_t R;
            struct {
                vuint32_t :31;
             	vuint32_t CEN:1;   			
            } B;
        } CCR2;                /* Chan 2 Control Register */
        
        union {
    	    vuint32_t R;
            struct {
                vuint32_t :31;
                vuint32_t CIF:1;
        	} B;
        } CIR2;                /* Chan 2 Interrupt Register */
	
		    union {
    	    vuint32_t R;
        } CMP2;                /* Chan 2 Compare Register */

		    uint32_t STM_reserved4[1];

        /* channel 3 registers */
		    union {
            vuint32_t R;
            struct {
                vuint32_t :31;
             	vuint32_t CEN:1;   			
            } B;
        } CCR3;                /* Chan 3 Control Register */
        
        union {
    	    vuint32_t R;
            struct {
                vuint32_t :31;
                vuint32_t CIF:1;
        	} B;
        } CIR3;                /* Chan 3 Interrupt Register */
	
		    union {
    	    vuint32_t R;
        } CMP3;                /* Chan 3 Compare Register */
        
        uint32_t STM_reserved0050[4076];  /* 0x0050-0x3FFF */
    
    };

/****************************************************************************/
/*                     MODULE : ECSM                                        */
/****************************************************************************/

    struct ECSM_tag {
    
        union {                /* Processor core type */
            vuint16_t R;
        } PCT;
        
        union {                /* Platform revision */
            vuint16_t R;
        } REV;
        
        uint32_t ECSM_reserved0004;  /* 0x0004-0x0007 */
        
        union {                 /* IPS Module Configuration */
            vuint32_t R;
        } IMC;
        
        uint8_t ECSM_reserved000C[3];  /* 0x000C-0x000E */
        
        union {                 /* Miscellaneous Reset Status Register */
            vuint8_t R;
            struct {
                vuint8_t POR:1;
                vuint8_t DIR:1;
                vuint8_t SWTR:1;
                vuint8_t:5;
            } B;
        } MRSR;
        
        uint8_t ECSM_reserved0010[51]; /* 0x0010-0x0042 */
        
        union {                  /* ECC Configuration Register */
            vuint8_t R;
            struct {
                vuint8_t:2;
                vuint8_t ER1BR:1;
                vuint8_t EF1BR:1;
                vuint8_t:2;
                vuint8_t ERNCR:1;
                vuint8_t EFNCR:1;
            } B;
        } ECR;
        
        uint8_t ECSM_reserved0044[3];  /* 0x0044-0x0046 */
        
        union {                  /* ECC Status Register */
            vuint8_t R;
            struct {
                vuint8_t:2;
                vuint8_t R1BC:1;
                vuint8_t F1BC:1;
                vuint8_t:2;
                vuint8_t RNCE:1;
                vuint8_t FNCE:1;
            } B;
        } ESR;
        
        uint16_t ECSM_reserved0048; /* 0x0048-0x0049 */
        
        union {                 /* ECC Error Generation Register */
            vuint16_t R;
            struct {
                vuint16_t:2;
                vuint16_t FRC1BI:1;
                vuint16_t FR11BI:1;
                vuint16_t:2;
                vuint16_t FRCNCI:1;
                vuint16_t FR1NCI:1;
                vuint16_t:1;
                vuint16_t ERRBIT:7;
            } B;
        } EEGR;
        
        uint32_t ECSM_reserved004C; /* 0x004C-0x004F */
        
        union {                 /* Flash ECC Address Register */
            vuint32_t R;
            struct {
                vuint32_t FEAR:32;
            } B;
        } FEAR;
        
        uint16_t ECSM_reserved0054; /* 0x0054-0x0055 */
        
        union {                 /* Flash ECC Master Number Register */
            vuint8_t R;
            struct {
                vuint8_t:4;
                vuint8_t FEMR:4;
            } B;
        } FEMR;
        
        union {                 /* Flash ECC Attributes Register */
            vuint8_t R;
            struct {
                vuint8_t WRITE:1;
                vuint8_t SIZE:3;
                vuint8_t PROT0:1;
                vuint8_t PROT1:1;
                vuint8_t PROT2:1;
                vuint8_t PROT3:1;
            } B;
        } FEAT;
        
        union {                /* Flash ECC Data Register High */
            vuint32_t R;
            struct {
                vuint32_t FEDH:32;
            } B;
        } FEDRH;
        
        union {                /* Flash ECC Data Register Low */
            vuint32_t R;
            struct {
                vuint32_t FEDL:32;
            } B;
        } FEDRL;
        
        union {                /* RAM ECC Address Register */
            vuint32_t R;
            struct {
                vuint32_t REAR:32;
            } B;
        } REAR;
        
        uint8_t ECSM_reserved0064; /* 0x0064 */
                
        union {                /* RAM ECC Syndrome Register */
            vuint8_t R;
            struct {
                vuint8_t RESR:8;
            } B;
        } RESR;
        
        union {                 /* RAM ECC Master Number Register */
            vuint8_t R;
            struct {
                vuint8_t:4;
                vuint8_t REMR:4;
            } B;
        } REMR;
        
        union {                 /* RAM ECC Attributes Register */
            vuint8_t R;
            struct {
                vuint8_t WRITE:1;
                vuint8_t SIZE:3;
                vuint8_t PROT0:1;
                vuint8_t PROT1:1;
                vuint8_t PROT2:1;
                vuint8_t PROT3:1;
            } B;
        } REAT;
        
        union {                /* RAM ECC Data Register */
            vuint32_t R;
            struct {
                vuint32_t REDH:32;
            } B;
        } REDRH;
        
        union {                /* RAM ECC Data Register */
            vuint32_t R;
            struct {
                vuint32_t REDL:32;
            } B;
        } REDRL;
        
        uint32_t ECSM_reserved0070[4068]; /* 0x0070-0x3FFF */
    
    };

/****************************************************************************/
/*                          MODULE : eDMA                                   */
/****************************************************************************/

    struct EDMA_tag {
    
        union {                   /* Control Register */
            vuint32_t R;
            struct {
                vuint32_t:14;
                vuint32_t CX:1;     /* Legacy name. CXFR in reference manual */
                vuint32_t ECX:1;
                vuint32_t GRP3PRI:2;
                vuint32_t GRP2PRI:2;
                vuint32_t GRP1PRI:2;
                vuint32_t GRP0PRI:2;
                vuint32_t EMLM:1;
                vuint32_t CLM:1;
                vuint32_t HALT:1;
                vuint32_t HOE:1;
                vuint32_t ERGA:1;
                vuint32_t ERCA:1;
                vuint32_t EDBG:1;
                vuint32_t:1;
            } B;
        } CR; /* Legacy naming - refer to MCR in Reference Manual */
        
        union {                  /* Error Status Register */
            vuint32_t R;
            struct {
                vuint32_t VLD:1;
                vuint32_t:14;
                vuint32_t ECX:1;
                vuint32_t GPE:1;
                vuint32_t CPE:1;
                vuint32_t ERRCHN:6;
                vuint32_t SAE:1;
                vuint32_t SOE:1;
                vuint32_t DAE:1;
                vuint32_t DOE:1;
                vuint32_t NCE:1;
                vuint32_t SGE:1;
                vuint32_t SBE:1;
                vuint32_t DBE:1;
            } B;
        } ESR;
        
        union {                /* DMA Enable Request Register High */
            vuint32_t R;
            struct {
                vuint32_t ERQ63:1;
                vuint32_t ERQ62:1;
                vuint32_t ERQ61:1;
                vuint32_t ERQ60:1;
                vuint32_t ERQ59:1;
                vuint32_t ERQ58:1;
                vuint32_t ERQ57:1;
                vuint32_t ERQ56:1;
                vuint32_t ERQ55:1;
                vuint32_t ERQ54:1;
                vuint32_t ERQ53:1;
                vuint32_t ERQ52:1;
                vuint32_t ERQ51:1;
                vuint32_t ERQ50:1;
                vuint32_t ERQ49:1;
                vuint32_t ERQ48:1;
                vuint32_t ERQ47:1;
                vuint32_t ERQ46:1;
                vuint32_t ERQ45:1;
                vuint32_t ERQ44:1;
                vuint32_t ERQ43:1;
                vuint32_t ERQ42:1;
                vuint32_t ERQ41:1;
                vuint32_t ERQ40:1;
                vuint32_t ERQ39:1;
                vuint32_t ERQ38:1;
                vuint32_t ERQ37:1;
                vuint32_t ERQ36:1;
                vuint32_t ERQ35:1;
                vuint32_t ERQ34:1;
                vuint32_t ERQ33:1;
                vuint32_t ERQ32:1;
            } B;
        } ERQRH;
        
        union {                /* DMA Enable Request Register Low */
            vuint32_t R;
            struct {
                vuint32_t ERQ31:1;
                vuint32_t ERQ30:1;
                vuint32_t ERQ29:1;
                vuint32_t ERQ28:1;
                vuint32_t ERQ27:1;
                vuint32_t ERQ26:1;
                vuint32_t ERQ25:1;
                vuint32_t ERQ24:1;
                vuint32_t ERQ23:1;
                vuint32_t ERQ22:1;
                vuint32_t ERQ21:1;
                vuint32_t ERQ20:1;
                vuint32_t ERQ19:1;
                vuint32_t ERQ18:1;
                vuint32_t ERQ17:1;
                vuint32_t ERQ16:1;
                vuint32_t ERQ15:1;
                vuint32_t ERQ14:1;
                vuint32_t ERQ13:1;
                vuint32_t ERQ12:1;
                vuint32_t ERQ11:1;
                vuint32_t ERQ10:1;
                vuint32_t ERQ09:1;
                vuint32_t ERQ08:1;
                vuint32_t ERQ07:1;
                vuint32_t ERQ06:1;
                vuint32_t ERQ05:1;
                vuint32_t ERQ04:1;
                vuint32_t ERQ03:1;
                vuint32_t ERQ02:1;
                vuint32_t ERQ01:1;
                vuint32_t ERQ00:1;
            } B;
        } ERQRL;
        
        union {                /* DMA Enable Error Interrupt Register High */
            vuint32_t R;
            struct {
                
                vuint32_t EEI63:1;
                vuint32_t EEI62:1;
                vuint32_t EEI61:1;
                vuint32_t EEI60:1;
                vuint32_t EEI59:1;
                vuint32_t EEI58:1;
                vuint32_t EEI57:1;
                vuint32_t EEI56:1;
                vuint32_t EEI55:1;
                vuint32_t EEI54:1;
                vuint32_t EEI53:1;
                vuint32_t EEI52:1;
                vuint32_t EEI51:1;
                vuint32_t EEI50:1;
                vuint32_t EEI49:1;
                vuint32_t EEI48:1;
                vuint32_t EEI47:1;
                vuint32_t EEI46:1;
                vuint32_t EEI45:1;
                vuint32_t EEI44:1;
                vuint32_t EEI43:1;
                vuint32_t EEI42:1;
                vuint32_t EEI41:1;
                vuint32_t EEI40:1;
                vuint32_t EEI39:1;
                vuint32_t EEI38:1;
                vuint32_t EEI37:1;
                vuint32_t EEI36:1;
                vuint32_t EEI35:1;
                vuint32_t EEI34:1;
                vuint32_t EEI33:1;
                vuint32_t EEI32:1;
            } B;
        } EEIRH;
        
        union {                /* DMA Enable Error Interrupt Register Low */
            vuint32_t R;
            struct {
                vuint32_t EEI31:1;
                vuint32_t EEI30:1;
                vuint32_t EEI29:1;
                vuint32_t EEI28:1;
                vuint32_t EEI27:1;
                vuint32_t EEI26:1;
                vuint32_t EEI25:1;
                vuint32_t EEI24:1;
                vuint32_t EEI23:1;
                vuint32_t EEI22:1;
                vuint32_t EEI21:1;
                vuint32_t EEI20:1;
                vuint32_t EEI19:1;
                vuint32_t EEI18:1;
                vuint32_t EEI17:1;
                vuint32_t EEI16:1;
                vuint32_t EEI15:1;
                vuint32_t EEI14:1;
                vuint32_t EEI13:1;
                vuint32_t EEI12:1;
                vuint32_t EEI11:1;
                vuint32_t EEI10:1;
                vuint32_t EEI09:1;
                vuint32_t EEI08:1;
                vuint32_t EEI07:1;
                vuint32_t EEI06:1;
                vuint32_t EEI05:1;
                vuint32_t EEI04:1;
                vuint32_t EEI03:1;
                vuint32_t EEI02:1;
                vuint32_t EEI01:1;
                vuint32_t EEI00:1;
            } B;
        } EEIRL;
        
        union {                /* DMA Set Enable Request Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t SERQ:7;
            } B;
        } SERQR;
        
        union {                /* DMA Clear Enable Request Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t CERQ:7;
            } B;
        } CERQR;
        
        union {                /* DMA Set Enable Error Interrupt Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t SEEI:7;
            } B;
        } SEEIR;
        
        union {                /* DMA Clear Enable Error Interrupt Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t CEEI:7;
            } B;
        } CEEIR;
        
        union {                /* DMA Clear Interrupt Request Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t CINT:7;
            } B;
        } CIRQR;
        
        union {                  /* DMA Clear error Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t CERR:7;
            } B;
        } CER;
        
        union {                 /* Set Start Bit Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t SSB:7;
            } B;
        } SSBR;
        
        union {                /* Clear Done Status Bit Register */
            vuint8_t R;
            struct {
                vuint8_t NOP:1;
                vuint8_t CDSB:7;
            } B;
        } CDSBR;
        
        union {                /* DMA Interrupt Request High */
            vuint32_t R;
            struct {
                vuint32_t INT63:1;
                vuint32_t INT62:1;
                vuint32_t INT61:1;
                vuint32_t INT60:1;
                vuint32_t INT59:1;
                vuint32_t INT58:1;
                vuint32_t INT57:1;
                vuint32_t INT56:1;
                vuint32_t INT55:1;
                vuint32_t INT54:1;
                vuint32_t INT53:1;
                vuint32_t INT52:1;
                vuint32_t INT51:1;
                vuint32_t INT50:1;
                vuint32_t INT49:1;
                vuint32_t INT48:1;
                vuint32_t INT47:1;
                vuint32_t INT46:1;
                vuint32_t INT45:1;
                vuint32_t INT44:1;
                vuint32_t INT43:1;
                vuint32_t INT42:1;
                vuint32_t INT41:1;
                vuint32_t INT40:1;
                vuint32_t INT39:1;
                vuint32_t INT38:1;
                vuint32_t INT37:1;
                vuint32_t INT36:1;
                vuint32_t INT35:1;
                vuint32_t INT34:1;
                vuint32_t INT33:1;
                vuint32_t INT32:1;
            } B;
        } IRQRH;
        
        union {                /* DMA Interrupt Request Low */
            vuint32_t R;
            struct {
                vuint32_t INT31:1;
                vuint32_t INT30:1;
                vuint32_t INT29:1;
                vuint32_t INT28:1;
                vuint32_t INT27:1;
                vuint32_t INT26:1;
                vuint32_t INT25:1;
                vuint32_t INT24:1;
                vuint32_t INT23:1;
                vuint32_t INT22:1;
                vuint32_t INT21:1;
                vuint32_t INT20:1;
                vuint32_t INT19:1;
                vuint32_t INT18:1;
                vuint32_t INT17:1;
                vuint32_t INT16:1;
                vuint32_t INT15:1;
                vuint32_t INT14:1;
                vuint32_t INT13:1;
                vuint32_t INT12:1;
                vuint32_t INT11:1;
                vuint32_t INT10:1;
                vuint32_t INT09:1;
                vuint32_t INT08:1;
                vuint32_t INT07:1;
                vuint32_t INT06:1;
                vuint32_t INT05:1;
                vuint32_t INT04:1;
                vuint32_t INT03:1;
                vuint32_t INT02:1;
                vuint32_t INT01:1;
                vuint32_t INT00:1;
            } B;
        } IRQRL;
        
        union {                  /* DMA Error High */
            vuint32_t R;
            struct {
                vuint32_t ERR63:1;
                vuint32_t ERR62:1;
                vuint32_t ERR61:1;
                vuint32_t ERR60:1;
                vuint32_t ERR59:1;
                vuint32_t ERR58:1;
                vuint32_t ERR57:1;
                vuint32_t ERR56:1;
                vuint32_t ERR55:1;
                vuint32_t ERR54:1;
                vuint32_t ERR53:1;
                vuint32_t ERR52:1;
                vuint32_t ERR51:1;
                vuint32_t ERR50:1;
                vuint32_t ERR49:1;
                vuint32_t ERR48:1;
                vuint32_t ERR47:1;
                vuint32_t ERR46:1;
                vuint32_t ERR45:1;
                vuint32_t ERR44:1;
                vuint32_t ERR43:1;
                vuint32_t ERR42:1;
                vuint32_t ERR41:1;
                vuint32_t ERR40:1;
                vuint32_t ERR39:1;
                vuint32_t ERR38:1;
                vuint32_t ERR37:1;
                vuint32_t ERR36:1;
                vuint32_t ERR35:1;
                vuint32_t ERR34:1;
                vuint32_t ERR33:1;
                vuint32_t ERR32:1;
            } B;
        } ERH;
        
        union {                  /* DMA Error Low */
            vuint32_t R;
            struct {
                vuint32_t ERR31:1;
                vuint32_t ERR30:1;
                vuint32_t ERR29:1;
                vuint32_t ERR28:1;
                vuint32_t ERR27:1;
                vuint32_t ERR26:1;
                vuint32_t ERR25:1;
                vuint32_t ERR24:1;
                vuint32_t ERR23:1;
                vuint32_t ERR22:1;
                vuint32_t ERR21:1;
                vuint32_t ERR20:1;
                vuint32_t ERR19:1;
                vuint32_t ERR18:1;
                vuint32_t ERR17:1;
                vuint32_t ERR16:1;
                vuint32_t ERR15:1;
                vuint32_t ERR14:1;
                vuint32_t ERR13:1;
                vuint32_t ERR12:1;
                vuint32_t ERR11:1;
                vuint32_t ERR10:1;
                vuint32_t ERR09:1;
                vuint32_t ERR08:1;
                vuint32_t ERR07:1;
                vuint32_t ERR06:1;
                vuint32_t ERR05:1;
                vuint32_t ERR04:1;
                vuint32_t ERR03:1;
                vuint32_t ERR02:1;
                vuint32_t ERR01:1;
                vuint32_t ERR00:1;
            } B;
        } ERL;
        
        union {                  /* hardware request status high */
            vuint32_t R;
            struct {
                vuint32_t HRS63:1;
                vuint32_t HRS62:1;
                vuint32_t HRS61:1;
                vuint32_t HRS60:1;
                vuint32_t HRS59:1;
                vuint32_t HRS58:1;
                vuint32_t HRS57:1;
                vuint32_t HRS56:1;
                vuint32_t HRS55:1;
                vuint32_t HRS54:1;
                vuint32_t HRS53:1;
                vuint32_t HRS52:1;
                vuint32_t HRS51:1;
                vuint32_t HRS50:1;
                vuint32_t HRS49:1;
                vuint32_t HRS48:1;
                vuint32_t HRS47:1;
                vuint32_t HRS46:1;
                vuint32_t HRS45:1;
                vuint32_t HRS44:1;
                vuint32_t HRS43:1;
                vuint32_t HRS42:1;
                vuint32_t HRS41:1;
                vuint32_t HRS40:1;
                vuint32_t HRS39:1;
                vuint32_t HRS38:1;
                vuint32_t HRS37:1;
                vuint32_t HRS36:1;
                vuint32_t HRS35:1;
                vuint32_t HRS34:1;
                vuint32_t HRS33:1;
                vuint32_t HRS32:1;
            } B;
        } HRSH;
        
        union {                  /* hardware request status low */
            vuint32_t R;
            struct {
                vuint32_t HRS31:1;
                vuint32_t HRS30:1;
                vuint32_t HRS29:1;
                vuint32_t HRS28:1;
                vuint32_t HRS27:1;
                vuint32_t HRS26:1;
                vuint32_t HRS25:1;
                vuint32_t HRS24:1;
                vuint32_t HRS23:1;
                vuint32_t HRS22:1;
                vuint32_t HRS21:1;
                vuint32_t HRS20:1;
                vuint32_t HRS19:1;
                vuint32_t HRS18:1;
                vuint32_t HRS17:1;
                vuint32_t HRS16:1;
                vuint32_t HRS15:1;
                vuint32_t HRS14:1;
                vuint32_t HRS13:1;
                vuint32_t HRS12:1;
                vuint32_t HRS11:1;
                vuint32_t HRS10:1;
                vuint32_t HRS09:1;
                vuint32_t HRS08:1;
                vuint32_t HRS07:1;
                vuint32_t HRS06:1;
                vuint32_t HRS05:1;
                vuint32_t HRS04:1;
                vuint32_t HRS03:1;
                vuint32_t HRS02:1;
                vuint32_t HRS01:1;
                vuint32_t HRS00:1;
            } B;
        } HRSL;
        
        union {                  /* Global Write Register High */
            vuint32_t R;
            struct {
                vuint32_t GWEN63:1;
                vuint32_t GWEN62:1;
                vuint32_t GWEN61:1;
                vuint32_t GWEN60:1;
                vuint32_t GWEN59:1;
                vuint32_t GWEN58:1;
                vuint32_t GWEN57:1;
                vuint32_t GWEN56:1;
                vuint32_t GWEN55:1;
                vuint32_t GWEN54:1;
                vuint32_t GWEN53:1;
                vuint32_t GWEN52:1;
                vuint32_t GWEN51:1;
                vuint32_t GWEN50:1;
                vuint32_t GWEN49:1;
                vuint32_t GWEN48:1;
                vuint32_t GWEN47:1;
                vuint32_t GWEN46:1;
                vuint32_t GWEN45:1;
                vuint32_t GWEN44:1;
                vuint32_t GWEN43:1;
                vuint32_t GWEN42:1;
                vuint32_t GWEN41:1;
                vuint32_t GWEN40:1;
                vuint32_t GWEN39:1;
                vuint32_t GWEN38:1;
                vuint32_t GWEN37:1;
                vuint32_t GWEN36:1;
                vuint32_t GWEN35:1;
                vuint32_t GWEN34:1;
                vuint32_t GWEN33:1;
                vuint32_t GWEN32:1;
            } B;
        } GWRH;
        
        union {                  /* hardware request status low */
            vuint32_t R;
            struct {
                vuint32_t GWEN31:1;
                vuint32_t GWEN30:1;
                vuint32_t GWEN29:1;
                vuint32_t GWEN28:1;
                vuint32_t GWEN27:1;
                vuint32_t GWEN26:1;
                vuint32_t GWEN25:1;
                vuint32_t GWEN24:1;
                vuint32_t GWEN23:1;
                vuint32_t GWEN22:1;
                vuint32_t GWEN21:1;
                vuint32_t GWEN20:1;
                vuint32_t GWEN19:1;
                vuint32_t GWEN18:1;
                vuint32_t GWEN17:1;
                vuint32_t GWEN16:1;
                vuint32_t GWEN15:1;
                vuint32_t GWEN14:1;
                vuint32_t GWEN13:1;
                vuint32_t GWEN12:1;
                vuint32_t GWEN11:1;
                vuint32_t GWEN10:1;
                vuint32_t GWEN09:1;
                vuint32_t GWEN08:1;
                vuint32_t GWEN07:1;
                vuint32_t GWEN06:1;
                vuint32_t GWEN05:1;
                vuint32_t GWEN04:1;
                vuint32_t GWEN03:1;
                vuint32_t GWEN02:1;
                vuint32_t GWEN01:1;
                vuint32_t GWEN00:1;
            } B;
        } GWRL;
        
        uint32_t eDMA_reserved0040[48];  /* 0x0040-0x00FF */
        
        union {              /* Channel n Priority */
            vuint8_t R;
            struct {
                vuint8_t ECP:1;
                vuint8_t DPA:1;
                vuint8_t GRPPRI:2;
                vuint8_t CHPRI:4;
            } B;
        } CPR[64];
        
        uint32_t eDMA_reserved0140[944];  /* 0x0140-0x0FFF */

/****************************************************************************/
/*       DMA2 Transfer Control Descriptor                                   */
/****************************************************************************/

        struct tcd_t {          /* for "standard" format TCDs (when EDMA.TCD[x].CITER.E_LINK==BITER.E_LINK=0 && EDMA.EMLM=0 ) */
            /* 00 */
            vuint32_t SADDR;    /* Source Address */
            
            /* 04 */            /* Transfer Attributes */
            vuint16_t SMOD:5;   /* Source Address Modulo */
            vuint16_t SSIZE:3;  /* Source Data Transfer Size */
            vuint16_t DMOD:5;   /* Destination Address Modulo */
            vuint16_t DSIZE:3;  /* Destination Data Transfer Size */
            
            /* 06 */
            vint16_t SOFF;      /* Signed Source Address Offset */
            
            /* 08 */
            vuint32_t NBYTES;   /* Inner ("Minor") Byte Transfer Count */
            
            /* 0C */
            vint32_t SLAST;     /* Last Source Address Adjustment */
            
            /* 10 */
            vuint32_t DADDR;    /* Destination Address */
            
            /* 14 */
            vuint16_t CITERE_LINK:1;     /* Enable Channel-to-Channel        */
                                         /* Linking on Minor Loop Completion */
            vuint16_t CITER:15;          /* Current Major Iteration Count    */
            
            /* 16 */
            vint16_t DOFF;      /* Signed Destination Address Offset */
            
            /* 18 */
            vint32_t DLAST_SGA; /* Last Destination Address Adjustment, or  */
                                /* Scatter/Gather Address (if E_SG = 1)     */
            
            /* 1C */
            vuint16_t BITERE_LINK:1;    /* Enable Channel-to-Channel           */
                                        /* Linking on Minor Loop Complete      */
            vuint16_t BITER:15;         /* Starting ("Major") Iteration Count */
            
            /* 1E */                    /* Channel Control/Status */
            vuint16_t BWC:2;            /* Bandwidth Control */
            vuint16_t MAJORLINKCH:6;    /* Link Channel Number */
            vuint16_t DONE:1;           /* Channel Done */
#ifdef COMP_TO_MPC5634M_V1_6_ON
			vuint16_t ACT:1;
#else
			vuint16_t ACTIVE:1;
#endif
            vuint16_t MAJORE_LINK:1;    /* Enable Channel-to-Channel Link */
            vuint16_t E_SG:1;           /* Enable Scatter/Gather Descriptor */
            vuint16_t D_REQ:1;          /* Disable IPD_REQ When Done */
            vuint16_t INT_HALF:1;       /* Interrupt on CITER = (BITER >> 1) */
            vuint16_t INT_MAJ:1;        /* Interrupt on Major Loop Completion */
            vuint16_t START:1;          /* Explicit Channel Start */
        } TCD[64];                      /* Transfer_Control_Descriptor */
    
    };

    struct EDMA_TCD_alt1_tag {  /*for alternate format TCDs (when EDMA.TCD[x].CITER.E_LINK==BITER.E_LINK=1 ) */
    
        struct tcd_alt1_t {
            /* 00 */
            vuint32_t SADDR;    /* Source Address */
            
            /* 04 */            /* Transfer Attributes */
            vuint16_t SMOD:5;   /* Source Address Modulo */
            vuint16_t SSIZE:3;  /* Source Data Transfer Size */
            vuint16_t DMOD:5;   /* Destination Address Modulo */
            vuint16_t DSIZE:3;  /* Destination Data Transfer Size */
            
            /* 06 */
            vint16_t SOFF;      /* Signed Source Address Offset */
            
            /* 08 */
            vuint32_t NBYTES;   /* Inner ("Minor") Byte Transfer Count */
            
            /* 0C */
            vint32_t SLAST;     /* Last Source Address Adjustment */
            
            /* 10 */
            vuint32_t DADDR;    /* Destination Address */
            
            /* 14 */
            vuint16_t CITERE_LINK:1;     /* Enable Channel-to-Channel        */
                                         /* Linking on Minor Loop Completion */
            vuint16_t CITERLINKCH:6;     /* Link Channel Number              */
            vuint16_t CITER:9;           /* Current Major Iteration Count    */
            
            /* 16 */
            vint16_t DOFF;      /* Signed Destination Address Offset */
            
            /* 18 */
            vint32_t DLAST_SGA; /* Last Destination Address Adjustment, or  */
                                /* Scatter/Gather Address (if E_SG = 1)     */
            
            /* 1C */
            vuint16_t BITERE_LINK:1;    /* Enable Channel-to-Channel           */
                                        /* Linking on Minor Loop Complete      */
            vuint16_t BITERLINKCH:6;    /* Link Channel Number                 */
            vuint16_t BITER:9;          /* Starting ("Major") Iteration Count  */
            
            /* 1E */                    /* Channel Control/Status */
            vuint16_t BWC:2;            /* Bandwidth Control */
            vuint16_t MAJORLINKCH:6;    /* Link Channel Number */
            vuint16_t DONE:1;           /* Channel Done */
#ifdef COMP_TO_MPC5634M_V1_6_ON
			vuint16_t ACT:1;
#else
			vuint16_t ACTIVE:1;
#endif
            vuint16_t MAJORE_LINK:1;    /* Enable Channel-to-Channel Link */
            vuint16_t E_SG:1;           /* Enable Scatter/Gather Descriptor */
            vuint16_t D_REQ:1;          /* Disable IPD_REQ When Done */
            vuint16_t INT_HALF:1;       /* Interrupt on CITER = (BITER >> 1) */
            vuint16_t INT_MAJ:1;        /* Interrupt on Major Loop Completion */
            vuint16_t START:1;          /* Explicit Channel Start */
        } TCD[64];              /* transfer_control_descriptor */
    };


/* ----------------------------------------------------------------------------
   -- INTC Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INTC_Peripheral_Access_Layer INTC Peripheral Access Layer
 * @{
 */


/** INTC - Size of Registers Arrays */
#define INTC_SSCIR_COUNT                         8u
#define INTC_PSR_COUNT                           512u

/** INTC - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< INTC Module Configuration Register, offset: 0x0 */
       uint8_t RESERVED_0[4];
  __IO uint32_t CPR0;                              /**< INTC Current Priority Register for Processor n, offset: 0x8 */
  __IO uint32_t CPR1;                              /**< INTC Current Priority Register for Processor n, offset: 0xC */
  __IO uint32_t IACKR0;                            /**< INTC Interrupt Acknowledge Register for Processor n, offset: 0x10 */
  __IO uint32_t IACKR1;                            /**< INTC Interrupt Acknowledge Register for Processor n, offset: 0x14 */
  __O  uint32_t EOIR0;                             /**< INTC End Of Interrupt Register for Processor n, offset: 0x18 */
  __O  uint32_t EOIR1;                             /**< INTC End Of Interrupt Register for Processor n, offset: 0x1C */
  __IO uint8_t SSCIR[INTC_SSCIR_COUNT];            /**< INTC Software Set/Clear Interrupt Register, array offset: 0x20, array step: 0x1 */
       uint8_t RESERVED_1[24];
  __IO uint8_t PSR[INTC_PSR_COUNT];                /**< INTC Priority Select Register, array offset: 0x40, array step: 0x1 */
} INTC_Type, *INTC_MemMapPtr;

 /** Number of instances of the INTC module. */
#define INTC_INSTANCE_COUNT                      (1u)


/* INTC - Peripheral instance base addresses */
/** Peripheral INTC base address */
#define INTC_BASE                                (0xFFF48000u)
/** Peripheral INTC base pointer */
#define INTC                                     ((INTC_Type *)INTC_BASE)
/** Array initializer of INTC peripheral base addresses */
#define INTC_BASE_ADDRS                          { INTC_BASE }
/** Array initializer of INTC peripheral base pointers */
#define INTC_BASE_PTRS                           { INTC }

/* ----------------------------------------------------------------------------
   -- INTC Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup INTC_Register_Masks INTC Register Masks
 * @{
 */

/* MCR Bit Fields */
#define INTC_MCR_HVEN_PRC0_MASK                  0x1u
#define INTC_MCR_HVEN_PRC0_SHIFT                 0u
#define INTC_MCR_HVEN_PRC0_WIDTH                 1u
#define INTC_MCR_HVEN_PRC0(x)                    (((uint32_t)(((uint32_t)(x))<<INTC_MCR_HVEN_PRC0_SHIFT))&INTC_MCR_HVEN_PRC0_MASK)
#define INTC_MCR_VTES_PRC0_MASK                  0x20u
#define INTC_MCR_VTES_PRC0_SHIFT                 5u
#define INTC_MCR_VTES_PRC0_WIDTH                 1u
#define INTC_MCR_VTES_PRC0(x)                    (((uint32_t)(((uint32_t)(x))<<INTC_MCR_VTES_PRC0_SHIFT))&INTC_MCR_VTES_PRC0_MASK)
#define INTC_MCR_HVEN_PRC1_MASK                  0x100u
#define INTC_MCR_HVEN_PRC1_SHIFT                 8u
#define INTC_MCR_HVEN_PRC1_WIDTH                 1u
#define INTC_MCR_HVEN_PRC1(x)                    (((uint32_t)(((uint32_t)(x))<<INTC_MCR_HVEN_PRC1_SHIFT))&INTC_MCR_HVEN_PRC1_MASK)
#define INTC_MCR_VTES_PRC1_MASK                  0x2000u
#define INTC_MCR_VTES_PRC1_SHIFT                 13u
#define INTC_MCR_VTES_PRC1_WIDTH                 1u
#define INTC_MCR_VTES_PRC1(x)                    (((uint32_t)(((uint32_t)(x))<<INTC_MCR_VTES_PRC1_SHIFT))&INTC_MCR_VTES_PRC1_MASK)
/* CPR0 Bit Fields */
#define INTC_CPR0_PRI_MASK                       0xFu
#define INTC_CPR0_PRI_SHIFT                      0u
#define INTC_CPR0_PRI_WIDTH                      4u
#define INTC_CPR0_PRI(x)                         (((uint32_t)(((uint32_t)(x))<<INTC_CPR0_PRI_SHIFT))&INTC_CPR0_PRI_MASK)
/* CPR1 Bit Fields */
#define INTC_CPR1_PRI_MASK                       0xFu
#define INTC_CPR1_PRI_SHIFT                      0u
#define INTC_CPR1_PRI_WIDTH                      4u
#define INTC_CPR1_PRI(x)                         (((uint32_t)(((uint32_t)(x))<<INTC_CPR1_PRI_SHIFT))&INTC_CPR1_PRI_MASK)
/* IACKR0 Bit Fields */
#define INTC_IACKR0_INTVEC_PRCn_MASK             0x7FCu
#define INTC_IACKR0_INTVEC_PRCn_SHIFT            2u
#define INTC_IACKR0_INTVEC_PRCn_WIDTH            9u
#define INTC_IACKR0_INTVEC_PRCn(x)               (((uint32_t)(((uint32_t)(x))<<INTC_IACKR0_INTVEC_PRCn_SHIFT))&INTC_IACKR0_INTVEC_PRCn_MASK)
#define INTC_IACKR0_VTBA_PRCn_MASK               0xFFFFF800u
#define INTC_IACKR0_VTBA_PRCn_SHIFT              11u
#define INTC_IACKR0_VTBA_PRCn_WIDTH              21u
#define INTC_IACKR0_VTBA_PRCn(x)                 (((uint32_t)(((uint32_t)(x))<<INTC_IACKR0_VTBA_PRCn_SHIFT))&INTC_IACKR0_VTBA_PRCn_MASK)
/* IACKR1 Bit Fields */
#define INTC_IACKR1_INTVEC_PRCn_MASK             0x7FCu
#define INTC_IACKR1_INTVEC_PRCn_SHIFT            2u
#define INTC_IACKR1_INTVEC_PRCn_WIDTH            9u
#define INTC_IACKR1_INTVEC_PRCn(x)               (((uint32_t)(((uint32_t)(x))<<INTC_IACKR1_INTVEC_PRCn_SHIFT))&INTC_IACKR1_INTVEC_PRCn_MASK)
#define INTC_IACKR1_VTBA_PRCn_MASK               0xFFFFF800u
#define INTC_IACKR1_VTBA_PRCn_SHIFT              11u
#define INTC_IACKR1_VTBA_PRCn_WIDTH              21u
#define INTC_IACKR1_VTBA_PRCn(x)                 (((uint32_t)(((uint32_t)(x))<<INTC_IACKR1_VTBA_PRCn_SHIFT))&INTC_IACKR1_VTBA_PRCn_MASK)
/* EOIR0 Bit Fields */
#define INTC_EOIR0_EOI_PRCn_MASK                 0xFFFFFFFFu
#define INTC_EOIR0_EOI_PRCn_SHIFT                0u
#define INTC_EOIR0_EOI_PRCn_WIDTH                32u
#define INTC_EOIR0_EOI_PRCn(x)                   (((uint32_t)(((uint32_t)(x))<<INTC_EOIR0_EOI_PRCn_SHIFT))&INTC_EOIR0_EOI_PRCn_MASK)
/* EOIR1 Bit Fields */
#define INTC_EOIR1_EOI_PRCn_MASK                 0xFFFFFFFFu
#define INTC_EOIR1_EOI_PRCn_SHIFT                0u
#define INTC_EOIR1_EOI_PRCn_WIDTH                32u
#define INTC_EOIR1_EOI_PRCn(x)                   (((uint32_t)(((uint32_t)(x))<<INTC_EOIR1_EOI_PRCn_SHIFT))&INTC_EOIR1_EOI_PRCn_MASK)
/* SSCIR Bit Fields */
#define INTC_SSCIR_CLR_MASK                      0x1u
#define INTC_SSCIR_CLR_SHIFT                     0u
#define INTC_SSCIR_CLR_WIDTH                     1u
#define INTC_SSCIR_CLR(x)                        (((uint8_t)(((uint8_t)(x))<<INTC_SSCIR_CLR_SHIFT))&INTC_SSCIR_CLR_MASK)
#define INTC_SSCIR_SET_MASK                      0x2u
#define INTC_SSCIR_SET_SHIFT                     1u
#define INTC_SSCIR_SET_WIDTH                     1u
#define INTC_SSCIR_SET(x)                        (((uint8_t)(((uint8_t)(x))<<INTC_SSCIR_SET_SHIFT))&INTC_SSCIR_SET_MASK)
/* PSR Bit Fields */
#define INTC_PSR_PRIN_MASK                       0xFu
#define INTC_PSR_PRIN_SHIFT                      0u
#define INTC_PSR_PRIN_WIDTH                      4u
#define INTC_PSR_PRIN(x)                         (((uint8_t)(((uint8_t)(x))<<INTC_PSR_PRIN_SHIFT))&INTC_PSR_PRIN_MASK)
#define INTC_PSR_PRC_SELn_MASK                   0xC0u
#define INTC_PSR_PRC_SELn_SHIFT                  6u
#define INTC_PSR_PRC_SELn_WIDTH                  2u
#define INTC_PSR_PRC_SELn(x)                     (((uint8_t)(((uint8_t)(x))<<INTC_PSR_PRC_SELn_SHIFT))&INTC_PSR_PRC_SELn_MASK)

/*!
 * @}
 */ /* end of group INTC_Register_Masks */


/*!
 * @}
 */ /* end of group INTC_Peripheral_Access_Layer */

/****************************************************************************/
/*                          MODULE : EQADC                                  */
/****************************************************************************/

    struct EQADC_tag {
    
        union {                  /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t:24;
                vuint32_t ICEA0:1;
                vuint32_t ICEA1:1;
                vuint32_t:1;
                vuint32_t:2;
                vuint32_t:1;
                vuint32_t DBG:2;
            } B;
        } MCR;
        
        uint32_t eQADC_reserved0004;  /* 0x0004-0x0007 */
        
        uint32_t eQADC_reserved0008;  /* 0x0008-0x000B */
        
        union {                /* External Trigger Digital Filter Register */
            vuint32_t R;
            struct {
                vuint32_t:28;
                vuint32_t DFL:4;
            } B;
        } ETDFR;
        
        union {              /* CFIFO Push Registers */
            vuint32_t R;
            struct {
                vuint32_t CFPUSH:32;
            } B;
        } CFPR[6];
        
        uint32_t eQADC_reserved0028[2];  /* 0x0028-0x002F */
        
        union {              /* Result FIFO Pop Registers */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t RFPOP:16;
            } B;
        } RFPR[6];
        
        uint32_t eQADC_reserved0048[2];  /* 0x0048-0x004F */
        
        union {              /* CFIFO Control Registers */
            vuint16_t R;
            struct {
                vuint16_t:3;
                vuint16_t CFEEE:1; /* ONLY valid for CFCR[0] */
                vuint16_t STRME:1; /* ONLY valid for CFCR[0] */
                vuint16_t SSE:1;
                vuint16_t CFINV:1;
                vuint16_t:1;
                vuint16_t MODE:4;
                vuint16_t AMODE:4; /* ONLY valid for CFCR[0] */
            } B;
        } CFCR[6];
        
        uint32_t eQADC_reserved005C;  /* 0x005C-0x005F */
        
        union {              /* Interrupt and DMA Control Registers */
            vuint16_t R;
            struct {
                vuint16_t NCIE:1;
                vuint16_t TORIE:1;
                vuint16_t PIE:1;
                vuint16_t EOQIE:1;
                vuint16_t CFUIE:1;
                vuint16_t:1;
                vuint16_t CFFE:1;
                vuint16_t CFFS:1;
                vuint16_t:4;
                vuint16_t RFOIE:1;
                vuint16_t:1;
                vuint16_t RFDE:1;
                vuint16_t RFDS:1;
            } B;
        } IDCR[6];
        
        uint32_t eQADC_reserved006C;  /* 0x006C-0x006F */
        
        union {              /* FIFO and Interrupt Status Registers */
            vuint32_t R;
            struct {
                vuint32_t NCF:1;
                vuint32_t TORF:1;
                vuint32_t PF:1;
                vuint32_t EOQF:1;
                vuint32_t CFUF:1;
                vuint32_t SSS:1;
                vuint32_t CFFF:1;
                vuint32_t:5;
                vuint32_t RFOF:1;
                vuint32_t:1;
                vuint32_t RFDF:1;
                vuint32_t:1;
                vuint32_t CFCTR:4;
                vuint32_t TNXTPTR:4;
                vuint32_t RFCTR:4;
                vuint32_t POPNXTPTR:4;
            } B;
        } FISR[6];
        
        uint32_t eQADC_reserved0088[2];  /* 0x0088-0x008F */
        
        union {             /* CFIFO Transfer Counter Registers */
            vuint16_t R;
            struct {
                vuint16_t:5;
                vuint16_t TCCF:11; /* Legacy naming - refer to TC_CF in Reference Manual */
            } B;
        } CFTCR[6];
        
        uint32_t eQADC_reserved009C[1];  /* 0x009F */
        
        union {               /* CFIFO Status Register 0 */
            vuint32_t R;
            struct {
                vuint32_t CFS0:2; /* Legacy naming - refer to CFS0_TCB0 in Reference Manual */
                vuint32_t CFS1:2; /* Legacy naming - refer to CFS1_TCB0 in Reference Manual */
                vuint32_t CFS2:2; /* Legacy naming - refer to CFS2_TCB0 in Reference Manual */
                vuint32_t CFS3:2; /* Legacy naming - refer to CFS3_TCB0 in Reference Manual */
                vuint32_t CFS4:2; /* Legacy naming - refer to CFS4_TCB0 in Reference Manual */
                vuint32_t CFS5:2; /* Legacy naming - refer to CFS5_TCB0 in Reference Manual */
                vuint32_t:5;
                vuint32_t LCFTCB0:4;
                vuint32_t TC_LCFTCB0:11;
            } B;
        } CFSSR0;
        
        union {               /* CFIFO Status Register 1 */
            vuint32_t R;
            struct {
                vuint32_t CFS0:2; /* Legacy naming - refer to CFS0_TCB1 in Reference Manual */
                vuint32_t CFS1:2; /* Legacy naming - refer to CFS1_TCB1 in Reference Manual */
                vuint32_t CFS2:2; /* Legacy naming - refer to CFS2_TCB1 in Reference Manual */
                vuint32_t CFS3:2; /* Legacy naming - refer to CFS3_TCB1 in Reference Manual */
                vuint32_t CFS4:2; /* Legacy naming - refer to CFS4_TCB1 in Reference Manual */
                vuint32_t CFS5:2; /* Legacy naming - refer to CFS5_TCB1 in Reference Manual */
                vuint32_t:5;
                vuint32_t LCFTCB1:4;
                vuint32_t TC_LCFTCB1:11;
            } B;
        } CFSSR1;
        
        union {               /* CFIFO Status Register 2 */
            vuint32_t R;
            struct {
                vuint32_t CFS0:2; /* Legacy naming - refer to CFS0_TSSI in Reference Manual */
                vuint32_t CFS1:2; /* Legacy naming - refer to CFS1_TSSI in Reference Manual */
                vuint32_t CFS2:2; /* Legacy naming - refer to CFS2_TSSI in Reference Manual */
                vuint32_t CFS3:2; /* Legacy naming - refer to CFS3_TSSI in Reference Manual */
                vuint32_t CFS4:2; /* Legacy naming - refer to CFS4_TSSI in Reference Manual */
                vuint32_t CFS5:2; /* Legacy naming - refer to CFS5_TSSI in Reference Manual */
                vuint32_t:4;
                vuint32_t ECBNI:1;
                vuint32_t LCFTSSI:4;
                vuint32_t TC_LCFTSSI:11;
            } B;
        } CFSSR2;
        
        union {                 /* CFIFO Status Register */
            vuint32_t R;
            struct {
                vuint32_t CFS0:2;
                vuint32_t CFS1:2;
                vuint32_t CFS2:2;
                vuint32_t CFS3:2;
                vuint32_t CFS4:2;
                vuint32_t CFS5:2;
                vuint32_t:20;
            } B;
        } CFSR;
        
        uint32_t eQADC_reserved00B0;  /* 0x00B0-0x00B3 */
        uint32_t eQADC_reserved00B4;  /* 0x00B4-0x00B7 */
        uint32_t eQADC_reserved00B8;  /* 0x00B8-0x00BB */

        uint32_t eQADC_reserved00BC[5];  /* 0x00BC-0x00CF */
        
        union {                 /* EQADC Red Line Client Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t REDBS2:4;
                vuint32_t SRV2:4;
                vuint32_t REDBS1:4;
                vuint32_t SRV1:4;
            } B;
        } REDLCCR;

        uint32_t eQADC_reserved00D4[11];  /* 0x00D4-0x00FF */
        
        struct {
            union {
                vuint32_t R;
                struct {
                    vuint32_t CFIFO_DATA:32;
                } B;
            } R[4];
            
            union {             /* NOTE: ER registers valid only for CF[0]. */
                vuint32_t R;
                struct {
                    vuint32_t CFIFO_EDATA:32;
                } B;
            } ER[4];

            uint32_t eQADC_cf_reserved020[8];  /* CFIFO offset 0x020-0x03F */
            
        } CF[6];
        
        uint32_t eQADC_reserved0280[32];  /* 0x0280-0x02FF */
        
        struct {
            union {
                vuint32_t R;
                struct {
                    vuint32_t RFIFO_DATA:32;
                } B;
            } R[4];
            
            uint32_t eQADC_rf_reserved010[12];  /* RFIFO offset 0x010-0x03F */
            
        } RF[6];
    
        uint32_t eQADC_reserved0480[3808];  /* 0x0480-0x3FFF */
    };

/****************************************************************************/
/*                          MODULE : Decimation Filter                      */
/****************************************************************************/

    struct DECFIL_tag {
    
        union {                  /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t MDIS:1;
                vuint32_t FREN:1;
                vuint32_t :1;
                vuint32_t FRZ:1;
                vuint32_t SRES:1;
                vuint32_t CASCD:2;
                vuint32_t IDEN:1;
                vuint32_t ODEN:1;
                vuint32_t ERREN:1;
                vuint32_t :1;
                vuint32_t FTYPE:2;
                vuint32_t :1;
                vuint32_t SCAL:2;
                vuint32_t IDIS:1;
                vuint32_t SAT:1;
#ifdef COMP_TO_MPC5634M_V1_6_ON
				vuint32_t ISEL:2;
#else
                vuint32_t IO_SEL:2;
#endif

                vuint32_t DEC_RATE:4;
                vuint32_t SDIE:1;
                vuint32_t DSEL:1;
                vuint32_t IBIE:1;
                vuint32_t OBIE:1;
                vuint32_t EDME:1;
                vuint32_t TORE:1;
                vuint32_t TMODE:2;
            } B;
        } MCR;
        
        union {                  /* Module Status Register */
            vuint32_t R;
            struct {
                vuint32_t BSY:1;
                vuint32_t:1;
                vuint32_t DEC_COUNTER:4;
                vuint32_t IDFC:1;
                vuint32_t ODFC:1;
                vuint32_t:1;
                vuint32_t IBIC:1;
                vuint32_t OBIC:1;
                vuint32_t:1;
                vuint32_t DIVRC:1;
                vuint32_t OVFC:1;
                vuint32_t OVRC:1;
                vuint32_t IVRC:1;
                vuint32_t:6;
                vuint32_t IDF:1;
                vuint32_t ODF:1;
                vuint32_t:1;
                vuint32_t IBIF:1;
                vuint32_t OBIF:1;
                vuint32_t:1;
                vuint32_t DIVR:1;
                vuint32_t OVF:1;
                vuint32_t OVR:1;
                vuint32_t IVR:1;
            } B;
#ifdef COMP_TO_MPC5634M_V1_6_ON
        } MSR;
#else
		} SR;
#endif
        
#ifdef COMP_TO_MPC5634M_V1_6_ON
	uint32_t DFILT_reserved0008[2];  /* 0x0008-0x000F */
#else
        union {                  /* Module Extended Config Register */
            vuint32_t R;
            struct {
                vuint32_t SDMAE:1;
                vuint32_t SSIG:1;
                vuint32_t SSAT:1;
                vuint32_t SCSAT:1;
                vuint32_t:10;
                vuint32_t SRQ:1;
                vuint32_t SZR0:1;
                vuint32_t SISEL:1;
                vuint32_t:1;
                vuint32_t SZROSEL:2;
                vuint32_t:2;
                vuint32_t SHLTSEL:2;
                vuint32_t:1;
                vuint32_t SRQSEL:3;
                vuint32_t:2;
                vuint32_t SENSEL:2;
            } B;
        } MXCR;
        
        union {                  /* Module Extended Status Register */
            vuint32_t R;
            struct {
                vuint32_t:7;
                vuint32_t SDFC:1;
                vuint32_t:2;
                vuint32_t SSEC:1;
                vuint32_t SCEC:1;
                vuint32_t:1;
                vuint32_t SSOVFC:1;
                vuint32_t SCOVFC:1;
                vuint32_t SVRC:1;
                vuint32_t:7;
                vuint32_t SDF:1;
                vuint32_t:2;
                vuint32_t SSE:1;
                vuint32_t SCE:1;
                vuint32_t:1;
                vuint32_t SSOVF:1;
                vuint32_t SCOVF:1;
                vuint32_t SVR:1;
            } B;
        } MXSR;
#endif
        
        union {                  /* Interface Input Buffer Register */
            vuint32_t R;
            struct {
                vuint32_t:3;
                vuint32_t OSEL:1;
                vuint32_t INTAG:4;
                vuint32_t:6;
                vuint32_t PREFILL:1;
                vuint32_t FLUSH:1;
                vuint32_t INPBUF:16;
            } B;
        } IB;
        
        union {                  /* Interface Output Buffer Register */
            vuint32_t R;
            struct {
                vuint32_t:11;
                vuint32_t OSEL:1;
                vuint32_t OUTTAG:4;
                vuint32_t OUTBUF:16;
            } B;
        } OB;
        
        uint32_t DFILT_reserved0018[2];  /* 0x0018-0x001F */
        
        union {                  /* Coefficient n Register */
            vint32_t R;
            struct {
                vint32_t:8;
                vint32_t COEF:24;
            } B;
        } COEF[9];
        
        uint32_t DFILT_reserved0044[13];  /* 0x0044-0x0077 */
        
        union {                  /* TAP n Register */
            vint32_t R;
            struct {
                vint32_t:8;
                vint32_t TAP:24;
            } B;
        } TAP[8];
        
        uint32_t DFILT_reserved0098[14]; /* 0x0098-0x00CF */
        
        union {                  /* EDID Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t SAMP_DATA:16;
            } B;
        } EDID;
        
        uint32_t DFILT_reserved00D4[3]; /* 0x00D4-0x00DF */
        
        union {                  /* FINTVAL Register */
            vuint32_t R;
            struct {
                vuint32_t SUM_VALUE:32;
            } B;
        } FINTVAL;
        
        union {                  /* FINTCNT Register */
            vuint32_t R;
            struct {
                vuint32_t COUNT:32;
            } B;
        } FINTCNT;
        
        union {                  /* CINTVAL Register */
            vuint32_t R;
            struct {
                vuint32_t SUM_VALUE:32;
            } B;
        } CINTVAL;
        
        union {                  /* CINTCNT Register */
            vuint32_t R;
            struct {
                vuint32_t COUNT:32;
            } B;
        } CINTCNT;
        
        
    
    };

/****************************************************************************/
/*                          MODULE : DSPI                                   */
/****************************************************************************/

    struct DSPI_tag {
    
        union {                  /* Module Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t MSTR:1;
                vuint32_t CONT_SCKE:1;
                vuint32_t DCONF:2;
                vuint32_t FRZ:1;
                vuint32_t MTFE:1;
                vuint32_t PCSSE:1;
                vuint32_t ROOE:1;
                vuint32_t PCSIS7:1;
                vuint32_t PCSIS6:1;
                vuint32_t PCSIS5:1;
                vuint32_t PCSIS4:1;
                vuint32_t PCSIS3:1;
                vuint32_t PCSIS2:1;
                vuint32_t PCSIS1:1;
                vuint32_t PCSIS0:1;
                vuint32_t DOZE:1;
                vuint32_t MDIS:1;
                vuint32_t DIS_TXF:1;
                vuint32_t DIS_RXF:1;
                vuint32_t CLR_TXF:1;
                vuint32_t CLR_RXF:1;
                vuint32_t SMPL_PT:2;
                vuint32_t:6;
                vuint32_t PES:1;
                vuint32_t HALT:1;
            } B;
        } MCR;
        
        uint32_t DSPI_reserved0004;  /* 0x0004-0x0007 */
        
        union {              /* Transfer Count Register */
            vuint32_t R;
            struct {
                vuint32_t TCNT:16;
                vuint32_t:16;
            } B;
        } TCR;
        
        union {              /* Clock and Transfer Attributes Registers */
            vuint32_t R;
            struct {
                vuint32_t DBR:1;
                vuint32_t FMSZ:4;
                vuint32_t CPOL:1;
                vuint32_t CPHA:1;
                vuint32_t LSBFE:1;
                vuint32_t PCSSCK:2;
                vuint32_t PASC:2;
                vuint32_t PDT:2;
                vuint32_t PBR:2;
                vuint32_t CSSCK:4;
                vuint32_t ASC:4;
                vuint32_t DT:4;
                vuint32_t BR:4;
            } B;
        } CTAR[8];
        
        union {                   /* Status Register */
            vuint32_t R;
            struct {
                vuint32_t TCF:1;
                vuint32_t TXRXS:1;
                vuint32_t:1;
                vuint32_t EOQF:1;
                vuint32_t TFUF:1;
                vuint32_t:1;
                vuint32_t TFFF:1;
                vuint32_t:2;
                vuint32_t DPEF:1;
                vuint32_t SPEF:1;
                vuint32_t DDIF:1;
                vuint32_t RFOF:1;
                vuint32_t:1;
                vuint32_t RFDF:1;
                vuint32_t:1;
                vuint32_t TXCTR:4;
                vuint32_t TXNXTPTR:4;
                vuint32_t RXCTR:4;
                vuint32_t POPNXTPTR:4;
            } B;
        } SR;
        
        union {                 /* DMA/Interrupt Request Select and Enable Register */
            vuint32_t R;
            struct {
                vuint32_t TCFRE:1;
                vuint32_t:2;
                vuint32_t EOQFRE:1;
                vuint32_t TFUFRE:1;
                vuint32_t:1;
                vuint32_t TFFFRE:1;
                vuint32_t TFFFDIRS:1;
                vuint32_t:1;
                vuint32_t DPEFRE:1;
                vuint32_t SPEFRE:1;
                vuint32_t DDIFRE:1;
                vuint32_t RFOFRE:1;
                vuint32_t:1;
                vuint32_t RFDFRE:1;
                vuint32_t RFDFDIRS:1;
                vuint32_t:16;
            } B;
        } RSER;
        
        union {                /* PUSH TX FIFO Register */
            vuint32_t R;
            struct {
                vuint32_t CONT:1;
                vuint32_t CTAS:3;
                vuint32_t EOQ:1;
                vuint32_t CTCNT:1;
                vuint32_t PE:1;
                vuint32_t PP:1;
                vuint32_t PCS7:1;
                vuint32_t PCS6:1;
                vuint32_t PCS5:1;
                vuint32_t PCS4:1;
                vuint32_t PCS3:1;
                vuint32_t PCS2:1;
                vuint32_t PCS1:1;
                vuint32_t PCS0:1;
                vuint32_t TXDATA:16;
            } B;
        } PUSHR;
        
        union {                 /* POP RX FIFO Register */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t RXDATA:16;
            } B;
        } POPR;
        
        union {              /* Transmit FIFO Registers */
            vuint32_t R;
            struct {
                vuint32_t TXCMD:16;
                vuint32_t TXDATA:16;
            } B;
        } TXFR[4];
        
        uint32_t DSPI_reserved004C[12]; /* 0x004C-0x007B */
        
        union {              /* Transmit FIFO Registers */
            vuint32_t R;
            struct {
                vuint32_t:16;
                vuint32_t RXDATA:16;
            } B;
        } RXFR[4];
        
        uint32_t DSPI_reserved008C[12]; /* 0x008C-0x00BB */
        
        union {                /* DSI Configuration Register */
            vuint32_t R;
            struct {
                vuint32_t MTOE:1;
                vuint32_t FMSZ4:1;
                vuint32_t MTOCNT:6;
                vuint32_t:3;
                vuint32_t TSBC:1;
                vuint32_t TXSS:1;
                vuint32_t TPOL:1;
                vuint32_t TRRE:1;
                vuint32_t CID:1;
                vuint32_t DCONT:1;
                vuint32_t DSICTAS:3;
                vuint32_t:4;
                vuint32_t DPCS7:1;
                vuint32_t DPCS6:1;
                vuint32_t DPCS5:1;
                vuint32_t DPCS4:1;
                vuint32_t DPCS3:1;
                vuint32_t DPCS2:1;
                vuint32_t DPCS1:1;
                vuint32_t DPCS0:1;
            } B;
        } DSICR;
        
        union {                  /* DSI Serialization Data Register */
            vuint32_t R;
            struct {
                vuint32_t SER_DATA:32;
            } B;
        } SDR;
        
        union {                 /* DSI Alternate Serialization Data Register */
            vuint32_t R;
            struct {
                vuint32_t ASER_DATA:32;
            } B;
        } ASDR;
        
        union {                /* DSI Transmit Comparison Register */
            vuint32_t R;
            struct {
                vuint32_t COMP_DATA:32;
            } B;
        } COMPR;
        
        union {                  /* DSI deserialization Data Register */
            vuint32_t R;
            struct {
                vuint32_t DESER_DATA:32;
            } B;
        } DDR;
        
        union {
            vuint32_t R;
            struct {
                vuint32_t:3;
                vuint32_t TSBCNT:5;
                vuint32_t:6;
                vuint32_t DSE1:1;
                vuint32_t DSE0:1;
                vuint32_t:8;
                vuint32_t DPCS1_7:1;
                vuint32_t DPCS1_6:1;
                vuint32_t DPCS1_5:1;
                vuint32_t DPCS1_4:1;
                vuint32_t DPCS1_3:1;
                vuint32_t DPCS1_2:1;
                vuint32_t DPCS1_1:1;
                vuint32_t DPCS1_0:1;
            } B;
        } DSICR1;    
        uint32_t DSPI_reserved00D4[4043];  /* 0x00D4-0x3FFF */
    
    };

/* ----------------------------------------------------------------------------
   -- eSCI Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup eSCI_Peripheral_Access_Layer eSCI Peripheral Access Layer
 * @{
 */


/** eSCI - Size of Registers Arrays */

/** eSCI - Register Layout Typedef */
typedef struct {
  __IO uint16_t BRR;                               /**< Baud Rate Register, offset: 0x0 */
  __IO uint16_t CR1;                               /**< Control Register 1, offset: 0x2 */
  __IO uint16_t CR2;                               /**< Control Register 2, offset: 0x4 */
  __IO uint16_t SDR;                               /**< SCI Data Register, offset: 0x6 */
  __IO uint16_t IFSR1;                             /**< Interrupt Flag and Status Register 1, offset: 0x8 */
  __IO uint16_t IFSR2;                             /**< Interrupt Flag and Status Register 2, offset: 0xA */
  __IO uint16_t LCR1;                              /**< LIN Control Register 1, offset: 0xC */
  __IO uint16_t LCR2;                              /**< LIN Control Register 2, offset: 0xE */
  __IO uint8_t LTR;                                /**< LIN Transmit Register, offset: 0x10 */
       uint8_t RESERVED_0[3];
  __I  uint8_t LRR;                                /**< LIN Receive Register, offset: 0x14 */
       uint8_t RESERVED_1[3];
  __IO uint16_t LPR;                               /**< LIN CRC Polynomial Register, offset: 0x18 */
  __IO uint16_t CR3;                               /**< Control Register 3, offset: 0x1A */
} eSCI_Type, *eSCI_MemMapPtr;

 /** Number of instances of the eSCI module. */
#define eSCI_INSTANCE_COUNT                      (6u)


/* eSCI - Peripheral instance base addresses */
/** Peripheral eSCI_0 base address */
#define eSCI_0_BASE                              (0xFFFB0000u)
/** Peripheral eSCI_0 base pointer */
#define eSCI_0                                   ((eSCI_Type *)eSCI_0_BASE)
/** Peripheral eSCI_1 base address */
#define eSCI_1_BASE                              (0xFFFB4000u)
/** Peripheral eSCI_1 base pointer */
#define eSCI_1                                   ((eSCI_Type *)eSCI_1_BASE)
/** Peripheral eSCI_2 base address */
#define eSCI_2_BASE                              (0xFFFB8000u)
/** Peripheral eSCI_2 base pointer */
#define eSCI_2                                   ((eSCI_Type *)eSCI_2_BASE)
/** Peripheral eSCI_3 base address */
#define eSCI_3_BASE                              (0xC3FB0000u)
/** Peripheral eSCI_3 base pointer */
#define eSCI_3                                   ((eSCI_Type *)eSCI_3_BASE)
/** Peripheral eSCI_4 base address */
#define eSCI_4_BASE                              (0xC3FB4000u)
/** Peripheral eSCI_4 base pointer */
#define eSCI_4                                   ((eSCI_Type *)eSCI_4_BASE)
/** Peripheral eSCI_5 base address */
#define eSCI_5_BASE                              (0xC3FB8000u)
/** Peripheral eSCI_5 base pointer */
#define eSCI_5                                   ((eSCI_Type *)eSCI_5_BASE)
/** Array initializer of eSCI peripheral base addresses */
#define eSCI_BASE_ADDRS                          { eSCI_0_BASE, eSCI_1_BASE, eSCI_2_BASE, eSCI_3_BASE, eSCI_4_BASE, eSCI_5_BASE }
/** Array initializer of eSCI peripheral base pointers */
#define eSCI_BASE_PTRS                           { eSCI_0, eSCI_1, eSCI_2, eSCI_3, eSCI_4, eSCI_5 }

/* ----------------------------------------------------------------------------
   -- eSCI Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup eSCI_Register_Masks eSCI Register Masks
 * @{
 */

/* BRR Bit Fields */
#define eSCI_BRR_SBR_MASK                        0x1FFFu
#define eSCI_BRR_SBR_SHIFT                       0u
#define eSCI_BRR_SBR_WIDTH                       13u
#define eSCI_BRR_SBR(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_BRR_SBR_SHIFT))&eSCI_BRR_SBR_MASK)
/* CR1 Bit Fields */
#define eSCI_CR1_SBK_MASK                        0x1u
#define eSCI_CR1_SBK_SHIFT                       0u
#define eSCI_CR1_SBK_WIDTH                       1u
#define eSCI_CR1_SBK(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_SBK_SHIFT))&eSCI_CR1_SBK_MASK)
#define eSCI_CR1_RWU_MASK                        0x2u
#define eSCI_CR1_RWU_SHIFT                       1u
#define eSCI_CR1_RWU_WIDTH                       1u
#define eSCI_CR1_RWU(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_RWU_SHIFT))&eSCI_CR1_RWU_MASK)
#define eSCI_CR1_RE_MASK                         0x4u
#define eSCI_CR1_RE_SHIFT                        2u
#define eSCI_CR1_RE_WIDTH                        1u
#define eSCI_CR1_RE(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_RE_SHIFT))&eSCI_CR1_RE_MASK)
#define eSCI_CR1_TE_MASK                         0x8u
#define eSCI_CR1_TE_SHIFT                        3u
#define eSCI_CR1_TE_WIDTH                        1u
#define eSCI_CR1_TE(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_TE_SHIFT))&eSCI_CR1_TE_MASK)
#define eSCI_CR1_ILIE_MASK                       0x10u
#define eSCI_CR1_ILIE_SHIFT                      4u
#define eSCI_CR1_ILIE_WIDTH                      1u
#define eSCI_CR1_ILIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_ILIE_SHIFT))&eSCI_CR1_ILIE_MASK)
#define eSCI_CR1_RIE_MASK                        0x20u
#define eSCI_CR1_RIE_SHIFT                       5u
#define eSCI_CR1_RIE_WIDTH                       1u
#define eSCI_CR1_RIE(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_RIE_SHIFT))&eSCI_CR1_RIE_MASK)
#define eSCI_CR1_TCIE_MASK                       0x40u
#define eSCI_CR1_TCIE_SHIFT                      6u
#define eSCI_CR1_TCIE_WIDTH                      1u
#define eSCI_CR1_TCIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_TCIE_SHIFT))&eSCI_CR1_TCIE_MASK)
#define eSCI_CR1_TIE_MASK                        0x80u
#define eSCI_CR1_TIE_SHIFT                       7u
#define eSCI_CR1_TIE_WIDTH                       1u
#define eSCI_CR1_TIE(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_TIE_SHIFT))&eSCI_CR1_TIE_MASK)
#define eSCI_CR1_PT_MASK                         0x100u
#define eSCI_CR1_PT_SHIFT                        8u
#define eSCI_CR1_PT_WIDTH                        1u
#define eSCI_CR1_PT(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_PT_SHIFT))&eSCI_CR1_PT_MASK)
#define eSCI_CR1_PE_MASK                         0x200u
#define eSCI_CR1_PE_SHIFT                        9u
#define eSCI_CR1_PE_WIDTH                        1u
#define eSCI_CR1_PE(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_PE_SHIFT))&eSCI_CR1_PE_MASK)
#define eSCI_CR1_WAKE_MASK                       0x800u
#define eSCI_CR1_WAKE_SHIFT                      11u
#define eSCI_CR1_WAKE_WIDTH                      1u
#define eSCI_CR1_WAKE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_WAKE_SHIFT))&eSCI_CR1_WAKE_MASK)
#define eSCI_CR1_M_MASK                          0x1000u
#define eSCI_CR1_M_SHIFT                         12u
#define eSCI_CR1_M_WIDTH                         1u
#define eSCI_CR1_M(x)                            (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_M_SHIFT))&eSCI_CR1_M_MASK)
#define eSCI_CR1_RSRC_MASK                       0x2000u
#define eSCI_CR1_RSRC_SHIFT                      13u
#define eSCI_CR1_RSRC_WIDTH                      1u
#define eSCI_CR1_RSRC(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_RSRC_SHIFT))&eSCI_CR1_RSRC_MASK)
#define eSCI_CR1_LOOPS_MASK                      0x8000u
#define eSCI_CR1_LOOPS_SHIFT                     15u
#define eSCI_CR1_LOOPS_WIDTH                     1u
#define eSCI_CR1_LOOPS(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_CR1_LOOPS_SHIFT))&eSCI_CR1_LOOPS_MASK)
/* CR2 Bit Fields */
#define eSCI_CR2_PFIE_MASK                       0x1u
#define eSCI_CR2_PFIE_SHIFT                      0u
#define eSCI_CR2_PFIE_WIDTH                      1u
#define eSCI_CR2_PFIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_PFIE_SHIFT))&eSCI_CR2_PFIE_MASK)
#define eSCI_CR2_FEIE_MASK                       0x2u
#define eSCI_CR2_FEIE_SHIFT                      1u
#define eSCI_CR2_FEIE_WIDTH                      1u
#define eSCI_CR2_FEIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_FEIE_SHIFT))&eSCI_CR2_FEIE_MASK)
#define eSCI_CR2_NFIE_MASK                       0x4u
#define eSCI_CR2_NFIE_SHIFT                      2u
#define eSCI_CR2_NFIE_WIDTH                      1u
#define eSCI_CR2_NFIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_NFIE_SHIFT))&eSCI_CR2_NFIE_MASK)
#define eSCI_CR2_ORIE_MASK                       0x8u
#define eSCI_CR2_ORIE_SHIFT                      3u
#define eSCI_CR2_ORIE_WIDTH                      1u
#define eSCI_CR2_ORIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_ORIE_SHIFT))&eSCI_CR2_ORIE_MASK)
#define eSCI_CR2_PMSK_MASK                       0x10u
#define eSCI_CR2_PMSK_SHIFT                      4u
#define eSCI_CR2_PMSK_WIDTH                      1u
#define eSCI_CR2_PMSK(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_PMSK_SHIFT))&eSCI_CR2_PMSK_MASK)
#define eSCI_CR2_RXPOL_MASK                      0x20u
#define eSCI_CR2_RXPOL_SHIFT                     5u
#define eSCI_CR2_RXPOL_WIDTH                     1u
#define eSCI_CR2_RXPOL(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_RXPOL_SHIFT))&eSCI_CR2_RXPOL_MASK)
#define eSCI_CR2_BESTP_MASK                      0x40u
#define eSCI_CR2_BESTP_SHIFT                     6u
#define eSCI_CR2_BESTP_WIDTH                     1u
#define eSCI_CR2_BESTP(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_BESTP_SHIFT))&eSCI_CR2_BESTP_MASK)
#define eSCI_CR2_BESM_MASK                       0x80u
#define eSCI_CR2_BESM_SHIFT                      7u
#define eSCI_CR2_BESM_WIDTH                      1u
#define eSCI_CR2_BESM(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_BESM_SHIFT))&eSCI_CR2_BESM_MASK)
#define eSCI_CR2_TXDIR_MASK                      0x100u
#define eSCI_CR2_TXDIR_SHIFT                     8u
#define eSCI_CR2_TXDIR_WIDTH                     1u
#define eSCI_CR2_TXDIR(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_TXDIR_SHIFT))&eSCI_CR2_TXDIR_MASK)
#define eSCI_CR2_BRCL_MASK                       0x200u
#define eSCI_CR2_BRCL_SHIFT                      9u
#define eSCI_CR2_BRCL_WIDTH                      1u
#define eSCI_CR2_BRCL(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_BRCL_SHIFT))&eSCI_CR2_BRCL_MASK)
#define eSCI_CR2_TXDMA_MASK                      0x400u
#define eSCI_CR2_TXDMA_SHIFT                     10u
#define eSCI_CR2_TXDMA_WIDTH                     1u
#define eSCI_CR2_TXDMA(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_TXDMA_SHIFT))&eSCI_CR2_TXDMA_MASK)
#define eSCI_CR2_RXDMA_MASK                      0x800u
#define eSCI_CR2_RXDMA_SHIFT                     11u
#define eSCI_CR2_RXDMA_WIDTH                     1u
#define eSCI_CR2_RXDMA(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_RXDMA_SHIFT))&eSCI_CR2_RXDMA_MASK)
#define eSCI_CR2_BERRIE_MASK                     0x1000u
#define eSCI_CR2_BERRIE_SHIFT                    12u
#define eSCI_CR2_BERRIE_WIDTH                    1u
#define eSCI_CR2_BERRIE(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_BERRIE_SHIFT))&eSCI_CR2_BERRIE_MASK)
#define eSCI_CR2_BSTP_MASK                       0x2000u
#define eSCI_CR2_BSTP_SHIFT                      13u
#define eSCI_CR2_BSTP_WIDTH                      1u
#define eSCI_CR2_BSTP(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_BSTP_SHIFT))&eSCI_CR2_BSTP_MASK)
#define eSCI_CR2_FBR_MASK                        0x4000u
#define eSCI_CR2_FBR_SHIFT                       14u
#define eSCI_CR2_FBR_WIDTH                       1u
#define eSCI_CR2_FBR(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_FBR_SHIFT))&eSCI_CR2_FBR_MASK)
#define eSCI_CR2_MDIS_MASK                       0x8000u
#define eSCI_CR2_MDIS_SHIFT                      15u
#define eSCI_CR2_MDIS_WIDTH                      1u
#define eSCI_CR2_MDIS(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR2_MDIS_SHIFT))&eSCI_CR2_MDIS_MASK)
/* SDR Bit Fields */
#define eSCI_SDR_RDTD_MASK                       0xFFFu
#define eSCI_SDR_RDTD_SHIFT                      0u
#define eSCI_SDR_RDTD_WIDTH                      12u
#define eSCI_SDR_RDTD(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_SDR_RDTD_SHIFT))&eSCI_SDR_RDTD_MASK)
#define eSCI_SDR_ERR_MASK                        0x2000u
#define eSCI_SDR_ERR_SHIFT                       13u
#define eSCI_SDR_ERR_WIDTH                       1u
#define eSCI_SDR_ERR(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_SDR_ERR_SHIFT))&eSCI_SDR_ERR_MASK)
#define eSCI_SDR_TN_MASK                         0x4000u
#define eSCI_SDR_TN_SHIFT                        14u
#define eSCI_SDR_TN_WIDTH                        1u
#define eSCI_SDR_TN(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_SDR_TN_SHIFT))&eSCI_SDR_TN_MASK)
#define eSCI_SDR_RN_MASK                         0x8000u
#define eSCI_SDR_RN_SHIFT                        15u
#define eSCI_SDR_RN_WIDTH                        1u
#define eSCI_SDR_RN(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_SDR_RN_SHIFT))&eSCI_SDR_RN_MASK)
/* IFSR1 Bit Fields */
#define eSCI_IFSR1_RACT_MASK                     0x1u
#define eSCI_IFSR1_RACT_SHIFT                    0u
#define eSCI_IFSR1_RACT_WIDTH                    1u
#define eSCI_IFSR1_RACT(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_RACT_SHIFT))&eSCI_IFSR1_RACT_MASK)
#define eSCI_IFSR1_TACT_MASK                     0x2u
#define eSCI_IFSR1_TACT_SHIFT                    1u
#define eSCI_IFSR1_TACT_WIDTH                    1u
#define eSCI_IFSR1_TACT(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_TACT_SHIFT))&eSCI_IFSR1_TACT_MASK)
#define eSCI_IFSR1_LACT_MASK                     0x4u
#define eSCI_IFSR1_LACT_SHIFT                    2u
#define eSCI_IFSR1_LACT_WIDTH                    1u
#define eSCI_IFSR1_LACT(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_LACT_SHIFT))&eSCI_IFSR1_LACT_MASK)
#define eSCI_IFSR1_WACT_MASK                     0x8u
#define eSCI_IFSR1_WACT_SHIFT                    3u
#define eSCI_IFSR1_WACT_WIDTH                    1u
#define eSCI_IFSR1_WACT(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_WACT_SHIFT))&eSCI_IFSR1_WACT_MASK)
#define eSCI_IFSR1_BERR_MASK                     0x10u
#define eSCI_IFSR1_BERR_SHIFT                    4u
#define eSCI_IFSR1_BERR_WIDTH                    1u
#define eSCI_IFSR1_BERR(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_BERR_SHIFT))&eSCI_IFSR1_BERR_MASK)
#define eSCI_IFSR1_DACT_MASK                     0x20u
#define eSCI_IFSR1_DACT_SHIFT                    5u
#define eSCI_IFSR1_DACT_WIDTH                    1u
#define eSCI_IFSR1_DACT(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_DACT_SHIFT))&eSCI_IFSR1_DACT_MASK)
#define eSCI_IFSR1_PF_MASK                       0x100u
#define eSCI_IFSR1_PF_SHIFT                      8u
#define eSCI_IFSR1_PF_WIDTH                      1u
#define eSCI_IFSR1_PF(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_PF_SHIFT))&eSCI_IFSR1_PF_MASK)
#define eSCI_IFSR1_FE_MASK                       0x200u
#define eSCI_IFSR1_FE_SHIFT                      9u
#define eSCI_IFSR1_FE_WIDTH                      1u
#define eSCI_IFSR1_FE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_FE_SHIFT))&eSCI_IFSR1_FE_MASK)
#define eSCI_IFSR1_NF_MASK                       0x400u
#define eSCI_IFSR1_NF_SHIFT                      10u
#define eSCI_IFSR1_NF_WIDTH                      1u
#define eSCI_IFSR1_NF(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_NF_SHIFT))&eSCI_IFSR1_NF_MASK)
#define eSCI_IFSR1_OR_MASK                       0x800u
#define eSCI_IFSR1_OR_SHIFT                      11u
#define eSCI_IFSR1_OR_WIDTH                      1u
#define eSCI_IFSR1_OR(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_OR_SHIFT))&eSCI_IFSR1_OR_MASK)
#define eSCI_IFSR1_IDLE_MASK                     0x1000u
#define eSCI_IFSR1_IDLE_SHIFT                    12u
#define eSCI_IFSR1_IDLE_WIDTH                    1u
#define eSCI_IFSR1_IDLE(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_IDLE_SHIFT))&eSCI_IFSR1_IDLE_MASK)
#define eSCI_IFSR1_RDRF_MASK                     0x2000u
#define eSCI_IFSR1_RDRF_SHIFT                    13u
#define eSCI_IFSR1_RDRF_WIDTH                    1u
#define eSCI_IFSR1_RDRF(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_RDRF_SHIFT))&eSCI_IFSR1_RDRF_MASK)
#define eSCI_IFSR1_TC_MASK                       0x4000u
#define eSCI_IFSR1_TC_SHIFT                      14u
#define eSCI_IFSR1_TC_WIDTH                      1u
#define eSCI_IFSR1_TC(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_TC_SHIFT))&eSCI_IFSR1_TC_MASK)
#define eSCI_IFSR1_TDRE_MASK                     0x8000u
#define eSCI_IFSR1_TDRE_SHIFT                    15u
#define eSCI_IFSR1_TDRE_WIDTH                    1u
#define eSCI_IFSR1_TDRE(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR1_TDRE_SHIFT))&eSCI_IFSR1_TDRE_MASK)
/* IFSR2 Bit Fields */
#define eSCI_IFSR2_OVFL_MASK                     0x1u
#define eSCI_IFSR2_OVFL_SHIFT                    0u
#define eSCI_IFSR2_OVFL_WIDTH                    1u
#define eSCI_IFSR2_OVFL(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_OVFL_SHIFT))&eSCI_IFSR2_OVFL_MASK)
#define eSCI_IFSR2_UREQ_MASK                     0x2u
#define eSCI_IFSR2_UREQ_SHIFT                    1u
#define eSCI_IFSR2_UREQ_WIDTH                    1u
#define eSCI_IFSR2_UREQ(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_UREQ_SHIFT))&eSCI_IFSR2_UREQ_MASK)
#define eSCI_IFSR2_FRC_MASK                      0x100u
#define eSCI_IFSR2_FRC_SHIFT                     8u
#define eSCI_IFSR2_FRC_WIDTH                     1u
#define eSCI_IFSR2_FRC(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_FRC_SHIFT))&eSCI_IFSR2_FRC_MASK)
#define eSCI_IFSR2_CKERR_MASK                    0x200u
#define eSCI_IFSR2_CKERR_SHIFT                   9u
#define eSCI_IFSR2_CKERR_WIDTH                   1u
#define eSCI_IFSR2_CKERR(x)                      (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_CKERR_SHIFT))&eSCI_IFSR2_CKERR_MASK)
#define eSCI_IFSR2_CERR_MASK                     0x400u
#define eSCI_IFSR2_CERR_SHIFT                    10u
#define eSCI_IFSR2_CERR_WIDTH                    1u
#define eSCI_IFSR2_CERR(x)                       (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_CERR_SHIFT))&eSCI_IFSR2_CERR_MASK)
#define eSCI_IFSR2_PBERR_MASK                    0x800u
#define eSCI_IFSR2_PBERR_SHIFT                   11u
#define eSCI_IFSR2_PBERR_WIDTH                   1u
#define eSCI_IFSR2_PBERR(x)                      (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_PBERR_SHIFT))&eSCI_IFSR2_PBERR_MASK)
#define eSCI_IFSR2_STO_MASK                      0x1000u
#define eSCI_IFSR2_STO_SHIFT                     12u
#define eSCI_IFSR2_STO_WIDTH                     1u
#define eSCI_IFSR2_STO(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_STO_SHIFT))&eSCI_IFSR2_STO_MASK)
#define eSCI_IFSR2_LWAKE_MASK                    0x2000u
#define eSCI_IFSR2_LWAKE_SHIFT                   13u
#define eSCI_IFSR2_LWAKE_WIDTH                   1u
#define eSCI_IFSR2_LWAKE(x)                      (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_LWAKE_SHIFT))&eSCI_IFSR2_LWAKE_MASK)
#define eSCI_IFSR2_TXRDY_MASK                    0x4000u
#define eSCI_IFSR2_TXRDY_SHIFT                   14u
#define eSCI_IFSR2_TXRDY_WIDTH                   1u
#define eSCI_IFSR2_TXRDY(x)                      (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_TXRDY_SHIFT))&eSCI_IFSR2_TXRDY_MASK)
#define eSCI_IFSR2_RXRDY_MASK                    0x8000u
#define eSCI_IFSR2_RXRDY_SHIFT                   15u
#define eSCI_IFSR2_RXRDY_WIDTH                   1u
#define eSCI_IFSR2_RXRDY(x)                      (((uint16_t)(((uint16_t)(x))<<eSCI_IFSR2_RXRDY_SHIFT))&eSCI_IFSR2_RXRDY_MASK)
/* LCR1 Bit Fields */
#define eSCI_LCR1_FCIE_MASK                      0x1u
#define eSCI_LCR1_FCIE_SHIFT                     0u
#define eSCI_LCR1_FCIE_WIDTH                     1u
#define eSCI_LCR1_FCIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_FCIE_SHIFT))&eSCI_LCR1_FCIE_MASK)
#define eSCI_LCR1_CKIE_MASK                      0x2u
#define eSCI_LCR1_CKIE_SHIFT                     1u
#define eSCI_LCR1_CKIE_WIDTH                     1u
#define eSCI_LCR1_CKIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_CKIE_SHIFT))&eSCI_LCR1_CKIE_MASK)
#define eSCI_LCR1_CIE_MASK                       0x4u
#define eSCI_LCR1_CIE_SHIFT                      2u
#define eSCI_LCR1_CIE_WIDTH                      1u
#define eSCI_LCR1_CIE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_CIE_SHIFT))&eSCI_LCR1_CIE_MASK)
#define eSCI_LCR1_PBIE_MASK                      0x8u
#define eSCI_LCR1_PBIE_SHIFT                     3u
#define eSCI_LCR1_PBIE_WIDTH                     1u
#define eSCI_LCR1_PBIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_PBIE_SHIFT))&eSCI_LCR1_PBIE_MASK)
#define eSCI_LCR1_STIE_MASK                      0x10u
#define eSCI_LCR1_STIE_SHIFT                     4u
#define eSCI_LCR1_STIE_WIDTH                     1u
#define eSCI_LCR1_STIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_STIE_SHIFT))&eSCI_LCR1_STIE_MASK)
#define eSCI_LCR1_WUIE_MASK                      0x20u
#define eSCI_LCR1_WUIE_SHIFT                     5u
#define eSCI_LCR1_WUIE_WIDTH                     1u
#define eSCI_LCR1_WUIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_WUIE_SHIFT))&eSCI_LCR1_WUIE_MASK)
#define eSCI_LCR1_TXIE_MASK                      0x40u
#define eSCI_LCR1_TXIE_SHIFT                     6u
#define eSCI_LCR1_TXIE_WIDTH                     1u
#define eSCI_LCR1_TXIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_TXIE_SHIFT))&eSCI_LCR1_TXIE_MASK)
#define eSCI_LCR1_RXIE_MASK                      0x80u
#define eSCI_LCR1_RXIE_SHIFT                     7u
#define eSCI_LCR1_RXIE_WIDTH                     1u
#define eSCI_LCR1_RXIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_RXIE_SHIFT))&eSCI_LCR1_RXIE_MASK)
#define eSCI_LCR1_LIN_MASK                       0x100u
#define eSCI_LCR1_LIN_SHIFT                      8u
#define eSCI_LCR1_LIN_WIDTH                      1u
#define eSCI_LCR1_LIN(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_LIN_SHIFT))&eSCI_LCR1_LIN_MASK)
#define eSCI_LCR1_PRTY_MASK                      0x200u
#define eSCI_LCR1_PRTY_SHIFT                     9u
#define eSCI_LCR1_PRTY_WIDTH                     1u
#define eSCI_LCR1_PRTY(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_PRTY_SHIFT))&eSCI_LCR1_PRTY_MASK)
#define eSCI_LCR1_WUD_MASK                       0x3000u
#define eSCI_LCR1_WUD_SHIFT                      12u
#define eSCI_LCR1_WUD_WIDTH                      2u
#define eSCI_LCR1_WUD(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_WUD_SHIFT))&eSCI_LCR1_WUD_MASK)
#define eSCI_LCR1_WU_MASK                        0x4000u
#define eSCI_LCR1_WU_SHIFT                       14u
#define eSCI_LCR1_WU_WIDTH                       1u
#define eSCI_LCR1_WU(x)                          (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_WU_SHIFT))&eSCI_LCR1_WU_MASK)
#define eSCI_LCR1_LRES_MASK                      0x8000u
#define eSCI_LCR1_LRES_SHIFT                     15u
#define eSCI_LCR1_LRES_WIDTH                     1u
#define eSCI_LCR1_LRES(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR1_LRES_SHIFT))&eSCI_LCR1_LRES_MASK)
/* LCR2 Bit Fields */
#define eSCI_LCR2_OFIE_MASK                      0x100u
#define eSCI_LCR2_OFIE_SHIFT                     8u
#define eSCI_LCR2_OFIE_WIDTH                     1u
#define eSCI_LCR2_OFIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR2_OFIE_SHIFT))&eSCI_LCR2_OFIE_MASK)
#define eSCI_LCR2_UQIE_MASK                      0x200u
#define eSCI_LCR2_UQIE_SHIFT                     9u
#define eSCI_LCR2_UQIE_WIDTH                     1u
#define eSCI_LCR2_UQIE(x)                        (((uint16_t)(((uint16_t)(x))<<eSCI_LCR2_UQIE_SHIFT))&eSCI_LCR2_UQIE_MASK)
/* LTR Bit Fields */
#define eSCI_LTR_DATA_MASK                       0xFFu
#define eSCI_LTR_DATA_SHIFT                      0u
#define eSCI_LTR_DATA_WIDTH                      8u
#define eSCI_LTR_DATA(x)                         (((uint8_t)(((uint8_t)(x))<<eSCI_LTR_DATA_SHIFT))&eSCI_LTR_DATA_MASK)
/* LRR Bit Fields */
#define eSCI_LRR_D_MASK                          0xFFu
#define eSCI_LRR_D_SHIFT                         0u
#define eSCI_LRR_D_WIDTH                         8u
#define eSCI_LRR_D(x)                            (((uint8_t)(((uint8_t)(x))<<eSCI_LRR_D_SHIFT))&eSCI_LRR_D_MASK)
/* LPR Bit Fields */
#define eSCI_LPR_P_MASK                          0xFFFFu
#define eSCI_LPR_P_SHIFT                         0u
#define eSCI_LPR_P_WIDTH                         16u
#define eSCI_LPR_P(x)                            (((uint16_t)(((uint16_t)(x))<<eSCI_LPR_P_SHIFT))&eSCI_LPR_P_MASK)
/* CR3 Bit Fields */
#define eSCI_CR3_M2_MASK                         0x100u
#define eSCI_CR3_M2_SHIFT                        8u
#define eSCI_CR3_M2_WIDTH                        1u
#define eSCI_CR3_M2(x)                           (((uint16_t)(((uint16_t)(x))<<eSCI_CR3_M2_SHIFT))&eSCI_CR3_M2_MASK)
#define eSCI_CR3_ERPE_MASK                       0x200u
#define eSCI_CR3_ERPE_SHIFT                      9u
#define eSCI_CR3_ERPE_WIDTH                      1u
#define eSCI_CR3_ERPE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR3_ERPE_SHIFT))&eSCI_CR3_ERPE_MASK)
#define eSCI_CR3_ERFE_MASK                       0x400u
#define eSCI_CR3_ERFE_SHIFT                      10u
#define eSCI_CR3_ERFE_WIDTH                      1u
#define eSCI_CR3_ERFE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR3_ERFE_SHIFT))&eSCI_CR3_ERFE_MASK)
#define eSCI_CR3_EROE_MASK                       0x800u
#define eSCI_CR3_EROE_SHIFT                      11u
#define eSCI_CR3_EROE_WIDTH                      1u
#define eSCI_CR3_EROE(x)                         (((uint16_t)(((uint16_t)(x))<<eSCI_CR3_EROE_SHIFT))&eSCI_CR3_EROE_MASK)

/*!
 * @}
 */ /* end of group eSCI_Register_Masks */


/*!
 * @}
 */ /* end of group eSCI_Peripheral_Access_Layer */


/****************************************************************************/
/*                          MODULE : FlexCAN                                */
/****************************************************************************/

/** CAN - Size of Registers Arrays */
#define CAN_RAMn_COUNT                           (256u)
#define CAN_RXIMR_COUNT                          64u

/** CAN - Register Layout Typedef */
typedef struct {
  __IO uint32_t MCR;                               /**< Module Configuration Register, offset: 0x0 */
  __IO uint32_t CTRL1;                             /**< Control 1 register, offset: 0x4 */
  __IO uint32_t TIMER;                             /**< Free Running Timer, offset: 0x8 */
       uint8_t RESERVED_0[4];
  __IO uint32_t RXMGMASK;                          /**< Rx Mailboxes Global Mask Register, offset: 0x10 */
  __IO uint32_t RX14MASK;                          /**< Rx 14 Mask register, offset: 0x14 */
  __IO uint32_t RX15MASK;                          /**< Rx 15 Mask register, offset: 0x18 */
  __IO uint32_t ECR;                               /**< Error Counter, offset: 0x1C */
  __IO uint32_t ESR1;                              /**< Error and Status 1 register, offset: 0x20 */
  __IO uint32_t IMASK2;                            /**< Interrupt Masks 2 register, offset: 0x24 */
  __IO uint32_t IMASK1;                            /**< Interrupt Masks 1 register, offset: 0x28 */
  __IO uint32_t IFLAG2;                            /**< Interrupt Flags 2 register, offset: 0x2C */
  __IO uint32_t IFLAG1;                            /**< Interrupt Flags 1 register, offset: 0x30 */
  __IO uint32_t CTRL2;                             /**< Control 2 register, offset: 0x34 */
       uint32_t RESERVED_1[18];
  __IO uint32_t RAMn[CAN_RAMn_COUNT];              /**< Embedded RAM, array offset: 0x60, array step: 0x4 */
       uint32_t RESERVED_2[256];
  __IO uint32_t RXIMR[CAN_RXIMR_COUNT];            /**< Rx Individual Mask Registers, array offset: 0x880, array step: 0x4 */
       uint8_t RESERVED_3[352];
       uint32_t RESERVED_4[96];
} CAN_Type, *CAN_MemMapPtr;
/****************************************************************************/
/*                          MODULE : FlexRay                                */
/****************************************************************************/

    typedef union uMVR {
        vuint16_t R;
        struct {
            vuint16_t CHIVER:8; /* CHI Version Number */
            vuint16_t PEVER:8;  /* PE Version Number */
        } B;
    } MVR_t;

    typedef union uMCR {
        vuint16_t R;
        struct {
            vuint16_t MEN:1;    /* module enable */
            vuint16_t SBFF:1;   /* sys bus failure freeze */
            vuint16_t SCM:1;   /* single channel mode */
            vuint16_t CHB:1;    /* channel B enable */
            vuint16_t CHA:1;    /* channel A enable */
            vuint16_t SFFE:1;   /* synchronization frame filter enable */
            vuint16_t:1;
            vuint16_t R:1;      /* reserved, read as zero. system must not 
                                   write 1 to this bit */
            vuint16_t FUM:1;    /* FIFO update mode */
            vuint16_t FAM:1;    /* FIFO address mode */
            vuint16_t:1;
            vuint16_t CLKSEL:1; /* protocol engine clock source select */
            vuint16_t BITRATE:3;   /* flexray bus bitrate */
            vuint16_t:1;
        } B;
    } MCR_t;
    
    typedef union uSTBSCR {
        vuint16_t R;
        struct {
            vuint16_t WMD:1;      /* write mode */
            vuint16_t:3;
            vuint16_t STBSSEL:4;  /* strobe signal select */
            vuint16_t:3;
            vuint16_t ENB:1;      /* strobe signal enable */
            vuint16_t:2;
            vuint16_t STBPSEL:2;  /* strobe port select */
        } B;
    } STBSCR_t;
    
    typedef union uMBDSR {
        vuint16_t R;
        struct {
            vuint16_t:1;
            vuint16_t MBSEG2DS:7;       /* message buffer segment 2 data size */
            vuint16_t:1;
            vuint16_t MBSEG1DS:7;       /* message buffer segment 1 data size */
        } B;
    } MBDSR_t;
    typedef union uMBSSUTR {
        vuint16_t R;
        struct {
            vuint16_t:1;
            vuint16_t LAST_MB_SEG1:7;   /* last message buffer control register for message buffer segment 1 */
            vuint16_t:1;
            vuint16_t LAST_MB_UTIL:7;   /* last message buffer utilized */
        } B;
    } MBSSUTR_t;

    typedef union uPOCR {
        vuint16_t R;
        vuint8_t byte[2];
        struct {
            vuint16_t WME:1;    /* write mode external correction command */
            vuint16_t:3;
            vuint16_t EOC_AP:2; /* external offset correction application */
            vuint16_t ERC_AP:2; /* external rate correction application */
            vuint16_t BSY:1;    /* command write busy / write mode command */
            vuint16_t:3;
            vuint16_t POCCMD:4; /* protocol command */
        } B;
    } POCR_t;
/* protocol commands */
    typedef union uGIFER {
        vuint16_t R;
        struct {
            vuint16_t MIF:1;    /* module interrupt flag */
            vuint16_t PRIF:1;   /* protocol interrupt flag */
            vuint16_t CHIF:1;   /* CHI interrupt flag */
            vuint16_t WKUPIF:1; /* wakeup interrupt flag *//* Legacy naming: Refer to WUPIF in the reference manual */
            vuint16_t FNEBIF:1; /* receive FIFO channel B not empty interrupt flag *//* Legacy naming: Refer to FAFBIF in the reference manual */
            vuint16_t FNEAIF:1; /* receive FIFO channel A not empty interrupt flag *//* Legacy naming: Refer to FAFAIF in the reference manual */
            vuint16_t RBIF:1;   /* receive message buffer interrupt flag */
            vuint16_t TBIF:1;   /* transmit buffer interrupt flag */
            vuint16_t MIE:1;    /* module interrupt enable */
            vuint16_t PRIE:1;   /* protocol interrupt enable */
            vuint16_t CHIE:1;   /* CHI interrupt enable */
            vuint16_t WKUPIE:1; /* wakeup interrupt enable *//* Legacy naming: Refer to WUPIE in the reference manual */
            vuint16_t FNEBIE:1; /* receive FIFO channel B not empty interrupt enable *//* Legacy naming: Refer to FAFBIE in the reference manual */
            vuint16_t FNEAIE:1; /* receive FIFO channel A not empty interrupt enable *//* Legacy naming: Refer to FAFAIE in the reference manual */
            vuint16_t RBIE:1;   /* receive message buffer interrupt enable */
            vuint16_t TBIE:1;   /* transmit buffer interrupt enable */
        } B;
    } GIFER_t;
    typedef union uPIFR0 {
        vuint16_t R;
        struct {
            vuint16_t FATLIF:1; /* fatal protocol error interrupt flag */
            vuint16_t INTLIF:1; /* internal protocol error interrupt flag */
            vuint16_t ILCFIF:1; /* illegal protocol configuration flag */
            vuint16_t CSAIF:1;  /* cold start abort interrupt flag */
            vuint16_t MRCIF:1;  /* missing rate correctio interrupt flag */
            vuint16_t MOCIF:1;  /* missing offset correctio interrupt flag */
            vuint16_t CCLIF:1;  /* clock correction limit reached interrupt flag */
            vuint16_t MXSIF:1;  /* max sync frames detected interrupt flag */
            vuint16_t MTXIF:1;  /* media access test symbol received flag */
            vuint16_t LTXBIF:1; /* pdLatestTx violation on channel B interrupt flag */
            vuint16_t LTXAIF:1; /* pdLatestTx violation on channel A interrupt flag */
            vuint16_t TBVBIF:1; /* Transmission across boundary on channel B Interrupt Flag */
            vuint16_t TBVAIF:1; /* Transmission across boundary on channel A Interrupt Flag */
            vuint16_t TI2IF:1;  /* timer 2 expired interrupt flag */
            vuint16_t TI1IF:1;  /* timer 1 expired interrupt flag */
            vuint16_t CYSIF:1;  /* cycle start interrupt flag */
        } B;
    } PIFR0_t;
    typedef union uPIFR1 {
        vuint16_t R;
        struct {
            vuint16_t EMCIF:1;  /* error mode changed interrupt flag */
            vuint16_t IPCIF:1;  /* illegal protocol command interrupt flag */
            vuint16_t PECFIF:1; /* protocol engine communication failure interrupt flag */
            vuint16_t PSCIF:1;  /* Protocol State Changed Interrupt Flag */
            vuint16_t SSI3IF:1; /* slot status counter incremented interrupt flag */
            vuint16_t SSI2IF:1; /* slot status counter incremented interrupt flag */
            vuint16_t SSI1IF:1; /* slot status counter incremented interrupt flag */
            vuint16_t SSI0IF:1; /* slot status counter incremented interrupt flag */
            vuint16_t:2;
            vuint16_t EVTIF:1;  /* even cycle table written interrupt flag */
            vuint16_t ODTIF:1;  /* odd cycle table written interrupt flag */
            vuint16_t:4;
        } B;
    } PIFR1_t;
    typedef union uPIER0 {
        vuint16_t R;
        struct {
            vuint16_t FATLIE:1; /* fatal protocol error interrupt enable */
            vuint16_t INTLIE:1; /* internal protocol error interrupt interrupt enable  */
            vuint16_t ILCFIE:1; /* illegal protocol configuration interrupt enable */
            vuint16_t CSAIE:1;  /* cold start abort interrupt enable */
            vuint16_t MRCIE:1;  /* missing rate correctio interrupt enable */
            vuint16_t MOCIE:1;  /* missing offset correctio interrupt enable */
            vuint16_t CCLIE:1;  /* clock correction limit reached interrupt enable */
            vuint16_t MXSIE:1;  /* max sync frames detected interrupt enable */
            vuint16_t MTXIE:1;  /* media access test symbol received interrupt enable */
            vuint16_t LTXBIE:1; /* pdLatestTx violation on channel B interrupt enable */
            vuint16_t LTXAIE:1; /* pdLatestTx violation on channel A interrupt enable */
            vuint16_t TBVBIE:1; /* Transmission across boundary on channel B Interrupt enable */
            vuint16_t TBVAIE:1; /* Transmission across boundary on channel A Interrupt enable */
            vuint16_t TI2IE:1;  /* timer 2 expired interrupt enable */
            vuint16_t TI1IE:1;  /* timer 1 expired interrupt enable */
            vuint16_t CYSIE:1;  /* cycle start interrupt enable */
        } B;
    } PIER0_t;
    typedef union uPIER1 {
        vuint16_t R;
        struct {
            vuint16_t EMCIE:1;  /* error mode changed interrupt enable */
            vuint16_t IPCIE:1;  /* illegal protocol command interrupt enable */
            vuint16_t PECFIE:1; /* protocol engine communication failure interrupt enable */
            vuint16_t PSCIE:1;  /* Protocol State Changed Interrupt enable */
            vuint16_t SSI3IE:1; /* slot status counter incremented interrupt enable */
            vuint16_t SSI2IE:1; /* slot status counter incremented interrupt enable */
            vuint16_t SSI1IE:1; /* slot status counter incremented interrupt enable */
            vuint16_t SSI0IE:1; /* slot status counter incremented interrupt enable */
            vuint16_t:2;
            vuint16_t EVTIE:1;  /* even cycle table written interrupt enable */
            vuint16_t ODTIE:1;  /* odd cycle table written interrupt enable */
            vuint16_t:4;
        } B;
    } PIER1_t;
    typedef union uCHIERFR {
        vuint16_t R;
        struct {
            vuint16_t FRLBEF:1; /* flame lost channel B error flag */
            vuint16_t FRLAEF:1; /* frame lost channel A error flag */
            vuint16_t PCMIEF:1; /* command ignored error flag */
            vuint16_t FOVBEF:1; /* receive FIFO overrun channel B error flag */
            vuint16_t FOVAEF:1; /* receive FIFO overrun channel A error flag */
            vuint16_t MSBEF:1;  /* message buffer search error flag *//* Legacy naming: Refer to MBSEF in the reference manual */
            vuint16_t MBUEF:1;  /* message buffer utilization error flag */
            vuint16_t LCKEF:1;  /* lock error flag */
            vuint16_t DBLEF:1;  /* double transmit message buffer lock error flag */
            vuint16_t SBCFEF:1; /* system bus communication failure error flag */
            vuint16_t FIDEF:1;  /* frame ID error flag */
            vuint16_t DPLEF:1;  /* dynamic payload length error flag */
            vuint16_t SPLEF:1;  /* static payload length error flag */
            vuint16_t NMLEF:1;  /* network management length error flag */
            vuint16_t NMFEF:1;  /* network management frame error flag */
            vuint16_t ILSAEF:1; /* illegal access error flag */
        } B;
    } CHIERFR_t;
    typedef union uMBIVEC {
        vuint16_t R;
        struct {
            vuint16_t:1;
            vuint16_t TBIVEC:7; /* transmit buffer interrupt vector */
            vuint16_t:1;
            vuint16_t RBIVEC:7; /* receive buffer interrupt vector */
        } B;
    } MBIVEC_t;

    typedef union uPSR0 {
        vuint16_t R;
        struct {
            vuint16_t ERRMODE:2;        /* error mode */
            vuint16_t SLOTMODE:2;       /* slot mode */
            vuint16_t:1;
            vuint16_t PROTSTATE:3;      /* protocol state */
            vuint16_t SUBSTATE:4;       /* protocol sub state *//* Legacy naming: Refer to STARTUPSTATE in the reference manual */
            vuint16_t:1;
            vuint16_t WAKEUPSTATUS:3;   /* wakeup status */
        } B;
    } PSR0_t;

/* protocol states */
/* protocol sub-states */
/* wakeup status */
    typedef union uPSR1 {
        vuint16_t R;
        struct {
            vuint16_t CSAA:1;   /* cold start attempt abort flag */
            vuint16_t SCP:1;    /* cold start path *//* Legacy naming: Refer to CSP in the reference manual */
            vuint16_t:1;
            vuint16_t REMCSAT:5;/* remanining coldstart attempts */
            vuint16_t CPN:1;    /* cold start noise path */
            vuint16_t HHR:1;    /* host halt request pending */
            vuint16_t FRZ:1;    /* freeze occured */
            vuint16_t APTAC:5;  /* allow passive to active counter */
        } B;
    } PSR1_t;
    typedef union uPSR2 {
        vuint16_t R;
        struct {
            vuint16_t NBVB:1;   /* NIT boundary violation on channel B */
            vuint16_t NSEB:1;   /* NIT syntax error on channel B */
            vuint16_t STCB:1;   /* symbol window transmit conflict on channel B */
            vuint16_t SBVB:1;   /* symbol window boundary violation on channel B */
            vuint16_t SSEB:1;   /* symbol window syntax error on channel B */
            vuint16_t MTB:1;    /* media access test symbol MTS received on channel B */
            vuint16_t NBVA:1;   /* NIT boundary violation on channel A */
            vuint16_t NSEA:1;   /* NIT syntax error on channel A */
            vuint16_t STCA:1;   /* symbol window transmit conflict on channel A */
            vuint16_t SBVA:1;   /* symbol window boundary violation on channel A */
            vuint16_t SSEA:1;   /* symbol window syntax error on channel A */
            vuint16_t MTA:1;    /* media access test symbol MTS received on channel A */
            vuint16_t CLKCORRFAILCNT:4; /* clock correction failed counter */
        } B;
    } PSR2_t;
    typedef union uPSR3 {
        vuint16_t R;
        struct {
            vuint16_t:2;
            vuint16_t WUB:1;    /* wakeup symbol received on channel B */
            vuint16_t ABVB:1;   /* aggregated boundary violation on channel B */
            vuint16_t AACB:1;   /* aggregated additional communication on channel B */
            vuint16_t ACEB:1;   /* aggregated content error on channel B */
            vuint16_t ASEB:1;   /* aggregated syntax error on channel B */
            vuint16_t AVFB:1;   /* aggregated valid frame on channel B */
            vuint16_t:2;
            vuint16_t WUA:1;    /* wakeup symbol received on channel A */
            vuint16_t ABVA:1;   /* aggregated boundary violation on channel A */
            vuint16_t AACA:1;   /* aggregated additional communication on channel A */
            vuint16_t ACEA:1;   /* aggregated content error on channel A */
            vuint16_t ASEA:1;   /* aggregated syntax error on channel A */
            vuint16_t AVFA:1;   /* aggregated valid frame on channel A */
        } B;
    } PSR3_t;
    typedef union uCIFRR {
        vuint16_t R;
        struct {
            vuint16_t:8;
            vuint16_t MIFR:1;   /* module interrupt flag */
            vuint16_t PRIFR:1;  /* protocol interrupt flag */
            vuint16_t CHIFR:1;  /* CHI interrupt flag */
            vuint16_t WUPIFR:1; /* wakeup interrupt flag */
            vuint16_t FNEBIFR:1;        /* receive fifo channel B no empty interrupt flag *//* Legacy naming: Refer to FAFBIF in the reference manual */
            vuint16_t FNEAIFR:1;        /* receive fifo channel A no empty interrupt flag *//* Legacy naming: Refer to FAFAIF in the reference manual */
            vuint16_t RBIFR:1;  /* receive message buffer interrupt flag */
            vuint16_t TBIFR:1;  /* transmit buffer interrupt flag */
        } B;
    } CIFRR_t;
    
    typedef union uSYMATOR {
        vuint16_t R;
        struct {
            vuint16_t:8;
            vuint16_t TIMEOUT:8;  /* system memory access time-out */
        } B;
    } SYMATOR_t;
    
    
    typedef union uSFCNTR {
        vuint16_t R;
        struct {
            vuint16_t SFEVB:4;  /* sync frames channel B, even cycle */
            vuint16_t SFEVA:4;  /* sync frames channel A, even cycle */
            vuint16_t SFODB:4;  /* sync frames channel B, odd cycle */
            vuint16_t SFODA:4;  /* sync frames channel A, odd cycle */
        } B;
    } SFCNTR_t;

    typedef union uSFTCCSR {
        vuint16_t R;
        struct {
            vuint16_t ELKT:1;   /* even cycle tables lock and unlock trigger */
            vuint16_t OLKT:1;   /* odd cycle tables lock and unlock trigger */
            vuint16_t CYCNUM:6; /* cycle number */
            vuint16_t ELKS:1;   /* even cycle tables lock status */
            vuint16_t OLKS:1;   /* odd cycle tables lock status */
            vuint16_t EVAL:1;   /* even cycle tables valid */
            vuint16_t OVAL:1;   /* odd cycle tables valid */
            vuint16_t:1;
            vuint16_t OPT:1;    /*one pair trigger */
            vuint16_t SDVEN:1;  /* sync frame deviation table enable */
            vuint16_t SIDEN:1;  /* sync frame ID table enable */
        } B;
    } SFTCCSR_t;
    typedef union uSFIDRFR {
        vuint16_t R;
        struct {
            vuint16_t:6;
            vuint16_t SYNFRID:10;       /* sync frame rejection ID */
        } B;
    } SFIDRFR_t;

    typedef union uTICCR {
        vuint16_t R;
        struct {
            vuint16_t:2;
            vuint16_t T2CFG:1;  /* timer 2 configuration */
            vuint16_t T2REP:1;  /* timer 2 repetitive mode */
            vuint16_t:1;
            vuint16_t T2SP:1;   /* timer 2 stop */
            vuint16_t T2TR:1;   /* timer 2 trigger */
            vuint16_t T2ST:1;   /* timer 2 state */
            vuint16_t:3;
            vuint16_t T1REP:1;  /* timer 1 repetitive mode */
            vuint16_t:1;
            vuint16_t T1SP:1;   /* timer 1 stop */
            vuint16_t T1TR:1;   /* timer 1 trigger */
            vuint16_t T1ST:1;   /* timer 1 state */
        } B;
    } TICCR_t;
    typedef union uTI1CYSR {
        vuint16_t R;
        struct {
            vuint16_t:2;
            vuint16_t TI1CYCVAL:6;      /* timer 1 cycle filter value */
            vuint16_t:2;
            vuint16_t TI1CYCMSK:6;      /* timer 1 cycle filter mask */

        } B;
    } TI1CYSR_t;

    typedef union uSSSR {
        vuint16_t R;
        struct {
            vuint16_t WMD:1;    /* write mode */
            vuint16_t:1;
            vuint16_t SEL:2;    /* static slot number */
            vuint16_t:1;
            vuint16_t SLOTNUMBER:11;    /* selector */
        } B;
    } SSSR_t;

    typedef union uSSCCR {
        vuint16_t R;
        struct {
            vuint16_t WMD:1;    /* write mode */
            vuint16_t:1;
            vuint16_t SEL:2;    /* selector */
            vuint16_t:1;
            vuint16_t CNTCFG:2; /* counter configuration */
            vuint16_t MCY:1;    /* multi cycle selection */
            vuint16_t VFR:1;    /* valid frame selection */
            vuint16_t SYF:1;    /* sync frame selection */
            vuint16_t NUF:1;    /* null frame selection  */
            vuint16_t SUF:1;    /* startup frame selection */
            vuint16_t STATUSMASK:4;     /* slot status mask */
        } B;
    } SSCCR_t;
    typedef union uSSR {
        vuint16_t R;
        struct {
            vuint16_t VFB:1;    /* valid frame on channel B */
            vuint16_t SYB:1;    /* valid sync frame on channel B */
            vuint16_t NFB:1;    /* valid null frame on channel B */
            vuint16_t SUB:1;    /* valid startup frame on channel B */
            vuint16_t SEB:1;    /* syntax error on channel B */
            vuint16_t CEB:1;    /* content error on channel B */
            vuint16_t BVB:1;    /* boundary violation on channel B */
            vuint16_t TCB:1;    /* tx conflict on channel B */
            vuint16_t VFA:1;    /* valid frame on channel A */
            vuint16_t SYA:1;    /* valid sync frame on channel A */
            vuint16_t NFA:1;    /* valid null frame on channel A */
            vuint16_t SUA:1;    /* valid startup frame on channel A */
            vuint16_t SEA:1;    /* syntax error on channel A */
            vuint16_t CEA:1;    /* content error on channel A */
            vuint16_t BVA:1;    /* boundary violation on channel A */
            vuint16_t TCA:1;    /* tx conflict on channel A */
        } B;                                                              
    } SSR_t;
    typedef union uMTSCFR {
        vuint16_t R;
        struct {
            vuint16_t MTE:1;    /* media access test symbol transmission enable */
            vuint16_t:1;
            vuint16_t CYCCNTMSK:6;      /* cycle counter mask */
            vuint16_t:2;
            vuint16_t CYCCNTVAL:6;      /* cycle counter value */
        } B;
    } MTSCFR_t;
    typedef union uRSBIR {
        vuint16_t R;
        struct {
            vuint16_t WMD:1;    /* write mode */
            vuint16_t:1;
            vuint16_t SEL:2;    /* selector */
            vuint16_t:4;
            vuint16_t RSBIDX:8; /* receive shadow buffer index */
        } B;
    } RSBIR_t;
    typedef union uRFDSR {
        vuint16_t R;
        struct {
            vuint16_t FIFODEPTH:8;      /* fifo depth */
            vuint16_t:1;
            vuint16_t ENTRYSIZE:7;      /* entry size */
        } B;
    } RFDSR_t;

    typedef union uRFRFCFR {
        vuint16_t R;
        struct {
            vuint16_t WMD:1;    /* write mode */
            vuint16_t IBD:1;    /* interval boundary */
            vuint16_t SEL:2;    /* filter number */
            vuint16_t:1;
            vuint16_t SID:11;   /* slot ID */
        } B;
    } RFRFCFR_t;

    typedef union uRFRFCTR {
        vuint16_t R;
        struct {
            vuint16_t:4;
            vuint16_t F3MD:1;   /* filter mode */
            vuint16_t F2MD:1;   /* filter mode */
            vuint16_t F1MD:1;   /* filter mode */
            vuint16_t F0MD:1;   /* filter mode */
            vuint16_t:4;
            vuint16_t F3EN:1;   /* filter enable */
            vuint16_t F2EN:1;   /* filter enable */
            vuint16_t F1EN:1;   /* filter enable */
            vuint16_t F0EN:1;   /* filter enable */
        } B;
    } RFRFCTR_t;
    typedef union uPCR0 {
        vuint16_t R;
        struct {
            vuint16_t ACTION_POINT_OFFSET:6;
            vuint16_t STATIC_SLOT_LENGTH:10;
        } B;
    } PCR0_t;

    typedef union uPCR1 {
        vuint16_t R;
        struct {
            vuint16_t:2;
            vuint16_t MACRO_AFTER_FIRST_STATIC_SLOT:14;
        } B;
    } PCR1_t;

    typedef union uPCR2 {
        vuint16_t R;
        struct {
            vuint16_t MINISLOT_AFTER_ACTION_POINT:6;
            vuint16_t NUMBER_OF_STATIC_SLOTS:10;
        } B;
    } PCR2_t;

    typedef union uPCR3 {
        vuint16_t R;
        struct {
            vuint16_t WAKEUP_SYMBOL_RX_LOW:6;
            vuint16_t MINISLOT_ACTION_POINT_OFFSET:5;
            vuint16_t COLDSTART_ATTEMPTS:5;
        } B;
    } PCR3_t;

    typedef union uPCR4 {
        vuint16_t R;
        struct {
            vuint16_t CAS_RX_LOW_MAX:7;
            vuint16_t WAKEUP_SYMBOL_RX_WINDOW:9;
        } B;
    } PCR4_t;

    typedef union uPCR5 {
        vuint16_t R;
        struct {
            vuint16_t TSS_TRANSMITTER:4;
            vuint16_t WAKEUP_SYMBOL_TX_LOW:6;
            vuint16_t WAKEUP_SYMBOL_RX_IDLE:6;
        } B;
    } PCR5_t;

    typedef union uPCR6 {
        vuint16_t R;
        struct {
            vuint16_t:1;
            vuint16_t SYMBOL_WINDOW_AFTER_ACTION_POINT:8;
            vuint16_t MACRO_INITIAL_OFFSET_A:7;
        } B;
    } PCR6_t;

    typedef union uPCR7 {
        vuint16_t R;
        struct {
            vuint16_t DECODING_CORRECTION_B:9;
            vuint16_t MICRO_PER_MACRO_NOM_HALF:7;
        } B;
    } PCR7_t;

    typedef union uPCR8 {
        vuint16_t R;
        struct {
            vuint16_t MAX_WITHOUT_CLOCK_CORRECTION_FATAL:4;
            vuint16_t MAX_WITHOUT_CLOCK_CORRECTION_PASSIVE:4;
            vuint16_t WAKEUP_SYMBOL_TX_IDLE:8;
        } B;
    } PCR8_t;

    typedef union uPCR9 {
        vuint16_t R;
        struct {
            vuint16_t MINISLOT_EXISTS:1;
            vuint16_t SYMBOL_WINDOW_EXISTS:1;
            vuint16_t OFFSET_CORRECTION_OUT:14;
        } B;
    } PCR9_t;

    typedef union uPCR10 {
        vuint16_t R;
        struct {
            vuint16_t SINGLE_SLOT_ENABLED:1;
            vuint16_t WAKEUP_CHANNEL:1;
            vuint16_t MACRO_PER_CYCLE:14;
        } B;
    } PCR10_t;

    typedef union uPCR11 {
        vuint16_t R;
        struct {
            vuint16_t KEY_SLOT_USED_FOR_STARTUP:1;
            vuint16_t KEY_SLOT_USED_FOR_SYNC:1;
            vuint16_t OFFSET_CORRECTION_START:14;
        } B;
    } PCR11_t;

    typedef union uPCR12 {
        vuint16_t R;
        struct {
            vuint16_t ALLOW_PASSIVE_TO_ACTIVE:5;
            vuint16_t KEY_SLOT_HEADER_CRC:11;
        } B;
    } PCR12_t;

    typedef union uPCR13 {
        vuint16_t R;
        struct {
            vuint16_t FIRST_MINISLOT_ACTION_POINT_OFFSET:6;
            vuint16_t STATIC_SLOT_AFTER_ACTION_POINT:10;
        } B;
    } PCR13_t;

    typedef union uPCR14 {
        vuint16_t R;
        struct {
            vuint16_t RATE_CORRECTION_OUT:11;
            vuint16_t LISTEN_TIMEOUT_H:5;
        } B;
    } PCR14_t;

    typedef union uPCR15 {
        vuint16_t R;
        struct {
            vuint16_t LISTEN_TIMEOUT_L:16;
        } B;
    } PCR15_t;

    typedef union uPCR16 {
        vuint16_t R;
        struct {
            vuint16_t MACRO_INITIAL_OFFSET_B:7;
            vuint16_t NOISE_LISTEN_TIMEOUT_H:9;
        } B;
    } PCR16_t;

    typedef union uPCR17 {
        vuint16_t R;
        struct {
            vuint16_t NOISE_LISTEN_TIMEOUT_L:16;
        } B;
    } PCR17_t;

    typedef union uPCR18 {
        vuint16_t R;
        struct {
            vuint16_t WAKEUP_PATTERN:6;
            vuint16_t KEY_SLOT_ID:10;
        } B;
    } PCR18_t;

    typedef union uPCR19 {
        vuint16_t R;
        struct {
            vuint16_t DECODING_CORRECTION_A:9;
            vuint16_t PAYLOAD_LENGTH_STATIC:7;
        } B;
    } PCR19_t;

    typedef union uPCR20 {
        vuint16_t R;
        struct {
            vuint16_t MICRO_INITIAL_OFFSET_B:8;
            vuint16_t MICRO_INITIAL_OFFSET_A:8;
        } B;
    } PCR20_t;

    typedef union uPCR21 {
        vuint16_t R;
        struct {
            vuint16_t EXTERN_RATE_CORRECTION:3;
            vuint16_t LATEST_TX:13;
        } B;
    } PCR21_t;

    typedef union uPCR22 {
        vuint16_t R;
        struct {
            vuint16_t:1;
            vuint16_t COMP_ACCEPTED_STARTUP_RANGE_A:11;
            vuint16_t MICRO_PER_CYCLE_H:4;
        } B;
    } PCR22_t;

    typedef union uPCR23 {
        vuint16_t R;
        struct {
            vuint16_t micro_per_cycle_l:16;
        } B;
    } PCR23_t;

    typedef union uPCR24 {
        vuint16_t R;
        struct {
            vuint16_t CLUSTER_DRIFT_DAMPING:5;
            vuint16_t MAX_PAYLOAD_LENGTH_DYNAMIC:7;
            vuint16_t MICRO_PER_CYCLE_MIN_H:4;
        } B;
    } PCR24_t;

    typedef union uPCR25 {
        vuint16_t R;
        struct {
            vuint16_t MICRO_PER_CYCLE_MIN_L:16;
        } B;
    } PCR25_t;

    typedef union uPCR26 {
        vuint16_t R;
        struct {
            vuint16_t ALLOW_HALT_DUE_TO_CLOCK:1;
            vuint16_t COMP_ACCEPTED_STARTUP_RANGE_B:11;
            vuint16_t MICRO_PER_CYCLE_MAX_H:4;
        } B;
    } PCR26_t;

    typedef union uPCR27 {
        vuint16_t R;
        struct {
            vuint16_t MICRO_PER_CYCLE_MAX_L:16;
        } B;
    } PCR27_t;

    typedef union uPCR28 {
        vuint16_t R;
        struct {
            vuint16_t DYNAMIC_SLOT_IDLE_PHASE:2;
            vuint16_t MACRO_AFTER_OFFSET_CORRECTION:14;
        } B;
    } PCR28_t;

    typedef union uPCR29 {
        vuint16_t R;
        struct {
            vuint16_t EXTERN_OFFSET_CORRECTION:3;
            vuint16_t MINISLOTS_MAX:13;
        } B;
    } PCR29_t;

    typedef union uPCR30 {
        vuint16_t R;
        struct {
            vuint16_t:12;
            vuint16_t SYNC_NODE_MAX:4;
        } B;
    } PCR30_t;

    typedef union uRFSYMBADHR {
        vuint16_t R;
        struct {
            vuint16_t SMBA:16;
        } B;
    } RFSYMBADHR_t;
    
    typedef union uRFSYMBADLR {
        vuint16_t R;
        struct {
            vuint16_t SMBA:12;
            vuint16_t:4;
        } B;
    } RFSYMBADLR_t;
    
    typedef union uRFPTR {
        vuint16_t R;
        struct {
            vuint16_t:2;
            vuint16_t PTD:14;
        } B;
    } RFPTR_t;
    
    typedef union uRFFLPCR {
        vuint16_t R;
    } RFFLPCR_t;

    typedef struct uMSG_BUFF_CCS {
        union {
            vuint16_t R;
            struct {
                vuint16_t:1;
                vuint16_t MCM:1;        /* message buffer commit mode */
                vuint16_t MBT:1;        /* message buffer type */
                vuint16_t MTD:1;        /* message buffer direction */
                vuint16_t CMT:1;        /* commit for transmission */
                vuint16_t EDT:1;        /* enable / disable trigger */
                vuint16_t LCKT:1;       /* lock request trigger */
                vuint16_t MBIE:1;       /* message buffer interrupt enable */
                vuint16_t:3;
                vuint16_t DUP:1;        /* data updated  */
                vuint16_t DVAL:1;       /* data valid */
                vuint16_t EDS:1;        /* lock status */
                vuint16_t LCKS:1;       /* enable / disable status */
                vuint16_t MBIF:1;       /* message buffer interrupt flag */
            } B;
        } MBCCSR;
        union {
            vuint16_t R;
            struct {
                vuint16_t MTM:1;        /* message buffer transmission mode */
                vuint16_t CHNLA:1;      /* channel assignement *//* Legacy naming: Refer to CHA in the reference manual */
                vuint16_t CHNLB:1;      /* channel assignement *//* Legacy naming: Refer to CHB in the reference manual */
                vuint16_t CCFE:1;       /* cycle counter filter enable */
                vuint16_t CCFMSK:6;     /* cycle counter filter mask */
                vuint16_t CCFVAL:6;     /* cycle counter filter value */
            } B;
        } MBCCFR;
        union {
            vuint16_t R;
            struct {
                vuint16_t:5;
                vuint16_t FID:11;       /* frame ID */
            } B;
        } MBFIDR;
        union {
            vuint16_t R;
            struct {
                vuint16_t:8;
                vuint16_t MBIDX:8;      /* message buffer index */
            } B;
        } MBIDXR;
    } MSG_BUFF_CCS_t;
    typedef union uSYSBADHR {
        vuint16_t R;
    } SYSBADHR_t;
    typedef union uSYSBADLR {
        vuint16_t R;
    } SYSBADLR_t;
    typedef union uCASERCR {
        vuint16_t R;
    } CASERCR_t;
    typedef union uCBSERCR {
        vuint16_t R;
    } CBSERCR_t;
    typedef union uCYCTR {
        vuint16_t R;
    } CYCTR_t;
    typedef union uMTCTR {
        vuint16_t R;
    } MTCTR_t;
    typedef union uSLTCTAR {
        vuint16_t R;
    } SLTCTAR_t;
    typedef union uSLTCTBR {
        vuint16_t R;
    } SLTCTBR_t;
    typedef union uRTCORVR {
        vuint16_t R;
    } RTCORVR_t;
    typedef union uOFCORVR {
        vuint16_t R;
    } OFCORVR_t;
    typedef union uSFTOR {
        vuint16_t R;
    } SFTOR_t;
    typedef union uSFIDAFVR {
        vuint16_t R;
        struct {
            vuint16_t:6;
            vuint16_t FVAL:10;
        } B;
    } SFIDAFVR_t;
    typedef union uSFIDAFMR {
        vuint16_t R;
        struct {
            vuint16_t:6;
            vuint16_t FMSK:10;
        } B;
    } SFIDAFMR_t;
    typedef union uNMVR {
        vuint16_t R;
    } NMVR_t;
    typedef union uNMVLR {
        vuint16_t R;
        struct {
            vuint16_t:12;
            vuint16_t NMVL:4;
        } B;
    } NMVLR_t;
    typedef union uT1MTOR {
        vuint16_t R;
        struct {
            vuint16_t:2;
            vuint16_t T1_MTOFFSET:14;
        } B;
    } T1MTOR_t;
    typedef union uTI2CR0 {
        vuint16_t R;
    } TI2CR0_t;
    typedef union uTI2CR1 {
        vuint16_t R;
    } TI2CR1_t;
    typedef union uSSCR {
        vuint16_t R;
    } SSCR_t;
    typedef union uRFSR {
        vuint16_t R;
        struct {
            vuint16_t WM:8;
            vuint16_t:7;
            vuint16_t SEL:1;
        } B;
    } RFSR_t;
    typedef union uRFSIR {
        vuint16_t R;
        struct {
            vuint16_t:6;
            vuint16_t SIDX:10;
        } B;
    } RFSIR_t;
    typedef union uRFARIR {
        vuint16_t R;
        struct {
            vuint16_t:6;
            vuint16_t RDIDX:10;
        } B;
    } RFARIR_t;
    typedef union uRFBRIR {
        vuint16_t R;
        struct {
            vuint16_t:6;
            vuint16_t RDIDX:10;
        } B;
    } RFBRIR_t;
    typedef union uRFMIDAFVR {
        vuint16_t R;
    } RFMIDAFVR_t;
    typedef union uRFMIAFMR {
        vuint16_t R;
    } RFMIAFMR_t;
    typedef union uRFFIDRFVR {
        vuint16_t R;
        struct {
            vuint16_t:5;
            vuint16_t FIDRFVAL:11;
        } B;
    } RFFIDRFVR_t;
    typedef union uRFFIDRFMR {
        vuint16_t R;
        struct {
            vuint16_t:5;
            vuint16_t FIDRFMSK:11;
        } B;
    } RFFIDRFMR_t;
    typedef union uLDTXSLAR {
        vuint16_t R;
        struct {
            vuint16_t:5;
            vuint16_t LASTDYNTXSLOTA:11;
        } B;
    } LDTXSLAR_t;
    typedef union uLDTXSLBR {
        vuint16_t R;
        struct {
            vuint16_t:5;
            vuint16_t LASTDYNTXSLOTB:11;
        } B;
    } LDTXSLBR_t;

    typedef union uPEDRAR {
        vuint16_t R;
        struct {
            vuint16_t INST:4;
            vuint16_t ADDR:11;
            vuint16_t DAD:1;
        } B;
    } PEDRAR_t;

    typedef union uPEDRDR {
        vuint16_t R;
    } PEDRDR_t;

    typedef union uRFSDOR {
        vuint16_t R;
    } RFSDOR_t;

    typedef union uEEIFER {
        vuint16_t R;
        struct {
            vuint16_t LRNE_OF:1;
            vuint16_t LRCE_OF:1;
            vuint16_t DRNE_OF:1;
            vuint16_t DRCE_OF:1;
            vuint16_t LRNE_IF:1;
            vuint16_t LRCE_IF:1;
            vuint16_t DRNE_IF:1;
            vuint16_t DRCE_IF:1;
            vuint16_t:4;
            vuint16_t LRNE_IE:1;
            vuint16_t LRCE_IE:1;
            vuint16_t DRNE_IE:1;
            vuint16_t DRCE_IE:1;
        } B;
    } EEIFER_t;
    
    typedef union uEERICR {
        vuint16_t R;
        struct {
            vuint16_t BDY:1;
            vuint16_t:5;
            vuint16_t ERS:2;
            vuint16_t:3;
            vuint16_t ERM:1;
            vuint16_t:2;
            vuint16_t EIM:1;
            vuint16_t EIE:1;
        } B;
    } EERICR_t;
    
    typedef union uEERAR {
        vuint16_t R;
        struct {
            vuint16_t MID:1;
            vuint16_t BANK:3;
            vuint16_t ADDR:12;
        } B;
    } EERAR_t;
    
    typedef union uEERDR {
        vuint16_t R;
    } EERDR_t;
    
    typedef union uEERCR {
        vuint16_t R;
        struct {
            vuint16_t:11;
            vuint16_t CODE:5;
        } B;
    } EERCR_t;
    
    typedef union uEEIAR {
        vuint16_t R;
        struct {
            vuint16_t MID:1;
            vuint16_t BANK:3;
            vuint16_t ADDR:12;
        } B;
    } EEIAR_t;
    
    typedef union uEEIDR {
        vuint16_t R;
    } EEIDR_t;
    
    typedef union uEEICR {
        vuint16_t R;
        struct {
            vuint16_t:11;
            vuint16_t CODE:5;
        } B;
    } EEICR_t;

    typedef union uMBDOR {
        vuint16_t R;
    } MBDOR_t;
    
    typedef union uLEETR {
        vuint16_t R;
    } LEETR_t;

    typedef struct FR_tag {
        volatile MVR_t MVR;     /*module version register *//*0  */
        volatile MCR_t MCR;     /*module configuration register *//*2  */
        volatile SYSBADHR_t SYSBADHR;   /*system memory base address high register *//*4*//* Legacy naming: Refer to SYMBADHR in the reference manual */
        volatile SYSBADLR_t SYSBADLR;   /*system memory base address low register *//*6*//* Legacy naming: Refer to SYMBADLR in the reference manual */
        volatile STBSCR_t STBSCR;       /*strobe signal control register *//*8*/
        vuint16_t FR_reserved000A;           /* A */
        volatile MBDSR_t MBDSR; /*message buffer data size register *//*C*/
        volatile MBSSUTR_t MBSSUTR;     /*message buffer segment size and utilization register *//*E  */
        volatile PEDRAR_t PEDRAR;   /* PE DRAM access register *//*10 */
        volatile PEDRDR_t PEDRDR;   /* PE DRAM data register *//*12 */
        volatile POCR_t POCR;   /*Protocol operation control register *//*14 */
        volatile GIFER_t GIFER; /*global interrupt flag and enable register *//*16 */
        volatile PIFR0_t PIFR0; /*protocol interrupt flag register 0 *//*18 */
        volatile PIFR1_t PIFR1; /*protocol interrupt flag register 1 *//*1A */
        volatile PIER0_t PIER0; /*protocol interrupt enable register 0 *//*1C */
        volatile PIER1_t PIER1; /*protocol interrupt enable register 1 *//*1E */
        volatile CHIERFR_t CHIERFR;     /*CHI error flag register *//*20 */
        volatile MBIVEC_t MBIVEC;       /*message buffer interrupt vector register *//*22 */
        volatile CASERCR_t CASERCR;     /*channel A status error counter register *//*24 */
        volatile CBSERCR_t CBSERCR;     /*channel B status error counter register *//*26 */
        volatile PSR0_t PSR0;   /*protocol status register 0 *//*28 */
        volatile PSR1_t PSR1;   /*protocol status register 1 *//*2A */
        volatile PSR2_t PSR2;   /*protocol status register 2 *//*2C */
        volatile PSR3_t PSR3;   /*protocol status register 3 *//*2E */
        volatile MTCTR_t MTCTR; /*macrotick counter register *//*30 */
        volatile CYCTR_t CYCTR; /*cycle counter register *//*32 */
        volatile SLTCTAR_t SLTCTAR;     /*slot counter channel A register *//*34 */
        volatile SLTCTBR_t SLTCTBR;     /*slot counter channel B register *//*36 */
        volatile RTCORVR_t RTCORVR;     /*rate correction value register *//*38 */
        volatile OFCORVR_t OFCORVR;     /*offset correction value register *//*3A */
        volatile CIFRR_t CIFRR; /*combined interrupt flag register *//*3C */
        volatile SYMATOR_t SYMATOR;     /*System memory access timeout register */
        volatile SFCNTR_t SFCNTR;       /*sync frame counter register *//*40 */
        volatile SFTOR_t SFTOR; /*sync frame table offset register *//*42 */
        volatile SFTCCSR_t SFTCCSR;     /*sync frame table configuration, control, status register *//*44 */
        volatile SFIDRFR_t SFIDRFR;     /*sync frame ID rejection filter register *//*46 */
        volatile SFIDAFVR_t SFIDAFVR;   /*sync frame ID acceptance filter value regiater *//*48 */
        volatile SFIDAFMR_t SFIDAFMR;   /*sync frame ID acceptance filter mask register *//*4A */
        volatile NMVR_t NMVR[6];        /*network management vector registers (12 bytes) *//*4C */
        volatile NMVLR_t NMVLR; /*network management vector length register *//*58 */
        volatile TICCR_t TICCR; /*timer configuration and control register *//*5A */
        volatile TI1CYSR_t TI1CYSR;     /*timer 1 cycle set register *//*5C */
        volatile T1MTOR_t T1MTOR;       /*timer 1 macrotick offset register *//*5E *//* Legacy naming: Refer to TI1MTOR in the reference manual */
        volatile TI2CR0_t TI2CR0;       /*timer 2 configuration register 0 *//*60 */
        volatile TI2CR1_t TI2CR1;       /*timer 2 configuration register 1 *//*62 */
        volatile SSSR_t SSSR;   /*slot status selection register *//*64 */
        volatile SSCCR_t SSCCR; /*slot status counter condition register *//*66 */
        volatile SSR_t SSR[8];  /*slot status registers 0-7 *//*68 */
        volatile SSCR_t SSCR[4];        /*slot status counter registers 0-3 *//*78 */
        volatile MTSCFR_t MTSACFR;      /*mts a config register *//*80 */
        volatile MTSCFR_t MTSBCFR;      /*mts b config register *//*82 */
        volatile RSBIR_t RSBIR; /*receive shadow buffer index register *//*84 */
        volatile RFSR_t RFSR;   /*receive fifo selection register *//*86 *//* Legacy naming: Refer to RFWMSR in the reference manual */
        volatile RFSIR_t RFSIR; /*receive fifo start index register *//*88 */
        volatile RFDSR_t RFDSR; /*receive fifo depth and size register *//*8A */
        volatile RFARIR_t RFARIR;       /*receive fifo a read index register *//*8C */
        volatile RFBRIR_t RFBRIR;       /*receive fifo b read index register *//*8E */
        volatile RFMIDAFVR_t RFMIDAFVR; /*receive fifo message ID acceptance filter value register *//*90 */
        volatile RFMIAFMR_t RFMIAFMR;   /*receive fifo message ID acceptance filter mask register *//*92 */
        volatile RFFIDRFVR_t RFFIDRFVR; /*receive fifo frame ID rejection filter value register *//*94 */
        volatile RFFIDRFMR_t RFFIDRFMR; /*receive fifo frame ID rejection filter mask register *//*96 */
        volatile RFRFCFR_t RFRFCFR;     /*receive fifo range filter configuration register *//*98 */
        volatile RFRFCTR_t RFRFCTR;     /*receive fifo range filter control register *//*9A */
        volatile LDTXSLAR_t LDTXSLAR;   /*last dynamic transmit slot channel A register *//*9C */
        volatile LDTXSLBR_t LDTXSLBR;   /*last dynamic transmit slot channel B register *//*9E */
        volatile PCR0_t PCR0;   /*protocol configuration register 0 *//*A0 */
        volatile PCR1_t PCR1;   /*protocol configuration register 1 *//*A2 */
        volatile PCR2_t PCR2;   /*protocol configuration register 2 *//*A4 */
        volatile PCR3_t PCR3;   /*protocol configuration register 3 *//*A6 */
        volatile PCR4_t PCR4;   /*protocol configuration register 4 *//*A8 */
        volatile PCR5_t PCR5;   /*protocol configuration register 5 *//*AA */
        volatile PCR6_t PCR6;   /*protocol configuration register 6 *//*AC */
        volatile PCR7_t PCR7;   /*protocol configuration register 7 *//*AE */
        volatile PCR8_t PCR8;   /*protocol configuration register 8 *//*B0 */
        volatile PCR9_t PCR9;   /*protocol configuration register 9 *//*B2 */
        volatile PCR10_t PCR10; /*protocol configuration register 10 *//*B4 */
        volatile PCR11_t PCR11; /*protocol configuration register 11 *//*B6 */
        volatile PCR12_t PCR12; /*protocol configuration register 12 *//*B8 */
        volatile PCR13_t PCR13; /*protocol configuration register 13 *//*BA */
        volatile PCR14_t PCR14; /*protocol configuration register 14 *//*BC */
        volatile PCR15_t PCR15; /*protocol configuration register 15 *//*BE */
        volatile PCR16_t PCR16; /*protocol configuration register 16 *//*C0 */
        volatile PCR17_t PCR17; /*protocol configuration register 17 *//*C2 */
        volatile PCR18_t PCR18; /*protocol configuration register 18 *//*C4 */
        volatile PCR19_t PCR19; /*protocol configuration register 19 *//*C6 */
        volatile PCR20_t PCR20; /*protocol configuration register 20 *//*C8 */
        volatile PCR21_t PCR21; /*protocol configuration register 21 *//*CA */
        volatile PCR22_t PCR22; /*protocol configuration register 22 *//*CC */
        volatile PCR23_t PCR23; /*protocol configuration register 23 *//*CE */
        volatile PCR24_t PCR24; /*protocol configuration register 24 *//*D0 */
        volatile PCR25_t PCR25; /*protocol configuration register 25 *//*D2 */
        volatile PCR26_t PCR26; /*protocol configuration register 26 *//*D4 */
        volatile PCR27_t PCR27; /*protocol configuration register 27 *//*D6 */
        volatile PCR28_t PCR28; /*protocol configuration register 28 *//*D8 */
        volatile PCR29_t PCR29; /*protocol configuration register 29 *//*DA */
        volatile PCR30_t PCR30; /*protocol configuration register 30 *//*DC */
        vuint16_t FR_reserved00DE[4];
        volatile RFSDOR_t RFSDOR;         /* Receive FIFO Start Data Offset Register *//*E6 */
        volatile RFSYMBADHR_t RFSYMBADHR; /* Receive FIFO System Memory Base Address High Register *//*E8 */
        volatile RFSYMBADLR_t RFSYMBADLR; /* Receive FIFO System Memory Base Address Low Register *//*EA */
        volatile RFPTR_t RFPTR;           /* Receive FIFO Periodic Timer Register *//*EC */
        volatile RFPTR_t RFFLPCR;         /* Receive FIFO Fill Level and POP Count Register *//*EE */
        volatile EEIFER_t EEIFER;         /* ECC Error Interrupt Flag and Enable Register *//*F0 */
        volatile EERICR_t EERICR;         /* ECC Error Report and Injection Control Register *//*F2 */
        volatile EERAR_t EERAR;           /* ECC Error Report Address Register *//*F4 */
        volatile EERDR_t EERDR;           /* ECC Error Report Data Register *//*F6 */
        volatile EERCR_t EERCR;           /* ECC Error Report Code Register *//*F8 */
        volatile EEIAR_t EEIAR;           /* ECC Error Injection Address Register *//*FA */
        volatile EEIDR_t EEIDR;           /* ECC Error Injection Data Register *//*FC */
        volatile EEICR_t EEICR;           /* ECC Error Injection Code Register *//*FE */
        vuint16_t FR_reserved0100[896];
        volatile MSG_BUFF_CCS_t MBCCS[128];     /* message buffer configuration, control & status registers 0-127 *//*800-BFF */
        vuint16_t FR_reserved0C00[512];
        volatile MBDOR_t MBDOR[132];     /* message buffer data field offset registers 0-131 *//*1000-1107 */
        volatile LEETR_t LEETR[6];     /* LRAM ECC error test registers 0-5 *//*1008-1113 */
        vuint16_t FR_reserved1114[1910];
    } FR_tag_t;

    typedef union uF_HEADER     /* frame header */
    {
        struct {
            vuint16_t:1;
            vuint16_t PPI:1;    /* Payload Preamble Indicator */
            vuint16_t NUF:1;    /* Null Frame Indicator */
            vuint16_t SYF:1;    /* Sync Frame Indicator */
            vuint16_t SUF:1;    /* Startup Frame Indicator */
            vuint16_t FID:11;   /* Frame ID */
            vuint16_t:2;
            vuint16_t CYCCNT:6; /* Cycle Count */
            vuint16_t:1;
            vuint16_t PLDLEN:7; /* Payload Length */
            vuint16_t:5;
            vuint16_t HDCRC:11; /* Header CRC */
        } B;
        vuint16_t WORDS[3];
    } F_HEADER_t;
    typedef union uS_STSTUS     /* slot status */
    {
        struct {
            vuint16_t VFB:1;    /* Valid Frame on channel B */
            vuint16_t SYB:1;    /* Sync Frame Indicator channel B */
            vuint16_t NFB:1;    /* Null Frame Indicator channel B */
            vuint16_t SUB:1;    /* Startup Frame Indicator channel B */
            vuint16_t SEB:1;    /* Syntax Error on channel B */
            vuint16_t CEB:1;    /* Content Error on channel B */
            vuint16_t BVB:1;    /* Boundary Violation on channel B */
            vuint16_t CH:1;     /* Channel */
            vuint16_t VFA:1;    /* Valid Frame on channel A */
            vuint16_t SYA:1;    /* Sync Frame Indicator channel A */
            vuint16_t NFA:1;    /* Null Frame Indicator channel A */
            vuint16_t SUA:1;    /* Startup Frame Indicator channel A */
            vuint16_t SEA:1;    /* Syntax Error on channel A */
            vuint16_t CEA:1;    /* Content Error on channel A */
            vuint16_t BVA:1;    /* Boundary Violation on channel A */
              vuint16_t:1;
        } RX;
        struct {
            vuint16_t VFB:1;    /* Valid Frame on channel B */
            vuint16_t SYB:1;    /* Sync Frame Indicator channel B */
            vuint16_t NFB:1;    /* Null Frame Indicator channel B */
            vuint16_t SUB:1;    /* Startup Frame Indicator channel B */
            vuint16_t SEB:1;    /* Syntax Error on channel B */
            vuint16_t CEB:1;    /* Content Error on channel B */
            vuint16_t BVB:1;    /* Boundary Violation on channel B */
            vuint16_t TCB:1;    /* Tx Conflict on channel B */
            vuint16_t VFA:1;    /* Valid Frame on channel A */
            vuint16_t SYA:1;    /* Sync Frame Indicator channel A */
            vuint16_t NFA:1;    /* Null Frame Indicator channel A */
            vuint16_t SUA:1;    /* Startup Frame Indicator channel A */
            vuint16_t SEA:1;    /* Syntax Error on channel A */
            vuint16_t CEA:1;    /* Content Error on channel A */
            vuint16_t BVA:1;    /* Boundary Violation on channel A */
            vuint16_t TCA:1;    /* Tx Conflict on channel A */
        } TX;
        vuint16_t R;
    } S_STATUS_t;

    typedef struct uMB_HEADER   /* message buffer header */
    {
        F_HEADER_t FRAME_HEADER;
        vuint16_t DATA_OFFSET;
        S_STATUS_t SLOT_STATUS;
    } MB_HEADER_t;

/****************************************************************************/
/*                          MODULE : DTS                                    */
/****************************************************************************/

    struct DTS_tag {
        union {
            vuint32_t R;
            struct {
                vuint32_t:31;        /*  */
                vuint32_t DTS_EN:1; /* Enable for the DTS Module */
            } B;
        } ENABLE;                /* DTS_ENABLE @baseaddress */

        union 
        {
        	vuint32_t R;
            struct {
                vuint32_t AD31:1;       /* Startup register MSB */
                vuint32_t AD30:1;       /* */
                vuint32_t AD29:1;       /* */
                vuint32_t AD28:1;       /* */
                vuint32_t AD27:1;       /* */
                vuint32_t AD26:1;       /* */
                vuint32_t AD25:1;       /* */
                vuint32_t AD24:1;       /* */
                vuint32_t AD23:1;       /* */
                vuint32_t AD22:1;       /* */
                vuint32_t AD21:1;       /* */
                vuint32_t AD20:1;       /* */
                vuint32_t AD19:1;       /* */
                vuint32_t AD18:1;       /* */
                vuint32_t AD17:1;       /* */
                vuint32_t AD16:1;       /* */
                vuint32_t AD15:1;       /* */
                vuint32_t AD14:1;       /* */
                vuint32_t AD13:1;       /* */
                vuint32_t AD12:1;       /* */
                vuint32_t AD11:1;       /* */
                vuint32_t AD10:1;       /* */
                vuint32_t AD9:1;       /* */
                vuint32_t AD8:1;       /* */
                vuint32_t AD7:1;       /* */
                vuint32_t AD6:1;       /* */
                vuint32_t AD5:1;       /* */
                vuint32_t AD4:1;       /* */
                vuint32_t AD3:1;       /* */
                vuint32_t AD2:1;       /* */
                vuint32_t AD1:1;       /* */
                vuint32_t AD0:1;       /* Startup Register LSB */
            } B;
        } STARTUP;                /* DTS_STARTUP @baseaddress + 0x4*/

        union 
        {
        	vuint32_t R;
            struct {
                vuint32_t ST31:1;       /* Semaphore register MSB */
                vuint32_t ST30:1;       /* */
                vuint32_t ST29:1;       /* */
                vuint32_t ST28:1;       /* */
                vuint32_t ST27:1;       /* */
                vuint32_t ST26:1;       /* */
                vuint32_t ST25:1;       /* */
                vuint32_t ST24:1;       /* */
                vuint32_t ST23:1;       /* */
                vuint32_t ST22:1;       /* */
                vuint32_t ST21:1;       /* */
                vuint32_t ST20:1;       /* */
                vuint32_t ST19:1;       /* */
                vuint32_t ST18:1;       /* */
                vuint32_t ST17:1;       /* */
                vuint32_t ST16:1;       /* */
                vuint32_t ST15:1;       /* */
                vuint32_t ST14:1;       /* */
                vuint32_t ST13:1;       /* */
                vuint32_t ST12:1;       /* */
                vuint32_t ST11:1;       /* */
                vuint32_t ST10:1;       /* */
                vuint32_t ST9:1;       /* */
                vuint32_t ST8:1;       /* */
                vuint32_t ST7:1;       /* */
                vuint32_t ST6:1;       /* */
                vuint32_t ST5:1;       /* */
                vuint32_t ST4:1;       /* */
                vuint32_t ST3:1;       /* */
                vuint32_t ST2:1;       /* */
                vuint32_t ST1:1;       /* */
                vuint32_t ST0:1;       /* Semaphore Register LSB */
            } B;
        } SEMAPHORE;                /* DTS_STEMAPHORE @BaseAddress + 0x8 */        
    }; /* End of DTS Module */

/****************************************************************************/
/*                          MODULE : CCU                                    */
/****************************************************************************/

    struct CCU_tag {
    
        union {                 /* CCU Configuration/Error Status Register */
            vuint32_t R;
            struct {
                vuint32_t CP1ERR:2;
                vuint32_t CP0ERR:2;
                vuint32_t SRSTFLAG:1;
                vuint32_t:1;
                vuint32_t CP1IDLE:1;
                vuint32_t CP0IDLE:1;
                vuint32_t:2;
                vuint32_t CP1IEN:1;
                vuint32_t CP0IEN:1;
                vuint32_t:4;
                vuint32_t M3WMEN:1;
                vuint32_t M2WMEN:1;
                vuint32_t M1WMEN:1;
                vuint32_t M0WMEN:1;
                vuint32_t:10;
                vuint32_t SRSTEN:1;
                vuint32_t ENB:1;
            } B;
        } CESR;
        
        uint32_t CCU_reserved0004[3]; /* 0x0004-0x000F */
        
        struct {
            union {             /* CCU Error Address Registers */
                vuint32_t R;
                struct {
                    vuint32_t EADDR:32;
                } B;
            } EAR;
            
            union {             /* CCU Error Detail Registers */
                vuint32_t R;
                struct {
                    vuint32_t EACD:16;
                    vuint32_t EPID:8;
                    vuint32_t EMN:4;
                    vuint32_t EATTR:3;
                    vuint32_t ERW:1;
                } B;
            } EDR;
            
            uint32_t CCU_CORE_reserved0008[2]; /* 0x0008-0x000F */
            
        } CORE[2];
        
        union {           /* CCU Interrupt Registers */
            vuint32_t R;
            struct {
                vuint32_t:30;
                vuint32_t OIF:1;
                vuint32_t EIF:1;
            } B;
        } IR[2];
        
        uint32_t CCU_reserved0038[4082];  /* 0x0038-0x3FFF */
    
    };

/* ----------------------------------------------------------------------------
   -- SEMA42 Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SEMA42_Peripheral_Access_Layer SEMA42 Peripheral Access Layer
 * @{
 */


/** SEMA42 - Size of Registers Arrays */
#define SEMA42_GATE_COUNT                        16u
#define SEMA42_CPINE_COUNT                       2u
#define SEMA42_CPNTF_COUNT                       2u

/** SEMA42 - Register Layout Typedef */
typedef struct {
  __IO uint8_t GATE[SEMA42_GATE_COUNT];            /**< Semaphores Gate 0 Register..Semaphores Gate 15 Register, array offset: 0x0, array step: 0x1 */
       uint8_t RESERVED_0[48];
  struct {                                         /* offset: 0x40, array step: 0x8 */
    __IO uint16_t CPINE;                             /**< Semaphores Processor n IRQ Notification Enable, array offset: 0x40, array step: 0x8 */
         uint8_t RESERVED_0[6];
  } CPINE[SEMA42_CPINE_COUNT];
       uint8_t RESERVED_1[48];
  struct {                                         /* offset: 0x80, array step: 0x8 */
    __IO uint16_t CPNTF;                             /**< Semaphores Processor n IRQ Notification, array offset: 0x80, array step: 0x8 */
         uint8_t RESERVED_0[6];
  } CPNTF[SEMA42_CPNTF_COUNT];
       uint8_t RESERVED_2[112];
  union {                                          /* offset: 0x100 */
    __I  uint16_t R;                                 /**< Reset Gate Read, offset: 0x100 */
    __O  uint16_t W;                                 /**< Reset Gate Write, offset: 0x100 */
  } RSTGT;
       uint8_t RESERVED_3[2];
  __IO uint16_t RSTNTF;                            /**< Semaphores (Secure) Reset IRQ Notification, offset: 0x104 */
} SEMA42_Type, *SEMA42_MemMapPtr;

 /** Number of instances of the SEMA42 module. */
#define SEMA42_INSTANCE_COUNT                    (1u)


/* SEMA42 - Peripheral instance base addresses */
/** Peripheral SEMA42 base address */
#define SEMA42_BASE                              (0xFFF24000u)
/** Peripheral SEMA42 base pointer */
#define SEMA42                                   ((SEMA42_Type *)SEMA42_BASE)
/** Array initializer of SEMA42 peripheral base addresses */
#define SEMA42_BASE_ADDRS                        { SEMA42_BASE }
/** Array initializer of SEMA42 peripheral base pointers */
#define SEMA42_BASE_PTRS                         { SEMA42 }

/* ----------------------------------------------------------------------------
   -- SEMA42 Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup SEMA42_Register_Masks SEMA42 Register Masks
 * @{
 */

/* GATE Bit Fields */
#define SEMA42_GATE_GTFSM_MASK                   0x3u
#define SEMA42_GATE_GTFSM_SHIFT                  0u
#define SEMA42_GATE_GTFSM_WIDTH                  2u
#define SEMA42_GATE_GTFSM(x)                     (((uint8_t)(((uint8_t)(x))<<SEMA42_GATE_GTFSM_SHIFT))&SEMA42_GATE_GTFSM_MASK)
/* CPINE Bit Fields */
#define SEMA42_CPINE_INE15_MASK                  0x1u
#define SEMA42_CPINE_INE15_SHIFT                 0u
#define SEMA42_CPINE_INE15_WIDTH                 1u
#define SEMA42_CPINE_INE15(x)                    (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE15_SHIFT))&SEMA42_CPINE_INE15_MASK)
#define SEMA42_CPINE_INE14_MASK                  0x2u
#define SEMA42_CPINE_INE14_SHIFT                 1u
#define SEMA42_CPINE_INE14_WIDTH                 1u
#define SEMA42_CPINE_INE14(x)                    (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE14_SHIFT))&SEMA42_CPINE_INE14_MASK)
#define SEMA42_CPINE_INE13_MASK                  0x4u
#define SEMA42_CPINE_INE13_SHIFT                 2u
#define SEMA42_CPINE_INE13_WIDTH                 1u
#define SEMA42_CPINE_INE13(x)                    (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE13_SHIFT))&SEMA42_CPINE_INE13_MASK)
#define SEMA42_CPINE_INE12_MASK                  0x8u
#define SEMA42_CPINE_INE12_SHIFT                 3u
#define SEMA42_CPINE_INE12_WIDTH                 1u
#define SEMA42_CPINE_INE12(x)                    (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE12_SHIFT))&SEMA42_CPINE_INE12_MASK)
#define SEMA42_CPINE_INE11_MASK                  0x10u
#define SEMA42_CPINE_INE11_SHIFT                 4u
#define SEMA42_CPINE_INE11_WIDTH                 1u
#define SEMA42_CPINE_INE11(x)                    (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE11_SHIFT))&SEMA42_CPINE_INE11_MASK)
#define SEMA42_CPINE_INE10_MASK                  0x20u
#define SEMA42_CPINE_INE10_SHIFT                 5u
#define SEMA42_CPINE_INE10_WIDTH                 1u
#define SEMA42_CPINE_INE10(x)                    (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE10_SHIFT))&SEMA42_CPINE_INE10_MASK)
#define SEMA42_CPINE_INE9_MASK                   0x40u
#define SEMA42_CPINE_INE9_SHIFT                  6u
#define SEMA42_CPINE_INE9_WIDTH                  1u
#define SEMA42_CPINE_INE9(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE9_SHIFT))&SEMA42_CPINE_INE9_MASK)
#define SEMA42_CPINE_INE8_MASK                   0x80u
#define SEMA42_CPINE_INE8_SHIFT                  7u
#define SEMA42_CPINE_INE8_WIDTH                  1u
#define SEMA42_CPINE_INE8(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE8_SHIFT))&SEMA42_CPINE_INE8_MASK)
#define SEMA42_CPINE_INE7_MASK                   0x100u
#define SEMA42_CPINE_INE7_SHIFT                  8u
#define SEMA42_CPINE_INE7_WIDTH                  1u
#define SEMA42_CPINE_INE7(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE7_SHIFT))&SEMA42_CPINE_INE7_MASK)
#define SEMA42_CPINE_INE6_MASK                   0x200u
#define SEMA42_CPINE_INE6_SHIFT                  9u
#define SEMA42_CPINE_INE6_WIDTH                  1u
#define SEMA42_CPINE_INE6(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE6_SHIFT))&SEMA42_CPINE_INE6_MASK)
#define SEMA42_CPINE_INE5_MASK                   0x400u
#define SEMA42_CPINE_INE5_SHIFT                  10u
#define SEMA42_CPINE_INE5_WIDTH                  1u
#define SEMA42_CPINE_INE5(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE5_SHIFT))&SEMA42_CPINE_INE5_MASK)
#define SEMA42_CPINE_INE4_MASK                   0x800u
#define SEMA42_CPINE_INE4_SHIFT                  11u
#define SEMA42_CPINE_INE4_WIDTH                  1u
#define SEMA42_CPINE_INE4(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE4_SHIFT))&SEMA42_CPINE_INE4_MASK)
#define SEMA42_CPINE_INE3_MASK                   0x1000u
#define SEMA42_CPINE_INE3_SHIFT                  12u
#define SEMA42_CPINE_INE3_WIDTH                  1u
#define SEMA42_CPINE_INE3(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE3_SHIFT))&SEMA42_CPINE_INE3_MASK)
#define SEMA42_CPINE_INE2_MASK                   0x2000u
#define SEMA42_CPINE_INE2_SHIFT                  13u
#define SEMA42_CPINE_INE2_WIDTH                  1u
#define SEMA42_CPINE_INE2(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE2_SHIFT))&SEMA42_CPINE_INE2_MASK)
#define SEMA42_CPINE_INE1_MASK                   0x4000u
#define SEMA42_CPINE_INE1_SHIFT                  14u
#define SEMA42_CPINE_INE1_WIDTH                  1u
#define SEMA42_CPINE_INE1(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE1_SHIFT))&SEMA42_CPINE_INE1_MASK)
#define SEMA42_CPINE_INE0_MASK                   0x8000u
#define SEMA42_CPINE_INE0_SHIFT                  15u
#define SEMA42_CPINE_INE0_WIDTH                  1u
#define SEMA42_CPINE_INE0(x)                     (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE0_SHIFT))&SEMA42_CPINE_INE0_MASK)
/* CPNTF Bit Fields */
#define SEMA42_CPNTF_GNn_MASK                    0xFFFFu
#define SEMA42_CPNTF_GNn_SHIFT                   0u
#define SEMA42_CPNTF_GNn_WIDTH                   16u
#define SEMA42_CPNTF_GNn(x)                      (((uint16_t)(((uint16_t)(x))<<SEMA42_CPNTF_GNn_SHIFT))&SEMA42_CPNTF_GNn_MASK)
/* RSTGT_R Bit Fields */
#define SEMA42_RSTGT_R_RSTGTN_MASK               0xFFu
#define SEMA42_RSTGT_R_RSTGTN_SHIFT              0u
#define SEMA42_RSTGT_R_RSTGTN_WIDTH              8u
#define SEMA42_RSTGT_R_RSTGTN(x)                 (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTGT_R_RSTGTN_SHIFT))&SEMA42_RSTGT_R_RSTGTN_MASK)
#define SEMA42_RSTGT_R_RSTGMS_MASK               0x700u
#define SEMA42_RSTGT_R_RSTGMS_SHIFT              8u
#define SEMA42_RSTGT_R_RSTGMS_WIDTH              3u
#define SEMA42_RSTGT_R_RSTGMS(x)                 (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTGT_R_RSTGMS_SHIFT))&SEMA42_RSTGT_R_RSTGMS_MASK)
#define SEMA42_RSTGT_R_RSTGSM_MASK               0x3000u
#define SEMA42_RSTGT_R_RSTGSM_SHIFT              12u
#define SEMA42_RSTGT_R_RSTGSM_WIDTH              2u
#define SEMA42_RSTGT_R_RSTGSM(x)                 (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTGT_R_RSTGSM_SHIFT))&SEMA42_RSTGT_R_RSTGSM_MASK)
/* RSTGT_W Bit Fields */
#define SEMA42_RSTGT_W_RSTGTN_MASK               0xFFu
#define SEMA42_RSTGT_W_RSTGTN_SHIFT              0u
#define SEMA42_RSTGT_W_RSTGTN_WIDTH              8u
#define SEMA42_RSTGT_W_RSTGTN(x)                 (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTGT_W_RSTGTN_SHIFT))&SEMA42_RSTGT_W_RSTGTN_MASK)
#define SEMA42_RSTGT_W_RSTGDP_MASK               0xFF00u
#define SEMA42_RSTGT_W_RSTGDP_SHIFT              8u
#define SEMA42_RSTGT_W_RSTGDP_WIDTH              8u
#define SEMA42_RSTGT_W_RSTGDP(x)                 (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTGT_W_RSTGDP_SHIFT))&SEMA42_RSTGT_W_RSTGDP_MASK)
/* RSTNTF Bit Fields */
#define SEMA42_RSTNTF_RSTNTN_MASK                0xFFu
#define SEMA42_RSTNTF_RSTNTN_SHIFT               0u
#define SEMA42_RSTNTF_RSTNTN_WIDTH               8u
#define SEMA42_RSTNTF_RSTNTN(x)                  (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTNTF_RSTNTN_SHIFT))&SEMA42_RSTNTF_RSTNTN_MASK)
#define SEMA42_RSTNTF_RSTNSM_RSTNMS_RSTNDP_MASK  0xFF00u
#define SEMA42_RSTNTF_RSTNSM_RSTNMS_RSTNDP_SHIFT 8u
#define SEMA42_RSTNTF_RSTNSM_RSTNMS_RSTNDP_WIDTH 8u
#define SEMA42_RSTNTF_RSTNSM_RSTNMS_RSTNDP(x)    (((uint16_t)(((uint16_t)(x))<<SEMA42_RSTNTF_RSTNSM_RSTNMS_RSTNDP_SHIFT))&SEMA42_RSTNTF_RSTNSM_RSTNMS_RSTNDP_MASK)

/*!
 * @}
 */ /* end of group SEMA42_Register_Masks */


/*!
 * @}
 */ /* end of group SEMA42_Peripheral_Access_Layer */


/****************************************************************************/
/*                          MODULE : CRC                                    */
/****************************************************************************/
struct CRC_SUB_tag {
    union {
        vuint32_t R;      /* CRC Configuration Register */
        struct {
            vuint32_t:29;
            vuint32_t POLYG:1;
            vuint32_t SWAP:1;
            vuint32_t INV:1;
        } B;
    } CRC_CFG;

    union {               /* CRC Input Register */
        vuint8_t BYTE[4];       /* Data buffer in Bytes (8 bits) */
        vuint16_t HALFWORD[2];  /* Data buffer in Half-words (16 bits) */
        vuint32_t WORD;         /* Data buffer in words (32 bits) */
        vuint32_t R;            /* Data buffer in words (32 bits) */
    } CRC_INP;

    union {               /*CRC Current Status Register */
        vuint8_t BYTE[4];       /* Data buffer in Bytes (8 bits) */
        vuint16_t HALFWORD[2];  /* Data buffer in Half-words (16 bits) */
        vuint32_t WORD;         /* Data buffer in words (32 bits) */
        vuint32_t R;            /* Data buffer in words (32 bits) */
    } CRC_CSTAT;

    union {                /* CRC Output Register */
        vuint8_t BYTE[4];       /* Data buffer in Bytes (8 bits) */
        vuint16_t HALFWORD[2];  /* Data buffer in Half-words (16 bits) */
        vuint32_t WORD;         /* Data buffer in words (32 bits) */
        vuint32_t R;            /* Data buffer in words (32 bits) */
    } CRC_OUTP;
}; /* end of CRC_SUB_tag */

struct CRC_tag {
    struct CRC_SUB_tag CNTX[3];
}; /* end of CRC_tag */

/****************************************************************************/
/*                          MODULE : STCU                                   */
/****************************************************************************/
struct STCU_tag {
    union {
        vuint32_t R;      /* STCU Control Register */
        struct {
            vuint32_t:1;
            vuint32_t LBE:1;
            vuint32_t:2;
            vuint32_t FLF:2;
            vuint32_t:1;
            vuint32_t FCF:1;
            vuint32_t LBIST_CLK_DIV:2;
            vuint32_t:5;
            vuint32_t SOFT_RESET:1;
            vuint32_t:7;
            vuint32_t IE:1;
            vuint32_t:8;
        } B;
    } CTRL;

    union {
        vuint32_t R;      /* STCU Enable Register */
        struct {
            vuint32_t:15;
            vuint32_t STCU_ABORT:1;
            vuint32_t:15;
            vuint32_t STCU_START:1;
        } B;
    } ENABLE;

    union {
        vuint32_t R;      /* STCU Status Register */
        struct {
            vuint32_t:5;
            vuint32_t STCUR:1;
            vuint32_t LBISTR:1;
            vuint32_t:2;
            vuint32_t DNE:1;
            vuint32_t LDNE:1;
            vuint32_t:6;
            vuint32_t ABORT:1;
            vuint32_t LOCK:1;
            vuint32_t INIT_SEQ:2;
            vuint32_t WDE:2;
            vuint32_t:1;
            vuint32_t CRC_RESULT:8;
        } B;
    } STAT;

    union {
        vuint32_t R;      /* STCU Watchdog Timer */
    } WDGT;

    vuint32_t STCU_reserved0010; /* 0x0010-0x0013 */

    union {
        vuint32_t R;      /* STCU Unlock Key */
        struct {
            vuint32_t STCU_KEY:32;
        } B;
    } KEY;

    union {
        vuint32_t R;      /* LBIST Control Register */
        struct {
            vuint32_t:1;
            vuint32_t WINDOW_SIZE:3;
            vuint32_t:1;
            vuint32_t PFT:1;
            vuint32_t DM:1;
            vuint32_t SCM:1;
            vuint32_t SCAN_ENABLE_ON:4;
            vuint32_t SCAN_ENABLE_OFF:4;
            vuint32_t:5;
            vuint32_t SHIFT_SPEED:3;
            vuint32_t:3;
            vuint32_t LSER:1;
            vuint32_t:3;
            vuint32_t DEBUG:1;
        } B;
    } LBIST_CTRL;

    union {
        vuint32_t R;      /* LBIST Pattern Counter Start Register */
    } LBIST_PC_START;

    union {
        vuint32_t R;      /* LBIST Pattern Counter End Register */
    } LBIST_PC_END;

    union {
        vuint32_t R;      /* LBIST Pseudo-Random Number High */
    } LBIST_PRPGH;

    union {
        vuint32_t R;      /* LBIST Pseudo-Random Number Low */
    } LBIST_PRPGL;

    union {
        vuint32_t R;      /* LBIST Enable Register */
        struct {
            vuint32_t:30;
            vuint32_t LBE1:1;
            vuint32_t LBE0:1;
        } B;
    } LBIST_ENABLE;

    union {
        vuint32_t R;      /* LBIST Status Register */
        struct {
            vuint32_t:14;
            vuint32_t LBD1:1;
            vuint32_t LBD0:1;
            vuint32_t:16;
        } B;
    } LBIST_STATUS;

    vuint32_t STCU_reserved0034[7]; /* 0x0034-0x004F */

    union {
        vuint32_t R;      /* STCU Interrupt Enable/Status Register */
        struct {
            vuint32_t:31;
            vuint32_t IFLAG:1;
        } B;
    } INTERRUPT;

    union {
        vuint32_t R;      /* STCU Current Watchdog Timer */
    } CURRENT_WDGT;

    vuint32_t STCU_reserved0058[10]; /* 0x0058-0x007F */

    union {
        vuint32_t R;      /* LBIST 0 MISRH Register */
    } LBIST_MISRH0;

    union {
        vuint32_t R;      /* LBIST 0 MISRL Register */
    } LBIST_MISRL0;

    union {
        vuint32_t R;      /* LBIST 1 MISRH Register */
    } LBIST_MISRH1;

    union {
        vuint32_t R;      /* LBIST 1 MISRL Register */
    } LBIST_MISRL1;

}; /* end of STCU_tag */

/****************************************************************************/
/* Define memories */

#define SRAM_START    0x40000000
#define SRAM_SIZE        0x60000
#define SRAM_END      0x4005FFFF

#define FLASH_START   0x00000000
#define FLASH_SIZE      0x600000
#define FLASH_END     0x005FFFFF

/* Define instances of modules */
#define ETPU_C      (*( struct ETPU_C_tag *)     0xC3E20000)
#define ETPU_C_DATA_RAM      (*( uint32_t *)              0xC3E28000)
#define ETPU_C_DATA_RAM_END                               0xC3E28BFC 
#define ETPU_C_DATA_RAM_EXT  (*( uint32_t *)              0xC3E2C000)
#define C_CODE_RAM           (*( uint32_t *)              0xC3E30000)
#define ETPU_C_CODE_RAM      (*( uint32_t *)              0xC3E30000)

#define FMPLL     (*( struct FMPLL_tag *)      0xC3F80000)
#define EBI       (*( struct EBI_tag *)        0xC3F84000)
#define FLASH_A   (*( struct FLASH_tag *)      0xC3F88000)
#define FLASH_B   (*( struct FLASH_tag *)      0xC3F8C000)
#define DTS       (*( struct DTS_tag *)        0xC3F9C000)

#define EMIOS     (*( struct EMIOS_tag *)      0xC3FA0000)
#define PMC       (*( struct PMC_tag *)        0xC3FBC000)

#define ETPU         (*( struct ETPU_tag *)       0xC3FC0000)
#define ETPU_AB      (*( struct ETPU_tag *)       0xC3FC0000)
#define ETPU_DATA_RAM         (*( uint32_t *)              0xC3FC8000)
#define ETPU_AB_DATA_RAM      (*( uint32_t *)              0xC3FC8000)
#define ETPU_DATA_RAM_END                                  0xC3FC97FC 
#define ETPU_AB_DATA_RAM_END                               0xC3FC97FC 
#define ETPU_DATA_RAM_EXT     (*( uint32_t *)              0xC3FCC000)
#define ETPU_AB_DATA_RAM_EXT  (*( uint32_t *)              0xC3FCC000)
#define CODE_RAM              (*( uint32_t *)              0xC3FD0000)
#define AB_CODE_RAM           (*( uint32_t *)              0xC3FD0000)
#define ETPU_CODE_RAM         (*( uint32_t *)              0xC3FD0000)
#define ETPU_AB_CODE_RAM      (*( uint32_t *)              0xC3FD0000)

#define STCU      (*( struct STCU_tag *)       0xC3FF4000)

#define CRC       (*( struct CRC_tag *)        0xFFE68000)

#define XBAR      (*( struct XBAR_tag *)       0xFFF04000)
#define MPU       (*( struct MPU_tag *)        0xFFF10000)
#define SWT_B     (*( struct SWT_tag *)        0xFFF34000)
#define SWT       (*( struct SWT_tag *)        0xFFF38000)
#define SWT_A     (*( struct SWT_tag *)        0xFFF38000)
#define STM       (*( struct STM_tag *)        0xFFF3C000)
#define ECSM      (*( struct ECSM_tag *)       0xFFF40000)
#define EDMA EDMA_A
#define EDMA_A    (*( struct EDMA_tag *)       0xFFF44000)
#define CCU       (*( struct CCU_tag *)        0xFFF50000)
#define EDMA_B    (*( struct EDMA_tag *)       0xFFF54000)

#define EQADC EQADC_A
#define EQADC_A   (*( struct EQADC_tag *)      0xFFF80000)
#define EQADC_B   (*( struct EQADC_tag *)      0xFFF84000)

#define DECFIL_A   (*( struct DECFIL_tag *)      0xFFF88000)
#define DECFIL_B   (*( struct DECFIL_tag *)      0xFFF88800)
#define DECFIL_C   (*( struct DECFIL_tag *)      0xFFF89000)
#define DECFIL_D   (*( struct DECFIL_tag *)      0xFFF89800)
#define DECFIL_E   (*( struct DECFIL_tag *)      0xFFF8A000)
#define DECFIL_F   (*( struct DECFIL_tag *)      0xFFF8A800)
#define DECFIL_G   (*( struct DECFIL_tag *)      0xFFF8B000)
#define DECFIL_H   (*( struct DECFIL_tag *)      0xFFF8B800)
#define DECFIL_I   (*( struct DECFIL_tag *)      0xFFF8C000)
#define DECFIL_J   (*( struct DECFIL_tag *)      0xFFF8C800)
#define DECFIL_K   (*( struct DECFIL_tag *)      0xFFF8D000)
#define DECFIL_L   (*( struct DECFIL_tag *)      0xFFF8D800)

#define DSPI_A    (*( struct DSPI_tag *)       0xFFF90000)
#define DSPI_B    (*( struct DSPI_tag *)       0xFFF94000)
#define DSPI_C    (*( struct DSPI_tag *)       0xFFF98000)
#define DSPI_D    (*( struct DSPI_tag *)       0xFFF9C000)
#define DSPI_E    (*( struct DSPI_tag *)       0xFFFA0000)

/*-------------------- FLEXCAN -------------------------*/

#define CAN_INSTANCE_COUNT                       (4u)
/* CAN - Peripheral instance base addresses */
/** Peripheral CAN_0 base address */
#define CAN_0_BASE                               (0xFFFC0000u)
/** Peripheral CAN_0 base pointer */
#define CAN_0                                    ((CAN_Type *)CAN_0_BASE)
/** Peripheral CAN_1 base address */
#define CAN_1_BASE                               (0xFFFC4000u)
/** Peripheral CAN_1 base pointer */
#define CAN_1                                    ((CAN_Type *)CAN_1_BASE)
/** Peripheral CAN_2 base address */
#define CAN_2_BASE                               (0xC3E60000u)
/** Peripheral CAN_2 base pointer */
#define CAN_2                                    ((CAN_Type *)CAN_2_BASE)
/** Peripheral CAN_3 base address */
#define CAN_3_BASE                               (0xC3E64000u)
/** Peripheral CAN_3 base pointer */
#define CAN_3                                    ((CAN_Type *)CAN_3_BASE)
/** Array initializer of CAN peripheral base addresses */
#define CAN_BASE_ADDRS                           { CAN_0_BASE, CAN_1_BASE, CAN_2_BASE, CAN_3_BASE }
/** Array initializer of CAN peripheral base pointers */
#define CAN_BASE_PTRS                            { CAN_0, CAN_1, CAN_2, CAN_3 }

/** Interrupt vectors for the CAN peripheral type */
#define CAN_Rx_Warning_IRQS                      { CAN0_ESR1_IRQn, CAN1_ESR1_IRQn,\
                                                   CAN2_ESR1_IRQn, CAN3_ESR1_IRQn }

#define CAN_Tx_Warning_IRQS                      { CAN0_ESR1_IRQn, CAN1_ESR1_IRQn,\
                                                   CAN2_ESR1_IRQn, CAN3_ESR1_IRQn }

#define CAN_Error_IRQS                           { CAN0_ESR2_IRQn, CAN1_ESR2_IRQn,\
                                                   CAN2_ESR2_IRQn, CAN3_ESR2_IRQn }

#define CAN_Bus_Off_IRQS                         { CAN0_ESR1_IRQn, CAN1_ESR1_IRQn,\
                                                   CAN2_ESR1_IRQn, CAN3_ESR1_IRQn }

#define CAN_ORed_00_MB_IRQS                   { CAN0_BUF0_IRQn, \
                                                CAN1_BUF0_IRQn, \
                                                CAN2_BUF0_IRQn, \
                                                CAN3_BUF0_IRQn  }

#define CAN_ORed_01_MB_IRQS                   { CAN0_BUF1_IRQn, \
                                                CAN1_BUF1_IRQn, \
                                                CAN2_BUF1_IRQn, \
                                                CAN3_BUF1_IRQn  }

#define CAN_ORed_02_MB_IRQS                   { CAN0_BUF2_IRQn, \
                                                CAN1_BUF2_IRQn, \
                                                CAN2_BUF2_IRQn, \
                                                CAN3_BUF2_IRQn  }

#define CAN_ORed_03_MB_IRQS                   { CAN0_BUF3_IRQn, \
                                                CAN1_BUF3_IRQn, \
                                                CAN2_BUF3_IRQn, \
                                                CAN3_BUF3_IRQn  }

#define CAN_ORed_04_MB_IRQS                   { CAN0_BUF4_IRQn, \
                                                CAN1_BUF4_IRQn, \
                                                CAN2_BUF4_IRQn, \
                                                CAN3_BUF4_IRQn  }

#define CAN_ORed_05_MB_IRQS                   { CAN0_BUF5_IRQn, \
                                                CAN1_BUF5_IRQn, \
                                                CAN2_BUF5_IRQn, \
                                                CAN3_BUF5_IRQn  }

#define CAN_ORed_06_MB_IRQS                   { CAN0_BUF6_IRQn, \
                                                CAN1_BUF6_IRQn, \
                                                CAN2_BUF6_IRQn, \
                                                CAN3_BUF6_IRQn  }

#define CAN_ORed_07_MB_IRQS                   { CAN0_BUF7_IRQn, \
                                                CAN1_BUF7_IRQn, \
                                                CAN2_BUF7_IRQn, \
                                                CAN3_BUF7_IRQn  }

#define CAN_ORed_08_MB_IRQS                   { CAN0_BUF8_IRQn, \
                                                CAN1_BUF8_IRQn, \
                                                CAN2_BUF8_IRQn, \
                                                CAN3_BUF8_IRQn  }

#define CAN_ORed_09_MB_IRQS                   { CAN0_BUF9_IRQn, \
                                                CAN1_BUF9_IRQn, \
                                                CAN2_BUF9_IRQn, \
                                                CAN3_BUF9_IRQn  }

#define CAN_ORed_10_MB_IRQS                   { CAN0_BUF10_IRQn, \
                                                CAN1_BUF10_IRQn, \
                                                CAN2_BUF10_IRQn, \
                                                CAN3_BUF10_IRQn  }

#define CAN_ORed_11_MB_IRQS                   { CAN0_BUF11_IRQn, \
                                                CAN1_BUF11_IRQn, \
                                                CAN2_BUF11_IRQn, \
                                                CAN3_BUF11_IRQn  }

#define CAN_ORed_12_MB_IRQS                   { CAN0_BUF12_IRQn, \
                                                CAN1_BUF12_IRQn, \
                                                CAN2_BUF12_IRQn, \
                                                CAN3_BUF12_IRQn  }

#define CAN_ORed_13_MB_IRQS                   { CAN0_BUF13_IRQn, \
                                                CAN1_BUF13_IRQn, \
                                                CAN2_BUF13_IRQn, \
                                                CAN3_BUF13_IRQn  }

#define CAN_ORed_14_MB_IRQS                   { CAN0_BUF14_IRQn, \
                                                CAN1_BUF14_IRQn, \
                                                CAN2_BUF14_IRQn, \
                                                CAN3_BUF14_IRQn  }

#define CAN_ORed_15_MB_IRQS                   { CAN0_BUF15_IRQn, \
                                                CAN1_BUF15_IRQn, \
                                                CAN2_BUF15_IRQn, \
                                                CAN3_BUF15_IRQn  }

#define CAN_ORed_16_31_MB_IRQS                   { CAN0_BUF16_31_IRQn, \
                                                   CAN1_BUF16_31_IRQn, \
                                                   CAN2_BUF16_31_IRQn, \
                                                   CAN3_BUF16_31_IRQn  }

#define CAN_ORed_32_63_MB_IRQS                   { CAN0_BUF32_63_IRQn, \
                                                   CAN1_BUF32_63_IRQn, \
                                                   CAN2_BUF32_63_IRQn, \
                                                   CAN3_BUF32_63_IRQn  }




#define FR        (*( struct FR_tag *)        0xFFFE0000)
#define TSENS     (*( struct TSENS_tag *)     0xFFFEC000)

#ifdef __MWERKS__
#pragma pop
#endif

#ifdef  __cplusplus
}
#endif
#endif                          /* ifdef _MPC567xR_H */
/*********************************************************************
 *
 * Copyright:
 *  Freescale Semiconductor, INC. All Rights Reserved.
 *  You are hereby granted a copyright license to use, modify, and
 *  distribute the SOFTWARE so long as this entire notice is
 *  retained without alteration in any modified and/or redistributed
 *  versions, and that such modified versions are clearly identified
 *  as such. No licenses are granted by implication, estoppel or
 *  otherwise under any patents or trademarks of Freescale
 *  Semiconductor, Inc. This software is provided on an "AS IS"
 *  basis and without warranty.
 *
 *  To the maximum extent permitted by applicable law, Freescale
 *  Semiconductor DISCLAIMS ALL WARRANTIES WHETHER EXPRESS OR IMPLIED,
 *  INCLUDING IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A
 *  PARTICULAR PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH
 *  REGARD TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS THEREOF)
 *  AND ANY ACCOMPANYING WRITTEN MATERIALS.
 *
 *  To the maximum extent permitted by applicable law, IN NO EVENT
 *  SHALL Freescale Semiconductor BE LIABLE FOR ANY DAMAGES WHATSOEVER
 *  (INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS,
 *  BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER
 *  PECUNIARY LOSS) ARISING OF THE USE OR INABILITY TO USE THE SOFTWARE.
 *
 *  Freescale Semiconductor assumes no responsibility for the
 *  maintenance and support of this software
 *
 ********************************************************************/
