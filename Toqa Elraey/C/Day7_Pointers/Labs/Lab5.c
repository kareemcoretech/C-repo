#include <stdio.h>

void scanArray1(int *ptr, int size);
void scanArray2(int *ptr, int size);
void SCALAR(int ptr1[], int ptr2[], int size, int *sum);

int main(){
	int x;
	printf("Enter the size of Array: ");
	scanf("%d", &x);
	int Array1[x];
	int Array2[x];
	int SIZE = sizeof(Array1) / sizeof(Array1[0]);
	
	scanArray1(Array1, SIZE);
	scanArray2(Array2, SIZE);
	
	int Scalar;
	
	SCALAR(Array1, Array2, SIZE, &Scalar);
	
	printf("The Result is: %d", Scalar);
}

void scanArray1(int *ptr, int size){
	for(int i = 0; i < size; i++){
		printf("enter element: ");
		scanf("%d", ptr+i);
	}
}

void scanArray2(int *ptr, int size){
	for(int i = 0; i < size; i++){
		printf("enter element: ");
		scanf("%d", ptr+i);
	}
}

void SCALAR(int ptr1[], int ptr2[], int size, int *sum){
	*sum = 0;
	for(int i = 0; i < size; i++){
		*sum = *sum + (ptr1[i] * ptr2[i]);
	}
}