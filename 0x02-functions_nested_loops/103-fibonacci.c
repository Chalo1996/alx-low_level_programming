#include <stdio.h>
#include "main.h"

/**
 * main - Prints the sum of even-valued Fibonacci sequence.
 *
 * Return: 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sumOffib;
	float sum;

	while (1)
	{
		sumOffib = fib1 + fib2;
		if (sumOffib > 4000000)
			break;

		if ((sumOffib % 2) == 0)
			sum += sumOffib;

		fib1 = fib2;
		fib2 = sumOffib;
	}
	printf("%f\n", sum);

	return (0);
}
