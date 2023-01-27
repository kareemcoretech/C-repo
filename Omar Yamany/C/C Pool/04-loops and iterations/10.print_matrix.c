#include<stdio.h>
void main()
{
	int row,column,n=1;
	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of columns: ");
	scanf("%d", &column);
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d\t", n);
			n++;
		}
		printf("\n");
	}
}