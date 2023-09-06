#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: - size of the datatype
 * @c: - data type character
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (array == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
