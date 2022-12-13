#include <stdio.h>

void main()
{
	int number, check_bit;
	printf("Enter any number: ");
	scanf("%d", &number);
	check_bit = number & 1;
	printf("LSB of %d is %d", number, check_bit);
}