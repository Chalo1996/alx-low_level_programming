#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints its name.
  * @argc: command line args counter.
  * @argv: stores command line args.
  *
  * Return: Zero, EXIT_SUCCESS.
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
