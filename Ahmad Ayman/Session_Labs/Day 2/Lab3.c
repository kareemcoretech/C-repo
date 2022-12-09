#include <stdio.h>
int main ()
{
printf("Please enter your grade\n");
int x;
scanf("%d",&x);
if (x<50)
{
	printf("Failed");
}	
else if((x>=50)&&(x<65))
{
	printf("Normal");
}
else if ((x>=65)&&(x<75))
{
	printf("Good");
}
else if ((x>=75)&&(x<85))
{
	printf("Very Good");
}
else
{
	printf("Excellent");
}
	
	
	
	
	
	
	
}