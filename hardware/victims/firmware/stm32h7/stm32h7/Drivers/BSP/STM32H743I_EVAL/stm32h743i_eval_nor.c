/**
  ******************************************************************************
  * @file    stm32h743i_eval_nor.c
  * @author  MCD Application Team
  * @version V1.2.0
  * @date    29-December-2017
  * @brief   This file includes a standard driver for the PC28F128M29EWLA NOR flash memory
  *          device mounted on STM32H743I-EVAL evaluation boards.
  @verbatim
  How To use this driver:
  -----------------------
   - This driver is used to drive the PC28F128M29EWLA NOR flash external memory mounted
     on STM32H743I-EVAL evaluation board.
   - This driver does not need a specific component driver for the NOR device
     to be included with.

  Driver description:
  ------------------
  + Initialization steps:
     o Initialize the NOR external memory using the BSP_NOR_Init() function. This
       function includes the MSP layer hardware resources initialization and the
       FMC controller configuration to interface with the external NOR memory.

  + NOR flash operations
     o NOR external memory can be accessed with read/write operations once it is
       initialized.
       Read/write operation can be performed with AHB access using the functions
       BSP_NOR_ReadData()/BSP_NOR_WriteData(). The BSP_NOR_WriteData() performs write operation
       of an amount of data by unit (halfword). You can also perform a program data
       operation of an amount of data using the function BSP_NOR_ProgramData().
     o The function BSP_NOR_Read_ID() returns the chip IDs stored in the structure
       "NOR_IDTypeDef". (see the NOR IDs in the memory data sheet)
     o Perform erase block operation using the function BSP_NOR_Erase_Block() and by
       specifying the block address. You can perform an erase operation of the whole
       chip by calling the function BSP_NOR_Erase_Chip().
     o After other operations, the function BSP_NOR_ReturnToReadMode() allows the NOR
       flash to return to read mode to perform read operations on it.
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
#include "stm32h743i_eval_nor.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32H743I_EVAL
  * @{
  */

/** @addtogroup STM32H743I_EVAL_NOR
  * @{
  */

/* Private typedef -----------------------------------------------------------*/

/** @defgroup STM32H743I_EVAL_NOR_Private_Types_Definitions NOR Private Types Definitions
  * @{
  */

/**
  * @}
  */  
/* Private define ------------------------------------------------------------*/

/** @defgroup STM32H743I_EVAL_NOR_Private_Defines NOR Private Defines
  * @{
  */

/**
  * @}
  */
  
/* Private macro -------------------------------------------------------------*/

/** @defgroup STM32H743I_EVAL_NOR_Private_Macros NOR Private Macros
  * @{
  */

/**
  * @}
  */

/* Private variables ---------------------------------------------------------*/

/** @defgroup STM32H743I_EVAL_NOR_Private_Variables NOR Private Variables
  * @{
  */
NOR_HandleTypeDef norHandle;
static FMC_NORSRAM_TimingTypeDef Timing;

/**
  * @}
  */

/* Private function prototypes -----------------------------------------------*/

/** @defgroup STM32H743I_EVAL_NOR_Private_Function_Prototypes NOR Private Function Prototypes
  * @{
  */

 /**
  * @}
  */
  
/* Exported functions ---------------------------------------------------------*/

/** @addtogroup STM32H743I_EVAL_NOR_Exported_Functions NOR Exported Functions
  * @{
  */

/**
  * @brief  Initializes the NOR device.
  * @retval NOR memory status
  */
uint8_t BSP_NOR_Init(void)
{
  static uint8_t nor_status = NOR_STATUS_ERROR;
  norHandle.Instance  = FMC_NORSRAM_DEVICE;
  norHandle.Extended  = FMC_NORSRAM_EXTENDED_DEVICE;

  /* NOR device configuration */
  /* Timing configuration derived from system clock (up to 400Mhz)
     for 100Mhz as NOR clock frequency */
  Timing.AddressSetupTime      = 4;
  Timing.AddressHoldTime       = 3;
  Timing.DataSetupTime         = 8;
  Timing.BusTurnAroundDuration = 1;
  Timing.CLKDivision           = 2;
  Timing.DataLatency           = 2;
  Timing.AccessMode            = FMC_ACCESS_MODE_A;

  norHandle.Init.NSBank             = FMC_NORSRAM_BANK1;
  norHandle.Init.DataAddressMux     = FMC_DATA_ADDRESS_MUX_DISABLE;
  norHandle.Init.MemoryType         = FMC_MEMORY_TYPE_NOR;
  norHandle.Init.MemoryDataWidth    = NOR_MEMORY_WIDTH;
  norHandle.Init.BurstAccessMode    = NOR_BURSTACCESS;
  norHandle.Init.WaitSignalPolarity = FMC_WAIT_SIGNAL_POLARITY_LOW;
  norHandle.Init.WaitSignalActive   = FMC_WAIT_TIMING_BEFORE_WS;
  norHandle.Init.WriteOperation     = FMC_WRITE_OPERATION_ENABLE;
  norHandle.Init.WaitSignal         = FMC_WAIT_SIGNAL_ENABLE;
  norHandle.Init.ExtendedMode       = FMC_EXTENDED_MODE_DISABLE;
  norHandle.Init.AsynchronousWait   = FMC_ASYNCHRONOUS_WAIT_ENABLE;
  norHandle.Init.WriteBurst         = NOR_WRITEBURST;
  norHandle.Init.ContinuousClock    = CONTINUOUSCLOCK_FEATURE;

  /* NOR controller initialization */
  BSP_NOR_MspInit(&norHandle, NULL); /* __weak function can be rewritten by the application */

  if(HAL_NOR_Init(&norHandle, &Timing, &Timing) != HAL_OK)
  {
    nor_status = NOR_STATUS_ERROR;
  }
  else
  {
    nor_status = NOR_STATUS_OK;
  }
  return nor_status;
}

