#include "search_algos.h"

/**
  * linear_search - searches for a value in an array using the
  *                 linear search algorithm.
  * @array: pointer to the first element of an array to search in.
  * @size: number of elements in the array.
  * @value: value to search for
  *
  * Return: -1 if false.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int flag = 0, pos = -1;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			flag = 1;
			pos = i;
			break;
		}
	}

	if (flag == 0)
		return (-1);

	return (pos);
}
