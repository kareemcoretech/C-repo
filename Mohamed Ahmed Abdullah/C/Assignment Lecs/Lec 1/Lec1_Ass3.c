#include <stdio.h>

int main(){
		
	int x;
	int y;
	
	printf("Enter the number a: ");
	scanf("%d", &x);
	printf("Enter the number b: ");
	scanf("%d", &y);
	
	printf("a + b = %d \n", x + y);
	printf("a - b = %d \n", x - y);
	printf("a & b = %d \n", x & y);
	printf("a | b = %d \n", x | y);
	printf("a ^ b = %d \n", x ^ y);
	
	return 0;
}