/**
  ******************************************************************************
  * @file    stm32h7xx_hal_sd.c
  * @author  MCD Application Team
  * @version V1.2.0
  * @date   29-December-2017
  * @brief   SD card HAL module driver.
  *          This file provides firmware functions to manage the following 
  *          functionalities of the Secure Digital (SD) peripheral:
  *           + Initialization and de-initialization functions
  *           + IO operation functions
  *           + Peripheral Control functions 
  *           + Peripheral State functions
  *         
  @verbatim
  ==============================================================================
                        ##### How to use this driver #####
  ==============================================================================
  [..]
    This driver implements a high level communication layer for read and write from/to 
    this memory. The needed STM32 hardware resources (SDMMC and GPIO) are performed by 
    the user in HAL_SD_MspInit() function (MSP layer).                             
    Basically, the MSP layer configuration should be the same as we provide in the 
    examples.
    You can easily tailor this configuration according to hardware resources.

  [..]
    This driver is a generic layered driver for SDMMC memories which uses the HAL 
    SDMMC driver functions to interface with SD and uSD cards devices. 
    It is used as follows:
 
    (#)Initialize the SDMMC low level resources by implement the HAL_SD_MspInit() API:
        (##) Enable the SDMMC interface clock using __HAL_RCC_SDMMC_CLK_ENABLE(); 
        (##) SDMMC pins configuration for SD card
            (+++) Enable the clock for the SDMMC GPIOs using the functions __HAL_RCC_GPIOx_CLK_ENABLE();   
            (+++) Configure these SDMMC pins as alternate function pull-up using HAL_GPIO_Init()
                  and according to your pin assignment;
        (##) NVIC configuration if you need to use interrupt process when using DMA transfer.
            (+++) Configure the SDMMC interrupt priorities using functions HAL_NVIC_SetPriority();
            (+++) Enable the NVIC SDMMC IRQs using function HAL_NVIC_EnableIRQ()
            (+++) SDMMC interrupts are managed using the macros __HAL_SD_ENABLE_IT() 
                  and __HAL_SD_DISABLE_IT() inside the communication process.
            (+++) SDMMC interrupts pending bits are managed using the macros __HAL_SD_GET_IT()
                  and __HAL_SD_CLEAR_IT()
        (##) No general propose DMA Configuration is needed, an Internal DMA for SDMMC IP are used.
          
    (#) At this stage, you can perform SD read/write/erase operations after SD card initialization  

         
  *** SD Card Initialization and configuration ***
  ================================================    
  [..]
    To initialize the SD Card, use the HAL_SD_Init() function. It Initializes 
    the SD Card and put it into StandBy State (Ready for data transfer). 
    This function provide the following operations:
  
    (#) Apply the SD Card initialization process at 400KHz and check the SD Card 
        type (Standard Capacity or High Capacity). You can change or adapt this 
        frequency by adjusting the "ClockDiv" field. 
        The SD Card frequency (SDMMC_CK) is computed as follows:
  
           SDMMC_CK = SDMMCCLK / (2 * ClockDiv)
  
        In initialization mode and according to the SD Card standard, 
        make sure that the SDMMC_CK frequency doesn't exceed 400KHz.
  
    (#) Get the SD CID and CSD data. All these information are managed by the SDCardInfo 
        structure. This structure provide also ready computed SD Card capacity 
        and Block size.
        
        -@- These information are stored in SD handle structure in case of future use.  
  
    (#) Configure the SD Card Data transfer frequency. You can change or adapt this 
        frequency by adjusting the "ClockDiv" field.
        In transfer mode and according to the SD Card standard, make sure that the 
        SDMMC_CK frequency doesn't exceed 25MHz and 100MHz in High-speed mode switch.
  
    (#) Select the corresponding SD Card according to the address read with the step 2.
    
    (#) Configure the SD Card in wide bus mode: 4-bits data.
  
  *** SD Card Read operation ***
  ==============================
  [..] 
    (+) You can read from SD card in polling mode by using function HAL_SD_ReadBlocks(). 
        This function support only 512-bytes block length (the block size should be 
        chosen as 512 bytes).
        You can choose either one block read operation or multiple block read operation 
        by adjusting the "NumberOfBlocks" parameter.

    (+) You can read from SD card in DMA mode by using function HAL_SD_ReadBlocks_DMA().
        This function support only 512-bytes block length (the block size should be 
        chosen as 512 bytes).
        You can choose either one block read operation or multiple block read operation 
        by adjusting the "NumberOfBlocks" parameter.
  
  *** SD Card Write operation ***
  =============================== 
  [..] 
    (+) You can write to SD card in polling mode by using function HAL_SD_WriteBlocks(). 
        This function support only 512-bytes block length (the block size should be 
        chosen as 512 bytes).
        You can choose either one block read operation or multiple block read operation 
        by adjusting the "NumberOfBlocks" parameter.

    (+) You can write to SD card in DMA mode by using function HAL_SD_WriteBlocks_DMA().
        This function support only 512-bytes block length (the block size should be 
        chosen as 512 byte).
        You can choose either one block read operation or multiple block read operation 
        by adjusting the "NumberOfBlocks" parameter.
  
  *** SD card status ***
  ====================== 
  [..]
    (+) At any time, you can check the SD Card status and get the SD card state 
        by using the HAL_SD_GetStatusInfo() function. This function checks first if the 
        SD card is still connected and then get the internal SD Card transfer state.     

  *** SD HAL driver macros list ***
  ==================================
  [..]
    Below the list of most used macros in SD HAL driver.
       
    (+) __HAL_SD_ENABLE_IT: Enable the SD device interrupt
    (+) __HAL_SD_DISABLE_IT: Disable the SD device interrupt
    (+) __HAL_SD_GET_FLAG:Check whether the specified SD flag is set or not
    (+) __HAL_SD_CLEAR_FLAG: Clear the SD's pending flags
      
    (@) You can refer to the SD HAL driver header file for more useful macros 
      
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
#include "stm32h7xx_hal.h"

/** @addtogroup STM32H7xx_HAL_Driver
  * @{
  */

/** @addtogroup SD 
  * @{
  */

#ifdef HAL_SD_MODULE_ENABLED

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/** @addtogroup SD_Private_Defines
  * @{
  */
    
/**
  * @}
  */
  
  
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/** @defgroup SD_Private_Functions SD Private Functions
  * @{
  */
static uint32_t SD_InitCard(SD_HandleTypeDef *hsd);
static uint32_t SD_PowerON(SD_HandleTypeDef *hsd);
static uint32_t SD_SendSDStatus(SD_HandleTypeDef *hsd, uint32_t *pSDstatus);
static uint32_t SD_SendStatus(SD_HandleTypeDef *hsd, uint32_t *pCardStatus);
static uint32_t SD_WideBus_Enable(SD_HandleTypeDef *hsd);
static uint32_t SD_WideBus_Disable(SD_HandleTypeDef *hsd);
static uint32_t SD_FindSCR(SD_HandleTypeDef *hsd, uint32_t *pSCR);
static HAL_StatusTypeDef SD_PowerOFF(SD_HandleTypeDef *hsd);
static HAL_StatusTypeDef SD_Write_IT(SD_HandleTypeDef *hsd);
static HAL_StatusTypeDef SD_Read_IT(SD_HandleTypeDef *hsd);
#if (USE_SD_TRANSCEIVER != 0U)
static uint32_t SD_HighSpeed(SD_HandleTypeDef *hsd);
#endif /* USE_SD_TRANSCEIVER */

/**
  * @}
  */
/* Exported functions --------------------------------------------------------*/
/** @addtogroup SD_Exported_Functions
  * @{
  */

/** @addtogroup SD_Exported_Functions_Group1
 *  @brief   Initialization and de-initialization functions 
 *
@verbatim    
  ==============================================================================
          ##### Initialization and de-initialization functions #####
  ==============================================================================
  [..]  
    This section provides functions allowing to initialize/de-initialize the SD
    card device to be ready for use.
      
@endverbatim
  * @{
  */

/**
  * @brief  Initializes the SD according to the specified parameters in the 
            SD_HandleTypeDef and create the associated handle.
  * @param  hsd: Pointer to the SD handle  
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_Init(SD_HandleTypeDef *hsd)
{
  /* Check the SD handle allocation */
  if(hsd == NULL)
  {
    return HAL_ERROR;
  }

  /* Check the parameters */
  assert_param(IS_SDMMC_ALL_INSTANCE(hsd->Instance));
  assert_param(IS_SDMMC_CLOCK_EDGE(hsd->Init.ClockEdge));
  assert_param(IS_SDMMC_CLOCK_POWER_SAVE(hsd->Init.ClockPowerSave));
  assert_param(IS_SDMMC_BUS_WIDE(hsd->Init.BusWide));
  assert_param(IS_SDMMC_HARDWARE_FLOW_CONTROL(hsd->Init.HardwareFlowControl));
  assert_param(IS_SDMMC_CLKDIV(hsd->Init.ClockDiv));

  if(hsd->State == HAL_SD_STATE_RESET)
  {
    /* Allocate lock resource and initialize it */
    hsd->Lock = HAL_UNLOCKED;
    /* Init the low level hardware : GPIO, CLOCK, CORTEX...etc */
    HAL_SD_MspInit(hsd);
  }

  hsd->State = HAL_SD_STATE_BUSY;

  /* Initialize the Card parameters */
  if(HAL_SD_InitCard(hsd) == HAL_ERROR)
  {
    return HAL_ERROR;
  }

  /* Configure the bus wide */
  if(HAL_SD_ConfigWideBusOperation(hsd, hsd->Init.BusWide) == HAL_ERROR)
  {
    return HAL_ERROR;
  }
#if (USE_SD_TRANSCEIVER != 0U)
    if((hsd->SdCard.CardSpeed  == CARD_ULTRA_HIGH_SPEED) || 
       (hsd->SdCard.CardType == CARD_SDHC_SDXC))
    {
      hsd->Instance->CLKCR |= 0x00100000;
      /* Enable High Speed */
      if(SD_HighSpeed(hsd) == HAL_ERROR)
      {
        return HAL_ERROR;
      }
    }
#endif /* USE_SD_TRANSCEIVER */
  
  /* Initialize the error code */
  hsd->ErrorCode = HAL_DMA_ERROR_NONE;
  
  /* Initialize the SD operation */
  hsd->Context = SD_CONTEXT_NONE;

  /* Initialize the SD state */
  hsd->State = HAL_SD_STATE_READY;

  return HAL_OK;
}

/**
  * @brief  Initializes the SD Card according to the specified parameters in the 
  * @brief  Initializes the SD Card.
  * @param  hsd: Pointer to SD handle
  * @note   This function initializes the SD card. It could be used when a card 
            re-initialization is needed.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_InitCard(SD_HandleTypeDef *hsd)
{
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  SD_InitTypeDef Init;
  
  /* Default SDMMC peripheral configuration for SD card initialization */
  Init.ClockEdge           = SDMMC_CLOCK_EDGE_RISING;
  Init.ClockPowerSave      = SDMMC_CLOCK_POWER_SAVE_DISABLE;
  Init.BusWide             = SDMMC_BUS_WIDE_1B;
  Init.HardwareFlowControl = SDMMC_HARDWARE_FLOW_CONTROL_DISABLE;
  Init.ClockDiv            = SDMMC_INIT_CLK_DIV;
  
#if (USE_SD_TRANSCEIVER != 0U)
    /* Set Transceiver polarity */ 
    hsd->Instance->POWER |= SDMMC_POWER_DIRPOL;
