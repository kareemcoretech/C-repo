// Write a function to concatenate two strings.

#include<stdio.h>

void concatenate(char *ptr1, char *ptr2, char *ptr3);

void main()
{
	char sentence1[100];
	printf("Enter first sentence: ");
	gets(sentence1);
	char sentence2[100];
	printf("Enter second sentence: ");
	gets(sentence2);
	char result[200] = {'\0'};
	concatenate(sentence1,sentence2,result);
	printf("Your two sentences together: %s", result);
}

void concatenate(char *ptr1, char *ptr2, char *result)
{
	int i,j=0;
	for(i=0;ptr1[i]!='\0';i++) //adding first string
		result[i] = ptr1[i];
	result[i] = ' '; //adding space between strings
	i++; //to start writing after space
	do //adding second string
	{
		result[i] = ptr2[j];
		i++;
		j++;
	}while(ptr2[j]!='\0');
}