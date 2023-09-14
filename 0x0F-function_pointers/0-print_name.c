#include <stdio.h>
#include "main.h"

/**
 * print_name - prints a name as is
 * main - main function
 * custom_print - prints name o
 * @name: name of the person
 * @f: funtion pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
