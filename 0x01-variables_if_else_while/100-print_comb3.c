#include <stdio.h>

/**
  * main - The Entry Point of C code.
  *
  * Return: Zero(0). Exit Status Success.
  */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if (j != '1' && j != '9' + 1)
			{
				putchar(44);
				putchar(32);
			}
			putchar(i);
			putchar(j);
		}
	}
	putchar(10);
	return (0);
}
