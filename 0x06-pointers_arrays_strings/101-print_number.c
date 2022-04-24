#include "main.h"

/**
  * print_number - prints an integer.
  * @n: number of integers to be printed.
  *
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n / 1000000000 < 0)
			_putchar(((n / -1000000000) % 10) + '0');
		if (n / 100000000 < 0)
			_putchar(((n / -100000000) % 10) + '0');
		if (n / 10000000 < 0)
			_putchar(((n / -10000000) % 10) + '0');
		if (n / 1000000 < 0)
			_putchar(((n / -1000000) % 10) + '0');
		if (n / 100000 < 0)
			_putchar(((n / -100000) % 10) + '0');
		if (n / 10000 < 0)
			_putchar(((n / -10000) % 10) + '0');
		if (n / 1000 < 0)
			_putchar(((n / -1000) % 10) + '0');
		if (n / 100 < 0)
			_putchar(((n / -100) % 10) + '0');
		if (n / 10 < 0)
			_putchar(((n / -10) % 10) + '0');
		_putchar('0' - (n % 10));
	}
	else
	{
		if (n / 1000000000 > 0)
			_putchar(((n / 1000000000) % 10) + '0');
		if (n / 100000000 > 0)
			_putchar(((n / 100000000) % 10) + '0');
		if (n / 10000000 > 0)
			_putchar(((n / 10000000) % 10) + '0');
		if (n / 1000000 > 0)
			_putchar(((n / 1000000) % 10) + '0');
		if (n / 100000 > 0)
			_putchar(((n / 100000) % 10) + '0');
		if (n / 10000 > 0)
			_putchar(((n / 10000) % 10) + '0');
		if (n / 1000 > 0)
			_putchar(((n / 1000) % 10) + '0');
		if (n / 100 > 0)
			_putchar(((n / 100) % 10) + '0');
		if (n / 10 > 0)
			_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}
