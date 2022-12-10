#include <stdio.h>

int main(){
	float tempC, tempF;
	
	printf("Please enter the Temprature in Celsuis: ");
	scanf("%f", &tempC);
	
	tempF = (tempC * 9 / 5) + 32;
	
	printf("The Temprature in Fahrenheit is: %f", tempF);
}