#endif /* USE_SD_TRANSCEIVER  */
  
  /* Initialize SDMMC peripheral interface with default configuration */
  SDMMC_Init(hsd->Instance, Init);
  
  /* Set Power State to ON */
  SDMMC_PowerState_ON(hsd->Instance);
  

  /* Identify card operating voltage */
  errorstate = SD_PowerON(hsd);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    hsd->State = HAL_SD_STATE_READY;
    hsd->ErrorCode |= errorstate;
    return HAL_ERROR;
  }

  /* Card initialization */
  errorstate = SD_InitCard(hsd);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    hsd->State = HAL_SD_STATE_READY;
    hsd->ErrorCode |= errorstate;
    return HAL_ERROR;
  }

  return HAL_OK;
}

/**
  * @brief  De-Initializes the SD card.
  * @param  hsd: Pointer to SD handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_DeInit(SD_HandleTypeDef *hsd)
{
  /* Check the SD handle allocation */
  if(hsd == NULL)
  {
    return HAL_ERROR;
  }
  
  /* Check the parameters */
  assert_param(IS_SDMMC_ALL_INSTANCE(hsd->Instance));

  hsd->State = HAL_SD_STATE_BUSY;

#if (USE_SD_TRANSCEIVER != 0U)
  /* Desactivate the 1.8V Mode */
  HAL_SD_DriveTransciver_1_8V_Callback(RESET);
#endif /* USE_SD_TRANSCEIVER   */  
  
  /* Set SD power state to off */ 
  SD_PowerOFF(hsd);
  
  /* De-Initialize the MSP layer */
  HAL_SD_MspDeInit(hsd);
  
  hsd->ErrorCode = HAL_SD_ERROR_NONE;
  hsd->State = HAL_SD_STATE_RESET;
  
  return HAL_OK;
}


/**
  * @brief  Initializes the SD MSP.
  * @param  hsd: Pointer to SD handle
  * @retval None
  */
__weak void HAL_SD_MspInit(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function Should not be modified, when the callback is needed,
            the HAL_SD_MspInit could be implemented in the user file
   */
}

/**
  * @brief  De-Initialize SD MSP.
  * @param  hsd: Pointer to SD handle
  * @retval None
  */
__weak void HAL_SD_MspDeInit(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function Should not be modified, when the callback is needed,
            the HAL_SD_MspDeInit could be implemented in the user file
   */
}

/**
  * @}
  */

/** @addtogroup SD_Exported_Functions_Group2
 *  @brief   Data transfer functions 
 *
@verbatim   
  ==============================================================================
                        ##### IO operation functions #####
  ==============================================================================  
  [..]
    This subsection provides a set of functions allowing to manage the data 
    transfer from/to SD card.

@endverbatim
  * @{
  */

/**
  * @brief  Reads block(s) from a specified address in a card. The Data transfer 
  *         is managed by polling mode.  
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @param  hsd: Pointer to SD handle
  * @param  pData: pointer to the buffer that will contain the received data
  * @param  BlockAdd: Block Address from where data is to be read 
  * @param  NumberOfBlocks: Number of SD blocks to read
  * @param  Timeout    
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_ReadBlocks(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint32_t tickstart = HAL_GetTick();
  uint32_t count = 0, *tempbuff = (uint32_t *)pData;
  
  if(NULL == pData)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
    return HAL_ERROR;
  }
 
  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if((BlockAdd + NumberOfBlocks) > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode |= HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Initialize data control register */
    hsd->Instance->DCTRL = 0;
    
    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockAdd *= 512;
    }
      
    /* Set Block Size for Card */
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, BLOCKSIZE);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Configure the SD DPSM (Data Path State Machine) */
    config.DataTimeOut   = SDMMC_DATATIMEOUT;
    config.DataLength    = NumberOfBlocks * BLOCKSIZE;
    config.DataBlockSize = SDMMC_DATABLOCK_SIZE_512B;
    config.TransferDir   = SDMMC_TRANSFER_DIR_TO_SDMMC;
    config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    config.DPSM          = SDMMC_DPSM_ENABLE;
    SDMMC_ConfigData(hsd->Instance, &config);
    
    /* Read block(s) in polling mode */
    if(NumberOfBlocks > 1)
    {
      hsd->Context = SD_CONTEXT_READ_MULTIPLE_BLOCK;
      
      /* Read Multi Block command */ 
      errorstate = SDMMC_CmdReadMultiBlock(hsd->Instance, BlockAdd);
    }
    else
    {
      hsd->Context = SD_CONTEXT_READ_SINGLE_BLOCK;
      
      /* Read Single Block command */
      errorstate = SDMMC_CmdReadSingleBlock(hsd->Instance, BlockAdd);
    }
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
      
    /* Poll on SDMMC flags */
    while(!__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR | SDMMC_FLAG_DCRCFAIL | SDMMC_FLAG_DTIMEOUT | SDMMC_FLAG_DATAEND))
    {
      if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXFIFOHF))
      {
        /* Read data from SDMMC Rx FIFO */
        for(count = 0U; count < 8U; count++)
        {
          *(tempbuff + count) = SDMMC_ReadFIFO(hsd->Instance);
        }
        tempbuff += 8U;
      }
      
      if((Timeout == 0U)||((HAL_GetTick()-tickstart) >=  Timeout))
      {
        /* Clear all the static flags */
        __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
        hsd->ErrorCode |= HAL_SD_ERROR_TIMEOUT;
        hsd->State= HAL_SD_STATE_READY;
        return HAL_TIMEOUT;
      }
    }
    
    /* Send stop transmission command in case of multiblock read */
    if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DATAEND) && (NumberOfBlocks > 1U))
    {    
      if(hsd->SdCard.CardType != CARD_SECURED)
      {
      /* Send stop transmission command */
      errorstate = SDMMC_CmdStopTransfer(hsd->Instance);
      if(errorstate != HAL_SD_ERROR_NONE)
      {
          /* Clear all the static flags */
          __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
        hsd->ErrorCode |= errorstate;
          hsd->State = HAL_SD_STATE_READY;
        return HAL_ERROR;
      }
    }
    }
    
    /* Get error state */
    if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DTIMEOUT))
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_DATA_TIMEOUT;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    else if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DCRCFAIL))
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_DATA_CRC_FAIL;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    else if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR))
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_RX_OVERRUN;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
    
    hsd->State = HAL_SD_STATE_READY;
    
    return HAL_OK;
  }
  else
  {
    hsd->ErrorCode |= HAL_SD_ERROR_BUSY;
    return HAL_ERROR;
  }
}

/**
  * @brief  Allows to write block(s) to a specified address in a card. The Data
  *         transfer is managed by polling mode.  
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @param  hsd: Pointer to SD handle
  * @param  pData: pointer to the buffer that will contain the data to transmit
  * @param  BlockAdd: Block Address where data will be written  
  * @param  NumberOfBlocks: Number of SD blocks to write 
  * @param  Timeout 
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_WriteBlocks(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks, uint32_t Timeout)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint32_t count = 0;
  uint32_t tickstart = HAL_GetTick();
  uint32_t *tempbuff = (uint32_t *)pData;
  
  if(NULL == pData)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
    return HAL_ERROR;
  }

  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if((BlockAdd + NumberOfBlocks) > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode |= HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Initialize data control register */
    hsd->Instance->DCTRL = 0;
     
    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockAdd *= 512;
    }
    
    /* Set Block Size for Card */ 
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, BLOCKSIZE);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);  
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Write Blocks in Polling mode */
    if(NumberOfBlocks > 1U)
    {
      hsd->Context = SD_CONTEXT_WRITE_MULTIPLE_BLOCK;
      
      /* Write Multi Block command */ 
      errorstate = SDMMC_CmdWriteMultiBlock(hsd->Instance, BlockAdd);
    }
    else
    {
      hsd->Context = SD_CONTEXT_WRITE_SINGLE_BLOCK;
      
      /* Write Single Block command */
      errorstate = SDMMC_CmdWriteSingleBlock(hsd->Instance, BlockAdd);
    }
      if(errorstate != HAL_SD_ERROR_NONE)
      {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);  
        hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
        return HAL_ERROR;
      }
    
    /* Configure the SD DPSM (Data Path State Machine) */
    config.DataTimeOut   = SDMMC_DATATIMEOUT;
    config.DataLength    = NumberOfBlocks * BLOCKSIZE;
    config.DataBlockSize = SDMMC_DATABLOCK_SIZE_512B;
    config.TransferDir   = SDMMC_TRANSFER_DIR_TO_CARD;
    config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    config.DPSM          = SDMMC_DPSM_ENABLE;
    SDMMC_ConfigData(hsd->Instance, &config);
    
    /* Write block(s) in polling mode */
    while(!__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_TXUNDERR | SDMMC_FLAG_DCRCFAIL | SDMMC_FLAG_DTIMEOUT | SDMMC_FLAG_DATAEND))
    {
      if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_TXFIFOHE))
      {
          /* Write data to SDMMC Tx FIFO */
        for(count = 0U; count < 8U; count++)
          {
            SDMMC_WriteFIFO(hsd->Instance, (tempbuff + count));
          }
        tempbuff += 8U;
      }
      
      if((Timeout == 0U)||((HAL_GetTick()-tickstart) >=  Timeout))
      {
        /* Clear all the static flags */
        __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);  
        hsd->ErrorCode |= errorstate;
        hsd->State= HAL_SD_STATE_READY;
        return HAL_TIMEOUT;
      }
    }
    
    /* Send stop transmission command in case of multiblock write */
    if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DATAEND) && (NumberOfBlocks > 1U))
    { 
      if(hsd->SdCard.CardType != CARD_SECURED)
      { 
        /* Send stop transmission command */
        errorstate = SDMMC_CmdStopTransfer(hsd->Instance);
        if(errorstate != HAL_SD_ERROR_NONE)
        {
          /* Clear all the static flags */
          __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);  
          hsd->ErrorCode |= errorstate;
          hsd->State = HAL_SD_STATE_READY;
          return HAL_ERROR;
        }
      }
    }
    
    /* Get error state */
    if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DTIMEOUT))
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_DATA_TIMEOUT;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    else if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DCRCFAIL))
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_DATA_CRC_FAIL;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    else if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_TXUNDERR))
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_TX_UNDERRUN;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
    
    hsd->State = HAL_SD_STATE_READY;
    
    return HAL_OK;
  }
  else
  {
    hsd->ErrorCode |= HAL_SD_ERROR_BUSY;
    return HAL_ERROR;
  }
}


