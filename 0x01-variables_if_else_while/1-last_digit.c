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
	if (n[-1] > 5)
	{
		printf("is %n greater than 5\n");
	}
	else if (n[-1] == 0)
	{
		printf("is %d and is 0\n");
	}
	else
	{
		printf("is %n and is less than 6 and not 0\n");
	}
	return (0);
}
