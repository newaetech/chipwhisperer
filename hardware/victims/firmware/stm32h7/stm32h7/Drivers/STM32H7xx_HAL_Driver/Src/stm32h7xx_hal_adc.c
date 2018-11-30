/**
  ******************************************************************************
  * @file    stm32h7xx_hal_adc.c
  * @author  MCD Application conversion
  * @version V1.2.0
  * @date   29-December-2017
  * @brief   This file provides firmware functions to manage the following
  *          functionalities of the Analog to Digital Convertor (ADC)
  *          peripheral:
  *           + Initialization and deinitialization functions
  *             ++ Initialization and Configuration of ADC
  *           + Operation functions
  *             ++ Start, stop, get result of regular conversions of regular
  *                using 3 possible modes: polling, interruption or DMA.
  *           + Control functions
  *             ++ Channels configuration on regular group
  *             ++ Analog Watchdog configuration
  *           + State functions
  *             ++ ADC state machine management
  *             ++ Interrupts and flags management
  *          Other functions (extended functions) are available in file
  *          "stm32h7xx_hal_adc_ex.c".
   @verbatim
  ==============================================================================
                    ##### ADC specific features #####
  ==============================================================================
  [..]
  (+) 16-bit, 14-bit, 12-bit, 10-bit or 8-bit configurable resolution.

  (+) Interrupt generation at the end of regular conversion and in case of
      analog watchdog or overrun events.

  (+) Single and continuous conversion modes.

  (+) Scan mode for conversion of several channels sequentially.

  (+) Data alignment with in-built data coherency.

  (+) Programmable sampling time (channel wise)

  (+) External trigger (timer or EXTI) with configurable polarity

  (+) DMA request generation for transfer of conversions data of regular group.

  (+) Configurable delay between conversions in Dual interleaved mode.

  (+) ADC channels selectable single/differential input.

  (+) ADC offset on regular groups.

  (+) ADC calibration

  (+) ADC conversion of regular group.

  (+) ADC supply requirements: 1.62 V to 3.6 V.

  (+) ADC input range: from Vref- (connected to Vssa) to Vref+ (connected to
      Vdda or to an external voltage reference).

                     ##### How to use this driver #####
  ==============================================================================
    [..]

     *** Configuration of top level parameters related to ADC ***
     ============================================================
     [..]

    (#) Enable the ADC interface
        (++) As prerequisite, ADC clock must be configured at RCC top level.

        (++) Two clock settings are mandatory:
             (+++) ADC clock (core clock, also possibly conversion clock).

             (+++) ADC clock (conversions clock).
                   Two possible clock sources: synchronous clock derived from AHB clock
                   or asynchronous clock derived from system clock, the PLL2 or the PLL3 running up to 400MHz.

             (+++) Example:
                   Into HAL_ADC_MspInit() (recommended code location) or with
                   other device clock parameters configuration:
               (+++) __HAL_RCC_ADC_CLK_ENABLE();                  (mandatory)

               RCC_ADCCLKSOURCE_PLL2 enable:                   (optional: if asynchronous clock selected)
               (+++) RCC_PeriphClkInitTypeDef   RCC_PeriphClkInit;
               (+++) PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC;
               (+++) PeriphClkInit.AdcClockSelection    = RCC_ADCCLKSOURCE_PLL2;
               (+++) HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit);

        (++) ADC clock source and clock prescaler are configured at ADC level with
             parameter "ClockPrescaler" using function HAL_ADC_Init().

    (#) ADC pins configuration
         (++) Enable the clock for the ADC GPIOs
              using macro __HAL_RCC_GPIOx_CLK_ENABLE()
         (++) Configure these ADC pins in analog mode
              using function HAL_GPIO_Init()

    (#) Optionally, in case of usage of ADC with interruptions:
         (++) Configure the NVIC for ADC
              using function HAL_NVIC_EnableIRQ(ADCx_IRQn)
         (++) Insert the ADC interruption handler function HAL_ADC_IRQHandler()
              into the function of corresponding ADC interruption vector
              ADCx_IRQHandler().

    (#) Optionally, in case of usage of DMA:
         (++) Configure the DMA (DMA channel, mode normal or circular, ...)
              using function HAL_DMA_Init().
         (++) Configure the NVIC for DMA
              using function HAL_NVIC_EnableIRQ(DMAx_Channelx_IRQn)
         (++) Insert the ADC interruption handler function HAL_ADC_IRQHandler()
              into the function of corresponding DMA interruption vector
              DMAx_Channelx_IRQHandler().

    *** Configuration of ADC, group regular, channels parameters ***
     ================================================================
     [..]


    (#) Configure the ADC parameters (resolution, data alignment, ...)
        and regular group parameters (conversion trigger, sequencer, ...)
        using function HAL_ADC_Init().

    (#) Configure the channels for regular group parameters (channel number,
        channel rank into sequencer, ..., into regular group)
        using function HAL_ADC_ConfigChannel().

    (#) Optionally, configure the analog watchdog parameters (channels
        monitored, thresholds, ...)
        using function HAL_ADC_AnalogWDGConfig().

     *** Execution of ADC conversions ***
     ====================================
     [..]


    (#) Optionally, perform an automatic ADC calibration to improve the
        conversion accuracy
        using function HAL_ADCEx_Calibration_Start().

    (#) ADC driver can be used among three modes: polling, interruption,
        transfer by DMA.

        (++) ADC conversion by polling:
          (+++) Activate the ADC peripheral and start conversions
                using function HAL_ADC_Start()
          (+++) Wait for ADC conversion completion
                using function HAL_ADC_PollForConversion()
          (+++) Retrieve conversion results
                using function HAL_ADC_GetValue()
          (+++) Stop conversion and disable the ADC peripheral
                using function HAL_ADC_Stop()

        (++) ADC conversion by interruption:
          (+++) Activate the ADC peripheral and start conversions
                using function HAL_ADC_Start_IT()
          (+++) Wait for ADC conversion completion by call of function
                HAL_ADC_ConvCpltCallback()
                (this function must be implemented in user program)
          (+++) Retrieve conversion results
                using function HAL_ADC_GetValue()
          (+++) Stop conversion and disable the ADC peripheral
                using function HAL_ADC_Stop_IT()

        (++) ADC conversion with transfer by DMA:
          (+++) Activate the ADC peripheral and start conversions
                using function HAL_ADC_Start_DMA()
          (+++) Wait for ADC conversion completion by call of function
                HAL_ADC_ConvCpltCallback() or HAL_ADC_ConvHalfCpltCallback()
                (these functions must be implemented in user program)
          (+++) Conversion results are automatically transferred by DMA into
                destination variable address.
          (+++) Stop conversion and disable the ADC peripheral
                using function HAL_ADC_Stop_DMA()

     [..]


    (@) Callback functions must be implemented in user program:
      (+@) HAL_ADC_ErrorCallback()
      (+@) HAL_ADC_LevelOutOfWindowCallback() (callback of analog watchdog)
      (+@) HAL_ADC_ConvCpltCallback()
      (+@) HAL_ADC_ConvHalfCpltCallback

     *** Deinitialization of ADC ***
     ============================================================
     [..]


    (#) Disable the ADC interface
      (++) ADC clock can be hard reset and disabled at RCC top level.
        (++) Hard reset of ADC peripherals
             using macro __HAL_RCC_ADCx_FORCE_RESET(), __HAL_RCC_ADCx_RELEASE_RESET().
        (++) ADC clock disable
             using the equivalent macro/functions as configuration step.
             (+++) Example:
                   Into HAL_ADC_MspDeInit() (recommended code location) or with
                   other device clock parameters configuration:
               (+++) __HAL_RCC_ADC_CLK_DISABLE();                  (if not used anymore)
               RCC_ADCCLKSOURCE_CLKP restore:                      (optional)
               (+++) RCC_PeriphClkInitTypeDef   RCC_PeriphClkInit;
               (+++) PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_ADC;
               (+++) PeriphClkInit.AdcClockSelection    = RCC_ADCCLKSOURCE_CLKP;
               (+++) HAL_RCCEx_PeriphCLKConfig(&PeriphClkInit);

    (#) ADC pins configuration
         (++) Disable the clock for the ADC GPIOs
              using macro __HAL_RCC_GPIOx_CLK_DISABLE()

    (#) Optionally, in case of usage of ADC with interruptions:
         (++) Disable the NVIC for ADC
              using function HAL_NVIC_EnableIRQ(ADCx_IRQn)

    (#) Optionally, in case of usage of DMA:
         (++) Deinitialize the DMA
              using function HAL_DMA_Init().
         (++) Disable the NVIC for DMA
              using function HAL_NVIC_EnableIRQ(DMAx_Channelx_IRQn)

    [..]

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

/** @defgroup ADC ADC
  * @brief ADC HAL module driver
  * @{
  */

#ifdef HAL_ADC_MODULE_ENABLED

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/

/** @defgroup ADC_Private_Constants ADC Private Constants
  * @{
  */

#define ADC_CFGR_FIELDS_1  ((uint32_t)(ADC_CFGR_RES    |\
                                       ADC_CFGR_CONT   | ADC_CFGR_OVRMOD  |\
                                       ADC_CFGR_DISCEN | ADC_CFGR_DISCNUM |\
                                       ADC_CFGR_EXTEN  | ADC_CFGR_EXTSEL)) /*!< ADC_CFGR fields of parameters that can be updated
                                                                                  when no regular conversion is on-going */

#define ADC_CFGR_FIELDS_2  ((uint32_t)(ADC_CFGR_DMNGT | ADC_CFGR_AUTDLY)) /*!< ADC_CFGR2 fields of parameters that can be updated when no conversion
                                                                                 (neither regular nor injected) is on-going  */

#define ADC_CFGR2_FIELDS  ((uint32_t)(ADC_CFGR2_ROVSE | ADC_CFGR2_OSR   |\
                                       ADC_CFGR2_OVSS | ADC_CFGR2_TROVS |\
                                       ADC_CFGR2_ROVSM))

#define ADC_CFGR_WD_FIELDS  ((uint32_t)(ADC_CFGR_AWD1SGL | ADC_CFGR_JAWD1EN | \
                                        ADC_CFGR_AWD1EN | ADC_CFGR_AWD1CH)) /*!< ADC_CFGR fields of Analog Watchdog parameters that can be updated when no
                                                                                  conversion (neither regular nor injected) is on-going  */

#define ADC_OFR_FIELDS  ((uint32_t)(ADC_OFR1_OFFSET1 | ADC_OFR1_OFFSET1_CH)) /*!< ADC_OFR fields of parameters that can be updated when no conversion
                                                                                                        (neither regular nor injected) is on-going */

/* Delay to wait before setting ADEN once ADCAL has been reset
   must be at least 4 ADC clock cycles.
   Assuming lowest ADC clock (350 KHz according to DS), this
   4 ADC clock cycles duration is equal to
   4 / 350,000 = 0.011 ms.
   ADC_ENABLE_TIMEOUT set to 2 is a margin large enough to ensure
   the 4 ADC clock cycles have elapsed while waiting for ADRDY
   to become 1 */
  #define ADC_ENABLE_TIMEOUT              ((uint32_t)  2)    /*!< ADC enable time-out value  */
  #define ADC_DISABLE_TIMEOUT             ((uint32_t)  2)    /*!< ADC disable time-out value */

/* Timeout to wait for current conversion on going to be completed.           */
/* Timeout fixed to worst case, for 1 channel.                                */
/*   - maximum sampling time (830.5 adc_clk)                                  */
/*   - ADC resolution (Tsar 16 bits= 16.5 adc_clk)                            */
/*   - ADC clock with prescaler 256                                           */
/*     823 * 256 = 210688 clock cycles max                                    */
/* Unit: cycles of CPU clock.                                                 */
#define ADC_CONVERSION_TIME_MAX_CPU_CYCLES ((uint32_t) 210688)  /*!< ADC conversion completion time-out value */




/**
  * @}
  */

/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Exported functions --------------------------------------------------------*/

/** @defgroup ADC_Exported_Functions ADC Exported Functions
  * @{
  */

/** @defgroup ADC_Exported_Functions_Group1 Initialization and deinitialization functions
  * @brief    ADC Initialization and Configuration functions
  *
@verbatim
 ===============================================================================
              ##### Initialization and deinitialization functions #####
 ===============================================================================
    [..] This section provides functions allowing to:
      (+) Initialize and configure the ADC.
      (+) Deinitialize the ADC.

@endverbatim
  * @{
  */
