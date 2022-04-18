#include <stdio.h>

/**
  * main - printf the prime factors of a number.
  *
  * Return: 0.
  */

int main(void)
{
	unsigned int n = 612852475143;
	int i = 2;
	int max = 0;
	
	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				if (i > max)
				{
					max = i;
				}
				n = n / i;
			}
		}
		i++;
	}
	printf("%d", max);
	putchar('\n');
	return (0);
}
