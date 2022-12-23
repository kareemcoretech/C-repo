#include <stdio.h>

int main()
{
	printf("Please enter the height of the pyramid: ");
	int h;
	scanf("%d", &h);
	for(int i=0;i<h;i++)
	{
		for (int j=0;(h-i-1)>j;j++)
		{
			printf(" ");
		}
		for(int k=0;k<(2*i+1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
