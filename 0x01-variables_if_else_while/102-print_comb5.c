#include <stdio.h>

/**
 * main - The Entrypoint for C code. This algorithm is used/
 *        to find a two two-digit combination
 *
 * Return: The Endpoint for C code.
 */

int main(void)
{
	int i, j, mantisa_i, decimal_i, mantisa_j, decimal_j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			mantisa_i = i / 10;
			mantisa_j = j / 10;
			decimal_i = i % 10;
			decimal_j = j % 10;
			putchar(mantisa_i + '0');
			putchar(decimal_i + '0');
			putchar(32);
			putchar(mantisa_j + '0');
			putchar(decimal_j + '0');
			if ((i != 0 || i != 1) && i != 98)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
