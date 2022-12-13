#include <stdio.h>
int main ()
{
	int number,i,power,result ;
	printf("Enter a number: ");
	scanf("%d",&number);
	printf("Enter the power: ");
	scanf("%d",&power);
	
	for(i=0 ; i<(power) ;i++)
	{
		result *= number;
		
	}
	printf("result = %d",result);
	
}