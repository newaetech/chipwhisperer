/*
** ###################################################################
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright 2018 NXP
**     All rights reserved.
**
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*!
 * @file MPC5777C_features.h
 *
 * @page misra_violations MISRA-C:2012 violations
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.3, Global typedef not referenced.
 * Type used only in some modules of the SDK.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 2.5, Global macro not referenced.
 * The macros defined are used to define features for each driver, so this might be reported
 * when the analysis is made only on one driver.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Directive 4.9, Function-like macro
 * These are very simple macros used for abstracting hw implementation.
 * They help make the code easy to understand.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.1, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.2, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.4, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 5.5, identifier clash
 * The supported compilers use more than 31 significant characters for identifiers.
 *
 */

#if !defined(MPC5676R_FEATURES_H)
#define MPC5676R_FEATURES_H

/* include device_registers.h for SIU module configuration structures */
#include "MPC5676R.h"

/* ERRATA sections*/

/* @brief E9595 FlexCAN: Corrupted frame possible if Freeze Mode or Low Power Mode are
 * entered during a Bus-Off state. if the Freeze Enable bit (FRZ) of the Module Configuration
 * Register (MCR) is asserted and the Freeze Mode is requested by asserting the Halt bit (HALT) of
 * the MCR register during the Bus Off state, the transmission after exiting the Bus-Off condition
 * will be corrupted. The issue occurs only if a transmission is pending before the freeze mode request.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E9595

/* @brief E9527 FlexCAN: The transmission abort mechanism may not work properly
 * The Flexible Controller Area NEtwork (FlexCAN) is not able to abort a transmission frame and
 * the abort process may remain pending in the following cases:
 * a) If a pending abort request occurs while the FlexCAN is receiving a remote frame.
 * b) When a frame is aborted during an overload frame after a frame reception.
 * c) When an abort is requested while the FlexCAN has just started a transmission.
 * d) When Freeze Mode request occurs and the FlexCAN has just started a transmission.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E9527

/* @brief E8341 FlexCAN: Entering Freeze Mode or Low Power Mode from Normal Mode
 * can cause the module to stop operating
 * In the Flexible Controller Area Network (FlexCAN) module, if the Freeze Enable bit (FRZ) in
 * the Module Configuration Register (MCR) is asserted and the Freeze Mode is requested by
 * asserting the Halt bit (HALT) in MCR, in some cases, the Freeze Mode Acknowledge bit
 * (FRZACK) in the MCR may never be asserted.
 * In addition, the Low-Power Mode Acknowledge bit (LPMACK) in the MCR may never be
 * asserted in some cases when the Low-Power Mode is requested
 * Under the two scenarios described above, the loss of ACK assertion (FRZACK, LPMACK) causes a
 * lock condition. A soft reset action is required in order to remove the lock condition.
 * The change from Normal Mode to Low-Power Mode cannot be done directly. Instead, first
 * change mode from Normal to Freeze Mode, and then from Freeze to Low-Power Mode.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E8341

/* @brief E6906 SDADC: Invalid conversion data when output settling delay value is less than 23.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E6906

/* @brief E8631 SDADC: Low threshold watchdog cannot be used with signed data.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E8631

/* @brief E8710 SDADC: Watchdog Crossover event missed if FM Peripheral Clock frequency is
 * less than or equal to the sigma-delta ADC clock frequency.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E8710

/* @brief E10415 SDADC: Additional DMA requests generated when using watchdog threshold
 * crossover event.
 * This errata applies to mask 3N45H for MPC5777C CPU.
 */
#define ERRATA_E10415

/* @brief E7204: SENT: Number of Expected Edges Error status flag spuriously set when
 * operating with Option 1 of the Successive Calibration Check method */
#define ERRATA_E7204

/* @brief E7425: SENT: Unexpected NUM_EDGES_ERR error in certain conditions when
 * message has a pause pulse */
#define ERRATA_E7425

/* @brief Number of cores. */
#define NUMBER_OF_CORES (2u)

/* WDOG module features */

/* @brief The key values to clear Soft Lock bit */
#define FEATURE_WDOG_UNLOCK_VALUE1  (0xC520U)
#define FEATURE_WDOG_UNLOCK_VALUE2  (0xD928U)

/* PIT module features */

/*! @brief PIT module has RTI channel */
#define FEATURE_PIT_HAS_RTI_CHANNEL    (1U)
/*! @brief Number of interrupt vector for channels of the PIT module */
#define FEATURE_PIT_HAS_NUM_IRQS_CHANS (PIT_IRQS_CH_COUNT)
/*! @brief PIT module has a peculiar instance */
#define FEATURE_PIT_HAS_PECULIAR_INSTANCE   (0U)
/*! @brief The default value of MDIS bit */
#define PIT_MCR_MDIS_DEFAULT                (0U)
/*! @brief PIT instance has not lifetime timer */
#define PIT_INSTANCE_HAS_NOT_LIFETIME_TIMER      (0U)

#if PIT_INSTANCE_HAS_NOT_LIFETIME_TIMER
/*! @brief PIT instance base has not lifetime timer */
#define PIT_INSTANCE_BASE_HAS_NOT_LIFETIME_TIMER   (PIT_0)
#endif

#if FEATURE_PIT_HAS_PECULIAR_INSTANCE
/*! @brief The peculiar instance */
#define PIT_PECULIAR_INSTANCE    (1U)
/*! @brief The number channel of the peculiar instance */
#define PIT_CHAN_NUM_OF_PECULIAR_INSTANCE   (4U)
#endif

#if FEATURE_PIT_HAS_RTI_CHANNEL
/*! @brief The default value of MDIS-RTI bit */
#define PIT_MCR_MDIS_RTI_DEFAULT            (0U)
/*! @brief Clock names for RTI. */
#define RTI_CLOCK_NAMES    {PITRTI0_CLK}
#endif
/*! @brief Clock names for PIT. */
#define PIT_CLOCK_NAMES    {PER_CLK}

/* SWI2C features */
#define SWI2C_INSTANCE_COUNT                   0xFFU

/* STM module features */

/*! @brief STM module CR register has CSL bit-field */
#define FEATURE_STM_HAS_CLOCK_SELECTION (0U)
/*! @brief Number of interrupt vector for channels of the STM module */
#define FEATURE_STM_HAS_NUM_IRQS_CHANS  (2U)
/*! @brief Clock names for STM. */
#define STM_CLOCK_NAMES    { PBRIDGEx_CLK }

/* SWT module features */

/* @brief Support service mode watchpoint input */
#define FEATURE_SWT_SUPPORT_WATCHPOINT      (0U)
/* @brief Support for clock selection */
#define FEATURE_SWT_HAS_CLOCK_SELECT        (1U)
/* @brief Support for running in stop mode */
#define FEATURE_SWT_HAS_STOP_MODE           (1U)
/* @brief The key values to clear Soft Lock bit */
#define FEATURE_SWT_UNLOCK_VALUE1           (0xC520U)
#define FEATURE_SWT_UNLOCK_VALUE2           (0xD928U)
/* @brief The key values used for resetting the SWT counter in Fixed Service Sequence Mode */
#define FEATURE_SWT_FIXED_SERVICE_VALUE1    (0xA602U)
#define FEATURE_SWT_FIXED_SERVICE_VALUE2    (0xB480U)
/* @brief The reset value of the control register */
#define FEATURE_SWT_CR_RESET_VALUE          (0xFF00011AU)
/* @brief The reset value of the timeout register */
#define FEATURE_SWT_TO_RESET_VALUE          (0x3FDE0U)
/* @brief The reset value of the window register */
#define FEATURE_SWT_WN_RESET_VALUE          (0x0U)
/* @brief The reset value of the service key register */
#define FEATURE_SWT_SK_RESET_VALUE          (0x0U)
/* @brief The minimum timeout value */
#define FEATURE_SWT_TO_MINIMUM_VALUE        (0x100U)
/* @brief Sets the master access protection field */
#define FEATURE_SWT_MAP_MASK                (0xFF000000U)
#define FEATURE_SWT_MAP_SHIFT               (24U)
#define FEATURE_SWT_MAP(x)                  (((uint32_t)(((uint32_t)(x)) << FEATURE_SWT_MAP_SHIFT)) & FEATURE_SWT_MAP_MASK)

/* WKPU module features */

/* @brief WKPU core source. */
typedef enum
{
    WKPU_CORE0    = 0U    /*!< Core 0 */
} wkpu_core_t;

/* @brief The WKPU core array */
#define FEATURE_WKPU_CORE_ARRAY     \
{                                   \
    WKPU_CORE0    /*!< Core 0 */    \
}

/*! @brief The number core support for WKPU module */
#define FEATURE_WKPU_NMI_NUM_CORES                      (1U)
/*! @brief The distance between cores */
#define FEATURE_WKPU_CORE_OFFSET_SIZE                   (8U)
/*! @brief WKPU support non-maskable interrupt */
#define FEATURE_WKPU_SUPPORT_NON_MASK_INT               (1U)
/*! @brief WKPU support critical interrupt */
#define FEATURE_WKPU_SUPPORT_CRITICAL_INT               (2U)
/*! @brief WKPU support machine check request interrupt */
#define FEATURE_WKPU_SUPPORT_MACHINE_CHK_REQ            (3U)
/*! @brief WKPU  isn't generated NMI, critical interrupt, or machine check request  */
#define FEATURE_WKPU_SUPPORT_NONE_REQUEST               (4U)

/* SEMA42 module features */

/* @brief The SEMA42 Logical Bus Master Number for Core Z4a master */
#define FEATURE_SEMA42_MASTER_CORE_Z7A         (0U)
/* @brief The SEMA42 Logical Bus Master Number for Core Z4b master */
#define FEATURE_SEMA42_MASTER_CORE_Z7B         (1U)

/* @brief The SMPU Logical Bus Masters */
#define FEATURE_SEMA42_MASTER                      \
{                                                  \
FEATURE_SEMA42_MASTER_CORE_Z7A,  /* CORE Z7A */    \
FEATURE_SEMA42_MASTER_CORE_Z7B,  /* CORE Z7B */    \
}

/* @brief The notification interrupt available when failed to lock gates */
#define FEATURE_SEMA42_NOTIFICATION_INTERRUPT_AVAILABLE

#if defined (FEATURE_SEMA42_NOTIFICATION_INTERRUPT_AVAILABLE)
#define SEMA42_CPINE_INE_MASK                    0xFFFFu
#define SEMA42_CPINE_INE_SHIFT                   0u
#define SEMA42_CPINE_INE_WIDTH                   16u
#define SEMA42_CPINE_INE(x)                      (((uint16_t)(((uint16_t)(x))<<SEMA42_CPINE_INE_SHIFT))&SEMA42_CPINE_INE_MASK)

#endif		/* defined (FEATURE_SEMA42_NOTIFICATION_INTERRUPT_AVAILABLE) */

#define FEATURE_SEMA42_INTERRUPT_ENABLE_SWAPPED

#if defined FEATURE_SEMA42_INTERRUPT_ENABLE_SWAPPED
#define FEATURE_SEMA42_SWAP_MASK(X) (((uint32_t)1U) << (SEMA42_CPINE_INE_WIDTH - (X + 1U)));
#define FEATURE_SEMA42_INV_SWAP_MASK(X) ((uint32_t)(~((uint32_t)1U) << (SEMA42_CPINE_INE_WIDTH - (X + 1U))));
#endif      /* defined (FEATURE_SEMA42_INTERRUPT_ENABLE_SWAPPED) */

/* ERM module features */

/*! @brief ERM module supports bit position of last ECC event */
#define FEATURE_ERM_ECC_BIT_POS
/*! @brief ERM number of instances */
#define FEATURE_ERM_INST_COUNT (1U)
/*! @brief ERM number of Configuration/Status Registers per instance */
#define FEATURE_ERM_CRn_SRn_COUNT (3U)
/*! @brief ERM Configuration Register Base Addresses */
#define FEATURE_ERM_CRn_BASE_ADDRS {{&ERM->CR0, &ERM->CR1, &ERM->CR2}}
/*! @brief ERM Status Register Base Addresses */
#define FEATURE_ERM_SRn_BASE_ADDRS {{&ERM->SR0, &ERM->SR1, &ERM->SR2}}

/* CRC module features */

/* @brief CRC module use for C55. */
#define FEATURE_CRC_DRIVER_HARD_POLYNOMIAL
/* @brief Default CRC read transpose */
#define FEATURE_CRC_DEFAULT_READ_TRANSPOSE      false
/* @brief Default CRC write transpose */
#define FEATURE_CRC_DEFAULT_WRITE_TRANSPOSE     CRC_TRANSPOSE_BITS
/* @brief Default CRC bit mode polynomial */
#define FEATURE_CRC_DEFAULT_POLYNOMIAL          CRC_BITS_16_CCITT
/* @brief Default seed value is 0xFFFFU */
#define FEATURE_CRC_DEFAULT_SEED                (0xFFFFU)
/* @brief CRC-8-H2F Autosar polynomial support */
#define FEATURE_CRC_BITS_8_H2F                  (0U)

/* SWI2C features */
#define SWI2C_INSTANCE_COUNT                   0xFFU


/* MPU module features */

/* @brief Specifies hardware revision level. */
#define FEATURE_MPU_HARDWARE_REVISION_LEVEL              (1U)
/* @brief Has process identifier support. */
#define FEATURE_MPU_HAS_PROCESS_IDENTIFIER               (1U)
/* @brief The number of master has process identifier. */
#define FEATURE_MPU_NUM_MASTER_HAS_PROCESS_IDENTIFIER    (4U)
/* Reset value of all master access right in region 0 */
#define FEATURE_MPU_REGION_0_ACCESS_RIGHT_RESET_VALUE    (0x00618600U)
/* @brief Specifies total number of bus masters. */
#define FEATURE_MPU_MASTER_COUNT                         (7U)
/* @brief Specifies maximum number of masters which have separated
privilege rights for user and supervisor mode accesses (e.g. master 0~3). */
#define FEATURE_MPU_MAX_LOW_MASTER_NUMBER                (3U)
/* @brief Specifies maximum number of masters which have only
read and write permissions (e.g. master 4~7). */
#define FEATURE_MPU_MAX_HIGH_MASTER_NUMBER               (7U)
/* @brief Specifies number of set access control right bits for
   masters which have separated privilege rights for user and
   supervisor mode accesses (e.g. master 0~3). */
#define FEATURE_MPU_LOW_MASTER_CONTROL_WIDTH             (6U)
/* @brief Specifies number of set access control right bits for
   masters which have only read and write permissions(e.g. master 4~7). */
#define FEATURE_MPU_HIGH_MASTER_CONTROL_WIDTH            (2U)

/* @brief The MPU Logical Bus Master Number for core 0 master. */
#define FEATURE_MPU_MASTER_CORE0                         (0U)
/* @brief The MPU Logical Bus Master Number for core 1 master. */
#define FEATURE_MPU_MASTER_CORE1                         (1U)
/* @brief The MPU Logical Bus Master Number for FEC master. */
#define FEATURE_MPU_MASTER_FEC                           (2U)
/* @brief The MPU Logical Bus Master Number for CSE master. */
#define FEATURE_MPU_MASTER_CSE                           (3U)
/* @brief The MPU Logical Bus Master Number for eDMA_A master. */
#define FEATURE_MPU_MASTER_eDMA_A                        (4U)
/* @brief The MPU Logical Bus Master Number for eDMA_B master. */
#define FEATURE_MPU_MASTER_eDMA_B                        (5U)
/* @brief The MPU Logical Bus Master Number for SIPI master. */
#define FEATURE_MPU_MASTER_SIPI                          (6U)
/* @brief Specifies master number. */
#define FEATURE_MPU_MASTER                        \
{                                                 \
    FEATURE_MPU_MASTER_CORE0,     /*!< CORE 0 */  \
    FEATURE_MPU_MASTER_CORE1,     /*!< CORE 1 */  \
    FEATURE_MPU_MASTER_FEC,       /*!< FEC */     \
    FEATURE_MPU_MASTER_CSE,       /*!< CSE */     \
    FEATURE_MPU_MASTER_eDMA_A,    /*!< eDMA_A */  \
    FEATURE_MPU_MASTER_eDMA_B,    /*!< eDMA_B */  \
    FEATURE_MPU_MASTER_SIPI       /*!< SIPI */    \
}

/* @brief Specifies total number of slave ports. */
#define FEATURE_MPU_SLAVE_COUNT                          (3U)
/* @brief The MPU Slave Port Assignment for EBI. */
#define FEATURE_MPU_SLAVE_EBI                            (0U)
/* @brief The MPU Slave Port Assignment for PRAMC. */
#define FEATURE_MPU_SLAVE_PRAMC                          (1U)
/* @brief The MPU Slave Port Assignment for Peripheral Bridge. */
#define FEATURE_MPU_SLAVE_AIPS                           (2U)
/* @brief The MPU Slave Port mask. */
#define FEATURE_MPU_SLAVE_MASK                           MPU_CESR_SPERR_MASK
#define FEATURE_MPU_SLAVE_SHIFT                          MPU_CESR_SPERR_SHIFT
#define FEATURE_MPU_SLAVE_WIDTH                          MPU_CESR_SPERR_WIDTH
#define FEATURE_MPU_SLAVE(x)                             MPU_CESR_SPERR(x)

