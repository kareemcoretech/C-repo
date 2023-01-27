#include<stdio.h>
void check_prime(int up, int low);
void main()
{
	int upper_limit, lower_limit;
	printf("Enter lower limit: ");
	scanf("%d", &lower_limit);
	printf("Enter upper limit: ");
	scanf("%d", &upper_limit);
	check_prime(upper_limit, lower_limit);
}

void check_prime(int up, int low)
{
	printf("All prime numbers between %d to %d: ", low , up);
	int flag;
	for(int i=low;i<=up;i++)
	{
		if(i==1)
		{
			printf("%d, ", i);
		}
		else if(i==0)
		{
			printf("%d, ", i);
		}
		else
		{
			flag=0;
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d, ", i);
			}
		}
	}
}