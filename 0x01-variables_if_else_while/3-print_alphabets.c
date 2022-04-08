#include <stdio.h>

/**
  * main - The Entry Point for C code.
  *
  * Return: Zero(0) for Success. Exit main.
  */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	for (c = 65; c <= 90; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
