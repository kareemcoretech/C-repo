#include <stdio.h>
int main()
{
	int celsius;
	float Fahrenheit;
	scanf("%d",& celsius);
	Fahrenheit = (celsius * (9/5))+32;
	printf("Fahrenheit = %f", Fahrenheit);
}