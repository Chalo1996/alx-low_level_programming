#include "function_pointers.h"

/**
  * int_index - searches for an integer.
  * @array: Elements.
  * @size: number of elements in the array.
  * @cmp: function pointer.
  *
  * Return: array index -1 otherwise.
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0)
		return (-1);

	if (!cmp || !array)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) != 0)
			return (j);
	}
	return (-1);

}
