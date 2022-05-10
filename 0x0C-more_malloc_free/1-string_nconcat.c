#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat - concatenates n bytes of s2 to s1.
  * @s1: first string.
  * @s2: second string.
  * @n: number of bytes.
  *
  * Return: pointer to ptr NULL otherwise.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int len_str, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_str = 0; s1[len_str] != '\0'; len_str++)
		;

	while (s2[j] != '\0' && j < n)
	{
		len_str++;
		j++;
	}

	ptr = (char *)malloc((len_str + 1) * sizeof(char));

	if (ptr)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			ptr[j] = s1[j];
		}
		len_str = j;

		for (j = 0; s2[j] != '\0' && j < n; j++)
		{
			ptr[len_str + j] = s2[j];
		}
		ptr[len_str + j] = '\0';

		return (ptr);
	}
	return (NULL);
}
