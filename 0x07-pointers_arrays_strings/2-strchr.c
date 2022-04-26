#include "main.h"

/**
  * _strchr - locates a character in a string.
  * @s: The string from which to locate the character.
  * @c: The character to locate.
  *
  * Return: NULL.
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (c == '\0')
	{
		return (s + i);
	}
	return ('\0');
}
