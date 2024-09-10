################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.c 

OBJS += \
./STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.o 

C_DEPS += \
./STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.d 


# Each subdirectory must supply rules for building sources it contributes
STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/%.o STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/%.su STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/%.cyclo: ../STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/%.c STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -c -I../Inc -I"C:/Users/Ahmed_Aboeita/Desktop/Mastering-Embedded-System/Unit7_MCU_Essential_Peripherals/Lesson3/STM32F103C6_Drivers/STM32_F103C6_Drivers/inclide" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-STM32_F103C6_Drivers-2f-STM32F103xx_GPIO_Driver

clean-STM32_F103C6_Drivers-2f-STM32F103xx_GPIO_Driver:
	-$(RM) ./STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.cyclo ./STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.d ./STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.o ./STM32_F103C6_Drivers/STM32F103xx_GPIO_Driver/STM32F103xx_GPIO.su

.PHONY: clean-STM32_F103C6_Drivers-2f-STM32F103xx_GPIO_Driver

