/*
Write C code that manage a small school. The school has 3 classes each class
contains 10 students. Define three arrays for the three classes each one with a
length of 10. Save a random numbers in all array elements to indicate the
students grade. The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade
Knowing that the total grade is from 100 and the minimum passing grade is 50.
*/

#include <stdio.h>
#include "operation.h"
//i will use operation.c to store my functions

void main()
{
	int class1[10] = {14, 70, 80, 90, 75, 83, 93, 34, 18, 67};
	int class2[10] = {46, 15, 24, 38, 67, 98, 45, 75, 76, 88};
	int class3[10] = {18, 75, 94, 83, 46, 12, 54, 68, 75, 13};
	int sizeofarray = sizeof(class1)/sizeof(class1[0]);
	int selection;
	while(1)
	{
		printf("\n\nChoose class to get statistics: ");
		scanf("%d", &selection);
		
		switch(selection)
		{
			default:
			printf("Enter valid class number!\n");
			break;
			
			case 1:
			pass(class1, sizeofarray);
			fail(class1, sizeofarray);
			highest_grade(class1, sizeofarray);
			lowest_grade(class1, sizeofarray);
			average_grade(class1, sizeofarray);
			break;
			
			case 2:
			pass(class2, sizeofarray);
			fail(class2, sizeofarray);
			highest_grade(class2, sizeofarray);
			lowest_grade(class2, sizeofarray);
			average_grade(class2, sizeofarray);
			break;
			
			case 3:
			pass(class3, sizeofarray);
			fail(class3, sizeofarray);
			highest_grade(class3, sizeofarray);
			lowest_grade(class3, sizeofarray);
			average_grade(class3, sizeofarray);
			break;
		}
	}
}