#define CMU_RCDIV_IS_NOT_SUPPORTED        (255U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU0    (0U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU1    (1U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU2    (2U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU3    (3U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU4    (4U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU5    (5U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU6    (6U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU7    (7U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU8    (8U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU9    (9U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU10   (10U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU11   (11U)
#define CMU_RCDIV_IS_SUPPORTED_BY_CMU12   (12U)

#define FEATURE_HAS_RCDIV				  CMU_RCDIV_IS_SUPPORTED_BY_CMU0
#define FEATURE_HAS_RCDIV1				  CMU_RCDIV_IS_NOT_SUPPORTED
#define FIRST_CMU						  CMU
#define CMU_RESET_DIVIDER_VALUE 		  (3U)

/*! @brief Clock names. */
typedef enum {
    /* Clock sources */
    IRCOSC_CLK                     = 0u,      /*!< IRCOSC_CLK clock source                */
    XOSC_CLK                       = 1u,      /*!< XOSC_CLK clock source                  */
    PLL0_PHI0_CLK                  = 2u,      /*!< PLL0_PHI0_CLK clock source             */
    PLL0_PHI1_CLK                  = 3u,      /*!< PLL0_PHI1_CLK clock source             */
    PLL1_PHI0_CLK                  = 4u,      /*!< PLL1_PHI0_CLK clock source             */
    END_OF_CLK_SOURCES             = 20u,      /*!< End of clock sources                  */
    /* System and common clocks */
    SCS_CLK                        = 21u,      /*!< SCS_CLK common clock                  */
    SYS_CLK                        = 22u,      /*!< SYS_CLK common clock                  */
    PLAT_CLK                       = 23u,      /*!< PLAT_CLK common clock                 */
    PBRIDGEx_CLK                   = 24u,      /*!< PBRIDGEx_CLK common clock             */
    PER_CLK_SEL_CLK                = 25u,      /*!< PER_CLK_SEL_CLK common clock          */
    PER_CLK                        = 26u,      /*!< PER_CLK common clock                  */
    CORE_CLK                       = 27u,      /*!< CORE_CLK                              */
    END_OF_SYSTEM_CLKS             = 40u,      /*!< End of common and system clocks       */
    END_OF_SCS_CLKS                = 41u,      /*!< End of SCS_CLK clocks                 */
    END_OF_CORE_CLKS               = 42u,      /*!< End of CORE_CLK clocks                */
    SIPI0_CLK                      = 43u,      /*!< SIPI0_CLK clock source                */
    END_OF_PLAT_CLKS               = 44u,      /*!< End of PLAT_CLK clocks                */
    FEC0_CLK                       = 45u,      /*!< FEC0_CLK clock source                 */
    END_OF_PBRIDGEx_CLKS           = 46u,      /*!< End of PBRIDGEx_CLK clocks            */
    ADCSD1_CLK                     = 47u,      /*!< ADCSD1_CLK clock source               */
    ADCSD2_CLK                     = 48u,      /*!< ADCSD2_CLK clock source               */
    ADCSD3_CLK                     = 49u,      /*!< ADCSD3_CLK clock source               */
    ADCSD4_CLK                     = 50u,      /*!< ADCSD4_CLK clock source               */
    ETPU0_CLK                      = 51u,      /*!< ETPU0_CLK clock source                */
    ETPU1_CLK                      = 52u,      /*!< ETPU1_CLK clock source                */
    PSI5RX0_CLK                    = 53u,      /*!< PSI5RX0_CLK clock source              */
    PSI5RX1_CLK                    = 54u,      /*!< PSI5RX1_CLK clock source              */
    PSI51us0_CLK                   = 55u,      /*!< PSI51us0_CLK clock source             */
    PSI51us1_CLK                   = 56u,      /*!< PSI51us1_CLK clock source             */
    END_OF_PER_CLK_SEL_CLKS        = 57u,      /*!< End of PER_CLK_SEL_CLK clocks         */
    DECFILT0_CLK                   = 58u,      /*!< DECFILT0_CLK clock source             */
    DECFILT1_CLK                   = 59u,      /*!< DECFILT1_CLK clock source             */
    DECFILT2_CLK                   = 60u,      /*!< DECFILT2_CLK clock source             */
    DECFILT3_CLK                   = 61u,      /*!< DECFILT3_CLK clock source             */
    DECFILT4_CLK                   = 62u,      /*!< DECFILT4_CLK clock source             */
    DECFILT5_CLK                   = 63u,      /*!< DECFILT5_CLK clock source             */
    DECFILT6_CLK                   = 64u,      /*!< DECFILT6_CLK clock source             */
    DECFILT7_CLK                   = 65u,      /*!< DECFILT7_CLK clock source             */
    DECFILT8_CLK                   = 66u,      /*!< DECFILT8_CLK clock source             */
    DECFILT9_CLK                   = 67u,      /*!< DECFILT9_CLK clock source             */
    DECFILT10_CLK                  = 68u,      /*!< DECFILT10_CLK clock source            */
    DECFILT11_CLK                  = 69u,      /*!< DECFILT11_CLK clock source            */
    DSPI0_CLK                      = 70u,      /*!< DSPI0_CLK clock source                */
    DSPI1_CLK                      = 71u,      /*!< DSPI1_CLK clock source                */
    DSPI2_CLK                      = 72u,      /*!< DSPI2_CLK clock source                */
    DSPI3_CLK                      = 73u,      /*!< DSPI3_CLK clock source                */
    DSPI4_CLK                      = 74u,      /*!< DSPI4_CLK clock source                */
    eSCI0_CLK                      = 75u,      /*!< eSCI0_CLK clock source                */
    eSCI1_CLK                      = 76u,      /*!< eSCI1_CLK clock source                */
    eSCI2_CLK                      = 77u,      /*!< eSCI2_CLK clock source                */
    eSCI3_CLK                      = 78u,      /*!< eSCI3_CLK clock source                */
    eSCI4_CLK                      = 79u,      /*!< eSCI4_CLK clock source                */
    eSCI5_CLK                      = 80u,      /*!< eSCI5_CLK clock source                */
    eMIOS0_CLK                     = 81u,      /*!< eMIOS0_CLK clock source               */
    eMIOS1_CLK                     = 82u,      /*!< eMIOS1_CLK clock source               */
    EQADC0_CLK                     = 83u,      /*!< EQADC0_CLK clock source               */
    EQADC1_CLK                     = 84u,      /*!< EQADC1_CLK clock source               */
    PIT0_CLK                       = 85u,      /*!< PIT0_CLK clock source                 */
    SENT0_CLK                      = 86u,      /*!< SENT0_CLK clock source                */
    SENT1_CLK                      = 87u,      /*!< SENT1_CLK clock source                */
    END_OF_PER_CLKS                = 88u,      /*!< End of PER_CLK clocks                 */
    LFAST0_CLK                     = 89u,      /*!< LFAST0_CLK clock source               */
    END_OF_LFAST_CLKS              = 90u,      /*!< End of LFAST_CLK clocks               */
    MCAN0_CLK                      = 91u,      /*!< MCAN0_CLK clock source                */
    MCAN1_CLK                      = 92u,      /*!< MCAN1_CLK clock source                */
    END_OF_CAN_CLKS                = 93u,      /*!< End of CAN_CLK clocks                 */
    PITRTI0_CLK                    = 94u,      /*!< PITRTI0_CLK clock source              */
    END_OF_XOSC_CLK_CLKS           = 95u,      /*!< End of XOSC_CLK_CLK clocks            */
    CSE0_CLK                       = 96u,      /*!< CSE0_CLK clock source                 */
    CRC0_CLK                       = 97u,      /*!< CRC0_CLK clock source                 */
    EBI0_CLK                       = 98u,      /*!< EBI0_CLK clock source                 */
    NPC0_CLK                       = 99u,      /*!< NPC0_CLK clock source                 */
    STCU0_CLK                      = 100u,      /*!< STCU0_CLK clock source               */
	DMA0_CLK                       = 101u,      /*!< DMA0 clock source                    */
	DMA1_CLK                       = 102u,      /*!< DMA1 clock source                    */
	FLEXCAN0_CLK                   = 103u,      /*!< FLEXCAN0_CLK clock source            */
	FLEXCAN1_CLK                   = 104u,      /*!< FLEXCAN1_CLK clock source            */
	FLEXCAN2_CLK                   = 105u,      /*!< FLEXCAN2_CLK clock source            */
	FLEXCAN3_CLK                   = 106u,      /*!< FLEXCAN3_CLK clock source            */
    END_OF_PERIPHERAL_CLKS         = 107u,      /*!< End of peripheral clocks             */
    CLOCK_NAME_COUNT,
} clock_names_t;


  /*! @brief interface clocks
   *  Mappings between clock names and interface clocks.
   *  If no interface clock exists for a given clock name,
   *  then the corresponding value is CLOCK_NAME_COUNT.
   */
#define MONITORED_CLOCKS \
{                                                           \
CMU_0,          /*!< IRCOSC_CLK clock                0   */ \
CMU_0,          /*!< XOSC_CLK clock                  1   */ \
CMU_0,          /*!< PLL0_PHI0_CLK clock             2   */ \
NULL,           /*!< PLL0_PHI1_CLK clock             3   */ \
NULL,           /*!< PLL1_PHI0_CLK clock             4   */ \
NULL,           /*!< No clock entry in clock_names_t 5   */ \
NULL,           /*!< No clock entry in clock_names_t 6   */ \
NULL,           /*!< No clock entry in clock_names_t 7   */ \
NULL,           /*!< No clock entry in clock_names_t 8   */ \
NULL,           /*!< No clock entry in clock_names_t 9   */ \
NULL,           /*!< No clock entry in clock_names_t 10  */ \
NULL,           /*!< No clock entry in clock_names_t 11  */ \
NULL,           /*!< No clock entry in clock_names_t 12  */ \
NULL,           /*!< No clock entry in clock_names_t 13  */ \
NULL,           /*!< No clock entry in clock_names_t 14  */ \
NULL,           /*!< No clock entry in clock_names_t 15  */ \
NULL,           /*!< No clock entry in clock_names_t 16  */ \
NULL,           /*!< No clock entry in clock_names_t 17  */ \
NULL,           /*!< No clock entry in clock_names_t 18  */ \
NULL,           /*!< No clock entry in clock_names_t 19  */ \
NULL,           /*!< END_OF_CLK_SOURCES              20  */ \
NULL,           /*!< SCS_CLK clock                   21  */ \
NULL,           /*!< SYS_CLK clock                   22  */ \
CMU_2,           /*!< PLAT_CLK clock                 23  */ \
NULL,           /*!< PBRIDGEx_CLK clock              24  */ \
CMU_3,           /*!< PER_CLK_SEL_CLK clock          25  */ \
CMU_5,           /*!< PER_CLK clock                  26  */ \
CMU_1,           /*!< CORE_CLK clock                 27  */ \
NULL,           /*!< No clock entry in clock_names_t 28  */ \
NULL,           /*!< No clock entry in clock_names_t 29  */ \
NULL,           /*!< No clock entry in clock_names_t 30  */ \
NULL,           /*!< No clock entry in clock_names_t 31  */ \
NULL,           /*!< No clock entry in clock_names_t 32  */ \
NULL,           /*!< No clock entry in clock_names_t 33  */ \
NULL,           /*!< No clock entry in clock_names_t 34  */ \
NULL,           /*!< No clock entry in clock_names_t 35  */ \
NULL,           /*!< No clock entry in clock_names_t 36  */ \
NULL,           /*!< No clock entry in clock_names_t 37  */ \
NULL,           /*!< No clock entry in clock_names_t 38  */ \
NULL,           /*!< No clock entry in clock_names_t 39  */ \
NULL,           /*!< END_OF_SYSTEM_CLOCKS            40  */ \
NULL,           /*!< End of SCS clocks               41  */ \
NULL,           /*!< End of CORE clocks              42  */ \
NULL,           /*!< SIPI0 clock                     43  */ \
NULL,           /*!< End of PLAT clocks              44  */ \
NULL,           /*!< FEC0 clock                      45  */ \
NULL,           /*!< End of PBRIDGEx clocks          46  */ \
CMU_6,           /*!< ADCSD1 clock                   47  */ \
CMU_6,           /*!< ADCSD2 clock                   48  */ \
CMU_6,           /*!< ADCSD3 clock                   49  */ \
CMU_6,           /*!< ADCSD4 clock                   50  */ \
CMU_4,           /*!< ETPU0 clock                    51  */ \
CMU_4,           /*!< ETPU1 clock                    52  */ \
CMU_7,           /*!< PSI5RX0 clock                  53  */ \
CMU_7,           /*!< PSI5RX1 clock                  54  */ \
CMU_8,           /*!< PSI51us0 clock                 55  */ \
CMU_8,           /*!< PSI51us1 clock                 56  */ \
NULL,           /*!< End of PER_CLK_SEL clocks       57  */ \
NULL,           /*!< DECFILT0 clock                  58  */ \
NULL,           /*!< DECFILT1 clock                  59  */ \
NULL,           /*!< DECFILT2 clock                  60  */ \
NULL,           /*!< DECFILT3 clock                  61  */ \
NULL,           /*!< DECFILT4 clock                  62  */ \
NULL,           /*!< DECFILT5 clock                  63  */ \
NULL,           /*!< DECFILT6 clock                  64  */ \
NULL,           /*!< DECFILT7 clock                  65  */ \
NULL,           /*!< DECFILT8 clock                  66  */ \
NULL,           /*!< DECFILT9 clock                  67  */ \
NULL,           /*!< DECFILT10 clock                 68  */ \
NULL,           /*!< DECFILT11 clock                 69  */ \
NULL,           /*!< DSPI0 clock                     70  */ \
NULL,           /*!< DSPI1 clock                     71  */ \
NULL,           /*!< DSPI2 clock                     72  */ \
NULL,           /*!< DSPI3 clock                     73  */ \
NULL,           /*!< DSPI4 clock                     74  */ \
NULL,           /*!< eSCI0 clock                     75  */ \
NULL,           /*!< eSCI1 clock                     76  */ \
NULL,           /*!< eSCI2 clock                     77  */ \
NULL,           /*!< eSCI3 clock                     78  */ \
NULL,           /*!< eSCI4 clock                     79  */ \
NULL,           /*!< eSCI5 clock                     80  */ \
NULL,           /*!< eMIOS0 clock                    81  */ \
NULL,           /*!< eMIOS1 clock                    82  */ \
NULL,           /*!< EQADC0 clock                    83  */ \
NULL,           /*!< EQADC1 clock                    84  */ \
NULL,           /*!< PIT0 clock                      85  */ \
NULL,           /*!< SENT0 clock                     86  */ \
NULL,           /*!< SENT1 clock                     87  */ \
NULL,           /*!< End of PER clocks               88  */ \
NULL,           /*!< LFAST0 clock                    89  */ \
NULL,           /*!< End of LFAST clocks             90  */ \
NULL,           /*!< MCAN0 clock                     91  */ \
NULL,           /*!< MCAN1 clock                     92  */ \
NULL,           /*!< End of CAN clocks               93  */ \
NULL,           /*!< PITRTI0 clock                   94  */ \
NULL,           /*!< End of XOSC_CLK clocks          95  */ \
NULL,           /*!< CSE0 clock                      96  */ \
NULL,           /*!< CRC0 clock                      97  */ \
NULL,           /*!< EBI0 clock                      98  */ \
NULL,           /*!< NPC0 clock                      99  */ \
NULL,           /*!< STCU0 clock                     100 */ \
NULL,           /*!< DMA0 clock                      101 */ \
NULL,           /*!< DMA1 clock                      102 */ \
NULL,           /*!< FLEXCAN0 clock                  103 */ \
NULL,           /*!< FLEXCAN1 clock                  104 */ \
NULL,           /*!< FLEXCAN2 clock                  105 */ \
NULL,           /*!< FLEXCAN3 clock                  106 */ \
NULL,           /*!< END_OF_PERIPHERAL_CLK_SOURCES   107 */ \
}



/*! @brief interface clocks
  *  Mappings between clock names and interface clocks.
  *  If no interface clock exists for a given clock name,
  *  then the corresponding value is CLOCK_NAME_COUNT.
  */
