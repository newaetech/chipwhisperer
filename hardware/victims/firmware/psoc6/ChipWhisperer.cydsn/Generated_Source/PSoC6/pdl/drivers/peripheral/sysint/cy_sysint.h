/***************************************************************************//**
* \file cy_sysint.h
* \version 1.10
*
* \brief
* Provides an API declaration of the SysInt driver
*
********************************************************************************
* \copyright
* Copyright 2016-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

/**
* \defgroup group_sysint System Interrupt (SysInt)
* \{
* The SysInt driver provides an API to configure the device peripheral interrupts.
* It provides a lightweight interface to complement
* the <a href="https://www.keil.com/pack/doc/CMSIS/Core/html/group__NVIC__gr.html">CMSIS core NVIC API</a>.
* The provided functions are applicable for all cores in a device and they can
* be used to configure and connect device peripheral interrupts to one or more
* cores.
*
* \section group_sysint_driver_usage Driver Usage
*
* \subsection group_sysint_initialization Initialization
*
* Interrupt numbers are defined in a device-specific header file, such as 
* cy8c68237bz_ble.h.
*
* To configure an interrupt, call Cy_SysInt_Init(). Populate
* the configuration structure (cy_stc_sysint_t) and pass it as a parameter
* along with the ISR address. This initializes the interrupt and
* instructs the CPU to jump to the specified ISR vector upon a valid trigger.
* 
* On the Cortex M4, system interrupt source 'n' is connected to the 
* corresponding IRQn. Deep-sleep capable interrupts are allocated to deep-sleep
* capable IRQn channels. 
* 
* The CM0+ core supports up to 32 interrupt channels (IRQn 0-31). To allow all device
* interrupts to be routable to the NVIC of this core, there is a 240:1 multiplexer
* at each of the 32 NVIC channels. The configuration structure (cy_stc_sysint_t)
* must specify the device interrupt source (cm0pSrc) that feeds into the CM0+ NVIC
* mux (intrSrc). CM0+ NVIC channels 0-2 and 30-31 are reserved for system use.
*
* In addition, on the CM0+ core, a deep-sleep capable interrupt must be routed 
* to a deep-sleep capable IRQn channel. Otherwise it won't work. The device 
* header file identifies which IRQn channels are deep-sleep capable.
* 
* \subsection group_sysint_enable Enable
* 
* After initializing an interrupt, use the CMSIS Core
* <a href="https://www.keil.com/pack/doc/CMSIS/Core/html/group__NVIC__gr.html#ga530ad9fda2ed1c8b70e439ecfe80591f">NVIC_EnableIRQ()</a> function
* to enable it. Given an initialization structure named config,  
* the function should be called as follows:
* \code
* NVIC_EnableIRQ(config.intrSrc)
* \endcode
*
* \subsection group_sysint_service Writing an interrupt service routine
*
* Servicing interrupts in the Peripheral Drivers should follow a prescribed
* recipe to ensure all interrupts are serviced and duplicate interrupts are not
* received. Any peripheral-specific register that must be written to clear the
* source of the interrupt should be written as soon as possible in the interrupt
* service routine. However, note that due to buffering on the output bus to the
* peripherals, the write clearing the interrupt may be delayed. After performing
* the normal interrupt service that should respond to the interrupting
* condition, the interrupt register that was initially written to clear the
* register should be read before returning from the interrupt service routine.
* This read ensures that the initial write has been flushed out to the hardware.
* Note, no additional processing should be performed based on the result of this
* read, as this read is just intended to ensure the write operation is flushed.
*
* This final read may indicate a pending interrupt. What this means is that in
* the interval between when the write actually happened at the peripheral and
* when the read actually happened at the peripheral, an interrupting condition
* occurred. This is ok and a return from the interrupt is still the correct
* action. As soon as conditions warrant, meaning interrupts are enabled and
* there are no higher priority interrupts pending, the interrupt will be
* triggered again to service the additional condition.
*
* \section group_sysint_section_configuration_considerations Configuration Considerations
*
* CM0+ <a href="https://www.keil.com/pack/doc/CMSIS/Core/html/group__NVIC__gr.html#ga7e1129cd8a196f4284d41db3e82ad5c8">NVIC IRQn</a>
* channels 0-2 and 30-31 are reserved for system use, inter-processor communication,
* and the crypto driver. Other IRQn channels (3-29) are available to the user application.
*
* Deep-sleep wakeup-capability is determined by the CPUSS_CM0_DPSLP_IRQ_NR 
* parameter, where the first N number of muxes (NvicMux0 ... NvicMuxN-1) have the 
* capability to trigger deep-sleep interrupts. A deep-sleep capable interrupt source 
* must be connected to one of these muxes to be able to trigger in deep-sleep. 
* Refer to the IRQn_Type definition in the device header.
*
* The default interrupt handler functions are defined as weak functions in the
* startup file. Defining these in the user application will allow the linker to
* place them in the Flash vector table. This avoids the need for a RAM vector table.
* However in this scenario, interrupt handler re-location at run-time is not possible,
* unless the vector table is relocated to RAM.
*
* \section group_sysint_more_information More Information
*
* Refer to the technical reference manual (TRM) and the device datasheet.
*
* \section group_sysint_MISRA MISRA-C Compliance
* <table class="doxtable">
*   <tr>
*     <th>MISRA Rule</th>
*     <th>Rule Class (Required/Advisory)</th>
*     <th>Rule Description</th>
*     <th>Description of Deviation(s)</th>
*   </tr>
*   <tr>
*     <td>2.3</td>
*     <td>A</td>
*     <td>Nested comments are not recognized in the ISO standard.</td>
*     <td>
*         The comments provide the useful WEB link to the additional documentation.</td>
*   </tr>
*   <tr>
*     <td>8.12</td>
*     <td>R</td>
*     <td>Array declared with unknown size.</td>
*     <td>
*         __Vectors and __ramVectors arrays can have the different size depend on the selected device.</td>
*   </tr>
* </table>
*
* \section group_sysint_changelog Changelog
* <table class="doxtable">
*   <tr><th>Version</th><th>Changes</th><th>Reason for Change</th></tr>
*   <tr>
*     <td>1.10</td>
*     <td>Cy_SysInt_GetState() function is redefined to call NVIC_GetEnableIRQ().</td>
*     <td></td>
*   </tr>
*   <tr>
*     <td>1.0</td>
*     <td>Initial version</td>
*     <td></td>
*   </tr>
* </table>
*
* \defgroup group_sysint_macros Macros
* \defgroup group_sysint_globals Global variables
* \defgroup group_sysint_functions Functions
* \defgroup group_sysint_data_structures Data Structures
* \defgroup group_sysint_enums Enumerated Types
*/


