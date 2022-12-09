#include <stdio.h>

int main()
{
	int input, output;
	printf("Please enter input tempreature: ");
	scanf("%d", &input);
	
	if(input>=0 && input<30)
	{
		printf("Required heating time = 7 minutes.\n");
	}
	else if(input>=30 && input<60)
	{
		printf("Required heating time = 5 minutes.\n");
	}
	else if(input>=60 && input<90)
	{
		printf("Required heating time = 3 minutes.\n");
	}
	else if(input>=90 && input<=100)
	{
		printf("Required heating time = 1 minute.\n");
	}
	else
	{
		printf("Invalid input");
	}
}








