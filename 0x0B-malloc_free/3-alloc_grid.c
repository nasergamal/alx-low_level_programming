#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2d array of 0s
 * @width: array width
 * @height: array height
 *
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **s, i, n;

	s = malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
		s[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			s[i][n] = 0;
	}
	return (s);
}
