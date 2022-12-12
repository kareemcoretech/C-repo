/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : "Function Should Return Last Occurrence Of Number In An Array".

*/

#include<stdio.h>
#include"func.h"

void main(void)
{
	int res,target,size,arr[6]={1,2,3,4,4,4};
	target = 4;
	// get number of element in array to use in end of loops
	size = sizeof(arr) / sizeof(arr[0]);

	//calling function and store the value in res variable

	res = last_occurrence(arr,size,target);

	printf("Postion of element = %d",res);
}