/*
Author: Toqa Amir Elraey
Version: 3
Task: Write a function to concatenate two strings.
Date: 21/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);
void Concatenating(char Array1[], char Array2[]);

int main(){
	char str1[100];
	char str2[100];
	printf("Please enter your STRING: ");
	scanf("%s", str1);
	printf("Please enter your STRING: ");
	scanf("%s", str2);
	
	int size1 = LengthOfArray(str1);
	int size2 = LengthOfArray(str2);
	
	Concatenating(str1, str2);
	
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}

void Concatenating(char Array1[], char Array2[]){
	printf("%s %s", Array1, Array2);
}

