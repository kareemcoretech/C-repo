#include <stdio.h>

void input_arr();
void out_arr();
	int i,temp;
	int arr[5]={1,2,3,4,5};
	int ar[5]={6,7,8,9,0};
	int size = sizeof(arr)/sizeof(arr[0]);

void main()
{

		for (i=0;i<size;i++)
		{
				    temp=arr[i];
				    arr[i]=ar[i];
				    ar[i]=temp;

		}

	printf("\nThe Input was {6,7,8,9,0} the output is {");
	out_ar();
    printf("}\n");
}

void out_ar()
{
	for (i=0;i<=size-1;i++)
	{
		printf("%d,",ar[i]);

	}

}
