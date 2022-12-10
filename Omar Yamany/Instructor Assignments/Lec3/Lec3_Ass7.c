#include <stdio.h>

int main()
{
	printf("Enter height of full pyramid: ");
	int h;
	scanf("%d", &h);
	
	for(int i=0;i<=h;i++)
	{
		for(int j=0;j<h-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}