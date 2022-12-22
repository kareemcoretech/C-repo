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

}
void func (int ptr[], int Size)
{
	int sum=0;
	for(int i=0;i<Size;i++)
	{
		sum=sum+ptr[i];
	}
	printf("The sum of the array is equal:%d",sum);
}
/* C Function to compute sum of the array elements using 
pointers.