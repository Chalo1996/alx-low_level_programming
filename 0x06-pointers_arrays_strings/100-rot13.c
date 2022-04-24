#include "main.h"

/**
  * rot13 - encodes a string using rot13.
  * @s: The string to encode.
  *
  * Return: pointer to s.
  */
char *rot13(char *s)
{
	int i, j;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (c1[j] == s[i])
			{
				s[i] = c2[j];
				break;
			}
		}
	}
	return (s);
}
