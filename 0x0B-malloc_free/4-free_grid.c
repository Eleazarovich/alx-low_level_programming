#include "main.h"

/**
 * free_grid - frees allco_grid function
 * @grid: grid
 * @height: of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
