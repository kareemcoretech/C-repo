#include<stdio.h>
int main()
{
	int x;
	int y;
	int i;
	int result;
	printf("Enter the number=");
	scanf("%d",&x);
	printf("Enter the power:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		result= result*x;
	}
	printf("the result is %d \n",result);
}