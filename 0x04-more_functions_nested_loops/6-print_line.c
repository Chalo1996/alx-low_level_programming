#define "main.h"

/**
  * print_line - draws a straight line in the terminal.
  * @n: first parameter.
  *
  */
void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
