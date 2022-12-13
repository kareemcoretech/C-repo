#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9,n10, searchkey;
	
	printf("Enter number 1: ");
	scanf("%d", &n1);
	
	printf("Enter number 2: ");
	scanf("%d", &n2);
	
	printf("Enter number 3: ");
	scanf("%d", &n3);
	
	printf("Enter number 4: ");
	scanf("%d", &n4);
	
	printf("Enter number 5: ");
	scanf("%d", &n5);
	
	printf("Enter number 6: ");
	scanf("%d", &n6);
	
	printf("Enter number 7: ");
	scanf("%d", &n7);
	
	printf("Enter number 8: ");
	scanf("%d", &n8);
	
	printf("Enter number 9: ");
	scanf("%d", &n9);
	
	printf("Enter number 10: ");
	scanf("%d", &n10);
	
	printf("Enter value to search: ");
	scanf("%d", &searchkey);
	
	if(searchkey==n1)
	{
		printf("Value exists in element number 1");
	}
	
	else if(searchkey==n2)
	{
		printf("Value exists in element number 2");
	}
	
	else if(searchkey==n3)
	{
		printf("Value exists in element number 3");
	}
	
	else if(searchkey==n4)
	{
		printf("Value exists in element number 4");
	}
	
	else if(searchkey==n5)
	{
		printf("Value exists in element number 5");
	}
	
	else if(searchkey==n6)
	{
		printf("Value exists in element number 6");
	}
	
	else if(searchkey==n7)
	{
		printf("Value exists in element number 7");
	}
	
	else if(searchkey==n8)
	{
		printf("Value exists in element number 8");
	}
	
	else if(searchkey==n9)
	{
		printf("Value exists in element number 9");
	}
	
	else if(searchkey==n10)
	{
		printf("Value exists in element number 10");
	}
	
	else
	{
		printf("Value not found");
	}
}