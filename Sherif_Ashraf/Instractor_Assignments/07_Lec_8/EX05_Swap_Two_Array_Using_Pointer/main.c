/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"Write a C function to swap the contents of two arrays with
                            the same length using pointers"

*/



#include<stdio.h>

void swapArray(int *arrptr1,int *arrptr2,int size); // initialize function

void main(void)
{
    int arr1[10],arr2[10],*ptr1=arr1,*ptr2=arr2;

    int size = sizeof(arr1) / sizeof(arr1[0]);// get the size of one array

    printf("Array 1 \n");
    for(int i=0;i<size;i++) // loop until size of array1 and scan elements
    {
        printf("enter number %d: \n",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Array 2 \n");
    for(int i=0;i<size;i++) // loop until size of array2 and scan elements
    {
        printf("enter number %d: \n",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("Array 1 Before Swaping\n");
    for(int i=0;i<size;i++) // loop until size of array1 and print elements array
    {
        printf("%d \t",arr1[i]);
    }
    printf("\n");

    printf("Array 2 Before Swaping\n");
    for(int i=0;i<size;i++) // loop until size of array2 and print elements array
    {
        printf("%d \t",arr2[i]);
    }
    printf("\n");

    swapArray(ptr1,ptr2,size); // call function and pass address of array1 and array2 and size

    printf("Array 1 After Swaping\n");
    for(int i=0;i<size;i++) // loop until size of array1 and print elements of new array after swapping
    {
        printf("%d \t",arr1[i]);
    }
    printf("\n");

    printf("Array 2 After Swaping\n");
    for(int i=0;i<size;i++) // loop until size of array2 and print elements of new array after swapping
    {
        printf("%d \t",arr2[i]);
    }
    printf("\n");

}


void swapArray(int *arrptr1,int *arrptr2,int size) // implemntation of function
{   
    for(int i=0;i<size;i++) // loop until the size of array
    {
        // swaping 
        arrptr1[i] = arrptr1[i] + arrptr2[i];
        arrptr2[i] = arrptr1[i] - arrptr2[i];
        arrptr1[i] = arrptr1[i] - arrptr2[i];
    }
}