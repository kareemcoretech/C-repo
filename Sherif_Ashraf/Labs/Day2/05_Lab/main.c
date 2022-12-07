#include<stdio.h>

int main()
{
	int id = 0;
	printf("Enter Your Id \n");
	scanf("%d",&id);

	switch(id)
	{
	case 1234:
		printf("Ahmed \n");
		break;
	case 5678:
		printf("Youssef \n");
		break;
	case 1145:
		printf("Mina \n");
		break;
	default:
		printf("Wrong Id\n");
	}
}