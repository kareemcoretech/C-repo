################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Keypad\ with\ LCD/main.c 

OBJS += \
./Application/Keypad\ with\ LCD/main.o 

C_DEPS += \
./Application/Keypad\ with\ LCD/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Keypad\ with\ LCD/main.o: ../Application/Keypad\ with\ LCD/main.c Application/Keypad\ with\ LCD/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"Application/Keypad with LCD/main.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


