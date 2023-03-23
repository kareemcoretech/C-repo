#include <stdio.h>
#include "STD_TYPES.h"

typedef union memory{
	struct {
		u8 B0: 1;
		u8 B1: 1;
		u8 B2: 1;
		u8 B3: 1;
		u8 B4: 1;
		u8 B5: 1;
		u8 B6: 1;
		u8 B7: 1;
	} Bits;
	u8 Byte;
} Register;

void main(void){
	Register reg1;
	reg1.Byte = 6;
	
	printf("size = %d \n",sizeof(reg1));
	printf("%d \n", reg1.Byte);
	
	reg1.Bits.B0 = 1;
	printf("%d \n", reg1.Byte);
	
	reg1.Bits.B7 = 1;
	printf("%d \n", reg1.Byte);
}
