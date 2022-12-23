#include <stdio.h>

int GetMinValue(int array[], int size);

int main(){
	int array[4];
 
	int size = sizeof(array)/sizeof(array[0]);
	
	int minim = GetMinValue(array, size);
	printf("Minimum Value is: %d", minim);
}

int GetMinValue(int array[], int size){
	
	int min = 100000000;
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);	
	}
	
	for(int i = 0; i < size; i++){
		if (array[i] < min ){
			min = array[i];
		}
	}
	
	return min;
	
}