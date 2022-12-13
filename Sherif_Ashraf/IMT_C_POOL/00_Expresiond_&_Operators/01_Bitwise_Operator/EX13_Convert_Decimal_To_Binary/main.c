#include<stdio.h>

void main(void)
{
	int num,bit,read_bit;
	printf("Enter Number\n");
	scanf("%d",&num);

	printf("%d In Decimal = ",num);

	read_bit = num;
	for(bit = 7;bit>=0;bit--)
	{
	   read_bit = (num>>bit)&1;
	   printf("%d",read_bit);
	}
	printf(" In Binary");
}