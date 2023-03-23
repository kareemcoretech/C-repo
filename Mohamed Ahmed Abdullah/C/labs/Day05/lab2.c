#include <stdio.h>

void print_info(int array[], int size);

int main(){
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }
    print_info(array, size);   
}

void print_info(int array[], int size){

    int sumOfNumbers = 0;
    for (int i = 0; i < size; i++)
    {
        sumOfNumbers += array[i];
    }

    printf("%p \n", array);
    
	printf("Sum of array elements = %d \n", sumOfNumbers);
    printf("Average of array elements = %d", sumOfNumbers/size);
}
