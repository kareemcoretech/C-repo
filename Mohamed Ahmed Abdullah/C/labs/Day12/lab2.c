#include <stdio.h>
#include "STD_TYPES.h" // Relative path 

int sum();

int main(void){
    
    printf("%d",sum());
	return 0;
}

int sum(){
    int Number;
    scanf("%d",&Number);
    if (Number != 0)
    {
        return Number + sum();
    }else{
        return Number;
    }
}