/**
  * @brief  Reads block(s) from a specified address in a card. The Data transfer 
  *         is managed in interrupt mode. 
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @note   You could also check the IT transfer process through the SD Rx 
  *         interrupt event.
  * @param  hsd: Pointer to SD handle                 
  * @param  pData: Pointer to the buffer that will contain the received data
  * @param  BlockAdd: Block Address from where data is to be read 
  * @param  NumberOfBlocks: Number of blocks to read.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_ReadBlocks_IT(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if(NULL == pData)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
    return HAL_ERROR;
  }
  
  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if((BlockAdd + NumberOfBlocks) > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode |= HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Initialize data control register */
    hsd->Instance->DCTRL = 0U;

    hsd->pRxBuffPtr = (uint32_t *)pData;
    hsd->RxXferSize = BLOCKSIZE * NumberOfBlocks;
    
    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockAdd *= 512U;
    }
    
    /* Set Block Size for Card */ 
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, BLOCKSIZE);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }

        /* Configure the SD DPSM (Data Path State Machine) */ 
    config.DataTimeOut   = SDMMC_DATATIMEOUT;
    config.DataLength    = BLOCKSIZE * NumberOfBlocks;
    config.DataBlockSize = SDMMC_DATABLOCK_SIZE_512B;
    config.TransferDir   = SDMMC_TRANSFER_DIR_TO_SDMMC;
    config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    config.DPSM          = SDMMC_DPSM_ENABLE;
    SDMMC_ConfigData(hsd->Instance, &config);
    
    /* Read Blocks in IT mode */
    if(NumberOfBlocks > 1U)
    {
      hsd->Context = (SD_CONTEXT_READ_MULTIPLE_BLOCK | SD_CONTEXT_IT);
      
      /* Read Multi Block command */
      errorstate = SDMMC_CmdReadMultiBlock(hsd->Instance, BlockAdd);
    }
    else
    {
      hsd->Context = (SD_CONTEXT_READ_SINGLE_BLOCK | SD_CONTEXT_IT);
      
      /* Read Single Block command */
      errorstate = SDMMC_CmdReadSingleBlock(hsd->Instance, BlockAdd);
    }

    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }

    
    __HAL_SD_ENABLE_IT(hsd, (SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_RXOVERR | SDMMC_IT_DATAEND | SDMMC_FLAG_RXFIFOHF));
    
    return HAL_OK;
  }
  else
  {
    return HAL_BUSY;
  }
}

/**
  * @brief  Writes block(s) to a specified address in a card. The Data transfer 
  *         is managed in interrupt mode. 
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @note   You could also check the IT transfer process through the SD Tx 
  *         interrupt event. 
  * @param  hsd: Pointer to SD handle
  * @param  pData: Pointer to the buffer that will contain the data to transmit
  * @param  BlockAdd: Block Address where data will be written    
  * @param  NumberOfBlocks: Number of blocks to write
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_WriteBlocks_IT(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if(NULL == pData)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
    return HAL_ERROR;
  }
  
  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if((BlockAdd + NumberOfBlocks) > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode |= HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Initialize data control register */
    hsd->Instance->DCTRL = 0U;
    
    hsd->pTxBuffPtr = (uint32_t *)pData;
    hsd->TxXferSize = BLOCKSIZE * NumberOfBlocks;
    
    /* Enable transfer interrupts */
    __HAL_SD_ENABLE_IT(hsd, (SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_TXUNDERR | SDMMC_IT_DATAEND | SDMMC_FLAG_TXFIFOHE)); 
    
    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockAdd *= 512U;
    }
    
    /* Set Block Size for Card */ 
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, BLOCKSIZE);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Write Blocks in Polling mode */
    if(NumberOfBlocks > 1U)
    {
      hsd->Context = (SD_CONTEXT_WRITE_MULTIPLE_BLOCK| SD_CONTEXT_IT);
      
      /* Write Multi Block command */ 
      errorstate = SDMMC_CmdWriteMultiBlock(hsd->Instance, BlockAdd);
    }
    else
    {
      hsd->Context = (SD_CONTEXT_WRITE_SINGLE_BLOCK | SD_CONTEXT_IT);
      
      /* Write Single Block command */ 
      errorstate = SDMMC_CmdWriteSingleBlock(hsd->Instance, BlockAdd);
    }
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Configure the SD DPSM (Data Path State Machine) */ 
    config.DataTimeOut   = SDMMC_DATATIMEOUT;
    config.DataLength    = BLOCKSIZE * NumberOfBlocks;
    config.DataBlockSize = SDMMC_DATABLOCK_SIZE_512B;
    config.TransferDir   = SDMMC_TRANSFER_DIR_TO_CARD;
    config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    config.DPSM          = SDMMC_DPSM_ENABLE;
    SDMMC_ConfigData(hsd->Instance, &config);
    
    return HAL_OK;
  }
  else
  {
    return HAL_BUSY;
  }
}

/**
  * @brief  Reads block(s) from a specified address in a card. The Data transfer 
  *         is managed by DMA mode. 
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @note   You could also check the DMA transfer process through the SD Rx 
  *         interrupt event.
  * @param  hsd: Pointer SD handle                 
  * @param  pData: Pointer to the buffer that will contain the received data
  * @param  BlockAdd: Block Address from where data is to be read  
  * @param  NumberOfBlocks: Number of blocks to read.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_ReadBlocks_DMA(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;

  if(NULL == pData)
  {
    hsd->ErrorCode = HAL_SD_ERROR_PARAM;
    return HAL_ERROR;
  }
  
  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if((BlockAdd + NumberOfBlocks) > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode = HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Initialize data control register */
    hsd->Instance->DCTRL = 0U;
    
    hsd->pRxBuffPtr = (uint32_t*)pData;
    hsd->RxXferSize = BLOCKSIZE * NumberOfBlocks;
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockAdd *= 512U;
    }
    
    /* Configure the SD DPSM (Data Path State Machine) */ 
    config.DataTimeOut   = SDMMC_DATATIMEOUT;
    config.DataLength    = BLOCKSIZE * NumberOfBlocks;
    config.DataBlockSize = SDMMC_DATABLOCK_SIZE_512B;
    config.TransferDir   = SDMMC_TRANSFER_DIR_TO_SDMMC;
    config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    config.DPSM          = SDMMC_DPSM_DISABLE;
    SDMMC_ConfigData(hsd->Instance, &config);
    
    /* Set Block Size for Card */ 
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, BLOCKSIZE);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode = errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }

    /* Enable transfer interrupts */
    __HAL_SD_ENABLE_IT(hsd, (SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_RXOVERR | SDMMC_IT_DATAEND));
        
    __SDMMC_CMDTRANS_ENABLE( hsd->Instance);
    hsd->Instance->IDMACTRL  = SDMMC_ENABLE_IDMA_SINGLE_BUFF; 
    hsd->Instance->IDMABASE0 = (uint32_t) pData ;

    /* Read Blocks in DMA mode */
    if(NumberOfBlocks > 1U)
    {
      hsd->Context = (SD_CONTEXT_READ_MULTIPLE_BLOCK | SD_CONTEXT_DMA);
      
      /* Read Multi Block command */
      errorstate = SDMMC_CmdReadMultiBlock(hsd->Instance, BlockAdd);
    }
    else
    {
      hsd->Context = (SD_CONTEXT_READ_SINGLE_BLOCK | SD_CONTEXT_DMA);
      
      /* Read Single Block command */
      errorstate = SDMMC_CmdReadSingleBlock(hsd->Instance, BlockAdd);
    }
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      __HAL_SD_DISABLE_IT(hsd, (SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_RXOVERR | SDMMC_IT_DATAEND));
      hsd->ErrorCode = errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    return HAL_OK;
  }
  else
  {
    return HAL_BUSY;
  }
}

/**
  * @brief  Writes block(s) to a specified address in a card. The Data transfer 
  *         is managed by DMA mode. 
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @note   You could also check the DMA transfer process through the SD Tx 
  *         interrupt event.
  * @param  hsd: Pointer to SD handle
  * @param  pData: pointer to the buffer that will contain the data to transmit
  * @param  BlockAdd: Block Address where data will be written  
  * @param  NumberOfBlocks: Number of blocks to write
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_WriteBlocks_DMA(SD_HandleTypeDef *hsd, uint8_t *pData, uint32_t BlockAdd, uint32_t NumberOfBlocks)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if(NULL == pData)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
    return HAL_ERROR;
  }

  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if((BlockAdd + NumberOfBlocks) > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode |= HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Initialize data control register */
    hsd->Instance->DCTRL = 0U;
    
    hsd->pTxBuffPtr = (uint32_t*)pData;
    hsd->TxXferSize = BLOCKSIZE * NumberOfBlocks;

    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockAdd *= 512U;
    }

    /* Set Block Size for Card */ 
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, BLOCKSIZE);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    /* Configure the SD DPSM (Data Path State Machine) */
    config.DataTimeOut   = SDMMC_DATATIMEOUT;
    config.DataLength    = BLOCKSIZE * NumberOfBlocks;
    config.DataBlockSize = SDMMC_DATABLOCK_SIZE_512B;
    config.TransferDir   = SDMMC_TRANSFER_DIR_TO_CARD;
    config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    config.DPSM          = SDMMC_DPSM_DISABLE;
    SDMMC_ConfigData(hsd->Instance, &config);

    /* Enable transfer interrupts */
    __HAL_SD_ENABLE_IT(hsd, (SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_TXUNDERR | SDMMC_IT_DATAEND)); 
        
    __SDMMC_CMDTRANS_ENABLE( hsd->Instance);

    hsd->Instance->IDMACTRL  = SDMMC_ENABLE_IDMA_SINGLE_BUFF; 
    hsd->Instance->IDMABASE0 = (uint32_t) pData ;
    
    /* Write Blocks in Polling mode */
    if(NumberOfBlocks > 1U)
    {
      hsd->Context = (SD_CONTEXT_WRITE_MULTIPLE_BLOCK | SD_CONTEXT_DMA);
      
      /* Write Multi Block command */ 
      errorstate = SDMMC_CmdWriteMultiBlock(hsd->Instance, BlockAdd);
    }
    else
    {
      hsd->Context = (SD_CONTEXT_WRITE_SINGLE_BLOCK | SD_CONTEXT_DMA);
      
      /* Write Single Block command */
      errorstate = SDMMC_CmdWriteSingleBlock(hsd->Instance, BlockAdd);
    }
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      __HAL_SD_DISABLE_IT(hsd, (SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_TXUNDERR | SDMMC_IT_DATAEND));
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
  
    return (HAL_StatusTypeDef)errorstate;
  }
  else
  {
    return HAL_BUSY;
  }

}

/**
  * @brief  Erases the specified memory area of the given SD card.
  * @note   This API should be followed by a check on the card state through
  *         HAL_SD_GetCardState().
  * @param  hsd: Pointer to SD handle 
  * @param  BlockStartAdd: Start Block address
  * @param  BlockEndAdd: End Block address
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_Erase(SD_HandleTypeDef *hsd, uint32_t BlockStartAdd, uint32_t BlockEndAdd)
{
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if(hsd->State == HAL_SD_STATE_READY)
  {
    hsd->ErrorCode = HAL_DMA_ERROR_NONE;
    
    if(BlockEndAdd < BlockStartAdd)
    {
      hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
      return HAL_ERROR;
    }
    
    if(BlockEndAdd > (hsd->SdCard.LogBlockNbr))
    {
      hsd->ErrorCode |= HAL_SD_ERROR_ADDR_OUT_OF_RANGE;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_BUSY;
    
    /* Check if the card command class supports erase command */
    if(((hsd->SdCard.Class) & SDMMC_CCCC_ERASE) == 0U)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      hsd->ErrorCode |= HAL_SD_ERROR_REQUEST_NOT_APPLICABLE;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
        
    if((SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1) & SDMMC_CARD_LOCKED) == SDMMC_CARD_LOCKED)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);  
      hsd->ErrorCode |= HAL_SD_ERROR_LOCK_UNLOCK_FAILED;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Get start and end block for high capacity cards */
    if(hsd->SdCard.CardType != CARD_SDHC_SDXC)
    {
      BlockStartAdd *= 512U;
      BlockEndAdd   *= 512U;
    }
    
    /* According to sd-card spec 1.0 ERASE_GROUP_START (CMD32) and erase_group_end(CMD33) */
    if(hsd->SdCard.CardType != CARD_SECURED)
    {
    /* Send CMD32 SD_ERASE_GRP_START with argument as addr  */
      errorstate = SDMMC_CmdSDEraseStartAdd(hsd->Instance, BlockStartAdd);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
        /* Clear all the static flags */
        __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
        hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    /* Send CMD33 SD_ERASE_GRP_END with argument as addr  */
      errorstate = SDMMC_CmdSDEraseEndAdd(hsd->Instance, BlockEndAdd);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
        /* Clear all the static flags */
        __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
        hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    }
    
    /* Send CMD38 ERASE */
    errorstate = SDMMC_CmdErase(hsd->Instance);
    if(errorstate != HAL_SD_ERROR_NONE)
    {
      /* Clear all the static flags */
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS); 
      hsd->ErrorCode |= errorstate;
      hsd->State = HAL_SD_STATE_READY;
      return HAL_ERROR;
    }
    
    hsd->State = HAL_SD_STATE_READY;
    
    return HAL_OK;
  }
  else
  {
    return HAL_BUSY;
  }
}