#define  INTERFACE_CLOCKS \
{                                                                            \
CLOCK_NAME_COUNT,                /*!< IRCOSC_CLK clock                0   */ \
CLOCK_NAME_COUNT,                /*!< XOSC_CLK clock                  1   */ \
CLOCK_NAME_COUNT,                /*!< PLL0_PHI0_CLK clock             2   */ \
CLOCK_NAME_COUNT,                /*!< PLL0_PHI1_CLK clock             3   */ \
CLOCK_NAME_COUNT,                /*!< PLL1_PHI0_CLK clock             4   */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 5   */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 6   */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 7   */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 8   */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 9   */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 10  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 11  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 12  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 13  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 14  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 15  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 16  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 17  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 18  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 19  */ \
CLOCK_NAME_COUNT,                /*!< END_OF_CLK_SOURCES              20  */ \
CLOCK_NAME_COUNT,                /*!< SCS_CLK clock                   21  */ \
CLOCK_NAME_COUNT,                /*!< SYS_CLK clock                   22  */ \
CLOCK_NAME_COUNT,                /*!< PLAT_CLK clock                  23  */ \
CLOCK_NAME_COUNT,                /*!< PBRIDGEx_CLK clock              24  */ \
CLOCK_NAME_COUNT,                /*!< PER_CLK_SEL_CLK clock           25  */ \
CLOCK_NAME_COUNT,                /*!< PER_CLK clock                   26  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 27  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 28  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 29  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 30  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 31  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 32  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 33  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 34  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 35  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 36  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 37  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 38  */ \
CLOCK_NAME_COUNT,                /*!< No clock entry in clock_names_t 39  */ \
CLOCK_NAME_COUNT,                /*!< END_OF_SYSTEM_CLOCKS            40  */ \
CLOCK_NAME_COUNT,                /*!< End of SCS clocks               41  */ \
CLOCK_NAME_COUNT,                /*!< End of CORE clocks              42  */ \
PBRIDGEx_CLK,                    /*!< SIPI0 clock                     43  */ \
CLOCK_NAME_COUNT,                /*!< End of PLAT clocks              44  */ \
PBRIDGEx_CLK,                    /*!< FEC0 clock                      45  */ \
CLOCK_NAME_COUNT,                /*!< End of PBRIDGEx clocks          46  */ \
PER_CLK,                         /*!< ADCSD1 clock                    47  */ \
PER_CLK,                         /*!< ADCSD2 clock                    48  */ \
PER_CLK,                         /*!< ADCSD3 clock                    49  */ \
PER_CLK,                         /*!< ADCSD4 clock                    50  */ \
PER_CLK,                         /*!< ETPU0 clock                     51  */ \
PER_CLK,                         /*!< ETPU1 clock                     52  */ \
PBRIDGEx_CLK,                    /*!< PSI5RX0 clock                   53  */ \
PBRIDGEx_CLK,                    /*!< PSI5RX1 clock                   54  */ \
PBRIDGEx_CLK,                    /*!< PSI51us0 clock                  55  */ \
PBRIDGEx_CLK,                    /*!< PSI51us1 clock                  56  */ \
CLOCK_NAME_COUNT,                /*!< End of PER_CLK_SEL clocks       57  */ \
PER_CLK,                         /*!< DECFILT0 clock                  58  */ \
PER_CLK,                         /*!< DECFILT1 clock                  59  */ \
PER_CLK,                         /*!< DECFILT2 clock                  60  */ \
PER_CLK,                         /*!< DECFILT3 clock                  61  */ \
PER_CLK,                         /*!< DECFILT4 clock                  62  */ \
PER_CLK,                         /*!< DECFILT5 clock                  63  */ \
PER_CLK,                         /*!< DECFILT6 clock                  64  */ \
PER_CLK,                         /*!< DECFILT7 clock                  65  */ \
PER_CLK,                         /*!< DECFILT8 clock                  66  */ \
PER_CLK,                         /*!< DECFILT9 clock                  67  */ \
PER_CLK,                         /*!< DECFILT10 clock                 68  */ \
PER_CLK,                         /*!< DECFILT11 clock                 69  */ \
PER_CLK,                         /*!< DSPI0 clock                     70  */ \
PER_CLK,                         /*!< DSPI1 clock                     71  */ \
PER_CLK,                         /*!< DSPI2 clock                     72  */ \
PER_CLK,                         /*!< DSPI3 clock                     73  */ \
PER_CLK,                         /*!< DSPI4 clock                     74  */ \
PER_CLK,                         /*!< eSCI0 clock                     75  */ \
PER_CLK,                         /*!< eSCI1 clock                     76  */ \
PER_CLK,                         /*!< eSCI2 clock                     77  */ \
PER_CLK,                         /*!< eSCI3 clock                     78  */ \
PER_CLK,                         /*!< eSCI4 clock                     79  */ \
PER_CLK,                         /*!< eSCI5 clock                     80  */ \
PER_CLK,                         /*!< eMIOS0 clock                    81  */ \
PER_CLK,                         /*!< eMIOS1 clock                    82  */ \
PER_CLK,                         /*!< EQADC0 clock                    83  */ \
PER_CLK,                         /*!< EQADC1 clock                    84  */ \
PER_CLK,                         /*!< PIT0 clock                      85  */ \
PBRIDGEx_CLK,                    /*!< SENT0 clock                     86  */ \
PBRIDGEx_CLK,                    /*!< SENT1 clock                     87  */ \
CLOCK_NAME_COUNT,                /*!< End of PER clocks               88  */ \
PBRIDGEx_CLK,                    /*!< LFAST0 clock                    89  */ \
CLOCK_NAME_COUNT,                /*!< End of LFAST clocks             90  */ \
PBRIDGEx_CLK,                    /*!< MCAN0 clock                     91  */ \
PBRIDGEx_CLK,                    /*!< MCAN1 clock                     92  */ \
CLOCK_NAME_COUNT,                /*!< End of CAN clocks               93  */ \
PER_CLK,                         /*!< PITRTI0 clock                   94  */ \
CLOCK_NAME_COUNT,                /*!< End of XOSC_CLK clocks          95  */ \
PBRIDGEx_CLK,                    /*!< CSE0 clock                      96  */ \
PBRIDGEx_CLK,                    /*!< CRC0 clock                      97  */ \
PBRIDGEx_CLK,                    /*!< EBI0 clock                      98  */ \
PBRIDGEx_CLK,                    /*!< NPC0 clock                      99  */ \
PBRIDGEx_CLK,                    /*!< STCU0 clock                     100 */ \
PBRIDGEx_CLK,                    /*!< DMA0 clock                      101 */ \
PBRIDGEx_CLK,                    /*!< DMA1 clock                      102 */ \
PBRIDGEx_CLK,                    /*!< FLEXCAN0 clock                  103 */ \
PBRIDGEx_CLK,                    /*!< FLEXCAN1 clock                  104 */ \
PBRIDGEx_CLK,                    /*!< FLEXCAN2 clock                  105 */ \
PBRIDGEx_CLK,                    /*!< FLEXCAN3 clock                  106 */ \
CLOCK_NAME_COUNT                 /*!< END_OF_PERIPHERAL_CLK_SOURCES   107 */ \
}



/*! @brief Halt clocks
 *  Mappings between clock names and the SIU registers.
 *  If no clock maskset exists for a given clock name,
 *  then the corresponding value is 0, else the value
 *  is 1.
 */
#define SIU_CLOCKS \
{                                                              \
0U,                /*!< IRCOSC_CLK clock                0   */ \
0U,                /*!< XOSC_CLK clock                  1   */ \
0U,                /*!< PLL0_PHI0_CLK clock             2   */ \
0U,                /*!< PLL0_PHI1_CLK clock             3   */ \
0U,                /*!< PLL1_PHI0_CLK clock             4   */ \
0U,                /*!< No clock entry in clock_names_t 5   */ \
0U,                /*!< No clock entry in clock_names_t 6   */ \
0U,                /*!< No clock entry in clock_names_t 7   */ \
0U,                /*!< No clock entry in clock_names_t 8   */ \
0U,                /*!< No clock entry in clock_names_t 9   */ \
0U,                /*!< No clock entry in clock_names_t 10  */ \
0U,                /*!< No clock entry in clock_names_t 11  */ \
0U,                /*!< No clock entry in clock_names_t 12  */ \
0U,                /*!< No clock entry in clock_names_t 13  */ \
0U,                /*!< No clock entry in clock_names_t 14  */ \
0U,                /*!< No clock entry in clock_names_t 15  */ \
0U,                /*!< No clock entry in clock_names_t 16  */ \
0U,                /*!< No clock entry in clock_names_t 17  */ \
0U,                /*!< No clock entry in clock_names_t 18  */ \
0U,                /*!< No clock entry in clock_names_t 19  */ \
0U,                /*!< END_OF_CLK_SOURCES              20  */ \
0U,                /*!< SCS_CLK clock                   21  */ \
0U,                /*!< SYS_CLK clock                   22  */ \
0U,                /*!< PLAT_CLK clock                  23  */ \
0U,                /*!< PBRIDGEx_CLK clock              24  */ \
0U,                /*!< PER_CLK_SEL_CLK clock           25  */ \
0U,                /*!< PER_CLK clock                   26  */ \
0U,                /*!< No clock entry in clock_names_t 27  */ \
0U,                /*!< No clock entry in clock_names_t 28  */ \
0U,                /*!< No clock entry in clock_names_t 29  */ \
0U,                /*!< No clock entry in clock_names_t 30  */ \
0U,                /*!< No clock entry in clock_names_t 31  */ \
0U,                /*!< No clock entry in clock_names_t 32  */ \
0U,                /*!< No clock entry in clock_names_t 33  */ \
0U,                /*!< No clock entry in clock_names_t 34  */ \
0U,                /*!< No clock entry in clock_names_t 35  */ \
0U,                /*!< No clock entry in clock_names_t 36  */ \
0U,                /*!< No clock entry in clock_names_t 37  */ \
0U,                /*!< No clock entry in clock_names_t 38  */ \
0U,                /*!< No clock entry in clock_names_t 39  */ \
0U,                /*!< END_OF_SYSTEM_CLOCKS            40  */ \
0U,                /*!< End of SCS clocks               41  */ \
0U,                /*!< End of CORE clocks              42  */ \
1U,                /*!< SIPI0 clock                     43  */ \
0U,                /*!< End of PLAT clocks              44  */ \
1U,                /*!< FEC0 clock                      45  */ \
0U,                /*!< End of PBRIDGEx clocks          46  */ \
1U,                /*!< ADCSD1 clock                    47  */ \
1U,                /*!< ADCSD2 clock                    48  */ \
1U,                /*!< ADCSD3 clock                    49  */ \
1U,                /*!< ADCSD4 clock                    50  */ \
1U,                /*!< ETPU0 clock                     51  */ \
1U,                /*!< ETPU1 clock                     52  */ \
1U,                /*!< PSI5RX0 clock                   53  */ \
1U,                /*!< PSI5RX1 clock                   54  */ \
1U,                /*!< PSI51us0 clock                  55  */ \
1U,                /*!< PSI51us1 clock                  56  */ \
0U,                /*!< End of PER_CLK_SEL clocks       57  */ \
1U,                /*!< DECFILT0 clock                  58  */ \
1U,                /*!< DECFILT1 clock                  59  */ \
1U,                /*!< DECFILT2 clock                  60  */ \
1U,                /*!< DECFILT3 clock                  61  */ \
1U,                /*!< DECFILT4 clock                  62  */ \
1U,                /*!< DECFILT5 clock                  63  */ \
1U,                /*!< DECFILT6 clock                  64  */ \
1U,                /*!< DECFILT7 clock                  65  */ \
1U,                /*!< DECFILT8 clock                  66  */ \
1U,                /*!< DECFILT9 clock                  67  */ \
1U,                /*!< DECFILT10 clock                 68  */ \
1U,                /*!< DECFILT11 clock                 69  */ \
1U,                /*!< DSPI0 clock                     70  */ \
1U,                /*!< DSPI1 clock                     71  */ \
1U,                /*!< DSPI2 clock                     72  */ \
1U,                /*!< DSPI3 clock                     73  */ \
1U,                /*!< DSPI4 clock                     74  */ \
1U,                /*!< eSCI0 clock                     75  */ \
1U,                /*!< eSCI1 clock                     76  */ \
1U,                /*!< eSCI2 clock                     77  */ \
1U,                /*!< eSCI3 clock                     78  */ \
1U,                /*!< eSCI4 clock                     79  */ \
1U,                /*!< eSCI5 clock                     80  */ \
1U,                /*!< eMIOS0 clock                    81  */ \
1U,                /*!< eMIOS1 clock                    82  */ \
1U,                /*!< EQADC0 clock                    83  */ \
1U,                /*!< EQADC1 clock                    84  */ \
1U,                /*!< PIT0 clock                      85  */ \
1U,                /*!< SENT0 clock                     86  */ \
1U,                /*!< SENT1 clock                     87  */ \
0U,                /*!< End of PER clocks               88  */ \
1U,                /*!< LFAST0 clock                    89  */ \
0U,                /*!< End of LFAST clocks             90  */ \
1U,                /*!< MCAN0 clock                     91  */ \
1U,                /*!< MCAN1 clock                     92  */ \
0U,                /*!< End of CAN clocks               93  */ \
1U,                /*!< PITRTI0 clock                   94  */ \
0U,                /*!< End of XOSC_CLK clocks          95  */ \
1U,                /*!< CSE0 clock                      96  */ \
1U,                /*!< CRC0 clock                      97  */ \
1U,                /*!< EBI0 clock                      98  */ \
1U,                /*!< NPC0 clock                      99  */ \
1U,                /*!< STCU0 clock                     100 */ \
1U,                /*!< DMA0 clock                      101 */ \
1U,                /*!< DMA1 clock                      102 */ \
1U,                /*!< FLEXCAN0 clock                  103 */ \
1U,                /*!< FLEXCAN1 clock                  104 */ \
1U,                /*!< FLEXCAN2 clock                  105 */ \
1U,                /*!< FLEXCAN3 clock                  106 */ \
0U                 /*!< END_OF_PERIPHERAL_CLK_SOURCES   107 */ \
}

/*! @brief Halt masksets
 *  Mappings between clock names and masksets.
 *  If no clock maskset exists for a given clock name,
 *  then the corresponding value is 0. Values 1 or 2 represent
 *  the corresponding halt register.
 */
#define MASKSET_CLOCKS \
{                                                              \
0U,                /*!< IRCOSC_CLK clock                0   */ \
0U,                /*!< XOSC_CLK clock                  1   */ \
0U,                /*!< PLL0_PHI0_CLK clock             2   */ \
0U,                /*!< PLL0_PHI1_CLK clock             3   */ \
0U,                /*!< PLL1_PHI0_CLK clock             4   */ \
0U,                /*!< No clock entry in clock_names_t 5   */ \
0U,                /*!< No clock entry in clock_names_t 6   */ \
0U,                /*!< No clock entry in clock_names_t 7   */ \
0U,                /*!< No clock entry in clock_names_t 8   */ \
0U,                /*!< No clock entry in clock_names_t 9   */ \
0U,                /*!< No clock entry in clock_names_t 10  */ \
0U,                /*!< No clock entry in clock_names_t 11  */ \
0U,                /*!< No clock entry in clock_names_t 12  */ \
0U,                /*!< No clock entry in clock_names_t 13  */ \
0U,                /*!< No clock entry in clock_names_t 14  */ \
0U,                /*!< No clock entry in clock_names_t 15  */ \
0U,                /*!< No clock entry in clock_names_t 16  */ \
0U,                /*!< No clock entry in clock_names_t 17  */ \
0U,                /*!< No clock entry in clock_names_t 18  */ \
0U,                /*!< No clock entry in clock_names_t 19  */ \
0U,                /*!< END_OF_CLK_SOURCES              20  */ \
0U,                /*!< SCS_CLK clock                   21  */ \
0U,                /*!< SYS_CLK clock                   22  */ \
0U,                /*!< PLAT_CLK clock                  23  */ \
0U,                /*!< PBRIDGEx_CLK clock              24  */ \
0U,                /*!< PER_CLK_SEL_CLK clock           25  */ \
0U,                /*!< PER_CLK clock                   26  */ \
0U,                /*!< No clock entry in clock_names_t 27  */ \
0U,                /*!< No clock entry in clock_names_t 28  */ \
0U,                /*!< No clock entry in clock_names_t 29  */ \
0U,                /*!< No clock entry in clock_names_t 30  */ \
0U,                /*!< No clock entry in clock_names_t 31  */ \
0U,                /*!< No clock entry in clock_names_t 32  */ \
0U,                /*!< No clock entry in clock_names_t 33  */ \
0U,                /*!< No clock entry in clock_names_t 34  */ \
0U,                /*!< No clock entry in clock_names_t 35  */ \
0U,                /*!< No clock entry in clock_names_t 36  */ \
0U,                /*!< No clock entry in clock_names_t 37  */ \
0U,                /*!< No clock entry in clock_names_t 38  */ \
0U,                /*!< No clock entry in clock_names_t 39  */ \
0U,                /*!< END_OF_SYSTEM_CLOCKS            40  */ \
0U,                /*!< End of SCS clocks               41  */ \
0U,                /*!< End of CORE clocks              42  */ \
2U,                /*!< SIPI0 clock                     43  */ \
0U,                /*!< End of PLAT clocks              44  */ \
2U,                /*!< FEC0 clock                      45  */ \
0U,                /*!< End of PBRIDGEx clocks          46  */ \
2U,                /*!< ADCSD1 clock                    47  */ \
2U,                /*!< ADCSD2 clock                    48  */ \
2U,                /*!< ADCSD3 clock                    49  */ \
2U,                /*!< ADCSD4 clock                    50  */ \
1U,                /*!< ETPU0 clock                     51  */ \
1U,                /*!< ETPU1 clock                     52  */ \
2U,                /*!< PSI5RX0 clock                   53  */ \
2U,                /*!< PSI5RX1 clock                   54  */ \
2U,                /*!< PSI51us0 clock                  55  */ \
2U,                /*!< PSI51us1 clock                  56  */ \
0U,                /*!< End of PER_CLK_SEL clocks       57  */ \
1U,                /*!< DECFILT0 clock                  58  */ \
1U,                /*!< DECFILT1 clock                  59  */ \
1U,                /*!< DECFILT2 clock                  60  */ \
1U,                /*!< DECFILT3 clock                  61  */ \
1U,                /*!< DECFILT4 clock                  62  */ \
1U,                /*!< DECFILT5 clock                  63  */ \
1U,                /*!< DECFILT6 clock                  64  */ \
1U,                /*!< DECFILT7 clock                  65  */ \
1U,                /*!< DECFILT8 clock                  66  */ \
1U,                /*!< DECFILT9 clock                  67  */ \
1U,                /*!< DECFILT10 clock                 68  */ \
1U,                /*!< DECFILT11 clock                 69  */ \
1U,                /*!< DSPI0 clock                     70  */ \
1U,                /*!< DSPI1 clock                     71  */ \
1U,                /*!< DSPI2 clock                     72  */ \
1U,                /*!< DSPI3 clock                     73  */ \
1U,                /*!< DSPI4 clock                     74  */ \
1U,                /*!< eSCI0 clock                     75  */ \
1U,                /*!< eSCI1 clock                     76  */ \
1U,                /*!< eSCI2 clock                     77  */ \
1U,                /*!< eSCI3 clock                     78  */ \
1U,                /*!< eSCI4 clock                     79  */ \
1U,                /*!< eSCI5 clock                     80  */ \
1U,                /*!< eMIOS0 clock                    81  */ \
1U,                /*!< eMIOS1 clock                    82  */ \
1U,                /*!< EQADC0 clock                    83  */ \
1U,                /*!< EQADC1 clock                    84  */ \
1U,                /*!< PIT0 clock                      85  */ \
2U,                /*!< SENT0 clock                     86  */ \
2U,                /*!< SENT1 clock                     87  */ \
0U,                /*!< End of PER clocks               88  */ \
2U,                /*!< LFAST0 clock                    89  */ \
0U,                /*!< End of LFAST clocks             90  */ \
2U,                /*!< MCAN0 clock                     91  */ \
2U,                /*!< MCAN1 clock                     92  */ \
0U,                /*!< End of CAN clocks               93  */ \
1U,                /*!< PITRTI0 clock                   94  */ \
0U,                /*!< End of XOSC_CLK clocks          95  */ \
1U,                /*!< CSE0 clock                      96  */ \
2U,                /*!< CRC0 clock                      97  */ \
1U,                /*!< EBI0 clock                      98  */ \
1U,                /*!< NPC0 clock                      99  */ \
2U,                /*!< STCU0 clock                     100 */ \
0U,                /*!< DMA0 clock                      101 */ \
0U,                /*!< DMA1 clock                      102 */ \
1U,                /*!< FLEXCAN0 clock                  103 */ \
1U,                /*!< FLEXCAN1 clock                  104 */ \
1U,                /*!< FLEXCAN2 clock                  105 */ \
1U,                /*!< FLEXCAN3 clock                  106 */ \
0U                 /*!< END_OF_PERIPHERAL_CLK_SOURCES   107 */ \
}

