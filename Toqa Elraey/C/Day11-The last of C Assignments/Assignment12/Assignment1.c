/*
Author: Toqa Amir Elraey
Version: 2
Task: C function to sort an array using shell sorting, run the 
program and take 2 input arrays from user and sort them 
independently, pass the sorted arrays to another function that 
merges them into a big sorted array.
Date: 3/1/2022
*/

#include <stdio.h>
#include "TypeDefs.h"
#define SIZEc 8


void ScanArray(u8 *ptr, u8 size);
void MergeArray(u8 *ptr1, u8 *ptr2, u8 *ptr3, u8 size1, u8 size2);
void ShellSort(u8 *ptr, u8 size);
void PrintArray(u8 *ptr, u8 size);



int main(){
	u8 Array1[SIZEc];
	u8 Array2[SIZEc];
	u8 SIZE = sizeof(Array1) / sizeof(Array1[0]);
	
	//Scan First Array:
	ScanArray(Array1, SIZE);
	
	//Sorting the first Array: 
	ShellSort(Array1, SIZE);
	
	//Scan Second Array:
	ScanArray(Array2, SIZE);
	
	//Sorting the second Array: 
	ShellSort(Array2, SIZE);
	
	//Merging the Arrays:
	u8 SIZE2 = 2 * SIZE;
	u8 Array3[SIZE2];
	MergeArray(Array1, Array2, Array3, SIZE, SIZE);
	
	//Sorting the Third Array:
	ShellSort(Array3, SIZE2);
	
	//Printing Array:
	PrintArray(Array3, SIZE2);
}

void ScanArray(u8 *ptr, u8 size){
	for(int i = 0; i < size; i++){
		printf("Please enter element %d", i+1);
		scanf("%d", ptr+i);
	}
}

void MergeArray(u8 *ptr1, u8 *ptr2, u8 *ptr3, u8 size1, u8 size2){
	for(u8 i = 0; i < size1; i++){
		ptr3[i] = ptr1[i];
	}
	for(u8 i = 0; i < size2; i++){
		ptr3[size1 + i] = ptr2[i];
	}
}

void ShellSort(u8 *ptr, u8 size){
	for(u8 interval = size/2; interval > 0; interval /= 2){
		for(u8 j = interval; j < size; j++){
			u8 temp;
			if(ptr[j] < ptr[j - interval]){
				temp = ptr[j];
				ptr[j] = ptr[j - interval];
				ptr[j - interval] = temp;
			}
		}
	}
}

void PrintArray(u8 *ptr, u8 size){
	printf("The Array After Sorting: \n");
	for(int i = 0; i < size; i++){
		printf("%d\n", ptr[i]);
	}
}

