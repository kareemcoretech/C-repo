#include <stdio.h>
int main ()
{
	int c;
	printf("enter your character\n");
	scanf(" %c",&c);
	if (( c>='a' && c<= 'z') || ( c>='A' && c<= 'Z') )
	{
		printf(" the character is alphabet\n");
	}
	else 
	{
		printf("the character is not alphabet");
	}
}