#include <stdio.h>

void main()
{
	int number;
	int check_bit;
	int flag;
	printf("Enter any number: ");
	scanf("%d", &number);
	check_bit = 1 << 31;
	if(number & check_bit)
        printf("MSB of %d is set (1).", number);
    else
        printf("MSB of %d is unset (0).", number);

}