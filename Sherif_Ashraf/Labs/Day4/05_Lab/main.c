#include <stdio.h>
#include "Get_Max.h"


void main(void)
{
	int num1,num2,res;

	printf("Enter Two Numbers \n");
	scanf("%d %d",&num1,&num2);
	res = get_max(num1,num2);
	printf("Max Number = %d",res);
}