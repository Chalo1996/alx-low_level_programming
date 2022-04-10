#include <stdio.h>

/**
  * main - The Entry Point of C code.
  *
  * Return: The exit status(0). Success.
  */
int main(void)
{
	int i = '0', j = '1', k = '2';

	for (; i <= '7'; i++)
	{
		for (; j <= '8'; j++)
		{
			for (; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8' || k != '9')
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
