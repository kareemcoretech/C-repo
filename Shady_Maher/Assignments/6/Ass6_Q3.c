#include <stdio.h>

int main()
{
	int a[100]={0};
	int n, position, swap;
	
	printf("Enter number of elements \n");
		scanf("%d", &n);
		
	printf("Enter %d Numbers \n", n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	for(int i = 0; i < n - 1; i++)
	{
		position=i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[position] > a[j])
				position=j;
		}
		
		if(position != i)
		{
			swap=a[i];
			a[i]=a[position];
			a[position]=swap;
		}
	}
	
	printf("Sorted Array: \n");
	for(i = 0; i < n; i++)
		printf("%d \n", a[i]);

}