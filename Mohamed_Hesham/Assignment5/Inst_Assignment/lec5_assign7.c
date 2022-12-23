#include <stdio.h>


void SwapTArrays(int arrayOne[], int arrayTwo[], int size);

int main(){
	int arrayOne[5] = {1,3,5,4,6};
	int arrayTwo[5] = {2,8,9,7,3};
	int size = sizeof(arrayOne)/sizeof(arrayOne[0]);
	
	SwapTArrays(arrayOne, arrayTwo, size);
	
}

void SwapTArrays(int arrayOne[], int arrayTwo[], int size){
	int temp;
	for (int i = 0; i < size; i++){
		temp = arrayOne[i];
		arrayOne[i] = arrayTwo[i];
		arrayTwo[i] = temp; 
	}
	
	printf("Array One will be: \n");
	for (int i = 0; i < size; i++){
		printf("%d ", arrayOne[i]);
	}
	
	printf("\nArray Two will be: \n");
	for (int i = 0; i < size; i++){
		printf("%d ", arrayTwo[i]);
	}
}

