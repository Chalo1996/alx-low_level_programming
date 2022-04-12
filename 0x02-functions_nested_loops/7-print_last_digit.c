#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @n: first parameter.
  * @ld: second parameter.
  *
  * Return: The value of the last digit.
  */
int print_last_digit(int n)
{
	int ld;
	ld = n % 10;

	_putchar(ld);
	return (ld);
}
