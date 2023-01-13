/*Auth : MOHAMED MOHAMED RABEA 
VER : (V.0.1)
program (6) : Create enum type called fan_level it shall have three values Level1, Level2 and Level3. This enum shall be used to
control the level of the fan.
*/

#include <stdio.h>
#include "types.h"

typedef enum
{
	level_1=1,
	level_2,
	level_3,
}fan_level;

int main ()
{
	fan_level fan=level_3;
	printf("%d",fan);
	
}