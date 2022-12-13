#include<stdio.h>

void main(void)
{
	int num,bit,read_bit,bit_count = 0;
	printf("Enter Number\n");
	scanf("%d",&num);

	read_bit = num;

	for(bit = 0;bit <= 7;bit++)
	{
		read_bit = (num>>bit)&1;
		if(read_bit)
		{
			break;
		}
		else
		{
			bit_count++;
		}
	}

	printf("Trailing Zeros In Number %d = %d \n",num,bit_count);
}