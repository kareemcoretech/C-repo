#include <stdio.h>

int main(){
	int input_1;
	int input_2;
	
	int output;
	
	while (1){
		printf("Enter Number 1: ");
		scanf("%d", &input_1);
	
		printf("Enter Number 2: ");
		scanf("%d", &input_2);
		
		output = input_1 + input_2;
		printf("Summation of 2 Numbers is: %d\n", output);
	} 

}
