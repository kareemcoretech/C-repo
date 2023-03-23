/*
Author: Toqa Amir Elraey
Version: 3
Task: write a C function that use the selection sort algorithm to 
sort an integer array in ascending order.
Date: 21/12/2022
*/

#include <stdio.h>

void ScanArray(int *ptr, int size);
void SelectionSort(int *ptr, int size);
void Printing(int *ptr, int size);

int main(){
	int x;
	printf("Please enter the size of Array: ");
	scanf("%d", &x);
	
	//Declaring:
	int Numbers[x];
	int SIZE = sizeof(Numbers) / sizeof(Numbers[0]);
	
	//Scanning:
	ScanArray(Numbers, SIZE);
	
	//Sorting:
	SelectionSort(Numbers, SIZE);
	
	//Printing:
	Printing(Numbers, SIZE);
	
}

void ScanArray(int *ptr, int size){
	printf("Please enter the elements of Array: \n");
	for(int i = 0; i < size; i++){
		scanf("%d", ptr+i);
	}
}

void SelectionSort(int *ptr, int size){
	int min;
	int temp;
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			min = i; 
			
			if(ptr[j] > ptr[min]){
				min = j;
			}
			
			if(min != i){
				temp = ptr[min];
				ptr[min] = ptr[i];
				ptr[i] = temp;
			}
		}
	}
}

void Printing(int *ptr, int size){
	printf("The elements After Sorting Ascendingly: \n");
	for(int i = 0; i < size; i++){
		printf("%d\n", ptr[i]);
	}
}