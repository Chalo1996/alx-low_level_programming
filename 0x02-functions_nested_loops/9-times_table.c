#include "main.h"

/**
  * times_table - Prints the multiplication table of 9.
  *
  * Return - Nothing(void).
  */

void times_table(void)
{
	int i, j, res, res_mantissa, res_char;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;

			if (j != 0 && j != '9' + 1)
			{
				_putchar(44);
				_putchar(32);
			}

			if (res <= 9)
			{
				_putchar(32);
				_putchar(res + '0');
			}
			else
			{
				res_mantissa = res / 10;
				res_char = res % 10;
				_putchar(res_mantissa + '0');
				_putchar(res_char + '0');
			}

		}
		_putchar(10);
	}
}
