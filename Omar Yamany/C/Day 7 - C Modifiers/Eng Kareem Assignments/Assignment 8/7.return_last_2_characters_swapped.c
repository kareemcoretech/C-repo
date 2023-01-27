/* Given a string, create a new string made up of its last two
letters, reversed and separated by a space, the word is “bat”.
Return string contains ”t a”. */

#include<stdio.h>

void get_length(char *string, int *result);
void func(char *str1, char *str2);

void main()
{
	char input_string[50] = "bat";
	char output_string[50] = "\0";
	func(input_string, output_string);
	printf("Returned string contains: %s", output_string);
}

void func(char *str1, char *str2)	
{
	int length;
	int j=0;
	get_length(str1,&length);
	for(int i=length-1;i>length-3;i--,j++)
	{
		str2[j]=str1[i];
		j++;
		str2[j] = ' ';
	}
}

void get_length(char *string, int *result)
{
	int count=0;
	for(int i=0;string[i]!='\0';i++)
		count++;
	*result = count;
}