#include <stdio.h>

/**
  * main - The Entry Point of C code.
  *
  * Return: Zero(0). Exit Status Success.
  */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			if (i != 57)
			{
				putchar(i);
				putchar(j);
				if ((i != 56) || (j != 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	
	return (0);
}
