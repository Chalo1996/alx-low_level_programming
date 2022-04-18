#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 *                  followed by a new line.
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int rowNum, colNum, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rowNum = 1; rowNum <= size; rowNum++)
		{
			for (spaces = (size - rowNum); spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (colNum = 1; colNum <= rowNum; colNum++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
