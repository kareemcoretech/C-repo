// Write a function to reverse a string passed to it.

#include<stdio.h>

void reverse_string(char *ptr);

void main()
{
	char sentence[100];
	printf("Enter a sentence to reverse it: ");
	gets(sentence);
	reverse_string(sentence);
	printf("Your reversed sentence is: %s", sentence);
}

void reverse_string(char *ptr)
{
	int sizeofstring = 0; 
	//get the real size of entered string
	for(int i=0;ptr[i]!='\0';i++)
	{
		sizeofstring++;
	}
	//make string with the same size
	char temp_string[sizeofstring];
	int j=sizeofstring-1;
	//save every character in a temp array in reverse
	for(int i=0;i<sizeofstring;i++)
	{
			temp_string[j] = ptr[i];
			j--;
	}
	//change the original sentence to the reversed one from temp array
	for(int i=0;i<sizeofstring;i++)
	{
		ptr[i] = temp_string[i];
	}
}