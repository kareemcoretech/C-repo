#include<stdio.h>
int sum(void);
void main()
{
	printf("\nSum: %d", sum());
}

int sum(void)
{
	int Number;
	scanf("%d", &Number);
	if(Number!=0)
	{
		return Number+sum();
	}
	else
	{
		return Number;
	}
}