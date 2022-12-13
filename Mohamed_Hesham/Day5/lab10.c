#include <stdio.h>

void Bubble_Sort(int array[], int size);
int main(){
	
	int array[12] = {9,5,3,6,8,4,2,15,8,4,7,5};
	int size = sizeof(array)/sizeof(array[0]);
	
	Bubble_Sort(array, size);
	
	for(int i = 0; i < size; i++){
		printf("%d \n", array[i]);
	}
}

void Bubble_Sort(int array[], int size){
	
	/*
	
	void swap(int x, int y){
		int temp = y;
		y = x;
		x = temp;
	}
	*/
	
	for(int i = 0; i < size-1; i++){
		for(int j = 0; j < size-1-i; j++){
			
			if( array[j] > array[j+1]){
				// swap(array[j], array[j+1]);
				
				int temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
				
			}
		}
	}
}