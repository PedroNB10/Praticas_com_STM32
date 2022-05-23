################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F1xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Genius_Augusto_e_Pedro_Nogueira
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Genius_Augusto_e_Pedro_Nogueira.elf \

MAP_FILES += \
Genius_Augusto_e_Pedro_Nogueira.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Genius_Augusto_e_Pedro_Nogueira.list \


# All Target
all: main-build

# Main-build Target
main-build: Genius_Augusto_e_Pedro_Nogueira.elf secondary-outputs

# Tool invocations
Genius_Augusto_e_Pedro_Nogueira.elf Genius_Augusto_e_Pedro_Nogueira.map: $(OBJS) $(USER_OBJS) C:\Users\Pedro\ Nogueira\STM32CubeIDE\Genius_Augusto_e_Pedro_Nogueira\STM32F103C8TX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Genius_Augusto_e_Pedro_Nogueira.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\Pedro Nogueira\STM32CubeIDE\Genius_Augusto_e_Pedro_Nogueira\STM32F103C8TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Genius_Augusto_e_Pedro_Nogueira.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Genius_Augusto_e_Pedro_Nogueira.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Genius_Augusto_e_Pedro_Nogueira.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Genius_Augusto_e_Pedro_Nogueira.elf Genius_Augusto_e_Pedro_Nogueira.list Genius_Augusto_e_Pedro_Nogueira.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
