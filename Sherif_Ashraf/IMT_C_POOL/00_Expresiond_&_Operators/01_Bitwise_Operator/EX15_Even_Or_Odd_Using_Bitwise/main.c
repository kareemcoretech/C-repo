#include<stdio.h>

void main(void)
{
	int num,read_bit;
	printf("Enter Number\n");
	scanf("%d",&num);

	read_bit = (num>>0)&1;

	if(read_bit)
	{
		printf("Number %d Is Odd",num);	
	}
	else
	{
		printf("Number %d Is Even",num);
	}
}