/*! @brief Halt bitfields
 *  Mappings between clock names and the corresponding bitfield
 *  in the halt register.
 */
#define BITFIELD_CLOCKS \
{                                                              \
0U,                /*!< IRCOSC_CLK clock                0   */ \
0U,                /*!< XOSC_CLK clock                  1   */ \
0U,                /*!< PLL0_PHI0_CLK clock             2   */ \
0U,                /*!< PLL0_PHI1_CLK clock             3   */ \
0U,                /*!< PLL1_PHI0_CLK clock             4   */ \
0U,                /*!< No clock entry in clock_names_t 5   */ \
0U,                /*!< No clock entry in clock_names_t 6   */ \
0U,                /*!< No clock entry in clock_names_t 7   */ \
0U,                /*!< No clock entry in clock_names_t 8   */ \
0U,                /*!< No clock entry in clock_names_t 9   */ \
0U,                /*!< No clock entry in clock_names_t 10  */ \
0U,                /*!< No clock entry in clock_names_t 11  */ \
0U,                /*!< No clock entry in clock_names_t 12  */ \
0U,                /*!< No clock entry in clock_names_t 13  */ \
0U,                /*!< No clock entry in clock_names_t 14  */ \
0U,                /*!< No clock entry in clock_names_t 15  */ \
0U,                /*!< No clock entry in clock_names_t 16  */ \
0U,                /*!< No clock entry in clock_names_t 17  */ \
0U,                /*!< No clock entry in clock_names_t 18  */ \
0U,                /*!< No clock entry in clock_names_t 19  */ \
0U,                /*!< END_OF_CLK_SOURCES              20  */ \
0U,                /*!< SCS_CLK clock                   21  */ \
0U,                /*!< SYS_CLK clock                   22  */ \
0U,                /*!< PLAT_CLK clock                  23  */ \
0U,                /*!< PBRIDGEx_CLK clock              24  */ \
0U,                /*!< PER_CLK_SEL_CLK clock           25  */ \
0U,                /*!< PER_CLK clock                   26  */ \
0U,                /*!< No clock entry in clock_names_t 27  */ \
0U,                /*!< No clock entry in clock_names_t 28  */ \
0U,                /*!< No clock entry in clock_names_t 29  */ \
0U,                /*!< No clock entry in clock_names_t 30  */ \
0U,                /*!< No clock entry in clock_names_t 31  */ \
0U,                /*!< No clock entry in clock_names_t 32  */ \
0U,                /*!< No clock entry in clock_names_t 33  */ \
0U,                /*!< No clock entry in clock_names_t 34  */ \
0U,                /*!< No clock entry in clock_names_t 35  */ \
0U,                /*!< No clock entry in clock_names_t 36  */ \
0U,                /*!< No clock entry in clock_names_t 37  */ \
0U,                /*!< No clock entry in clock_names_t 38  */ \
0U,                /*!< No clock entry in clock_names_t 39  */ \
0U,                /*!< END_OF_SYSTEM_CLOCKS            40  */ \
0U,                /*!< End of SCS clocks               41  */ \
0U,                /*!< End of CORE clocks              42  */ \
16U,               /*!< SIPI0 clock                     43  */ \
0U,                /*!< End of PLAT clocks              44  */ \
0U,                /*!< FEC0 clock                      45  */ \
0U,                /*!< End of PBRIDGEx clocks          46  */ \
15U,               /*!< ADCSD1 clock                    47  */ \
14U,               /*!< ADCSD2 clock                    48  */ \
13U,               /*!< ADCSD3 clock                    49  */ \
12U,               /*!< ADCSD4 clock                    50  */ \
5U,                /*!< ETPU0 clock                     51  */ \
4U,                /*!< ETPU1 clock                     52  */ \
27U,               /*!< PSI5RX0 clock                   53  */ \
26U,               /*!< PSI5RX1 clock                   54  */ \
27U,               /*!< PSI51us0 clock                  55  */ \
26U,               /*!< PSI51us1 clock                  56  */ \
0U,                /*!< End of PER_CLK_SEL clocks       57  */ \
11U,               /*!< DECFILT0 clock                  58  */ \
11U,               /*!< DECFILT1 clock                  59  */ \
11U,               /*!< DECFILT2 clock                  60  */ \
11U,               /*!< DECFILT3 clock                  61  */ \
11U,               /*!< DECFILT4 clock                  62  */ \
11U,               /*!< DECFILT5 clock                  63  */ \
11U,               /*!< DECFILT6 clock                  64  */ \
11U,               /*!< DECFILT7 clock                  65  */ \
11U,               /*!< DECFILT8 clock                  66  */ \
11U,               /*!< DECFILT9 clock                  67  */ \
11U,               /*!< DECFILT10 clock                 68  */ \
11U,               /*!< DECFILT11 clock                 69  */ \
23U,               /*!< DSPI0 clock                     70  */ \
22U,               /*!< DSPI1 clock                     71  */ \
21U,               /*!< DSPI2 clock                     72  */ \
20U,               /*!< DSPI3 clock                     73  */ \
24U,               /*!< DSPI4 clock                     74  */ \
31U,               /*!< eSCI0 clock                     75  */ \
30U,               /*!< eSCI1 clock                     76  */ \
29U,               /*!< eSCI2 clock                     77  */ \
28U,               /*!< eSCI3 clock                     78  */ \
27U,               /*!< eSCI4 clock                     79  */ \
26U,               /*!< eSCI5 clock                     80  */ \
10U,               /*!< eMIOS0 clock                    81  */ \
12U,               /*!< eMIOS1 clock                    82  */ \
9U,                /*!< EQADC0 clock                    83  */ \
8U,                /*!< EQADC1 clock                    84  */ \
13U,               /*!< PIT0 clock                      85  */ \
23U,               /*!< SENT0 clock                     86  */ \
22U,               /*!< SENT1 clock                     87  */ \
0U,                /*!< End of PER clocks               88  */ \
16U,               /*!< LFAST0 clock                    89  */ \
0U,                /*!< End of LFAST clocks             90  */ \
31U,               /*!< MCAN0 clock                     91  */ \
30U,               /*!< MCAN1 clock                     92  */ \
0U,                /*!< End of CAN clocks               93  */ \
13U,               /*!< PITRTI0 clock                   94  */ \
0U,                /*!< End of XOSC_CLK clocks          95  */ \
3U,                /*!< CSE0 clock                      96  */ \
17U,               /*!< CRC0 clock                      97  */ \
7U,                /*!< EBI0 clock                      98  */ \
6U,                /*!< NPC0 clock                      99  */ \
18U,               /*!< STCU0 clock                     100 */ \
0U,      		   /*!< DMA0 clock                      101 */ \
0U,                /*!< DMA1 clock                      102 */ \
19U,               /*!< FLEXCAN0 clock                  103 */ \
18U,               /*!< FLEXCAN1 clock                  104 */ \
17U,               /*!< FLEXCAN2 clock                  105 */ \
16U,               /*!< FLEXCAN3 clock                  106 */ \
0U                 /*!< END_OF_PERIPHERAL_CLK_SOURCES   107 */ \
}

/*! @brief Halt masksets
 *  Mappings between clock names and masksets.
 *  If no clock maskset exists for a given clock name,
 *  then the corresponding value is 0. Values 1 or 2 represent
 *  the corresponding halt register.
 */
#define MASK_CLOCKS \
{                                                              \
0x0u,                /*!< IRCOSC_CLK clock                0   */ \
0x0u,                /*!< XOSC_CLK clock                  1   */ \
0x0u,                /*!< PLL0_PHI0_CLK clock             2   */ \
0x0u,                /*!< PLL0_PHI1_CLK clock             3   */ \
0x0u,                /*!< PLL1_PHI0_CLK clock             4   */ \
0x0u,                /*!< No clock entry in clock_names_t 5   */ \
0x0u,                /*!< No clock entry in clock_names_t 6   */ \
0x0u,                /*!< No clock entry in clock_names_t 7   */ \
0x0u,                /*!< No clock entry in clock_names_t 8   */ \
0x0u,                /*!< No clock entry in clock_names_t 9   */ \
0x0u,                /*!< No clock entry in clock_names_t 10  */ \
0x0u,                /*!< No clock entry in clock_names_t 11  */ \
0x0u,                /*!< No clock entry in clock_names_t 12  */ \
0x0u,                /*!< No clock entry in clock_names_t 13  */ \
0x0u,                /*!< No clock entry in clock_names_t 14  */ \
0x0u,                /*!< No clock entry in clock_names_t 15  */ \
0x0u,                /*!< No clock entry in clock_names_t 16  */ \
0x0u,                /*!< No clock entry in clock_names_t 17  */ \
0x0u,                /*!< No clock entry in clock_names_t 18  */ \
0x0u,                /*!< No clock entry in clock_names_t 19  */ \
0x0u,                /*!< END_OF_CLK_SOURCES              20  */ \
0x0u,                /*!< SCS_CLK clock                   21  */ \
0x0u,                /*!< SYS_CLK clock                   22  */ \
0x0u,                /*!< PLAT_CLK clock                  23  */ \
0x0u,                /*!< PBRIDGEx_CLK clock              24  */ \
0x0u,                /*!< PER_CLK_SEL_CLK clock           25  */ \
0x0u,                /*!< PER_CLK clock                   26  */ \
0x0u,                /*!< No clock entry in clock_names_t 27  */ \
0x0u,                /*!< No clock entry in clock_names_t 28  */ \
0x0u,                /*!< No clock entry in clock_names_t 29  */ \
0x0u,                /*!< No clock entry in clock_names_t 30  */ \
0x0u,                /*!< No clock entry in clock_names_t 31  */ \
0x0u,                /*!< No clock entry in clock_names_t 32  */ \
0x0u,                /*!< No clock entry in clock_names_t 33  */ \
0x0u,                /*!< No clock entry in clock_names_t 34  */ \
0x0u,                /*!< No clock entry in clock_names_t 35  */ \
0x0u,                /*!< No clock entry in clock_names_t 36  */ \
0x0u,                /*!< No clock entry in clock_names_t 37  */ \
0x0u,                /*!< No clock entry in clock_names_t 38  */ \
0x0u,                /*!< No clock entry in clock_names_t 39  */ \
0x0u,                /*!< END_OF_SYSTEM_CLOCKS            40  */ \
0x0u,                /*!< End of SCS clocks               41  */ \
0x0u,                /*!< End of CORE clocks              42  */ \
0x8000u,             /*!< SIPI0 clock                     43  */ \
0x0u,                /*!< End of PLAT clocks              44  */ \
0x80000000u,         /*!< FEC0 clock                      45  */ \
0x0u,                /*!< End of PBRIDGEx clocks          46  */ \
0x10000u,            /*!< ADCSD1 clock                    47  */ \
0x20000u,            /*!< ADCSD2 clock                    48  */ \
0x40000u,            /*!< ADCSD3 clock                    49  */ \
0x80000u,            /*!< ADCSD4 clock                    50  */ \
0x4000000u,          /*!< ETPU0 clock                     51  */ \
0x8000000u,          /*!< ETPU1 clock                     52  */ \
0x10u,               /*!< PSI5RX0 clock                   53  */ \
0x20u,               /*!< PSI5RX1 clock                   54  */ \
0x10u,                /*!< PSI51us0 clock                  55  */ \
0x20u,                /*!< PSI51us1 clock                  56  */ \
0x0u,                /*!< End of PER_CLK_SEL clocks       57  */ \
0x100000u,           /*!< DECFILT0 clock                  58  */ \
0x100000u,           /*!< DECFILT1 clock                  59  */ \
0x100000u,           /*!< DECFILT2 clock                  60  */ \
0x100000u,           /*!< DECFILT3 clock                  61  */ \
0x100000u,           /*!< DECFILT4 clock                  62  */ \
0x100000u,           /*!< DECFILT5 clock                  63  */ \
0x100000u,           /*!< DECFILT6 clock                  64  */ \
0x100000u,           /*!< DECFILT7 clock                  65  */ \
0x100000u,           /*!< DECFILT8 clock                  66  */ \
0x100000u,           /*!< DECFILT9 clock                  67  */ \
0x100000u,           /*!< DECFILT10 clock                 68  */ \
0x100000u,           /*!< DECFILT11 clock                 69  */ \
0x100u,              /*!< DSPI0 clock                     70  */ \
0x200u,              /*!< DSPI1 clock                     71  */ \
0x400u,              /*!< DSPI2 clock                     72  */ \
0x800u,              /*!< DSPI3 clock                     73  */ \
0x80u,               /*!< DSPI4 clock                     74  */ \
0x1u,                /*!< eSCI0 clock                     75  */ \
0x2u,                /*!< eSCI1 clock                     76  */ \
0x4u,                /*!< eSCI2 clock                     77  */ \
0x8u,                /*!< eSCI3 clock                     78  */ \
0x10u,               /*!< eSCI4 clock                     79  */ \
0x20u,               /*!< eSCI5 clock                     80  */ \
0x200000u,           /*!< eMIOS0 clock                    81  */ \
0x80000u,            /*!< eMIOS1 clock                    82  */ \
0x400000u,           /*!< EQADC0 clock                    83  */ \
0x800000u,           /*!< EQADC1 clock                    84  */ \
0x40000u,            /*!< PIT0 clock                      85  */ \
0x100u,              /*!< SENT0 clock                     86  */ \
0x200u,              /*!< SENT1 clock                     87  */ \
0x0u,                /*!< End of PER clocks               88  */ \
0x8000u,             /*!< LFAST0 clock                    89  */ \
0x0u,                /*!< End of LFAST clocks             90  */ \
0x1u,                /*!< MCAN0 clock                     91  */ \
0x2u,                /*!< MCAN1 clock                     92  */ \
0x0u,                /*!< End of CAN clocks               93  */ \
0x40000u,            /*!< PITRTI0 clock                   94  */ \
0x0u,                /*!< End of XOSC_CLK clocks          95  */ \
0x10000000u,         /*!< CSE0 clock                      96  */ \
0x4000u,             /*!< CRC0 clock                      97  */ \
0x1000000u,          /*!< EBI0 clock                      98  */ \
0x2000000u,          /*!< NPC0 clock                      99  */ \
0x2000u,             /*!< STCU0 clock                     100 */ \
0x0u,                /*!< DMA0 clock                      101 */ \
0x0u,                /*!< DMA1 clock                      102 */ \
0x1000u,             /*!< FLEXCAN0 clock                  103 */ \
0x2000u,             /*!< FLEXCAN1 clock                  104 */ \
0x4000u,             /*!< FLEXCAN2 clock                  105 */ \
0x8000u,             /*!< FLEXCAN3 clock                  106 */ \
0x0u                 /*!< END_OF_PERIPHERAL_CLK_SOURCES   107 */ \
}

/* Interrupt module features */

