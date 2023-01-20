/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program: (3) write a C function that use the selection sort algorithm to 
             sort an integer array in ascending order.*/

#include<stdio.h>

void selection_sort(int Array[] , int size);

int main ()
{ 
  int i;
  int Arr[5]={9,8,7,3,5};
  int size= sizeof Arr/sizeof Arr[0];
  printf("Size=%d\n",size);
	Bubble_sort ( Arr,size);
	for(i=size-1; i>=0 ;--i)
	{
	printf("Arr[%d]=%d\n",i,Arr[i]);
	}
}
void Bubble_sort(int Array[], int size)
{
	int i,j;
	int temp=0;
	
	for( i=0 ; i<size ; i++)
	{
		for( j=0; j<size-i-1; j++)
		{
			if (Array[j]>Array[j+1])
			{
				temp=Array[j+1];
				Array[j+1]=Array[j];
				Array[j]=temp;
			}
		}
	}
	
}