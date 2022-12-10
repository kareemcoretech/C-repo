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
	int flag = 0;
	
	printf("Enter Your ID: ");
	scanf("%d", &user_id);
	
	while (user_id != Ahmed_ID && user_id != Amr_ID && user_id != Wael_ID){
		printf("ID is Wrong, Enter Your ID: ");
		scanf("%d", &user_id);
	}
	
	switch(user_id)
	{
		case 1234:
			for (int i = 0; i < 3; i++){
				printf("Enter Your Password: ");
				scanf("%d", &user_pass);
				if (user_pass == Ahmed_pass){
					printf("Welcome Ahmed, You've Logged In");
					break;
				}
			}
		case 5678:
			for (int i = 0; i < 3; i++){
				printf("Enter Your Password: ");
				scanf("%d", &user_pass);
				if (user_pass == Amr_pass){
					printf("Welcome Amr, You've Logged In");
					break;
				}
			}
			printf("Sorry, No more trials");
		
		case 9870:
			for (int i = 0; i < 3; i++){
				printf("Enter Your Password: ");
				scanf("%d", &user_pass);
				if (user_pass == Wael_pass){
					printf("Welcome Wael, You've Logged In");
					break;
				}
			}
			printf("Sorry, No more trials");
		
	}
	
	
	if (flag == 0){
		printf("Incorrect ID");
	}
	
}