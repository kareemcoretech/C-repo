#include<stdio.h>

void main(void)
{
	int num,bit,read_bit;
	printf("Enter Number\n");
	scanf("%d",&num);
	printf("Enter Postion Of Bit \n");
	scanf("%d",&bit);
	read_bit = (num>>bit)&1;
	printf("The %d Bit = %d",bit,read_bit);
}