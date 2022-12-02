#include <stdio.h>
int main()
{
	int num1, num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	int sum = num1 + num2 ;
	printf("%d\n",sum);
	int sub = num1 - num2 ;
	printf("%d\n",sub);
	int an = num1 & num2 ;
	printf("%d\n",an);
	int ori = num1 | num2 ;
	printf("%d\n",ori);
	int xori = num1 ^ num2 ;
	printf("%d",xori);
}