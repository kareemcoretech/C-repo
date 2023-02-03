#include <stdio.h>
#include <math.h>

//function to get the sum of all values in a given array
int total(int array[], int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum += array[i];
	}
	return sum;
}

//function to search for a number in an array and return index, or return -1 if number was not found
int search_array(int array[], int size, int search_number)
{
	for(int i=0;i<size;i++)
	{
		if(array[i]==search_number)
		{
			return i;
		}
	}
	return -1;
}

//function to search for a number in an array and return last occurance of number
int search_last_occ(int array[], int size, int search_number)
{
	int index, flag=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]==search_number)
		{
			index=i;
			flag=1;
		}
	}
	if(flag==0)
	{
		return -1;
	}
	else
	{
		return index;
	}
}

//function to get nth term of arithmatic series
int arithmatic_series(int start, int step, int iterations)
{
	for (int i=0;i<iterations;i++)
	{
		start += step;
	}
	return start;
}

//function to get nth term of geometric series
int geometric_series(int start, int multiplier, int iterations)
{
	int result;
	for(int i=0;i<iterations;i++)
	{
		result = start*(pow(multiplier, i));
	}
	return result;
}

//function to get nth term of fibonacci series using for loop
int fibon_series(int n)
{
	int result;
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		int n1=0, n2=1;
		//using n-2 since we declared first 2 elements
		for(int i=0;i<n-2;i++)
		{
			result = n1+n2;
			n1=n2;
			n2=result;
		}
	}
	return result;
}

//function to get nth term of fibonacci series using for loop
int fibon_series_recursion(int n)
{
	//iterations start from 3rd term as we initalized n1 and n2, so i will use iterations-2 to get the correct term
	int result;
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		result = (fibon_series_recursion(n-2) + fibon_series_recursion(n-1));
	}
	return result;
}

//function to swap arrays then prints them
void swap_arrays(int array1[], int array2[], int sizeofarray)
{
	int array3[sizeofarray];
	for(int i=0;i<sizeofarray;i++)
	{
		array3[i] = array1[i];
		array1[i] = array2[i];
		array2[i] = array3[i];
	}
	//i will print arrays here because i didn't use pointers
	printf("\nArrays after swapping: \n");
	printf("Array 1\t\tArray2\n");
	for(int i=0; i<sizeofarray;i++)
	{
		printf("%d\t\t%d\n", array1[i], array2[i]);
	}
}

//function to reverse array
void reverse_array(int arr[], int sizeofarray)
{
	//we can use for loop with the same algorithm as bubblesort to reverse it
	int temp;
	for(int i=0;i<sizeofarray-1;i++)
	{
		for(int j=0;j<sizeofarray-1-i;j++)
		{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp;
		}
	}
	//print array
	printf("\nValues of array after swapping: \n");
	for(int i=0;i<sizeofarray;i++)
	{
		printf("Value of number %d is: %d\n", i, arr[i]);
	}
}
