#ifndef STM32F7_HAL_H
#define STM32F7_HAL_H

//You probably don't need this from rest of code
//#include "stm32f7_hal_lowlevel.h"

#include <stdint.h>

void init_uart(void);
void putch(char c);
char getch(void);

void trigger_setup(void);
void trigger_low(void);
void trigger_high(void);

void blinky(uint8_t nTimes);

void HW_AES128_Init(void);
void HW_AES128_LoadKey(uint8_t* key);
void HW_AES128_Enc(uint8_t* pt);
void HW_AES128_Dec(uint8_t *pt);


/* ########################### System Configuration ######################### */
/**
  * @brief This is the HAL system configuration section
  */
#define  VDD_VALUE                    (3300U) /*!< Value of VDD in mv */
#define  TICK_INT_PRIORITY            (0x0FU) /*!< tick interrupt priority */
#define  USE_RTOS                     0U
#define  PREFETCH_ENABLE              0U /* The prefetch will be enabled in SystemClock_Config(), depending on the used
                                            STM32F405/415/07/417 device: RevA (prefetch must be off) or RevZ (prefetch can be on/off) */
#define  INSTRUCTION_CACHE_ENABLE     1U
#define  DATA_CACHE_ENABLE            1U

#define STM32F746xx
#include "stm32f7xx.h"


#endif // STM32F7_HAL_H
