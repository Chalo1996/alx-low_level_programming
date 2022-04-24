#include "main.h"

/**
  * string_toupper - changes all lowercase letters
  *                  of a string to uppercase.
  * @c: The array string to convert.
  *
  * Return: The uppercase array string.
  */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (*(c + i) >= 97 && *(c + i) <= 122)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
