/***************************************************************************//**
* \file cy_gpio.c
* \version 1.10.1
*
* \brief
* Provides an API implementation of the GPIO driver
*
********************************************************************************
* \copyright
* Copyright 2016-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "cy_gpio.h"

#if defined(__cplusplus)
extern "C" {
#endif


/*******************************************************************************
* Function Name: Cy_GPIO_Pin_Init
****************************************************************************//**
*
* \brief Initializes all pin configuration settings for the specified pin.
*
* \param base
* Pointer to the pin's port register base address
*
* \param pinNum
* Position of the pin bit-field within the port register
*
* \param config
* Pointer to the pin config structure base address
*
* \return
* Initialization status
*
* \note 
* This function modifies port registers in read-modify-write operations. It is
* not thread safe as the resource is shared among multiple pins on a port.
*
* \funcusage
* \snippet gpio/gpio_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_GPIO_Pin_Init
*
*******************************************************************************/
cy_en_gpio_status_t Cy_GPIO_Pin_Init(GPIO_PRT_Type *base, uint32_t pinNum, const cy_stc_gpio_pin_config_t *config)
{
    cy_en_gpio_status_t status = CY_GPIO_SUCCESS;
    uint32_t maskCfgOut;
    uint32_t tempReg;

    if((NULL != base) && (NULL != config))
    {
        CY_ASSERT_L2(CY_GPIO_IS_PIN_VALID(pinNum));
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->outVal));
        CY_ASSERT_L2(CY_GPIO_IS_DM_VALID(config->driveMode));
        CY_ASSERT_L2(CY_GPIO_IS_HSIOM_VALID(config->hsiom));  
        CY_ASSERT_L2(CY_GPIO_IS_INT_EDGE_VALID(config->intEdge)); 
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->intMask));
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->vtrip));
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->slewRate));
        CY_ASSERT_L2(CY_GPIO_IS_DRIVE_SEL_VALID(config->driveSel));
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->vregEn));
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->ibufMode));
        CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(config->vtripSel));
        CY_ASSERT_L2(CY_GPIO_IS_VREF_SEL_VALID(config->vrefSel));
        CY_ASSERT_L2(CY_GPIO_IS_VOH_SEL_VALID(config->vohSel));
    
        Cy_GPIO_Write(base, pinNum, config->outVal);
        Cy_GPIO_SetDrivemode(base, pinNum, config->driveMode);
        Cy_GPIO_SetHSIOM(base, pinNum, config->hsiom);

        Cy_GPIO_SetInterruptEdge(base, pinNum, config->intEdge);
        Cy_GPIO_SetInterruptMask(base, pinNum, config->intMask);
        Cy_GPIO_SetVtrip(base, pinNum, config->vtrip);

        /* Slew rate and Driver strength */
        maskCfgOut = (CY_GPIO_CFG_OUT_SLOW_MASK << pinNum) 
                        | (CY_GPIO_CFG_OUT_DRIVE_SEL_MASK << ((uint32_t)(pinNum << 1u) + CY_GPIO_CFG_OUT_DRIVE_OFFSET));
        tempReg = base->CFG_OUT & ~(maskCfgOut);
        base->CFG_OUT = tempReg | ((config->slewRate & CY_GPIO_CFG_OUT_SLOW_MASK) << pinNum)
                            | ((config->driveSel & CY_GPIO_CFG_OUT_DRIVE_SEL_MASK) << ((uint32_t)(pinNum << 1u) + CY_GPIO_CFG_OUT_DRIVE_OFFSET));

        /* SIO specific configuration */
        tempReg = base->CFG_SIO & ~(CY_GPIO_SIO_PIN_MASK);
        base->CFG_SIO = tempReg | (((config->vregEn & CY_GPIO_VREG_EN_MASK)
                                        | ((config->ibufMode & CY_GPIO_IBUF_MASK) << CY_GPIO_IBUF_SHIFT)
                                        | ((config->vtripSel & CY_GPIO_VTRIP_SEL_MASK) << CY_GPIO_VTRIP_SEL_SHIFT)
                                        | ((config->vrefSel & CY_GPIO_VREF_SEL_MASK)  << CY_GPIO_VREF_SEL_SHIFT)
                                        | ((config->vohSel & CY_GPIO_VOH_SEL_MASK) << CY_GPIO_VOH_SEL_SHIFT))
                                            << ((pinNum & CY_GPIO_SIO_ODD_PIN_MASK) << CY_GPIO_CFG_SIO_OFFSET));
    }
    else
    {
        status = CY_GPIO_BAD_PARAM;
    }
    
    return(status);
}


