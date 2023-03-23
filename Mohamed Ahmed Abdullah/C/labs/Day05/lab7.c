#include <stdio.h>

void calcClassStat(int class[], int size);

int main(){
    int class1[10] = {40, 65, 53, 75,  60, 50,  9, 80, 96, 90};
    int size1 = sizeof(class1) / sizeof(class1[0]);

    int class2[10] = { 0,  80, 47, 75, 100, 55,  6, 30, 96, 66};
    int size2 = sizeof(class2) / sizeof(class2[0]);

    int class3[10] = {60, 60, 32, 25,  90, 98, 10, 50, 36, 74};
    int size3 = sizeof(class3) / sizeof(class3[0]);

    printf("\nClass 1: \n");
    calcClassStat(class1, size1);

    printf("\nClass 2: \n");
    calcClassStat(class2, size2);

    printf("\nClass 3: \n");
    calcClassStat(class3, size3);
}

void calcClassStat(int class[], int size){
    int passed = 0;
    int failed = 0;

    int max = 0;
    int min = 100;
    
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += class[i];

        if (class[i] >= 50)
        {
            passed++;
        }else{
            failed++;
        }

        if (max < class[i])
        {
            max = class[i];
        }

        if (min > class[i])
        {
            min = class[i];
        }
    }

    float avg = sum / 10;

    printf("Number of passed students = %d \n", passed);
    printf("Number of failed students = %d \n", failed);
    
    printf("Highest = %d \n", max);
    printf("Lowest = %d \n", min);

    printf("Average = %f \n", avg);
}
