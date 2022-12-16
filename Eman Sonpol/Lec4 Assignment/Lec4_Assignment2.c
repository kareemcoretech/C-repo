#include<stdio.h>
int addfunc(int x,int y);
int subfunc(int x,int y);
int multfunc(int x,int y);
int dividefunc(int x,int y);
int main()
{
	int x, R;
	int y;
	char o;
	printf("Enter the first number:");
	scanf("%d",&x);
	printf("Enter the second number:");
	scanf("%d",&y);
	printf("Enter Your Operation:");
	scanf(" %c",&o);
	switch(o)
	{
		case '+':
		R = addfunc(x,y);
		printf("The result is:%d",R);
		break;
		case'-':
		R = subfunc(x,y);
		printf("The result is :%d",R);
		break;
		case'*':
		R = multfunc(x,y);
	    printf("The result is :%d",R);
		break;
		case'/':
		R = dividefunc(x,y);
		printf("The result is :%d",R);
		break;
	}
	
}
int addfunc(int x,int y)
{
	int z;
	z=x+y;
	return z;
}
int subfunc(int x,int y)
{
	int z;
	if(x>y)
	{
		z=x-y;
		return z;
	}
	else 
	{
		z=y-x;
		return z;
	}
}
int multfunc(int x,int y)
{
	int z;
	z=x*y;
	return z;
}
int dividefunc(int x, int y)
{
	int z;
	if(x>y){
		z=x/y;
		return z;
	}
	else {
		z=y/x;
		return z;
	}
}