/*
Author: Toqa Amir Elraey
Version: 1
Task: C Function to compute sum of the array elements using 
pointers.
Date: 19/12/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

void ScanArray(u16 *ptr, u16 size);
u16 *SUM(u16 *ptr, u16 size);

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
	
	//adding the Array's elements:
	u16 *sumPtr = SUM(Array, SIZE);
	
	//printing the sum:
	printf("The SUM of Array's elements: %d", *sumPtr);
	
}

void ScanArray(u16 *ptr, u16 size){
	for(u16 i = 0; i < size; i++){
		printf("Please enter element %d: ",i+1);
		scanf("%d", ptr+i);
	}
}

u16 *SUM(u16 *ptr, u16 size){
	static u16 sum = 0;
	for(u16 i = 0; i < size; i++){
		sum = sum + ptr[i];
	}
	return &sum;
}