#include <stdio.h>

void main()
{
	int number, clear_bit, n, number_after;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf("Enter nth bit to toggle (0-31): ");
	scanf("%d", &n);
	clear_bit = 1 << n;
	number_after = number ^ clear_bit;
	printf("Bit toggled successfully.\n\n");
	printf("Number before toggling %d bit: %d (in decimal)\n", n, number);
	printf("Number after toggling %d bit: %d (in decimal)", n, number_after);
}