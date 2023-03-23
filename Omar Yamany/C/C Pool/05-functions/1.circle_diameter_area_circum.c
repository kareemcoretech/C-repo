#include<stdio.h>

float Get_diameter(float r);
float Get_Circum(float r);
float Get_area(float r);

void main()
{
	float radius, diameter, circum, area;
	printf("Enter radius of circle: ");
	scanf("%f", &radius);
	diameter = Get_diameter(radius);
	circum = Get_Circum(radius);
	area = Get_area(radius);
	printf("\nDiameter = %.2f", diameter);
	printf("\nCircumference = %2.2f", circum);
	printf("\nArea = %.2f", area);

}

float Get_Circum(float r)
{
	float result = 2*3.14*r;
	return result;
}

float Get_area(float r)
{
	float result = 3.14*r*r;
	return result;
}

float Get_diameter(float r)
{
	float result = 2*r;
	return result;
}