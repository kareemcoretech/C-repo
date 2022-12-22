#include<stdio.h>
int Total(int Array[],int Size);
int main()
{
	int Array[10];
	int Size=sizeof(Array)/sizeof(Array[0]);
	for(int i=0;i<Size;i++)
	{
		printf("Please Enter number:");
		scanf("%d",&Array[i]);
	}
	int Result= Total(Array,Size);
	printf("The sum of all elements of the array is %d",Result);
}
int Total(int Array[],int Size)
{
	int sum=0;
	for(int i=0;i<Size;i++)
	{
		sum=sum+Array[i];
	}
	return sum;
}
