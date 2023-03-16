#include <stdlib.h>

/**
 * array_range - create an array of integer within certain range
 * @min: array start
 * @max: array end
 *
 * Return: pointer to an array
 */

int *array_range(int min, int max)
{
	int i, m, n, *s;

	if (min > max)
		return (NULL);
	n = max - min;
	s = malloc((n + 1) * sizeof(int));
	if (s == NULL)
		return (s);
	for (m = 0, i = min; i <= max; i++, m++)
		s[m] = i;
	return (s);
}
