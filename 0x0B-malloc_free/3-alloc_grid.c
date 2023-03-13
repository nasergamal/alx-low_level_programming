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

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(height * sizeof(int *));
	if (s == NULL)
		return (s);
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] != NULL)
		{
			for (n = 0; n < width; n++)
				s[i][n] = 0;
		}
		else
		{
			for (; i >= 0; i--)
				free(s[i]);
			free(s);
			return (NULL);
		}
	}
	return (s);
}
