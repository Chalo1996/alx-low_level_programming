#include "function_pointers.h"

/**
  * print_name - prints a name.
  * @name: The string.
  * @f: pointer to function name.
  *
  * Return: NULL if empty.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
