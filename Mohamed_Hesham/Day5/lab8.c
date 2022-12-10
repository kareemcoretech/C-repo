#include <stdio.h>

void scanArray(int array[], int size){
	
	
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);
		
	}
	
	printf("Address of First Element in Array: %p\n", array);
	
	int limit = 0;
	
	printf("The Values in Reversed Order: \n");
	for(int i = size-1; i >= limit; i--){
		printf("%d \n", array[i]);
		
	}
	
}

int main(){
	int array[10];
	
	int size = sizeof(array)/sizeof(array[0]);
	
	scanArray(array, size);
}