#include <stdio.h>

int main()
{
	int x;
	printf("Please Enter Your ID: ");
	scanf("%d", &x);
	switch(x)
	{
		case 1234:
		printf("Welcome Ahmed");
		break;
		case 5678:
		printf("Welcome Youssef");
		break;
		case 1145:
		printf("Welcome Mina");
		break;
		default:
		printf("Wrong ID");
		break;
	}
}