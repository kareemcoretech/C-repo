/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		" Write a function to find the length of a string"

*/

#include<stdio.h>

int lengthOfString(char arr[]); // intialize function

void main(void)
{
	char arr[100]; // initialize arr
	int res = 0;
	printf("Enter String \n");
	scanf("%s",arr); // scan string 

	res = lengthOfString(arr); // call function and pass its paramter

	printf("Lenght Of %s = %d \n",arr,res);
}

int lengthOfString(char arr[]) // implemantation of function
{
	int count = 0; // intialize counter to count the length

	for(int i=0;arr[i]!='\0';i++) // loop until the least element in array = '\0'
	{
		count++; // incremant counter with one
	}

	return count; // return counter
}