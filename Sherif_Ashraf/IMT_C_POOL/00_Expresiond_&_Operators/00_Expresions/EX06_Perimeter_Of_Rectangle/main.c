#include<stdio.h>

void main(void)
{
	float length,width,perimeter;
	printf("Enter length Then Width\n");
	scanf("%f %f",&length,&width);

	perimeter = 2*(length + width);
	printf("Perimeter = %0.2f\n",perimeter);
}