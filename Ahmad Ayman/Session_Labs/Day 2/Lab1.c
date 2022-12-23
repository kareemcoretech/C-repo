#include <stdio.h>
int main()
{
	printf("please enter your working hours\n");
	int x;
	scanf("%d",&x);
	if (x<40)
	{
		x=x*50*0.9;
		printf("Your salary is\t%d",x);
	}
	else
	{
		x=x*50;
        printf("Your salary is\t%d",x);	
    }

	
	
	
	
	
	
	
}