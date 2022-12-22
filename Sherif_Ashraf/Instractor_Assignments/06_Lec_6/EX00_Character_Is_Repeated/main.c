/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		" Write a function which, given a string, return TRUE if all
                        	  characters are distinct and FALSE if any character is repeated"

*/


#include<stdio.h>

int charIsRepeated(char arr[],int size); // initialize of charIsRepeated function

void main(void)
{
	char arr[10]; // define arr
	int size = sizeof(arr)/sizeof(arr[0]); // get size of the arr[]
	int res = 0;
	printf("Enter String \n");

	scanf("%s",arr); // scan element of the arr[] 

	res = charIsRepeated(arr,size); // call function and pass its paramters arr[] and its size
	if(res == 0) // condiation to check value of res 
	printf("FALSE"); // if res == 0 then char is repeated and print false
	else
	printf("TRUE");	// if res == 1 then char is not repeated print true
}

int charIsRepeated(char arr[],int size) // implementation of charIsRepeated function
{
	int flag = 0; // intialize flag = 0
	for(int i=0;arr[i]!='\0';i++) // for loop to loop on every element in the arr until it reach \0 (last element)
	{
		for(int j=i+1;arr[j]!='\0';j++) // for loop to loop on every element start from second element in the arr until it reach \0 (last element)
		{
			if( arr[i] == arr[j] ) // check if first element in array equal second element or not 
			{
				flag = 1; // if condation is true make flag = 1;
				break; // termanate the loop
			}
		}
	}
	if(flag == 1) // check flag = 1
	{
		return 0; // if true the char is repeated return 0
	}
	else
	{
		return 1; // if false the char is not repeated return 0
	}
}