/**
  * @brief  Initialize the ADC peripheral and regular group according to
  *         parameters specified in structure "ADC_InitTypeDef".
  * @note   As prerequisite, ADC clock must be configured at RCC top level
  *         depending on possible clock sources: PLL2/PLL3 clocks or AHB clock.
  * @note   Possibility to update parameters on the fly:
  *         this function initializes the ADC MSP (HAL_ADC_MspInit()) only when
  *         coming from ADC state reset. Following calls to this function can
  *         be used to reconfigure some parameters of ADC_InitTypeDef
  *         structure on the fly, without modifying MSP configuration. If ADC
  *         MSP has to be modified again, HAL_ADC_DeInit() must be called
  *         before HAL_ADC_Init().
  *         The setting of these parameters is conditioned by ADC state.
  *         For parameters constraints, see comments of structure
  *         "ADC_InitTypeDef".
  * @note   This function configures the ADC within 2 scopes: scope of entire
  *         ADC and scope of regular group. For parameters details, see comments
  *         of structure "ADC_InitTypeDef".
  * @note   Parameters related to common ADC registers (ADC clock mode) are set
  *         only if all ADCs are disabled.
  *         If this is not the case, these common parameters setting are
  *         bypassed without error reporting: it can be the intended behaviour in
  *         case of update of a parameter of ADC_InitTypeDef on the fly,
  *         without  disabling the other ADCs.
  * @param  hadc: ADC handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_Init(ADC_HandleTypeDef* hadc)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  ADC_Common_TypeDef *tmpADC_Common;
  uint32_t tmpCFGR = 0;
  __IO uint32_t wait_loop_index = 0;

  /* Check ADC handle */
  if(hadc == NULL)
  {
    return HAL_ERROR;
  }

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));
  assert_param(IS_ADC_CLOCKPRESCALER(hadc->Init.ClockPrescaler));
  assert_param(IS_ADC_RESOLUTION(hadc->Init.Resolution));
  assert_param(IS_ADC_SCAN_MODE(hadc->Init.ScanConvMode));
  assert_param(IS_FUNCTIONAL_STATE(hadc->Init.ContinuousConvMode));
  assert_param(IS_ADC_EXTTRIG_EDGE(hadc->Init.ExternalTrigConvEdge));
  assert_param(IS_ADC_EXTTRIG(hadc->Init.ExternalTrigConv));
  assert_param(IS_ADC_CONVERSIONDATAMGT(hadc->Init.ConversionDataManagement));
  assert_param(IS_ADC_EOC_SELECTION(hadc->Init.EOCSelection));
  assert_param(IS_ADC_OVERRUN(hadc->Init.Overrun));
  assert_param(IS_FUNCTIONAL_STATE(hadc->Init.LowPowerAutoWait));
  assert_param(IS_FUNCTIONAL_STATE(hadc->Init.OversamplingMode));
  assert_param(IS_FUNCTIONAL_STATE(hadc->Init.BoostMode));

  if(hadc->Init.ScanConvMode != ADC_SCAN_DISABLE)
  {
    assert_param(IS_ADC_REGULAR_NB_CONV(hadc->Init.NbrOfConversion));
    assert_param(IS_FUNCTIONAL_STATE(hadc->Init.DiscontinuousConvMode));

    if (hadc->Init.DiscontinuousConvMode == ENABLE)
    {
      assert_param(IS_ADC_REGULAR_DISCONT_NUMBER(hadc->Init.NbrOfDiscConversion));
    }
  }


  /* DISCEN and CONT bits can not be set at the same time */
  assert_param(!((hadc->Init.DiscontinuousConvMode == ENABLE) && (hadc->Init.ContinuousConvMode == ENABLE)));


  /* Actions performed only if ADC is coming from state reset:                */
  /* - Initialization of ADC MSP                                              */
  if (hadc->State == HAL_ADC_STATE_RESET)
  {
    /* Init the low level hardware */
    HAL_ADC_MspInit(hadc);

    /* Set ADC error code to none */
    ADC_CLEAR_ERRORCODE(hadc);

    /* Initialize Lock */
    hadc->Lock = HAL_UNLOCKED;
  }


  /* - Exit from deep-power-down mode and ADC voltage regulator enable        */
  /*  Exit deep power down mode if still in that state                        */
  if (HAL_IS_BIT_SET(hadc->Instance->CR, ADC_CR_DEEPPWD))
  {
    /* Exit deep power down mode */
    CLEAR_BIT(hadc->Instance->CR, ADC_CR_DEEPPWD);

    /* System was in deep power down mode, calibration must
       be relaunched or a previously saved calibration factor
       re-applied once the ADC voltage regulator is enabled   */
  }


  if  (HAL_IS_BIT_CLR(hadc->Instance->CR, ADC_CR_ADVREGEN))
  {
    /* Enable ADC internal voltage regulator */
    SET_BIT(hadc->Instance->CR, ADC_CR_ADVREGEN);
    /* Delay for ADC stabilization time                                       */
    /* Wait loop initialization and execution                                 */
    /* Note: Variable divided by 2 to compensate partially                    */
    /*       CPU processing cycles.                                           */
    wait_loop_index = (ADC_STAB_DELAY_US * (SystemCoreClock / (1000000 * 2)));
    while(wait_loop_index != 0)
    {
      wait_loop_index--;
    }
  }


  /* Verification that ADC voltage regulator is correctly enabled, whether    */
  /* or not ADC is coming from state reset (if any potential problem of       */
  /* clocking, voltage regulator would not be enabled).                       */
  if (HAL_IS_BIT_CLR(hadc->Instance->CR, ADC_CR_ADVREGEN))
  {
    /* Update ADC state machine to error */
    SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

    /* Set ADC error code to ADC IP internal error */
    SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

    tmp_hal_status = HAL_ERROR;
  }


  /* Configuration of ADC parameters if previous preliminary actions are      */
  /* correctly completed and if there is no conversion on going on regular    */
  /* group (ADC may already be enabled at this point if HAL_ADC_Init() is     */
  /* called to update a parameter on the fly).                                */
  if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL) &&
      (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)  )
  {

    /* Initialize the ADC state */
    SET_BIT(hadc->State, HAL_ADC_STATE_BUSY_INTERNAL);

    /* Configuration of common ADC parameters                                 */

    if((hadc->Instance == ADC1) || (hadc->Instance == ADC2))
    {
      /* Pointer to the common control register                               */
      tmpADC_Common = ADC12_COMMON_REGISTER(hadc);
    }
    else
    {
      /* Pointer to the common control register                               */
      tmpADC_Common = ADC3_COMMON_REGISTER(hadc);
    }

    /* Parameters update conditioned to ADC state:                            */
    /* Parameters that can be updated only when ADC is disabled:              */
    /*  - Multimode clock configuration                                       */
    if ((ADC_IS_ENABLE(hadc) == RESET)   &&
        (ADC_ANY_OTHER_ENABLED(hadc) == RESET) )
    {
      /* Reset configuration of ADC common register CCR:                      */
      /*                                                                      */
      /*   - ADC clock mode and ACC prescaler (CKMODE and PRESC bits)are set  */
      /*     according to adc->Init.ClockPrescaler. It selects the clock      */
      /*    source and sets the clock division factor.                        */
      /*                                                                      */
      /* Some parameters of this register are not reset, since they are set   */
      /* by other functions and must be kept in case of usage of this         */
      /* function on the fly (update of a parameter of ADC_InitTypeDef        */
      /* without needing to reconfigure all other ADC groups/channels         */
      /* parameters):                                                         */
      /*   - when multimode feature is available, multimode-related           */
      /*     parameters:DELAY,DUAL(set by API                                 */
      /*     HAL_ADCEx_MultiModeConfigChannel())                              */
      /*   - internal measurement paths: Vbat, temperature sensor, Vref       */
      /*     (set into HAL_ADC_ConfigChannel() or                             */
      /*     HAL_ADCEx_InjectedConfigChannel() )                              */

      MODIFY_REG(tmpADC_Common->CCR, ADC_CCR_PRESC|ADC_CCR_CKMODE, hadc->Init.ClockPrescaler);
    }


    /* Configuration of ADC:                                                  */
    /*  - resolution                               Init.Resolution            */
    /*  - external trigger to start conversion     Init.ExternalTrigConv      */
    /*  - external trigger polarity                Init.ExternalTrigConvEdge  */
    /*  - continuous conversion mode               Init.ContinuousConvMode    */
    /*  - overrun                                  Init.Overrun               */
    /*  - discontinuous mode                       Init.DiscontinuousConvMode */
    /*  - discontinuous mode channel count         Init.NbrOfDiscConversion   */
    tmpCFGR  = ( ADC_CFGR_CONTINUOUS(hadc->Init.ContinuousConvMode)          |
                 hadc->Init.Overrun                                          |
                 hadc->Init.Resolution                                       |
                ADC_CFGR_REG_DISCONTINUOUS(hadc->Init.DiscontinuousConvMode)  );

    if (hadc->Init.DiscontinuousConvMode == ENABLE)
    {
      tmpCFGR |= ADC_CFGR_DISCONTINUOUS_NUM(hadc->Init.NbrOfDiscConversion);
    }

    /* Enable external trigger if trigger selection is different of software  */
    /* start.                                                                 */
    /*  - external trigger to start conversion     Init.ExternalTrigConv      */
    /*  - external trigger polarity                Init.ExternalTrigConvEdge  */
    /* Note:  parameter ExternalTrigConvEdge set to "trigger edge none" is    */
    /*        equivalent to software start.                                   */
    if ((hadc->Init.ExternalTrigConv != ADC_SOFTWARE_START)
        && (hadc->Init.ExternalTrigConvEdge != ADC_EXTERNALTRIGCONVEDGE_NONE))
    {
      tmpCFGR |= ( hadc->Init.ExternalTrigConv |  hadc->Init.ExternalTrigConvEdge);
    }

    /* Update Configuration Register CFGR */
    MODIFY_REG(hadc->Instance->CFGR, ADC_CFGR_FIELDS_1, tmpCFGR);


    /* Parameters update conditioned to ADC state:                            */
    /* Parameters that can be updated when ADC is disabled or enabled without */
    /* conversion on going on regular and injected groups:                    */
    /*  - Conversion data management      Init.ConversionDataManagement       */
    /*  - LowPowerAutoWait feature        Init.LowPowerAutoWait               */
    /*  - Oversampling parameters         Init.Oversampling                   */
    /*  - Boost Mode                      BoostMode                           */
    if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc) == RESET)
    {
      tmpCFGR = ( ADC_CFGR_AUTOWAIT(hadc->Init.LowPowerAutoWait)       |
                  ADC_CFGR_DMACONTREQ(hadc->Init.ConversionDataManagement) );

      MODIFY_REG(hadc->Instance->CFGR, ADC_CFGR_FIELDS_2, tmpCFGR);


      if (hadc->Init.OversamplingMode == ENABLE)
      {
        assert_param(IS_ADC_OVERSAMPLING_RATIO(hadc->Init.Oversampling.Ratio));
        assert_param(IS_ADC_RIGHT_BIT_SHIFT(hadc->Init.Oversampling.RightBitShift));
        assert_param(IS_ADC_TRIGGERED_OVERSAMPLING_MODE(hadc->Init.Oversampling.TriggeredMode));
        assert_param(IS_ADC_REGOVERSAMPLING_MODE(hadc->Init.Oversampling.OversamplingStopReset));

        if ((hadc->Init.ExternalTrigConv == ADC_SOFTWARE_START)
            || (hadc->Init.ExternalTrigConvEdge == ADC_EXTERNALTRIGCONVEDGE_NONE))
        {
          /* Multi trigger is not applicable to software-triggered conversions */
          assert_param((hadc->Init.Oversampling.TriggeredMode == ADC_TRIGGEREDMODE_SINGLE_TRIGGER));
        }


       /* Configuration of Oversampler:                                       */
       /*  - Oversampling Ratio                                               */
       /*  - Right bit shift                                                  */
       /*  - Leftt bit shift                                                  */
       /*  - Triggered mode                                                   */
       /*  - Oversampling mode (continued/resumed)                            */
       MODIFY_REG(hadc->Instance->CFGR2, ADC_CFGR2_FIELDS,
                                         ADC_CFGR2_ROVSE                       |
                                         (hadc->Init.Oversampling.Ratio << 16) |
                                         hadc->Init.Oversampling.RightBitShift |
                                         hadc->Init.Oversampling.TriggeredMode |
                                         hadc->Init.Oversampling.OversamplingStopReset);
      }
      else
      {
        /* Disable Regular OverSampling */
        CLEAR_BIT( hadc->Instance->CFGR2, ADC_CFGR2_ROVSE);
      }

      /* Set the LeftShift parameter: it is applied to the final result with or without oversampling */
      MODIFY_REG(hadc->Instance->CFGR2, ADC_CFGR2_LSHIFT, hadc->Init.LeftBitShift);

      /* Configure the BOOST Mode */
      if(hadc->Init.BoostMode == ENABLE)
      {
        SET_BIT(hadc->Instance->CR, ADC_CR_BOOST);
      }
      else
      {
        CLEAR_BIT(hadc->Instance->CR, ADC_CR_BOOST);
      }

    }   /*  if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc) == RESET) */

    /* Configuration of regular group sequencer:                              */
    /* - if scan mode is disabled, regular channels sequence length is set to */
    /*   0x00: 1 channel converted (channel on regular rank 1)                */
    /*   Parameter "NbrOfConversion" is discarded.                            */
    /*   Note: Scan mode is not present by hardware on this device, but       */
    /*   emulated by software for alignment over all STM32 devices.           */
    /* - if scan mode is enabled, regular channels sequence length is set to  */
    /*   parameter "NbrOfConversion"                                          */

    if (hadc->Init.ScanConvMode == ADC_SCAN_ENABLE)
    {
      /* Set number of ranks in regular group sequencer */
      MODIFY_REG(hadc->Instance->SQR1, ADC_SQR1_L, (hadc->Init.NbrOfConversion - (uint8_t)1));
    }
    else
    {
      CLEAR_BIT(hadc->Instance->SQR1, ADC_SQR1_L);
    }


    /* Initialize the ADC state */
    /* Clear HAL_ADC_STATE_BUSY_INTERNAL bit, set HAL_ADC_STATE_READY bit */
    ADC_STATE_CLR_SET(hadc->State, HAL_ADC_STATE_BUSY_INTERNAL, HAL_ADC_STATE_READY);
  }
  else
  {
    /* Update ADC state machine to error */
    SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

    tmp_hal_status = HAL_ERROR;
  }  /*  if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL)  && (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)  ) */


  /* Return function status */
  return tmp_hal_status;

}

/**
  * @brief  Deinitialize the ADC peripheral registers to their default reset
  *         values, with deinitialization of the ADC MSP.
  * @note   Keep in mind that all ADCs use the same clock: disabling
  *         the clock will reset all ADCs.
  * @note   By default, HAL_ADC_DeInit() sets DEEPPWD: this saves more power by
  *         reducing the leakage currents and is particularly interesting before
  *         entering STOP 1 or STOP 2 modes.
  * @param  hadc: ADC handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_DeInit(ADC_HandleTypeDef* hadc)
{
  ADC_Common_TypeDef *tmpADC_Common;

  /* Check ADC handle */
  if(hadc == NULL)
  {
     return HAL_ERROR;
  }

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Set ADC state */
  SET_BIT(hadc->State, HAL_ADC_STATE_BUSY_INTERNAL);

  /* Stop potential conversion on going, on regular and injected groups */
  /* No check on ADC_ConversionStop() return status, if the conversion
    stop failed, it is up to HAL_ADC_MspDeInit() to reset the ADC IP */
  ADC_ConversionStop(hadc, ADC_REGULAR_INJECTED_GROUP);


  /* Disable ADC peripheral if conversions are effectively stopped            */
  /* Flush register JSQR: reset the queue sequencer when injected             */
  /* queue sequencer is enabled and ADC disabled.                             */
  /* The software and hardware triggers of the injected sequence are both     */
  /* internally disabled just after the completion of the last valid          */
  /* injected sequence.                                                       */
  SET_BIT(hadc->Instance->CFGR, ADC_CFGR_JQM);

  /* Disable the ADC peripheral                                               */
  /* No check on ADC_Disable() return status, if the ADC disabling process
     failed, it is up to HAL_ADC_MspDeInit() to reset the ADC IP              */
  ADC_Disable(hadc);


  /* ========== Reset ADC registers ========== */
  /* Reset register IER */
  __HAL_ADC_DISABLE_IT(hadc, (ADC_IT_AWD3  | ADC_IT_AWD2 | ADC_IT_AWD1 |
                              ADC_IT_JQOVF | ADC_IT_OVR  |
                              ADC_IT_JEOS  | ADC_IT_JEOC |
                              ADC_IT_EOS   | ADC_IT_EOC  |
                              ADC_IT_EOSMP | ADC_IT_RDY                 ) );

  /* Reset register ISR */
  __HAL_ADC_CLEAR_FLAG(hadc, (ADC_FLAG_AWD3  | ADC_FLAG_AWD2 | ADC_FLAG_AWD1 |
                              ADC_FLAG_JQOVF | ADC_FLAG_OVR  |
                              ADC_FLAG_JEOS  | ADC_FLAG_JEOC |
                              ADC_FLAG_EOS   | ADC_FLAG_EOC  |
                              ADC_FLAG_EOSMP | ADC_FLAG_RDY                   ) );

  /* Reset register CR */
 /* Bits ADC_CR_JADSTP, ADC_CR_ADSTP, ADC_CR_JADSTART, ADC_CR_ADSTART,
    ADC_CR_ADCAL, ADC_CR_ADDIS and ADC_CR_ADEN are in access mode "read-set":
    no direct reset applicable.
    Update CR register to reset value where doable by software */
  CLEAR_BIT(hadc->Instance->CR, ADC_CR_ADVREGEN | ADC_CR_ADCALDIF);
  SET_BIT(hadc->Instance->CR, ADC_CR_DEEPPWD);

  /* Reset register CFGR */
  CLEAR_BIT(hadc->Instance->CFGR, ADC_CFGR_AWD1CH  | ADC_CFGR_JAUTO   | ADC_CFGR_JAWD1EN |
                                  ADC_CFGR_AWD1EN  | ADC_CFGR_AWD1SGL | ADC_CFGR_JQM     |
                                  ADC_CFGR_JDISCEN | ADC_CFGR_DISCNUM | ADC_CFGR_DISCEN  |
                                  ADC_CFGR_AUTDLY  | ADC_CFGR_CONT    | ADC_CFGR_OVRMOD  |
                                  ADC_CFGR_EXTEN   | ADC_CFGR_EXTSEL  |
                                  ADC_CFGR_RES     | ADC_CFGR_DMNGT);
  SET_BIT(hadc->Instance->CFGR, ADC_CFGR_JQDIS);

  /* Reset register CFGR2 */
  CLEAR_BIT(hadc->Instance->CFGR2, ADC_CFGR2_ROVSM | ADC_CFGR2_TROVS | ADC_CFGR2_OVSS |
                                   ADC_CFGR2_OSR   | ADC_CFGR2_JOVSE | ADC_CFGR2_ROVSE );

  /* Reset register SMPR1 */
  CLEAR_BIT(hadc->Instance->SMPR1, ADC_SMPR1_SMP9 | ADC_SMPR1_SMP8 | ADC_SMPR1_SMP7 |
                                   ADC_SMPR1_SMP6 | ADC_SMPR1_SMP5 | ADC_SMPR1_SMP4 |
                                   ADC_SMPR1_SMP3 | ADC_SMPR1_SMP2 | ADC_SMPR1_SMP1 |
                                   ADC_SMPR1_SMP0 );

  /* Reset register SMPR2 */
  CLEAR_BIT(hadc->Instance->SMPR2, ADC_SMPR2_SMP18 | ADC_SMPR2_SMP17 | ADC_SMPR2_SMP16 |
                                   ADC_SMPR2_SMP15 | ADC_SMPR2_SMP14 | ADC_SMPR2_SMP13 |
                                   ADC_SMPR2_SMP12 | ADC_SMPR2_SMP11 | ADC_SMPR2_SMP10 );

  /* Reset register LTR1 and HTR1 */
  CLEAR_BIT(hadc->Instance->LTR1, ADC_LTR1_LT1);
  CLEAR_BIT(hadc->Instance->HTR1, ADC_HTR1_HT1);

  /* Reset register LTR2 and HTR2*/
  CLEAR_BIT(hadc->Instance->LTR2, ADC_LTR2_LT2);
  CLEAR_BIT(hadc->Instance->HTR2, ADC_HTR2_HT2);

  /* Reset register LTR3 and HTR3 */
  CLEAR_BIT(hadc->Instance->LTR3, ADC_LTR3_LT3);
  CLEAR_BIT(hadc->Instance->HTR3, ADC_HTR3_HT3);

  /* Reset register SQR1 */
  CLEAR_BIT(hadc->Instance->SQR1, ADC_SQR1_SQ4 | ADC_SQR1_SQ3 | ADC_SQR1_SQ2 |
                                  ADC_SQR1_SQ1 | ADC_SQR1_L);

  /* Reset register SQR2 */
  CLEAR_BIT(hadc->Instance->SQR2, ADC_SQR2_SQ9 | ADC_SQR2_SQ8 | ADC_SQR2_SQ7 |
                                  ADC_SQR2_SQ6 | ADC_SQR2_SQ5);

  /* Reset register SQR3 */
  CLEAR_BIT(hadc->Instance->SQR3, ADC_SQR3_SQ14 | ADC_SQR3_SQ13 | ADC_SQR3_SQ12 |
                                  ADC_SQR3_SQ11 | ADC_SQR3_SQ10);

  /* Reset register SQR4 */
  CLEAR_BIT(hadc->Instance->SQR4, ADC_SQR4_SQ16 | ADC_SQR4_SQ15);

  /* Register JSQR was reset when the ADC was disabled */

  /* Reset register DR */
  /* bits in access mode read only, no direct reset applicable*/

  /* Reset register OFR1 */
  CLEAR_BIT(hadc->Instance->OFR1, ADC_OFR1_SSATE | ADC_OFR1_OFFSET1_CH | ADC_OFR1_OFFSET1);
  /* Reset register OFR2 */
  CLEAR_BIT(hadc->Instance->OFR2, ADC_OFR2_SSATE | ADC_OFR2_OFFSET2_CH | ADC_OFR2_OFFSET2);
  /* Reset register OFR3 */
  CLEAR_BIT(hadc->Instance->OFR3, ADC_OFR3_SSATE | ADC_OFR3_OFFSET3_CH | ADC_OFR3_OFFSET3);
  /* Reset register OFR4 */
  CLEAR_BIT(hadc->Instance->OFR4, ADC_OFR4_SSATE | ADC_OFR4_OFFSET4_CH | ADC_OFR4_OFFSET4);

  /* Reset registers JDR1, JDR2, JDR3, JDR4 */
  /* bits in access mode read only, no direct reset applicable*/

  /* Reset register AWD2CR */
  CLEAR_BIT(hadc->Instance->AWD2CR, ADC_AWD2CR_AWD2CH);

  /* Reset register AWD3CR */
  CLEAR_BIT(hadc->Instance->AWD3CR, ADC_AWD3CR_AWD3CH);

  /* Reset register DIFSEL */
  CLEAR_BIT(hadc->Instance->DIFSEL, ADC_DIFSEL_DIFSEL);

  /* Reset register CALFACT */
  CLEAR_BIT(hadc->Instance->CALFACT, ADC_CALFACT_CALFACT_D | ADC_CALFACT_CALFACT_S);


  /* ========== Reset common ADC registers ========== */

  /* Software is allowed to change common parameters only when all the other
     ADCs are disabled.   */
  if ((ADC_IS_ENABLE(hadc) == RESET)   &&
      (ADC_ANY_OTHER_ENABLED(hadc) == RESET) )
  {
    /* Reset configuration of ADC common register CCR:
      - clock mode: CKMODE, PRESCEN
      - multimode related parameters(when this feature is available): DELAY, DUAL
       (set into  HAL_ADCEx_MultiModeConfigChannel() )
      - internal measurement paths: Vbat, temperature sensor, Vref (set into
        HAL_ADC_ConfigChannel() or HAL_ADCEx_InjectedConfigChannel() )
    */
    if((hadc->Instance == ADC1)||(hadc->Instance == ADC2))
    {
      tmpADC_Common = ADC12_COMMON_REGISTER(hadc);
    }
    else
    {
      tmpADC_Common = ADC3_COMMON_REGISTER(hadc);
    }
    CLEAR_BIT(tmpADC_Common->CCR, ADC_CCR_CKMODE |
                                  ADC_CCR_PRESC  |
                                  ADC_CCR_VBATEN |
                                  ADC_CCR_TSEN   |
                                  ADC_CCR_VREFEN |
                                  ADC_CCR_DAMDF  |
                                  ADC_CCR_DELAY  |
                                  ADC_CCR_DUAL  );

  }

  /* DeInit the low level hardware.

     For example:
    __HAL_RCC_ADC_FORCE_RESET();
    __HAL_RCC_ADC_RELEASE_RESET();
    __HAL_RCC_ADC_CLK_DISABLE();

    Keep in mind that all ADCs use the same clock: disabling
    the clock will reset all ADCs.

  */
  HAL_ADC_MspDeInit(hadc);

  /* Set ADC error code to none */
  ADC_CLEAR_ERRORCODE(hadc);

  /* Reset injected channel configuration parameters */
  hadc->InjectionConfig.ContextQueue = 0;
  hadc->InjectionConfig.ChannelCount = 0;

  /* Set ADC state */
  hadc->State = HAL_ADC_STATE_RESET;

  /* Process unlocked */
  __HAL_UNLOCK(hadc);


  /* Return function status */
  return HAL_OK;

}

