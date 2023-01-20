/*Auth : MOHAMED MOHAMED RABEA 
VER : (V.0.1)
program :(1) C Program to store information (name, roll and marks) for a student using structure and display it.
*/
#include <stdio.h>
#include "types.h"
typedef struct 
{
	u8 name[20];
	u8 roll;
	u8 marks ;
} information;

int main()
{
 information student ;
 printf("Enter student name: ");
 scanf("%[^\n]s",student.name);
 printf("Enter the student roll: ");
 scanf("%d",&student.roll);
 printf("Enter marks: ");
 scanf("%d",&student.marks);
 
 printf("student name: %s\n",student.name);

 printf("student roll: %d\n",student.roll);

 printf("marks: %d",student.marks);

}