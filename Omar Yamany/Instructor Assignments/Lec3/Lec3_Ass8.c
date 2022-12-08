#include <stdio.h>

int main()
{
	int k=6;
	for(int i=0;i<6;i++)
	{
		for(int l=0;l<i;l++)
		{
			printf(" ");
		}
		printf("*");
		for(int k=10;k>2*i;k--)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	for(int i=0;i<6;i++)
	{
		for(int w=5;w>i;w--)
		{
			printf(" ");
		}
		printf("*");
		for(int k=0;k<2*i;k++)
		{
			printf(" ");
		}
		printf("*\n");
	}
}