/**
  * @brief  Initialize the ADC MSP.
  * @param  hadc: ADC handle
  * @retval None
  */
__weak void HAL_ADC_MspInit(ADC_HandleTypeDef* hadc)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hadc);
  /* NOTE : This function should not be modified. When the callback is needed,
            function HAL_ADC_MspInit must be implemented in the user file.
   */
}

/**
  * @brief  DeInitialize the ADC MSP.
  * @param  hadc: ADC handle
  * @note   All ADCs use the same clock: disabling the clock will reset all ADCs.
  * @retval None
  */
__weak void HAL_ADC_MspDeInit(ADC_HandleTypeDef* hadc)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hadc);
  /* NOTE : This function should not be modified. When the callback is needed,
            function HAL_ADC_MspDeInit must be implemented in the user file.
   */
}

/**
  * @}
  */

/** @defgroup ADC_Exported_Functions_Group2 Input and Output operation functions
  * @brief    ADC IO operation functions
  *
@verbatim
 ===============================================================================
             ##### IO operation functions #####
 ===============================================================================
    [..] This section provides functions allowing to:
      (+) Start conversion of regular group.
      (+) Stop conversion of regular group.
      (+) Poll for conversion complete on regular group.
      (+) Poll for conversion event.
      (+) Get result of regular channel conversion.
      (+) Start conversion of regular group and enable interruptions.
      (+) Stop conversion of regular group and disable interruptions.
      (+) Handle ADC interrupt request
      (+) Start conversion of regular group and enable DMA transfer.
      (+) Stop conversion of regular group and disable ADC DMA transfer.

@endverbatim
  * @{
  */

/**
  * @brief  Enable ADC, starts conversion of regular group.
  * @note   Interruptions enabled in this function: None.
  * @note   Case of multimode enabled(when multimode feature is available):
  *            if ADC is Slave, ADC is enabled but conversion is not started,
  *            if ADC is master, ADC is enabled and multimode conversion is started.
  * @param  hadc: ADC handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_Start(ADC_HandleTypeDef* hadc)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;
  ADC_TypeDef        *tmpADC_Master;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Perform ADC enable and conversion start if no conversion is on going */
  if (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)
  {
    /* Process locked */
    __HAL_LOCK(hadc);

    /* Enable the ADC peripheral */
    tmp_hal_status = ADC_Enable(hadc);

    /* Start conversion if ADC is effectively enabled */
    if (tmp_hal_status == HAL_OK)
    {
      /* State machine update: Check if an injected conversion is ongoing */
      if (HAL_IS_BIT_SET(hadc->State, HAL_ADC_STATE_INJ_BUSY))
      {
        /* Reset ADC error code fields related to regular conversions only */
        CLEAR_BIT(hadc->ErrorCode, (HAL_ADC_ERROR_OVR|HAL_ADC_ERROR_DMA));
      }
      else
      {
        /* Set ADC error code to none */
        ADC_CLEAR_ERRORCODE(hadc);
      }
      /* Clear HAL_ADC_STATE_READY and regular conversion results bits, set HAL_ADC_STATE_REG_BUSY bit */
      ADC_STATE_CLR_SET(hadc->State, (HAL_ADC_STATE_READY|HAL_ADC_STATE_REG_EOC|HAL_ADC_STATE_REG_OVR|HAL_ADC_STATE_REG_EOSMP), HAL_ADC_STATE_REG_BUSY);

      /* Reset HAL_ADC_STATE_MULTIMODE_SLAVE bit
        - by default if ADC is Master or Independent
        - if MultiMode setting is set to independent mode (no dual regular or injected conversions are configured) */
      if (ADC12_NONMULTIMODE_OR_MULTIMODEMASTER(hadc))
      {
        CLEAR_BIT(hadc->State, HAL_ADC_STATE_MULTIMODE_SLAVE);
      }

      /* Clear regular group conversion flag and overrun flag                   */
      /* (To ensure of no unknown state from potential previous ADC operations) */
      __HAL_ADC_CLEAR_FLAG(hadc, (ADC_FLAG_EOC | ADC_FLAG_EOS | ADC_FLAG_OVR));

      /* Enable conversion of regular group.                                  */
      /* If software start has been selected, conversion starts immediately.  */
      /* If external trigger has been selected, conversion starts at next     */
      /* trigger event.                                                       */
      /* Case of multimode enabled(when multimode feature is available):      */
      /*  - if ADC is slave and dual regular conversions are enabled, ADC is  */
      /*    enabled only (conversion is not started),                         */
      /*  - if ADC is master, ADC is enabled and conversion is started.       */
      if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc))
      {
        /* Multimode feature is not available or ADC Instance is Independent or Master,
             or is not Slave ADC with dual regular conversions enabled.
             Then, set HAL_ADC_STATE_INJ_BUSY bit and reset HAL_ADC_STATE_INJ_EOC bit if JAUTO is set. */
        if (READ_BIT(hadc->Instance->CFGR, ADC_CFGR_JAUTO) != RESET)
        {
          ADC_STATE_CLR_SET(hadc->State, HAL_ADC_STATE_INJ_EOC, HAL_ADC_STATE_INJ_BUSY);
        }
        /* Process unlocked */
        __HAL_UNLOCK(hadc);
        /* Start ADC */
        SET_BIT(hadc->Instance->CR, ADC_CR_ADSTART);
      }
      else
      {
        SET_BIT(hadc->State, HAL_ADC_STATE_MULTIMODE_SLAVE);
        /* if Master ADC JAUTO bit is set, update Slave State in setting
           HAL_ADC_STATE_INJ_BUSY bit and in resetting HAL_ADC_STATE_INJ_EOC bit */
        tmpADC_Master = ADC_MASTER_REGISTER(hadc);
        if (READ_BIT(tmpADC_Master->CFGR, ADC_CFGR_JAUTO) != RESET)
        {
          ADC_STATE_CLR_SET(hadc->State, HAL_ADC_STATE_INJ_EOC, HAL_ADC_STATE_INJ_BUSY);
      
        }  /* if (READ_BIT(tmpADC_Master->CFGR, ADC_CFGR_JAUTO) != RESET) */
        /* Process unlocked */
        __HAL_UNLOCK(hadc);
      }    /* if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc)) */
    }
    else
    {
      /* Process unlocked */
      __HAL_UNLOCK(hadc);
    }
  }
  else
  {
    tmp_hal_status = HAL_BUSY;
  }

  /* Return function status */
  return tmp_hal_status;
}

/**
  * @brief  Stop ADC conversion of regular group (and injected channels in
  *         case of auto_injection mode), disable ADC peripheral.
  * @note   ADC peripheral disable is forcing stop of potential
  *         conversion on injected group. If injected group is under use, it
  *         should be preliminarily stopped using HAL_ADCEx_InjectedStop function.
  * @param  hadc: ADC handle
  * @retval HAL status.
  */
HAL_StatusTypeDef HAL_ADC_Stop(ADC_HandleTypeDef* hadc)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Process locked */
  __HAL_LOCK(hadc);

  /* 1. Stop potential conversion on going, on ADC groups regular and injected */
  tmp_hal_status = ADC_ConversionStop(hadc, ADC_REGULAR_INJECTED_GROUP);

  /* Disable ADC peripheral if conversions are effectively stopped */
  if (tmp_hal_status == HAL_OK)
  {
    /* 2. Disable the ADC peripheral */
    tmp_hal_status = ADC_Disable(hadc);

    /* Check if ADC is effectively disabled */
    if (tmp_hal_status == HAL_OK)
    {
      /* Set ADC state */
      /* Clear HAL_ADC_STATE_REG_BUSY and HAL_ADC_STATE_INJ_BUSY bits, set HAL_ADC_STATE_READY bit */
      ADC_STATE_CLR_SET(hadc->State, (HAL_ADC_STATE_REG_BUSY|HAL_ADC_STATE_INJ_BUSY), HAL_ADC_STATE_READY);
    }
  }

  /* Process unlocked */
  __HAL_UNLOCK(hadc);

  /* Return function status */
  return tmp_hal_status;
}



/**
  * @brief  Wait for regular group conversion to be completed.
  * @param  hadc: ADC handle
  * @param  Timeout: Timeout value in millisecond.
  * @note   Depending on hadc->Init.EOCSelection, EOS or EOC is
  *         checked and cleared depending on AUTDLY bit status.
  * @note   HAL_ADC_PollForConversion() returns HAL_ERROR if EOC is polled in a
  *         DMA-managed conversions configuration: indeed, EOC is immediately
  *         reset by the DMA reading the DR register when the converted data is
  *         available. Therefore, EOC is set for a too short period to be
  *         reliably polled.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_PollForConversion(ADC_HandleTypeDef* hadc, uint32_t Timeout)
{
  uint32_t           tickstart = 0;
  uint32_t           tmp_Flag_EOC   = 0x00;
  ADC_Common_TypeDef *tmpADC_Common;
  ADC_TypeDef        *tmpADC_Master;
  uint32_t           tmp_cfgr       = 0x00;
  uint32_t           tmp_eos_raised = 0x01; /* by default, assume that EOS is set,
                                               tmp_eos_raised will be corrected
                                               accordingly during API execution */

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

   /* If end of conversion selected to end of sequence conversions */
  if (hadc->Init.EOCSelection == ADC_EOC_SEQ_CONV)
  {
    tmp_Flag_EOC = ADC_FLAG_EOS;
  }
  /* If end of conversion selected to end of unitary conversion */
  else  /* ADC_EOC_SINGLE_CONV */
  {
    /* Check that the ADC is not in a DMA-based configuration. Otherwise,
       returns an error.  */

    /* Check whether dual regular conversions are disabled or unavailable. */
    if (ADC_IS_DUAL_REGULAR_CONVERSION_ENABLE(hadc) == RESET)
    {
      /* Check DMNGT bit in handle ADC CFGR register */
      if (READ_BIT(hadc->Instance->CFGR, ADC_CFGR_DMNGT_0) != RESET)
      {
        SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_CONFIG);
        return HAL_ERROR;
      }
    }
    else
    {
      /* Else need to check Common register CCR DAMDF bit field. */
      /* Set pointer to the common control register */

      /* Pointer to the common control register                                 */
      /* Dual ADC mode, could be only ADC1 or ADC2                              */
      tmpADC_Common = ADC12_COMMON_REGISTER(hadc);

      if ((READ_BIT(tmpADC_Common->CCR, ADC_CCR_DAMDF) == ADC_DUALMODEDATAFORMAT_32_10_BITS)
          || (READ_BIT(tmpADC_Common->CCR, ADC_CCR_DAMDF) == ADC_DUALMODEDATAFORMAT_8_BITS))
      {
        SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_CONFIG);
        return HAL_ERROR;
      }
    }

    /* no DMA transfer detected, polling ADC_FLAG_EOC is possible */
    tmp_Flag_EOC = ADC_FLAG_EOC;
  }

  /* Get tick count */
  tickstart = HAL_GetTick();

  /* Wait until End of Conversion or Sequence flag is raised */
  while (HAL_IS_BIT_CLR(hadc->Instance->ISR, tmp_Flag_EOC))
  {
    /* Check if timeout is disabled (set to infinite wait) */
    if(Timeout != HAL_MAX_DELAY)
    {
      if((Timeout == 0) || ((HAL_GetTick()-tickstart) > Timeout))
      {
        /* Update ADC state machine to timeout */
        SET_BIT(hadc->State, HAL_ADC_STATE_TIMEOUT);

        /* Process unlocked */
        __HAL_UNLOCK(hadc);

        return HAL_TIMEOUT;
      }
    }
  }

  /* Next, to clear the polled flag as well as to update the handle State,
     EOS is checked and the relevant configuration register is retrieved. */
  /*   1. Check whether or not EOS is set */
  if (HAL_IS_BIT_CLR(hadc->Instance->ISR, ADC_FLAG_EOS))
  {
    tmp_eos_raised = 0;
  }
  /*  2. Check whether or not hadc is the handle of a Slave ADC with dual
   regular conversions enabled. */
  if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc))
  {
    /* Retrieve handle ADC CFGR register */
    tmp_cfgr = READ_REG(hadc->Instance->CFGR);
  }
  else
  {
    /* Retrieve Master ADC CFGR register */
    tmpADC_Master = ADC_MASTER_REGISTER(hadc);
    tmp_cfgr = READ_REG(tmpADC_Master->CFGR);
  }

  /* Clear polled flag */
  if (tmp_Flag_EOC == ADC_FLAG_EOS)
  {
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_EOS);
  }
  else
  {

    /* Clear end of conversion EOC flag of regular group if low power feature */
    /* "LowPowerAutoWait " is disabled, to not interfere with this feature    */
    /* until data register is read using function HAL_ADC_GetValue().         */
    /* For regular groups, no new conversion will start before EOC is cleared.*/
    /* Note that 1. reading DR clears EOC.                                    */
    /*           2. in multimode with dual regular conversions enabled (when  */
    /*              multimode feature is available), Master AUTDLY bit is     */
    /*              checked.                                                  */
    if (READ_BIT (tmp_cfgr, ADC_CFGR_AUTDLY) == RESET)
    {
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_EOC);
    }
  }


  /* Update ADC state machine */
  SET_BIT(hadc->State, HAL_ADC_STATE_REG_EOC);
  /* If 1. EOS is set
        2. conversions are software-triggered
        3. CONT bit is reset (that of handle ADC or Master ADC if applicable)
     Then regular conversions are over and HAL_ADC_STATE_REG_BUSY can be reset.
        4. additionally, if no injected conversions are on-going, HAL_ADC_STATE_READY
          can be set */
  if ((tmp_eos_raised)
      && (ADC_IS_SOFTWARE_START_REGULAR(hadc))
      && (READ_BIT (tmp_cfgr, ADC_CFGR_CONT) == RESET))
  {
    CLEAR_BIT(hadc->State, HAL_ADC_STATE_REG_BUSY);
    /* If no injected conversion on-going, set HAL_ADC_STATE_READY bit */
    if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_INJ_BUSY))
    {
      SET_BIT(hadc->State, HAL_ADC_STATE_READY);
    }
  }


  /* Return function status */
  return HAL_OK;
}

