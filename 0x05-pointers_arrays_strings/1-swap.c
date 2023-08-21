#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: stores integer a
 * @b: stores integer b
 * coder - CodesByAbdul
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
