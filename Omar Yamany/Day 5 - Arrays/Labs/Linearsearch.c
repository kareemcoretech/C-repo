#include <stdio.h>

void Linear_Search(int array[], int x, int size);

void main()
{
	int array[10] = {9,8,1,4,2,3,8,5,8,11};
	int sizeofarray = sizeof(array)/sizeof(array[0]);
	int number;
	printf("Enter number for search: ");
	scanf("%d", &number);
	Linear_Search(array, number, sizeofarray);
}

void Linear_Search(int array[], int x, int size)
{
	int flag=0, counter=0;
	for(int i=0;i<size;i++)
	{
		if(array[i]==x)
		{
			printf("Number found at location: %d\n", i);
			flag=1;
			counter++;
			
		}
	}
	if(counter!=0)
	{
		printf("Number was found %d times!", counter);
	}
	if (flag==0)
		{
			printf("Number not found!");
		}
}