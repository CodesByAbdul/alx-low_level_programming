#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10times
 * CodesByAbdul
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	}
}
