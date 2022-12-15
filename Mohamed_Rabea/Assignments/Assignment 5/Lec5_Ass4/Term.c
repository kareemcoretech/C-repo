#include <stdio.h>
void Term ( int Array[],int number )
{
    int result;
	
	for (int i=0 ; i < number ; i++ )
	{   
        Array[i] = 2*i+1;
		result = Array[i];
		
	    }
	printf("the %d th term is :%d",number,result);
    
 	
}


