#include <stdio.h>

int main()
{
	char x;
	printf("Enter a character: ");
	scanf(" %c", &x);
	x = x - 32;
	printf("%c", x);
}