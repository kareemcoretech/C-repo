#include <stdio.h>

int main(){
		
	int degreeInC;
	int degreeInF;
	
	printf("Enter the tempreture in Celsius: ");
	scanf("%d",&degreeInC);
	
	degreeInF = degreeInC * (9/5) + 32;
	
	printf("Tempreture in Fehrenheit = %d", degreeInF);
	
	return 0;
}