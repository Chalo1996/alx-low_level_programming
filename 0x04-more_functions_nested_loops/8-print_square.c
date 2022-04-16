#include "main.h"

/**
  * print_square - prints a square, followed by a new line.
  * @size: first parameter
  */
void print_square(int size)
{
	int sq, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sq = 1; sq <= size; sq++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
