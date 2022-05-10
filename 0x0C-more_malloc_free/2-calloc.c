#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - sets to memory to zero.
  * @nmemb: array elements.
  * @size: size of each element.
  *
  * Return: Pointer to the memory address.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i, total_mem;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_mem = nmemb * size;

	ptr = malloc(total_mem);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_mem; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
