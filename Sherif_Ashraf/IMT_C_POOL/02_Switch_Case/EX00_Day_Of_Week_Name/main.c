#include<stdio.h>

void main(void)
{
	int day;
	printf("Enter Number Of Day [1-7] \n");
	scanf("%d",&day);

	switch(day)
	{
		case 1:
			printf("Friday");
			break;
		case 2:
			printf("Saturday");
			break;
		case 3:
			printf("Sunday");
			break;
		case 4:
			printf("Monday");
			break;
		case 5:
			printf("Tuesday");
			break;
		case 6:
			printf("Wednesday");
			break;
		case 7:
			printf("Thursday");
			break;
        default: 
            printf("Invalid input! Please enter day number between 1-7.");
	}
}