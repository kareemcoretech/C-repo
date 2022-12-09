#include <stdio.h>

int main()
{
	float degree_in_celsius,degree_in_fahrenheit;

 	printf("Enter Degree In Celsius \n");
	scanf("%f",&degree_in_celsius);
	
	degree_in_fahrenheit = degree_in_celsius*9/5+32;	
	printf("Degree In Fahrenhiet : %0.2f",degree_in_fahrenheit);
}