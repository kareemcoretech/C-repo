#include <stdio.h>
void SUM(int *ptr1, int *ptr2, int *sum);

int main(){
	int x;
	printf("Please enter the first number: ");
	scanf("%d", &x);
	int *ptr1 = &x;
	
	int y;
	printf("Please enter the second number: ");
	scanf("%d", &y);
	int *ptr2 = &y;
	
	int z;
	int *sum = &z;
	
	SUM(ptr1, ptr2, sum);
	
	printf("Their sum is: %d", *sum);
}

void SUM(int *ptr1, int *ptr2, int *sum){
	*sum = *ptr1 + *ptr2;
}