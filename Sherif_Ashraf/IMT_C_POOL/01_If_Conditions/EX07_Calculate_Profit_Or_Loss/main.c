#include <stdio.h>
#include <stdlib.h>

void main(void) {
	float c_p,s_p,res;
	printf("Enter Cost Price \n");
	scanf("%f",&c_p);
	printf("Enter Selling Price \n");
	scanf("%f",&s_p);
	if(s_p>c_p)
	{
		res = s_p - c_p;
		printf("Profit = %0.2f",res);
	}
	else if(c_p>s_p)
	{
		res = c_p - s_p;
		printf("Loss = %0.2f",res);
	}
	else
	{
		printf("No Loss No Profit");
	}
}
