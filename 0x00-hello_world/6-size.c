#include <stdio.h>

/**
  * main - prints the size of data types
  *
  * Return: zero(0) for success
  */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a char: %lu byte(s)\n", sizeof(int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(float));
	return (0);
}
