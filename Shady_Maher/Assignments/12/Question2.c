#include <stdio.h>
#include "datatypes.h"

#define Max 50

typedef struct
{
	u8 name[20];
	u16 grade;
	
}student;


int main()
{
	s8 x;
	u8 count=0;
	int sum=0, average;
	u16 top;
	
	student info[Max];
	
	for (int i=0 ; i<Max ; i++)
	{
		printf("Enter student name: ");
			scanf("\n");
			scanf("%[^\n]s", &info[i].name );
		printf("Enter student score: ");
			scanf("%d", &info[i].grade );
			
		count++;
			
		printf("more data? ");
		scanf("%d", &x);
		if (x==-1)
		{
			printf("\n================REPORT===============\n"); //REPORT
			printf("Student Name   Score\n");
			printf("------------   -----\n");
			
			for (int i=0 ; i<count ; i++)
			{
				printf("%s\t\t%d\n",info[i].name,info[i].grade);
				sum += info[i].grade;
			}
			
			average = sum/count;
			printf("The number of students is %d\n", count);
			printf("The average score for this class is %d\n", average );
			
				
			printf("===============================================\n");			//below average
			printf("Below The Average Students! Work Harder!\n");
			printf("===============================================\n\n");
			printf("Student Name   Score\n");
			printf("------------   -----\n");
			
			for (int i=0 ; i<count ; i++)
			{			
				if (info[i].grade < average)
					printf("%s\t\t%d\n",info[i].name,info[i].grade);
			}


			printf("===============================================\n");			//top scorer
			printf("Top Scorer Student! Congratulation!\n");
			printf("===============================================\n\n");
			printf("Student Name   Score\n");
			printf("------------   -----\n");
			
			for (int i=0 ; i<count ; i++)
			{			
				for (int j=0 ; j<count ; j++)
				{
					if (info[i].grade > info[j].grade && i!=j)
					{
						top = info[i].grade;
					}
					else
					{
						top = info[j].grade;
					}
				}	
			}
			printf("%d\n",top);
			break;
		}
		else
		{
			continue;
		}
	}
}