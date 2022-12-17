/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Function Take Two Input Array And Size Then Return Total Of Elements Inside Array".

*/

#include<stdio.h>
#include"total.h"

void main(void)
{
	// intialize an array and add 10 element

	int res,size,arr[10]={1,2,3,4,5,6,7,8,9,10};

	// get size of array to use in loop

	size = sizeof(arr) / sizeof(arr[0]);

	// call total function and store the return value in res variable

	res=total(arr,size);

	// print the return variable
	
	printf("Sum Of Array = %d",res);
}
