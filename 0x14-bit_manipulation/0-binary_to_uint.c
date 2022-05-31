#include "main.h"
#include <stddef.h>

int powerof(unsigned int num, unsigned int base);

/**
  * binary_to_uint - converts a binary number to unsigned int.
  * @b: pointer to a string of 0 and 1 chars.
  *
  * Return: The converted binary.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, dec, j, i, k;

	len = dec = j = i = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;
	k = len - 1;

	while (i < len)
	{
		if (b[k] == '1' || b[k] == '0')
		{
			dec = dec + ((b[k] - '0') * powerof(2, j));
			j++;
			k--;
		}
		else
			return (0);
		i++;
	}
	return (dec);
}

/**
  * powerof -  omputes the power of two unsigned integers.
  * @num: number to raised.
  * @base: the power to which num is to be raised.
  *
  * Return: The power.
  */
int powerof(unsigned int num, unsigned int base)
{
	unsigned int i, res = 1;

	if (num == 0)
		return (0);
	if (base == 0 || num == 1)
		return (1);
	if (base == 1)
		return (num);

	else
	{
		for (i = 1; i <= base; i++)
		{
			res = res * num;
		}
	}
	return (res);
}
