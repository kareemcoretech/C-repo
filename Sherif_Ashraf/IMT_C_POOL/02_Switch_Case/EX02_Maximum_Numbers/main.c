#include<stdio.h>

void main(void)
{
	int num1,num2;
	printf("Enter Two Number To Get The Max \n");
	scanf("%d %d",&num1,&num2);

	switch(num1>num2 && num1!=num2)
	{
		case 0:
			{
				switch(num2>num1 && num2!=num1)
				{
					case 1:
						printf("Max Number Is : %d",num2);
						break;
					case 0:
						printf("Numbers Is Equal");
						break;
				}
					break;
			}
		case 1:
			printf("Max Number Is : %d",num1);
			break;
	}
}