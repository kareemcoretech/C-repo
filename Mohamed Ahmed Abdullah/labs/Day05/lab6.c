#include <stdio.h>

void min_max(int array[], int size);

int main(){
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }

    min_max(array, size); 
}

void min_max(int array[], int size){
    int min = 100000; int max = -1000000;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }            

        if (array[i] > max)
        {
            max = array[i];
        }
    }

    printf("min = %d \n max = %d", min , max);
}