/* @brief Lowest interrupt request number. */
#define FEATURE_INTERRUPT_IRQ_MIN         (SS0_IRQn)
/* @brief Highest interrupt request number. */
#define FEATURE_INTERRUPT_IRQ_MAX         (STCU_IRQn)
/* @brief Highest interrupt priority number. */
#define FEATURE_INTERRUPT_PRIO_MAX  (15u)
/* @brief Highest software interrupt request number. */
#define FEATURE_INTERRUPT_SOFTWARE_IRQ_MAX  (SS7_IRQn)
/* @brief Has software interrupt. */
#define FEATURE_INTERRUPT_HAS_SOFTWARE_IRQ  (1u)
/* @brief Has pending interrupt state. */
#define FEATURE_INTERRUPT_HAS_PENDING_STATE (0u)
/* @brief Has active interrupt state. */
#define FEATURE_INTERRUPT_HAS_ACTIVE_STATE  (0u)
/* @brief Default interrupt priority for enable interrupts. */
#define FEATURE_INTERRUPT_DEFAULT_PRIO  (1u)
/* @brief Multicore support for interrupts */
#define FEATURE_INTERRUPT_MULTICORE_SUPPORT  (1u)
/* @brief Mask to enable interrupts for all cores */
#define FEATURE_INTERRUPT_ENABLE_ON_ALL_CORES_MASK  (0xC000u)
/* @brief Available cores for this device */
#define FEATURE_INTERRUPT_CORE_0_ENABLED (1u)
#define FEATURE_INTERRUPT_CORE_1_ENABLED (1u)
#define FEATURE_INTERRUPT_CORE_2_ENABLED (0u)
/* @brief Registers in which the start of interrupt vector table needs to be configured */
//#define FEATURE_INTERRUPT_INT_VECTORS {&INTC->IACKR0,&INTC->IACKR1}
/* Bitfield values for INTC_PSR_PRC_SELn */
#define INTC_PSR_PRC_CORE_0      0U
#define INTC_PSR_PRC_CORE_1      3U
#define INTC_PSR_PRC_BOTH_CORES  1U

/* eSCI Module features */
#define FEATURE_ESCI_IRQS           { ESCI0_CIR_IRQn, \
                                      ESCI1_CIR_IRQn, \
                                      ESCI2_CIR_IRQn, \
                                      ESCI3_CIR_IRQn, \
                                      ESCI4_CIR_IRQn, \
                                      ESCI5_CIR_IRQn }
#define FEATURE_ESCI_CLOCK_NAMES    { eSCI0_CLK, \
                                      eSCI1_CLK, \
                                      eSCI2_CLK, \
                                      eSCI3_CLK, \
                                      eSCI4_CLK, \
                                      eSCI5_CLK }
#define FEATURE_ESCI_DMA_SUPPORT    { true, true, false, \
                                      false, false, false }
#define FEATURE_ESCI_TX_DMA_CHANNEL { 18U, 34U }
#define FEATURE_ESCI_TX_DMA_CHANNEL_COUNT (2U)
#define FEATURE_ESCI_RX_DMA_CHANNEL { 19U, 35U }
#define FEATURE_ESCI_RX_DMA_CHANNEL_COUNT (2U)

/* FLASH C55 module features */

/* @brief Type of flash module is C55FMC. */
#define FEATURE_FLS_C55_C55FMC (1U)
/* @brief Type of flash module is C55MP. */
#define FEATURE_FLS_C55_C55MP (0U)
/* @brief Type of flash module is C55FP. */
#define FEATURE_FLS_C55_C55FP (0U)
/* @brief Over-program protection enabled block. */
#define FEATURE_FLS_C55_HAS_OTP
/* @brief Has alternate interface. */
#define FEATURE_FLS_C55_HAS_ALTERNATE (0U)
/* @brief Has erase operation in the alternate interface. */
#define FEATURE_FLS_C55_HAS_ERASE_ALTERNATE (0U)
/* @brief The size of writes that are allowed. */
#define FLASH_C55_PROGRAMABLE_SIZE (0x80U)
/* @brief The address in the uTest space. */
#define FLASH_C55_INTERLOCK_WRITE_UTEST_ADDRESS (0x00400000U)
/* @brief The base address of the 16KB high block. */
#define FLASH_C55_16KB_HIGH_BASE_ADDRESS (0x00600000U)
/* @brief The base address of the 32KB high block. */
#define FLASH_C55_32KB_HIGH_BASE_ADDRESS (0xFFFFFFFFU)
/* @brief The base address of the 64KB high block. */
#define FLASH_C55_64KB_HIGH_BASE_ADDRESS (0xFFFFFFFFU)
/* @brief The base address of the 16KB mid block. */
#define FLASH_C55_16KB_MID_BASE_ADDRESS (0xFFFFFFFFU)
/* @brief The base address of the 32KB mid block. */
#define FLASH_C55_32KB_MID_BASE_ADDRESS (0xFFFFFFFFU)
/* @brief The base address of the 64KB mid block. */
#define FLASH_C55_64KB_MID_BASE_ADDRESS (0x00020000U)
/* @brief The base address of the 16KB low block. */
#define FLASH_C55_16KB_LOW_BASE_ADDRESS (0xFFFFFFFFU)
/* @brief The base address of the 32KB low block. */
#define FLASH_C55_32KB_LOW_BASE_ADDRESS (0xFFFFFFFFU)
/* @brief The base address of the 64KB low block. */
#define FLASH_C55_64KB_LOW_BASE_ADDRESS (0x00000000U)
/* @brief The size of 16K block. */
#define FLASH_C55_16KB_SIZE (0x4000U)
/* @brief The size of 32K block. */
#define FLASH_C55_32KB_SIZE (0x8000U)
/* @brief The size of 64K block. */
#define FLASH_C55_64KB_SIZE (0x10000U)
/* @brief The base address of the 256KB block. */
#define FLASH_C55_256KB_BASE_ADDRESS (0x00800000U)

#define NUM_LOW_BLOCK                          2U
/* @brief The number of 16K low block */
#define NUM_16K_LOW_BLOCK                      0U
/* @brief The number of 32K low block */
#define NUM_32K_LOW_BLOCK                      0U
/* @brief The number of 64K low block */
#define NUM_64K_LOW_BLOCK                      2U
/* @brief The number of mid block */
#define NUM_MID_BLOCK                          2U
/* @brief The number of high block */
#define NUM_HIGH_BLOCK                         2U
/* @brief The number of 256k block */
#define NUM_256K_BLOCK_FIRST                   32U
#define NUM_256K_BLOCK_SECOND                  0U
#define NUM_256K_BLOCK                         (NUM_256K_BLOCK_FIRST + NUM_256K_BLOCK_SECOND)
#define NUM_BLOCK                              (NUM_LOW_BLOCK + NUM_MID_BLOCK + NUM_HIGH_BLOCK + NUM_256K_BLOCK)

#define LOW_BLOCK0_ADDR                        0x00000000U
#define LOW_BLOCK0_MASK                        (1UL << 0x0U)

#define LOW_BLOCK1_ADDR                        0x00010000U
#define LOW_BLOCK1_MASK                        (1UL << 0x1U)

/* Define Macros for mid blocks */
#define MID_BLOCK0_ADDR                        0x00020000U
#define MID_BLOCK0_MASK                        (1UL << 0x0U)

#define MID_BLOCK1_ADDR                        0x00030000U
#define MID_BLOCK1_MASK                        (1UL << 0x1U)

/* Define Macros for high blocks */
#define HIGH_BLOCK0_ADDR                        0x00060000U
#define HIGH_BLOCK0_MASK                        (1UL << 0x0U)

#define HIGH_BLOCK1_ADDR                        0x00604000U
#define HIGH_BLOCK1_MASK                        (1UL << 0x1U)

/* Define Macros for 256k blocks */
#define N256K_BLOCK0_ADDR                       0x00800000U
#define N256K_BLOCK0_MASK                       (1UL << 0x0U)

#define N256K_BLOCK1_ADDR                       0x00840000U
#define N256K_BLOCK1_MASK                       (1UL << 0x1U)

#define N256K_BLOCK2_ADDR                       0x00880000U
#define N256K_BLOCK2_MASK                       (1UL << 0x2U)

#define N256K_BLOCK3_ADDR                       0x008C0000U
#define N256K_BLOCK3_MASK                       (1UL << 0x3U)

#define N256K_BLOCK4_ADDR                       0x00900000U
#define N256K_BLOCK4_MASK                       (1UL << 0x4U)

#define N256K_BLOCK5_ADDR                       0x00940000U
#define N256K_BLOCK5_MASK                       (1UL << 0x5U)

#define N256K_BLOCK6_ADDR                       0x00980000U
#define N256K_BLOCK6_MASK                       (1UL << 0x6U)

#define N256K_BLOCK7_ADDR                       0x009C0000U
#define N256K_BLOCK7_MASK                       (1UL << 0x7U)

#define N256K_BLOCK8_ADDR                       0x00A00000U
#define N256K_BLOCK8_MASK                       (1UL << 0x8U)

#define N256K_BLOCK9_ADDR                       0x00A40000U
#define N256K_BLOCK9_MASK                       (1UL << 0x9U)

#define N256K_BLOCK10_ADDR                      0x00A80000U
#define N256K_BLOCK10_MASK                      (1UL << 0xAU)

#define N256K_BLOCK11_ADDR                      0x00AC0000U
#define N256K_BLOCK11_MASK                      (1UL << 0xBU)

#define N256K_BLOCK12_ADDR                      0x00B00000U
#define N256K_BLOCK12_MASK                      (1UL << 0xCU)

#define N256K_BLOCK13_ADDR                      0x00B40000U
#define N256K_BLOCK13_MASK                      (1UL << 0xDU)

#define N256K_BLOCK14_ADDR                      0x00B80000U
#define N256K_BLOCK14_MASK                      (1UL << 0xEU)

#define N256K_BLOCK15_ADDR                      0x00BC0000U
#define N256K_BLOCK15_MASK                      (1UL << 0xFU)

#define N256K_BLOCK16_ADDR                      0x00C00000U
#define N256K_BLOCK16_MASK                      (1UL << 0x10U)

#define N256K_BLOCK17_ADDR                      0x00C40000U
#define N256K_BLOCK17_MASK                      (1UL << 0x11U)

#define N256K_BLOCK18_ADDR                      0x00C80000U
#define N256K_BLOCK18_MASK                      (1UL << 0x12U)

#define N256K_BLOCK19_ADDR                      0x00CC0000U
#define N256K_BLOCK19_MASK                      (1UL << 0x13U)

#define N256K_BLOCK20_ADDR                      0x00D00000U
#define N256K_BLOCK20_MASK                      (1UL << 0x14U)

#define N256K_BLOCK21_ADDR                      0x00D40000U
#define N256K_BLOCK21_MASK                      (1UL << 0x15U)

#define N256K_BLOCK22_ADDR                      0x00D80000U
#define N256K_BLOCK22_MASK                      (1UL << 0x16U)

#define N256K_BLOCK23_ADDR                      0x00DC0000U
#define N256K_BLOCK23_MASK                      (1UL << 0x17U)

#define N256K_BLOCK24_ADDR                      0x00E00000U
#define N256K_BLOCK24_MASK                      (1UL << 0x18U)

#define N256K_BLOCK25_ADDR                      0x00E40000U
#define N256K_BLOCK25_MASK                      (1UL << 0x19U)

#define N256K_BLOCK26_ADDR                      0x00E80000U
#define N256K_BLOCK26_MASK                      (1UL << 0x1AU)

#define N256K_BLOCK27_ADDR                      0x00EC0000U
#define N256K_BLOCK27_MASK                      (1UL << 0x1BU)

#define N256K_BLOCK28_ADDR                      0x00F00000U
#define N256K_BLOCK28_MASK                      (1UL << 0x1CU)

#define N256K_BLOCK29_ADDR                      0x00F40000U
#define N256K_BLOCK29_MASK                      (1UL << 0x1DU)

#define N256K_BLOCK30_ADDR                      0x00F80000U
#define N256K_BLOCK30_MASK                      (1UL << 0x1EU)

#define N256K_BLOCK31_ADDR                      0x00FC0000U
#define N256K_BLOCK31_MASK                      (1UL << 0x1FU)

#define FLASH_BLOCK_ADDR_DEFINE \
{                               \
LOW_BLOCK0_ADDR, /* Low block 0 address */ \
LOW_BLOCK1_ADDR, /* Low block 1 address */ \
MID_BLOCK0_ADDR, /* Mid block 0 address */ \
MID_BLOCK1_ADDR, /* Mid block 1 address */ \
HIGH_BLOCK0_ADDR, /* High block 0 address */ \
HIGH_BLOCK1_ADDR, /* High block 1 address */ \
N256K_BLOCK0_ADDR, /* 256K block 0 address */  \
N256K_BLOCK1_ADDR, /* 256K block 1 address */  \
N256K_BLOCK2_ADDR, /* 256K block 2 address */  \
N256K_BLOCK3_ADDR, /* 256K block 3 address */  \
N256K_BLOCK4_ADDR, /* 256K block 4 address */  \
N256K_BLOCK5_ADDR, /* 256K block 5 address */  \
N256K_BLOCK6_ADDR, /* 256K block 6 address */  \
N256K_BLOCK7_ADDR, /* 256K block 7 address */  \
N256K_BLOCK8_ADDR, /* 256K block 8 address */  \
N256K_BLOCK9_ADDR, /* 256K block 9 address */  \
N256K_BLOCK10_ADDR, /* 256K block 10 address */  \
N256K_BLOCK11_ADDR, /* 256K block 11 address */  \
N256K_BLOCK12_ADDR, /* 256K block 12 address */  \
N256K_BLOCK13_ADDR, /* 256K block 13 address */  \
N256K_BLOCK14_ADDR, /* 256K block 14 address */  \
N256K_BLOCK15_ADDR, /* 256K block 15 address */  \
N256K_BLOCK16_ADDR, /* 256K block 16 address */  \
N256K_BLOCK17_ADDR, /* 256K block 17 address */  \
N256K_BLOCK18_ADDR, /* 256K block 18 address */  \
N256K_BLOCK19_ADDR, /* 256K block 19 address */  \
N256K_BLOCK20_ADDR, /* 256K block 20 address */  \
N256K_BLOCK21_ADDR, /* 256K block 21 address */  \
N256K_BLOCK22_ADDR, /* 256K block 10 address */  \
N256K_BLOCK23_ADDR, /* 256K block 11 address */  \
N256K_BLOCK24_ADDR, /* 256K block 12 address */  \
N256K_BLOCK25_ADDR, /* 256K block 13 address */  \
N256K_BLOCK26_ADDR, /* 256K block 14 address */  \
N256K_BLOCK27_ADDR, /* 256K block 15 address */  \
N256K_BLOCK28_ADDR, /* 256K block 16 address */  \
N256K_BLOCK29_ADDR, /* 256K block 17 address */  \
N256K_BLOCK30_ADDR, /* 256K block 18 address */  \
N256K_BLOCK31_ADDR /* 256K block 19 address */  \
}
#define FLASH_BLOCK_MASK_DEFINE \
{                              \
LOW_BLOCK0_MASK, /* Low block 0 mask */ \
LOW_BLOCK1_MASK, /* Low block 1 mask */ \
MID_BLOCK0_MASK, /* Mid block 0 mask */ \
MID_BLOCK1_MASK, /* Mid block 1 mask */ \
HIGH_BLOCK0_MASK, /* High block 0 mask */ \
HIGH_BLOCK1_MASK, /* High block 1 mask */ \
N256K_BLOCK0_MASK, /* 256K block 0 mask */  \
N256K_BLOCK1_MASK, /* 256K block 1 mask */  \
N256K_BLOCK2_MASK, /* 256K block 2 mask */  \
N256K_BLOCK3_MASK, /* 256K block 3 mask */  \
N256K_BLOCK4_MASK, /* 256K block 4 mask */  \
N256K_BLOCK5_MASK, /* 256K block 5 mask */  \
N256K_BLOCK6_MASK, /* 256K block 6 mask */  \
N256K_BLOCK7_MASK, /* 256K block 7 mask */  \
N256K_BLOCK8_MASK, /* 256K block 8 mask */  \
N256K_BLOCK9_MASK, /* 256K block 9 mask */  \
N256K_BLOCK10_MASK, /* 256K block 10 mask */  \
N256K_BLOCK11_MASK, /* 256K block 11 mask */  \
N256K_BLOCK12_MASK, /* 256K block 12 mask */  \
N256K_BLOCK13_MASK, /* 256K block 13 mask */  \
N256K_BLOCK14_MASK, /* 256K block 14 mask */  \
N256K_BLOCK15_MASK, /* 256K block 15 mask */  \
N256K_BLOCK16_MASK, /* 256K block 16 mask */  \
N256K_BLOCK17_MASK, /* 256K block 17 mask */  \
N256K_BLOCK18_MASK, /* 256K block 18 mask */  \
N256K_BLOCK19_MASK, /* 256K block 19 mask */  \
N256K_BLOCK20_MASK, /* 256K block 20 mask */  \
N256K_BLOCK21_MASK, /* 256K block 21 mask */  \
N256K_BLOCK22_MASK, /* 256K block 21 mask */  \
N256K_BLOCK23_MASK, /* 256K block 21 mask */  \
N256K_BLOCK24_MASK, /* 256K block 21 mask */  \
N256K_BLOCK25_MASK, /* 256K block 21 mask */  \
N256K_BLOCK26_MASK, /* 256K block 21 mask */  \
N256K_BLOCK27_MASK, /* 256K block 21 mask */  \
N256K_BLOCK28_MASK, /* 256K block 21 mask */  \
N256K_BLOCK29_MASK, /* 256K block 21 mask */  \
N256K_BLOCK30_MASK, /* 256K block 21 mask */  \
N256K_BLOCK31_MASK /* 256K block 21 mask */  \
}

