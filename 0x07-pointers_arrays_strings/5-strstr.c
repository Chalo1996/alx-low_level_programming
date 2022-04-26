#include "main.h"

/**
  * _strstr - locates a substring.
  * @haystack: Original string.
  * @needle: Substring.
  *
  * Return: Pointer to substring otherwise NULL.
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, l, len_haystack = 0, len_needle = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		len_haystack++;
	}

	for (j = 0; needle[j] != '\0'; j++)
	{
		len_needle++;
	}

	for (k = 0; k < len_haystack; k++)
	{
		for (l = 0; l < len_needle; l++)
		{
			if (haystack[k + l] != needle[l])
				break;
		}
		if (l == len_needle)
			return (haystack + k);
	}
	return (0);
}
