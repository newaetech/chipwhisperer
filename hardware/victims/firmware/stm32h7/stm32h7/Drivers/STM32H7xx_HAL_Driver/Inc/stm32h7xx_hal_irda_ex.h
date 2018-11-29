/**
  ******************************************************************************
  * @file    stm32h7xx_hal_irda_ex.h
  * @author  MCD Application Team
  * @version V1.2.0
  * @date   29-December-2017
  * @brief   Header file of IRDA HAL Extended module.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __STM32H7xx_HAL_IRDA_EX_H
#define __STM32H7xx_HAL_IRDA_EX_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal_def.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup IRDAEx
  * @{
  */

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/* Private macros ------------------------------------------------------------*/

/** @defgroup IRDAEx_Private_Macros IRDAEx Private Macros
  * @{
  */

/** @brief  Report the IRDA clock source.
  * @param  __HANDLE__: specifies the IRDA Handle.
  * @param  __CLOCKSOURCE__: output variable.
  * @retval IRDA clocking source, written in __CLOCKSOURCE__.
  */
#define IRDA_GETCLOCKSOURCE(__HANDLE__,__CLOCKSOURCE__)       \
  do {                                                        \
    if((__HANDLE__)->Instance == USART1)                      \
    {                                                         \
       switch(__HAL_RCC_GET_USART1_SOURCE())                  \
       {                                                      \
        case RCC_USART1CLKSOURCE_D2PCLK2:                     \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK2;       \
          break;                                              \
        case RCC_USART1CLKSOURCE_PLL2:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_USART1CLKSOURCE_PLL3:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_USART1CLKSOURCE_HSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_USART1CLKSOURCE_CSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_USART1CLKSOURCE_LSE:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if((__HANDLE__)->Instance == USART2)                 \
    {                                                         \
       switch(__HAL_RCC_GET_USART2_SOURCE())                  \
       {                                                      \
        case RCC_USART2CLKSOURCE_D2PCLK1:                     \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK1;       \
          break;                                              \
        case RCC_USART2CLKSOURCE_PLL2:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_USART2CLKSOURCE_PLL3:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_USART2CLKSOURCE_HSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_USART2CLKSOURCE_CSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_USART2CLKSOURCE_LSE:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if((__HANDLE__)->Instance == USART3)                 \
    {                                                         \
       switch(__HAL_RCC_GET_USART3_SOURCE())                  \
       {                                                      \
        case RCC_USART3CLKSOURCE_D2PCLK1:                     \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK1;       \
          break;                                              \
        case RCC_USART3CLKSOURCE_PLL2:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_USART3CLKSOURCE_PLL3:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_USART3CLKSOURCE_HSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_USART3CLKSOURCE_CSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_USART3CLKSOURCE_LSE:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if((__HANDLE__)->Instance == UART4)                  \
    {                                                         \
       switch(__HAL_RCC_GET_UART4_SOURCE())                   \
       {                                                      \
        case RCC_UART4CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK1;       \
          break;                                              \
        case RCC_UART4CLKSOURCE_PLL2:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_UART4CLKSOURCE_PLL3:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_UART4CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_UART4CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_UART4CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if ((__HANDLE__)->Instance == UART5)                 \
    {                                                         \
       switch(__HAL_RCC_GET_UART5_SOURCE())                   \
       {                                                      \
        case RCC_UART5CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK1;       \
          break;                                              \
        case RCC_UART5CLKSOURCE_PLL2:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_UART5CLKSOURCE_PLL3:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_UART5CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_UART5CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_UART5CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if((__HANDLE__)->Instance == USART6)                 \
    {                                                         \
       switch(__HAL_RCC_GET_USART6_SOURCE())                  \
       {                                                      \
        case RCC_USART6CLKSOURCE_D2PCLK2:                     \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK2;       \
          break;                                              \
        case RCC_USART6CLKSOURCE_PLL2:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_USART6CLKSOURCE_PLL3:                       \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_USART6CLKSOURCE_HSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_USART6CLKSOURCE_CSI:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_USART6CLKSOURCE_LSE:                         \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if((__HANDLE__)->Instance == UART7)                  \
    {                                                         \
       switch(__HAL_RCC_GET_UART7_SOURCE())                   \
       {                                                      \
        case RCC_UART7CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK1;       \
          break;                                              \
        case RCC_UART7CLKSOURCE_PLL2:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_UART7CLKSOURCE_PLL3:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_UART7CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_UART7CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_UART7CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
    else if((__HANDLE__)->Instance == UART8)                 \
    {                                                         \
       switch(__HAL_RCC_GET_UART8_SOURCE())                   \
       {                                                      \
        case RCC_UART8CLKSOURCE_D2PCLK1:                      \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_D2PCLK1;       \
          break;                                              \
        case RCC_UART8CLKSOURCE_PLL2:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL2Q;         \
          break;                                              \
        case RCC_UART8CLKSOURCE_PLL3:                        \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_PLL3Q;         \
          break;                                              \
        case RCC_UART8CLKSOURCE_HSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_HSI;           \
          break;                                              \
        case RCC_UART8CLKSOURCE_CSI:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_CSI;           \
          break;                                              \
        case RCC_UART8CLKSOURCE_LSE:                          \
          (__CLOCKSOURCE__) = IRDA_CLOCKSOURCE_LSE;           \
          break;                                              \
       }                                                      \
    }                                                         \
  } while(0)

/**
  * @}
  */

/* Exported functions --------------------------------------------------------*/

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __STM32H7xx_HAL_IRDA_EX_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
