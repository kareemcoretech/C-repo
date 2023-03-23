################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/H-Bridge/main.c 

OBJS += \
./Application/H-Bridge/main.o 

C_DEPS += \
./Application/H-Bridge/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/H-Bridge/%.o: ../Application/H-Bridge/%.c Application/H-Bridge/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


