#include <stdio.h>
#include "STD_TYPES.h"

typedef union example{
	u32 z;
	u8 y;
	u8 x;
} ex1;

void main(void){
	ex1 element;
	element.y = 5;
	element.x = 127;
	element.z = 1000;
	
	printf("size = %d \n",sizeof(element));
	printf("%d \n",element.x);
	printf("%d \n",element.y);
	printf("%d \n",element.z);
}
