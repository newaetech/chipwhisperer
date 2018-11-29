/***************************************************************************//**
* \file stdio_user.c
* \version 1.10
*
* \brief
* This file provides low level function implementation to retarget
* I/O functions of the standard C run-time library.
*
********************************************************************************
* \copyright
* Copyright 2016-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "stdio_user.h"

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (IO_STDOUT_ENABLE) && defined (IO_STDOUT_UART)
/*******************************************************************************
* Function Name: STDIO_PutChar
********************************************************************************
*
* This function outputs a character through user defined target.
* Note: this is a template function which may be overwritten by the USER in order
* to change the target used in redirecting STDOUT stream.
*
* \param ch
* The character to send.
*
*******************************************************************************/
void STDIO_PutChar(uint32_t ch)
{
    /* Place the call to your function here. */
    while(0U == Cy_SCB_UART_Put(IO_STDOUT_UART, ch))
    {
        /* Wait until FIFO is full */
    }
}
#endif /* IO_STDOUT_ENABLE && IO_STDOUT_UART */

#if defined (IO_STDIN_ENABLE) && defined (IO_STDIN_UART)
/*******************************************************************************
* Function Name: STDIO_GetChar
********************************************************************************
*
* This function retrieves STDIN from a user specified input source.
* Note: this is a template function which may be overwritten by the USER in order
* to change the target used in redirecting STDIN stream.
*
* \return
* The received character.
*
*******************************************************************************/
uint32_t STDIO_GetChar(void)
{
    /* Place the call to your function here. */
    while(0UL == Cy_SCB_UART_GetNumInRxFifo(IO_STDIN_UART))
    {
    }
    return (Cy_SCB_UART_Get(IO_STDIN_UART));
}
#endif /* IO_STDIN_ENABLE && IO_STDIN_UART */

#if defined(__cplusplus)
}
#endif

/* [] END OF FILE */
