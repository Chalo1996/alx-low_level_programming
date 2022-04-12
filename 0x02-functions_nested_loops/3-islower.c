#include "main.h"

/**
  * _islower - check whether a character is lower or not.
  *
  * Return: Zero(Success).
  */
int _islower(int c)
{
	if (islower(c))
		putchar('1');
	else
		putchar('0');
	putchar('\n');
	return (0);
}
