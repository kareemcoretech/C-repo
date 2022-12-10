#include<stdio.h>

int main()
{
	int userId,userPassword,inputId,inputPassword;
	userId = 12345;
	userPassword = 54321;
	printf("Enter Your Id\n");
	scanf("%d",&inputId);

	if(inputId == userId)
	{
		printf("Enter Your Password\n");
		scanf("%d",&inputPassword);
		if(inputPassword == userPassword)
		{
			printf("UserName : Sherif\n");
		}
		else
		{
			printf("Invalid Password\n");
		}	
	}
	else
	{
		printf("Invalid Id\n");
	}

}