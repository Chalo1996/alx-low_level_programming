#include "main.h"

/**
  * _isalpha - check for upper or lower case alphabet.
  * @c: First parameter.
  *
  * Return 1 if lower or upper alphabet 0 otherwise.
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
