#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"
// gcc -c random.c
// gcc random.o print_random.c -o print_random.out
// ./print_random.out 


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar(randchar());
	putchar('\n');

	return(0);
}

