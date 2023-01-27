#include<stdio.h>

void main()
{
	int rows,selection;
	printf("Enter 1 for hollow right triangle --- 2 for mirrored hollow right triangle: ");
	scanf("%d", &selection);
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	switch(selection)
	{
		case 1:
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=i;j++)
			{
				if( j==1 || j==i || i==rows )
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		break;
		
		case 2:
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<=rows-i;j++)
			{
				printf(" ");
			}
			for(int k=1;k<=i;k++)
			{
				if( i==rows || k==i || k==1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		break;
		
		default:
		printf("Invalid selection.");
		break;
	}
}