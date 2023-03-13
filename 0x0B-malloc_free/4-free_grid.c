#include <stdlib.h>

/**
 * free_grid - takes an array and free the allocated memory
 * @grid: array to be freed of its mem
 * @height: array height
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
