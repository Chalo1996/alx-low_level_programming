#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints its name.
  * @argc: command line args counter.
  * @argv: stores command line args.
  *
  * Return: Zero, EXIT_SUCCESS.
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
