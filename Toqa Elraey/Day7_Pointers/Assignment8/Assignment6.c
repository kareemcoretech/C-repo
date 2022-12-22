/*
Author: Toqa Amir Elraey
Version: 1
Task:  Write a C function to swap the contents of two arrays with
the same length using pointers.
Date: 19/12/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

void ScanArray(u16 *ptr, u16 size);
void SWAPPING(u16 *ptr1, u16 *ptr2, u16 size);
void Printing(u16 *ptr, u16 size);

int main(){
	//asking for the size of Array:
	u16 x;
	printf("Please enter the size of Array: ");
	scanf("%d", &x);
	
	//declaring the first array:
	u16 Array1[x];
	u16 SIZE = sizeof(Array1) / sizeof(Array1[0]);
	
	//scanning first Arrays's elements:
	ScanArray(Array1, SIZE);
	
	//declaring the second array:
	u16 Array2[SIZE];
	
	//scanning second Arrays's elements:
	ScanArray(Array2, SIZE);
	
	//Swapping the two Arrays:
	SWAPPING(Array1, Array2, SIZE);
	
	//printing the two Arrays After swapping:
	printf("The first Array After SWAPPING: \n");
	Printing(Array1, SIZE);
	
	printf("The second Array After SWAPPING: \n");
	Printing(Array2, SIZE);
	
}

void ScanArray(u16 *ptr, u16 size){
	for(u16 i = 0; i < size; i++){
		printf("Please enter element %d: ",i+1);
		scanf("%d", ptr+i);
	}
}

void SWAPPING(u16 *ptr1, u16 *ptr2, u16 size){
	u16 temp;
	for(u16 i = 0; i < size; i++){
		temp = ptr1[i];
		ptr1[i] = ptr2[i];
		ptr2[i] = temp;
	}
}

void Printing(u16 *ptr, u16 size){
	for(u16 i = 0; i < size; i++){
		printf("%d\n", ptr[i]);
	}
}