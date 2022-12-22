/* 

Author 				:		"Sherif_Ashraf"

Date                :		"19-12-2022"

Version             :		"v-1.0"

Program Description :		" Write a function that prints the frequency of a certain
							  character in a string"

*/

#include<stdio.h>

int freq_count(char arr[],int target); // intialize function

void main(void)
{
	char target,arr[10]; // initialize arr
	int res = 0

	printf("Enter String \n");
	scanf("%s",arr); // scan string 
	printf("Enter Target Char To Get Its Frequency \n");
	scanf(" %c",&target); // scan the target 

	res = freq_count(arr,target); // call function and pass its paramter 
	printf("Frequency Of %c In %s = %d \n",target,arr,res);
}

int freq_count(char arr[],int target)
{
	int count=0;// intialize counter to count the frequancy of the target

	for(int i=0;arr[i]!='\0';i++) // loop until the last element in array = '\0'
	{
		if(arr[i] == target) // check if array element = target or not
		{
			count++; // if equal increment count
		}
	}
	return count; // return count
}