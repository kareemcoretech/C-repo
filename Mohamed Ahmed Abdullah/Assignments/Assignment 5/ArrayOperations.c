#include <stdio.h>

// (1)
int total(int array[], int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }
    return total;
}

// (2)
int firstOccurrenceSearch(int arr[], int size, int n){   
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}

// (3)
int lastOccurrenceSearch(int arr[], int size, int n){   
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            index = i;
        }
    }
    return index;
}

// (4)
void oddArithmeticSeries(int number){
    for (int i = 1; i <= 2*number; i+=2)
    {
        printf("%d ", i);
    }
}

// (5)
void geometricSeries(int number){
    int value = 1;
    int i = 0;
    while (i < number)
    {
        printf("%d ", value);
        value *= 3;
        i++;
    }
}

// (6)
int fibonacciSeriesWhile(int number){
    int value1 = 1;
    int value2 = 1;
    int fabNumber = -1;

    int i = 0;
    while (i < number-2)
    {   
        fabNumber = value1+value2;
        value1 = value2;
        value2 = fabNumber;
        i++;
    }
    return fabNumber;
}

int fibonacciSeriesRec(int number){
    int result;
    if (number <=1)
    {
        return number;
    }
    return fibonacciSeriesRec(number-1) + fibonacciSeriesRec(number-2);
}


// (8)
int * reverseArray(int arr[], int size){
    int temp;
    int count = size / 2;
    for (int i = 0; i < count; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }

    return arr;
}