#include <stdio.h>

void def_constructor(void) __attribute__ ((constructor));

/**
  * def_constructor - executes the def_constructor before the
  *                   main is executed.
  */
void def_constructor(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
