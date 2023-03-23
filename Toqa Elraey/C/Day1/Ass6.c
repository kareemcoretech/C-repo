#include <stdio.h>

int main(){
	float temp;
	printf("Enter the Water's Temprature: ");
	scanf("%f", &temp);
	
	if(temp >= 0 && temp < 30){
		printf("The required heating time is 7 mins.");
	}
	else if(temp >= 30 && temp < 60){
		printf("The required heating time is 5 mins.");
	}
	else if(temp >= 60 && temp < 90){
		printf("The required heating time is 3 mins.");
	}
	else if(temp >= 90 && temp < 100){
		printf("The required heating time is 1 mins.");
	}
	else{
		printf("Invalid input");
	}
}