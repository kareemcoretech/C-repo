#include <stdio.h>



int main(){
	int number_1;
	int number_2;
	
	printf("Please Enter Number a: ");
	scanf("%d", &number_1);
	
	printf("Please Enter Number b: ");
	scanf("%d", &number_2);
	
	int summation = number_1 + number_2;
	int subtraction = number_1 - number_2;
	int anding = number_1 & number_2;
	int oring = number_1 | number_2;
	int xoring = number_1 ^ number_2;

	
	printf("a + b = %d\n", summation);
	printf("a - b = %d\n", subtraction);
	printf("a & b = %d\n", anding);
	printf("a | b = %d\n", oring);
	printf("a ^ b = %d\n", xoring);

	
}