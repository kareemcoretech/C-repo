void swap(int *x, int *y){
	int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int* arr, int size){
    int is_sorted = 0;
    int i = size;
    while (i>1 && !is_sorted)
    {
        is_sorted = 1;
        for (int j = 0; j < i-1; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                is_sorted = 0;
            }
        }
        i--;
    }
}

void selection_sort(int* arr, int size){
    for (int i = 0; i < size; i++)
    {
        int smallest = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j]<arr[smallest])
            {
                smallest = j;
            }
        }
        if (i != smallest)
        {
            swap(&arr[i], &arr[smallest]);
        }
    }
}