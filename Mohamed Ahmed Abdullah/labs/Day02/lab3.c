#include <stdio.h>

int main(){
	int rating;
	printf("Please Enter number: ");
	scanf("%d",&rating);
	
	printf("Your rating is ");
	
	if((100 >= rating) && (rating >= 85)){
		printf("Excellent");
	}else if((85 > rating) && (rating >= 75)){
		printf("Very Good");
	}else if((75 > rating) && (rating >= 65)){
		printf("Good");
	}else if((65 > rating) && (rating >= 50)){
		printf("Normal");
	}else if((50 > rating) && (rating >= 0)){
		printf("Failed");
	}else{
		printf("Error");
	}
	
	return 0;
}