#include<stdio.h>

int main()
{
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,val;

	printf("Enter 10 Numbers\n");
	scanf("%d %d %d %d %d %d %d %d %d %d",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);

	printf("Enter Number To Search\n");
	scanf("%d",&val);

	(val == num1)? printf("Value Is Exist At Element Number 1"):(val == num2)? printf("Value Is Exist At Element Number 2"):
	(val == num3)? printf("Value Is Exist At Element Number 3"):(val == num4)? printf("Value Is Exist At Element Number 4"):
	(val == num5)? printf("Value Is Exist At Element Number 5"):(val == num6)? printf("Value Is Exist At Element Number 6"):
	(val == num7)? printf("Value Is Exist At Element Number 7"):(val == num8)? printf("Value Is Exist At Element Number 8"):
	(val == num9)? printf("Value Is Exist At Element Number 9"):(val == num10)? printf("Value Is Exist At Element Number 10"):
	printf("Value Is Not Exist At Any Element");

}