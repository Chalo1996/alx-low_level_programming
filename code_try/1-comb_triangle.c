#include <stdio.h>

/**
  * main - Prints a right_angled_traingle
  *        starting with first column.
  * @rows: The number of rows to be printed.
  *
  * Return: 0.
  */
int main(int rows)
{
	rows = 20;

	int rowNum, colNum, spaces;

	for (rowNum = 1; rowNum <= rows; rowNum++)
	{
		for (spaces = 0; spaces <= (rowNum - 1); spaces++)
		{
			printf("#");
		}
		for (spaces = 0; spaces <= (rowNum - 1); spaces++)
		{
			printf("*");
		}
		for (colNum = 1; colNum <= rowNum; colNum++)
		{
			printf("\\");
		}
		printf("\n");
	}
	return (0);
}
