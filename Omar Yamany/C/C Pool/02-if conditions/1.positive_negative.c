#include <stdio.h>

void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num==0)
		printf("number is zero");
	else if(num>0)
		printf("number is positive");
	else
		printf("number is negative");
}