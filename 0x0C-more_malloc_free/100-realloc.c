#include "main.h"
#include <stdlib.h>
/**
  * _realloc - reallocates a memory block using malloc.
  * @ptr: pointer to initial array.
  * @old_size: allocated ptr space.
  * @new_size: new memory block.
  *
  * Return: pointer to the new array.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *reallocate, *ptrPtr;

	ptrPtr = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reallocate = malloc(new_size);
	if (reallocate == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		reallocate[i] = ptrPtr[i];

	free(ptr);
	return (reallocate);
}
