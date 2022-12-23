#include <stdio.h>

void main()
{
	int number, check_bit, n;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf("Enter nth bit to check (0-31): ");
	scanf("%d", &n);
	check_bit = 1 << n;
	if(number&check_bit)
		printf("The %d bit is set to: 1", n);
	else
		printf("The %d bit is set to: 0", n);
	
}