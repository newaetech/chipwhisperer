#include "hal.h"
#include "simpleserial.h"
#include "stm32f0xx.h"
#include <stdint.h>

volatile uint8_t loopback_mode = 0;

volatile uint8_t pending_parity_update = 0;
volatile uint8_t new_parity = 0;

volatile uint8_t pending_stop_bits_update = 0;
volatile uint8_t new_stop_bits = 0;

static void apply_parity(uint8_t parity) {
    // Wait for any in-flight SimpleSerial ACK byte to finish shifting out
    while (!(USART1->ISR & USART_ISR_TC));

    USART1->CR1 &= ~USART_CR1_UE;

    // Clear Word Length (M), Parity Control Enable (PCE), and Parity Selection (PS)
    USART1->CR1 &= ~(USART_CR1_M | USART_CR1_PCE | USART_CR1_PS);

    if (parity == 1) {
        // Even Parity: 9-bit word length (8 data + 1 parity), Enable Parity
        USART1->CR1 |= (USART_CR1_M | USART_CR1_PCE);
    } else if (parity == 2) {
        // Odd Parity: 9-bit word length, Enable Parity, Select Odd Parity
        USART1->CR1 |= (USART_CR1_M | USART_CR1_PCE | USART_CR1_PS);
    }

    USART1->CR1 |= USART_CR1_UE;
}

static void apply_stop_bits(uint8_t stop_bits) {
    // Wait for any in-flight SimpleSerial ACK byte to finish shifting out
    while (!(USART1->ISR & USART_ISR_TC));

    USART1->CR1 &= ~USART_CR1_UE;
    USART1->CR2 &= ~USART_CR2_STOP; // Clear stop bits (defaults to 1)

    if (stop_bits == 1) {
        USART1->CR2 |= USART_CR2_STOP_1; // Configure for 2 stop bits
    }

    USART1->CR1 |= USART_CR1_UE;
}

/* Command 'b': Set Baud Rate
 * Expects 4 bytes in buf (Little Endian uint32_t)
 */
uint8_t set_baud(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t *buf) {
    if (len < 4) return 0x01; 

    uint32_t baud = (uint32_t)buf[0] | ((uint32_t)buf[1] << 8) |
                    ((uint32_t)buf[2] << 16) | ((uint32_t)buf[3] << 24);

    USART1->CR1 &= ~USART_CR1_UE;          // Disable UART to modify BRR
    USART1->BRR = 30E6 / baud;  // Set new baud rate divisor
    USART1->CR1 |= USART_CR1_UE;           // Re-enable UART
    while (1) {
        USART_TypeDef *uart = USART1;

        // Clear any stale RX errors latched during reconfiguration
        uart->ICR = USART_ICR_ORECF | USART_ICR_FECF | USART_ICR_NCF | USART_ICR_PECF;

        while (1) {
            uint32_t isr = uart->ISR;

            if (isr & (USART_ISR_ORE | USART_ISR_FE | USART_ISR_NE | USART_ISR_PE)) {
                uart->ICR = USART_ICR_ORECF | USART_ICR_FECF | USART_ICR_NCF | USART_ICR_PECF;
            }

            if (isr & USART_ISR_RXNE) {
                uint8_t c = (uint8_t)(uart->RDR & 0xFF);
                while (!(uart->ISR & USART_ISR_TXE));
                uart->TDR = c;
            }
        }
    }
    
    return 0x00;
}

/* Command 'p': Set Parity
 * buf[0] -> 0: None, 1: Even, 2: Odd
 */
uint8_t set_parity(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t *buf) {
    if (len < 1) return 0x01;

    new_parity = buf[0];
    pending_parity_update = 1;
    return 0x00;
}

/* Command 's': Set Stop Bits
 * buf[0] -> 0: 1 Stop Bit, 1: 2 Stop Bits
 */
uint8_t set_stop_bits(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t *buf) {
    if (len < 1) return 0x01;

    new_stop_bits = buf[0];
    pending_stop_bits_update = 1;
    return 0x00;
}

/* Command 'l': Enter Loopback Mode
 * Stops simpleserial parsing and echoes raw characters directly
 */
uint8_t enter_loopback(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t *buf) {
    while (1) {
        uint8_t c = getch();
        putch(c);
    }
    return 0x00;
}

int main(void) {
    // 1. Standard ChipWhisperer Platform & Clock Init
    platform_init();
    init_uart(); // Initializes with default baud (usually 38400)

    // 2. Initialize SimpleSerial V2
    simpleserial_init();

    // 3. Register SS2 Commands
    simpleserial_addcmd('b', 4, set_baud);
    simpleserial_addcmd('p', 1, set_parity);
    simpleserial_addcmd('s', 1, set_stop_bits);
    simpleserial_addcmd('l', 0, enter_loopback);

    // 4. Main Event Loop
    while (1) {
        // Standard SimpleSerial V2 packet processing
        simpleserial_get();

        if (pending_parity_update) {
            pending_parity_update = 0;
            apply_parity(new_parity);
        }

        if (pending_stop_bits_update) {
            pending_stop_bits_update = 0;
            apply_stop_bits(new_stop_bits);
        }
    }
    
    return 0;
}