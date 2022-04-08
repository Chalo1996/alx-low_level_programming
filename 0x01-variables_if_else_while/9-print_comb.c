#include <stdio.h>

/**
  * main - The Entry Point for C code.
  *
  * Return: The Endpoint for C code.
  */
int main(void)
{
	int i = '0';

	do {
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i <= '9');
	putchar('\n');
	return (0);
}
