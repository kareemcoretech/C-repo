#include <stdio.h>
void scanArray(int Array[], int size);
void printArray(int Array[], int size);


int main(){
	int s;
	printf("Please enter the size of Array: ");
	scanf("%d", &s);
	int Number[s];
	int SIZE = sizeof(Number) / sizeof(Number[0]);

	scanArray(Number, SIZE);
	printArray(Number, SIZE);
}

void scanArray(int Array[], int size){
	for(int i = 0; i < size; i++){
		printf("Please enter element number %d: ", i);
		scanf("%d", &Array[i]);
	}
}

void printArray(int Array[], int size){
	for(int j = size - 1; j >= 0; j--){
		printf("%d\n", Array[j]);
	}
}