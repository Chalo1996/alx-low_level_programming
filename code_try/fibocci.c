#include <stdio.h>

/**
  * main - prints the fibocci series for n numbers.
  * @n: The number of fibocci numbers to be printed.
  *
  * Return: 0.
  */
int main(int n)
{
	int num1 = 0, num2 = 1, c, i;

	printf("Enter the number of fibocci numbers: ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		printf("%d", num1);
		c = num1 + num2;
		num1 = num2;
		num2 = c;
		putchar(' ');
	}
	printf("\n");
	return (0);
}
