#include <stdio.h>

int main(){
	int grade;
	
	printf("Please Enter your Grade: ");
	scanf("%d", &grade);
	
	if (grade >= 0 && grade < 50){
		printf("Unfortnately, Your Degree is Failed");
	}
	else if (grade >= 50 && grade < 65){
		printf("Your Degree is Normal");
	}
	else if (grade >= 50 && grade < 65){
		printf("Your Degree is Normal");
	}
	else if (grade >= 65 && grade < 75){
		printf("Your Degree is Good");
	}
	else if (grade >= 75 && grade < 85){
		printf("Your Degree is Very Good");
	}
	else if (grade >= 85){
		printf("Your Degree is Excellent");
	}
	else{
		printf("Degree is Wrong");
	}
	
	
}