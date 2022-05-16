#include "function_pointers.h"
#include <stdio.h>

/**
  * array_iterator - itarates a function.
  * @array: the array.
  * @size: size of the array.
  * @action: pointer to the function.
  *
  * Return: Nothing.
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array != NULL && action != NULL)
	for (j = 0; j < size; j++)
		(action(array[j]));
}
