#include <stdio.h>
int find_root(int n, int r);
void main()
{
	int number, root, result;
	printf("Enter the number you want to find it's root: ");
	scanf("%d", &number);
	printf("Enter the number of root: ");
	scanf("%d", &root);
	result = find_root(number,root);
	if(result != 0)
		printf("The root %d of %d = %d", root, number, result);
	else
		printf("Program couldn't find root!");
}

int find_root(int n, int r)
{
	int test;
	for(int i=0;i<n;i++)
	{
		test=1;
		for(int j=1;j<=r;j++)
		{
			test *= i;
		}
		if(test==n)
			return i;
	}
	return 0;
}