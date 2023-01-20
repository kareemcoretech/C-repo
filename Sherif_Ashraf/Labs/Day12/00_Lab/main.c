#include<stdio.h>
#include"datatypes.h"

int sum(void);
void main(void)
{
	sum();
}

int sum(void)
{
	u16 number;
	scanf("%d",&number);

	if(number!=0)
	{
		return number +sum();
	}
	else
	{
		return number;
	}
}