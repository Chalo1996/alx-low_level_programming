#include "main.h"

/**
  * _strspn - gets the length of a prefix substring.
  * @s: The original string.
  * @accept: The substring.
  *
  * Return: Number of bytes of the substring.
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l, len_str = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len_str++;
	}

	for (k = 0; accept[k] != '\0'; k++)
	{
		len++;
	}

	for (j = 0; j < len_str; j++)
	{
		for (l = 0; l < len; l++)
		{
			if (s[j] == accept[l])
				break;
		}
		if (accept[l] == '\0')
			break;
	}
	return (j);
}
