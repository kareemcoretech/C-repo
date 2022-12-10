/*
if synatx 

if (conditon){
	// code 
}

if - else if synatax

if (condition 1){
	
	// code 
	
}
else if(conditon 2){
	
	// code 
	
}
else if(conditon 3){
	
	// code 
	
}

if - else synatax
if (conditon){
	// code 
}
else{
	// code 
}

or 

if (condition 1){
	
	// code 
	
}
else if(conditon 2){
	
	// code 
	
}
else{
	
	// code 
	
}
*/

#include <stdio.h>

int main(){
	int x;
	printf("Enter X value: ");
	scanf("%d", &x);
	if (x == 10){
		printf("X is equal to 10");
	}
	else if (x > 10){
		printf("X is higher than 10 with value %d", x);
	}
	else if(x < 10){
		printf("X is lower than 10 with value %d", x);
	}
}


