#include<stdio.h>

void main(void)
{
	int num,bit,clear_bit;
	printf("Enter Number\n");
	scanf("%d",&num);
	printf("Enter Position Of The Bit\n");
	scanf("%d",&bit);

	clear_bit = num;
	clear_bit &= ~(1<<bit);

	printf("Number Before Clear Bit %d  = %d \n",bit,num);
	printf("Number After Clear Bit %d  = %d",bit,clear_bit);

}