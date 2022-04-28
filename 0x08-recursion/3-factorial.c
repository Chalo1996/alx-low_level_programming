#include "main.h"

/**
  * factorial - call the factorial of a number recursively.
  * @n: The integer.
  *
  * Return: The factorial.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
