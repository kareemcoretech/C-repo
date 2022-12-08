#include<stdio.h>

void main(void)
{
	int num,bit,set_bit;
	printf("Enter Number\n");
	scanf("%d",&num);
	printf("Enter Position Of The Bit\n");
	scanf("%d",&bit);

	set_bit = num;
	set_bit |= (1<<bit);

	printf("Number Before Set Bit %d  = %d \n",bit,num);
	printf("Number After Set Bit %d  = %d",bit,set_bit);

}