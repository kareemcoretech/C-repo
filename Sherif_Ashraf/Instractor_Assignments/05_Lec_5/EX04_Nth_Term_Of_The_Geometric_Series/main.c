/* 
 
Author : "Sherif_Ashraf".

Version : "v-1.0".

Program : " computes the nth term of the geometric series: 1, 3, 9, 27, …".

*/
#include<stdio.h>
void main(void)
{
	int counter=0,i=1;

	//loop to print i*3 with increment i=i*3 and stop when counter reach 10 

	while(counter<10)
	{
		printf("%d \t",i*3);
		i*=3;
		counter++;
	}
}
