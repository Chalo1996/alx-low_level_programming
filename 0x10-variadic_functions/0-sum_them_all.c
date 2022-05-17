#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - finds the sum of parameters.
  * @n: number of parameters.
  *
  * Return: sum of the elemets.
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	return (sum);

	va_end(args);
}