/**
  * @brief  DeInitializes the NOR device.
  * @retval NOR status
  */
uint8_t BSP_NOR_DeInit(void)
{
  static uint8_t nor_status = NOR_STATUS_ERROR;
  /* NOR device de-initialization */
  norHandle.Instance = FMC_NORSRAM_DEVICE;
  norHandle.Extended = FMC_NORSRAM_EXTENDED_DEVICE;

  if(HAL_NOR_DeInit(&norHandle) != HAL_OK)
  {
    nor_status = NOR_STATUS_ERROR;
  }
  else
  {
    nor_status = NOR_STATUS_OK;
  }

  /* NOR controller de-initialization */
  BSP_NOR_MspDeInit(&norHandle, NULL);

  return nor_status;
}

/**
  * @brief  Reads an amount of data from the NOR device.
  * @param  uwStartAddress: Read start address
  * @param  pData: Pointer to data to be read
  * @param  uwDataSize: Size of data to read
  * @retval NOR memory status
  */
uint8_t BSP_NOR_ReadData(uint32_t uwStartAddress, uint16_t* pData, uint32_t uwDataSize)
{
  if(HAL_NOR_ReadBuffer(&norHandle, NOR_DEVICE_ADDR + uwStartAddress, pData, uwDataSize) != HAL_OK)
  {
    return NOR_STATUS_ERROR;
  }
  else
  {
    return NOR_STATUS_OK;
  }
}

/**
  * @brief  Returns the NOR memory to read mode.
  * @retval None
  */
void BSP_NOR_ReturnToReadMode(void)
{
   HAL_NOR_ReturnToReadMode(&norHandle);
}

/**
  * @brief  Writes an amount of data to the NOR device.
  * @param  uwStartAddress: Write start address
  * @param  pData: Pointer to data to be written
  * @param  uwDataSize: Size of data to write
  * @retval NOR memory status
  */
uint8_t BSP_NOR_WriteData(uint32_t uwStartAddress, uint16_t* pData, uint32_t uwDataSize)
{
  uint32_t index = uwDataSize;

  while(index > 0)
  {
    /* Write data to NOR */
    HAL_NOR_Program(&norHandle, (uint32_t *)(NOR_DEVICE_ADDR + uwStartAddress), pData);

    /* Read NOR device status */
    if(HAL_NOR_GetStatus(&norHandle, NOR_DEVICE_ADDR, PROGRAM_TIMEOUT) != HAL_NOR_STATUS_SUCCESS)
    {
      return NOR_STATUS_ERROR;
    }

    /* Update the counters */
    index--;
    uwStartAddress += 2;
    pData++;
  }

  return NOR_STATUS_OK;
}

/**
  * @brief  Programs an amount of data to the NOR device.
  * @param  uwStartAddress: Write start address
  * @param  pData: Pointer to data to be written
  * @param  uwDataSize: Size of data to write
  * @retval NOR memory status
  */
uint8_t BSP_NOR_ProgramData(uint32_t uwStartAddress, uint16_t* pData, uint32_t uwDataSize)
{
  /* Send NOR program buffer operation */
  HAL_NOR_ProgramBuffer(&norHandle, uwStartAddress, pData, uwDataSize);

  /* Return the NOR memory status */
  if(HAL_NOR_GetStatus(&norHandle, NOR_DEVICE_ADDR, PROGRAM_TIMEOUT) != HAL_NOR_STATUS_SUCCESS)
  {
    return NOR_STATUS_ERROR;
  }
  else
  {
    return NOR_STATUS_OK;
  }
}

/**
  * @brief  Erases the specified block of the NOR device.
  * @param  BlockAddress: Block address to erase
  * @retval NOR memory status
  */
