/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a function to reverse a string passed to it.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);
void Reverse(char Array[], int size);

int main(){
	char str[100];
	printf("Please enter your STRING: ");
	scanf("%s", str);
	
	int size = LengthOfArray(str);
	
	Reverse(str, size);
	
	printf("The Strings after Reversing is: %s", str);
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}

void Reverse(char Array[], int size){
	int temp;
	for(int i = 0; i < size - 1 - i; i++){
		temp = Array[i];
		Array[i] = Array[size - 1 - i];
		Array[size - 1 - i] = temp;
	}
}