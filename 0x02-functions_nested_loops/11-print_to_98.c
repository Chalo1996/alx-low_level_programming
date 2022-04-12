#include "main.h"

/**
  * print_to_98 - prints all natural from n to 98.
  * @n: first parameter.
  *
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar(n--);
		_putchar(',');
		_putchar(' ');
	}

	else
	{
		while (n < 98)
			_putchar(n++);
		_putchar(',');
		_putchar(' ');
	}
}
