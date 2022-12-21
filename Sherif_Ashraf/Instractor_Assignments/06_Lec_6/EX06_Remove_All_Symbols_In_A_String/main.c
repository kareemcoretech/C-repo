/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		"Write a function to remove all characters in a string expect alphabets"

*/

#include<stdio.h>

void removeSymbols(char arr[]); // intialize function

void main(void)
{
	char arr[100]; // initialize arr

	printf("Enter String \n");
	scanf("%s",arr); // scan string 

	printf("Before Remove Symbols : %s \n",arr);
	removeSymbols(arr); // call function and pass its paramter 
}

void removeSymbols(char arr[])// implemantation of function
{
	char removedArr[100]={0}; // intialize new array to copy alphapet in it
	int counter=0,j=0; // intialize to counter
	for(int i=0;arr[i]!='\0';i++)// loop until the least element in the passed array
	{	
		counter++; // incremant counter to know the least element in the passed array 
		if(arr[i]>=65 && arr[i]<=122)// check if the char is alphabet or not
		{
			removedArr[j] = arr[i];// if true then assign it in the new array
			j++; // increment the index of new array with one for the next element
		}
	}

	removedArr[counter+1] = '\0'; // after end assign '\0' in the last elment in the new array to be the end of it by using the counter
	printf("After Remove Symbols : %s \n",removedArr);
}