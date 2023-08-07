#include "main.h"

/**
 * alloc_grid -  aloc 2 dimensional array of integers.
 * @width: size of malloc
 * @height: number of mallocs
 *
 * Return: a pointer to new string or Null if str = NULL
 * or failed to alocate memory
 */

int **alloc_grid(int width, int height)
{
	int **grid = malloc(width * height < 0 ? 0 : sizeof(grid) * height);
	int h = height;

	if (width * height <= 0 || !grid)
		return (NULL);
	while (h--)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (!grid[h])
		{
			while (++h < height)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
	}
	while (width--)
	{
		for (h = 0; h < height; h++)
		{
			grid[h][width] = 0;
		}
	}

	return (grid);
}
