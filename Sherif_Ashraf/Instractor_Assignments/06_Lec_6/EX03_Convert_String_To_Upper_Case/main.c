/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		" write a C function that use the selection sort algorithm to
							  sort an integer array in ascending order"

*/

#include<stdio.h>

void upperCase(char arr[]); // intialize function

void main(void)
{
	char arr[10]; // initialize arr

	printf("Enter String \n");
	scanf("%s",arr); // scan string 
	printf("Before Convert : %s \n",arr); // print string before convert it

	upperCase(arr); // call function and pass its paramter 
}

void upperCase(char arr[]) // implemantation of function
{
	for(int i = 0;arr[i]!='\0';i++) // loop until the end of string \0 
	{
		if( (arr[i]>='a') && (arr[i]<='z') ) // check if the char is lowercase 
		{
			arr[i] -=32; // if true subtract from its ASCII value 32 to be in uppercase
		}
	}

	printf("After Convert : %s \n",arr); // print string After convert it
}
