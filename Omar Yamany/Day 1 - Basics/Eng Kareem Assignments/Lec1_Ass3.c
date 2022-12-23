#include <stdio.h>

int main()
{
	float tempC, tempF;
	printf("Enter tempreature in Celsius");
	scanf("%f", &tempC);
	tempF= (tempC*9/5)+32;
	printf("Tempreature in Fahrenheit is: %f", tempF);
}