#include <stdio.h>

void sumAvgArray(int array[], int size){
	
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);
		
	}
	
	int sum = 0;
	
	for(int i = 0; i < size; i++){
		sum += array[i];
		
	}
	
	int avg = sum / size;
	
	printf("Sum of Array Elements: %d\n", sum);
	printf("Average of Array Elements: %d\n", avg);
	
}

int main(){
	int array[10];
	
	int size = sizeof(array)/sizeof(array[0]);
	
	sumAvgArray(array, size);
}