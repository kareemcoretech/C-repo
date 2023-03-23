/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a function to find the length of a string.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);

int main(){
	char str[100];
	printf("Please enter your STRING: ");
	scanf("%s", str);
	
	int size = LengthOfArray(str);
	printf("The length of string is: %d", size);
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}