#if !defined(CY_SYSINT_H)
#define CY_SYSINT_H

#include <stddef.h>
#include "syslib/cy_syslib.h"
#include "cy_device_headers.h"

#if defined(__cplusplus)
extern "C" {
#endif


/***************************************
*       Global Variable
***************************************/

/**
* \addtogroup group_sysint_globals
* \{
*/

extern const cy_israddress __Vectors[]; /**< Vector table in Flash */
extern cy_israddress __ramVectors[]; /**< Relocated vector table in SRAM */

/** \} group_sysint_globals */


/***************************************
*       Global Interrupt
***************************************/

/**
* \addtogroup group_sysint_macros
* \{
*/

/** Driver major version */
#define CY_SYSINT_DRV_VERSION_MAJOR    1

/** Driver minor version */
#define CY_SYSINT_DRV_VERSION_MINOR    10

/** SysInt driver ID */
#define CY_SYSINT_ID CY_PDL_DRV_ID(0x15u)

/** \} group_sysint_macros */


/***************************************
*       Enumeration
***************************************/

/**
* \addtogroup group_sysint_enums
* \{
*/

/**
* SysInt Driver error codes
*/
typedef enum 
{
    CY_SYSINT_SUCCESS   = 0x00u,                                      /**< Returned successful */
    CY_SYSINT_BAD_PARAM = CY_SYSINT_ID | CY_PDL_STATUS_ERROR | 0x01u, /**< Bad parameter was passed */
} cy_en_sysint_status_t;

/** \} group_sysint_enums */


/***************************************
*       Configuration Structure
***************************************/

/**
* \addtogroup group_sysint_data_structures
* \{
*/

/**
* Initialization configuration structure for a single interrupt channel
*/
typedef struct {
    IRQn_Type       intrSrc;        /**< Interrupt source */
#if (CY_CPU_CORTEX_M0P)
    cy_en_intr_t    cm0pSrc;        /**< (CM0+ only) Maps cm0pSrc device interrupts to intrSrc */
#endif
    uint32_t        intrPriority;   /**< Interrupt priority number (Refer to __NVIC_PRIO_BITS) */
} cy_stc_sysint_t;

/** \} group_sysint_data_structures */


/***************************************
*              Constants
***************************************/

/** \cond INTERNAL */

#define CY_INT_IRQ_BASE            (16u)    /**< Start location of interrupts in the vector table */
#define CY_SYSINT_STATE_MASK       (1ul)    /**< Mask for interrupt state */
#define CY_SYSINT_STIR_MASK        (0xfful) /**< Mask for software trigger interrupt register */
#define CY_SYSINT_CM0P_MUX_MASK    (0xfful) /**< CM0+ NVIC multiplexer mask */
#define CY_SYSINT_CM0P_MUX_SHIFT   (2u)     /**< CM0+ NVIC multiplexer shift */
#define CY_SYSINT_CM0P_MUX_SCALE   (3u)     /**< CM0+ NVIC multiplexer scaling value */

#define CY_SYSINT_CM0P_MUX0        (0u)     /**< CM0+ NVIC multiplexer register 0 */
#define CY_SYSINT_CM0P_MUX1        (1u)     /**< CM0+ NVIC multiplexer register 1 */
#define CY_SYSINT_CM0P_MUX2        (2u)     /**< CM0+ NVIC multiplexer register 2 */
#define CY_SYSINT_CM0P_MUX3        (3u)     /**< CM0+ NVIC multiplexer register 3 */
#define CY_SYSINT_CM0P_MUX4        (4u)     /**< CM0+ NVIC multiplexer register 4 */
#define CY_SYSINT_CM0P_MUX5        (5u)     /**< CM0+ NVIC multiplexer register 5 */
#define CY_SYSINT_CM0P_MUX6        (6u)     /**< CM0+ NVIC multiplexer register 6 */
#define CY_SYSINT_CM0P_MUX7        (7u)     /**< CM0+ NVIC multiplexer register 7 */

/* Parameter validation macros */
#define CY_SYSINT_IS_PRIORITY_VALID(intrPriority)     ((uint32_t)(1UL << __NVIC_PRIO_BITS) > (intrPriority))
#define CY_SYSINT_IS_VECTOR_VALID(userIsr)            (NULL != (userIsr))  

/** \endcond */


/***************************************
*       Function Prototypes
***************************************/

/**
* \addtogroup group_sysint_functions
* \{
*/
cy_en_sysint_status_t Cy_SysInt_Init(const cy_stc_sysint_t* config, cy_israddress userIsr);
cy_israddress Cy_SysInt_SetVector(IRQn_Type intrSrc, cy_israddress userIsr);
cy_israddress Cy_SysInt_GetVector(IRQn_Type intrSrc);
__STATIC_INLINE void Cy_SysInt_SetIntSourceNMI(IRQn_Type intrSrc);
__STATIC_INLINE IRQn_Type Cy_SysInt_GetIntSourceNMI(void);
#if (CY_CPU_CORTEX_M0P) || defined (CY_DOXYGEN)
    void Cy_SysInt_SetIntSource(IRQn_Type intrSrc, cy_en_intr_t cm0pSrc);
    cy_en_intr_t Cy_SysInt_GetIntSource(IRQn_Type intrSrc);
#else
    __STATIC_INLINE void Cy_SysInt_SoftwareTrig(IRQn_Type intrSrc);
#endif


/*******************************************************************************
* Function Name: Cy_SysInt_SetIntSourceNMI
****************************************************************************//**
*
* \brief Sets the interrupt source of NMI.
*
* The interrupt source must be a positive number. Setting the value to 
* "unconnected_IRQn" (240) disconnects the interrupt source from the NMI. 
*
* \param intrSrc
* Interrupt source
*
* \funcusage
* \snippet sysint/sysint_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_SysInt_SetIntSourceNMI
*
* \note The CM0+ NMI is used for performing system calls that execute out of ROM.
* Hence modification of the NMI source is strongly discouraged. However if it 
* must be updated, the NMI source must be provided from the cy_en_intr_t enum
* as it is a direct connection to the interrupt source.
*
*******************************************************************************/
__STATIC_INLINE void Cy_SysInt_SetIntSourceNMI(IRQn_Type intrSrc)
{
    #if CY_CPU_CORTEX_M0P
        CPUSS->CM0_NMI_CTL = (uint32_t)intrSrc;
    #else
        CPUSS->CM4_NMI_CTL = (uint32_t)intrSrc;
    #endif
}


/*******************************************************************************
* Function Name: Cy_SysInt_GetIntSourceNMI
****************************************************************************//**
*
* \brief Gets the interrupt source of the NMI.
*
* \return
* Interrupt Source. A value of "unconnected_IRQn" (240) means that there is no 
* interrupt source for the NMI, and it can be only be triggered through software.
*
* \funcusage
* \snippet sysint/sysint_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_SysInt_SetIntSourceNMI
*
*******************************************************************************/
__STATIC_INLINE IRQn_Type Cy_SysInt_GetIntSourceNMI(void)
{
    #if CY_CPU_CORTEX_M0P
        return (IRQn_Type)(CPUSS->CM0_NMI_CTL);
    #else
        return (IRQn_Type)(CPUSS->CM4_NMI_CTL);
    #endif
}


#if (!CY_CPU_CORTEX_M0P) || defined (CY_DOXYGEN)
    
/*******************************************************************************
* Function Name: Cy_SysInt_SoftwareTrig
****************************************************************************//**
*
* \brief Triggers an interrupt using software (Not applicable for CM0+).
*
* \param intrSrc
* Interrupt source
*
* \funcusage
* \snippet sysint/sysint_v1_10_sut_01.cydsn/main_cm4.c snippet_Cy_SysInt_SoftwareTrig
*
* \note Only privileged software can enable unprivileged access to the
* Software Trigger Interrupt Register (STIR).
*
*******************************************************************************/
__STATIC_INLINE void Cy_SysInt_SoftwareTrig(IRQn_Type intrSrc)
{
    NVIC->STIR = (uint32_t)intrSrc & CY_SYSINT_STIR_MASK;
}

#endif

/*******************************************************************************
* Function Name: Cy_SysInt_GetState
****************************************************************************//**
*
* This function is deprecated. It invokes the NVIC_GetEnableIRQ function.
*
*******************************************************************************/
#define Cy_SysInt_GetState NVIC_GetEnableIRQ

/** \} group_sysint_functions */

#if defined(__cplusplus)
}
#endif

#endif /* CY_SYSINT_H */

/** \} group_sysint */

/* [] END OF FILE */
