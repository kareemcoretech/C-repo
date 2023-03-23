#include <stdio.h>

int main()
{
	int num, flag;
	flag = 0;
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	//0 and 1 are not prime numbers
	//if number is not prime, flag =1
	if ((num==0) || (num==1))
	{
		flag=1;
	}
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag = 1;
			break;
		}
	}
	
	if (flag == 1)
	{
		printf("Number is not prime");
		
	}
	else 
	{
		printf("Number is prime");
	}
}