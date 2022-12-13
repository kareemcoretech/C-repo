#include <stdio.h>

void scanArray(int Array1[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element %d: ", i+1);
		scanf("%d", &Array1[i]);
	}
}

void SwapArrays(int Array1[], int Array2[], int size){
	for(int i = 0; i < size; i++){
		Array2[i] = Array1[size - 1 - i];
	}
}

void printArray(int Array2[], int size){
	for(int i = 0; i < size; i++){
		printf("%d\n", Array2[i]);
	}
}