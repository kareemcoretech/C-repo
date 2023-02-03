/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program: ((1) C Function to compute sum of the array elements using pointers.*/

#include<stdio.h>

int main ()
{
	int Arr[5]={1,2,3,9,6};
	int size = sizeof Arr / sizeof Arr[0];
	int sum;
	int *ptr;
	ptr= Arr ;
	for (int i=0; i<size;i++){
		sum += ptr[i];
	}
	printf("sum=%d",sum);
	
	}