uint8_t BSP_NOR_Erase_Block(uint32_t BlockAddress)
{
  /* Send NOR erase block operation */
  HAL_NOR_Erase_Block(&norHandle, BlockAddress, NOR_DEVICE_ADDR);

  /* Return the NOR memory status */
  if(HAL_NOR_GetStatus(&norHandle, NOR_DEVICE_ADDR, BLOCKERASE_TIMEOUT) != HAL_NOR_STATUS_SUCCESS)
  {
    return NOR_STATUS_ERROR;
  }
  else
  {
    return NOR_STATUS_OK;
  }
}

/**
  * @brief  Erases the entire NOR chip.
  * @retval NOR memory status
  */
uint8_t BSP_NOR_Erase_Chip(void)
{
  /* Send NOR Erase chip operation */
  HAL_NOR_Erase_Chip(&norHandle, NOR_DEVICE_ADDR);

  /* Return the NOR memory status */
  if(HAL_NOR_GetStatus(&norHandle, NOR_DEVICE_ADDR, CHIPERASE_TIMEOUT) != HAL_NOR_STATUS_SUCCESS)
  {
    return NOR_STATUS_ERROR;
  }
  else
  {
    return NOR_STATUS_OK;
  }
}

/**
  * @brief  Reads NOR flash IDs.
  * @param  pNOR_ID : Pointer to NOR ID structure
  * @retval NOR memory status
  */
uint8_t BSP_NOR_Read_ID(NOR_IDTypeDef *pNOR_ID)
{
  if(HAL_NOR_Read_ID(&norHandle, pNOR_ID) != HAL_OK)
  {
    return NOR_STATUS_ERROR;
  }
  else
  {
    return NOR_STATUS_OK;
  }
}

/**
  * @brief  Initializes the NOR MSP.
  * @param  norHandle: NOR handle
  * @param  Params: Pointer to void  
  * @retval None
  */
__weak void BSP_NOR_MspInit(NOR_HandleTypeDef *norHandle, void *Params)
{
  GPIO_InitTypeDef gpio_init_structure;

  /* Enable FMC clock */
  __HAL_RCC_FMC_CLK_ENABLE();

  /* Enable GPIOs clock */
  __HAL_RCC_GPIOC_CLK_ENABLE();  
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOG_CLK_ENABLE();

  /* Common GPIO configuration */
  gpio_init_structure.Mode      = GPIO_MODE_AF_PP;
  gpio_init_structure.Pull      = GPIO_PULLUP;
  gpio_init_structure.Speed     = GPIO_SPEED_FREQ_VERY_HIGH;

  /* GPIOC configuration */
  gpio_init_structure.Alternate = GPIO_AF9_FMC;
  gpio_init_structure.Pin   = GPIO_PIN_6 | GPIO_PIN_7;
  HAL_GPIO_Init(GPIOC, &gpio_init_structure);

  /* GPIOD configuration */
  gpio_init_structure.Alternate = GPIO_AF12_FMC;
  gpio_init_structure.Pin   = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_4 | GPIO_PIN_5|\
                              GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 |\
                              GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
  HAL_GPIO_Init(GPIOD, &gpio_init_structure);

  /* GPIOE configuration */
  gpio_init_structure.Pin   = GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6   |\
                              GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 |\
                              GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
  HAL_GPIO_Init(GPIOE, &gpio_init_structure);

  /* GPIOF configuration */
  gpio_init_structure.Pin   = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2| GPIO_PIN_3 | GPIO_PIN_4     |\
                              GPIO_PIN_5 | GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15;
  HAL_GPIO_Init(GPIOF, &gpio_init_structure);

  /* GPIOG configuration */
  gpio_init_structure.Pin   = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2| GPIO_PIN_3 | GPIO_PIN_4     |\
                              GPIO_PIN_5;
  HAL_GPIO_Init(GPIOG, &gpio_init_structure);
}

/**
  * @brief  DeInitializes NOR MSP.
  * @param  norHandle: NOR handle
  * @param  Params: Pointer to void  
  * @retval None
  */
__weak void BSP_NOR_MspDeInit(NOR_HandleTypeDef  *norHandle, void *Params)
{
    /* GPIO pins clock, FMC clock can be shut down in the application
       by surcharging this __weak function */
}

/**
  * @}
  */

/**
  * @brief  NOR BSP Wait for Ready/Busy signal.
  * @param  norHandle: Pointer to NOR handle
  * @param  Timeout: Timeout duration
  * @retval None
  */
void HAL_NOR_MspWait(NOR_HandleTypeDef *norHandle, uint32_t Timeout)
{
  uint32_t timeout = Timeout;

  /* Polling on Ready/Busy signal */
  while((HAL_GPIO_ReadPin(NOR_READY_BUSY_GPIO, NOR_READY_BUSY_PIN) != NOR_BUSY_STATE) && (timeout > 0))
  {
    timeout--;
  }

  timeout = Timeout;

  /* Polling on Ready/Busy signal */
  while((HAL_GPIO_ReadPin(NOR_READY_BUSY_GPIO, NOR_READY_BUSY_PIN) != NOR_READY_STATE) && (timeout > 0))
  {
    timeout--;
  }
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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
