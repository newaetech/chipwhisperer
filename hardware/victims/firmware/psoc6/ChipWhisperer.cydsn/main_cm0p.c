/*********************************************************************************
* File Name: main_cm4.c
*
* Version: 1.00
*
* Description: This file contains the code for initializing and starting of the 
* crypto client. The client provides the configuration data for True Random number
* generation and requests the crypto server (cm0p core) to run the cryptographic 
* operation
*
* This example demonstrates generating a One-Time-Password (OTP) of 8 characters in  
* length. Using the True Random Number generation feature of PSoC 6 MCU crypto block, 
* this example generates a random number corresponding to each character of the OTP 
* The generated random number is such that it corresponds to alpha-numeric 
* and special characters of the ASCII code. The generated OTP is then displayed
* on a UART terminal emulator.
*
* Related Document: 
*           CE221295_PSoC_6_MCU_Cryptography_True_Random_Number_Generation.pdf
*
* Hardware Dependency: 
*           See CE221295_PSoC_6_MCU_Cryptography_True_Random_Number_Generation.pdf
*
*******************************************************************************
* Copyright (2017), Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* (“Software”), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries (“Cypress”) and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software (“EULA”).
*
* If no EULA applies, Cypress hereby grants you a personal, nonexclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress’s integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, 
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress 
* reserves the right to make changes to the Software without notice. Cypress 
* does not assume any liability arising out of the application or use of the 
* Software or any product or circuit described in the Software. Cypress does 
* not authorize its products for use in any products where a malfunction or 
* failure of the Cypress product may reasonably be expected to result in 
* significant property damage, injury or death (“High Risk Product”). By 
* including Cypress’s product in a High Risk Product, the manufacturer of such 
* system or application assumes all risk of such use and in doing so agrees to 
* indemnify Cypress against all liability.
*******************************************************************************/
#include "project.h"
#include "stdio_user.h"
#include "cy_crypto_config.h"
#include <stdio.h>

/* Macros for the polynomial to configure the programmable Galois and Fibonacci
   ring oscillators */
#define CRYPTO_TRNG_GARO_POL             (0x42000000)
#define CRYPTO_TRNG_FIRO_POL             (0x43000000)

/* Macro for the maximum value of the random number generated in bits */
#define MAX_TRND_VAL                     (7u)

#define PASSWORD_LENGTH                  (8u)


/* Crypto context structure to store and manipulate the global context */               
cy_stc_crypto_context_t cryptoScratch;

/* Crypto context structure to store and manipulate the TRNG operational context */
cy_stc_crypto_context_trng_t TRNGContext;

void GeneratePassword(int32_t size, uint8_t* buffer);

int main(void)
{
    /* Enable global interrupts. */
    __enable_irq(); 

    /* Enable CM4.  CY_CORTEX_M4_APPL_ADDR must be updated if CM4 memory layout is changed. */
    Cy_SysEnableCM4(CY_CORTEX_M4_APPL_ADDR); 
    
    uint8_t TRNGData[PASSWORD_LENGTH + 1];
    
    /* Initialization of Crypto Driver */
    Cy_Crypto_Init(&cryptoConfig, &cryptoScratch);
    
    /* Wait for Crypto Block to be available */
    Cy_Crypto_Sync(CY_CRYPTO_SYNC_BLOCKING);
    
    /* Enable Crypto Hardware*/
    Cy_Crypto_Enable();
    Cy_Crypto_Sync(CY_CRYPTO_SYNC_BLOCKING);
    
    /* ANSI ESC sequence for clear screen */

    for(;;)
    {
    
        
        /* Generate a password of 8 characters in length */
        GeneratePassword(sizeof(TRNGData),TRNGData);
        

    }
}

/**********************************************************************************
* Function Name: GeneratePassword
***********************************************************************************
* Summary: This function generates a 8 character long password  
*
* Parameters:
*  int32_t size    - size of the buffer to store the generated password
*  uint8_t* buffer - pointer to the location where the password is stored
*
* Return
*  void
*
**********************************************************************************/
void GeneratePassword(int32_t size, uint8_t* buffer)
{
    int32_t index;
    uint32_t temp;
       
    for(index = 0; index < (size-1); index++)
    {
        /* Generate a random number */
        Cy_Crypto_Trng_Generate(CRYPTO_TRNG_GARO_POL, CRYPTO_TRNG_FIRO_POL,\
                                MAX_TRND_VAL, &temp, &TRNGContext);
           
        /* Wait until crypto completes operation */
        Cy_Crypto_Sync(CY_CRYPTO_SYNC_BLOCKING);
        
        buffer[index] = temp;
    }

}

/* [] END OF FILE */