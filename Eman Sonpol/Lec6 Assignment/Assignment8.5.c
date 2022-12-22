#include<stdio.h>
void func (int ptr1[],int ptr2[],int Size);
int main()
{
	int Array1[5]={1,2,3,4,5};
	int Size=sizeof(Array1)/sizeof(Array1[0]);
	int Array2[Size];
	printf("The first array:");
	for(int i=0;i<Size;i++)
	{
		printf("%d,",Array1[i]);
	}
	
	func(Array1,Array2,Size);
	
	printf("\nThe second Array:");
	for(int i=0;i<Size;i++)
	{
		printf("%d,",Array2[i]);
	}
}
void func (int ptr1[],int ptr2[],int Size)
{
	 for(int i=0;i<Size;i++)
	 {
		int temp=ptr1[i];
		ptr2[i]= temp;
	 }
}
/* C function to copy all elements of an array into another
array using pointers. The two arrays have the same length and 
types.
