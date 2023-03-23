#include<stdio.h>

int scalar_multiply(int *p1, int p2[], int size);

void main()
{
	int sum;
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	int size=sizeof(arr1)/sizeof(arr1[0]);
	sum = scalar_multiply(arr1,arr2,size);
	printf("Scalar multiplication of the two arrays is: %d", sum);
}

int scalar_multiply(int *p1, int p2[], int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum += (p1[i]*p2[i]);
	}
	return sum;
}