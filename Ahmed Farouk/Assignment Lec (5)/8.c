#include <stdio.h>

void input_arr();
void out_arr();
	int i;
	int arr[5];
	int ar[5];
	int size = sizeof(arr)/sizeof(arr[0]);

void main()
{

	printf("Please Enter 5 Numbers : \n");
	input_arr();


	printf("\n----------\n");
	out_arr();
	printf("\n");





}
void input_arr ()
{
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

	}

}
void out_arr()
{
	for (i=size-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);

	}

}
