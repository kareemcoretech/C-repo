#include <stdio.h>
#include <string.h>

int CountHoles(char number[], int size){
	
	int total = 0;
	for (int i = 0; i < size; i++){
		if (number[i] == 1 || number[i] == 2 || number[i] == 3 || number[i] == 5 || number[i] == 7){
			continue;
		}
		else if (number[i] == 0 || number[i] == 4 || number[i] == 6 || number[i] == 9){
			total += 1;
		}
		else if (number[i] == 8){
			total += 2;
		}
	}
	
}

int main(){
	char input[3];
	printf("Please Enter your Number: ");
	scanf("%s", &input);
	int length = strlen(input);
	int output = CountHoles(input, length);

	printf("Total Number of Holes is: %d", output);
	
	
}

