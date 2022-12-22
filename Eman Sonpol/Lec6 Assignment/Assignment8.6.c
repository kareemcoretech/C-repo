#include<stdio.h>
void func (int ptr1[],int ptr2[],int Size);
int main()
{
	int Array1[5]={1,2,3,4,5};
	int Array2[5]={6,7,8,9,10};
	int Size=sizeof(Array1)/sizeof(Array1[0]);
	func(Array1,Array2,Size);
	printf("The first array:");
	for(int i=0;i<Size;i++)
	{
		printf("%d,",Array1[i]);
	}
	
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
		ptr1[i]=ptr2[i];
		ptr2[i]=temp;
	 }
}
/*Write a C function to swap the contents of two arrays with
the same length using pointers.