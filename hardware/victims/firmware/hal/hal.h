/*
    This file is part of the ChipWhisperer Example Targets
    Copyright (C) 2012-2015 NewAE Technology Inc.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef HAL_H_
#define HAL_H_

void platform_init(void);

//PLATFORM Define Types
#define CW301_AVR         1
#define CW301_XMEGA       2
#define CW303             3
#define CW304             4
#define CW308_MEGARF      8
#define CW308_PIC24FJ    10
#define CW308_SAM4L      11
#define CW308_SI4010     12
#define CW308_MPC5748G   13
#define CW308_STM32F0    14
#define CW308_STM32F1    15
#define CW308_STM32F2    16
#define CW308_STM32F3    17
#define CW308_STM32F4    18
#define CW308_STM32F7    19
#define CW308_STM32F746  19
#define CW308_CC2538     20
#define CW308_K24F       21
#define CW308_NRF52840   22
#define CW308_AURIX      23
#define CW308_SAML11     24
#define CW308_EFM32TG11B 25
#define CW308_K24F       26

//HAL_TYPE Define Types
#define HAL_avr          1
#define HAL_xmega        2
#define HAL_pic24f       3
#define HAL_sam4l        4
#define HAL_stm32f0      5
#define HAL_stm32f1      6
#define HAL_stm32f2      7
#define HAL_stm32f3      8
#define HAL_stm32f4      9
#define HAL_stm32f7      10
#define HAL_cc2538       11
#define HAL_k24f         12
#define HAL_nrf52840     13
#define HAL_stm32f0_nano 14
#define HAL_aurix        15
#define HAL_saml11       16
#define HAL_efm32tg11b   17
#define HAL_k24f         18

#if HAL_TYPE == HAL_avr
    #include <avr/io.h>
    #include <util/delay.h>
    #include "avr/avr_hal.h"
#elif HAL_TYPE == HAL_xmega
    #include <avr/io.h>
    #include <util/delay.h>
    #include "xmega/xmega_hal.h"
    #include "xmega/avr_compiler.h"
#elif HAL_TYPE == HAL_pic24f
    #include <xc.h>
    #include "pic24f/pic24f_hal.h"
    #include "pic24f/uart.h"
#elif HAL_TYPE == HAL_sam4l
    #include "sam4l/sam4l_hal.h"
#elif HAL_TYPE == HAL_stm32f0
	#include "stm32f0/stm32f0_hal.h"
#elif HAL_TYPE == HAL_stm32f1
	#include "stm32f1/stm32f1_hal.h"
#elif HAL_TYPE == HAL_stm32f2
	#include "stm32f2/stm32f2_hal.h"
#elif HAL_TYPE == HAL_stm32f3
	#include "stm32f3/stm32f3_hal.h"
	#ifdef SECCAN
		#include "stm32f3/stm32f3_hal_seccan.h"
	#endif
#elif HAL_TYPE == HAL_stm32f4
	#include "stm32f4/stm32f4_hal.h"
#elif HAL_TYPE == HAL_stm32f7
    #include "stm32f7/stm32f7_hal.h"
#elif HAL_TYPE == HAL_cc2538
	#include "cc2538/cc2538_hal.h"
#elif HAL_TYPE == HAL_k24f
    #include "k24f/k24f_hal.h"
#elif HAL_TYPE == HAL_k82f
#include "k82f/k82f_hal.h"
#elif HAL_TYPE == HAL_nrf52840
    #include "nrf52840/nrf52840_hal.h"   
#elif HAL_TYPE == HAL_stm32f0_nano
    #include "stm32f0/stm32f0_hal.h" 
#elif HAL_TYPE == HAL_aurix
    #include "aurix/aurix_hal.h"
#elif HAL_TYPE == HAL_saml11
     #include "saml11/saml11_hal.h"
#elif HAL_TYPE == HAL_efm32tg11b
     #include "efm32tg11b/efm32tg11b_hal.h"
#else
    #error "Unsupported HAL Type"
#endif


#if PLATFORM == CW308_MEGARF
    #undef trigger_setup
    #undef trigger_high
    #undef trigger_low
    #define trigger_setup() DDRD |= 0x02
    #define trigger_high()  PORTD |= 0x02
    #define trigger_low()   PORTD &= ~(0x02)
    
    #define HW_AES128_Init();      AES_CTRL = 0x00;

    #define HW_AES128_LoadKey(key);  for (uint8_t i = 0; i < 16; i++){ \
                                     AES_KEY = *(key+i); \
                                  }

    #define HW_AES128_Enc(pt);  for (uint8_t i = 0; i < 16; i++){ \
                                    AES_STATE = *(pt+i); \
                                } \
                                  \
                                AES_CTRL |= 1<<AES_REQUEST; \
                                  \
                                /*Wait for done  */ \
                                while ((AES_STATUS & (1<<AES_DONE)) == 0){ \
                                    ; \
                                } \
                                  \
                                for (uint8_t i = 0; i < 16; i++){ \
                                    *(pt+i) = AES_STATE; \
                                }
    
#endif


#ifndef led_error
#define led_error(a)
#endif

#ifndef led_ok
#define led_ok(a)
#endif

#endif //HAL_H_
