#include "main.h"

/**
  * _islower - check whether a character is lower or not.
  * @c: First Operand.
  *
  * Return: Zero(True, is lower) 1 otherwise.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
