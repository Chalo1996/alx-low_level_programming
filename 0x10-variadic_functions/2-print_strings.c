#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints string elements.
  * @separator: separator.
  * @n: number of strings.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);

		if (i != 0 && separator != NULL)
			printf("%s", separator);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");
	}
	printf("\n");

	va_end(args);

}
