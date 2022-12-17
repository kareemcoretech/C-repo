#include <stdio.h>

#include "bitmath.h"

void main(void)
{
	int res_of_set_bit,res_of_clear_bit,res_of_toggle_bit,res_of_read_bit,x,bit,operation;

	printf("Enter Number Of Operation set_bit , toggle_bit , clear_bit , read_bit [1 - 4] \n");
	scanf("%d",&operation);
	printf("Enter Number & Number Of Bit \n");
	scanf("%d %d",&x,&bit);

	if(operation == 1)
	{
		res_of_set_bit = set_bit(x,bit);
		printf("Set_bit %d \n",res_of_set_bit);
	}
	else if(operation == 2)
	{
		res_of_toggle_bit = toggle_bit(x,bit);
		printf("toggle_bit %d \n",res_of_toggle_bit);
	}
	else if(operation == 3)
	{
		res_of_clear_bit = clear_bit(x,bit);
		printf("clear_bit %d \n",res_of_clear_bit);
	}
	else if(operation == 4)
	{
		res_of_read_bit = read_bit(x,bit);
		printf("read_bit %d \n",res_of_read_bit);
	}
	else
	{
		printf("Invalid Range");
	}
}