/**
  * @brief  Poll for ADC event.
  * @param  hadc: ADC handle
  * @param  EventType: the ADC event type.
  *          This parameter can be one of the following values:
  *            @arg @ref ADC_EOSMP_EVENT  ADC End of Sampling event
  *            @arg @ref ADC_AWD1_EVENT   ADC Analog watchdog 1 event (main analog watchdog, present on all STM32 devices)
  *            @arg @ref ADC_AWD2_EVENT   ADC Analog watchdog 2 event (additional analog watchdog, not present on all STM32 families)
  *            @arg @ref ADC_AWD3_EVENT   ADC Analog watchdog 3 event (additional analog watchdog, not present on all STM32 families)
  *            @arg @ref ADC_OVR_EVENT    ADC Overrun event
  *            @arg @ref ADC_JQOVF_EVENT  ADC Injected context queue overflow event
  * @param  Timeout: Timeout value in millisecond.
  * @note   The relevant flag is cleared if found to be set, except for ADC_FLAG_OVR.
  *         Indeed, the latter is reset only if hadc->Init.Overrun field is set
  *         to ADC_OVR_DATA_OVERWRITTEN. Otherwise, DR may be potentially overwritten
  *         by a new converted data as soon as OVR is cleared.
  *         To reset OVR flag once the preserved data is retrieved, the user can resort
  *         to macro __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_OVR);
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_PollForEvent(ADC_HandleTypeDef* hadc, uint32_t EventType, uint32_t Timeout)
{
  uint32_t tickstart = 0;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));
  assert_param(IS_ADC_EVENT_TYPE(EventType));

  /* Get tick count */
  tickstart = HAL_GetTick();

  /* Check selected event flag */
  while(__HAL_ADC_GET_FLAG(hadc, EventType) == RESET)
  {
    /* Check if timeout is disabled (set to infinite wait) */
    if(Timeout != HAL_MAX_DELAY)
    {
      if((Timeout == 0) || ((HAL_GetTick()-tickstart) > Timeout))
      {
        /* Update ADC state machine to timeout */
        SET_BIT(hadc->State, HAL_ADC_STATE_TIMEOUT);

        /* Process unlocked */
        __HAL_UNLOCK(hadc);

        return HAL_TIMEOUT;
      }
    }
  }


  switch(EventType)
  {
    /* End Of Sampling event */
    case ADC_EOSMP_EVENT:
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_REG_EOSMP);
  
      /* Clear the End Of Sampling flag */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_EOSMP);
  
      break;
  
    /* Analog watchdog (level out of window) event                              */
    /* Note: In case of several analog watchdog enabled, if needed to know      */
    /* which one triggered and on which ADCx, test ADC state of Analog Watchdog */
    /* flags HAL_ADC_STATE_AWD/2/3 function.                                    */
    /* For example: "if (HAL_ADC_GetState(hadc1) == HAL_ADC_STATE_AWD) "        */
    /*              "if (HAL_ADC_GetState(hadc1) == HAL_ADC_STATE_AWD2)"        */
    /*              "if (HAL_ADC_GetState(hadc1) == HAL_ADC_STATE_AWD3)"        */
    case ADC_AWD_EVENT:
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_AWD1);
  
      /* Clear ADC analog watchdog flag */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_AWD1);
  
      break;
  
    /* Check analog watchdog 2 flag */
    case ADC_AWD2_EVENT:
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_AWD2);
  
      /* Clear ADC analog watchdog flag */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_AWD2);
  
      break;
  
    /* Check analog watchdog 3 flag */
    case ADC_AWD3_EVENT:
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_AWD3);
  
      /* Clear ADC analog watchdog flag */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_AWD3);
  
      break;
  
    /* Injected context queue overflow event */
    case ADC_JQOVF_EVENT:
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_INJ_JQOVF);
  
      /* Set ADC error code to Injected context queue overflow */
      SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_JQOVF);
  
      /* Clear ADC Injected context queue overflow flag */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_JQOVF);
  
      break;
  
    /* Overrun event */
    default: /* Case ADC_OVR_EVENT */
      /* If overrun is set to overwrite previous data, overrun event is not     */
      /* considered as an error.                                                */
      /* (cf ref manual "Managing conversions without using the DMA and without */
      /* overrun ")                                                             */
      if (hadc->Init.Overrun == ADC_OVR_DATA_PRESERVED)
      {
        /* Set ADC state */
        SET_BIT(hadc->State, HAL_ADC_STATE_REG_OVR);
  
        /* Set ADC error code to overrun */
        SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_OVR);
      }
      else
      {
        /* Clear ADC Overrun flag only if Overrun is set to ADC_OVR_DATA_OVERWRITTEN
           otherwise, data register  is potentially overwritten by new converted data as soon
           as OVR is cleared. */
        __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_OVR);
      }
      break;
  }

  /* Return function status */
  return HAL_OK;
}


/**
* @brief  Enable ADC, start conversion of regular group with interruption.
  * @note   Interruptions enabled in this function according to initialization
  *         setting : EOC (end of conversion), EOS (end of sequence),
  *         OVR overrun.
  *         Each of these interruptions has its dedicated callback function.
  * @note   Case of multimode enabled(when multimode feature is available):
  *         HAL_ADC_Start_IT() must be called for ADC Slave first, then for
  *         ADC Master.
  *         For ADC Slave, ADC is enabled only (conversion is not started).
  *         For ADC Master, ADC is enabled and multimode conversion is started.
  * @note   To guarantee a proper reset of all interruptions once all the needed
  *         conversions are obtained, HAL_ADC_Stop_IT() must be called to ensure
  *         a correct stop of the IT-based conversions.
  * @note   By default, HAL_ADC_Start_IT() doesn't enable the End Of Sampling
  *         interruption. If required (e.g. in case of oversampling with trigger
  *         mode), the user must
  *         1. first clear the EOSMP flag if set with macro __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_EOSMP);
  *         2. then enable the EOSMP interrupt with macro __HAL_ADC_ENABLE_IT(hadc, ADC_IT_EOSMP);
  *         before calling HAL_ADC_Start_IT().
  * @param  hadc: ADC handle
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_Start_IT(ADC_HandleTypeDef* hadc)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;
  ADC_TypeDef        *tmpADC_Master;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Perform ADC enable and conversion start if no conversion is on going */
  if (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)
  {
    /* Process locked */
    __HAL_LOCK(hadc);

    /* Enable the ADC peripheral */
    tmp_hal_status = ADC_Enable(hadc);

    /* Start conversion if ADC is effectively enabled */
    if (tmp_hal_status == HAL_OK)
    {
      /* State machine update: Check if an injected conversion is ongoing */
      if (HAL_IS_BIT_SET(hadc->State, HAL_ADC_STATE_INJ_BUSY))
      {
        /* Reset ADC error code fields related to regular conversions only */
        CLEAR_BIT(hadc->ErrorCode, (HAL_ADC_ERROR_OVR|HAL_ADC_ERROR_DMA));
      }
      else
      {
        /* Set ADC error code to none */
        ADC_CLEAR_ERRORCODE(hadc);
      }
      /* Clear HAL_ADC_STATE_READY and regular conversion results bits, set HAL_ADC_STATE_REG_BUSY bit */
      ADC_STATE_CLR_SET(hadc->State, (HAL_ADC_STATE_READY|HAL_ADC_STATE_REG_EOC|HAL_ADC_STATE_REG_OVR|HAL_ADC_STATE_REG_EOSMP), HAL_ADC_STATE_REG_BUSY);

      /* Reset HAL_ADC_STATE_MULTIMODE_SLAVE bit
        - by default if ADC is Master or Independent or if multimode feature is not available
        - if MultiMode setting is set to independent mode (no dual regular or injected conversions are configured) */
      if (ADC12_NONMULTIMODE_OR_MULTIMODEMASTER(hadc))
      {
        CLEAR_BIT(hadc->State, HAL_ADC_STATE_MULTIMODE_SLAVE);
      }

      /* Clear regular group conversion flag and overrun flag */
      /* (To ensure of no unknown state from potential previous ADC operations) */
      __HAL_ADC_CLEAR_FLAG(hadc, (ADC_FLAG_EOC | ADC_FLAG_EOS | ADC_FLAG_OVR));

      /* By default, disable all interruptions before enabling the desired ones */
      __HAL_ADC_DISABLE_IT(hadc, (ADC_IT_EOC | ADC_IT_EOS | ADC_IT_OVR));

      /* Enable required interruptions */
      switch(hadc->Init.EOCSelection)
      {
        case ADC_EOC_SEQ_CONV:
           __HAL_ADC_ENABLE_IT(hadc, ADC_IT_EOS);
          break;
        /* case ADC_EOC_SINGLE_CONV */
        default:
          __HAL_ADC_ENABLE_IT(hadc, ADC_IT_EOC);
          break;
      }

      /* If hadc->Init.Overrun is set to ADC_OVR_DATA_PRESERVED, only then is
         ADC_IT_OVR enabled; otherwise data overwrite is considered as normal
         behavior and no CPU time is lost for a non-processed interruption */
      if (hadc->Init.Overrun == ADC_OVR_DATA_PRESERVED)
      {
        __HAL_ADC_ENABLE_IT(hadc, ADC_IT_OVR);
      }

      /* Enable conversion of regular group.                                  */
      /* If software start has been selected, conversion starts immediately.  */
      /* If external trigger has been selected, conversion starts at next     */
      /* trigger event.                                                       */
      /* Case of multimode enabled (when multimode feature is available):     */
      /*  - if ADC is slave and dual regular conversions are enabled, ADC is  */
      /*    enabled only (conversion is not started),                         */
      /*  - if ADC is master, ADC is enabled and conversion is started.       */
      if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc)   )
      {
        /* Multimode feature is not available or ADC Instance is Independent or Master,
           or is not Slave ADC with dual regular conversions enabled.
           Then set HAL_ADC_STATE_INJ_BUSY and reset HAL_ADC_STATE_INJ_EOC if JAUTO is set. */
        if (READ_BIT(hadc->Instance->CFGR, ADC_CFGR_JAUTO) != RESET)
        {
          ADC_STATE_CLR_SET(hadc->State, HAL_ADC_STATE_INJ_EOC, HAL_ADC_STATE_INJ_BUSY);

          /* Enable as well injected interruptions in case
           HAL_ADCEx_InjectedStart_IT() has not been called beforehand. This
           allows to start regular and injected conversions when JAUTO is
           set with a single call to HAL_ADC_Start_IT() */
          switch(hadc->Init.EOCSelection)
          {
            case ADC_EOC_SEQ_CONV:
              __HAL_ADC_DISABLE_IT(hadc, ADC_IT_JEOC);
              __HAL_ADC_ENABLE_IT(hadc, ADC_IT_JEOS);
              break;
            /* case ADC_EOC_SINGLE_CONV */
            default:
              __HAL_ADC_DISABLE_IT(hadc, ADC_IT_JEOS);
              __HAL_ADC_ENABLE_IT(hadc, ADC_IT_JEOC);
              break;
          }
        } /*  if (READ_BIT(hadc->Instance->CFGR, ADC_CFGR_JAUTO) != RESET) */
        /* Process unlocked */
        __HAL_UNLOCK(hadc);
        /* Start ADC */
        SET_BIT(hadc->Instance->CR, ADC_CR_ADSTART);
      }
      else
      {
        /* hadc is the handle of a Slave ADC with dual regular conversions
           enabled. Therefore, ADC_CR_ADSTART is NOT set */
        SET_BIT(hadc->State, HAL_ADC_STATE_MULTIMODE_SLAVE);
        /* if Master ADC JAUTO bit is set, Slave injected interruptions
           are enabled nevertheless (for same reason as above) */
        tmpADC_Master = ADC_MASTER_REGISTER(hadc);
        if (READ_BIT(tmpADC_Master->CFGR, ADC_CFGR_JAUTO) != RESET)
        {
          /* First, update Slave State in setting HAL_ADC_STATE_INJ_BUSY bit
             and in resetting HAL_ADC_STATE_INJ_EOC bit */
          ADC_STATE_CLR_SET(hadc->State, HAL_ADC_STATE_INJ_EOC, HAL_ADC_STATE_INJ_BUSY);
          /* Next, set Slave injected interruptions */
          switch(hadc->Init.EOCSelection)
          {
            case ADC_EOC_SEQ_CONV:
              __HAL_ADC_DISABLE_IT(hadc, ADC_IT_JEOC);
              __HAL_ADC_ENABLE_IT(hadc, ADC_IT_JEOS);
              break;
            /* case ADC_EOC_SINGLE_CONV */
            default:
              __HAL_ADC_DISABLE_IT(hadc, ADC_IT_JEOS);
              __HAL_ADC_ENABLE_IT(hadc, ADC_IT_JEOC);
              break;
          }
        }  /* if (READ_BIT(tmpADC_Master->CFGR, ADC_CFGR_JAUTO) != RESET) */
        /* Process unlocked */
        __HAL_UNLOCK(hadc);
      } /*  if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc)   ) */
    }  /*  if (tmp_hal_status == HAL_OK) */
    else
    {
      /* Process unlocked */
      __HAL_UNLOCK(hadc);
    }
  }
  else
  {
    tmp_hal_status = HAL_BUSY;
  }
  /* Return function status */
  return tmp_hal_status;
}

/**
  * @brief  Stop ADC conversion of regular group (and injected group in
  *         case of auto_injection mode), disable interrution of
  *         end-of-conversion, disable ADC peripheral.
  * @param  hadc: ADC handle
  * @retval HAL status.
  */
