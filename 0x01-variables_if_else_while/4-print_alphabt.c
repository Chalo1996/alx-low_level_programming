#include <stdio.h>

/**
  * main - The Entry Point for C code.
  *
  * Return: The endpoint for C code.
  */
int main(void)
{
	char c = 97;

	do {
		if (c != 101 && c != 113)
			putchar(c);
		c++;
	} while (c <= 122);
	putchar('\n');
	return (0);
}
