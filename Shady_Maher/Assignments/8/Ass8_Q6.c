#include <stdio.h>
#define Max 100 //maximum size

int main()
{
	int sourceArr[Max]={0};
    int destArr[Max]={0};

    int size;
	
	printf("Enter size of array: ");
	scanf("%d", &size);
	
	printf("Enter sourceArr \n");
	for (int i=0 ; i<size ; i++)
		scanf("%d", &sourceArr[i]);
		
	
	printf("Enter destArr \n");
	for (int i=0 ; i<size ; i++)
		scanf("%d", &destArr[i]);
	
	int *ptr1 = sourceArr;
	int *ptr2 = destArr;
	
	//swap
	
	int temp,i;
	
	for (i = 0; i < size; i++) 
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2++;
		
	}
	
	
	
	printf("sourceArr After swap \n");
	for (int i=0 ; i<size ; i++)
		printf("%d\n", sourceArr[i]);
		
	
	printf("\ndestArr After swap \n");
	for (int i=0 ; i<size ; i++)
		printf("%d\n", destArr[i]);
	
}