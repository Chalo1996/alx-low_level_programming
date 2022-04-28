#include "main.h"

int is_prime(int a, int b);

/**
  * is_prime_number - checks for a prime number.
  * @n: a natural number.
  *
  * Return: 1 if 1, the prime number, 0 if negative number.
  */
int is_prime_number(int n)
{
	return (is_prime(n - 1, n));
}

/**
  * is_prime - computes for a prime number.
  * @a: first number.
  * @b: comparison value.
  *
  * Return: 1 if prime 0 otherwise.
  */
int is_prime(int a, int b)
{
	if (a < 1)
		return (0);

	else if (a == 1)
		return (1);

	else
	{
		if (b % a == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(a - 1, b));
		}
	}
}
