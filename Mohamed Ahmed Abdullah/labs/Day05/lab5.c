#include <stdio.h>

int binarySearch(int array[], int size, int number);

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

int binarySearch(int array[], int size, int number){
    int low = 0;
    int high = size - 1; 
    int med;

    while (low <= high)
    {
        med = (low + high) / 2;
        if (number == array[med])
        {
            return med;
        }else if (number > array[med])
        {
            low = med + 1;
        }else if (number < array[med])
        {
            high = med - 1;
        }
    }

    return -1; 
} 
