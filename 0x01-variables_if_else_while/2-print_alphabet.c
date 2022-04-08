#include <stdio.h>

/**
  * main - The entry point for C code
  *
  * Return: Zero(0) for success. The endpoint for c code
  */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
