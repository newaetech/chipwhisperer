/***************************************************************************//**
* \file UART.h
* \version 2.0
*
*  This file provides constants and parameter values for the UART component.
*
********************************************************************************
* \copyright
* Copyright 2016-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(UART_CY_SCB_UART_PDL_H)
#define UART_CY_SCB_UART_PDL_H

#include "cyfitter.h"
#include "scb/cy_scb_uart.h"

#if defined(__cplusplus)
extern "C" {
#endif

/***************************************
*   Initial Parameter Constants
****************************************/

#define UART_DIRECTION  (3U)
#define UART_ENABLE_RTS (0U)
#define UART_ENABLE_CTS (0U)

/* UART direction enum */
#define UART_RX    (0x1U)
#define UART_TX    (0x2U)

#define UART_ENABLE_RX  (0UL != (UART_DIRECTION & UART_RX))
#define UART_ENABLE_TX  (0UL != (UART_DIRECTION & UART_TX))


/***************************************
*        Function Prototypes
***************************************/
/**
* \addtogroup group_general
* @{
*/
/* Component specific functions. */
void UART_Start(void);

/* Basic functions */
__STATIC_INLINE cy_en_scb_uart_status_t UART_Init(cy_stc_scb_uart_config_t const *config);
__STATIC_INLINE void UART_DeInit(void);
__STATIC_INLINE void UART_Enable(void);
__STATIC_INLINE void UART_Disable(void);

/* Register callback. */
__STATIC_INLINE void UART_RegisterCallback(cy_cb_scb_uart_handle_events_t callback);

/* Configuration change. */
#if (UART_ENABLE_CTS)
__STATIC_INLINE void UART_EnableCts(void);
__STATIC_INLINE void UART_DisableCts(void);
#endif /* (UART_ENABLE_CTS) */

#if (UART_ENABLE_RTS)
__STATIC_INLINE void     UART_SetRtsFifoLevel(uint32_t level);
__STATIC_INLINE uint32_t UART_GetRtsFifoLevel(void);
#endif /* (UART_ENABLE_RTS) */

__STATIC_INLINE void UART_EnableSkipStart(void);
__STATIC_INLINE void UART_DisableSkipStart(void);

#if (UART_ENABLE_RX)
/* Low level: Receive direction. */
__STATIC_INLINE uint32_t UART_Get(void);
__STATIC_INLINE uint32_t UART_GetArray(void *buffer, uint32_t size);
__STATIC_INLINE void     UART_GetArrayBlocking(void *buffer, uint32_t size);
__STATIC_INLINE uint32_t UART_GetRxFifoStatus(void);
__STATIC_INLINE void     UART_ClearRxFifoStatus(uint32_t clearMask);
__STATIC_INLINE uint32_t UART_GetNumInRxFifo(void);
__STATIC_INLINE void     UART_ClearRxFifo(void);
#endif /* (UART_ENABLE_RX) */

#if (UART_ENABLE_TX)
/* Low level: Transmit direction. */
__STATIC_INLINE uint32_t UART_Put(uint32_t data);
__STATIC_INLINE uint32_t UART_PutArray(void *buffer, uint32_t size);
__STATIC_INLINE void     UART_PutArrayBlocking(void *buffer, uint32_t size);
__STATIC_INLINE void     UART_PutString(char_t const string[]);
__STATIC_INLINE void     UART_SendBreakBlocking(uint32_t breakWidth);
__STATIC_INLINE uint32_t UART_GetTxFifoStatus(void);
__STATIC_INLINE void     UART_ClearTxFifoStatus(uint32_t clearMask);
__STATIC_INLINE uint32_t UART_GetNumInTxFifo(void);
__STATIC_INLINE bool     UART_IsTxComplete(void);
__STATIC_INLINE void     UART_ClearTxFifo(void);
#endif /* (UART_ENABLE_TX) */

#if (UART_ENABLE_RX)
/* High level: Ring buffer functions. */
__STATIC_INLINE void     UART_StartRingBuffer(void *buffer, uint32_t size);
__STATIC_INLINE void     UART_StopRingBuffer(void);
__STATIC_INLINE void     UART_ClearRingBuffer(void);
__STATIC_INLINE uint32_t UART_GetNumInRingBuffer(void);

/* High level: Receive direction functions. */
__STATIC_INLINE cy_en_scb_uart_status_t UART_Receive(void *buffer, uint32_t size);
__STATIC_INLINE void     UART_AbortReceive(void);
__STATIC_INLINE uint32_t UART_GetReceiveStatus(void);
__STATIC_INLINE uint32_t UART_GetNumReceived(void);
#endif /* (UART_ENABLE_RX) */

