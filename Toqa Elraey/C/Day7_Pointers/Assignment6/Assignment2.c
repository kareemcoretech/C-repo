/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a C function that use the bubble sorting algorithm to 
sort an integer array in descending order.
Date: 21/12/2022
*/

#include <stdio.h>

void ScanArray(int *ptr, int size);
void Bubble(int *ptr, int size);
void Printing(int *ptr, int size);

int main(){
	//asking the size of array:
	int x;
	printf("Please enter the size of Array: ");
	scanf("%d" , &x);
	
	//declaration of array:
	int Array[x];
	int size = sizeof(Array) / sizeof(Array[0]);
	
	//Scanning the Array:
	ScanArray(Array, size);
	
	//sorting the Array:
	Bubble(Array, size);
	
	//printing the Array:
	Printing(Array, size);
}

//Scanning:
void ScanArray(int *ptr, int size){
	printf("Please enter the elements of Array: \n");
	for(int i = 0; i < size; i++){
		scanf("%d", ptr+i);
	}
}

//Sorting:
void Bubble(int *ptr, int size){
	int temp;
	for(int i = 0; i < size - 1; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(ptr[j] < ptr[j + 1]){
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
}

//Printing:
void Printing(int *ptr, int size){
	printf("The Array After Sorting: \n");
	for(int i = 0; i < size; i++){
		printf("%d\n", ptr[i]);
	}
}