HAL_StatusTypeDef HAL_ADC_Stop_IT(ADC_HandleTypeDef* hadc)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Process locked */
  __HAL_LOCK(hadc);

  /* 1. Stop potential conversion on going, on ADC groups regular and injected */
  tmp_hal_status = ADC_ConversionStop(hadc, ADC_REGULAR_INJECTED_GROUP);

  /* Disable ADC peripheral if conversions are effectively stopped */
  if (tmp_hal_status == HAL_OK)
  {
    /* Disable ADC end of conversion interrupt for regular group */
    /* Disable ADC overrun interrupt */
    __HAL_ADC_DISABLE_IT(hadc, (ADC_IT_EOC | ADC_IT_EOS | ADC_IT_OVR));

    /* 2. Disable the ADC peripheral */
    tmp_hal_status = ADC_Disable(hadc);

    /* Check if ADC is effectively disabled */
    if (tmp_hal_status == HAL_OK)
    {
      /* Set ADC state */
      ADC_STATE_CLR_SET(hadc->State,
                        (HAL_ADC_STATE_REG_BUSY | HAL_ADC_STATE_INJ_BUSY),
                        HAL_ADC_STATE_READY);
    }
  }

  /* Process unlocked */
  __HAL_UNLOCK(hadc);

  /* Return function status */
  return tmp_hal_status;
}


/**
  * @brief  Enable ADC, start conversion of regular group and transfer result through DMA.
  * @note   Interruptions enabled in this function:
  *         overrun (if applicable), DMA half transfer, DMA transfer complete.
  *         Each of these interruptions has its dedicated callback function.
  * @note   Case of multimode enabled (when multimode feature is available): HAL_ADC_Start_DMA()
  *         is designed for single-ADC mode only. For multimode, the dedicated
  *         HAL_ADCEx_MultiModeStart_DMA() function must be used.
  * @param  hadc: ADC handle
  * @param  pData: Destination Buffer address.
  * @param  Length: Length of data to be transferred from ADC peripheral to memory (in bytes)
  * @retval HAL status.
  */
HAL_StatusTypeDef HAL_ADC_Start_DMA(ADC_HandleTypeDef* hadc, uint32_t* pData, uint32_t Length)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Perform ADC enable and conversion start if no conversion is on going */
  if (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)
  {
    /* Process locked */
    __HAL_LOCK(hadc);

    /* Ensure that dual regular conversions are not enabled or unavailable.   */
    /* Otherwise, dedicated API HAL_ADCEx_MultiModeStart_DMA() must be used.  */
    if (ADC_IS_DUAL_REGULAR_CONVERSION_ENABLE(hadc) == RESET)
    {
      /* Enable the ADC peripheral */
      tmp_hal_status = ADC_Enable(hadc);

      /* Start conversion if ADC is effectively enabled */
      if (tmp_hal_status == HAL_OK)
      {
        /* State machine update: Check if an injected conversion is ongoing */
        if (HAL_IS_BIT_SET(hadc->State, HAL_ADC_STATE_INJ_BUSY))
        {
          /* Reset ADC error code fields related to regular conversions only */
          CLEAR_BIT(hadc->ErrorCode, (HAL_ADC_ERROR_OVR | HAL_ADC_ERROR_DMA));
        }
        else
        {
          /* Set ADC error code to none */
          ADC_CLEAR_ERRORCODE(hadc);
        }
        /* Clear HAL_ADC_STATE_READY and regular conversion results bits, set HAL_ADC_STATE_REG_BUSY bit */
        ADC_STATE_CLR_SET(hadc->State,
                          (HAL_ADC_STATE_READY | HAL_ADC_STATE_REG_EOC | HAL_ADC_STATE_REG_OVR | HAL_ADC_STATE_REG_EOSMP),
                          HAL_ADC_STATE_REG_BUSY);

        /* Reset HAL_ADC_STATE_MULTIMODE_SLAVE bit
           - by default if ADC is Master or Independent or if multimode feature is not available
           - if multimode setting is set to independent mode (no dual regular or injected conversions are configured) */
        if (ADC12_NONMULTIMODE_OR_MULTIMODEMASTER(hadc))
        {
          CLEAR_BIT(hadc->State, HAL_ADC_STATE_MULTIMODE_SLAVE);
        }

        /* Set the DMA transfer complete callback */
        hadc->DMA_Handle->XferCpltCallback = ADC_DMAConvCplt;

        /* Set the DMA half transfer complete callback */
        hadc->DMA_Handle->XferHalfCpltCallback = ADC_DMAHalfConvCplt;

        /* Set the DMA error callback */
        hadc->DMA_Handle->XferErrorCallback = ADC_DMAError;


        /* Manage ADC and DMA start: ADC overrun interruption, DMA start,     */
        /* ADC start (in case of SW start):                                   */

        /* Clear regular group conversion flag and overrun flag               */
        /* (To ensure of no unknown state from potential previous ADC         */
        /* operations)                                                        */
        __HAL_ADC_CLEAR_FLAG(hadc, (ADC_FLAG_EOC | ADC_FLAG_EOS | ADC_FLAG_OVR));

        /* With DMA, overrun event is always considered as an error even if
           hadc->Init.Overrun is set to ADC_OVR_DATA_OVERWRITTEN. Therefore,
           ADC_IT_OVR is enabled.  */
        __HAL_ADC_ENABLE_IT(hadc, ADC_IT_OVR);

        /* Start the DMA channel */
        HAL_DMA_Start_IT(hadc->DMA_Handle, (uint32_t)&hadc->Instance->DR, (uint32_t)pData, Length);

        /* Enable conversion of regular group.                                  */
        /* Process unlocked */
        __HAL_UNLOCK(hadc);
        /* If software start has been selected, conversion starts immediately.  */
        /* If external trigger has been selected, conversion will start at next */
        /* trigger event.                                                       */
        SET_BIT(hadc->Instance->CR, ADC_CR_ADSTART);
      }
      else
      {
        /* Process unlocked */
        __HAL_UNLOCK(hadc);
      }  /* if (tmp_hal_status == HAL_OK) */
    }
    else
    {
      tmp_hal_status = HAL_ERROR;
      /* Process unlocked */
      __HAL_UNLOCK(hadc);
    } /* if (ADC_IS_DUAL_REGULAR_CONVERSION_ENABLE(hadc) == RESET) */

  }
  else
  {
    tmp_hal_status = HAL_BUSY;
  }

  /* Return function status */
  return tmp_hal_status;
}


/**
  * @brief  Stop ADC conversion of regular group (and injected group in
  *         case of auto_injection mode), disable ADC DMA transfer, disable
  *         ADC peripheral.
  * @note   ADC peripheral disable is forcing stop of potential
  *         conversion on injected group. If injected group is under use, it
  *         should be preliminarily stopped using HAL_ADCEx_InjectedStop function.
  * @note   Case of multimode enabled (when multimode feature is available):
  *         HAL_ADC_Stop_DMA() function is dedicated to single-ADC mode only.
  *         For multimode, the dedicated HAL_ADCEx_MultiModeStop_DMA() API must be used.
  * @param  hadc: ADC handle
  * @retval HAL status.
  */
HAL_StatusTypeDef HAL_ADC_Stop_DMA(ADC_HandleTypeDef* hadc)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Process locked */
  __HAL_LOCK(hadc);

  /* 1. Stop potential ADC group regular conversion on going */
  tmp_hal_status = ADC_ConversionStop(hadc, ADC_REGULAR_INJECTED_GROUP);

  /* Disable ADC peripheral if conversions are effectively stopped */
  if (tmp_hal_status == HAL_OK)
  {
    /* Disable ADC DMA (ADC DMA configuration ADC_CFGR_DMNGT is kept) */
    MODIFY_REG(hadc->Instance->CFGR, ADC_CFGR_DMNGT_0 |ADC_CFGR_DMNGT_1, 0);

    /* Disable the DMA channel (in case of DMA in circular mode or stop while */
    /* while DMA transfer is on going)                                        */
    tmp_hal_status = HAL_DMA_Abort(hadc->DMA_Handle);

    /* Check if DMA channel effectively disabled */
    if (tmp_hal_status != HAL_OK)
    {
      /* Update ADC state machine to error */
      SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);
    }

    /* Disable ADC overrun interrupt */
    __HAL_ADC_DISABLE_IT(hadc, ADC_IT_OVR);

    /* 2. Disable the ADC peripheral */
    /* Update "tmp_hal_status" only if DMA channel disabling passed, to keep in */
    /* memory a potential failing status.                                     */
    if (tmp_hal_status == HAL_OK)
    {
      tmp_hal_status = ADC_Disable(hadc);
    }
    else
    {
      ADC_Disable(hadc);
    }

    /* Check if ADC is effectively disabled */
    if (tmp_hal_status == HAL_OK)
    {
      /* Set ADC state */
      ADC_STATE_CLR_SET(hadc->State,
                        (HAL_ADC_STATE_REG_BUSY | HAL_ADC_STATE_INJ_BUSY),
                        HAL_ADC_STATE_READY);
    }

  }

  /* Process unlocked */
  __HAL_UNLOCK(hadc);

  /* Return function status */
  return tmp_hal_status;
}


/**
  * @brief  Get ADC regular group conversion result.
  * @note   Reading register DR automatically clears ADC flag EOC
  *         (ADC group regular end of unitary conversion).
  * @note   This function does not clear ADC flag EOS
  *         (ADC group regular end of sequence conversion).
  *         Occurrence of flag EOS rising:
  *          - If sequencer is composed of 1 rank, flag EOS is equivalent
  *            to flag EOC.
  *          - If sequencer is composed of several ranks, during the scan
  *            sequence flag EOC only is raised, at the end of the scan sequence
  *            both flags EOC and EOS are raised.
  *         To clear this flag, either use function:
  *         in programming model IT: @ref HAL_ADC_IRQHandler(), in programming
  *         model polling: @ref HAL_ADC_PollForConversion()
  *         or @ref __HAL_ADC_CLEAR_FLAG(&hadc, ADC_FLAG_EOS).
  * @param  hadc: ADC handle
  * @retval ADC group regular conversion data
  */
uint32_t HAL_ADC_GetValue(ADC_HandleTypeDef* hadc)
{
  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Note: EOC flag is not cleared here by software because automatically     */
  /*       cleared by hardware when reading register DR.                      */

  /* Return ADC converted value */
  return hadc->Instance->DR;
}


/**
  * @brief  Handle ADC interrupt request.
  * @param  hadc: ADC handle
  * @retval None
  */
