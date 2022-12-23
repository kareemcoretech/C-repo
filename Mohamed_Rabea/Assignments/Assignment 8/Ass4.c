/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program: (4) C function to get the value of the smallest element in array 
              using pointers.*/

			  
			  
#include<stdio.h>
void Bubble_sort (int Array[] ,int size );

int main ()
{
	int Arr[5]={9,10,5,3,2};
	int size = sizeof Arr / sizeof Arr[0];

	
Bubble_sort ( Arr , size );
	
	
}

void Bubble_sort (int Array[] ,int size )
{
	int  temp=0,i,j,*ptr= Array ;
	for (i=0; i<size  ;i++)
	{
		for (j=0; j<size-i-1  ;j++)
		{
			if ( ptr[j]>ptr[j+1])
			{
				temp=ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]= temp;
			}
		}
	}
  
	printf ("the smallest element is %d",ptr[0]);
}