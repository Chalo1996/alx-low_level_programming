#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - The entry point of C code
  *
  * Return: Zero(0) Success The endpoint of C code
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("is %d greater than 5\n", n);
	}
	else if (n % 10 == 0)
	{
		printf("is %d and is 0\n", n);
	}
	else if (n % 10 < 6 && n % 10 > 0)
	{
		printf("is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
