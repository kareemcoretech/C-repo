#include<stdio.h>

void main(void)
{
	int num,read_bit;
	printf("Enter Number\n");
	scanf("%d",&num);

	read_bit = (num>>8)&1;

	printf("Most Significant Bit = %d",read_bit);

}