#include "main.h"

/**
  * _strncat - concatenates src to dest.
  * @dest: string to append to (destination).
  * @src: string to be appended (source).
  * @n: number of bytes to be used.
  *
  * Return: dest(The concatenated string).
  */
char *_strncat(char *dest, char *src, int n)
{

	int i, k, len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (k = 0; src[k] != '\0'; k++)
	{
		if (k < n)
		{
			dest[len_dest + k] = src[k];
		}
	}
	*(dest + (len_dest + k)) = '\0';
	return (dest);
}
