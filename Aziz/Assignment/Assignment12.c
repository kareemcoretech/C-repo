#include <stdio.h>
int main ()
{
	int x;
	printf ("enter temperature\n");
	scanf("%d",&x);
	if (x>=0 && x<30)
	{
		printf ("required heating time = 7 min");
	}
	else if (x>=30 && x<60)
	{
		printf("required heating time = 5 min");
	}
	else if (x>=60 && x<90)
	{
		printf("required heating time = 3 min");
	}
	else if (x>=90 && x<=100)
	{
		printf("required heating time = 1 min");
	}
	else 
	{
		printf("invaild input");
	}
}