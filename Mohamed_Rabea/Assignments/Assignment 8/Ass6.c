/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program:(6) Write a C function to swap the contents of two arrays with
            the same length using pointers.*/
#include<stdio.h>

void Swap(int Array1[],int Array2[], int size );

int main()
{
	int Arr1[5]={9,10,5,3,2};
	int Arr2[5]={1,4,7,8,6};
	int size = sizeof Arr1 / sizeof Arr1[0];
	Swap( Arr1, Arr2, size );
}

void Swap(int Array1[],int Array2[], int size )

{
	int *ptr1,*ptr2,*temp ;
	ptr1=Array1;
	ptr2=Array2;
	
     temp= ptr1;
     ptr1= ptr2;
     ptr2=temp;	 
	for(int i=0; i<size ;i++){
	printf("Arr1[%d]: %d\n",i,ptr1[i]);
	}
	for(int i=0; i<size ;i++){
	printf("Arr2[%d]: %d\n",i,ptr2[i]);
	}
}