#include <stdio.h>

void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element %d: ", i+1);
		scanf("%d", &Array[i]);
	}
}


int total(int Array[], int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum = sum + Array[i];
	}
	return sum;
}