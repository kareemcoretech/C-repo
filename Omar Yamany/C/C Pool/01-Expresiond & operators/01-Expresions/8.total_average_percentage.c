#include <stdio.h>

void main()
{
	int sub1, sub2, sub3, sub4, sub5, number_of_subjects;
	float total, average, percentage;
	number_of_subjects = 5;
	printf("Enter marks of five subjects: \n");
	scanf("%d", &sub1);
	scanf("%d", &sub2);
	scanf("%d", &sub3);
	scanf("%d", &sub4);
	scanf("%d", &sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5;
	average = total / number_of_subjects;
	percentage = (total/500)*100;
	printf("Total marks = %.2f\n", total);
	printf("Average marks = %.2f\n", average);
	printf("Percentage = %.2f", percentage);
}