#include <stdio.h>

void main()
{
	char c;
	printf("Enter any character: ");
	scanf(" %c", &c);
	(c>='a' && c<='z') || (c>='A' && c<='Z')?printf("Character is an alphabet"):printf("Character is not an alphabet");
}