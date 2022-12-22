#include<stdio.h>
void Get_Term(int Array[],int Size);

int main()
{
	int x;
	printf("Enter the number to find:");
	scanf("%d",&x);
	int Array[x];
	int Size=sizeof(Array)/sizeof(Array[0]);
	Get_Term(Array,Size);
	printf("The Value of the term %dth is %d",x,Array[x-1]);
}
void Get_Term(int Array[],int Size)
{
	int i;
	Array[0]=1;
	Array[1]=1;
	for (i=2;i<Size;i++)
	{
		Array[i]=Array[i-1]+Array[i-2];
	}
}