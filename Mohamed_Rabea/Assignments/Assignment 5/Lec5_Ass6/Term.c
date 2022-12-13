#include <stdio.h>
void Term ( int Array[],int number )
{
    int i=0,temp1, temp2,result;
	Array[i]=1;
	Array[i+1]=1;
	Array[i+2]=3;
     
	for ( (i)=0 ; i < number ; i++ )
	{
    temp2=Array[i];
	temp1=Array[i+1];
	Array[i+2]=temp1+temp2;
	
	result=Array[i];
	printf("the %d th term is :%d\n",i,result);
	}
	
    
 	
}

