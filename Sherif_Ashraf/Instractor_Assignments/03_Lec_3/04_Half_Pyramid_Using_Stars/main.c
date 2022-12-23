#include<stdio.h>

void main(void)
{
	int row;
	printf("Enter Number Of Rows \n");
	scanf("%d",&row);
	for(int i = 0; i<=row;i++)
	{
		for(int j =1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}