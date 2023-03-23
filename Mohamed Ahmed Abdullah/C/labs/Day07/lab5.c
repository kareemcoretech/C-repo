#include <stdio.h>

int scalerMultiplication(int *arr1, int *arr2, int size);

void main(void){
    int arr1[5];
    int arr2[5];
    int size = sizeof(arr1)/sizeof(arr1[0]);

    printf("Please enter array 1 values: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Please enter array 2 values: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int result = scalerMultiplication(arr1, arr2, size);
    printf("result = %d", result);    
}

int scalerMultiplication(int *arr1, int *arr2, int size){
    int res = 0;
    for (int i = 0; i < size; i++)
    {
        res += arr1[i] * arr2[i];
    }
    return res;
}