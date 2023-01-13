/*Auth : MOHAMED MOHAMED RABEA 
VER : (V.0.1)
program (4): C Function to store information (name, id and grade) for 10 students in array of structures using pointers and another
function to print all the structures using pointers.*/
#include <stdio.h>
#include "types.h"
typedef struct 
{ u8 name[20];
  u8 grade;  
  u16 id ;

}INFO;
//INFO Store (void);
//INFO PRINT (void);
int main()
{ 
	INFO student[2];
	INFO *p=&student[0];
	for (u8 i ; i<2;i++){
	printf("Enter the student name : ");
	scanf("\n");
	scanf ("%[^\n]*%c",p[i].name) ;
	printf ("Enter the student[%d] grade :",i+1);
	scanf("%d",&p[i].grade);
	printf ("Enter the student[%d] id :",i+1);
	scanf("%d",&p[i].id);
	//return *p;
  //PRINT();
}
}
/*
}
INFO Store (void){
	INFO student[2];
	INFO *p=&student[0];
	for (u8 i ; i<2;i++,p++){
	printf("Enter the student name : ");
	scanf ("%[^\n]s",p[i].name) ;
	printf ("Enter the student[%d] grade",i);
	scanf("%d",p[i].grade);
	printf ("Enter the student[%d] id",i);
	scanf("%d",p[i].id);
	return *p;
    }
}
INFO PRINT (void)

{   
INFO **p_print = Store(*p);

for (u8 i; i<2;i++)
{
	printf("The name of student is : %s",p_print[i]->name);
	printf("The ID of student is : %d",p_print[i]->id);
	printf("The GRADE of student is : %d",p_print[i]->grade);
}
}*/