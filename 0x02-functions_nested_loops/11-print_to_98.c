#include "main.h"

/**
  * print_to_98 - prints all natural from n to 98.
  * @n: first parameter.
  *
  * Return: Count.
  */
void print_to_98(int n)
{
	int i = n;
	
	while (i <= 98)
	{
		_putchar(i);
		i++;
	}
	return (i);
}
