#include<stdio.h>

int main()
{
	int input;
	while(1)
	{
		printf("Enter the answer of 3 x 4 = ");
		scanf("%d", &input);
		if(input==12)
		{
			printf("Thank you");
			break;
		}
		else
		{
			printf("Not correct, please try again\n");
		}
	}
}