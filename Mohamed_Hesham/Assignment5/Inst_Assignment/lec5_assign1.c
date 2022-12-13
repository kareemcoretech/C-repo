#include <stdio.h>

void sumArray(int array[], int size);
int main(){
	int array[10] = {1,2,1,5,5,9,6,5,8,6};
	int size = sizeof(array)/sizeof(array[0]);
	sumArray(array, size);
	
}

void sumArray(int array[], int size){

	int sum = 0;
	
	for(int i = 0; i < size; i++){
		sum += array[i];	
	}
		
	printf("Sum of Array Elements: %d\n", sum);	
	
}