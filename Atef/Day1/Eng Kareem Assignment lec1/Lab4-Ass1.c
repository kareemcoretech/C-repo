#include<stdio.h>


int main()
{
	float r,A,C;
	printf("please enter the radius\n");
	scanf("%f",&r);
	A = 3.14*r*r;
	C = 2*3.14*r;
	printf("the area = %f\nthe circumference = %f\n",A,C);
}