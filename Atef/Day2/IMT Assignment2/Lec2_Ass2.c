#include<stdio.h>

int main ()
{
	int id , pass;
	printf("Please enter your ID\n");
	scanf("%d",&id);
	switch (id)
	{
		case 1234 :
		printf("Please enter your password\n");
		scanf("%d",&pass);
		if (pass==4321)
		{
			printf("Your user name is Atef@29\n");
		}
		else 
		{
			printf("incorrect password\n");
		}
		break;
		case 5678 :
		printf("Please enter your password\n");
		scanf("%d",&pass);
		if (pass==8765)
		{
			printf("Your user name is Aziz@610\n");
		}
		else 
		{
			printf("incorrect password\n");
		}
		break;
		case 9123 :
		printf("Please enter your password\n");
		scanf("%d",&pass);
		if (pass==3219)
		{
			printf("Your user name is Youssef@113\n");
		}
		else 
		{
			printf("incorrect password\n");
		}
		break;
		default:
		printf("Incorrect ID\n");
		break;
		
	}
	
	
}