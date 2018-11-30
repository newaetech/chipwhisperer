# Generic GNU Make driver file.
OUT_DIR= output
CONFIG= debug
GEN_SOURCE_DIR= Generated_Source/PSoC6

include platform_$(CONFIG).mk
include app_source.mk
include $(GEN_SOURCE_DIR)/gen_source.mk

GEN_OBJECTS_CortexM0p= $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .o,$(basename $(GEN_C_SOURCE_CortexM0p))))) $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .o,$(basename $(GEN_ASM_SOURCE_CortexM0p))))) 
GEN_SEP_OBJECTS_CortexM0p= $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .o,$(basename $(GEN_SEP_C_SOURCE_CortexM0p))))) 
DEPS_CortexM0p= $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .c.d,$(basename $(APP_C_SOURCE_CortexM0p))))) $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .c.d,$(basename $(GEN_C_SOURCE_CortexM0p))))) $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .c.d,$(basename $(GEN_SEP_C_SOURCE_CortexM0p))))) 
APP_OBJECTS_CortexM0p= $(addprefix $(OUT_DIR_CortexM0p)/,$(notdir $(addsuffix .o,$(basename $(APP_C_SOURCE_CortexM0p))))) 

GEN_OBJECTS_CortexM4= $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .o,$(basename $(GEN_C_SOURCE_CortexM4))))) $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .o,$(basename $(GEN_ASM_SOURCE_CortexM4))))) 
GEN_SEP_OBJECTS_CortexM4= $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .o,$(basename $(GEN_SEP_C_SOURCE_CortexM4))))) 
DEPS_CortexM4= $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .c.d,$(basename $(APP_C_SOURCE_CortexM4))))) $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .c.d,$(basename $(GEN_C_SOURCE_CortexM4))))) $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .c.d,$(basename $(GEN_SEP_C_SOURCE_CortexM4))))) 
APP_OBJECTS_CortexM4= $(addprefix $(OUT_DIR_CortexM4)/,$(notdir $(addsuffix .o,$(basename $(APP_C_SOURCE_CortexM4))))) 

all : $(OUT_DIR_CortexM0p)/$(DESIGN).hex $(OUT_DIR_CortexM4)/$(DESIGN).hex $(OUT_DIR)/$(DESIGN).hex

$(OUT_DIR)/$(DESIGN).hex : $(OUT_DIR_CortexM4)/$(DESIGN).hex $(OUT_DIR_CortexM0p)/$(DESIGN).hex
	Export/cymcuelftool --merge $(OUT_DIR_CortexM4)/$(DESIGN).elf $(OUT_DIR_CortexM0p)/$(DESIGN).elf --output $(OUT_DIR)/$(DESIGN).elf --hex $(OUT_DIR)/$(DESIGN).hex

prebuild_CortexM0p :
	Export/prebuildCortexM0p.sh
prebuild_CortexM4 :
	Export/prebuildCortexM4.sh

postbuild_CortexM0p : 
postbuild_CortexM4 : 

$(OUT_DIR_CortexM0p)/$(DESIGN).hex : prebuild_CortexM0p $(OUT_DIR_CortexM0p)/$(DESIGN)_link.elf postbuild_CortexM0p
	Export/cymcuelftool --sign $(OUT_DIR_CortexM0p)/$(DESIGN)_link.elf --output $(OUT_DIR_CortexM0p)/$(DESIGN).elf --hex $(OUT_DIR_CortexM0p)/$(DESIGN).hex

$(OUT_DIR_CortexM0p)/$(DESIGN)_link.elf : $(APP_OBJECTS_CortexM0p) $(GEN_SEP_OBJECTS_CortexM0p) $(GEN_LIBS_CortexM0p) $(APP_LIBS_CortexM0p)
	"$(LD)" -Wl,--start-group $^ -o $@ $(LDFLAGS_CortexM0p) -Wl,--end-group

$(OUT_DIR_CortexM0p)/$(DESIGN).a : $(GEN_OBJECTS_CortexM0p)
	"$(AR)" $(ARFLAGS) $@ $^

$(OUT_DIR_CortexM4)/$(DESIGN).hex : prebuild_CortexM4 $(OUT_DIR_CortexM4)/$(DESIGN)_link.elf postbuild_CortexM4
	Export/cymcuelftool --sign $(OUT_DIR_CortexM4)/$(DESIGN)_link.elf --output $(OUT_DIR_CortexM4)/$(DESIGN).elf --hex $(OUT_DIR_CortexM4)/$(DESIGN).hex

$(OUT_DIR_CortexM4)/$(DESIGN)_link.elf : $(APP_OBJECTS_CortexM4) $(GEN_SEP_OBJECTS_CortexM4) $(GEN_LIBS_CortexM4) $(APP_LIBS_CortexM4)
	"$(LD)" -Wl,--start-group $^ -o $@ $(LDFLAGS_CortexM4) -Wl,--end-group

$(OUT_DIR_CortexM4)/$(DESIGN).a : $(GEN_OBJECTS_CortexM4)
	"$(AR)" $(ARFLAGS) $@ $^

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/sysint/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/ipc/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/sysclk/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/wdt/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/scb/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/efuse/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/flash/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/gpio/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/sysanalog/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/syspm/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/syslib/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/syslib/gcc/%.S
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/trigmux/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/systick/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/profile/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/prot/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/lvd/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : $(GEN_SOURCE_DIR)/pdl/middleware/ble/%.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/sysint/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/ipc/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/sysclk/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/wdt/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/scb/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/efuse/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/flash/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/gpio/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/sysanalog/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/syspm/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/syslib/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/syslib/gcc/%.S
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/trigmux/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/systick/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/profile/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/prot/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/drivers/peripheral/lvd/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : $(GEN_SOURCE_DIR)/pdl/middleware/ble/%.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : %.c
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM0p)/%.o : armgcc/startup/%.S
	@mkdir -p $(OUT_DIR_CortexM0p)
	@"$(CC)" $(CDEPGEN_CortexM0p)
	"$(CC)" -c $(CFLAGS_CortexM0p) $< -o $@

$(OUT_DIR_CortexM4)/%.o : %.c
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

$(OUT_DIR_CortexM4)/%.o : armgcc/startup/%.S
	@mkdir -p $(OUT_DIR_CortexM4)
	@"$(CC)" $(CDEPGEN_CortexM4)
	"$(CC)" -c $(CFLAGS_CortexM4) $< -o $@

clean:
	$(RM) $(RMFLAGS) $(OUT_DIR)
-include $(DEPS_CortexM0p)
-include $(DEPS_CortexM4)
