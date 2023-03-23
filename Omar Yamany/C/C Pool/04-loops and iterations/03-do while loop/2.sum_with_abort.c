#include<stdio.h>
void main()
{
	int sum=0,num;
	printf("**USE 0 TO ABORT**\n\n");
	do
	{
		printf("Enter a number: ");
		scanf("%d", &num);
		sum+=num;
	}
	while(num!=0);
	printf("Sum = %d", sum);
}