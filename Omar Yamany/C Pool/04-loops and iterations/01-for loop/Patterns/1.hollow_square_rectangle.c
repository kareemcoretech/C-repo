#include<stdio.h>

void main()
{
	int rows,columns,selection;
	printf("Enter 1 for square, or 2 for rectangle: ");
	scanf("%d", &selection);
	switch(selection)
	{
		case 1:
		printf("Enter number of rows: ");
		scanf("%d", &rows);
		for(int i=0;i<rows;i++)
		{
			printf("*");
		}
		printf("\n");
		for(int i=0;i<rows-2;i++)
		{
			printf("*");
			for(int j=0;j<rows-2;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		for(int i=0;i<rows;i++)
		{
			printf("*");
		}
		break;
		
		case 2:
		printf("Enter number of rows: ");
		scanf("%d", &rows);
		printf("Enter number of columns: ");
		scanf("%d", &columns);
	for(int i=0;i<columns;i++)
		{
			printf("*");
		}
		printf("\n");
		for(int i=0;i<rows-2;i++)
		{
			printf("*");
			for(int j=0;j<columns-2;j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
		for(int i=0;i<columns;i++)
		{
			printf("*");
		}
		break;
		
		default: 
		printf("Enter a valid number (1-2)");
		break;
	}
}