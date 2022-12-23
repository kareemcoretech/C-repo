#include<stdio.h>

void main(void)
{
	int num1,num2,division,reminder;
	printf("Enter Two Numbers\n");
	scanf("%d %d",&num1,&num2);
	division = num1/num2;
	reminder = num1%num2;
	printf("Division %d / %d = %d \nReminder %d %% %d = %d",num1,num2,division,num1,num2,reminder);
}