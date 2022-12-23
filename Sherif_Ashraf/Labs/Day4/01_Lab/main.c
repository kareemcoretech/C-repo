#include <stdio.h>


void print_name(void);
void add_func(void);
int add_func2(void);
int add_func3(int x , int y);


int main()
{	int add_func2_res,a,b,add_func3_res;
	print_name();
	add_func();
	add_func2_res = add_func2();
	printf(" %d\n",add_func2_res);
	printf("Func 4 \n");
	printf("Enter Two Numbers \n");
	scanf("%d %d",&a,&b);
    add_func3_res = add_func3(a,b);
	printf("%d + %d = %d \n",a,b,add_func3_res);
}

void print_name(void)
{
	printf("Func 1 \n");
	printf("Name : Sherif Ashraf \n");
	printf("Age : 22 \n");
	printf("Address : Hdayak Alahram \n");
}

void add_func(void)
{
	int x,y;
	printf("Func 2 \n");
	printf("Enter Two Numbers \n");
	scanf("%d %d",&x,&y);
	printf("%d + %d = %d \n",x,y,x+y);
}

int add_func2(void)
{
	int x,y;
	printf("Func 3 \n");
	printf("Enter Two Numbers \n");
	scanf("%d %d",&x,&y);
	printf("%d + %d =",x,y);
	return(x+y);
}

int add_func3(int x , int y)
{
	return(x+y);
}