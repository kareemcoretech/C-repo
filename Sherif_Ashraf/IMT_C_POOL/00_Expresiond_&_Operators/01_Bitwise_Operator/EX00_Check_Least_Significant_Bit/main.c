#include<stdio.h>

void main(void)
{
	int num,read_bit;
	printf("Enter Number\n");
	scanf("%d",&num);

	read_bit = (num>>0)&1;

	printf("Least Significant Bit = %d",read_bit);

}