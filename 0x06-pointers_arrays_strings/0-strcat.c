#include "main.h"

/**
  * _strcat - concatenates src to dest.
  * @dest: string to append to.
  * @src: string to append.
  *
  * Return: desk(The concatenated string).
  */

char *_strcat(char *dest, char *src)
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
		dest[len_dest + k] = src[k];
	}

	return (dest);
}
