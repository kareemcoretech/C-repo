#include <stdio.h>

int main()
{
	printf("Enter a character: ");
	char x;
	scanf(" %c", &x);
	if ((x>='a' && x<='z') || (x>='A' && x<='Z'))
	{
		printf("character is an alphabet");
		
	}
	else
	{
		printf("character is not an alphabet");
	}
}