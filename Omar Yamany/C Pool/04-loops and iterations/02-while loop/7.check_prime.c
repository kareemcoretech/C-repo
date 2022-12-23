#include<stdio.h>
void main()
{
	int num,i=2;
	printf("Enter a number to check if it's prime: ");
	scanf("%d", &num);
	
	while(num>=i)
	{
		if(num == i)
		{
			printf("This number is prime");
			break;
		}
		else if(num%i==0)
		{
			printf("This number is not prime");
			break;
		}
		i++;
	}
}