#include<stdio.h>

void main(void)
{
	int num,read_bit,bit,zeros_count=0,ones_count=0;
	printf("Enter Number To \n");
	scanf("%d",&num);


	for(bit = 0;bit<=7;bit++)
	{
		read_bit = (num>>bit)&1;
		if(read_bit)
		{
			ones_count++;
		}
		else
		{
			zeros_count++;
		}
	}
	printf("Ones Bit In Number %d = %d \n",num,ones_count);
	printf("Zeros Bit In Number %d = %d",num,zeros_count);
}