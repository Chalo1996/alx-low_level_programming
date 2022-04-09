#include <stdio.h>

/**
  * main - The Entry Point of C code.
  *
  * Return: Zero(0). Exit Status Success.
  */
int main(void)
{
	int i = '0', j = '1';

	for (; i <= '8'; i++)
	{
		for (; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		j = i + 2;
	}
	putchar('\n');
	return (0);
}
