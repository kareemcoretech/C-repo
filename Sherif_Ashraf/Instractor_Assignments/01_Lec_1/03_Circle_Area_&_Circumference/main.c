#include <stdio.h>

int main()
{
	float pi=3.14,a,c,r;

	printf("Enter Radius Of The Circle \n");
	scanf("%f",&r);

	a = pi*r*r;
	c = 2*pi*r;
	printf("Area Of Circle = %0.2f \n",a);
	printf("Circumference Of Circle = %0.2f \n",c);
}