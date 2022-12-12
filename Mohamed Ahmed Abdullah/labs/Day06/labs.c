#include <stdio.h>

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