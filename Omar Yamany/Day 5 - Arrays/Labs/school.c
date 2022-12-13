#include <stdio.h>

//function that gets max number in an array
void Get_Max(int array[], int size)
{
	int max=0;
	for (int i=0;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\nMax number = %d", max);
}

//function that gets min number in an array
void Get_Min(int array[], int size)
{
	int min=array[0];
	for(int i=0;i<size;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("\nMin number = %d", min);
}

//function to get number of passed students
void pass(int array[],int size)
{
	int number_of_passed=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]>=50)
		{
			number_of_passed++;
		}
	}
	printf("\nNumber of passed students is: %d", number_of_passed);
}

//function to get number of failed students
void fail(int array[],int size)
{
	int number_of_failed=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]<50)
		{
			number_of_failed++;
		}
	}
	printf("\nNumber of failed students is: %d", number_of_failed);
}

//function to get the highest grade
void highest_grade(int array[],int size)
{
	int max=0;
	for (int i=0;i<size;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\nHighest grade: %d", max);
}

//function to get the lowest grade
void lowest_grade(int array[],int size)
{
	int min=array[0];
	for(int i=0;i<size;i++)
	{
		if(array[i]<min)
		{
			min=array[i];
		}
	}
	printf("\nLowest grade is: %d", min);
}

//function to get the average grade
void average_grade(int array[],int size)
{
	int sum=0, average;
	for(int i=0;i<size;i++)
	{
		sum += array[i];
	}
	average = sum/size;
	
	printf("\nAverage grade is: %d", average);
}