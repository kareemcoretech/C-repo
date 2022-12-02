#include <stdio.h>

int main(){
	int Tanswer = 12;
	int Inanswer;
	printf("Enter the answer of 3 x 4: ");
	scanf("%d", &Inanswer);
	while (Inanswer != Tanswer){
		printf("Not Correct. Please Try Again: ");
		scanf("%d", &Inanswer);
	}
	printf("Thank You");
}