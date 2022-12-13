#include <stdio.h>
int main ()
{
printf("Please Enter your first number\n");
int x,y,z;
scanf("%d",&x);
printf("Please enter your second number\n");
scanf("%d",&y);
printf("Enter your operation\n");
char o;
scanf(" %c",&o); //space before %c don't forget
switch (o)
{
	case '+':
	z=x+y;
	printf("Result=%d",z);
	break;
	case '-':
	z=x-y;
	printf("Result=%d",z);
	break;
	case '/':
	z=x/y;
	printf("Result=%d",z);
	break;
	case '*':
	z=x*y;
	printf("Result=%d",z);
	break;
	
}
	
	
	
	
	
	
	
	
	
}