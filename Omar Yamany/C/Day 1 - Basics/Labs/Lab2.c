#include <stdio.h>

int main()
{
	int x=0;
	printf("Please enter value of 'X':");
	scanf("%d", &x);
	printf("X in decimal: %d \n", x);
	printf("X in char: %c\n", x);
	char y;
	printf("Enter value of Y:");
	scanf(" %c", &y);
	printf("Value of Y: %c", y);
}