#include "main.h"

/**
  * print_line - draws a straight line in the terminal.
  * @n: first parameter.
  *
  */
void print_line(int n)
{
	int i = 1;

	if (n  <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
