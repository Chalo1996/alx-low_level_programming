#include "search_algos.h"

/**
  * jump_search - searches for a value in a sorted array using jump search
  * @array: pointer to the array to search in
  * @size: number of elements in the array
  * @value: value to search for
  *
  * Return: index of value
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1, step = sqrt(size), j;
	int pos = -1, flag = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i += step)
	{
		if (array[i] < value)
		{
			j = i;
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
		else if (value > array[step])
			low = step + 1;

		else
			high = step - 1;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, j + step);
	for (i = j; i <= high; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			flag = 1;
			pos = i;
			break;
		}
	}

	if (flag == 0 && low > high)
		return (-1);

	return (pos);
}
