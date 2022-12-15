// implementation of function Total
# include<stdio.h>
int Total (int Array[], int Array_size)
{
	int result;
	
	for (int i=0 ; i < Array_size ; i++)
	{
		result += Array[i];
	}
	return result;
}