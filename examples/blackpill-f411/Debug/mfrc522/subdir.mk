################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../mfrc522/mfrc522.c 

OBJS += \
./mfrc522/mfrc522.o 

C_DEPS += \
./mfrc522/mfrc522.d 


# Each subdirectory must supply rules for building sources it contributes
mfrc522/%.o mfrc522/%.su mfrc522/%.cyclo: ../mfrc522/%.c mfrc522/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F411xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/home/lth/src/stm32-mfrc522/examples/blackpill-f411/mfrc522" -Og -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-mfrc522

clean-mfrc522:
	-$(RM) ./mfrc522/mfrc522.cyclo ./mfrc522/mfrc522.d ./mfrc522/mfrc522.o ./mfrc522/mfrc522.su

.PHONY: clean-mfrc522

