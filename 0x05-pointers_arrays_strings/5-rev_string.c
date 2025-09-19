#include "main.h"

/**
  * rev_string - reverses a string.
  * @s: A pointer to string.
  *
  */

void rev_string(char *s)
{
	int size;
	int start_index;
	char current;

	if (s == NULL)
		return;

	size = 0;
	start_index = 0;

	while (*(s + size))
		size++;

	while (start_index < size - 1)
	{
		current = *(s + start_index);
		*(s + start_index) = *(s + size - 1);
		*(s + size - 1) = current;
		start_index++;
		size--;
	}
}
