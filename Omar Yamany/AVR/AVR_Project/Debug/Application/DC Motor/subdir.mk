################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/DC\ Motor/main.c 

OBJS += \
./Application/DC\ Motor/main.o 

C_DEPS += \
./Application/DC\ Motor/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/DC\ Motor/main.o: ../Application/DC\ Motor/main.c Application/DC\ Motor/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"Application/DC Motor/main.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


