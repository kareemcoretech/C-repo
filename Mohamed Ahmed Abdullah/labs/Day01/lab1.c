// Mohamed Ahmed Abdullah
/* 
Mohamed Ahmed Abdullah
25/11/2022
v1
*/

#include <stdio.h>

int main(){
	// 1 byte = 8 bits
	
	char variable1; // decimal value (1 byte) -> deceleration
	variable1 = 'A'; // -> initialization
	char variable2 = 5; // -> deceleration and initialization
	
	int variable3 = 10; // decimal value (4 bytes)
	float variable4 = 10.5; // floating value (4 bytes)
	double variable5 = 324.5; // floating value (8 bytes)
	
	printf("Mohamed Ahmed Abdullah \t v1 \n");
	printf("variable1 = %c \n",variable1); // %c -> decimal value
	printf("variable1 = %d \n",variable1); // %d -> decimal value
	printf("variable2 = %d \n",variable2); // %d -> decimal value
	printf("variable3 = %d \n",variable3); // %d -> decimal value
	printf("variable4 = %f \n",variable4); // %f -> floating value
	printf("variable5 = %f \n",variable5); // %f -> floating value
	return 0;
}