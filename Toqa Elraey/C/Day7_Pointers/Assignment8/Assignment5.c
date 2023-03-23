/*
Author: Toqa Amir Elraey
Version: 1
Task: C function to copy all elements of an array into another
array using pointers. The two arrays have the same length and 
types.
Date: 19/12/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

void ScanArray(u16 *ptr, u16 size);
void Copying(u16 *ptr,u16 *ptr2, u16 size);

int main(){
	//asking for the size of Array:
	u16 x;
	printf("Please enter the size of Array: ");
	scanf("%d", &x);
	
	//declaring the array:
	u16 Array[x];
	u16 SIZE = sizeof(Array) / sizeof(Array[0]);
	
	//scanning Arrays's elements:
	ScanArray(Array, SIZE);
	
	//declaring the copying array:
	u16 Array2[x];
	
	//Copying the Array:
	Copying(Array, Array2, SIZE);
	
	printf("The COPIED Array: \n");
	for(u16 i = 0; i < SIZE; i++){
		printf("%d\n", Array2[i]);
	}
}

void ScanArray(u16 *ptr, u16 size){
	for(u16 i = 0; i < size; i++){
		printf("Please enter element %d: ",i+1);
		scanf("%d", ptr+i);
	}
}

void Copying(u16 *ptr,u16 *ptr2, u16 size){
	
	for(u16 i = 0; i < size; i++){
		ptr2[i] = ptr[i];
	}
}

