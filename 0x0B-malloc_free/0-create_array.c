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
	char *array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
	free(array);
}
