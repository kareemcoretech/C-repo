#include <stdio.h>

void main()
{
	int number, clear_bit, n, number_after;
	printf("Enter any number: ");
	scanf("%d", &number);
	printf("Enter nth bit to clear (0-31): ");
	scanf("%d", &n);
	clear_bit = 1 << n;
	clear_bit = ~clear_bit;
	number_after = number & clear_bit;
	printf("Bit cleared successfully.\n\n");
	printf("Number before clearing %d bit: %d (in decimal)\n", n, number);
	printf("Number after clearing %d bit: %d (in decimal)", n, number_after);
}