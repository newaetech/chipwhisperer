/**
  ******************************************************************************
  * @file    stm32h7xx_hal_pcd_ex.c
  * @author  MCD Application Team
  * @version V1.2.0
  * @date   29-December-2017
  * @brief   PCD HAL module driver.
  *          This file provides firmware functions to manage the following 
  *          functionalities of the USB Peripheral Controller:
  *           + Extended features functions
  *
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

/** @defgroup PCDEx PCDEx
  * @brief PCD Extended HAL module driver
  * @{
  */
#ifdef HAL_PCD_MODULE_ENABLED

/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/** @defgroup PCDEx_Exported_Functions PCDEx Exported Functions
  * @{
  */

/** @defgroup PCDEx_Exported_Functions_Group1 Peripheral Control functions
  * @brief    PCDEx control functions 
 *
@verbatim   
 ===============================================================================
                 ##### Extended features functions #####
 ===============================================================================  
    [..]  This section provides functions allowing to:
      (+) Update FIFO configuration

@endverbatim
  * @{
  */

/**
  * @brief  Set Tx FIFO.
  * @param  hpcd: PCD handle
  * @param  fifo: The number of Tx fifo
  * @param  size: Fifo size
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PCDEx_SetTxFiFo(PCD_HandleTypeDef *hpcd, uint8_t fifo, uint16_t size)
{
  uint8_t i = 0;
  uint32_t Tx_Offset = 0;

  /*  TXn min size = 16 words. (n  : Transmit FIFO index)
      When a TxFIFO is not used, the Configuration should be as follows: 
          case 1 :  n > m    and Txn is not used    (n,m  : Transmit FIFO indexes)
         --> Txm can use the space allocated for Txn.
         case2  :  n < m    and Txn is not used    (n,m  : Transmit FIFO indexes)
         --> Txn should be configured with the minimum space of 16 words
     The FIFO is used optimally when used TxFIFOs are allocated in the top 
         of the FIFO.Ex: use EP1 and EP2 as IN instead of EP1 and EP3 as IN ones.
     When DMA is used 3n * FIFO locations should be reserved for internal DMA registers */
  
  Tx_Offset = hpcd->Instance->GRXFSIZ;
  
  if(fifo == 0)
  {
    hpcd->Instance->DIEPTXF0_HNPTXFSIZ = (uint32_t)(((uint32_t)size << 16) | Tx_Offset);
  }
  else
  {
    Tx_Offset += (hpcd->Instance->DIEPTXF0_HNPTXFSIZ) >> 16;
    for (i = 0; i < (fifo - 1); i++)
    {
      Tx_Offset += (hpcd->Instance->DIEPTXF[i] >> 16);
    }
    
    /* Multiply Tx_Size by 2 to get higher performance */
    hpcd->Instance->DIEPTXF[fifo - 1] = (uint32_t)(((uint32_t)size << 16) | Tx_Offset);
  }
  
  return HAL_OK;
}

/**
  * @brief  Set Rx FIFO.
  * @param  hpcd: PCD handle
  * @param  size: Size of Rx fifo
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PCDEx_SetRxFiFo(PCD_HandleTypeDef *hpcd, uint16_t size)
{
  hpcd->Instance->GRXFSIZ = size;
  
  return HAL_OK;
}

/**
  * @brief  Activate LPM Feature.
  * @param  hpcd: PCD handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PCDEx_ActivateLPM(PCD_HandleTypeDef *hpcd)
{
  USB_OTG_GlobalTypeDef *USBx = hpcd->Instance;  
  
  hpcd->lpm_active = ENABLE;
  hpcd->LPM_State = LPM_L0;
  USBx->GINTMSK |= USB_OTG_GINTMSK_LPMINTM;
  USBx->GLPMCFG |= (USB_OTG_GLPMCFG_LPMEN | USB_OTG_GLPMCFG_LPMACK | USB_OTG_GLPMCFG_ENBESL);
  
  return HAL_OK;  
}

/**
  * @brief  De-activate LPM feature.
  * @param  hpcd: PCD handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PCDEx_DeActivateLPM(PCD_HandleTypeDef *hpcd)
{
  USB_OTG_GlobalTypeDef *USBx = hpcd->Instance;  
  
  hpcd->lpm_active = DISABLE;
  USBx->GINTMSK &= ~USB_OTG_GINTMSK_LPMINTM;
  USBx->GLPMCFG &= ~(USB_OTG_GLPMCFG_LPMEN | USB_OTG_GLPMCFG_LPMACK | USB_OTG_GLPMCFG_ENBESL);
  
  return HAL_OK;  
}

#if defined (USB_OTG_GCCFG_BCDEN)
/**
  * @brief  Handle Battery Charging Process.
  * @param  hpcd: PCD handle
  * @retval HAL status
  */
