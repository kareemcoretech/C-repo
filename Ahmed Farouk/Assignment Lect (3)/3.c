#include <stdio.h>
void main() {
    int a,b,c=1;
    printf("Please Enter The Number : ");
    scanf("%d",&a);
    printf("Please Enter The Power : ");
    scanf("%d",&b);
    while (b!=0)
    {
       c=c*a;
       b--;
       printf("\nThis to check the calculations : %d\n",c);
    }
    printf("\nThe Result : %d\n",c);

}
