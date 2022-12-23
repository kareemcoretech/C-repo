#include<stdio.h>
int Get_Cube(int x);
int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	int result = Get_Cube(x);
	printf("The cude is :%d",result);
	
}
int Get_Cube(int x)
{
	int z;
	z=x*x*x;
	return z;
}