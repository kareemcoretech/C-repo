#include <stdio.h>
#include <math.h>

int main(){
	float x, y, check;
	printf("Please enter a Number: ");
	scanf("%f", &x);
	
	y = sqrt(x);
	check = truncf(y);
	
	if(y == check){
		printf("The number is perfect square.");
	}
	else{
		printf("The number isn't perfect square.");
	}
	
}