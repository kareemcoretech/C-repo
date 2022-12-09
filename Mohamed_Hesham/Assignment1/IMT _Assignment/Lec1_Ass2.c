#include <stdio.h>



int main(){
	int array[3] = {};
	int num;

	
	for (int i = 0; i < 3; i++){
		printf("Enter Number %d: ", i+1);
		scanf("%d", &num);
		array[i] = num;
	}
	
	for (int i = 2; i > -1; i--){
		printf("Number %d: %d\n", i+1, array[i]);
	}
	
}