void HAL_ADC_IRQHandler(ADC_HandleTypeDef* hadc)
{
  uint32_t overrun_error = 0; /* flag set if overrun occurrence has to be considered as an error */
  ADC_Common_TypeDef *tmpADC_Common;
  ADC_TypeDef        *tmpADC_Master;
  uint32_t tmp_isr      = hadc->Instance->ISR;
  uint32_t tmp_ier      = hadc->Instance->IER;
  uint32_t tmp_cfgr     = 0x0;
  uint32_t tmp_cfgr_jqm = 0x0;


  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));
  assert_param(IS_ADC_EOC_SELECTION(hadc->Init.EOCSelection));


  /* ====== Check End of Sampling flag for regular group ===== */
  if (((tmp_isr & ADC_FLAG_EOSMP) == ADC_FLAG_EOSMP) && ((tmp_ier & ADC_IT_EOSMP) == ADC_IT_EOSMP))
  {
    /* Update state machine on end of sampling status if not in error state */
    if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL))
    {
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_REG_EOSMP);
    }

    /* End Of Sampling callback */
    HAL_ADCEx_EndOfSamplingCallback(hadc);

    /* Clear regular group conversion flag */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_EOSMP );
  }

  /* ====== Check End of Conversion or Sequence flags for regular group ===== */
  if( (((tmp_isr & ADC_FLAG_EOC) == ADC_FLAG_EOC) && ((tmp_ier & ADC_IT_EOC) == ADC_IT_EOC)) ||
      (((tmp_isr & ADC_FLAG_EOS) == ADC_FLAG_EOS) && ((tmp_ier & ADC_IT_EOS) == ADC_IT_EOS))  )
  {
    /* Update state machine on conversion status if not in error state */
    if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL))
    {
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_REG_EOC);
    }

    /* Disable interruption if no further conversion upcoming by regular      */
    /* external trigger or by continuous mode,                                */
    /* and if scan sequence if completed.                                     */
    if(ADC_IS_SOFTWARE_START_REGULAR(hadc))
    {
      if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc))
      {
        /* check CONT bit directly in handle ADC CFGR register */
        tmp_cfgr = READ_REG(hadc->Instance->CFGR);
      }
      else
      {
        /* else need to check Master ADC CONT bit */
        tmpADC_Master = ADC_MASTER_REGISTER(hadc);
        tmp_cfgr = READ_REG(tmpADC_Master->CFGR);
      }

      /* Carry on if continuous mode is disabled */
      if (READ_BIT (tmp_cfgr, ADC_CFGR_CONT) != ADC_CFGR_CONT)
      {
        /* If End of Sequence is reached, disable interrupts */
        if( __HAL_ADC_GET_FLAG(hadc, ADC_FLAG_EOS) )
        {
          /* Allowed to modify bits ADC_IT_EOC/ADC_IT_EOS only if bit           */
          /* ADSTART==0 (no conversion on going)                                */
          if (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)
          {
            /* Disable ADC end of sequence conversion interrupt */
            /* Note: if Overrun interrupt was enabled with EOC or EOS interrupt */
            /* in HAL_Start_IT(), it isn't disabled here because it can be used */
            /* by overrun IRQ process below.                                    */
            __HAL_ADC_DISABLE_IT(hadc, ADC_IT_EOC | ADC_IT_EOS);
            /* Clear HAL_ADC_STATE_REG_BUSY bit */
            CLEAR_BIT(hadc->State, HAL_ADC_STATE_REG_BUSY);
            /* If no injected conversion on-going, set HAL_ADC_STATE_READY bit */
            if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_INJ_BUSY))
            {
              SET_BIT(hadc->State, HAL_ADC_STATE_READY);
            }
          }
          else
          {
            /* Change ADC state to error state */
            SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

            /* Set ADC error code to ADC IP internal error */
            SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);
          }
        }
      } /* if (READ_BIT (tmp_cfgr, ADC_CFGR_CONT) != ADC_CFGR_CONT) */
    } /* if(ADC_IS_SOFTWARE_START_REGULAR(hadc)                   */

    /* Conversion complete callback */
    /* Note:  HAL_ADC_ConvCpltCallback can resort to
              if( __HAL_ADC_GET_FLAG(&hadc, ADC_FLAG_EOS)) or
              if( __HAL_ADC_GET_FLAG(&hadc, ADC_FLAG_EOC)) to determine whether
              interruption has been triggered by end of conversion or end of
              sequence.    */
    HAL_ADC_ConvCpltCallback(hadc);


    /* Clear regular group conversion flag */
    __HAL_ADC_CLEAR_FLAG(hadc, (ADC_FLAG_EOC | ADC_FLAG_EOS) );
  }


  /* ========== Check End of Conversion flag for injected group ========== */
  if( (((tmp_isr & ADC_FLAG_JEOC) == ADC_FLAG_JEOC) && ((tmp_ier & ADC_IT_JEOC) == ADC_IT_JEOC)) ||
      (((tmp_isr & ADC_FLAG_JEOS) == ADC_FLAG_JEOS) && ((tmp_ier & ADC_IT_JEOS) == ADC_IT_JEOS))  )
  {
    /* Update state machine on conversion status if not in error state */
    if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL))
    {
      /* Set ADC state */
      SET_BIT(hadc->State, HAL_ADC_STATE_INJ_EOC);
    }


    /* Check whether interruptions can be disabled only if
        - injected conversions are software-triggered when injected queue management is disabled
        OR
        - auto-injection is enabled, continuous mode is disabled (CONT = 0)
          and regular conversions are software-triggered */
          /* If End of Sequence is reached, disable interrupts */
    if( __HAL_ADC_GET_FLAG(hadc, ADC_FLAG_JEOS))
    {

      /* First, retrieve proper registers to check */
      /* 1a. Are injected conversions that of a dual Slave ? */
      if (ADC_INDEPENDENT_OR_NONMULTIMODEINJECTED_SLAVE(hadc))
      {
        /* hadc is not the handle of a Slave ADC with dual injected conversions enabled:
           check JQM bit directly in ADC CFGR register */
        tmp_cfgr_jqm = READ_REG(hadc->Instance->CFGR);
      }
      else
      {
        /* hadc is the handle of a Slave ADC with dual injected conversions enabled:
           need to check JQM bit of Master ADC CFGR register */
        tmpADC_Master = ADC_MASTER_REGISTER(hadc);
        tmp_cfgr_jqm = READ_REG(tmpADC_Master->CFGR);
      }
      /* 1b. Is hadc the handle of a Slave ADC with regular conversions enabled? */
      if (ADC_INDEPENDENT_OR_NONMULTIMODEREGULAR_SLAVE(hadc))
      {
        /* hadc is not the handle of a Slave ADC with dual regular conversions enabled:
           check JAUTO and CONT bits directly in ADC CFGR register */
        tmp_cfgr = READ_REG(hadc->Instance->CFGR);
      }
      else
      {
        /* hadc is not the handle of a Slave ADC with dual regular conversions enabled:
           check JAUTO and CONT bits of Master ADC CFGR register */
        tmpADC_Master = ADC_MASTER_REGISTER(hadc);
        tmp_cfgr = READ_REG(tmpADC_Master->CFGR);
      }

      /* Secondly, check whether JEOC and JEOS interruptions can be disabled */
      if ((ADC_IS_SOFTWARE_START_INJECTED(hadc) && (READ_BIT(tmp_cfgr_jqm, ADC_CFGR_JQM) != ADC_CFGR_JQM))
           && (!((READ_BIT(tmp_cfgr, (ADC_CFGR_JAUTO|ADC_CFGR_CONT)) == (ADC_CFGR_JAUTO|ADC_CFGR_CONT)) &&
             (ADC_IS_SOFTWARE_START_REGULAR(hadc))))    )
      {
        /* Allowed to modify bits ADC_IT_JEOC/ADC_IT_JEOS only if bit         */
        /* JADSTART==0 (no conversion on going)                               */
        if (ADC_IS_CONVERSION_ONGOING_INJECTED(hadc) == RESET)
        {
          /* Disable ADC end of sequence conversion interrupt  */
          __HAL_ADC_DISABLE_IT(hadc, ADC_IT_JEOC | ADC_IT_JEOS);
          /* Clear HAL_ADC_STATE_INJ_BUSY bit */
          CLEAR_BIT(hadc->State, HAL_ADC_STATE_INJ_BUSY);
          /* If no regular conversion on-going, set HAL_ADC_STATE_READY bit */
          if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_REG_BUSY))
          {
            SET_BIT(hadc->State, HAL_ADC_STATE_READY);
          }
        }
        else
        {
          /* Change ADC state to error state */
          SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

          /* Set ADC error code to ADC IP internal error */
          SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);
        }
      }
    } /* if( __HAL_ADC_GET_FLAG(hadc, ADC_FLAG_JEOS)) */

    /* Injected Conversion complete callback */
    /* Note:  HAL_ADCEx_InjectedConvCpltCallback can resort to
              if( __HAL_ADC_GET_FLAG(&hadc, ADC_FLAG_JEOS)) or
              if( __HAL_ADC_GET_FLAG(&hadc, ADC_FLAG_JEOC)) to determine whether
              interruption has been triggered by end of conversion or end of
              sequence.    */
    HAL_ADCEx_InjectedConvCpltCallback(hadc);

    /* Clear injected group conversion flag */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_JEOC | ADC_FLAG_JEOS);
  }


  /* ========== Check Analog watchdog flag =================================================== */

  /* ========== Check Analog watchdog 1 flag ========== */
  if (((tmp_isr & ADC_FLAG_AWD1) == ADC_FLAG_AWD1) && ((tmp_ier & ADC_IT_AWD1) == ADC_IT_AWD1))
  {
    /* Set ADC state */
    SET_BIT(hadc->State, HAL_ADC_STATE_AWD1);

    /* Level out of window 1 callback */
    HAL_ADC_LevelOutOfWindowCallback(hadc);
    /* Clear ADC Analog watchdog flag */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_AWD1);
  }

  /* ========== Check Analog watchdog 2 flag ========== */
  if (((tmp_isr & ADC_FLAG_AWD2) == ADC_FLAG_AWD2) && ((tmp_ier & ADC_IT_AWD2) == ADC_IT_AWD2))
  {
    /* Set ADC state */
    SET_BIT(hadc->State, HAL_ADC_STATE_AWD2);

    /* Level out of window 2 callback */
    HAL_ADCEx_LevelOutOfWindow2Callback(hadc);
    /* Clear ADC Analog watchdog flag */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_AWD2);
  }

  /* ========== Check Analog watchdog 3 flag ========== */
  if (((tmp_isr & ADC_FLAG_AWD3) == ADC_FLAG_AWD3) && ((tmp_ier & ADC_IT_AWD3) == ADC_IT_AWD3))
  {
    /* Set ADC state */
    SET_BIT(hadc->State, HAL_ADC_STATE_AWD3);

    /* Level out of window 3 callback */
    HAL_ADCEx_LevelOutOfWindow3Callback(hadc);
    /* Clear ADC Analog watchdog flag */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_AWD3);
  }


  /* ========== Check Overrun flag ========== */
  if (((tmp_isr & ADC_FLAG_OVR) == ADC_FLAG_OVR) && ((tmp_ier & ADC_IT_OVR) == ADC_IT_OVR))
  {
    /* If overrun is set to overwrite previous data (default setting),        */
    /* overrun event is not considered as an error.                           */
    /* (cf ref manual "Managing conversions without using the DMA and without */
    /* overrun ")                                                             */
    /* Exception for usage with DMA overrun event always considered as an     */
    /* error.                                                                 */

    if (hadc->Init.Overrun == ADC_OVR_DATA_PRESERVED)
    {
      overrun_error = 1;
    }
    else
    {
      /* Pointer to the common control register */
      if((hadc->Instance == ADC1) || (hadc->Instance == ADC2))
      {
        /* Pointer to the common control register                                 */
        tmpADC_Common = ADC12_COMMON_REGISTER(hadc);
      }
      else
      {
        /* Pointer to the common control register                                 */
        tmpADC_Common = ADC3_COMMON_REGISTER(hadc);
      }
      /* check DMA configuration, depending on MultiMode set or not */
      if (READ_BIT(tmpADC_Common->CCR, ADC_CCR_DUAL) == ADC_MODE_INDEPENDENT)
      {
        if (HAL_IS_BIT_SET(hadc->Instance->CFGR, ADC_CFGR_DMNGT_0))
        {
          overrun_error = 1;
        }
      }
      else
      {
        /* MultiMode is enabled, Common Control Register DAMDF bits must be checked */
        if (READ_BIT(tmpADC_Common->CCR, ADC_CCR_DAMDF) != RESET)
        {
          overrun_error = 1;
        }
      }
    }

    if (overrun_error == 1)
    {
      /* Change ADC state to error state */
      SET_BIT(hadc->State, HAL_ADC_STATE_REG_OVR);

      /* Set ADC error code to overrun */
      SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_OVR);

      /* Error callback */
      HAL_ADC_ErrorCallback(hadc);
    }

    /* Clear the Overrun flag, to be done AFTER HAL_ADC_ErrorCallback() since
       old data is preserved until OVR is reset */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_OVR);

  }

  /* ========== Check Injected context queue overflow flag ========== */
  if (((tmp_isr & ADC_FLAG_JQOVF) == ADC_FLAG_JQOVF) && ((tmp_ier & ADC_IT_JQOVF) == ADC_IT_JQOVF))
  {
    /* Change ADC state to overrun state */
    SET_BIT(hadc->State, HAL_ADC_STATE_INJ_JQOVF);

    /* Set ADC error code to Injected context queue overflow */
    SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_JQOVF);

    /* Clear the Injected context queue overflow flag */
    __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_JQOVF);

    /* Error callback */
    HAL_ADCEx_InjectedQueueOverflowCallback(hadc);
  }

}

/**
  * @brief  Conversion complete callback in non-blocking mode
  * @param  hadc: ADC handle
  * @retval None
  */
__weak void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hadc);

  /* NOTE : This function should not be modified. When the callback is needed,
            function HAL_ADC_ConvCpltCallback must be implemented in the user file.
   */
}

/**
  * @brief  Conversion DMA half-transfer callback in non-blocking mode
  * @param  hadc: ADC handle
  * @retval None
  */
__weak void HAL_ADC_ConvHalfCpltCallback(ADC_HandleTypeDef* hadc)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hadc);

  /* NOTE : This function should not be modified. When the callback is needed,
            function HAL_ADC_ConvHalfCpltCallback must be implemented in the user file.
  */
}

/**
  * @brief  Analog watchdog 1 callback in non-blocking mode.
  * @param  hadc: ADC handle
  * @retval None
  */
__weak void HAL_ADC_LevelOutOfWindowCallback(ADC_HandleTypeDef* hadc)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hadc);

  /* NOTE : This function should not be modified. When the callback is needed,
            function HAL_ADC_LevelOutOfWindowCallback must be implemented in the user file.
  */
}

/**
  * @brief  ADC error callback in non-blocking mode
  *         (ADC conversion with interruption or transfer by DMA).
  * @note   In case of error due to overrun when using ADC with DMA transfer
  *         (HAL ADC handle paramater "ErrorCode" to state "HAL_ADC_ERROR_OVR"):
  *         - Reinitialize the DMA using function "HAL_ADC_Stop_DMA()".
  *         - If needed, restart a new ADC conversion using function
  *           "HAL_ADC_Start_DMA()"
  *           (this function is also clearing overrun flag)
  * @param  hadc: ADC handle
  * @retval None
  */
__weak void HAL_ADC_ErrorCallback(ADC_HandleTypeDef *hadc)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(hadc);

  /* NOTE : This function should not be modified. When the callback is needed,
            function HAL_ADC_ErrorCallback must be implemented in the user file.
  */
}

/**
  * @}
  */

/** @defgroup ADC_Exported_Functions_Group3 Peripheral Control functions
  * @brief    Peripheral Control functions
  *
@verbatim
 ===============================================================================
             ##### Peripheral Control functions #####
 ===============================================================================
    [..] This section provides functions allowing to:
      (+) Configure channels on regular group
      (+) Configure the analog watchdog

@endverbatim
  * @{
  */


