#include <stdio.h>

int main(){
	int x, y;
	printf("Please enter number: ");
	scanf("%d", &x);
	y = x%2;
	if (y==0)
	{
		printf("your number is even");
	}
	else
	{
		printf("your number is odd");
	}
}