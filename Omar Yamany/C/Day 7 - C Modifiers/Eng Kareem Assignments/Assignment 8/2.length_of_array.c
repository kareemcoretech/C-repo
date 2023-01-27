//C Function to find length of a given string using pointer

#include<stdio.h>

void get_length(char *string, int *result);

void main()
{
	char string[100];
	printf("Enter a string to get length: ");
	gets(string);
	int length;
	get_length(string, &length);
	printf("Length of string is: %d", length);
}

void get_length(char *string, int *result)
{
	int count=0;
	for(int i=0;string[i]!='\0';i++)
		count++;
	*result = count;
}