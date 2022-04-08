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
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = abs(n % 10);
	if (n > 0)
	{
		if (ld > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, ld);
		}
		else if (ld == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, ld);
		}
		else if (ld < 6 && ld > 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
		}
	}
	else
	{
		if (ld > 5 || ld == 0 || (ld < 6 && ld > 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld * -1);
		}
	}
	return (0);
}
