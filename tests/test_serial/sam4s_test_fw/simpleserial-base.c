/*
    This file is part of the ChipWhisperer Example Targets
    Copyright (C) 2012-2017 NewAE Technology Inc.

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

#include "hal.h"
#include <stdint.h>
#include <stdlib.h>

#include "simpleserial.h"
#include "sam4s_hal.h"
#include "genclk.h"
#include "osc.h"
#include "pio.h"
#include "uart.h"
#include "sysclk.h"
#include "gpio.h"

// bool usart_fill_opts(sam_usart_opt_t *opts, uint32_t baud, uint8_t stop_bits, uint8_t parity, uint8_t dbits)
// {
//     opts->baudrate = baud;
//     switch(stop_bits)
//         {
//         case 0:
//             opts->stop_bits = US_MR_NBSTOP_1_BIT;
//             break;
//         case 1:
//             opts->stop_bits = US_MR_NBSTOP_1_5_BIT;
//             break;
//         case 2:
//             opts->stop_bits = US_MR_NBSTOP_2_BIT;
//             break;
//         default:
//             opts->stop_bits = US_MR_NBSTOP_1_BIT;
//         }

//     /* Parity */
//     switch(parity)
//         {
//         case 0:
//             opts->parity_type = US_MR_PAR_NO;
//             break;
//         case 1:
//             opts->parity_type = US_MR_PAR_ODD;
//             break;
//         case 2:
//             opts->parity_type = US_MR_PAR_EVEN;
//             break;
//         case 3:
//             opts->parity_type = US_MR_PAR_MARK;
//             break;
//         case 4:
//             opts->parity_type = US_MR_PAR_SPACE;
//             break;							
//         default:
//             opts->parity_type = US_MR_PAR_NO;
//         }

//     /* Data Bits */
//     switch(dbits)
//         {
//         case 5:
//             opts->char_length = US_MR_CHRL_5_BIT;
//             break;
//         case 6:
//             opts->char_length = US_MR_CHRL_6_BIT;
//             break;
//         case 7:
//             opts->char_length = US_MR_CHRL_7_BIT;
//             break;
//         case 8:							
//         default:
//             opts->char_length = US_MR_CHRL_8_BIT;
//         }
        
//     // Not loopback or anything weird, for example
//     opts->channel_mode = US_MR_CHMODE_REMOTE_LOOPBACK;
//     return true;
// }

// uint8_t set_serial_settings(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t *buf)
// {
//     if (len !=)

// }

int main(void)
{
    platform_init();
	// init_uart();
	// trigger_setup();
    // sam_usart_opt_t opts = {
    // };
    sam_uart_opt_t opts = {
        .ul_baudrate = 230400,
        .ul_mode = UART_MR_CHMODE_REMOTE_LOOPBACK,
        .ul_mck = 7.45E6
    };

    sysclk_enable_peripheral_clock(ID_UART0);


    uart_init(UART0, &opts);
    uart_enable_rx(UART0);
    uart_enable_tx(UART0);
    gpio_configure_pin(PIO_PA9_IDX, PIO_PERIPH_A | PIO_DEFAULT | PIO_PULLUP);
    gpio_configure_pin(PIO_PA10_IDX, PIO_PERIPH_A | PIO_DEFAULT);


	// simpleserial_init();
//     simpleserial_addcmd(0x01, 16, aes);
	while(1);
		// simpleserial_get();
}
