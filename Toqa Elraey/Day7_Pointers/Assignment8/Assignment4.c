/*
Author: Toqa Amir Elraey
Version: 1
Task: C function to get the value of the smallest element in array 
using pointers.
Date: 19/12/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

void ScanArray(u16 *ptr, u16 size);
u16 *smallestElement(u16 *ptr, u16 size);

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
	
	//get the smallest element:
	u16 *SMALL = smallestElement(Array, SIZE);
	
	printf("The smallest value is: %d", *SMALL);
}

void ScanArray(u16 *ptr, u16 size){
	for(u16 i = 0; i < size; i++){
		printf("Please enter element %d: ",i+1);
		scanf("%d", ptr+i);
	}
}

u16 *smallestElement(u16 *ptr, u16 size){
	u16 temp;
	for(u16 i = 0; i < size - 1; i++){
		for(u16 j = 0; j < size - 1 - i; j++){
			if(ptr[j] > ptr[j+1]){
				temp = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
	return ptr;
}