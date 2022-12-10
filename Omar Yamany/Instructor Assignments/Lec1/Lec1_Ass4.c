#include <stdio.h>

int main()
{
	float radius, area, circum;
	printf("Enter radius of circle");
	scanf("%f", &radius);
	area = 3.14*radius*radius;
	circum = 2*3.14*radius;
	printf("Area = %f\n Circumference = %f\n", area, circum);
}