#include<stdio.h>
void main()
{
	int i=1;
	
	do
	{
		for(int j=1;j<=10;j++)
		{
			printf("%3d", i*j);
			printf(" ");
		}
		printf("\n");
		i++;
	}
	while(i<=12);
}