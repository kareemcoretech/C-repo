/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"C function to copy all elements of an array into another array using 
                             pointers. The two arrays have the same length and types"

*/



#include<stdio.h>

void copyArray(int *arrptr1,int *arrptr2,int size);

void main(void)
{
    int arr1[10],arr2[10],*ptr1=arr1,*ptr2=arr2;

    int size = sizeof(arr1) / sizeof(arr1[0]);// get the size of one array

    for(int i=0;i<size;i++) // loop until size of array and scan elements
    {
        printf("enter number %d: \n",i+1);
        scanf("%d",&arr1[i]);
    }

    copyArray(ptr1,ptr2,size); // call function and pass address of array and its size

    printf("Second Array After Copy \n");
    for(int i=0;i<size;i++) // loop until size of array and print elements of new array
    {
        printf("%d \t",arr2[i]);
    }

}


void copyArray(int *arrptr1,int *arrptr2,int size) // implemntation of function
{
    for(int i=0;i<size;i++) // loop until the size of array
    {
        arrptr2[i] = arrptr1[i]; // assign value of arrptr1 in arrptr2
    }
}