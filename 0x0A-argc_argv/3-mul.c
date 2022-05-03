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
	int mul, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
