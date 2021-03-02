#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to 2d array of ints
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: A pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int ite1, ite2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (ite1 = 0; ite1 < height; ite1++)
	{
		grid[ite1] = malloc(width * sizeof(int));
		if (grid[ite1] == NULL)
			return (NULL);

		for (ite2 = 0; ite2 < width; ite2++)
		{
			grid[ite1][ite2] = 0;
		}
	}
	return (grid);
}
