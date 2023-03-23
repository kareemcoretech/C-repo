################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Stepper\ motor/main.c 

OBJS += \
./Application/Stepper\ motor/main.o 

C_DEPS += \
./Application/Stepper\ motor/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Stepper\ motor/main.o: ../Application/Stepper\ motor/main.c Application/Stepper\ motor/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"Application/Stepper motor/main.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


