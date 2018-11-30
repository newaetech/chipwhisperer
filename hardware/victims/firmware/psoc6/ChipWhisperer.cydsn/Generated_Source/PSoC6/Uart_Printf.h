/***************************************************************************//**
* \file Uart_Printf.h
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

#if !defined(Uart_Printf_CY_SCB_UART_PDL_H)
#define Uart_Printf_CY_SCB_UART_PDL_H

#include "cyfitter.h"
#include "scb/cy_scb_uart.h"

#if defined(__cplusplus)
extern "C" {
#endif

/***************************************
*   Initial Parameter Constants
****************************************/

#define Uart_Printf_DIRECTION  (3U)
#define Uart_Printf_ENABLE_RTS (0U)
#define Uart_Printf_ENABLE_CTS (0U)

/* UART direction enum */
#define Uart_Printf_RX    (0x1U)
#define Uart_Printf_TX    (0x2U)

#define Uart_Printf_ENABLE_RX  (0UL != (Uart_Printf_DIRECTION & Uart_Printf_RX))
#define Uart_Printf_ENABLE_TX  (0UL != (Uart_Printf_DIRECTION & Uart_Printf_TX))


/***************************************
*        Function Prototypes
***************************************/
/**
* \addtogroup group_general
* @{
*/
/* Component specific functions. */
void Uart_Printf_Start(void);

/* Basic functions */
__STATIC_INLINE cy_en_scb_uart_status_t Uart_Printf_Init(cy_stc_scb_uart_config_t const *config);
__STATIC_INLINE void Uart_Printf_DeInit(void);
__STATIC_INLINE void Uart_Printf_Enable(void);
__STATIC_INLINE void Uart_Printf_Disable(void);

/* Register callback. */
__STATIC_INLINE void Uart_Printf_RegisterCallback(cy_cb_scb_uart_handle_events_t callback);

/* Configuration change. */
#if (Uart_Printf_ENABLE_CTS)
__STATIC_INLINE void Uart_Printf_EnableCts(void);
__STATIC_INLINE void Uart_Printf_DisableCts(void);
#endif /* (Uart_Printf_ENABLE_CTS) */

#if (Uart_Printf_ENABLE_RTS)
__STATIC_INLINE void     Uart_Printf_SetRtsFifoLevel(uint32_t level);
__STATIC_INLINE uint32_t Uart_Printf_GetRtsFifoLevel(void);
#endif /* (Uart_Printf_ENABLE_RTS) */

__STATIC_INLINE void Uart_Printf_EnableSkipStart(void);
__STATIC_INLINE void Uart_Printf_DisableSkipStart(void);

#if (Uart_Printf_ENABLE_RX)
/* Low level: Receive direction. */
__STATIC_INLINE uint32_t Uart_Printf_Get(void);
__STATIC_INLINE uint32_t Uart_Printf_GetArray(void *buffer, uint32_t size);
__STATIC_INLINE void     Uart_Printf_GetArrayBlocking(void *buffer, uint32_t size);
__STATIC_INLINE uint32_t Uart_Printf_GetRxFifoStatus(void);
__STATIC_INLINE void     Uart_Printf_ClearRxFifoStatus(uint32_t clearMask);
__STATIC_INLINE uint32_t Uart_Printf_GetNumInRxFifo(void);
__STATIC_INLINE void     Uart_Printf_ClearRxFifo(void);
#endif /* (Uart_Printf_ENABLE_RX) */

#if (Uart_Printf_ENABLE_TX)
/* Low level: Transmit direction. */
__STATIC_INLINE uint32_t Uart_Printf_Put(uint32_t data);
__STATIC_INLINE uint32_t Uart_Printf_PutArray(void *buffer, uint32_t size);
__STATIC_INLINE void     Uart_Printf_PutArrayBlocking(void *buffer, uint32_t size);
__STATIC_INLINE void     Uart_Printf_PutString(char_t const string[]);
__STATIC_INLINE void     Uart_Printf_SendBreakBlocking(uint32_t breakWidth);
__STATIC_INLINE uint32_t Uart_Printf_GetTxFifoStatus(void);
__STATIC_INLINE void     Uart_Printf_ClearTxFifoStatus(uint32_t clearMask);
__STATIC_INLINE uint32_t Uart_Printf_GetNumInTxFifo(void);
__STATIC_INLINE bool     Uart_Printf_IsTxComplete(void);
__STATIC_INLINE void     Uart_Printf_ClearTxFifo(void);
#endif /* (Uart_Printf_ENABLE_TX) */

#if (Uart_Printf_ENABLE_RX)
/* High level: Ring buffer functions. */
__STATIC_INLINE void     Uart_Printf_StartRingBuffer(void *buffer, uint32_t size);
__STATIC_INLINE void     Uart_Printf_StopRingBuffer(void);
__STATIC_INLINE void     Uart_Printf_ClearRingBuffer(void);
__STATIC_INLINE uint32_t Uart_Printf_GetNumInRingBuffer(void);