#if (UART_ENABLE_TX)
/* High level: Transmit direction functions. */
__STATIC_INLINE cy_en_scb_uart_status_t UART_Transmit(void *buffer, uint32_t size);
__STATIC_INLINE void     UART_AbortTransmit(void);
__STATIC_INLINE uint32_t UART_GetTransmitStatus(void);
__STATIC_INLINE uint32_t UART_GetNumLeftToTransmit(void);
#endif /* (UART_ENABLE_TX) */

/* Interrupt handler */
__STATIC_INLINE void UART_Interrupt(void);
/** @} group_general */


/***************************************
*    Variables with External Linkage
***************************************/
/**
* \addtogroup group_globals
* @{
*/
extern uint8_t UART_initVar;
extern cy_stc_scb_uart_config_t const UART_config;
extern cy_stc_scb_uart_context_t UART_context;
/** @} group_globals */


/***************************************
*         Preprocessor Macros
***************************************/
/**
* \addtogroup group_macros
* @{
*/
/** The pointer to the base address of the hardware */
#define UART_HW     ((CySCB_Type *) UART_SCB__HW)
/** @} group_macros */


/***************************************
*    In-line Function Implementation
***************************************/

/*******************************************************************************
* Function Name: UART_Init
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Init() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t UART_Init(cy_stc_scb_uart_config_t const *config)
{
   return Cy_SCB_UART_Init(UART_HW, config, &UART_context);
}


/*******************************************************************************
* Function Name: UART_DeInit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DeInit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_DeInit(void)
{
    Cy_SCB_UART_DeInit(UART_HW);
}


/*******************************************************************************
* Function Name: UART_Enable
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Enable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_Enable(void)
{
    Cy_SCB_UART_Enable(UART_HW);
}


/*******************************************************************************
* Function Name: UART_Disable
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Disable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_Disable(void)
{
    Cy_SCB_UART_Disable(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_RegisterCallback
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_RegisterCallback() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_RegisterCallback(cy_cb_scb_uart_handle_events_t callback)
{
    Cy_SCB_UART_RegisterCallback(UART_HW, callback, &UART_context);
}


#if (UART_ENABLE_CTS)
/*******************************************************************************
* Function Name: UART_EnableCts
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_EnableCts() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_EnableCts(void)
{
    Cy_SCB_UART_EnableCts(UART_HW);
}


/*******************************************************************************
* Function Name: Cy_SCB_UART_DisableCts
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DisableCts() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_DisableCts(void)
{
    Cy_SCB_UART_DisableCts(UART_HW);
}
#endif /* (UART_ENABLE_CTS) */


#if (UART_ENABLE_RTS)
/*******************************************************************************
* Function Name: UART_SetRtsFifoLevel
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_SetRtsFifoLevel() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_SetRtsFifoLevel(uint32_t level)
{
    Cy_SCB_UART_SetRtsFifoLevel(UART_HW, level);
}


/*******************************************************************************
* Function Name: UART_GetRtsFifoLevel
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetRtsFifoLevel() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetRtsFifoLevel(void)
{
    return Cy_SCB_UART_GetRtsFifoLevel(UART_HW);
}
#endif /* (UART_ENABLE_RTS) */


/*******************************************************************************
* Function Name: UART_EnableSkipStart
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_EnableSkipStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_EnableSkipStart(void)
{
    Cy_SCB_UART_EnableSkipStart(UART_HW);
}


/*******************************************************************************
* Function Name: UART_DisableSkipStart
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DisableSkipStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_DisableSkipStart(void)
{
    Cy_SCB_UART_DisableSkipStart(UART_HW);
}


#if (UART_ENABLE_RX)
/*******************************************************************************
* Function Name: UART_Get
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Get() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_Get(void)
{
    return Cy_SCB_UART_Get(UART_HW);
}


/*******************************************************************************
* Function Name: UART_GetArray
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetArray() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetArray(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_GetArray(UART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: UART_GetArrayBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetArrayBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_GetArrayBlocking(void *buffer, uint32_t size)
{
    Cy_SCB_UART_GetArrayBlocking(UART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: UART_GetRxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetRxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetRxFifoStatus(void)
{
    return Cy_SCB_UART_GetRxFifoStatus(UART_HW);
}


/*******************************************************************************
* Function Name: UART_ClearRxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_ClearRxFifoStatus(uint32_t clearMask)
{
    Cy_SCB_UART_ClearRxFifoStatus(UART_HW, clearMask);
}


/*******************************************************************************
* Function Name: UART_GetNumInRxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInRxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetNumInRxFifo(void)
{
    return Cy_SCB_UART_GetNumInRxFifo(UART_HW);
}


/*******************************************************************************
* Function Name: UART_ClearRxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_ClearRxFifo(void)
{
    Cy_SCB_UART_ClearRxFifo(UART_HW);
}
#endif /* (UART_ENABLE_RX) */


