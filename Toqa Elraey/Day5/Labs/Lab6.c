#include <stdio.h>

void scanArray(int Array[], int size);
void sorting(int Array[], int size);

int main(){
	int Array[10];
	int size = sizeof(Array) / sizeof(Array[0]);
	
	scanArray(Array, size);
	
	sorting(Array, size);
	
	printf("The Maximum number in Array is: %d\n", Array[size - 1]);
	printf("The Minimum number in Array is: %d", Array[0]);
}


void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter number %d: ", i+1);
		scanf("%d", &Array[i]);
	}
}


void sorting(int Array[], int size){
	int temp;
	for(int j = 0; j < size - 1; j++){
		for(int k = 0; k < size - 1 - j; k++){
			if(Array[k] > Array[k + 1]){
				temp = Array[k];
				Array[k] = Array[k + 1];
				Array[k + 1] = temp;
			}
		}
	}
}