#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid -  frees a 2 dimensional grid.
  * @grid: the 2 D quadrilateral.
  * @height: The sides.
  *
  * Return: pointer to the grid.
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
