#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);
	if (n == 0)
	{
		va_end(ap);
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end (ap);

	return sum;
}

int main(void)
{
	printf("%d\n", sum_them_all(3,5,6));

	return 0;
}
