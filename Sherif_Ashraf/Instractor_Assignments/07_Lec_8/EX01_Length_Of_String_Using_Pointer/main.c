/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"C Function to find length of a Program Description given string using pointer"

*/




#include<stdio.h>


int lengthOfString(char *arrptr); // function initialzie

void main(void)
{
	char arr[100],*ptr=NULL,res=0;

	printf("Enter String \n");
	scanf("%s",arr);
	ptr = arr; // initialize pointer with array address
	res = lengthOfString(ptr); // call function and pass address of the array
	printf("length of string = %d",res); 

}


int lengthOfString(char *arrptr) // function implemntation
{
	int counter = 0; // intialize counter to count number of char in string

	for(int i=0;arrptr[i]!='\0';i++) // loop until the last element in the string
	{
		counter++; // incremant counter with one
	}

	return counter;
}