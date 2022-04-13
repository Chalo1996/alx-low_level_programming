#include "main.h"

/**
  * print_alphabet - Prints the alphabets in lowercase.
  *
  */
void print_alphabet(void)
{
	int c = 97;

	do {
		_putchar(c);
		c++;
	} while (c <= 122);
	putchar('\n');
}
