#include<stdio.h>
int main()
{
	int x;
	int y;
	printf("Enter the first number=");
	scanf("%d",&x);
	printf("Enter the second number=");
	scanf("%d",&y);
if((x>y)&&(x%y==0))
{
	printf("the first number is the multiple of the second number");
}
else if((x<y)&&(y%x==0))
{
	printf("the second number is the multiple of the first number");
}
else if ((x>y || x<y)&&(y%x!=0 || x%y!=0))
{
	printf(" Neither of the numbers are multiple of the other");
}

	
}