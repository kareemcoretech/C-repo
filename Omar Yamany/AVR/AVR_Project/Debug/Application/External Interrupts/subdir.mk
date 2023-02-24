################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/External\ Interrupts/main3.c 

OBJS += \
./Application/External\ Interrupts/main3.o 

C_DEPS += \
./Application/External\ Interrupts/main3.d 


# Each subdirectory must supply rules for building sources it contributes
Application/External\ Interrupts/main3.o: ../Application/External\ Interrupts/main3.c Application/External\ Interrupts/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"Application/External Interrupts/main3.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


