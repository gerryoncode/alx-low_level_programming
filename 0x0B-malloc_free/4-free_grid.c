#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}