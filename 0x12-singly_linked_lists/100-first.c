#include <stdio.h>

void printIntro(void) __attribute__ ((constructor));

/**
 * printIntro - prints a sentence before the main
 * function is executed
 */

void printIntro()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
