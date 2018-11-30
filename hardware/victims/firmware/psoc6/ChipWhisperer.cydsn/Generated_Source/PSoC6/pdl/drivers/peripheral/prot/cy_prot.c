/***************************************************************************//**
* \file cy_prot.c
* \version 1.10
*
* \brief
* Provides an API implementation of the Protection Unit driver
*
********************************************************************************
* \copyright
* Copyright 2016-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "cy_prot.h"

#if defined(__cplusplus)
extern "C" {
#endif


/*******************************************************************************
* Function Name: Cy_Prot_ConfigBusMaster
****************************************************************************//**
*
* \brief Configures the allowed protection contexts, security (secure/non-secure)
* and privilege level of the bus transaction created by the specified master. 
*
* \param busMaster
* Indicates which master needs to be configured. Refer to the CPUSS_MS_ID_X
* defines.
* 
* \param privileged
* Boolean to define the privilege level of all subsequent bus transfers.
* True - privileged, False - not privileged.
* Note that this is an inherited value. If not inherited, then this bit will 
* be used.
*
* \param secure
* Security setting for the master. True - Secure, False - Not secure.
* 
* \param pcMask
* This is a 16 bit value of the allowed contexts, it is an OR'ed (|) field of the
* provided defines in cy_prot.h. For example: (PROT_PC1 | PROT_PC3 | PROT_PC4)
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The function completed successfully
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigBusMaster
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigBusMaster(en_prot_master_t busMaster, bool privileged, bool secure, uint32_t pcMask)
{
    cy_en_prot_status_t status;
    uint32_t regVal;
    uint32_t * addrMsCtl;

    CY_ASSERT_L1(CY_PROT_IS_BUS_MASTER_VALID(busMaster));
        
    addrMsCtl = (uint32_t *)(PROT_BASE + (uint32_t)((uint32_t)busMaster << CY_PROT_MSX_CTL_SHIFT));
    
    /* Check if PC mask is in supported range */
    switch (busMaster)
    {
        case (CPUSS_MS_ID_CM0):
        {
            status = ((uint32_t)(pcMask & CY_PROT_MS0_PC_LIMIT_MASK) != 0UL) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_CRYPTO):
        {
            status = ((uint32_t)(pcMask & CY_PROT_MS1_PC_LIMIT_MASK) != 0UL) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_DW0):
        {
            status = ((uint32_t)(pcMask & CY_PROT_MS2_PC_LIMIT_MASK) != 0UL) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_DW1):
        {
            status = ((uint32_t)(pcMask & CY_PROT_MS3_PC_LIMIT_MASK) != 0UL) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_CM4):
        {
            status = ((uint32_t)(pcMask & CY_PROT_MS14_PC_LIMIT_MASK) != 0UL) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_TC):
        {
            status = ((uint32_t)(pcMask & CY_PROT_MS15_PC_LIMIT_MASK) != 0UL) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        default:
            status = CY_PROT_BAD_PARAM;
        break;
    }
    
    if(status != CY_PROT_BAD_PARAM) 
    {
        regVal = _VAL2FLD(PROT_SMPU_MS0_CTL_NS, !secure)
                | _VAL2FLD(PROT_SMPU_MS0_CTL_P, privileged)
                | _VAL2FLD(PROT_SMPU_MS0_CTL_PC_MASK_15_TO_1, pcMask);
        *addrMsCtl = regVal;
        status = (*addrMsCtl != regVal) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_SetActivePC
****************************************************************************//**
*
* \brief Sets the current/active protection context of the specified bus master.
* 
* Allowed PC values are 1-15. If this value is not inherited from another bus 
* master, the value set through this function is used.
*
* \param busMaster
* The bus master to configure. Refer to the CPUSS_MS_ID_X defines.
* 
* \param pc
* Active protection context of the specified master. Note that only those 
* protection contexts allowed by the pcMask will take effect. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The function completed successfully
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_SetActivePC
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_SetActivePC(en_prot_master_t busMaster, uint32_t pc)
{
    cy_en_prot_status_t status;
    PROT_MPU_Type* addrMpu;
    
    CY_ASSERT_L1(CY_PROT_IS_BUS_MASTER_VALID(busMaster));
    
    addrMpu = (PROT_MPU_Type*)(&PROT->CYMPU[busMaster]); 
    
    /* Check if PC value is in supported range */
    switch (busMaster)
    {
        case (CPUSS_MS_ID_CM0):
        {
            status = (pc > CPUSS_PROT_SMPU_MS0_PC_NR_MINUS1) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_CRYPTO):
        {
            status = (pc > CPUSS_PROT_SMPU_MS1_PC_NR_MINUS1) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_DW0):
        {
            status = (pc > CPUSS_PROT_SMPU_MS2_PC_NR_MINUS1) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_DW1):
        {
            status = (pc > CPUSS_PROT_SMPU_MS3_PC_NR_MINUS1) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_CM4):
        {
            status = (pc > CPUSS_PROT_SMPU_MS14_PC_NR_MINUS1) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        case (CPUSS_MS_ID_TC):
        {
            status = (pc > CPUSS_PROT_SMPU_MS15_PC_NR_MINUS1) ? CY_PROT_BAD_PARAM : CY_PROT_SUCCESS;
            break;
        }
        default:
            status = CY_PROT_BAD_PARAM;
        break;
    }
    
    if(status != CY_PROT_BAD_PARAM) 
    {
        addrMpu->MS_CTL = _VAL2FLD(PROT_MPU_MS_CTL_PC, pc) | _VAL2FLD(PROT_MPU_MS_CTL_PC_SAVED, pc);
        status = (_FLD2VAL(PROT_MPU_MS_CTL_PC, addrMpu->MS_CTL) != pc) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_GetActivePC
****************************************************************************//**
*
* \brief Returns the active protection context of a master. 
*
* \param busMaster
* The bus master, whose protection context is being read. Refer to the 
* CPUSS_MS_ID_X defines.
* 
* \return
* Active protection context of the master
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_SetActivePC
*
*******************************************************************************/
uint32_t Cy_Prot_GetActivePC(en_prot_master_t busMaster)
{
    PROT_MPU_Type* addrMpu;
    
    CY_ASSERT_L1(CY_PROT_IS_BUS_MASTER_VALID(busMaster));
    
    addrMpu = (PROT_MPU_Type*)(&PROT->CYMPU[busMaster]);
    
    return ((uint32_t)_FLD2VAL(PROT_MPU_MS_CTL_PC, addrMpu->MS_CTL));
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigMpuStruct
****************************************************************************//**
*
* \brief This function configures a memory protection unit (MPU) struct with its 
* protection attributes. 
*
* The protection structs act like the gatekeepers for a master's accesses to
* memory, allowing only the permitted transactions to go through.
*
* \param base
* The base address for the MPU struct being configured. 
* 
* \param config
* Initialization structure containing all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The MPU struct was configured
*   CY_PROT_FAILURE      | Configuration failed due to a protection violation
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigMpuStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigMpuStruct(PROT_MPU_MPU_STRUCT_Type* base, const cy_stc_mpu_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t addrReg;
    uint32_t attReg;

    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_MPU_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_MPU_PERM_VALID(config->privPermission));
    CY_ASSERT_L3(CY_PROT_IS_REGION_SIZE_VALID(config->regionSize));

    addrReg = _VAL2FLD(PROT_MPU_MPU_STRUCT_ADDR_SUBREGION_DISABLE, config->subregions)
              | _VAL2FLD(PROT_MPU_MPU_STRUCT_ADDR_ADDR24, (uint32_t)((uint32_t)config->address >> CY_PROT_ADDR_SHIFT));
    attReg  = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
              | (((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
              | _VAL2FLD(PROT_MPU_MPU_STRUCT_ATT_NS, !(config->secure))
              | _VAL2FLD(PROT_MPU_MPU_STRUCT_ATT_REGION_SIZE, config->regionSize);
    base->ATT = attReg;
    base->ADDR = addrReg;
    status = ((base->ADDR != addrReg) || (base->ATT != attReg)) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnableMpuStruct
****************************************************************************//**
*
* \brief Enables the MPU struct, which allows the MPU protection attributes to 
* take effect. 
*
* \param base
* The base address of the MPU struct being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The MPU struct was enabled
*   CY_PROT_FAILURE      | The MPU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnableMpuStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnableMpuStruct(PROT_MPU_MPU_STRUCT_Type* base)
{
    cy_en_prot_status_t status;

    base->ATT |= _VAL2FLD(PROT_MPU_MPU_STRUCT_ATT_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PROT_MPU_MPU_STRUCT_ATT_ENABLED, base->ATT) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisableMpuStruct
****************************************************************************//**
*
* \brief Disbles the MPU struct, which prevents the MPU protection attributes
* from taking effect.
*
* \param base
* The base address of the MPU struct being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The MPU struct was disabled
*   CY_PROT_FAILURE      | The MPU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisableMpuStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisableMpuStruct(PROT_MPU_MPU_STRUCT_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT &= ~_VAL2FLD(PROT_MPU_MPU_STRUCT_ATT_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PROT_MPU_MPU_STRUCT_ATT_ENABLED, base->ATT) == CY_PROT_STRUCT_ENABLE) ?
            CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigSmpuMasterStruct
****************************************************************************//**
*
* \brief Configures a Shared Memory Protection Unit (SMPU) master protection 
* struct with its protection attributes. 
*
* This function configures the master struct governing the corresponding slave
* struct pair. It is a mechanism to protect the slave SMPU struct. Since the
* memory location of the slave struct is known, the address, regionSize and
* subregions of the configuration struct are not applicable.
*
* Note that only the user/privileged write permissions are configurable. The 
* read and execute permissions are read-only and cannot be configured.
*
* \param base
* The register base address of the protection struct being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | SMPU master struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigSmpuMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigSmpuMasterStruct(PROT_SMPU_SMPU_STRUCT_Type* base, const cy_stc_smpu_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_SMPU_MS_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_SMPU_MS_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_SMPU_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR1 is read only. Only configure ATT1 */
        attReg = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT1_NS, !(config->secure))
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT1_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only for master structs */
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT1_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_SMPU_ATT1_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT1 = attReg;
            status = ((base->ATT1 & CY_PROT_SMPU_ATT1_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}

/*******************************************************************************
* Function Name: Cy_Prot_ConfigSmpuSlaveStruct
****************************************************************************//**
*
* \brief Configures a Shared Memory Protection Unit (SMPU) slave protection 
* struct with its protection attributes. 
* 
* This function configures the slave struct of an SMPU pair, which can protect
* any memory region in a device from invalid bus master accesses.
*
* \param base
* The register base address of the protection structure being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | SMPU slave struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigSmpuSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigSmpuSlaveStruct(PROT_SMPU_SMPU_STRUCT_Type* base, const cy_stc_smpu_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t addrReg;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_SMPU_SL_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_SMPU_SL_PERM_VALID(config->privPermission));
    CY_ASSERT_L3(CY_PROT_IS_REGION_SIZE_VALID(config->regionSize));

    if(((uint32_t)config->pcMask & CY_PROT_SMPU_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        addrReg= _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ADDR0_SUBREGION_DISABLE, config->subregions)
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ADDR0_ADDR24, (uint32_t)((uint32_t)config->address >> CY_PROT_ADDR_SHIFT));
        attReg= ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT0_NS, !(config->secure))
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT0_PC_MASK_15_TO_1, config->pcMask)
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT0_REGION_SIZE, config->regionSize)
                    | _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT0_PC_MATCH, config->pcMatch);
        base->ATT0 = attReg;
        base->ADDR0 = addrReg;
        status = ((base->ADDR0 != addrReg) || ((base->ATT0 & CY_PROT_SMPU_ATT0_MASK) != attReg))
                    ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnableSmpuMasterStruct
****************************************************************************//**
*
* \brief Enables the Master SMPU structure.
*
* This is an SMPU master struct enable function. The SMPU protection settings
* will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was enabled
*   CY_PROT_FAILURE      | The Master PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnableSmpuMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnableSmpuMasterStruct(PROT_SMPU_SMPU_STRUCT_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 |= _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PROT_SMPU_SMPU_STRUCT_ATT1_ENABLED, base->ATT1) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisableSmpuMasterStruct
****************************************************************************//**
*
* \brief Disables the Master SMPU structure.
*
* This is an SMPU master struct disable function. The SMPU protection settings
* will seize to take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was disabled
*   CY_PROT_FAILURE      | The Master PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisableSmpuMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisableSmpuMasterStruct(PROT_SMPU_SMPU_STRUCT_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 &= ~_VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PROT_SMPU_SMPU_STRUCT_ATT1_ENABLED, base->ATT1) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnableSmpuSlaveStruct
****************************************************************************//**
*
* \brief Enables the Slave SMPU structure.
*
* This is an SMPU slave struct enable function. The SMPU protection settings
* will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was enabled
*   CY_PROT_FAILURE      | The Slave PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnableSmpuSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnableSmpuSlaveStruct(PROT_SMPU_SMPU_STRUCT_Type* base)
{   
    cy_en_prot_status_t status;
    
    base->ATT0 |= _VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PROT_SMPU_SMPU_STRUCT_ATT0_ENABLED, base->ATT0) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisableSmpuSlaveStruct
****************************************************************************//**
*
* \brief Disables the Slave SMPU structure.
*
* This is an SMPU slave struct disable function. The SMPU protection settings
* will seize to take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was disabled
*   CY_PROT_FAILURE      | The Slave PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisableSmpuSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisableSmpuSlaveStruct(PROT_SMPU_SMPU_STRUCT_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT0 &= ~_VAL2FLD(PROT_SMPU_SMPU_STRUCT_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PROT_SMPU_SMPU_STRUCT_ATT0_ENABLED, base->ATT0) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuProgMasterStruct
****************************************************************************//**
*
* \brief Configures a Programmable Peripheral Protection Unit (PPU PROG) master 
* protection struct with its protection attributes. 
*
* This function configures the master struct governing the corresponding slave
* struct pair. It is a mechanism to protect the slave PPU PROG struct. Since
* the memory location of the slave struct is known, the address, regionSize and
* subregions of the configuration struct are not applicable.
*
* Note that only the user/privileged write permissions are configurable. The 
* read and execute permissions are read-only and cannot be configured.
*
* \param base
* The register base address of the protection struct being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU PROG master struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuProgMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuProgMasterStruct(PERI_PPU_PR_Type* base, const cy_stc_ppu_prog_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_PROG_MS_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_PROG_MS_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_PROG_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR1 is read only. Only configure ATT1 */
        attReg = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_PPU_PR_ATT1_NS, !(config->secure))
                    | _VAL2FLD(PERI_PPU_PR_ATT1_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only for master structs */
                    | _VAL2FLD(PERI_PPU_PR_ATT1_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_PROG_ATT1_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT1 = attReg;
            status = ((base->ATT1 & CY_PROT_PPU_PROG_ATT1_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }

    return status;
}

/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuProgSlaveStruct
****************************************************************************//**
*
* \brief Configures a Programmable Peripheral Protection Unit (PPU PROG) slave
* protection struct with its protection attributes. 
* 
* This function configures the slave struct of a PPU PROG pair, which can 
* protect any peripheral memory region in a device from invalid bus master 
* accesses.
*
* Note that the user/privileged execute accesses are read-only and are always 
* enabled. 
*
* \param base
* The register base address of the protection structure being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU PROG slave struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuProgSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuProgSlaveStruct(PERI_PPU_PR_Type* base, const cy_stc_ppu_prog_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t addrReg;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_PROG_SL_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_PROG_SL_PERM_VALID(config->privPermission));
    CY_ASSERT_L3(CY_PROT_IS_REGION_SIZE_VALID(config->regionSize));

    if(((uint32_t)config->pcMask & CY_PROT_PPU_PROG_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        addrReg= _VAL2FLD(PERI_PPU_PR_ADDR0_SUBREGION_DISABLE, config->subregions)
                    | _VAL2FLD(PERI_PPU_PR_ADDR0_ADDR24, (uint32_t)((uint32_t)config->address >> CY_PROT_ADDR_SHIFT));
        attReg= ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_PPU_PR_ATT0_NS, !(config->secure))
                    | _VAL2FLD(PERI_PPU_PR_ATT0_PC_MASK_15_TO_1, config->pcMask)
                    | _VAL2FLD(PERI_PPU_PR_ATT0_REGION_SIZE, config->regionSize)
                    | _VAL2FLD(PERI_PPU_PR_ATT0_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_PROG_ATT0_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT0 = attReg;
            base->ADDR0 = addrReg;
            status = ((base->ADDR0 != addrReg) || ((base->ATT0 & CY_PROT_PPU_PROG_ATT0_MASK) != attReg))
                        ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuProgMasterStruct
****************************************************************************//**
*
* \brief Enables the Master PPU PROG structure.
*
* This is a PPU PROG master struct enable function. The PPU PROG protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was enabled
*   CY_PROT_FAILURE      | The Master PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuProgMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuProgMasterStruct(PERI_PPU_PR_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 |= _VAL2FLD(PERI_PPU_PR_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_PR_ATT1_ENABLED, base->ATT1) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuProgMasterStruct
****************************************************************************//**
*
* \brief Disables the Master PPU PROG structure.
*
* This is a PPU PROG master struct disable function. The PPU PROG protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was disabled
*   CY_PROT_FAILURE      | The Master PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuProgMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuProgMasterStruct(PERI_PPU_PR_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 &= ~_VAL2FLD(PERI_PPU_PR_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_PR_ATT1_ENABLED, base->ATT1) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuProgSlaveStruct
****************************************************************************//**
*
* \brief Enables the Slave PPU PROG structure.
*
* This is a PPU PROG slave struct enable function. The PPU PROG protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was enabled
*   CY_PROT_FAILURE      | The Slave PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuProgSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuProgSlaveStruct(PERI_PPU_PR_Type* base)
{   
    cy_en_prot_status_t status;
    
    base->ATT0 |= _VAL2FLD(PERI_PPU_PR_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_PR_ATT0_ENABLED, base->ATT0) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuProgSlaveStruct
****************************************************************************//**
*
* \brief Disables the Slave PPU PROG structure.
*
* This is a PPU PROG slave struct disable function. The PPU PROG protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was disabled
*   CY_PROT_FAILURE      | The Slave PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuProgSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuProgSlaveStruct(PERI_PPU_PR_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT0 &= ~_VAL2FLD(PERI_PPU_PR_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_PR_ATT0_ENABLED, base->ATT0) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuFixedGrMasterStruct
****************************************************************************//**
*
* \brief Configures a Fixed Peripheral Group Protection Unit (PPU GR) master 
* protection struct with its protection attributes. 
*
* This function configures the master struct governing the corresponding slave
* struct pair. It is a mechanism to protect the slave PPU GR struct. Since
* the memory location of the slave struct is known, the address, regionSize and
* subregions of the configuration struct are not applicable.
*
* Note that only the user/privileged write permissions are configurable. The 
* read and execute permissions are read-only and cannot be configured.
*
* \param base
* The register base address of the protection struct being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU GR master struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuFixedGrMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuFixedGrMasterStruct(PERI_PPU_GR_Type* base, const cy_stc_ppu_gr_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_FIXED_MS_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_FIXED_MS_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_FIXED_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR1 is read only. Only configure ATT1 */
        attReg = (((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK))
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_PPU_GR_ATT1_NS, !(config->secure))
                    | _VAL2FLD(PERI_PPU_GR_ATT1_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only for master structs */
                    | _VAL2FLD(PERI_PPU_GR_ATT1_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_GR_ATT1_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT1 = attReg;
            status = ((base->ATT1 & CY_PROT_PPU_GR_ATT1_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuFixedGrSlaveStruct
****************************************************************************//**
*
* \brief Configures a Fixed Peripheral Group Protection Unit (PPU GR) slave
* protection struct with its protection attributes. 
* 
* This function configures the slave struct of a PPU GR pair, which can 
* protect an entire peripheral MMIO group from invalid bus master accesses.
* Refer to the device Technical Reference manual for details on peripheral
* MMIO grouping and which peripherals belong to which groups.
*
* Each fixed PPU GR is devoted to a defined MMIO group. Hence the address, 
* regionSize and subregions of the configuration struct are not applicable.
*
* Note that the user/privileged execute accesses are read-only and are always 
* enabled. 
*
* \param base
* The register base address of the protection structure being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU GR slave struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuFixedGrSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuFixedGrSlaveStruct(PERI_PPU_GR_Type* base, const cy_stc_ppu_gr_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_FIXED_SL_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_FIXED_SL_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_FIXED_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR0 is read only. Only configure ATT0 */
        attReg = (uint32_t)(((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK))
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_PPU_GR_ATT0_NS, !(config->secure))
                    | _VAL2FLD(PERI_PPU_GR_ATT0_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only */
                    | _VAL2FLD(PERI_PPU_GR_ATT0_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_GR_ATT0_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT0 = attReg;
            status = ((base->ATT0 & CY_PROT_PPU_GR_ATT0_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuFixedGrMasterStruct
****************************************************************************//**
*
* \brief Enables the Master PPU GR structure.
*
* This is a PPU GR master struct enable function. The PPU GR protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was enabled
*   CY_PROT_FAILURE      | The Master PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuFixedGrMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuFixedGrMasterStruct(PERI_PPU_GR_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 |= _VAL2FLD(PERI_PPU_GR_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_GR_ATT1_ENABLED, base->ATT1) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuFixedGrMasterStruct
****************************************************************************//**
*
* \brief Disables the Master PPU GR structure.
*
* This is a PPU GR master struct disable function. The PPU GR protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was disabled
*   CY_PROT_FAILURE      | The Master PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuFixedGrMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuFixedGrMasterStruct(PERI_PPU_GR_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 &= ~_VAL2FLD(PERI_PPU_GR_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_GR_ATT1_ENABLED, base->ATT1) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuFixedGrSlaveStruct
****************************************************************************//**
*
* \brief Enables the Slave PPU GR structure.
*
* This is a PPU GR slave struct enable function. The PPU GR protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was enabled
*   CY_PROT_FAILURE      | The Slave PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuFixedGrSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuFixedGrSlaveStruct(PERI_PPU_GR_Type* base)
{   
    cy_en_prot_status_t status;
    
    base->ATT0 |= _VAL2FLD(PERI_PPU_GR_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_GR_ATT0_ENABLED, base->ATT0) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuFixedGrSlaveStruct
****************************************************************************//**
*
* \brief Disables the Slave PPU GR structure.
*
* This is a PPU GR slave struct disable function. The PPU GR protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was disabled
*   CY_PROT_FAILURE      | The Slave PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuFixedGrSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuFixedGrSlaveStruct(PERI_PPU_GR_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT0 &= ~_VAL2FLD(PERI_PPU_GR_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_PPU_GR_ATT0_ENABLED, base->ATT0) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuFixedSlMasterStruct
****************************************************************************//**
*
* \brief Configures a Fixed Peripheral Slave Protection Unit (PPU SL) master 
* protection struct with its protection attributes. 
*
* This function configures the master struct governing the corresponding slave
* struct pair. It is a mechanism to protect the slave PPU SL struct. Since
* the memory location of the slave struct is known, the address, regionSize and
* subregions of the configuration struct are not applicable.
*
* Note that only the user/privileged write permissions are configurable. The 
* read and execute permissions are read-only and cannot be configured.
*
* \param base
* The register base address of the protection struct being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU SL master struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuFixedSlMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuFixedSlMasterStruct(PERI_GR_PPU_SL_Type* base, const cy_stc_ppu_sl_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_FIXED_MS_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_FIXED_MS_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_FIXED_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR1 is read only. Only configure ATT1 */
        attReg = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_GR_PPU_SL_ATT1_NS, !(config->secure))
                    | _VAL2FLD(PERI_GR_PPU_SL_ATT1_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only for master structs */
                    | _VAL2FLD(PERI_GR_PPU_SL_ATT1_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_SL_ATT1_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT1 = attReg;
            status = ((base->ATT1 & CY_PROT_PPU_SL_ATT1_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuFixedSlSlaveStruct
****************************************************************************//**
*
* \brief Configures a Fixed Peripheral Slave Protection Unit (PPU SL) slave
* protection struct with its protection attributes. 
* 
* This function configures the slave struct of a PPU SL pair, which can 
* protect an entire peripheral slave instance from invalid bus master accesses.
* For example, TCPWM0, TCPWM1, SCB0 and SCB1 etc.
*
* Each fixed PPU SL is devoted to a defined peripheral slave. Hence the address, 
* regionSize and subregions of the configuration struct are not applicable.
*
* Note that the user/privileged execute accesses are read-only and are always 
* enabled. 
*
* \param base
* The register base address of the protection structure being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU SL slave struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuFixedSlSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuFixedSlSlaveStruct(PERI_GR_PPU_SL_Type* base, const cy_stc_ppu_sl_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_FIXED_SL_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_FIXED_SL_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_FIXED_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR0 is read only. Only configure ATT0 */
        attReg = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_GR_PPU_SL_ATT0_NS, !(config->secure))
                    | _VAL2FLD(PERI_GR_PPU_SL_ATT0_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only */
                    | _VAL2FLD(PERI_GR_PPU_SL_ATT0_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_SL_ATT0_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT0 = attReg;
            status = ((base->ATT0 & CY_PROT_PPU_SL_ATT0_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuFixedSlMasterStruct
****************************************************************************//**
*
* \brief Enables the Master PPU SL structure.
*
* This is a PPU SL master struct enable function. The PPU SL protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was enabled
*   CY_PROT_FAILURE      | The Master PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuFixedSlMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuFixedSlMasterStruct(PERI_GR_PPU_SL_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 |= _VAL2FLD(PERI_GR_PPU_SL_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_SL_ATT1_ENABLED, base->ATT1) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuFixedSlMasterStruct
****************************************************************************//**
*
* \brief Disables the Master PPU SL structure.
*
* This is a PPU SL master struct disable function. The PPU SL protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was disabled
*   CY_PROT_FAILURE      | The Master PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuFixedSlMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuFixedSlMasterStruct(PERI_GR_PPU_SL_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 &= ~_VAL2FLD(PERI_GR_PPU_SL_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_SL_ATT1_ENABLED, base->ATT1) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuFixedSlSlaveStruct
****************************************************************************//**
*
* \brief Enables the Slave PPU SL structure.
*
* This is a PPU SL slave struct enable function. The PPU SL protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was enabled
*   CY_PROT_FAILURE      | The Slave PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuFixedSlSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuFixedSlSlaveStruct(PERI_GR_PPU_SL_Type* base)
{   
    cy_en_prot_status_t status;
    
    base->ATT0 |= _VAL2FLD(PERI_GR_PPU_SL_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_SL_ATT0_ENABLED, base->ATT0) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuFixedSlSlaveStruct
****************************************************************************//**
*
* \brief Disables the Slave PPU SL structure.
*
* This is a PPU SL slave struct disable function. The PPU SL protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was disabled
*   CY_PROT_FAILURE      | The Slave PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuFixedSlSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuFixedSlSlaveStruct(PERI_GR_PPU_SL_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT0 &= ~_VAL2FLD(PERI_GR_PPU_SL_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_SL_ATT0_ENABLED, base->ATT0) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuFixedRgMasterStruct
****************************************************************************//**
*
* \brief Configures a Fixed Peripheral Region Protection Unit (PPU RG) master 
* protection struct with its protection attributes. 
*
* This function configures the master struct governing the corresponding slave
* struct pair. It is a mechanism to protect the slave PPU RG struct. Since
* the memory location of the slave struct is known, the address, regionSize and
* subregions of the configuration struct are not applicable.
*
* Note that only the user/privileged write permissions are configurable. The 
* read and execute permissions are read-only and cannot be configured.
*
* \param base
* The register base address of the protection struct being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU RG master struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuFixedRgMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuFixedRgMasterStruct(PERI_GR_PPU_RG_Type* base, const cy_stc_ppu_rg_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_FIXED_MS_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_FIXED_MS_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_FIXED_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR1 is read only. Only configure ATT1 */
        attReg = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_GR_PPU_RG_ATT1_NS, !(config->secure))
                    | _VAL2FLD(PERI_GR_PPU_RG_ATT1_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only for master structs */
                    | _VAL2FLD(PERI_GR_PPU_RG_ATT1_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_RG_ATT1_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT1 = attReg;
            status = ((base->ATT1 & CY_PROT_PPU_RG_ATT1_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_ConfigPpuFixedRgSlaveStruct
****************************************************************************//**
*
* \brief Configures a Fixed Peripheral Region Protection Unit (PPU RG) slave
* protection struct with its protection attributes. 
* 
* This function configures the slave struct of a PPU RG pair, which can 
* protect specified regions of peripheral instances. For example, individual
* DW channel structs, SMPU structs, and IPC structs etc.
*
* Each fixed PPU RG is devoted to a defined peripheral region. Hence the address, 
* regionSize and subregions of the configuration struct are not applicable.
*
* Note that the user/privileged execute accesses are read-only and are always 
* enabled. 
*
* \param base
* The register base address of the protection structure being configured.
* 
* \param config
* Initialization structure with all the protection attributes.
* 
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | PPU RG slave struct was successfully configured
*   CY_PROT_FAILURE      | The resource is locked
*   CY_PROT_BAD_PARAM    | An incorrect/invalid parameter was passed
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_ConfigPpuFixedRgSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_ConfigPpuFixedRgSlaveStruct(PERI_GR_PPU_RG_Type* base, const cy_stc_ppu_rg_cfg_t* config)
{
    cy_en_prot_status_t status;
    uint32_t attReg;
    
    CY_ASSERT_L1(NULL != base);
    CY_ASSERT_L3(CY_PROT_IS_FIXED_SL_PERM_VALID(config->userPermission));
    CY_ASSERT_L3(CY_PROT_IS_FIXED_SL_PERM_VALID(config->privPermission));
    
    if(((uint32_t)config->pcMask & CY_PROT_PPU_FIXED_PC_LIMIT_MASK) != 0UL) 
    {
        /* PC mask out of range - not supported in device */
        status = CY_PROT_BAD_PARAM;
    }
    else
    {
        /* ADDR0 is read only. Only configure ATT0 */
        attReg = ((uint32_t)config->userPermission & CY_PROT_ATT_PERMISSION_MASK)
                    | (uint32_t)(((uint32_t)config->privPermission & CY_PROT_ATT_PERMISSION_MASK) << CY_PROT_ATT_PRIV_PERMISSION_SHIFT)
                    | _VAL2FLD(PERI_GR_PPU_RG_ATT0_NS, !(config->secure))
                    | _VAL2FLD(PERI_GR_PPU_RG_ATT0_PC_MASK_15_TO_1, config->pcMask)
                    /* No region size - read only */
                    | _VAL2FLD(PERI_GR_PPU_RG_ATT0_PC_MATCH, config->pcMatch);
        if ((attReg & CY_PROT_PPU_RG_ATT0_MASK) != attReg)
        {
            /* Invalid parameter was passed */
            status = CY_PROT_BAD_PARAM;
        }
        else
        {
            base->ATT0 = attReg;
            status = ((base->ATT0 & CY_PROT_PPU_RG_ATT0_MASK) != attReg) ? CY_PROT_FAILURE : CY_PROT_SUCCESS;
        }
    }
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuFixedRgMasterStruct
****************************************************************************//**
*
* \brief Enables the Master PPU RG structure.
*
* This is a PPU RG master struct enable function. The PPU RG protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was enabled
*   CY_PROT_FAILURE      | The Master PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuFixedRgMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuFixedRgMasterStruct(PERI_GR_PPU_RG_Type* base)
{
    cy_en_prot_status_t status;

    base->ATT1 |= _VAL2FLD(PERI_GR_PPU_RG_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_RG_ATT1_ENABLED, base->ATT1) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuFixedRgMasterStruct
****************************************************************************//**
*
* \brief Disables the Master PPU RG structure.
*
* This is a PPU RG master struct disable function. The PPU RG protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Master PU struct was disabled
*   CY_PROT_FAILURE      | The Master PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuFixedRgMasterStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuFixedRgMasterStruct(PERI_GR_PPU_RG_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT1 &= ~_VAL2FLD(PERI_GR_PPU_RG_ATT1_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_RG_ATT1_ENABLED, base->ATT1) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_EnablePpuFixedRgSlaveStruct
****************************************************************************//**
*
* \brief Enables the Slave PPU RG structure.
*
* This is a PPU RG slave struct enable function. The PPU RG protection 
* settings will take effect after successful completion of this function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was enabled
*   CY_PROT_FAILURE      | The Slave PU struct is disabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_EnablePpuFixedRgSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_EnablePpuFixedRgSlaveStruct(PERI_GR_PPU_RG_Type* base)
{   
    cy_en_prot_status_t status;
    
    base->ATT0 |= _VAL2FLD(PERI_GR_PPU_RG_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_RG_ATT0_ENABLED, base->ATT0) != CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


/*******************************************************************************
* Function Name: Cy_Prot_DisablePpuFixedRgSlaveStruct
****************************************************************************//**
*
* \brief Disables the Slave PPU RG structure.
*
* This is a PPU RG slave struct disable function. The PPU RG protection 
* settings will seize to take effect after successful completion of this 
* function call.
*
* \param base
* The base address for the protection unit structure being configured. 
*
* \return
* Status of the function call.
*
*   Status               | Description
*   ------------         | -----------
*   CY_PROT_SUCCESS      | The Slave PU struct was disabled
*   CY_PROT_FAILURE      | The Slave PU struct is enabled and possibly locked
*
* \funcusage
* \snippet prot/prot_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_Prot_DisablePpuFixedRgSlaveStruct
*
*******************************************************************************/
cy_en_prot_status_t Cy_Prot_DisablePpuFixedRgSlaveStruct(PERI_GR_PPU_RG_Type* base)
{
    cy_en_prot_status_t status;
    
    base->ATT0 &= ~_VAL2FLD(PERI_GR_PPU_RG_ATT0_ENABLED, CY_PROT_STRUCT_ENABLE);
    status = (_FLD2VAL(PERI_GR_PPU_RG_ATT0_ENABLED, base->ATT0) == CY_PROT_STRUCT_ENABLE) ?
                CY_PROT_FAILURE : CY_PROT_SUCCESS;
    
    return status;
}


#if defined(__cplusplus)
}
#endif


/* [] END OF FILE */
