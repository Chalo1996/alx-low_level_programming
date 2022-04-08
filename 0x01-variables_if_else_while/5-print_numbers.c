#include <stdio.h>

/**
  * main - The Entry Point for C code.
  *
  * Return: The Endpoint for C code. Success
  */

int main(void)
{
	int i = 0;

	do {
		printf("%d", i);
		i++;
	} while (i <= 9);
	putchar('\n');
	return (0);
}
