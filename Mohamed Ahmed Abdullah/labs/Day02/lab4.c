#include <stdio.h>

int main(){
	int ID;
	
	printf("Please Enter Your ID: ");
	scanf("%d", &ID);
	
	switch(ID){
		case 1234:
			printf("Ahmed");
			break;
		case 5678:
			printf("Ahmed");
			break;
		case 1145:
			printf("Mennah");
			break;
		default:
			printf("Wrong ID");
			break;
	}
	return 0;
}