#include <stdio.h>
int powerfnc(int x);
void main ()
{
	int x,z;

    printf("Please Enter a number : ");
    scanf("%d",&x);

    z=powerfnc(x);

    printf("\nThe result is %d\n",z);





}
int powerfnc (int x)
{  int result;

 if (x%2==0)
 {
     result = 1;
 }
 else if (x%3==0)
 {
     result =0;
 }
 else
 {
     result=-1;
 }








return result;
}
