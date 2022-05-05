#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly
  *           allocated space in memory, which contains
  *           a copy of the string given as a parameter.
  * @str: str to be duplicated.
  *
  * Return: pointer to the duplicated string.
  */
char *_strdup(char *str)
{
	int newStrSize = 0, i;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + newStrSize))
	{
		newStrSize++;
	}
	newStrSize++;

	newStr = (char *)malloc(newStrSize * sizeof(char));

	if (newStr == NULL)
		return (0);

	for (i = 0; i < newStrSize; i++)
		newStr[i] = str[i];
	return (newStr);
	free(newStr);
}
