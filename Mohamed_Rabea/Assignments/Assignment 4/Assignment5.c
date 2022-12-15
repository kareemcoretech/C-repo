/*Write a C function that returns 1 if the input number is a 
power of 2 and return 0 if the input number is power of 3, 
otherwise it shall return -1*/
# include <stdio.h>
#include "check.c"

int main()
{ 
int num1,result; 
 result=check (num1);
 
if(result==1){
printf("result:%d\t power of 2 ",result);
}
else if(result==0){
printf("result:%d\t power of 3",result);
}
else if(result==-1){
	printf("result:%d ",result); 
}

}

