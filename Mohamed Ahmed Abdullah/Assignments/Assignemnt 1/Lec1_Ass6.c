#include <stdio.h>

int main(){
		
	int number1;
	int number2;
	
	printf("Enter the number1: ");
	scanf("%d", &number1);
	printf("Enter the number2: ");
	scanf("%d", &number2);
	
	printf("Summation = %d \n", number1 + number2);
	printf("Subtraction = %d \n", number1 - number2);
	printf("Anding = %d \n", number1 & number1);
	printf("oring = %d \n", number1 | number2);
	printf("Xoring = %d \n", number1 ^ number2);
	
	return 0;
}