/* High level: Receive direction functions. */
__STATIC_INLINE cy_en_scb_uart_status_t Uart_Printf_Receive(void *buffer, uint32_t size);
__STATIC_INLINE void     Uart_Printf_AbortReceive(void);
__STATIC_INLINE uint32_t Uart_Printf_GetReceiveStatus(void);
__STATIC_INLINE uint32_t Uart_Printf_GetNumReceived(void);
#endif /* (Uart_Printf_ENABLE_RX) */

#if (Uart_Printf_ENABLE_TX)
/* High level: Transmit direction functions. */
__STATIC_INLINE cy_en_scb_uart_status_t Uart_Printf_Transmit(void *buffer, uint32_t size);
__STATIC_INLINE void     Uart_Printf_AbortTransmit(void);
__STATIC_INLINE uint32_t Uart_Printf_GetTransmitStatus(void);
__STATIC_INLINE uint32_t Uart_Printf_GetNumLeftToTransmit(void);
#endif /* (Uart_Printf_ENABLE_TX) */

/* Interrupt handler */
__STATIC_INLINE void Uart_Printf_Interrupt(void);
/** @} group_general */


/***************************************
*    Variables with External Linkage
***************************************/
/**
* \addtogroup group_globals
* @{
*/
extern uint8_t Uart_Printf_initVar;
extern cy_stc_scb_uart_config_t const Uart_Printf_config;
extern cy_stc_scb_uart_context_t Uart_Printf_context;
/** @} group_globals */


/***************************************
*         Preprocessor Macros
***************************************/
/**
* \addtogroup group_macros
* @{
*/
/** The pointer to the base address of the hardware */
#define Uart_Printf_HW     ((CySCB_Type *) Uart_Printf_SCB__HW)
/** @} group_macros */


/***************************************
*    In-line Function Implementation
***************************************/

/*******************************************************************************
* Function Name: Uart_Printf_Init
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Init() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t Uart_Printf_Init(cy_stc_scb_uart_config_t const *config)
{
   return Cy_SCB_UART_Init(Uart_Printf_HW, config, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_DeInit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DeInit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_DeInit(void)
{
    Cy_SCB_UART_DeInit(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_Enable
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Enable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_Enable(void)
{
    Cy_SCB_UART_Enable(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_Disable
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Disable() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_Disable(void)
{
    Cy_SCB_UART_Disable(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_RegisterCallback
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_RegisterCallback() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_RegisterCallback(cy_cb_scb_uart_handle_events_t callback)
{
    Cy_SCB_UART_RegisterCallback(Uart_Printf_HW, callback, &Uart_Printf_context);
}


#if (Uart_Printf_ENABLE_CTS)
/*******************************************************************************
* Function Name: Uart_Printf_EnableCts
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_EnableCts() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_EnableCts(void)
{
    Cy_SCB_UART_EnableCts(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Cy_SCB_UART_DisableCts
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DisableCts() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_DisableCts(void)
{
    Cy_SCB_UART_DisableCts(Uart_Printf_HW);
}
#endif /* (Uart_Printf_ENABLE_CTS) */


#if (Uart_Printf_ENABLE_RTS)
/*******************************************************************************
* Function Name: Uart_Printf_SetRtsFifoLevel
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_SetRtsFifoLevel() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_SetRtsFifoLevel(uint32_t level)
{
    Cy_SCB_UART_SetRtsFifoLevel(Uart_Printf_HW, level);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetRtsFifoLevel
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetRtsFifoLevel() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetRtsFifoLevel(void)
{
    return Cy_SCB_UART_GetRtsFifoLevel(Uart_Printf_HW);
}
#endif /* (Uart_Printf_ENABLE_RTS) */


/*******************************************************************************
* Function Name: Uart_Printf_EnableSkipStart
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_EnableSkipStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_EnableSkipStart(void)
{
    Cy_SCB_UART_EnableSkipStart(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_DisableSkipStart
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_DisableSkipStart() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_DisableSkipStart(void)
{
    Cy_SCB_UART_DisableSkipStart(Uart_Printf_HW);
}


#if (Uart_Printf_ENABLE_RX)
/*******************************************************************************
* Function Name: Uart_Printf_Get
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Get() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_Get(void)
{
    return Cy_SCB_UART_Get(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetArray
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetArray() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetArray(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_GetArray(Uart_Printf_HW, buffer, size);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetArrayBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetArrayBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_GetArrayBlocking(void *buffer, uint32_t size)
{
    Cy_SCB_UART_GetArrayBlocking(Uart_Printf_HW, buffer, size);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetRxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetRxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetRxFifoStatus(void)
{
    return Cy_SCB_UART_GetRxFifoStatus(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_ClearRxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_ClearRxFifoStatus(uint32_t clearMask)
{
    Cy_SCB_UART_ClearRxFifoStatus(Uart_Printf_HW, clearMask);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetNumInRxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInRxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetNumInRxFifo(void)
{
    return Cy_SCB_UART_GetNumInRxFifo(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_ClearRxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_ClearRxFifo(void)
{
    Cy_SCB_UART_ClearRxFifo(Uart_Printf_HW);
}
#endif /* (Uart_Printf_ENABLE_RX) */


