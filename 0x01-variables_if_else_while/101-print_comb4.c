#include <stdio.h>

/**
  * main - The Entry Point of C code.
  *
  * Return: The exit status(0). Success.
  */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = i + 1; j <= '8'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if (k != '2' && k != '9' + 1)
				{
					putchar(44);
					putchar(32);
				}
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}
	putchar(10);
	return (0);
}
