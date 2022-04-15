#include "main.h"

/**
  * _isupper - checks for uppercase character.
  * @c: first parameter.
  *
  * Return: 1 if upper 0 otherwise.
  */
int _isupper(int c)
{
	int c;
	
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
