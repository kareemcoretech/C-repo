#include <stdio.h>
int main ()
{
	float temp_celsius, temp_fahrenheit;
	printf("ENTER THE TEMPERETURE IN CELSIUS:");
	scanf("%f",&temp_celsius);
	temp_fahrenheit=(temp_celsius*9/5)+32;
	printf("THE TEMPERETURE IN FAHRENHEIT :%f",temp_fahrenheit);
	
	
}