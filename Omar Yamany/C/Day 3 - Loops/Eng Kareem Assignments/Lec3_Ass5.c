#include <stdio.h>

int main()
{
	printf("Enter height of half pyramid: ");
	int h;
	scanf("%d", &h);
	for (int i=1;i<=h;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}