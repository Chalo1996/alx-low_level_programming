#include <stdio.h>

/**
  * main - Prints a right_angled_traingle
  *        starting with first column.
  *        The traingle is inverted.
  * @rows: The number of rows to be printed.
  *
  * Return: 0.
  */
int main(int rows)
{
	rows = 20;

	int rowNum, colNum;

	for (rowNum = rows; rowNum >= 0; rowNum--)
	{
		for (colNum = rowNum; colNum >= 1; colNum--)
		{
			printf("*");
		}
		printf("\n");
	}
	return (0);
}
