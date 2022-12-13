#include <stdio.h>
#include<math.h>

void Term ( int Array[],int number )
{
    int i,result;
 
	for ( i=0 ; i < number ; i++ ){
	Array[i]=pow(3,i);
	result=Array[i];
	}
	printf("the %d th term is :%d",number,result);
    
 	
}
