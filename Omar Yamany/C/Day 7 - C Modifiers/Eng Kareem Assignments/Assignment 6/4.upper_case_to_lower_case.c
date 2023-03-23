/* Write a function which, given a string, converts all upper
case letters to lowercase, leaving the others unchanged. */

#include<stdio.h>

void convert_all_to_lower_case(char *ptr, int size);

void main()
{
	char sentence[100];
	printf("Enter a sentence: ");
	gets(sentence);
	int sizeofsentence = sizeof(sentence)/sizeof(sentence[0]);
	convert_all_to_lower_case(sentence, sizeofsentence);
	printf("Your sentence converted to lower case: %s", sentence);
}

void convert_all_to_lower_case(char *ptr, int size)
{
	for(int i=0;i<size;i++)
	{
		if((ptr[i]>='A') && (ptr[i]<='Z'))
			ptr[i] += 32;
	}
}