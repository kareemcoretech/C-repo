#include <stdio.h>
#include "datatypes.h"

enum fan_level
{
	Level1=7, 
	Level2, 
	Level3, 
};

int main()
{
	int x = Level3;
	printf("%d",x);
}