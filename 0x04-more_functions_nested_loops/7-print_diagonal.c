#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  * @n: first parameter.
  *
  */
void print_diagonal(int n)
{
	int rowNum, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (rowNum = 1; rowNum <= n; rowNum++)
	{
		for (spaces = 1; spaces <= (rowNum - 1); spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
