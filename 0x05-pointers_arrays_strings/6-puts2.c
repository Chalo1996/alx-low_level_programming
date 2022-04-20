#include "main.h"

/**
  * puts2 - prints every other character of a string,
  *         starting with the first character, followed
  *         by a new line.
  * @str: String Pointer.
  */

void puts2(char *str)
{
	long int i = 0;

	for (i = 0; *str; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
