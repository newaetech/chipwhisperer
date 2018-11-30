# Macros required for the generic driver for toolchain and/or operating system.

DESIGN= ChipWhisperer
CONFIG= debug
TOOLCHAIN_DIR ?= C:/Program Files (x86)/Cypress/PSoC Creator/4.2/PSoC Creator/import/gnu/arm/5.4.1/bin

CC_BASE= arm-none-eabi-gcc
CC_PATH= $(shell which $(CC_BASE) 2>/dev/null)
CC= $(if $(CC_PATH),$(CC_PATH),$(TOOLCHAIN_DIR)/$(CC_BASE))

OUT_DIR_CortexM0p= output/$(CONFIG)/CortexM0p
CFLAGS_CortexM0p= -mcpu=cortex-m0plus -mthumb -I. -IGenerated_Source/PSoC6 -IGenerated_Source/PSoC6/pdl/cmsis/include/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/ip/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/psoc63/include/ -IGenerated_Source/PSoC6/pdl/drivers/peripheral/ -IGenerated_Source/PSoC6/pdl/middleware/ -Wa,-alh=$(OUT_DIR_CortexM0p)/$(basename $(<F)).lst -g -D DEBUG -D CY_CORE_ID=0 -D CY_PSOC_CREATOR_USED=1 -D CY8C6347BZI_BLD53 -Wall -ffunction-sections -ffat-lto-objects -Og

OUT_DIR_CortexM4= output/$(CONFIG)/CortexM4
CFLAGS_CortexM4= -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 -mthumb -I. -IGenerated_Source/PSoC6 -IGenerated_Source/PSoC6/pdl/cmsis/include/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/ip/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/psoc63/include/ -IGenerated_Source/PSoC6/pdl/drivers/peripheral/ -IGenerated_Source/PSoC6/pdl/middleware/ -Wa,-alh=$(OUT_DIR_CortexM4)/$(basename $(<F)).lst -g -D DEBUG -D CY_CORE_ID=0 -D CY_PSOC_CREATOR_USED=1 -D CY8C6347BZI_BLD53 -Wall -ffunction-sections -ffat-lto-objects -Og

CDEPGEN_CortexM0p= -MM $< -MF $(OUT_DIR_CortexM0p)/$(<F).d -MT $(OUT_DIR_CortexM0p)/$(@F)  $(CFLAGS_CortexM0p)
CDEPGEN_CortexM4= -MM $< -MF $(OUT_DIR_CortexM4)/$(<F).d -MT $(OUT_DIR_CortexM4)/$(@F)  $(CFLAGS_CortexM4)

LD_BASE= arm-none-eabi-gcc
LD_PATH= $(shell which $(LD_BASE) 2>/dev/null)
LD= $(if $(LD_PATH),$(LD_PATH),$(TOOLCHAIN_DIR)/$(LD_BASE))

LDFLAGS_CortexM0p= -mcpu=cortex-m0plus -mthumb -L Generated_Source/PSoC6 -Wl,-Map,$(OUT_DIR_CortexM0p)/$(DESIGN).map -T cy8c6xx7_cm0plus.ld -specs=nano.specs -Wl,--gc-sections -g -ffunction-sections -Og -ffat-lto-objects
LDFLAGS_CortexM4= -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 -mthumb -L Generated_Source/PSoC6 -Wl,-Map,$(OUT_DIR_CortexM4)/$(DESIGN).map -T cy8c6xx7_cm4_dual.ld -specs=nano.specs -Wl,--gc-sections -g -ffunction-sections -Og -ffat-lto-objects

AS_BASE= arm-none-eabi-as
AS_PATH= $(shell which $(AS_BASE) 2>/dev/null)
AS= $(if $(AS_PATH),$(AS_PATH),$(TOOLCHAIN_DIR)/$(AS_BASE))

ASFLAGS_CortexM0p= -mcpu=cortex-m0plus -mthumb -I. -IGenerated_Source/PSoC6 -IGenerated_Source/PSoC6/pdl/cmsis/include/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/ip/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/psoc63/include/ -IGenerated_Source/PSoC6/pdl/drivers/peripheral/ -IGenerated_Source/PSoC6/pdl/middleware/ -alh=$(OUT_DIR_CortexM0p)/$(basename $(<F)).lst -g -W
ASFLAGS_CortexM4= -mcpu=cortex-m4 -mfloat-abi=softfp -mfpu=fpv4-sp-d16 -mthumb -I. -IGenerated_Source/PSoC6 -IGenerated_Source/PSoC6/pdl/cmsis/include/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/ip/ -IGenerated_Source/PSoC6/pdl/devices/psoc6/psoc63/include/ -IGenerated_Source/PSoC6/pdl/drivers/peripheral/ -IGenerated_Source/PSoC6/pdl/middleware/ -alh=$(OUT_DIR_CortexM4)/$(basename $(<F)).lst -g -W

AR_BASE= arm-none-eabi-ar
AR_PATH= $(shell which $(AR_BASE) 2>/dev/null)
AR= $(if $(AR_PATH),$(AR_PATH),$(TOOLCHAIN_DIR)/$(AR_BASE))
ARFLAGS= -rs

RM= rm
RMFLAGS= -rf
