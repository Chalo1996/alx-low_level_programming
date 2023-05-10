#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted
  *                        array using interpolation search
  *
  * @array: pointer to the array to search in
  * @size: number of elements in the array
  * @value: element to search for
  *
  * Return: index where the value is found
  *
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, pos, foundPos = -1;
	int low = 0, high = size - 1, flag = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (value - array[low])
				);

		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			flag = 1;
			foundPos = pos;
			break;
		}

		else if (value > array[pos])
			low = pos + 1;

		else
			high = pos - 1;
	}

	if (flag == 0 && low > high && !size)
	{
		return (-1);
	}

	return (foundPos);
}
