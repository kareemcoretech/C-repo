/* Write a function which, given a string, return TRUE if all
characters are distinct and FALSE if any character is repeated. */

#include <stdio.h>

int check_distinct(char array[],int size);

void main()
{
	char sentence[100];
	printf("Enter a sentence within 100 characters: ");
	gets(sentence);
	int sizeofsentence = sizeof(sentence)/sizeof(sentence[0]);
	if(check_distinct(sentence,sizeofsentence))
		printf("All characters are distinct.");
	else
		printf("Not all characters are distinct");
}

//function to check if a character is repeated
int check_distinct(char array[],int size)
{
	for(int i=0;i<array[i]!='\0';i++) //for loop checking all characters
	{
		for(int j=i;array[j]!='\0';j++) //function to check if a character is not repeated in any characters AFTER it
		{
			if(array[i]==array[j+1])
				return 0;
		}
	}
	return 1;
}