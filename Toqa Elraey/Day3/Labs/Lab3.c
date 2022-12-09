#include <stdio.h>

int main(){
	float num;
	float sum = 0;
	float av;
	
	printf("Please enter 10 number:\n ");
	
	for(int i = 0; i < 10; i++){
		printf("Number %d: ", i+1);
	    scanf("%f", &num);
		sum = sum + num;
	}
	av = sum / 10;
	printf("The sum of 10 numbers is: %f\n", sum);
	printf("The average of 10 numbers is: %f", av);
	
	
}