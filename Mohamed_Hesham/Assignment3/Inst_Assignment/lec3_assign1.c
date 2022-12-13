#include <stdio.h>

int main(){
	int val;
	printf("Please Enter a Positive Number: ");
	scanf("%d", &val);
	int flag = 0;
	
	for (int i = 2; i < val; i++){
		if (val % i == 0 && val != i){
			printf("It's not a Prime Number");
			flag = 1;
			break;
		}
	}
	
	if (flag == 0){
		printf("It's a Prime Number");
	}
}