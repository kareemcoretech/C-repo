#include <stdio.h>

void print_array(int array[], int sizeofarray)
{
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Value [%d] = %d\n", i, array[i]);
	}
}

void reversearray(int array[], int sizeofarray)
{
	
	printf("The value in reversed order is: ");
	
	for (int i=sizeofarray-1;i>=0;i--)
	{
		printf("%d\n", array[i]);
	}
}

int getsum(int array[], int sizeofarray)
{
	int sum=0;
	for (int i=0;i<sizeofarray;i++)
	{
		printf("Please enter number %d: ", i+1);
		scanf("%d", &array[i]);
		sum += array[i];
	}
	return sum;
}

int linear_search(int array[], int sizeofarray, int search_number)
{
	int count=0;
	for(int i=0;i<sizeofarray;i++)
	{
		if(array[i]==search_number)
		{
			count++;
		}
	}
	return count;
}

int binary_search(int array[], int sizeofarray, int search_number)
{
	int low=0, high = sizeofarray-1;
	int mid = (high+low)/2;
	
	while(low!=high)
	{
		if(search_number==array[mid])
		{
			return 1;
		}
		else if(search_number>array[mid])
		{
			low=mid;
			mid=(low+high)/2;
			continue;
		}
		else if(search_number<array[mid])
		{
			high=mid;
			mid=(low+high)/2;
			continue;
		}
	}
	
	return 0;
}

void print_max(int array[], int sizeofarray)
{
	int max=array[0];
	for(int i=0;i<sizeofarray;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\nMaximum value = %d", max);
}

void print_min(int array[], int sizeofarray)
{
	int min=array[0];
	for(int i=0;i<sizeofarray;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("\nMinimum value = %d", min);
}
