/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		"Write a function to concatenate two strings"

*/



#include<stdio.h>



void concatenateString(char arr1[] ,char arr2[]); // initialize of function


void main(void)
{
	char arr1[10]; // intialize array 1 
	char arr2[10]; // intialize array 2
	printf("Enter String 1 :");
	scanf("%s",arr1);
	printf("Enter String 2 :");
	scanf("%s",arr2);

	concatenateString(arr1,arr2); // call function and pass its paramter
}


void concatenateString(char arr1[] ,char arr2[]) // implemantation of function
{
	int i=0,j=0; // intialzie two counters

	while(arr1[i] !='\0') // loop until the end of array 1 to know its last element index
	{
		i++; // increment i by one
	}

	while(arr2[j] !='\0') // loop until last elment in array 2
	{
		arr1[i] = arr2[j]; // copy element of array 2 in array 1 
		i++; //increment i by one
		j++; //increment j by one
	}
	arr1[i+1] = '\0'; // put the end of array 1
	printf("%s",arr1); 
}