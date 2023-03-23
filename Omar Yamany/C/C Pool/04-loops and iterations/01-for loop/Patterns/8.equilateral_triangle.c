#include<stdio.h>

void main()
{
	int rows,selection;
	printf("Enter 1 for hollow equilateral triangle --- 2 for mirrored hollow equilateral triangle: ");
	scanf("%d", &selection);
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	switch(selection)
	{
		case 1:
		for(int i=1;i<=rows;i++)
		{
			for(int j=i;j<rows;j++)
				printf(" ");
			for(int j=1;j<=2*i-1;j++)
			{
				if( i==rows || j==1 || j==2*i-1 )
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
			for(int j=1;j<=2*rows - (2*i-1);j++)
			{
				if( j==1 || i==1 || j==2*rows - (2*i-1) )
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