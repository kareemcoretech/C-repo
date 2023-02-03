#include<stdio.h>

#define modeone 1
#define modetwo 2
#define modethree 3

#define mode modetwo

void main(void)
{
	#if mode == modeone
	printf("mode one on");
	#elif mode == modetwo
	printf("mode two on");
	#elif mode == modethree
	printf("mode three on");
	#else
	printf("else mode on");
	#endif
}