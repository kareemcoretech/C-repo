#include<stdio.h>

void main()
{
	int sum = 17;
	int count = 5;
	double average;
	average = (float)sum/(float)count; //we used (float) for explicit casting
	printf("Average = %.2lf", average);
	
}