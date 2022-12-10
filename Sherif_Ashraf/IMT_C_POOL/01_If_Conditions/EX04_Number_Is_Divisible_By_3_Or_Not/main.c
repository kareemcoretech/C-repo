#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int num1,num2,num3;
	printf("Enter The Number \n");
	scanf("%d %d %d",&num1,&num2,&num3);
	if(num1%3==0)
		printf("%d Is Divisible By 3\n",num1);
	if(num2%3==0)
		printf("%d Is Divisible By 3\n",num2);
	if(num3%3==0)
		printf("%d Is Divisible By 3\n",num3);
}
