#include<stdio.h>
int Power_Chcek(int x);

int main()
{
	int x;
	printf("Enter Your Number:");
	scanf("%d",&x);
	int Result = Power_Chcek(x);
	printf("%d",Result);
	
}
int Power_Chcek(int x)
{
	if(x%2==0)
	{
		printf("Number is a power of 2 \n");
		return 1;
	}
	else if (x%3==0){
		printf("Number is a power of 3 \n");
		return 0;
	}
	else
	{
		return -1;
	}
	
}