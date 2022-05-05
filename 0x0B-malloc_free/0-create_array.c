#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
  * create_array - creates an array of chars,
  *                and initializes it with a specific char
  * @size: size of the memory to be allocated.
  * @c: a specific character.
  *
  * Return: Pointer to the array NULL otherwise.
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);

	free(str);
}
