#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @array: array
 * @size: is the size of the array
 * @action: is a pointer to the function to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
