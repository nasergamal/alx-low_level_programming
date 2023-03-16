#include <stdlib.h>

/**
 * _calloc - allocate memory set to zero
 * @nmemb: number of elements
 * @size: sizeof(type)
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	char *c;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc((nmemb + 1) * size);
	if (s == NULL)
		return (s);
	c = s;
	for (i = 0; i <= nmemb; i++)
		c[i] = 0;
	return (s);
}