void HAL_PCDEx_BCD_VBUSDetect(PCD_HandleTypeDef *hpcd)
{
  USB_OTG_GlobalTypeDef *USBx = hpcd->Instance;  
  uint32_t tickstart = HAL_GetTick();
  
  /* Start BCD When device is connected */
  if (USBx_DEVICE->DCTL & USB_OTG_DCTL_SDIS)
  { 
    /* Enable DCD : Data Contact Detect */
    USBx->GCCFG |= USB_OTG_GCCFG_DCDEN;
    
    /* Wait Detect flag or a timeout is happen*/
    while ((USBx->GCCFG & USB_OTG_GCCFG_DCDET) == 0)
    {
      /* Check for the Timeout */
      if((HAL_GetTick() - tickstart ) > 1000)
      {
        HAL_PCDEx_BCD_Callback(hpcd, PCD_BCD_ERROR);
        return;
      }
    }
    
    /* Right response got */
    HAL_Delay(100); 

    /* Check Detect flag*/
    if (USBx->GCCFG & USB_OTG_GCCFG_DCDET)
    {
      HAL_PCDEx_BCD_Callback(hpcd, PCD_BCD_CONTACT_DETECTION);
    }
    
    /*Primary detection: checks if connected to Standard Downstream Port  
    (without charging capability) */
    USBx->GCCFG &=~ USB_OTG_GCCFG_DCDEN;
    USBx->GCCFG |=  USB_OTG_GCCFG_PDEN;
    HAL_Delay(100); 
    
    if (!(USBx->GCCFG & USB_OTG_GCCFG_PDET))
    {
      /* Case of Standard Downstream Port */
      HAL_PCDEx_BCD_Callback(hpcd, PCD_BCD_STD_DOWNSTREAM_PORT);
    }
    else  
    {
      /* start secondary detection to check connection to Charging Downstream 
      Port or Dedicated Charging Port */
      USBx->GCCFG &=~ USB_OTG_GCCFG_PDEN;
      USBx->GCCFG |=  USB_OTG_GCCFG_SDEN;
      HAL_Delay(100); 
      
      if ((USBx->GCCFG) & USB_OTG_GCCFG_SDET)
      { 
        /* case Dedicated Charging Port  */
        HAL_PCDEx_BCD_Callback(hpcd, PCD_BCD_DEDICATED_CHARGING_PORT);
      }
      else
      {
        /* case Charging Downstream Port  */
        HAL_PCDEx_BCD_Callback(hpcd, PCD_BCD_CHARGING_DOWNSTREAM_PORT);
      }
    }
    /* Battery Charging capability discovery finished */
    HAL_PCDEx_BCD_Callback(hpcd, PCD_BCD_DISCOVERY_COMPLETED);
  }
}

/**
  * @brief  Activate BatteryCharging feature.
  * @param  hpcd: PCD handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PCDEx_ActivateBCD(PCD_HandleTypeDef *hpcd)
{
  USB_OTG_GlobalTypeDef *USBx = hpcd->Instance;  

  hpcd->battery_charging_active = ENABLE; 
  USBx->GCCFG |= (USB_OTG_GCCFG_BCDEN);
  
  /* Enable DCD : Data Contact Detect */
  USBx->GCCFG |= USB_OTG_GCCFG_DCDEN;
  
  return HAL_OK;  
}

/**
  * @brief  Deactivate BatteryCharging feature.
  * @param  hpcd: PCD handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_PCDEx_DeActivateBCD(PCD_HandleTypeDef *hpcd)
{
  USB_OTG_GlobalTypeDef *USBx = hpcd->Instance;  
  hpcd->battery_charging_active = DISABLE; 
  USBx->GCCFG &= ~(USB_OTG_GCCFG_BCDEN);
  return HAL_OK;  
}

/**
  * @brief  Send BatteryCharging message to user layer callback.
  * @param  hpcd: PCD handle
  * @param  msg: LPM message
  * @retval HAL status
  */
__weak void HAL_PCDEx_BCD_Callback(PCD_HandleTypeDef *hpcd, PCD_BCD_MsgTypeDef msg)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hpcd);
  UNUSED(msg);

  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_PCDEx_BCD_Callback could be implemented in the user file
   */ 
}
#endif /* USB_OTG_GCCFG_BCDEN */

/**
  * @brief  Send LPM message to user layer callback.
  * @param  hpcd: PCD handle
  * @param  msg: LPM message
  * @retval HAL status
  */
__weak void HAL_PCDEx_LPM_Callback(PCD_HandleTypeDef *hpcd, PCD_LPM_MsgTypeDef msg)
{ 
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hpcd);
  UNUSED(msg);

  /* NOTE : This function should not be modified, when the callback is needed,
            the HAL_PCDEx_LPM_Callback could be implemented in the user file
   */ 
}

/**
  * @}
  */

/**
  * @}
  */

#endif /* HAL_PCD_MODULE_ENABLED */
/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
