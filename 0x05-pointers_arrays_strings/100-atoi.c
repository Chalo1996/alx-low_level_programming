#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to conveirt
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i, j, k, l;

	i = k = 0;
	l = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			l *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		k = k * 10 + l * (*(s + j) - '0');
		j++;
	}
	return (k);
}