/**
  * @brief  Configure a channel to be assigned to ADC group regular.
  * @note   In case of usage of internal measurement channels:
  *         Vbat/VrefInt/TempSensor.
  *         These internal paths can be disabled using function
  *         HAL_ADC_DeInit().
  * @note   Possibility to update parameters on the fly:
  *         This function initializes channel into ADC group regular,
  *         following calls to this function can be used to reconfigure
  *         some parameters of structure "ADC_ChannelConfTypeDef" on the fly,
  *         without resetting the ADC.
  *         The setting of these parameters is conditioned to ADC state:
  *         Refer to comments of structure "ADC_ChannelConfTypeDef".
  * @param  hadc: ADC handle
  * @param  sConfig: Structure of ADC channel assigned to ADC group regular.
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_ConfigChannel(ADC_HandleTypeDef* hadc, ADC_ChannelConfTypeDef* sConfig)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  ADC_Common_TypeDef *tmpADC_Common;
  uint32_t tmpOffsetShifted;
  __IO uint32_t wait_loop_index = 0;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));
  assert_param(IS_ADC_REGULAR_RANK(sConfig->Rank));
  assert_param(IS_ADC_SAMPLE_TIME(sConfig->SamplingTime));
  assert_param(IS_ADC_SINGLE_DIFFERENTIAL(sConfig->SingleDiff));
  assert_param(IS_ADC_OFFSET_NUMBER(sConfig->OffsetNumber));

  /* Check offset range according to oversampling setting */
  if (hadc->Init.OversamplingMode == ENABLE)
  {
    assert_param(IS_ADC_RANGE(ADC_GET_RESOLUTION(hadc), sConfig->Offset/(hadc->Init.Oversampling.Ratio+1U)));
  }
  else
  {
    assert_param(IS_ADC_RANGE(ADC_GET_RESOLUTION(hadc), sConfig->Offset));
  }

  /* Verification of channel number */
  if (sConfig->SingleDiff != ADC_DIFFERENTIAL_ENDED)
  {
     assert_param(IS_ADC_CHANNEL(sConfig->Channel));
  }
  else
  {
    if (hadc->Instance == ADC3)
    {
      assert_param(IS_ADC3_DIFF_CHANNEL(sConfig->Channel));
    }
    else if (hadc->Instance == ADC1)
    {
      assert_param(IS_ADC1_DIFF_CHANNEL(sConfig->Channel));
    }
    else
    {
      assert_param(IS_ADC2_DIFF_CHANNEL(sConfig->Channel));
    }
  }

  /* Process locked */
  __HAL_LOCK(hadc);


  /* Parameters update conditioned to ADC state:                              */
  /* Parameters that can be updated when ADC is disabled or enabled without   */
  /* conversion on going on regular group:                                    */
  /*  - Channel number                                                        */
  /*  - Channel rank                                                          */
  /*  - Preselection of ADC inputs                                            */
  if (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET)
  {
    /* ADC channels preselction */
    hadc->Instance->PCSEL |= (1U << sConfig->Channel);

    /* Regular sequence configuration */
    /* Clear the old SQx bits then set the new ones for the selected rank */
    /* For Rank 1 to 4 */
    if (sConfig->Rank < 5)
    {
      MODIFY_REG(hadc->Instance->SQR1,
                ADC_SQR1_RK(ADC_SQR2_SQ5, sConfig->Rank),
                ADC_SQR1_RK(sConfig->Channel, sConfig->Rank));
    }
    /* For Rank 5 to 9 */
    else if (sConfig->Rank < 10)
    {
      MODIFY_REG(hadc->Instance->SQR2,
                ADC_SQR2_RK(ADC_SQR2_SQ5, sConfig->Rank),
                ADC_SQR2_RK(sConfig->Channel, sConfig->Rank));
    }
    /* For Rank 10 to 14 */
    else if (sConfig->Rank < 15)
    {
      MODIFY_REG(hadc->Instance->SQR3,
                ADC_SQR3_RK(ADC_SQR3_SQ10, sConfig->Rank),
                ADC_SQR3_RK(sConfig->Channel, sConfig->Rank));
    }
    /* For Rank 15 to 16 */
    else
    {
      MODIFY_REG(hadc->Instance->SQR4,
                ADC_SQR4_RK(ADC_SQR4_SQ15, sConfig->Rank),
                ADC_SQR4_RK(sConfig->Channel, sConfig->Rank));
    }


    /* Parameters update conditioned to ADC state:                              */
    /* Parameters that can be updated when ADC is disabled or enabled without   */
    /* conversion on going on regular group:                                    */
    /*  - Channel sampling time                                                 */
    /*  - Channel offset                                                        */
    if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc) == RESET)
    {

      /* Channel sampling time configuration */
      /* Clear the old sample time then set the new one for the selected channel */
      /* For channels 10 to 18 */
      if (sConfig->Channel >= ADC_CHANNEL_10)
      {
        MODIFY_REG(hadc->Instance->SMPR2,
                  ADC_SMPR2(ADC_SMPR2_SMP10, sConfig->Channel),
                  ADC_SMPR2(sConfig->SamplingTime, sConfig->Channel));
      }
      else /* For channels 0 to 9 */
      {
        MODIFY_REG(hadc->Instance->SMPR1,
                  ADC_SMPR1(ADC_SMPR1_SMP0, sConfig->Channel),
                  ADC_SMPR1(sConfig->SamplingTime, sConfig->Channel));
      }


      /* Configure the offset: offset enable/disable, channel, offset value, Signed saturation feature */
     
      /* Shift the offset in function of the selected ADC resolution. */
      /* Offset has to be left-aligned on bit 15, the LSB (right bits) are set to 0 */
      tmpOffsetShifted = ADC_OFFSET_SHIFT_RESOLUTION(hadc, sConfig->Offset);
     
      switch (sConfig->OffsetNumber)
      {
         /* Configure offset register i when applicable:                         */
         /* - Enable offset                                                      */
         /* - Set channel number                                                 */
         /* - Set offset value                                                   */
         /* - Set Right shift after offset application                           */
        case ADC_OFFSET_1:
           MODIFY_REG(hadc->Instance->OFR1,
                   ADC_OFR_FIELDS,
                   ADC_OFR_CHANNEL(sConfig->Channel) | tmpOffsetShifted);
           MODIFY_REG(hadc->Instance->CFGR2, ADC_CFGR2_RSHIFT1, sConfig->OffsetRightShift);
           /* Enable or disable the signed saturation bit */
           if(sConfig->OffsetSignedSaturation != DISABLE)
           {
              SET_BIT(hadc->Instance->OFR1, ADC_OFR1_SSATE);
           }
           else
           {
             CLEAR_BIT(hadc->Instance->OFR1, ADC_OFR1_SSATE);
           }
          break;
        
        case ADC_OFFSET_2:
          MODIFY_REG(hadc->Instance->OFR2,
                   ADC_OFR_FIELDS,
                   ADC_OFR_CHANNEL(sConfig->Channel) | tmpOffsetShifted);
          MODIFY_REG(hadc->Instance->CFGR2, ADC_CFGR2_RSHIFT2, (sConfig->OffsetRightShift)<<1);
          /* Enable or disable the signed saturation bit */
           if(sConfig->OffsetSignedSaturation != DISABLE)
           {
              SET_BIT(hadc->Instance->OFR2, ADC_OFR2_SSATE);
           }
           else
           {
             CLEAR_BIT(hadc->Instance->OFR2, ADC_OFR2_SSATE);
           }
          break;
        
        case ADC_OFFSET_3:
          MODIFY_REG(hadc->Instance->OFR3,
                   ADC_OFR_FIELDS,
                   ADC_OFR_CHANNEL(sConfig->Channel) | tmpOffsetShifted);
          MODIFY_REG(hadc->Instance->CFGR2, ADC_CFGR2_RSHIFT3, (sConfig->OffsetRightShift)<<2);
          /* Enable or disable the signed saturation bit */
           if(sConfig->OffsetSignedSaturation != DISABLE)
           {
              SET_BIT(hadc->Instance->OFR3, ADC_OFR3_SSATE);
           }
           else
           {
             CLEAR_BIT(hadc->Instance->OFR3, ADC_OFR3_SSATE);
           }
          break;
        
        case ADC_OFFSET_4:
          MODIFY_REG(hadc->Instance->OFR4,
                   ADC_OFR_FIELDS,
                   ADC_OFR_CHANNEL(sConfig->Channel) | tmpOffsetShifted);
          MODIFY_REG(hadc->Instance->CFGR2, ADC_CFGR2_RSHIFT4, (sConfig->OffsetRightShift)<<3);
          /* Enable or disable the signed saturation bit */
          if(sConfig->OffsetSignedSaturation != DISABLE)
          {
            SET_BIT(hadc->Instance->OFR4, ADC_OFR4_SSATE);
          }
          else
          {
            CLEAR_BIT(hadc->Instance->OFR4, ADC_OFR4_SSATE);
          }
          break;
        
        /* Case ADC_OFFSET_NONE */
        default :
        /* Scan OFR1, OFR2, OFR3, OFR4 to check if the selected channel is enabled.
           If this is the case, offset OFRx is disabled since
           sConfig->OffsetNumber = ADC_OFFSET_NONE. */
          if (((hadc->Instance->OFR1) & ADC_OFR1_OFFSET1_CH) == ADC_OFR_CHANNEL(sConfig->Channel))
          {
            CLEAR_BIT(hadc->Instance->OFR1, ADC_OFR1_SSATE);
          }
          if (((hadc->Instance->OFR2) & ADC_OFR2_OFFSET2_CH) == ADC_OFR_CHANNEL(sConfig->Channel))
          {
            CLEAR_BIT(hadc->Instance->OFR2, ADC_OFR2_SSATE);
          }
          if (((hadc->Instance->OFR3) & ADC_OFR3_OFFSET3_CH) == ADC_OFR_CHANNEL(sConfig->Channel))
          {
            CLEAR_BIT(hadc->Instance->OFR3, ADC_OFR3_SSATE);
          }
          if (((hadc->Instance->OFR4) & ADC_OFR4_OFFSET4_CH) == ADC_OFR_CHANNEL(sConfig->Channel))
          {
            CLEAR_BIT(hadc->Instance->OFR4, ADC_OFR4_SSATE);
          }
          break;
      }  /*  switch (sConfig->OffsetNumber) */

    }  /* if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc) == RESET) */



    /* Parameters update conditioned to ADC state:                              */
    /* Parameters that can be updated only when ADC is disabled:                */
    /*  - Single or differential mode                                           */
    /*  - Internal measurement channels: Vbat/VrefInt/TempSensor                */
    if (ADC_IS_ENABLE(hadc) == RESET)
    {
      /* Configuration of differential mode */
      if (sConfig->SingleDiff != ADC_DIFFERENTIAL_ENDED)
      {
        /* Disable differential mode (default mode: single-ended) */
        CLEAR_BIT(hadc->Instance->DIFSEL, ADC_DIFSEL_CHANNEL(sConfig->Channel));
      }
      else
      {
        /* Enable differential mode */
        SET_BIT(hadc->Instance->DIFSEL, ADC_DIFSEL_CHANNEL(sConfig->Channel));
    
        /* Sampling time configuration of channel ADC_IN+1 (negative input)     */
        /* Clear the old sample time then set the new one for the selected      */
        /* channel.                                                             */
        /* For channels 9 to 15 (ADC1, ADC2) or to 11 (ADC3), SMPR2 register
           must be configured */
        if (sConfig->Channel >= ADC_CHANNEL_9)
        {
          MODIFY_REG(hadc->Instance->SMPR2,
                  ADC_SMPR2(ADC_SMPR2_SMP10, sConfig->Channel +1),
                  ADC_SMPR2(sConfig->SamplingTime, sConfig->Channel +1));
        }
        else /* For channels 0 to 8, SMPR1 must be configured */
        {
          MODIFY_REG(hadc->Instance->SMPR1,
              ADC_SMPR1(ADC_SMPR1_SMP0, sConfig->Channel +1),
               ADC_SMPR1(sConfig->SamplingTime, sConfig->Channel +1));
        }
      }
      /* Management of internal measurement channels: Vbat/VrefInt/TempSensor.  */
      /* If internal channel selected, enable dedicated internal buffers and    */
      /*  paths.                                                                */
      /* Note: these internal measurement paths can be disabled using           */
      /* HAL_ADC_DeInit().                                                      */
    
      /* Configuration of common ADC parameters                                 */
      if((hadc->Instance == ADC1) || (hadc->Instance == ADC2))
      {
        /* Pointer to the common control register                                 */
        tmpADC_Common = ADC12_COMMON_REGISTER(hadc);
      }
      else
      {
        /* Pointer to the common control register                                 */
        tmpADC_Common = ADC3_COMMON_REGISTER(hadc);
      }
    
      /* If the requested internal measurement path has already been enabled,   */
      /* bypass the configuration processing.                                   */
      if (( (sConfig->Channel == ADC_CHANNEL_TEMPSENSOR) &&
            (HAL_IS_BIT_CLR(tmpADC_Common->CCR, ADC_CCR_TSEN))            ) ||
          ( (sConfig->Channel == ADC_CHANNEL_VBAT_DIV4)       &&
            (HAL_IS_BIT_CLR(tmpADC_Common->CCR, ADC_CCR_VBATEN))          ) ||
          ( (sConfig->Channel == ADC_CHANNEL_VREFINT)    &&
            (HAL_IS_BIT_CLR(tmpADC_Common->CCR, ADC_CCR_VREFEN)))
         )
      {
        /* Configuration of common ADC parameters (continuation)                */
    
        /* Software is allowed to change common parameters only when all ADCs   */
        /* of the common group are disabled.                                    */
        if ((ADC_IS_ENABLE(hadc) == RESET)   &&
           (ADC_ANY_OTHER_ENABLED(hadc) == RESET) )
        {
          /* Enable Temperature sensor measurement path (channel 18)            */
          /* Note: Temp. sensor internal channels available on ADC3    */
          if ((sConfig->Channel == ADC_CHANNEL_TEMPSENSOR) && ((hadc->Instance == ADC3)))
          {
             SET_BIT(tmpADC_Common->CCR, ADC_CCR_TSEN);
    
            /* Wait loop initialization and execution */
            /* Note: Variable divided by 2 to compensate partially          */
            /*       CPU processing cycles.                                 */
            wait_loop_index = (ADC_TEMPSENSOR_DELAY_US * (SystemCoreClock / (1000000 * 2)));
            while(wait_loop_index != 0)
            {
              wait_loop_index--;
            }
          }
          /* If Channel 18 is selected, enable VBAT measurement path.           */
          /* Note: VBAT internal internal channels available on ADC1 and ADC3   */
          else if ((sConfig->Channel == ADC_CHANNEL_VBAT_DIV4) && ((hadc->Instance == ADC3)))
          {
            SET_BIT(tmpADC_Common->CCR, ADC_CCR_VBATEN);
          }
          /* If Channel 19 is selected, enable VREFINT measurement path          */
          /* Note: VBAT internal internal channels available on ADC1 only       */
          else if ((sConfig->Channel == ADC_CHANNEL_VREFINT) && (hadc->Instance == ADC3))
          {
            SET_BIT(tmpADC_Common->CCR, ADC_CCR_VREFEN);
          }
        }
        /* If the requested internal measurement path has already been          */
        /* enabled and other ADC of the common group are enabled, internal      */
        /* measurement paths cannot be enabled.                                 */
        else
        {
          /* Update ADC state machine to error */
          SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_CONFIG);
    
          tmp_hal_status = HAL_ERROR;
        }
      }
    
    } /* if (ADC_IS_ENABLE(hadc) == RESET) */

  } /* if (ADC_IS_CONVERSION_ONGOING_REGULAR(hadc) == RESET) */

  /* If a conversion is on going on regular group, no update on regular       */
  /* channel could be done on neither of the channel configuration structure  */
  /* parameters.                                                              */
  else
  {
    /* Update ADC state machine to error */
    SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_CONFIG);

    tmp_hal_status = HAL_ERROR;
  }

  /* Process unlocked */
  __HAL_UNLOCK(hadc);

  /* Return function status */
  return tmp_hal_status;
}


/**
  * @brief  Configure the analog watchdog.
  * @note   Possibility to update parameters on the fly:
  *         This function initializes the selected analog watchdog, successive
  *         calls to this function can be used to reconfigure some parameters
  *         of structure "ADC_AnalogWDGConfTypeDef" on the fly, without resetting
  *         the ADC.
  *         The setting of these parameters is conditioned to ADC state.
  *         For parameters constraints, see comments of structure
  *         "ADC_AnalogWDGConfTypeDef".
  * @note   Analog watchdog thresholds can be modified while ADC conversion
  *         is on going.
  *         In this case, some constraints must be taken into account:
  *         the programmed threshold values are effective from the next
  *         ADC EOC (end of unitary conversion).
  *         Considering that registers write delay may happen due to
  *         bus activity, this might cause an uncertainty on the
  *         effective timing of the new programmed threshold values.
  * @param  hadc: ADC handle
  * @param  AnalogWDGConfig: Structure of ADC analog watchdog configuration
  * @retval HAL status
  */
HAL_StatusTypeDef HAL_ADC_AnalogWDGConfig(ADC_HandleTypeDef* hadc, ADC_AnalogWDGConfTypeDef* AnalogWDGConfig)
{
  HAL_StatusTypeDef tmp_hal_status = HAL_OK;

  uint32_t tmpAWDHighThresholdShifted;
  uint32_t tmpAWDLowThresholdShifted;

  uint32_t tmpADCFlagAWD2orAWD3;
  uint32_t tmpADCITAWD2orAWD3;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));
  assert_param(IS_ADC_ANALOG_WATCHDOG_NUMBER(AnalogWDGConfig->WatchdogNumber));
  assert_param(IS_ADC_ANALOG_WATCHDOG_MODE(AnalogWDGConfig->WatchdogMode));
  assert_param(IS_FUNCTIONAL_STATE(AnalogWDGConfig->ITMode));

  if((AnalogWDGConfig->WatchdogMode == ADC_ANALOGWATCHDOG_SINGLE_REG)     ||
     (AnalogWDGConfig->WatchdogMode == ADC_ANALOGWATCHDOG_SINGLE_INJEC)   ||
     (AnalogWDGConfig->WatchdogMode == ADC_ANALOGWATCHDOG_SINGLE_REGINJEC)  )
  {
    assert_param(IS_ADC_CHANNEL(AnalogWDGConfig->Channel));
  }


  /* Verify if threshold is within the selected ADC resolution */
  /* Check threshold range according to oversampling setting */
  if (hadc->Init.OversamplingMode == ENABLE)
  {
    assert_param(IS_ADC_RANGE(ADC_GET_RESOLUTION(hadc), AnalogWDGConfig->HighThreshold/(hadc->Init.Oversampling.Ratio+1U)));
    assert_param(IS_ADC_RANGE(ADC_GET_RESOLUTION(hadc), AnalogWDGConfig->LowThreshold/(hadc->Init.Oversampling.Ratio+1U)));
  }
  else
  {
    assert_param(IS_ADC_RANGE(ADC_GET_RESOLUTION(hadc), AnalogWDGConfig->HighThreshold));
    assert_param(IS_ADC_RANGE(ADC_GET_RESOLUTION(hadc), AnalogWDGConfig->LowThreshold));
  }

  /* Process locked */
  __HAL_LOCK(hadc);

  /* Parameters update conditioned to ADC state:                              */
  /* Parameters that can be updated when ADC is disabled or enabled without   */
  /* conversion on going on regular and injected groups:                      */
  /*  - Analog watchdog channels                                              */
  /*  - Analog watchdog thresholds                                            */
  if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc) == RESET)
  {

    /* Analog watchdogs configuration */
    if(AnalogWDGConfig->WatchdogNumber == ADC_ANALOGWATCHDOG_1)
    {
      /* Configuration of analog watchdog:                                    */
      /*  - Set the analog watchdog enable mode: regular and/or injected      */
      /*    groups, one or overall group of channels.                         */
      /*  - Set the Analog watchdog channel (is not used if watchdog          */
      /*    mode "all channels": ADC_CFGR_AWD1SGL=0).                         */

      MODIFY_REG(hadc->Instance->CFGR,  ADC_CFGR_WD_FIELDS,
            AnalogWDGConfig->WatchdogMode | ADC_CFGR_SET_AWD1CH(AnalogWDGConfig->Channel) );

      /* Shift the offset with respect to the selected ADC resolution:        */
      /* Thresholds have to be left-aligned on bit 15, the LSB (right bits)   */
      /* are set to 0                                                         */
      tmpAWDHighThresholdShifted = ADC_AWD1THRESHOLD_SHIFT_RESOLUTION(hadc, AnalogWDGConfig->HighThreshold);
      tmpAWDLowThresholdShifted  = ADC_AWD1THRESHOLD_SHIFT_RESOLUTION(hadc, AnalogWDGConfig->LowThreshold);

     /* Set the high and low thresholds */
      MODIFY_REG(hadc->Instance->LTR1,  ADC_LTR2_LT2 , tmpAWDLowThresholdShifted);
      MODIFY_REG(hadc->Instance->HTR1,  ADC_HTR2_HT2 , tmpAWDHighThresholdShifted);

      /* Clear the ADC Analog watchdog flag (in case left enabled by          */
      /* previous ADC operations) to be ready to use for HAL_ADC_IRQHandler() */
      /* or HAL_ADC_PollForEvent().                                           */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_IT_AWD1);

      /* Configure ADC Analog watchdog interrupt */
      if(AnalogWDGConfig->ITMode == ENABLE)
      {
        /* Enable the ADC Analog watchdog interrupt */
        __HAL_ADC_ENABLE_IT(hadc, ADC_IT_AWD1);
      }
      else
      {
        /* Disable the ADC Analog watchdog interrupt */
        __HAL_ADC_DISABLE_IT(hadc, ADC_IT_AWD1);
      }

      /* Update state, clear previous result related to AWD1 */
      CLEAR_BIT(hadc->State, HAL_ADC_STATE_AWD1);
    }
    /* Case of ADC_ANALOGWATCHDOG_2 and ADC_ANALOGWATCHDOG_3 */
    else
    {
    /* Shift the threshold with respect to the selected ADC resolution         */
    /* have to be left-aligned on bit 15, the LSB (right bits) are set to 0    */
      tmpAWDHighThresholdShifted = ADC_AWD23THRESHOLD_SHIFT_RESOLUTION(hadc, AnalogWDGConfig->HighThreshold);
      tmpAWDLowThresholdShifted  = ADC_AWD23THRESHOLD_SHIFT_RESOLUTION(hadc, AnalogWDGConfig->LowThreshold);

      if (AnalogWDGConfig->WatchdogNumber == ADC_ANALOGWATCHDOG_2)
      {
        /* Set the Analog watchdog channel or group of channels. This also    */
        /* enables the watchdog.                                              */
        /* Note: Conditional register reset, because several channels can be  */
        /*       set by successive calls of this function.                    */
        if (AnalogWDGConfig->WatchdogMode != ADC_ANALOGWATCHDOG_NONE)
        {
          SET_BIT(hadc->Instance->AWD2CR, ADC_CFGR_SET_AWD23CR(AnalogWDGConfig->Channel));
        }
        else
        {
          CLEAR_BIT(hadc->Instance->AWD2CR,  ADC_AWD2CR_AWD2CH);
        }

        /* Set the high and low thresholds */
        MODIFY_REG(hadc->Instance->HTR2,  ADC_HTR2_HT2, tmpAWDHighThresholdShifted);
        MODIFY_REG(hadc->Instance->LTR2,  ADC_LTR2_LT2, tmpAWDLowThresholdShifted);


        /* Set temporary variable to flag and IT of AWD2 or AWD3 for further  */
        /* settings.                                                          */
        tmpADCFlagAWD2orAWD3 = ADC_FLAG_AWD2;
        tmpADCITAWD2orAWD3 = ADC_IT_AWD2;

        /* Update state, clear previous result related to AWD2 */
        CLEAR_BIT(hadc->State, HAL_ADC_STATE_AWD2);
      }
      /* (AnalogWDGConfig->WatchdogNumber == ADC_ANALOGWATCHDOG_3) */
      else
      {
        /* Set the Analog watchdog channel or group of channels. This also    */
        /* enables the watchdog.                                              */
        /* Note: Conditional register reset, because several channels can be  */
        /*       set by successive calls of this function.                    */
        if (AnalogWDGConfig->WatchdogMode != ADC_ANALOGWATCHDOG_NONE)
        {
          SET_BIT(hadc->Instance->AWD3CR, ADC_CFGR_SET_AWD23CR(AnalogWDGConfig->Channel));
        }
        else
        {
          CLEAR_BIT(hadc->Instance->AWD3CR,  ADC_AWD3CR_AWD3CH);
        }

        /* Set the high and low thresholds */
        MODIFY_REG(hadc->Instance->HTR3,  ADC_HTR3_HT3, tmpAWDHighThresholdShifted);
        MODIFY_REG(hadc->Instance->LTR3,  ADC_LTR3_LT3, tmpAWDLowThresholdShifted);
        /* Set temporary variable to flag and IT of AWD2 or AWD3 for further  */
        /* settings.                                                          */
        tmpADCFlagAWD2orAWD3 = ADC_FLAG_AWD3;
        tmpADCITAWD2orAWD3 = ADC_IT_AWD3;

        /* Update state, clear previous result related to AWD3 */
        CLEAR_BIT(hadc->State, HAL_ADC_STATE_AWD3);
      }

      /* Clear the ADC Analog watchdog flag (in case left enabled by          */
      /* previous ADC operations) to be ready to use for HAL_ADC_IRQHandler() */
      /* or HAL_ADC_PollForEvent().                                           */
      __HAL_ADC_CLEAR_FLAG(hadc, tmpADCFlagAWD2orAWD3);

      /* Configure ADC Analog watchdog interrupt */
      if(AnalogWDGConfig->ITMode == ENABLE)
      {
        __HAL_ADC_ENABLE_IT(hadc, tmpADCITAWD2orAWD3);
      }
      else
      {
        __HAL_ADC_DISABLE_IT(hadc, tmpADCITAWD2orAWD3);
      }
    }

  }
  /* If a conversion is on going on regular or injected groups, no update     */
  /* could be done on neither of the AWD configuration structure parameters.  */
  else
  {
    /* Update ADC state machine to error */
    SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_CONFIG);

    tmp_hal_status = HAL_ERROR;
  }


  /* Process unlocked */
  __HAL_UNLOCK(hadc);


  /* Return function status */
  return tmp_hal_status;
}


