#include <stdio.h>

int main(){
	float Number[10];
	float sum = 0;
	float av;
	int SIZE = sizeof(Number)/sizeof(Number[0]);
	
	for(int i = 0; i < SIZE; i++){
		printf("Please enter element number %d: ", i+1);
		scanf("%f", &Number[i]);
	}
	
	for(int i = 0; i < SIZE; i++){
		sum = sum + Number[i];
	}
	
	av = sum / SIZE;
	printf("The sum is: %f\n", sum);
	printf("The average is: %f\n", av);
}