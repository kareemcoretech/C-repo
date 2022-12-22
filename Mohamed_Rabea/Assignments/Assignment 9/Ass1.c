/*Auth: MOHAMED MOHAMED RABEA.
ver:(1.0)
program:(1) C Program to print all the array elements and the maximum
            number in array using array of pointers.*/

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
	for(i=0;i<size;i++){
		printf("Arr[%d] : %d\n",i,ptr[i]);
	}
  
	printf ("the smallest element is %d",ptr[size-1]);
	
}