################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Empty\ main/main.c 

OBJS += \
./Application/Empty\ main/main.o 

C_DEPS += \
./Application/Empty\ main/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Empty\ main/main.o: ../Application/Empty\ main/main.c Application/Empty\ main/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"Application/Empty main/main.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


