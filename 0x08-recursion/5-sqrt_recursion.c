#include "main.h"

int _sqrt(int a, int b);

/**
  * _sqrt_recursion - call recursively the square root of a natural number.
  * @n: The natural number.
  *
  * Return: 0 if 0, 1 if 1, -1 otherwise.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (0);

	else if (n == 1)
		return (1);

	else
		return (_sqrt(n, 1));
}

/**
  * _sqrt - find the square root of a number.
  * @a: natural number to multiply.
  * @b: base number, square of a.
  *
  * Return: b if true, -1 otherwise.
  */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);

	else if (b * b > a)
		return (-1);

	else
		return (_sqrt(a, b + 1));
}
