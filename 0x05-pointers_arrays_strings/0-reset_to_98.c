#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Engineer - CodesByAbdul
 * Return: Always 0
 */
void reset_to_98(int *p)
{
	*p = 98;
}

int main(void)
{
	int n;
	int *p;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
