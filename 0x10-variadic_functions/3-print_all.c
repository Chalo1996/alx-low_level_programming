#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_all - prints anything.
  * @format: list of args type.
  */
void print_all(const char * const format, ...)
{
	int i = 0, len_format = 0;
	char *str;
	va_list args;

	va_start(args, format);

	while (format[len_format])
		len_format++;

	while (i < len_format)
	{
		switch (format[i])
		{
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str)
					printf("%s", str);
					break;
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (i < (len_format - 1))
			printf(", ");
	i++;
	}
	printf("\n");
	va_end(args);
}
