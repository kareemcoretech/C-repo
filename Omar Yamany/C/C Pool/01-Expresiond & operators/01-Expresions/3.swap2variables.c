#include <stdio.h>

void main()
{
	int n1, n2, temp;
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("After swapping: \n");
	printf("Number 1 = %d\nNumber 2 = %d", n1, n2);
	
}