#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of integers
  *                    using binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: index of the value else -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int pos = -1, flag = 0, low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		mid = (low + high) / 2;

		if (array[i] == value)
		{
			flag = 1;
			pos = i;
			break;
		}

		else if (array[i] > value)
			low = mid + 1;

		else
			high = mid - 1;
	}

	if (low > high && flag == 0)
		return (-1);

	return (pos);
}
