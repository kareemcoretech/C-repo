/*
Author: Toqa Amir Elraey
Version: 1
Task: Create enum type called fan_level it shall have three values
Level1, Level2 and Level3. This enum shall be used to
control the level of the fan
Date: 1/1/2022
*/


#include <stdio.h>
#include "TypeDefs.h"

enum fan_level{
	level1,
	level2,
	level3
};

int main(){
	u8 MODE;
	MODE = level3;
	
	if(MODE == level1){
		printf("The fan is in level 1");
	}
	else if(MODE == level2){
		printf("The fan is in level 2");
	}
	else{
		printf("The fan is in level 3");
	}
}