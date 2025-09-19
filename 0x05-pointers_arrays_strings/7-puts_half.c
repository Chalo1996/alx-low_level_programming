#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: String pointer.
 *
 */

void puts_half(char *str)
{
	int count;
	int i;
	int n;

	if (str == NULL)
		return;

	count = 0;
	n = (count - 1) / 2;

	while (*(str + count))
		count++;

	if (count % 2 == 0)
		n = count / 2;

	for (i = n; i < count; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
