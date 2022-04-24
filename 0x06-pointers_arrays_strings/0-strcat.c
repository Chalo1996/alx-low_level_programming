#include "main.h"

/**
  * _strcat - concatenates src to dest.
  * @dest: string to append to (destination).
  * @src: string to be appended (source).
  *
  * Return: dest(The concatenated string).
  */
char *_strcat(char *dest, char *src)
{
	int i, k, len_dest = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len_dest++;
	}

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[len_dest + k] = src[k];
	}
	dest[len_dest + k] = '\0';

	return (dest);
}
