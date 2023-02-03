#include <stdio.h>

int main()
{
	int arr1[5];
	int *arr2[5];
	
	printf("Array1 elements: ");
	for (int i=0 ; i<5 ; i++)
	{
		scanf("%d",&arr1[i]);
		arr2[i]=&arr1[i];
	}
	
	printf("\nArray1: ");
	for (int i=0 ; i<5 ; i++)
		printf("%d ",arr1[i]);
	
	printf("\nArray2: ");
	for (int i=0 ; i<5 ; i++)
		printf("%d ",*arr2[i]);
	
	
}