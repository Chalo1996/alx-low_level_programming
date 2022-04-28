#include <stdio.h>

/**
  * fibb - recurssively return fibonacci numbers.
  * @i: the fibonacci number.
  *
  * Return: The fibonacci number.
  */
int fibb(unsigned int i)
{
	if (i == 1)
		return (1);

	if (i == 2)
		return (2);

	return (fibb(i - 1) + fibb(i - 2));
}

/**
  * main - print fibonacci numbers between 1 and 98.
  *
  * Return: Zero.
  */
int main(void)
{
	int i, f;

	for (i = 1; i <= 98; i++)
	{
		f = fibb(i);
		printf("%d", f);
		if (i != 98)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
