#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: First value parameter.
  * @b: Second value parameter.
  */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
