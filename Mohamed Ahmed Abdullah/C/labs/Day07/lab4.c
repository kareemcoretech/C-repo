#include <stdio.h>

void main(void){
    int arr[5];
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Please enter array values: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int *ptrToArr = arr;

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    
    printf("sum = %d", sum);
}
