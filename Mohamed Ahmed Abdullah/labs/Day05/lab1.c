#include <stdio.h>


void printInReverse(int array1[], int size);

int main(){
    int array[10];
	int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }   
    printInReverse(array,size);
}

void printInReverse(int array1[], int size){
    
    printf("%p \n", array1);

    printf("The values in reversed order: \n");
    for (int i = size-1; i >= 0; i--)
    {
        printf("%d \n", array1[i]);
    }
}