#if (Uart_Printf_ENABLE_TX)
/*******************************************************************************
* Function Name: Uart_Printf_Put
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Put() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_Put(uint32_t data)
{
    return Cy_SCB_UART_Put(Uart_Printf_HW,data);
}


/*******************************************************************************
* Function Name: Uart_Printf_PutArray
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutArray() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_PutArray(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_PutArray(Uart_Printf_HW, buffer, size);
}


/*******************************************************************************
* Function Name: Uart_Printf_PutArrayBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutArrayBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_PutArrayBlocking(void *buffer, uint32_t size)
{
    Cy_SCB_UART_PutArrayBlocking(Uart_Printf_HW, buffer, size);
}


/*******************************************************************************
* Function Name: Uart_Printf_PutString
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_PutString() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_PutString(char_t const string[])
{
    Cy_SCB_UART_PutString(Uart_Printf_HW, string);
}


/*******************************************************************************
* Function Name: Uart_Printf_SendBreakBlocking
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_SendBreakBlocking() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_SendBreakBlocking(uint32_t breakWidth)
{
    Cy_SCB_UART_SendBreakBlocking(Uart_Printf_HW, breakWidth);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetTxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetTxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetTxFifoStatus(void)
{
    return Cy_SCB_UART_GetTxFifoStatus(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_ClearTxFifoStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearTxFifoStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_ClearTxFifoStatus(uint32_t clearMask)
{
    Cy_SCB_UART_ClearTxFifoStatus(Uart_Printf_HW, clearMask);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetNumInTxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInTxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetNumInTxFifo(void)
{
    return Cy_SCB_UART_GetNumInTxFifo(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_IsTxComplete
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_IsTxComplete() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE bool Uart_Printf_IsTxComplete(void)
{
    return Cy_SCB_UART_IsTxComplete(Uart_Printf_HW);
}


/*******************************************************************************
* Function Name: Uart_Printf_ClearTxFifo
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearTxFifo() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_ClearTxFifo(void)
{
    Cy_SCB_UART_ClearTxFifo(Uart_Printf_HW);
}
#endif /* (Uart_Printf_ENABLE_TX) */


#if (Uart_Printf_ENABLE_RX)
/*******************************************************************************
* Function Name: Uart_Printf_StartRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_StartRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_StartRingBuffer(void *buffer, uint32_t size)
{
    Cy_SCB_UART_StartRingBuffer(Uart_Printf_HW, buffer, size, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_StopRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_StopRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_StopRingBuffer(void)
{
    Cy_SCB_UART_StopRingBuffer(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_ClearRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_ClearRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_ClearRingBuffer(void)
{
    Cy_SCB_UART_ClearRingBuffer(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetNumInRingBuffer
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumInRingBuffer() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetNumInRingBuffer(void)
{
    return Cy_SCB_UART_GetNumInRingBuffer(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_Receive
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Receive() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t Uart_Printf_Receive(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_Receive(Uart_Printf_HW, buffer, size, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetReceiveStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetReceiveStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetReceiveStatus(void)
{
    return Cy_SCB_UART_GetReceiveStatus(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_AbortReceive
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_AbortReceive() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_AbortReceive(void)
{
    Cy_SCB_UART_AbortReceive(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetNumReceived
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumReceived() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetNumReceived(void)
{
    return Cy_SCB_UART_GetNumReceived(Uart_Printf_HW, &Uart_Printf_context);
}
#endif /* (Uart_Printf_ENABLE_RX) */


#if (Uart_Printf_ENABLE_TX)
/*******************************************************************************
* Function Name: Uart_Printf_Transmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Transmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE cy_en_scb_uart_status_t Uart_Printf_Transmit(void *buffer, uint32_t size)
{
    return Cy_SCB_UART_Transmit(Uart_Printf_HW, buffer, size, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetTransmitStatus
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetTransmitStatus() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetTransmitStatus(void)
{
    return Cy_SCB_UART_GetTransmitStatus(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_AbortTransmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_AbortTransmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_AbortTransmit(void)
{
    Cy_SCB_UART_AbortTransmit(Uart_Printf_HW, &Uart_Printf_context);
}


/*******************************************************************************
* Function Name: Uart_Printf_GetNumLeftToTransmit
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_GetNumLeftToTransmit() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE uint32_t Uart_Printf_GetNumLeftToTransmit(void)
{
    return Cy_SCB_UART_GetNumLeftToTransmit(Uart_Printf_HW, &Uart_Printf_context);
}
#endif /* (Uart_Printf_ENABLE_TX) */


/*******************************************************************************
* Function Name: Uart_Printf_Interrupt
****************************************************************************//**
*
* Invokes the Cy_SCB_UART_Interrupt() PDL driver function.
*
*******************************************************************************/
__STATIC_INLINE void Uart_Printf_Interrupt(void)
{
    Cy_SCB_UART_Interrupt(Uart_Printf_HW, &Uart_Printf_context);
}

#if defined(__cplusplus)
}
#endif

#endif /* Uart_Printf_CY_SCB_UART_PDL_H */


/* [] END OF FILE */
