#include<stdio.h>
void func (int Array[], int Size);
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
	printf("Enter the value of the numbers in descending order:\n");
	for (int i=0;i<Size;i++)
	{
		printf("%d\n",Array[i]);
		
	}
}
void func (int Array[], int Size)
{
	for(int i=0;i<Size-1;i++)
	{
		for(int j=0;j<Size-i-1;j++)
		{
			if(Array[j]<Array[j+1]){
				int temp = Array[j+1];
				Array[j+1]=Array[j];
				Array[j]=temp;
			}
		}
	}
}