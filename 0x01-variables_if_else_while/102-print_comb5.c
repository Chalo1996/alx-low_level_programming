#include <stdio.h>

/**
 * main - The Entrypoint for C code. This algorithm is used/
 *        to find a two two-digit combination
 *
 * Return: The Endpoint for C code.
 */

int main(void)
{
	int i, j, mantisa_i, characteristic_i, mantisa_j, characteristic_j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			mantisa_i = i / 10;
			mantisa_j = j / 10;
			characteristic_i = i % 10;
			characteristic_j = j % 10;
			putchar(mantisa_i + '0');
			putchar(characteristic_i + '0');
			putchar(32);
			putchar(mantisa_j + '0');
			putchar(characteristic_j + '0');
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
