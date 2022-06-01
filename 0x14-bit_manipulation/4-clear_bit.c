#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @n: pointer to an integer.
  * @index: the position of the bit.
  *
  * Return: 1, -1 otherwise.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, orig_num, counter, num_one;

	i = counter = orig_num = 0;

	num_one = *n;

	if (index > 63)
		return (-1);
	while (counter < 63)
	{
		i = i << 1;
		if (counter == index)
			i += 0;
		else
			i += num_one & 1;
		counter++;
		num_one = num_one >> 1;
	}
	while (counter > 0)
	{
		orig_num = orig_num << 1;
		orig_num += i & 1;
		i = i >> 1;
		counter--;
	}
	*n = orig_num;
	return (1);
}
