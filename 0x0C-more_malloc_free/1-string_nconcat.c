#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings.
  * @s1: first string.
  * @s2: second string.
  * @n: number of bytes to be concatenated.
  *
  * Return: pointer to the memory.
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, size;
	unsigned int len_s1 = 0, len_s2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len_s1++;

	for (j = 0; s2[j] != '\0'; j++)
		len_s2++;

	if (n <= len_s2)
		len_s2 = n;

	ptr = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k <= len_s1; k++)
		ptr[k] = s1[k];

	for (l = 0; l <= len_s2; l++)
		ptr[len_s1 + l] = s2[l];

	*(ptr + l) = '\0';

	return (ptr);

	free(ptr);
}
