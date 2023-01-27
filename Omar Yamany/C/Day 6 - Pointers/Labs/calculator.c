#include<stdio.h>

int *calculator(int n1, int n2);
int size ; // 
void main()
{
	int n1,n2;
	printf("Enter first value: ");
	scanf("%d", &n1);
	printf("Enter second value: ");
	scanf("%d", &n2);
	int *ptr = calculator(n1,n2);
	printf("Sum\tSubt\tMultiply Division\n");
	for(int i=0;i<size;i++)
	{
		printf("%d\t", ptr[i]);
	}
}

int *calculator(int n1, int n2)
{
	static int array[4];
	size = sizeof(array)/sizeof(array[0]);
	array[0]=n1+n2;
	array[1]=n1-n2;
	array[2]=n1*n2;
	array[3]=n1/n2;
	return array;
}
