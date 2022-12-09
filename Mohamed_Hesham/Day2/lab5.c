#include <stdio.h>

int main()

{
	int id;
	printf("Please Enter the ID: ");
	scanf("%d", &id);
	switch (id)
	{
		case 1234:
		printf("This is Ahmed's ID");
		break;
		case 5678:
		printf("This is Youssef's ID");
		break;
		case 1145:
		printf("This is Mina's ID");
		break;
		default:
		printf("This is Wrong ID");
	}
		
}