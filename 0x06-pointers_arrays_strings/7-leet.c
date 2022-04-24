#include "main.h"

/**
  * leet - Encodes a string into 1337.
  * @str: String to encode.
  *
  * Return: pointer to str.
  */
char *leet(char *str)
{
	int i, j;

	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c1[j] != '\0'; j++)
		{
			if (*(c1 + j) == *(str + i))
			{
				str[i] = c2[j];
			}
		}
	}
	return (str);
}
