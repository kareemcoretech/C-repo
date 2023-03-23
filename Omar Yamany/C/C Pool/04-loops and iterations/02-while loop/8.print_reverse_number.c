#include<stdio.h>

void main()
{
	int normal,reverse;
	printf("Enter a number: ");
	scanf("%d", &normal);
	
	while(normal>0)
	{
		reverse = (reverse*10) + (normal%10);
		normal /= 10;
	}
	printf("reverse number: %d", reverse);
}