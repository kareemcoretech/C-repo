/*Author : "Mohamed Mohamed Rabea ".

Version : "1.0".

program:   Write a C function to swap the contents of two arrays with
           the same length*/

#include <stdio.h>

#include "Swap.h"
int main()
{
	int Arr_1[5]={1,5,2,3,4};
	int Arr_2[5]={90,88,45,75,55};
	int size=sizeof Arr_1/sizeof Arr_1[0];
	int temp;
	Swap( Arr_1,Arr_2,size);

}

