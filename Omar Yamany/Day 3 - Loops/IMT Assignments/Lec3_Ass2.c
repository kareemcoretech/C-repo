#include <stdio.h>

int main()
{
	int ID, psw, block;
	printf("Please enter your ID: ");
	scanf("%d", &ID);
	
	if(ID==1234)
	{
		for(int i=0;i<3;i++)
		{
			printf("Please enter your password: ");
			scanf("%d", &psw);
			if(psw==7788)
			{
				printf("Welcome Ahmed");
				block = 0;
				break;
			}
			else
			{
				printf("Incorrect password\n");
				block=1;
			}
		}
	}
	else if(ID==5678)
	{
		for(int i=0;i<3;i++)
		{
			printf("Please enter your password: ");
			scanf("%d", &psw);
			if(psw==5566)
			{
				printf("Welcome Amr");
				block = 0;
				break;
			}
			else
			{
				printf("Incorrect password\n");
				block=1;
			}
		}
	}
	else if(ID==9870)
	{
		for(int i=0;i<3;i++)
		{
			printf("Please enter your password: ");
			scanf("%d", &psw);
			if(psw==9870)
			{
				printf("Welcome Wael");
				block = 0;
				break;
			}
			else
			{
				printf("Incorrect password\n");
				block=1;
			}
		}
	}
	else
	{
		printf("You are not registered");
	}
	
	if(block == 1)
	{
		printf("Incorrect password for 3 times, no more tries");
	}
}