/**
  * @brief  This function handles SD card interrupt request.
  * @param  hsd: Pointer to SD handle
  * @retval None
  */
void HAL_SD_IRQHandler(SD_HandleTypeDef *hsd)
{
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint32_t tickstart = HAL_GetTick();
  
  /* Check for SDMMC interrupt flags */
  if(__HAL_SD_GET_FLAG(hsd, SDMMC_IT_DATAEND) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DATAEND); 
    
    __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT | SDMMC_IT_RXOVERR\
                           | SDMMC_IT_TXUNDERR | SDMMC_IT_DATAEND | SDMMC_FLAG_IDMATE\
                           | SDMMC_FLAG_TXFIFOHE | SDMMC_FLAG_RXFIFOHF);
    
    if((hsd->Context & SD_CONTEXT_DMA) != RESET)
    {
      
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
      __SDMMC_CMDTRANS_DISABLE( hsd->Instance);
      
      hsd->Instance->DLEN = 0;
      hsd->Instance->DCTRL = 0;
      hsd->Instance->IDMACTRL = SDMMC_DISABLE_IDMA ;

      /* Stop Transfer for Write Multi blocks or Read Multi blocks */
      if(((hsd->Context & SD_CONTEXT_READ_MULTIPLE_BLOCK) != RESET) || ((hsd->Context & SD_CONTEXT_WRITE_MULTIPLE_BLOCK) != RESET))
      {
        errorstate = SDMMC_CmdStopTransfer(hsd->Instance);
        if(errorstate != HAL_SD_ERROR_NONE)
        {
          hsd->ErrorCode = errorstate;
          HAL_SD_ErrorCallback(hsd);
        }
      }
      
      if(((hsd->Context & SD_CONTEXT_WRITE_SINGLE_BLOCK) != RESET) || ((hsd->Context & SD_CONTEXT_WRITE_MULTIPLE_BLOCK) != RESET))
      {
        while((HAL_SD_GetCardState(hsd) != HAL_SD_CARD_TRANSFER) && ((HAL_GetTick() - tickstart) <=  SDMMC_MAX_TRIAL))
        {
          /* Wait until SD CARD Status goes to TRANSFER STATE or Timeout */
        }
        
        HAL_SD_TxCpltCallback(hsd);
      }
      if(((hsd->Context & SD_CONTEXT_READ_SINGLE_BLOCK) != RESET) || ((hsd->Context & SD_CONTEXT_READ_MULTIPLE_BLOCK) != RESET))
      {
        HAL_SD_RxCpltCallback(hsd);
      }
      

      hsd->State = HAL_SD_STATE_READY;
      
    }
    
    if ((hsd->Context & SD_CONTEXT_IT) != RESET)
    {
      if ((hsd->Context & SD_CONTEXT_READ_MULTIPLE_BLOCK) != RESET)
      {
        errorstate = SDMMC_CmdStopTransfer(hsd->Instance);
        if(errorstate != HAL_SD_ERROR_NONE)
        {
          hsd->ErrorCode = errorstate;
          HAL_SD_ErrorCallback(hsd);
        }

        hsd->State = HAL_SD_STATE_READY;
        
        HAL_SD_RxCpltCallback(hsd);
      }
      else if (((hsd->Context & SD_CONTEXT_WRITE_SINGLE_BLOCK) != RESET) || ((hsd->Context & SD_CONTEXT_WRITE_MULTIPLE_BLOCK) != RESET))
      {
        if((hsd->Context & SD_CONTEXT_WRITE_MULTIPLE_BLOCK) != RESET)
        {
          errorstate = SDMMC_CmdStopTransfer(hsd->Instance);
          if(errorstate != HAL_SD_ERROR_NONE)
          {
            hsd->ErrorCode = errorstate;
            HAL_SD_ErrorCallback(hsd);
          }
        }
      
      
        /* Clear all the static flags */
        __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
        
        hsd->State = HAL_SD_STATE_READY;
        
        HAL_SD_TxCpltCallback(hsd);
      }
    }
  }
  
  else if (__HAL_SD_GET_FLAG(hsd, SDMMC_IT_TXFIFOHE) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_TXFIFOHE);
    
    SD_Write_IT(hsd);
  }
  
  else if (__HAL_SD_GET_FLAG(hsd, SDMMC_IT_RXFIFOHF) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_RXFIFOHF);
    
    SD_Read_IT(hsd);
  }
  
  else if (__HAL_SD_GET_FLAG(hsd, SDMMC_IT_DCRCFAIL) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DCRCFAIL);
    
    __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_DCRCFAIL);
    
    HAL_SD_ErrorCallback(hsd);
  }
  
  else if (__HAL_SD_GET_FLAG(hsd, SDMMC_IT_DTIMEOUT) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DTIMEOUT);
    
    __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_DTIMEOUT);
    
    HAL_SD_ErrorCallback(hsd);
  }
  
  else if (__HAL_SD_GET_FLAG(hsd, SDMMC_IT_RXOVERR) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_RXOVERR);
    
    __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_RXOVERR);
    
    HAL_SD_ErrorCallback(hsd);
  }
  
  else if (__HAL_SD_GET_FLAG(hsd, SDMMC_IT_TXUNDERR) != RESET)
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_TXUNDERR);
    
    __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_TXUNDERR);
    
    HAL_SD_ErrorCallback(hsd);
  }
  
  else if(__HAL_SD_GET_FLAG(hsd, SDMMC_IT_IDMATE) != RESET)
  {
    __SDMMC_CMDTRANS_DISABLE( hsd->Instance);
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_IDMATE);
    
    __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_IDMATE);
    
    HAL_SD_ErrorCallback(hsd);
  }
  else if(__HAL_SD_GET_FLAG(hsd, SDMMC_IT_IDMABTC) != RESET)
  {
    if(READ_BIT(hsd->Instance->IDMACTRL, SDMMC_IDMA_IDMABACT) == SD_DMA_BUFFER0)
    {
      /* Current buffer is buffer0, Transfer complete for buffer1 */
      if((hsd->Context & SD_CONTEXT_WRITE_MULTIPLE_BLOCK) != RESET)
      {
        HAL_SDEx_Write_DMADoubleBuffer1CpltCallback(hsd);
      }
      else /* SD_CONTEXT_READ_MULTIPLE_BLOCK */
      {
        HAL_SDEx_Read_DMADoubleBuffer1CpltCallback(hsd);
      }
    }
    else /* SD_DMA_BUFFER1 */
    {
      /* Current buffer is buffer1, Transfer complete for buffer0 */
      if((hsd->Context & SD_CONTEXT_WRITE_MULTIPLE_BLOCK) != RESET)
      {
        HAL_SDEx_Write_DMADoubleBuffer0CpltCallback(hsd);
      }
      else /* SD_CONTEXT_READ_MULTIPLE_BLOCK */
      {
        HAL_SDEx_Read_DMADoubleBuffer0CpltCallback(hsd);
      }
    }
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_IT_IDMABTC);
  }
    
}

/**
  * @brief return the SD state
  * @param hsd: Pointer to sd handle
  * @retval HAL state
  */
HAL_SD_StateTypeDef HAL_SD_GetState(SD_HandleTypeDef *hsd)
{
  return hsd->State;
}

/**
* @brief  Return the SD error code
* @param  hsd : pointer to a SD_HandleTypeDef structure that contains
  *              the configuration information.
* @retval SD Error Code
*/
uint32_t HAL_SD_GetError(SD_HandleTypeDef *hsd)
{
  return hsd->ErrorCode;
}

/**
  * @brief Tx Transfer completed callbacks
  * @param hsd: Pointer to SD handle
  * @retval None
  */
 __weak void HAL_SD_TxCpltCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);

  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SD_TxCpltCallback can be implemented in the user file
   */
}

/**
  * @brief Rx Transfer completed callbacks
  * @param hsd: Pointer SD handle
  * @retval None
  */
__weak void HAL_SD_RxCpltCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SD_RxCpltCallback can be implemented in the user file
   */
}

/**
  * @brief SD error callbacks
  * @param hsd: Pointer SD handle
  * @retval None
  */
__weak void HAL_SD_ErrorCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SD_ErrorCallback can be implemented in the user file
   */ 
}

/**
  * @brief SD Abort callbacks
  * @param hsd: Pointer SD handle
  * @retval None
  */
__weak void HAL_SD_AbortCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SD_ErrorCallback can be implemented in the user file
   */ 
}

#if (USE_SD_TRANSCEIVER != 0U)
/**
  * @brief  Enable/Disable the SD Transciver 1.8V Mode Callback.
  * @param  status: Voltage Switch State
  * @retval None
  */
__weak  void HAL_SD_DriveTransciver_1_8V_Callback(FlagStatus status)
{
 
  /* NOTE : This function Should not be modified, when the callback is needed,
            the HAL_SD_EnableTransciver could be implemented in the user file
   */
}
#endif /* USE_SD_TRANSCEIVER  */

/** @addtogroup SD_Exported_Functions_Group3
 *  @brief   management functions 
 *
@verbatim   
  ==============================================================================
                      ##### Peripheral Control functions #####
  ==============================================================================  
  [..]
    This subsection provides a set of functions allowing to control the SD card 
    operations and get the related information

@endverbatim
  * @{
  */

