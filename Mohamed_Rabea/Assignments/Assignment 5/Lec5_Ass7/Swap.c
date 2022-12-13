#include<stdio.h>
void Swap(int Array1[],int Array2[],int size)
{
	for(int i=0; i<size ;i++){
		int temp = Array1[i];
	Array1[i] = Array2[i];
	Array2[i] = temp;
	

		printf("Arr_1[%d] after swap= %d\n",i,Array1[i]);
		printf("Arr_2[%d] after swap= %d\n",i,Array2[i]);
	}
	
}