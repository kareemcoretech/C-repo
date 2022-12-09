#include <stdio.h>
int main()
{
	printf("Enter the answer of : 3x4=  \n");
	int x;
	scanf("%d",&x);
	while (x!=12)
	{
		printf("Not correct, Please try again: ");
		scanf("%d",&x);
	}
	if(x==12);
	{
		printf("Thank you");
	}
}