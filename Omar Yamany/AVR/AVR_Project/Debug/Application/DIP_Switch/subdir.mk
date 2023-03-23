################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/DIP_Switch/DIO_prog.c \
../Application/DIP_Switch/main.c 

OBJS += \
./Application/DIP_Switch/DIO_prog.o \
./Application/DIP_Switch/main.o 

C_DEPS += \
./Application/DIP_Switch/DIO_prog.d \
./Application/DIP_Switch/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/DIP_Switch/%.o: ../Application/DIP_Switch/%.c Application/DIP_Switch/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


