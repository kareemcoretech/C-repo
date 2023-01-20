/*
Author: Toqa Amir Elraey
Version: 1
Task: Write a function to concatenate two strings.
Date: 23/12/2022
*/

#include <stdio.h>

int LengthOfArray(char Array[]);
void Concatenating(char Array1[], char Array2[], char Array3[], int size1, int size2);

int main(){
	char str1[100];
	char str2[100];
	printf("Please enter your first STRING: ");
	scanf("%s", str1);
	printf("Please enter your second STRING: ");
	scanf("%s", str2);
	
	int size1 = LengthOfArray(str1);
	int size2 = LengthOfArray(str2);
	
	//declaring a new array to concatenate the two strings:
	char str3[100];
	
	Concatenating(str1, str2, str3, size1, size2);
	printf("%s", str3);
	
}

//to get the length of the Array of string:
int LengthOfArray(char Array[]){
	int count;
	for(count = 0; Array[count] != '\0'; count++);
	return count;
}

void Concatenating(char Array1[], char Array2[], char Array3[], int size1, int size2){
	for(int i = 0; i < size1; i++){
		Array3[i] = Array1[i];
	}
	for(int i = 0; i < size2; i++){
		Array3[i + size1] = Array2[i];
	}
}