/**
  * @}
  */

/** @defgroup ADC_Exported_Functions_Group4 Peripheral State functions
  * @brief   ADC Peripheral State functions
  *
@verbatim
 ===============================================================================
            ##### Peripheral state and errors functions #####
 ===============================================================================
    [..] This subsection provides functions to get in run-time the status of the
    peripheral.
      (+) Check the ADC state
      (+) Check the ADC error code

@endverbatim
  * @{
  */

/**
  * @brief  Return the ADC handle state.
  * @note   ADC state machine is managed by bitfields, ADC status must be
  *         compared with states bits.
  *         For example:
  *           " if (HAL_IS_BIT_SET(HAL_ADC_GetState(hadc1), HAL_ADC_STATE_REG_BUSY)) "
  *           " if (HAL_IS_BIT_SET(HAL_ADC_GetState(hadc1), HAL_ADC_STATE_AWD1)    ) "
  * @param  hadc: ADC handle
  * @retval ADC handle state (bitfield on 32 bits)
  */
uint32_t HAL_ADC_GetState(ADC_HandleTypeDef* hadc)
{
  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  /* Return ADC Handle state */
  return hadc->State;
}


/**
  * @brief  Return the ADC error code.
  * @param  hadc: ADC handle
  * @retval ADC error code (bitfield on 32 bits)
  */
uint32_t HAL_ADC_GetError(ADC_HandleTypeDef *hadc)
{
  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));

  return hadc->ErrorCode;
}
/**
  * @}
  */

/**
  * @}
  */

/** @defgroup ADC_Private_Functions ADC Private Functions
  * @{
  */

/**
  * @brief  Stop ADC conversion.
  * @param  hadc: ADC handle
  * @param  ConversionGroup: ADC group regular and/or injected.
  *          This parameter can be one of the following values:
  *            @arg ADC_REGULAR_GROUP           ADC regular conversion type.
  *            @arg ADC_INJECTED_GROUP          ADC injected conversion type.
  *            @arg ADC_REGULAR_INJECTED_GROUP  ADC regular and injected conversion type.
  * @retval HAL status.
  */
HAL_StatusTypeDef ADC_ConversionStop(ADC_HandleTypeDef* hadc, uint32_t ConversionGroup)
{
  uint32_t tmp_ADC_CR_ADSTART_JADSTART = 0;
  uint32_t tickstart = 0;
  uint32_t Conversion_Timeout_CPU_cycles = 0;

  /* Check the parameters */
  assert_param(IS_ADC_ALL_INSTANCE(hadc->Instance));
  assert_param(IS_ADC_CONVERSION_GROUP(ConversionGroup));

  /* Verification if ADC is not already stopped (on regular and injected      */
  /* groups) to bypass this function if not needed.                           */
  if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc))
  {
    /* Particular case of continuous auto-injection mode combined with        */
    /* auto-delay mode.                                                       */
    /* In auto-injection mode, regular group stop ADC_CR_ADSTP is used (not   */
    /* injected group stop ADC_CR_JADSTP).                                    */
    /* Procedure to be followed: Wait until JEOS=1, clear JEOS, set ADSTP=1   */
    /* (see reference manual).                                                */
    if ((HAL_IS_BIT_SET(hadc->Instance->CFGR, ADC_CFGR_JAUTO))
         && (hadc->Init.ContinuousConvMode==ENABLE)
         && (hadc->Init.LowPowerAutoWait==ENABLE))
    {
      /* Use stop of regular group */
      ConversionGroup = ADC_REGULAR_GROUP;

      /* Wait until JEOS=1 (maximum Timeout: 4 injected conversions) */
      while(__HAL_ADC_GET_FLAG(hadc, ADC_FLAG_JEOS) == RESET)
      {
        if (Conversion_Timeout_CPU_cycles >= (ADC_CONVERSION_TIME_MAX_CPU_CYCLES *4))
        {
          /* Update ADC state machine to error */
          SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

          /* Set ADC error code to ADC IP internal error */
          SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

          return HAL_ERROR;
        }
        Conversion_Timeout_CPU_cycles ++;
      }

      /* Clear JEOS */
      __HAL_ADC_CLEAR_FLAG(hadc, ADC_FLAG_JEOS);
    }

    /* Stop potential conversion on going on regular group */
    if (ConversionGroup != ADC_INJECTED_GROUP)
    {
      /* Software is allowed to set ADSTP only when ADSTART=1 and ADDIS=0 */
      if (HAL_IS_BIT_SET(hadc->Instance->CR, ADC_CR_ADSTART) &&
          HAL_IS_BIT_CLR(hadc->Instance->CR, ADC_CR_ADDIS)     )
      {
        /* Stop conversions on regular group */
        SET_BIT(hadc->Instance->CR, ADC_CR_ADSTP);
      }
    }

    /* Stop potential conversion on going on injected group */
    if (ConversionGroup != ADC_REGULAR_GROUP)
    {
      /* Software is allowed to set JADSTP only when JADSTART=1 and ADDIS=0 */
      if (HAL_IS_BIT_SET(hadc->Instance->CR, ADC_CR_JADSTART) &&
          HAL_IS_BIT_CLR(hadc->Instance->CR, ADC_CR_ADDIS)      )
      {
        /* Stop conversions on injected group */
        SET_BIT(hadc->Instance->CR, ADC_CR_JADSTP);
      }
    }

    /* Selection of start and stop bits with respect to the regular or injected group */
    switch(ConversionGroup)
    {
      case ADC_REGULAR_INJECTED_GROUP:
        tmp_ADC_CR_ADSTART_JADSTART = (ADC_CR_ADSTART | ADC_CR_JADSTART);
        break;
      case ADC_INJECTED_GROUP:
        tmp_ADC_CR_ADSTART_JADSTART = ADC_CR_JADSTART;
        break;
      /* Case ADC_REGULAR_GROUP only*/
      default:
        tmp_ADC_CR_ADSTART_JADSTART = ADC_CR_ADSTART;
        break;
    }

    /* Wait for conversion effectively stopped */


    tickstart = HAL_GetTick();

    while((hadc->Instance->CR & tmp_ADC_CR_ADSTART_JADSTART) != RESET)
    {
      if((HAL_GetTick()-tickstart) > ADC_STOP_CONVERSION_TIMEOUT)
      {
        /* Update ADC state machine to error */
        SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

        /* Set ADC error code to ADC IP internal error */
        SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

        return HAL_ERROR;
      }
    }

  } /* if (ADC_IS_CONVERSION_ONGOING_REGULAR_INJECTED(hadc)) */

  /* Return HAL status */
  return HAL_OK;
}



/**
  * @brief  Enable the selected ADC.
  * @note   Prerequisite condition to use this function: ADC must be disabled
  *         and voltage regulator must be enabled (done into HAL_ADC_Init()).
  * @param  hadc: ADC handle
  * @retval HAL status.
  */
HAL_StatusTypeDef ADC_Enable(ADC_HandleTypeDef* hadc)
{
  uint32_t tickstart = 0;

  /* ADC enable and wait for ADC ready (in case of ADC is disabled or         */
  /* enabling phase not yet completed: flag ADC ready not yet set).           */
  /* Timeout implemented to not be stuck if ADC cannot be enabled (possible   */
  /* causes: ADC clock not running, ...).                                     */
  if (ADC_IS_ENABLE(hadc) == RESET)
  {
    /* Check if conditions to enable the ADC are fulfilled */
    if (ADC_ENABLING_CONDITIONS(hadc) == RESET)
    {
      /* Update ADC state machine to error */
      SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

      /* Set ADC error code to ADC IP internal error */
      SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

      return HAL_ERROR;
    }

    /* Enable the ADC peripheral */
    ADC_ENABLE(hadc);


    /* Wait for ADC effectively enabled */
    tickstart = HAL_GetTick();

    while(__HAL_ADC_GET_FLAG(hadc, ADC_FLAG_RDY) == RESET)
    {
      /*  If ADEN bit is set less than 4 ADC clock cycles after the ADCAL bit
          has been cleared (after a calibration), ADEN bit is reset by the
          calibration logic.
          The workaround is to continue setting ADEN until ADRDY is becomes 1.
          Additionally, ADC_ENABLE_TIMEOUT is defined to encompass this
          4 ADC clock cycle duration */
      ADC_ENABLE(hadc);

      if((HAL_GetTick()-tickstart) > ADC_ENABLE_TIMEOUT)
      {
        /* Update ADC state machine to error */
        SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

        /* Set ADC error code to ADC IP internal error */
        SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

        return HAL_ERROR;
      }
    }
  }

  /* Return HAL status */
  return HAL_OK;
}

/**
  * @brief  Disable the selected ADC.
  * @note   Prerequisite condition to use this function: ADC conversions must be
  *         stopped.
  * @param  hadc: ADC handle
  * @retval HAL status.
  */
HAL_StatusTypeDef ADC_Disable(ADC_HandleTypeDef* hadc)
{
  uint32_t tickstart = 0;

  /* Verification if ADC is not already disabled:                             */
  /* Note: forbidden to disable ADC (set bit ADC_CR_ADDIS) if ADC is already  */
  /* disabled.                                                                */
  if (ADC_IS_ENABLE(hadc) != RESET )
  {
    /* Check if conditions to disable the ADC are fulfilled */
    if (ADC_DISABLING_CONDITIONS(hadc) != RESET)
    {
      /* Disable the ADC peripheral */
      ADC_DISABLE(hadc);
    }
    else
    {
      /* Update ADC state machine to error */
      SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

      /* Set ADC error code to ADC IP internal error */
      SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

      return HAL_ERROR;
    }

    /* Wait for ADC effectively disabled */
    /* Get tick count */
    tickstart = HAL_GetTick();

    while(HAL_IS_BIT_SET(hadc->Instance->CR, ADC_CR_ADEN))
    {
      if((HAL_GetTick()-tickstart) > ADC_DISABLE_TIMEOUT)
      {
        /* Update ADC state machine to error */
        SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL);

        /* Set ADC error code to ADC IP internal error */
        SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_INTERNAL);

        return HAL_ERROR;
      }
    }
  }

  /* Return HAL status */
  return HAL_OK;
}


/**
  * @brief  DMA transfer complete callback.
  * @param  hdma: pointer to DMA handle.
  * @retval None
  */
void ADC_DMAConvCplt(DMA_HandleTypeDef *hdma)
{
  /* Retrieve ADC handle corresponding to current DMA handle */
  ADC_HandleTypeDef* hadc = ( ADC_HandleTypeDef* )((DMA_HandleTypeDef* )hdma)->Parent;

  /* Update state machine on conversion status if not in error state */
  if (HAL_IS_BIT_CLR(hadc->State, (HAL_ADC_STATE_ERROR_INTERNAL|HAL_ADC_STATE_ERROR_DMA)))
  {
    /* Update ADC state machine */
    SET_BIT(hadc->State, HAL_ADC_STATE_REG_EOC);
    /* Is it the end of the regular sequence ? */
    if (HAL_IS_BIT_SET(hadc->Instance->ISR, ADC_FLAG_EOS))
    {
      /* Are conversions software-triggered ? */
      if(ADC_IS_SOFTWARE_START_REGULAR(hadc))
      {
        /* Is CONT bit set ? */
        if (READ_BIT(hadc->Instance->CFGR, ADC_CFGR_CONT) == RESET)
        {
          /* CONT bit is not set, no more conversions expected */
          CLEAR_BIT(hadc->State, HAL_ADC_STATE_REG_BUSY);
          if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_INJ_BUSY))
          {
            SET_BIT(hadc->State, HAL_ADC_STATE_READY);
          }
        }
      }
    }
    else
    {
      /* DMA End of Transfer interrupt was triggered but conversions sequence
         is not over. If DMACFG is set to 0, conversions are stopped. */
      if (READ_BIT(hadc->Instance->CFGR, ADC_CFGR_DMNGT) == RESET)
      {
        /* DMACFG bit is not set, conversions are stopped. */
        CLEAR_BIT(hadc->State, HAL_ADC_STATE_REG_BUSY);
        if (HAL_IS_BIT_CLR(hadc->State, HAL_ADC_STATE_INJ_BUSY))
        {
          SET_BIT(hadc->State, HAL_ADC_STATE_READY);
        }
      }
    }

    /* Conversion complete callback */
    HAL_ADC_ConvCpltCallback(hadc);
  }
  else /* DMA or internal error occured (or both) */
  {
    /* In case of internal error, */
    if (HAL_IS_BIT_SET(hadc->State, HAL_ADC_STATE_ERROR_INTERNAL))
    {
      /* call Error Callback function */
      HAL_ADC_ErrorCallback(hadc);
    }

  }


}

/**
  * @brief  DMA half transfer complete callback.
  * @param  hdma: pointer to DMA handle.
  * @retval None
  */
void ADC_DMAHalfConvCplt(DMA_HandleTypeDef *hdma)
{
  /* Retrieve ADC handle corresponding to current DMA handle */
  ADC_HandleTypeDef* hadc = ( ADC_HandleTypeDef* )((DMA_HandleTypeDef* )hdma)->Parent;

  /* Half conversion callback */
  HAL_ADC_ConvHalfCpltCallback(hadc);
}

/**
  * @brief  DMA error callback
  * @param  hdma: pointer to DMA handle.
  * @retval None
  */
void ADC_DMAError(DMA_HandleTypeDef *hdma)
{
  /* Retrieve ADC handle corresponding to current DMA handle */
  ADC_HandleTypeDef* hadc = ( ADC_HandleTypeDef* )((DMA_HandleTypeDef* )hdma)->Parent;

  /* Set ADC state */
  SET_BIT(hadc->State, HAL_ADC_STATE_ERROR_DMA);

  /* Set ADC error code to DMA error */
  SET_BIT(hadc->ErrorCode, HAL_ADC_ERROR_DMA);

  /* Error callback */
  HAL_ADC_ErrorCallback(hadc);
}

/**
  * @}
  */

#endif /* HAL_ADC_MODULE_ENABLED */
/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
