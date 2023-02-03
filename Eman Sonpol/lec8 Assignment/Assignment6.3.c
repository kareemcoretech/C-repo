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
	printf("Enter the value of the numbers in aescending order:\n");
	for (int i=0;i<Size;i++)
	{
		printf("%d\n",Array[i]);
		
	}
}
void func (int Array[], int Size)
{
	int m,temp;
	for(int i=0;i<Size;i++)
	{
		for(int j=0;j<Size;j++)
		{
			m=i;
			if(Array[j]>Array[m])
			{
				m=j;
			}
			if(m !=i)
			{
				temp = Array[m];
				Array[m]=Array[i];
				Array[i]=temp;
			}
		}
	}
}