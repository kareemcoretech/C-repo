#include <stdio.h>

// 1
int cube(int n){
    return n * n * n;
}

// 2
int calculator(char operation, int n1, int n2){
    int result;
    switch (operation)
    {
    case '+':
        result = n1 + n2;
        break;
    
    case '-':
        result = n1 - n2;
        break;
    
    case '*':
        result = n1 * n2;
        break;

    case '/':
        result = n1 / n2;
        break;

    default:
        return -999999;
    }

    return result;
}

// 3
int isPrime(int n){
    int c = 0;
    for (int i = n; i >= 1; i--)
    {
        if (n % i == 0){
            c++;
        }
    }

    if (c == 2){
        return 1;
    }else{
        return 0;
    }
}

void printPrimes(int a, int b){
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

// 4
int power(int n, int power){
   int result = 1;
   for (int i = 0; i < power; i++)
   {
      result *= n;
   }
   return result;
}

int countHoles(int number){
    int holesCount = 0;

    int nCopy = number;
    int numberOfDigits = 0;
    while(nCopy != 0){
        nCopy = nCopy / 10;
        numberOfDigits++;
    }

    int digit;
    int i = numberOfDigits - 1;
    while(number != 0){
        digit = number / power(10,i);
        number -= digit * power(10,i);
        switch (digit){
            case 0:
                holesCount++;
                break;
            case 4:
                holesCount++;
                break;
            case 6:
                holesCount++;
                break;
            case 8:
                holesCount += 2;
                break;
            case 9:
                holesCount++;
                break;        
            default:
                break;
        }
        i--;
    }    

    return holesCount;
}

// 5
int powerOfWhat(int n){
    if (n == 0){
        return -1;
    }else if ((n & (~(n - 1))) == n){
        return 1;
    }else if(1162261467 % n == 0)
    {
        return 0;
    }
    
    return -1;   
}