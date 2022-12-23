#include <stdio.h>

void main()
{
	int number, flipped_number;
	printf("Enter any number: ");
	scanf("%d", &number);
	flipped_number = ~number;
	printf("Original number = %d\n", number);
	printf("Number after bits are flipped = %d", flipped_number);
}