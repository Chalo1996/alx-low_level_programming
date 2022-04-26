#include "main.h"

/**
  * _strpbrk - searches a string for any of a set of bytes.
  * @s: The original string.
  * @accept: The substring.
  *
  * Return: Pointer to byte s otherwise NULL.
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k, l, len_accept = 0, len_s = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len_s++;
	}

	for (j = 0; accept[j] != '\0'; j++)
	{
		len_accept++;
	}

	for (k = 0; k < len_s; k++)
	{
		for (l = 0; l < len_accept; l++)
		{
			if (s[k] == accept[l])
				break;
		}
		if (accept[l] != '\0')
			return (s + k);
	}
	return (0);
}
