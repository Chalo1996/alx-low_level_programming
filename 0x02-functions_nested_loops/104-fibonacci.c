#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the first 100 fibonacci numbers.
  * @fib: The total number to be printed.
  *
  * Return: 0.
  */
int main(int fib)
{
	int  fib1 = 1, fib2 = 1, swap; 


	for (fib = 1; fib <= 98; fib++)
	{
		printf("%lu", fib1);
		
		if (fib != 98)
		{
			printf(",");
			printf(" ");
		}
		swap = fib1 + fib2;
		fib1 = fib2;
		fib2 = swap;
	}

	printf("\n");
	return (0);
}
