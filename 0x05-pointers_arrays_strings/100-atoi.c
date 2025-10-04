#include "main.h"

#define NODIGIT 0
#define ISDIGIT 1

/**
 * _atoi - converts an ascii to its integer equivalent.
 * @s: poniter to string.
 *
 * Return: interger converted from ascii or 0 if non.
 */
int _atoi(char *s)
{
	int minus_count = 0;
	int plus_count = 0;
	int size = 0;
	int i = 0;
	int j = 0;
	int state = NODIGIT;
	int num = 0;
	int sign = 1;

	/* find index of first digit */
	while (s[i])
	{
		if (isdigit((unsigned char)s[i]))
		{
			state = ISDIGIT;
			break;
		}
		++size;
		++i;
	}

	if (state == NODIGIT)
		return (0);

	for (i = size; s[i] && isdigit((unsigned char)s[i]); ++i)
		num = num * 10 + (s[i] - '0');

	for (j = size - 1; j >= 0 && (s[j] == '+' || s[j] == '-'); --j)
	{
		if (s[j] == '-')
			++minus_count;
		else
			++plus_count;
	}

	sign = (minus_count % 2) ? -1 : 1;

	return (sign * num);
}
