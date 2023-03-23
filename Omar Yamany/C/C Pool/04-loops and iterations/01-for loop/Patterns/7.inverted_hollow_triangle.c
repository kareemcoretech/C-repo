#include<stdio.h>

void main()
{
	int rows,selection;
	printf("Enter 1 for hollow inverted triangle --- 2 for mirrored hollow inverted triangle: ");
	scanf("%d", &selection);
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	switch(selection)
	{
		case 1:
		for(int i=1;i<=rows;i++)
		{
			for(int j=i;j<=rows;j++)
			{
				if( i==1 || j==i || j==rows )
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
			for(int j=1;j<i;j++)
				printf(" ");
			for(int j=i;j<=rows;j++)
			{
				if( i==1 || j==i || j==rows )
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