#include<stdio.h>
int main()
{
	float r;
	float A;
	float C;
	float y;
	y=3.14;
	printf("Enter The Raduis Of The Circle=");
	scanf("%f",&r);
	A=y*r*r;
	C=2*y*r;
	printf("The Area=%f \n",A);
	printf("The Circumference= %f",C);
}