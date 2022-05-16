#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the output of the operations.
  * @argc: stores args passed to argv.
  * @argv: pointer to the commandline args.
  *
  * Return: SUCCESS.
  */
int main(int argc, char *argv[])
{
	int i, j, res;
	int (*output)(int, int);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		puts("Error");
		exit(99);
	}

	output = get_op_func(*(argv + 2));
	if (!output)
	{
		puts("Error");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	res = output(i, j);
	printf("%d\n", res);

	return (0);
}
