#include <stdio.h>

int main(){
	int temp;
    int heatingTime;

    printf("Enter the tempreture: ");
    scanf("%d",&temp);
    
    if (0 <= temp && temp <= 100)
    {
        if (0 <= temp && temp <= 30){
            heatingTime = 7;
        }else if (30 < temp && temp <= 60){
            heatingTime = 5;
        }else if (60 < temp && temp <= 90){
            heatingTime = 3;
        }else if (90 < temp && temp <= 100){
            heatingTime = 1;
        }
        printf("The heating time = %d mins",heatingTime);
    }else{
         printf("Invalid input");
    }
    
	return 0;
}