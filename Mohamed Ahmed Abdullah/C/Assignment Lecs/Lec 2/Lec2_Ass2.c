#include <stdio.h>

int main(){
	int id[] = {1190388,1190389,1190390};
	int password = 1140345493;
	
	int validId = 0;
	
	int userId;
	int userPassword;
	
	printf("Please Enter your id: ");
	scanf("%d",&userId);
	
	for(int i=0; i<3; i++){
		if(id[i] == userId){
			validId = 1;
			break;
		}else{
			validId = 0;
		}
	}
	
	if(validId == 1){
		printf("Please Enter your password: ");
		scanf("%d",&userPassword);
		
		if(userPassword != password){
			printf("Incorrect Password");
		}else{
			printf("Hello World");
		}
	}else{
		printf("Incorrect ID");
	}
	
	return 0;
}