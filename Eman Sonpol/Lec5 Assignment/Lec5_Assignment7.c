#include<stdio.h>
void Swap_Array(int Array1[],int Array2[],int Size);

int main()
{
	int Array1[]={1,2,3,4};
	int Array2[]={5,6,7,8};
	int Size=sizeof(Array1)/sizeof(Array1[0]);
	Swap_Array(Array1,Array2,Size);
	printf("the second array after swap:");
	for(int i=0;i<Size;i++)
	{
		printf("%d,",Array2[i]);
	}
	printf("\n The first Array after swap:");
	for(int i=0;i<Size;i++){
		printf("%d,",Array1[i]);
	}
	
}
void Swap_Array(int Array1[],int Array2[],int Size)
{
	for(int i=0;i<Size;i++)
	{
		int temp=0;
		temp=Array2[i];
		Array2[i]=Array1[i];
		Array1[i]=temp;
	}
}