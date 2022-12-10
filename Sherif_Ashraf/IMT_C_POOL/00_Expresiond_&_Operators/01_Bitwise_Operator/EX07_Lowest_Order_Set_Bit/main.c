#include<stdio.h>

void main(void)
{
	int num,bit,read_bit,low_order;
	printf("Enter Number\n");
	scanf("%d",&num);

	read_bit = num;

	for(bit = 0;bit <= 7;bit++)
	{
		read_bit = (num>>bit)&1;
		if(read_bit)
		{
			low_order = bit;
			break;
		}
	}

	printf("lowest order Bit In Number %d = %d Bit \n",num,low_order);
}