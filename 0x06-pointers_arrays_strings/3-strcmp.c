#include "main.h"

/**
  * _strcmp - Compares string(s1) to string(s2).
  * @s1: first string to compare.
  * @s2: second string to compare.
  *
  * Return: The ascii equivalent difference between the strings.
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		if (s2[i] == '\0')
		{
			return (s2[i]);
		}
	}
	if (s2[i] != '\0')
	{
		return (0 - s2[i]);
	}

	return (0);
}
