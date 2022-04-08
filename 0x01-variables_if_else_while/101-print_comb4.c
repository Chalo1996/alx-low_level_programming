#include <stdio.h>

/**
  * main - The Entry Point of C code.
  *
  * Return: The exit status(0). Success.
  */
int main(void)
{
	int i, j = 1, k = 2;

	for (i = 0; i <= 8; i++)
	{
		for (; j <= 9; j++)
		{
			for (;  k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			k = j + 2;
		}
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
