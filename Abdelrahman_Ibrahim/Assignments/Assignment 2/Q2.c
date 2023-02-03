#include<stdio.h>

int main()

{
  char c;
   int a, b, res;

    printf("Enter [number 1] [+ - * /] [number 2]\n");

    scanf("%d %c %d", &a, &c, &b);

  
  switch(c)
  {
    case '+': res=a+b;
    break;

    case '-': res=a-b;
    break;

    case '*': res=a*b;
    break;

    case '/': res=a/b;
    break;
	
    default: printf ("n Invalid entry");
  }
  printf("%d %c %d = %d", a, c , b, res);

  return 0;
}