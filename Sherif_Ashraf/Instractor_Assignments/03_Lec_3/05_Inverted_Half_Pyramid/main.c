#include<stdio.h>

void main(void)
{
	int row;
	printf("Enter Number Of Rows \n");
	scanf("%d",&row);
	for(int i = row; i>=0;i--)
	{
		for(int j =1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}