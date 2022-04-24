#include "main.h"

/**
  * _strncpy - copies scr to dest.
  * @dest: destination.
  * @src: source.
  * @n: number of bytes to be copied.
  *
  * Return: dest.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (i < n)
		{
			dest[i] = src[i];
		}
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
