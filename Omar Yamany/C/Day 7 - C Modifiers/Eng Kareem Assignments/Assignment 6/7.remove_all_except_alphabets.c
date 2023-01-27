// Write a function to remove all characters in a string expect alphabets.

#include <stdio.h>

void remove_all_except_alphabets(char *ptr);

void main()
{
	char sentence[100];
	printf("Enter a sentence: ");
	gets(sentence);
	remove_all_except_alphabets(sentence);
	printf("Your sentence after removing alphabets: %s", sentence);
}

void remove_all_except_alphabets(char *ptr)
{
	char temp;
	int i,j;
	for(i=0;ptr[i]!='\0';i++)
	{
		if(!( ((ptr[i]>='a') && (ptr[i]<='z')) || ((ptr[i]>='A') && (ptr[i]<='Z')) )) //found non-alphabet
		{
			//move alphabet to end of string then eliminate it
			for(j=i;ptr[j]!='\0';j++)
			{
				ptr[j] = ptr[j+1];
			}
			ptr[j]='\0';
			i--;
		}
	}
}