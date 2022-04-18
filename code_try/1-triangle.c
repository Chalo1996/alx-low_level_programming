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

	int rowNum, colNum;

	for (rowNum = 0; rowNum <= rows; rowNum++)
	{
		for (colNum = 1; colNum <= rowNum; colNum++)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
