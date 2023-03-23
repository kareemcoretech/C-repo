#include <stdio.h>
#include "STD_TYPES.h"

typedef struct{
	u16 x;
	u32 y;
	u16 z;
	u32 k;
} mystruct1;

typedef struct{
	u16 x;
	u16 z;
	u32 y;
	u32 k;
} mystruct2;

typedef struct{
	u32 y;
	u32 k;
	u16 x;
	u16 z;
} mystruct3;

	
void main(void){
	mystruct1 x1;
	u8 xSize1 = sizeof(x1);
	
	mystruct2 x2;
	u8 xSize2 = sizeof(x2);
	
	mystruct3 x3;
	u8 xSize3 = sizeof(x3);
	
	printf("Size of x1: %d \n", xSize1);
	printf("Size of x2 (after modify): %d \n", xSize2);
	printf("Size of x3 (after modify): %d \n", xSize3);
}