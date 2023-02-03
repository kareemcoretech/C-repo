/*Write a function that prints the frequency of a certain
character in a string.*/

#include<stdio.h>

int check_frequency(char string[], char character);

void main()
{
	char sentence[100], certain_character;
	int count;
	printf("Enter a sentence: ");
	gets(sentence);
	printf("Enter a character to get the frequency of it: ");
	scanf(" %c", &certain_character);
	count = (check_frequency(sentence,certain_character));
	printf("%c was found %d times!", certain_character, count);
}
// function to get frequency of character (works for the same case only (doesn't count upper case if certain_character is lower case))
int check_frequency(char string[], char character)
{
	int counter=0;
	for(int i=0;string[i]!='\0';i++)
	{
		if(string[i]==character)
			counter++;
	}
	return counter;
}