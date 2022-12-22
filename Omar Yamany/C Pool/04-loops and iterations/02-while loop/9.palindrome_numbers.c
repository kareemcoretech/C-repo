#include<stdio.h>

void main()
{
	int normal, temp, reverse=0;
	printf("Enter a number: ");
	scanf("%d", &normal);
	temp = normal;
	while(temp>0)
	{
		reverse = (reverse*10) + (temp%10);
		temp /= 10;
	}
	if(reverse==normal)
		printf("This number is palindrome");
	else
		printf("This number is not palindrome");
}