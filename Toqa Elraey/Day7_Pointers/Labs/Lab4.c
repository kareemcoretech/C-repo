#include <stdio.h>

void scanArray(int *ptr, int size);
void SUM(int ptr[], int size, int *sum);

int main(){
	int Array[5];
	int SIZE = sizeof(Array) / sizeof(Array[0]);
	scanArray(Array, SIZE);
	
	int sum;
	
	SUM(Array, SIZE, &sum);
	printf("%d", sum);
}

void scanArray(int *ptr, int size){
	for(int i = 0; i < size; i++){
		printf("enter element: ");
		scanf("%d", ptr+i);
	}
}


void SUM(int ptr[], int size, int *sum){
	*sum = 0;
	for(int i = 0; i < size; i++){
		*sum = *sum + ptr[i];
	}
}
