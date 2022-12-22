#include<stdio.h>
void func (int ptr[], int Size);
int main()
{
	int Array[10];
	int Size=sizeof(Array)/sizeof(Array[0]);
	
	for(int i=0;i<Size;i++)
	{
		printf("Enter the  value of term%d:",i);
		scanf("%d",&Array[i]);
	}
	func(Array,Size);
	for(int i=0;i<Size;i++)
	{
		printf("%d\n",Array[i]);
	}
}
void func (int ptr[],int Size)  
{
	for(int i=0;i<Size-1-i;i++)
	{
		int temp;
		temp=ptr[i];
		ptr[i]=ptr[Size-1-i];
		ptr[Size-1-i]=temp;
	}
}
/*C Function to read 10 integers into an array from user and 
print them in reversing order using pointers.
