#include <stdio.h>

int GetMaxValue(int array[], int size);
int GetMinValue(int array[], int size);

int main(){
	int array[10];
 
	int size = sizeof(array)/sizeof(array[0]);
	
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);	
	}
	
	int minim = GetMinValue(array, size);
	printf("Minimum Value is: %d\n", minim);
	
	int maxim = GetMaxValue(array, size);
	printf("Maximum Value is: %d", maxim);
	
	
}

int GetMaxValue(int array[], int size){
	
	int max = 0;
	
	for(int i = 0; i < size; i++){
		if (array[i] > max ){
			max = array[i];
		}
	}
	
	return max;
	
}

int GetMinValue(int array[], int size){
	
	int min = 100000000;
	
	for(int i = 0; i < size; i++){
		if (array[i] < min ){
			min = array[i];
		}
	}
	
	return min;
	
}