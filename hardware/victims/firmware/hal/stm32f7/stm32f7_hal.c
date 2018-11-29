
#include "stm32f7_hal.h"
#include "stm32f7xx_hal.h"
//include "stm32f7_hal_lowlevel.h"
#include "stm32f7xx_hal_rcc.h"
#include "stm32f7xx_hal_rcc_ex.h"
#include "stm32f7xx_hal_gpio.h"
#include "stm32f7xx_hal_dma.h"
#include "stm32f7xx_hal_uart.h"
#include "stm32f7xx_hal_cryp.h"
#include "stm32f7xx_hal_flash.h"

UART_HandleTypeDef UartHandle;

#define trigger_pin GPIO_PIN_3

void platform_init(void)
{
	//HAL_Init();

	RCC_OscInitTypeDef RCC_OscInitStruct;
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE | RCC_OSCILLATORTYPE_HSI;
	RCC_OscInitStruct.HSEState       = RCC_HSE_BYPASS;
	RCC_OscInitStruct.HSIState       = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLSource  = RCC_PLL_NONE;
	HAL_RCC_OscConfig(&RCC_OscInitStruct);

	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_ClkInitStruct.ClockType      = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource   = RCC_SYSCLKSOURCE_HSE;
	RCC_ClkInitStruct.AHBCLKDivider  = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
	HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_ACR_LATENCY_7WS);
	
	//__HAL_RCC_CRYP_CLK_ENABLE();
}

void init_uart(void)
{
	GPIO_InitTypeDef  GPIO_InitStruct;

	RCC_PeriphCLKInitTypeDef RCC_PeriphClkInit;

	/*##-1- Enable peripherals and GPIO Clocks #################################*/
	/* Enable GPIO TX/RX clock */
	__HAL_RCC_GPIOE_CLK_ENABLE();

	// /* Select SysClk as source of USART1 clocks */
	// RCC_PeriphClkInit.PeriphClockSelection = RCC_PERIPHCLK_USART16;
	// RCC_PeriphClkInit.Usart16ClockSelection = RCC_USART16CLKSOURCE_D2PCLK2;
	// HAL_RCCEx_PeriphCLKConfig(&RCC_PeriphClkInit);

	/* Enable USARTx clock */
	__HAL_RCC_UART8_CLK_ENABLE();
	

	// TX
	GPIO_InitStruct.Pin       = GPIO_PIN_1;
	GPIO_InitStruct.Mode      = GPIO_MODE_AF_PP;
	GPIO_InitStruct.Pull      = GPIO_PULLUP;
	GPIO_InitStruct.Speed     = GPIO_SPEED_FREQ_VERY_HIGH;
	GPIO_InitStruct.Alternate = GPIO_AF8_UART8;
	
	HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

	GPIO_InitStruct.Pin = GPIO_PIN_0;
	GPIO_InitStruct.Alternate = GPIO_AF8_UART8;

	HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);


	UartHandle.Instance        = UART8;
	UartHandle.Init.BaudRate   = 38400;
	UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
	UartHandle.Init.StopBits   = UART_STOPBITS_1;
	UartHandle.Init.Parity     = UART_PARITY_NONE;
	UartHandle.Init.HwFlowCtl  = UART_HWCONTROL_NONE;
	UartHandle.Init.Mode       = UART_MODE_TX_RX;
	UartHandle.Init.OverSampling = UART_OVERSAMPLING_16;
	__UART8_CLK_ENABLE();
	HAL_UART_Init(&UartHandle);
}




void trigger_setup(void)
{
	GPIO_InitTypeDef GpioInit;
	GpioInit.Pin       = GPIO_PIN_3 | GPIO_PIN_10 |GPIO_PIN_12 | GPIO_PIN_15;
	GpioInit.Mode      = GPIO_MODE_OUTPUT_PP;
	GpioInit.Pull      = GPIO_NOPULL;
	GpioInit.Speed     = GPIO_SPEED_FREQ_HIGH;
	__GPIOE_CLK_ENABLE();
	HAL_GPIO_Init(GPIOE, &GpioInit);
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);
}





void blinky(uint8_t nTimes)
{
	  for(uint8_t i=0; i<nTimes; i++)
  {
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
	  HAL_Delay(150);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_SET);
	  HAL_Delay(150);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
	  HAL_Delay(300);
	  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);
	  HAL_Delay(150);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);
	  HAL_Delay(150);
		HAL_GPIO_WritePin(GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);
	  HAL_Delay(150);
  }
}


void trigger_high(void)
{
	HAL_GPIO_WritePin(GPIOE, trigger_pin, SET);
}

void trigger_low(void)
{
	HAL_GPIO_WritePin(GPIOE, trigger_pin, RESET);
}   

char getch(void)
{
	uint8_t d;
	HAL_UART_Receive(&UartHandle, &d, 1, 5000);
	return d;
}

void putch(char c)
{
	uint8_t d  = c;
	HAL_UART_Transmit(&UartHandle,  &d, 1, 5000);
}

