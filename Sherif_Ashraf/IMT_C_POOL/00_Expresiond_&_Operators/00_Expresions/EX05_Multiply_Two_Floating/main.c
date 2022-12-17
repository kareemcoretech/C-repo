#include<stdio.h>

void main(void)
{
	float a,b,res;
	printf("Enter Two Floating Numbers\n");
	scanf("%f %f",&a,&b);

	res = a*b;
	printf("%0.2f * %0.2f = %0.2f \n",a,b,res);
}