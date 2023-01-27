#include<stdio.h>

void main()
{
	int num;
	char flag;
	do
	{
		printf("Enter a number: ");
		scanf("%d", &num);
		if(num>0)
			printf("You entered a positive number");
		else if(num<0)
			printf("You entered a negative number");
		else
			printf("You entered zero");
		
		printf("\nTo continue press (c)\nTo exit press (e)\n");
		scanf(" %c", &flag);
	}
	while(flag=='c');
}