/* EEE module features */

/*  @brief The block endurance for erasing successful */
#define BLOCK_MAX_ENDURANCE       (250000U)
/*  @brief The EEC error will occur in IVOR exception handler */
#define EEE_ERR_IVOR_EXCEPTION    (0)
/*  @brief The EEC error will set an ECC error in MCR register */
#define EEE_ERR_C55_MCR           (1)
/*  @brief Has 4 bytes ECC */
#define EEE_ECC4                  (0)
/*  @brief Has 8 bytes ECC */
#define EEE_ECC8                  (1)
/*  @brief Has 16 bytes ECC */
#define EEE_ECC16                 (0)
/*  @brief Has 32 bytes ECC */
#define EEE_ECC32                 (0)
/* OSIF module features */

#define FEATURE_OSIF_USE_SYSTICK                         (0)
#define FEATURE_OSIF_USE_PIT                             (1)
#define FEATURE_OSIF_FREERTOS_ISR_CONTEXT_METHOD         (2)
#define OSIF_PIT (PIT)
#define OSIF_PIT_CHAN_ID_MAX (3u)
#define OSIF_CLK    PER_CLK
#define FEATURE_OSIF_PIT_FRZ_IN_DEBUG                    (0)

/* FCCU module features */

#define FEATURE_FCCU_UNLOCK_OP1                (0x913756AFU)
#define FEATURE_FCCU_UNLOCK_OP2                (0x825A132BU)
#define FEATURE_FCCU_UNLOCK_OP31               (0x29AF8752U)

#define FEATURE_FCCU_NCF_KEY                   (0xAB3498FEU)

#define FEATURE_FCCU_IRQ_EN_MASK               (0x1U)

#define FEATURE_FCCU_TRANS_UNLOCK              (0xBCU)
#define FEATURE_FCCU_PERMNT_LOCK               (0xFFU)
#define FEATURE_FCCU_EINOUT_EOUTX_MASK         (FCCU_EINOUT_EOUT0_MASK|FCCU_EINOUT_EOUT1_MASK)

#define FEATURE_FCCU_MAX_FAULTS_NO             (uint8_t)(46U)
/* FCUU filter feature */
#define FEATURE_FCCU_FILTER_EN                 (1U)
/* FCCU open drain for the error indicating pin(s) */
#define FEATURE_FCCU_OPEN_DRAIN_EN             (0U)
/* FCCU mode controller status */
#define FEATURE_FCCU_CONTROL_MODE_EN           (0U)
/* FCCU redundancy control checker */
#define FEATURE_FCCU_RCC_EN                    (0U)
/* FCCU ALARM state entry | FCCU CONFIG state watchdog timeout */
#define FEATURE_FCCU_MISC_ALARM_TIMEOUT_IRQn
/* FCCU Fault-Output (EOUT) Prescaler */
#define FEATURE_FCCU_FOP_SUPPORT

/* MSCM module features */

/* @brief Has interrupt router control registers (IRSPRCn). */
#define FEATURE_MSCM_HAS_INTERRUPT_ROUTER                (0)
/* @brief Has directed CPU interrupt routerregisters (IRCPxxx). */
#define FEATURE_MSCM_HAS_CPU_INTERRUPT_ROUTER            (0)

/* EMIOS module features */

/* @brief EMIOS CNT register 24 bits. */
#define FEATURE_EMIOS_COUNTER_24_BITS
/* @brief EMIOS STAC Client. */
#define FEATURE_EMIOS_STAC_CLIENT
/* @brief EMIOS support all modes for each channel. */
#define FEATURE_EMIOS_ALL_MODE_ON_CHANNEL
/* @brief EMIOS support Quadrature decode mode. */
#define FEATURE_EMIOS_QD_MODE_SUPPORT
/* @brief EMIOS has channel pair in the IRQ interrupt. */
#define FEATURE_EMIOS_CHANNELS_PER_IRQ          (1U)
/* @brief EMIOS number channels maximum. */
#define FEATURE_EMIOS_CHANNEL_MAX_COUNT         (32U)
/* @brief EMIOS Output Pulse-Width Modulation with Trigger. */
#define FEATURE_EMIOS_MODE_OPWMT_SUPPORT        (0U)
/* @brief EMIOS channels and counter buses select. */
#define FEATURE_EMIOS_BUS_A_SELECT              (1U)
#define FEATURE_EMIOS_BUS_B_SELECT              (1U)
#define FEATURE_EMIOS_BUS_C_SELECT              (0U)
#define FEATURE_EMIOS_BUS_D_SELECT              (1U)
#define FEATURE_EMIOS_BUS_E_SELECT              (0U)
#define FEATURE_EMIOS_BUS_F_SELECT              (0U)
/* @brief EMIOS channels and counter buses offset. */
#define FEATURE_EMIOS_BUS_B_SELECT_OFFSET(x)    (x)
#define FEATURE_EMIOS_BUS_C_SELECT_OFFSET(x)    (x)
#define FEATURE_EMIOS_BUS_D_SELECT_OFFSET(x)    (x)
#define FEATURE_EMIOS_BUS_E_SELECT_OFFSET(x)    (x)
/* @brief EMIOS number of channels available. */
#define FEATURE_EMIOS_CH_7_0_ENABLE             (1U)
#define FEATURE_EMIOS_CH_15_8_ENABLE            (0U)
#define FEATURE_EMIOS_CH_23_16_ENABLE           (1U)
#define FEATURE_EMIOS_CH_31_24_ENABLE           (0U)
#define FEATURE_EMIOS_CH_COUNT                  ((FEATURE_EMIOS_CH_7_0_ENABLE   * 8U) + \
                                                 (FEATURE_EMIOS_CH_15_8_ENABLE  * 8U) + \
                                                 (FEATURE_EMIOS_CH_23_16_ENABLE * 8U) + \
                                                 (FEATURE_EMIOS_CH_31_24_ENABLE * 8U))
/* @brief EMIOS channels offset. */
#define FEATURE_EMIOS_CH_7_0_SUB_OFFSET(x)      (x)
#define FEATURE_EMIOS_CH_15_8_SUB_OFFSET(x)     (x)
#define FEATURE_EMIOS_CH_23_16_SUB_OFFSET(x)    (x - 8U)
#define FEATURE_EMIOS_CH_31_24_SUB_OFFSET(x)    (x)

/* PWM_PAL module features */
#define FEATURE_PWMPAL_EMIOS_HAS_CHANNEL_MAPPING    (1)
#define PWMPAL_INDEX_2_HW_CHANNELS {0,1,2,3,4,5,6,7,16,17,18,19,20,21,22,23}

/* LINFlexD module features */

/* @brief LINFlexD separate interrupt lines for rx/tx/error. */
#define FEATURE_LINFLEXD_RX_TX_ERR_INT_LINES
/* @brief Clock names for LINFlexD */
#define LINFLEXD_CLOCK_NAMES {LIN0_CLK, LIN1_CLK}
/* @brief Address of the least significant byte in a 32-bit register (depends on endianess) */
#define FEATURE_LINFLEXD_LSB_ADDR(reg)  ((uint32_t)(&(reg)) + 3U)
/* @brief Address of the least significant word in a 32-bit register (depends on endianess) */
#define FEATURE_LINFLEXD_LSW_ADDR(reg)  ((uint32_t)(&(reg)) + 2U)
/* @brief LINFlexD "instance-implemented filters" mapping */
#define FEATURE_LINFLEXD_INST_HAS_IFCR {true, true}
/* @brief LINFlexD DMA support */
#define FEATURE_LINFLEXD_HAS_DMA_ENABLED
/* @brief LINFlexD DMA enabled instances */
#define FEATURE_LINFLEXD_INST_HAS_DMA {true, true}
/* @brief LINFlexD timeout interrupt enable bit mask */
#define LINFlexD_LINIER_TOIE_MASK LINFlexD_LINIER_DBEIETOIE_MASK

/* CSE module features */

/* @brief The Secure Boot feature is enabled by default */
#define FEATURE_CSE_SECURE_BOOT_ENABLED                  (1U)
/* @brief CSE is used in flashless configuration */
#define FEATURE_CSE_FLASHLESS_CONFIG                     (0U)
/* @brief CSE has Secure RAM */
#define FEATURE_CSE_HAS_SECURE_RAM                       (0U)
/* @brief CSE has Auxiliary Verification Key */
#define FEATURE_CSE_HAS_AVK                              (0U)

/* EDMA module features */

/* @brief DMA hardware version 2. */
#define FEATURE_DMA_HWV2
/* @brief Number of DMA channels. */
#define FEATURE_DMA_CHANNELS (64U)
/* @brief Number of DMA virtual channels. */
#define FEATURE_DMA_VIRTUAL_CHANNELS (FEATURE_DMA_CHANNELS * DMA_INSTANCE_COUNT)
/* @brief Number of DMA interrupt lines. */
#define FEATURE_DMA_CHANNELS_INTERRUPT_LINES (64U)
/* @brief Number of DMA virtual interrupt lines. */
#define FEATURE_DMA_VIRTUAL_CHANNELS_INTERRUPT_LINES ((uint32_t)100U)
/* @brief Number of DMA error interrupt lines. */
#define FEATURE_DMA_ERROR_INTERRUPT_LINES (2U)
/* @brief Number of DMA virtual error interrupt lines. */
#define FEATURE_DMA_VIRTUAL_ERROR_INTERRUPT_LINES ((uint32_t)FEATURE_DMA_ERROR_INTERRUPT_LINES * (uint32_t)DMA_INSTANCE_COUNT)
/* @brief DMA module has error interrupt. */
#define FEATURE_DMA_HAS_ERROR_IRQ
/* @brief DMA module separate interrupt lines for each channel */
#define FEATURE_DMA_SEPARATE_IRQ_LINES_PER_CHN
/* @brief DMA module 'ORed' intrerupt line for specific channels */
#define FEATURE_DMA1_CH32_CH39_ORED_IRQ_LINES
#define FEATURE_DMA1_CH40_CH47_ORED_IRQ_LINES
#define FEATURE_DMA1_CH48_CH55_ORED_IRQ_LINES
#define FEATURE_DMA1_CH56_CH63_ORED_IRQ_LINES
/* @brief Conversion from channel index to DCHPRI index. */
#define FEATURE_DMA_CHN_TO_DCHPRI_INDEX(x) (x)
/* @brief DMA channel groups count. */
#define FEATURE_DMA_CHANNEL_GROUP_COUNT (2U)
/* @brief Clock name for DMA */
#define FEATURE_DMA_CLOCK_NAMES {DMA0_CLK, DMA1_CLK}
/* @brief Macros defined for compatibility with ARM platforms */
#define DMA_TCD_CITER_ELINKYES_CITER_LE_MASK   DMA_TCD_CITER_ELINKYES_CITER_MASK
#define DMA_TCD_CITER_ELINKYES_CITER_LE_SHIFT  DMA_TCD_CITER_ELINKYES_CITER_SHIFT
#define DMA_TCD_CITER_ELINKYES_CITER_LE_WIDTH  DMA_TCD_CITER_ELINKYES_CITER_WIDTH
#define DMA_TCD_CITER_ELINKYES_CITER_LE(x)     DMA_TCD_CITER_ELINKYES_CITER(x)
/* @brief DMA channel width based on number of TCDs: 2^N, N=4,5,... */
#define FEATURE_DMA_CH_WIDTH (6U)
/* @brief DMA channel to instance */
#define FEATURE_DMA_VCH_TO_INSTANCE(x) 	((x) >> (uint32_t)FEATURE_DMA_CH_WIDTH)
/* @brief DMA virtual channel to channel */
#define FEATURE_DMA_VCH_TO_CH(x)        ((x) & ((uint32_t)FEATURE_DMA_CHANNELS - 1U))
/* @brief DMA supports the following particular transfer size: */
#define FEATURE_DMA_TRANSFER_SIZE_8B
#define FEATURE_DMA_TRANSFER_SIZE_32B


/* DMAMUX module features */

/*!
 * @brief Structure for the DMA hardware request
 *
 * Defines the structure for the DMA hardware request collections. The user can configure the
 * hardware request into DMAMUX to trigger the DMA transfer accordingly. The index
 * of the hardware request varies according  to the to SoC.
 */
typedef enum {
    EDMA_REQ_EQADC_0_CFFF0           = 0U,
    EDMA_REQ_EQADC_0_RFDF0           = 1U,
    EDMA_REQ_EQADC_0_CFFF1           = 2U,
    EDMA_REQ_EQADC_0_RFDF1           = 3U,
    EDMA_REQ_EQADC_0_CFFF2           = 4U,
    EDMA_REQ_EQADC_0_RFDF2           = 5U,
    EDMA_REQ_EQADC_0_CFFF3           = 6U,
    EDMA_REQ_EQADC_0_RFDF3           = 7U,
    EDMA_REQ_EQADC_0_CFFF4           = 8U,
    EDMA_REQ_EQADC_0_RFDF4           = 9U,
    EDMA_REQ_EQADC_0_CFFF5           = 10U,
    EDMA_REQ_EQADC_0_RFDF5           = 11U,
    EDMA_REQ_DSPI_1_TFFF             = 12U,
    EDMA_REQ_DSPI_1_RFDF             = 13U,
    EDMA_REQ_DSPI_2_TFFF             = 14U,
    EDMA_REQ_DSPI_2_RFDF             = 15U,
    EDMA_REQ_DSPI_3_TFFF             = 16U,
    EDMA_REQ_DSPI_3_RFDF             = 17U,
    EDMA_REQ_ESCI_0_TX               = 18U,
    EDMA_REQ_ESCI_0_RX               = 19U,
    EDMA_REQ_EMIOS_0_CH0             = 20U,
    EDMA_REQ_EMIOS_0_CH1             = 21U,
    EDMA_REQ_EMIOS_0_CH2             = 22U,
    EDMA_REQ_EMIOS_0_CH3             = 23U,
    EDMA_REQ_EMIOS_0_CH4             = 24U,
    EDMA_REQ_EMIOS_1_CH0             = 25U,
    EDMA_REQ_EMIOS_1_CH1             = 26U,
    EDMA_REQ_ETPU_01_CH0_ENG1_DTRS   = 27U,
    EDMA_REQ_ETPU_01_CH1_ENG1_DTRS   = 28U,
    EDMA_REQ_ETPU_01_CH2_ENG1_DTRS   = 29U,
    EDMA_REQ_ETPU_01_CH14_ENG1_DTRS  = 30U,
    EDMA_REQ_ETPU_01_CH15_ENG1_DTRS  = 31U,
    EDMA_REQ_DSPI_0_TFFF             = 32U,
    EDMA_REQ_DSPI_0_RFDF             = 33U,
    EDMA_REQ_ESCI_1_TX               = 34U,
    EDMA_REQ_ESCI_1_RX               = 35U,
    EDMA_REQ_EMIOS_0_CH6             = 36U,
    EDMA_REQ_EMIOS_0_CH7             = 37U,
    EDMA_REQ_EMIOS_1_CH2             = 38U,
    EDMA_REQ_EMIOS_1_CH3             = 39U,
    EDMA_REQ_EMIOS_0_CH16            = 40U,
    EDMA_REQ_EMIOS_0_CH17            = 41U,
    EDMA_REQ_EMIOS_0_CH18            = 42U,
    EDMA_REQ_EMIOS_0_CH19            = 43U,
    EDMA_REQ_ETPU_01_CH12_ENG1_DTRS  = 44U,
    EDMA_REQ_ETPU_01_CH13_ENG1_DTRS  = 45U,
    EDMA_REQ_ETPU_01_CH28_ENG1_DTRS  = 46U,
    EDMA_REQ_ETPU_01_CH29_ENG1_DTRS  = 47U,
    EDMA_REQ_SIU_EIF0                = 48U,
    EDMA_REQ_SIU_EIF1                = 49U,
    EDMA_REQ_SIU_EIF2                = 50U,
    EDMA_REQ_SIU_EIF3                = 51U,
    EDMA_REQ_ETPU_01_CH0_ENG2_DTRS   = 52U,
    EDMA_REQ_ETPU_01_CH1_ENG2_DTRS   = 53U,
    EDMA_REQ_ETPU_01_CH2_ENG2_DTRS   = 54U,
    EDMA_REQ_ETPU_01_CH3_ENG2_DTRS   = 55U,
    EDMA_REQ_ETPU_01_CH12_ENG2_DTRS  = 56U,
    EDMA_REQ_ETPU_01_CH13_ENG2_DTRS  = 57U,
    EDMA_REQ_ETPU_01_CH14_ENG2_DTRS  = 58U,
    EDMA_REQ_ETPU_01_CH15_ENG2_DTRS  = 59U,
    EDMA_REQ_ETPU_01_CH28_ENG2_DTRS  = 60U,
    EDMA_REQ_ETPU_01_CH29_ENG2_DTRS  = 61U,
    EDMA_REQ_ETPU_01_CH30_ENG2_DTRS  = 62U,
    EDMA_REQ_ETPU_01_CH31_ENG2_DTRS  = 63U,
    EDMA_REQ_EQADC_1_CFFF0           = 64U,
    EDMA_REQ_EQADC_1_RFDF0           = 65U,
    EDMA_REQ_EQADC_1_CFFF1           = 66U,
    EDMA_REQ_EQADC_1_RFDF1           = 67U,
    EDMA_REQ_EQADC_1_CFFF2           = 68U,
    EDMA_REQ_EQADC_1_RFDF2           = 69U,
    EDMA_REQ_EQADC_1_CFFF3           = 70U,
    EDMA_REQ_EQADC_1_RFDF3           = 71U,
    EDMA_REQ_EQADC_1_CFFF4           = 72U,
    EDMA_REQ_EQADC_1_RFDF4           = 73U,
    EDMA_REQ_EQADC_1_CFFF5           = 74U,
    EDMA_REQ_EQADC_1_RFDF5           = 75U,
    EDMA_REQ_DECFILTER_0_IB          = 76U,
    EDMA_REQ_DECFILTER_0_OB_INT      = 77U,
    EDMA_REQ_DECFILTER_1_IB          = 78U,
    EDMA_REQ_DECFILTER_1_OB_INT      = 79U,
    EDMA_REQ_DECFILTER_2_IB          = 80U,
    EDMA_REQ_DECFILTER_2_OB_INT      = 81U,
    EDMA_REQ_DECFILTER_3_IB          = 82U,
    EDMA_REQ_DECFILTER_3_OB_INT      = 83U,
    EDMA_REQ_DECFILTER_4_IB          = 84U,
    EDMA_REQ_DECFILTER_4_OB_INT      = 85U,
    EDMA_REQ_DECFILTER_5_IB          = 86U,
    EDMA_REQ_DECFILTER_5_OB_INT      = 87U,
    EDMA_REQ_DECFILTER_6_IB          = 88U,
    EDMA_REQ_DECFILTER_6_OB_INT      = 89U,
    EDMA_REQ_DECFILTER_7_IB          = 90U,
    EDMA_REQ_DECFILTER_7_OB_INT      = 91U,
    EDMA_REQ_DECFILTER_8_IB          = 92U,
    EDMA_REQ_DECFILTER_8_OB_INT      = 93U,
    EDMA_REQ_DECFILTER_9_IB          = 94U,
    EDMA_REQ_DECFILTER_9_OB_INT      = 95U,
    EDMA_REQ_DECFILTER_10_IB         = 96U,
    EDMA_REQ_DECFILTER_10_OB_INT     = 97U,
    EDMA_REQ_DECFILTER_11_IB         = 98U,
    EDMA_REQ_DECFILTER_11_OB_INT     = 99U,
    EDMA_REQ_SDADC_0                 = 100U,
    EDMA_REQ_SDADC_1                 = 101U,
    EDMA_REQ_SDADC_2                 = 102U,
    EDMA_REQ_SDADC_3                 = 103U,
    EDMA_REQ_SRX_0_FAST              = 104U,
    EDMA_REQ_SRX_1_FAST              = 105U,
    EDMA_REQ_SRX_0_SLOW              = 106U,
    EDMA_REQ_SRX_1_SLOW              = 107U,
    EDMA_REQ_ETPU_2_CH0_ENG1_DTRS    = 108U,
    EDMA_REQ_ETPU_2_CH1_ENG1_DTRS    = 109U,
    EDMA_REQ_ETPU_2_CH2_ENG1_DTRS    = 110U,
    EDMA_REQ_ETPU_2_CH3_ENG1_DTRS    = 111U,
    EDMA_REQ_ETPU_2_CH4_ENG1_DTRS    = 112U,
    EDMA_REQ_ETPU_2_CH5_ENG1_DTRS    = 113U,
    EDMA_REQ_ETPU_2_CH6_ENG1_DTRS    = 114U,
    EDMA_REQ_ETPU_2_CH7_ENG1_DTRS    = 115U,
    EDMA_REQ_PSI5_0_SMC              = 116U,
    EDMA_REQ_PSI5_0_DIAG             = 117U,
    EDMA_REQ_PSI5_1_SMC              = 118U,
    EDMA_REQ_PSI5_1_DIAG             = 119U,
    EDMA_REQ_SIPI_CH0                = 120U,
    EDMA_REQ_SIPI_CH1                = 121U,
    EDMA_REQ_SIPI_CH2                = 122U,
    EDMA_REQ_SIPI_CH3                = 123U,
    EDMA_REQ_M_CAN_0                 = 124U,
    EDMA_REQ_DSPI_5_TFFF             = 125U,
    EDMA_REQ_DSPI_5_RFDF             = 126U,
    EDMA_REQ_M_CAN_1                 = 127U
} dma_request_source_t;

