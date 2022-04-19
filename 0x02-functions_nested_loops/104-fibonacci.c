#include <stdio.h>

/**
  * main - prints the first 100 fibonacci numbers.
  * @fib: The total number to be printed.
  *
  * Return: 0.
  */
int main(long long int  fib)
{
	long long int  fib1 = 1, fib2 = 1, swap; 


	for (fib = 1; fib <= 98; fib++)
	{
		printf("%lld", fib1);
		
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
