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
	printf("the array elements are:");
	for(int i=0 ; i<Size ;i++)
	{
		printf("%d,",Array[i]);
	}
	func(Array,Size);
	printf("\nthe maximum number is :%d",Array[0]);
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
/*C Program to print all the array elements and the maximum 
number in array using array of pointers.