/* EIM module features */

/* @brief The EIM check-bit mask has 32 bits */
#define FEATURE_EIM_CHECKBITMASK_32BIT
/* @brief The EIM has data mask 1 */
#define FEATURE_EIM_DATAMASK1
/* @brief The EIM channel types */
#define FEATURE_EIM_CH_TYPE_0 (0U)
#define FEATURE_EIM_CH_TYPE_1 (1U)
#define FEATURE_EIM_CH_TYPE_2 (2U)
/* @brief The EIM channel type structure */
#define FEATURE_EIM_CH_TYPE \
{                                \
FEATURE_EIM_CH_TYPE_0,         /* Channel type corresponding to channel 0  */       \
FEATURE_EIM_CH_TYPE_0,         /* Channel type corresponding to channel 1  */       \
FEATURE_EIM_CH_TYPE_1,         /* Channel type corresponding to channel 2  */       \
FEATURE_EIM_CH_TYPE_2,         /* Channel type corresponding to channel 3  */       \
FEATURE_EIM_CH_TYPE_0,         /* Channel type corresponding to channel 4  */       \
FEATURE_EIM_CH_TYPE_0,         /* Channel type corresponding to channel 5  */       \
}
/* @brief The EIM number of data words for each channel type  */
#define FEATURE_EIM_CH_TYPE_0_NUM_OF_DATA_WORDS (2U)
#define FEATURE_EIM_CH_TYPE_1_NUM_OF_DATA_WORDS (1U)
#define FEATURE_EIM_CH_TYPE_2_NUM_OF_DATA_WORDS (2U)
/* @brief The EIM WORD0 bitfields for each channel type  */
#define FEATURE_EIM_CH_TYPE_0_WORD0_MASK      0xFF000000u
#define FEATURE_EIM_CH_TYPE_0_WORD0_SHIFT     24u
#define FEATURE_EIM_CH_TYPE_0_WORD0_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_0_WORD0_SHIFT))&FEATURE_EIM_CH_TYPE_0_WORD0_MASK)
#define FEATURE_EIM_CH_TYPE_0_WORD0_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_0_WORD0_MASK))>>FEATURE_EIM_CH_TYPE_0_WORD0_SHIFT)
#define FEATURE_EIM_CH_TYPE_1_WORD0_MASK      0xFF000000u
#define FEATURE_EIM_CH_TYPE_1_WORD0_SHIFT     24u
#define FEATURE_EIM_CH_TYPE_1_WORD0_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_1_WORD0_SHIFT))&FEATURE_EIM_CH_TYPE_1_WORD0_MASK)
#define FEATURE_EIM_CH_TYPE_1_WORD0_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_1_WORD0_MASK))>>FEATURE_EIM_CH_TYPE_1_WORD0_SHIFT)
#define FEATURE_EIM_CH_TYPE_2_WORD0_MASK      0xFF000000u
#define FEATURE_EIM_CH_TYPE_2_WORD0_SHIFT     24u
#define FEATURE_EIM_CH_TYPE_2_WORD0_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_2_WORD0_SHIFT))&FEATURE_EIM_CH_TYPE_2_WORD0_MASK)
#define FEATURE_EIM_CH_TYPE_2_WORD0_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_2_WORD0_MASK))>>FEATURE_EIM_CH_TYPE_2_WORD0_SHIFT)
/* @brief The EIM WORD1 bitfields for each channel type  */
#define FEATURE_EIM_CH_TYPE_0_WORD1_MASK      0xFFFFFFFFu
#define FEATURE_EIM_CH_TYPE_0_WORD1_SHIFT     0u
#define FEATURE_EIM_CH_TYPE_0_WORD1_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_0_WORD1_SHIFT))&FEATURE_EIM_CH_TYPE_0_WORD1_MASK)
#define FEATURE_EIM_CH_TYPE_0_WORD1_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_0_WORD1_MASK))>>FEATURE_EIM_CH_TYPE_0_WORD1_SHIFT)
#define FEATURE_EIM_CH_TYPE_1_WORD1_MASK      0xFFFFFFFFu
#define FEATURE_EIM_CH_TYPE_1_WORD1_SHIFT     0u
#define FEATURE_EIM_CH_TYPE_1_WORD1_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_1_WORD1_SHIFT))&FEATURE_EIM_CH_TYPE_1_WORD1_MASK)
#define FEATURE_EIM_CH_TYPE_1_WORD1_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_1_WORD1_MASK))>>FEATURE_EIM_CH_TYPE_1_WORD1_SHIFT)
#define FEATURE_EIM_CH_TYPE_2_WORD1_MASK      0x0000000Fu
#define FEATURE_EIM_CH_TYPE_2_WORD1_SHIFT     0u
#define FEATURE_EIM_CH_TYPE_2_WORD1_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_2_WORD1_SHIFT))&FEATURE_EIM_CH_TYPE_2_WORD1_MASK)
#define FEATURE_EIM_CH_TYPE_2_WORD1_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_2_WORD1_MASK))>>FEATURE_EIM_CH_TYPE_2_WORD1_SHIFT)
/* @brief The EIM WORD2 bitfields for each channel type  */
#define FEATURE_EIM_CH_TYPE_0_WORD2_MASK      0xFFFFFFFFu
#define FEATURE_EIM_CH_TYPE_0_WORD2_SHIFT     0u
#define FEATURE_EIM_CH_TYPE_0_WORD2_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_0_WORD2_SHIFT))&FEATURE_EIM_CH_TYPE_0_WORD2_MASK)
#define FEATURE_EIM_CH_TYPE_0_WORD2_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_0_WORD2_MASK))>>FEATURE_EIM_CH_TYPE_0_WORD2_SHIFT)
#define FEATURE_EIM_CH_TYPE_2_WORD2_MASK      0xFFFFFFFFu
#define FEATURE_EIM_CH_TYPE_2_WORD2_SHIFT     0u
#define FEATURE_EIM_CH_TYPE_2_WORD2_WRITE(x)  (((uint32_t)(((uint32_t)(x))<<FEATURE_EIM_CH_TYPE_2_WORD2_SHIFT))&FEATURE_EIM_CH_TYPE_2_WORD2_MASK)
#define FEATURE_EIM_CH_TYPE_2_WORD2_READ(x)   (((uint32_t)(((uint32_t)(x))&FEATURE_EIM_CH_TYPE_2_WORD2_MASK))>>FEATURE_EIM_CH_TYPE_2_WORD2_SHIFT)

/* CTU (Cross Triggering Unit) module features */

/*!
 * @brief Macro defining number of ETIMER instances connected to the CTU
 */
#define CTU_ETIMER_COUNT   			 (ETIMER_INSTANCE_COUNT)

/*! @brief Number of ADC instances which can be triggered by CTU */
#define FEATURE_CTU_NUM_ADC          (2u)


/* ADC module features */
#define FEATURE_ADC_HAS_CTU_TRIGGER_MODE (0)

#define ADC_PRESAMPLE_VSS_HV         (ADC_PRESAMPLE_SRC0)    /* Presampling from High voltage ground for ADC*/
#define ADC_PRESAMPLE_VDD_HV_DIV_8   (ADC_PRESAMPLE_SRC1)    /* Presampling from ower High voltage Supply for ADC, SGEN divided by 8 */
#define ADC_PRESAMPLE_VSS_HV_ADRE1   (ADC_PRESAMPLE_SRC2)    /* Presampling from High voltage ground for ADC/TSENS */
#define ADC_PRESAMPLE_VDD_HV_ADRE1   (ADC_PRESAMPLE_SRC3)    /* Presampling from High voltage reference for ADC/TSENS */

#define ADC_CLOCKS                    {ADC0_CLK, ADC1_CLK, ADC2_CLK, ADC3_CLK}


/* SDADC module features */
/*! @brief SDADC instances has common trigger selection */
#define FEATURE_SDADC_HAS_COMMON_TRIGGER_SELECTION (1)
/*! @brief SDADC instances has common DMA and Interrupt gating selection */
#define FEATURE_SDADC_HAS_COMMON_DMAINT_GATE_SELECTION (1)
/*! @brief SDADC clocks */
#define SDADC_CLOCKS                  {ADCSD1_CLK, ADCSD2_CLK, ADCSD3_CLK, ADCSD4_CLK}
/* @brief Max of SDADC clock frequency */
#define SDADC_CLOCK_FREQ_MAX_RUNTIME     (16000000u)
/* @brief Min of SDADC clock frequency */
#define SDADC_CLOCK_FREQ_MIN_RUNTIME     (4000000u)
/*! @brief SDADC instances number */
#define FEATURE_SDADC_HAS_INSTANCE_NUMBER    (4u)
/*! @brief SDADC initial gain error table */
#define SDADC_GAIN_ERROR   {65536, 65536, 65536, 65536}
/*! @brief DMA channel number for SDADC instances */
#define SDADC_DMA_CHANNEL_NUMBER   {0xFFu, 0xFFu, 0xFFu, 0xFFu}
/*! @brief Interrupts from all SDADC instances are mapped to a single interrupt vector */
#define FEATURE_SDADC_INSTANCES_HAVE_COMMON_INT_VECTOR  (1)


/* EQADC module features */
#define EQADC_NUM_ADC                 (2u)					 /* Number of on-chip ADC modules per EQADC instance */
/*! @brief EQADC system clocks */
#define EQADC_CLOCKS                  {EQADC0_CLK, EQADC1_CLK}
/* @brief Max of on chip ADC clock frequency */
#define EQADC_ON_CHIP_ADC_CLOCK_FREQ_MAX_RUNTIME     (33000000u)
/* @brief Min of on chip ADC clock frequency */
#define EQADC_ON_CHIP_ADC_CLOCK_FREQ_MIN_RUNTIME     (2000000u)

/* DSPI module feature */

/* Define the PCS allocation for each DSPI/SPI module */
#define FEATURE_SPI_0_PCS_NUMBER 6
#define FEATURE_SPI_1_PCS_NUMBER 6
#define FEATURE_SPI_2_PCS_NUMBER 6
#define FEATURE_SPI_3_PCS_NUMBER 6
#define FEATURE_SPI_4_PCS_NUMBER 6

#define FEATURE_DSPI_PCS_MAPPING {FEATURE_SPI_0_PCS_NUMBER, FEATURE_SPI_1_PCS_NUMBER, \
                                 FEATURE_SPI_2_PCS_NUMBER, FEATURE_SPI_3_PCS_NUMBER, FEATURE_SPI_4_PCS_NUMBER}

/* Define the instance realocation */
#define FEATURE_DSPI_INSTANCES  {DSPI_0, DSPI_1, DSPI_2, DSPI_3, DSPI_4}

/* Define the initial values for state structures */
#define FEATURE_DSPI_INITIAL_STATE {NULL, NULL, NULL, NULL, NULL}

/* Define clock sources for SPI/DSPI instances */
#define FEATURE_DSPI_CLOCK_MAPPING {DSPI0_CLK, DSPI1_CLK, DSPI2_CLK, DSPI3_CLK, DSPI4_CLK}

/* Define margins of instances interval */
#define SPI_LOWEST_INSTANCE 0U
#define SPI_HIGHEST_INSTANCE 3U

/* Define FIFO size */
#define DSPI_FIFO_SIZE 4U

/* Each interrupt flag has it's own interrupt index */
#define FEATURES_DSPI_HAS_INDEPENDENT_INTERRUPTS 0U

/* Define number of DSPI instances */
#define SPI_INSTANCE_COUNT         0U

/* Define interrupt vector for dspi */
#define FEATURES_DSPI_SEND_INTERUPT_VECTOR    { DSPI0_TXFIFO_TFFF_IRQn, DSPI1_TXFIFO_TFFF_IRQn, DSPI2_TXFIFO_TFFF_IRQn, DSPI3_TXFIFO_TFFF_IRQn, DSPI4_TXFIFO_TFFF_IRQn}
#define FEATURES_DSPI_RECEIVE_INTERUPT_VECTOR { DSPI0_RXFIFO_RFDF_IRQn, DSPI1_RXFIFO_RFDF_IRQn, DSPI2_RXFIFO_RFDF_IRQn, DSPI3_RXFIFO_RFDF_IRQn, DSPI4_RXFIFO_RFDF_IRQn}
#define FEATURES_DSPI_FAULT_INTERUPT_VECTOR   { DSPI0_ERR_IRQn        , DSPI1_ERR_IRQn        , DSPI2_ERR_IRQn        , DSPI3_ERR_IRQn        , DSPI4_ERR_IRQn}

/* SRX module features */

/* Combined Interrupts */
#define FEATURE_SRX_HAS_COMBINED_IRQ

/* Has FIFO */
#define FEATURE_SRX_DMA_HAS_FIFO

