#include<stdio.h>

int main()
{
	int num;
	printf("Enter The Number\n");
	scanf("%d",&num);
	for(int i = 0; i<=10;i++)
	{
		int res;
		res = num * i;
		printf("%d * %d = %d \n",num,i,res);
	}
		
}