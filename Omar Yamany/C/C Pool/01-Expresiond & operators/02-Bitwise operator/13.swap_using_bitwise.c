#include <stdio.h>
#define SIZE sizeof(int)*8

void main()
{
	int number1, number2;
	printf("Enter number1: ");
	scanf("%d", &number1);
	printf("Enter number2: ");
	scanf("%d", &number2);
	
	printf("Original value of number1: %d\n", number1);
	printf("Original value of number1: %d\n", number2);\
	
	number1 = number1 ^ number2;
	//works as number1 = number1+number2
	number2 = number2 ^ number1;
	//works as number 2 = number1-number2
	number1 = number1 ^ number2;
	//works as number1 = number1-number2
	
	printf("number1 after swapping: %d\n", number1);
	printf("number2 after swapping: %d", number2);
}