/**
  * @brief  Returns information the information of the card which are stored on
  *         the CID register.
  * @param  hsd: Pointer to SD handle
  * @param  pCID: Pointer to a HAL_SD_CIDTypedef structure that  
  *         contains all CID register parameters 
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_GetCardCID(SD_HandleTypeDef *hsd, HAL_SD_CardCIDTypedef *pCID)
{
  uint32_t tmp = 0;
  
  /* Byte 0 */
  tmp = (uint8_t)((hsd->CID[0] & 0xFF000000U) >> 24);
  pCID->ManufacturerID = tmp;
  
  /* Byte 1 */
  tmp = (uint8_t)((hsd->CID[0] & 0x00FF0000) >> 16);
  pCID->OEM_AppliID = tmp << 8;
  
  /* Byte 2 */
  tmp = (uint8_t)((hsd->CID[0] & 0x0000FF00) >> 8);
  pCID->OEM_AppliID |= tmp;
  
  /* Byte 3 */
  tmp = (uint8_t)(hsd->CID[0] & 0x000000FF);
  pCID->ProdName1 = tmp << 24;
  
  /* Byte 4 */
  tmp = (uint8_t)((hsd->CID[1] & 0xFF000000U) >> 24);
  pCID->ProdName1 |= tmp << 16;
  
  /* Byte 5 */
  tmp = (uint8_t)((hsd->CID[1] & 0x00FF0000) >> 16);
  pCID->ProdName1 |= tmp << 8;
  
  /* Byte 6 */
  tmp = (uint8_t)((hsd->CID[1] & 0x0000FF00) >> 8);
  pCID->ProdName1 |= tmp;
  
  /* Byte 7 */
  tmp = (uint8_t)(hsd->CID[1] & 0x000000FF);
  pCID->ProdName2 = tmp;
  
  /* Byte 8 */
  tmp = (uint8_t)((hsd->CID[2] & 0xFF000000U) >> 24);
  pCID->ProdRev = tmp;
  
  /* Byte 9 */
  tmp = (uint8_t)((hsd->CID[2] & 0x00FF0000) >> 16);
  pCID->ProdSN = tmp << 24;
  
  /* Byte 10 */
  tmp = (uint8_t)((hsd->CID[2] & 0x0000FF00) >> 8);
  pCID->ProdSN |= tmp << 16;
  
  /* Byte 11 */
  tmp = (uint8_t)(hsd->CID[2] & 0x000000FF);
  pCID->ProdSN |= tmp << 8;
  
  /* Byte 12 */
  tmp = (uint8_t)((hsd->CID[3] & 0xFF000000U) >> 24);
  pCID->ProdSN |= tmp;
  
  /* Byte 13 */
  tmp = (uint8_t)((hsd->CID[3] & 0x00FF0000) >> 16);
  pCID->Reserved1   |= (tmp & 0xF0) >> 4;
  pCID->ManufactDate = (tmp & 0x0F) << 8;
  
  /* Byte 14 */
  tmp = (uint8_t)((hsd->CID[3] & 0x0000FF00) >> 8);
  pCID->ManufactDate |= tmp;
  
  /* Byte 15 */
  tmp = (uint8_t)(hsd->CID[3] & 0x000000FF);
  pCID->CID_CRC   = (tmp & 0xFE) >> 1;
  pCID->Reserved2 = 1;
  
  return HAL_OK;
}

/**
  * @brief  Returns information the information of the card which are stored on
  *         the CSD register.
  * @param  hsd: Pointer to SD handle
  * @param  pCSD: Pointer to a HAL_SD_CardInfoTypedef structure that  
  *         contains all CSD register parameters  
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_GetCardCSD(SD_HandleTypeDef *hsd, HAL_SD_CardCSDTypedef *pCSD)
{
  uint32_t tmp = 0;
  
  /* Byte 0 */
  tmp = (hsd->CSD[0] & 0xFF000000U) >> 24;
  pCSD->CSDStruct      = (uint8_t)((tmp & 0xC0) >> 6);
  pCSD->SysSpecVersion = (uint8_t)((tmp & 0x3C) >> 2);
  pCSD->Reserved1      = tmp & 0x03;
  
  /* Byte 1 */
  tmp = (hsd->CSD[0] & 0x00FF0000) >> 16;
  pCSD->TAAC = (uint8_t)tmp;
  
  /* Byte 2 */
  tmp = (hsd->CSD[0] & 0x0000FF00) >> 8;
  pCSD->NSAC = (uint8_t)tmp;
  
  /* Byte 3 */
  tmp = hsd->CSD[0] & 0x000000FF;
  pCSD->MaxBusClkFrec = (uint8_t)tmp;
  
  /* Byte 4 */
  tmp = (hsd->CSD[1] & 0xFF000000U) >> 24;
  pCSD->CardComdClasses = (uint16_t)(tmp << 4);
  
  /* Byte 5 */
  tmp = (hsd->CSD[1] & 0x00FF0000U) >> 16;
  pCSD->CardComdClasses |= (uint16_t)((tmp & 0xF0) >> 4);
  pCSD->RdBlockLen       = (uint8_t)(tmp & 0x0F);
  
  /* Byte 6 */
  tmp = (hsd->CSD[1] & 0x0000FF00U) >> 8;
  pCSD->PartBlockRead   = (uint8_t)((tmp & 0x80) >> 7);
  pCSD->WrBlockMisalign = (uint8_t)((tmp & 0x40) >> 6);
  pCSD->RdBlockMisalign = (uint8_t)((tmp & 0x20) >> 5);
  pCSD->DSRImpl         = (uint8_t)((tmp & 0x10) >> 4);
  pCSD->Reserved2       = 0; /*!< Reserved */
        
  if(hsd->SdCard.CardType == CARD_SDSC)
  {
    pCSD->DeviceSize = (tmp & 0x03) << 10;
    
    /* Byte 7 */
    tmp = (uint8_t)(hsd->CSD[1] & 0x000000FFU);
    pCSD->DeviceSize |= (tmp) << 2;
    
    /* Byte 8 */
    tmp = (uint8_t)((hsd->CSD[2] & 0xFF000000U) >> 24);
    pCSD->DeviceSize |= (tmp & 0xC0) >> 6;
    
    pCSD->MaxRdCurrentVDDMin = (tmp & 0x38) >> 3;
    pCSD->MaxRdCurrentVDDMax = (tmp & 0x07);
    
    /* Byte 9 */
    tmp = (uint8_t)((hsd->CSD[2] & 0x00FF0000U) >> 16);
    pCSD->MaxWrCurrentVDDMin = (tmp & 0xE0) >> 5;
    pCSD->MaxWrCurrentVDDMax = (tmp & 0x1C) >> 2;
    pCSD->DeviceSizeMul      = (tmp & 0x03) << 1;
    /* Byte 10 */
    tmp = (uint8_t)((hsd->CSD[2] & 0x0000FF00U) >> 8);
    pCSD->DeviceSizeMul |= (tmp & 0x80) >> 7;
    
    hsd->SdCard.BlockNbr  = (pCSD->DeviceSize + 1) ;
    hsd->SdCard.BlockNbr *= (1 << (pCSD->DeviceSizeMul + 2));
    hsd->SdCard.BlockSize = 1 << (pCSD->RdBlockLen);

    hsd->SdCard.LogBlockNbr =  (hsd->SdCard.BlockNbr) * ((hsd->SdCard.BlockSize) / 512); 
    hsd->SdCard.LogBlockSize = 512;
  }
  else if(hsd->SdCard.CardType == CARD_SDHC_SDXC)
  {
    /* Byte 7 */
    tmp = (uint8_t)(hsd->CSD[1] & 0x000000FFU);
    pCSD->DeviceSize = (tmp & 0x3F) << 16;
    
    /* Byte 8 */
    tmp = (uint8_t)((hsd->CSD[2] & 0xFF000000U) >> 24);
    
    pCSD->DeviceSize |= (tmp << 8);
    
    /* Byte 9 */
    tmp = (uint8_t)((hsd->CSD[2] & 0x00FF0000U) >> 16);
    
    pCSD->DeviceSize |= (tmp);
    
    /* Byte 10 */
    tmp = (uint8_t)((hsd->CSD[2] & 0x0000FF00U) >> 8);
    
    hsd->SdCard.LogBlockNbr = hsd->SdCard.BlockNbr = (((uint64_t)pCSD->DeviceSize + 1) * 1024);
    hsd->SdCard.LogBlockSize = hsd->SdCard.BlockSize = 512;
  }
  else
  {
    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);   
    hsd->ErrorCode |= HAL_SD_ERROR_UNSUPPORTED_FEATURE;
    hsd->State = HAL_SD_STATE_READY;
    return HAL_ERROR;
  }
  
  pCSD->EraseGrSize = (tmp & 0x40) >> 6;
  pCSD->EraseGrMul  = (tmp & 0x3F) << 1;
  
  /* Byte 11 */
  tmp = (uint8_t)(hsd->CSD[2] & 0x000000FF);
  pCSD->EraseGrMul     |= (tmp & 0x80) >> 7;
  pCSD->WrProtectGrSize = (tmp & 0x7F);
  
  /* Byte 12 */
  tmp = (uint8_t)((hsd->CSD[3] & 0xFF000000U) >> 24);
  pCSD->WrProtectGrEnable = (tmp & 0x80) >> 7;
  pCSD->ManDeflECC        = (tmp & 0x60) >> 5;
  pCSD->WrSpeedFact       = (tmp & 0x1C) >> 2;
  pCSD->MaxWrBlockLen     = (tmp & 0x03) << 2;
  
  /* Byte 13 */
  tmp = (uint8_t)((hsd->CSD[3] & 0x00FF0000) >> 16);
  pCSD->MaxWrBlockLen      |= (tmp & 0xC0) >> 6;
  pCSD->WriteBlockPaPartial = (tmp & 0x20) >> 5;
  pCSD->Reserved3           = 0;
  pCSD->ContentProtectAppli = (tmp & 0x01);
  
  /* Byte 14 */
  tmp = (uint8_t)((hsd->CSD[3] & 0x0000FF00) >> 8);
  pCSD->FileFormatGrouop = (tmp & 0x80) >> 7;
  pCSD->CopyFlag         = (tmp & 0x40) >> 6;
  pCSD->PermWrProtect    = (tmp & 0x20) >> 5;
  pCSD->TempWrProtect    = (tmp & 0x10) >> 4;
  pCSD->FileFormat       = (tmp & 0x0C) >> 2;
  pCSD->ECC              = (tmp & 0x03);
  
  /* Byte 15 */
  tmp = (uint8_t)(hsd->CSD[3] & 0x000000FF);
  pCSD->CSD_CRC   = (tmp & 0xFE) >> 1;
  pCSD->Reserved4 = 1;
 
  return HAL_OK;
}


/**
  * @brief  Gets the SD status info.
  * @param  hsd: Pointer to SD handle      
  * @param  pStatus: Pointer to the HAL_SD_CardStatusTypedef structure that 
  *         will contain the SD card status information 
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_GetCardStatus(SD_HandleTypeDef *hsd, HAL_SD_CardStatusTypedef *pStatus)
{
  uint32_t tmp = 0;
  uint32_t sd_status[16];
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  errorstate = SD_SendSDStatus(hsd, sd_status);
  if(errorstate != HAL_OK)
  {
    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);   
    hsd->ErrorCode |= errorstate;
    hsd->State = HAL_SD_STATE_READY;
    return HAL_ERROR;
  }
  else
  {
    /* Byte 0 */
    tmp = (sd_status[0] & 0xC0) >> 6;
    pStatus->DataBusWidth = (uint8_t)tmp;
    
    /* Byte 0 */
    tmp = (sd_status[0] & 0x20) >> 5;
    pStatus->SecuredMode = (uint8_t)tmp;
    
    /* Byte 2 */
    tmp = (sd_status[0] & 0x00FF0000U) >> 16;
    pStatus->CardType = (uint16_t)(tmp << 8);
    
    /* Byte 3 */
    tmp = (sd_status[0] & 0xFF000000U) >> 24;
    pStatus->CardType |= (uint16_t)tmp;
    
    /* Byte 4 */
    tmp = (sd_status[1] & 0xFF);
    pStatus->ProtectedAreaSize = (uint32_t)(tmp << 24);
    
    /* Byte 5 */
    tmp = (sd_status[1] & 0xFF00) >> 8;
    pStatus->ProtectedAreaSize |= (uint32_t)(tmp << 16);
    
    /* Byte 6 */
    tmp = (sd_status[1] & 0xFF0000) >> 16;
    pStatus->ProtectedAreaSize |= (uint32_t)(tmp << 8);
    
    /* Byte 7 */
    tmp = (sd_status[1] & 0xFF000000U) >> 24;
    pStatus->ProtectedAreaSize |= (uint32_t)tmp;
    
    /* Byte 8 */
    tmp = (sd_status[2] & 0xFF);
    pStatus->SpeedClass = (uint8_t)tmp;
    
    /* Byte 9 */
    tmp = (sd_status[2] & 0xFF00) >> 8;
    pStatus->PerformanceMove = (uint8_t)tmp;
    
    /* Byte 10 */
    tmp = (sd_status[2] & 0xF00000) >> 20;
    pStatus->AllocationUnitSize = (uint8_t)tmp;
    
    /* Byte 11 */
    tmp = (sd_status[2] & 0xFF000000U) >> 24;
    pStatus->EraseSize = (uint16_t)(tmp << 8);
    
    /* Byte 12 */
    tmp = (sd_status[3] & 0xFF);
    pStatus->EraseSize |= (uint16_t)tmp;
    
    /* Byte 13 */
    tmp = (sd_status[3] & 0xFC00) >> 10;
    pStatus->EraseTimeout = (uint8_t)tmp;
    
    /* Byte 13 */
    tmp = (sd_status[3] & 0x0300) >> 8;
    pStatus->EraseOffset = (uint8_t)tmp;
  }
  
  return HAL_OK;
}


