#include<stdio.h>

int main()
{
	int grade = 0;
	printf("Enter Student Grade \n");
	scanf("%d",&grade);

	if(grade >= 0 && grade < 50)
	{
		printf("Student Grade Is Failed");
	}
	else if(grade >= 50 && grade < 65)
	{
		printf("Student Grade Is Normal");
	}
	else if(grade >= 65 && grade < 75)
	{
		printf("Student Grade Is Good");
	}
	else if(grade >= 75 && grade < 85)
	{
		printf("Student Grade Is Very Good");
	}
	else if(grade >= 85)
	{
		printf("Student Grade Is Excellent");
	}
}