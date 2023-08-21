#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: stores the string
 * Coder - CodesByAbdul
 * Return: 0 Always
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (0);
}
