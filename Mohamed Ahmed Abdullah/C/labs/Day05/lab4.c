#include <stdio.h>

void linear_search(int array[], int size, int n);

int main(){
    int n;
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {	
		printf("Please enter number %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Please enter number to search: ");
    scanf("%d", &n);

    linear_search(array, size, n); 
}

void linear_search(int array[], int size, int n){
    int occ = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == n)
        {
            occ++;
        }            
    }

    if (occ > 0)
    {
        printf("Value exists %d times", occ);
    }else{
        printf("Value not exist", occ);
    }   
}