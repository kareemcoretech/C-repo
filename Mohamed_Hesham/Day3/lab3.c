#include <stdio.h>

int main(){
	
	int input;
	int sum = 0;
	
	printf("Enter the 10 numbers\n");

	for(int i = 0; i <= 9; i++){
		printf("Number-%d: ", i);
		scanf("%d", &input);
		sum += input;
	}

	
	int average = sum / 10;
	printf("The sum of the 10 numbers is: %d\n", sum);
	printf("The average of the 10 numbers is: %d\n", average);
	
}

