#include<stdio.h>

void main(void)
{
	int num,bit,toggle_bit;
	printf("Enter Number\n");
	scanf("%d",&num);
	printf("Enter Position Of The Bit\n");
	scanf("%d",&bit);

	toggle_bit = num;
	toggle_bit ^= (1<<bit);

	printf("Number Before toggle Bit %d  = %d \n",bit,num);
	printf("Number After toggle Bit %d  = %d",bit,toggle_bit);

}