#include <stdio.h>

int main()
{
	printf("Enter height of inverted half pyramid: ");
	int h;
	scanf("%d", &h);
	
	for(int i=h; i>0;i--)
	{
		for(int j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}