/**
  * @brief  Gets the SD card info.
  * @param  hsd: Pointer to SD handle      
  * @param  pCardInfo: Pointer to the HAL_SD_CardInfoTypeDef structure that 
  *         will contain the SD card status information 
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_GetCardInfo(SD_HandleTypeDef *hsd, HAL_SD_CardInfoTypeDef *pCardInfo)
{
  pCardInfo->CardType     = (uint32_t)(hsd->SdCard.CardType);
  pCardInfo->CardVersion  = (uint32_t)(hsd->SdCard.CardVersion);
  pCardInfo->Class        = (uint32_t)(hsd->SdCard.Class);
  pCardInfo->RelCardAdd   = (uint32_t)(hsd->SdCard.RelCardAdd);
  pCardInfo->BlockNbr     = (uint32_t)(hsd->SdCard.BlockNbr);
  pCardInfo->BlockSize    = (uint32_t)(hsd->SdCard.BlockSize);
  pCardInfo->LogBlockNbr  = (uint32_t)(hsd->SdCard.LogBlockNbr);
  pCardInfo->LogBlockSize = (uint32_t)(hsd->SdCard.LogBlockSize);
  
  return HAL_OK;
}

/**
  * @brief  Enables wide bus operation for the requested card if supported by 
  *         card.
  * @param  hsd: Pointer to SD handle       
  * @param  WideMode: Specifies the SD card wide bus mode 
  *          This parameter can be one of the following values:
  *            @arg SDMMC_BUS_WIDE_8B: 8-bit data transfer
  *            @arg SDMMC_BUS_WIDE_4B: 4-bit data transfer
  *            @arg SDMMC_BUS_WIDE_1B: 1-bit data transfer
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_ConfigWideBusOperation(SD_HandleTypeDef *hsd, uint32_t WideMode)
{
  SDMMC_InitTypeDef Init;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
    
  /* Check the parameters */
  assert_param(IS_SDMMC_BUS_WIDE(WideMode));
  
  /* Change State */
  hsd->State = HAL_SD_STATE_BUSY;
  
  if(hsd->SdCard.CardType != CARD_SECURED) 
  {
    if (WideMode == SDMMC_BUS_WIDE_8B)
    {
      hsd->ErrorCode |= HAL_SD_ERROR_UNSUPPORTED_FEATURE;
    }
    else if(WideMode == SDMMC_BUS_WIDE_4B)
    {
      errorstate = SD_WideBus_Enable(hsd);
      hsd->ErrorCode |= errorstate;
    }
    else if (WideMode == SDMMC_BUS_WIDE_1B)
    {
      errorstate = SD_WideBus_Disable(hsd);
      hsd->ErrorCode |= errorstate;
    }
    else
    {
      /* WideMode is not a valid argument*/
      hsd->ErrorCode |= HAL_SD_ERROR_PARAM;
    }
  }  
  else
  {
    /* MMC Card does not support this feature */
    hsd->ErrorCode |= HAL_SD_ERROR_UNSUPPORTED_FEATURE;
  }

  if(hsd->ErrorCode != HAL_SD_ERROR_NONE)
  {
    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
    hsd->State = HAL_SD_STATE_READY;
    return HAL_ERROR;
  }
  else
  {
    /* Configure the SDMMC peripheral */
    Init.ClockEdge           = hsd->Init.ClockEdge;
    Init.ClockPowerSave      = hsd->Init.ClockPowerSave;
    Init.BusWide             = WideMode;
    Init.HardwareFlowControl = hsd->Init.HardwareFlowControl;
    
    /* Check if user Clock div < Normal speed 25Mhz, no change in Clockdiv */
    if(hsd->Init.ClockDiv >= SDMMC_NSpeed_CLK_DIV)
    {
      Init.ClockDiv = hsd->Init.ClockDiv;
    }
    else
    {
      if(hsd->SdCard.CardSpeed == CARD_ULTRA_HIGH_SPEED)
      {
        Init.ClockDiv = hsd->Init.ClockDiv;
      }
      else
      {
        /* No High speed SD card */
        Init.ClockDiv = SDMMC_NSpeed_CLK_DIV;
      }
    }

    SDMMC_Init(hsd->Instance, Init);
  }

  /* Change State */
  hsd->State = HAL_SD_STATE_READY;

  return HAL_OK;
}

/**
  * @brief  Gets the current sd card data state.
  * @param  hsd: pointer to SD handle
  * @retval Card state
  */
HAL_SD_CardStateTypedef HAL_SD_GetCardState(SD_HandleTypeDef *hsd)
{
  HAL_SD_CardStateTypedef cardstate =  HAL_SD_CARD_TRANSFER;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint32_t resp1 = 0;
  
  errorstate = SD_SendStatus(hsd, &resp1);
  
  if (errorstate != HAL_OK)
  {
    hsd->ErrorCode |= errorstate;
  }

  cardstate = (HAL_SD_CardStateTypedef)((resp1 >> 9) & 0x0F);

  /* Clear all the static flags */
  __SDMMC_CLEAR_FLAG(hsd->Instance, SDMMC_STATIC_FLAGS);  
  return cardstate;
}

/**
  * @brief  Abort the current transfer and disable the SD.
  * @param  hsd: pointer to a SD_HandleTypeDef structure that contains
  *                the configuration information for SD module.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_Abort(SD_HandleTypeDef *hsd)
{
  HAL_SD_CardStateTypedef CardState;
  
  /* DIsable All interrupts */
  __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_DATAEND | SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT|\
                           SDMMC_IT_TXUNDERR| SDMMC_IT_RXOVERR);
  
  /* Clear All flags */
  __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
  
  /* If IDMA Context, disable Internal DMA */
  hsd->Instance->IDMACTRL = SDMMC_DISABLE_IDMA;
  
  hsd->State = HAL_SD_STATE_READY;
  CardState = HAL_SD_GetCardState(hsd);
  if((CardState == HAL_SD_CARD_RECEIVING) || (CardState == HAL_SD_CARD_SENDING))
  {
    hsd->ErrorCode = SDMMC_CmdStopTransfer(hsd->Instance);
  }
  if(hsd->ErrorCode != HAL_SD_ERROR_NONE)
  {
    return HAL_ERROR;
  }
  return HAL_OK;
}


/**
  * @brief  Abort the current transfer and disable the SD (IT mode).
  * @param  hsd: pointer to a SD_HandleTypeDef structure that contains
  *                the configuration information for SD module.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SD_Abort_IT(SD_HandleTypeDef *hsd)
{
  HAL_SD_CardStateTypedef CardState;
    
  /* DIsable All interrupts */
  __HAL_SD_DISABLE_IT(hsd, SDMMC_IT_DATAEND | SDMMC_IT_DCRCFAIL | SDMMC_IT_DTIMEOUT|\
                           SDMMC_IT_TXUNDERR| SDMMC_IT_RXOVERR);
  
  /* Clear All flags */
  __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);

  CardState = HAL_SD_GetCardState(hsd);
  hsd->State = HAL_SD_STATE_READY;
  if((CardState == HAL_SD_CARD_RECEIVING) || (CardState == HAL_SD_CARD_SENDING))
  {
    hsd->ErrorCode = SDMMC_CmdStopTransfer(hsd->Instance);
  }
  if(hsd->ErrorCode != HAL_SD_ERROR_NONE)
  {
    return HAL_ERROR;
  }
  else
  {
    HAL_SD_AbortCallback(hsd);
  }
  
  return HAL_OK;
}


/**
  * @}
  */
  
/**
  * @}
  */
  
/* Private function ----------------------------------------------------------*/
/** @addtogroup SD_Private_Functions
  * @{
  */


/**
  * @brief  Initializes the sd card.
  * @param  hsd: Pointer to SD handle
  * @retval SD Card error state
  */
static uint32_t SD_InitCard(SD_HandleTypeDef *hsd)
{
  HAL_SD_CardCSDTypedef CSD;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint16_t sd_rca = 1;
  
  /* Check the power State */
  if(SDMMC_GetPowerState(hsd->Instance) == 0) 
  {
    /* Power off */
    return HAL_SD_ERROR_REQUEST_NOT_APPLICABLE;
  }
  
  if(hsd->SdCard.CardType != CARD_SECURED) 
  {

      /* Send CMD2 ALL_SEND_CID */
      errorstate = SDMMC_CmdSendCID(hsd->Instance);
      if(errorstate != HAL_SD_ERROR_NONE)
      {
        return errorstate;
      }

    
      /* Get Card identification number data */
      hsd->CID[0] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1);
      hsd->CID[1] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP2);
      hsd->CID[2] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP3);
      hsd->CID[3] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP4);
  
  }

  if(hsd->SdCard.CardType != CARD_SECURED) 
  {
  /* Send CMD3 SET_REL_ADDR with argument 0 */
  /* SD Card publishes its RCA. */
  errorstate = SDMMC_CmdSetRelAdd(hsd->Instance, &sd_rca);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    return errorstate;
  }
  }
  if(hsd->SdCard.CardType != CARD_SECURED) 
  {
  /* Get the SD card RCA */
  hsd->SdCard.RelCardAdd = sd_rca;
  
  /* Send CMD9 SEND_CSD with argument as card's RCA */
    errorstate = SDMMC_CmdSendCSD(hsd->Instance, (uint32_t)(hsd->SdCard.RelCardAdd << 16U));
  if(errorstate != HAL_SD_ERROR_NONE)     
  {
      return errorstate;
  }
    else
    {
  /* Get Card Specific Data */
      hsd->CSD[0U] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1);
      hsd->CSD[1U] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP2);
      hsd->CSD[2U] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP3);
      hsd->CSD[3U] = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP4);
    }
  }
  
  /* Get the Card Class */
  hsd->SdCard.Class = (SDMMC_GetResponse(hsd->Instance, SDMMC_RESP2) >> 20);
  
  /* Get CSD parameters */
  HAL_SD_GetCardCSD(hsd, &CSD);

   /* Select the Card */
  errorstate = SDMMC_CmdSelDesel(hsd->Instance, (uint32_t)(((uint32_t)hsd->SdCard.RelCardAdd) << 16));
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    return errorstate;
  }
  
  /* All cards are initialized */
  return HAL_SD_ERROR_NONE;
}

/**
  * @brief  Enquires cards about their operating voltage and configures clock
  *         controls and stores SD information that will be needed in future
  *         in the SD handle.
  * @param  hsd: Pointer to SD handle
  * @retval error state
  */
