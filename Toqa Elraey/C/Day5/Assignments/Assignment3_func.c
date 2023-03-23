#include <stdio.h>

void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element %d: ", i+1);
		scanf("%d", &Array[i]);
	}
}


int LastOccurrence(int Array[], int size, int num){
	int index = 0;
	for(int i = 0; i < size; i++){
		if(num == Array[i]){
			index = i;
		}
		else{
			index = -1;
		}
	}
	return index;
}