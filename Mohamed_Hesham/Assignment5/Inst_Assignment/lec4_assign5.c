#include <stdio.h>
#include <math.h>

int detectRoot(int number){
	float cubresult = cbrt(number);
	int cubreint = ceil(cubresult);
	
	float sqresult = sqrt(number);
	int sqreint = ceil(sqresult);
	
	if (sqresult - sqreint == 0){
		return 0;
	}
	
	else if(cubresult - cubreint == 0){
		return -1;
	}
}

int main(){
	int input;
	printf("Please Enter your Number: ");
	scanf("%d", &input);
	int output = detectRoot(input);
	if (output == 0){
		printf("This Number is a power of 2");
	}
	else if(output == -1){
		printf("This Number is a power of 3");
	}
	
	
}

