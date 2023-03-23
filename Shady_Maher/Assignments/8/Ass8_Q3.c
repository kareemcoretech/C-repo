#include <stdio.h>

int main()
{
	int array[10]={0};
	
	printf("Enter 10 integers\n");
	
	for (int i=0 ; i<10 ; i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Reversing order\n");
	for (int i=9 ; i>=0 ; i--)
	{
		printf("%d\n", array[i]);
	}
}