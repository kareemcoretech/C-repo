#include <stdio.h>



int main(){
	int number;
	int max_val = 0;
	

	for (int i = 0; i < 3; i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &number);
		if (number > max_val){
			max_val = number;
		}
	}
	
	printf("Max Number is: %d", max_val);

	
}