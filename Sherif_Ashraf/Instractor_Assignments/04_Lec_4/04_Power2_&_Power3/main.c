#include<stdio.h>

#include"power2.h"
#include"power3.h"

void main(void)
{
	int num,res_of_power_2,res_of_power_3;
	printf("enter number \n");
	scanf("%d",&num);
	res_of_power_2 = power_2(num);
	res_of_power_3 = power_3(num);
	if(res_of_power_2 == 1)
	{
		printf("%d is power of 2",num);
	}
	else if(res_of_power_3 == 1)
	{
		printf("%d is power of 3",num);	
	}
	else
	{
		printf("%d is not power of 2 or 3",num);		
	}
}