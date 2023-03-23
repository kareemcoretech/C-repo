#include <stdio.h>
#define int_size sizeof(int)*8

void main()
{
	int number, binary[int_size], index=int_size-1;
	printf("Enter a number: ");
	scanf("%d", &number);
	
	//saving every bit in an array (in reverse)
	for(int i=0;i<int_size;i++)
	{
		binary[index] = number & 1;
		index--;
		number >>= 1;
	}
	printf("Converted binary = ");
	//print array
	for(int i=0;i<int_size;i++)
	{
		printf("%d", binary[i]);
	}
}