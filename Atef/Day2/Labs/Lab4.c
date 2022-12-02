#include <stdio.h>

int main ()
{
	int ID ;
	printf("please enter your ID\n");
	scanf("%d",&ID);
	switch(ID)
	{
		case 1234 :
		printf("Ahmed\n");
		break ;
		case 5678 :
		printf("Youssef\n");
		break ;
		case 1145 :
		printf("Mina\n");
		break ;
		default :
		printf("Error");
		break ;
	}
	
	
}