#include<stdio.h>

void main()
{
	int rows,columns,selection;
	
	printf("Enter 1 for rhombus, 2 for parallelogram: ");
	scanf("%d", &selection);
	
	switch(selection)
	{
		case 1:
		printf("Enter number of rows: ");
		scanf("%d", &rows);
		
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<i;j++)
				printf(" ");
			for(int j=1;j<=rows;j++)
				if( i==1 || i==rows || j==1 || j==rows)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
		break;
		
		case 2:
		printf("Enter number of rows: ");
		scanf("%d", &rows);
		printf("Enter number of columns: ");
		scanf("%d", &columns);
		
		for(int i=1;i<=rows;i++)
		{
			for(int j=1;j<i;j++)
				printf(" ");
			for(int j=1;j<=columns;j++)
				if( i==1 || i==rows || j==1 || j==columns)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
		break;
		
		default:
		printf("Enter a valid selection");
		break;
	}
}