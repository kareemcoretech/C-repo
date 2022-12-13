#include <stdio.h>

void PrintMyName(){
    printf("Mohamed Ahmed Abdullah");
}

int factorial(int n){
    if (n == 0)
    {
        return 1;
    }else
    {
        return n*factorial(n-1);
    }
}

int maxNumber(int n1, int n2,int n3,int n4){
    int max = n1;
    if (n1 >= n2 && n1 >= n3 && n1 >= n4)
    {
        max = n1;
    }else if (n2 >= n1 && n2 >= n3 && n2 >= n4)
    {
        max = n2;
    }else if (n3 >= n1 && n3 >= n2 && n3 >= n4)
    {
        max = n3;
    }else if (n4 >= n1 && n4 >= n2 && n4 >= n3)
    {
        max = n4;
    }
    
    return max;
}

int minNumber(int n1, int n2,int n3,int n4){
    int min = n1;
    if (n1 <= n2 && n1 <= n3 && n1 <= n4)
    {
        min = n1;
    }else if (n2 <= n1 && n2 <= n3 && n2 <= n4)
    {
        min = n2;
    }else if (n3 <= n1 && n3 <= n2 && n3 <= n4)
    {
        min = n3;
    }else if (n4 <= n1 && n4 <= n2 && n4 <= n3)
    {
        min = n4;
    }
    
    return min;
}

int calculator(int operationID, int num1, int num2){
    int result;
    
    switch (operationID)
    {
    case 1:
        result = num1 + num2;
        break;

    case 2:
        result = num1 - num2;
        break;
    
    case 3:
        result = num1 * num2;
        break;
    
    case 4:
        result = num1 / num2;
        break;
    
    case 5:
        result = num1 & num2;
        break;
    
    case 6:
        result = num1 | num2;
        break;
    
    case 7:
        result = !num1;
        break;
    
    case 8:
        result = num1 ^ num2;
        break;
    
    case 9:
        result = num1 % num2;
        break;
    
    case 10:
        result = ++num1;
        break;
    
    case 11:
        result = --num1;
        break;
    }

    return result;
}
