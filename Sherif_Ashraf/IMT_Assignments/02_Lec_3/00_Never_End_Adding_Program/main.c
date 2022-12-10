#include<stdio.h>

int main()
{
	int num1,num2,res;
	while(1)
	{
		printf("Enter The First Number\n");
		scanf("%d",&num1);
		printf("Enter The Second Number\n");
		scanf("%d",&num2);

		res = num1 + num2;

		printf("Sumation Of The Two Numbers = %d \n",res);
	}
		
}