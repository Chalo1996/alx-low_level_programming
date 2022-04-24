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

	int i, j, k, len_dest = 0, len_src = 0, total_len;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		len_src++;
	}
	total_len = (len_dest + len_src) + 2;

	for (k = 0; k <= total_len; k++)
	{
		if (k < n)
		{
			dest[len_dest + k] = src[k];
		}
	}
	*(dest + (len_dest + k)) = '\0';
	return (dest);
}
