#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number to display its multiplication table: ");
	scanf("%d", &n);
	for(int i=1;i<=9;i++)
	{
		printf("%d x %d = %d\n", n, i, n*i);
		
	}
}