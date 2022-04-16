#include "main.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14,
  *                followed by a new line.
  */
void more_numbers(void)
{
	int i, ro = 0;

	while (j <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
		j++;
	}

}
