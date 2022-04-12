#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @n: first parameter.
  *
  * Return: The value of the last digit.
  */
int print_last_digit(int n)
{
	ld = n % 10;

	_putchar(ld);
	return (ld);
}