#if (UART_ENABLE_TX)
/*******************************************************************************
* Function Name: UART_Put
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Put() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_Put(uint32_t data)
{
    return Cy_SCB_UART_Put(UART_HW,data);
}


/*******************************************************************************
* Function Name: UART_PutArray
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutArray() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_PutArray(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_PutArray(UART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: UART_PutArrayBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutArrayBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_PutArrayBlocking(void *buffer, uint32_t size)
{
    Cy_SCB_UART_PutArrayBlocking(UART_HW, buffer, size);
}


/*******************************************************************************
* Function Name: UART_PutString
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutString() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_PutString(char_t const string[])
{
    Cy_SCB_UART_PutString(UART_HW, string);
}


/*******************************************************************************
* Function Name: UART_SendBreakBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_SendBreakBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_SendBreakBlocking(uint32_t breakWidth)
{
    Cy_SCB_UART_SendBreakBlocking(UART_HW, breakWidth);
}


/*******************************************************************************
* Function Name: UART_GetTxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetTxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetTxFifoStatus(void)
{
    return Cy_SCB_UART_GetTxFifoStatus(UART_HW);
}


/*******************************************************************************
* Function Name: UART_ClearTxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearTxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_ClearTxFifoStatus(uint32_t clearMask)
{
    Cy_SCB_UART_ClearTxFifoStatus(UART_HW, clearMask);
}


/*******************************************************************************
* Function Name: UART_GetNumInTxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInTxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetNumInTxFifo(void)
{
    return Cy_SCB_UART_GetNumInTxFifo(UART_HW);
}


/*******************************************************************************
* Function Name: UART_IsTxComplete
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_IsTxComplete() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE bool UART_IsTxComplete(void)
{
    return Cy_SCB_UART_IsTxComplete(UART_HW);
}


/*******************************************************************************
* Function Name: UART_ClearTxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearTxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_ClearTxFifo(void)
{
    Cy_SCB_UART_ClearTxFifo(UART_HW);
}
#endif /* (UART_ENABLE_TX) */


#if (UART_ENABLE_RX)
/*******************************************************************************
* Function Name: UART_StartRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_StartRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_StartRingBuffer(void *buffer, uint32_t size)
{
    Cy_SCB_UART_StartRingBuffer(UART_HW, buffer, size, &UART_context);
}


/*******************************************************************************
* Function Name: UART_StopRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_StopRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_StopRingBuffer(void)
{
    Cy_SCB_UART_StopRingBuffer(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_ClearRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_ClearRingBuffer(void)
{
    Cy_SCB_UART_ClearRingBuffer(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_GetNumInRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetNumInRingBuffer(void)
{
    return Cy_SCB_UART_GetNumInRingBuffer(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_Receive
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Receive() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t UART_Receive(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_Receive(UART_HW, buffer, size, &UART_context);
}


/*******************************************************************************
* Function Name: UART_GetReceiveStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetReceiveStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetReceiveStatus(void)
{
    return Cy_SCB_UART_GetReceiveStatus(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_AbortReceive
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_AbortReceive() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_AbortReceive(void)
{
    Cy_SCB_UART_AbortReceive(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_GetNumReceived
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumReceived() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetNumReceived(void)
{
    return Cy_SCB_UART_GetNumReceived(UART_HW, &UART_context);
}
#endif /* (UART_ENABLE_RX) */


#if (UART_ENABLE_TX)
/*******************************************************************************
* Function Name: UART_Transmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Transmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t UART_Transmit(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_Transmit(UART_HW, buffer, size, &UART_context);
}


/*******************************************************************************
* Function Name: UART_GetTransmitStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetTransmitStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetTransmitStatus(void)
{
    return Cy_SCB_UART_GetTransmitStatus(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_AbortTransmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_AbortTransmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_AbortTransmit(void)
{
    Cy_SCB_UART_AbortTransmit(UART_HW, &UART_context);
}


/*******************************************************************************
* Function Name: UART_GetNumLeftToTransmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumLeftToTransmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t UART_GetNumLeftToTransmit(void)
{
    return Cy_SCB_UART_GetNumLeftToTransmit(UART_HW, &UART_context);
}
#endif /* (UART_ENABLE_TX) */


/*******************************************************************************
* Function Name: UART_Interrupt
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Interrupt() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void UART_Interrupt(void)
{
    Cy_SCB_UART_Interrupt(UART_HW, &UART_context);
}

#if defined(__cplusplus)
}
#endif

#endif /* UART_CY_SCB_UART_PDL_H */


/* [] END OF FILE */
