#include <stdio.h>

int main()
{
	int ID1 = 1234;
	int ID2 = 5678;
	int ID3 = 9870;
	int psw1 = 7788;
	int psw2 = 5566;
	int psw3 = 1122;
	int ID, psw;
	
	printf("Please enter your ID: ");
	scanf("%d", &ID);
	
	if(ID==ID1)
	{
		int n=0;
		while (1)
		{
		if(n==3)
		{
			printf("incorrect password for 3 times, no more tries");
			break;
		}
		else
		{
		printf("Please enter password: ");
		scanf("%d", &psw);
		
			if (psw == psw1)
			{
				printf("Welcome Ahmed");
			}	
			else
			{
				printf("Incorrect, please try again\n");
				n++;
			}
		}
		}
	}
}