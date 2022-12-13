#include <stdio.h>



int main(){
	int array[10] = {};
	int number;
	int target_number;
	for (int i = 0; i < 10; i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &number);
		array[i] = number;
	}
	
	printf("Enter the value to search: ");
	scanf("%d", &target_number);
	
	for (int i = 0; i < 10; i++){
		if (target_number == array[i]){
			printf("value is exist at element number: %d", i+1);
		}
	}
	
}
