#include <stdio.h>
int main()
{
	int temperature;
	printf("Enter temperature: ");
	scanf("%d", &temperature);
	if( temperature >= 0 && temperature <= 30)
	{
		printf("required heating time = 7 mins");
	}
	else if ( temperature > 30 && temperature <= 60)
	{
		printf("required heating time = 5 mins");
	}
	else if ( temperature > 60 && temperature <= 90)
	{
		printf("required heating time = 3 mins");
	}
	else if ( temperature > 90 && temperature <= 100)
	{
		printf("required heating time = 1 mins");
	}
	else
	{
		printf("Invalid input");
	}
}