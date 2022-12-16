#include<stdio.h>
void Reverse(int Array[],int Size);
int main()
{
	int Size;
	printf("Enter the Size of the array=");
	scanf("%d",&Size);
	int Array[Size];
	printf("Enter the elements of the Array:");
	for(int i=0;i<Size;i++)
	{
		scanf("%d",&Array[i]);
	}
	Reverse(Array,Size);
	printf("Array after reverse is:");
	
	for(int i=0;i<Size;i++)
	{
		printf("%d \n",Array[i]);
	}
}
void Reverse(int Array[],int Size)
{
	for(int i=0;i<Size;i++)
	{
		int temp;
		temp=Array[i];
		Array[i]=Array[Size-1-i];
		Array[Size-1-i]=temp;
	}
}
