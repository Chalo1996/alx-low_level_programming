#include "main.h"

/**
  * _isupper - checks for uppercase character.
  * @c: first parameter.
  *
  * Return: 1 if upper 0 otherwise.
  */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
