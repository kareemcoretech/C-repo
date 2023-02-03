#include <stdio.h>

void main()
{
	int number, set_bit, n, number_after;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf("Enter nth bit to set (0-31): ");
	scanf("%d", &n);
	set_bit = 1 << n;
	number_after = number | set_bit;
	printf("Number before setting %d bit: %d (in decimal)\n", n, number);
	printf("Number after setting %d bit: %d (in decimal)", n, number_after);
}