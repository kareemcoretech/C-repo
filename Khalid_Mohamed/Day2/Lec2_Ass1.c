#include <stdio.h>
#include <math.h>
 
int main()
{
    int num;
    int inumber;
    float fnumber;
  
    printf("Enter an integer number: ");
    scanf("%d",&num);
  
    fnumber=sqrt((double)num);
    inumber=fnumber;
 
    if (inumber==fnumber){
        printf("%d is a perfect square.",num);
    
	}	
	 else  
	 {
        printf("%d is not a perfect square.",num);
      
	 }
}