static uint32_t SD_PowerON(SD_HandleTypeDef *hsd)
{
  __IO uint32_t count = 0;
  uint32_t response = 0, validvoltage = 0;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
#if (USE_SD_TRANSCEIVER != 0U)
  uint32_t tickstart = HAL_GetTick();
#endif
  
  /* CMD0: GO_IDLE_STATE */
  errorstate = SDMMC_CmdGoIdleState(hsd->Instance);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    return errorstate;
  }
  
  /* CMD8: SEND_IF_COND: Command available only on V2.0 cards */
  errorstate = SDMMC_CmdOperCond(hsd->Instance);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    hsd->SdCard.CardVersion = CARD_V1_X;
  }
  else
  {
    hsd->SdCard.CardVersion = CARD_V2_X;
  }

  /* SEND CMD55 APP_CMD with RCA as 0 */
  errorstate = SDMMC_CmdAppCommand(hsd->Instance, 0);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    return HAL_SD_ERROR_UNSUPPORTED_FEATURE;
  }
  else
  {
    /* SD CARD */
    /* Send ACMD41 SD_APP_OP_COND with Argument 0x80100000 */
    while((!validvoltage) && (count < SDMMC_MAX_VOLT_TRIAL))
    {
      /* SEND CMD55 APP_CMD with RCA as 0 */
      errorstate = SDMMC_CmdAppCommand(hsd->Instance, 0);
      if(errorstate != HAL_SD_ERROR_NONE)
      {
        return errorstate;
      }
      
      /* Send CMD41 */
      errorstate = SDMMC_CmdAppOperCommand(hsd->Instance, SDMMC_VOLTAGE_WINDOW_SD | SDMMC_HIGH_CAPACITY | SD_SWITCH_1_8V_CAPACITY);
      if(errorstate != HAL_SD_ERROR_NONE)
      {
        return HAL_SD_ERROR_UNSUPPORTED_FEATURE;
      }

      /* Get command response */
      response = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1);

      /* Get operating voltage*/
      validvoltage = (((response >> 31) == 1) ? 1 : 0);

      count++;
    }

    if(count >= SDMMC_MAX_VOLT_TRIAL)
    {
      return HAL_SD_ERROR_INVALID_VOLTRANGE;
    }
    
    if((response & SDMMC_HIGH_CAPACITY) == SDMMC_HIGH_CAPACITY) /* (response &= SD_HIGH_CAPACITY) */
    {
      hsd->SdCard.CardType = CARD_SDHC_SDXC;
#if (USE_SD_TRANSCEIVER != 0U)
      if((response & SD_SWITCH_1_8V_CAPACITY) == SD_SWITCH_1_8V_CAPACITY)
      {
           hsd->SdCard.CardSpeed = CARD_ULTRA_HIGH_SPEED;
        
        /* Start switching procedue */
        hsd->Instance->POWER |= SDMMC_POWER_VSWITCHEN;

        /* Send CMD11 to switch 1.8V mode */
        errorstate = SDMMC_CmdVoltageSwitch(hsd->Instance);
        if(errorstate != HAL_SD_ERROR_NONE)
        {
          MODIFY_REG(hsd->Instance->POWER, SDMMC_POWER_VSWITCHEN, 0);
          return HAL_SD_ERROR_NONE;
        }

        /* Check to BusyD0 and CKSTOP */
        while(( hsd->Instance->STA & SDMMC_FLAG_CKSTOP) != SDMMC_FLAG_CKSTOP)
        {
          if((HAL_GetTick() - tickstart) >=  SDMMC_DATATIMEOUT)
          {
            return HAL_SD_ERROR_TIMEOUT;
          }
        }

        if(( hsd->Instance->STA & SDMMC_FLAG_BUSYD0) != SDMMC_FLAG_BUSYD0)
        {
          /* Error when activate Voltage Switch in SDMMC IP */
          return SDMMC_ERROR_UNSUPPORTED_FEATURE;
        }
        else
        {
          /* Enable Trasciver Switch PIN */
          HAL_SD_DriveTransciver_1_8V_Callback(SET);
          
          /* Switch ready */
          hsd->Instance->POWER |= SDMMC_POWER_VSWITCH;

          /* Check VSWEND Flag */
          while(( hsd->Instance->STA & SDMMC_FLAG_VSWEND) != SDMMC_FLAG_VSWEND)
          {
            if((HAL_GetTick() - tickstart) >=  SDMMC_DATATIMEOUT)
            {
              return HAL_SD_ERROR_TIMEOUT;
            }
          }
          /* Check BusyD0 status */
          if(( hsd->Instance->STA & SDMMC_FLAG_BUSYD0) == SDMMC_FLAG_BUSYD0)
          {
            /* Error when enabling 1.8V mode */
            return HAL_SD_ERROR_INVALID_VOLTRANGE;
          }
          /* Switch to 1.8V OK */
          
          /* Disable VSWITCH FLAG from SDMMC IP */
          hsd->Instance->POWER = 0x13; 
          /* Clean Status flags */
          hsd->Instance->ICR = 0xFFFFFFFF;
        }
        
        hsd->SdCard.CardSpeed = CARD_ULTRA_HIGH_SPEED;
        
      }
#endif /* USE_SD_TRANSCEIVER  */
    }
  
  }

  return HAL_SD_ERROR_NONE;
}

/**
  * @brief  Turns the SDMMC output signals off.
  * @param  hsd: Pointer to SD handle
  * @retval HAL status
  */
static HAL_StatusTypeDef SD_PowerOFF(SD_HandleTypeDef *hsd)
{
  /* Set Power State to OFF */
  SDMMC_PowerState_OFF(hsd->Instance);
  
  return HAL_OK;
}


/**
  * @brief  Send Status info command.
  * @param  hsd: pointer to SD handle
  * @param  pSDstatus: Pointer to the buffer that will contain the SD card status 
  *         SD Status register)
  * @retval error state
  */
static uint32_t SD_SendSDStatus(SD_HandleTypeDef *hsd, uint32_t *pSDstatus)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint32_t tickstart = HAL_GetTick();
  uint32_t count = 0;
  
  /* Check SD response */
  if((SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1) & SDMMC_CARD_LOCKED) == SDMMC_CARD_LOCKED)
  {
    return HAL_SD_ERROR_LOCK_UNLOCK_FAILED;
  }
  
  /* Set block size for card if it is not equal to current block size for card */
  errorstate = SDMMC_CmdBlockLength(hsd->Instance, 64);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_NONE;
    return errorstate;
  }
  
  /* Send CMD55 */
  errorstate = SDMMC_CmdAppCommand(hsd->Instance, (uint32_t)(hsd->SdCard.RelCardAdd << 16));
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_NONE;
    return errorstate;
  }
  
  /* Configure the SD DPSM (Data Path State Machine) */ 
  config.DataTimeOut   = SDMMC_DATATIMEOUT;
  config.DataLength    = 64;
  config.DataBlockSize = SDMMC_DATABLOCK_SIZE_64B;
  config.TransferDir   = SDMMC_TRANSFER_DIR_TO_SDMMC;
  config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
  config.DPSM          = SDMMC_DPSM_ENABLE;
  SDMMC_ConfigData(hsd->Instance, &config);
  
  /* Send ACMD13 (SD_APP_STAUS)  with argument as card's RCA */
  errorstate = SDMMC_CmdStatusRegister(hsd->Instance);
  if(errorstate != HAL_SD_ERROR_NONE)
  {
    hsd->ErrorCode |= HAL_SD_ERROR_NONE;
    return errorstate;
  }
  
  /* Get status data */
  while(!__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR | SDMMC_FLAG_DCRCFAIL | SDMMC_FLAG_DTIMEOUT | SDMMC_FLAG_DBCKEND))
  {
    if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXFIFOHF))
    {
      for(count = 0; count < 8; count++)
      {
        *(pSDstatus + count) = SDMMC_ReadFIFO(hsd->Instance);
      }
      
      pSDstatus += 8;
    }
    
    if((HAL_GetTick() - tickstart) >=  SDMMC_DATATIMEOUT)
    {
      return HAL_SD_ERROR_TIMEOUT;
    }
  }
  
  if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DTIMEOUT))
  {
    return HAL_SD_ERROR_DATA_TIMEOUT;
  }
  else if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DCRCFAIL))
  {
    return HAL_SD_ERROR_DATA_CRC_FAIL;
  }
  else if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR))
  {
    return HAL_SD_ERROR_RX_OVERRUN;
  }

  while ((__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXFIFOE)))
  {
    *pSDstatus = SDMMC_ReadFIFO(hsd->Instance);
    pSDstatus++;
    
    if((HAL_GetTick() - tickstart) >=  SDMMC_DATATIMEOUT)
    {
      return HAL_SD_ERROR_TIMEOUT;
    }
  }
  
  /* Clear all the static status flags*/
  __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
  
  return HAL_SD_ERROR_NONE;
}

/**
  * @brief  Returns the current card's status.
  * @param  hsd: Pointer to SD handle
  * @param  pCardStatus: pointer to the buffer that will contain the SD card 
  *         status (Card Status register)  
  * @retval error state
  */
static uint32_t SD_SendStatus(SD_HandleTypeDef *hsd, uint32_t *pCardStatus)
{
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if(pCardStatus == NULL)
  {
    return HAL_SD_ERROR_PARAM;
  }
  
  /* Send Status command */
  errorstate = SDMMC_CmdSendStatus(hsd->Instance, (uint32_t)(hsd->SdCard.RelCardAdd << 16));
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }
  
  /* Get SD card status */
  *pCardStatus = SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1);
  
  return HAL_SD_ERROR_NONE;
}

/**
  * @brief  Enables the SDMMC wide bus mode.
  * @param  hsd: pointer to SD handle
  * @retval error state
  */
static uint32_t SD_WideBus_Enable(SD_HandleTypeDef *hsd)
{
  uint32_t scr[2] = {0, 0};
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if((SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1) & SDMMC_CARD_LOCKED) == SDMMC_CARD_LOCKED)
  {
    return HAL_SD_ERROR_LOCK_UNLOCK_FAILED;
  }
  
  /* Get SCR Register */
  errorstate = SD_FindSCR(hsd, scr);
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }
  
  /* If requested card supports wide bus operation */
  if((scr[1] & SDMMC_WIDE_BUS_SUPPORT) != SDMMC_ALLZERO)
  {
  /* Send CMD55 APP_CMD with argument as card's RCA.*/
  errorstate = SDMMC_CmdAppCommand(hsd->Instance, (uint32_t)(hsd->SdCard.RelCardAdd << 16));
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }
  
  /* Send ACMD6 APP_CMD with argument as 2 for wide bus mode */
  errorstate = SDMMC_CmdBusWidth(hsd->Instance, 2);
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }

  return HAL_SD_ERROR_NONE;
}
  else
  {
    return HAL_SD_ERROR_REQUEST_NOT_APPLICABLE;
  }
}

/**
  * @brief  Disables the SDMMC wide bus mode.
  * @param  hsd: Pointer to SD handle
  * @retval error state
  */
