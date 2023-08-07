#include "main.h"

/**
 * free_grid -  frees 2 dimensional array of integers.
 * @grid: apointer to array of pointers
 * @height: number of rows
 */

void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	while (height--)
	{
	free(grid[height]);
	}
	free(grid);
}
