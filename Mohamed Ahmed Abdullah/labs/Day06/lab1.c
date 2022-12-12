#include <stdio.h>
#include "labs.h"

int main(void){
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }

    int number;
    printf("Please enter number to seach: ", number);
    scanf("%d", &number);
    
    int index = binarySearch(array, size, number);

    if (index != -1)
    {
        printf("index = %d \n", index);
    }else
    {
        printf("Not Found");
    }
}

