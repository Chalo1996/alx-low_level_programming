#include "main.h"

/**
  * _memset - fills memory with a constant byte.
  * @s: pointer to the memory.
  * @b: the constant to write to the memory.
  * @n: memory size to fill.
  *
  * Return: pointer to the memory.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
