#define "main.h"

/**
  * print_line - draws a straight line in the terminal.
  * @n: first parameter.
  *
  */
void print_line(int n)
{
	int i = 1;

	if (n  <= 0)
		_putchar('\n');
	else
		for (; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
