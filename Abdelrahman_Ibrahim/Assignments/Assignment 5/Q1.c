#include <stdio.h>

void main(void)
{
	int Array[10];
	int i;
	int sum =0;
	int avg;
	
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d: ",i);
		scanf("%d",&Array[i]);
		sum += Array[i];
	}
	
	avg = sum/10;
	int SIZE = sizeof(Array)/sizeof(Array[0]);
	printf("Sum of array elements = %d\n",sum);
	printf("number of elements %d",SIZE);
}
