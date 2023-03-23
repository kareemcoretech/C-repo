#include <stdio.h>

int main()
{
	int smallest;
	int arr[5]={2,3,4,8,9};
	
	for (int i=0 ; i<4 ; i++)
	{
		if (arr[i]<arr[i+1])
			smallest=arr[i];
		else
			smallest=arr[i+1];
	}
	
	printf("smallest element: %d",smallest);
	
}