#include <stdio.h>



int main(){
	int IDs[5] = {1245, 6544, 9835, 4521, 7742};
	int passwords[5] = {1111, 2222, 3333, 4444, 5555};
	int user_id;
	int user_pass;
	int flag = 0;
	
	printf("Enter Your ID: ");
	scanf("%d", &user_id);
	
	for (int i = 0; i < 5; i++){
		if (user_id == IDs[i]){
			flag = 1;
			printf("Enter Your Password: ");
			scanf("%d", &user_pass);
			
			if (passwords[i] == user_pass){
				printf("You're Logged in with ID: %d", user_id);
			}
			else{
				printf("Incorrect Password");
			}
			break;
		}
	}
	
	if (flag == 0){
		printf("Incorrect ID");
	}
	
}