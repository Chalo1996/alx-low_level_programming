#include "main.h"

/**
  * print_alphabet_x10 - print alphabets 10 times.
  */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		int c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
