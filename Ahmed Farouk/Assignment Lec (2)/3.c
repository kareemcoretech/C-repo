#include<stdio.h>
void main()
{
	char c;
	printf("Please Enter any Character : ");
	scanf(" %c",&c);
	if(c>='A' & c<='Z' | c>='a' & c<='z')
	{
		printf("\nThe Character %c is Alphabet \n",c);
	}
	else
		{
			printf("\nThe Character %c isn't Alphabet \n",c);
		}

}
