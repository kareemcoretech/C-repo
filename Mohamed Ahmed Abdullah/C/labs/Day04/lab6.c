/*
- Author: Mohamed Ahmed Abdullah
- Version : 1.0
- Date: 13 12 2022 

- Description of task: Lab(5) 
	Write a C act as simple calculator
*/

#include <stdio.h>
#include "labs.h"

void main(void){
	int operationID;
	printf("Enter operation id: ");
	scanf("%d", &operationID);

	int num1 = 0;
	int num2 = 0;

	if ( (operationID == 7) || (operationID == 10) || (operationID == 11))
	{
		printf("Enter number: ");
		scanf("%d", &num1);
	}else{
		printf("Enter number 1: ");
		scanf("%d", &num1);

		printf("Enter number 2: ");
		scanf("%d", &num2);
	}
	
	int result = calculator(operationID, num1, num2);
	printf("Result = %d", result);
	return;
}