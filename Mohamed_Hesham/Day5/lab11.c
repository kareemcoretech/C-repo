#include <stdio.h>
#include "def.h"
// void Linear_Search(int array[], int size, int x);

int main(){
	
	int array[10];
	int size = sizeof(array)/sizeof(array[0]);
	
	
	for(int i = 0; i < size; i++){
		printf("Please Enter number %d: ", i);
		scanf("%d", &array[i]);	
	}
	
	int x;
	
	printf("Please Enter number you want to search: ");
	scanf("%d", &x);
	
	Linear_Search(array, size, x);
	
	printf("Array Values: \n");
	
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	
	
	
	printf("\nArray Addresses: \n");
	
	for(int i = 0; i < size; i++){
		printf("%d ", &array[i]);
	}
	
}

