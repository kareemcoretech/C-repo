/*Write a C function to swap the contents of two arrays with
the same length*/

#include <stdio.h>
void Swap (int Array1[],int Array2[],int size);
int main()
{
	int Arr_1[5]={1,5,2,3,4};
	int Arr_2[5]={90,88,45,75,55};
	int size=sizeof Arr_1/sizeof Arr_1[0];
	int temp;
	Swap( Arr_1,Arr_2,size);

}

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