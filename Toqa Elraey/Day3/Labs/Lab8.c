#include <stdio.h>

int main(){
	int upass;
	int uid;
	int count = 1;
	printf("Please Enter your ID: ");
	scanf("%d", &uid);
	
	switch(uid){
		case(1234):
		printf("Please Enter your Password: ");
		scanf("%d", &upass);
		if(upass == 7788){
			printf("Welcome Ahmed");
		}
		else{
			while(upass != 7788){
				printf("Wrong Password, try again: ");
				scanf("%d", &upass);
				if(count == 2 && upass != 7788){
					printf("Incorrect Password 3 times, no more tries.");
					break;
				}
				count++;
			}
			if(upass == 7788){
				printf("Welcome Ahmed");
			}
		}
		break;
		
		case(5678):
		printf("Please Enter your Password: ");
		scanf("%d", &upass);
		if(upass == 5566){
			printf("Welcome Amr");
		}
		else{
			while(upass != 5566){
				printf("Wrong Password, try again: ");
				scanf("%d", &upass);
				if(count == 2 && upass != 5566){
					printf("Incorrect Password 3 times, no more tries.");
					break;
				}
				count++;
			}
			if(upass == 5566){
				printf("Welcome Amr");
			}
		}
		break;
		
		case(9870):
		printf("Please Enter your Password: ");
		scanf("%d", &upass);
		if(upass == 1122){
			printf("Welcome Wael");
		}
		else{
			while(upass != 1122){
				printf("Wrong Password, try again: ");
				scanf("%d", &upass);
				if(count == 2 && upass != 1122){
					printf("Incorrect Password 3 times, no more tries.");
					break;
				}
				count++;
			}
			if(upass == 1122){
				printf("Welcome Wael");
			}
		}
		break;
		
		default:
		printf("Wrong ID");
		break;
	}
	
}