static uint32_t SD_WideBus_Disable(SD_HandleTypeDef *hsd)
{
  uint32_t scr[2] = {0, 0};
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  
  if((SDMMC_GetResponse(hsd->Instance, SDMMC_RESP1) & SDMMC_CARD_LOCKED) == SDMMC_CARD_LOCKED)
  {
    return HAL_SD_ERROR_LOCK_UNLOCK_FAILED;
  }
  
  /* Get SCR Register */
  errorstate = SD_FindSCR(hsd, scr);
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }
  
  /* If requested card supports 1 bit mode operation */
  if((scr[1] & SDMMC_SINGLE_BUS_SUPPORT) != SDMMC_ALLZERO)
  {
    /* Send CMD55 APP_CMD with argument as card's RCA */
    errorstate = SDMMC_CmdAppCommand(hsd->Instance, (uint32_t)(hsd->SdCard.RelCardAdd << 16));
    if(errorstate != HAL_OK)
    {
      return errorstate;
    }
  
    /* Send ACMD6 APP_CMD with argument as 0 for single bus mode */
    errorstate = SDMMC_CmdBusWidth(hsd->Instance, 0);
    if(errorstate != HAL_OK)
    {
      return errorstate;
    }
  }
  
  return HAL_SD_ERROR_NONE;
}
  
  
  
/**
  * @brief  Finds the SD card SCR register value.
  * @param  hsd: Pointer to SD handle
  * @param  pSCR: pointer to the buffer that will contain the SCR value  
  * @retval error state
  */
static uint32_t SD_FindSCR(SD_HandleTypeDef *hsd, uint32_t *pSCR)
{
  SDMMC_DataInitTypeDef config;
  uint32_t errorstate = HAL_SD_ERROR_NONE;
  uint32_t tickstart = HAL_GetTick();
  uint32_t tempscr[2] = {0, 0};
  
  /* Set Block Size To 8 Bytes */
  errorstate = SDMMC_CmdBlockLength(hsd->Instance, (uint32_t)8);
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }

  /* Send CMD55 APP_CMD with argument as card's RCA */
  errorstate = SDMMC_CmdAppCommand(hsd->Instance, (uint32_t)((hsd->SdCard.RelCardAdd) << 16));
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }

  config.DataTimeOut   = SDMMC_DATATIMEOUT;
  config.DataLength    = 8;
  config.DataBlockSize = SDMMC_DATABLOCK_SIZE_8B;
  config.TransferDir   = SDMMC_TRANSFER_DIR_TO_SDMMC;
  config.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
  config.DPSM          = SDMMC_DPSM_ENABLE;
  SDMMC_ConfigData(hsd->Instance, &config);
  
  /* Send ACMD51 SD_APP_SEND_SCR with argument as 0 */
  errorstate = SDMMC_CmdSendSCR(hsd->Instance);
  if(errorstate != HAL_OK)
  {
    return errorstate;
  }
    
  while(!__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR | SDMMC_FLAG_DCRCFAIL | SDMMC_FLAG_DTIMEOUT | SDMMC_FLAG_DBCKEND | SDMMC_FLAG_DATAEND))
  {
    if(!__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXFIFOE))
    {
      tempscr[0] = SDMMC_ReadFIFO(hsd->Instance);
      tempscr[1] = SDMMC_ReadFIFO(hsd->Instance);
      break;
    }
    
    if((HAL_GetTick() - tickstart) >=  SDMMC_DATATIMEOUT)
    {
      return HAL_SD_ERROR_TIMEOUT;
    }
  }
  
  if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DTIMEOUT))
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DTIMEOUT);
    
    return HAL_SD_ERROR_DATA_TIMEOUT;
  }
  else if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DCRCFAIL))
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DCRCFAIL);
    
    return HAL_SD_ERROR_DATA_CRC_FAIL;
  }
  else if(__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR))
  {
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_RXOVERR);
    
    return HAL_SD_ERROR_RX_OVERRUN;
  }
  else
  {
    /* No error flag set */
    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
    
    *(pSCR + 1) = ((tempscr[0] & SDMMC_0TO7BITS) << 24)  | ((tempscr[0] & SDMMC_8TO15BITS) << 8) |\
      ((tempscr[0] & SDMMC_16TO23BITS) >> 8) | ((tempscr[0] & SDMMC_24TO31BITS) >> 24);
    
    *(pSCR) = ((tempscr[1] & SDMMC_0TO7BITS) << 24)  | ((tempscr[1] & SDMMC_8TO15BITS) << 8) |\
      ((tempscr[1] & SDMMC_16TO23BITS) >> 8) | ((tempscr[1] & SDMMC_24TO31BITS) >> 24);
  }

  return HAL_SD_ERROR_NONE;
}

/**
  * @brief  Wrap up writing in non-blocking mode.
  * @param  hsd: pointer to a SD_HandleTypeDef structure that contains
  *              the configuration information.
  * @retval HAL status
  */
static HAL_StatusTypeDef SD_Read_IT(SD_HandleTypeDef *hsd)
{
  uint32_t count = 0;
  uint32_t* tmp;

  tmp = (uint32_t*)hsd->pRxBuffPtr;
  
  /* Read data from SDMMC Rx FIFO */
  for(count = 0; count < 8; count++)
  {
    *(tmp + count) = SDMMC_ReadFIFO(hsd->Instance);
  }
  
  hsd->pRxBuffPtr += 8;
  
  return HAL_OK;
}


/**
  * @brief  Wrap up writing in non-blocking mode.
  * @param  hsd: pointer to a SD_HandleTypeDef structure that contains
  *              the configuration information.
  * @retval HAL status
  */
static HAL_StatusTypeDef SD_Write_IT(SD_HandleTypeDef *hsd)
{
  uint32_t count = 0;
  uint32_t* tmp;
  
  tmp = (uint32_t*)hsd->pTxBuffPtr;
  
  /* Write data to SDMMC Tx FIFO */
  for(count = 0; count < 8; count++)
  {
    SDMMC_WriteFIFO(hsd->Instance, (tmp + count));
  }
  
  hsd->pTxBuffPtr += 8;
  
  return HAL_OK;
}

#if (USE_SD_TRANSCEIVER != 0U) 
/**
  * @brief  Switches the SD card to High Speed mode.
  *         This API must be used after "Transfer State"
  * @note   This operation should be followed by the configuration 
  *         of PLL to have SDMMCCK clock between 50 and 120 MHz
  * @param  hsd: SD handle
  * @retval SD Card error state
  */
static uint32_t SD_HighSpeed(SD_HandleTypeDef *hsd)
{
  uint32_t errorstate = HAL_OK;
  SDMMC_DataInitTypeDef sdmmc_datainitstructure;
  uint8_t SD_hs[64]  = {0};
  uint32_t count = 0, *tempbuff = (uint32_t *)SD_hs;
  uint32_t Timeout = HAL_GetTick();
  
  if(hsd->SdCard.CardSpeed == CARD_NORMAL_SPEED)
  {
     /* Standard Speed Card <= 12.5Mhz  */
     return HAL_SD_ERROR_REQUEST_NOT_APPLICABLE; 
  }

  if(hsd->SdCard.CardSpeed == CARD_ULTRA_HIGH_SPEED)
  {
    /* Initialize the Data control register */
    hsd->Instance->DCTRL = 0;
    errorstate = SDMMC_CmdBlockLength(hsd->Instance, 64);
    
    if (errorstate != HAL_OK)
    {
      return errorstate;
    }
    
    /* Configure the SD DPSM (Data Path State Machine) */
    sdmmc_datainitstructure.DataTimeOut   = SDMMC_DATATIMEOUT;
    sdmmc_datainitstructure.DataLength    = 64;
    sdmmc_datainitstructure.DataBlockSize = SDMMC_DATABLOCK_SIZE_64B ;
    sdmmc_datainitstructure.TransferDir   = SDMMC_TRANSFER_DIR_TO_SDMMC;
    sdmmc_datainitstructure.TransferMode  = SDMMC_TRANSFER_MODE_BLOCK;
    sdmmc_datainitstructure.DPSM          = SDMMC_DPSM_ENABLE;
    SDMMC_ConfigData(hsd->Instance, &sdmmc_datainitstructure);
      
    errorstate = SDMMC_CmdSwitch(hsd->Instance, SDMMC_SDR104_SWITCH_PATTERN);
    if(errorstate != HAL_OK)
    {
      return errorstate;
    }
    
    while(!__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR | SDMMC_FLAG_DCRCFAIL | SDMMC_FLAG_DTIMEOUT | SDMMC_FLAG_DBCKEND| SDMMC_FLAG_DATAEND ))
    {
      if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXFIFOHF))
      {
        for (count = 0; count < 8; count++)
        {
          *(tempbuff + count) = SDMMC_ReadFIFO(hsd->Instance);
        }
        
        tempbuff += 8;
      }
      
      if((HAL_GetTick()-Timeout) >=  SDMMC_DATATIMEOUT)
      {
        hsd->ErrorCode = HAL_SD_ERROR_TIMEOUT;
        hsd->State= HAL_SD_STATE_READY;
        return HAL_TIMEOUT;
      }
    }

    if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DTIMEOUT))
    {
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DTIMEOUT);
      
      errorstate = 0;
      
      return errorstate;
    }
    else if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_DCRCFAIL))
    {
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_DCRCFAIL);
      
      errorstate = SDMMC_ERROR_DATA_CRC_FAIL;
      
      return errorstate;
    }
    else if (__HAL_SD_GET_FLAG(hsd, SDMMC_FLAG_RXOVERR))
    {
      __HAL_SD_CLEAR_FLAG(hsd, SDMMC_FLAG_RXOVERR);
      
      errorstate = SDMMC_ERROR_RX_OVERRUN;
      
      return errorstate;
    }
    else
    {
      /* No error flag set */
    }

    /* Clear all the static flags */
    __HAL_SD_CLEAR_FLAG(hsd, SDMMC_STATIC_FLAGS);
    
    /* Test if the switch mode HS is ok */
    if ((SD_hs[13]& 2) != 2)
    {
      errorstate = SDMMC_ERROR_UNSUPPORTED_FEATURE;
    }
    else
    {
      
      /* Enable DelayBlock IP */
      /* SDMMC_FB_CLK tuned feedback clock selected as receive clock, for SDR104 */
      MODIFY_REG(hsd->Instance->CLKCR, SDMMC_CLKCR_SELCLKRX, SDMMC_CLKCR_SELCLKRX /*SDMMC_CLKCR_SELCLKRX_1*/);
      DelayBlock_Enable(DLYB_SDMMC1);

    }
  }

  return errorstate;
}
#endif /* USE_SD_TRANSCEIVER */

/**
  * @brief Read DMA Buffer 0 Transfer completed callbacks
  * @param hsd: SD handle
  * @retval None
  */
__weak void HAL_SDEx_Read_DMADoubleBuffer0CpltCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SDEx_Read_DMADoubleBuffer0CpltCallback can be implemented in the user file
   */
}

/**
  * @brief Read DMA Buffer 1 Transfer completed callbacks
  * @param hsd: SD handle
  * @retval None
  */
__weak void HAL_SDEx_Read_DMADoubleBuffer1CpltCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SDEx_Read_DMADoubleBuffer1CpltCallback can be implemented in the user file
   */
}

/**
  * @brief Write DMA Buffer 0 Transfer completed callbacks
  * @param hsd: SD handle
  * @retval None
  */
__weak void HAL_SDEx_Write_DMADoubleBuffer0CpltCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SDEx_Write_DMADoubleBuffer0CpltCallback can be implemented in the user file
   */
}

/**
  * @brief Write DMA Buffer 1 Transfer completed callbacks
  * @param hsd: SD handle
  * @retval None
  */
__weak void HAL_SDEx_Write_DMADoubleBuffer1CpltCallback(SD_HandleTypeDef *hsd)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hsd);
 
  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_SDEx_Write_DMADoubleBuffer0CpltCallback can be implemented in the user file
   */
}


/**
  * @}
  */


/**
  * @}
  */
#endif /* HAL_SD_MODULE_ENABLED */
/**
  * @}
  */
  
/**
  * @}
  */ 

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
