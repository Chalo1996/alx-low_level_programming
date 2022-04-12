#include "main.h"
#include <stdlib.h>

/**
  * _abs - computes the absolute value of an integer.
  * @n: first parameter.
  *
  * Return: The absolute value.
  */
int _abs(int n)
{
	int num;

	num = abs(n);

	_putchar(num);

	return (num);
}
