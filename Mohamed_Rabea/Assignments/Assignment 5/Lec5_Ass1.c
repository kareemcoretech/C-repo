/* Write a function called total, which totals the sum of an 
integer array passed to it (as the first parameter) and returns 
the total of all the elements as an integer. Let the second 
parameter to the function be an integer which contains the 
number of elements of the array.*/

#include <stdio.h>

// decleration of function Total
int Total (int Array[],int Array_size);

int main ()
{
	int Arr[5],sum;

	printf("Enter the elements of array: ");
	for(int i = 0; i < 5; i++ )
	{
		scanf("%d",&Arr[i]);
	}
	int size= sizeof Arr/sizeof Arr[0];
	
	sum = Total(Arr,size);  //calling the function 
	
	printf("Sum of Array Elements = %d",sum);
		
}
// implementation of function Total
int Total (int Array[], int Array_size)
{
	int result;
	
	for (int i=0 ; i < Array_size ; i++)
	{
		result += Array[i];
	}
	return result;
}