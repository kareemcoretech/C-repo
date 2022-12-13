/* write a code where user enters 4 values a, b, c and d
then evaluates ratio (a+b) to (c-d) 
only if (c-d) not equal 0 */

#include <stdio.h>

void main()
{
	float a,b,c,d;
	printf("Enter value of 1st number: ");
	scanf("%f", &a);
	
	printf("Enter value of 2nd number: ");
	scanf("%f", &b);
	
	printf("Enter value of 3rd number: ");
	scanf("%f", &c);
	
	printf("Enter value of 4th number: ");
	scanf("%f", &d);
	
	if((c-d)!=0)
	{
		float result = (a+b)/(c-d);
		printf("Result = %f", result);
	}
	else
	{
		printf("ERROR: difference between 3rd and 4th number is zero! can't find ratio");
	}
}