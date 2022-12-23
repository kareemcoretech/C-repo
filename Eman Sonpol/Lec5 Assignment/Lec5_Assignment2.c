#include<stdio.h>
int Get_Occurance(int Array[], int Size, int x);
int main()
{
	int Array[]={1,4,4,5,6};
	int Size= sizeof(Array)/sizeof(Array[0]);
	int x;
	printf("Enter your number :");
	scanf("%d",&x);
	int Result = Get_Occurance(Array,Size,x);
	if(Result!= -1)
	{
		printf("The first Occurance of the number %d is at location %d",x,Result);
	}
	else 
	{
		printf("Number is not in the array");
	}
	
}
int Get_Occurance(int Array[], int Size, int x)
{
	int low =0;
	int high = Size - 1;
	int flag=-1;
	
		while(low<=high)
	{
		int Med=((low+high)/(2));
		if(x== Array[Med])
		{
			flag = Med;
			high= Med-1;
		}
		else if(x> Array[Med])
		{
			low=Med+1;
		}
		else if (x< Array[Med])
		{
			high=Med-1;
		}
	}
	return flag;
}
