#include <stdio.h>
/**
 * main - prints the number of arguments of the program.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
