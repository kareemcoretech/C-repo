#include<stdio.h>
void func (int ptr[], int Size);
int main()
{
	int Array[5];
	int Size=sizeof(Array)/sizeof(Array[0]);
	for (int i=0;i<Size;i++)
	{
		printf("Enter the value of the %d term:",i);
		scanf("%d",&Array[i]);
	}
	func(Array,Size);
	printf("the smallest element is :%d",Array[Size-1]);
}
void func (int ptr[], int Size)
{
	for(int i=0;i<Size-1;i++)
	{
		for(int j=0;j<Size-i-1;j++)
		{
			if(ptr[j]<ptr[j+1]){
				int temp = ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
}
/* C function to get the value of the smallest element in array 
using pointers.
