#include<stdio.h>
int main (){
	int num1 ;
	int num2 ;
	char Z ;
	int result ;
	printf ("Please enter First number\n");
	scanf  ( " %d",&num1);
	printf ("Please enter Second number\n");
	scanf  ( " %d",&num2);
	printf ("Please Choose the operation\n");
	scanf  ( " %c",&Z);
	switch (Z){
		case '+' :
		result = (num1 + num2) ;
		printf("%d\n",result);
		break ;
		
		case '-':
		result = (num1 - num2) ;
		printf("%d\n",result);
		break ;
		
		case '/':
		result = (num1 / num2) ;
		printf("%d\n",result);
		break ;
		
		case '*':
		result = (num1 * num2) ;
		printf("%d\n",result);
		break ;
		
		default :
		printf ("Error\n");
		break ;
		
	}

   
}