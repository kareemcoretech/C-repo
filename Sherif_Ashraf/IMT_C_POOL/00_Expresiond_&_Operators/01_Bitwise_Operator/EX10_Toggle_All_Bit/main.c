#include<stdio.h>

void main(void)
{
	int num,bit,toggle_bit;
	printf("Enter Number\n");
	scanf("%d",&num);

	toggle_bit = num;
	toggle_bit = ~toggle_bit;

	printf("Number Before Toggle All Bit %d  = %d \n",bit,num);
	printf("Number After Toggle All Bit %d  = %d",bit,toggle_bit);

}