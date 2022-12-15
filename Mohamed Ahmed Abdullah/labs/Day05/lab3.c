#include <stdio.h>

void bubble_sorting(int array[], int size);
void Swap(int x, int y);

int main(){
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("The values after sorting are: \n");
    bubble_sorting(array, size); 
}

void bubble_sorting(int array[], int size){
    int temp;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-1-i; j++)
        {
            if (array[j] > array[j+1])
            {
                    int temp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void Swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}