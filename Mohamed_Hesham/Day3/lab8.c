#include <stdio.h>



int main(){
	int Ahmed_ID = 1234;
	int Ahmed_pass = 7788;
	int Amr_ID = 5678;
	int Amr_pass = 5566;
	int Wael_ID = 9870;
	int Wael_pass = 1122;
	int user_id;
	int user_pass;
	int flag_id = 0;
	int flag_pass = 0;
	
	printf("Enter Your ID: ");
	scanf("%d", &user_id);
	
	while (user_id != Ahmed_ID && user_id != Amr_ID && user_id != Wael_ID){
		printf("ID is Wrong, Enter Your ID: ");
		scanf("%d", &user_id);
	}
	
	switch(user_id)
	{
		case 1234:
			flag_id = 1;
			for (int i = 0; i < 3; i++){
				printf("Enter Your Password: ");
				scanf("%d", &user_pass);
				if (user_pass == Ahmed_pass){
					printf("Welcome Ahmed, You've Logged In");
					flag_pass = 1;
					break;
				}
			}
			if (flag_pass == 0){
				printf("Sorry, No more trials");
			}
			break;
			
		case 5678:
			flag_id = 1;
			for (int i = 0; i < 3; i++){
				printf("Enter Your Password: ");
				scanf("%d", &user_pass);
				if (user_pass == Amr_pass){
					printf("Welcome Amr, You've Logged In");
					flag_pass = 1;
					break;
				}
			}
			if (flag_pass == 0){
				printf("Sorry, No more trials");
			}
			break;
		
		case 9870:
			flag_id = 1;
			for (int i = 0; i < 3; i++){
				printf("Enter Your Password: ");
				scanf("%d", &user_pass);
				if (user_pass == Wael_pass){
					printf("Welcome Wael, You've Logged In");
					flag_pass = 1;
					break;
				}
			}
			if (flag_pass == 0){
				printf("Sorry, No more trials");
			}
			break;
			
		default:
			printf("Incorrect ID");
			break;
		
	}
	
	/*
	if (flag_id == 0){
		printf("Incorrect ID");
	}
	*/
	
}