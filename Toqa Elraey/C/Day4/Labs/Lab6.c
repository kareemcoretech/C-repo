#include <stdio.h>

int i;

void Add(void);
void Sub(void);
void Mult(void);
void Dev(void);
void And(void);
void OR(void);
void NOT(void);
void XOR(void);
void Reminder(void);
void Inc(void);
void Dec(void);


int main(){
	while(1){
		int op;
	    printf("Please Enter the Operation ID: ");
	    scanf("%d", &op);
	
	    printf("Please Enter the number of Operands: ");
	    scanf("%d", &i);
	
	    switch(op){
	    	case(1):
	    	Add();
		    break;
		
	    	case(2):
    		Sub();
    		break;
		
    		case(3):
    		Mult();
	    	break;
		
	    	case(4):
	    	Dev();
	    	break;
		
	    	case(5):
	    	And();
     		break;
		
    		case(6):
	    	OR();
	    	break;
		
	    	case(7):
	    	NOT();
	    	break;
		
	    	case(8):
	    	XOR();
	    	break;
		
	    	case(9):
	    	Reminder();
	    	break;
		
		    case(10):
	    	Inc();
	    	break;
		
    		case(11):
	    	Dec();
	    	break;
		
	    }
	}
}

void Add(void){
	int x, y, sum;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		sum = x + y;
		printf("Their Sum is: %d\n", sum);
	}
}

void Sub(void){
	int x, y, sub;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		sub = x - y;
		printf("Their Subtract is: %d\n", sub);
	}
}

void Mult(void){
	int x, y, mult;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		mult = x * y;
		printf("Their Multiply is: %d\n", mult);
	}
}

void Dev(void){
	float x, y, dev;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%f", &x);
		printf("Please enter the second number: ");
		scanf("%f", &y);
		
		dev = x / y;
		printf("Their Divide is: %f\n", dev);
	}
}

void And(void){
	int x, y, andding;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		andding = x & y;
		printf("Their ANDing is: %d\n", andding);
	}
}

void OR(void){
	int x, y, oring;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		oring = x | y;
		printf("Their ORing is: %d\n", oring);
	}
}

void NOT(void){
	int x, y;
	for(int j = 1; j <= i; j++){
		printf("Please enter the number: ");
		scanf("%d", &x);
		
		y = ~x;
		printf("Its NOT is: %d\n", y);
	}
}

void XOR(void){
	int x, y, xoring;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		xoring = x ^ y;
		printf("Their XOR is: %d\n", xoring);
	}
}

void Reminder(void){
	int x, y, rem;
	for(int j = 1; j <= i; j++){
		printf("Please enter the first number: ");
		scanf("%d", &x);
		printf("Please enter the second number: ");
		scanf("%d", &y);
		
		rem = x % y;
		printf("Their Reminder is: %d\n", rem);
	}
}

void Inc(void){
	int x, y;
	for(int j = 1; j <= i; j++){
		printf("Please enter a number: ");
		scanf("%d", &x);
		
		y = ++x;
		printf("Its Increment is: %d\n", y);
	}
}

void Dec(void){
	int x, y;
	for(int j = 1; j <= i; j++){
		printf("Please enter a number: ");
		scanf("%d", &x);
		
		y = --x;
		printf("Its Decrement is: %d\n", y);
	}
}