/* Maximum Fast messages FIFO depth */
#define FEATURE_SRX_MAX_FIFO_SIZE (16U)

/* Has nibble length limit */
#define FEATURE_SRX_HAS_NIB_LEN_VAR_LIMIT

/* Mappings */
#define FEATURE_SRX_FAST_DMA_REQS {EDMA_REQ_SRX_0_FAST, EDMA_REQ_SRX_1_FAST}
#define FEATURE_SRX_SLOW_DMA_REQS {EDMA_REQ_SRX_0_SLOW, EDMA_REQ_SRX_1_SLOW}
#define FEATURE_SRX_CLOCK_NAMES {SENT0_CLK, SENT1_CLK}
#define FEATURE_SRX_IRQS {{SRX0_CH0_IRQn, SRX0_CH1_IRQn, SRX0_CH2_IRQn, SRX0_CH3_IRQn, SRX0_CH4_IRQn, SRX0_CH5_IRQn}, \
                          {SRX1_CH0_IRQn, SRX1_CH1_IRQn, SRX1_CH2_IRQn, SRX1_CH3_IRQn, SRX1_CH4_IRQn, SRX1_CH5_IRQn}}

/* PSI5 module features */

/* Channel count */
#define FEATURE_PSI5_CHANNEL_COUNT (1U)
/* Channel count */
#define FEATURE_PSI5_SLOT_COUNT (PSI5_CH0_SFR_COUNT)
/* Maximum number of FIFO locations */
#define FEATURE_PSI5_FIFO_COUNT (PSI5_CH0_PMR_COUNT)
/* Master instance */
#define FEATURE_PSI5_MASTER_INSTANCE (0U)
/* Mappings */
#define FEATURE_PSI5_IRQS {{PSI50_SDOE_IRQn}, {PSI51_SDOE_IRQn}}

/* CAN module features */

/* @brief Frames available in Rx FIFO flag shift */
#define FEATURE_CAN_RXFIFO_FRAME_AVAILABLE  (5U)
/* @brief Rx FIFO warning flag shift */
#define FEATURE_CAN_RXFIFO_WARNING          (6U)
/* @brief Rx FIFO overflow flag shift */
#define FEATURE_CAN_RXFIFO_OVERFLOW         (7U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN0 */
#define FEATURE_CAN0_MAX_MB_NUM             (64U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN1 */
#define FEATURE_CAN1_MAX_MB_NUM             (64U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN2 */
#define FEATURE_CAN2_MAX_MB_NUM             (64U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for CAN3 */
#define FEATURE_CAN3_MAX_MB_NUM             (64U)
/* @brief Maximum number of Message Buffers supported for payload size 8 for any of the CAN instances */
#define FEATURE_CAN_MAX_MB_NUM              (64U)
/* @brief Array of maximum number of Message Buffers supported for payload size 8 for all the CAN instances */
#define FEATURE_CAN_MAX_MB_NUM_ARRAY        { FEATURE_CAN0_MAX_MB_NUM, \
                                              FEATURE_CAN1_MAX_MB_NUM, \
                                              FEATURE_CAN2_MAX_MB_NUM, \
                                              FEATURE_CAN3_MAX_MB_NUM  }
/* @brief Has PE clock source select (bit field CAN_CTRL1[CLKSRC]). */
#define FEATURE_CAN_HAS_PE_CLKSRC_SELECT            (1)
/* @brief Has Pretending Networking mode */
#define FEATURE_CAN_HAS_PRETENDED_NETWORKING        (0)
/* @brief Has Stuff Bit Count Enable Bit */
#define FEATURE_CAN_HAS_STFCNTEN_ENABLE             (0)
/* @brief Has ISO CAN FD Enable Bit */
#define FEATURE_CAN_HAS_ISOCANFDEN_ENABLE           (0)
/* @brief Has Message Buffer Data Size Region 1 */
#define FEATURE_CAN_HAS_MBDSR1                      (0)
/* @brief Has Message Buffer Data Size Region 2 */
#define FEATURE_CAN_HAS_MBDSR2                      (0)
/* @brief Has Supervisor Mode MCR[SUPV]*/
#define FEATURE_CAN_HAS_SUPV             	        (1)
/* @brief Has DMA enable (bit field MCR[DMA]). */
#define FEATURE_CAN_HAS_DMA_ENABLE                  (0)
/* @brief Maximum number of Message Buffers IRQs */
#define FEATURE_CAN_MB_IRQS_MAX_COUNT       (18U)
/* @brief Has Wake Up Irq channels (CAN_Wake_Up_IRQS_CH_COUNT > 0u) */
#define FEATURE_CAN_HAS_WAKE_UP_IRQ         (0U)
/* @brief Message Buffers IRQs */
#define FEATURE_CAN_MB_IRQS                 { CAN_ORed_00_MB_IRQS, \
                                              CAN_ORed_01_MB_IRQS, \
                                              CAN_ORed_02_MB_IRQS, \
                                              CAN_ORed_03_MB_IRQS, \
                                              CAN_ORed_04_MB_IRQS, \
                                              CAN_ORed_05_MB_IRQS, \
                                              CAN_ORed_06_MB_IRQS, \
                                              CAN_ORed_07_MB_IRQS, \
                                              CAN_ORed_08_MB_IRQS, \
                                              CAN_ORed_09_MB_IRQS, \
                                              CAN_ORed_10_MB_IRQS, \
                                              CAN_ORed_11_MB_IRQS, \
                                              CAN_ORed_12_MB_IRQS, \
                                              CAN_ORed_13_MB_IRQS, \
                                              CAN_ORed_14_MB_IRQS, \
                                              CAN_ORed_15_MB_IRQS, \
                                              CAN_ORed_16_31_MB_IRQS, \
                                              CAN_ORed_32_63_MB_IRQS }
/*! @brief FlexCAN Embedded RAM address offset */
#define FEATURE_CAN_RAM_OFFSET              (0x00000060u)
/* @brief Has Self Wake Up mode */
#define FEATURE_CAN_HAS_SELF_WAKE_UP        (0)
/* @brief Has Flexible Data Rate */
#define FEATURE_CAN_HAS_FD                  (0)

#define CAN_IMASK1_BUF31TO0M_MASK           CAN_IMASK1_BUFLM_MASK
#define CAN_IMASK2_BUF63TO32M_MASK          CAN_IMASK2_BUFHM_MASK
/* @brief Clock name for the PE oscillator clock source */
#define FEATURE_CAN_PE_OSC_CLK_NAME         XOSC_CLK
/* @bried FlexCAN has Detection And Correction of Memory Errors */
#define FEATURE_CAN_HAS_MEM_ERR_DET         (0)
/* @bried FlexCAN has ECC requires clear of RXMASKs reg */
#define FEATURE_CAN_ECC_CLEAR_RXMASKS       (0)

/* SIU module feature */
/** GPIO - Register Layout Typedef */
typedef struct {
  __IO uint32_t PGPDO; /**< Parallel GPIO Pin Data Output Registers, array offset: 0xC00, array step: 0x4 */
       uint32_t RESERVED_PGPDO[SIU_PGPDO_COUNT - 1U];
  __I  uint32_t PGPDI; /**< Parallel GPIO Pin Data Input  Registers, array offset: 0xC40, array step: 0x4 */
} GPIO_Type;

/** Number of GPIO instances of the SIU module. */
#define GPIO_INSTANCE_COUNT                  (SIU_PGPDO_COUNT)
/** Peripheral SIU base address */
#define GPIO_BASE                            (0xC3F90C00u)
/** Peripheral GPIO base pointer */
#define GPIO                                 ((GPIO_Type *)GPIO_BASE)
 /* GPIO - Peripheral instance base addresses */
#define PTC                                  ((GPIO_Type *)(GPIO_BASE + 0x08u))
#define PTD                                  ((GPIO_Type *)(GPIO_BASE + 0x0Cu))
#define PTE                                  ((GPIO_Type *)(GPIO_BASE + 0x10u))
#define PTF                                  ((GPIO_Type *)(GPIO_BASE + 0x14u))
#define PTG                                  ((GPIO_Type *)(GPIO_BASE + 0x18u))
#define PTH                                  ((GPIO_Type *)(GPIO_BASE + 0x1Cu))
#define PTI                                  ((GPIO_Type *)(GPIO_BASE + 0x20u))
#define PTJ                                  ((GPIO_Type *)(GPIO_BASE + 0x24u))
#define PTK                                  ((GPIO_Type *)(GPIO_BASE + 0x28u))
#define PTL                                  ((GPIO_Type *)(GPIO_BASE + 0x2Cu))
#define PTM                                  ((GPIO_Type *)(GPIO_BASE + 0x30u))
#define PTN                                  ((GPIO_Type *)(GPIO_BASE + 0x34u))
#define PTO                                  ((GPIO_Type *)(GPIO_BASE + 0x38u))
#define PTP                                  ((GPIO_Type *)(GPIO_BASE + 0x3Cu))
/** Array initializer of GPIO peripheral base pointers */
#define GPIO_BASE_PTRS                       { PTC, PTD, PTE, PTF, PTG, PTH, PTI, PIJ, \
                                               PTK, PTL, PTM, PTN, PTO, PTP }

/** PORT - Register Layout Typedef */
typedef struct {
  __IO  uint16_t PCR[32];
} PORT_Type;
/** Peripheral PORT base pointer */
#define SIU_PCR_BASE                         (SIU->PCR)
#define SIU_IMUX_BASE                        (0xC3F91200u)
/* PORT - Peripheral instance base addresses */
#define PORTC                                ((PORT_Type *)(SIU_PCR_BASE + 0x0040))
#define PORTD                                ((PORT_Type *)(SIU_PCR_BASE + 0x0060))
#define PORTE                                ((PORT_Type *)(SIU_PCR_BASE + 0x0080))
#define PORTF                                ((PORT_Type *)(SIU_PCR_BASE + 0x00A0))
#define PORTG                                ((PORT_Type *)(SIU_PCR_BASE + 0x00C0))
#define PORTH                                ((PORT_Type *)(SIU_PCR_BASE + 0x00E0))
#define PORTI                                ((PORT_Type *)(SIU_PCR_BASE + 0x0100))
#define PORTJ                                ((PORT_Type *)(SIU_PCR_BASE + 0x0120))
#define PORTK                                ((PORT_Type *)(SIU_PCR_BASE + 0x0140))
#define PORTL                                ((PORT_Type *)(SIU_PCR_BASE + 0x0160))
#define PORTM                                ((PORT_Type *)(SIU_PCR_BASE + 0x0180))
#define PORTN                                ((PORT_Type *)(SIU_PCR_BASE + 0x01A0))
#define PORTO                                ((PORT_Type *)(SIU_PCR_BASE + 0x01C0))
#define PORTP                                ((PORT_Type *)(SIU_PCR_BASE + 0x01E0))
/** Array initializer of PORT peripheral base pointers */
#define PORT_BASE_PTRS                       { PORTC, PORTD, PORTE, PORTF, PORTG, PORTH, \
                                               PORTI, PORTJ, PORTK, PORTL, PORTM, PORTN, \
                                               PORTO, PORTP }

/* MCAN module features */

/* @brief MCAN Ram Start Address */
#define FEATURE_MCAN_MESSAGE_RAM_START_ADR  0xFFE34000U
/* @brief MCAN Max Number of supported Message Buffers as Rx */
#define FEATURE_MCAN_RX_MB_NUM              (64U)
/* @brief MCAN Max Number of supported Message Buffers as Tx */
#define FEATURE_MCAN_TX_MB_NUM              (32U)
/* @brief MCAN Max Number of standard ID elements used as FiltersID */
#define FEATURE_MCAN_STD_ID_NUM             (128U)
/* @brief MCAN Max Number of extended ID elements used as FiltersID */
#define FEATURE_MCAN_EXT_ID_NUM             (64U)
/* @brief MCAN Max Number of supported WORDS accessed by one interface */
#define FEATURE_MCAN_RAM_MESSAGES_WRD       (1216UL)
/* @brief MCAN Number of RxFIFOs */
#define FEATURE_MCAN_NO_RXFIFO				(2U)

/* TIMING_PAL module features */
/* @brief The issue: PIT and STM modules can not run if the stop in debug mode is enabled */
#define TIMING_PAL_HAS_PIT_STM_NOT_WORK_IN_DEBUG_MODE (1U)
/* @brief PIT default interrupt handler */
#define PIT_Ch0_IRQHandler   PIT_RTI0_IRQHandler

#define PIT_Ch1_IRQHandler   PIT_RTI1_IRQHandler

#define PIT_Ch2_IRQHandler   PIT_RTI2_IRQHandler

#define PIT_Ch3_IRQHandler   PIT_RTI3_IRQHandler
/* @brief STM default interrupt handler */
#define STM0_Ch0_IRQHandler   STM_CIR0_IRQHandler

#define STM0_Ch123_IRQHandler STM_CIR123_IRQHandler

/* TDM module features */

/*! @brief TDR count */
#define TDR_COUNT 6U

/* PASS module features */

/* @brief Has Region 0 */
#define FEATURE_PASS_HAS_RL0                  (0U)
/* @brief Has Region 1 */
#define FEATURE_PASS_HAS_RL1                  (1U)
/* @brief Has Region 2 */
#define FEATURE_PASS_HAS_RL2                  (2U)
/* @brief Has Region 3 */
#define FEATURE_PASS_HAS_RL3                  (3U)

/* PASS module features */

/* @brief Has Region 0 */
#define FEATURE_PASS_HAS_RL0                  (0U)
/* @brief Has Region 1 */
#define FEATURE_PASS_HAS_RL1                  (1U)
/* @brief Has Region 2 */
#define FEATURE_PASS_HAS_RL2                  (2U)
/* @brief Has Region 3 */
#define FEATURE_PASS_HAS_RL3                  (3U)

/* IGF module features */

/* @brief The Cluster channel for group 0 from channel 0 to 31 */
#define FEATURE_IGF_CLUSTER_CHANNEL_GROUP_0                  (0U)
/* @brief The Cluster channel for group 1 from channel 32 to 45 */
#define FEATURE_IGF_CLUSTER_CHANNEL_GROUP_1                  (32U)
/* @brief The max channel id of instance 0 */
#define FEATURE_IGF_MAX_CHANNEL_INSTANCE_0                  (29U)
/* @brief The max channel id of instance 1 */
#define FEATURE_IGF_MAX_CHANNEL_INSTANCE_1                  (45U)

#define FEATURE_IGF_MAX_CHANNEL_INSTANCE_ARRAY_DEFINE \
{                                        \
    FEATURE_IGF_MAX_CHANNEL_INSTANCE_0,              \
    FEATURE_IGF_MAX_CHANNEL_INSTANCE_1               \
}

/* ZIPWIRE module features */

/* @brief LFAST data rate change delay */
#define LFAST_DATA_RATE_CHANGE_DELAY 0xFU
/* @brief LFAST wakeup delay control register */
#define LFAST_WAKEUP_DELAY_CONTROL 0x12015402UL
/* @brief LFAST enable slave tx command */
#define LFAST_ENABLE_SLAVE_TX_CMD 0x31U
/* @brief LFAST check slave status command */
#define LFAST_CHECK_SLAVE_STATUS_CMD 0x0U
/* @brief LFAST enable slave pll command */
#define LFAST_ENABLE_SLAVE_PLL_CMD 0x02U
/* @brief LFAST change slave tx speed mode command */
#define LFAST_CHANGE_SLAVE_TX_SPEED_MODE_CMD 0x80U
/* @brief LFAST change slave rx speed mode command */
#define LFAST_CHANGE_SLAVE_RX_SPEED_MODE_CMD 0x10U
/* @brief Clock names for LFAST */
#define LFAST_CLOCK_NAMES {LFAST0_CLK}
/* @brief SIPI channel error flags masks */
#define SIPI_CH0_ERR_MASK 0xFFUL
#define SIPI_CH1_ERR_MASK 0xFF00UL
#define SIPI_CH2_ERR_MASK 0xFF0000UL
#define SIPI_CH3_ERR_MASK 0xFF000000UL
/* @brief SIPI channel count */
#define SIPI_CHANNEL_COUNT 4U
/* @brief SIPI streaming channel number */
#define SIPI_STREAMING_CH 2U
/* @brief SIPI reset timeout */
#define SIPI_RESET_TIMEOUT 10000U
/* @brief SIPI stream channel data register access */
#define SIPI_STREAM_DATA(x) (SIPI->CDR2[(x)])
/* @brief SIPI stream transfer length in bytes */
#define SIPI_STREAM_TRANSFER_LEN 8U
/* @brief SIPI data access macros */
#define SIPI_DATA_SHIFT(x) ((uint32_t)(0x18U & (0x18U << ((uint8_t)(x)))))
#define SIPI_DATA(x,y)     ((x) >> SIPI_DATA_SHIFT(y))
/* @brief SIPI interrupt lines count */
#define SIPI_IRQ_COUNT 1U
/* @brief SIPI ored interrupt lines */
#define SIPI_ORED_INT_LINES
/* @brief Clock names for SIPI */
#define SIPI_CLOCK_NAMES {SIPI0_CLK}

/* DECFILTER module features */
#define FEATURE_DECFILTER_HAS_PSI   (1U)
#define FEATURE_DECFILTER_ENHANCED_DEBUG (1U)

#endif /* MPC5777C_FEATURES_H */

/*******************************************************************************
 * EOF
 ******************************************************************************/
