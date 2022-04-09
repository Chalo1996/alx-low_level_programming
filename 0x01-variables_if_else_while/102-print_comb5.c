#include <stdio.h>

/**
 * main - The Entrypoint for C code.
 *
 * Return: The Endpoint for C code.
 */

int main(void)
{
	int i = 48, j = 0, k, l = 44;

	while (j <= 99)
	{
		k = j + 1;
		while (k <= 99)
		{
			putchar((j / 10) + i);
			putchar((j % 10) + i);
			putchar(32);
			putchar((k / 10) + i);
			putchar((k % 10) + i);
			if (j != 98 || k != 99)
			{
				putchar(l);
				putchar(32);
			}
			k += 1;
		}
		j += 1;
	}
	putchar('\n');
	return (0);
}
