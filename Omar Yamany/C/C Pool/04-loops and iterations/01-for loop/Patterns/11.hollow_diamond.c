#include<stdio.h>

void main()
{
	int columns, selection, n;
	printf("Enter number of columns: ");
	scanf("%d", &n);
	columns=1;
	
	for(int i=1;i<=n*2;i++)
	{
		for(int j=1;j<=n*2;j++)
		{
			if( i==1 || i==n*2 || j==1 || j==n*2 )
				printf("*");
			else
				printf(" ");
		}
		/*for(int j=1;j<=n-columns;j++)
			printf("*");
		for(int j=1;j<=2*columns-1;j++)
			printf(" ");
		if(i<n)
			columns++;
		else
			columns--;*/
		printf("\n");
	}
}