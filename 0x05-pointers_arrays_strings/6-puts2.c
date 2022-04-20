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

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
