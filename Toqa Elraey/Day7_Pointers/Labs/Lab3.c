#include <stdio.h>
void SUM(int *ptr1, int *ptr2, int *sum);
void SUB(int *ptr1, int *ptr2, int *sub);

int main(){
	int x;
	printf("Please enter the first number: ");
	scanf("%d", &x);
	//int *ptr1 = &x;
	
	int y;
	printf("Please enter the second number: ");
	scanf("%d", &y);
	//int *ptr2 = &y;
	
	int z, k;
	//int *sum = &z;
	//int *sub = &k;
	
	SUM(&x, &y, &z);
	SUB(&x, &y, &k);
	
	printf("Their sum is: %d\n", z);
	printf("Their subtract is: %d", k);
}

void SUM(int *ptr1, int *ptr2, int *sum){
	*sum = *ptr1 + *ptr2;
}

void SUB(int *ptr1, int *ptr2, int *sub){
	(*sub) = (*ptr1) - (*ptr2);
}