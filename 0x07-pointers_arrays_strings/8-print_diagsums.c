#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two diagonals
  *                  of a square matrix of integers.
  * @a: The matrix.
  * @size: Size of the matrix.
  *
  */
void print_diagsums(int *a, int size)
{
	int i, j, sum_one = 0, sum_two = 0, tot_size = size - 1;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
				sum_one += *(a + (size * i + j));
			if (i == (tot_size - j))
				sum_two += *(a + (size * i + j));
		}
	}
	printf("%d, %d\n", sum_one, sum_two);
}
