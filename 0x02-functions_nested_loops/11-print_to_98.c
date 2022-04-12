#include "main.h"

/**
  * print_to_98 - prints all natural from n to 98.
  * @n: first parameter.
  *
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} 
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
       	else
	{
		_putchar(n);
	}
	_putchar('\n');
}
