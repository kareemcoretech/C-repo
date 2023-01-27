#include<stdio.h>
void main()
{
	char c[10];
	printf("Enter 10 characters: ");
	for(int i=0;i<10;i++)
	{
		scanf(" %c", &c[i]);
	}
	char temp='a';
	for(int i=0;i<10-1;i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if(c[j]>c[j+1])
			{
				temp = c[j];
				c[j] = c[j+1];
				c[j+1] = temp;
			}
		}
	}
	printf("In lexicographical order: \n");
	for(int i=0;i<10;i++)
	{
		printf("%c\n", c[i]);
	}
}