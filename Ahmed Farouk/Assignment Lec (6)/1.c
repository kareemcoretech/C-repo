/*Assignment Lec (6)
(1) Write a function which, given a string, return TRUE if all
characters are distinct and FALSE if any character is repeated*/

#include <stdio.h>
void check (char *x,char *ptr,char *ptrr);

void main ()
{
    char i;
    char tru=0,fals=0;

    char str[5];
    printf("Please Enter 5 letters : \n");
    for (i=0;i<5;i++)
    {
    scanf("%c",&str[i]);
    printf("\t\t%c ",str[i]);
    }
    check(str,&tru,&fals);
        printf("\n\n\t\t -%d ---%d\n",tru,fals);

/*----------------*/
 if(tru==1&fals==0)
    {
        printf("\nTRUE\n");

    }
    else if(fals==1)
    {
        printf("\nFALSE\n");
    }
    /*------------------*/
}
void check (char *x,char *ptr,char *ptrr)
{
    char i;
    for (i=0;i<5;i++)
    {
        if(x[i]==x[i+1])
        {

            *ptr=0;
            *ptrr=1;

        }
       else
        {
           *ptr=1;

        }
    }




}
