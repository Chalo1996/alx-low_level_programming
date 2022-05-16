#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - adds a to b.
  * @a: first integer.
  * @b: second integer.
  *
  * Return: sum.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts b from a.
  * @a: first integer.
  * @b: second integer.
  *
  * Return: subtraction.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies a and b.
  * @a: first integer.
  * @b: second integer.
  *
  * Return: product.
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides a and b.
  * @a: first integer.
  * @b: second integer.
  *
  * Return: quotient.
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - finds the modulo of a and b.
  * @a: first integer.
  * @b: second integer.
  *
  * Return: the remainder.
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
