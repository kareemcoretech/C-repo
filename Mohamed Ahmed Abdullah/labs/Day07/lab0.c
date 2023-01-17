
#include <stdio.h>

void printArray(int arr[], int size);
int *returnArr();

int *calc(int a, int b);

void main(void){
    int a = 20;
	int b = 10;
	
	int *arr = calc(a,b);
	printArray(arr,4);
}

void printArray(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int *returnArr(){
	static int array[5] = {1,2,3,4,5};
	return array;
}

int *calc(int a, int b){
	static int array[4];
	array[0] = a+b;
	array[1] = a-b;
	array[2] = a*b;
	array[3] = a/b;
	
	return array;
}