#include<stdio.h>

void main()
{
	int columns, selection, n;
	printf("Enter 1 for diamond star pattern --- 2 for mirrored diamond star pattern: ");
	scanf("%d", &selection);
	printf("Enter number of columns: ");
	scanf("%d", &n);
	columns=1;
	switch(selection)
	{
		case 1:
		for(int i=1;i<n*2;i++)
		{
			for(int j=1;j<=columns;j++)
				printf("*");
			if(i<n)
				columns++;
			else
				columns--;
			printf("\n");
		}
		break;
		
		case 2:
		for(int i=1;i<n*2;i++)
		{
			for(int j=1;j<=n-columns;j++)
				printf(" ");
			for(int j=1;j<=columns;j++)
				printf("*");
			if(i<n)
				columns++;
			else
				columns--;
			printf("\n");
		}
		break;
		
		default:
		printf("Invalid selection.");
		break;
	}
}