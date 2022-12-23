/*
Author: Toqa Amir Elraey
Version: 1
Task: C Function to read 10 integers into an array from user and 
print them in reversing order using pointers
Date: 19/12/2022
*/

#include <stdio.h>
#include "TypeDefs.h"

void ScanArray(u16 *ptr, u16 size);
void Printing(u16 *ptr, u16 size);

int main(){
	//declaring the array:
	u16 Array[10];
	u16 SIZE = 10;
	
	//scanning Arrays's elements:
	ScanArray(Array, SIZE);
	
	//printing the reversing array:
	Printing(Array, SIZE);
	
}

void ScanArray(u16 *ptr, u16 size){
	for(u16 i = 0; i < size; i++){
		printf("Please enter element %d: ",i+1);
		scanf("%d", ptr+i);
	}
}

void Printing(u16 *ptr, u16 size){
	printf("The Numbers after reversing: \n");
	for(u16 i = size-1; i >= 0; i--){
		printf("%d\n", ptr[i]);
	}
}

