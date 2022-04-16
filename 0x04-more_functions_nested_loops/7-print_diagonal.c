#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  * @n: first parameter.
  *
  */
void print_diagonal(int n)
{
	int i, step;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (step = 1; step < i; step++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
