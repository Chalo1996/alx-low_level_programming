#include "main.h"

/**
  * _islower - check whether a character is lower or not.
  *
  * Return: Zero(Success).
  */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