/*******************************************************************************
* Function Name: Cy_GPIO_Port_Init
****************************************************************************//**
*
* \brief Initialize a complete port of pins from a single init structure.
*
* The configuration structure used in this function has a 1:1 mapping to the
* GPIO and HSIOM registers. Refer to the device Technical Reference Manual (TRM)
* for the register details on how to populate them.
*
* \param base
* Pointer to the pin's port register base address
*
* \param config
* Pointer to the pin config structure base address
*
* \return
* Initialization status
*
* \note 
* If using the PSoC Creator IDE, there is no need to initialize the pins when 
* using the GPIO component on the schematic. Ports are configured in 
* Cy_SystemInit() before main() entry.
*
* \funcusage
* \snippet gpio/gpio_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_GPIO_Port_Init
*
*******************************************************************************/
cy_en_gpio_status_t Cy_GPIO_Port_Init(GPIO_PRT_Type* base, const cy_stc_gpio_prt_config_t *config)
{
    cy_en_gpio_status_t status = CY_GPIO_SUCCESS;
    uint32_t portNum;
    HSIOM_PRT_Type* baseHSIOM;

    if((NULL != base) && (NULL != config))
    {
        CY_ASSERT_L2(CY_GPIO_IS_PIN_BIT_VALID(config->out));
        CY_ASSERT_L2(CY_GPIO_IS_PIN_BIT_VALID(config->cfgIn));
        CY_ASSERT_L2(CY_GPIO_IS_INTR_CFG_VALID(config->intrCfg));
        CY_ASSERT_L2(CY_GPIO_IS_INTR_MASK_VALID(config->intrMask));
        CY_ASSERT_L2(CY_GPIO_IS_SEL_ACT_VALID(config->sel0Active));
        CY_ASSERT_L2(CY_GPIO_IS_SEL_ACT_VALID(config->sel1Active));
    
        portNum = ((uint32_t)(base) - GPIO_BASE) / GPIO_PRT_SECTION_SIZE;
        baseHSIOM = (HSIOM_PRT_Type*)(HSIOM_BASE + (HSIOM_PRT_SECTION_SIZE * portNum));

        base->OUT            = config->out;
        base->CFG            = config->cfg;
        base->CFG_IN         = config->cfgIn;
        base->CFG_OUT        = config->cfgOut;
        base->INTR_CFG       = config->intrCfg;
        base->INTR_MASK      = config->intrMask;
        base->CFG_SIO        = config->cfgSIO;
        baseHSIOM->PORT_SEL0 = config->sel0Active;
        baseHSIOM->PORT_SEL1 = config->sel1Active;
    }
    else
    {
        status = CY_GPIO_BAD_PARAM;
    }
    
    return(status);
}


/*******************************************************************************
* Function Name: Cy_GPIO_Pin_FastInit
****************************************************************************//**
*
* \brief Initialize the most common configuration settings for all pin types.
*
* These include, drive mode, initial output value, and HSIOM connection.
*
* \param base
* Pointer to the pin's port register base address
*
* \param pinNum
* Position of the pin bit-field within the port register
*
* \param driveMode
* Pin drive mode. Options are detailed in \ref group_gpio_driveModes macros
*
* \param outVal
* Logic state of the output buffer driven to the pin (1 or 0)
*
* \param hsiom
* HSIOM input selection
*
* \return
* void
*
* \note 
* This function modifies port registers in read-modify-write operations. It is
* not thread safe as the resource is shared among multiple pins on a port.
*
* \funcusage
* \snippet gpio/gpio_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_GPIO_Pin_FastInit
*
*******************************************************************************/
void Cy_GPIO_Pin_FastInit(GPIO_PRT_Type* base, uint32_t pinNum, uint32_t driveMode,
                                        uint32_t outVal, en_hsiom_sel_t hsiom)
{
    uint32_t tempReg;

    CY_ASSERT_L2(CY_GPIO_IS_PIN_VALID(pinNum));
    CY_ASSERT_L2(CY_GPIO_IS_DM_VALID(driveMode));
    CY_ASSERT_L2(CY_GPIO_IS_VALUE_VALID(outVal));
    CY_ASSERT_L2(CY_GPIO_IS_HSIOM_VALID(hsiom));

    tempReg = (base->OUT & ~(CY_GPIO_OUT_MASK << pinNum));
    base->OUT = tempReg | ((outVal & CY_GPIO_OUT_MASK) << pinNum);

    tempReg = (base->CFG & ~(CY_GPIO_CFG_DM_MASK << (pinNum << CY_GPIO_DRIVE_MODE_OFFSET)));
    base->CFG = tempReg | ((driveMode & CY_GPIO_CFG_DM_MASK) << (pinNum << CY_GPIO_DRIVE_MODE_OFFSET));

    Cy_GPIO_SetHSIOM(base, pinNum, hsiom);
}


/*******************************************************************************
* Function Name: Cy_GPIO_Port_Deinit
****************************************************************************//**
*
* \brief Reset a complete port of pins back to power on reset defaults.
*
* \param base
* Pointer to the pin's port register base address
*
* \return
* void
*
* \funcusage
* \snippet gpio/gpio_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_GPIO_Port_Deinit
*
*******************************************************************************/
void Cy_GPIO_Port_Deinit(GPIO_PRT_Type* base)
{
    uint32_t portNum;
    HSIOM_PRT_Type* portAddrHSIOM;

    portNum = ((uint32_t)(base) - GPIO_BASE) / GPIO_PRT_SECTION_SIZE;
    portAddrHSIOM = (HSIOM_PRT_Type*)(HSIOM_BASE + (HSIOM_PRT_SECTION_SIZE * portNum));

    base->OUT = CY_GPIO_PRT_DEINIT;
    base->CFG = CY_GPIO_PRT_DEINIT;
    base->CFG_IN = CY_GPIO_PRT_DEINIT;
    base->CFG_OUT = CY_GPIO_PRT_DEINIT;
    base->INTR_CFG = CY_GPIO_PRT_DEINIT;
    base->INTR_MASK = CY_GPIO_PRT_DEINIT;
    base->CFG_SIO = CY_GPIO_PRT_DEINIT;
    portAddrHSIOM->PORT_SEL0 = CY_GPIO_PRT_DEINIT;
    portAddrHSIOM->PORT_SEL1 = CY_GPIO_PRT_DEINIT;
}

#if defined(__cplusplus)
}
#endif


/* [] END OF FILE */
