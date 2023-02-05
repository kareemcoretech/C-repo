#include <stdio.h>

void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element %d: ", i+1);
		scanf("%d", &Array[i]);
	}
}


void Reversing(int Array[], int size){
	int temp;
	for(int i = 0; i < size - 1 - i; i++){
		temp = Array[i];
		Array[i] = Array[size - 1 - i];
		Array[size - 1 - i] = temp;
	}
}

void printArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d\n", Array[i]);
	}
}