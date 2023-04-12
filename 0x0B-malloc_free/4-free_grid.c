#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees 2d gridfrom previous func
  * @grid: grid of array
  * @height: height of grid/ array
  * Return: returns freed 2d
  */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
