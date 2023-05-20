#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a two dimensional array
 * @width: checker
 * @height: checker
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b, c, d;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (d = 0; d < a; d++)
				free(grid[d]);
			free(grid);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			grid[b][c] = 0;
	}
	return (grid);
}
