#include <stdio.h>

/**
  * main - The Entry Point for C code.
  *
  * Return: The Endpoint for C code. Success.
  */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
