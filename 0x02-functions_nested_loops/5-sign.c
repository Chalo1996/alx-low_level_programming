#include "main.h"

/**
  */
int print_sign(int n)
{
	if (n >= '0' && n <='9')
	{
		return (1);
		_putchar('+');
	}
	else if (n == '0')
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-1');
	}
}
