#include <stdio.h>

void Swap (int *x, int *y);

int main()
{
	int num1, num2;
	printf("Enter two Numbers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("before: %d %d\n",num1,num2);
	
	Swap(&num1,&num2);
	
	printf("After: %d %d\n",num1,num2);

	
	
}

void Swap (int *x, int *y)
{
	*x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}