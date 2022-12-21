/* 

Author 				:		"Sherif_Ashraf"

Date                :		"21-12-2022"

Version             :		"v-1.0"

Program Description :		"Given a string, create a new string made up of its last two
                             letters, reversed and separated by a space, the word is “bat”.
                             Return string contains ”t a”"

*/

#include<stdio.h>

void newString(char *arrptr1,char *arrptr2); // initialize function

void main(void)
{
    char arr1[100],arr2[100],*ptr1=arr1,*ptr2=arr2;

    printf("Enter String\n");
    scanf("%s",arr1); // scan string
    newString(arr1,arr2); // call function and pass address of array1 and array2

    printf("new string :%s",arr2); // print array two

}

void newString(char *arrptr1,char *arrptr2) // implemantation of function
{
    int counter=0; // counter to know the size of string

    for(int i=0;arrptr1[i]!='\0';i++) // loop until the end of string
    {
        counter++; // increment with one
    }

    arrptr2[0] = arrptr1[counter-1]; // assign last element of array1 in first element of array2
    arrptr2[1] = ' '; // assign space in second element of array2
    arrptr2[2] = arrptr1[counter-2]; // assign before last elemant in array1 in third element of array2
}