#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2 dimensional grid created by alloc_grid
 *
 * @grid: the grid created by alloc_grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
