/**
  ******************************************************************************
  * @file    stm32h7xx_hal_sai_ex.c
  * @author  MCD Application Team
  * @version V1.2.0
  * @date   29-December-2017
  * @brief   SAI Extended HAL module driver.
  *          This file provides firmware functions to manage the following
  *          functionality of the SAI Peripheral Controller:
  *           + Modify PDM microphone delays.
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
#ifdef HAL_SAI_MODULE_ENABLED

/** @defgroup SAIEx SAIEx
  * @brief SAI Extended HAL module driver
  * @{
  */

/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/

#define SAI_PDM_DELAY_MASK          0x77U
#define SAI_PDM_DELAY_OFFSET        8U
#define SAI_PDM_RIGHT_DELAY_OFFSET  4U

/* Private macros ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/** @defgroup SAIEx_Exported_Functions SAIEx Extended Exported Functions
  * @{
  */

/** @defgroup SAIEx_Exported_Functions_Group1 Peripheral Control functions
  * @brief    SAIEx control functions
 *
@verbatim
 ===============================================================================
                 ##### Extended features functions #####
 ===============================================================================
    [..]  This section provides functions allowing to:
      (+) Modify PDM microphone delays

@endverbatim
  * @{
  */

/**
  * @brief  Configure PDM microphone delays.
  * @param  hsai SAI handle.
  * @param  pdmMicDelay Microphone delays configuration.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_SAIEx_ConfigPdmMicDelay(SAI_HandleTypeDef *hsai, SAIEx_PdmMicDelayParamTypeDef *pdmMicDelay)
{
  HAL_StatusTypeDef status = HAL_OK;
  SAI_TypeDef *SaiBaseAddress = NULL;

  /* Get the SAI base address according to the SAI handle */
  SaiBaseAddress = (hsai->Instance == SAI1_Block_A)  ? SAI1 : \
                   ((hsai->Instance == SAI2_Block_A) ? SAI2 : \
                   ((hsai->Instance == SAI3_Block_A) ? SAI3 : \
                   ((hsai->Instance == SAI4_Block_A) ? SAI4 : \
                     NULL)));
  if((SaiBaseAddress != NULL) && (hsai->State != HAL_SAI_STATE_RESET))
  {
    /* Check microphone delay parameters */
    assert_param(IS_SAI_PDM_MIC_PAIRS_NUMBER(pdmMicDelay->MicPair));
    assert_param(IS_SAI_PDM_MIC_DELAY(pdmMicDelay->LeftDelay));
    assert_param(IS_SAI_PDM_MIC_DELAY(pdmMicDelay->RightDelay));

    /* Reset current delays for specified microphone */
    SaiBaseAddress->PDMDLY &= ~(SAI_PDM_DELAY_MASK << (SAI_PDM_DELAY_OFFSET * (pdmMicDelay->MicPair - 1)));

    /* Apply new microphone delays */
    SaiBaseAddress->PDMDLY |= (((pdmMicDelay->RightDelay << SAI_PDM_RIGHT_DELAY_OFFSET) | pdmMicDelay->LeftDelay) << \
                                (SAI_PDM_DELAY_OFFSET * (pdmMicDelay->MicPair - 1)));
  }
  else
  {
    status = HAL_ERROR;
  }
  return status;
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

#endif /* HAL_SAI_MODULE_ENABLED */
/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
