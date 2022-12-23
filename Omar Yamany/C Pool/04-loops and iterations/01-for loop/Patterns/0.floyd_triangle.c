#include<stdio.h>

void main()
{
	int number_of_rows, counter=0;
	printf("Enter the number of rows of Floyd's triangle to print: ");
	scanf("%d", &number_of_rows);
	
	for(int i=1;i<=number_of_rows;i++)
	{
		for(int j=1;j<=i;j++)
		{
			counter++;
			printf("%d ", counter);
		}
		printf("\n");
	}
}