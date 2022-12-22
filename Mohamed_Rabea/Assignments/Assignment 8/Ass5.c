/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program: (5) C function to copy all elements of an array into another
  		 array using pointers. The two arrays have the same length and type.*/
			  
#include<stdio.h>

void Copy_Array(int Array1[],int Array2[], int size );

int main()
{
	int Arr1[5]={9,10,5,3,2};
	int Arr2[5];
	int size = sizeof Arr1 / sizeof Arr1[0];
	Copy_Array( Arr1, Arr2, size );
}

void Copy_Array(int Array1[],int Array2[], int size )

{
	int *ptr1,i ;
	 ptr1= Array1;   
	
	for(i=0;i<size;i++)
	{
	
	Array2[i]=ptr1[i];
	
	printf("Arr2[%d] : %d\n",i,Array2[i]);
	
	}
}