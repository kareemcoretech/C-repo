#include <stdio.h>

void BubbleSort(int array[], int size);


int main(){
	int SIZE;
	printf("Please enter the size of array: ");
	scanf("%d", &SIZE);
	
	int Number[SIZE];
	for(int i = 0; i < SIZE; i++){
		printf("Please enter element number %d: ", i+1);
		scanf("%d", &Number[i]);
	}
	
	BubbleSort(Number, SIZE);
}

void BubbleSort(int array[], int size){
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(array[j] > array[j + 1]){
				int temp;
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for(int i= 0; i < size; i++){
		printf("%d\n", array[i]);
	}
}
