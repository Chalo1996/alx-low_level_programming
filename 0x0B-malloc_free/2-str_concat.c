#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates s1 to s2.
  * @s1: first string.
  * @s2: second string.
  *
  * Return: pointer to ptr NULL otherwise.
  */
char *str_concat(char *s1, char *s2)
{
	int l, len_tot;
	char *ptr;

	int len_s1, len_s2, i, j;

	len_s1 = 0;
	len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;

	for (j = 0; s2[j] != '\0'; j++)
		len_s2++;

	len_tot = len_s1 + len_s2 + 1;

	ptr = (char *)malloc(len_tot * sizeof(char));

	if (ptr)
	{
		for (l = 0; l < len_s1; l++)
		{
			ptr[l] = s1[l];
		}
		for (l = 0; l < len_s2; l++)
		{
			ptr[len_s1 + l] = s2[l];
		}
		ptr[len_tot - 1] = '\0';

		return (ptr);
	}
	return (NULL);
}
