//Write a function to find the length of a string.

#include<stdio.h>

int get_length(char string[]);

void main()
{
	char sentence[100];
	int length;
	printf("Enter a sentence: ");
	gets(sentence);
	length = get_length(sentence);
	printf("Length of entered sentence is: %d letters. (including spaces)", length);
}

int get_length(char string[])
{
	int counter=0;
	for(int i=0;string[i]!='\0';i++)
		counter++;
	return counter;
}