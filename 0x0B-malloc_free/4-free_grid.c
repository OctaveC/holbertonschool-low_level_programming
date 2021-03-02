#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees memory used in previous exo
 * @grid: the location of the grid we're removing
 * @height: the height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int ite;

	for (ite = 0; ite < height; ite++;)
	{
		free(grid[ite]);
	}
	free(grid);
}
