/**
  ******************************************************************************
  * @file    stm32h743i_eval_ts.c
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    29-December-2017
  * @brief   This file provides a set of functions needed to manage the Touch
  *          Screen on STM32H743I-EVAL evaluation boards.
  @verbatim
  How To use this driver:
  -----------------------
   - This driver is used to drive the touch screen module of the STM32H743I-EVAL
     evaluation board on the AMPIRE 640x480 LCD mounted on MB1063 or AMPIRE
     480x272 LCD mounted on MB1046 daughter board.
   - If the AMPIRE 640x480 LCD is used, the TS3510 or EXC7200 component driver
     must be included according to the touch screen driver present on this board.
   - If the AMPIRE 480x272 LCD is used, the STMPE811 IO expander device component
     driver must be included in order to run the TS module commanded by the IO
     expander device, the MFXSTM32L152 IO expander device component driver must be
     also included in case of interrupt mode use of the TS.

  Driver description:
  ------------------
  + Initialization steps:
     o Initialize the TS module using the BSP_TS_Init() function. This
       function includes the MSP layer hardware resources initialization and the
       communication layer configuration to start the TS use. The LCD size properties
       (x and y) are passed as parameters.
     o If TS interrupt mode is desired, you must configure the TS interrupt mode
       by calling the function BSP_TS_ITConfig(). The TS interrupt mode is generated
       as an external interrupt whenever a touch is detected.
       The interrupt mode internally uses the IO functionalities driver driven by
       the IO expander, to configure the IT line.

  + Touch screen use
     o The touch screen state is captured whenever the function BSP_TS_GetState() is
       used. This function returns information about the last LCD touch occurred
       in the TS_StateTypeDef structure.
     o If TS interrupt mode is used, the function BSP_TS_ITGetStatus() is needed to get
       the interrupt status. To clear the IT pending bits, you should call the
       function BSP_TS_ITClear().
     o The IT is handled using the corresponding external interrupt IRQ handler,
       the user IT callback treatment is implemented on the same external interrupt
       callback.
  @endverbatim
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

/* Includes ------------------------------------------------------------------*/
#include "stm32h743i_eval_ts.h"
#include "stm32h743i_eval_io.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32H743I_EVAL
  * @{
  */

/** @addtogroup STM32H743I_EVAL_TS
  * @{
  */

/** @defgroup STM32H743I_EVAL_TS_Private_Types_Definitions TS Private Types Definitions
  * @{
  */
/**
  * @}
  */

/** @defgroup STM32H743I_EVAL_TS_Private_Defines TS Private Defines
  * @{
  */
/**
  * @}
  */

/** @defgroup STM32H743I_EVAL_TS_Private_Macros TS Private Macros
  * @{
  */
/**
  * @}
  */

/** @defgroup STM32H743I_EVAL_TS_Private_Variables TS Private Variables
  * @{
  */
static TS_DrvTypeDef *tsDriver;
static uint16_t tsXBoundary, tsYBoundary;
static uint8_t  tsOrientation;
static uint8_t  I2cAddress;
/**
  * @}
  */

/** @defgroup STM32H743I_EVAL_TS_Private_Function_Prototypes TS Private Function Prototypes
  * @{
  */
/**
  * @}
  */

/** addtogroup STM32H743I_EVAL_TS_Exported_Functions
  * @{
  */

/**
  * @brief  Initializes and configures the touch screen functionalities and
  *         configures all necessary hardware resources (GPIOs, clocks..).
  * @param  xSize: Maximum X size of the TS area on LCD
  * @param  ySize: Maximum Y size of the TS area on LCD
  * @retval TS_OK if all initializations are OK. Other value if error.
  */
uint8_t BSP_TS_Init(uint16_t xSize, uint16_t ySize)
{
  uint8_t status = TS_OK;
  tsXBoundary = xSize;
  tsYBoundary = ySize;

  /* Read ID and verify if the IO expander is ready */
  if(stmpe811_ts_drv.ReadID(TS_I2C_ADDRESS) == STMPE811_ID)
  {
    /* Initialize the TS driver structure */
    tsDriver = &stmpe811_ts_drv;
    I2cAddress = TS_I2C_ADDRESS;
    tsOrientation = TS_SWAP_Y;
  }
  else
  {
    IOE_Init();

    /* Check TS3510 touch screen driver presence to determine if TS3510 or
     * EXC7200 driver will be used */
    if(BSP_TS3510_IsDetected() == 0)
    {
      /* Initialize the TS driver structure */
      tsDriver = &ts3510_ts_drv;
      I2cAddress = TS3510_I2C_ADDRESS;
    }
    else
    {
      /* Initialize the TS driver structure */
      tsDriver = &exc7200_ts_drv;
      I2cAddress = EXC7200_I2C_ADDRESS;
    }
    tsOrientation = TS_SWAP_NONE;
  }

  /* Initialize the TS driver */
  tsDriver->Init(I2cAddress);
  tsDriver->Start(I2cAddress);

  return status;
}

/**
  * @brief  DeInitializes the TouchScreen.
  * @retval TS state
  */
uint8_t BSP_TS_DeInit(void)
{
  /* Actually ts_driver does not provide a DeInit function */
  return TS_OK;
}

/**
  * @brief  Configures and enables the touch screen interrupts.
  * @retval TS_OK if all initializations are OK. Other value if error.
  */
uint8_t BSP_TS_ITConfig(void)
{
  uint8_t ts_status = TS_ERROR;
  uint8_t io_status = IO_ERROR;

  /* Initialize the IO */
  io_status = BSP_IO_Init();
  if(io_status != IO_OK)
  {
    return (ts_status);
  }

  /* Configure TS IT line IO : is active low on FT6206 (see data sheet)                           */
  /* Configure TS_INT_PIN (MFX_IO_14) low level to generate MFX_IRQ_OUT in EXTI on MCU            */
  io_status = BSP_IO_ConfigPin(TS_INT_PIN, IO_MODE_IT_LOW_LEVEL_PU);
  if(io_status != IO_OK)
  {
    return (ts_status);
  }

  /* Enable the TS in interrupt mode */
  /* In that case the INT output of FT6206 when new touch is available */
  /* is active low and directed on MFX IO14 */
  tsDriver->EnableIT(I2cAddress);

  /* If arrived here : set good status on exit */
  ts_status = TS_OK;

  return (ts_status);
}

/**
  * @brief  Gets the touch screen interrupt status.
  * @retval TS_OK if all initializations are OK. Other value if error.
  */
uint8_t BSP_TS_ITGetStatus(void)
{
  /* Return the TS IT status */
  return (tsDriver->GetITStatus(I2cAddress));
}

/**
  * @brief  Returns status and positions of the touch screen.
  * @param  TS_State: Pointer to touch screen current state structure
  * @retval TS_OK if all initializations are OK. Other value if error.
  */
uint8_t BSP_TS_GetState(TS_StateTypeDef *TS_State)
{
  static uint32_t _x = 0, _y = 0;
  uint16_t x_diff, y_diff , x , y;
  uint16_t swap;

  TS_State->TouchDetected = tsDriver->DetectTouch(I2cAddress);

  if(TS_State->TouchDetected)
  {
    tsDriver->GetXY(I2cAddress, &x, &y);

    if(tsOrientation & TS_SWAP_X)
    {
      x = 4096 - x;
    }

    if(tsOrientation & TS_SWAP_Y)
    {
      y = 4096 - y;
    }

    if(tsOrientation & TS_SWAP_XY)
    {
      swap = y;
      y = x;
      x = swap;
    }

    x_diff = x > _x? (x - _x): (_x - x);
    y_diff = y > _y? (y - _y): (_y - y);

    if (x_diff + y_diff > 5)
    {
      _x = x;
      _y = y;
    }

      TS_State->x = (tsXBoundary * _x) >> 12;
      TS_State->y = (tsYBoundary * _y) >> 12;
  }
  return TS_OK;
}

/**
  * @brief  Clears all touch screen interrupts.
  * @retval None
  */
void BSP_TS_ITClear(void)
{
  /* Clear all IO IT pin */
  BSP_IO_ITClear();

  /* Clear TS IT pending bits */
  tsDriver->ClearIT(I2cAddress);
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
