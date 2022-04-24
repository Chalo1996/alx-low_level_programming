#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers.
  * @a: The array of integers.
  * @n: size of the array.
  *
  */
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
