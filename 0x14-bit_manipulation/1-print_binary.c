#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * @n: an integer number.
  */
void print_binary(unsigned long int n)
{
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
