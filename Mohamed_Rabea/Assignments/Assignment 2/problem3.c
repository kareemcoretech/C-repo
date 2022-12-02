#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if ( ('a'<=c && c<='z') || ('A'<=c && c<='Z') )
	{
		printf("%c is an alphapet",c);
	}

	else {
		printf("%c isn't an alphapet",c);
	}
}
