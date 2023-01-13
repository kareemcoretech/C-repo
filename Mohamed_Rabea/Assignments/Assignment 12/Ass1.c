/* AUTH : MOHAMED MOHAMED RABEA
VER: (V.0.1)
PROGRAM : (1) C function to sort an array using shell sorting, run the program and take 2 input arrays from user and sort them 
independently, pass the sorted arrays to another function that merges them into a big sorted array.
*/

#include <stdio.h>
#include "types.h"

void Shell_sort (u16 Arr[],u8 N)
{
	u8 i,gap,j,temp=0;
	for ( gap=N/2; gap>0 ;gap /=2  )
	{
		for( i=0 ; i<N ; i++ )
		{
			temp = Arr[i];
            for (j = i ; j >= gap && Arr[ j - gap] > temp ; j -= gap)
				{
                 Arr[j] = Arr[j - gap];
                }
                    Arr[j] = temp;
		}
	}

}
 


void print (u16 Arr[],u8 N)
{
	for (u8 i=0; i<N ; i++)
	{
		printf("Element [%d] = %d\n",i,Arr[i]);
	}
}

void Merge (u16 Arr1[],u16 Arr2[],u8 N1 ,u8 N2)
{   u8 N3=N1+N2;
	u16 Arr3[N3];
	for (u8 i=0 ; i<N1; i++)
	{
			Arr3[i]= Arr1[i];	
	}
	for (u8 j=N3 ; j>N3-N1; j--)
	{
			Arr3[j]= Arr2[j];	
	}
	printf("\n");
	print( Arr3, N3);
}


int main ()
{
	u16 Array_1[]={2,9,7,8,1,6,4,5,3};
    u8 size_1= sizeof Array_1 / sizeof Array_1[0];
	u16 Array_2[]={20,19,18,11,16,14,15,13};
	u8 size_2= sizeof Array_2 / sizeof Array_2[0];
	
	Shell_sort(Array_1,size_1);
	Shell_sort(Array_2,size_2);
	
	print(Array_1,size_1);
	print(Array_2,size_2);
	
	Merge (Array_1,Array_2,size_1,size_2);
	
}
