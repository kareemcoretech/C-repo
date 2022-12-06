#include <stdio.h>

int main()
{
	//user ID and psw
	int ID, psw;
	
	//correct ID and psw (we can use an array to set a database)
	int cID=161553, cpsw=1214;
	printf("Please enter your ID: ");
	scanf("%d", &ID);
	if(ID==cID)
	{
		printf("Please enter your password: ");
		scanf("%d", &psw);
		if (psw==cpsw)
		{
			printf("Your username is Omar Mohamed");
		}
		else
		{
			printf("Incorrect Password");
		}
	}
	else
	{
		printf("Incorrect ID");
	}
	
}