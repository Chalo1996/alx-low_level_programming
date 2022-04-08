#include <stdlib.h>
#include <time.h>

/**
  * main - The Entry Point
  *
  * Return: Zero(0) ends the program
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("is positive");
	}
	else if (n == 0)
	{
		puts("is zero");
	}
	else
	{
		puts("is negative");
	}
	return (0);
}

