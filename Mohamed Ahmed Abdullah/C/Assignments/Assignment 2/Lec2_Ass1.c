#include <math.h>
#include <stdio.h>

int main(){
		
	int number;
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
    int squareRoot = sqrt(number);

	if (number >= 0)
    {
        if(squareRoot*squareRoot == number){
            printf("The number is a prefect square");
        }else{
            printf("The number is not a prefect square");
        }
    }else{
        printf("The number is negative.");
    }
    
	
	return 0;
}