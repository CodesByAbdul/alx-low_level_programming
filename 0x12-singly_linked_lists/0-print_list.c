#include <stdio.h>
#include "lists.h" 

/**
 * print_list - prints all elements of a list
 * Return: Always 0
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; 

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%s\n", h->str);
		}

		h = h->next;
		count++; 
	}

	return (count);
}
