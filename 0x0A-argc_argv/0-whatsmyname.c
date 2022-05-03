#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints its name.
  * @argc: command line args counter.
  * @argv: stores command line args.
  *
  * Return: Zero, EXIT_SUCCESS.
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
